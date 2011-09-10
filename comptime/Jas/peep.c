/*===========================================================================*/
/*   (Jas/peep.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/peep.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_countzd2inszd2zzjas_peepz00(obj_t, obj_t);
	static obj_t BGl_removesequencez00zzjas_peepz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_peepz00 = BUNSPEC;
	static obj_t BGl_countzd2labzd2zzjas_peepz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_peepz00();
	extern obj_t BGl_nbpushz00zzjas_stackz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_collectz00zzjas_peepz00(obj_t, obj_t, obj_t, long);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_peepz00();
	static bool_t BGl_store2zf3zf3zzjas_peepz00(obj_t);
	static obj_t BGl_nocontzf3zf3zzjas_peepz00(obj_t);
	static obj_t BGl_simplematchz00zzjas_peepz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jaszd2peepholeza2zd2zzjas_peepz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_peepz00();
	static obj_t BGl_removebranchz00zzjas_peepz00(obj_t);
	static obj_t BGl_walkz00zzjas_peepz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static bool_t BGl_load2zf3zf3zzjas_peepz00(obj_t);
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_peepz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_stackz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_nbpopz00zzjas_stackz00(obj_t, obj_t);
	static long BGl_packlocalsz00zzjas_peepz00(obj_t, long, long, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_peepz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_zc3anonymousza31930ze3z83zzjas_peepz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_singlezd2labzf3z21zzjas_peepz00(obj_t);
	static obj_t BGl_zc3anonymousza33117ze3z83zzjas_peepz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00 = BUNSPEC;
	static bool_t BGl_loadzf3zf3zzjas_peepz00(obj_t);
	static obj_t BGl_walkzd2atzd2labz00zzjas_peepz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_walkzd2fromzd2zzjas_peepz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t make_vector(int, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static bool_t BGl_storezf3zf3zzjas_peepz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_peepz00zzjas_peepz00 = BUNSPEC;
	static bool_t BGl_hugezf3zf3zzjas_peepz00(obj_t);
	static obj_t BGl_keeplocalsz00zzjas_peepz00(obj_t, long, long, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_peepz00();
	static obj_t BGl_methodzd2initzd2zzjas_peepz00();
	static obj_t BGl_branchzf3zf3zzjas_peepz00(obj_t);
	static obj_t __cnst[9];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3239z00zzjas_peepz00,
		BgL_bgl_za7c3anonymousza7a313244z00,
		BGl_zc3anonymousza31930ze3z83zzjas_peepz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3240z00zzjas_peepz00,
		BgL_bgl_string3240za700za7za7j3245za7, "jas_peep", 8);
	      DEFINE_STRING(BGl_string3241z00zzjas_peepz00,
		BgL_bgl_string3241za700za7za7j3246za7,
		"done begin (4) (3) h dummy ok (198 199) (167 191) ", 50);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_peepz00(long
		BgL_checksumz00_2827, char *BgL_fromz00_2828)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_peepz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_peepz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_peepz00();
					BGl_cnstzd2initzd2zzjas_peepz00();
					BGl_importedzd2moduleszd2initz00zzjas_peepz00();
					BGl_toplevelzd2initzd2zzjas_peepz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_peepz00()
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_peep");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_peep");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_peep");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_peep");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_peepz00()
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 1 */
			{	/* Jas/peep.scm 1 */
				obj_t BgL_cportz00_2819;

				BgL_cportz00_2819 =
					bgl_open_input_string(BGl_string3241z00zzjas_peepz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2820;

					BgL_iz00_2820 = ((long) 8);
				BgL_loopz00_2821:
					if ((BgL_iz00_2820 == ((long) -1)))
						{	/* Jas/peep.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/peep.scm 1 */
							{	/* Jas/peep.scm 1 */
								obj_t BgL_arg3243z00_2823;

								{	/* Jas/peep.scm 1 */

									{	/* Jas/peep.scm 1 */
										obj_t BgL_locationz00_2825;

										BgL_locationz00_2825 = BBOOL(((bool_t) 0));
										{	/* Jas/peep.scm 1 */

											BgL_arg3243z00_2823 =
												BGl_readz00zz__readerz00(BgL_cportz00_2819,
												BgL_locationz00_2825);
										}
									}
								}
								{	/* Jas/peep.scm 1 */
									int BgL_auxz00_2846;

									BgL_auxz00_2846 = (int) (BgL_iz00_2820);
									CNST_TABLE_SET(BgL_auxz00_2846, BgL_arg3243z00_2823);
							}}
							{	/* Jas/peep.scm 1 */
								int BgL_auxz00_2826;

								BgL_auxz00_2826 = (int) ((BgL_iz00_2820 - ((long) 1)));
								{
									long BgL_iz00_2851;

									BgL_iz00_2851 = (long) (BgL_auxz00_2826);
									BgL_iz00_2820 = BgL_iz00_2851;
									goto BgL_loopz00_2821;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_peepz00()
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 1 */
			BGl_za2jaszd2peepholeza2zd2zzjas_peepz00 = BTRUE;
			BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00 =
				BINT(((long) 0));
			return (BGl_peepz00zzjas_peepz00 = BGl_proc3239z00zzjas_peepz00, BUNSPEC);
		}
	}



/* <anonymous:1930> */
	obj_t BGl_zc3anonymousza31930ze3z83zzjas_peepz00(obj_t BgL_envz00_2806,
		obj_t BgL_classfilez00_2807, obj_t BgL_paramz00_2808,
		obj_t BgL_localsz00_2809, obj_t BgL_codez00_2810)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 9 */
			{
				obj_t BgL_classfilez00_286;

				obj_t BgL_paramz00_287;

				obj_t BgL_localsz00_288;

				obj_t BgL_codez00_289;

				BgL_classfilez00_286 = BgL_classfilez00_2807;
				BgL_paramz00_287 = BgL_paramz00_2808;
				BgL_localsz00_288 = BgL_localsz00_2809;
				BgL_codez00_289 = BgL_codez00_2810;
				BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00 =
					BINT(
					(bgl_list_length(BgL_paramz00_287) +
						bgl_list_length(BgL_localsz00_288)));
				if (CBOOL(BGl_za2jaszd2peepholeza2zd2zzjas_peepz00))
					{	/* Jas/peep.scm 12 */
						obj_t BgL_c1z00_293;

						BgL_c1z00_293 =
							BGl_keeplocalsz00zzjas_peepz00(BgL_classfilez00_286,
							bgl_list_length(BgL_paramz00_287),
							bgl_list_length(BgL_localsz00_288), BgL_codez00_289);
						BGl_simplematchz00zzjas_peepz00(BgL_c1z00_293);
						BGl_packlocalsz00zzjas_peepz00(BgL_classfilez00_286,
							bgl_list_length(BgL_paramz00_287),
							bgl_list_length(BgL_localsz00_288), BgL_c1z00_293);
						BGl_removebranchz00zzjas_peepz00(BgL_c1z00_293);
						BGl_removesequencez00zzjas_peepz00(BgL_c1z00_293);
						return BgL_c1z00_293;
					}
				else
					{	/* Jas/peep.scm 11 */
						return BgL_codez00_289;
					}
			}
		}
	}



/* load? */
	bool_t BGl_loadzf3zf3zzjas_peepz00(obj_t BgL_insz00_1)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 21 */
			{	/* Jas/peep.scm 22 */
				obj_t BgL_opcodez00_298;

				BgL_opcodez00_298 = CAR(BgL_insz00_1);
				if (((long) CINT(BgL_opcodez00_298) >= ((long) 21)))
					{	/* Jas/peep.scm 23 */
						return ((long) CINT(BgL_opcodez00_298) <= ((long) 25));
					}
				else
					{	/* Jas/peep.scm 23 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* load2? */
	bool_t BGl_load2zf3zf3zzjas_peepz00(obj_t BgL_insz00_2)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 25 */
			{	/* Jas/peep.scm 26 */
				obj_t BgL_opcodez00_300;

				BgL_opcodez00_300 = CAR(BgL_insz00_2);
				{	/* Jas/peep.scm 27 */
					bool_t BgL__ortest_1909z00_301;

					BgL__ortest_1909z00_301 =
						((long) CINT(BgL_opcodez00_300) == ((long) 22));
					if (BgL__ortest_1909z00_301)
						{	/* Jas/peep.scm 27 */
							return BgL__ortest_1909z00_301;
						}
					else
						{	/* Jas/peep.scm 27 */
							return ((long) CINT(BgL_opcodez00_300) == ((long) 24));
		}}}}
	}



/* store? */
	bool_t BGl_storezf3zf3zzjas_peepz00(obj_t BgL_insz00_3)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 29 */
			{	/* Jas/peep.scm 30 */
				obj_t BgL_opcodez00_302;

				BgL_opcodez00_302 = CAR(BgL_insz00_3);
				if (((long) CINT(BgL_opcodez00_302) >= ((long) 54)))
					{	/* Jas/peep.scm 31 */
						return ((long) CINT(BgL_opcodez00_302) <= ((long) 58));
					}
				else
					{	/* Jas/peep.scm 31 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* store2? */
	bool_t BGl_store2zf3zf3zzjas_peepz00(obj_t BgL_insz00_4)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 33 */
			{	/* Jas/peep.scm 34 */
				obj_t BgL_opcodez00_304;

				BgL_opcodez00_304 = CAR(BgL_insz00_4);
				{	/* Jas/peep.scm 35 */
					bool_t BgL__ortest_1911z00_305;

					BgL__ortest_1911z00_305 =
						((long) CINT(BgL_opcodez00_304) == ((long) 55));
					if (BgL__ortest_1911z00_305)
						{	/* Jas/peep.scm 35 */
							return BgL__ortest_1911z00_305;
						}
					else
						{	/* Jas/peep.scm 35 */
							return ((long) CINT(BgL_opcodez00_304) == ((long) 57));
		}}}}
	}



/* nocont? */
	obj_t BGl_nocontzf3zf3zzjas_peepz00(obj_t BgL_insz00_8)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 49 */
			{	/* Jas/peep.scm 50 */
				obj_t BgL_opcodez00_309;

				BgL_opcodez00_309 = CAR(BgL_insz00_8);
				{	/* Jas/peep.scm 51 */
					bool_t BgL_testz00_2894;

					if (((long) CINT(BgL_opcodez00_309) >= ((long) 169)))
						{	/* Jas/peep.scm 51 */
							BgL_testz00_2894 =
								((long) CINT(BgL_opcodez00_309) <= ((long) 177));
						}
					else
						{	/* Jas/peep.scm 51 */
							BgL_testz00_2894 = ((bool_t) 0);
						}
					if (BgL_testz00_2894)
						{	/* Jas/peep.scm 51 */
							return BTRUE;
						}
					else
						{	/* Jas/peep.scm 51 */
							return
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_opcodez00_309,
								CNST_TABLE_REF(((long) 0)));
		}}}}
	}



/* huge? */
	bool_t BGl_hugezf3zf3zzjas_peepz00(obj_t BgL_insz00_9)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 55 */
			{	/* Jas/peep.scm 56 */
				obj_t BgL_opcodez00_312;

				BgL_opcodez00_312 = CAR(BgL_insz00_9);
				{	/* Jas/peep.scm 57 */
					bool_t BgL__ortest_1912z00_313;

					BgL__ortest_1912z00_313 =
						((long) CINT(BgL_opcodez00_312) == ((long) 170));
					if (BgL__ortest_1912z00_313)
						{	/* Jas/peep.scm 57 */
							return BgL__ortest_1912z00_313;
						}
					else
						{	/* Jas/peep.scm 57 */
							return ((long) CINT(BgL_opcodez00_312) == ((long) 171));
		}}}}
	}



/* single-lab? */
	obj_t BGl_singlezd2labzf3z21zzjas_peepz00(obj_t BgL_insz00_10)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 59 */
			{	/* Jas/peep.scm 60 */
				obj_t BgL_opcodez00_314;

				BgL_opcodez00_314 = CAR(BgL_insz00_10);
				{	/* Jas/peep.scm 61 */
					bool_t BgL_testz00_2909;

					if (((long) CINT(BgL_opcodez00_314) >= ((long) 153)))
						{	/* Jas/peep.scm 61 */
							BgL_testz00_2909 =
								((long) CINT(BgL_opcodez00_314) <= ((long) 168));
						}
					else
						{	/* Jas/peep.scm 61 */
							BgL_testz00_2909 = ((bool_t) 0);
						}
					if (BgL_testz00_2909)
						{	/* Jas/peep.scm 61 */
							return BTRUE;
						}
					else
						{	/* Jas/peep.scm 61 */
							return
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_opcodez00_314,
								CNST_TABLE_REF(((long) 1)));
		}}}}
	}



/* branch? */
	obj_t BGl_branchzf3zf3zzjas_peepz00(obj_t BgL_insz00_11)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 65 */
			{	/* Jas/peep.scm 66 */
				obj_t BgL_opcodez00_317;

				BgL_opcodez00_317 = CAR(BgL_insz00_11);
				{	/* Jas/peep.scm 67 */
					bool_t BgL_testz00_2918;

					if (((long) CINT(BgL_opcodez00_317) >= ((long) 153)))
						{	/* Jas/peep.scm 67 */
							BgL_testz00_2918 =
								((long) CINT(BgL_opcodez00_317) <= ((long) 171));
						}
					else
						{	/* Jas/peep.scm 67 */
							BgL_testz00_2918 = ((bool_t) 0);
						}
					if (BgL_testz00_2918)
						{	/* Jas/peep.scm 67 */
							return BTRUE;
						}
					else
						{	/* Jas/peep.scm 67 */
							return
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_opcodez00_317,
								CNST_TABLE_REF(((long) 1)));
		}}}}
	}



