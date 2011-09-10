/*===========================================================================*/
/*   (Ieee/control.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/control.scm -indent -o objs/obj_u/Ieee/control.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_loopz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__filterz00zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2promisezd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t
		BGl_loopz72z72z72z72z72z72z00zz__r4_control_features_6_9z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00
		(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl_loopz72z72z00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_procedurezf3zf3zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl__dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_loopz72z72z72z72z00zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_forcez00zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_recurz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_loopz72z72zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl__callzf2cczf2zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl__appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__applyz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00 =
		BUNSPEC;
	static obj_t BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_callzf2cczf2zz__r4_control_features_6_9z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00();
	static obj_t BGl_loopz72z72z72z72zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl__forzd2eachzd2zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl__mapzd22zd2zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_zc3anonymousza31349ze3z83zz__r4_control_features_6_9z00(obj_t);
	extern obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_loopz72z72z72z72z72z72zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t call_cc(obj_t);
	static obj_t BGl_zc3exitza31372ze3z83zz__r4_control_features_6_9z00(obj_t);
	static obj_t
		BGl__callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00
		(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl__mapz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
	static obj_t BGl__forcez00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl__mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_zc3anonymousza31355ze3z83zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl__procedurezf3zf3zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza31357ze3z83zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mapzd22zd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2mapz12zd2envz12zz__r4_control_features_6_9z00,
		BgL_bgl__appendza7d2mapza7121578z00, va_generic_entry,
		BGl__appendzd2mapz12zc0zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forzd2eachzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl__forza7d2eachza7d2za7za71579z00, va_generic_entry,
		BGl__forzd2eachzd2zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2promisezd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl__makeza7d2promiseza71580z00,
		BGl__makezd2promisezd2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00;
	extern obj_t BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2mapzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl__appendza7d2mapza7d21581z00, va_generic_entry,
		BGl__appendzd2mapzd2zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filterz12zd2envzc0zz__r4_control_features_6_9z00,
		BgL_bgl__filterza712za712za7za7_1582z00,
		BGl__filterz12z12zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzf2cczd2envz20zz__r4_control_features_6_9z00,
		BgL_bgl__callza7f2ccza7f2za7za7_1583z00,
		BGl__callzf2cczf2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mapzd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl__mapza700za7za7__r4_co1584za7, va_generic_entry,
		BGl__mapz00zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mapzd22zd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl__mapza7d22za7d2za7za7__r1585z00,
		BGl__mapzd22zd2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezf3zd2envz21zz__r4_control_features_6_9z00,
		BgL_bgl__procedureza7f3za7f31586z00,
		BGl__procedurezf3zf3zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dynamiczd2windzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl__dynamicza7d2windza71587z00,
		BGl__dynamiczd2windzd2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2currentzd2continuationzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl__callza7d2withza7d2c1588z00,
		BGl__callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forzd2eachzd22zd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl__forza7d2eachza7d22za71589za7,
		BGl__forzd2eachzd22z00zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1554z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1554za700za7za7_1590za7,
		"/tmp/bigloo/runtime/Ieee/control.scm", 36);
	      DEFINE_STRING(BGl_string1555z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1555za700za7za7_1591za7, "_apply", 6);
	      DEFINE_STRING(BGl_string1556z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1556za700za7za7_1592za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1557z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1557za700za7za7_1593za7, "_map-2", 6);
	      DEFINE_STRING(BGl_string1558z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1558za700za7za7_1594za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1560z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1560za700za7za7_1595za7, "_map!", 5);
	      DEFINE_STRING(BGl_string1559z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1559za700za7za7_1596za7, "_map", 4);
	      DEFINE_STRING(BGl_string1561z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1561za700za7za7_1597za7, "_append-map", 11);
	      DEFINE_STRING(BGl_string1562z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1562za700za7za7_1598za7, "_append-map!", 12);
	      DEFINE_STRING(BGl_string1563z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1563za700za7za7_1599za7, "_filter-map", 11);
	      DEFINE_STRING(BGl_string1564z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1564za700za7za7_1600za7, "_for-each-2", 11);
	      DEFINE_STRING(BGl_string1565z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1565za700za7za7_1601za7, "_for-each", 9);
	      DEFINE_STRING(BGl_string1566z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1566za700za7za7_1602za7, "_filter", 7);
	      DEFINE_STRING(BGl_string1567z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1567za700za7za7_1603za7, "_filter!", 8);
	      DEFINE_STRING(BGl_string1568z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1568za700za7za7_1604za7, "_make-promise", 13);
	      DEFINE_STRING(BGl_string1570z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1570za700za7za7_1605za7, "_call-with-current-continuation",
		31);
	      DEFINE_STRING(BGl_string1569z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1569za700za7za7_1606za7, "_call/cc", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filterzd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl__filterza700za7za7__r41607za7,
		BGl__filterz00zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1571z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1571za700za7za7_1608za7, "_dynamic-wind", 13);
	      DEFINE_STRING(BGl_string1572z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1572za700za7za7_1609za7, "__r4_control_features_6_9", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_applyzd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl__applyza700za7za7__r4_1610za7, va_generic_entry,
		BGl__applyz00zz__r4_control_features_6_9z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filterzd2mapzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl__filterza7d2mapza7d21611z00, va_generic_entry,
		BGl__filterzd2mapzd2zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mapz12zd2envzc0zz__r4_control_features_6_9z00,
		BgL_bgl__mapza712za712za7za7__r41612z00, va_generic_entry,
		BGl__mapz12z12zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forcezd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl__forceza700za7za7__r4_1613za7,
		BGl__forcez00zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long
		BgL_checksumz00_1281, char *BgL_fromz00_1282)
	{
		AN_OBJECT;
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* procedure? */
	BGL_EXPORTED_DEF bool_t
		BGl_procedurezf3zf3zz__r4_control_features_6_9z00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 74 */
			return PROCEDUREP(BgL_objz00_1);
		}
	}



/* _procedure? */
	obj_t BGl__procedurezf3zf3zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1138, obj_t BgL_objz00_1139)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 74 */
			return BBOOL(PROCEDUREP(BgL_objz00_1139));
		}
	}



/* apply */
	BGL_EXPORTED_DEF obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t
		BgL_procz00_2, obj_t BgL_argsz00_3, obj_t BgL_optz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 80 */
			{	/* Ieee/control.scm 81 */
				obj_t BgL_argsz00_406;

				if (PAIRP(BgL_optz00_4))
					{	/* Ieee/control.scm 81 */
						BgL_argsz00_406 =
							MAKE_PAIR(BgL_argsz00_3,
							BGl_loopz72z72z72z72z72z72z00zz__r4_control_features_6_9z00
							(BgL_optz00_4));
					}
				else
					{	/* Ieee/control.scm 81 */
						BgL_argsz00_406 = BgL_argsz00_3;
					}
				return apply(BgL_procz00_2, BgL_argsz00_406);
			}
		}
	}



/* loop'''''' */
	obj_t BGl_loopz72z72z72z72z72z72z00zz__r4_control_features_6_9z00(obj_t
		BgL_optz00_410)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 82 */
			{	/* Ieee/control.scm 83 */
				bool_t BgL_testz00_1296;

				{	/* Ieee/control.scm 83 */
					obj_t BgL_auxz00_1297;

					BgL_auxz00_1297 = CDR(BgL_optz00_410);
					BgL_testz00_1296 = PAIRP(BgL_auxz00_1297);
				}
				if (BgL_testz00_1296)
					{	/* Ieee/control.scm 83 */
						return
							MAKE_PAIR(CAR(BgL_optz00_410),
							BGl_loopz72z72z72z72z72z72z00zz__r4_control_features_6_9z00(CDR
								(BgL_optz00_410)));
					}
				else
					{	/* Ieee/control.scm 83 */
						return CAR(BgL_optz00_410);
					}
			}
		}
	}



