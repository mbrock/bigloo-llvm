/*===========================================================================*/
/*   (Ieee/flonum.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/flonum.scm -indent -o objs/obj_u/Ieee/flonum.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL double BGl_atanflz00zz__r4_numbers_6_5_flonumz00(double,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL bool_t BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t BGl__negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__atanzd21flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__integerflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t
		BGl__doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl__minflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__negflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__zb2flzb2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__ze3flze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(double,
		double);
	BGL_EXPORTED_DECL double
		BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(char *);
	BGL_EXPORTED_DECL bool_t BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__absflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern obj_t bgl_float_to_ieee_string(float);
	static obj_t BGl__floorflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl__acosflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__remainderflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__exptflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t
		BGl__doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_floorflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__truncateflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__atanzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__expflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00 =
		BUNSPEC;
	static obj_t
		BGl__ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	static obj_t BGl__atanflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__cosflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__maxflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t
		BGl__llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL double BGl_logflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__ze3zd3flz30zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__nanflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__tanflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern obj_t string_to_bstring(char *);
	extern double bgl_ieee_string_to_double(obj_t);
	BGL_EXPORTED_DECL long BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t
		BGl__realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__zd2flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__signbitflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t BGl__positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL float
		BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t);
	BGL_EXPORTED_DECL double BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t
		BGl__ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t);
	BGL_EXPORTED_DECL double BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__zc3zd3flz10zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL double
		BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double
		BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL double
		BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(double, double);
	static obj_t BGl__ceilingflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl__maxzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL double
		BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL int
		BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(float);
	BGL_EXPORTED_DECL obj_t
		BGl_realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00(obj_t);
	extern float bgl_ieee_string_to_float(obj_t);
	BGL_EXPORTED_DECL double BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl__sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL double BGl_sinflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_asinflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(double,
		double);
	BGL_EXPORTED_DECL bool_t
		BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL bool_t BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_za2flza2zz__r4_numbers_6_5_flonumz00(double,
		double);
	BGL_EXPORTED_DECL bool_t BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl__logflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_minflz00zz__r4_numbers_6_5_flonumz00(double,
		obj_t);
	BGL_EXPORTED_DECL double BGl_negflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__zf2flzf2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_absflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00();
	BGL_EXPORTED_DECL double
		BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(double, double);
	static obj_t BGl__zc3flzc3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t
		BGl__floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__asinflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(double,
		double);
	BGL_EXPORTED_DECL bool_t BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(double,
		double);
	BGL_EXPORTED_DECL bool_t
		BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL double BGl_expflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl__oddflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern obj_t real_to_string(double);
	static obj_t
		BGl__ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_cosflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_maxflz00zz__r4_numbers_6_5_flonumz00(double,
		obj_t);
	static obj_t BGl__sqrtflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_acosflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL float
		BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(int);
	BGL_EXPORTED_DECL double BGl_exptflz00zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl__za2flza2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__zd3flzd3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__sinflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(double,
		double);
	extern obj_t bgl_double_to_ieee_string(double);
	BGL_EXPORTED_DECL obj_t
		BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t BGl__evenflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern obj_t the_failure(obj_t, obj_t, obj_t);
	static obj_t BGl__roundflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl__minzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(float);
	BGL_EXPORTED_DECL double BGl_tanflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__integerflza7f3za7f31615z00,
		BGl__integerflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ze3flzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7e3flza7e3za7za7__r4_1616z00,
		BGl__ze3flze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sinflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__sinflza700za7za7__r4_1617za7,
		BGl__sinflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_exptflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__exptflza700za7za7__r41618za7,
		BGl__exptflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_intzd2bitszd2ze3floatzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__intza7d2bitsza7d2za7e1619za7,
		BGl__intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7d3flza7d3za7za7__r4_1620z00,
		BGl__zd3flzd3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zc3flzd2envz11zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7c3flza7c3za7za7__r4_1621z00,
		BGl__zc3flzc3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_maxflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__maxflza700za7za7__r4_1622za7, va_generic_entry,
		BGl__maxflz00zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ieeezd2stringzd2ze3realzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__ieeeza7d2stringza7d1623z00,
		BGl__ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_atanflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__atanflza700za7za7__r41624za7, va_generic_entry,
		BGl__atanflz00zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_realzd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__realza7d2za7e3ieeeza71625za7,
		BGl__realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_floorflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__floorflza700za7za7__r1626za7,
		BGl__floorflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_realzd2ze3stringzd2envze3zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__realza7d2za7e3strin1627z00,
		BGl__realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sqrtflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__sqrtflza700za7za7__r41628za7,
		BGl__sqrtflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_floatzd2ze3intzd2bitszd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__floatza7d2za7e3intza71629za7,
		BGl__floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_negflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__negflza700za7za7__r4_1630za7,
		BGl__negflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_realzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__realza7f3za7f3za7za7__r1631z00,
		BGl__realzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_REAL(BGl_real1578z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_real1578za700za7za7__r1632za7, 0.0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ieeezd2stringzd2ze3floatzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__ieeeza7d2stringza7d1633z00,
		BGl__ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_signbitflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__signbitflza700za7za7_1634za7,
		BGl__signbitflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zc3zd3flzd2envzc2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7c3za7d3flza710za7za7__1635za7,
		BGl__zc3zd3flz10zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__expflza700za7za7__r4_1636za7,
		BGl__expflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_positiveflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__positiveflza7f3za7f1637z00,
		BGl__positiveflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_logflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__logflza700za7za7__r4_1638za7,
		BGl__logflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_minflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__minflza700za7za7__r4_1639za7, va_generic_entry,
		BGl__minflz00zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cosflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__cosflza700za7za7__r4_1640za7,
		BGl__cosflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_minzd22flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__minza7d22flza7d2za7za7_1641z00,
		BGl__minzd22flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_doublezd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__doubleza7d2za7e3iee1642z00,
		BGl__doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_asinflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__asinflza700za7za7__r41643za7,
		BGl__asinflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_doublezd2ze3llongzd2bitszd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__doubleza7d2za7e3llo1644z00,
		BGl__doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_atanzd22flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__atanza7d22flza7d2za7za71645z00,
		BGl__atanzd22flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_atanzd21flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__atanza7d21flza7d2za7za71646z00,
		BGl__atanzd21flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evenflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__evenflza7f3za7f3za7za7_1647z00,
		BGl__evenflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_maxzd22flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__maxza7d22flza7d2za7za7_1648z00,
		BGl__maxzd22flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_absflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__absflza700za7za7__r4_1649za7,
		BGl__absflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_infiniteflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__infiniteflza7f3za7f1650z00,
		BGl__infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zf2flzd2envz20zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7f2flza7f2za7za7__r4_1651z00,
		BGl__zf2flzf2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_truncateflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__truncateflza700za7za71652za7,
		BGl__truncateflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remainderflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__remainderflza700za71653z00,
		BGl__remainderflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2bitszd2ze3doublezd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__llongza7d2bitsza7d21654z00,
		BGl__llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd2flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7d2flza7d2za7za7__r4_1655z00,
		BGl__zd2flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zb2flzd2envz60zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7b2flza7b2za7za7__r4_1656z00,
		BGl__zb2flzb2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_acosflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__acosflza700za7za7__r41657za7,
		BGl__acosflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_za2flzd2envz70zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7a2flza7a2za7za7__r4_1658z00,
		BGl__za2flza2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nanflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__nanflza7f3za7f3za7za7__1659z00,
		BGl__nanflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3realzd2envze3zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__stringza7d2za7e3rea1660z00,
		BGl__stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ze3zd3flzd2envze2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7e3za7d3flza730za7za7__1661za7,
		BGl__ze3zd3flz30zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sqrtflzd2urzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__sqrtflza7d2urza7d2za71662za7,
		BGl__sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ceilingflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__ceilingflza700za7za7_1663za7,
		BGl__ceilingflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ieeezd2stringzd2ze3doublezd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__ieeeza7d2stringza7d1664z00,
		BGl__ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tanflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__tanflza700za7za7__r4_1665za7,
		BGl__tanflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_floatzd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__floatza7d2za7e3ieee1666z00,
		BGl__floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_atanzd22flzd2urzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__atanza7d22flza7d2ur1667z00,
		BGl__atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_oddflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__oddflza7f3za7f3za7za7__1668z00,
		BGl__oddflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_za7eroflzf3zd2envz86zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__za7a7eroflza7f3za754za71669z00,
		BGl__za7eroflzf3z54zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_negativeflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__negativeflza7f3za7f1670z00,
		BGl__negativeflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1542za700za7za7_1671za7,
		"/tmp/bigloo/runtime/Ieee/flonum.scm", 35);
	      DEFINE_STRING(BGl_string1543z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1543za700za7za7_1672za7, "_=fl", 4);
	      DEFINE_STRING(BGl_string1544z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1544za700za7za7_1673za7, "double", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_finiteflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__finiteflza7f3za7f3za71674za7,
		BGl__finiteflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1545z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1545za700za7za7_1675za7, "_<fl", 4);
	      DEFINE_STRING(BGl_string1546z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1546za700za7za7_1676za7, "_>fl", 4);
	      DEFINE_STRING(BGl_string1547z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1547za700za7za7_1677za7, "_<=fl", 5);
	      DEFINE_STRING(BGl_string1548z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1548za700za7za7_1678za7, "_>=fl", 5);
	      DEFINE_STRING(BGl_string1549z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1549za700za7za7_1679za7, "_zerofl?", 8);
	      DEFINE_STRING(BGl_string1550z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1550za700za7za7_1680za7, "_positivefl?", 12);
	      DEFINE_STRING(BGl_string1551z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1551za700za7za7_1681za7, "_negativefl?", 12);
	      DEFINE_STRING(BGl_string1552z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1552za700za7za7_1682za7, "_+fl", 4);
	      DEFINE_STRING(BGl_string1553z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1553za700za7za7_1683za7, "_-fl", 4);
	      DEFINE_STRING(BGl_string1554z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1554za700za7za7_1684za7, "_*fl", 4);
	      DEFINE_STRING(BGl_string1555z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1555za700za7za7_1685za7, "_/fl", 4);
	      DEFINE_STRING(BGl_string1556z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1556za700za7za7_1686za7, "_negfl", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_roundflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__roundflza700za7za7__r1687za7,
		BGl__roundflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1557z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1557za700za7za7_1688za7, "_maxfl", 6);
	      DEFINE_STRING(BGl_string1558z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1558za700za7za7_1689za7, "_max-2fl", 8);
	      DEFINE_STRING(BGl_string1560z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1560za700za7za7_1690za7, "_minfl", 6);
	      DEFINE_STRING(BGl_string1559z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1559za700za7za7_1691za7, "_min-2fl", 8);
	      DEFINE_STRING(BGl_string1561z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1561za700za7za7_1692za7, "_absfl", 6);
	      DEFINE_STRING(BGl_string1562z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1562za700za7za7_1693za7, "_floorfl", 8);
	      DEFINE_STRING(BGl_string1563z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1563za700za7za7_1694za7, "_ceilingfl", 10);
	      DEFINE_STRING(BGl_string1564z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1564za700za7za7_1695za7, "_truncatefl", 11);
	      DEFINE_STRING(BGl_string1565z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1565za700za7za7_1696za7, "_roundfl", 8);
	      DEFINE_STRING(BGl_string1566z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1566za700za7za7_1697za7, "_remainderfl", 12);
	      DEFINE_STRING(BGl_string1567z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1567za700za7za7_1698za7, "_expfl", 6);
	      DEFINE_STRING(BGl_string1568z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1568za700za7za7_1699za7, "_logfl", 6);
	      DEFINE_STRING(BGl_string1570z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1570za700za7za7_1700za7, "_cosfl", 6);
	      DEFINE_STRING(BGl_string1569z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1569za700za7za7_1701za7, "_sinfl", 6);
	      DEFINE_STRING(BGl_string1571z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1571za700za7za7_1702za7, "_tanfl", 6);
	      DEFINE_STRING(BGl_string1572z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1572za700za7za7_1703za7, "_asinfl", 7);
	      DEFINE_STRING(BGl_string1573z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1573za700za7za7_1704za7, "_acosfl", 7);
	      DEFINE_STRING(BGl_string1574z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1574za700za7za7_1705za7, "_atanfl", 7);
	      DEFINE_STRING(BGl_string1575z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1575za700za7za7_1706za7, "_atan-1fl", 9);
	      DEFINE_STRING(BGl_string1576z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1576za700za7za7_1707za7, "atanfl", 6);
	      DEFINE_STRING(BGl_string1577z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1577za700za7za7_1708za7, "Domain error", 12);
	      DEFINE_STRING(BGl_string1580z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1580za700za7za7_1709za7, "_atan-2fl-ur", 12);
	      DEFINE_STRING(BGl_string1579z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1579za700za7za7_1710za7, "_atan-2fl", 9);
	      DEFINE_STRING(BGl_string1581z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1581za700za7za7_1711za7, "sqrtfl", 6);
	      DEFINE_STRING(BGl_string1582z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1582za700za7za7_1712za7, "_sqrtfl", 7);
	      DEFINE_STRING(BGl_string1583z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1583za700za7za7_1713za7, "_sqrtfl-ur", 10);
	      DEFINE_STRING(BGl_string1584z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1584za700za7za7_1714za7, "_exptfl", 7);
	      DEFINE_STRING(BGl_string1585z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1585za700za7za7_1715za7, "_signbitfl", 10);
	      DEFINE_STRING(BGl_string1586z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1586za700za7za7_1716za7, "_integerfl?", 11);
	      DEFINE_STRING(BGl_string1587z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1587za700za7za7_1717za7, "_evenfl?", 8);
	      DEFINE_STRING(BGl_string1588z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1588za700za7za7_1718za7, "_oddfl?", 7);
	      DEFINE_STRING(BGl_string1600z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1600za700za7za7_1719za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1590z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1590za700za7za7_1720za7, "_infinitefl?", 12);
	      DEFINE_STRING(BGl_string1589z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1589za700za7za7_1721za7, "_finitefl?", 10);
	      DEFINE_STRING(BGl_string1601z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1601za700za7za7_1722za7, "_real->ieee-string", 18);
	      DEFINE_STRING(BGl_string1591z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1591za700za7za7_1723za7, "_nanfl?", 7);
	      DEFINE_STRING(BGl_string1602z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1602za700za7za7_1724za7, "_ieee-string->double", 20);
	      DEFINE_STRING(BGl_string1592z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1592za700za7za7_1725za7, "+nan.0", 6);
	      DEFINE_STRING(BGl_string1603z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1603za700za7za7_1726za7, "_double->ieee-string", 20);
	      DEFINE_STRING(BGl_string1593z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1593za700za7za7_1727za7, "+inf.0", 6);
	      DEFINE_STRING(BGl_string1604z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1604za700za7za7_1728za7, "_ieee-string->float", 19);
	      DEFINE_STRING(BGl_string1594z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1594za700za7za7_1729za7, "-inf.0", 6);
	      DEFINE_STRING(BGl_string1605z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1605za700za7za7_1730za7, "_float->ieee-string", 19);
	      DEFINE_STRING(BGl_string1595z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1595za700za7za7_1731za7, "_string->real", 13);
	      DEFINE_STRING(BGl_string1606z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1606za700za7za7_1732za7, "float", 5);
	      DEFINE_STRING(BGl_string1596z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1596za700za7za7_1733za7, "string", 6);
	      DEFINE_STRING(BGl_string1607z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1607za700za7za7_1734za7, "_double->llong-bits", 19);
	      DEFINE_STRING(BGl_string1597z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1597za700za7za7_1735za7, "_real->string", 13);
	      DEFINE_STRING(BGl_string1608z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1608za700za7za7_1736za7, "_llong-bits->double", 19);
	      DEFINE_STRING(BGl_string1598z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1598za700za7za7_1737za7, "real", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl__flonumza7f3za7f3za7za7_1738z00,
		BGl__flonumzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1610z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1610za700za7za7_1739za7, "_float->int-bits", 16);
	      DEFINE_STRING(BGl_string1609z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1609za700za7za7_1740za7, "llong", 5);
	      DEFINE_STRING(BGl_string1599z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1599za700za7za7_1741za7, "_ieee-string->real", 18);
	      DEFINE_STRING(BGl_string1611z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1611za700za7za7_1742za7, "_int-bits->float", 16);
	      DEFINE_STRING(BGl_string1612z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1612za700za7za7_1743za7, "int", 3);
	      DEFINE_STRING(BGl_string1613z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1613za700za7za7_1744za7, "__r4_numbers_6_5_flonum", 23);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long
		BgL_checksumz00_1235, char *BgL_fromz00_1236)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* real? */
	BGL_EXPORTED_DEF bool_t BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 298 */
			if (INTEGERP(BgL_objz00_1))
				{	/* Ieee/flonum.scm 299 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/flonum.scm 299 */
					return REALP(BgL_objz00_1);
				}
		}
	}