/* keeplocals */
	obj_t BGl_keeplocalsz00zzjas_peepz00(obj_t BgL_classfilez00_12,
		long BgL_nparamz00_13, long BgL_nlocalsz00_14, obj_t BgL_codez00_15)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 74 */
			{	/* Jas/peep.scm 75 */
				long BgL_nz00_320;

				BgL_nz00_320 = (BgL_nparamz00_13 + BgL_nlocalsz00_14);
				{	/* Jas/peep.scm 75 */
					obj_t BgL_wz00_321;

					BgL_wz00_321 = make_vector((int) (BgL_nz00_320), BINT(((long) 0)));
					{	/* Jas/peep.scm 76 */
						obj_t BgL_rz00_322;

						BgL_rz00_322 = make_vector((int) (BgL_nz00_320), BINT(((long) 0)));
						{	/* Jas/peep.scm 77 */
							obj_t BgL_candidatez00_323;

							BgL_candidatez00_323 = make_vector((int) (BgL_nz00_320), BTRUE);
							{	/* Jas/peep.scm 78 */

								{
									obj_t BgL_pz00_403;

									obj_t BgL_lz00_404;

									obj_t BgL_pz00_391;

									obj_t BgL_lz00_392;

									obj_t BgL_vz00_371;

									obj_t BgL_pz00_372;

									obj_t BgL_lz00_373;

									long BgL_spz00_374;

									long BgL_iz00_361;

									obj_t BgL_insz00_350;

									long BgL_iz00_340;

									BgL_iz00_340 = ((long) 0);
								BgL_zc3anonymousza31951ze3z83_341:
									if ((BgL_iz00_340 < BgL_nparamz00_13))
										{	/* Jas/peep.scm 80 */
											VECTOR_SET(BgL_wz00_321,
												(int) (BgL_iz00_340), BINT(((long) 1)));
											{
												long BgL_iz00_2940;

												BgL_iz00_2940 = (BgL_iz00_340 + ((long) 1));
												BgL_iz00_340 = BgL_iz00_2940;
												goto BgL_zc3anonymousza31951ze3z83_341;
											}
										}
									else
										{	/* Jas/peep.scm 80 */
											CNST_TABLE_REF(((long) 2));
										}
									{
										obj_t BgL_l1915z00_332;

										BgL_l1915z00_332 = BgL_codez00_15;
									BgL_zc3anonymousza31947ze3z83_333:
										if (PAIRP(BgL_l1915z00_332))
											{	/* Jas/peep.scm 132 */
												{	/* Jas/peep.scm 132 */
													obj_t BgL_xz00_335;

													BgL_xz00_335 = CAR(BgL_l1915z00_332);
													if (PAIRP(BgL_xz00_335))
														{	/* Jas/peep.scm 132 */
															BgL_insz00_350 = BgL_xz00_335;
															if (BGl_loadzf3zf3zzjas_peepz00(BgL_insz00_350))
																{	/* Jas/peep.scm 85 */
																	obj_t BgL_arg1967z00_353;

																	BgL_arg1967z00_353 = CAR(CDR(BgL_insz00_350));
																	{	/* Jas/peep.scm 85 */
																		long BgL_arg1957z00_1614;

																		{	/* Jas/peep.scm 85 */
																			obj_t BgL_arg1962z00_1616;

																			BgL_arg1962z00_1616 =
																				VECTOR_REF(BgL_rz00_322,
																				CINT(BgL_arg1967z00_353));
																			BgL_arg1957z00_1614 =
																				(((long) 1) +
																				(long) CINT(BgL_arg1962z00_1616));
																		}
																		VECTOR_SET(BgL_rz00_322,
																			CINT(BgL_arg1967z00_353),
																			BINT(BgL_arg1957z00_1614));
																}}
															else
																{	/* Jas/peep.scm 85 */
																	if (BGl_storezf3zf3zzjas_peepz00
																		(BgL_insz00_350))
																		{	/* Jas/peep.scm 86 */
																			obj_t BgL_arg1976z00_355;

																			BgL_arg1976z00_355 =
																				CAR(CDR(BgL_insz00_350));
																			{	/* Jas/peep.scm 86 */
																				long BgL_arg1957z00_1630;

																				{	/* Jas/peep.scm 86 */
																					obj_t BgL_arg1962z00_1632;

																					BgL_arg1962z00_1632 =
																						VECTOR_REF(BgL_wz00_321,
																						CINT(BgL_arg1976z00_355));
																					BgL_arg1957z00_1630 =
																						(((long) 1) +
																						(long) CINT(BgL_arg1962z00_1632));
																				}
																				VECTOR_SET(BgL_wz00_321,
																					CINT(BgL_arg1976z00_355),
																					BINT(BgL_arg1957z00_1630));
																		}}
																	else
																		{	/* Jas/peep.scm 86 */
																			if (
																				((long) CINT(CAR(BgL_insz00_350)) ==
																					((long) 169)))
																				{	/* Jas/peep.scm 87 */
																					obj_t BgL_arg1984z00_357;

																					BgL_arg1984z00_357 =
																						CAR(CDR(BgL_insz00_350));
																					{	/* Jas/peep.scm 87 */
																						long BgL_arg1957z00_1651;

																						{	/* Jas/peep.scm 87 */
																							obj_t BgL_arg1962z00_1653;

																							BgL_arg1962z00_1653 =
																								VECTOR_REF(BgL_rz00_322,
																								CINT(BgL_arg1984z00_357));
																							BgL_arg1957z00_1651 =
																								(((long) 1) +
																								(long)
																								CINT(BgL_arg1962z00_1653));
																						}
																						VECTOR_SET(BgL_rz00_322,
																							CINT(BgL_arg1984z00_357),
																							BINT(BgL_arg1957z00_1651));
																				}}
																			else
																				{	/* Jas/peep.scm 87 */
																					if (
																						((long) CINT(CAR(BgL_insz00_350)) ==
																							((long) 132)))
																						{	/* Jas/peep.scm 88 */
																							{	/* Jas/peep.scm 89 */
																								obj_t BgL_arg1987z00_359;

																								BgL_arg1987z00_359 =
																									CAR(CDR(BgL_insz00_350));
																								{	/* Jas/peep.scm 89 */
																									long BgL_arg1957z00_1672;

																									{	/* Jas/peep.scm 89 */
																										obj_t BgL_arg1962z00_1674;

																										BgL_arg1962z00_1674 =
																											VECTOR_REF(BgL_wz00_321,
																											CINT(BgL_arg1987z00_359));
																										BgL_arg1957z00_1672 =
																											(((long) 1) +
																											(long)
																											CINT
																											(BgL_arg1962z00_1674));
																									}
																									VECTOR_SET(BgL_wz00_321,
																										CINT(BgL_arg1987z00_359),
																										BINT(BgL_arg1957z00_1672));
																							}}
																							{	/* Jas/peep.scm 90 */
																								obj_t BgL_arg1988z00_360;

																								BgL_arg1988z00_360 =
																									CAR(CDR(BgL_insz00_350));
																								{	/* Jas/peep.scm 90 */
																									long BgL_arg1957z00_1688;

																									{	/* Jas/peep.scm 90 */
																										obj_t BgL_arg1962z00_1690;

																										BgL_arg1962z00_1690 =
																											VECTOR_REF(BgL_rz00_322,
																											CINT(BgL_arg1988z00_360));
																										BgL_arg1957z00_1688 =
																											(((long) 1) +
																											(long)
																											CINT
																											(BgL_arg1962z00_1690));
																									}
																									VECTOR_SET(BgL_rz00_322,
																										CINT(BgL_arg1988z00_360),
																										BINT(BgL_arg1957z00_1688));
																						}}}
																					else
																						{	/* Jas/peep.scm 88 */
																							BFALSE;
																						}
																				}
																		}
																}
														}
													else
														{	/* Jas/peep.scm 132 */
															BFALSE;
														}
												}
												{
													obj_t BgL_l1915z00_3005;

													BgL_l1915z00_3005 = CDR(BgL_l1915z00_332);
													BgL_l1915z00_332 = BgL_l1915z00_3005;
													goto BgL_zc3anonymousza31947ze3z83_333;
												}
											}
										else
											{	/* Jas/peep.scm 132 */
												((bool_t) 1);
											}
									}
									BgL_iz00_361 = ((long) 0);
								BgL_zc3anonymousza31989ze3z83_362:
									if ((BgL_iz00_361 < BgL_nz00_320))
										{	/* Jas/peep.scm 92 */
											{	/* Jas/peep.scm 95 */
												bool_t BgL_arg1991z00_364;

												{	/* Jas/peep.scm 95 */
													bool_t BgL_testz00_3009;

													{	/* Jas/peep.scm 95 */
														obj_t BgL_arg1994z00_368;

														BgL_arg1994z00_368 =
															VECTOR_REF(BgL_wz00_321, (int) (BgL_iz00_361));
														BgL_testz00_3009 =
															((long) CINT(BgL_arg1994z00_368) == ((long) 1));
													}
													if (BgL_testz00_3009)
														{	/* Jas/peep.scm 96 */
															obj_t BgL_arg1992z00_366;

															BgL_arg1992z00_366 =
																VECTOR_REF(BgL_rz00_322, (int) (BgL_iz00_361));
															BgL_arg1991z00_364 =
																((long) CINT(BgL_arg1992z00_366) == ((long) 1));
														}
													else
														{	/* Jas/peep.scm 95 */
															BgL_arg1991z00_364 = ((bool_t) 0);
														}
												}
												VECTOR_SET(BgL_candidatez00_323,
													(int) (BgL_iz00_361), BBOOL(BgL_arg1991z00_364));
											}
											{
												long BgL_iz00_3021;

												BgL_iz00_3021 = (BgL_iz00_361 + ((long) 1));
												BgL_iz00_361 = BgL_iz00_3021;
												goto BgL_zc3anonymousza31989ze3z83_362;
											}
										}
									else
										{	/* Jas/peep.scm 92 */
											CNST_TABLE_REF(((long) 2));
										}
									{	/* Jas/peep.scm 134 */
										obj_t BgL_hookz00_339;

										BgL_hookz00_339 =
											MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BgL_codez00_15);
										BgL_pz00_403 = BgL_hookz00_339;
										BgL_lz00_404 = BgL_codez00_15;
									BgL_zc3anonymousza32032ze3z83_405:
										if (NULLP(BgL_lz00_404))
											{	/* Jas/peep.scm 127 */
												CNST_TABLE_REF(((long) 2));
											}
										else
											{	/* Jas/peep.scm 128 */
												bool_t BgL_testz00_3029;

												{	/* Jas/peep.scm 128 */
													obj_t BgL_auxz00_3030;

													BgL_auxz00_3030 = CAR(BgL_lz00_404);
													BgL_testz00_3029 = SYMBOLP(BgL_auxz00_3030);
												}
												if (BgL_testz00_3029)
													{
														obj_t BgL_lz00_3034;

														obj_t BgL_pz00_3033;

														BgL_pz00_3033 = BgL_lz00_404;
														BgL_lz00_3034 = CDR(BgL_lz00_404);
														BgL_lz00_404 = BgL_lz00_3034;
														BgL_pz00_403 = BgL_pz00_3033;
														goto BgL_zc3anonymousza32032ze3z83_405;
													}
												else
													{	/* Jas/peep.scm 129 */
														bool_t BgL_testz00_3036;

														BgL_pz00_391 = BgL_pz00_403;
														BgL_lz00_392 = BgL_lz00_404;
														{	/* Jas/peep.scm 113 */
															obj_t BgL_insz00_394;

															BgL_insz00_394 = CAR(BgL_lz00_392);
															if (BGl_storezf3zf3zzjas_peepz00(BgL_insz00_394))
																{	/* Jas/peep.scm 115 */
																	obj_t BgL_vz00_396;

																	{	/* Jas/peep.scm 115 */
																		obj_t BgL_pairz00_1733;

																		BgL_pairz00_1733 = BgL_insz00_394;
																		BgL_vz00_396 = CAR(CDR(BgL_pairz00_1733));
																	}
																	{	/* Jas/peep.scm 116 */
																		bool_t BgL_testz00_3042;

																		{	/* Jas/peep.scm 116 */
																			int BgL_kz00_1738;

																			BgL_kz00_1738 = CINT(BgL_vz00_396);
																			BgL_testz00_3042 =
																				CBOOL(VECTOR_REF(BgL_candidatez00_323,
																					BgL_kz00_1738));
																		}
																		if (BgL_testz00_3042)
																			{	/* Jas/peep.scm 117 */
																				obj_t BgL_ppz00_398;

																				BgL_vz00_371 = BgL_vz00_396;
																				BgL_pz00_372 = BgL_lz00_392;
																				BgL_lz00_373 = CDR(BgL_lz00_392);
																				BgL_spz00_374 = ((long) 0);
																			BgL_zc3anonymousza31997ze3z83_375:
																				{	/* Jas/peep.scm 100 */
																					bool_t BgL_testz00_3046;

																					if (NULLP(BgL_lz00_373))
																						{	/* Jas/peep.scm 100 */
																							BgL_testz00_3046 = ((bool_t) 1);
																						}
																					else
																						{	/* Jas/peep.scm 100 */
																							obj_t BgL_auxz00_3049;

																							BgL_auxz00_3049 =
																								CAR(BgL_lz00_373);
																							BgL_testz00_3046 =
																								SYMBOLP(BgL_auxz00_3049);
																						}
																					if (BgL_testz00_3046)
																						{	/* Jas/peep.scm 100 */
																							BgL_ppz00_398 = BFALSE;
																						}
																					else
																						{	/* Jas/peep.scm 102 */
																							obj_t BgL_insz00_377;

																							BgL_insz00_377 =
																								CAR(BgL_lz00_373);
																							{	/* Jas/peep.scm 103 */
																								bool_t BgL_testz00_3053;

																								if (BGl_loadzf3zf3zzjas_peepz00
																									(BgL_insz00_377))
																									{	/* Jas/peep.scm 103 */
																										long BgL_auxz00_3056;

																										{	/* Jas/peep.scm 103 */
																											obj_t BgL_pairz00_1717;

																											BgL_pairz00_1717 =
																												BgL_insz00_377;
																											{	/* Jas/peep.scm 103 */
																												obj_t BgL_pairz00_1720;

																												BgL_pairz00_1720 =
																													CDR(BgL_pairz00_1717);
																												BgL_auxz00_3056 =
																													(long)
																													CINT(CAR
																													(BgL_pairz00_1720));
																										}}
																										BgL_testz00_3053 =
																											(BgL_auxz00_3056 ==
																											(long)
																											CINT(BgL_vz00_371));
																									}
																								else
																									{	/* Jas/peep.scm 103 */
																										BgL_testz00_3053 =
																											((bool_t) 0);
																									}
																								if (BgL_testz00_3053)
																									{	/* Jas/peep.scm 103 */
																										if (
																											(BgL_spz00_374 ==
																												((long) 0)))
																											{	/* Jas/peep.scm 104 */
																												BgL_ppz00_398 =
																													BgL_pz00_372;
																											}
																										else
																											{	/* Jas/peep.scm 104 */
																												BgL_ppz00_398 = BFALSE;
																											}
																									}
																								else
																									{	/* Jas/peep.scm 105 */
																										long BgL_downz00_380;

																										{	/* Jas/peep.scm 105 */
																											obj_t BgL_arg2005z00_386;

																											BgL_arg2005z00_386 =
																												BGl_nbpopz00zzjas_stackz00
																												(BgL_classfilez00_12,
																												BgL_insz00_377);
																											BgL_downz00_380 =
																												(BgL_spz00_374 -
																												(long)
																												CINT
																												(BgL_arg2005z00_386));
																										}
																										{	/* Jas/peep.scm 105 */
																											long BgL_upz00_381;

																											{	/* Jas/peep.scm 106 */
																												obj_t
																													BgL_arg2004z00_385;
																												BgL_arg2004z00_385 =
																													BGl_nbpushz00zzjas_stackz00
																													(BgL_classfilez00_12,
																													BgL_insz00_377);
																												BgL_upz00_381 =
																													(BgL_downz00_380 +
																													(long)
																													CINT
																													(BgL_arg2004z00_385));
																											}
																											{	/* Jas/peep.scm 106 */

																												if (
																													(BgL_downz00_380 <
																														((long) 0)))
																													{	/* Jas/peep.scm 107 */
																														BgL_ppz00_398 =
																															BFALSE;
																													}
																												else
																													{	/* Jas/peep.scm 107 */
																														if (CBOOL
																															(BGl_branchzf3zf3zzjas_peepz00
																																(BgL_insz00_377)))
																															{	/* Jas/peep.scm 109 */
																																BgL_ppz00_398 =
																																	BFALSE;
																															}
																														else
																															{
																																long
																																	BgL_spz00_3078;
																																obj_t
																																	BgL_lz00_3076;
																																obj_t
																																	BgL_pz00_3075;
																																BgL_pz00_3075 =
																																	BgL_lz00_373;
																																BgL_lz00_3076 =
																																	CDR
																																	(BgL_lz00_373);
																																BgL_spz00_3078 =
																																	BgL_upz00_381;
																																BgL_spz00_374 =
																																	BgL_spz00_3078;
																																BgL_lz00_373 =
																																	BgL_lz00_3076;
																																BgL_pz00_372 =
																																	BgL_pz00_3075;
																																goto
																																	BgL_zc3anonymousza31997ze3z83_375;
																															}
																													}
																											}
																										}
																									}
																							}
																						}
																				}
																				if (CBOOL(BgL_ppz00_398))
																					{	/* Jas/peep.scm 118 */
																						{	/* Jas/peep.scm 120 */
																							obj_t BgL_arg2027z00_399;

																							{	/* Jas/peep.scm 120 */
																								obj_t BgL_pairz00_1740;

																								BgL_pairz00_1740 =
																									BgL_ppz00_398;
																								BgL_arg2027z00_399 =
																									CDR(CDR(BgL_pairz00_1740));
																							}
																							SET_CDR(BgL_ppz00_398,
																								BgL_arg2027z00_399);
																						}
																						{	/* Jas/peep.scm 121 */
																							obj_t BgL_auxz00_3085;

																							BgL_auxz00_3085 =
																								CDR(BgL_lz00_392);
																							SET_CDR(BgL_pz00_391,
																								BgL_auxz00_3085);
																						}
																						BgL_testz00_3036 = ((bool_t) 1);
																					}
																				else
																					{	/* Jas/peep.scm 118 */
																						BgL_testz00_3036 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Jas/peep.scm 116 */
																				BgL_testz00_3036 = ((bool_t) 0);
																			}
																	}
																}
															else
																{	/* Jas/peep.scm 114 */
																	BgL_testz00_3036 = ((bool_t) 0);
																}
														}
														if (BgL_testz00_3036)
															{
																obj_t BgL_lz00_3088;

																BgL_lz00_3088 = CDR(BgL_pz00_403);
																BgL_lz00_404 = BgL_lz00_3088;
																goto BgL_zc3anonymousza32032ze3z83_405;
															}
														else
															{
																obj_t BgL_lz00_3091;

																obj_t BgL_pz00_3090;

																BgL_pz00_3090 = BgL_lz00_404;
																BgL_lz00_3091 = CDR(BgL_lz00_404);
																BgL_lz00_404 = BgL_lz00_3091;
																BgL_pz00_403 = BgL_pz00_3090;
																goto BgL_zc3anonymousza32032ze3z83_405;
															}
													}
											}
										return CDR(BgL_hookz00_339);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* packlocals */
	long BGl_packlocalsz00zzjas_peepz00(obj_t BgL_classfilez00_16,
		long BgL_nparamz00_17, long BgL_nlocalsz00_18, obj_t BgL_codez00_19)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 141 */
			{	/* Jas/peep.scm 142 */
				long BgL_nz00_420;

				BgL_nz00_420 = (BgL_nparamz00_17 + BgL_nlocalsz00_18);
				{	/* Jas/peep.scm 142 */
					obj_t BgL_accessz00_421;

					BgL_accessz00_421 = make_vector((int) (BgL_nz00_420), BFALSE);
					{	/* Jas/peep.scm 143 */
						obj_t BgL_mappingz00_422;

						BgL_mappingz00_422 =
							make_vector((int) (BgL_nz00_420), BINT(((long) 0)));
						{	/* Jas/peep.scm 144 */

							{
								obj_t BgL_lz00_478;

								obj_t BgL_insz00_461;

								long BgL_freez00_453;

								long BgL_iz00_454;

								obj_t BgL_insz00_441;

								long BgL_iz00_437;

								BgL_iz00_437 = ((long) 0);
							BgL_zc3anonymousza32071ze3z83_438:
								if ((BgL_iz00_437 < BgL_nparamz00_17))
									{	/* Jas/peep.scm 146 */
										VECTOR_SET(BgL_accessz00_421, (int) (BgL_iz00_437), BTRUE);
										{
											long BgL_iz00_3104;

											BgL_iz00_3104 = (BgL_iz00_437 + ((long) 1));
											BgL_iz00_437 = BgL_iz00_3104;
											goto BgL_zc3anonymousza32071ze3z83_438;
										}
									}
								else
									{	/* Jas/peep.scm 146 */
										CNST_TABLE_REF(((long) 2));
									}
								{
									obj_t BgL_l1917z00_429;

									BgL_l1917z00_429 = BgL_codez00_19;
								BgL_zc3anonymousza32052ze3z83_430:
									if (PAIRP(BgL_l1917z00_429))
										{	/* Jas/peep.scm 181 */
											{	/* Jas/peep.scm 181 */
												obj_t BgL_xz00_432;

												BgL_xz00_432 = CAR(BgL_l1917z00_429);
												if (PAIRP(BgL_xz00_432))
													{	/* Jas/peep.scm 181 */
														BgL_insz00_441 = BgL_xz00_432;
														{	/* Jas/peep.scm 150 */
															bool_t BgL_testz00_3112;

															if (BGl_loadzf3zf3zzjas_peepz00(BgL_insz00_441))
																{	/* Jas/peep.scm 150 */
																	BgL_testz00_3112 = ((bool_t) 1);
																}
															else
																{	/* Jas/peep.scm 150 */
																	if (BGl_storezf3zf3zzjas_peepz00
																		(BgL_insz00_441))
																		{	/* Jas/peep.scm 150 */
																			BgL_testz00_3112 = ((bool_t) 1);
																		}
																	else
																		{	/* Jas/peep.scm 150 */
																			if (
																				((long) CINT(CAR(BgL_insz00_441)) ==
																					((long) 169)))
																				{	/* Jas/peep.scm 150 */
																					BgL_testz00_3112 = ((bool_t) 1);
																				}
																			else
																				{	/* Jas/peep.scm 150 */
																					BgL_testz00_3112 =
																						(
																						(long) CINT(CAR(BgL_insz00_441)) ==
																						((long) 132));
																}}}
															if (BgL_testz00_3112)
																{	/* Jas/peep.scm 150 */
																	{	/* Jas/peep.scm 152 */
																		obj_t BgL_arg2125z00_444;

																		BgL_arg2125z00_444 =
																			CAR(CDR(BgL_insz00_441));
																		VECTOR_SET(BgL_accessz00_421,
																			CINT(BgL_arg2125z00_444), BTRUE);
																	}
																	{	/* Jas/peep.scm 153 */
																		bool_t BgL_testz00_3128;

																		if (BGl_load2zf3zf3zzjas_peepz00
																			(BgL_insz00_441))
																			{	/* Jas/peep.scm 153 */
																				BgL_testz00_3128 = ((bool_t) 1);
																			}
																		else
																			{	/* Jas/peep.scm 153 */
																				BgL_testz00_3128 =
																					BGl_store2zf3zf3zzjas_peepz00
																					(BgL_insz00_441);
																			}
																		if (BgL_testz00_3128)
																			{	/* Jas/peep.scm 154 */
																				long BgL_arg2127z00_446;

																				{	/* Jas/peep.scm 154 */
																					long BgL_auxz00_3132;

																					{	/* Jas/peep.scm 154 */
																						obj_t BgL_pairz00_1788;

																						BgL_pairz00_1788 =
																							CDR(BgL_insz00_441);
																						BgL_auxz00_3132 =
																							(long)
																							CINT(CAR(BgL_pairz00_1788));
																					}
																					BgL_arg2127z00_446 =
																						(BgL_auxz00_3132 + ((long) 1));
																				}
																				VECTOR_SET(BgL_accessz00_421,
																					(int) (BgL_arg2127z00_446), BTRUE);
																			}
																		else
																			{	/* Jas/peep.scm 153 */
																				BFALSE;
																			}
																	}
																}
															else
																{	/* Jas/peep.scm 150 */
																	BFALSE;
																}
														}
													}
												else
													{	/* Jas/peep.scm 181 */
														BFALSE;
													}
											}
											{
												obj_t BgL_l1917z00_3139;

												BgL_l1917z00_3139 = CDR(BgL_l1917z00_429);
												BgL_l1917z00_429 = BgL_l1917z00_3139;
												goto BgL_zc3anonymousza32052ze3z83_430;
											}
										}
									else
										{	/* Jas/peep.scm 181 */
											((bool_t) 1);
										}
								}
								{	/* Jas/peep.scm 182 */
									long BgL_reallyzd2usedzd2_436;

									BgL_freez00_453 = ((long) 0);
									BgL_iz00_454 = ((long) 0);
								BgL_zc3anonymousza32148ze3z83_455:
									if ((BgL_iz00_454 < BgL_nz00_420))
										{	/* Jas/peep.scm 157 */
											bool_t BgL_testz00_3143;

											{	/* Jas/peep.scm 157 */
												int BgL_kz00_1797;

												BgL_kz00_1797 = (int) (BgL_iz00_454);
												BgL_testz00_3143 =
													CBOOL(VECTOR_REF(BgL_accessz00_421, BgL_kz00_1797));
											}
											if (BgL_testz00_3143)
												{	/* Jas/peep.scm 157 */
													VECTOR_SET(BgL_mappingz00_422,
														(int) (BgL_iz00_454), BINT(BgL_freez00_453));
													{
														long BgL_iz00_3152;

														long BgL_freez00_3150;

														BgL_freez00_3150 = (BgL_freez00_453 + ((long) 1));
														BgL_iz00_3152 = (BgL_iz00_454 + ((long) 1));
														BgL_iz00_454 = BgL_iz00_3152;
														BgL_freez00_453 = BgL_freez00_3150;
														goto BgL_zc3anonymousza32148ze3z83_455;
													}
												}
											else
												{	/* Jas/peep.scm 157 */
													VECTOR_SET(BgL_mappingz00_422,
														(int) (BgL_iz00_454), BINT(((long) -1)));
													{
														long BgL_iz00_3157;

														BgL_iz00_3157 = (BgL_iz00_454 + ((long) 1));
														BgL_iz00_454 = BgL_iz00_3157;
														goto BgL_zc3anonymousza32148ze3z83_455;
													}
												}
										}
									else
										{	/* Jas/peep.scm 156 */
											BgL_reallyzd2usedzd2_436 = BgL_freez00_453;
										}
									BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00 =
										BINT(BgL_reallyzd2usedzd2_436);
									BgL_lz00_478 = BgL_codez00_19;
								BgL_zc3anonymousza32202ze3z83_479:
									if (NULLP(BgL_lz00_478))
										{	/* Jas/peep.scm 176 */
											CNST_TABLE_REF(((long) 2));
										}
									else
										{	/* Jas/peep.scm 177 */
											bool_t BgL_testz00_3163;

											{	/* Jas/peep.scm 177 */
												obj_t BgL_auxz00_3164;

												BgL_auxz00_3164 = CAR(BgL_lz00_478);
												BgL_testz00_3163 = SYMBOLP(BgL_auxz00_3164);
											}
											if (BgL_testz00_3163)
												{
													obj_t BgL_lz00_3167;

													BgL_lz00_3167 = CDR(BgL_lz00_478);
													BgL_lz00_478 = BgL_lz00_3167;
													goto BgL_zc3anonymousza32202ze3z83_479;
												}
											else
												{	/* Jas/peep.scm 177 */
													BgL_insz00_461 = CAR(BgL_lz00_478);
													{	/* Jas/peep.scm 167 */
														bool_t BgL_testz00_3169;

														if (BGl_loadzf3zf3zzjas_peepz00(BgL_insz00_461))
															{	/* Jas/peep.scm 167 */
																BgL_testz00_3169 = ((bool_t) 1);
															}
														else
															{	/* Jas/peep.scm 167 */
																if (BGl_storezf3zf3zzjas_peepz00
																	(BgL_insz00_461))
																	{	/* Jas/peep.scm 167 */
																		BgL_testz00_3169 = ((bool_t) 1);
																	}
																else
																	{	/* Jas/peep.scm 167 */
																		bool_t BgL_testz00_3174;

																		{	/* Jas/peep.scm 167 */
																			long BgL_auxz00_3175;

																			{	/* Jas/peep.scm 167 */
																				obj_t BgL_pairz00_1812;

																				BgL_pairz00_1812 = BgL_insz00_461;
																				BgL_auxz00_3175 =
																					(long) CINT(CAR(BgL_pairz00_1812));
																			}
																			BgL_testz00_3174 =
																				(BgL_auxz00_3175 == ((long) 169));
																		}
																		if (BgL_testz00_3174)
																			{	/* Jas/peep.scm 167 */
																				BgL_testz00_3169 = ((bool_t) 1);
																			}
																		else
																			{	/* Jas/peep.scm 167 */
																				long BgL_auxz00_3179;

																				{	/* Jas/peep.scm 167 */
																					obj_t BgL_pairz00_1817;

																					BgL_pairz00_1817 = BgL_insz00_461;
																					BgL_auxz00_3179 =
																						(long) CINT(CAR(BgL_pairz00_1817));
																				}
																				BgL_testz00_3169 =
																					(BgL_auxz00_3179 == ((long) 132));
															}}}
														if (BgL_testz00_3169)
															{	/* Jas/peep.scm 168 */
																obj_t BgL_arg2165z00_464;

																obj_t BgL_arg2172z00_465;

																BgL_arg2165z00_464 = CDR(BgL_insz00_461);
																{	/* Jas/peep.scm 168 */
																	obj_t BgL_arg2178z00_466;

																	{	/* Jas/peep.scm 168 */
																		obj_t BgL_pairz00_1821;

																		BgL_pairz00_1821 = BgL_insz00_461;
																		BgL_arg2178z00_466 =
																			CAR(CDR(BgL_pairz00_1821));
																	}
																	BgL_arg2172z00_465 =
																		VECTOR_REF(BgL_mappingz00_422,
																		CINT(BgL_arg2178z00_466));
																}
																SET_CAR(BgL_arg2165z00_464, BgL_arg2172z00_465);
															}
														else
															{	/* Jas/peep.scm 167 */
																if ((CAR(BgL_insz00_461) == BINT(((long) 205))))
																	{	/* Jas/peep.scm 170 */
																		obj_t BgL_adrz00_468;

																		{	/* Jas/peep.scm 170 */
																			obj_t BgL_pairz00_1838;

																			{	/* Jas/peep.scm 170 */
																				obj_t BgL_pairz00_1830;

																				BgL_pairz00_1830 = BgL_insz00_461;
																				BgL_pairz00_1838 =
																					CDR(CDR(CDR(CDR(BgL_pairz00_1830))));
																			}
																			BgL_adrz00_468 = CDR(BgL_pairz00_1838);
																		}
																		{	/* Jas/peep.scm 171 */
																			obj_t BgL_ivarz00_469;

																			BgL_ivarz00_469 = CAR(BgL_adrz00_468);
																			{	/* Jas/peep.scm 172 */
																				bool_t BgL_testz00_3199;

																				{	/* Jas/peep.scm 172 */
																					int BgL_kz00_1841;

																					BgL_kz00_1841 = CINT(BgL_ivarz00_469);
																					BgL_testz00_3199 =
																						CBOOL(VECTOR_REF(BgL_accessz00_421,
																							BgL_kz00_1841));
																				}
																				if (BgL_testz00_3199)
																					{	/* Jas/peep.scm 173 */
																						obj_t BgL_auxz00_3203;

																						BgL_auxz00_3203 =
																							VECTOR_REF(BgL_mappingz00_422,
																							CINT(BgL_ivarz00_469));
																						SET_CAR(BgL_adrz00_468,
																							BgL_auxz00_3203);
																					}
																				else
																					{	/* Jas/peep.scm 174 */
																						obj_t BgL_auxz00_3207;

																						BgL_auxz00_3207 =
																							BINT(((long) 204));
																						SET_CAR(BgL_insz00_461,
																							BgL_auxz00_3207);
																	}}}}
																else
																	{	/* Jas/peep.scm 169 */
																		BFALSE;
																	}
															}
													}
													{
														obj_t BgL_lz00_3211;

														BgL_lz00_3211 = CDR(BgL_lz00_478);
														BgL_lz00_478 = BgL_lz00_3211;
														goto BgL_zc3anonymousza32202ze3z83_479;
													}
												}
										}
									return BgL_reallyzd2usedzd2_436;
								}
							}
						}
					}
				}
			}
		}
	}



/* simplematch */
	obj_t BGl_simplematchz00zzjas_peepz00(obj_t BgL_codez00_20)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 190 */
			{
				obj_t BgL_lz00_492;

				BgL_lz00_492 = BgL_codez00_20;
			BgL_zc3anonymousza32223ze3z83_493:
				{
					obj_t BgL_labz00_499;

					obj_t BgL_truez00_495;

					obj_t BgL_retestz00_496;

					obj_t BgL_labz00_497;

					if (NULLP(BgL_lz00_492))
						{	/* Jas/peep.scm 222 */
							return CNST_TABLE_REF(((long) 2));
						}
					else
						{	/* Jas/peep.scm 222 */
							if (PAIRP(BgL_lz00_492))
								{	/* Jas/peep.scm 222 */
									obj_t BgL_carzd21410zd2_514;

									obj_t BgL_cdrzd21411zd2_515;

									BgL_carzd21410zd2_514 = CAR(BgL_lz00_492);
									BgL_cdrzd21411zd2_515 = CDR(BgL_lz00_492);
									if (PAIRP(BgL_carzd21410zd2_514))
										{	/* Jas/peep.scm 222 */
											obj_t BgL_cdrzd21414zd2_517;

											BgL_cdrzd21414zd2_517 = CDR(BgL_carzd21410zd2_514);
											if ((CAR(BgL_carzd21410zd2_514) == BINT(((long) 153))))
												{	/* Jas/peep.scm 222 */
													if (PAIRP(BgL_cdrzd21414zd2_517))
														{	/* Jas/peep.scm 222 */
															obj_t BgL_truez00_520;

															BgL_truez00_520 = CAR(BgL_cdrzd21414zd2_517);
															if (NULLP(CDR(BgL_cdrzd21414zd2_517)))
																{	/* Jas/peep.scm 222 */
																	if (PAIRP(BgL_cdrzd21411zd2_515))
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd21422zd2_523;

																			obj_t BgL_cdrzd21423zd2_524;

																			BgL_carzd21422zd2_523 =
																				CAR(BgL_cdrzd21411zd2_515);
																			BgL_cdrzd21423zd2_524 =
																				CDR(BgL_cdrzd21411zd2_515);
																			if (PAIRP(BgL_carzd21422zd2_523))
																				{	/* Jas/peep.scm 222 */
																					if (
																						(CAR(BgL_carzd21422zd2_523) ==
																							BINT(((long) 3))))
																						{	/* Jas/peep.scm 222 */
																							if (NULLP(CDR
																									(BgL_carzd21422zd2_523)))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd21423zd2_524))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd21429zd2_529;
																											obj_t
																												BgL_cdrzd21430zd2_530;
																											BgL_carzd21429zd2_529 =
																												CAR
																												(BgL_cdrzd21423zd2_524);
																											BgL_cdrzd21430zd2_530 =
																												CDR
																												(BgL_cdrzd21423zd2_524);
																											if (PAIRP
																												(BgL_carzd21429zd2_529))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_cdrzd21433zd2_532;
																													BgL_cdrzd21433zd2_532
																														=
																														CDR
																														(BgL_carzd21429zd2_529);
																													if ((CAR
																															(BgL_carzd21429zd2_529)
																															==
																															BINT(((long)
																																	167))))
																														{	/* Jas/peep.scm 222 */
																															if (PAIRP
																																(BgL_cdrzd21433zd2_532))
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_retestz00_535;
																																	BgL_retestz00_535
																																		=
																																		CAR
																																		(BgL_cdrzd21433zd2_532);
																																	if (NULLP(CDR
																																			(BgL_cdrzd21433zd2_532)))
																																		{	/* Jas/peep.scm 222 */
																																			if (PAIRP
																																				(BgL_cdrzd21430zd2_530))
																																				{	/* Jas/peep.scm 222 */
																																					obj_t
																																						BgL_cdrzd21442zd2_538;
																																					BgL_cdrzd21442zd2_538
																																						=
																																						CDR
																																						(BgL_cdrzd21430zd2_530);
																																					if (
																																						(BgL_truez00_520
																																							==
																																							CAR
																																							(BgL_cdrzd21430zd2_530)))
																																						{	/* Jas/peep.scm 222 */
																																							if (PAIRP(BgL_cdrzd21442zd2_538))
																																								{	/* Jas/peep.scm 222 */
																																									obj_t
																																										BgL_carzd21446zd2_541;
																																									obj_t
																																										BgL_cdrzd21447zd2_542;
																																									BgL_carzd21446zd2_541
																																										=
																																										CAR
																																										(BgL_cdrzd21442zd2_538);
																																									BgL_cdrzd21447zd2_542
																																										=
																																										CDR
																																										(BgL_cdrzd21442zd2_538);
																																									if (PAIRP(BgL_carzd21446zd2_541))
																																										{	/* Jas/peep.scm 222 */
																																											if ((CAR(BgL_carzd21446zd2_541) == BINT(((long) 4))))
																																												{	/* Jas/peep.scm 222 */
																																													if (NULLP(CDR(BgL_carzd21446zd2_541)))
																																														{	/* Jas/peep.scm 222 */
																																															if (PAIRP(BgL_cdrzd21447zd2_542))
																																																{	/* Jas/peep.scm 222 */
																																																	obj_t
																																																		BgL_cdrzd21453zd2_547;
																																																	BgL_cdrzd21453zd2_547
																																																		=
																																																		CDR
																																																		(BgL_cdrzd21447zd2_542);
																																																	if ((BgL_retestz00_535 == CAR(BgL_cdrzd21447zd2_542)))
																																																		{	/* Jas/peep.scm 222 */
																																																			if (PAIRP(BgL_cdrzd21453zd2_547))
																																																				{	/* Jas/peep.scm 222 */
																																																					obj_t
																																																						BgL_carzd21456zd2_550;
																																																					BgL_carzd21456zd2_550
																																																						=
																																																						CAR
																																																						(BgL_cdrzd21453zd2_547);
																																																					if (PAIRP(BgL_carzd21456zd2_550))
																																																						{	/* Jas/peep.scm 222 */
																																																							obj_t
																																																								BgL_cdrzd21460zd2_552;
																																																							BgL_cdrzd21460zd2_552
																																																								=
																																																								CDR
																																																								(BgL_carzd21456zd2_550);
																																																							if ((CAR(BgL_carzd21456zd2_550) == BINT(((long) 153))))
																																																								{	/* Jas/peep.scm 222 */
																																																									if (PAIRP(BgL_cdrzd21460zd2_552))
																																																										{	/* Jas/peep.scm 222 */
																																																											if (NULLP(CDR(BgL_cdrzd21460zd2_552)))
																																																												{	/* Jas/peep.scm 222 */
																																																													BgL_truez00_495
																																																														=
																																																														BgL_truez00_520;
																																																													BgL_retestz00_496
																																																														=
																																																														BgL_retestz00_535;
																																																													BgL_labz00_497
																																																														=
																																																														CAR
																																																														(BgL_cdrzd21460zd2_552);
																																																													{	/* Jas/peep.scm 196 */
																																																														obj_t
																																																															BgL_pz00_1197;
																																																														obj_t
																																																															BgL_cz00_1198;
																																																														{	/* Jas/peep.scm 196 */
																																																															obj_t
																																																																BgL_pairz00_2592;
																																																															{	/* Jas/peep.scm 196 */
																																																																obj_t
																																																																	BgL_pairz00_2586;
																																																																BgL_pairz00_2586
																																																																	=
																																																																	BgL_lz00_492;
																																																																BgL_pairz00_2592
																																																																	=
																																																																	CDR
																																																																	(CDR
																																																																	(CDR
																																																																		(BgL_pairz00_2586)));
																																																															}
																																																															BgL_pz00_1197
																																																																=
																																																																CDR
																																																																(CDR
																																																																(CDR
																																																																	(BgL_pairz00_2592)));
																																																														}
																																																														BgL_cz00_1198
																																																															=
																																																															BGl_gensymz00zz__r4_symbols_6_4z00
																																																															(CNST_TABLE_REF
																																																															(((long) 4)));
																																																														{	/* Jas/peep.scm 197 */
																																																															obj_t
																																																																BgL_arg3061z00_1199;
																																																															{	/* Jas/peep.scm 197 */
																																																																obj_t
																																																																	BgL_list3062z00_1200;
																																																																{	/* Jas/peep.scm 197 */
																																																																	obj_t
																																																																		BgL_arg3064z00_1202;
																																																																	BgL_arg3064z00_1202
																																																																		=
																																																																		MAKE_PAIR
																																																																		(BgL_labz00_497,
																																																																		BNIL);
																																																																	BgL_list3062z00_1200
																																																																		=
																																																																		MAKE_PAIR
																																																																		(BINT
																																																																		(((long) 154)), BgL_arg3064z00_1202);
																																																																}
																																																																BgL_arg3061z00_1199
																																																																	=
																																																																	BgL_list3062z00_1200;
																																																															}
																																																															SET_CAR
																																																																(BgL_lz00_492,
																																																																BgL_arg3061z00_1199);
																																																														}
																																																														{	/* Jas/peep.scm 198 */
																																																															obj_t
																																																																BgL_arg3065z00_1203;
																																																															obj_t
																																																																BgL_arg3066z00_1204;
																																																															BgL_arg3065z00_1203
																																																																=
																																																																CDR
																																																																(BgL_lz00_492);
																																																															{	/* Jas/peep.scm 198 */
																																																																obj_t
																																																																	BgL_list3067z00_1205;
																																																																{	/* Jas/peep.scm 198 */
																																																																	obj_t
																																																																		BgL_arg3069z00_1207;
																																																																	BgL_arg3069z00_1207
																																																																		=
																																																																		MAKE_PAIR
																																																																		(BgL_cz00_1198,
																																																																		BNIL);
																																																																	BgL_list3067z00_1205
																																																																		=
																																																																		MAKE_PAIR
																																																																		(BINT
																																																																		(((long) 167)), BgL_arg3069z00_1207);
																																																																}
																																																																BgL_arg3066z00_1204
																																																																	=
																																																																	BgL_list3067z00_1205;
																																																															}
																																																															SET_CAR
																																																																(BgL_arg3065z00_1203,
																																																																BgL_arg3066z00_1204);
																																																														}
																																																														{	/* Jas/peep.scm 199 */
																																																															obj_t
																																																																BgL_arg3070z00_1208;
																																																															BgL_arg3070z00_1208
																																																																=
																																																																MAKE_PAIR
																																																																(BgL_cz00_1198,
																																																																CDR
																																																																(BgL_pz00_1197));
																																																															SET_CDR
																																																																(BgL_pz00_1197,
																																																																BgL_arg3070z00_1208);
																																																														}
																																																														{
																																																															obj_t
																																																																BgL_lz00_3323;
																																																															BgL_lz00_3323
																																																																=
																																																																BgL_pz00_1197;
																																																															BgL_lz00_492
																																																																=
																																																																BgL_lz00_3323;
																																																															goto
																																																																BgL_zc3anonymousza32223ze3z83_493;
																																																														}
																																																													}
																																																												}
																																																											else
																																																												{	/* Jas/peep.scm 222 */
																																																												BgL_tagzd21397zd2_510:
																																																													{
																																																														obj_t
																																																															BgL_lz00_3325;
																																																														BgL_lz00_3325
																																																															=
																																																															CDR
																																																															(BgL_lz00_492);
																																																														BgL_lz00_492
																																																															=
																																																															BgL_lz00_3325;
																																																														goto
																																																															BgL_zc3anonymousza32223ze3z83_493;
																																																													}
																																																												}
																																																										}
																																																									else
																																																										{	/* Jas/peep.scm 222 */
																																																											goto
																																																												BgL_tagzd21397zd2_510;
																																																										}
																																																								}
																																																							else
																																																								{	/* Jas/peep.scm 222 */
																																																									goto
																																																										BgL_tagzd21397zd2_510;
																																																								}
																																																						}
																																																					else
																																																						{	/* Jas/peep.scm 222 */
																																																							goto
																																																								BgL_tagzd21397zd2_510;
																																																						}
																																																				}
																																																			else
																																																				{	/* Jas/peep.scm 222 */
																																																					goto
																																																						BgL_tagzd21397zd2_510;
																																																				}
																																																		}
																																																	else
																																																		{	/* Jas/peep.scm 222 */
																																																			goto
																																																				BgL_tagzd21397zd2_510;
																																																		}
																																																}
																																															else
																																																{	/* Jas/peep.scm 222 */
																																																	goto
																																																		BgL_tagzd21397zd2_510;
																																																}
																																														}
																																													else
																																														{	/* Jas/peep.scm 222 */
																																															goto
																																																BgL_tagzd21397zd2_510;
																																														}
																																												}
																																											else
																																												{	/* Jas/peep.scm 222 */
																																													goto
																																														BgL_tagzd21397zd2_510;
																																												}
																																										}
																																									else
																																										{	/* Jas/peep.scm 222 */
																																											goto
																																												BgL_tagzd21397zd2_510;
																																										}
																																								}
																																							else
																																								{	/* Jas/peep.scm 222 */
																																									goto
																																										BgL_tagzd21397zd2_510;
																																								}
																																						}
																																					else
																																						{	/* Jas/peep.scm 222 */
																																							goto
																																								BgL_tagzd21397zd2_510;
																																						}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_carzd21685zd2_570;

																							obj_t BgL_cdrzd21686zd2_571;

																							BgL_carzd21685zd2_570 =
																								CAR(BgL_cdrzd21411zd2_515);
																							BgL_cdrzd21686zd2_571 =
																								CDR(BgL_cdrzd21411zd2_515);
																							if (
																								(CAR(BgL_carzd21685zd2_570) ==
																									BINT(((long) 4))))
																								{	/* Jas/peep.scm 222 */
																									if (NULLP(CDR
																											(BgL_carzd21685zd2_570)))
																										{	/* Jas/peep.scm 222 */
																											if (PAIRP
																												(BgL_cdrzd21686zd2_571))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd21690zd2_575;
																													BgL_carzd21690zd2_575
																														=
																														CAR
																														(BgL_cdrzd21686zd2_571);
																													if (PAIRP
																														(BgL_carzd21690zd2_575))
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_cdrzd21694zd2_577;
																															BgL_cdrzd21694zd2_577
																																=
																																CDR
																																(BgL_carzd21690zd2_575);
																															if ((CAR
																																	(BgL_carzd21690zd2_575)
																																	==
																																	BINT(((long)
																																			153))))
																																{	/* Jas/peep.scm 222 */
																																	if (PAIRP
																																		(BgL_cdrzd21694zd2_577))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd21694zd2_577)))
																																				{	/* Jas/peep.scm 222 */
																																					{	/* Jas/peep.scm 222 */
																																						obj_t
																																							BgL_arg3078z00_1922;
																																						{	/* Jas/peep.scm 222 */
																																							obj_t
																																								BgL_pairz00_1923;
																																							BgL_pairz00_1923
																																								=
																																								BgL_lz00_492;
																																							BgL_arg3078z00_1922
																																								=
																																								CDR
																																								(CDR
																																								(CDR
																																									(BgL_pairz00_1923)));
																																						}
																																						SET_CDR
																																							(BgL_lz00_492,
																																							BgL_arg3078z00_1922);
																																					}
																																					{

																																						goto
																																							BgL_zc3anonymousza32223ze3z83_493;
																																					}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_cdrzd21729zd2_588;

																									BgL_cdrzd21729zd2_588 =
																										CDR(BgL_cdrzd21411zd2_515);
																									if (
																										(CAR(CAR
																												(BgL_cdrzd21411zd2_515))
																											== BINT(((long) 178))))
																										{	/* Jas/peep.scm 222 */
																											if (PAIRP
																												(BgL_cdrzd21729zd2_588))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd21732zd2_591;
																													BgL_carzd21732zd2_591
																														=
																														CAR
																														(BgL_cdrzd21729zd2_588);
																													if (PAIRP
																														(BgL_carzd21732zd2_591))
																														{	/* Jas/peep.scm 222 */
																															if (
																																(CAR
																																	(BgL_carzd21732zd2_591)
																																	==
																																	BINT(((long)
																																			87))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd21732zd2_591)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 222 */
																																				obj_t
																																					BgL_arg3079z00_1943;
																																				{	/* Jas/peep.scm 222 */
																																					obj_t
																																						BgL_pairz00_1944;
																																					BgL_pairz00_1944
																																						=
																																						BgL_lz00_492;
																																					BgL_arg3079z00_1943
																																						=
																																						CDR
																																						(CDR
																																						(CDR
																																							(BgL_pairz00_1944)));
																																				}
																																				SET_CDR
																																					(BgL_lz00_492,
																																					BgL_arg3079z00_1943);
																																			}
																																			{

																																				goto
																																					BgL_zc3anonymousza32223ze3z83_493;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_carzd21747zd2_597;
																																	BgL_carzd21747zd2_597
																																		=
																																		CAR
																																		(BgL_cdrzd21729zd2_588);
																																	if ((CAR
																																			(BgL_carzd21747zd2_597)
																																			==
																																			BINT((
																																					(long)
																																					88))))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_carzd21747zd2_597)))
																																				{	/* Jas/peep.scm 222 */
																																					{	/* Jas/peep.scm 222 */
																																						obj_t
																																							BgL_arg3081z00_1960;
																																						{	/* Jas/peep.scm 222 */
																																							obj_t
																																								BgL_pairz00_1961;
																																							BgL_pairz00_1961
																																								=
																																								BgL_lz00_492;
																																							BgL_arg3081z00_1960
																																								=
																																								CDR
																																								(CDR
																																								(CDR
																																									(BgL_pairz00_1961)));
																																						}
																																						SET_CDR
																																							(BgL_lz00_492,
																																							BgL_arg3081z00_1960);
																																					}
																																					{

																																						goto
																																							BgL_zc3anonymousza32223ze3z83_493;
																																					}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd21757zd2_608;
																											BgL_carzd21757zd2_608 =
																												CAR(BgL_lz00_492);
																											if (PAIRP
																												(BgL_carzd21757zd2_608))
																												{	/* Jas/peep.scm 222 */
																													if (
																														(CAR
																															(BgL_carzd21757zd2_608)
																															==
																															BINT(((long) 9))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd21757zd2_608)))
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_carzd21761zd2_612;
																																	BgL_carzd21761zd2_612
																																		=
																																		CAR
																																		(BgL_cdrzd21411zd2_515);
																																	if ((CAR
																																			(BgL_carzd21761zd2_612)
																																			==
																																			BINT((
																																					(long)
																																					136))))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_carzd21761zd2_612)))
																																				{	/* Jas/peep.scm 222 */
																																				BgL_tagzd21395zd2_508:
																																					{	/* Jas/peep.scm 215 */
																																						obj_t
																																							BgL_pairz00_2640;
																																						obj_t
																																							BgL_objz00_2641;
																																						BgL_pairz00_2640
																																							=
																																							BgL_lz00_492;
																																						BgL_objz00_2641
																																							=
																																							CNST_TABLE_REF
																																							(((long) 5));
																																						SET_CAR
																																							(BgL_pairz00_2640,
																																							BgL_objz00_2641);
																																					}
																																					{	/* Jas/peep.scm 216 */
																																						obj_t
																																							BgL_arg3082z00_1219;
																																						{	/* Jas/peep.scm 216 */
																																							obj_t
																																								BgL_pairz00_2642;
																																							BgL_pairz00_2642
																																								=
																																								BgL_lz00_492;
																																							BgL_arg3082z00_1219
																																								=
																																								CDR
																																								(CDR
																																								(BgL_pairz00_2642));
																																						}
																																						SET_CDR
																																							(BgL_lz00_492,
																																							BgL_arg3082z00_1219);
																																					}
																																					{	/* Jas/peep.scm 217 */
																																						obj_t
																																							BgL_arg3083z00_1220;
																																						{	/* Jas/peep.scm 217 */
																																							obj_t
																																								BgL_pairz00_2648;
																																							BgL_pairz00_2648
																																								=
																																								BgL_lz00_492;
																																							BgL_arg3083z00_1220
																																								=
																																								CDR
																																								(CDR
																																								(BgL_pairz00_2648));
																																						}
																																						{
																																							obj_t
																																								BgL_lz00_3414;
																																							BgL_lz00_3414
																																								=
																																								BgL_arg3083z00_1220;
																																							BgL_lz00_492
																																								=
																																								BgL_lz00_3414;
																																							goto
																																								BgL_zc3anonymousza32223ze3z83_493;
																																						}
																																					}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															if (
																																(CAR
																																	(BgL_carzd21757zd2_608)
																																	==
																																	BINT(((long)
																																			10))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd21757zd2_608)))
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_carzd21769zd2_623;
																																			BgL_carzd21769zd2_623
																																				=
																																				CAR(CDR
																																				(BgL_lz00_492));
																																			if ((CAR
																																					(BgL_carzd21769zd2_623)
																																					==
																																					BINT((
																																							(long)
																																							136))))
																																				{	/* Jas/peep.scm 222 */
																																					if (NULLP(CDR(BgL_carzd21769zd2_623)))
																																						{	/* Jas/peep.scm 222 */
																																						BgL_tagzd21396zd2_509:
																																							{	/* Jas/peep.scm 219 */
																																								obj_t
																																									BgL_pairz00_2652;
																																								obj_t
																																									BgL_objz00_2653;
																																								BgL_pairz00_2652
																																									=
																																									BgL_lz00_492;
																																								BgL_objz00_2653
																																									=
																																									CNST_TABLE_REF
																																									(
																																									((long) 6));
																																								SET_CAR
																																									(BgL_pairz00_2652,
																																									BgL_objz00_2653);
																																							}
																																							{	/* Jas/peep.scm 220 */
																																								obj_t
																																									BgL_arg3084z00_1221;
																																								{	/* Jas/peep.scm 220 */
																																									obj_t
																																										BgL_pairz00_2654;
																																									BgL_pairz00_2654
																																										=
																																										BgL_lz00_492;
																																									BgL_arg3084z00_1221
																																										=
																																										CDR
																																										(CDR
																																										(BgL_pairz00_2654));
																																								}
																																								SET_CDR
																																									(BgL_lz00_492,
																																									BgL_arg3084z00_1221);
																																							}
																																							{	/* Jas/peep.scm 221 */
																																								obj_t
																																									BgL_arg3085z00_1222;
																																								{	/* Jas/peep.scm 221 */
																																									obj_t
																																										BgL_pairz00_2660;
																																									BgL_pairz00_2660
																																										=
																																										BgL_lz00_492;
																																									BgL_arg3085z00_1222
																																										=
																																										CDR
																																										(CDR
																																										(BgL_pairz00_2660));
																																								}
																																								{
																																									obj_t
																																										BgL_lz00_3438;
																																									BgL_lz00_3438
																																										=
																																										BgL_arg3085z00_1222;
																																									BgL_lz00_492
																																										=
																																										BgL_lz00_3438;
																																									goto
																																										BgL_zc3anonymousza32223ze3z83_493;
																																								}
																																							}
																																						}
																																					else
																																						{	/* Jas/peep.scm 222 */
																																							goto
																																								BgL_tagzd21397zd2_510;
																																						}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																								}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd21397zd2_510;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd21397zd2_510;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	if (PAIRP(BgL_cdrzd21411zd2_515))
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd21814zd2_658;

																			obj_t BgL_cdrzd21815zd2_659;

																			BgL_carzd21814zd2_658 =
																				CAR(BgL_cdrzd21411zd2_515);
																			BgL_cdrzd21815zd2_659 =
																				CDR(BgL_cdrzd21411zd2_515);
																			if (PAIRP(BgL_carzd21814zd2_658))
																				{	/* Jas/peep.scm 222 */
																					if (
																						(CAR(BgL_carzd21814zd2_658) ==
																							BINT(((long) 4))))
																						{	/* Jas/peep.scm 222 */
																							if (NULLP(CDR
																									(BgL_carzd21814zd2_658)))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd21815zd2_659))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd21819zd2_664;
																											BgL_carzd21819zd2_664 =
																												CAR
																												(BgL_cdrzd21815zd2_659);
																											if (PAIRP
																												(BgL_carzd21819zd2_664))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_cdrzd21823zd2_666;
																													BgL_cdrzd21823zd2_666
																														=
																														CDR
																														(BgL_carzd21819zd2_664);
																													if ((CAR
																															(BgL_carzd21819zd2_664)
																															==
																															BINT(((long)
																																	153))))
																														{	/* Jas/peep.scm 222 */
																															if (PAIRP
																																(BgL_cdrzd21823zd2_666))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd21823zd2_666)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 222 */
																																				obj_t
																																					BgL_arg3078z00_2018;
																																				{	/* Jas/peep.scm 222 */
																																					obj_t
																																						BgL_pairz00_2019;
																																					BgL_pairz00_2019
																																						=
																																						BgL_lz00_492;
																																					BgL_arg3078z00_2018
																																						=
																																						CDR
																																						(CDR
																																						(CDR
																																							(BgL_pairz00_2019)));
																																				}
																																				SET_CDR
																																					(BgL_lz00_492,
																																					BgL_arg3078z00_2018);
																																			}
																																			{

																																				goto
																																					BgL_zc3anonymousza32223ze3z83_493;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_cdrzd21858zd2_677;

																							BgL_cdrzd21858zd2_677 =
																								CDR(BgL_cdrzd21411zd2_515);
																							if (
																								(CAR(CAR(BgL_cdrzd21411zd2_515))
																									== BINT(((long) 178))))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd21858zd2_677))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd21861zd2_680;
																											BgL_carzd21861zd2_680 =
																												CAR
																												(BgL_cdrzd21858zd2_677);
																											if (PAIRP
																												(BgL_carzd21861zd2_680))
																												{	/* Jas/peep.scm 222 */
																													if (
																														(CAR
																															(BgL_carzd21861zd2_680)
																															==
																															BINT(((long)
																																	87))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd21861zd2_680)))
																																{	/* Jas/peep.scm 222 */
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_arg3079z00_2039;
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_pairz00_2040;
																																			BgL_pairz00_2040
																																				=
																																				BgL_lz00_492;
																																			BgL_arg3079z00_2039
																																				=
																																				CDR(CDR
																																				(CDR
																																					(BgL_pairz00_2040)));
																																		}
																																		SET_CDR
																																			(BgL_lz00_492,
																																			BgL_arg3079z00_2039);
																																	}
																																	{

																																		goto
																																			BgL_zc3anonymousza32223ze3z83_493;
																																	}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_carzd21876zd2_686;
																															BgL_carzd21876zd2_686
																																=
																																CAR
																																(BgL_cdrzd21858zd2_677);
																															if ((CAR
																																	(BgL_carzd21876zd2_686)
																																	==
																																	BINT(((long)
																																			88))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd21876zd2_686)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 222 */
																																				obj_t
																																					BgL_arg3081z00_2056;
																																				{	/* Jas/peep.scm 222 */
																																					obj_t
																																						BgL_pairz00_2057;
																																					BgL_pairz00_2057
																																						=
																																						BgL_lz00_492;
																																					BgL_arg3081z00_2056
																																						=
																																						CDR
																																						(CDR
																																						(CDR
																																							(BgL_pairz00_2057)));
																																				}
																																				SET_CDR
																																					(BgL_lz00_492,
																																					BgL_arg3081z00_2056);
																																			}
																																			{

																																				goto
																																					BgL_zc3anonymousza32223ze3z83_493;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd21886zd2_697;

																									BgL_carzd21886zd2_697 =
																										CAR(BgL_lz00_492);
																									if (PAIRP
																										(BgL_carzd21886zd2_697))
																										{	/* Jas/peep.scm 222 */
																											if (
																												(CAR
																													(BgL_carzd21886zd2_697)
																													== BINT(((long) 9))))
																												{	/* Jas/peep.scm 222 */
																													if (NULLP(CDR
																															(BgL_carzd21886zd2_697)))
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_carzd21890zd2_701;
																															BgL_carzd21890zd2_701
																																=
																																CAR
																																(BgL_cdrzd21411zd2_515);
																															if ((CAR
																																	(BgL_carzd21890zd2_701)
																																	==
																																	BINT(((long)
																																			136))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd21890zd2_701)))
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21395zd2_508;
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													if (
																														(CAR
																															(BgL_carzd21886zd2_697)
																															==
																															BINT(((long)
																																	10))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd21886zd2_697)))
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_carzd21898zd2_712;
																																	BgL_carzd21898zd2_712
																																		=
																																		CAR(CDR
																																		(BgL_lz00_492));
																																	if ((CAR
																																			(BgL_carzd21898zd2_712)
																																			==
																																			BINT((
																																					(long)
																																					136))))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_carzd21898zd2_712)))
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21396zd2_509;
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd21397zd2_510;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd21397zd2_510;
																		}
																}
														}
													else
														{	/* Jas/peep.scm 222 */
															if (PAIRP(BgL_cdrzd21411zd2_515))
																{	/* Jas/peep.scm 222 */
																	obj_t BgL_carzd21929zd2_746;

																	obj_t BgL_cdrzd21930zd2_747;

																	BgL_carzd21929zd2_746 =
																		CAR(BgL_cdrzd21411zd2_515);
																	BgL_cdrzd21930zd2_747 =
																		CDR(BgL_cdrzd21411zd2_515);
																	if (PAIRP(BgL_carzd21929zd2_746))
																		{	/* Jas/peep.scm 222 */
																			if (
																				(CAR(BgL_carzd21929zd2_746) ==
																					BINT(((long) 4))))
																				{	/* Jas/peep.scm 222 */
																					if (NULLP(CDR(BgL_carzd21929zd2_746)))
																						{	/* Jas/peep.scm 222 */
																							if (PAIRP(BgL_cdrzd21930zd2_747))
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd21934zd2_752;

																									BgL_carzd21934zd2_752 =
																										CAR(BgL_cdrzd21930zd2_747);
																									if (PAIRP
																										(BgL_carzd21934zd2_752))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_cdrzd21938zd2_754;
																											BgL_cdrzd21938zd2_754 =
																												CDR
																												(BgL_carzd21934zd2_752);
																											if ((CAR
																													(BgL_carzd21934zd2_752)
																													==
																													BINT(((long) 153))))
																												{	/* Jas/peep.scm 222 */
																													if (PAIRP
																														(BgL_cdrzd21938zd2_754))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21938zd2_754)))
																																{	/* Jas/peep.scm 222 */
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_arg3078z00_2114;
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_pairz00_2115;
																																			BgL_pairz00_2115
																																				=
																																				BgL_lz00_492;
																																			BgL_arg3078z00_2114
																																				=
																																				CDR(CDR
																																				(CDR
																																					(BgL_pairz00_2115)));
																																		}
																																		SET_CDR
																																			(BgL_lz00_492,
																																			BgL_arg3078z00_2114);
																																	}
																																	{

																																		goto
																																			BgL_zc3anonymousza32223ze3z83_493;
																																	}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							goto BgL_tagzd21397zd2_510;
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_cdrzd21973zd2_765;

																					BgL_cdrzd21973zd2_765 =
																						CDR(BgL_cdrzd21411zd2_515);
																					if (
																						(CAR(CAR(BgL_cdrzd21411zd2_515)) ==
																							BINT(((long) 178))))
																						{	/* Jas/peep.scm 222 */
																							if (PAIRP(BgL_cdrzd21973zd2_765))
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd21976zd2_768;

																									BgL_carzd21976zd2_768 =
																										CAR(BgL_cdrzd21973zd2_765);
																									if (PAIRP
																										(BgL_carzd21976zd2_768))
																										{	/* Jas/peep.scm 222 */
																											if (
																												(CAR
																													(BgL_carzd21976zd2_768)
																													== BINT(((long) 87))))
																												{	/* Jas/peep.scm 222 */
																													if (NULLP(CDR
																															(BgL_carzd21976zd2_768)))
																														{	/* Jas/peep.scm 222 */
																															{	/* Jas/peep.scm 222 */
																																obj_t
																																	BgL_arg3079z00_2135;
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_pairz00_2136;
																																	BgL_pairz00_2136
																																		=
																																		BgL_lz00_492;
																																	BgL_arg3079z00_2135
																																		=
																																		CDR(CDR(CDR
																																			(BgL_pairz00_2136)));
																																}
																																SET_CDR
																																	(BgL_lz00_492,
																																	BgL_arg3079z00_2135);
																															}
																															{

																																goto
																																	BgL_zc3anonymousza32223ze3z83_493;
																															}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd21991zd2_774;
																													BgL_carzd21991zd2_774
																														=
																														CAR
																														(BgL_cdrzd21973zd2_765);
																													if ((CAR
																															(BgL_carzd21991zd2_774)
																															==
																															BINT(((long)
																																	88))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd21991zd2_774)))
																																{	/* Jas/peep.scm 222 */
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_arg3081z00_2152;
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_pairz00_2153;
																																			BgL_pairz00_2153
																																				=
																																				BgL_lz00_492;
																																			BgL_arg3081z00_2152
																																				=
																																				CDR(CDR
																																				(CDR
																																					(BgL_pairz00_2153)));
																																		}
																																		SET_CDR
																																			(BgL_lz00_492,
																																			BgL_arg3081z00_2152);
																																	}
																																	{

																																		goto
																																			BgL_zc3anonymousza32223ze3z83_493;
																																	}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_carzd22001zd2_785;

																							BgL_carzd22001zd2_785 =
																								CAR(BgL_lz00_492);
																							if (PAIRP(BgL_carzd22001zd2_785))
																								{	/* Jas/peep.scm 222 */
																									if (
																										(CAR(BgL_carzd22001zd2_785)
																											== BINT(((long) 9))))
																										{	/* Jas/peep.scm 222 */
																											if (NULLP(CDR
																													(BgL_carzd22001zd2_785)))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd22005zd2_789;
																													BgL_carzd22005zd2_789
																														=
																														CAR
																														(BgL_cdrzd21411zd2_515);
																													if ((CAR
																															(BgL_carzd22005zd2_789)
																															==
																															BINT(((long)
																																	136))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd22005zd2_789)))
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21395zd2_508;
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											if (
																												(CAR
																													(BgL_carzd22001zd2_785)
																													== BINT(((long) 10))))
																												{	/* Jas/peep.scm 222 */
																													if (NULLP(CDR
																															(BgL_carzd22001zd2_785)))
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_carzd22013zd2_800;
																															BgL_carzd22013zd2_800
																																=
																																CAR(CDR
																																(BgL_lz00_492));
																															if ((CAR
																																	(BgL_carzd22013zd2_800)
																																	==
																																	BINT(((long)
																																			136))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd22013zd2_800)))
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21396zd2_509;
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd21397zd2_510;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	goto BgL_tagzd21397zd2_510;
																}
														}
												}
											else
												{	/* Jas/peep.scm 222 */
													if ((CAR(BgL_carzd21410zd2_514) == BINT(((long) 3))))
														{	/* Jas/peep.scm 222 */
															if (NULLP(CDR(BgL_carzd21410zd2_514)))
																{	/* Jas/peep.scm 222 */
																	if (PAIRP(BgL_cdrzd21411zd2_515))
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd22041zd2_836;

																			BgL_carzd22041zd2_836 =
																				CAR(BgL_cdrzd21411zd2_515);
																			if (PAIRP(BgL_carzd22041zd2_836))
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_cdrzd22045zd2_838;

																					BgL_cdrzd22045zd2_838 =
																						CDR(BgL_carzd22041zd2_836);
																					if (
																						(CAR(BgL_carzd22041zd2_836) ==
																							BINT(((long) 153))))
																						{	/* Jas/peep.scm 222 */
																							if (PAIRP(BgL_cdrzd22045zd2_838))
																								{	/* Jas/peep.scm 222 */
																									if (NULLP(CDR
																											(BgL_cdrzd22045zd2_838)))
																										{	/* Jas/peep.scm 222 */
																											BgL_labz00_499 =
																												CAR
																												(BgL_cdrzd22045zd2_838);
																											{	/* Jas/peep.scm 202 */
																												obj_t
																													BgL_arg3073z00_1211;
																												{	/* Jas/peep.scm 202 */
																													obj_t
																														BgL_arg3075z00_1213;
																													{	/* Jas/peep.scm 202 */
																														obj_t
																															BgL_list3076z00_1214;
																														BgL_list3076z00_1214
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg3075z00_1213
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_labz00_499,
																															BgL_list3076z00_1214);
																													}
																													BgL_arg3073z00_1211 =
																														MAKE_PAIR(BINT((
																																(long) 167)),
																														BgL_arg3075z00_1213);
																												}
																												SET_CAR(BgL_lz00_492,
																													BgL_arg3073z00_1211);
																											}
																											{
																												obj_t BgL_lz00_3666;

																												BgL_lz00_3666 =
																													CDR(BgL_lz00_492);
																												BgL_lz00_492 =
																													BgL_lz00_3666;
																												goto
																													BgL_zc3anonymousza32223ze3z83_493;
																											}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_carzd22074zd2_845;

																							obj_t BgL_cdrzd22075zd2_846;

																							BgL_carzd22074zd2_845 =
																								CAR(BgL_cdrzd21411zd2_515);
																							BgL_cdrzd22075zd2_846 =
																								CDR(BgL_cdrzd21411zd2_515);
																							if (
																								(CAR(BgL_carzd22074zd2_845) ==
																									BINT(((long) 4))))
																								{	/* Jas/peep.scm 222 */
																									if (NULLP(CDR
																											(BgL_carzd22074zd2_845)))
																										{	/* Jas/peep.scm 222 */
																											if (PAIRP
																												(BgL_cdrzd22075zd2_846))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd22079zd2_850;
																													BgL_carzd22079zd2_850
																														=
																														CAR
																														(BgL_cdrzd22075zd2_846);
																													if (PAIRP
																														(BgL_carzd22079zd2_850))
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_cdrzd22083zd2_852;
																															BgL_cdrzd22083zd2_852
																																=
																																CDR
																																(BgL_carzd22079zd2_850);
																															if ((CAR
																																	(BgL_carzd22079zd2_850)
																																	==
																																	BINT(((long)
																																			153))))
																																{	/* Jas/peep.scm 222 */
																																	if (PAIRP
																																		(BgL_cdrzd22083zd2_852))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22083zd2_852)))
																																				{	/* Jas/peep.scm 222 */
																																					{	/* Jas/peep.scm 222 */
																																						obj_t
																																							BgL_arg3078z00_2222;
																																						{	/* Jas/peep.scm 222 */
																																							obj_t
																																								BgL_pairz00_2223;
																																							BgL_pairz00_2223
																																								=
																																								BgL_lz00_492;
																																							BgL_arg3078z00_2222
																																								=
																																								CDR
																																								(CDR
																																								(CDR
																																									(BgL_pairz00_2223)));
																																						}
																																						SET_CDR
																																							(BgL_lz00_492,
																																							BgL_arg3078z00_2222);
																																					}
																																					{

																																						goto
																																							BgL_zc3anonymousza32223ze3z83_493;
																																					}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									if (
																										(CAR(CAR
																												(BgL_cdrzd21411zd2_515))
																											== BINT(((long) 178))))
																										{	/* Jas/peep.scm 222 */
																											if (PAIRP
																												(BgL_cdrzd22075zd2_846))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd22121zd2_866;
																													BgL_carzd22121zd2_866
																														=
																														CAR
																														(BgL_cdrzd22075zd2_846);
																													if (PAIRP
																														(BgL_carzd22121zd2_866))
																														{	/* Jas/peep.scm 222 */
																															if (
																																(CAR
																																	(BgL_carzd22121zd2_866)
																																	==
																																	BINT(((long)
																																			87))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd22121zd2_866)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 222 */
																																				obj_t
																																					BgL_arg3079z00_2243;
																																				{	/* Jas/peep.scm 222 */
																																					obj_t
																																						BgL_pairz00_2244;
																																					BgL_pairz00_2244
																																						=
																																						BgL_lz00_492;
																																					BgL_arg3079z00_2243
																																						=
																																						CDR
																																						(CDR
																																						(CDR
																																							(BgL_pairz00_2244)));
																																				}
																																				SET_CDR
																																					(BgL_lz00_492,
																																					BgL_arg3079z00_2243);
																																			}
																																			{

																																				goto
																																					BgL_zc3anonymousza32223ze3z83_493;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_carzd22136zd2_872;
																																	BgL_carzd22136zd2_872
																																		=
																																		CAR(CDR(CDR
																																			(BgL_lz00_492)));
																																	if ((CAR
																																			(BgL_carzd22136zd2_872)
																																			==
																																			BINT((
																																					(long)
																																					88))))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_carzd22136zd2_872)))
																																				{	/* Jas/peep.scm 222 */
																																					{	/* Jas/peep.scm 222 */
																																						obj_t
																																							BgL_arg3081z00_2260;
																																						{	/* Jas/peep.scm 222 */
																																							obj_t
																																								BgL_pairz00_2261;
																																							BgL_pairz00_2261
																																								=
																																								BgL_lz00_492;
																																							BgL_arg3081z00_2260
																																								=
																																								CDR
																																								(CDR
																																								(CDR
																																									(BgL_pairz00_2261)));
																																						}
																																						SET_CDR
																																							(BgL_lz00_492,
																																							BgL_arg3081z00_2260);
																																					}
																																					{

																																						goto
																																							BgL_zc3anonymousza32223ze3z83_493;
																																					}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd22146zd2_883;
																											BgL_carzd22146zd2_883 =
																												CAR(BgL_lz00_492);
																											if (PAIRP
																												(BgL_carzd22146zd2_883))
																												{	/* Jas/peep.scm 222 */
																													if (
																														(CAR
																															(BgL_carzd22146zd2_883)
																															==
																															BINT(((long) 9))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd22146zd2_883)))
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_carzd22150zd2_887;
																																	BgL_carzd22150zd2_887
																																		=
																																		CAR(CDR
																																		(BgL_lz00_492));
																																	if ((CAR
																																			(BgL_carzd22150zd2_887)
																																			==
																																			BINT((
																																					(long)
																																					136))))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_carzd22150zd2_887)))
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21395zd2_508;
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															if (
																																(CAR
																																	(BgL_carzd22146zd2_883)
																																	==
																																	BINT(((long)
																																			10))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd22146zd2_883)))
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_carzd22158zd2_898;
																																			BgL_carzd22158zd2_898
																																				=
																																				CAR(CDR
																																				(BgL_lz00_492));
																																			if ((CAR
																																					(BgL_carzd22158zd2_898)
																																					==
																																					BINT((
																																							(long)
																																							136))))
																																				{	/* Jas/peep.scm 222 */
																																					if (NULLP(CDR(BgL_carzd22158zd2_898)))
																																						{	/* Jas/peep.scm 222 */
																																							goto
																																								BgL_tagzd21396zd2_509;
																																						}
																																					else
																																						{	/* Jas/peep.scm 222 */
																																							goto
																																								BgL_tagzd21397zd2_510;
																																						}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																								}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd21397zd2_510;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd21397zd2_510;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	if (PAIRP(BgL_cdrzd21411zd2_515))
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd22194zd2_933;

																			obj_t BgL_cdrzd22195zd2_934;

																			BgL_carzd22194zd2_933 =
																				CAR(BgL_cdrzd21411zd2_515);
																			BgL_cdrzd22195zd2_934 =
																				CDR(BgL_cdrzd21411zd2_515);
																			if (PAIRP(BgL_carzd22194zd2_933))
																				{	/* Jas/peep.scm 222 */
																					if (
																						(CAR(BgL_carzd22194zd2_933) ==
																							BINT(((long) 4))))
																						{	/* Jas/peep.scm 222 */
																							if (NULLP(CDR
																									(BgL_carzd22194zd2_933)))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd22195zd2_934))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd22199zd2_939;
																											BgL_carzd22199zd2_939 =
																												CAR
																												(BgL_cdrzd22195zd2_934);
																											if (PAIRP
																												(BgL_carzd22199zd2_939))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_cdrzd22203zd2_941;
																													BgL_cdrzd22203zd2_941
																														=
																														CDR
																														(BgL_carzd22199zd2_939);
																													if ((CAR
																															(BgL_carzd22199zd2_939)
																															==
																															BINT(((long)
																																	153))))
																														{	/* Jas/peep.scm 222 */
																															if (PAIRP
																																(BgL_cdrzd22203zd2_941))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd22203zd2_941)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 222 */
																																				obj_t
																																					BgL_arg3078z00_2318;
																																				{	/* Jas/peep.scm 222 */
																																					obj_t
																																						BgL_pairz00_2319;
																																					BgL_pairz00_2319
																																						=
																																						BgL_lz00_492;
																																					BgL_arg3078z00_2318
																																						=
																																						CDR
																																						(CDR
																																						(CDR
																																							(BgL_pairz00_2319)));
																																				}
																																				SET_CDR
																																					(BgL_lz00_492,
																																					BgL_arg3078z00_2318);
																																			}
																																			{

																																				goto
																																					BgL_zc3anonymousza32223ze3z83_493;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_cdrzd22238zd2_952;

																							BgL_cdrzd22238zd2_952 =
																								CDR(BgL_cdrzd21411zd2_515);
																							if (
																								(CAR(CAR(BgL_cdrzd21411zd2_515))
																									== BINT(((long) 178))))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd22238zd2_952))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd22241zd2_955;
																											BgL_carzd22241zd2_955 =
																												CAR
																												(BgL_cdrzd22238zd2_952);
																											if (PAIRP
																												(BgL_carzd22241zd2_955))
																												{	/* Jas/peep.scm 222 */
																													if (
																														(CAR
																															(BgL_carzd22241zd2_955)
																															==
																															BINT(((long)
																																	87))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd22241zd2_955)))
																																{	/* Jas/peep.scm 222 */
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_arg3079z00_2339;
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_pairz00_2340;
																																			BgL_pairz00_2340
																																				=
																																				BgL_lz00_492;
																																			BgL_arg3079z00_2339
																																				=
																																				CDR(CDR
																																				(CDR
																																					(BgL_pairz00_2340)));
																																		}
																																		SET_CDR
																																			(BgL_lz00_492,
																																			BgL_arg3079z00_2339);
																																	}
																																	{

																																		goto
																																			BgL_zc3anonymousza32223ze3z83_493;
																																	}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_carzd22256zd2_961;
																															BgL_carzd22256zd2_961
																																=
																																CAR(CDR(CDR
																																	(BgL_lz00_492)));
																															if ((CAR
																																	(BgL_carzd22256zd2_961)
																																	==
																																	BINT(((long)
																																			88))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd22256zd2_961)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 222 */
																																				obj_t
																																					BgL_arg3081z00_2356;
																																				{	/* Jas/peep.scm 222 */
																																					obj_t
																																						BgL_pairz00_2357;
																																					BgL_pairz00_2357
																																						=
																																						BgL_lz00_492;
																																					BgL_arg3081z00_2356
																																						=
																																						CDR
																																						(CDR
																																						(CDR
																																							(BgL_pairz00_2357)));
																																				}
																																				SET_CDR
																																					(BgL_lz00_492,
																																					BgL_arg3081z00_2356);
																																			}
																																			{

																																				goto
																																					BgL_zc3anonymousza32223ze3z83_493;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd22266zd2_972;

																									BgL_carzd22266zd2_972 =
																										CAR(BgL_lz00_492);
																									if (PAIRP
																										(BgL_carzd22266zd2_972))
																										{	/* Jas/peep.scm 222 */
																											if (
																												(CAR
																													(BgL_carzd22266zd2_972)
																													== BINT(((long) 9))))
																												{	/* Jas/peep.scm 222 */
																													if (NULLP(CDR
																															(BgL_carzd22266zd2_972)))
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_carzd22270zd2_976;
																															BgL_carzd22270zd2_976
																																=
																																CAR(CDR
																																(BgL_lz00_492));
																															if ((CAR
																																	(BgL_carzd22270zd2_976)
																																	==
																																	BINT(((long)
																																			136))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd22270zd2_976)))
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21395zd2_508;
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													if (
																														(CAR
																															(BgL_carzd22266zd2_972)
																															==
																															BINT(((long)
																																	10))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd22266zd2_972)))
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_carzd22278zd2_987;
																																	BgL_carzd22278zd2_987
																																		=
																																		CAR(CDR
																																		(BgL_lz00_492));
																																	if ((CAR
																																			(BgL_carzd22278zd2_987)
																																			==
																																			BINT((
																																					(long)
																																					136))))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_carzd22278zd2_987)))
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21396zd2_509;
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd21397zd2_510;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd21397zd2_510;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd21397zd2_510;
																		}
																}
														}
													else
														{	/* Jas/peep.scm 222 */
															if (PAIRP(BgL_cdrzd21411zd2_515))
																{	/* Jas/peep.scm 222 */
																	obj_t BgL_carzd22306zd2_1021;

																	obj_t BgL_cdrzd22307zd2_1022;

																	BgL_carzd22306zd2_1021 =
																		CAR(BgL_cdrzd21411zd2_515);
																	BgL_cdrzd22307zd2_1022 =
																		CDR(BgL_cdrzd21411zd2_515);
																	if (PAIRP(BgL_carzd22306zd2_1021))
																		{	/* Jas/peep.scm 222 */
																			if (
																				(CAR(BgL_carzd22306zd2_1021) ==
																					BINT(((long) 4))))
																				{	/* Jas/peep.scm 222 */
																					if (NULLP(CDR
																							(BgL_carzd22306zd2_1021)))
																						{	/* Jas/peep.scm 222 */
																							if (PAIRP(BgL_cdrzd22307zd2_1022))
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd22311zd2_1027;

																									BgL_carzd22311zd2_1027 =
																										CAR(BgL_cdrzd22307zd2_1022);
																									if (PAIRP
																										(BgL_carzd22311zd2_1027))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_cdrzd22315zd2_1029;
																											BgL_cdrzd22315zd2_1029 =
																												CDR
																												(BgL_carzd22311zd2_1027);
																											if ((CAR
																													(BgL_carzd22311zd2_1027)
																													==
																													BINT(((long) 153))))
																												{	/* Jas/peep.scm 222 */
																													if (PAIRP
																														(BgL_cdrzd22315zd2_1029))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_cdrzd22315zd2_1029)))
																																{	/* Jas/peep.scm 222 */
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_arg3078z00_2414;
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_pairz00_2415;
																																			BgL_pairz00_2415
																																				=
																																				BgL_lz00_492;
																																			BgL_arg3078z00_2414
																																				=
																																				CDR(CDR
																																				(CDR
																																					(BgL_pairz00_2415)));
																																		}
																																		SET_CDR
																																			(BgL_lz00_492,
																																			BgL_arg3078z00_2414);
																																	}
																																	{

																																		goto
																																			BgL_zc3anonymousza32223ze3z83_493;
																																	}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							goto BgL_tagzd21397zd2_510;
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_cdrzd22350zd2_1040;

																					BgL_cdrzd22350zd2_1040 =
																						CDR(BgL_cdrzd21411zd2_515);
																					if (
																						(CAR(CAR(BgL_cdrzd21411zd2_515)) ==
																							BINT(((long) 178))))
																						{	/* Jas/peep.scm 222 */
																							if (PAIRP(BgL_cdrzd22350zd2_1040))
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd22353zd2_1043;

																									BgL_carzd22353zd2_1043 =
																										CAR(BgL_cdrzd22350zd2_1040);
																									if (PAIRP
																										(BgL_carzd22353zd2_1043))
																										{	/* Jas/peep.scm 222 */
																											if (
																												(CAR
																													(BgL_carzd22353zd2_1043)
																													== BINT(((long) 87))))
																												{	/* Jas/peep.scm 222 */
																													if (NULLP(CDR
																															(BgL_carzd22353zd2_1043)))
																														{	/* Jas/peep.scm 222 */
																															{	/* Jas/peep.scm 222 */
																																obj_t
																																	BgL_arg3079z00_2435;
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_pairz00_2436;
																																	BgL_pairz00_2436
																																		=
																																		BgL_lz00_492;
																																	BgL_arg3079z00_2435
																																		=
																																		CDR(CDR(CDR
																																			(BgL_pairz00_2436)));
																																}
																																SET_CDR
																																	(BgL_lz00_492,
																																	BgL_arg3079z00_2435);
																															}
																															{

																																goto
																																	BgL_zc3anonymousza32223ze3z83_493;
																															}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd22368zd2_1049;
																													BgL_carzd22368zd2_1049
																														=
																														CAR(CDR(CDR
																															(BgL_lz00_492)));
																													if ((CAR
																															(BgL_carzd22368zd2_1049)
																															==
																															BINT(((long)
																																	88))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd22368zd2_1049)))
																																{	/* Jas/peep.scm 222 */
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_arg3081z00_2452;
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_pairz00_2453;
																																			BgL_pairz00_2453
																																				=
																																				BgL_lz00_492;
																																			BgL_arg3081z00_2452
																																				=
																																				CDR(CDR
																																				(CDR
																																					(BgL_pairz00_2453)));
																																		}
																																		SET_CDR
																																			(BgL_lz00_492,
																																			BgL_arg3081z00_2452);
																																	}
																																	{

																																		goto
																																			BgL_zc3anonymousza32223ze3z83_493;
																																	}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_carzd22378zd2_1060;

																							BgL_carzd22378zd2_1060 =
																								CAR(BgL_lz00_492);
																							if (PAIRP(BgL_carzd22378zd2_1060))
																								{	/* Jas/peep.scm 222 */
																									if (
																										(CAR(BgL_carzd22378zd2_1060)
																											== BINT(((long) 9))))
																										{	/* Jas/peep.scm 222 */
																											if (NULLP(CDR
																													(BgL_carzd22378zd2_1060)))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd22382zd2_1064;
																													BgL_carzd22382zd2_1064
																														=
																														CAR(CDR
																														(BgL_lz00_492));
																													if ((CAR
																															(BgL_carzd22382zd2_1064)
																															==
																															BINT(((long)
																																	136))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd22382zd2_1064)))
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21395zd2_508;
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											if (
																												(CAR
																													(BgL_carzd22378zd2_1060)
																													== BINT(((long) 10))))
																												{	/* Jas/peep.scm 222 */
																													if (NULLP(CDR
																															(BgL_carzd22378zd2_1060)))
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_carzd22390zd2_1075;
																															BgL_carzd22390zd2_1075
																																=
																																CAR(CDR
																																(BgL_lz00_492));
																															if ((CAR
																																	(BgL_carzd22390zd2_1075)
																																	==
																																	BINT(((long)
																																			136))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd22390zd2_1075)))
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21396zd2_509;
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd21397zd2_510;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd21397zd2_510;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd21397zd2_510;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	goto BgL_tagzd21397zd2_510;
																}
														}
												}
										}
									else
										{	/* Jas/peep.scm 222 */
											if (PAIRP(BgL_cdrzd21411zd2_515))
												{	/* Jas/peep.scm 222 */
													obj_t BgL_carzd22421zd2_1112;

													obj_t BgL_cdrzd22422zd2_1113;

													BgL_carzd22421zd2_1112 = CAR(BgL_cdrzd21411zd2_515);
													BgL_cdrzd22422zd2_1113 = CDR(BgL_cdrzd21411zd2_515);
													if (PAIRP(BgL_carzd22421zd2_1112))
														{	/* Jas/peep.scm 222 */
															if (
																(CAR(BgL_carzd22421zd2_1112) ==
																	BINT(((long) 4))))
																{	/* Jas/peep.scm 222 */
																	if (NULLP(CDR(BgL_carzd22421zd2_1112)))
																		{	/* Jas/peep.scm 222 */
																			if (PAIRP(BgL_cdrzd22422zd2_1113))
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_carzd22426zd2_1118;

																					BgL_carzd22426zd2_1118 =
																						CAR(BgL_cdrzd22422zd2_1113);
																					if (PAIRP(BgL_carzd22426zd2_1118))
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_cdrzd22430zd2_1120;

																							BgL_cdrzd22430zd2_1120 =
																								CDR(BgL_carzd22426zd2_1118);
																							if (
																								(CAR(BgL_carzd22426zd2_1118) ==
																									BINT(((long) 153))))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd22430zd2_1120))
																										{	/* Jas/peep.scm 222 */
																											if (NULLP(CDR
																													(BgL_cdrzd22430zd2_1120)))
																												{	/* Jas/peep.scm 222 */
																													{	/* Jas/peep.scm 222 */
																														obj_t
																															BgL_arg3078z00_2510;
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_pairz00_2511;
																															BgL_pairz00_2511 =
																																BgL_lz00_492;
																															BgL_arg3078z00_2510
																																=
																																CDR(CDR(CDR
																																	(BgL_pairz00_2511)));
																														}
																														SET_CDR
																															(BgL_lz00_492,
																															BgL_arg3078z00_2510);
																													}
																													{

																														goto
																															BgL_zc3anonymousza32223ze3z83_493;
																													}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							goto BgL_tagzd21397zd2_510;
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd21397zd2_510;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd21397zd2_510;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	obj_t BgL_cdrzd22479zd2_1131;

																	BgL_cdrzd22479zd2_1131 =
																		CDR(BgL_cdrzd21411zd2_515);
																	if (
																		(CAR(CAR(BgL_cdrzd21411zd2_515)) ==
																			BINT(((long) 178))))
																		{	/* Jas/peep.scm 222 */
																			if (PAIRP(BgL_cdrzd22479zd2_1131))
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_carzd22482zd2_1134;

																					BgL_carzd22482zd2_1134 =
																						CAR(BgL_cdrzd22479zd2_1131);
																					if (PAIRP(BgL_carzd22482zd2_1134))
																						{	/* Jas/peep.scm 222 */
																							if (
																								(CAR(BgL_carzd22482zd2_1134) ==
																									BINT(((long) 87))))
																								{	/* Jas/peep.scm 222 */
																									if (NULLP(CDR
																											(BgL_carzd22482zd2_1134)))
																										{	/* Jas/peep.scm 222 */
																											{	/* Jas/peep.scm 222 */
																												obj_t
																													BgL_arg3079z00_2531;
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_pairz00_2532;
																													BgL_pairz00_2532 =
																														BgL_lz00_492;
																													BgL_arg3079z00_2531 =
																														CDR(CDR(CDR
																															(BgL_pairz00_2532)));
																												}
																												SET_CDR(BgL_lz00_492,
																													BgL_arg3079z00_2531);
																											}
																											{

																												goto
																													BgL_zc3anonymousza32223ze3z83_493;
																											}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd22500zd2_1140;

																									BgL_carzd22500zd2_1140 =
																										CAR(BgL_cdrzd22479zd2_1131);
																									if (
																										(CAR(BgL_carzd22500zd2_1140)
																											== BINT(((long) 88))))
																										{	/* Jas/peep.scm 222 */
																											if (NULLP(CDR
																													(BgL_carzd22500zd2_1140)))
																												{	/* Jas/peep.scm 222 */
																													{	/* Jas/peep.scm 222 */
																														obj_t
																															BgL_arg3081z00_2548;
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_pairz00_2549;
																															BgL_pairz00_2549 =
																																BgL_lz00_492;
																															BgL_arg3081z00_2548
																																=
																																CDR(CDR(CDR
																																	(BgL_pairz00_2549)));
																														}
																														SET_CDR
																															(BgL_lz00_492,
																															BgL_arg3081z00_2548);
																													}
																													{

																														goto
																															BgL_zc3anonymousza32223ze3z83_493;
																													}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							goto BgL_tagzd21397zd2_510;
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd21397zd2_510;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd22513zd2_1151;

																			BgL_carzd22513zd2_1151 =
																				CAR(BgL_lz00_492);
																			if (PAIRP(BgL_carzd22513zd2_1151))
																				{	/* Jas/peep.scm 222 */
																					if (
																						(CAR(BgL_carzd22513zd2_1151) ==
																							BINT(((long) 9))))
																						{	/* Jas/peep.scm 222 */
																							if (NULLP(CDR
																									(BgL_carzd22513zd2_1151)))
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd22517zd2_1155;

																									BgL_carzd22517zd2_1155 =
																										CAR(BgL_cdrzd21411zd2_515);
																									if (
																										(CAR(BgL_carzd22517zd2_1155)
																											== BINT(((long) 136))))
																										{	/* Jas/peep.scm 222 */
																											if (NULLP(CDR
																													(BgL_carzd22517zd2_1155)))
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21395zd2_508;
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							if (
																								(CAR(BgL_carzd22513zd2_1151) ==
																									BINT(((long) 10))))
																								{	/* Jas/peep.scm 222 */
																									if (NULLP(CDR
																											(BgL_carzd22513zd2_1151)))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd22525zd2_1166;
																											BgL_carzd22525zd2_1166 =
																												CAR(CDR(BgL_lz00_492));
																											if ((CAR
																													(BgL_carzd22525zd2_1166)
																													==
																													BINT(((long) 136))))
																												{	/* Jas/peep.scm 222 */
																													if (NULLP(CDR
																															(BgL_carzd22525zd2_1166)))
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21396zd2_509;
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd21397zd2_510;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd21397zd2_510;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto
																												BgL_tagzd21397zd2_510;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd21397zd2_510;
																								}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd21397zd2_510;
																				}
																		}
																}
														}
													else
														{	/* Jas/peep.scm 222 */
															goto BgL_tagzd21397zd2_510;
														}
												}
											else
												{	/* Jas/peep.scm 222 */
													goto BgL_tagzd21397zd2_510;
												}
										}
								}
							else
								{	/* Jas/peep.scm 222 */
									goto BgL_tagzd21397zd2_510;
								}
						}
				}
			}
		}
	}



/* removebranch */
	obj_t BGl_removebranchz00zzjas_peepz00(obj_t BgL_codez00_21)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 228 */
			{	/* Jas/peep.scm 229 */
				obj_t BgL_donez00_1225;

				BgL_donez00_1225 = MAKE_CELL(BNIL);
				return
					BGl_walkz00zzjas_peepz00(BgL_codez00_21, BgL_donez00_1225,
					CNST_TABLE_REF(((long) 7)), BgL_codez00_21);
		}}
	}



/* <anonymous:3117> */
	obj_t BGl_zc3anonymousza33117ze3z83zzjas_peepz00(obj_t BgL_head1921z00_2811,
		obj_t BgL_l1919z00_1275, obj_t BgL_tail1922z00_1276)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 253 */
		BGl_zc3anonymousza33117ze3z83zzjas_peepz00:
			if (NULLP(BgL_l1919z00_1275))
				{	/* Jas/peep.scm 253 */
					return CDR(BgL_head1921z00_2811);
				}
			else
				{	/* Jas/peep.scm 253 */
					obj_t BgL_newtail1923z00_1279;

					BgL_newtail1923z00_1279 =
						MAKE_PAIR(bgl_append2(CAR(BgL_l1919z00_1275), BNIL), BNIL);
					SET_CDR(BgL_tail1922z00_1276, BgL_newtail1923z00_1279);
					{
						obj_t BgL_tail1922z00_4084;

						obj_t BgL_l1919z00_4082;

						BgL_l1919z00_4082 = CDR(BgL_l1919z00_1275);
						BgL_tail1922z00_4084 = BgL_newtail1923z00_1279;
						BgL_tail1922z00_1276 = BgL_tail1922z00_4084;
						BgL_l1919z00_1275 = BgL_l1919z00_4082;
						goto BGl_zc3anonymousza33117ze3z83zzjas_peepz00;
					}
				}
		}
	}