/* _apply */
	obj_t BGl__applyz00zz__r4_control_features_6_9z00(obj_t BgL_envz00_1140,
		obj_t BgL_procz00_1141, obj_t BgL_argsz00_1142, obj_t BgL_optz00_1143)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 80 */
			{	/* Ieee/control.scm 81 */
				obj_t BgL_auxz00_1305;

				if (PROCEDUREP(BgL_procz00_1141))
					{	/* Ieee/control.scm 81 */
						BgL_auxz00_1305 = BgL_procz00_1141;
					}
				else
					{
						obj_t BgL_auxz00_1308;

						BgL_auxz00_1308 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 3207)),
							BGl_string1555z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00,
							BgL_procz00_1141);
						FAILURE(BgL_auxz00_1308, BFALSE, BFALSE);
					}
				return
					BGl_applyz00zz__r4_control_features_6_9z00(BgL_auxz00_1305,
					BgL_argsz00_1142, BgL_optz00_1143);
			}
		}
	}



/* map-2 */
	BGL_EXPORTED_DEF obj_t BGl_mapzd22zd2zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_5, obj_t BgL_lz00_6)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 92 */
			{
				obj_t BgL_lz00_794;

				obj_t BgL_resz00_795;

				BgL_lz00_794 = BgL_lz00_6;
				BgL_resz00_795 = BNIL;
			BgL_loopz00_793:
				if (NULLP(BgL_lz00_794))
					{	/* Ieee/control.scm 93 */
						return bgl_reverse_bang(BgL_resz00_795);
					}
				else
					{	/* Ieee/control.scm 93 */
						obj_t BgL_arg1237z00_802;

						obj_t BgL_arg1238z00_803;

						BgL_arg1237z00_802 = CDR(BgL_lz00_794);
						{	/* Ieee/control.scm 93 */
							obj_t BgL_arg1239z00_804;

							{	/* Ieee/control.scm 93 */
								obj_t BgL_arg1240z00_805;

								BgL_arg1240z00_805 = CAR(BgL_lz00_794);
								BgL_arg1239z00_804 =
									PROCEDURE_ENTRY(BgL_fz00_5) (BgL_fz00_5, BgL_arg1240z00_805,
									BEOA);
							}
							BgL_arg1238z00_803 =
								MAKE_PAIR(BgL_arg1239z00_804, BgL_resz00_795);
						}
						{
							obj_t BgL_resz00_1322;

							obj_t BgL_lz00_1321;

							BgL_lz00_1321 = BgL_arg1237z00_802;
							BgL_resz00_1322 = BgL_arg1238z00_803;
							BgL_resz00_795 = BgL_resz00_1322;
							BgL_lz00_794 = BgL_lz00_1321;
							goto BgL_loopz00_793;
						}
					}
			}
		}
	}



/* _map-2 */
	obj_t BGl__mapzd22zd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1144,
		obj_t BgL_fz00_1145, obj_t BgL_lz00_1146)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 92 */
			{	/* Ieee/control.scm 93 */
				obj_t BgL_auxz00_1330;

				obj_t BgL_auxz00_1323;

				{	/* Ieee/control.scm 93 */
					bool_t BgL_testz00_1331;

					if (PAIRP(BgL_lz00_1146))
						{	/* Ieee/control.scm 93 */
							BgL_testz00_1331 = ((bool_t) 1);
						}
					else
						{	/* Ieee/control.scm 93 */
							BgL_testz00_1331 = NULLP(BgL_lz00_1146);
						}
					if (BgL_testz00_1331)
						{	/* Ieee/control.scm 93 */
							BgL_auxz00_1330 = BgL_lz00_1146;
						}
					else
						{
							obj_t BgL_auxz00_1335;

							BgL_auxz00_1335 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1554z00zz__r4_control_features_6_9z00,
								BINT(((long) 3650)),
								BGl_string1557z00zz__r4_control_features_6_9z00,
								BGl_string1558z00zz__r4_control_features_6_9z00, BgL_lz00_1146);
							FAILURE(BgL_auxz00_1335, BFALSE, BFALSE);
				}}
				if (PROCEDUREP(BgL_fz00_1145))
					{	/* Ieee/control.scm 93 */
						BgL_auxz00_1323 = BgL_fz00_1145;
					}
				else
					{
						obj_t BgL_auxz00_1326;

						BgL_auxz00_1326 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 3650)),
							BGl_string1557z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00, BgL_fz00_1145);
						FAILURE(BgL_auxz00_1326, BFALSE, BFALSE);
					}
				return
					BGl_mapzd22zd2zz__r4_control_features_6_9z00(BgL_auxz00_1323,
					BgL_auxz00_1330);
			}
		}
	}



/* map */
	BGL_EXPORTED_DEF obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_7, obj_t BgL_lz00_8)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 102 */
			if (NULLP(BgL_lz00_8))
				{	/* Ieee/control.scm 104 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 104 */
					if (NULLP(CDR(BgL_lz00_8)))
						{	/* Ieee/control.scm 106 */
							return
								BGl_mapzd22zd2zz__r4_control_features_6_9z00(BgL_fz00_7,
								CAR(BgL_lz00_8));
						}
					else
						{	/* Ieee/control.scm 106 */
							return
								BGl_loopz72z72z72z72z72z72zz__r4_control_features_6_9z00
								(BgL_fz00_7, BgL_lz00_8);
						}
				}
		}
	}



/* loop''''' */
	obj_t BGl_loopz72z72z72z72z72z72zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_1212, obj_t BgL_lz00_433)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 109 */
			if (NULLP(CAR(BgL_lz00_433)))
				{	/* Ieee/control.scm 110 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 112 */
					obj_t BgL_arg1246z00_436;

					obj_t BgL_arg1247z00_437;

					BgL_arg1246z00_436 =
						apply(BgL_fz00_1212,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_433));
					BgL_arg1247z00_437 =
						BGl_loopz72z72z72z72z72z72zz__r4_control_features_6_9z00
						(BgL_fz00_1212,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_433));
					return MAKE_PAIR(BgL_arg1246z00_436, BgL_arg1247z00_437);
				}
		}
	}



/* _map */
	obj_t BGl__mapz00zz__r4_control_features_6_9z00(obj_t BgL_envz00_1147,
		obj_t BgL_fz00_1148, obj_t BgL_lz00_1149)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 102 */
			{	/* Ieee/control.scm 104 */
				obj_t BgL_auxz00_1357;

				if (PROCEDUREP(BgL_fz00_1148))
					{	/* Ieee/control.scm 104 */
						BgL_auxz00_1357 = BgL_fz00_1148;
					}
				else
					{
						obj_t BgL_auxz00_1360;

						BgL_auxz00_1360 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 4028)),
							BGl_string1559z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00, BgL_fz00_1148);
						FAILURE(BgL_auxz00_1360, BFALSE, BFALSE);
					}
				return
					BGl_mapz00zz__r4_control_features_6_9z00(BgL_auxz00_1357,
					BgL_lz00_1149);
			}
		}
	}



