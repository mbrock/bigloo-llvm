/*===========================================================================*/
/*   (Ieee/control5.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/control5.scm -indent -o objs/obj_u/Ieee/control5.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(int, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl__z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(obj_t, obj_t);
	static obj_t
		BGl__z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(int);
	static obj_t BGl__callzd2withzd2valuesz00zz__r5_control_features_6_4z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00();
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00();
	static obj_t
		BGl__z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00(obj_t);
	static obj_t
		BGl__z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(int);
	static obj_t BGl__valuesz00zz__r5_control_features_6_4z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52getzd2mvalueszd2valzd2envz80zz__r5_control_features_6_4z00,
		BgL_bgl__za752getza7d2mvalue1528z00,
		BGl__z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52getzd2mvalueszd2numberzd2envz80zz__r5_control_features_6_4z00,
		BgL_bgl__za752getza7d2mvalue1529z00,
		BGl__z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2valueszd2envzd2zz__r5_control_features_6_4z00,
		BgL_bgl__callza7d2withza7d2v1530z00,
		BGl__callzd2withzd2valuesz00zz__r5_control_features_6_4z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52setzd2mvalueszd2numberz12zd2envz92zz__r5_control_features_6_4z00,
		BgL_bgl__za752setza7d2mvalue1531z00,
		BGl__z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1520z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1520za700za7za7_1532za7,
		"/tmp/bigloo/runtime/Ieee/control5.scm", 37);
	      DEFINE_STRING(BGl_string1521z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1521za700za7za7_1533za7, "_%set-mvalues-number!", 21);
	      DEFINE_STRING(BGl_string1522z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1522za700za7za7_1534za7, "int", 3);
	      DEFINE_STRING(BGl_string1523z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1523za700za7za7_1535za7, "_%get-mvalues-val", 17);
	      DEFINE_STRING(BGl_string1524z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1524za700za7za7_1536za7, "_%set-mvalues-val!", 18);
	      DEFINE_STRING(BGl_string1525z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1525za700za7za7_1537za7, "_call-with-values", 17);
	      DEFINE_STRING(BGl_string1526z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1526za700za7za7_1538za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1527z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1527za700za7za7_1539za7, "__r5_control_features_6_4", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valueszd2envzd2zz__r5_control_features_6_4z00,
		BgL_bgl__valuesza700za7za7__r51540za7, va_generic_entry,
		BGl__valuesz00zz__r5_control_features_6_4z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52setzd2mvalueszd2valz12zd2envz92zz__r5_control_features_6_4z00,
		BgL_bgl__za752setza7d2mvalue1541z00,
		BGl__z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00, 0L,
		BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long
		BgL_checksumz00_930, char *BgL_fromz00_931)
	{
		AN_OBJECT;
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00))
				{
					BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* %get-mvalues-number */
	BGL_EXPORTED_DEF int
		BGl_z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00()
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 66 */
			return BGL_MVALUES_NUMBER();
		}
	}



/* _%get-mvalues-number */
	obj_t BGl__z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_903)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 66 */
			return BINT(BGL_MVALUES_NUMBER());
		}
	}



/* %set-mvalues-number! */
	BGL_EXPORTED_DEF int
		BGl_z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(int
		BgL_nz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 72 */
			return BGL_MVALUES_NUMBER_SET(BgL_nz00_1);
		}
	}



/* _%set-mvalues-number! */
	obj_t BGl__z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_904, obj_t BgL_nz00_905)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 72 */
			{	/* Ieee/control5.scm 73 */
				int BgL_auxz00_940;

				{	/* Ieee/control5.scm 73 */
					int BgL_nz00_926;

					{	/* Ieee/control5.scm 73 */
						obj_t BgL_auxz00_941;

						if (INTEGERP(BgL_nz00_905))
							{	/* Ieee/control5.scm 73 */
								BgL_auxz00_941 = BgL_nz00_905;
							}
						else
							{
								obj_t BgL_auxz00_944;

								BgL_auxz00_944 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1520z00zz__r5_control_features_6_4z00,
									BINT(((long) 2768)),
									BGl_string1521z00zz__r5_control_features_6_4z00,
									BGl_string1522z00zz__r5_control_features_6_4z00,
									BgL_nz00_905);
								FAILURE(BgL_auxz00_944, BFALSE, BFALSE);
							}
						BgL_nz00_926 = CINT(BgL_auxz00_941);
					}
					BgL_auxz00_940 = BGL_MVALUES_NUMBER_SET(BgL_nz00_926);
				}
				return BINT(BgL_auxz00_940);
			}
		}
	}



/* %get-mvalues-val */
	BGL_EXPORTED_DEF obj_t
		BGl_z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(int BgL_nz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 78 */
			return BGL_MVALUES_VAL(BgL_nz00_2);
		}
	}



/* _%get-mvalues-val */
	obj_t BGl__z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_906, obj_t BgL_nz00_907)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 78 */
			{	/* Ieee/control5.scm 79 */
				int BgL_nz00_927;

				{	/* Ieee/control5.scm 79 */
					obj_t BgL_auxz00_952;

					if (INTEGERP(BgL_nz00_907))
						{	/* Ieee/control5.scm 79 */
							BgL_auxz00_952 = BgL_nz00_907;
						}
					else
						{
							obj_t BgL_auxz00_955;

							BgL_auxz00_955 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1520z00zz__r5_control_features_6_4z00,
								BINT(((long) 3056)),
								BGl_string1523z00zz__r5_control_features_6_4z00,
								BGl_string1522z00zz__r5_control_features_6_4z00, BgL_nz00_907);
							FAILURE(BgL_auxz00_955, BFALSE, BFALSE);
						}
					BgL_nz00_927 = CINT(BgL_auxz00_952);
				}
				return BGL_MVALUES_VAL(BgL_nz00_927);
			}
		}
	}



/* %set-mvalues-val! */
	BGL_EXPORTED_DEF obj_t
		BGl_z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(int
		BgL_nz00_3, obj_t BgL_oz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 84 */
			return BGL_MVALUES_VAL_SET(BgL_nz00_3, BgL_oz00_4);
		}
	}



/* _%set-mvalues-val! */
	obj_t BGl__z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_908, obj_t BgL_nz00_909, obj_t BgL_oz00_910)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 84 */
			{	/* Ieee/control5.scm 85 */
				int BgL_nz00_928;

				{	/* Ieee/control5.scm 85 */
					obj_t BgL_auxz00_962;

					if (INTEGERP(BgL_nz00_909))
						{	/* Ieee/control5.scm 85 */
							BgL_auxz00_962 = BgL_nz00_909;
						}
					else
						{
							obj_t BgL_auxz00_965;

							BgL_auxz00_965 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1520z00zz__r5_control_features_6_4z00,
								BINT(((long) 3343)),
								BGl_string1524z00zz__r5_control_features_6_4z00,
								BGl_string1522z00zz__r5_control_features_6_4z00, BgL_nz00_909);
							FAILURE(BgL_auxz00_965, BFALSE, BFALSE);
						}
					BgL_nz00_928 = CINT(BgL_auxz00_962);
				}
				return BGL_MVALUES_VAL_SET(BgL_nz00_928, BgL_oz00_910);
			}
		}
	}