/* collect */
	obj_t BGl_collectz00zzjas_peepz00(obj_t BgL_lz00_1230, obj_t BgL_fromz00_1231,
		obj_t BgL_rz00_1232, long BgL_nz00_1233)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 235 */
		BGl_collectz00zzjas_peepz00:
			{	/* Jas/peep.scm 231 */
				bool_t BgL_testz00_4085;

				if (NULLP(BgL_lz00_1230))
					{	/* Jas/peep.scm 231 */
						BgL_testz00_4085 = ((bool_t) 1);
					}
				else
					{	/* Jas/peep.scm 231 */
						if ((BgL_nz00_1233 > ((long) 5)))
							{	/* Jas/peep.scm 231 */
								BgL_testz00_4085 = ((bool_t) 1);
							}
						else
							{	/* Jas/peep.scm 231 */
								BgL_testz00_4085 = (CAR(BgL_lz00_1230) == BgL_fromz00_1231);
							}
					}
				if (BgL_testz00_4085)
					{	/* Jas/peep.scm 231 */
						return BFALSE;
					}
				else
					{	/* Jas/peep.scm 232 */
						bool_t BgL_testz00_4092;

						{	/* Jas/peep.scm 232 */
							obj_t BgL_auxz00_4093;

							BgL_auxz00_4093 = CAR(BgL_lz00_1230);
							BgL_testz00_4092 = SYMBOLP(BgL_auxz00_4093);
						}
						if (BgL_testz00_4092)
							{
								obj_t BgL_lz00_4096;

								BgL_lz00_4096 = CDR(BgL_lz00_1230);
								BgL_lz00_1230 = BgL_lz00_4096;
								goto BGl_collectz00zzjas_peepz00;
							}
						else
							{	/* Jas/peep.scm 232 */
								if (BGl_hugezf3zf3zzjas_peepz00(CAR(BgL_lz00_1230)))
									{	/* Jas/peep.scm 233 */
										return BFALSE;
									}
								else
									{	/* Jas/peep.scm 233 */
										if (CBOOL(BGl_nocontzf3zf3zzjas_peepz00(CAR
													(BgL_lz00_1230))))
											{	/* Jas/peep.scm 234 */
												obj_t BgL_arg3093z00_1240;

												BgL_arg3093z00_1240 =
													MAKE_PAIR(CAR(BgL_lz00_1230), BgL_rz00_1232);
												return bgl_reverse_bang(BgL_arg3093z00_1240);
											}
										else
											{	/* Jas/peep.scm 235 */
												obj_t BgL_arg3095z00_1242;

												obj_t BgL_arg3096z00_1243;

												long BgL_arg3097z00_1244;

												BgL_arg3095z00_1242 = CDR(BgL_lz00_1230);
												BgL_arg3096z00_1243 =
													MAKE_PAIR(CAR(BgL_lz00_1230), BgL_rz00_1232);
												BgL_arg3097z00_1244 = (BgL_nz00_1233 + ((long) 1));
												{
													long BgL_nz00_4114;

													obj_t BgL_rz00_4113;

													obj_t BgL_lz00_4112;

													BgL_lz00_4112 = BgL_arg3095z00_1242;
													BgL_rz00_4113 = BgL_arg3096z00_1243;
													BgL_nz00_4114 = BgL_arg3097z00_1244;
													BgL_nz00_1233 = BgL_nz00_4114;
													BgL_rz00_1232 = BgL_rz00_4113;
													BgL_lz00_1230 = BgL_lz00_4112;
													goto BGl_collectz00zzjas_peepz00;
												}
											}
									}
							}
					}
			}
		}
	}