/* map! */
	BGL_EXPORTED_DEF obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_11, obj_t BgL_lz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 129 */
			if (NULLP(BgL_lz00_12))
				{	/* Ieee/control.scm 131 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 131 */
					if (NULLP(CDR(BgL_lz00_12)))
						{	/* Ieee/control.scm 134 */
							obj_t BgL_arg1258z00_452;

							BgL_arg1258z00_452 = CAR(BgL_lz00_12);
							{
								obj_t BgL_lz00_851;

								BgL_lz00_851 = BgL_arg1258z00_452;
							BgL_loopz00_850:
								if (NULLP(BgL_lz00_851))
									{	/* Ieee/control.scm 134 */
										return BgL_arg1258z00_452;
									}
								else
									{	/* Ieee/control.scm 134 */
										{	/* Ieee/control.scm 134 */
											obj_t BgL_arg1253z00_853;

											{	/* Ieee/control.scm 134 */
												obj_t BgL_arg1254z00_854;

												BgL_arg1254z00_854 = CAR(BgL_lz00_851);
												BgL_arg1253z00_853 =
													PROCEDURE_ENTRY(BgL_fz00_11) (BgL_fz00_11,
													BgL_arg1254z00_854, BEOA);
											}
											SET_CAR(BgL_lz00_851, BgL_arg1253z00_853);
										}
										{
											obj_t BgL_lz00_1377;

											BgL_lz00_1377 = CDR(BgL_lz00_851);
											BgL_lz00_851 = BgL_lz00_1377;
											goto BgL_loopz00_850;
										}
									}
							}
						}
					else
						{	/* Ieee/control.scm 136 */
							obj_t BgL_l0z00_453;

							BgL_l0z00_453 = CAR(BgL_lz00_12);
							{
								obj_t BgL_lz00_455;

								BgL_lz00_455 = BgL_lz00_12;
							BgL_zc3anonymousza31259ze3z83_456:
								if (NULLP(CAR(BgL_lz00_455)))
									{	/* Ieee/control.scm 138 */
										return BgL_l0z00_453;
									}
								else
									{	/* Ieee/control.scm 138 */
										{	/* Ieee/control.scm 141 */
											obj_t BgL_arg1261z00_458;

											obj_t BgL_arg1262z00_459;

											BgL_arg1261z00_458 = CAR(BgL_lz00_455);
											BgL_arg1262z00_459 =
												apply(BgL_fz00_11,
												BGl_mapzd22zd2zz__r4_control_features_6_9z00
												(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00,
													BgL_lz00_455));
											SET_CAR(BgL_arg1261z00_458, BgL_arg1262z00_459);
										}
										{
											obj_t BgL_lz00_1388;

											BgL_lz00_1388 =
												BGl_mapzd22zd2zz__r4_control_features_6_9z00
												(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
												BgL_lz00_455);
											BgL_lz00_455 = BgL_lz00_1388;
											goto BgL_zc3anonymousza31259ze3z83_456;
										}
									}
							}
						}
				}
		}
	}



/* _map! */
	obj_t BGl__mapz12z12zz__r4_control_features_6_9z00(obj_t BgL_envz00_1154,
		obj_t BgL_fz00_1155, obj_t BgL_lz00_1156)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 129 */
			{	/* Ieee/control.scm 131 */
				obj_t BgL_auxz00_1390;

				if (PROCEDUREP(BgL_fz00_1155))
					{	/* Ieee/control.scm 131 */
						BgL_auxz00_1390 = BgL_fz00_1155;
					}
				else
					{
						obj_t BgL_auxz00_1393;

						BgL_auxz00_1393 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 4859)),
							BGl_string1560z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00, BgL_fz00_1155);
						FAILURE(BgL_auxz00_1393, BFALSE, BFALSE);
					}
				return
					BGl_mapz12z12zz__r4_control_features_6_9z00(BgL_auxz00_1390,
					BgL_lz00_1156);
			}
		}
	}



/* append-map */
	BGL_EXPORTED_DEF obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_15, obj_t BgL_lz00_16)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 156 */
			if (NULLP(BgL_lz00_16))
				{	/* Ieee/control.scm 158 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 158 */
					if (NULLP(CDR(BgL_lz00_16)))
						{	/* Ieee/control.scm 160 */
							return
								BGl_loopz72z72z72z72z00zz__r4_control_features_6_9z00
								(BgL_fz00_15, CAR(BgL_lz00_16));
						}
					else
						{	/* Ieee/control.scm 160 */
							return
								BGl_loopz72z72z72z72zz__r4_control_features_6_9z00(BgL_fz00_15,
								BgL_lz00_16);
						}
				}
		}
	}



/* loop''' */
	obj_t BGl_loopz72z72z72z72zz__r4_control_features_6_9z00(obj_t BgL_fz00_1210,
		obj_t BgL_lz00_477)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 163 */
			if (NULLP(CAR(BgL_lz00_477)))
				{	/* Ieee/control.scm 164 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 166 */
					obj_t BgL_arg1277z00_480;

					obj_t BgL_arg1278z00_481;

					BgL_arg1277z00_480 =
						apply(BgL_fz00_1210,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_477));
					BgL_arg1278z00_481 =
						BGl_loopz72z72z72z72zz__r4_control_features_6_9z00(BgL_fz00_1210,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_477));
					return bgl_append2(BgL_arg1277z00_480, BgL_arg1278z00_481);
				}
		}
	}



/* loop'''' */
	obj_t BGl_loopz72z72z72z72z00zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_1211, obj_t BgL_lz00_884)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 148 */
			if (NULLP(BgL_lz00_884))
				{	/* Ieee/control.scm 161 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 161 */
					obj_t BgL_arg1268z00_886;

					obj_t BgL_arg1269z00_887;

					{	/* Ieee/control.scm 161 */
						obj_t BgL_arg1270z00_888;

						BgL_arg1270z00_888 = CAR(BgL_lz00_884);
						BgL_arg1268z00_886 =
							PROCEDURE_ENTRY(BgL_fz00_1211) (BgL_fz00_1211, BgL_arg1270z00_888,
							BEOA);
					}
					BgL_arg1269z00_887 =
						BGl_loopz72z72z72z72z00zz__r4_control_features_6_9z00(BgL_fz00_1211,
						CDR(BgL_lz00_884));
					return bgl_append2(BgL_arg1268z00_886, BgL_arg1269z00_887);
				}
		}
	}



/* _append-map */
	obj_t BGl__appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1157, obj_t BgL_fz00_1158, obj_t BgL_lz00_1159)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 156 */
			{	/* Ieee/control.scm 158 */
				obj_t BgL_auxz00_1423;

				if (PROCEDUREP(BgL_fz00_1158))
					{	/* Ieee/control.scm 158 */
						BgL_auxz00_1423 = BgL_fz00_1158;
					}
				else
					{
						obj_t BgL_auxz00_1426;

						BgL_auxz00_1426 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 5721)),
							BGl_string1561z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00, BgL_fz00_1158);
						FAILURE(BgL_auxz00_1426, BFALSE, BFALSE);
					}
				return
					BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(BgL_auxz00_1423,
					BgL_lz00_1159);
			}
		}
	}



/* append-map! */
	BGL_EXPORTED_DEF obj_t
		BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t BgL_fz00_19,
		obj_t BgL_lz00_20)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 180 */
			if (NULLP(BgL_lz00_20))
				{	/* Ieee/control.scm 182 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 182 */
					if (NULLP(CDR(BgL_lz00_20)))
						{	/* Ieee/control.scm 184 */
							return
								BGl_loopz72z72z00zz__r4_control_features_6_9z00(BgL_fz00_19,
								CAR(BgL_lz00_20));
						}
					else
						{	/* Ieee/control.scm 184 */
							return
								BGl_loopz72z72zz__r4_control_features_6_9z00(BgL_fz00_19,
								BgL_lz00_20);
						}
				}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__r4_control_features_6_9z00(obj_t BgL_fz00_1208,
		obj_t BgL_lz00_499)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 187 */
			if (NULLP(CAR(BgL_lz00_499)))
				{	/* Ieee/control.scm 188 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 190 */
					obj_t BgL_arg1293z00_502;

					obj_t BgL_arg1294z00_503;

					BgL_arg1293z00_502 =
						apply(BgL_fz00_1208,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_499));
					BgL_arg1294z00_503 =
						BGl_loopz72z72zz__r4_control_features_6_9z00(BgL_fz00_1208,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_499));
					return
						BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
						(BgL_arg1293z00_502, BgL_arg1294z00_503);
				}
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_1209,
		obj_t BgL_lz00_912)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 172 */
			if (NULLP(BgL_lz00_912))
				{	/* Ieee/control.scm 185 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 185 */
					obj_t BgL_arg1284z00_914;

					obj_t BgL_arg1285z00_915;

					{	/* Ieee/control.scm 185 */
						obj_t BgL_arg1286z00_916;

						BgL_arg1286z00_916 = CAR(BgL_lz00_912);
						BgL_arg1284z00_914 =
							PROCEDURE_ENTRY(BgL_fz00_1209) (BgL_fz00_1209, BgL_arg1286z00_916,
							BEOA);
					}
					BgL_arg1285z00_915 =
						BGl_loopz72z72z00zz__r4_control_features_6_9z00(BgL_fz00_1209,
						CDR(BgL_lz00_912));
					return
						BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
						(BgL_arg1284z00_914, BgL_arg1285z00_915);
				}
		}
	}