/* _real? */
	obj_t BGl__realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_856,
		obj_t BgL_objz00_857)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 298 */
			{	/* Ieee/flonum.scm 299 */
				bool_t BgL_auxz00_1244;

				if (INTEGERP(BgL_objz00_857))
					{	/* Ieee/flonum.scm 299 */
						BgL_auxz00_1244 = ((bool_t) 1);
					}
				else
					{	/* Ieee/flonum.scm 299 */
						BgL_auxz00_1244 = REALP(BgL_objz00_857);
					}
				return BBOOL(BgL_auxz00_1244);
			}
		}
	}



/* flonum? */
	BGL_EXPORTED_DEF bool_t BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_objz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 306 */
			return REALP(BgL_objz00_2);
		}
	}



/* _flonum? */
	obj_t BGl__flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_858,
		obj_t BgL_objz00_859)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 306 */
			return BBOOL(REALP(BgL_objz00_859));
		}
	}



/* =fl */
	BGL_EXPORTED_DEF bool_t BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_3, double BgL_r2z00_4)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 312 */
			return (BgL_r1z00_3 == BgL_r2z00_4);
		}
	}



/* _=fl */
	obj_t BGl__zd3flzd3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_860,
		obj_t BgL_r1z00_861, obj_t BgL_r2z00_862)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 312 */
			{	/* Ieee/flonum.scm 313 */
				bool_t BgL_auxz00_1253;

				{	/* Ieee/flonum.scm 313 */
					double BgL_r1z00_1134;

					double BgL_r2z00_1135;

					{	/* Ieee/flonum.scm 313 */
						obj_t BgL_auxz00_1254;

						if (REALP(BgL_r1z00_861))
							{	/* Ieee/flonum.scm 313 */
								BgL_auxz00_1254 = BgL_r1z00_861;
							}
						else
							{
								obj_t BgL_auxz00_1257;

								BgL_auxz00_1257 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 13958)),
									BGl_string1543z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_861);
								FAILURE(BgL_auxz00_1257, BFALSE, BFALSE);
							}
						BgL_r1z00_1134 = REAL_TO_DOUBLE(BgL_auxz00_1254);
					}
					{	/* Ieee/flonum.scm 313 */
						obj_t BgL_auxz00_1262;

						if (REALP(BgL_r2z00_862))
							{	/* Ieee/flonum.scm 313 */
								BgL_auxz00_1262 = BgL_r2z00_862;
							}
						else
							{
								obj_t BgL_auxz00_1265;

								BgL_auxz00_1265 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 13958)),
									BGl_string1543z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_862);
								FAILURE(BgL_auxz00_1265, BFALSE, BFALSE);
							}
						BgL_r2z00_1135 = REAL_TO_DOUBLE(BgL_auxz00_1262);
					}
					BgL_auxz00_1253 = (BgL_r1z00_1134 == BgL_r2z00_1135);
				}
				return BBOOL(BgL_auxz00_1253);
			}
		}
	}



/* <fl */
	BGL_EXPORTED_DEF bool_t BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_5, double BgL_r2z00_6)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 318 */
			return (BgL_r1z00_5 < BgL_r2z00_6);
		}
	}



/* _<fl */
	obj_t BGl__zc3flzc3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_863,
		obj_t BgL_r1z00_864, obj_t BgL_r2z00_865)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 318 */
			{	/* Ieee/flonum.scm 319 */
				bool_t BgL_auxz00_1273;

				{	/* Ieee/flonum.scm 319 */
					double BgL_r1z00_1136;

					double BgL_r2z00_1137;

					{	/* Ieee/flonum.scm 319 */
						obj_t BgL_auxz00_1274;

						if (REALP(BgL_r1z00_864))
							{	/* Ieee/flonum.scm 319 */
								BgL_auxz00_1274 = BgL_r1z00_864;
							}
						else
							{
								obj_t BgL_auxz00_1277;

								BgL_auxz00_1277 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14226)),
									BGl_string1545z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_864);
								FAILURE(BgL_auxz00_1277, BFALSE, BFALSE);
							}
						BgL_r1z00_1136 = REAL_TO_DOUBLE(BgL_auxz00_1274);
					}
					{	/* Ieee/flonum.scm 319 */
						obj_t BgL_auxz00_1282;

						if (REALP(BgL_r2z00_865))
							{	/* Ieee/flonum.scm 319 */
								BgL_auxz00_1282 = BgL_r2z00_865;
							}
						else
							{
								obj_t BgL_auxz00_1285;

								BgL_auxz00_1285 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14226)),
									BGl_string1545z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_865);
								FAILURE(BgL_auxz00_1285, BFALSE, BFALSE);
							}
						BgL_r2z00_1137 = REAL_TO_DOUBLE(BgL_auxz00_1282);
					}
					BgL_auxz00_1273 = (BgL_r1z00_1136 < BgL_r2z00_1137);
				}
				return BBOOL(BgL_auxz00_1273);
			}
		}
	}



/* >fl */
	BGL_EXPORTED_DEF bool_t BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_7, double BgL_r2z00_8)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 324 */
			return (BgL_r1z00_7 > BgL_r2z00_8);
		}
	}



/* _>fl */
	obj_t BGl__ze3flze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_866,
		obj_t BgL_r1z00_867, obj_t BgL_r2z00_868)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 324 */
			{	/* Ieee/flonum.scm 325 */
				bool_t BgL_auxz00_1293;

				{	/* Ieee/flonum.scm 325 */
					double BgL_r1z00_1138;

					double BgL_r2z00_1139;

					{	/* Ieee/flonum.scm 325 */
						obj_t BgL_auxz00_1294;

						if (REALP(BgL_r1z00_867))
							{	/* Ieee/flonum.scm 325 */
								BgL_auxz00_1294 = BgL_r1z00_867;
							}
						else
							{
								obj_t BgL_auxz00_1297;

								BgL_auxz00_1297 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14494)),
									BGl_string1546z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_867);
								FAILURE(BgL_auxz00_1297, BFALSE, BFALSE);
							}
						BgL_r1z00_1138 = REAL_TO_DOUBLE(BgL_auxz00_1294);
					}
					{	/* Ieee/flonum.scm 325 */
						obj_t BgL_auxz00_1302;

						if (REALP(BgL_r2z00_868))
							{	/* Ieee/flonum.scm 325 */
								BgL_auxz00_1302 = BgL_r2z00_868;
							}
						else
							{
								obj_t BgL_auxz00_1305;

								BgL_auxz00_1305 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14494)),
									BGl_string1546z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_868);
								FAILURE(BgL_auxz00_1305, BFALSE, BFALSE);
							}
						BgL_r2z00_1139 = REAL_TO_DOUBLE(BgL_auxz00_1302);
					}
					BgL_auxz00_1293 = (BgL_r1z00_1138 > BgL_r2z00_1139);
				}
				return BBOOL(BgL_auxz00_1293);
			}
		}
	}



/* <=fl */
	BGL_EXPORTED_DEF bool_t BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_9, double BgL_r2z00_10)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 330 */
			return (BgL_r1z00_9 <= BgL_r2z00_10);
		}
	}



/* _<=fl */
	obj_t BGl__zc3zd3flz10zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_869,
		obj_t BgL_r1z00_870, obj_t BgL_r2z00_871)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 330 */
			{	/* Ieee/flonum.scm 331 */
				bool_t BgL_auxz00_1313;

				{	/* Ieee/flonum.scm 331 */
					double BgL_r1z00_1140;

					double BgL_r2z00_1141;

					{	/* Ieee/flonum.scm 331 */
						obj_t BgL_auxz00_1314;

						if (REALP(BgL_r1z00_870))
							{	/* Ieee/flonum.scm 331 */
								BgL_auxz00_1314 = BgL_r1z00_870;
							}
						else
							{
								obj_t BgL_auxz00_1317;

								BgL_auxz00_1317 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14763)),
									BGl_string1547z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_870);
								FAILURE(BgL_auxz00_1317, BFALSE, BFALSE);
							}
						BgL_r1z00_1140 = REAL_TO_DOUBLE(BgL_auxz00_1314);
					}
					{	/* Ieee/flonum.scm 331 */
						obj_t BgL_auxz00_1322;

						if (REALP(BgL_r2z00_871))
							{	/* Ieee/flonum.scm 331 */
								BgL_auxz00_1322 = BgL_r2z00_871;
							}
						else
							{
								obj_t BgL_auxz00_1325;

								BgL_auxz00_1325 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14763)),
									BGl_string1547z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_871);
								FAILURE(BgL_auxz00_1325, BFALSE, BFALSE);
							}
						BgL_r2z00_1141 = REAL_TO_DOUBLE(BgL_auxz00_1322);
					}
					BgL_auxz00_1313 = (BgL_r1z00_1140 <= BgL_r2z00_1141);
				}
				return BBOOL(BgL_auxz00_1313);
			}
		}
	}



/* >=fl */
	BGL_EXPORTED_DEF bool_t BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_11, double BgL_r2z00_12)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 336 */
			return (BgL_r1z00_11 >= BgL_r2z00_12);
		}
	}



/* _>=fl */
	obj_t BGl__ze3zd3flz30zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_872,
		obj_t BgL_r1z00_873, obj_t BgL_r2z00_874)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 336 */
			{	/* Ieee/flonum.scm 337 */
				bool_t BgL_auxz00_1333;

				{	/* Ieee/flonum.scm 337 */
					double BgL_r1z00_1142;

					double BgL_r2z00_1143;

					{	/* Ieee/flonum.scm 337 */
						obj_t BgL_auxz00_1334;

						if (REALP(BgL_r1z00_873))
							{	/* Ieee/flonum.scm 337 */
								BgL_auxz00_1334 = BgL_r1z00_873;
							}
						else
							{
								obj_t BgL_auxz00_1337;

								BgL_auxz00_1337 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15033)),
									BGl_string1548z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_873);
								FAILURE(BgL_auxz00_1337, BFALSE, BFALSE);
							}
						BgL_r1z00_1142 = REAL_TO_DOUBLE(BgL_auxz00_1334);
					}
					{	/* Ieee/flonum.scm 337 */
						obj_t BgL_auxz00_1342;

						if (REALP(BgL_r2z00_874))
							{	/* Ieee/flonum.scm 337 */
								BgL_auxz00_1342 = BgL_r2z00_874;
							}
						else
							{
								obj_t BgL_auxz00_1345;

								BgL_auxz00_1345 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15033)),
									BGl_string1548z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_874);
								FAILURE(BgL_auxz00_1345, BFALSE, BFALSE);
							}
						BgL_r2z00_1143 = REAL_TO_DOUBLE(BgL_auxz00_1342);
					}
					BgL_auxz00_1333 = (BgL_r1z00_1142 >= BgL_r2z00_1143);
				}
				return BBOOL(BgL_auxz00_1333);
			}
		}
	}



/* zerofl? */
	BGL_EXPORTED_DEF bool_t BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_13)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 342 */
			return (BgL_rz00_13 == ((double) 0.0));
		}
	}