/* walk */
	obj_t BGl_walkz00zzjas_peepz00(obj_t BgL_codez00_2813, obj_t BgL_donez00_2812,
		obj_t BgL_fromz00_1260, obj_t BgL_lz00_1261)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 258 */
		BGl_walkz00zzjas_peepz00:
			if (NULLP(BgL_lz00_1261))
				{	/* Jas/peep.scm 244 */
					return CNST_TABLE_REF(((long) 8));
				}
			else
				{	/* Jas/peep.scm 245 */
					bool_t BgL_testz00_4118;

					{	/* Jas/peep.scm 245 */
						obj_t BgL_auxz00_4119;

						BgL_auxz00_4119 = CAR(BgL_lz00_1261);
						BgL_testz00_4118 = SYMBOLP(BgL_auxz00_4119);
					}
					if (BgL_testz00_4118)
						{	/* Jas/peep.scm 246 */
							obj_t BgL_arg3113z00_1265;

							obj_t BgL_arg3114z00_1266;

							BgL_arg3113z00_1265 = CAR(BgL_lz00_1261);
							BgL_arg3114z00_1266 = CDR(BgL_lz00_1261);
							return
								BGl_walkzd2fromzd2zzjas_peepz00(BgL_donez00_2812,
								BgL_codez00_2813, BgL_arg3113z00_1265, BgL_arg3114z00_1266);
						}
					else
						{	/* Jas/peep.scm 247 */
							bool_t BgL_testz00_4125;

							{	/* Jas/peep.scm 247 */
								long BgL_auxz00_4126;

								{	/* Jas/peep.scm 247 */
									obj_t BgL_pairz00_2688;

									BgL_pairz00_2688 = CAR(BgL_lz00_1261);
									BgL_auxz00_4126 = (long) CINT(CAR(BgL_pairz00_2688));
								}
								BgL_testz00_4125 = (BgL_auxz00_4126 == ((long) 167));
							}
							if (BgL_testz00_4125)
								{	/* Jas/peep.scm 248 */
									obj_t BgL_labz00_1268;

									obj_t BgL_nextz00_1269;

									{	/* Jas/peep.scm 248 */
										obj_t BgL_pairz00_2691;

										BgL_pairz00_2691 = BgL_lz00_1261;
										BgL_labz00_1268 = CAR(CDR(CAR(BgL_pairz00_2691)));
									}
									BgL_nextz00_1269 = CDR(BgL_lz00_1261);
									BGl_walkzd2atzd2labz00zzjas_peepz00(BgL_codez00_2813,
										BgL_donez00_2812, BgL_labz00_1268);
									{	/* Jas/peep.scm 251 */
										obj_t BgL_dupz00_1270;

										BgL_dupz00_1270 =
											BGl_collectz00zzjas_peepz00
											(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_labz00_1268,
												BgL_codez00_2813), BgL_fromz00_1260, BNIL, ((long) 0));
										if (CBOOL(BgL_dupz00_1270))
											{	/* Jas/peep.scm 252 */
												{	/* Jas/peep.scm 253 */
													obj_t BgL_l1919z00_1271;

													BgL_l1919z00_1271 = BgL_dupz00_1270;
													if (NULLP(BgL_l1919z00_1271))
														{	/* Jas/peep.scm 253 */
															BgL_dupz00_1270 = BNIL;
														}
													else
														{	/* Jas/peep.scm 253 */
															obj_t BgL_head1921z00_1273;

															BgL_head1921z00_1273 = MAKE_PAIR(BNIL, BNIL);
															BgL_dupz00_1270 =
																BGl_zc3anonymousza33117ze3z83zzjas_peepz00
																(BgL_head1921z00_1273, BgL_l1919z00_1271,
																BgL_head1921z00_1273);
														}
												}
												{	/* Jas/peep.scm 255 */
													obj_t BgL_auxz00_4144;

													BgL_auxz00_4144 = CAR(BgL_dupz00_1270);
													SET_CAR(BgL_lz00_1261, BgL_auxz00_4144);
												}
												{	/* Jas/peep.scm 256 */
													obj_t BgL_auxz00_4147;

													BgL_auxz00_4147 =
														bgl_append2(CDR(BgL_dupz00_1270), BgL_nextz00_1269);
													SET_CDR(BgL_lz00_1261, BgL_auxz00_4147);
												}
											}
										else
											{	/* Jas/peep.scm 252 */
												BFALSE;
											}
										{
											obj_t BgL_lz00_4151;

											BgL_lz00_4151 = BgL_nextz00_1269;
											BgL_lz00_1261 = BgL_lz00_4151;
											goto BGl_walkz00zzjas_peepz00;
										}
									}
								}
							else
								{	/* Jas/peep.scm 258 */
									obj_t BgL_arg3128z00_1291;

									BgL_arg3128z00_1291 = CDR(BgL_lz00_1261);
									{
										obj_t BgL_lz00_4153;

										BgL_lz00_4153 = BgL_arg3128z00_1291;
										BgL_lz00_1261 = BgL_lz00_4153;
										goto BGl_walkz00zzjas_peepz00;
									}
								}
						}
				}
		}
	}