/* _append-map! */
	obj_t BGl__appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1160, obj_t BgL_fz00_1161, obj_t BgL_lz00_1162)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 180 */
			{	/* Ieee/control.scm 182 */
				obj_t BgL_auxz00_1456;

				if (PROCEDUREP(BgL_fz00_1161))
					{	/* Ieee/control.scm 182 */
						BgL_auxz00_1456 = BgL_fz00_1161;
					}
				else
					{
						obj_t BgL_auxz00_1459;

						BgL_auxz00_1459 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 6543)),
							BGl_string1562z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00, BgL_fz00_1161);
						FAILURE(BgL_auxz00_1459, BFALSE, BFALSE);
					}
				return
					BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(BgL_auxz00_1456,
					BgL_lz00_1162);
			}
		}
	}



/* filter-map-2 */
	obj_t BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_21,
		obj_t BgL_lz00_22)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 195 */
			{
				obj_t BgL_lz00_510;

				obj_t BgL_resz00_511;

				BgL_lz00_510 = BgL_lz00_22;
				BgL_resz00_511 = BNIL;
			BgL_zc3anonymousza31298ze3z83_512:
				if (NULLP(BgL_lz00_510))
					{	/* Ieee/control.scm 198 */
						return bgl_reverse_bang(BgL_resz00_511);
					}
				else
					{	/* Ieee/control.scm 200 */
						obj_t BgL_hdz00_514;

						{	/* Ieee/control.scm 200 */
							obj_t BgL_arg1303z00_518;

							BgL_arg1303z00_518 = CAR(BgL_lz00_510);
							BgL_hdz00_514 =
								PROCEDURE_ENTRY(BgL_fz00_21) (BgL_fz00_21, BgL_arg1303z00_518,
								BEOA);
						}
						if (CBOOL(BgL_hdz00_514))
							{	/* Ieee/control.scm 202 */
								obj_t BgL_arg1300z00_515;

								obj_t BgL_arg1301z00_516;

								BgL_arg1300z00_515 = CDR(BgL_lz00_510);
								BgL_arg1301z00_516 = MAKE_PAIR(BgL_hdz00_514, BgL_resz00_511);
								{
									obj_t BgL_resz00_1475;

									obj_t BgL_lz00_1474;

									BgL_lz00_1474 = BgL_arg1300z00_515;
									BgL_resz00_1475 = BgL_arg1301z00_516;
									BgL_resz00_511 = BgL_resz00_1475;
									BgL_lz00_510 = BgL_lz00_1474;
									goto BgL_zc3anonymousza31298ze3z83_512;
								}
							}
						else
							{
								obj_t BgL_lz00_1476;

								BgL_lz00_1476 = CDR(BgL_lz00_510);
								BgL_lz00_510 = BgL_lz00_1476;
								goto BgL_zc3anonymousza31298ze3z83_512;
							}
					}
			}
		}
	}



/* filter-map */
	BGL_EXPORTED_DEF obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_23, obj_t BgL_lz00_24)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 208 */
			if (NULLP(BgL_lz00_24))
				{	/* Ieee/control.scm 210 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 210 */
					if (NULLP(CDR(BgL_lz00_24)))
						{	/* Ieee/control.scm 212 */
							return
								BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00
								(BgL_fz00_23, CAR(BgL_lz00_24));
						}
					else
						{	/* Ieee/control.scm 212 */
							return
								BGl_loopz00zz__r4_control_features_6_9z00(BgL_fz00_23,
								BgL_lz00_24);
						}
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__r4_control_features_6_9z00(obj_t BgL_fz00_1207,
		obj_t BgL_lz00_524)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 215 */
		BGl_loopz00zz__r4_control_features_6_9z00:
			if (NULLP(CAR(BgL_lz00_524)))
				{	/* Ieee/control.scm 216 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 218 */
					obj_t BgL_hdz00_527;

					BgL_hdz00_527 =
						apply(BgL_fz00_1207,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_524));
					if (CBOOL(BgL_hdz00_527))
						{	/* Ieee/control.scm 219 */
							return
								MAKE_PAIR(BgL_hdz00_527,
								BGl_loopz00zz__r4_control_features_6_9z00(BgL_fz00_1207,
									BGl_mapzd22zd2zz__r4_control_features_6_9z00
									(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
										BgL_lz00_524)));
						}
					else
						{
							obj_t BgL_lz00_1497;

							BgL_lz00_1497 =
								BGl_mapzd22zd2zz__r4_control_features_6_9z00
								(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_524);
							BgL_lz00_524 = BgL_lz00_1497;
							goto BGl_loopz00zz__r4_control_features_6_9z00;
						}
				}
		}
	}



/* _filter-map */
	obj_t BGl__filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1163, obj_t BgL_fz00_1164, obj_t BgL_lz00_1165)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 208 */
			{	/* Ieee/control.scm 210 */
				obj_t BgL_auxz00_1499;

				if (PROCEDUREP(BgL_fz00_1164))
					{	/* Ieee/control.scm 210 */
						BgL_auxz00_1499 = BgL_fz00_1164;
					}
				else
					{
						obj_t BgL_auxz00_1502;

						BgL_auxz00_1502 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 7452)),
							BGl_string1563z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00, BgL_fz00_1164);
						FAILURE(BgL_auxz00_1502, BFALSE, BFALSE);
					}
				return
					BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(BgL_auxz00_1499,
					BgL_lz00_1165);
			}
		}
	}



/* for-each-2 */
	BGL_EXPORTED_DEF obj_t
		BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_25,
		obj_t BgL_lz00_26)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 226 */
			{
				obj_t BgL_lz00_939;

				BgL_lz00_939 = BgL_lz00_26;
			BgL_loopz00_938:
				if (NULLP(BgL_lz00_939))
					{	/* Ieee/control.scm 228 */
						return BUNSPEC;
					}
				else
					{	/* Ieee/control.scm 228 */
						{	/* Ieee/control.scm 228 */
							obj_t BgL_arg1316z00_944;

							BgL_arg1316z00_944 = CAR(BgL_lz00_939);
							PROCEDURE_ENTRY(BgL_fz00_25) (BgL_fz00_25, BgL_arg1316z00_944,
								BEOA);
						}
						{
							obj_t BgL_lz00_1512;

							BgL_lz00_1512 = CDR(BgL_lz00_939);
							BgL_lz00_939 = BgL_lz00_1512;
							goto BgL_loopz00_938;
						}
					}
			}
		}
	}