/* values */
	BGL_EXPORTED_DEF obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t
		BgL_argsz00_5)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 92 */
			if (NULLP(BgL_argsz00_5))
				{	/* Ieee/control5.scm 94 */
					int BgL_auxz00_973;

					{	/* Ieee/control5.scm 94 */
						int BgL_auxz00_974;

						BgL_auxz00_974 = (int) (((long) 0));
						BgL_auxz00_973 = BGL_MVALUES_NUMBER_SET(BgL_auxz00_974);
					}
					return BINT(BgL_auxz00_973);
				}
			else
				{	/* Ieee/control5.scm 93 */
					if (NULLP(CDR(BgL_argsz00_5)))
						{	/* Ieee/control5.scm 95 */
							{	/* Ieee/control5.scm 97 */
								int BgL_auxz00_981;

								BgL_auxz00_981 = (int) (((long) 1));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_981);
							}
							return CAR(BgL_argsz00_5);
						}
					else
						{	/* Ieee/control5.scm 99 */
							obj_t BgL_res0z00_375;

							BgL_res0z00_375 = CAR(BgL_argsz00_5);
							{	/* Ieee/control5.scm 101 */
								obj_t BgL_g1094z00_377;

								BgL_g1094z00_377 = CDR(BgL_argsz00_5);
								{
									long BgL_iz00_379;

									obj_t BgL_argsz00_380;

									BgL_iz00_379 = ((long) 1);
									BgL_argsz00_380 = BgL_g1094z00_377;
								BgL_zc3anonymousza31123ze3z83_381:
									if (NULLP(BgL_argsz00_380))
										{	/* Ieee/control5.scm 104 */
											{	/* Ieee/control5.scm 105 */
												int BgL_auxz00_989;

												BgL_auxz00_989 = (int) (BgL_iz00_379);
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_989);
											}
											return BgL_res0z00_375;
										}
									else
										{	/* Ieee/control5.scm 104 */
											if ((BgL_iz00_379 == ((long) 16)))
												{	/* Ieee/control5.scm 107 */
													{	/* Ieee/control5.scm 108 */
														int BgL_auxz00_994;

														BgL_auxz00_994 = (int) (((long) -1));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_994);
													}
													return BgL_argsz00_5;
												}
											else
												{	/* Ieee/control5.scm 107 */
													{	/* Ieee/control5.scm 111 */
														obj_t BgL_auxz00_999;

														int BgL_auxz00_997;

														BgL_auxz00_999 = CAR(BgL_argsz00_380);
														BgL_auxz00_997 = (int) (BgL_iz00_379);
														BGL_MVALUES_VAL_SET(BgL_auxz00_997, BgL_auxz00_999);
													}
													{
														obj_t BgL_argsz00_1004;

														long BgL_iz00_1002;

														BgL_iz00_1002 = (BgL_iz00_379 + ((long) 1));
														BgL_argsz00_1004 = CDR(BgL_argsz00_380);
														BgL_argsz00_380 = BgL_argsz00_1004;
														BgL_iz00_379 = BgL_iz00_1002;
														goto BgL_zc3anonymousza31123ze3z83_381;
													}
												}
										}
								}
							}
						}
				}
		}
	}



/* _values */
	obj_t BGl__valuesz00zz__r5_control_features_6_4z00(obj_t BgL_envz00_911,
		obj_t BgL_argsz00_912)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 92 */
			return BGl_valuesz00zz__r5_control_features_6_4z00(BgL_argsz00_912);
		}
	}