/* walk-from */
	obj_t BGl_walkzd2fromzd2zzjas_peepz00(obj_t BgL_donez00_2815,
		obj_t BgL_codez00_2814, obj_t BgL_fromz00_1256, obj_t BgL_lz00_1257)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 242 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_fromz00_1256,
						CELL_REF(BgL_donez00_2815))))
				{	/* Jas/peep.scm 239 */
					return CNST_TABLE_REF(((long) 8));
				}
			else
				{	/* Jas/peep.scm 239 */
					{	/* Jas/peep.scm 241 */
						obj_t BgL_auxz00_2816;

						BgL_auxz00_2816 =
							MAKE_PAIR(BgL_fromz00_1256, CELL_REF(BgL_donez00_2815));
						CELL_SET(BgL_donez00_2815, BgL_auxz00_2816);
					}
					return
						BGl_walkz00zzjas_peepz00(BgL_codez00_2814, BgL_donez00_2815,
						BgL_fromz00_1256, BgL_lz00_1257);
				}
		}
	}



/* walk-at-lab */
	obj_t BGl_walkzd2atzd2labz00zzjas_peepz00(obj_t BgL_codez00_2818,
		obj_t BgL_donez00_2817, obj_t BgL_labz00_1252)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 237 */
			{	/* Jas/peep.scm 237 */
				obj_t BgL_arg3106z00_1254;

				BgL_arg3106z00_1254 =
					CDR(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_labz00_1252,
						BgL_codez00_2818));
				return BGl_walkzd2fromzd2zzjas_peepz00(BgL_donez00_2817,
					BgL_codez00_2818, BgL_labz00_1252, BgL_arg3106z00_1254);
			}
		}
	}