/* _zerofl? */
	obj_t BGl__za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_875,
		obj_t BgL_rz00_876)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 342 */
			{	/* Ieee/flonum.scm 343 */
				bool_t BgL_auxz00_1353;

				{	/* Ieee/flonum.scm 343 */
					double BgL_rz00_1144;

					{	/* Ieee/flonum.scm 343 */
						obj_t BgL_auxz00_1354;

						if (REALP(BgL_rz00_876))
							{	/* Ieee/flonum.scm 343 */
								BgL_auxz00_1354 = BgL_rz00_876;
							}
						else
							{
								obj_t BgL_auxz00_1357;

								BgL_auxz00_1357 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15302)),
									BGl_string1549z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_876);
								FAILURE(BgL_auxz00_1357, BFALSE, BFALSE);
							}
						BgL_rz00_1144 = REAL_TO_DOUBLE(BgL_auxz00_1354);
					}
					BgL_auxz00_1353 = (BgL_rz00_1144 == ((double) 0.0));
				}
				return BBOOL(BgL_auxz00_1353);
			}
		}
	}



/* positivefl? */
	BGL_EXPORTED_DEF bool_t
		BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_14)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 348 */
			return (BgL_rz00_14 > ((double) 0.0));
		}
	}



/* _positivefl? */
	obj_t BGl__positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_877,
		obj_t BgL_rz00_878)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 348 */
			{	/* Ieee/flonum.scm 349 */
				bool_t BgL_auxz00_1365;

				{	/* Ieee/flonum.scm 349 */
					double BgL_rz00_1145;

					{	/* Ieee/flonum.scm 349 */
						obj_t BgL_auxz00_1366;

						if (REALP(BgL_rz00_878))
							{	/* Ieee/flonum.scm 349 */
								BgL_auxz00_1366 = BgL_rz00_878;
							}
						else
							{
								obj_t BgL_auxz00_1369;

								BgL_auxz00_1369 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15572)),
									BGl_string1550z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_878);
								FAILURE(BgL_auxz00_1369, BFALSE, BFALSE);
							}
						BgL_rz00_1145 = REAL_TO_DOUBLE(BgL_auxz00_1366);
					}
					BgL_auxz00_1365 = (BgL_rz00_1145 > ((double) 0.0));
				}
				return BBOOL(BgL_auxz00_1365);
			}
		}
	}



/* negativefl? */
	BGL_EXPORTED_DEF bool_t
		BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_15)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 354 */
			return (BgL_rz00_15 < ((double) 0.0));
		}
	}



/* _negativefl? */
	obj_t BGl__negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_879,
		obj_t BgL_rz00_880)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 354 */
			{	/* Ieee/flonum.scm 355 */
				bool_t BgL_auxz00_1377;

				{	/* Ieee/flonum.scm 355 */
					double BgL_rz00_1146;

					{	/* Ieee/flonum.scm 355 */
						obj_t BgL_auxz00_1378;

						if (REALP(BgL_rz00_880))
							{	/* Ieee/flonum.scm 355 */
								BgL_auxz00_1378 = BgL_rz00_880;
							}
						else
							{
								obj_t BgL_auxz00_1381;

								BgL_auxz00_1381 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15842)),
									BGl_string1551z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_880);
								FAILURE(BgL_auxz00_1381, BFALSE, BFALSE);
							}
						BgL_rz00_1146 = REAL_TO_DOUBLE(BgL_auxz00_1378);
					}
					BgL_auxz00_1377 = (BgL_rz00_1146 < ((double) 0.0));
				}
				return BBOOL(BgL_auxz00_1377);
			}
		}
	}



/* +fl */
	BGL_EXPORTED_DEF double BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_16, double BgL_r2z00_17)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 360 */
			return (BgL_r1z00_16 + BgL_r2z00_17);
		}
	}



/* _+fl */
	obj_t BGl__zb2flzb2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_881,
		obj_t BgL_r1z00_882, obj_t BgL_r2z00_883)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 360 */
			{	/* Ieee/flonum.scm 361 */
				double BgL_auxz00_1389;

				{	/* Ieee/flonum.scm 361 */
					double BgL_r1z00_1147;

					double BgL_r2z00_1148;

					{	/* Ieee/flonum.scm 361 */
						obj_t BgL_auxz00_1390;

						if (REALP(BgL_r1z00_882))
							{	/* Ieee/flonum.scm 361 */
								BgL_auxz00_1390 = BgL_r1z00_882;
							}
						else
							{
								obj_t BgL_auxz00_1393;

								BgL_auxz00_1393 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16108)),
									BGl_string1552z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_882);
								FAILURE(BgL_auxz00_1393, BFALSE, BFALSE);
							}
						BgL_r1z00_1147 = REAL_TO_DOUBLE(BgL_auxz00_1390);
					}
					{	/* Ieee/flonum.scm 361 */
						obj_t BgL_auxz00_1398;

						if (REALP(BgL_r2z00_883))
							{	/* Ieee/flonum.scm 361 */
								BgL_auxz00_1398 = BgL_r2z00_883;
							}
						else
							{
								obj_t BgL_auxz00_1401;

								BgL_auxz00_1401 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16108)),
									BGl_string1552z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_883);
								FAILURE(BgL_auxz00_1401, BFALSE, BFALSE);
							}
						BgL_r2z00_1148 = REAL_TO_DOUBLE(BgL_auxz00_1398);
					}
					BgL_auxz00_1389 = (BgL_r1z00_1147 + BgL_r2z00_1148);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1389);
			}
		}
	}



/* -fl */
	BGL_EXPORTED_DEF double BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_18, double BgL_r2z00_19)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 366 */
			return (BgL_r1z00_18 - BgL_r2z00_19);
		}
	}



/* _-fl */
	obj_t BGl__zd2flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_884,
		obj_t BgL_r1z00_885, obj_t BgL_r2z00_886)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 366 */
			{	/* Ieee/flonum.scm 367 */
				double BgL_auxz00_1409;

				{	/* Ieee/flonum.scm 367 */
					double BgL_r1z00_1149;

					double BgL_r2z00_1150;

					{	/* Ieee/flonum.scm 367 */
						obj_t BgL_auxz00_1410;

						if (REALP(BgL_r1z00_885))
							{	/* Ieee/flonum.scm 367 */
								BgL_auxz00_1410 = BgL_r1z00_885;
							}
						else
							{
								obj_t BgL_auxz00_1413;

								BgL_auxz00_1413 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16381)),
									BGl_string1553z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_885);
								FAILURE(BgL_auxz00_1413, BFALSE, BFALSE);
							}
						BgL_r1z00_1149 = REAL_TO_DOUBLE(BgL_auxz00_1410);
					}
					{	/* Ieee/flonum.scm 367 */
						obj_t BgL_auxz00_1418;

						if (REALP(BgL_r2z00_886))
							{	/* Ieee/flonum.scm 367 */
								BgL_auxz00_1418 = BgL_r2z00_886;
							}
						else
							{
								obj_t BgL_auxz00_1421;

								BgL_auxz00_1421 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16381)),
									BGl_string1553z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_886);
								FAILURE(BgL_auxz00_1421, BFALSE, BFALSE);
							}
						BgL_r2z00_1150 = REAL_TO_DOUBLE(BgL_auxz00_1418);
					}
					BgL_auxz00_1409 = (BgL_r1z00_1149 - BgL_r2z00_1150);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1409);
			}
		}
	}



/* *fl */
	BGL_EXPORTED_DEF double BGl_za2flza2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_20, double BgL_r2z00_21)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 372 */
			return (BgL_r1z00_20 * BgL_r2z00_21);
		}
	}



/* _*fl */
	obj_t BGl__za2flza2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_887,
		obj_t BgL_r1z00_888, obj_t BgL_r2z00_889)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 372 */
			{	/* Ieee/flonum.scm 373 */
				double BgL_auxz00_1429;

				{	/* Ieee/flonum.scm 373 */
					double BgL_r1z00_1151;

					double BgL_r2z00_1152;

					{	/* Ieee/flonum.scm 373 */
						obj_t BgL_auxz00_1430;

						if (REALP(BgL_r1z00_888))
							{	/* Ieee/flonum.scm 373 */
								BgL_auxz00_1430 = BgL_r1z00_888;
							}
						else
							{
								obj_t BgL_auxz00_1433;

								BgL_auxz00_1433 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16649)),
									BGl_string1554z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_888);
								FAILURE(BgL_auxz00_1433, BFALSE, BFALSE);
							}
						BgL_r1z00_1151 = REAL_TO_DOUBLE(BgL_auxz00_1430);
					}
					{	/* Ieee/flonum.scm 373 */
						obj_t BgL_auxz00_1438;

						if (REALP(BgL_r2z00_889))
							{	/* Ieee/flonum.scm 373 */
								BgL_auxz00_1438 = BgL_r2z00_889;
							}
						else
							{
								obj_t BgL_auxz00_1441;

								BgL_auxz00_1441 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16649)),
									BGl_string1554z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_889);
								FAILURE(BgL_auxz00_1441, BFALSE, BFALSE);
							}
						BgL_r2z00_1152 = REAL_TO_DOUBLE(BgL_auxz00_1438);
					}
					BgL_auxz00_1429 = (BgL_r1z00_1151 * BgL_r2z00_1152);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1429);
			}
		}
	}



/* /fl */
	BGL_EXPORTED_DEF double BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_22, double BgL_r2z00_23)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 378 */
			return (BgL_r1z00_22 / BgL_r2z00_23);
		}
	}



/* _/fl */
	obj_t BGl__zf2flzf2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_890,
		obj_t BgL_r1z00_891, obj_t BgL_r2z00_892)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 378 */
			{	/* Ieee/flonum.scm 379 */
				double BgL_auxz00_1449;

				{	/* Ieee/flonum.scm 379 */
					double BgL_r1z00_1153;

					double BgL_r2z00_1154;

					{	/* Ieee/flonum.scm 379 */
						obj_t BgL_auxz00_1450;

						if (REALP(BgL_r1z00_891))
							{	/* Ieee/flonum.scm 379 */
								BgL_auxz00_1450 = BgL_r1z00_891;
							}
						else
							{
								obj_t BgL_auxz00_1453;

								BgL_auxz00_1453 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16917)),
									BGl_string1555z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_891);
								FAILURE(BgL_auxz00_1453, BFALSE, BFALSE);
							}
						BgL_r1z00_1153 = REAL_TO_DOUBLE(BgL_auxz00_1450);
					}
					{	/* Ieee/flonum.scm 379 */
						obj_t BgL_auxz00_1458;

						if (REALP(BgL_r2z00_892))
							{	/* Ieee/flonum.scm 379 */
								BgL_auxz00_1458 = BgL_r2z00_892;
							}
						else
							{
								obj_t BgL_auxz00_1461;

								BgL_auxz00_1461 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16917)),
									BGl_string1555z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_892);
								FAILURE(BgL_auxz00_1461, BFALSE, BFALSE);
							}
						BgL_r2z00_1154 = REAL_TO_DOUBLE(BgL_auxz00_1458);
					}
					BgL_auxz00_1449 = (BgL_r1z00_1153 / BgL_r2z00_1154);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1449);
			}
		}
	}



/* negfl */
	BGL_EXPORTED_DEF double BGl_negflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_24)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 384 */
			return NEG(BgL_r1z00_24);
		}
	}



/* _negfl */
	obj_t BGl__negflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_893,
		obj_t BgL_r1z00_894)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 384 */
			{	/* Ieee/flonum.scm 385 */
				double BgL_auxz00_1469;

				{	/* Ieee/flonum.scm 385 */
					double BgL_r1z00_1155;

					{	/* Ieee/flonum.scm 385 */
						obj_t BgL_auxz00_1470;

						if (REALP(BgL_r1z00_894))
							{	/* Ieee/flonum.scm 385 */
								BgL_auxz00_1470 = BgL_r1z00_894;
							}
						else
							{
								obj_t BgL_auxz00_1473;

								BgL_auxz00_1473 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17184)),
									BGl_string1556z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_894);
								FAILURE(BgL_auxz00_1473, BFALSE, BFALSE);
							}
						BgL_r1z00_1155 = REAL_TO_DOUBLE(BgL_auxz00_1470);
					}
					BgL_auxz00_1469 = NEG(BgL_r1z00_1155);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1469);
			}
		}
	}



/* maxfl */
	BGL_EXPORTED_DEF double BGl_maxflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_25, obj_t BgL_rnz00_26)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 390 */
			{
				double BgL_maxz00_617;

				obj_t BgL_rnz00_618;

				BgL_maxz00_617 = BgL_r1z00_25;
				BgL_rnz00_618 = BgL_rnz00_26;
			BgL_loopz00_616:
				if (NULLP(BgL_rnz00_618))
					{	/* Ieee/flonum.scm 393 */
						return BgL_maxz00_617;
					}
				else
					{
						obj_t BgL_rnz00_1487;

						double BgL_maxz00_1482;

						{	/* Ieee/flonum.scm 393 */
							double BgL_auxz00_1483;

							{	/* Ieee/flonum.scm 393 */
								obj_t BgL_pairz00_628;

								BgL_pairz00_628 = BgL_rnz00_618;
								BgL_auxz00_1483 = REAL_TO_DOUBLE(CAR(BgL_pairz00_628));
							}
							BgL_maxz00_1482 = BGL_FL_MAX2(BgL_auxz00_1483, BgL_maxz00_617);
						}
						BgL_rnz00_1487 = CDR(BgL_rnz00_618);
						BgL_rnz00_618 = BgL_rnz00_1487;
						BgL_maxz00_617 = BgL_maxz00_1482;
						goto BgL_loopz00_616;
					}
			}
		}
	}



/* _maxfl */
	obj_t BGl__maxflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_895,
		obj_t BgL_r1z00_896, obj_t BgL_rnz00_897)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 390 */
			{	/* Ieee/flonum.scm 393 */
				double BgL_auxz00_1489;

				{	/* Ieee/flonum.scm 393 */
					double BgL_auxz00_1490;

					{	/* Ieee/flonum.scm 393 */
						obj_t BgL_auxz00_1491;

						if (REALP(BgL_r1z00_896))
							{	/* Ieee/flonum.scm 393 */
								BgL_auxz00_1491 = BgL_r1z00_896;
							}
						else
							{
								obj_t BgL_auxz00_1494;

								BgL_auxz00_1494 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17495)),
									BGl_string1557z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_896);
								FAILURE(BgL_auxz00_1494, BFALSE, BFALSE);
							}
						BgL_auxz00_1490 = REAL_TO_DOUBLE(BgL_auxz00_1491);
					}
					BgL_auxz00_1489 =
						BGl_maxflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1490,
						BgL_rnz00_897);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1489);
			}
		}
	}