/* call-with-values */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00(obj_t
		BgL_producerz00_6, obj_t BgL_consumerz00_7)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 117 */
			{	/* Ieee/control5.scm 118 */
				int BgL_auxz00_1007;

				BgL_auxz00_1007 = (int) (((long) 1));
				BGL_MVALUES_NUMBER_SET(BgL_auxz00_1007);
			}
			{	/* Ieee/control5.scm 119 */
				obj_t BgL_res0z00_389;

				BgL_res0z00_389 =
					PROCEDURE_ENTRY(BgL_producerz00_6) (BgL_producerz00_6, BEOA);
				{	/* Ieee/control5.scm 120 */
					int BgL_aux1096z00_391;

					BgL_aux1096z00_391 = BGL_MVALUES_NUMBER();
					switch ((long) (BgL_aux1096z00_391))
						{
						case ((long) -1):

							return apply(BgL_consumerz00_7, BgL_res0z00_389);
							break;
						case ((long) 0):

							return
								PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7, BEOA);
							break;
						case ((long) 1):

							return
								PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
								BgL_res0z00_389, BEOA);
							break;
						case ((long) 2):

							{	/* Ieee/control5.scm 129 */
								obj_t BgL_arg1237z00_393;

								{	/* Ieee/control5.scm 129 */
									int BgL_auxz00_1019;

									BgL_auxz00_1019 = (int) (((long) 1));
									BgL_arg1237z00_393 = BGL_MVALUES_VAL(BgL_auxz00_1019);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1237z00_393, BEOA);
							}
							break;
						case ((long) 3):

							{	/* Ieee/control5.scm 132 */
								obj_t BgL_arg1238z00_394;

								obj_t BgL_arg1239z00_395;

								{	/* Ieee/control5.scm 132 */
									int BgL_auxz00_1024;

									BgL_auxz00_1024 = (int) (((long) 1));
									BgL_arg1238z00_394 = BGL_MVALUES_VAL(BgL_auxz00_1024);
								}
								{	/* Ieee/control5.scm 133 */
									int BgL_auxz00_1027;

									BgL_auxz00_1027 = (int) (((long) 2));
									BgL_arg1239z00_395 = BGL_MVALUES_VAL(BgL_auxz00_1027);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1238z00_394, BgL_arg1239z00_395,
									BEOA);
							}
							break;
						case ((long) 4):

							{	/* Ieee/control5.scm 136 */
								obj_t BgL_arg1240z00_396;

								obj_t BgL_arg1241z00_397;

								obj_t BgL_arg1242z00_398;

								{	/* Ieee/control5.scm 136 */
									int BgL_auxz00_1032;

									BgL_auxz00_1032 = (int) (((long) 1));
									BgL_arg1240z00_396 = BGL_MVALUES_VAL(BgL_auxz00_1032);
								}
								{	/* Ieee/control5.scm 137 */
									int BgL_auxz00_1035;

									BgL_auxz00_1035 = (int) (((long) 2));
									BgL_arg1241z00_397 = BGL_MVALUES_VAL(BgL_auxz00_1035);
								}
								{	/* Ieee/control5.scm 138 */
									int BgL_auxz00_1038;

									BgL_auxz00_1038 = (int) (((long) 3));
									BgL_arg1242z00_398 = BGL_MVALUES_VAL(BgL_auxz00_1038);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1240z00_396, BgL_arg1241z00_397,
									BgL_arg1242z00_398, BEOA);
							}
							break;
						case ((long) 5):

							{	/* Ieee/control5.scm 141 */
								obj_t BgL_arg1243z00_399;

								obj_t BgL_arg1244z00_400;

								obj_t BgL_arg1245z00_401;

								obj_t BgL_arg1246z00_402;

								{	/* Ieee/control5.scm 141 */
									int BgL_auxz00_1043;

									BgL_auxz00_1043 = (int) (((long) 1));
									BgL_arg1243z00_399 = BGL_MVALUES_VAL(BgL_auxz00_1043);
								}
								{	/* Ieee/control5.scm 142 */
									int BgL_auxz00_1046;

									BgL_auxz00_1046 = (int) (((long) 2));
									BgL_arg1244z00_400 = BGL_MVALUES_VAL(BgL_auxz00_1046);
								}
								{	/* Ieee/control5.scm 143 */
									int BgL_auxz00_1049;

									BgL_auxz00_1049 = (int) (((long) 3));
									BgL_arg1245z00_401 = BGL_MVALUES_VAL(BgL_auxz00_1049);
								}
								{	/* Ieee/control5.scm 144 */
									int BgL_auxz00_1052;

									BgL_auxz00_1052 = (int) (((long) 4));
									BgL_arg1246z00_402 = BGL_MVALUES_VAL(BgL_auxz00_1052);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1243z00_399, BgL_arg1244z00_400,
									BgL_arg1245z00_401, BgL_arg1246z00_402, BEOA);
							}
							break;
						case ((long) 6):

							{	/* Ieee/control5.scm 147 */
								obj_t BgL_arg1247z00_403;

								obj_t BgL_arg1248z00_404;

								obj_t BgL_arg1249z00_405;

								obj_t BgL_arg1250z00_406;

								obj_t BgL_arg1251z00_407;

								{	/* Ieee/control5.scm 147 */
									int BgL_auxz00_1057;

									BgL_auxz00_1057 = (int) (((long) 1));
									BgL_arg1247z00_403 = BGL_MVALUES_VAL(BgL_auxz00_1057);
								}
								{	/* Ieee/control5.scm 148 */
									int BgL_auxz00_1060;

									BgL_auxz00_1060 = (int) (((long) 2));
									BgL_arg1248z00_404 = BGL_MVALUES_VAL(BgL_auxz00_1060);
								}
								{	/* Ieee/control5.scm 149 */
									int BgL_auxz00_1063;

									BgL_auxz00_1063 = (int) (((long) 3));
									BgL_arg1249z00_405 = BGL_MVALUES_VAL(BgL_auxz00_1063);
								}
								{	/* Ieee/control5.scm 150 */
									int BgL_auxz00_1066;

									BgL_auxz00_1066 = (int) (((long) 4));
									BgL_arg1250z00_406 = BGL_MVALUES_VAL(BgL_auxz00_1066);
								}
								{	/* Ieee/control5.scm 151 */
									int BgL_auxz00_1069;

									BgL_auxz00_1069 = (int) (((long) 5));
									BgL_arg1251z00_407 = BGL_MVALUES_VAL(BgL_auxz00_1069);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1247z00_403, BgL_arg1248z00_404,
									BgL_arg1249z00_405, BgL_arg1250z00_406, BgL_arg1251z00_407,
									BEOA);
							}
							break;
						case ((long) 7):

							{	/* Ieee/control5.scm 154 */
								obj_t BgL_arg1252z00_408;

								obj_t BgL_arg1253z00_409;

								obj_t BgL_arg1254z00_410;

								obj_t BgL_arg1255z00_411;

								obj_t BgL_arg1256z00_412;

								obj_t BgL_arg1257z00_413;

								{	/* Ieee/control5.scm 154 */
									int BgL_auxz00_1074;

									BgL_auxz00_1074 = (int) (((long) 1));
									BgL_arg1252z00_408 = BGL_MVALUES_VAL(BgL_auxz00_1074);
								}
								{	/* Ieee/control5.scm 155 */
									int BgL_auxz00_1077;

									BgL_auxz00_1077 = (int) (((long) 2));
									BgL_arg1253z00_409 = BGL_MVALUES_VAL(BgL_auxz00_1077);
								}
								{	/* Ieee/control5.scm 156 */
									int BgL_auxz00_1080;

									BgL_auxz00_1080 = (int) (((long) 3));
									BgL_arg1254z00_410 = BGL_MVALUES_VAL(BgL_auxz00_1080);
								}
								{	/* Ieee/control5.scm 157 */
									int BgL_auxz00_1083;

									BgL_auxz00_1083 = (int) (((long) 4));
									BgL_arg1255z00_411 = BGL_MVALUES_VAL(BgL_auxz00_1083);
								}
								{	/* Ieee/control5.scm 158 */
									int BgL_auxz00_1086;

									BgL_auxz00_1086 = (int) (((long) 5));
									BgL_arg1256z00_412 = BGL_MVALUES_VAL(BgL_auxz00_1086);
								}
								{	/* Ieee/control5.scm 159 */
									int BgL_auxz00_1089;

									BgL_auxz00_1089 = (int) (((long) 6));
									BgL_arg1257z00_413 = BGL_MVALUES_VAL(BgL_auxz00_1089);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1252z00_408, BgL_arg1253z00_409,
									BgL_arg1254z00_410, BgL_arg1255z00_411, BgL_arg1256z00_412,
									BgL_arg1257z00_413, BEOA);
							}
							break;
						case ((long) 8):

							{	/* Ieee/control5.scm 162 */
								obj_t BgL_arg1258z00_414;

								obj_t BgL_arg1259z00_415;

								obj_t BgL_arg1260z00_416;

								obj_t BgL_arg1261z00_417;

								obj_t BgL_arg1262z00_418;

								obj_t BgL_arg1263z00_419;

								obj_t BgL_arg1264z00_420;

								{	/* Ieee/control5.scm 162 */
									int BgL_auxz00_1094;

									BgL_auxz00_1094 = (int) (((long) 1));
									BgL_arg1258z00_414 = BGL_MVALUES_VAL(BgL_auxz00_1094);
								}
								{	/* Ieee/control5.scm 163 */
									int BgL_auxz00_1097;

									BgL_auxz00_1097 = (int) (((long) 2));
									BgL_arg1259z00_415 = BGL_MVALUES_VAL(BgL_auxz00_1097);
								}
								{	/* Ieee/control5.scm 164 */
									int BgL_auxz00_1100;

									BgL_auxz00_1100 = (int) (((long) 3));
									BgL_arg1260z00_416 = BGL_MVALUES_VAL(BgL_auxz00_1100);
								}
								{	/* Ieee/control5.scm 165 */
									int BgL_auxz00_1103;

									BgL_auxz00_1103 = (int) (((long) 4));
									BgL_arg1261z00_417 = BGL_MVALUES_VAL(BgL_auxz00_1103);
								}
								{	/* Ieee/control5.scm 166 */
									int BgL_auxz00_1106;

									BgL_auxz00_1106 = (int) (((long) 5));
									BgL_arg1262z00_418 = BGL_MVALUES_VAL(BgL_auxz00_1106);
								}
								{	/* Ieee/control5.scm 167 */
									int BgL_auxz00_1109;

									BgL_auxz00_1109 = (int) (((long) 6));
									BgL_arg1263z00_419 = BGL_MVALUES_VAL(BgL_auxz00_1109);
								}
								{	/* Ieee/control5.scm 168 */
									int BgL_auxz00_1112;

									BgL_auxz00_1112 = (int) (((long) 7));
									BgL_arg1264z00_420 = BGL_MVALUES_VAL(BgL_auxz00_1112);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1258z00_414, BgL_arg1259z00_415,
									BgL_arg1260z00_416, BgL_arg1261z00_417, BgL_arg1262z00_418,
									BgL_arg1263z00_419, BgL_arg1264z00_420, BEOA);
							}
							break;
						case ((long) 9):

							{	/* Ieee/control5.scm 171 */
								obj_t BgL_arg1265z00_421;

								obj_t BgL_arg1266z00_422;

								obj_t BgL_arg1267z00_423;

								obj_t BgL_arg1268z00_424;

								obj_t BgL_arg1269z00_425;

								obj_t BgL_arg1270z00_426;

								obj_t BgL_arg1271z00_427;

								obj_t BgL_arg1273z00_428;

								{	/* Ieee/control5.scm 171 */
									int BgL_auxz00_1117;

									BgL_auxz00_1117 = (int) (((long) 1));
									BgL_arg1265z00_421 = BGL_MVALUES_VAL(BgL_auxz00_1117);
								}
								{	/* Ieee/control5.scm 172 */
									int BgL_auxz00_1120;

									BgL_auxz00_1120 = (int) (((long) 2));
									BgL_arg1266z00_422 = BGL_MVALUES_VAL(BgL_auxz00_1120);
								}
								{	/* Ieee/control5.scm 173 */
									int BgL_auxz00_1123;

									BgL_auxz00_1123 = (int) (((long) 3));
									BgL_arg1267z00_423 = BGL_MVALUES_VAL(BgL_auxz00_1123);
								}
								{	/* Ieee/control5.scm 174 */
									int BgL_auxz00_1126;

									BgL_auxz00_1126 = (int) (((long) 4));
									BgL_arg1268z00_424 = BGL_MVALUES_VAL(BgL_auxz00_1126);
								}
								{	/* Ieee/control5.scm 175 */
									int BgL_auxz00_1129;

									BgL_auxz00_1129 = (int) (((long) 5));
									BgL_arg1269z00_425 = BGL_MVALUES_VAL(BgL_auxz00_1129);
								}
								{	/* Ieee/control5.scm 176 */
									int BgL_auxz00_1132;

									BgL_auxz00_1132 = (int) (((long) 6));
									BgL_arg1270z00_426 = BGL_MVALUES_VAL(BgL_auxz00_1132);
								}
								{	/* Ieee/control5.scm 177 */
									int BgL_auxz00_1135;

									BgL_auxz00_1135 = (int) (((long) 7));
									BgL_arg1271z00_427 = BGL_MVALUES_VAL(BgL_auxz00_1135);
								}
								{	/* Ieee/control5.scm 178 */
									int BgL_auxz00_1138;

									BgL_auxz00_1138 = (int) (((long) 8));
									BgL_arg1273z00_428 = BGL_MVALUES_VAL(BgL_auxz00_1138);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1265z00_421, BgL_arg1266z00_422,
									BgL_arg1267z00_423, BgL_arg1268z00_424, BgL_arg1269z00_425,
									BgL_arg1270z00_426, BgL_arg1271z00_427, BgL_arg1273z00_428,
									BEOA);
							}
							break;
						case ((long) 10):

							{	/* Ieee/control5.scm 181 */
								obj_t BgL_arg1274z00_429;

								obj_t BgL_arg1275z00_430;

								obj_t BgL_arg1276z00_431;

								obj_t BgL_arg1277z00_432;

								obj_t BgL_arg1278z00_433;

								obj_t BgL_arg1279z00_434;

								obj_t BgL_arg1280z00_435;

								obj_t BgL_arg1281z00_436;

								obj_t BgL_arg1282z00_437;

								{	/* Ieee/control5.scm 181 */
									int BgL_auxz00_1143;

									BgL_auxz00_1143 = (int) (((long) 1));
									BgL_arg1274z00_429 = BGL_MVALUES_VAL(BgL_auxz00_1143);
								}
								{	/* Ieee/control5.scm 182 */
									int BgL_auxz00_1146;

									BgL_auxz00_1146 = (int) (((long) 2));
									BgL_arg1275z00_430 = BGL_MVALUES_VAL(BgL_auxz00_1146);
								}
								{	/* Ieee/control5.scm 183 */
									int BgL_auxz00_1149;

									BgL_auxz00_1149 = (int) (((long) 3));
									BgL_arg1276z00_431 = BGL_MVALUES_VAL(BgL_auxz00_1149);
								}
								{	/* Ieee/control5.scm 184 */
									int BgL_auxz00_1152;

									BgL_auxz00_1152 = (int) (((long) 4));
									BgL_arg1277z00_432 = BGL_MVALUES_VAL(BgL_auxz00_1152);
								}
								{	/* Ieee/control5.scm 185 */
									int BgL_auxz00_1155;

									BgL_auxz00_1155 = (int) (((long) 5));
									BgL_arg1278z00_433 = BGL_MVALUES_VAL(BgL_auxz00_1155);
								}
								{	/* Ieee/control5.scm 186 */
									int BgL_auxz00_1158;

									BgL_auxz00_1158 = (int) (((long) 6));
									BgL_arg1279z00_434 = BGL_MVALUES_VAL(BgL_auxz00_1158);
								}
								{	/* Ieee/control5.scm 187 */
									int BgL_auxz00_1161;

									BgL_auxz00_1161 = (int) (((long) 7));
									BgL_arg1280z00_435 = BGL_MVALUES_VAL(BgL_auxz00_1161);
								}
								{	/* Ieee/control5.scm 188 */
									int BgL_auxz00_1164;

									BgL_auxz00_1164 = (int) (((long) 8));
									BgL_arg1281z00_436 = BGL_MVALUES_VAL(BgL_auxz00_1164);
								}
								{	/* Ieee/control5.scm 189 */
									int BgL_auxz00_1167;

									BgL_auxz00_1167 = (int) (((long) 9));
									BgL_arg1282z00_437 = BGL_MVALUES_VAL(BgL_auxz00_1167);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1274z00_429, BgL_arg1275z00_430,
									BgL_arg1276z00_431, BgL_arg1277z00_432, BgL_arg1278z00_433,
									BgL_arg1279z00_434, BgL_arg1280z00_435, BgL_arg1281z00_436,
									BgL_arg1282z00_437, BEOA);
							}
							break;
						case ((long) 11):

							{	/* Ieee/control5.scm 192 */
								obj_t BgL_arg1283z00_438;

								obj_t BgL_arg1284z00_439;

								obj_t BgL_arg1285z00_440;

								obj_t BgL_arg1286z00_441;

								obj_t BgL_arg1287z00_442;

								obj_t BgL_arg1288z00_443;

								obj_t BgL_arg1289z00_444;

								obj_t BgL_arg1290z00_445;

								obj_t BgL_arg1291z00_446;

								obj_t BgL_arg1292z00_447;

								{	/* Ieee/control5.scm 192 */
									int BgL_auxz00_1172;

									BgL_auxz00_1172 = (int) (((long) 1));
									BgL_arg1283z00_438 = BGL_MVALUES_VAL(BgL_auxz00_1172);
								}
								{	/* Ieee/control5.scm 193 */
									int BgL_auxz00_1175;

									BgL_auxz00_1175 = (int) (((long) 2));
									BgL_arg1284z00_439 = BGL_MVALUES_VAL(BgL_auxz00_1175);
								}
								{	/* Ieee/control5.scm 194 */
									int BgL_auxz00_1178;

									BgL_auxz00_1178 = (int) (((long) 3));
									BgL_arg1285z00_440 = BGL_MVALUES_VAL(BgL_auxz00_1178);
								}
								{	/* Ieee/control5.scm 195 */
									int BgL_auxz00_1181;

									BgL_auxz00_1181 = (int) (((long) 4));
									BgL_arg1286z00_441 = BGL_MVALUES_VAL(BgL_auxz00_1181);
								}
								{	/* Ieee/control5.scm 196 */
									int BgL_auxz00_1184;

									BgL_auxz00_1184 = (int) (((long) 5));
									BgL_arg1287z00_442 = BGL_MVALUES_VAL(BgL_auxz00_1184);
								}
								{	/* Ieee/control5.scm 197 */
									int BgL_auxz00_1187;

									BgL_auxz00_1187 = (int) (((long) 6));
									BgL_arg1288z00_443 = BGL_MVALUES_VAL(BgL_auxz00_1187);
								}
								{	/* Ieee/control5.scm 198 */
									int BgL_auxz00_1190;

									BgL_auxz00_1190 = (int) (((long) 7));
									BgL_arg1289z00_444 = BGL_MVALUES_VAL(BgL_auxz00_1190);
								}
								{	/* Ieee/control5.scm 199 */
									int BgL_auxz00_1193;

									BgL_auxz00_1193 = (int) (((long) 8));
									BgL_arg1290z00_445 = BGL_MVALUES_VAL(BgL_auxz00_1193);
								}
								{	/* Ieee/control5.scm 200 */
									int BgL_auxz00_1196;

									BgL_auxz00_1196 = (int) (((long) 9));
									BgL_arg1291z00_446 = BGL_MVALUES_VAL(BgL_auxz00_1196);
								}
								{	/* Ieee/control5.scm 201 */
									int BgL_auxz00_1199;

									BgL_auxz00_1199 = (int) (((long) 10));
									BgL_arg1292z00_447 = BGL_MVALUES_VAL(BgL_auxz00_1199);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1283z00_438, BgL_arg1284z00_439,
									BgL_arg1285z00_440, BgL_arg1286z00_441, BgL_arg1287z00_442,
									BgL_arg1288z00_443, BgL_arg1289z00_444, BgL_arg1290z00_445,
									BgL_arg1291z00_446, BgL_arg1292z00_447, BEOA);
							}
							break;
						case ((long) 12):

							{	/* Ieee/control5.scm 204 */
								obj_t BgL_arg1293z00_448;

								obj_t BgL_arg1294z00_449;

								obj_t BgL_arg1295z00_450;

								obj_t BgL_arg1296z00_451;

								obj_t BgL_arg1297z00_452;

								obj_t BgL_arg1298z00_453;

								obj_t BgL_arg1299z00_454;

								obj_t BgL_arg1300z00_455;

								obj_t BgL_arg1301z00_456;

								obj_t BgL_arg1302z00_457;

								obj_t BgL_arg1303z00_458;

								{	/* Ieee/control5.scm 204 */
									int BgL_auxz00_1204;

									BgL_auxz00_1204 = (int) (((long) 1));
									BgL_arg1293z00_448 = BGL_MVALUES_VAL(BgL_auxz00_1204);
								}
								{	/* Ieee/control5.scm 205 */
									int BgL_auxz00_1207;

									BgL_auxz00_1207 = (int) (((long) 2));
									BgL_arg1294z00_449 = BGL_MVALUES_VAL(BgL_auxz00_1207);
								}
								{	/* Ieee/control5.scm 206 */
									int BgL_auxz00_1210;

									BgL_auxz00_1210 = (int) (((long) 3));
									BgL_arg1295z00_450 = BGL_MVALUES_VAL(BgL_auxz00_1210);
								}
								{	/* Ieee/control5.scm 207 */
									int BgL_auxz00_1213;

									BgL_auxz00_1213 = (int) (((long) 4));
									BgL_arg1296z00_451 = BGL_MVALUES_VAL(BgL_auxz00_1213);
								}
								{	/* Ieee/control5.scm 208 */
									int BgL_auxz00_1216;

									BgL_auxz00_1216 = (int) (((long) 5));
									BgL_arg1297z00_452 = BGL_MVALUES_VAL(BgL_auxz00_1216);
								}
								{	/* Ieee/control5.scm 209 */
									int BgL_auxz00_1219;

									BgL_auxz00_1219 = (int) (((long) 6));
									BgL_arg1298z00_453 = BGL_MVALUES_VAL(BgL_auxz00_1219);
								}
								{	/* Ieee/control5.scm 210 */
									int BgL_auxz00_1222;

									BgL_auxz00_1222 = (int) (((long) 7));
									BgL_arg1299z00_454 = BGL_MVALUES_VAL(BgL_auxz00_1222);
								}
								{	/* Ieee/control5.scm 211 */
									int BgL_auxz00_1225;

									BgL_auxz00_1225 = (int) (((long) 8));
									BgL_arg1300z00_455 = BGL_MVALUES_VAL(BgL_auxz00_1225);
								}
								{	/* Ieee/control5.scm 212 */
									int BgL_auxz00_1228;

									BgL_auxz00_1228 = (int) (((long) 9));
									BgL_arg1301z00_456 = BGL_MVALUES_VAL(BgL_auxz00_1228);
								}
								{	/* Ieee/control5.scm 213 */
									int BgL_auxz00_1231;

									BgL_auxz00_1231 = (int) (((long) 10));
									BgL_arg1302z00_457 = BGL_MVALUES_VAL(BgL_auxz00_1231);
								}
								{	/* Ieee/control5.scm 214 */
									int BgL_auxz00_1234;

									BgL_auxz00_1234 = (int) (((long) 11));
									BgL_arg1303z00_458 = BGL_MVALUES_VAL(BgL_auxz00_1234);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1293z00_448, BgL_arg1294z00_449,
									BgL_arg1295z00_450, BgL_arg1296z00_451, BgL_arg1297z00_452,
									BgL_arg1298z00_453, BgL_arg1299z00_454, BgL_arg1300z00_455,
									BgL_arg1301z00_456, BgL_arg1302z00_457, BgL_arg1303z00_458,
									BEOA);
							}
							break;
						case ((long) 13):

							{	/* Ieee/control5.scm 217 */
								obj_t BgL_arg1304z00_459;

								obj_t BgL_arg1305z00_460;

								obj_t BgL_arg1306z00_461;

								obj_t BgL_arg1307z00_462;

								obj_t BgL_arg1308z00_463;

								obj_t BgL_arg1309z00_464;

								obj_t BgL_arg1310z00_465;

								obj_t BgL_arg1311z00_466;

								obj_t BgL_arg1312z00_467;

								obj_t BgL_arg1313z00_468;

								obj_t BgL_arg1314z00_469;

								obj_t BgL_arg1315z00_470;

								{	/* Ieee/control5.scm 217 */
									int BgL_auxz00_1239;

									BgL_auxz00_1239 = (int) (((long) 1));
									BgL_arg1304z00_459 = BGL_MVALUES_VAL(BgL_auxz00_1239);
								}
								{	/* Ieee/control5.scm 218 */
									int BgL_auxz00_1242;

									BgL_auxz00_1242 = (int) (((long) 2));
									BgL_arg1305z00_460 = BGL_MVALUES_VAL(BgL_auxz00_1242);
								}
								{	/* Ieee/control5.scm 219 */
									int BgL_auxz00_1245;

									BgL_auxz00_1245 = (int) (((long) 3));
									BgL_arg1306z00_461 = BGL_MVALUES_VAL(BgL_auxz00_1245);
								}
								{	/* Ieee/control5.scm 220 */
									int BgL_auxz00_1248;

									BgL_auxz00_1248 = (int) (((long) 4));
									BgL_arg1307z00_462 = BGL_MVALUES_VAL(BgL_auxz00_1248);
								}
								{	/* Ieee/control5.scm 221 */
									int BgL_auxz00_1251;

									BgL_auxz00_1251 = (int) (((long) 5));
									BgL_arg1308z00_463 = BGL_MVALUES_VAL(BgL_auxz00_1251);
								}
								{	/* Ieee/control5.scm 222 */
									int BgL_auxz00_1254;

									BgL_auxz00_1254 = (int) (((long) 6));
									BgL_arg1309z00_464 = BGL_MVALUES_VAL(BgL_auxz00_1254);
								}
								{	/* Ieee/control5.scm 223 */
									int BgL_auxz00_1257;

									BgL_auxz00_1257 = (int) (((long) 7));
									BgL_arg1310z00_465 = BGL_MVALUES_VAL(BgL_auxz00_1257);
								}
								{	/* Ieee/control5.scm 224 */
									int BgL_auxz00_1260;

									BgL_auxz00_1260 = (int) (((long) 8));
									BgL_arg1311z00_466 = BGL_MVALUES_VAL(BgL_auxz00_1260);
								}
								{	/* Ieee/control5.scm 225 */
									int BgL_auxz00_1263;

									BgL_auxz00_1263 = (int) (((long) 9));
									BgL_arg1312z00_467 = BGL_MVALUES_VAL(BgL_auxz00_1263);
								}
								{	/* Ieee/control5.scm 226 */
									int BgL_auxz00_1266;

									BgL_auxz00_1266 = (int) (((long) 10));
									BgL_arg1313z00_468 = BGL_MVALUES_VAL(BgL_auxz00_1266);
								}
								{	/* Ieee/control5.scm 227 */
									int BgL_auxz00_1269;

									BgL_auxz00_1269 = (int) (((long) 11));
									BgL_arg1314z00_469 = BGL_MVALUES_VAL(BgL_auxz00_1269);
								}
								{	/* Ieee/control5.scm 228 */
									int BgL_auxz00_1272;

									BgL_auxz00_1272 = (int) (((long) 12));
									BgL_arg1315z00_470 = BGL_MVALUES_VAL(BgL_auxz00_1272);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1304z00_459, BgL_arg1305z00_460,
									BgL_arg1306z00_461, BgL_arg1307z00_462, BgL_arg1308z00_463,
									BgL_arg1309z00_464, BgL_arg1310z00_465, BgL_arg1311z00_466,
									BgL_arg1312z00_467, BgL_arg1313z00_468, BgL_arg1314z00_469,
									BgL_arg1315z00_470, BEOA);
							}
							break;
						case ((long) 14):

							{	/* Ieee/control5.scm 231 */
								obj_t BgL_arg1316z00_471;

								obj_t BgL_arg1317z00_472;

								obj_t BgL_arg1318z00_473;

								obj_t BgL_arg1319z00_474;

								obj_t BgL_arg1320z00_475;

								obj_t BgL_arg1321z00_476;

								obj_t BgL_arg1322z00_477;

								obj_t BgL_arg1323z00_478;

								obj_t BgL_arg1324z00_479;

								obj_t BgL_arg1325z00_480;

								obj_t BgL_arg1326z00_481;

								obj_t BgL_arg1327z00_482;

								obj_t BgL_arg1328z00_483;

								{	/* Ieee/control5.scm 231 */
									int BgL_auxz00_1277;

									BgL_auxz00_1277 = (int) (((long) 1));
									BgL_arg1316z00_471 = BGL_MVALUES_VAL(BgL_auxz00_1277);
								}
								{	/* Ieee/control5.scm 232 */
									int BgL_auxz00_1280;

									BgL_auxz00_1280 = (int) (((long) 2));
									BgL_arg1317z00_472 = BGL_MVALUES_VAL(BgL_auxz00_1280);
								}
								{	/* Ieee/control5.scm 233 */
									int BgL_auxz00_1283;

									BgL_auxz00_1283 = (int) (((long) 3));
									BgL_arg1318z00_473 = BGL_MVALUES_VAL(BgL_auxz00_1283);
								}
								{	/* Ieee/control5.scm 234 */
									int BgL_auxz00_1286;

									BgL_auxz00_1286 = (int) (((long) 4));
									BgL_arg1319z00_474 = BGL_MVALUES_VAL(BgL_auxz00_1286);
								}
								{	/* Ieee/control5.scm 235 */
									int BgL_auxz00_1289;

									BgL_auxz00_1289 = (int) (((long) 5));
									BgL_arg1320z00_475 = BGL_MVALUES_VAL(BgL_auxz00_1289);
								}
								{	/* Ieee/control5.scm 236 */
									int BgL_auxz00_1292;

									BgL_auxz00_1292 = (int) (((long) 6));
									BgL_arg1321z00_476 = BGL_MVALUES_VAL(BgL_auxz00_1292);
								}
								{	/* Ieee/control5.scm 237 */
									int BgL_auxz00_1295;

									BgL_auxz00_1295 = (int) (((long) 7));
									BgL_arg1322z00_477 = BGL_MVALUES_VAL(BgL_auxz00_1295);
								}
								{	/* Ieee/control5.scm 238 */
									int BgL_auxz00_1298;

									BgL_auxz00_1298 = (int) (((long) 8));
									BgL_arg1323z00_478 = BGL_MVALUES_VAL(BgL_auxz00_1298);
								}
								{	/* Ieee/control5.scm 239 */
									int BgL_auxz00_1301;

									BgL_auxz00_1301 = (int) (((long) 9));
									BgL_arg1324z00_479 = BGL_MVALUES_VAL(BgL_auxz00_1301);
								}
								{	/* Ieee/control5.scm 240 */
									int BgL_auxz00_1304;

									BgL_auxz00_1304 = (int) (((long) 10));
									BgL_arg1325z00_480 = BGL_MVALUES_VAL(BgL_auxz00_1304);
								}
								{	/* Ieee/control5.scm 241 */
									int BgL_auxz00_1307;

									BgL_auxz00_1307 = (int) (((long) 11));
									BgL_arg1326z00_481 = BGL_MVALUES_VAL(BgL_auxz00_1307);
								}
								{	/* Ieee/control5.scm 242 */
									int BgL_auxz00_1310;

									BgL_auxz00_1310 = (int) (((long) 12));
									BgL_arg1327z00_482 = BGL_MVALUES_VAL(BgL_auxz00_1310);
								}
								{	/* Ieee/control5.scm 243 */
									int BgL_auxz00_1313;

									BgL_auxz00_1313 = (int) (((long) 13));
									BgL_arg1328z00_483 = BGL_MVALUES_VAL(BgL_auxz00_1313);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1316z00_471, BgL_arg1317z00_472,
									BgL_arg1318z00_473, BgL_arg1319z00_474, BgL_arg1320z00_475,
									BgL_arg1321z00_476, BgL_arg1322z00_477, BgL_arg1323z00_478,
									BgL_arg1324z00_479, BgL_arg1325z00_480, BgL_arg1326z00_481,
									BgL_arg1327z00_482, BgL_arg1328z00_483, BEOA);
							}
							break;
						case ((long) 15):

							{	/* Ieee/control5.scm 246 */
								obj_t BgL_arg1329z00_484;

								obj_t BgL_arg1330z00_485;

								obj_t BgL_arg1333z00_486;

								obj_t BgL_arg1334z00_487;

								obj_t BgL_arg1335z00_488;

								obj_t BgL_arg1336z00_489;

								obj_t BgL_arg1337z00_490;

								obj_t BgL_arg1338z00_491;

								obj_t BgL_arg1339z00_492;

								obj_t BgL_arg1340z00_493;

								obj_t BgL_arg1341z00_494;

								obj_t BgL_arg1342z00_495;

								obj_t BgL_arg1343z00_496;

								obj_t BgL_arg1344z00_497;

								{	/* Ieee/control5.scm 246 */
									int BgL_auxz00_1318;

									BgL_auxz00_1318 = (int) (((long) 1));
									BgL_arg1329z00_484 = BGL_MVALUES_VAL(BgL_auxz00_1318);
								}
								{	/* Ieee/control5.scm 247 */
									int BgL_auxz00_1321;

									BgL_auxz00_1321 = (int) (((long) 2));
									BgL_arg1330z00_485 = BGL_MVALUES_VAL(BgL_auxz00_1321);
								}
								{	/* Ieee/control5.scm 248 */
									int BgL_auxz00_1324;

									BgL_auxz00_1324 = (int) (((long) 3));
									BgL_arg1333z00_486 = BGL_MVALUES_VAL(BgL_auxz00_1324);
								}
								{	/* Ieee/control5.scm 249 */
									int BgL_auxz00_1327;

									BgL_auxz00_1327 = (int) (((long) 4));
									BgL_arg1334z00_487 = BGL_MVALUES_VAL(BgL_auxz00_1327);
								}
								{	/* Ieee/control5.scm 250 */
									int BgL_auxz00_1330;

									BgL_auxz00_1330 = (int) (((long) 5));
									BgL_arg1335z00_488 = BGL_MVALUES_VAL(BgL_auxz00_1330);
								}
								{	/* Ieee/control5.scm 251 */
									int BgL_auxz00_1333;

									BgL_auxz00_1333 = (int) (((long) 6));
									BgL_arg1336z00_489 = BGL_MVALUES_VAL(BgL_auxz00_1333);
								}
								{	/* Ieee/control5.scm 252 */
									int BgL_auxz00_1336;

									BgL_auxz00_1336 = (int) (((long) 7));
									BgL_arg1337z00_490 = BGL_MVALUES_VAL(BgL_auxz00_1336);
								}
								{	/* Ieee/control5.scm 253 */
									int BgL_auxz00_1339;

									BgL_auxz00_1339 = (int) (((long) 8));
									BgL_arg1338z00_491 = BGL_MVALUES_VAL(BgL_auxz00_1339);
								}
								{	/* Ieee/control5.scm 254 */
									int BgL_auxz00_1342;

									BgL_auxz00_1342 = (int) (((long) 9));
									BgL_arg1339z00_492 = BGL_MVALUES_VAL(BgL_auxz00_1342);
								}
								{	/* Ieee/control5.scm 255 */
									int BgL_auxz00_1345;

									BgL_auxz00_1345 = (int) (((long) 10));
									BgL_arg1340z00_493 = BGL_MVALUES_VAL(BgL_auxz00_1345);
								}
								{	/* Ieee/control5.scm 256 */
									int BgL_auxz00_1348;

									BgL_auxz00_1348 = (int) (((long) 11));
									BgL_arg1341z00_494 = BGL_MVALUES_VAL(BgL_auxz00_1348);
								}
								{	/* Ieee/control5.scm 257 */
									int BgL_auxz00_1351;

									BgL_auxz00_1351 = (int) (((long) 12));
									BgL_arg1342z00_495 = BGL_MVALUES_VAL(BgL_auxz00_1351);
								}
								{	/* Ieee/control5.scm 258 */
									int BgL_auxz00_1354;

									BgL_auxz00_1354 = (int) (((long) 13));
									BgL_arg1343z00_496 = BGL_MVALUES_VAL(BgL_auxz00_1354);
								}
								{	/* Ieee/control5.scm 259 */
									int BgL_auxz00_1357;

									BgL_auxz00_1357 = (int) (((long) 14));
									BgL_arg1344z00_497 = BGL_MVALUES_VAL(BgL_auxz00_1357);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1329z00_484, BgL_arg1330z00_485,
									BgL_arg1333z00_486, BgL_arg1334z00_487, BgL_arg1335z00_488,
									BgL_arg1336z00_489, BgL_arg1337z00_490, BgL_arg1338z00_491,
									BgL_arg1339z00_492, BgL_arg1340z00_493, BgL_arg1341z00_494,
									BgL_arg1342z00_495, BgL_arg1343z00_496, BgL_arg1344z00_497,
									BEOA);
							}
							break;
						case ((long) 16):

							{	/* Ieee/control5.scm 262 */
								obj_t BgL_arg1345z00_498;

								obj_t BgL_arg1346z00_499;

								obj_t BgL_arg1347z00_500;

								obj_t BgL_arg1348z00_501;

								obj_t BgL_arg1349z00_502;

								obj_t BgL_arg1354z00_503;

								obj_t BgL_arg1355z00_504;

								obj_t BgL_arg1356z00_505;

								obj_t BgL_arg1357z00_506;

								obj_t BgL_arg1358z00_507;

								obj_t BgL_arg1359z00_508;

								obj_t BgL_arg1360z00_509;

								obj_t BgL_arg1367z00_510;

								obj_t BgL_arg1368z00_511;

								obj_t BgL_arg1370z00_512;

								{	/* Ieee/control5.scm 262 */
									int BgL_auxz00_1362;

									BgL_auxz00_1362 = (int) (((long) 1));
									BgL_arg1345z00_498 = BGL_MVALUES_VAL(BgL_auxz00_1362);
								}
								{	/* Ieee/control5.scm 263 */
									int BgL_auxz00_1365;

									BgL_auxz00_1365 = (int) (((long) 2));
									BgL_arg1346z00_499 = BGL_MVALUES_VAL(BgL_auxz00_1365);
								}
								{	/* Ieee/control5.scm 264 */
									int BgL_auxz00_1368;

									BgL_auxz00_1368 = (int) (((long) 3));
									BgL_arg1347z00_500 = BGL_MVALUES_VAL(BgL_auxz00_1368);
								}
								{	/* Ieee/control5.scm 265 */
									int BgL_auxz00_1371;

									BgL_auxz00_1371 = (int) (((long) 4));
									BgL_arg1348z00_501 = BGL_MVALUES_VAL(BgL_auxz00_1371);
								}
								{	/* Ieee/control5.scm 266 */
									int BgL_auxz00_1374;

									BgL_auxz00_1374 = (int) (((long) 5));
									BgL_arg1349z00_502 = BGL_MVALUES_VAL(BgL_auxz00_1374);
								}
								{	/* Ieee/control5.scm 267 */
									int BgL_auxz00_1377;

									BgL_auxz00_1377 = (int) (((long) 6));
									BgL_arg1354z00_503 = BGL_MVALUES_VAL(BgL_auxz00_1377);
								}
								{	/* Ieee/control5.scm 268 */
									int BgL_auxz00_1380;

									BgL_auxz00_1380 = (int) (((long) 7));
									BgL_arg1355z00_504 = BGL_MVALUES_VAL(BgL_auxz00_1380);
								}
								{	/* Ieee/control5.scm 269 */
									int BgL_auxz00_1383;

									BgL_auxz00_1383 = (int) (((long) 8));
									BgL_arg1356z00_505 = BGL_MVALUES_VAL(BgL_auxz00_1383);
								}
								{	/* Ieee/control5.scm 270 */
									int BgL_auxz00_1386;

									BgL_auxz00_1386 = (int) (((long) 9));
									BgL_arg1357z00_506 = BGL_MVALUES_VAL(BgL_auxz00_1386);
								}
								{	/* Ieee/control5.scm 271 */
									int BgL_auxz00_1389;

									BgL_auxz00_1389 = (int) (((long) 10));
									BgL_arg1358z00_507 = BGL_MVALUES_VAL(BgL_auxz00_1389);
								}
								{	/* Ieee/control5.scm 272 */
									int BgL_auxz00_1392;

									BgL_auxz00_1392 = (int) (((long) 11));
									BgL_arg1359z00_508 = BGL_MVALUES_VAL(BgL_auxz00_1392);
								}
								{	/* Ieee/control5.scm 273 */
									int BgL_auxz00_1395;

									BgL_auxz00_1395 = (int) (((long) 12));
									BgL_arg1360z00_509 = BGL_MVALUES_VAL(BgL_auxz00_1395);
								}
								{	/* Ieee/control5.scm 274 */
									int BgL_auxz00_1398;

									BgL_auxz00_1398 = (int) (((long) 13));
									BgL_arg1367z00_510 = BGL_MVALUES_VAL(BgL_auxz00_1398);
								}
								{	/* Ieee/control5.scm 275 */
									int BgL_auxz00_1401;

									BgL_auxz00_1401 = (int) (((long) 14));
									BgL_arg1368z00_511 = BGL_MVALUES_VAL(BgL_auxz00_1401);
								}
								{	/* Ieee/control5.scm 276 */
									int BgL_auxz00_1404;

									BgL_auxz00_1404 = (int) (((long) 15));
									BgL_arg1370z00_512 = BGL_MVALUES_VAL(BgL_auxz00_1404);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_7) (BgL_consumerz00_7,
									BgL_res0z00_389, BgL_arg1345z00_498, BgL_arg1346z00_499,
									BgL_arg1347z00_500, BgL_arg1348z00_501, BgL_arg1349z00_502,
									BgL_arg1354z00_503, BgL_arg1355z00_504, BgL_arg1356z00_505,
									BgL_arg1357z00_506, BgL_arg1358z00_507, BgL_arg1359z00_508,
									BgL_arg1360z00_509, BgL_arg1367z00_510, BgL_arg1368z00_511,
									BgL_arg1370z00_512, BEOA);
							}
							break;
						default:
							return apply(BgL_consumerz00_7, BgL_res0z00_389);
						}
				}
			}
		}
	}