/* removesequence */
	obj_t BGl_removesequencez00zzjas_peepz00(obj_t BgL_codez00_22)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 264 */
			{
				obj_t BgL_codez00_1347;

				{	/* Jas/peep.scm 294 */
					obj_t BgL_envz00_1301;

					BgL_codez00_1347 = BgL_codez00_22;
					{
						obj_t BgL_codez00_1351;

						obj_t BgL_accz00_1352;

						BgL_codez00_1351 = BgL_codez00_1347;
						BgL_accz00_1352 = BNIL;
					BgL_zc3anonymousza33167ze3z83_1353:
						if (NULLP(BgL_codez00_1351))
							{	/* Jas/peep.scm 268 */
								BgL_envz00_1301 = BgL_accz00_1352;
							}
						else
							{	/* Jas/peep.scm 269 */
								bool_t BgL_testz00_4165;

								{	/* Jas/peep.scm 269 */
									obj_t BgL_auxz00_4166;

									BgL_auxz00_4166 = CAR(BgL_codez00_1351);
									BgL_testz00_4165 = SYMBOLP(BgL_auxz00_4166);
								}
								if (BgL_testz00_4165)
									{	/* Jas/peep.scm 270 */
										obj_t BgL_arg3170z00_1356;

										obj_t BgL_arg3171z00_1357;

										BgL_arg3170z00_1356 = CDR(BgL_codez00_1351);
										{	/* Jas/peep.scm 270 */
											obj_t BgL_arg3172z00_1358;

											BgL_arg3172z00_1358 =
												MAKE_PAIR(CAR(BgL_codez00_1351), BINT(((long) 0)));
											BgL_arg3171z00_1357 =
												MAKE_PAIR(BgL_arg3172z00_1358, BgL_accz00_1352);
										}
										{
											obj_t BgL_accz00_4175;

											obj_t BgL_codez00_4174;

											BgL_codez00_4174 = BgL_arg3170z00_1356;
											BgL_accz00_4175 = BgL_arg3171z00_1357;
											BgL_accz00_1352 = BgL_accz00_4175;
											BgL_codez00_1351 = BgL_codez00_4174;
											goto BgL_zc3anonymousza33167ze3z83_1353;
										}
									}
								else
									{
										obj_t BgL_codez00_4176;

										BgL_codez00_4176 = CDR(BgL_codez00_1351);
										BgL_codez00_1351 = BgL_codez00_4176;
										goto BgL_zc3anonymousza33167ze3z83_1353;
									}
							}
					}
					{
						obj_t BgL_prevz00_1312;

						obj_t BgL_codez00_1313;

						obj_t BgL_prevz00_1326;

						obj_t BgL_codez00_1327;

						{
							obj_t BgL_l1928z00_1305;

							BgL_l1928z00_1305 = BgL_codez00_22;
						BgL_zc3anonymousza33131ze3z83_1306:
							if (PAIRP(BgL_l1928z00_1305))
								{	/* Jas/peep.scm 313 */
									BGl_countzd2inszd2zzjas_peepz00(CAR(BgL_l1928z00_1305),
										BgL_envz00_1301);
									{
										obj_t BgL_l1928z00_4182;

										BgL_l1928z00_4182 = CDR(BgL_l1928z00_1305);
										BgL_l1928z00_1305 = BgL_l1928z00_4182;
										goto BgL_zc3anonymousza33131ze3z83_1306;
									}
								}
							else
								{	/* Jas/peep.scm 313 */
									((bool_t) 1);
								}
						}
						{	/* Jas/peep.scm 314 */
							obj_t BgL_arg3134z00_1311;

							BgL_arg3134z00_1311 =
								MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BgL_codez00_22);
							BgL_prevz00_1326 = BgL_arg3134z00_1311;
							BgL_codez00_1327 = BgL_codez00_22;
						BgL_zc3anonymousza33147ze3z83_1328:
							if (NULLP(BgL_codez00_1327))
								{	/* Jas/peep.scm 305 */
									return CNST_TABLE_REF(((long) 2));
								}
							else
								{	/* Jas/peep.scm 306 */
									bool_t BgL_testz00_4189;

									{	/* Jas/peep.scm 306 */
										bool_t BgL_testz00_4190;

										{	/* Jas/peep.scm 306 */
											obj_t BgL_auxz00_4191;

											BgL_auxz00_4191 = CAR(BgL_codez00_1327);
											BgL_testz00_4190 = SYMBOLP(BgL_auxz00_4191);
										}
										if (BgL_testz00_4190)
											{	/* Jas/peep.scm 306 */
												BgL_testz00_4189 =
													BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(((long) 0)),
													CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CAR
															(BgL_codez00_1327), BgL_envz00_1301)));
											}
										else
											{	/* Jas/peep.scm 306 */
												BgL_testz00_4189 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_4189)
										{	/* Jas/peep.scm 306 */
											{	/* Jas/peep.scm 308 */
												obj_t BgL_auxz00_4199;

												BgL_auxz00_4199 = CDR(BgL_codez00_1327);
												SET_CDR(BgL_prevz00_1326, BgL_auxz00_4199);
											}
											{
												obj_t BgL_codez00_4202;

												BgL_codez00_4202 = CDR(BgL_codez00_1327);
												BgL_codez00_1327 = BgL_codez00_4202;
												goto BgL_zc3anonymousza33147ze3z83_1328;
											}
										}
									else
										{	/* Jas/peep.scm 310 */
											bool_t BgL_testz00_4204;

											{	/* Jas/peep.scm 310 */
												bool_t BgL_testz00_4205;

												{	/* Jas/peep.scm 310 */
													obj_t BgL_auxz00_4206;

													BgL_auxz00_4206 = CAR(BgL_codez00_1327);
													BgL_testz00_4205 = PAIRP(BgL_auxz00_4206);
												}
												if (BgL_testz00_4205)
													{	/* Jas/peep.scm 310 */
														BgL_testz00_4204 =
															CBOOL(BGl_nocontzf3zf3zzjas_peepz00(CAR
																(BgL_codez00_1327)));
													}
												else
													{	/* Jas/peep.scm 310 */
														BgL_testz00_4204 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_4204)
												{	/* Jas/peep.scm 310 */
													BgL_prevz00_1312 = BgL_codez00_1327;
													BgL_codez00_1313 = CDR(BgL_codez00_1327);
												BgL_zc3anonymousza33135ze3z83_1314:
													if (NULLP(BgL_codez00_1313))
														{	/* Jas/peep.scm 296 */
															return SET_CDR(BgL_prevz00_1312, BNIL);
														}
													else
														{	/* Jas/peep.scm 298 */
															bool_t BgL_testz00_4215;

															{	/* Jas/peep.scm 298 */
																obj_t BgL_auxz00_4216;

																BgL_auxz00_4216 = CAR(BgL_codez00_1313);
																BgL_testz00_4215 = SYMBOLP(BgL_auxz00_4216);
															}
															if (BgL_testz00_4215)
																{	/* Jas/peep.scm 298 */
																	if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT((
																					(long) 0)),
																			CDR
																			(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(CAR(BgL_codez00_1313),
																					BgL_envz00_1301))))
																		{
																			obj_t BgL_codez00_4225;

																			BgL_codez00_4225 = CDR(BgL_codez00_1313);
																			BgL_codez00_1313 = BgL_codez00_4225;
																			goto BgL_zc3anonymousza33135ze3z83_1314;
																		}
																	else
																		{	/* Jas/peep.scm 299 */
																			SET_CDR(BgL_prevz00_1312,
																				BgL_codez00_1313);
																			{
																				obj_t BgL_codez00_4229;

																				obj_t BgL_prevz00_4228;

																				BgL_prevz00_4228 = BgL_codez00_1313;
																				BgL_codez00_4229 =
																					CDR(BgL_codez00_1313);
																				BgL_codez00_1327 = BgL_codez00_4229;
																				BgL_prevz00_1326 = BgL_prevz00_4228;
																				goto BgL_zc3anonymousza33147ze3z83_1328;
																			}
																		}
																}
															else
																{
																	obj_t BgL_codez00_4231;

																	BgL_codez00_4231 = CDR(BgL_codez00_1313);
																	BgL_codez00_1313 = BgL_codez00_4231;
																	goto BgL_zc3anonymousza33135ze3z83_1314;
																}
														}
												}
											else
												{
													obj_t BgL_codez00_4235;

													obj_t BgL_prevz00_4234;

													BgL_prevz00_4234 = BgL_codez00_1327;
													BgL_codez00_4235 = CDR(BgL_codez00_1327);
													BgL_codez00_1327 = BgL_codez00_4235;
													BgL_prevz00_1326 = BgL_prevz00_4234;
													goto BgL_zc3anonymousza33147ze3z83_1328;
												}
										}
								}
						}
					}
				}
			}
		}
	}