/* max-2fl */
	BGL_EXPORTED_DEF double BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_27, double BgL_r2z00_28)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 400 */
			return BGL_FL_MAX2(BgL_r1z00_27, BgL_r2z00_28);
		}
	}



/* _max-2fl */
	obj_t BGl__maxzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_898,
		obj_t BgL_r1z00_899, obj_t BgL_r2z00_900)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 400 */
			{	/* Ieee/flonum.scm 401 */
				double BgL_auxz00_1502;

				{	/* Ieee/flonum.scm 401 */
					double BgL_r1z00_1156;

					double BgL_r2z00_1157;

					{	/* Ieee/flonum.scm 401 */
						obj_t BgL_auxz00_1503;

						if (REALP(BgL_r1z00_899))
							{	/* Ieee/flonum.scm 401 */
								BgL_auxz00_1503 = BgL_r1z00_899;
							}
						else
							{
								obj_t BgL_auxz00_1506;

								BgL_auxz00_1506 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17819)),
									BGl_string1558z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_899);
								FAILURE(BgL_auxz00_1506, BFALSE, BFALSE);
							}
						BgL_r1z00_1156 = REAL_TO_DOUBLE(BgL_auxz00_1503);
					}
					{	/* Ieee/flonum.scm 401 */
						obj_t BgL_auxz00_1511;

						if (REALP(BgL_r2z00_900))
							{	/* Ieee/flonum.scm 401 */
								BgL_auxz00_1511 = BgL_r2z00_900;
							}
						else
							{
								obj_t BgL_auxz00_1514;

								BgL_auxz00_1514 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17819)),
									BGl_string1558z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_900);
								FAILURE(BgL_auxz00_1514, BFALSE, BFALSE);
							}
						BgL_r2z00_1157 = REAL_TO_DOUBLE(BgL_auxz00_1511);
					}
					BgL_auxz00_1502 = BGL_FL_MAX2(BgL_r1z00_1156, BgL_r2z00_1157);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1502);
			}
		}
	}



/* min-2fl */
	BGL_EXPORTED_DEF double BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_29, double BgL_r2z00_30)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 406 */
			return BGL_FL_MIN2(BgL_r1z00_29, BgL_r2z00_30);
		}
	}



/* _min-2fl */
	obj_t BGl__minzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_901,
		obj_t BgL_r1z00_902, obj_t BgL_r2z00_903)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 406 */
			{	/* Ieee/flonum.scm 407 */
				double BgL_auxz00_1522;

				{	/* Ieee/flonum.scm 407 */
					double BgL_r1z00_1158;

					double BgL_r2z00_1159;

					{	/* Ieee/flonum.scm 407 */
						obj_t BgL_auxz00_1523;

						if (REALP(BgL_r1z00_902))
							{	/* Ieee/flonum.scm 407 */
								BgL_auxz00_1523 = BgL_r1z00_902;
							}
						else
							{
								obj_t BgL_auxz00_1526;

								BgL_auxz00_1526 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18093)),
									BGl_string1559z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_902);
								FAILURE(BgL_auxz00_1526, BFALSE, BFALSE);
							}
						BgL_r1z00_1158 = REAL_TO_DOUBLE(BgL_auxz00_1523);
					}
					{	/* Ieee/flonum.scm 407 */
						obj_t BgL_auxz00_1531;

						if (REALP(BgL_r2z00_903))
							{	/* Ieee/flonum.scm 407 */
								BgL_auxz00_1531 = BgL_r2z00_903;
							}
						else
							{
								obj_t BgL_auxz00_1534;

								BgL_auxz00_1534 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18093)),
									BGl_string1559z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_903);
								FAILURE(BgL_auxz00_1534, BFALSE, BFALSE);
							}
						BgL_r2z00_1159 = REAL_TO_DOUBLE(BgL_auxz00_1531);
					}
					BgL_auxz00_1522 = BGL_FL_MIN2(BgL_r1z00_1158, BgL_r2z00_1159);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1522);
			}
		}
	}



/* minfl */
	BGL_EXPORTED_DEF double BGl_minflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_31, obj_t BgL_rnz00_32)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 412 */
			{
				double BgL_minz00_660;

				obj_t BgL_rnz00_661;

				BgL_minz00_660 = BgL_r1z00_31;
				BgL_rnz00_661 = BgL_rnz00_32;
			BgL_loopz00_659:
				if (NULLP(BgL_rnz00_661))
					{	/* Ieee/flonum.scm 415 */
						return BgL_minz00_660;
					}
				else
					{
						obj_t BgL_rnz00_1548;

						double BgL_minz00_1543;

						{	/* Ieee/flonum.scm 415 */
							double BgL_auxz00_1544;

							{	/* Ieee/flonum.scm 415 */
								obj_t BgL_pairz00_671;

								BgL_pairz00_671 = BgL_rnz00_661;
								BgL_auxz00_1544 = REAL_TO_DOUBLE(CAR(BgL_pairz00_671));
							}
							BgL_minz00_1543 = BGL_FL_MIN2(BgL_auxz00_1544, BgL_minz00_660);
						}
						BgL_rnz00_1548 = CDR(BgL_rnz00_661);
						BgL_rnz00_661 = BgL_rnz00_1548;
						BgL_minz00_660 = BgL_minz00_1543;
						goto BgL_loopz00_659;
					}
			}
		}
	}



/* _minfl */
	obj_t BGl__minflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_904,
		obj_t BgL_r1z00_905, obj_t BgL_rnz00_906)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 412 */
			{	/* Ieee/flonum.scm 415 */
				double BgL_auxz00_1550;

				{	/* Ieee/flonum.scm 415 */
					double BgL_auxz00_1551;

					{	/* Ieee/flonum.scm 415 */
						obj_t BgL_auxz00_1552;

						if (REALP(BgL_r1z00_905))
							{	/* Ieee/flonum.scm 415 */
								BgL_auxz00_1552 = BgL_r1z00_905;
							}
						else
							{
								obj_t BgL_auxz00_1555;

								BgL_auxz00_1555 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18406)),
									BGl_string1560z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_905);
								FAILURE(BgL_auxz00_1555, BFALSE, BFALSE);
							}
						BgL_auxz00_1551 = REAL_TO_DOUBLE(BgL_auxz00_1552);
					}
					BgL_auxz00_1550 =
						BGl_minflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1551,
						BgL_rnz00_906);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1550);
			}
		}
	}



/* absfl */
	BGL_EXPORTED_DEF double BGl_absflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_33)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 422 */
			return fabs(BgL_rz00_33);
		}
	}



/* _absfl */
	obj_t BGl__absflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_907,
		obj_t BgL_rz00_908)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 422 */
			{	/* Ieee/flonum.scm 423 */
				double BgL_auxz00_1563;

				{	/* Ieee/flonum.scm 423 */
					double BgL_rz00_1160;

					{	/* Ieee/flonum.scm 423 */
						obj_t BgL_auxz00_1564;

						if (REALP(BgL_rz00_908))
							{	/* Ieee/flonum.scm 423 */
								BgL_auxz00_1564 = BgL_rz00_908;
							}
						else
							{
								obj_t BgL_auxz00_1567;

								BgL_auxz00_1567 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18727)),
									BGl_string1561z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_908);
								FAILURE(BgL_auxz00_1567, BFALSE, BFALSE);
							}
						BgL_rz00_1160 = REAL_TO_DOUBLE(BgL_auxz00_1564);
					}
					BgL_auxz00_1563 = fabs(BgL_rz00_1160);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1563);
			}
		}
	}



/* floorfl */
	BGL_EXPORTED_DEF double BGl_floorflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_34)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 428 */
			return floor(BgL_rz00_34);
		}
	}



/* _floorfl */
	obj_t BGl__floorflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_909,
		obj_t BgL_rz00_910)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 428 */
			{	/* Ieee/flonum.scm 429 */
				double BgL_auxz00_1575;

				{	/* Ieee/flonum.scm 429 */
					double BgL_rz00_1161;

					{	/* Ieee/flonum.scm 429 */
						obj_t BgL_auxz00_1576;

						if (REALP(BgL_rz00_910))
							{	/* Ieee/flonum.scm 429 */
								BgL_auxz00_1576 = BgL_rz00_910;
							}
						else
							{
								obj_t BgL_auxz00_1579;

								BgL_auxz00_1579 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18993)),
									BGl_string1562z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_910);
								FAILURE(BgL_auxz00_1579, BFALSE, BFALSE);
							}
						BgL_rz00_1161 = REAL_TO_DOUBLE(BgL_auxz00_1576);
					}
					BgL_auxz00_1575 = floor(BgL_rz00_1161);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1575);
			}
		}
	}



/* ceilingfl */
	BGL_EXPORTED_DEF double BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_35)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 434 */
			return ceil(BgL_rz00_35);
		}
	}



/* _ceilingfl */
	obj_t BGl__ceilingflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_911,
		obj_t BgL_rz00_912)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 434 */
			{	/* Ieee/flonum.scm 435 */
				double BgL_auxz00_1587;

				{	/* Ieee/flonum.scm 435 */
					double BgL_rz00_1162;

					{	/* Ieee/flonum.scm 435 */
						obj_t BgL_auxz00_1588;

						if (REALP(BgL_rz00_912))
							{	/* Ieee/flonum.scm 435 */
								BgL_auxz00_1588 = BgL_rz00_912;
							}
						else
							{
								obj_t BgL_auxz00_1591;

								BgL_auxz00_1591 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 19261)),
									BGl_string1563z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_912);
								FAILURE(BgL_auxz00_1591, BFALSE, BFALSE);
							}
						BgL_rz00_1162 = REAL_TO_DOUBLE(BgL_auxz00_1588);
					}
					BgL_auxz00_1587 = ceil(BgL_rz00_1162);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1587);
			}
		}
	}



/* truncatefl */
	BGL_EXPORTED_DEF double BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_36)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 440 */
			if ((BgL_rz00_36 < ((double) 0.0)))
				{	/* Ieee/flonum.scm 441 */
					return ceil(BgL_rz00_36);
				}
			else
				{	/* Ieee/flonum.scm 441 */
					return floor(BgL_rz00_36);
				}
		}
	}



/* _truncatefl */
	obj_t BGl__truncateflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_913,
		obj_t BgL_rz00_914)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 440 */
			{	/* Ieee/flonum.scm 441 */
				double BgL_auxz00_1602;

				{	/* Ieee/flonum.scm 441 */
					double BgL_rz00_1163;

					{	/* Ieee/flonum.scm 441 */
						obj_t BgL_auxz00_1603;

						if (REALP(BgL_rz00_914))
							{	/* Ieee/flonum.scm 441 */
								BgL_auxz00_1603 = BgL_rz00_914;
							}
						else
							{
								obj_t BgL_auxz00_1606;

								BgL_auxz00_1606 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 19532)),
									BGl_string1564z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_914);
								FAILURE(BgL_auxz00_1606, BFALSE, BFALSE);
							}
						BgL_rz00_1163 = REAL_TO_DOUBLE(BgL_auxz00_1603);
					}
					if ((BgL_rz00_1163 < ((double) 0.0)))
						{	/* Ieee/flonum.scm 441 */
							BgL_auxz00_1602 = ceil(BgL_rz00_1163);
						}
					else
						{	/* Ieee/flonum.scm 441 */
							BgL_auxz00_1602 = floor(BgL_rz00_1163);
						}
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1602);
			}
		}
	}



/* roundfl */
	BGL_EXPORTED_DEF double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_37)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 448 */
			return BGL_FL_ROUND(BgL_rz00_37);
		}
	}



/* _roundfl */
	obj_t BGl__roundflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_915,
		obj_t BgL_rz00_916)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 448 */
			{	/* Ieee/flonum.scm 449 */
				double BgL_auxz00_1617;

				{	/* Ieee/flonum.scm 449 */
					double BgL_rz00_1164;

					{	/* Ieee/flonum.scm 449 */
						obj_t BgL_auxz00_1618;

						if (REALP(BgL_rz00_916))
							{	/* Ieee/flonum.scm 449 */
								BgL_auxz00_1618 = BgL_rz00_916;
							}
						else
							{
								obj_t BgL_auxz00_1621;

								BgL_auxz00_1621 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 19840)),
									BGl_string1565z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_916);
								FAILURE(BgL_auxz00_1621, BFALSE, BFALSE);
							}
						BgL_rz00_1164 = REAL_TO_DOUBLE(BgL_auxz00_1618);
					}
					BgL_auxz00_1617 = BGL_FL_ROUND(BgL_rz00_1164);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1617);
			}
		}
	}



/* remainderfl */
	BGL_EXPORTED_DEF double BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_n1z00_38, double BgL_n2z00_39)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 454 */
			return fmod(BgL_n1z00_38, BgL_n2z00_39);
		}
	}



/* _remainderfl */
	obj_t BGl__remainderflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_917,
		obj_t BgL_n1z00_918, obj_t BgL_n2z00_919)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 454 */
			{	/* Ieee/flonum.scm 455 */
				double BgL_auxz00_1629;

				{	/* Ieee/flonum.scm 455 */
					double BgL_n1z00_1165;

					double BgL_n2z00_1166;

					{	/* Ieee/flonum.scm 455 */
						obj_t BgL_auxz00_1630;

						if (REALP(BgL_n1z00_918))
							{	/* Ieee/flonum.scm 455 */
								BgL_auxz00_1630 = BgL_n1z00_918;
							}
						else
							{
								obj_t BgL_auxz00_1633;

								BgL_auxz00_1633 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20116)),
									BGl_string1566z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_n1z00_918);
								FAILURE(BgL_auxz00_1633, BFALSE, BFALSE);
							}
						BgL_n1z00_1165 = REAL_TO_DOUBLE(BgL_auxz00_1630);
					}
					{	/* Ieee/flonum.scm 455 */
						obj_t BgL_auxz00_1638;

						if (REALP(BgL_n2z00_919))
							{	/* Ieee/flonum.scm 455 */
								BgL_auxz00_1638 = BgL_n2z00_919;
							}
						else
							{
								obj_t BgL_auxz00_1641;

								BgL_auxz00_1641 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20116)),
									BGl_string1566z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_n2z00_919);
								FAILURE(BgL_auxz00_1641, BFALSE, BFALSE);
							}
						BgL_n2z00_1166 = REAL_TO_DOUBLE(BgL_auxz00_1638);
					}
					BgL_auxz00_1629 = fmod(BgL_n1z00_1165, BgL_n2z00_1166);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1629);
			}
		}
	}