/* _call-with-values */
	obj_t BGl__callzd2withzd2valuesz00zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_913, obj_t BgL_producerz00_914, obj_t BgL_consumerz00_915)
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 117 */
			{	/* Ieee/control5.scm 278 */
				obj_t BgL_auxz00_1420;

				obj_t BgL_auxz00_1413;

				if (PROCEDUREP(BgL_consumerz00_915))
					{	/* Ieee/control5.scm 278 */
						BgL_auxz00_1420 = BgL_consumerz00_915;
					}
				else
					{
						obj_t BgL_auxz00_1423;

						BgL_auxz00_1423 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1520z00zz__r5_control_features_6_4z00,
							BINT(((long) 8393)),
							BGl_string1525z00zz__r5_control_features_6_4z00,
							BGl_string1526z00zz__r5_control_features_6_4z00,
							BgL_consumerz00_915);
						FAILURE(BgL_auxz00_1423, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_producerz00_914))
					{	/* Ieee/control5.scm 278 */
						BgL_auxz00_1413 = BgL_producerz00_914;
					}
				else
					{
						obj_t BgL_auxz00_1416;

						BgL_auxz00_1416 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1520z00zz__r5_control_features_6_4z00,
							BINT(((long) 8393)),
							BGl_string1525z00zz__r5_control_features_6_4z00,
							BGl_string1526z00zz__r5_control_features_6_4z00,
							BgL_producerz00_914);
						FAILURE(BgL_auxz00_1416, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00
					(BgL_auxz00_1413, BgL_auxz00_1420);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00()
	{
		AN_OBJECT;
		{	/* Ieee/control5.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1527z00zz__r5_control_features_6_4z00));
		}
	}

#ifdef __cplusplus
}
#endif