/* _for-each-2 */
	obj_t BGl__forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1166, obj_t BgL_fz00_1167, obj_t BgL_lz00_1168)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 226 */
			{	/* Ieee/control.scm 228 */
				obj_t BgL_auxz00_1521;

				obj_t BgL_auxz00_1514;

				{	/* Ieee/control.scm 228 */
					bool_t BgL_testz00_1522;

					if (PAIRP(BgL_lz00_1168))
						{	/* Ieee/control.scm 228 */
							BgL_testz00_1522 = ((bool_t) 1);
						}
					else
						{	/* Ieee/control.scm 228 */
							BgL_testz00_1522 = NULLP(BgL_lz00_1168);
						}
					if (BgL_testz00_1522)
						{	/* Ieee/control.scm 228 */
							BgL_auxz00_1521 = BgL_lz00_1168;
						}
					else
						{
							obj_t BgL_auxz00_1526;

							BgL_auxz00_1526 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1554z00zz__r4_control_features_6_9z00,
								BINT(((long) 8002)),
								BGl_string1564z00zz__r4_control_features_6_9z00,
								BGl_string1558z00zz__r4_control_features_6_9z00, BgL_lz00_1168);
							FAILURE(BgL_auxz00_1526, BFALSE, BFALSE);
				}}
				if (PROCEDUREP(BgL_fz00_1167))
					{	/* Ieee/control.scm 228 */
						BgL_auxz00_1514 = BgL_fz00_1167;
					}
				else
					{
						obj_t BgL_auxz00_1517;

						BgL_auxz00_1517 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 8002)),
							BGl_string1564z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00, BgL_fz00_1167);
						FAILURE(BgL_auxz00_1517, BFALSE, BFALSE);
					}
				return
					BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(BgL_auxz00_1514,
					BgL_auxz00_1521);
			}
		}
	}



/* for-each */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_27, obj_t BgL_lz00_28)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 237 */
			if (NULLP(BgL_lz00_28))
				{	/* Ieee/control.scm 239 */
					return BUNSPEC;
				}
			else
				{	/* Ieee/control.scm 239 */
					if (NULLP(CDR(BgL_lz00_28)))
						{	/* Ieee/control.scm 242 */
							obj_t BgL_arg1320z00_543;

							BgL_arg1320z00_543 = CAR(BgL_lz00_28);
							{	/* Ieee/control.scm 242 */
								obj_t BgL_lz00_967;

								BgL_lz00_967 = BgL_arg1320z00_543;
								{
									obj_t BgL_lz00_969;

									BgL_lz00_969 = BgL_lz00_967;
								BgL_loopz00_968:
									if (NULLP(BgL_lz00_969))
										{	/* Ieee/control.scm 242 */
											return BUNSPEC;
										}
									else
										{	/* Ieee/control.scm 242 */
											{	/* Ieee/control.scm 242 */
												obj_t BgL_arg1316z00_974;

												BgL_arg1316z00_974 = CAR(BgL_lz00_969);
												PROCEDURE_ENTRY(BgL_fz00_27) (BgL_fz00_27,
													BgL_arg1316z00_974, BEOA);
											}
											{
												obj_t BgL_lz00_1542;

												BgL_lz00_1542 = CDR(BgL_lz00_969);
												BgL_lz00_969 = BgL_lz00_1542;
												goto BgL_loopz00_968;
											}
										}
								}
							}
						}
					else
						{
							obj_t BgL_lz00_545;

							BgL_lz00_545 = BgL_lz00_28;
						BgL_zc3anonymousza31321ze3z83_546:
							if (NULLP(CAR(BgL_lz00_545)))
								{	/* Ieee/control.scm 245 */
									return BUNSPEC;
								}
							else
								{	/* Ieee/control.scm 245 */
									apply(BgL_fz00_27,
										BGl_mapzd22zd2zz__r4_control_features_6_9z00
										(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00,
											BgL_lz00_545));
									{
										obj_t BgL_lz00_1550;

										BgL_lz00_1550 =
											BGl_mapzd22zd2zz__r4_control_features_6_9z00
											(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
											BgL_lz00_545);
										BgL_lz00_545 = BgL_lz00_1550;
										goto BgL_zc3anonymousza31321ze3z83_546;
									}
								}
						}
				}
		}
	}



/* _for-each */
	obj_t BGl__forzd2eachzd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1169,
		obj_t BgL_fz00_1170, obj_t BgL_lz00_1171)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 237 */
			{	/* Ieee/control.scm 239 */
				obj_t BgL_auxz00_1552;

				if (PROCEDUREP(BgL_fz00_1170))
					{	/* Ieee/control.scm 239 */
						BgL_auxz00_1552 = BgL_fz00_1170;
					}
				else
					{
						obj_t BgL_auxz00_1555;

						BgL_auxz00_1555 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 8349)),
							BGl_string1565z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00, BgL_fz00_1170);
						FAILURE(BgL_auxz00_1555, BFALSE, BFALSE);
					}
				return
					BGl_forzd2eachzd2zz__r4_control_features_6_9z00(BgL_auxz00_1552,
					BgL_lz00_1171);
			}
		}
	}



/* filter */
	BGL_EXPORTED_DEF obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t
		BgL_predz00_29, obj_t BgL_lisz00_30)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 254 */
			return
				BGl_recurz00zz__r4_control_features_6_9z00(BgL_predz00_29,
				BgL_lisz00_30);
		}
	}



/* recur */
	obj_t BGl_recurz00zz__r4_control_features_6_9z00(obj_t BgL_predz00_1206,
		obj_t BgL_lisz00_553)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 255 */
		BGl_recurz00zz__r4_control_features_6_9z00:
			if (NULLP(BgL_lisz00_553))
				{	/* Ieee/control.scm 256 */
					return BgL_lisz00_553;
				}
			else
				{	/* Ieee/control.scm 258 */
					obj_t BgL_headz00_556;

					obj_t BgL_tailz00_557;

					BgL_headz00_556 = CAR(BgL_lisz00_553);
					BgL_tailz00_557 = CDR(BgL_lisz00_553);
					if (CBOOL(PROCEDURE_ENTRY(BgL_predz00_1206) (BgL_predz00_1206,
								BgL_headz00_556, BEOA)))
						{	/* Ieee/control.scm 261 */
							obj_t BgL_newzd2tailzd2_559;

							BgL_newzd2tailzd2_559 =
								BGl_recurz00zz__r4_control_features_6_9z00(BgL_predz00_1206,
								BgL_tailz00_557);
							if ((BgL_tailz00_557 == BgL_newzd2tailzd2_559))
								{	/* Ieee/control.scm 262 */
									return BgL_lisz00_553;
								}
							else
								{	/* Ieee/control.scm 262 */
									return MAKE_PAIR(BgL_headz00_556, BgL_newzd2tailzd2_559);
								}
						}
					else
						{
							obj_t BgL_lisz00_1573;

							BgL_lisz00_1573 = BgL_tailz00_557;
							BgL_lisz00_553 = BgL_lisz00_1573;
							goto BGl_recurz00zz__r4_control_features_6_9z00;
						}
				}
		}
	}