/* expfl */
	BGL_EXPORTED_DEF double BGl_expflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_40)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 460 */
			return exp(BgL_xz00_40);
		}
	}



/* _expfl */
	obj_t BGl__expflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_920,
		obj_t BgL_xz00_921)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 460 */
			{	/* Ieee/flonum.scm 461 */
				double BgL_auxz00_1649;

				{	/* Ieee/flonum.scm 461 */
					double BgL_xz00_1167;

					{	/* Ieee/flonum.scm 461 */
						obj_t BgL_auxz00_1650;

						if (REALP(BgL_xz00_921))
							{	/* Ieee/flonum.scm 461 */
								BgL_auxz00_1650 = BgL_xz00_921;
							}
						else
							{
								obj_t BgL_auxz00_1653;

								BgL_auxz00_1653 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20383)),
									BGl_string1567z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_921);
								FAILURE(BgL_auxz00_1653, BFALSE, BFALSE);
							}
						BgL_xz00_1167 = REAL_TO_DOUBLE(BgL_auxz00_1650);
					}
					BgL_auxz00_1649 = exp(BgL_xz00_1167);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1649);
			}
		}
	}



/* logfl */
	BGL_EXPORTED_DEF double BGl_logflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_41)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 466 */
			return log(BgL_xz00_41);
		}
	}



/* _logfl */
	obj_t BGl__logflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_922,
		obj_t BgL_xz00_923)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 466 */
			{	/* Ieee/flonum.scm 467 */
				double BgL_auxz00_1661;

				{	/* Ieee/flonum.scm 467 */
					double BgL_xz00_1168;

					{	/* Ieee/flonum.scm 467 */
						obj_t BgL_auxz00_1662;

						if (REALP(BgL_xz00_923))
							{	/* Ieee/flonum.scm 467 */
								BgL_auxz00_1662 = BgL_xz00_923;
							}
						else
							{
								obj_t BgL_auxz00_1665;

								BgL_auxz00_1665 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20645)),
									BGl_string1568z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_923);
								FAILURE(BgL_auxz00_1665, BFALSE, BFALSE);
							}
						BgL_xz00_1168 = REAL_TO_DOUBLE(BgL_auxz00_1662);
					}
					BgL_auxz00_1661 = log(BgL_xz00_1168);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1661);
			}
		}
	}



/* sinfl */
	BGL_EXPORTED_DEF double BGl_sinflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_42)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 472 */
			return sin(BgL_xz00_42);
		}
	}



/* _sinfl */
	obj_t BGl__sinflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_924,
		obj_t BgL_xz00_925)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 472 */
			{	/* Ieee/flonum.scm 473 */
				double BgL_auxz00_1673;

				{	/* Ieee/flonum.scm 473 */
					double BgL_xz00_1169;

					{	/* Ieee/flonum.scm 473 */
						obj_t BgL_auxz00_1674;

						if (REALP(BgL_xz00_925))
							{	/* Ieee/flonum.scm 473 */
								BgL_auxz00_1674 = BgL_xz00_925;
							}
						else
							{
								obj_t BgL_auxz00_1677;

								BgL_auxz00_1677 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20908)),
									BGl_string1569z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_925);
								FAILURE(BgL_auxz00_1677, BFALSE, BFALSE);
							}
						BgL_xz00_1169 = REAL_TO_DOUBLE(BgL_auxz00_1674);
					}
					BgL_auxz00_1673 = sin(BgL_xz00_1169);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1673);
			}
		}
	}



/* cosfl */
	BGL_EXPORTED_DEF double BGl_cosflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_43)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 478 */
			return cos(BgL_xz00_43);
		}
	}



/* _cosfl */
	obj_t BGl__cosflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_926,
		obj_t BgL_xz00_927)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 478 */
			{	/* Ieee/flonum.scm 479 */
				double BgL_auxz00_1685;

				{	/* Ieee/flonum.scm 479 */
					double BgL_xz00_1170;

					{	/* Ieee/flonum.scm 479 */
						obj_t BgL_auxz00_1686;

						if (REALP(BgL_xz00_927))
							{	/* Ieee/flonum.scm 479 */
								BgL_auxz00_1686 = BgL_xz00_927;
							}
						else
							{
								obj_t BgL_auxz00_1689;

								BgL_auxz00_1689 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 21170)),
									BGl_string1570z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_927);
								FAILURE(BgL_auxz00_1689, BFALSE, BFALSE);
							}
						BgL_xz00_1170 = REAL_TO_DOUBLE(BgL_auxz00_1686);
					}
					BgL_auxz00_1685 = cos(BgL_xz00_1170);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1685);
			}
		}
	}



/* tanfl */
	BGL_EXPORTED_DEF double BGl_tanflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_44)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 484 */
			return tan(BgL_xz00_44);
		}
	}



/* _tanfl */
	obj_t BGl__tanflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_928,
		obj_t BgL_xz00_929)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 484 */
			{	/* Ieee/flonum.scm 485 */
				double BgL_auxz00_1697;

				{	/* Ieee/flonum.scm 485 */
					double BgL_xz00_1171;

					{	/* Ieee/flonum.scm 485 */
						obj_t BgL_auxz00_1698;

						if (REALP(BgL_xz00_929))
							{	/* Ieee/flonum.scm 485 */
								BgL_auxz00_1698 = BgL_xz00_929;
							}
						else
							{
								obj_t BgL_auxz00_1701;

								BgL_auxz00_1701 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 21432)),
									BGl_string1571z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_929);
								FAILURE(BgL_auxz00_1701, BFALSE, BFALSE);
							}
						BgL_xz00_1171 = REAL_TO_DOUBLE(BgL_auxz00_1698);
					}
					BgL_auxz00_1697 = tan(BgL_xz00_1171);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1697);
			}
		}
	}



/* asinfl */
	BGL_EXPORTED_DEF double BGl_asinflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_45)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 490 */
			return asin(BgL_xz00_45);
		}
	}



/* _asinfl */
	obj_t BGl__asinflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_930,
		obj_t BgL_xz00_931)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 490 */
			{	/* Ieee/flonum.scm 491 */
				double BgL_auxz00_1709;

				{	/* Ieee/flonum.scm 491 */
					double BgL_xz00_1172;

					{	/* Ieee/flonum.scm 491 */
						obj_t BgL_auxz00_1710;

						if (REALP(BgL_xz00_931))
							{	/* Ieee/flonum.scm 491 */
								BgL_auxz00_1710 = BgL_xz00_931;
							}
						else
							{
								obj_t BgL_auxz00_1713;

								BgL_auxz00_1713 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 21695)),
									BGl_string1572z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_931);
								FAILURE(BgL_auxz00_1713, BFALSE, BFALSE);
							}
						BgL_xz00_1172 = REAL_TO_DOUBLE(BgL_auxz00_1710);
					}
					BgL_auxz00_1709 = asin(BgL_xz00_1172);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1709);
			}
		}
	}



/* acosfl */
	BGL_EXPORTED_DEF double BGl_acosflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_46)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 496 */
			return acos(BgL_xz00_46);
		}
	}



/* _acosfl */
	obj_t BGl__acosflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_932,
		obj_t BgL_xz00_933)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 496 */
			{	/* Ieee/flonum.scm 497 */
				double BgL_auxz00_1721;

				{	/* Ieee/flonum.scm 497 */
					double BgL_xz00_1173;

					{	/* Ieee/flonum.scm 497 */
						obj_t BgL_auxz00_1722;

						if (REALP(BgL_xz00_933))
							{	/* Ieee/flonum.scm 497 */
								BgL_auxz00_1722 = BgL_xz00_933;
							}
						else
							{
								obj_t BgL_auxz00_1725;

								BgL_auxz00_1725 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 21959)),
									BGl_string1573z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_933);
								FAILURE(BgL_auxz00_1725, BFALSE, BFALSE);
							}
						BgL_xz00_1173 = REAL_TO_DOUBLE(BgL_auxz00_1722);
					}
					BgL_auxz00_1721 = acos(BgL_xz00_1173);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1721);
			}
		}
	}



/* atanfl */
	BGL_EXPORTED_DEF double BGl_atanflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_47, obj_t BgL_yz00_48)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 502 */
			if (NULLP(BgL_yz00_48))
				{	/* Ieee/flonum.scm 503 */
					return atan(BgL_xz00_47);
				}
			else
				{	/* Ieee/flonum.scm 503 */
					obj_t BgL_yz00_702;

					BgL_yz00_702 = CAR(BgL_yz00_48);
					{	/* Ieee/flonum.scm 503 */
						double BgL_yz00_706;

						BgL_yz00_706 = REAL_TO_DOUBLE(BgL_yz00_702);
						return atan2(BgL_xz00_47, BgL_yz00_706);
					}
				}
		}
	}



/* _atanfl */
	obj_t BGl__atanflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_934,
		obj_t BgL_xz00_935, obj_t BgL_yz00_936)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 502 */
			{	/* Ieee/flonum.scm 503 */
				double BgL_auxz00_1738;

				{	/* Ieee/flonum.scm 503 */
					double BgL_auxz00_1739;

					{	/* Ieee/flonum.scm 503 */
						obj_t BgL_auxz00_1740;

						if (REALP(BgL_xz00_935))
							{	/* Ieee/flonum.scm 503 */
								BgL_auxz00_1740 = BgL_xz00_935;
							}
						else
							{
								obj_t BgL_auxz00_1743;

								BgL_auxz00_1743 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 22220)),
									BGl_string1574z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_935);
								FAILURE(BgL_auxz00_1743, BFALSE, BFALSE);
							}
						BgL_auxz00_1739 = REAL_TO_DOUBLE(BgL_auxz00_1740);
					}
					BgL_auxz00_1738 =
						BGl_atanflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1739,
						BgL_yz00_936);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1738);
			}
		}
	}



/* atan-1fl */
	BGL_EXPORTED_DEF double BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_49)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 511 */
			return atan(BgL_xz00_49);
		}
	}



/* _atan-1fl */
	obj_t BGl__atanzd21flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_937,
		obj_t BgL_xz00_938)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 511 */
			{	/* Ieee/flonum.scm 512 */
				double BgL_auxz00_1751;

				{	/* Ieee/flonum.scm 512 */
					double BgL_xz00_1174;

					{	/* Ieee/flonum.scm 512 */
						obj_t BgL_auxz00_1752;

						if (REALP(BgL_xz00_938))
							{	/* Ieee/flonum.scm 512 */
								BgL_auxz00_1752 = BgL_xz00_938;
							}
						else
							{
								obj_t BgL_auxz00_1755;

								BgL_auxz00_1755 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 22553)),
									BGl_string1575z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_938);
								FAILURE(BgL_auxz00_1755, BFALSE, BFALSE);
							}
						BgL_xz00_1174 = REAL_TO_DOUBLE(BgL_auxz00_1752);
					}
					BgL_auxz00_1751 = atan(BgL_xz00_1174);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1751);
			}
		}
	}



/* atan-2fl */
	BGL_EXPORTED_DEF double BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_50, double BgL_yz00_51)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 517 */
			{	/* Ieee/flonum.scm 518 */
				bool_t BgL_testz00_1762;

				if ((BgL_xz00_50 == ((double) 0.0)))
					{	/* Ieee/flonum.scm 518 */
						BgL_testz00_1762 = (BgL_yz00_51 == ((double) 0.0));
					}
				else
					{	/* Ieee/flonum.scm 518 */
						BgL_testz00_1762 = ((bool_t) 0);
					}
				if (BgL_testz00_1762)
					{	/* Ieee/flonum.scm 518 */
						obj_t BgL_procz00_1175;

						obj_t BgL_msgz00_1176;

						BgL_procz00_1175 =
							string_to_bstring(BSTRING_TO_STRING
							(BGl_string1576z00zz__r4_numbers_6_5_flonumz00));
						BgL_msgz00_1176 =
							string_to_bstring(BSTRING_TO_STRING
							(BGl_string1577z00zz__r4_numbers_6_5_flonumz00));
						the_failure(BgL_procz00_1175, BgL_msgz00_1176,
							BGl_real1578z00zz__r4_numbers_6_5_flonumz00);
						return ((double) 0.0);
					}
				else
					{	/* Ieee/flonum.scm 518 */
						return atan2(BgL_xz00_50, BgL_yz00_51);
					}
			}
		}
	}