/* count-lab */
	obj_t BGl_countzd2labzd2zzjas_peepz00(obj_t BgL_labz00_1364,
		obj_t BgL_envz00_1365)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 275 */
			{	/* Jas/peep.scm 274 */
				obj_t BgL_slotz00_1367;

				BgL_slotz00_1367 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_labz00_1364,
					BgL_envz00_1365);
				{	/* Jas/peep.scm 275 */
					obj_t BgL_auxz00_4238;

					BgL_auxz00_4238 =
						BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
						CDR(BgL_slotz00_1367));
					return SET_CDR(BgL_slotz00_1367, BgL_auxz00_4238);
				}
			}
		}
	}



/* count-ins */
	obj_t BGl_countzd2inszd2zzjas_peepz00(obj_t BgL_insz00_1371,
		obj_t BgL_envz00_1372)
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 293 */
			{	/* Jas/peep.scm 277 */
				bool_t BgL_testz00_4243;

				if (PAIRP(BgL_insz00_1371))
					{	/* Jas/peep.scm 277 */
						BgL_testz00_4243 =
							CBOOL(BGl_singlezd2labzf3z21zzjas_peepz00(BgL_insz00_1371));
					}
				else
					{	/* Jas/peep.scm 277 */
						BgL_testz00_4243 = ((bool_t) 0);
					}
				if (BgL_testz00_4243)
					{	/* Jas/peep.scm 277 */
						return
							BGl_countzd2labzd2zzjas_peepz00(CAR(CDR(BgL_insz00_1371)),
							BgL_envz00_1372);
					}
				else
					{
						obj_t BgL_defz00_1376;

						obj_t BgL_labsz00_1377;

						obj_t BgL_defz00_1379;

						obj_t BgL_tablez00_1380;

						if (PAIRP(BgL_insz00_1371))
							{	/* Jas/peep.scm 279 */
								obj_t BgL_cdrzd22574zd2_1391;

								BgL_cdrzd22574zd2_1391 = CDR(BgL_insz00_1371);
								if ((CAR(BgL_insz00_1371) == BINT(((long) 170))))
									{	/* Jas/peep.scm 279 */
										if (PAIRP(BgL_cdrzd22574zd2_1391))
											{	/* Jas/peep.scm 279 */
												obj_t BgL_cdrzd22578zd2_1394;

												BgL_cdrzd22578zd2_1394 = CDR(BgL_cdrzd22574zd2_1391);
												if (PAIRP(BgL_cdrzd22578zd2_1394))
													{	/* Jas/peep.scm 279 */
														obj_t BgL_arg3189z00_1396;

														obj_t BgL_arg3190z00_1397;

														BgL_arg3189z00_1396 = CAR(BgL_cdrzd22574zd2_1391);
														BgL_arg3190z00_1397 = CDR(BgL_cdrzd22578zd2_1394);
														{	/* Jas/peep.scm 279 */
															bool_t BgL_auxz00_4265;

															BgL_defz00_1376 = BgL_arg3189z00_1396;
															BgL_labsz00_1377 = BgL_arg3190z00_1397;
															BGl_countzd2labzd2zzjas_peepz00(BgL_defz00_1376,
																BgL_envz00_1372);
															{
																obj_t BgL_l1924z00_1433;

																BgL_l1924z00_1433 = BgL_labsz00_1377;
															BgL_zc3anonymousza33218ze3z83_1434:
																if (PAIRP(BgL_l1924z00_1433))
																	{	/* Jas/peep.scm 282 */
																		BGl_countzd2labzd2zzjas_peepz00(CAR
																			(BgL_l1924z00_1433), BgL_envz00_1372);
																		{
																			obj_t BgL_l1924z00_4271;

																			BgL_l1924z00_4271 =
																				CDR(BgL_l1924z00_1433);
																			BgL_l1924z00_1433 = BgL_l1924z00_4271;
																			goto BgL_zc3anonymousza33218ze3z83_1434;
																		}
																	}
																else
																	{	/* Jas/peep.scm 282 */
																		BgL_auxz00_4265 = ((bool_t) 1);
																	}
															}
															return BBOOL(BgL_auxz00_4265);
														}
													}
												else
													{	/* Jas/peep.scm 279 */
														return BFALSE;
													}
											}
										else
											{	/* Jas/peep.scm 279 */
												return BFALSE;
											}
									}
								else
									{	/* Jas/peep.scm 279 */
										if ((CAR(BgL_insz00_1371) == BINT(((long) 171))))
											{	/* Jas/peep.scm 279 */
												if (PAIRP(BgL_cdrzd22574zd2_1391))
													{	/* Jas/peep.scm 279 */
														obj_t BgL_arg3193z00_1401;

														obj_t BgL_arg3194z00_1402;

														BgL_arg3193z00_1401 = CAR(BgL_cdrzd22574zd2_1391);
														BgL_arg3194z00_1402 = CDR(BgL_cdrzd22574zd2_1391);
														{	/* Jas/peep.scm 279 */
															bool_t BgL_auxz00_4282;

															BgL_defz00_1379 = BgL_arg3193z00_1401;
															BgL_tablez00_1380 = BgL_arg3194z00_1402;
															BGl_countzd2labzd2zzjas_peepz00(BgL_defz00_1379,
																BgL_envz00_1372);
															{
																obj_t BgL_l1926z00_1440;

																BgL_l1926z00_1440 = BgL_tablez00_1380;
															BgL_zc3anonymousza33221ze3z83_1441:
																if (PAIRP(BgL_l1926z00_1440))
																	{	/* Jas/peep.scm 285 */
																		{	/* Jas/peep.scm 285 */
																			obj_t BgL_slotz00_1443;

																			BgL_slotz00_1443 = CAR(BgL_l1926z00_1440);
																			BGl_countzd2labzd2zzjas_peepz00(CDR
																				(BgL_slotz00_1443), BgL_envz00_1372);
																		}
																		{
																			obj_t BgL_l1926z00_4289;

																			BgL_l1926z00_4289 =
																				CDR(BgL_l1926z00_1440);
																			BgL_l1926z00_1440 = BgL_l1926z00_4289;
																			goto BgL_zc3anonymousza33221ze3z83_1441;
																		}
																	}
																else
																	{	/* Jas/peep.scm 285 */
																		BgL_auxz00_4282 = ((bool_t) 1);
																	}
															}
															return BBOOL(BgL_auxz00_4282);
														}
													}
												else
													{	/* Jas/peep.scm 279 */
														return BFALSE;
													}
											}
										else
											{	/* Jas/peep.scm 279 */
												if ((CAR(BgL_insz00_1371) == BINT(((long) 205))))
													{	/* Jas/peep.scm 279 */
														if (PAIRP(BgL_cdrzd22574zd2_1391))
															{	/* Jas/peep.scm 279 */
																obj_t BgL_cdrzd22656zd2_1406;

																BgL_cdrzd22656zd2_1406 =
																	CDR(BgL_cdrzd22574zd2_1391);
																if (PAIRP(BgL_cdrzd22656zd2_1406))
																	{	/* Jas/peep.scm 279 */
																		obj_t BgL_arg3198z00_1408;

																		obj_t BgL_arg3199z00_1409;

																		BgL_arg3198z00_1408 =
																			CAR(BgL_cdrzd22574zd2_1391);
																		BgL_arg3199z00_1409 =
																			CAR(BgL_cdrzd22656zd2_1406);
																		BGl_countzd2labzd2zzjas_peepz00
																			(BgL_arg3198z00_1408, BgL_envz00_1372);
																		return
																			BGl_countzd2labzd2zzjas_peepz00
																			(BgL_arg3199z00_1409, BgL_envz00_1372);
																	}
																else
																	{	/* Jas/peep.scm 279 */
																		return BFALSE;
																	}
															}
														else
															{	/* Jas/peep.scm 279 */
																return BFALSE;
															}
													}
												else
													{	/* Jas/peep.scm 279 */
														if ((CAR(BgL_insz00_1371) == BINT(((long) 202))))
															{	/* Jas/peep.scm 279 */
																if (PAIRP(BgL_cdrzd22574zd2_1391))
																	{	/* Jas/peep.scm 279 */
																		obj_t BgL_cdrzd22686zd2_1413;

																		BgL_cdrzd22686zd2_1413 =
																			CDR(BgL_cdrzd22574zd2_1391);
																		if (PAIRP(BgL_cdrzd22686zd2_1413))
																			{	/* Jas/peep.scm 279 */
																				obj_t BgL_cdrzd22691zd2_1415;

																				BgL_cdrzd22691zd2_1415 =
																					CDR(BgL_cdrzd22686zd2_1413);
																				if (PAIRP(BgL_cdrzd22691zd2_1415))
																					{	/* Jas/peep.scm 279 */
																						obj_t BgL_cdrzd22695zd2_1417;

																						BgL_cdrzd22695zd2_1417 =
																							CDR(BgL_cdrzd22691zd2_1415);
																						if (PAIRP(BgL_cdrzd22695zd2_1417))
																							{	/* Jas/peep.scm 279 */
																								if (NULLP(CDR
																										(BgL_cdrzd22695zd2_1417)))
																									{	/* Jas/peep.scm 279 */
																										obj_t BgL_arg3206z00_1420;

																										obj_t BgL_arg3207z00_1421;

																										obj_t BgL_arg3208z00_1422;

																										BgL_arg3206z00_1420 =
																											CAR
																											(BgL_cdrzd22574zd2_1391);
																										BgL_arg3207z00_1421 =
																											CAR
																											(BgL_cdrzd22686zd2_1413);
																										BgL_arg3208z00_1422 =
																											CAR
																											(BgL_cdrzd22691zd2_1415);
																										BGl_countzd2labzd2zzjas_peepz00
																											(BgL_arg3206z00_1420,
																											BgL_envz00_1372);
																										BGl_countzd2labzd2zzjas_peepz00
																											(BgL_arg3207z00_1421,
																											BgL_envz00_1372);
																										return
																											BGl_countzd2labzd2zzjas_peepz00
																											(BgL_arg3208z00_1422,
																											BgL_envz00_1372);
																									}
																								else
																									{	/* Jas/peep.scm 279 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Jas/peep.scm 279 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Jas/peep.scm 279 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Jas/peep.scm 279 */
																				return BFALSE;
																			}
																	}
																else
																	{	/* Jas/peep.scm 279 */
																		return BFALSE;
																	}
															}
														else
															{	/* Jas/peep.scm 279 */
																return BFALSE;
															}
													}
											}
									}
							}
						else
							{	/* Jas/peep.scm 279 */
								return BFALSE;
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_peepz00()
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_peepz00()
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_peepz00()
	{
		AN_OBJECT;
		{	/* Jas/peep.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 324206891),
				BSTRING_TO_STRING(BGl_string3240z00zzjas_peepz00));
			return
				BGl_modulezd2initializa7ationz75zzjas_stackz00(((long) 200211980),
				BSTRING_TO_STRING(BGl_string3240z00zzjas_peepz00));
		}
	}

#ifdef __cplusplus
}
#endif