/* _filter */
	obj_t BGl__filterz00zz__r4_control_features_6_9z00(obj_t BgL_envz00_1172,
		obj_t BgL_predz00_1173, obj_t BgL_lisz00_1174)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 254 */
			{	/* Ieee/control.scm 256 */
				obj_t BgL_res1576z00_1273;

				{	/* Ieee/control.scm 256 */
					obj_t BgL_predz00_1271;

					obj_t BgL_lisz00_1272;

					if (PROCEDUREP(BgL_predz00_1173))
						{	/* Ieee/control.scm 256 */
							BgL_predz00_1271 = BgL_predz00_1173;
						}
					else
						{
							obj_t BgL_auxz00_1576;

							BgL_auxz00_1576 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1554z00zz__r4_control_features_6_9z00,
								BINT(((long) 8868)),
								BGl_string1566z00zz__r4_control_features_6_9z00,
								BGl_string1556z00zz__r4_control_features_6_9z00,
								BgL_predz00_1173);
							FAILURE(BgL_auxz00_1576, BFALSE, BFALSE);
						}
					{	/* Ieee/control.scm 256 */
						bool_t BgL_testz00_1580;

						if (PAIRP(BgL_lisz00_1174))
							{	/* Ieee/control.scm 256 */
								BgL_testz00_1580 = ((bool_t) 1);
							}
						else
							{	/* Ieee/control.scm 256 */
								BgL_testz00_1580 = NULLP(BgL_lisz00_1174);
							}
						if (BgL_testz00_1580)
							{	/* Ieee/control.scm 256 */
								BgL_lisz00_1272 = BgL_lisz00_1174;
							}
						else
							{
								obj_t BgL_auxz00_1584;

								BgL_auxz00_1584 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1554z00zz__r4_control_features_6_9z00,
									BINT(((long) 8868)),
									BGl_string1566z00zz__r4_control_features_6_9z00,
									BGl_string1558z00zz__r4_control_features_6_9z00,
									BgL_lisz00_1174);
								FAILURE(BgL_auxz00_1584, BFALSE, BFALSE);
					}}
					BgL_res1576z00_1273 =
						BGl_recurz00zz__r4_control_features_6_9z00(BgL_predz00_1271,
						BgL_lisz00_1272);
				}
				return BgL_res1576z00_1273;
			}
		}
	}



/* filter! */
	BGL_EXPORTED_DEF obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t
		BgL_predz00_31, obj_t BgL_lisz00_32)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 270 */
			{
				obj_t BgL_ansz00_563;

				BgL_ansz00_563 = BgL_lisz00_32;
			BgL_zc3anonymousza31330ze3z83_564:
				if (NULLP(BgL_ansz00_563))
					{	/* Ieee/control.scm 272 */
						return BgL_ansz00_563;
					}
				else
					{	/* Ieee/control.scm 274 */
						bool_t BgL_testz00_1591;

						{	/* Ieee/control.scm 274 */
							obj_t BgL_arg1348z00_593;

							BgL_arg1348z00_593 = CAR(BgL_ansz00_563);
							BgL_testz00_1591 =
								CBOOL(PROCEDURE_ENTRY(BgL_predz00_31) (BgL_predz00_31,
									BgL_arg1348z00_593, BEOA));
						}
						if (BgL_testz00_1591)
							{
								obj_t BgL_prevz00_578;

								obj_t BgL_lisz00_579;

								{	/* Ieee/control.scm 291 */
									obj_t BgL_arg1333z00_569;

									BgL_arg1333z00_569 = CDR(BgL_ansz00_563);
									{
										obj_t BgL_prevz00_988;

										obj_t BgL_lisz00_989;

										BgL_prevz00_988 = BgL_ansz00_563;
										BgL_lisz00_989 = BgL_arg1333z00_569;
									BgL_scanzd2inzd2_987:
										if (PAIRP(BgL_lisz00_989))
											{	/* Ieee/control.scm 291 */
												bool_t BgL_testz00_1599;

												{	/* Ieee/control.scm 291 */
													obj_t BgL_arg1339z00_997;

													BgL_arg1339z00_997 = CAR(BgL_lisz00_989);
													BgL_testz00_1599 =
														CBOOL(PROCEDURE_ENTRY(BgL_predz00_31)
														(BgL_predz00_31, BgL_arg1339z00_997, BEOA));
												}
												if (BgL_testz00_1599)
													{
														obj_t BgL_lisz00_1605;

														obj_t BgL_prevz00_1604;

														BgL_prevz00_1604 = BgL_lisz00_989;
														BgL_lisz00_1605 = CDR(BgL_lisz00_989);
														BgL_lisz00_989 = BgL_lisz00_1605;
														BgL_prevz00_988 = BgL_prevz00_1604;
														goto BgL_scanzd2inzd2_987;
													}
												else
													{	/* Ieee/control.scm 291 */
														BgL_prevz00_578 = BgL_prevz00_988;
														BgL_lisz00_579 = CDR(BgL_lisz00_989);
													BgL_zc3anonymousza31340ze3z83_580:
														{
															obj_t BgL_lisz00_582;

															BgL_lisz00_582 = BgL_lisz00_579;
														BgL_zc3anonymousza31341ze3z83_583:
															if (PAIRP(BgL_lisz00_582))
																{	/* Ieee/control.scm 285 */
																	bool_t BgL_testz00_1609;

																	{	/* Ieee/control.scm 285 */
																		obj_t BgL_arg1346z00_588;

																		BgL_arg1346z00_588 = CAR(BgL_lisz00_582);
																		BgL_testz00_1609 =
																			CBOOL(PROCEDURE_ENTRY(BgL_predz00_31)
																			(BgL_predz00_31, BgL_arg1346z00_588,
																				BEOA));
																	}
																	if (BgL_testz00_1609)
																		{	/* Ieee/control.scm 285 */
																			SET_CDR(BgL_prevz00_578, BgL_lisz00_582);
																			{	/* Ieee/control.scm 288 */
																				obj_t BgL_arg1344z00_586;

																				BgL_arg1344z00_586 =
																					CDR(BgL_lisz00_582);
																				{
																					obj_t BgL_prevz00_1030;

																					obj_t BgL_lisz00_1031;

																					BgL_prevz00_1030 = BgL_lisz00_582;
																					BgL_lisz00_1031 = BgL_arg1344z00_586;
																				BgL_scanzd2inzd2_1029:
																					if (PAIRP(BgL_lisz00_1031))
																						{	/* Ieee/control.scm 288 */
																							bool_t BgL_testz00_1618;

																							{	/* Ieee/control.scm 288 */
																								obj_t BgL_arg1339z00_1039;

																								BgL_arg1339z00_1039 =
																									CAR(BgL_lisz00_1031);
																								BgL_testz00_1618 =
																									CBOOL(PROCEDURE_ENTRY
																									(BgL_predz00_31)
																									(BgL_predz00_31,
																										BgL_arg1339z00_1039, BEOA));
																							}
																							if (BgL_testz00_1618)
																								{
																									obj_t BgL_lisz00_1624;

																									obj_t BgL_prevz00_1623;

																									BgL_prevz00_1623 =
																										BgL_lisz00_1031;
																									BgL_lisz00_1624 =
																										CDR(BgL_lisz00_1031);
																									BgL_lisz00_1031 =
																										BgL_lisz00_1624;
																									BgL_prevz00_1030 =
																										BgL_prevz00_1623;
																									goto BgL_scanzd2inzd2_1029;
																								}
																							else
																								{
																									obj_t BgL_lisz00_1627;

																									obj_t BgL_prevz00_1626;

																									BgL_prevz00_1626 =
																										BgL_prevz00_1030;
																									BgL_lisz00_1627 =
																										CDR(BgL_lisz00_1031);
																									BgL_lisz00_579 =
																										BgL_lisz00_1627;
																									BgL_prevz00_578 =
																										BgL_prevz00_1626;
																									goto
																										BgL_zc3anonymousza31340ze3z83_580;
																								}
																						}
																					else
																						{	/* Ieee/control.scm 288 */
																							BFALSE;
																						}
																				}
																			}
																		}
																	else
																		{
																			obj_t BgL_lisz00_1629;

																			BgL_lisz00_1629 = CDR(BgL_lisz00_582);
																			BgL_lisz00_582 = BgL_lisz00_1629;
																			goto BgL_zc3anonymousza31341ze3z83_583;
																		}
																}
															else
																{	/* Ieee/control.scm 284 */
																	SET_CDR(BgL_prevz00_578, BgL_lisz00_582);
																}
														}
													}
											}
										else
											{	/* Ieee/control.scm 291 */
												BFALSE;
											}
									}
								}
								return BgL_ansz00_563;
							}
						else
							{
								obj_t BgL_ansz00_1633;

								BgL_ansz00_1633 = CDR(BgL_ansz00_563);
								BgL_ansz00_563 = BgL_ansz00_1633;
								goto BgL_zc3anonymousza31330ze3z83_564;
							}
					}
			}
		}
	}