/* _atan-2fl */
	obj_t BGl__atanzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_939,
		obj_t BgL_xz00_940, obj_t BgL_yz00_941)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 517 */
			{	/* Ieee/flonum.scm 518 */
				double BgL_auxz00_1772;

				{	/* Ieee/flonum.scm 518 */
					double BgL_xz00_1178;

					double BgL_yz00_1179;

					{	/* Ieee/flonum.scm 518 */
						obj_t BgL_auxz00_1773;

						if (REALP(BgL_xz00_940))
							{	/* Ieee/flonum.scm 518 */
								BgL_auxz00_1773 = BgL_xz00_940;
							}
						else
							{
								obj_t BgL_auxz00_1776;

								BgL_auxz00_1776 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 22830)),
									BGl_string1579z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_940);
								FAILURE(BgL_auxz00_1776, BFALSE, BFALSE);
							}
						BgL_xz00_1178 = REAL_TO_DOUBLE(BgL_auxz00_1773);
					}
					{	/* Ieee/flonum.scm 518 */
						obj_t BgL_auxz00_1781;

						if (REALP(BgL_yz00_941))
							{	/* Ieee/flonum.scm 518 */
								BgL_auxz00_1781 = BgL_yz00_941;
							}
						else
							{
								obj_t BgL_auxz00_1784;

								BgL_auxz00_1784 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 22830)),
									BGl_string1579z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_941);
								FAILURE(BgL_auxz00_1784, BFALSE, BFALSE);
							}
						BgL_yz00_1179 = REAL_TO_DOUBLE(BgL_auxz00_1781);
					}
					{	/* Ieee/flonum.scm 518 */
						bool_t BgL_testz00_1789;

						if ((BgL_xz00_1178 == ((double) 0.0)))
							{	/* Ieee/flonum.scm 518 */
								BgL_testz00_1789 = (BgL_yz00_1179 == ((double) 0.0));
							}
						else
							{	/* Ieee/flonum.scm 518 */
								BgL_testz00_1789 = ((bool_t) 0);
							}
						if (BgL_testz00_1789)
							{	/* Ieee/flonum.scm 518 */
								obj_t BgL_procz00_1180;

								obj_t BgL_msgz00_1181;

								BgL_procz00_1180 =
									string_to_bstring(BSTRING_TO_STRING
									(BGl_string1576z00zz__r4_numbers_6_5_flonumz00));
								BgL_msgz00_1181 =
									string_to_bstring(BSTRING_TO_STRING
									(BGl_string1577z00zz__r4_numbers_6_5_flonumz00));
								the_failure(BgL_procz00_1180, BgL_msgz00_1181,
									BGl_real1578z00zz__r4_numbers_6_5_flonumz00);
								BgL_auxz00_1772 = ((double) 0.0);
							}
						else
							{	/* Ieee/flonum.scm 518 */
								BgL_auxz00_1772 = atan2(BgL_xz00_1178, BgL_yz00_1179);
							}
					}
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1772);
			}
		}
	}



/* atan-2fl-ur */
	BGL_EXPORTED_DEF double
		BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_52,
		double BgL_yz00_53)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 535 */
			return atan2(BgL_xz00_52, BgL_yz00_53);
		}
	}



/* _atan-2fl-ur */
	obj_t BGl__atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_942, obj_t BgL_xz00_943, obj_t BgL_yz00_944)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 535 */
			{	/* Ieee/flonum.scm 536 */
				double BgL_auxz00_1801;

				{	/* Ieee/flonum.scm 536 */
					double BgL_xz00_1183;

					double BgL_yz00_1184;

					{	/* Ieee/flonum.scm 536 */
						obj_t BgL_auxz00_1802;

						if (REALP(BgL_xz00_943))
							{	/* Ieee/flonum.scm 536 */
								BgL_auxz00_1802 = BgL_xz00_943;
							}
						else
							{
								obj_t BgL_auxz00_1805;

								BgL_auxz00_1805 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 23460)),
									BGl_string1580z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_943);
								FAILURE(BgL_auxz00_1805, BFALSE, BFALSE);
							}
						BgL_xz00_1183 = REAL_TO_DOUBLE(BgL_auxz00_1802);
					}
					{	/* Ieee/flonum.scm 536 */
						obj_t BgL_auxz00_1810;

						if (REALP(BgL_yz00_944))
							{	/* Ieee/flonum.scm 536 */
								BgL_auxz00_1810 = BgL_yz00_944;
							}
						else
							{
								obj_t BgL_auxz00_1813;

								BgL_auxz00_1813 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 23460)),
									BGl_string1580z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_944);
								FAILURE(BgL_auxz00_1813, BFALSE, BFALSE);
							}
						BgL_yz00_1184 = REAL_TO_DOUBLE(BgL_auxz00_1810);
					}
					BgL_auxz00_1801 = atan2(BgL_xz00_1183, BgL_yz00_1184);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1801);
			}
		}
	}



/* sqrtfl */
	BGL_EXPORTED_DEF double BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_54)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 541 */
			if ((BgL_rz00_54 < ((double) 0.0)))
				{	/* Ieee/flonum.scm 542 */
					obj_t BgL_procz00_1185;

					obj_t BgL_msgz00_1186;

					obj_t BgL_objz00_1187;

					BgL_procz00_1185 =
						string_to_bstring(BSTRING_TO_STRING
						(BGl_string1581z00zz__r4_numbers_6_5_flonumz00));
					BgL_msgz00_1186 =
						string_to_bstring(BSTRING_TO_STRING
						(BGl_string1577z00zz__r4_numbers_6_5_flonumz00));
					BgL_objz00_1187 = DOUBLE_TO_REAL(BgL_rz00_54);
					BGl_errorz00zz__errorz00(BgL_procz00_1185, BgL_msgz00_1186,
						BgL_objz00_1187);
					return ((double) 0.0);
				}
			else
				{	/* Ieee/flonum.scm 542 */
					return sqrt(BgL_rz00_54);
				}
		}
	}



/* _sqrtfl */
	obj_t BGl__sqrtflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_945,
		obj_t BgL_rz00_946)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 541 */
			{	/* Ieee/flonum.scm 542 */
				double BgL_auxz00_1829;

				{	/* Ieee/flonum.scm 542 */
					double BgL_rz00_1188;

					{	/* Ieee/flonum.scm 542 */
						obj_t BgL_auxz00_1830;

						if (REALP(BgL_rz00_946))
							{	/* Ieee/flonum.scm 542 */
								BgL_auxz00_1830 = BgL_rz00_946;
							}
						else
							{
								obj_t BgL_auxz00_1833;

								BgL_auxz00_1833 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 23727)),
									BGl_string1582z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_946);
								FAILURE(BgL_auxz00_1833, BFALSE, BFALSE);
							}
						BgL_rz00_1188 = REAL_TO_DOUBLE(BgL_auxz00_1830);
					}
					if ((BgL_rz00_1188 < ((double) 0.0)))
						{	/* Ieee/flonum.scm 542 */
							obj_t BgL_procz00_1189;

							obj_t BgL_msgz00_1190;

							obj_t BgL_objz00_1191;

							BgL_procz00_1189 =
								string_to_bstring(BSTRING_TO_STRING
								(BGl_string1581z00zz__r4_numbers_6_5_flonumz00));
							BgL_msgz00_1190 =
								string_to_bstring(BSTRING_TO_STRING
								(BGl_string1577z00zz__r4_numbers_6_5_flonumz00));
							BgL_objz00_1191 = DOUBLE_TO_REAL(BgL_rz00_1188);
							BGl_errorz00zz__errorz00(BgL_procz00_1189, BgL_msgz00_1190,
								BgL_objz00_1191);
							BgL_auxz00_1829 = ((double) 0.0);
						}
					else
						{	/* Ieee/flonum.scm 542 */
							BgL_auxz00_1829 = sqrt(BgL_rz00_1188);
						}
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1829);
			}
		}
	}



/* sqrtfl-ur */
	BGL_EXPORTED_DEF double BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_55)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 554 */
			return sqrt(BgL_rz00_55);
		}
	}



/* _sqrtfl-ur */
	obj_t BGl__sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_947,
		obj_t BgL_rz00_948)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 554 */
			{	/* Ieee/flonum.scm 555 */
				double BgL_auxz00_1849;

				{	/* Ieee/flonum.scm 555 */
					double BgL_rz00_1192;

					{	/* Ieee/flonum.scm 555 */
						obj_t BgL_auxz00_1850;

						if (REALP(BgL_rz00_948))
							{	/* Ieee/flonum.scm 555 */
								BgL_auxz00_1850 = BgL_rz00_948;
							}
						else
							{
								obj_t BgL_auxz00_1853;

								BgL_auxz00_1853 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 24207)),
									BGl_string1583z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_948);
								FAILURE(BgL_auxz00_1853, BFALSE, BFALSE);
							}
						BgL_rz00_1192 = REAL_TO_DOUBLE(BgL_auxz00_1850);
					}
					BgL_auxz00_1849 = sqrt(BgL_rz00_1192);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1849);
			}
		}
	}



/* exptfl */
	BGL_EXPORTED_DEF double BGl_exptflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_56, double BgL_r2z00_57)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 560 */
			return pow(BgL_r1z00_56, BgL_r2z00_57);
		}
	}



/* _exptfl */
	obj_t BGl__exptflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_949,
		obj_t BgL_r1z00_950, obj_t BgL_r2z00_951)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 560 */
			{	/* Ieee/flonum.scm 561 */
				double BgL_auxz00_1861;

				{	/* Ieee/flonum.scm 561 */
					double BgL_r1z00_1193;

					double BgL_r2z00_1194;

					{	/* Ieee/flonum.scm 561 */
						obj_t BgL_auxz00_1862;

						if (REALP(BgL_r1z00_950))
							{	/* Ieee/flonum.scm 561 */
								BgL_auxz00_1862 = BgL_r1z00_950;
							}
						else
							{
								obj_t BgL_auxz00_1865;

								BgL_auxz00_1865 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 24475)),
									BGl_string1584z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_950);
								FAILURE(BgL_auxz00_1865, BFALSE, BFALSE);
							}
						BgL_r1z00_1193 = REAL_TO_DOUBLE(BgL_auxz00_1862);
					}
					{	/* Ieee/flonum.scm 561 */
						obj_t BgL_auxz00_1870;

						if (REALP(BgL_r2z00_951))
							{	/* Ieee/flonum.scm 561 */
								BgL_auxz00_1870 = BgL_r2z00_951;
							}
						else
							{
								obj_t BgL_auxz00_1873;

								BgL_auxz00_1873 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 24475)),
									BGl_string1584z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_951);
								FAILURE(BgL_auxz00_1873, BFALSE, BFALSE);
							}
						BgL_r2z00_1194 = REAL_TO_DOUBLE(BgL_auxz00_1870);
					}
					BgL_auxz00_1861 = pow(BgL_r1z00_1193, BgL_r2z00_1194);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1861);
			}
		}
	}



/* signbitfl */
	BGL_EXPORTED_DEF long BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_58)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 566 */
			return BGL_SIGNBIT(BgL_rz00_58);
		}
	}



/* _signbitfl */
	obj_t BGl__signbitflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_952,
		obj_t BgL_rz00_953)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 566 */
			{	/* Ieee/flonum.scm 567 */
				long BgL_auxz00_1881;

				{	/* Ieee/flonum.scm 567 */
					double BgL_rz00_1195;

					{	/* Ieee/flonum.scm 567 */
						obj_t BgL_auxz00_1882;

						if (REALP(BgL_rz00_953))
							{	/* Ieee/flonum.scm 567 */
								BgL_auxz00_1882 = BgL_rz00_953;
							}
						else
							{
								obj_t BgL_auxz00_1885;

								BgL_auxz00_1885 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 24745)),
									BGl_string1585z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_953);
								FAILURE(BgL_auxz00_1885, BFALSE, BFALSE);
							}
						BgL_rz00_1195 = REAL_TO_DOUBLE(BgL_auxz00_1882);
					}
					BgL_auxz00_1881 = BGL_SIGNBIT(BgL_rz00_1195);
				}
				return BINT(BgL_auxz00_1881);
			}
		}
	}



/* integerfl? */
	BGL_EXPORTED_DEF bool_t BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_59)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 572 */
			if (BGL_IS_FINITE(BgL_rz00_59))
				{	/* Ieee/flonum.scm 573 */
					double BgL_arg1237z00_1196;

					BgL_arg1237z00_1196 = floor(BgL_rz00_59);
					return (BgL_rz00_59 == BgL_arg1237z00_1196);
				}
			else
				{	/* Ieee/flonum.scm 573 */
					return ((bool_t) 0);
				}
		}
	}



/* _integerfl? */
	obj_t BGl__integerflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_954,
		obj_t BgL_rz00_955)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 572 */
			{	/* Ieee/flonum.scm 573 */
				bool_t BgL_auxz00_1896;

				{	/* Ieee/flonum.scm 573 */
					double BgL_rz00_1197;

					{	/* Ieee/flonum.scm 573 */
						obj_t BgL_auxz00_1897;

						if (REALP(BgL_rz00_955))
							{	/* Ieee/flonum.scm 573 */
								BgL_auxz00_1897 = BgL_rz00_955;
							}
						else
							{
								obj_t BgL_auxz00_1900;

								BgL_auxz00_1900 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 25021)),
									BGl_string1586z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_955);
								FAILURE(BgL_auxz00_1900, BFALSE, BFALSE);
							}
						BgL_rz00_1197 = REAL_TO_DOUBLE(BgL_auxz00_1897);
					}
					if (BGL_IS_FINITE(BgL_rz00_1197))
						{	/* Ieee/flonum.scm 573 */
							double BgL_arg1237z00_1198;

							BgL_arg1237z00_1198 = floor(BgL_rz00_1197);
							BgL_auxz00_1896 = (BgL_rz00_1197 == BgL_arg1237z00_1198);
						}
					else
						{	/* Ieee/flonum.scm 573 */
							BgL_auxz00_1896 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_auxz00_1896);
			}
		}
	}



/* evenfl? */
	BGL_EXPORTED_DEF bool_t BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_60)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 579 */
			{	/* Ieee/flonum.scm 580 */
				double BgL_arg1238z00_1199;

				BgL_arg1238z00_1199 = (BgL_rz00_60 / ((double) 2.0));
				{	/* Ieee/flonum.scm 580 */
					bool_t BgL_res1392z00_1200;

					if (BGL_IS_FINITE(BgL_arg1238z00_1199))
						{	/* Ieee/flonum.scm 580 */
							double BgL_arg1237z00_1201;

							BgL_arg1237z00_1201 = floor(BgL_arg1238z00_1199);
							BgL_res1392z00_1200 =
								(BgL_arg1238z00_1199 == BgL_arg1237z00_1201);
						}
					else
						{	/* Ieee/flonum.scm 580 */
							BgL_res1392z00_1200 = ((bool_t) 0);
						}
					return BgL_res1392z00_1200;
				}
			}
		}
	}



/* _evenfl? */
	obj_t BGl__evenflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_956,
		obj_t BgL_rz00_957)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 579 */
			{	/* Ieee/flonum.scm 580 */
				bool_t BgL_auxz00_1915;

				{	/* Ieee/flonum.scm 580 */
					bool_t BgL_res1614z00_1206;

					{	/* Ieee/flonum.scm 580 */
						double BgL_rz00_1202;

						{	/* Ieee/flonum.scm 580 */
							obj_t BgL_auxz00_1916;

							if (REALP(BgL_rz00_957))
								{	/* Ieee/flonum.scm 580 */
									BgL_auxz00_1916 = BgL_rz00_957;
								}
							else
								{
									obj_t BgL_auxz00_1919;

									BgL_auxz00_1919 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
										BINT(((long) 25323)),
										BGl_string1587z00zz__r4_numbers_6_5_flonumz00,
										BGl_string1544z00zz__r4_numbers_6_5_flonumz00,
										BgL_rz00_957);
									FAILURE(BgL_auxz00_1919, BFALSE, BFALSE);
								}
							BgL_rz00_1202 = REAL_TO_DOUBLE(BgL_auxz00_1916);
						}
						{	/* Ieee/flonum.scm 580 */
							double BgL_arg1238z00_1203;

							BgL_arg1238z00_1203 = (BgL_rz00_1202 / ((double) 2.0));
							{	/* Ieee/flonum.scm 580 */
								bool_t BgL_res1392z00_1204;

								if (BGL_IS_FINITE(BgL_arg1238z00_1203))
									{	/* Ieee/flonum.scm 580 */
										double BgL_arg1237z00_1205;

										BgL_arg1237z00_1205 = floor(BgL_arg1238z00_1203);
										BgL_res1392z00_1204 =
											(BgL_arg1238z00_1203 == BgL_arg1237z00_1205);
									}
								else
									{	/* Ieee/flonum.scm 580 */
										BgL_res1392z00_1204 = ((bool_t) 0);
									}
								BgL_res1614z00_1206 = BgL_res1392z00_1204;
							}
						}
					}
					BgL_auxz00_1915 = BgL_res1614z00_1206;
				}
				return BBOOL(BgL_auxz00_1915);
			}
		}
	}



/* oddfl? */
	BGL_EXPORTED_DEF bool_t BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_61)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 585 */
			{	/* Ieee/flonum.scm 586 */
				bool_t BgL_testz00_1930;

				{	/* Ieee/flonum.scm 586 */
					bool_t BgL_res1393z00_1207;

					if (BGL_IS_FINITE(BgL_rz00_61))
						{	/* Ieee/flonum.scm 586 */
							double BgL_arg1237z00_1208;

							BgL_arg1237z00_1208 = floor(BgL_rz00_61);
							BgL_res1393z00_1207 = (BgL_rz00_61 == BgL_arg1237z00_1208);
						}
					else
						{	/* Ieee/flonum.scm 586 */
							BgL_res1393z00_1207 = ((bool_t) 0);
						}
					BgL_testz00_1930 = BgL_res1393z00_1207;
				}
				if (BgL_testz00_1930)
					{	/* Ieee/flonum.scm 586 */
						bool_t BgL_testz00_1935;

						{	/* Ieee/flonum.scm 586 */
							bool_t BgL_res1395z00_1209;

							{	/* Ieee/flonum.scm 586 */
								double BgL_arg1238z00_1210;

								BgL_arg1238z00_1210 = (BgL_rz00_61 / ((double) 2.0));
								{	/* Ieee/flonum.scm 586 */
									bool_t BgL_res1394z00_1211;

									if (BGL_IS_FINITE(BgL_arg1238z00_1210))
										{	/* Ieee/flonum.scm 586 */
											double BgL_arg1237z00_1212;

											BgL_arg1237z00_1212 = floor(BgL_arg1238z00_1210);
											BgL_res1394z00_1211 =
												(BgL_arg1238z00_1210 == BgL_arg1237z00_1212);
										}
									else
										{	/* Ieee/flonum.scm 586 */
											BgL_res1394z00_1211 = ((bool_t) 0);
										}
									BgL_res1395z00_1209 = BgL_res1394z00_1211;
								}
							}
							BgL_testz00_1935 = BgL_res1395z00_1209;
						}
						if (BgL_testz00_1935)
							{	/* Ieee/flonum.scm 586 */
								return ((bool_t) 0);
							}
						else
							{	/* Ieee/flonum.scm 586 */
								return ((bool_t) 1);
							}
					}
				else
					{	/* Ieee/flonum.scm 586 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _oddfl? */
	obj_t BGl__oddflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_958,
		obj_t BgL_rz00_959)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 585 */
			{	/* Ieee/flonum.scm 586 */
				bool_t BgL_auxz00_1941;

				{	/* Ieee/flonum.scm 586 */
					double BgL_rz00_1213;

					{	/* Ieee/flonum.scm 586 */
						obj_t BgL_auxz00_1942;

						if (REALP(BgL_rz00_959))
							{	/* Ieee/flonum.scm 586 */
								BgL_auxz00_1942 = BgL_rz00_959;
							}
						else
							{
								obj_t BgL_auxz00_1945;

								BgL_auxz00_1945 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 25594)),
									BGl_string1588z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_959);
								FAILURE(BgL_auxz00_1945, BFALSE, BFALSE);
							}
						BgL_rz00_1213 = REAL_TO_DOUBLE(BgL_auxz00_1942);
					}
					{	/* Ieee/flonum.scm 586 */
						bool_t BgL_testz00_1950;

						{	/* Ieee/flonum.scm 586 */
							bool_t BgL_res1393z00_1214;

							if (BGL_IS_FINITE(BgL_rz00_1213))
								{	/* Ieee/flonum.scm 586 */
									double BgL_arg1237z00_1215;

									BgL_arg1237z00_1215 = floor(BgL_rz00_1213);
									BgL_res1393z00_1214 = (BgL_rz00_1213 == BgL_arg1237z00_1215);
								}
							else
								{	/* Ieee/flonum.scm 586 */
									BgL_res1393z00_1214 = ((bool_t) 0);
								}
							BgL_testz00_1950 = BgL_res1393z00_1214;
						}
						if (BgL_testz00_1950)
							{	/* Ieee/flonum.scm 586 */
								bool_t BgL_testz00_1955;

								{	/* Ieee/flonum.scm 586 */
									bool_t BgL_res1395z00_1216;

									{	/* Ieee/flonum.scm 586 */
										double BgL_arg1238z00_1217;

										BgL_arg1238z00_1217 = (BgL_rz00_1213 / ((double) 2.0));
										{	/* Ieee/flonum.scm 586 */
											bool_t BgL_res1394z00_1218;

											if (BGL_IS_FINITE(BgL_arg1238z00_1217))
												{	/* Ieee/flonum.scm 586 */
													double BgL_arg1237z00_1219;

													BgL_arg1237z00_1219 = floor(BgL_arg1238z00_1217);
													BgL_res1394z00_1218 =
														(BgL_arg1238z00_1217 == BgL_arg1237z00_1219);
												}
											else
												{	/* Ieee/flonum.scm 586 */
													BgL_res1394z00_1218 = ((bool_t) 0);
												}
											BgL_res1395z00_1216 = BgL_res1394z00_1218;
										}
									}
									BgL_testz00_1955 = BgL_res1395z00_1216;
								}
								if (BgL_testz00_1955)
									{	/* Ieee/flonum.scm 586 */
										BgL_auxz00_1941 = ((bool_t) 0);
									}
								else
									{	/* Ieee/flonum.scm 586 */
										BgL_auxz00_1941 = ((bool_t) 1);
									}
							}
						else
							{	/* Ieee/flonum.scm 586 */
								BgL_auxz00_1941 = ((bool_t) 0);
							}
					}
				}
				return BBOOL(BgL_auxz00_1941);
			}
		}
	}



/* finitefl? */
	BGL_EXPORTED_DEF bool_t BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_62)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 592 */
			return BGL_IS_FINITE(BgL_rz00_62);
		}
	}



/* _finitefl? */
	obj_t BGl__finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_960,
		obj_t BgL_rz00_961)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 592 */
			{	/* Ieee/flonum.scm 593 */
				bool_t BgL_auxz00_1963;

				{	/* Ieee/flonum.scm 593 */
					double BgL_rz00_1220;

					{	/* Ieee/flonum.scm 593 */
						obj_t BgL_auxz00_1964;

						if (REALP(BgL_rz00_961))
							{	/* Ieee/flonum.scm 593 */
								BgL_auxz00_1964 = BgL_rz00_961;
							}
						else
							{
								obj_t BgL_auxz00_1967;

								BgL_auxz00_1967 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 25885)),
									BGl_string1589z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_961);
								FAILURE(BgL_auxz00_1967, BFALSE, BFALSE);
							}
						BgL_rz00_1220 = REAL_TO_DOUBLE(BgL_auxz00_1964);
					}
					BgL_auxz00_1963 = BGL_IS_FINITE(BgL_rz00_1220);
				}
				return BBOOL(BgL_auxz00_1963);
			}
		}
	}



/* infinitefl? */
	BGL_EXPORTED_DEF bool_t
		BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_63)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 598 */
			return BGL_IS_INF(BgL_rz00_63);
		}
	}



/* _infinitefl? */
	obj_t BGl__infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_962,
		obj_t BgL_rz00_963)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 598 */
			{	/* Ieee/flonum.scm 599 */
				bool_t BgL_auxz00_1975;

				{	/* Ieee/flonum.scm 599 */
					double BgL_rz00_1221;

					{	/* Ieee/flonum.scm 599 */
						obj_t BgL_auxz00_1976;

						if (REALP(BgL_rz00_963))
							{	/* Ieee/flonum.scm 599 */
								BgL_auxz00_1976 = BgL_rz00_963;
							}
						else
							{
								obj_t BgL_auxz00_1979;

								BgL_auxz00_1979 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 26158)),
									BGl_string1590z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_963);
								FAILURE(BgL_auxz00_1979, BFALSE, BFALSE);
							}
						BgL_rz00_1221 = REAL_TO_DOUBLE(BgL_auxz00_1976);
					}
					BgL_auxz00_1975 = BGL_IS_INF(BgL_rz00_1221);
				}
				return BBOOL(BgL_auxz00_1975);
			}
		}
	}



/* nanfl? */
	BGL_EXPORTED_DEF bool_t BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_64)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 604 */
			return BGL_IS_NAN(BgL_rz00_64);
		}
	}



/* _nanfl? */
	obj_t BGl__nanflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_964,
		obj_t BgL_rz00_965)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 604 */
			{	/* Ieee/flonum.scm 605 */
				bool_t BgL_auxz00_1987;

				{	/* Ieee/flonum.scm 605 */
					double BgL_rz00_1222;

					{	/* Ieee/flonum.scm 605 */
						obj_t BgL_auxz00_1988;

						if (REALP(BgL_rz00_965))
							{	/* Ieee/flonum.scm 605 */
								BgL_auxz00_1988 = BgL_rz00_965;
							}
						else
							{
								obj_t BgL_auxz00_1991;

								BgL_auxz00_1991 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 26423)),
									BGl_string1591z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_965);
								FAILURE(BgL_auxz00_1991, BFALSE, BFALSE);
							}
						BgL_rz00_1222 = REAL_TO_DOUBLE(BgL_auxz00_1988);
					}
					BgL_auxz00_1987 = BGL_IS_NAN(BgL_rz00_1222);
				}
				return BBOOL(BgL_auxz00_1987);
			}
		}
	}



/* string->real */
	BGL_EXPORTED_DEF double
		BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(char *BgL_stringz00_65)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 610 */
			if (bigloo_strcmp(string_to_bstring(BgL_stringz00_65),
					BGl_string1592z00zz__r4_numbers_6_5_flonumz00))
				{	/* Ieee/flonum.scm 612 */
					return BGL_NAN;
				}
			else
				{	/* Ieee/flonum.scm 612 */
					if (bigloo_strcmp(string_to_bstring(BgL_stringz00_65),
							BGl_string1593z00zz__r4_numbers_6_5_flonumz00))
						{	/* Ieee/flonum.scm 612 */
							return BGL_INFINITY;
						}
					else
						{	/* Ieee/flonum.scm 612 */
							if (bigloo_strcmp(string_to_bstring(BgL_stringz00_65),
									BGl_string1594z00zz__r4_numbers_6_5_flonumz00))
								{	/* Ieee/flonum.scm 612 */
									return (-BGL_INFINITY);
								}
							else
								{	/* Ieee/flonum.scm 612 */
									return strtod(BgL_stringz00_65, ((long) 0));
		}}}}
	}



/* _string->real */
	obj_t BGl__stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_966, obj_t BgL_stringz00_967)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 610 */
			{	/* Ieee/flonum.scm 612 */
				double BgL_auxz00_2008;

				{	/* Ieee/flonum.scm 612 */
					char *BgL_stringz00_1223;

					{	/* Ieee/flonum.scm 612 */
						obj_t BgL_auxz00_2009;

						if (STRINGP(BgL_stringz00_967))
							{	/* Ieee/flonum.scm 612 */
								BgL_auxz00_2009 = BgL_stringz00_967;
							}
						else
							{
								obj_t BgL_auxz00_2012;

								BgL_auxz00_2012 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 26712)),
									BGl_string1595z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1596z00zz__r4_numbers_6_5_flonumz00,
									BgL_stringz00_967);
								FAILURE(BgL_auxz00_2012, BFALSE, BFALSE);
							}
						BgL_stringz00_1223 = BSTRING_TO_STRING(BgL_auxz00_2009);
					}
					if (bigloo_strcmp(string_to_bstring(BgL_stringz00_1223),
							BGl_string1592z00zz__r4_numbers_6_5_flonumz00))
						{	/* Ieee/flonum.scm 612 */
							BgL_auxz00_2008 = BGL_NAN;
						}
					else
						{	/* Ieee/flonum.scm 612 */
							if (bigloo_strcmp(string_to_bstring(BgL_stringz00_1223),
									BGl_string1593z00zz__r4_numbers_6_5_flonumz00))
								{	/* Ieee/flonum.scm 612 */
									BgL_auxz00_2008 = BGL_INFINITY;
								}
							else
								{	/* Ieee/flonum.scm 612 */
									if (bigloo_strcmp(string_to_bstring(BgL_stringz00_1223),
											BGl_string1594z00zz__r4_numbers_6_5_flonumz00))
										{	/* Ieee/flonum.scm 612 */
											BgL_auxz00_2008 = (-BGL_INFINITY);
										}
									else
										{	/* Ieee/flonum.scm 612 */
											BgL_auxz00_2008 = strtod(BgL_stringz00_1223, ((long) 0));
				}}}}
				return DOUBLE_TO_REAL(BgL_auxz00_2008);
			}
		}
	}