/* _filter! */
	obj_t BGl__filterz12z12zz__r4_control_features_6_9z00(obj_t BgL_envz00_1175,
		obj_t BgL_predz00_1176, obj_t BgL_lisz00_1177)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 270 */
			{	/* Ieee/control.scm 272 */
				obj_t BgL_auxz00_1642;

				obj_t BgL_auxz00_1635;

				{	/* Ieee/control.scm 272 */
					bool_t BgL_testz00_1643;

					if (PAIRP(BgL_lisz00_1177))
						{	/* Ieee/control.scm 272 */
							BgL_testz00_1643 = ((bool_t) 1);
						}
					else
						{	/* Ieee/control.scm 272 */
							BgL_testz00_1643 = NULLP(BgL_lisz00_1177);
						}
					if (BgL_testz00_1643)
						{	/* Ieee/control.scm 272 */
							BgL_auxz00_1642 = BgL_lisz00_1177;
						}
					else
						{
							obj_t BgL_auxz00_1647;

							BgL_auxz00_1647 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1554z00zz__r4_control_features_6_9z00,
								BINT(((long) 9366)),
								BGl_string1567z00zz__r4_control_features_6_9z00,
								BGl_string1558z00zz__r4_control_features_6_9z00,
								BgL_lisz00_1177);
							FAILURE(BgL_auxz00_1647, BFALSE, BFALSE);
				}}
				if (PROCEDUREP(BgL_predz00_1176))
					{	/* Ieee/control.scm 272 */
						BgL_auxz00_1635 = BgL_predz00_1176;
					}
				else
					{
						obj_t BgL_auxz00_1638;

						BgL_auxz00_1638 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 9366)),
							BGl_string1567z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00,
							BgL_predz00_1176);
						FAILURE(BgL_auxz00_1638, BFALSE, BFALSE);
					}
				return
					BGl_filterz12z12zz__r4_control_features_6_9z00(BgL_auxz00_1635,
					BgL_auxz00_1642);
			}
		}
	}



/* force */
	BGL_EXPORTED_DEF obj_t BGl_forcez00zz__r4_control_features_6_9z00(obj_t
		BgL_promisez00_33)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 297 */
			return PROCEDURE_ENTRY(BgL_promisez00_33) (BgL_promisez00_33, BEOA);
		}
	}



/* _force */
	obj_t BGl__forcez00zz__r4_control_features_6_9z00(obj_t BgL_envz00_1178,
		obj_t BgL_promisez00_1179)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 297 */
			return PROCEDURE_ENTRY(BgL_promisez00_1179) (BgL_promisez00_1179, BEOA);
		}
	}



/* make-promise */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t BgL_procz00_34)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 303 */
			{	/* Ieee/control.scm 304 */
				obj_t BgL_resultzd2readyzf3z21_595;

				obj_t BgL_resultz00_596;

				BgL_resultzd2readyzf3z21_595 = MAKE_CELL(BFALSE);
				BgL_resultz00_596 = MAKE_CELL(BFALSE);
				{	/* Ieee/control.scm 306 */
					obj_t BgL_zc3anonymousza31349ze3z83_1180;

					BgL_zc3anonymousza31349ze3z83_1180 =
						make_fx_procedure
						(BGl_zc3anonymousza31349ze3z83zz__r4_control_features_6_9z00,
						(int) (((long) 0)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza31349ze3z83_1180, (int) (((long) 0)),
						BgL_procz00_34);
					PROCEDURE_SET(BgL_zc3anonymousza31349ze3z83_1180, (int) (((long) 1)),
						BgL_resultzd2readyzf3z21_595);
					PROCEDURE_SET(BgL_zc3anonymousza31349ze3z83_1180, (int) (((long) 2)),
						BgL_resultz00_596);
					return BgL_zc3anonymousza31349ze3z83_1180;
				}
			}
		}
	}



/* _make-promise */
	obj_t BGl__makezd2promisezd2zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1181, obj_t BgL_procz00_1182)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 303 */
			{	/* Ieee/control.scm 304 */
				obj_t BgL_auxz00_1665;

				if (PROCEDUREP(BgL_procz00_1182))
					{	/* Ieee/control.scm 304 */
						BgL_auxz00_1665 = BgL_procz00_1182;
					}
				else
					{
						obj_t BgL_auxz00_1668;

						BgL_auxz00_1668 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 10428)),
							BGl_string1568z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00,
							BgL_procz00_1182);
						FAILURE(BgL_auxz00_1668, BFALSE, BFALSE);
					}
				return
					BGl_makezd2promisezd2zz__r4_control_features_6_9z00(BgL_auxz00_1665);
			}
		}
	}



/* <anonymous:1349> */
	obj_t BGl_zc3anonymousza31349ze3z83zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1183)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 306 */
			{	/* Ieee/control.scm 307 */
				obj_t BgL_procz00_1184;

				obj_t BgL_resultzd2readyzf3z21_1185;

				obj_t BgL_resultz00_1186;

				BgL_procz00_1184 = PROCEDURE_REF(BgL_envz00_1183, (int) (((long) 0)));
				BgL_resultzd2readyzf3z21_1185 =
					PROCEDURE_REF(BgL_envz00_1183, (int) (((long) 1)));
				BgL_resultz00_1186 = PROCEDURE_REF(BgL_envz00_1183, (int) (((long) 2)));
				{

					if (CBOOL(CELL_REF(BgL_resultzd2readyzf3z21_1185)))
						{	/* Ieee/control.scm 307 */
							return CELL_REF(BgL_resultz00_1186);
						}
					else
						{	/* Ieee/control.scm 309 */
							obj_t BgL_xz00_598;

							BgL_xz00_598 =
								PROCEDURE_ENTRY(BgL_procz00_1184) (BgL_procz00_1184, BEOA);
							if (CBOOL(CELL_REF(BgL_resultzd2readyzf3z21_1185)))
								{	/* Ieee/control.scm 310 */
									return CELL_REF(BgL_resultz00_1186);
								}
							else
								{	/* Ieee/control.scm 310 */
									CELL_SET(BgL_resultzd2readyzf3z21_1185, BTRUE);
									CELL_SET(BgL_resultz00_1186, BgL_xz00_598);
									return CELL_REF(BgL_resultz00_1186);
								}
						}
				}
			}
		}
	}



/* call/cc */
	BGL_EXPORTED_DEF obj_t BGl_callzf2cczf2zz__r4_control_features_6_9z00(obj_t
		BgL_procz00_35)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 320 */
			{	/* Ieee/control.scm 323 */
				obj_t BgL_zc3anonymousza31355ze3z83_1190;

				BgL_zc3anonymousza31355ze3z83_1190 =
					make_fx_procedure
					(BGl_zc3anonymousza31355ze3z83zz__r4_control_features_6_9z00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31355ze3z83_1190, (int) (((long) 0)),
					BgL_procz00_35);
				return call_cc(BgL_zc3anonymousza31355ze3z83_1190);
			}
		}
	}



/* _call/cc */
	obj_t BGl__callzf2cczf2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1191,
		obj_t BgL_procz00_1192)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 320 */
			{	/* Ieee/control.scm 323 */
				obj_t BgL_auxz00_1691;

				if (PROCEDUREP(BgL_procz00_1192))
					{	/* Ieee/control.scm 323 */
						BgL_auxz00_1691 = BgL_procz00_1192;
					}
				else
					{
						obj_t BgL_auxz00_1694;

						BgL_auxz00_1694 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 10980)),
							BGl_string1569z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00,
							BgL_procz00_1192);
						FAILURE(BgL_auxz00_1694, BFALSE, BFALSE);
					}
				return BGl_callzf2cczf2zz__r4_control_features_6_9z00(BgL_auxz00_1691);
			}
		}
	}