/* real->string */
	BGL_EXPORTED_DEF obj_t
		BGl_realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00(obj_t BgL_realz00_66)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 624 */
			return real_to_string(REAL_TO_DOUBLE(BgL_realz00_66));
		}
	}



/* _real->string */
	obj_t BGl__realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_968, obj_t BgL_realz00_969)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 624 */
			{	/* Ieee/flonum.scm 625 */
				obj_t BgL_realz00_1224;

				if (REALP(BgL_realz00_969))
					{	/* Ieee/flonum.scm 625 */
						BgL_realz00_1224 = BgL_realz00_969;
					}
				else
					{
						obj_t BgL_auxz00_2032;

						BgL_auxz00_2032 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
							BINT(((long) 27153)),
							BGl_string1597z00zz__r4_numbers_6_5_flonumz00,
							BGl_string1598z00zz__r4_numbers_6_5_flonumz00, BgL_realz00_969);
						FAILURE(BgL_auxz00_2032, BFALSE, BFALSE);
					}
				return real_to_string(REAL_TO_DOUBLE(BgL_realz00_1224));
			}
		}
	}



/* ieee-string->real */
	BGL_EXPORTED_DEF obj_t
		BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_stringz00_67)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 630 */
			return DOUBLE_TO_REAL(bgl_ieee_string_to_double(BgL_stringz00_67));
		}
	}



/* _ieee-string->real */
	obj_t BGl__ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_970, obj_t BgL_stringz00_971)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 630 */
			{	/* Ieee/flonum.scm 631 */
				obj_t BgL_stringz00_1225;

				if (STRINGP(BgL_stringz00_971))
					{	/* Ieee/flonum.scm 631 */
						BgL_stringz00_1225 = BgL_stringz00_971;
					}
				else
					{
						obj_t BgL_auxz00_2042;

						BgL_auxz00_2042 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
							BINT(((long) 27444)),
							BGl_string1599z00zz__r4_numbers_6_5_flonumz00,
							BGl_string1600z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_971);
						FAILURE(BgL_auxz00_2042, BFALSE, BFALSE);
					}
				return DOUBLE_TO_REAL(bgl_ieee_string_to_double(BgL_stringz00_1225));
			}
		}
	}



/* real->ieee-string */
	BGL_EXPORTED_DEF obj_t
		BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_realz00_68)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 636 */
			return bgl_double_to_ieee_string(REAL_TO_DOUBLE(BgL_realz00_68));
		}
	}



/* _real->ieee-string */
	obj_t BGl__realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_972, obj_t BgL_realz00_973)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 636 */
			{	/* Ieee/flonum.scm 637 */
				obj_t BgL_realz00_1226;

				if (REALP(BgL_realz00_973))
					{	/* Ieee/flonum.scm 637 */
						BgL_realz00_1226 = BgL_realz00_973;
					}
				else
					{
						obj_t BgL_auxz00_2052;

						BgL_auxz00_2052 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
							BINT(((long) 27741)),
							BGl_string1601z00zz__r4_numbers_6_5_flonumz00,
							BGl_string1598z00zz__r4_numbers_6_5_flonumz00, BgL_realz00_973);
						FAILURE(BgL_auxz00_2052, BFALSE, BFALSE);
					}
				return bgl_double_to_ieee_string(REAL_TO_DOUBLE(BgL_realz00_1226));
			}
		}
	}



/* ieee-string->double */
	BGL_EXPORTED_DEF double
		BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_stringz00_69)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 642 */
			return bgl_ieee_string_to_double(BgL_stringz00_69);
		}
	}



/* _ieee-string->double */
	obj_t BGl__ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_974, obj_t BgL_stringz00_975)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 642 */
			{	/* Ieee/flonum.scm 643 */
				double BgL_auxz00_2059;

				{	/* Ieee/flonum.scm 643 */
					obj_t BgL_stringz00_1227;

					if (STRINGP(BgL_stringz00_975))
						{	/* Ieee/flonum.scm 643 */
							BgL_stringz00_1227 = BgL_stringz00_975;
						}
					else
						{
							obj_t BgL_auxz00_2062;

							BgL_auxz00_2062 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
								BINT(((long) 28040)),
								BGl_string1602z00zz__r4_numbers_6_5_flonumz00,
								BGl_string1600z00zz__r4_numbers_6_5_flonumz00,
								BgL_stringz00_975);
							FAILURE(BgL_auxz00_2062, BFALSE, BFALSE);
						}
					BgL_auxz00_2059 = bgl_ieee_string_to_double(BgL_stringz00_1227);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_2059);
			}
		}
	}



/* double->ieee-string */
	BGL_EXPORTED_DEF obj_t
		BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(double
		BgL_doublez00_70)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 648 */
			return bgl_double_to_ieee_string(BgL_doublez00_70);
		}
	}



/* _double->ieee-string */
	obj_t BGl__doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_976, obj_t BgL_doublez00_977)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 648 */
			{	/* Ieee/flonum.scm 649 */
				double BgL_doublez00_1228;

				{	/* Ieee/flonum.scm 649 */
					obj_t BgL_auxz00_2069;

					if (REALP(BgL_doublez00_977))
						{	/* Ieee/flonum.scm 649 */
							BgL_auxz00_2069 = BgL_doublez00_977;
						}
					else
						{
							obj_t BgL_auxz00_2072;

							BgL_auxz00_2072 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
								BINT(((long) 28341)),
								BGl_string1603z00zz__r4_numbers_6_5_flonumz00,
								BGl_string1544z00zz__r4_numbers_6_5_flonumz00,
								BgL_doublez00_977);
							FAILURE(BgL_auxz00_2072, BFALSE, BFALSE);
						}
					BgL_doublez00_1228 = REAL_TO_DOUBLE(BgL_auxz00_2069);
				}
				return bgl_double_to_ieee_string(BgL_doublez00_1228);
			}
		}
	}



/* ieee-string->float */
	BGL_EXPORTED_DEF float
		BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_stringz00_71)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 654 */
			return bgl_ieee_string_to_float(BgL_stringz00_71);
		}
	}



/* _ieee-string->float */
	obj_t BGl__ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_978, obj_t BgL_stringz00_979)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 654 */
			{	/* Ieee/flonum.scm 655 */
				float BgL_auxz00_2079;

				{	/* Ieee/flonum.scm 655 */
					obj_t BgL_stringz00_1229;

					if (STRINGP(BgL_stringz00_979))
						{	/* Ieee/flonum.scm 655 */
							BgL_stringz00_1229 = BgL_stringz00_979;
						}
					else
						{
							obj_t BgL_auxz00_2082;

							BgL_auxz00_2082 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
								BINT(((long) 28641)),
								BGl_string1604z00zz__r4_numbers_6_5_flonumz00,
								BGl_string1600z00zz__r4_numbers_6_5_flonumz00,
								BgL_stringz00_979);
							FAILURE(BgL_auxz00_2082, BFALSE, BFALSE);
						}
					BgL_auxz00_2079 = bgl_ieee_string_to_float(BgL_stringz00_1229);
				}
				return FLOAT_TO_REAL(BgL_auxz00_2079);
			}
		}
	}



/* float->ieee-string */
	BGL_EXPORTED_DEF obj_t
		BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(float
		BgL_floatz00_72)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 660 */
			return bgl_float_to_ieee_string(BgL_floatz00_72);
		}
	}



/* _float->ieee-string */
	obj_t BGl__floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_980, obj_t BgL_floatz00_981)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 660 */
			{	/* Ieee/flonum.scm 661 */
				float BgL_floatz00_1230;

				{	/* Ieee/flonum.scm 661 */
					obj_t BgL_auxz00_2089;

					if (REALP(BgL_floatz00_981))
						{	/* Ieee/flonum.scm 661 */
							BgL_auxz00_2089 = BgL_floatz00_981;
						}
					else
						{
							obj_t BgL_auxz00_2092;

							BgL_auxz00_2092 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
								BINT(((long) 28939)),
								BGl_string1605z00zz__r4_numbers_6_5_flonumz00,
								BGl_string1606z00zz__r4_numbers_6_5_flonumz00,
								BgL_floatz00_981);
							FAILURE(BgL_auxz00_2092, BFALSE, BFALSE);
						}
					BgL_floatz00_1230 = REAL_TO_FLOAT(BgL_auxz00_2089);
				}
				return bgl_float_to_ieee_string(BgL_floatz00_1230);
			}
		}
	}



/* double->llong-bits */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(double
		BgL_nz00_73)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 666 */
			return DOUBLE_TO_LLONG_BITS(BgL_nz00_73);
		}
	}



/* _double->llong-bits */
	obj_t BGl__doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_982, obj_t BgL_nz00_983)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 666 */
			{	/* Ieee/flonum.scm 667 */
				BGL_LONGLONG_T BgL_auxz00_2099;

				{	/* Ieee/flonum.scm 667 */
					double BgL_nz00_1231;

					{	/* Ieee/flonum.scm 667 */
						obj_t BgL_auxz00_2100;

						if (REALP(BgL_nz00_983))
							{	/* Ieee/flonum.scm 667 */
								BgL_auxz00_2100 = BgL_nz00_983;
							}
						else
							{
								obj_t BgL_auxz00_2103;

								BgL_auxz00_2103 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 29247)),
									BGl_string1607z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1544z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_983);
								FAILURE(BgL_auxz00_2103, BFALSE, BFALSE);
							}
						BgL_nz00_1231 = REAL_TO_DOUBLE(BgL_auxz00_2100);
					}
					BgL_auxz00_2099 = DOUBLE_TO_LLONG_BITS(BgL_nz00_1231);
				}
				return make_bllong(BgL_auxz00_2099);
			}
		}
	}



/* llong-bits->double */
	BGL_EXPORTED_DEF double
		BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BGL_LONGLONG_T
		BgL_nz00_74)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 673 */
			return LLONG_BITS_TO_DOUBLE(BgL_nz00_74);
		}
	}



/* _llong-bits->double */
	obj_t BGl__llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_984, obj_t BgL_nz00_985)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 673 */
			{	/* Ieee/flonum.scm 674 */
				double BgL_auxz00_2111;

				{	/* Ieee/flonum.scm 674 */
					BGL_LONGLONG_T BgL_nz00_1232;

					{	/* Ieee/flonum.scm 674 */
						obj_t BgL_auxz00_2112;

						if (LLONGP(BgL_nz00_985))
							{	/* Ieee/flonum.scm 674 */
								BgL_auxz00_2112 = BgL_nz00_985;
							}
						else
							{
								obj_t BgL_auxz00_2115;

								BgL_auxz00_2115 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 29575)),
									BGl_string1608z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1609z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_985);
								FAILURE(BgL_auxz00_2115, BFALSE, BFALSE);
							}
						BgL_nz00_1232 = BLLONG_TO_LLONG(BgL_auxz00_2112);
					}
					BgL_auxz00_2111 = LLONG_BITS_TO_DOUBLE(BgL_nz00_1232);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_2111);
			}
		}
	}



/* float->int-bits */
	BGL_EXPORTED_DEF int
		BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(float BgL_nz00_75)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 680 */
			return FLOAT_TO_INT_BITS(BgL_nz00_75);
		}
	}



/* _float->int-bits */
	obj_t BGl__floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_986, obj_t BgL_nz00_987)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 680 */
			{	/* Ieee/flonum.scm 681 */
				int BgL_auxz00_2123;

				{	/* Ieee/flonum.scm 681 */
					float BgL_nz00_1233;

					{	/* Ieee/flonum.scm 681 */
						obj_t BgL_auxz00_2124;

						if (REALP(BgL_nz00_987))
							{	/* Ieee/flonum.scm 681 */
								BgL_auxz00_2124 = BgL_nz00_987;
							}
						else
							{
								obj_t BgL_auxz00_2127;

								BgL_auxz00_2127 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 29897)),
									BGl_string1610z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1606z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_987);
								FAILURE(BgL_auxz00_2127, BFALSE, BFALSE);
							}
						BgL_nz00_1233 = REAL_TO_FLOAT(BgL_auxz00_2124);
					}
					BgL_auxz00_2123 = FLOAT_TO_INT_BITS(BgL_nz00_1233);
				}
				return BINT(BgL_auxz00_2123);
			}
		}
	}



/* int-bits->float */
	BGL_EXPORTED_DEF float
		BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(int BgL_nz00_76)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 687 */
			return INT_BITS_TO_FLOAT(BgL_nz00_76);
		}
	}



/* _int-bits->float */
	obj_t BGl__intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_988, obj_t BgL_nz00_989)
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 687 */
			{	/* Ieee/flonum.scm 688 */
				float BgL_auxz00_2135;

				{	/* Ieee/flonum.scm 688 */
					int BgL_nz00_1234;

					{	/* Ieee/flonum.scm 688 */
						obj_t BgL_auxz00_2136;

						if (INTEGERP(BgL_nz00_989))
							{	/* Ieee/flonum.scm 688 */
								BgL_auxz00_2136 = BgL_nz00_989;
							}
						else
							{
								obj_t BgL_auxz00_2139;

								BgL_auxz00_2139 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1542z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 30216)),
									BGl_string1611z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1612z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_989);
								FAILURE(BgL_auxz00_2139, BFALSE, BFALSE);
							}
						BgL_nz00_1234 = CINT(BgL_auxz00_2136);
					}
					BgL_auxz00_2135 = INT_BITS_TO_FLOAT(BgL_nz00_1234);
				}
				return FLOAT_TO_REAL(BgL_auxz00_2135);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00()
	{
		AN_OBJECT;
		{	/* Ieee/flonum.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1613z00zz__r4_numbers_6_5_flonumz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string1613z00zz__r4_numbers_6_5_flonumz00));
		}
	}

#ifdef __cplusplus
}
#endif