/* <anonymous:1355> */
	obj_t BGl_zc3anonymousza31355ze3z83zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1193, obj_t BgL_contz00_1195)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 321 */
			{	/* Ieee/control.scm 323 */
				obj_t BgL_procz00_1194;

				BgL_procz00_1194 = PROCEDURE_REF(BgL_envz00_1193, (int) (((long) 0)));
				{
					obj_t BgL_contz00_600;

					BgL_contz00_600 = BgL_contz00_1195;
					{	/* Ieee/control.scm 323 */
						obj_t BgL_zc3anonymousza31357ze3z83_1189;

						BgL_zc3anonymousza31357ze3z83_1189 =
							make_va_procedure
							(BGl_zc3anonymousza31357ze3z83zz__r4_control_features_6_9z00,
							(int) (((long) -1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza31357ze3z83_1189,
							(int) (((long) 0)), BgL_contz00_600);
						return PROCEDURE_ENTRY(BgL_procz00_1194) (BgL_procz00_1194,
							BgL_zc3anonymousza31357ze3z83_1189, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:1357> */
	obj_t BGl_zc3anonymousza31357ze3z83zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1196, obj_t BgL_valsz00_1198)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 322 */
			{	/* Ieee/control.scm 323 */
				obj_t BgL_contz00_1197;

				BgL_contz00_1197 = PROCEDURE_REF(BgL_envz00_1196, (int) (((long) 0)));
				{
					obj_t BgL_valsz00_603;

					BgL_valsz00_603 = BgL_valsz00_1198;
					{	/* Ieee/control.scm 323 */
						bool_t BgL_testz00_1710;

						if (PAIRP(BgL_valsz00_603))
							{	/* Ieee/control.scm 323 */
								BgL_testz00_1710 = NULLP(CDR(BgL_valsz00_603));
							}
						else
							{	/* Ieee/control.scm 323 */
								BgL_testz00_1710 = ((bool_t) 0);
							}
						if (BgL_testz00_1710)
							{	/* Ieee/control.scm 324 */
								obj_t BgL_arg1359z00_606;

								BgL_arg1359z00_606 = CAR(BgL_valsz00_603);
								return
									PROCEDURE_ENTRY(BgL_contz00_1197) (BgL_contz00_1197,
									BgL_arg1359z00_606, BEOA);
							}
						else
							{	/* Ieee/control.scm 323 */
								{	/* Ieee/control.scm 326 */
									int BgL_auxz00_1718;

									BgL_auxz00_1718 = (int) (((long) -1));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_1718);
								}
								return
									PROCEDURE_ENTRY(BgL_contz00_1197) (BgL_contz00_1197,
									BgL_valsz00_603, BEOA);
							}
					}
				}
			}
		}
	}



/* call-with-current-continuation */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00
		(obj_t BgL_procz00_36)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 332 */
			return BGl_callzf2cczf2zz__r4_control_features_6_9z00(BgL_procz00_36);
		}
	}



/* _call-with-current-continuation */
	obj_t
		BGl__callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00
		(obj_t BgL_envz00_1199, obj_t BgL_procz00_1200)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 332 */
			{	/* Ieee/control.scm 333 */
				obj_t BgL_procz00_1280;

				if (PROCEDUREP(BgL_procz00_1200))
					{	/* Ieee/control.scm 333 */
						BgL_procz00_1280 = BgL_procz00_1200;
					}
				else
					{
						obj_t BgL_auxz00_1726;

						BgL_auxz00_1726 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 11405)),
							BGl_string1570z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00,
							BgL_procz00_1200);
						FAILURE(BgL_auxz00_1726, BFALSE, BFALSE);
					}
				return BGl_callzf2cczf2zz__r4_control_features_6_9z00(BgL_procz00_1280);
			}
		}
	}



/* dynamic-wind */
	BGL_EXPORTED_DEF obj_t
		BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t BgL_beforez00_37,
		obj_t BgL_thunkz00_38, obj_t BgL_afterz00_39)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 338 */
			PROCEDURE_ENTRY(BgL_beforez00_37) (BgL_beforez00_37, BEOA);
			{	/* Ieee/control.scm 340 */

				PUSH_BEFORE(BgL_beforez00_37);
				{	/* Ieee/control.scm 342 */
					obj_t BgL_val1096z00_611;

					BgL_val1096z00_611 =
						BGl_zc3exitza31372ze3z83zz__r4_control_features_6_9z00
						(BgL_thunkz00_38);
					PROCEDURE_ENTRY(BgL_afterz00_39) (BgL_afterz00_39, BEOA);
					POP_BEFORE();
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1096z00_611)))
						{	/* Ieee/control.scm 346 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1096z00_611),
								CDR(BgL_val1096z00_611));
						}
					else
						{	/* Ieee/control.scm 346 */
							return BgL_val1096z00_611;
						}
				}
			}
		}
	}



/* <exit:1372> */
	obj_t BGl_zc3exitza31372ze3z83zz__r4_control_features_6_9z00(obj_t
		BgL_thunkz00_1205)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 345 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1097z00_616;

			if (SET_EXIT(BgL_an_exit1097z00_616))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1097z00_616 = (void *) jmpbuf;
					{	/* Ieee/control.scm 345 */

						PUSH_EXIT(BgL_an_exit1097z00_616, ((long) 0));
						{	/* Ieee/control.scm 343 */
							obj_t BgL_val1098z00_617;

							BgL_val1098z00_617 =
								PROCEDURE_ENTRY(BgL_thunkz00_1205) (BgL_thunkz00_1205, BEOA);
							POP_EXIT();
							return BgL_val1098z00_617;
						}
					}
				}
		}
	}



/* _dynamic-wind */
	obj_t BGl__dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1201, obj_t BgL_beforez00_1202, obj_t BgL_thunkz00_1203,
		obj_t BgL_afterz00_1204)
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 338 */
			{	/* Ieee/control.scm 346 */
				obj_t BgL_auxz00_1764;

				obj_t BgL_auxz00_1757;

				obj_t BgL_auxz00_1750;

				if (PROCEDUREP(BgL_afterz00_1204))
					{	/* Ieee/control.scm 346 */
						BgL_auxz00_1764 = BgL_afterz00_1204;
					}
				else
					{
						obj_t BgL_auxz00_1767;

						BgL_auxz00_1767 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 11844)),
							BGl_string1571z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00,
							BgL_afterz00_1204);
						FAILURE(BgL_auxz00_1767, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_thunkz00_1203))
					{	/* Ieee/control.scm 346 */
						BgL_auxz00_1757 = BgL_thunkz00_1203;
					}
				else
					{
						obj_t BgL_auxz00_1760;

						BgL_auxz00_1760 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 11844)),
							BGl_string1571z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00,
							BgL_thunkz00_1203);
						FAILURE(BgL_auxz00_1760, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_beforez00_1202))
					{	/* Ieee/control.scm 346 */
						BgL_auxz00_1750 = BgL_beforez00_1202;
					}
				else
					{
						obj_t BgL_auxz00_1753;

						BgL_auxz00_1753 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1554z00zz__r4_control_features_6_9z00,
							BINT(((long) 11844)),
							BGl_string1571z00zz__r4_control_features_6_9z00,
							BGl_string1556z00zz__r4_control_features_6_9z00,
							BgL_beforez00_1202);
						FAILURE(BgL_auxz00_1753, BFALSE, BFALSE);
					}
				return
					BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(BgL_auxz00_1750,
					BgL_auxz00_1757, BgL_auxz00_1764);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00()
	{
		AN_OBJECT;
		{	/* Ieee/control.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1572z00zz__r4_control_features_6_9z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string1572z00zz__r4_control_features_6_9z00));
		}
	}

#ifdef __cplusplus
}
#endif
