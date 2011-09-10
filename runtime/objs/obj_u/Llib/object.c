/*===========================================================================*/
/*   (Llib/object.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/object.scm -indent -o objs/obj_u/Llib/object.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62conditionz62_bgl
	{
		header_t header;
		obj_t widening;
	}                      *BgL_z62conditionz62_bglt;

	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;

	typedef struct BgL_z62typezd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
		obj_t BgL_typez00;
	}                         *BgL_z62typezd2errorzb0_bglt;

	typedef struct BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
		obj_t BgL_indexz00;
	}                                             
		*BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt;

	typedef struct BgL_z62iozd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                       *BgL_z62iozd2errorzb0_bglt;

	typedef struct BgL_z62iozd2portzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                              *BgL_z62iozd2portzd2errorz62_bglt;

	typedef struct BgL_z62iozd2readzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                              *BgL_z62iozd2readzd2errorz62_bglt;

	typedef struct BgL_z62iozd2writezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2writezd2errorz62_bglt;

	typedef struct BgL_z62iozd2closedzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                *BgL_z62iozd2closedzd2errorz62_bglt;

	typedef struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                           
		*BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt;

	typedef struct BgL_z62iozd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2parsezd2errorz62_bglt;

	typedef struct BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                       
		*BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt;

	typedef struct BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                        
		*BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt;

	typedef struct BgL_z62iozd2sigpipezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                 *BgL_z62iozd2sigpipezd2errorz62_bglt;

	typedef struct BgL_z62iozd2timeoutzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                 *BgL_z62iozd2timeoutzd2errorz62_bglt;

	typedef struct BgL_z62processzd2exceptionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                *BgL_z62processzd2exceptionzb0_bglt;

	typedef struct BgL_z62securityzd2exceptionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_messagez00;
	}                                 *BgL_z62securityzd2exceptionzb0_bglt;

	typedef struct BgL_z62accesszd2controlzd2exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_messagez00;
		obj_t BgL_objz00;
		obj_t BgL_permissionz00;
	}                                        
		*BgL_z62accesszd2controlzd2exceptionz62_bglt;

	typedef struct BgL_z62warningz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                    *BgL_z62warningz62_bglt;

	typedef struct BgL_z62evalzd2warningzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                           *BgL_z62evalzd2warningzb0_bglt;


	static obj_t BGl__objectzf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t
		BGl__z52allocatezd2z62iozd2timeoutzd2errorze2zz__objectz00(obj_t);
	static obj_t BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2methodzd2fromz00zz__objectz00(BgL_objectz00_bglt, obj_t, obj_t);
	static obj_t BGl__genericzd2memoryzd2statisticsz00zz__objectz00(obj_t);
	static obj_t
		BGl_objectzd2writezd2default2440z00zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_z62typezd2errorzb0_bglt
		BGl_z62typezd2errorzd2nilz62zz__objectz00();
	BGL_EXPORTED_DECL bool_t BGl_evalzd2classzf3z21zz__objectz00(obj_t);
	static obj_t BGl__z62exceptionzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2z62iozd2timeoutzd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	static obj_t BGl__z52allocatezd2z62typezd2errorz30zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_z62iozd2unknownzd2hostzd2errorzd2nilz62zz__objectz00();
	static obj_t BGl__z62iozd2filezd2notzd2foundzd2errorzf3z91zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(obj_t,
		BgL_objectz00_bglt, int, obj_t);
	static obj_t
		BGl__z62accesszd2controlzd2exceptionzd2nilzb0zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2z62errorzd2nilz30zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_z52objectzd2wideningz80zz__objectz00(BgL_objectz00_bglt);
	static obj_t
		BGl_z52thezd2z62indexzd2outzd2ofzd2boundszd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_z62errorzf3z91zz__objectz00(obj_t);
	extern obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	static obj_t BGl__z52allocatezd2z62errorze2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62securityzd2exceptionzb0_bglt
		BGl_fillzd2z62securityzd2exceptionz12z70zz__objectz00
		(BgL_z62securityzd2exceptionzb0_bglt, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z62accesszd2controlzd2exceptionzd2objzb0zz__objectz00(obj_t,
		obj_t);
	static obj_t
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzf3z91zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(obj_t,
		BgL_objectz00_bglt, int);
	BGL_EXPORTED_DECL bool_t BGl_z62iozd2parsezd2errorzf3z91zz__objectz00(obj_t);
	BGL_EXPORTED_DECL long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t bgl_make_generic(obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62inde2524z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__z52objectzd2wideningzd2setz12z40zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_objectzd2printzd2default2449z00zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2z62iozd2portzd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_z62iozd2unknownzd2hostzd2errorzf3z43zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_objectz00_bglt
		BGl_z52allocatezd2objectz80zz__objectz00();
	BGL_EXPORTED_DECL BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62errorz62_bglt
		BGl_makezd2z62errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2classzd2fieldz00zz__objectz00(obj_t,
		obj_t);
	static obj_t
		BGl_z52thezd2z62accesszd2controlzd2exceptionzd2nilz30zz__objectz00 =
		BUNSPEC;
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_doublezd2nbzd2genericsz12z12zz__objectz00();
	static bool_t BGl_classzd2hierarchyzd2numberingz12z12zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62cond2540z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2z62typezd2errorz62zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_z62iozd2sigpipezd2errorzf3z91zz__objectz00(obj_t);
	static obj_t BGl__z62iozd2unknownzd2hostzd2errorzd2nilz62zz__objectz00(obj_t);
	static obj_t BGl_zc3anonymousza32754ze3_4005z83zz__objectz00(obj_t);
	static obj_t BGl_zc3anonymousza32754ze3_4006z83zz__objectz00(obj_t);
	static obj_t BGl__objectzd2classzd2numzd2setz12zc0zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32754ze3_4007z83zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__objectz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32754ze3_4008z83zz__objectz00(obj_t);
	static obj_t BGl_zc3anonymousza32754ze3_4010z83zz__objectz00(obj_t);
	static obj_t BGl_zc3anonymousza32754ze3_4009z83zz__objectz00(obj_t);
	static obj_t BGl__fillzd2objectz12zc0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32754ze3_4011z83zz__objectz00(obj_t);
	static obj_t BGl_zc3anonymousza32754ze3_4012z83zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_genericzd2memoryzd2statisticsz00zz__objectz00();
	static obj_t BGl__classzd2fieldzd2infoz00zz__objectz00(obj_t, obj_t);
	static obj_t BGl__classzd2creatorzd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2subclasseszd2zz__objectz00(obj_t);
	static long BGl_classzd2hierarchyzd2downzd2renumberz12zc0zz__objectz00(obj_t,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_z52thezd2objectzd2nilz52zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_z62iozd2malformedzd2urlzd2errorzf3z43zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_z62iozd2filezd2notzd2foundzd2errorzf3z91zz__objectz00(obj_t);
	static obj_t BGl__z62exceptionzd2locationzd2setz12z70zz__objectz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2writezd2errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl__findzd2methodzd2zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_genericzd2defaultzd2zz__objectz00(obj_t);
	static obj_t BGl_exceptionzd2notifyzd2z62er2456z62zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2closedzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2closedzd2errorze2zz__objectz00();
	static obj_t BGl_objectzd2ze3structzd2z62iozd2s2484z53zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2classzd2zz__objectz00(obj_t);
	static obj_t BGl__fillzd2z62iozd2writezd2errorz12za2zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2z62iozd2readzd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__objectz00();
	BGL_EXPORTED_DECL BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_z52allocatezd2z62iozd2malformedzd2urlzd2errorz30zz__objectz00();
	static obj_t BGl__objectzd2displayzd2zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_z62iozd2timeoutzd2errorzd2nilzb0zz__objectz00();
	static obj_t BGl__z52allocatezd2z62iozd2readzd2errorze2zz__objectz00(obj_t);
	static obj_t
		BGl__z52allocatezd2z62iozd2filezd2notzd2foundzd2errorze2zz__objectz00
		(obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_objectz00zz__objectz00 = BUNSPEC;
	static obj_t BGl__z62processzd2exceptionzd2nilz62zz__objectz00(obj_t);
	static obj_t BGl__z62exceptionzd2fnamezd2setz12z70zz__objectz00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_classzd2hierarchyzd2upzd2renumberz12zc0zz__objectz00(obj_t);
	static obj_t BGl__structzb2objectzd2ze3objectz83zz__objectz00(obj_t, obj_t,
		obj_t);
	static int
		BGl_objectzd2hashnumberzd2de2447z00zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl__z62warningzd2argszb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2z62iozd2portzd2errorze2zz__objectz00(obj_t);
	static obj_t BGl__z62typezd2errorzd2nilz62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_fillzd2z62iozd2malformedzd2urlzd2errorz12z70zz__objectz00
		(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2z62iozd2sigpipezd2errorz12za2zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62processzd2exceptionzb0_bglt
		BGl_z62processzd2exceptionzd2nilz62zz__objectz00();
	BGL_EXPORTED_DECL BgL_z62iozd2writezd2errorz62_bglt
		BGl_z62iozd2writezd2errorzd2nilzb0zz__objectz00();
	static obj_t BGl_exceptionzd2notifyzd2z62wa2458z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2z62iozd2parsezd2errorze2zz__objectz00(obj_t);
	static obj_t BGl__z62iozd2writezd2errorzd2nilzb0zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_makezd2z62iozd2malformedzd2urlzd2errorz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__objectzd2hashnumberzd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62iozd2readzd2errorzf3z91zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62processzd2exceptionzb0_bglt
		BGl_z52allocatezd2z62processzd2exceptionz30zz__objectz00();
	static obj_t BGl__makezd2z62iozd2unknownzd2hostzd2errorz62zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_fillzd2z62accesszd2controlzd2exceptionz12za2zz__objectz00
		(BgL_z62accesszd2controlzd2exceptionz62_bglt, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2closedzd2errorz62_bglt
		BGl_makezd2z62iozd2closedzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62processzd2exceptionzb0_bglt
		BGl_fillzd2z62processzd2exceptionz12z70zz__objectz00
		(BgL_z62processzd2exceptionzb0_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2z62iozd2closedzd2errorze2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62conditionz62_bglt
		BGl_fillzd2z62conditionz12za2zz__objectz00(BgL_z62conditionz62_bglt);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2allzd2fieldsz00zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_z62accesszd2controlzd2exceptionzf3z91zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2evdatazd2setz12z12zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_objectz00_bglt
		BGl_fillzd2objectz12zc0zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2z62iozd2errorzd2nilze2zz__objectz00 = BUNSPEC;
	static obj_t BGl__z62iozd2sigpipezd2errorzd2nilzb0zz__objectz00(obj_t);
	static obj_t BGl__genericzd2nozd2defaultzd2behaviorzd2zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__z62exceptionzd2fnamezb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00();
	BGL_EXPORTED_DECL obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2z62iozd2unknownzd2hostzd2errorzd2nilze2zz__objectz00
		= BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, bool_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2creatorzd2zz__objectz00(obj_t);
	static obj_t BGl__objectzd2ze3structzd2defau2442ze3zz__objectz00(obj_t,
		obj_t);
	static obj_t
		BGl_objectzd2displayzd2defau2437z00zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl__classzd2superzd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2readzd2errorz62_bglt
		BGl_makezd2z62iozd2readzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__z62exceptionzd2locationzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl__makezd2z62iozd2readzd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2indexzb0zz__objectz00(obj_t,
		obj_t);
	static obj_t
		BGl__z52allocatezd2z62indexzd2outzd2ofzd2boundszd2errorze2zz__objectz00
		(obj_t);
	static obj_t BGl__z62typezd2errorzd2typez62zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
	static obj_t
		BGl__fillzd2z62indexzd2outzd2ofzd2boundszd2errorz12za2zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2sigpipezd2errorze2zz__objectz00();
	BGL_EXPORTED_DECL BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_fillzd2z62iozd2unknownzd2hostzd2errorz12z70zz__objectz00
		(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62exceptionz62_bglt
		BGl_fillzd2z62exceptionz12za2zz__objectz00(BgL_z62exceptionz62_bglt, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2portzd2errorz62_bglt
		BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objec2445z83zz__objectz00(BgL_objectz00_bglt,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62eval2460z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__iszd2azf3z21zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2z62iozd2portzd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__widezd2objectzf3z21zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62evalzd2warningzb0_bglt
		BGl_fillzd2z62evalzd2warningz12z70zz__objectz00
		(BgL_z62evalzd2warningzb0_bglt, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2z62iozd2closedzd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2462z83zz__objectz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2parsezd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2parsezd2errorze2zz__objectz00();
	static obj_t BGl__fillzd2z62evalzd2warningz12z70zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2objec2544ze3zz__objectz00(obj_t, obj_t);
	static obj_t BGl__structzd2ze3objectz31zz__objectz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2466z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2470z83zz__objectz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62iozd2writezd2errorzf3z91zz__objectz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2474z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__genericzd2defaultzd2zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z62accesszd2controlzd2exceptionzf3z91zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__objectz00();
	static obj_t BGl_structzb2objectzd2ze3objec2478z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_initializa7ezd2objectsz12z67zz__objectz00();
	extern obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2482z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__classzd2fieldzd2mutatorz00zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2timeoutzd2errorze2zz__objectz00();
	static obj_t BGl_structzb2objectzd2ze3objec2486z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2490z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2502z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z62iozd2timeoutzd2errorzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2494z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00(obj_t);
	extern obj_t bgl_find_runtime_type(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2506z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2498z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z52thezd2z62iozd2filezd2notzd2foundzd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec2510z83zz__objectz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_makezd2z62accesszd2controlzd2exceptionzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_fillzd2z62iozd2sigpipezd2errorz12za2zz__objectz00
		(BgL_z62iozd2sigpipezd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2writezd2errorz62_bglt
		BGl_makezd2z62iozd2writezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2514z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2518z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2522z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__evalzd2classzf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62warn2464z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2526z83zz__objectz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2nilzb0zz__objectz00();
	static obj_t BGl_structzb2objectzd2ze3objec2530z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_exceptionzd2notifyzd2def2453z00zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2parsezd2errorz62_bglt
		BGl_fillzd2z62iozd2parsezd2errorz12za2zz__objectz00
		(BgL_z62iozd2parsezd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2534z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2z62securityzd2exceptionzd2nilze2zz__objectz00 =
		BUNSPEC;
	static obj_t BGl__methodzd2arrayzd2refz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62iozd2portzd2errorzf3z91zz__objectz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2538z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z62securityzd2exceptionzd2nilz62zz__objectz00(obj_t);
	static obj_t BGl__objectzd2classzd2zz__objectz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2542z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__objectzd2equalzf3z21zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z62warningzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2z62iozd2unknownzd2hostzd2errorz30zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_z62indexzd2outzd2ofzd2boundszd2errorzf3z91zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_classzd2fieldzd2indexedzf3zf3zz__objectz00(obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2546z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z62exceptionzd2stackzd2setz12z70zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl__z62iozd2readzd2errorzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl__iszd2nilzf3z21zz__objectz00(obj_t, obj_t);
	extern obj_t make_vector_uncollectable(int, obj_t);
	BGL_EXPORTED_DECL BgL_z62typezd2errorzb0_bglt
		BGl_fillzd2z62typezd2errorz12z70zz__objectz00(BgL_z62typezd2errorzb0_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z62errorzd2nilzb0zz__objectz00(obj_t);
	extern obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__z62errorzd2msgzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl__makezd2z62iozd2writezd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__objectzd2equalzf3zd2defaul2451zf3zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__objectzd2writezd2zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z62errorzd2objzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl__fillzd2z62iozd2closedzd2errorz12za2zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2z62errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32713ze3z83zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2errorzb0_bglt
		BGl_z52allocatezd2z62iozd2errorz30zz__objectz00();
	BGL_EXPORTED_DECL obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2errorzb0_bglt
		BGl_fillzd2z62iozd2errorz12z70zz__objectz00(BgL_z62iozd2errorzb0_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2z62iozd2errorz30zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_widezd2objectzf3z21zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL long
		BGl_objectzd2classzd2numz00zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2closedzd2errorz62_bglt
		BGl_fillzd2z62iozd2closedzd2errorz12za2zz__objectz00
		(BgL_z62iozd2closedzd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__classzd2fieldzd2indexedzf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl__fillzd2z62iozd2malformedzd2urlzd2errorz12z70zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62securityzd2exceptionzb0_bglt
		BGl_z52allocatezd2z62securityzd2exceptionz30zz__objectz00();
	static obj_t BGl_z52thezd2z62typezd2errorzd2nilze2zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62securityzd2exceptionzb0zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t);
	static obj_t
		BGl__z62iozd2malformedzd2urlzd2errorzd2nilz62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_z62iozd2timeoutzd2errorzf3z91zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_fillzd2z62indexzd2outzd2ofzd2boundszd2errorz12za2zz__objectz00
		(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2z62processzd2exceptionz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62type2528z81zz__objectz00(obj_t,
		obj_t);
	extern int bgl_obj_hash_number(obj_t);
	static obj_t BGl__classzd2evdatazd2setz12z12zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl__makezd2z62iozd2malformedzd2urlzd2errorz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2z62iozd2writezd2errorze2zz__objectz00(obj_t);
	static obj_t BGl__z62exceptionzd2nilzb0zz__objectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2sigpipezd2errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2z62processzd2exceptionz30zz__objectz00(obj_t);
	extern obj_t bigloo_generic_mutex;
	static obj_t
		BGl__makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__classzd2fieldzf3z21zz__objectz00(obj_t, obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62accesszd2controlzd2exceptionz62zz__objectz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62iozd2e2520z53zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62typezd2errorzb0_bglt
		BGl_z52allocatezd2z62typezd2errorz30zz__objectz00();
	static obj_t BGl_z52thezd2z62warningzd2nilz30zz__objectz00 = BUNSPEC;
	static obj_t BGl_z52thezd2z62exceptionzd2nilz30zz__objectz00 = BUNSPEC;
	static obj_t BGl__classzd2nilzd2zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z52addzd2methodz12z92zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl__objectzd2nilzd2zz__objectz00(obj_t);
	static obj_t BGl__findzd2methodzd2fromz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_z52allocatezd2z62accesszd2controlzd2exceptionze2zz__objectz00();
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2classzd2zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_list4323z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2timeoutzd2errorz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt,
		BgL_objectz00_bglt);
	static obj_t BGl__makezd2z62securityzd2exceptionz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62conditionz62_bglt
		BGl_z52allocatezd2z62conditionze2zz__objectz00();
	static obj_t
		BGl__makezd2z62accesszd2controlzd2exceptionzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2closedzd2errorz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_objectz00_bglt
		BGl_structzd2ze3objectz31zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_objectz00_bglt
		BGl_allocatezd2instancezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62securityzd2exceptionzb0_bglt
		BGl_z62securityzd2exceptionzd2nilz62zz__objectz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long,
		char *);
	static obj_t BGl__z52objectzd2wideningz80zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2readzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2readzd2errorze2zz__objectz00();
	static obj_t BGl__makezd2z62warningzb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__objectzd2printzd2zz__objectz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_objectz00_bglt,
		obj_t);
	static obj_t BGl__classzd2fieldszd2zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2nilzb0zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_z52allocatezd2z62iozd2unknownzd2hostzd2errorz30zz__objectz00();
	static obj_t BGl__fillzd2z62iozd2timeoutzd2errorz12za2zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z62iozd2portzd2errorzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z62errorzf3z91zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classzd2abstractzf3z21zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_makezd2z62iozd2unknownzd2hostzd2errorz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__classzd2fieldzd2lenzd2accessorzd2zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__z62iozd2parsezd2errorzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__objectz00();
	static obj_t BGl__classzd2hashzd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2portzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2portzd2errorze2zz__objectz00();
	BGL_EXPORTED_DECL obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt,
		obj_t);
	static obj_t
		BGl__fillzd2z62iozd2unknownzd2hostzd2errorz12z70zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62iozd2closedzd2errorzf3z91zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_objectzf3zf3zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2writezd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2writezd2errorze2zz__objectz00();
	static obj_t BGl__z52allocatezd2objectz80zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2z62iozd2sigpipezd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2nozd2defaultzd2behaviorzd2zz__objectz00(obj_t);
	static obj_t BGl__makezd2z62iozd2errorz62zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62proc2476z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62iozd2t2480z53zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2classzd2numzd2setz12zc0zz__objectz00(BgL_objectz00_bglt, long);
	static obj_t BGl__z52allocatezd2z62conditionze2zz__objectz00(obj_t);
	static obj_t BGl__findzd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2z62iozd2parsezd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00 =
		BUNSPEC;
	static obj_t BGl__z52allocatezd2z62evalzd2warningz30zz__objectz00(obj_t);
	static obj_t
		BGl__z62accesszd2controlzd2exceptionzd2permissionzb0zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__fillzd2z62iozd2errorz12z70zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62acce2468z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__z62conditionzd2nilzb0zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62errorz62_bglt
		BGl_z52allocatezd2z62errorze2zz__objectz00();
	static obj_t BGl__classzd2numzd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_objectz00_bglt BGl_makezd2objectzd2zz__objectz00();
	static obj_t BGl__makezd2z62evalzd2warningz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_za2genericsza2z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62processzd2exceptionzb0_bglt
		BGl_makezd2z62processzd2exceptionz62zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static long BGl_za2nbzd2genericszd2maxza2z00zz__objectz00;
	extern obj_t bgl_reverse(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t);
	static obj_t BGl__classzd2subclasseszd2zz__objectz00(obj_t, obj_t);
	static obj_t BGl__fillzd2z62typezd2errorz12z70zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2writezd2errorz62_bglt
		BGl_fillzd2z62iozd2writezd2errorz12za2zz__objectz00
		(BgL_z62iozd2writezd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_objectzd2ze3structzd2defau2442ze3zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2z62conditionzd2nilz30zz__objectz00 = BUNSPEC;
	extern obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	static bool_t BGl_genericszd2addzd2classz12z12zz__objectz00(long, long);
	BGL_EXPORTED_DECL BgL_z62exceptionz62_bglt
		BGl_z52allocatezd2z62exceptionze2zz__objectz00();
	static obj_t BGl__fillzd2z62errorz12za2zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62conditionz62_bglt
		BGl_makezd2z62conditionzb0zz__objectz00();
	BGL_EXPORTED_DECL BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl__classzd2constructorzd2zz__objectz00(obj_t, obj_t);
	static obj_t BGl__classzd2virtualzd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62typezd2errorzb0_bglt
		BGl_makezd2z62typezd2errorz62zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__z62warningzd2nilzb0zz__objectz00(obj_t);
	static obj_t BGl__z62iozd2errorzf3z43zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_objectzd2printzd2zz__objectz00(BgL_objectz00_bglt,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldszd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2closedzd2errorz62_bglt
		BGl_z62iozd2closedzd2errorzd2nilzb0zz__objectz00();
	static obj_t BGl_objectzd2ze3structzd2z62iozd2c2504z53zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62warningz62_bglt
		BGl_makezd2z62warningzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__classzd2fieldszf3z21zz__objectz00(obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62conditionzf3z91zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62exceptionz62_bglt
		BGl_z62exceptionzd2nilzb0zz__objectz00();
	extern obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2infoz00zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2readzd2errorz62_bglt
		BGl_fillzd2z62iozd2readzd2errorz12za2zz__objectz00
		(BgL_z62iozd2readzd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__classzf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62typezd2errorzb0zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62evalzd2warningzb0_bglt
		BGl_z62evalzd2warningzd2nilz62zz__objectz00();
	BGL_EXPORTED_DECL obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__classzd2fieldzd2accessorz00zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_fillzd2z62iozd2timeoutzd2errorz12za2zz__objectz00
		(BgL_z62iozd2timeoutzd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl__z52allocatezd2z62securityzd2exceptionz30zz__objectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl__genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__objectzd2writezd2default2440z00zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2z62exceptionze2zz__objectz00(obj_t);
	static obj_t BGl__z62iozd2portzd2errorzd2nilzb0zz__objectz00(obj_t);
	static obj_t BGl__z62iozd2errorzd2nilz62zz__objectz00(obj_t);
	static obj_t BGl__classzd2abstractzf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl__classzd2evdatazd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62errorz62_bglt BGl_z62errorzd2nilzb0zz__objectz00();
	BGL_EXPORTED_DECL BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_z62iozd2sigpipezd2errorzd2nilzb0zz__objectz00();
	BGL_EXPORTED_DECL long bgl_types_number();
	static obj_t BGl__callzd2nextzd2virtualzd2setterzd2zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62secu2472z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__fillzd2z62conditionz12za2zz__objectz00(obj_t, obj_t);
	extern obj_t create_vector_uncollectable(int);
	static obj_t BGl__bigloozd2typeszd2numberz00zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62evalzd2warningzb0_bglt
		BGl_makezd2z62evalzd2warningz62zz__objectz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__classzd2allzd2fieldsz00zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z62errorzd2proczb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z62iozd2closedzd2errorzd2nilzb0zz__objectz00(obj_t);
	static obj_t BGl__classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl__classzd2fieldzd2namez00zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_z62exceptionzf3z91zz__objectz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62iozd2m2488z53zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__callzd2nextzd2virtualzd2getterzd2zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__allocatezd2instancezd2zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z62iozd2timeoutzd2errorzd2nilzb0zz__objectz00(obj_t);
	static obj_t BGl_za2classzd2keyza2zd2zz__objectz00 = BUNSPEC;
	static obj_t BGl__fillzd2z62iozd2readzd2errorz12za2zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2z62warningze2zz__objectz00(obj_t);
	static obj_t BGl_doublezd2vectorzd2zz__objectz00(obj_t, obj_t);
	static obj_t BGl__exceptionzd2notifyzd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62evalzd2warningzb0_bglt
		BGl_z52allocatezd2z62evalzd2warningz30zz__objectz00();
	static obj_t BGl__makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__objectzd2printzd2default2449z00zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__z62evalzd2warningzf3z43zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z62exceptionzd2stackzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32754ze3z83zz__objectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62conditionz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62exceptionz62_bglt
		BGl_makezd2z62exceptionzb0zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_z62iozd2malformedzd2urlzd2errorzd2nilz62zz__objectz00();
	BGL_EXPORTED_DECL BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_z62iozd2filezd2notzd2foundzd2errorzd2nilzb0zz__objectz00();
	static obj_t BGl__z62iozd2closedzd2errorzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl__classzd2namezd2zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
	static bool_t
		BGl_objectzd2equalzf3zd2defaul2451zf3zz__objectz00(BgL_objectz00_bglt,
		BgL_objectz00_bglt);
	BGL_EXPORTED_DECL BgL_z62errorz62_bglt
		BGl_fillzd2z62errorz12za2zz__objectz00(BgL_z62errorz62_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2z62iozd2malformedzd2urlzd2errorz30zz__objectz00(obj_t);
	static obj_t BGl__fillzd2z62exceptionz12za2zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__z62iozd2readzd2errorzd2nilzb0zz__objectz00(obj_t);
	static obj_t
		BGl__fillzd2z62accesszd2controlzd2exceptionz12za2zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2errorzb0_bglt
		BGl_makezd2z62iozd2errorz62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static bool_t BGl_loopz00zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62iozd2r2512z53zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62warningz62_bglt
		BGl_z62warningzd2nilzb0zz__objectz00();
	static obj_t BGl__procedurezd2ze3genericz31zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62processzd2exceptionzb0zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2virtualzd2zz__objectz00(obj_t);
	static obj_t BGl__z62securityzd2exceptionzd2messagez62zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2errorzb0zz__objectz00 = BUNSPEC;
	static obj_t BGl__makezd2z62iozd2closedzd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__genericzd2addzd2evalzd2methodz12zc0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2z62warningz12za2zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__z62iozd2writezd2errorzf3z91zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_fillzd2z62iozd2filezd2notzd2foundzd2errorz12za2zz__objectz00
		(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_objectz00_bglt BGl_objectzd2nilzd2zz__objectz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classzd2fieldszf3z21zz__objectz00(obj_t);
	extern obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, int);
	BGL_EXPORTED_DECL BgL_z62conditionz62_bglt
		BGl_z62conditionzd2nilzb0zz__objectz00();
	static obj_t BGl__makezd2z62conditionzb0zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2portzd2errorz62_bglt
		BGl_z62iozd2portzd2errorzd2nilzb0zz__objectz00();
	BGL_EXPORTED_DEF obj_t BGl_za2classesza2z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2z62iozd2w2508z53zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62exce2536z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__z62iozd2malformedzd2urlzd2errorzf3z43zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_z62accesszd2controlzd2exceptionzd2nilzb0zz__objectz00();
	static obj_t
		BGl_z52thezd2z62iozd2malformedzd2urlzd2errorzd2nilze2zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_z52thezd2z62evalzd2warningzd2nilze2zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt, int, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2portzd2errorz62_bglt
		BGl_fillzd2z62iozd2portzd2errorz12za2zz__objectz00
		(BgL_z62iozd2portzd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2arrayzd2setz12z12zz__objectz00(obj_t, obj_t, long,
		obj_t);
	static obj_t BGl_makezd2methodzd2arrayz00zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2evdatazd2zz__objectz00(obj_t);
	static obj_t BGl__callzd2virtualzd2setterz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2errorzb0_bglt
		BGl_z62iozd2errorzd2nilz62zz__objectz00();
	static obj_t BGl_za2nbzd2classesza2zd2zz__objectz00 = BUNSPEC;
	static obj_t BGl_z52thezd2z62iozd2writezd2errorzd2nilz30zz__objectz00 =
		BUNSPEC;
	static obj_t BGl__classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_classzd2hashzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2methodzd2zz__objectz00(BgL_objectz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt, int);
	BGL_EXPORTED_DECL BgL_z62warningz62_bglt
		BGl_z52allocatezd2z62warningze2zz__objectz00();
	static obj_t BGl__objectzd2hashnumberzd2de2447z00zz__objectz00(obj_t, obj_t);
	static obj_t BGl__callzd2virtualzd2getterz00zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62warningzf3z91zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_z52allocatezd2z62indexzd2outzd2ofzd2boundszd2errorze2zz__objectz00();
	static bool_t BGl_doublezd2nbzd2classesz12z12zz__objectz00();
	static obj_t BGl__z62typezd2errorzf3z43zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62securityzd2exceptionzb0_bglt
		BGl_makezd2z62securityzd2exceptionz62zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	static long BGl_za2nbzd2genericsza2zd2zz__objectz00;
	static obj_t BGl__findzd2classzd2zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62exceptionz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_genericzd2methodzd2arrayz00zz__objectz00(obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_symbol4242z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2z62iozd2f2500z53zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2z62iozd2sigpipezd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__findzd2superzd2classzd2methodzd2zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2readzd2errorz62_bglt
		BGl_z62iozd2readzd2errorzd2nilzb0zz__objectz00();
	static obj_t
		BGl__z52allocatezd2z62accesszd2controlzd2exceptionze2zz__objectz00(obj_t);
	static obj_t BGl__fillzd2z62iozd2portzd2errorz12za2zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2fieldzd2lenzd2accessorzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62warningz62zz__objectz00 = BUNSPEC;
	static obj_t BGl__z62evalzd2warningzd2nilz62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_procedurezd2ze3genericz31zz__objectz00(obj_t);
	static obj_t BGl__fillzd2z62processzd2exceptionz12z70zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_makezd2z62iozd2sigpipezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_symbol4265z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zz__objectz00();
	static obj_t BGl_symbol4267z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_z62securityzd2exceptionzf3z43zz__objectz00(obj_t);
	static obj_t BGl_symbol4268z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4270z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4272z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__objectzd2classzd2numz00zz__objectz00(obj_t, obj_t);
	static obj_t BGl_symbol4274z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_methodzd2arrayzd2refz00zz__objectz00(obj_t, obj_t,
		int);
	static obj_t BGl_symbol4276z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4278z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_z62processzd2exceptionzf3z43zz__objectz00(obj_t);
	static obj_t BGl__makezd2z62iozd2timeoutzd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_iszd2nilzf3z21zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__classzd2fieldzd2typez00zz__objectz00(obj_t, obj_t);
	static obj_t BGl__z62processzd2exceptionzf3z43zz__objectz00(obj_t, obj_t);
	static obj_t BGl__makezd2z62exceptionzb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2filezd2notzd2foundzd2errorze2zz__objectz00();
	static obj_t BGl__fillzd2z62iozd2parsezd2errorz12za2zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2objectzd2zz__objectz00(obj_t);
	static obj_t BGl_zc3anonymousza32776ze3z83zz__objectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2readzd2errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4312z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4313z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32641ze3z83zz__objectz00(obj_t);
	static obj_t BGl_symbol4315z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__objectzd2displayzd2defau2437z00zz__objectz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_makezd2z62iozd2timeoutzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol4317z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__genericzd2methodzd2arrayz00zz__objectz00(obj_t, obj_t);
	static obj_t BGl_symbol4319z00zz__objectz00 = BUNSPEC;
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	static obj_t BGl_symbol4321z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4324z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4326z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2z62erro2532z81zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl__objectzd2ze3structz31zz__objectz00(obj_t, obj_t);
	static obj_t BGl_symbol4328z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2portzd2errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4330z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4332z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__z62iozd2unknownzd2hostzd2errorzf3z43zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_symbol4334z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_z62iozd2errorzf3z43zz__objectz00(obj_t);
	static obj_t BGl_symbol4336z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4338z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_z62evalzd2warningzf3z43zz__objectz00(obj_t);
	static obj_t BGl_symbol4340z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4342z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__structzb2objectzd2ze3objec2445z83zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62iozd2p2496z53zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_symbol4344z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62iozd2parsezd2errorz62_bglt
		BGl_z62iozd2parsezd2errorzd2nilzb0zz__objectz00();
	static obj_t BGl_symbol4346z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__z62securityzd2exceptionzf3z43zz__objectz00(obj_t, obj_t);
	static obj_t BGl_symbol4348z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4350z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_symbol4352z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__z62iozd2parsezd2errorzd2nilzb0zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2z62processzd2exceptionzd2nilze2zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2z62iozd2p2516z53zz__objectz00(obj_t,
		obj_t);
	static obj_t
		BGl__fillzd2z62iozd2filezd2notzd2foundzd2errorz12za2zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol4354z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__fillzd2z62securityzd2exceptionz12z70zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol4356z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4358z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4360z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4362z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2nilzd2zz__objectz00(obj_t);
	static obj_t BGl_symbol4364z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4366z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4368z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4370z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4372z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_z62typezd2errorzf3z43zz__objectz00(obj_t);
	static obj_t BGl_symbol4374z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol4376z00zz__objectz00 = BUNSPEC;
	static obj_t BGl__z62conditionzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62iozd2u2492z53zz__objectz00(obj_t,
		obj_t);
	static obj_t
		BGl__z52allocatezd2z62iozd2sigpipezd2errorze2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62warningz62_bglt
		BGl_fillzd2z62warningz12za2zz__objectz00(BgL_z62warningz62_bglt, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__objectz00();
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
	static obj_t
		BGl__z62iozd2filezd2notzd2foundzd2errorzd2nilzb0zz__objectz00(obj_t);
	static obj_t BGl__z62iozd2sigpipezd2errorzf3z91zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_z62evalzd2warningzb0zz__objectz00 = BUNSPEC;
	static long BGl_za2nbzd2classeszd2maxza2z00zz__objectz00;
	static obj_t BGl__exceptionzd2notifyzd2def2453z00zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl__makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2hashnumberzd2envz00zz__objectz00,
		BgL_bgl__objectza7d2hashnu4541za7, BGl__objectzd2hashnumberzd2zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2objectzd2envz00zz__objectz00,
		BgL_bgl__makeza7d2objectza7d4542z00, BGl__makezd2objectzd2zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62typezd2errorzf3zd2envz91zz__objectz00,
		BgL_bgl__za762typeza7d2error4543z00,
		BGl__z62typezd2errorzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2sigpipezd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762ioza7d2sigpipe4544z00,
		BGl__z62iozd2sigpipezd2errorzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2readzd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24545za7,
		BGl__makezd2z62iozd2readzd2errorzb0zz__objectz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2mutablezf3zd2envz21zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4546z00,
		BGl__classzd2fieldzd2mutablezf3zf3zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2portzd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24547za7,
		BGl__fillzd2z62iozd2portzd2errorz12za2zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2virtualzd2setterzd2envzd2zz__objectz00,
		BgL_bgl__callza7d2virtualza74548z00,
		BGl__callzd2virtualzd2setterz00zz__objectz00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z62exceptionzd2fnamezd2envz62zz__objectz00,
		BgL_bgl__za762exceptionza7d24549z00,
		BGl__z62exceptionzd2fnamezb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldszf3zd2envzf3zz__objectz00,
		BgL_bgl__classza7d2fieldsza74550z00, BGl__classzd2fieldszf3z21zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_exceptionzd2notifyzd2def2453zd2envzd2zz__objectz00,
		BgL_bgl__exceptionza7d2not4551za7,
		BGl__exceptionzd2notifyzd2def2453z00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z62errorzd2objzd2envz62zz__objectz00,
		BgL_bgl__za762errorza7d2objza74552za7, BGl__z62errorzd2objzb0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2unknownzd2hostzd2errorzf3zd2envz91zz__objectz00,
		BgL_bgl__za762ioza7d2unknown4553z00,
		BGl__z62iozd2unknownzd2hostzd2errorzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2writezd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762ioza7d2writeza7d4554za7,
		BGl__z62iozd2writezd2errorzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62typezd2errorz12zd2envza2zz__objectz00,
		BgL_bgl__fillza7d2za762typeza74555za7,
		BGl__fillzd2z62typezd2errorz12z70zz__objectz00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2unknownzd2hostzd2errorzd2envzb0zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24556za7,
		BGl__makezd2z62iozd2unknownzd2hostzd2errorz62zz__objectz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2ze3genericzd2envze3zz__objectz00,
		BgL_bgl__procedureza7d2za7e34557z00,
		BGl__procedurezd2ze3genericz31zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2numzd2envz00zz__objectz00,
		BgL_bgl__classza7d2numza7d2za74558za7, BGl__classzd2numzd2zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
		BgL_bgl__exceptionza7d2not4559za7, BGl__exceptionzd2notifyzd2zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2nextzd2virtualzd2setterzd2envz00zz__objectz00,
		BgL_bgl__callza7d2nextza7d2v4560z00,
		BGl__callzd2nextzd2virtualzd2setterzd2zz__objectz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62conditionz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762condi4561z00,
		BGl__fillzd2z62conditionz12za2zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_widezd2objectzf3zd2envzf3zz__objectz00,
		BgL_bgl__wideza7d2objectza7f4562z00, BGl__widezd2objectzf3z21zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62iozd2errorzf3zd2envz91zz__objectz00,
		BgL_bgl__za762ioza7d2errorza7f4563za7,
		BGl__z62iozd2errorzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2mutatorzd2envzd2zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4564z00,
		BGl__classzd2fieldzd2mutatorz00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z62errorzd2msgzd2envz62zz__objectz00,
		BgL_bgl__za762errorza7d2msgza74565za7, BGl__z62errorzd2msgzb0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2typeszd2numberzd2envzd2zz__objectz00,
		BgL_bgl__biglooza7d2typesza74566z00,
		BGl__bigloozd2typeszd2numberz00zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2sigpipezd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24567za7,
		BGl__makezd2z62iozd2sigpipezd2errorzb0zz__objectz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62evalzd2warningzd2nilzd2envzb0zz__objectz00,
		BgL_bgl__za762evalza7d2warni4568z00,
		BGl__z62evalzd2warningzd2nilz62zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2classzd2fieldzd2envzd2zz__objectz00,
		BgL_bgl__makeza7d2classza7d24569z00,
		BGl__makezd2classzd2fieldz00zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2virtualzd2getterzd2envzd2zz__objectz00,
		BgL_bgl__callza7d2virtualza74570z00,
		BGl__callzd2virtualzd2getterz00zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2closedzd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24571za7,
		BGl__fillzd2z62iozd2closedzd2errorz12za2zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2constructorzd2envz00zz__objectz00,
		BgL_bgl__classza7d2constru4572za7, BGl__classzd2constructorzd2zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_registerzd2classz12zd2envz12zz__objectz00,
		BgL_bgl__registerza7d2clas4573za7, BGl__registerzd2classz12zc0zz__objectz00,
		0L, BUNSPEC, 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2subclasseszd2envz00zz__objectz00,
		BgL_bgl__classza7d2subclas4574za7, BGl__classzd2subclasseszd2zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4264z00zz__objectz00,
		BgL_bgl_za7c3anonymousza7a324575z00,
		BGl_zc3anonymousza32641ze3z83zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_allocatezd2instancezd2envz00zz__objectz00,
		BgL_bgl__allocateza7d2inst4576za7, BGl__allocatezd2instancezd2zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2ze3objectzd2envze3zz__objectz00,
		BgL_bgl__structza7d2za7e3obj4577z00,
		BGl__structzd2ze3objectz31zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2timeoutzd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24578za7,
		BGl__fillzd2z62iozd2timeoutzd2errorz12za2zz__objectz00, 0L, BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2objectz12zd2envz12zz__objectz00,
		BgL_bgl__fillza7d2objectza714579z00, BGl__fillzd2objectz12zc0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62typezd2errorzd2nilzd2envzb0zz__objectz00,
		BgL_bgl__za762typeza7d2error4580z00,
		BGl__z62typezd2errorzd2nilz62zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2malformedzd2urlzd2errorz12zd2envza2zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24581za7,
		BGl__fillzd2z62iozd2malformedzd2urlzd2errorz12z70zz__objectz00, 0L, BUNSPEC,
		7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objectzd2nilzd2envz00zz__objectz00,
		BgL_bgl__objectza7d2nilza7d24582z00, BGl__objectzd2nilzd2zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62accesszd2controlzd2exceptionzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74583za7,
		BGl__z52allocatezd2z62accesszd2controlzd2exceptionze2zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62securityzd2exceptionz12zd2envza2zz__objectz00,
		BgL_bgl__fillza7d2za762secur4584z00,
		BGl__fillzd2z62securityzd2exceptionz12z70zz__objectz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2malformedzd2urlzd2errorzd2envze2zz__objectz00,
		BgL_bgl__za752allocateza7d2za74585za7,
		BGl__z52allocatezd2z62iozd2malformedzd2urlzd2errorz30zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2parsezd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24586za7,
		BGl__fillzd2z62iozd2parsezd2errorz12za2zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2parsezd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74587za7,
		BGl__z52allocatezd2z62iozd2parsezd2errorze2zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2parsezd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762ioza7d2parseza7d4588za7,
		BGl__z62iozd2parsezd2errorzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2nextzd2virtualzd2getterzd2envz00zz__objectz00,
		BgL_bgl__callza7d2nextza7d2v4589z00,
		BGl__callzd2nextzd2virtualzd2getterzd2zz__objectz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62exceptionzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762exceptionza7d24590z00,
		BGl__z62exceptionzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2timeoutzd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762ioza7d2timeout4591z00,
		BGl__z62iozd2timeoutzd2errorzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2abstractzf3zd2envzf3zz__objectz00,
		BgL_bgl__classza7d2abstrac4592za7, BGl__classzd2abstractzf3z21zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genericzd2addzd2evalzd2methodz12zd2envz12zz__objectz00,
		BgL_bgl__genericza7d2addza7d4593z00,
		BGl__genericzd2addzd2evalzd2methodz12zc0zz__objectz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string4230z00zz__objectz00,
		BgL_bgl_string4230za700za7za7_4594za7, "Can't find class", 16);
	      DEFINE_STRING(BGl_string4229z00zz__objectz00,
		BgL_bgl_string4229za700za7za7_4595za7, "find-class", 10);
	      DEFINE_STRING(BGl_string4231z00zz__objectz00,
		BgL_bgl_string4231za700za7za7_4596za7,
		"/tmp/bigloo/runtime/Llib/object.scm", 35);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2equalzf3zd2envzf3zz__objectz00,
		BgL_bgl__objectza7d2equalza74597z00, BGl__objectzd2equalzf3z21zz__objectz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4232z00zz__objectz00,
		BgL_bgl_string4232za700za7za7_4598za7, "_find-class", 11);
	      DEFINE_STRING(BGl_string4233z00zz__objectz00,
		BgL_bgl_string4233za700za7za7_4599za7, "symbol", 6);
	      DEFINE_STRING(BGl_string4234z00zz__objectz00,
		BgL_bgl_string4234za700za7za7_4600za7, "_class-virtual", 14);
	      DEFINE_STRING(BGl_string4235z00zz__objectz00,
		BgL_bgl_string4235za700za7za7_4601za7, "vector", 6);
	      DEFINE_STRING(BGl_string4236z00zz__objectz00,
		BgL_bgl_string4236za700za7za7_4602za7, "class-fields", 12);
	      DEFINE_STRING(BGl_string4237z00zz__objectz00,
		BgL_bgl_string4237za700za7za7_4603za7, "runtime type error", 18);
	      DEFINE_STRING(BGl_string4238z00zz__objectz00,
		BgL_bgl_string4238za700za7za7_4604za7, "class", 5);
	      DEFINE_STRING(BGl_string4240z00zz__objectz00,
		BgL_bgl_string4240za700za7za7_4605za7, "Not a class field", 17);
	      DEFINE_STRING(BGl_string4239z00zz__objectz00,
		BgL_bgl_string4239za700za7za7_4606za7, "class-field-name", 16);
	      DEFINE_STRING(BGl_string4241z00zz__objectz00,
		BgL_bgl_string4241za700za7za7_4607za7, "_find-class-field", 17);
	      DEFINE_STRING(BGl_string4243z00zz__objectz00,
		BgL_bgl_string4243za700za7za7_4608za7, "obj", 3);
	      DEFINE_STRING(BGl_string4244z00zz__objectz00,
		BgL_bgl_string4244za700za7za7_4609za7, "_make-class-field", 17);
	      DEFINE_STRING(BGl_string4245z00zz__objectz00,
		BgL_bgl_string4245za700za7za7_4610za7, "class-field-indexed?", 20);
	      DEFINE_STRING(BGl_string4246z00zz__objectz00,
		BgL_bgl_string4246za700za7za7_4611za7, "class-field-virtual?", 20);
	      DEFINE_STRING(BGl_string4247z00zz__objectz00,
		BgL_bgl_string4247za700za7za7_4612za7, "class-field-accessor", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2errorz12zd2envza2zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24613za7,
		BGl__fillzd2z62iozd2errorz12z70zz__objectz00, 0L, BUNSPEC, 7);
	      DEFINE_STRING(BGl_string4248z00zz__objectz00,
		BgL_bgl_string4248za700za7za7_4614za7, "class-field-mutable?", 20);
	      DEFINE_STRING(BGl_string4250z00zz__objectz00,
		BgL_bgl_string4250za700za7za7_4615za7, "class-field-len-accessor", 24);
	      DEFINE_STRING(BGl_string4249z00zz__objectz00,
		BgL_bgl_string4249za700za7za7_4616za7, "class-field-mutator", 19);
	      DEFINE_STRING(BGl_string4251z00zz__objectz00,
		BgL_bgl_string4251za700za7za7_4617za7, "class-field-info", 16);
	      DEFINE_STRING(BGl_string4252z00zz__objectz00,
		BgL_bgl_string4252za700za7za7_4618za7, "class-field-default-value", 25);
	      DEFINE_STRING(BGl_string4253z00zz__objectz00,
		BgL_bgl_string4253za700za7za7_4619za7, "class-field-type", 16);
	      DEFINE_STRING(BGl_string4254z00zz__objectz00,
		BgL_bgl_string4254za700za7za7_4620za7, "_object-class-num", 17);
	      DEFINE_STRING(BGl_string4255z00zz__objectz00,
		BgL_bgl_string4255za700za7za7_4621za7, "object", 6);
	      DEFINE_STRING(BGl_string4256z00zz__objectz00,
		BgL_bgl_string4256za700za7za7_4622za7, "_object-class-num-set!", 22);
	      DEFINE_STRING(BGl_string4257z00zz__objectz00,
		BgL_bgl_string4257za700za7za7_4623za7, "long", 4);
	      DEFINE_STRING(BGl_string4258z00zz__objectz00,
		BgL_bgl_string4258za700za7za7_4624za7, "_object-class", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2indexedzf3zd2envz21zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4625z00,
		BGl__classzd2fieldzd2indexedzf3zf3zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4260z00zz__objectz00,
		BgL_bgl_string4260za700za7za7_4626za7, "procedure", 9);
	      DEFINE_STRING(BGl_string4259z00zz__objectz00,
		BgL_bgl_string4259za700za7za7_4627za7, "_generic-default", 16);
	      DEFINE_STRING(BGl_string4261z00zz__objectz00,
		BgL_bgl_string4261za700za7za7_4628za7, "_generic-method-array", 21);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genericzd2nozd2defaultzd2behaviorzd2envz00zz__objectz00,
		BgL_bgl__genericza7d2noza7d24629z00, va_generic_entry,
		BGl__genericzd2nozd2defaultzd2behaviorzd2zz__objectz00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string4262z00zz__objectz00,
		BgL_bgl_string4262za700za7za7_4630za7, "_method-array-ref", 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_genericzd2defaultzd2envz00zz__objectz00,
		BgL_bgl__genericza7d2defau4631za7, BGl__genericzd2defaultzd2zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4263z00zz__objectz00,
		BgL_bgl_string4263za700za7za7_4632za7, "int", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2z62exceptionzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762excep4633z00,
		BGl__makezd2z62exceptionzb0zz__objectz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4448z00zz__objectz00,
		BgL_bgl_exceptionza7d2noti4634za7,
		BGl_exceptionzd2notifyzd2z62er2456z62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4450z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4635z00,
		BGl_objectzd2ze3structzd2z62eval2460z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4449z00zz__objectz00,
		BgL_bgl_exceptionza7d2noti4636za7,
		BGl_exceptionzd2notifyzd2z62wa2458z62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4266z00zz__objectz00,
		BgL_bgl_string4266za700za7za7_4637za7, "generic", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4452z00zz__objectz00,
		BgL_bgl_structza7b2objectza74638z00,
		BGl_structzb2objectzd2ze3objec2462z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4269z00zz__objectz00,
		BgL_bgl_string4269za700za7za7_4639za7, "mtable-size", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4454z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4640z00,
		BGl_objectzd2ze3structzd2z62warn2464z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4271z00zz__objectz00,
		BgL_bgl_string4271za700za7za7_4641za7, "method-array-size", 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4455z00zz__objectz00,
		BgL_bgl_structza7b2objectza74642z00,
		BGl_structzb2objectzd2ze3objec2466z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4456z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4643z00,
		BGl_objectzd2ze3structzd2z62acce2468z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4273z00zz__objectz00,
		BgL_bgl_string4273za700za7za7_4644za7, "generic-bucket-size", 19);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4457z00zz__objectz00,
		BgL_bgl_structza7b2objectza74645z00,
		BGl_structzb2objectzd2ze3objec2470z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4458z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4646z00,
		BGl_objectzd2ze3structzd2z62secu2472z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4275z00zz__objectz00,
		BgL_bgl_string4275za700za7za7_4647za7, "max-class", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4460z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4648z00,
		BGl_objectzd2ze3structzd2z62proc2476z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4459z00zz__objectz00,
		BgL_bgl_structza7b2objectza74649z00,
		BGl_structzb2objectzd2ze3objec2474z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4461z00zz__objectz00,
		BgL_bgl_structza7b2objectza74650z00,
		BGl_structzb2objectzd2ze3objec2478z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4277z00zz__objectz00,
		BgL_bgl_string4277za700za7za7_4651za7, "max-generic", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4462z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4652z00,
		BGl_objectzd2ze3structzd2z62iozd2t2480z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4463z00zz__objectz00,
		BgL_bgl_structza7b2objectza74653z00,
		BGl_structzb2objectzd2ze3objec2482z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4280z00zz__objectz00,
		BgL_bgl_string4280za700za7za7_4654za7, "_register-class!", 16);
	      DEFINE_STRING(BGl_string4279z00zz__objectz00,
		BgL_bgl_string4279za700za7za7_4655za7, "slot-no-default-value__17_5_1996",
		32);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4464z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4656z00,
		BGl_objectzd2ze3structzd2z62iozd2s2484z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4281z00zz__objectz00,
		BgL_bgl_string4281za700za7za7_4657za7, "add-class!", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4465z00zz__objectz00,
		BgL_bgl_structza7b2objectza74658z00,
		BGl_structzb2objectzd2ze3objec2486z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4282z00zz__objectz00,
		BgL_bgl_string4282za700za7za7_4659za7, "Illegal super class for class", 29);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4466z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4660z00,
		BGl_objectzd2ze3structzd2z62iozd2m2488z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4283z00zz__objectz00,
		BgL_bgl_string4283za700za7za7_4661za7,
		"unoptimal bigloo-generic-bucket-size: ", 38);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4467z00zz__objectz00,
		BgL_bgl_structza7b2objectza74662z00,
		BGl_structzb2objectzd2ze3objec2490z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4284z00zz__objectz00,
		BgL_bgl_string4284za700za7za7_4663za7, "make-method-array", 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4468z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4664z00,
		BGl_objectzd2ze3structzd2z62iozd2u2492z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4285z00zz__objectz00,
		BgL_bgl_string4285za700za7za7_4665za7, "No default behavior", 19);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4470z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4666z00,
		BGl_objectzd2ze3structzd2z62iozd2p2496z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4469z00zz__objectz00,
		BgL_bgl_structza7b2objectza74667z00,
		BGl_structzb2objectzd2ze3objec2494z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4286z00zz__objectz00,
		BgL_bgl_string4286za700za7za7_4668za7, "_procedure->generic", 19);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4471z00zz__objectz00,
		BgL_bgl_structza7b2objectza74669z00,
		BGl_structzb2objectzd2ze3objec2498z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4287z00zz__objectz00,
		BgL_bgl_string4287za700za7za7_4670za7, "_register-generic!", 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4472z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4671z00,
		BGl_objectzd2ze3structzd2z62iozd2f2500z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4288z00zz__objectz00,
		BgL_bgl_string4288za700za7za7_4672za7, "", 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_objectzd2classzd2numzd2envzd2zz__objectz00,
		BgL_bgl__objectza7d2classza74673z00,
		BGl__objectzd2classzd2numz00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4473z00zz__objectz00,
		BgL_bgl_structza7b2objectza74674z00,
		BGl_structzb2objectzd2ze3objec2502z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4300z00zz__objectz00,
		BgL_bgl_string4300za700za7za7_4675za7, "Cannot renumber class hierarchy",
		31);
	      DEFINE_STRING(BGl_string4290z00zz__objectz00,
		BgL_bgl_string4290za700za7za7_4676za7, "Illegal class for method", 24);
	      DEFINE_STRING(BGl_string4289z00zz__objectz00,
		BgL_bgl_string4289za700za7za7_4677za7, "method/generic arity mismatch", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2methodzd2fromzd2envzd2zz__objectz00,
		BgL_bgl__findza7d2methodza7d4678z00,
		BGl__findzd2methodzd2fromz00zz__objectz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4474z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4679z00,
		BGl_objectzd2ze3structzd2z62iozd2c2504z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4301z00zz__objectz00,
		BgL_bgl_string4301za700za7za7_4680za7, "_struct->object", 15);
	      DEFINE_STRING(BGl_string4291z00zz__objectz00,
		BgL_bgl_string4291za700za7za7_4681za7, "_generic-add-method!", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4475z00zz__objectz00,
		BgL_bgl_structza7b2objectza74682z00,
		BGl_structzb2objectzd2ze3objec2506z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4302z00zz__objectz00,
		BgL_bgl_string4302za700za7za7_4683za7, "struct", 6);
	      DEFINE_STRING(BGl_string4292z00zz__objectz00,
		BgL_bgl_string4292za700za7za7_4684za7, "_generic-add-eval-method!", 25);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4476z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4685z00,
		BGl_objectzd2ze3structzd2z62iozd2w2508z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4303z00zz__objectz00,
		BgL_bgl_string4303za700za7za7_4686za7, "allocate-instance", 17);
	      DEFINE_STRING(BGl_string4293z00zz__objectz00,
		BgL_bgl_string4293za700za7za7_4687za7, "_find-method", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4477z00zz__objectz00,
		BgL_bgl_structza7b2objectza74688z00,
		BGl_structzb2objectzd2ze3objec2510z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4304z00zz__objectz00,
		BgL_bgl_string4304za700za7za7_4689za7, "_allocate-instance", 18);
	      DEFINE_STRING(BGl_string4294z00zz__objectz00,
		BgL_bgl_string4294za700za7za7_4690za7, "_find-super-class-method", 24);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4478z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4691z00,
		BGl_objectzd2ze3structzd2z62iozd2r2512z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4305z00zz__objectz00,
		BgL_bgl_string4305za700za7za7_4692za7, "_wide-object?", 13);
	      DEFINE_STRING(BGl_string4295z00zz__objectz00,
		BgL_bgl_string4295za700za7za7_4693za7, "_find-method-from", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2nozd2defaultzd2valuezd2envzd2zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4694z00,
		BGl__classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4480z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4695z00,
		BGl_objectzd2ze3structzd2z62iozd2p2516z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4479z00zz__objectz00,
		BgL_bgl_structza7b2objectza74696z00,
		BGl_structzb2objectzd2ze3objec2514z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4306z00zz__objectz00,
		BgL_bgl_string4306za700za7za7_4697za7, "_call-virtual-getter", 20);
	      DEFINE_STRING(BGl_string4296z00zz__objectz00,
		BgL_bgl_string4296za700za7za7_4698za7, "_is-nil?", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4481z00zz__objectz00,
		BgL_bgl_structza7b2objectza74699z00,
		BGl_structzb2objectzd2ze3objec2518z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4307z00zz__objectz00,
		BgL_bgl_string4307za700za7za7_4700za7, "_call-virtual-setter", 20);
	      DEFINE_STRING(BGl_string4297z00zz__objectz00,
		BgL_bgl_string4297za700za7za7_4701za7, "class-hierarchy-numbering", 25);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4482z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4702z00,
		BGl_objectzd2ze3structzd2z62iozd2e2520z53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4308z00zz__objectz00,
		BgL_bgl_string4308za700za7za7_4703za7, "_call-next-virtual-getter", 25);
	      DEFINE_STRING(BGl_string4298z00zz__objectz00,
		BgL_bgl_string4298za700za7za7_4704za7,
		"Cannot allocate fresh positive number for class", 47);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4483z00zz__objectz00,
		BgL_bgl_structza7b2objectza74705z00,
		BGl_structzb2objectzd2ze3objec2522z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4310z00zz__objectz00,
		BgL_bgl_string4310za700za7za7_4706za7, "_%object-widening", 17);
	      DEFINE_STRING(BGl_string4309z00zz__objectz00,
		BgL_bgl_string4309za700za7za7_4707za7, "_call-next-virtual-setter", 25);
	      DEFINE_STRING(BGl_string4299z00zz__objectz00,
		BgL_bgl_string4299za700za7za7_4708za7, "class-hierarchy-up-renumber!", 28);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4484z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4709z00,
		BGl_objectzd2ze3structzd2z62inde2524z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4311z00zz__objectz00,
		BgL_bgl_string4311za700za7za7_4710za7, "_%object-widening-set!", 22);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4485z00zz__objectz00,
		BgL_bgl_structza7b2objectza74711z00,
		BGl_structzb2objectzd2ze3objec2526z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4486z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4712z00,
		BGl_objectzd2ze3structzd2z62type2528z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2classzd2envz00zz__objectz00,
		BgL_bgl__findza7d2classza7d24713z00, BGl__findzd2classzd2zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4487z00zz__objectz00,
		BgL_bgl_structza7b2objectza74714z00,
		BGl_structzb2objectzd2ze3objec2530z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4314z00zz__objectz00,
		BgL_bgl_string4314za700za7za7_4715za7, "&condition", 10);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_objectzd2equalzf3zd2defaul2451zd2envz21zz__objectz00,
		BgL_bgl__objectza7d2equalza74716z00,
		BGl__objectzd2equalzf3zd2defaul2451zf3zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2z62errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762error4717z00,
		BGl__fillzd2z62errorz12za2zz__objectz00, 0L, BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4488z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4718z00,
		BGl_objectzd2ze3structzd2z62erro2532z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4490z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4719z00,
		BGl_objectzd2ze3structzd2z62exce2536z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4489z00zz__objectz00,
		BgL_bgl_structza7b2objectza74720z00,
		BGl_structzb2objectzd2ze3objec2534z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4316z00zz__objectz00,
		BgL_bgl_string4316za700za7za7_4721za7, "&exception", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4491z00zz__objectz00,
		BgL_bgl_structza7b2objectza74722z00,
		BGl_structzb2objectzd2ze3objec2538z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4492z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4723z00,
		BGl_objectzd2ze3structzd2z62cond2540z81zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4318z00zz__objectz00,
		BgL_bgl_string4318za700za7za7_4724za7, "fname", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4493z00zz__objectz00,
		BgL_bgl_structza7b2objectza74725z00,
		BGl_structzb2objectzd2ze3objec2542z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4320z00zz__objectz00,
		BgL_bgl_string4320za700za7za7_4726za7, "location", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4494z00zz__objectz00,
		BgL_bgl_objectza7d2za7e3stru4727z00,
		BGl_objectzd2ze3structzd2objec2544ze3zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4495z00zz__objectz00,
		BgL_bgl_structza7b2objectza74728z00,
		BGl_structzb2objectzd2ze3objec2546z83zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4322z00zz__objectz00,
		BgL_bgl_string4322za700za7za7_4729za7, "stack", 5);
	      DEFINE_STRING(BGl_string4325z00zz__objectz00,
		BgL_bgl_string4325za700za7za7_4730za7, "get-trace-stack", 15);
	      DEFINE_STRING(BGl_string4327z00zz__objectz00,
		BgL_bgl_string4327za700za7za7_4731za7, "&error", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62securityzd2exceptionzf3zd2envz91zz__objectz00,
		BgL_bgl__za762securityza7d2e4732z00,
		BGl__z62securityzd2exceptionzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4329z00zz__objectz00,
		BgL_bgl_string4329za700za7za7_4733za7, "proc", 4);
	      DEFINE_STRING(BGl_string4331z00zz__objectz00,
		BgL_bgl_string4331za700za7za7_4734za7, "msg", 3);
	      DEFINE_STRING(BGl_string4333z00zz__objectz00,
		BgL_bgl_string4333za700za7za7_4735za7, "&type-error", 11);
	      DEFINE_STRING(BGl_string4335z00zz__objectz00,
		BgL_bgl_string4335za700za7za7_4736za7, "type", 4);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2printzd2envz00zz__objectz00,
		BgL_bgl__objectza7d2printza74737z00, BGl__objectzd2printzd2zz__objectz00,
		0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string4337z00zz__objectz00,
		BgL_bgl_string4337za700za7za7_4738za7, "&index-out-of-bounds-error", 26);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2evdatazd2setz12zd2envzc0zz__objectz00,
		BgL_bgl__classza7d2evdataza74739z00,
		BGl__classzd2evdatazd2setz12z12zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62warningzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74740za7,
		BGl__z52allocatezd2z62warningze2zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4339z00zz__objectz00,
		BgL_bgl_string4339za700za7za7_4741za7, "index", 5);
	      DEFINE_STRING(BGl_string4341z00zz__objectz00,
		BgL_bgl_string4341za700za7za7_4742za7, "&io-error", 9);
	      DEFINE_STRING(BGl_string4343z00zz__objectz00,
		BgL_bgl_string4343za700za7za7_4743za7, "&io-port-error", 14);
	      DEFINE_STRING(BGl_string4345z00zz__objectz00,
		BgL_bgl_string4345za700za7za7_4744za7, "&io-read-error", 14);
	      DEFINE_STRING(BGl_string4347z00zz__objectz00,
		BgL_bgl_string4347za700za7za7_4745za7, "&io-write-error", 15);
	      DEFINE_STRING(BGl_string4349z00zz__objectz00,
		BgL_bgl_string4349za700za7za7_4746za7, "&io-closed-error", 16);
	      DEFINE_STRING(BGl_string4351z00zz__objectz00,
		BgL_bgl_string4351za700za7za7_4747za7, "&io-file-not-found-error", 24);
	      DEFINE_STRING(BGl_string4353z00zz__objectz00,
		BgL_bgl_string4353za700za7za7_4748za7, "&io-parse-error", 15);
	      DEFINE_STRING(BGl_string4355z00zz__objectz00,
		BgL_bgl_string4355za700za7za7_4749za7, "&io-unknown-host-error", 22);
	      DEFINE_STRING(BGl_string4357z00zz__objectz00,
		BgL_bgl_string4357za700za7za7_4750za7, "&io-malformed-url-error", 23);
	      DEFINE_STRING(BGl_string4359z00zz__objectz00,
		BgL_bgl_string4359za700za7za7_4751za7, "&io-sigpipe-error", 17);
	      DEFINE_STRING(BGl_string4361z00zz__objectz00,
		BgL_bgl_string4361za700za7za7_4752za7, "&io-timeout-error", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2timeoutzd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74753za7,
		BGl__z52allocatezd2z62iozd2timeoutzd2errorze2zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4363z00zz__objectz00,
		BgL_bgl_string4363za700za7za7_4754za7, "&process-exception", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62securityzd2exceptionzd2nilzd2envzb0zz__objectz00,
		BgL_bgl__za762securityza7d2e4755z00,
		BGl__z62securityzd2exceptionzd2nilz62zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4365z00zz__objectz00,
		BgL_bgl_string4365za700za7za7_4756za7, "&security-exception", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62evalzd2warningzd2envzb0zz__objectz00,
		BgL_bgl__makeza7d2za762evalza74757za7,
		BGl__makezd2z62evalzd2warningz62zz__objectz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string4367z00zz__objectz00,
		BgL_bgl_string4367za700za7za7_4758za7, "message", 7);
	      DEFINE_STRING(BGl_string4369z00zz__objectz00,
		BgL_bgl_string4369za700za7za7_4759za7, "&access-control-exception", 25);
	      DEFINE_STRING(BGl_string4371z00zz__objectz00,
		BgL_bgl_string4371za700za7za7_4760za7, "permission", 10);
	      DEFINE_STRING(BGl_string4373z00zz__objectz00,
		BgL_bgl_string4373za700za7za7_4761za7, "&warning", 8);
	      DEFINE_STRING(BGl_string4375z00zz__objectz00,
		BgL_bgl_string4375za700za7za7_4762za7, "args", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzf3zd2envz21zz__objectz00,
		BgL_bgl__classza7f3za7f3za7za7__4763z00, BGl__classzf3zf3zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4377z00zz__objectz00,
		BgL_bgl_string4377za700za7za7_4764za7, "&eval-warning", 13);
	      DEFINE_STRING(BGl_string4378z00zz__objectz00,
		BgL_bgl_string4378za700za7za7_4765za7, "_fill-&eval-warning!", 20);
	      DEFINE_STRING(BGl_string4380z00zz__objectz00,
		BgL_bgl_string4380za700za7za7_4766za7, "_&warning-args", 14);
	      DEFINE_STRING(BGl_string4379z00zz__objectz00,
		BgL_bgl_string4379za700za7za7_4767za7, "_fill-&warning!", 15);
	      DEFINE_STRING(BGl_string4381z00zz__objectz00,
		BgL_bgl_string4381za700za7za7_4768za7, "_make-&access-control-exception",
		31);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62securityzd2exceptionzd2envze2zz__objectz00,
		BgL_bgl__za752allocateza7d2za74769za7,
		BGl__z52allocatezd2z62securityzd2exceptionz30zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2indexzd2envz62zz__objectz00,
		BgL_bgl__za762indexza7d2outza74770za7,
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2indexzb0zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4382z00zz__objectz00,
		BgL_bgl_string4382za700za7za7_4771za7, "bstring", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2classzf3zd2envzf3zz__objectz00,
		BgL_bgl__evalza7d2classza7f34772z00, BGl__evalzd2classzf3z21zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4383z00zz__objectz00,
		BgL_bgl_string4383za700za7za7_4773za7, "_fill-&access-control-exception!",
		32);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2fnamezd2setz12zd2envza2zz__objectz00,
		BgL_bgl__za762exceptionza7d24774z00,
		BGl__z62exceptionzd2fnamezd2setz12z70zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4384z00zz__objectz00,
		BgL_bgl_string4384za700za7za7_4775za7, "_&access-control-exception-obj",
		30);
	      DEFINE_STRING(BGl_string4385z00zz__objectz00,
		BgL_bgl_string4385za700za7za7_4776za7,
		"_&access-control-exception-permission", 37);
	      DEFINE_STRING(BGl_string4386z00zz__objectz00,
		BgL_bgl_string4386za700za7za7_4777za7, "_make-&security-exception", 25);
	      DEFINE_STRING(BGl_string4387z00zz__objectz00,
		BgL_bgl_string4387za700za7za7_4778za7, "_fill-&security-exception!", 26);
	      DEFINE_STRING(BGl_string4388z00zz__objectz00,
		BgL_bgl_string4388za700za7za7_4779za7, "_&security-exception-message", 28);
	      DEFINE_STRING(BGl_string4400z00zz__objectz00,
		BgL_bgl_string4400za700za7za7_4780za7, "_fill-&io-error!", 16);
	      DEFINE_STRING(BGl_string4390z00zz__objectz00,
		BgL_bgl_string4390za700za7za7_4781za7, "_fill-&io-timeout-error!", 24);
	      DEFINE_STRING(BGl_string4389z00zz__objectz00,
		BgL_bgl_string4389za700za7za7_4782za7, "_fill-&process-exception!", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62processzd2exceptionzd2nilzd2envzb0zz__objectz00,
		BgL_bgl__za762processza7d2ex4783z00,
		BGl__z62processzd2exceptionzd2nilz62zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4401z00zz__objectz00,
		BgL_bgl_string4401za700za7za7_4784za7, "_fill-&index-out-of-bounds-error!",
		33);
	      DEFINE_STRING(BGl_string4391z00zz__objectz00,
		BgL_bgl_string4391za700za7za7_4785za7, "_fill-&io-sigpipe-error!", 24);
	      DEFINE_STRING(BGl_string4402z00zz__objectz00,
		BgL_bgl_string4402za700za7za7_4786za7, "_&index-out-of-bounds-error-index",
		33);
	      DEFINE_STRING(BGl_string4392z00zz__objectz00,
		BgL_bgl_string4392za700za7za7_4787za7, "_fill-&io-malformed-url-error!",
		30);
	      DEFINE_STRING(BGl_string4403z00zz__objectz00,
		BgL_bgl_string4403za700za7za7_4788za7, "_fill-&type-error!", 18);
	      DEFINE_STRING(BGl_string4393z00zz__objectz00,
		BgL_bgl_string4393za700za7za7_4789za7, "_fill-&io-unknown-host-error!", 29);
	      DEFINE_STRING(BGl_string4404z00zz__objectz00,
		BgL_bgl_string4404za700za7za7_4790za7, "_&type-error-type", 17);
	      DEFINE_STRING(BGl_string4394z00zz__objectz00,
		BgL_bgl_string4394za700za7za7_4791za7, "_fill-&io-parse-error!", 22);
	      DEFINE_STRING(BGl_string4405z00zz__objectz00,
		BgL_bgl_string4405za700za7za7_4792za7, "_fill-&error!", 13);
	      DEFINE_STRING(BGl_string4395z00zz__objectz00,
		BgL_bgl_string4395za700za7za7_4793za7, "_fill-&io-file-not-found-error!",
		31);
	      DEFINE_STRING(BGl_string4406z00zz__objectz00,
		BgL_bgl_string4406za700za7za7_4794za7, "_&error-proc", 12);
	      DEFINE_STRING(BGl_string4396z00zz__objectz00,
		BgL_bgl_string4396za700za7za7_4795za7, "_fill-&io-closed-error!", 23);
	      DEFINE_STRING(BGl_string4407z00zz__objectz00,
		BgL_bgl_string4407za700za7za7_4796za7, "_&error-msg", 11);
	      DEFINE_STRING(BGl_string4397z00zz__objectz00,
		BgL_bgl_string4397za700za7za7_4797za7, "_fill-&io-write-error!", 22);
	      DEFINE_STRING(BGl_string4408z00zz__objectz00,
		BgL_bgl_string4408za700za7za7_4798za7, "_&error-obj", 11);
	      DEFINE_STRING(BGl_string4398z00zz__objectz00,
		BgL_bgl_string4398za700za7za7_4799za7, "_fill-&io-read-error!", 21);
	      DEFINE_STRING(BGl_string4410z00zz__objectz00,
		BgL_bgl_string4410za700za7za7_4800za7, "_&exception-fname-set!", 22);
	      DEFINE_STRING(BGl_string4409z00zz__objectz00,
		BgL_bgl_string4409za700za7za7_4801za7, "_fill-&exception!", 17);
	      DEFINE_STRING(BGl_string4399z00zz__objectz00,
		BgL_bgl_string4399za700za7za7_4802za7, "_fill-&io-port-error!", 21);
	      DEFINE_STRING(BGl_string4411z00zz__objectz00,
		BgL_bgl_string4411za700za7za7_4803za7, "_&exception-fname", 17);
	      DEFINE_STRING(BGl_string4412z00zz__objectz00,
		BgL_bgl_string4412za700za7za7_4804za7, "_&exception-location-set!", 25);
	      DEFINE_STRING(BGl_string4413z00zz__objectz00,
		BgL_bgl_string4413za700za7za7_4805za7, "_&exception-location", 20);
	      DEFINE_STRING(BGl_string4414z00zz__objectz00,
		BgL_bgl_string4414za700za7za7_4806za7, "_&exception-stack-set!", 22);
	      DEFINE_STRING(BGl_string4415z00zz__objectz00,
		BgL_bgl_string4415za700za7za7_4807za7, "_&exception-stack", 17);
	      DEFINE_STRING(BGl_string4416z00zz__objectz00,
		BgL_bgl_string4416za700za7za7_4808za7, "_fill-&condition!", 17);
	      DEFINE_STRING(BGl_string4417z00zz__objectz00,
		BgL_bgl_string4417za700za7za7_4809za7, "_fill-object!", 13);
	      DEFINE_STRING(BGl_string4418z00zz__objectz00,
		BgL_bgl_string4418za700za7za7_4810za7, "object-display", 14);
	      DEFINE_STRING(BGl_string4420z00zz__objectz00,
		BgL_bgl_string4420za700za7za7_4811za7, "object->struct", 14);
	      DEFINE_STRING(BGl_string4419z00zz__objectz00,
		BgL_bgl_string4419za700za7za7_4812za7, "object-write", 12);
	      DEFINE_STRING(BGl_string4421z00zz__objectz00,
		BgL_bgl_string4421za700za7za7_4813za7, "struct+object->object", 21);
	      DEFINE_STRING(BGl_string4422z00zz__objectz00,
		BgL_bgl_string4422za700za7za7_4814za7, "object-hashnumber", 17);
	      DEFINE_STRING(BGl_string4423z00zz__objectz00,
		BgL_bgl_string4423za700za7za7_4815za7, "object-print", 12);
	      DEFINE_STRING(BGl_string4424z00zz__objectz00,
		BgL_bgl_string4424za700za7za7_4816za7, "object-equal?", 13);
	      DEFINE_STRING(BGl_string4425z00zz__objectz00,
		BgL_bgl_string4425za700za7za7_4817za7, "exception-notify", 16);
	      DEFINE_STRING(BGl_string4426z00zz__objectz00,
		BgL_bgl_string4426za700za7za7_4818za7, "_object-display", 15);
	      DEFINE_STRING(BGl_string4427z00zz__objectz00,
		BgL_bgl_string4427za700za7za7_4819za7, "_object-display-defau2437", 25);
	      DEFINE_STRING(BGl_string4428z00zz__objectz00,
		BgL_bgl_string4428za700za7za7_4820za7, "_object-write", 13);
	      DEFINE_STRING(BGl_string4430z00zz__objectz00,
		BgL_bgl_string4430za700za7za7_4821za7, "_object->struct", 15);
	      DEFINE_STRING(BGl_string4429z00zz__objectz00,
		BgL_bgl_string4429za700za7za7_4822za7, "_object-write-default2440", 25);
	      DEFINE_STRING(BGl_string4431z00zz__objectz00,
		BgL_bgl_string4431za700za7za7_4823za7, "This object can't be converted",
		30);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62securityzd2exceptionzd2envzb0zz__objectz00,
		BgL_bgl__makeza7d2za762secur4824z00,
		BGl__makezd2z62securityzd2exceptionz62zz__objectz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string4432z00zz__objectz00,
		BgL_bgl_string4432za700za7za7_4825za7, "_object->struct-defau2442", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldzd2typezd2envzd2zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4826z00,
		BGl__classzd2fieldzd2typez00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4433z00zz__objectz00,
		BgL_bgl_string4433za700za7za7_4827za7, "_struct+object->object", 22);
	      DEFINE_STRING(BGl_string4434z00zz__objectz00,
		BgL_bgl_string4434za700za7za7_4828za7, "This structure can't be converted",
		33);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2z62conditionzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762condi4829z00,
		BGl__makezd2z62conditionzb0zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4435z00zz__objectz00,
		BgL_bgl_string4435za700za7za7_4830za7, "_struct+object->objec2445", 25);
	      DEFINE_STRING(BGl_string4436z00zz__objectz00,
		BgL_bgl_string4436za700za7za7_4831za7, "_object-hashnumber", 18);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62accesszd2controlzd2exceptionzd2objzd2envz62zz__objectz00,
		BgL_bgl__za762accessza7d2con4832z00,
		BGl__z62accesszd2controlzd2exceptionzd2objzb0zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2stackzd2setz12zd2envza2zz__objectz00,
		BgL_bgl__za762exceptionza7d24833z00,
		BGl__z62exceptionzd2stackzd2setz12z70zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4437z00zz__objectz00,
		BgL_bgl_string4437za700za7za7_4834za7, "_object-hashnumber-de2447", 25);
	      DEFINE_STRING(BGl_string4438z00zz__objectz00,
		BgL_bgl_string4438za700za7za7_4835za7, "_object-print", 13);
	      DEFINE_STRING(BGl_string4440z00zz__objectz00,
		BgL_bgl_string4440za700za7za7_4836za7, " [", 2);
	      DEFINE_STRING(BGl_string4439z00zz__objectz00,
		BgL_bgl_string4439za700za7za7_4837za7, "output-port", 11);
	      DEFINE_STRING(BGl_string4441z00zz__objectz00,
		BgL_bgl_string4441za700za7za7_4838za7, "#|", 2);
	      DEFINE_STRING(BGl_string4442z00zz__objectz00,
		BgL_bgl_string4442za700za7za7_4839za7, " nil|", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2portzd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762ioza7d2portza7d24840za7,
		BGl__z62iozd2portzd2errorzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4443z00zz__objectz00,
		BgL_bgl_string4443za700za7za7_4841za7, "...", 3);
	      DEFINE_STRING(BGl_string4444z00zz__objectz00,
		BgL_bgl_string4444za700za7za7_4842za7, "_object-print-default2449", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2z62warningz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762warni4843z00,
		BGl__fillzd2z62warningz12za2zz__objectz00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string4445z00zz__objectz00,
		BgL_bgl_string4445za700za7za7_4844za7, "_object-equal?", 14);
	      DEFINE_STRING(BGl_string4446z00zz__objectz00,
		BgL_bgl_string4446za700za7za7_4845za7, "_object-equal?-defaul2451", 25);
	      DEFINE_STRING(BGl_string4447z00zz__objectz00,
		BgL_bgl_string4447za700za7za7_4846za7, "*** UNKNOWN EXCEPTION: ", 23);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62warningzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762warningza7d2ni4847z00, BGl__z62warningzd2nilzb0zz__objectz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4451z00zz__objectz00,
		BgL_bgl_string4451za700za7za7_4848za7, "object->struct::struct", 22);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62accesszd2controlzd2exceptionzd2permissionzd2envz62zz__objectz00,
		BgL_bgl__za762accessza7d2con4849z00,
		BGl__z62accesszd2controlzd2exceptionzd2permissionzb0zz__objectz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2malformedzd2urlzd2errorzf3zd2envz91zz__objectz00,
		BgL_bgl__za762ioza7d2malform4850z00,
		BGl__z62iozd2malformedzd2urlzd2errorzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2filezd2notzd2foundzd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762ioza7d2fileza7d24851za7,
		BGl__z62iozd2filezd2notzd2foundzd2errorzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4453z00zz__objectz00,
		BgL_bgl_string4453za700za7za7_4852za7, "struct+object->object::object", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2unknownzd2hostzd2errorzd2envze2zz__objectz00,
		BgL_bgl__za752allocateza7d2za74853za7,
		BGl__z52allocatezd2z62iozd2unknownzd2hostzd2errorz30zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62processzd2exceptionzf3zd2envz91zz__objectz00,
		BgL_bgl__za762processza7d2ex4854z00,
		BGl__z62processzd2exceptionzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldzd2infozd2envzd2zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4855z00,
		BGl__classzd2fieldzd2infoz00zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2genericzd2bucketzd2siza7ezd2envza7zz__objectz00,
		BgL_bgl__biglooza7d2generi4856za7,
		BGl__bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62processzd2exceptionz12zd2envza2zz__objectz00,
		BgL_bgl__fillza7d2za762proce4857z00,
		BGl__fillzd2z62processzd2exceptionz12z70zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_registerzd2genericz12zd2envz12zz__objectz00,
		BgL_bgl__registerza7d2gene4858za7,
		BGl__registerzd2genericz12zc0zz__objectz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2writezd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24859za7,
		BGl__fillzd2z62iozd2writezd2errorz12za2zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2writezd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74860za7,
		BGl__z52allocatezd2z62iozd2writezd2errorze2zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2writezd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762ioza7d2writeza7d4861za7,
		BGl__z62iozd2writezd2errorzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762errorza7d2nilza74862za7, BGl__z62errorzd2nilzb0zz__objectz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2defaultzd2valuezd2envz00zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4863z00,
		BGl__classzd2fieldzd2defaultzd2valuezd2zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62typezd2errorzd2envzb0zz__objectz00,
		BgL_bgl__makeza7d2za762typeza74864za7,
		BGl__makezd2z62typezd2errorz62zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2superzd2classzd2methodzd2envz00zz__objectz00,
		BgL_bgl__findza7d2superza7d24865z00,
		BGl__findzd2superzd2classzd2methodzd2zz__objectz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2accessorzd2envzd2zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4866z00,
		BGl__classzd2fieldzd2accessorz00zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_objectzd2classzd2numzd2setz12zd2envz12zz__objectz00,
		BgL_bgl__objectza7d2classza74867z00,
		BGl__objectzd2classzd2numzd2setz12zc0zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2portzd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74868za7,
		BGl__z52allocatezd2z62iozd2portzd2errorze2zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genericzd2addzd2methodz12zd2envzc0zz__objectz00,
		BgL_bgl__genericza7d2addza7d4869z00,
		BGl__genericzd2addzd2methodz12z12zz__objectz00, 0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2locationzd2envz62zz__objectz00,
		BgL_bgl__za762exceptionza7d24870z00,
		BGl__z62exceptionzd2locationzb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2creatorzd2envz00zz__objectz00,
		BgL_bgl__classza7d2creator4871za7, BGl__classzd2creatorzd2zz__objectz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52objectzd2wideningzd2envz52zz__objectz00,
		BgL_bgl__za752objectza7d2wid4872z00,
		BGl__z52objectzd2wideningz80zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2allzd2fieldszd2envzd2zz__objectz00,
		BgL_bgl__classza7d2allza7d2f4873z00,
		BGl__classzd2allzd2fieldsz00zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_objectzd2writezd2default2440zd2envzd2zz__objectz00,
		BgL_bgl__objectza7d2writeza74874z00, va_generic_entry,
		BGl__objectzd2writezd2default2440z00zz__objectz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62exceptionzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74875za7,
		BGl__z52allocatezd2z62exceptionze2zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2readzd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762ioza7d2readza7d24876za7,
		BGl__z62iozd2readzd2errorzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2closedzd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762ioza7d2closedza74877za7,
		BGl__z62iozd2closedzd2errorzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z62warningzd2argszd2envz62zz__objectz00,
		BgL_bgl__za762warningza7d2ar4878z00, BGl__z62warningzd2argszb0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_objectzd2printzd2default2449zd2envzd2zz__objectz00,
		BgL_bgl__objectza7d2printza74879z00,
		BGl__objectzd2printzd2default2449z00zz__objectz00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z62exceptionzd2stackzd2envz62zz__objectz00,
		BgL_bgl__za762exceptionza7d24880z00,
		BGl__z62exceptionzd2stackzb0zz__objectz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_writezd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2closedzd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762ioza7d2closedza74881za7,
		BGl__z62iozd2closedzd2errorzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldzd2namezd2envzd2zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4882z00,
		BGl__classzd2fieldzd2namez00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldzf3zd2envzf3zz__objectz00,
		BgL_bgl__classza7d2fieldza7f4883z00, BGl__classzd2fieldzf3z21zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2timeoutzd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24884za7,
		BGl__makezd2z62iozd2timeoutzd2errorzb0zz__objectz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2readzd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74885za7,
		BGl__z52allocatezd2z62iozd2readzd2errorze2zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objectzd2classzd2envz00zz__objectz00,
		BgL_bgl__objectza7d2classza74886z00, BGl__objectzd2classzd2zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2readzd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762ioza7d2readza7d24887za7,
		BGl__z62iozd2readzd2errorzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62warningzf3zd2envz43zz__objectz00,
		BgL_bgl__za762warningza7f3za794888za7, BGl__z62warningzf3z91zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62indexzd2outzd2ofzd2boundszd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74889za7,
		BGl__z52allocatezd2z62indexzd2outzd2ofzd2boundszd2errorze2zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2unknownzd2hostzd2errorzd2nilzd2envzb0zz__objectz00,
		BgL_bgl__za762ioza7d2unknown4890z00,
		BGl__z62iozd2unknownzd2hostzd2errorzd2nilz62zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62accesszd2controlzd2exceptionz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762acces4891z00,
		BGl__fillzd2z62accesszd2controlzd2exceptionz12za2zz__objectz00, 0L, BUNSPEC,
		7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2closedzd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24892za7,
		BGl__makezd2z62iozd2closedzd2errorzb0zz__objectz00, 0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2evdatazd2envz00zz__objectz00,
		BgL_bgl__classza7d2evdataza74893z00, BGl__classzd2evdatazd2zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62conditionzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762conditionza7d24894z00,
		BGl__z62conditionzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2timeoutzd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762ioza7d2timeout4895z00,
		BGl__z62iozd2timeoutzd2errorzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2virtualzf3zd2envz21zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4896z00,
		BGl__classzd2fieldzd2virtualzf3zf3zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62exceptionzf3zd2envz43zz__objectz00,
		BgL_bgl__za762exceptionza7f34897z00, BGl__z62exceptionzf3z91zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2parsezd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24898za7,
		BGl__makezd2z62iozd2parsezd2errorzb0zz__objectz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2lenzd2accessorzd2envz00zz__objectz00,
		BgL_bgl__classza7d2fieldza7d4899z00,
		BGl__classzd2fieldzd2lenzd2accessorzd2zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62indexzd2outzd2ofzd2boundszd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762index4900z00,
		BGl__fillzd2z62indexzd2outzd2ofzd2boundszd2errorz12za2zz__objectz00, 0L,
		BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24901za7,
		BGl__makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00, 0L, BUNSPEC,
		6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62iozd2errorzd2nilzd2envzb0zz__objectz00,
		BgL_bgl__za762ioza7d2errorza7d4902za7,
		BGl__z62iozd2errorzd2nilz62zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62accesszd2controlzd2exceptionzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762acces4903z00,
		BGl__makezd2z62accesszd2controlzd2exceptionzb0zz__objectz00, 0L, BUNSPEC,
		6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_iszd2nilzf3zd2envzf3zz__objectz00,
		BgL_bgl__isza7d2nilza7f3za721za74904z00, BGl__iszd2nilzf3z21zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62conditionzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74905za7,
		BGl__z52allocatezd2z62conditionze2zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2classzd2fieldzd2envzd2zz__objectz00,
		BgL_bgl__findza7d2classza7d24906z00,
		BGl__findzd2classzd2fieldz00zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2readzd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24907za7,
		BGl__fillzd2z62iozd2readzd2errorz12za2zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_objectzd2ze3structzd2defau2442zd2envz31zz__objectz00,
		BgL_bgl__objectza7d2za7e3str4908z00,
		BGl__objectzd2ze3structzd2defau2442ze3zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2nilzd2envz00zz__objectz00,
		BgL_bgl__classza7d2nilza7d2za74909za7, BGl__classzd2nilzd2zz__objectz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2malformedzd2urlzd2errorzd2nilzd2envzb0zz__objectz00,
		BgL_bgl__za762ioza7d2malform4910z00,
		BGl__z62iozd2malformedzd2urlzd2errorzd2nilz62zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2filezd2notzd2foundzd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762ioza7d2fileza7d24911za7,
		BGl__z62iozd2filezd2notzd2foundzd2errorzd2nilzb0zz__objectz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2filezd2notzd2foundzd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74912za7,
		BGl__z52allocatezd2z62iozd2filezd2notzd2foundzd2errorze2zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2sigpipezd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762ioza7d2sigpipe4913z00,
		BGl__z62iozd2sigpipezd2errorzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_structzb2objectzd2ze3objec2445zd2envz51zz__objectz00,
		BgL_bgl__structza7b2object4914za7,
		BGl__structzb2objectzd2ze3objec2445z83zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62typezd2errorzd2envze2zz__objectz00,
		BgL_bgl__za752allocateza7d2za74915za7,
		BGl__z52allocatezd2z62typezd2errorz30zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2namezd2envz00zz__objectz00,
		BgL_bgl__classza7d2nameza7d24916z00, BGl__classzd2namezd2zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2methodzd2envz00zz__objectz00,
		BgL_bgl__findza7d2methodza7d4917z00, BGl__findzd2methodzd2zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2hashzd2envz00zz__objectz00,
		BgL_bgl__classza7d2hashza7d24918z00, BGl__classzd2hashzd2zz__objectz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74919za7,
		BGl__z52allocatezd2z62errorze2zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_objectzd2hashnumberzd2de2447zd2envzd2zz__objectz00,
		BgL_bgl__objectza7d2hashnu4920za7,
		BGl__objectzd2hashnumberzd2de2447z00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2displayzd2envz00zz__objectz00,
		BgL_bgl__objectza7d2displa4921za7, va_generic_entry,
		BGl__objectzd2displayzd2zz__objectz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62evalzd2warningzf3zd2envz91zz__objectz00,
		BgL_bgl__za762evalza7d2warni4922z00,
		BGl__z62evalzd2warningzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62securityzd2exceptionzd2messagezd2envzb0zz__objectz00,
		BgL_bgl__za762securityza7d2e4923z00,
		BGl__z62securityzd2exceptionzd2messagez62zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genericzd2methodzd2arrayzd2envzd2zz__objectz00,
		BgL_bgl__genericza7d2metho4924za7,
		BGl__genericzd2methodzd2arrayz00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldszd2envz00zz__objectz00,
		BgL_bgl__classza7d2fieldsza74925z00, BGl__classzd2fieldszd2zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62processzd2exceptionzd2envze2zz__objectz00,
		BgL_bgl__za752allocateza7d2za74926za7,
		BGl__z52allocatezd2z62processzd2exceptionz30zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62processzd2exceptionzd2envzb0zz__objectz00,
		BgL_bgl__makeza7d2za762proce4927z00,
		BGl__makezd2z62processzd2exceptionz62zz__objectz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2filezd2notzd2foundzd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24928za7,
		BGl__fillzd2z62iozd2filezd2notzd2foundzd2errorz12za2zz__objectz00, 0L,
		BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762indexza7d2outza74929za7,
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2nilzb0zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2parsezd2errorzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762ioza7d2parseza7d4930za7,
		BGl__z62iozd2parsezd2errorzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objectzf3zd2envz21zz__objectz00,
		BgL_bgl__objectza7f3za7f3za7za7_4931z00, BGl__objectzf3zf3zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2ze3structzd2envze3zz__objectz00,
		BgL_bgl__objectza7d2za7e3str4932z00,
		BGl__objectzd2ze3structz31zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62evalzd2warningzd2envze2zz__objectz00,
		BgL_bgl__za752allocateza7d2za74933za7,
		BGl__z52allocatezd2z62evalzd2warningz30zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62evalzd2warningz12zd2envza2zz__objectz00,
		BgL_bgl__fillza7d2za762evalza74934za7,
		BGl__fillzd2z62evalzd2warningz12z70zz__objectz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2arrayzd2refzd2envzd2zz__objectz00,
		BgL_bgl__methodza7d2arrayza74935z00,
		BGl__methodzd2arrayzd2refz00zz__objectz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2z62warningzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762warni4936z00, BGl__makezd2z62warningzb0zz__objectz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62typezd2errorzd2typezd2envzb0zz__objectz00,
		BgL_bgl__za762typeza7d2error4937z00,
		BGl__z62typezd2errorzd2typez62zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2z62iozd2errorzd2envzb0zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24938za7,
		BGl__makezd2z62iozd2errorz62zz__objectz00, 0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2superzd2envz00zz__objectz00,
		BgL_bgl__classza7d2superza7d4939z00, BGl__classzd2superzd2zz__objectz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52objectzd2wideningzd2setz12zd2envz92zz__objectz00,
		BgL_bgl__za752objectza7d2wid4940z00,
		BGl__z52objectzd2wideningzd2setz12z40zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_iszd2azf3zd2envzf3zz__objectz00,
		BgL_bgl__isza7d2aza7f3za721za7za7_4941za7, BGl__iszd2azf3z21zz__objectz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2locationzd2setz12zd2envza2zz__objectz00,
		BgL_bgl__za762exceptionza7d24942z00,
		BGl__z62exceptionzd2locationzd2setz12z70zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2objectzd2envz52zz__objectz00,
		BgL_bgl__za752allocateza7d2o4943z00,
		BGl__z52allocatezd2objectz80zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62conditionzf3zd2envz43zz__objectz00,
		BgL_bgl__za762conditionza7f34944z00, BGl__z62conditionzf3z91zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
		BgL_bgl__structza7b2object4945za7,
		BGl__structzb2objectzd2ze3objectz83zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2errorzd2envze2zz__objectz00,
		BgL_bgl__za752allocateza7d2za74946za7,
		BGl__z52allocatezd2z62iozd2errorz30zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z62errorzd2proczd2envz62zz__objectz00,
		BgL_bgl__za762errorza7d2proc4947z00, BGl__z62errorzd2proczb0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62iozd2portzd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762ioza7d2portza7d24948za7,
		BGl__z62iozd2portzd2errorzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2z62errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762error4949z00, BGl__makezd2z62errorzb0zz__objectz00,
		0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62indexzd2outzd2ofzd2boundszd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762index4950z00,
		BGl__makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00, 0L,
		BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2malformedzd2urlzd2errorzd2envzb0zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24951za7,
		BGl__makezd2z62iozd2malformedzd2urlzd2errorz62zz__objectz00, 0L, BUNSPEC,
		6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2virtualzd2envz00zz__objectz00,
		BgL_bgl__classza7d2virtual4952za7, BGl__classzd2virtualzd2zz__objectz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62indexzd2outzd2ofzd2boundszd2errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762indexza7d2outza74953za7,
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzf3z91zz__objectz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2sigpipezd2errorz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24954za7,
		BGl__fillzd2z62iozd2sigpipezd2errorz12za2zz__objectz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2writezd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24955za7,
		BGl__makezd2z62iozd2writezd2errorzb0zz__objectz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genericzd2memoryzd2statisticszd2envzd2zz__objectz00,
		BgL_bgl__genericza7d2memor4956za7,
		BGl__genericzd2memoryzd2statisticsz00zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62exceptionz12zd2envz70zz__objectz00,
		BgL_bgl__fillza7d2za762excep4957z00,
		BGl__fillzd2z62exceptionz12za2zz__objectz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62iozd2unknownzd2hostzd2errorz12zd2envza2zz__objectz00,
		BgL_bgl__fillza7d2za762ioza7d24958za7,
		BGl__fillzd2z62iozd2unknownzd2hostzd2errorz12z70zz__objectz00, 0L, BUNSPEC,
		7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2sigpipezd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74959za7,
		BGl__z52allocatezd2z62iozd2sigpipezd2errorze2zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62iozd2portzd2errorzd2envz62zz__objectz00,
		BgL_bgl__makeza7d2za762ioza7d24960za7,
		BGl__makezd2z62iozd2portzd2errorzb0zz__objectz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62accesszd2controlzd2exceptionzd2nilzd2envz62zz__objectz00,
		BgL_bgl__za762accessza7d2con4961z00,
		BGl__z62accesszd2controlzd2exceptionzd2nilzb0zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62iozd2closedzd2errorzd2envz30zz__objectz00,
		BgL_bgl__za752allocateza7d2za74962za7,
		BGl__z52allocatezd2z62iozd2closedzd2errorze2zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2writezd2envz00zz__objectz00,
		BgL_bgl__objectza7d2writeza74963z00, va_generic_entry,
		BGl__objectzd2writezd2zz__objectz00, BUNSPEC, -2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_objectzd2displayzd2defau2437zd2envzd2zz__objectz00,
		BgL_bgl__objectza7d2displa4964za7, va_generic_entry,
		BGl__objectzd2displayzd2defau2437z00zz__objectz00, BUNSPEC, -2);
	extern obj_t BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62errorzf3zd2envz43zz__objectz00,
		BgL_bgl__za762errorza7f3za791za74965z00, BGl__z62errorzf3z91zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62accesszd2controlzd2exceptionzf3zd2envz43zz__objectz00,
		BgL_bgl__za762accessza7d2con4966z00,
		BGl__z62accesszd2controlzd2exceptionzf3z91zz__objectz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long
		BgL_checksumz00_9387, char *BgL_fromz00_9388)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__objectz00))
				{
					BGl_requirezd2initializa7ationz75zz__objectz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__objectz00();
					BGl_objectzd2initzd2zz__objectz00();
					BGl_genericzd2initzd2zz__objectz00();
					BGl_methodzd2initzd2zz__objectz00();
					BGl_toplevelzd2initzd2zz__objectz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			BGl_symbol4242z00zz__objectz00 =
				bstring_to_symbol(BGl_string4243z00zz__objectz00);
			BGl_symbol4265z00zz__objectz00 =
				bstring_to_symbol(BGl_string4266z00zz__objectz00);
			BGl_symbol4267z00zz__objectz00 =
				bstring_to_symbol(BGl_string4238z00zz__objectz00);
			BGl_symbol4268z00zz__objectz00 =
				bstring_to_symbol(BGl_string4269z00zz__objectz00);
			BGl_symbol4270z00zz__objectz00 =
				bstring_to_symbol(BGl_string4271z00zz__objectz00);
			BGl_symbol4272z00zz__objectz00 =
				bstring_to_symbol(BGl_string4273z00zz__objectz00);
			BGl_symbol4274z00zz__objectz00 =
				bstring_to_symbol(BGl_string4275z00zz__objectz00);
			BGl_symbol4276z00zz__objectz00 =
				bstring_to_symbol(BGl_string4277z00zz__objectz00);
			BGl_symbol4278z00zz__objectz00 =
				bstring_to_symbol(BGl_string4279z00zz__objectz00);
			BGl_symbol4312z00zz__objectz00 =
				bstring_to_symbol(BGl_string4255z00zz__objectz00);
			BGl_symbol4313z00zz__objectz00 =
				bstring_to_symbol(BGl_string4314z00zz__objectz00);
			BGl_symbol4315z00zz__objectz00 =
				bstring_to_symbol(BGl_string4316z00zz__objectz00);
			BGl_symbol4317z00zz__objectz00 =
				bstring_to_symbol(BGl_string4318z00zz__objectz00);
			BGl_symbol4319z00zz__objectz00 =
				bstring_to_symbol(BGl_string4320z00zz__objectz00);
			BGl_symbol4321z00zz__objectz00 =
				bstring_to_symbol(BGl_string4322z00zz__objectz00);
			BGl_symbol4324z00zz__objectz00 =
				bstring_to_symbol(BGl_string4325z00zz__objectz00);
			BGl_list4323z00zz__objectz00 =
				MAKE_PAIR(BGl_symbol4324z00zz__objectz00, BNIL);
			BGl_symbol4326z00zz__objectz00 =
				bstring_to_symbol(BGl_string4327z00zz__objectz00);
			BGl_symbol4328z00zz__objectz00 =
				bstring_to_symbol(BGl_string4329z00zz__objectz00);
			BGl_symbol4330z00zz__objectz00 =
				bstring_to_symbol(BGl_string4331z00zz__objectz00);
			BGl_symbol4332z00zz__objectz00 =
				bstring_to_symbol(BGl_string4333z00zz__objectz00);
			BGl_symbol4334z00zz__objectz00 =
				bstring_to_symbol(BGl_string4335z00zz__objectz00);
			BGl_symbol4336z00zz__objectz00 =
				bstring_to_symbol(BGl_string4337z00zz__objectz00);
			BGl_symbol4338z00zz__objectz00 =
				bstring_to_symbol(BGl_string4339z00zz__objectz00);
			BGl_symbol4340z00zz__objectz00 =
				bstring_to_symbol(BGl_string4341z00zz__objectz00);
			BGl_symbol4342z00zz__objectz00 =
				bstring_to_symbol(BGl_string4343z00zz__objectz00);
			BGl_symbol4344z00zz__objectz00 =
				bstring_to_symbol(BGl_string4345z00zz__objectz00);
			BGl_symbol4346z00zz__objectz00 =
				bstring_to_symbol(BGl_string4347z00zz__objectz00);
			BGl_symbol4348z00zz__objectz00 =
				bstring_to_symbol(BGl_string4349z00zz__objectz00);
			BGl_symbol4350z00zz__objectz00 =
				bstring_to_symbol(BGl_string4351z00zz__objectz00);
			BGl_symbol4352z00zz__objectz00 =
				bstring_to_symbol(BGl_string4353z00zz__objectz00);
			BGl_symbol4354z00zz__objectz00 =
				bstring_to_symbol(BGl_string4355z00zz__objectz00);
			BGl_symbol4356z00zz__objectz00 =
				bstring_to_symbol(BGl_string4357z00zz__objectz00);
			BGl_symbol4358z00zz__objectz00 =
				bstring_to_symbol(BGl_string4359z00zz__objectz00);
			BGl_symbol4360z00zz__objectz00 =
				bstring_to_symbol(BGl_string4361z00zz__objectz00);
			BGl_symbol4362z00zz__objectz00 =
				bstring_to_symbol(BGl_string4363z00zz__objectz00);
			BGl_symbol4364z00zz__objectz00 =
				bstring_to_symbol(BGl_string4365z00zz__objectz00);
			BGl_symbol4366z00zz__objectz00 =
				bstring_to_symbol(BGl_string4367z00zz__objectz00);
			BGl_symbol4368z00zz__objectz00 =
				bstring_to_symbol(BGl_string4369z00zz__objectz00);
			BGl_symbol4370z00zz__objectz00 =
				bstring_to_symbol(BGl_string4371z00zz__objectz00);
			BGl_symbol4372z00zz__objectz00 =
				bstring_to_symbol(BGl_string4373z00zz__objectz00);
			BGl_symbol4374z00zz__objectz00 =
				bstring_to_symbol(BGl_string4375z00zz__objectz00);
			return (BGl_symbol4376z00zz__objectz00 =
				bstring_to_symbol(BGl_string4377z00zz__objectz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			return BUNSPEC;
		}
	}



/* bigloo-generic-bucket-size */
	BGL_EXPORTED_DEF int BGl_bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 253 */
			return (int) (((long) 16));
		}
	}



/* _bigloo-generic-bucket-size */
	obj_t BGl__bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00(obj_t
		BgL_envz00_7678)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 253 */
			return BINT((int) (((long) 16)));
		}
	}



/* bigloo-types-number */
	BGL_EXPORTED_DEF long bgl_types_number()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 262 */
			if (INTEGERP(BGl_za2nbzd2classesza2zd2zz__objectz00))
				{	/* Llib/object.scm 263 */
					return
						(OBJECT_TYPE + (long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00));
				}
			else
				{	/* Llib/object.scm 263 */
					return OBJECT_TYPE;
				}
		}
	}



/* _bigloo-types-number */
	obj_t BGl__bigloozd2typeszd2numberz00zz__objectz00(obj_t BgL_envz00_7679)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 262 */
			return BINT(bgl_types_number());
		}
	}



/* find-class */
	BGL_EXPORTED_DEF obj_t BGl_findzd2classzd2zz__objectz00(obj_t BgL_cnamez00_17)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 311 */
			{
				long BgL_iz00_1124;

				BgL_iz00_1124 = ((long) 0);
			BgL_zc3anonymousza32575ze3z83_1125:
				if (
					(BgL_iz00_1124 ==
						(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00)))
					{	/* Llib/object.scm 313 */
						return
							BGl_errorz00zz__errorz00(BGl_string4229z00zz__objectz00,
							BGl_string4230z00zz__objectz00, BgL_cnamez00_17);
					}
				else
					{	/* Llib/object.scm 315 */
						obj_t BgL_claz00_1127;

						BgL_claz00_1127 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							(int) (BgL_iz00_1124));
						if (
							(VECTOR_REF(BgL_claz00_1127,
									(int) (((long) 0))) == BgL_cnamez00_17))
							{	/* Llib/object.scm 316 */
								return BgL_claz00_1127;
							}
						else
							{
								long BgL_iz00_9459;

								BgL_iz00_9459 = (BgL_iz00_1124 + ((long) 1));
								BgL_iz00_1124 = BgL_iz00_9459;
								goto BgL_zc3anonymousza32575ze3z83_1125;
							}
					}
			}
		}
	}



/* _find-class */
	obj_t BGl__findzd2classzd2zz__objectz00(obj_t BgL_envz00_7680,
		obj_t BgL_cnamez00_7681)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 311 */
			{	/* Llib/object.scm 313 */
				obj_t BgL_auxz00_9461;

				if (SYMBOLP(BgL_cnamez00_7681))
					{	/* Llib/object.scm 313 */
						BgL_auxz00_9461 = BgL_cnamez00_7681;
					}
				else
					{
						obj_t BgL_auxz00_9464;

						BgL_auxz00_9464 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 13468)), BGl_string4232z00zz__objectz00,
							BGl_string4233z00zz__objectz00, BgL_cnamez00_7681);
						FAILURE(BgL_auxz00_9464, BFALSE, BFALSE);
					}
				return BGl_findzd2classzd2zz__objectz00(BgL_auxz00_9461);
			}
		}
	}



/* class? */
	BGL_EXPORTED_DEF bool_t BGl_classzf3zf3zz__objectz00(obj_t BgL_objz00_18)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 323 */
			if (VECTORP(BgL_objz00_18))
				{	/* Llib/object.scm 325 */
					bool_t BgL_testz00_9471;

					{	/* Llib/object.scm 325 */
						int BgL_arg2581z00_1135;

						BgL_arg2581z00_1135 = VECTOR_LENGTH(BgL_objz00_18);
						BgL_testz00_9471 = ((long) (BgL_arg2581z00_1135) == ((long) 17));
					}
					if (BgL_testz00_9471)
						{	/* Llib/object.scm 325 */
							obj_t BgL_arg2580z00_1134;

							BgL_arg2580z00_1134 =
								VECTOR_REF(BgL_objz00_18, (int) (((long) 16)));
							return
								(BgL_arg2580z00_1134 == BGl_za2classzd2keyza2zd2zz__objectz00);
						}
					else
						{	/* Llib/object.scm 325 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Llib/object.scm 324 */
					return ((bool_t) 0);
				}
		}
	}



/* _class? */
	obj_t BGl__classzf3zf3zz__objectz00(obj_t BgL_envz00_7682,
		obj_t BgL_objz00_7683)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 323 */
			return BBOOL(BGl_classzf3zf3zz__objectz00(BgL_objz00_7683));
		}
	}



/* eval-class? */
	BGL_EXPORTED_DEF bool_t BGl_evalzd2classzf3z21zz__objectz00(obj_t
		BgL_objz00_19)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 330 */
			if (BGl_classzf3zf3zz__objectz00(BgL_objz00_19))
				{	/* Llib/object.scm 331 */
					obj_t BgL_vectorz00_3096;

					int BgL_kz00_3097;

					BgL_vectorz00_3096 = BgL_objz00_19;
					BgL_kz00_3097 = (int) (((long) 14));
					return CBOOL(VECTOR_REF(BgL_vectorz00_3096, BgL_kz00_3097));
				}
			else
				{	/* Llib/object.scm 331 */
					return ((bool_t) 0);
				}
		}
	}



/* _eval-class? */
	obj_t BGl__evalzd2classzf3z21zz__objectz00(obj_t BgL_envz00_7684,
		obj_t BgL_objz00_7685)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 330 */
			return BBOOL(BGl_evalzd2classzf3z21zz__objectz00(BgL_objz00_7685));
		}
	}



/* class-name */
	BGL_EXPORTED_DEF obj_t BGl_classzd2namezd2zz__objectz00(obj_t BgL_classz00_20)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 336 */
			return VECTOR_REF(BgL_classz00_20, (int) (((long) 0)));
		}
	}



/* _class-name */
	obj_t BGl__classzd2namezd2zz__objectz00(obj_t BgL_envz00_7686,
		obj_t BgL_classz00_7687)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 336 */
			return BGl_classzd2namezd2zz__objectz00(BgL_classz00_7687);
		}
	}



/* class-num */
	BGL_EXPORTED_DEF long BGl_classzd2numzd2zz__objectz00(obj_t BgL_classz00_21)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 342 */
			{	/* Llib/object.scm 343 */
				obj_t BgL_vectorz00_3100;

				int BgL_kz00_3101;

				BgL_vectorz00_3100 = BgL_classz00_21;
				BgL_kz00_3101 = (int) (((long) 1));
				return (long) CINT(VECTOR_REF(BgL_vectorz00_3100, BgL_kz00_3101));
		}}
	}



/* _class-num */
	obj_t BGl__classzd2numzd2zz__objectz00(obj_t BgL_envz00_7688,
		obj_t BgL_classz00_7689)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 342 */
			return BINT(BGl_classzd2numzd2zz__objectz00(BgL_classz00_7689));
		}
	}



/* class-virtual */
	BGL_EXPORTED_DEF obj_t BGl_classzd2virtualzd2zz__objectz00(obj_t
		BgL_classz00_28)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 372 */
			return VECTOR_REF(BgL_classz00_28, (int) (((long) 10)));
		}
	}



/* _class-virtual */
	obj_t BGl__classzd2virtualzd2zz__objectz00(obj_t BgL_envz00_7690,
		obj_t BgL_classz00_7691)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 372 */
			{	/* Llib/object.scm 373 */
				obj_t BgL_res4496z00_8735;

				{	/* Llib/object.scm 373 */
					obj_t BgL_classz00_8734;

					if (VECTORP(BgL_classz00_7691))
						{	/* Llib/object.scm 373 */
							BgL_classz00_8734 = BgL_classz00_7691;
						}
					else
						{
							obj_t BgL_auxz00_9499;

							BgL_auxz00_9499 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 16271)), BGl_string4234z00zz__objectz00,
								BGl_string4235z00zz__objectz00, BgL_classz00_7691);
							FAILURE(BgL_auxz00_9499, BFALSE, BFALSE);
						}
					BgL_res4496z00_8735 =
						VECTOR_REF(BgL_classz00_8734, (int) (((long) 10)));
				}
				return BgL_res4496z00_8735;
			}
		}
	}



/* class-evdata */
	BGL_EXPORTED_DEF obj_t BGl_classzd2evdatazd2zz__objectz00(obj_t
		BgL_classz00_29)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 378 */
			return VECTOR_REF(BgL_classz00_29, (int) (((long) 14)));
		}
	}



/* _class-evdata */
	obj_t BGl__classzd2evdatazd2zz__objectz00(obj_t BgL_envz00_7692,
		obj_t BgL_classz00_7693)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 378 */
			return BGl_classzd2evdatazd2zz__objectz00(BgL_classz00_7693);
		}
	}



/* class-evdata-set! */
	BGL_EXPORTED_DEF obj_t BGl_classzd2evdatazd2setz12z12zz__objectz00(obj_t
		BgL_classz00_30, obj_t BgL_dataz00_31)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 384 */
			return VECTOR_SET(BgL_classz00_30, (int) (((long) 14)), BgL_dataz00_31);
		}
	}



/* _class-evdata-set! */
	obj_t BGl__classzd2evdatazd2setz12z12zz__objectz00(obj_t BgL_envz00_7694,
		obj_t BgL_classz00_7695, obj_t BgL_dataz00_7696)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 384 */
			return
				BGl_classzd2evdatazd2setz12z12zz__objectz00(BgL_classz00_7695,
				BgL_dataz00_7696);
		}
	}



/* class-fields */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldszd2zz__objectz00(obj_t
		BgL_classz00_32)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 391 */
			if (BGl_classzf3zf3zz__objectz00(BgL_classz00_32))
				{	/* Llib/object.scm 392 */
					return VECTOR_REF(BgL_classz00_32, (int) (((long) 8)));
				}
			else
				{	/* Llib/object.scm 392 */
					return
						BGl_errorz00zz__errorz00(BGl_string4236z00zz__objectz00,
						BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
						(BGl_string4237z00zz__objectz00, BGl_string4238z00zz__objectz00,
							bgl_find_runtime_type(BgL_classz00_32)), BgL_classz00_32);
				}
		}
	}



/* _class-fields */
	obj_t BGl__classzd2fieldszd2zz__objectz00(obj_t BgL_envz00_7697,
		obj_t BgL_classz00_7698)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 391 */
			return BGl_classzd2fieldszd2zz__objectz00(BgL_classz00_7698);
		}
	}



/* class-all-fields */
	BGL_EXPORTED_DEF obj_t BGl_classzd2allzd2fieldsz00zz__objectz00(obj_t
		BgL_classz00_33)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 403 */
			{	/* Llib/object.scm 404 */
				obj_t BgL_fieldsz00_1144;

				obj_t BgL_superz00_1145;

				{	/* Llib/object.scm 404 */
					obj_t BgL_fieldsz00_1148;

					BgL_fieldsz00_1148 =
						BGl_classzd2fieldszd2zz__objectz00(BgL_classz00_33);
					{	/* Llib/object.scm 405 */
						bool_t BgL_testz00_9520;

						{	/* Llib/object.scm 405 */
							bool_t BgL__ortest_2369z00_3122;

							BgL__ortest_2369z00_3122 = PAIRP(BgL_fieldsz00_1148);
							if (BgL__ortest_2369z00_3122)
								{	/* Llib/object.scm 405 */
									BgL_testz00_9520 = BgL__ortest_2369z00_3122;
								}
							else
								{	/* Llib/object.scm 405 */
									BgL_testz00_9520 = NULLP(BgL_fieldsz00_1148);
								}
						}
						if (BgL_testz00_9520)
							{	/* Llib/object.scm 405 */
								BgL_fieldsz00_1144 = BgL_fieldsz00_1148;
							}
						else
							{	/* Llib/object.scm 405 */
								BgL_fieldsz00_1144 = BNIL;
							}
					}
				}
				BgL_superz00_1145 = VECTOR_REF(BgL_classz00_33, (int) (((long) 3)));
				if (BGl_classzf3zf3zz__objectz00(BgL_superz00_1145))
					{	/* Llib/object.scm 409 */
						return
							bgl_append2(BGl_classzd2allzd2fieldsz00zz__objectz00
							(BgL_superz00_1145), BgL_fieldsz00_1144);
					}
				else
					{	/* Llib/object.scm 409 */
						return BgL_fieldsz00_1144;
					}
			}
		}
	}



/* _class-all-fields */
	obj_t BGl__classzd2allzd2fieldsz00zz__objectz00(obj_t BgL_envz00_7699,
		obj_t BgL_classz00_7700)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 403 */
			return BGl_classzd2allzd2fieldsz00zz__objectz00(BgL_classz00_7700);
		}
	}



/* find-class-field */
	BGL_EXPORTED_DEF obj_t BGl_findzd2classzd2fieldz00zz__objectz00(obj_t
		BgL_classz00_34, obj_t BgL_namez00_35)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 416 */
			{
				obj_t BgL_fieldsz00_1161;

				{
					obj_t BgL_classz00_1152;

					BgL_classz00_1152 = BgL_classz00_34;
				BgL_zc3anonymousza32593ze3z83_1153:
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_1152))
						{	/* Llib/object.scm 427 */
							obj_t BgL_fieldsz00_1155;

							BgL_fieldsz00_1155 =
								BGl_classzd2fieldszd2zz__objectz00(BgL_classz00_1152);
							{	/* Llib/object.scm 428 */
								bool_t BgL_testz00_9534;

								{	/* Llib/object.scm 428 */
									bool_t BgL__ortest_2369z00_3130;

									BgL__ortest_2369z00_3130 = PAIRP(BgL_fieldsz00_1155);
									if (BgL__ortest_2369z00_3130)
										{	/* Llib/object.scm 428 */
											BgL_testz00_9534 = BgL__ortest_2369z00_3130;
										}
									else
										{	/* Llib/object.scm 428 */
											BgL_testz00_9534 = NULLP(BgL_fieldsz00_1155);
										}
								}
								if (BgL_testz00_9534)
									{	/* Llib/object.scm 429 */
										obj_t BgL_resz00_1157;

										BgL_fieldsz00_1161 = BgL_fieldsz00_1155;
									BgL_zc3anonymousza32597ze3z83_1162:
										if (NULLP(BgL_fieldsz00_1161))
											{	/* Llib/object.scm 419 */
												BgL_resz00_1157 = BFALSE;
											}
										else
											{	/* Llib/object.scm 421 */
												bool_t BgL_testz00_9540;

												{	/* Llib/object.scm 421 */
													obj_t BgL_arg2601z00_1166;

													{	/* Llib/object.scm 421 */
														obj_t BgL_arg2602z00_1167;

														BgL_arg2602z00_1167 = CAR(BgL_fieldsz00_1161);
														{	/* Llib/object.scm 421 */
															obj_t BgL_res3698z00_3143;

															if (BGl_classzd2fieldzf3z21zz__objectz00
																(BgL_arg2602z00_1167))
																{	/* Llib/object.scm 421 */
																	BgL_res3698z00_3143 =
																		VECTOR_REF(BgL_arg2602z00_1167,
																		(int) (((long) 0)));
																}
															else
																{	/* Llib/object.scm 421 */
																	BgL_res3698z00_3143 =
																		BGl_errorz00zz__errorz00
																		(BGl_string4239z00zz__objectz00,
																		BGl_string4240z00zz__objectz00,
																		BgL_arg2602z00_1167);
																}
															BgL_arg2601z00_1166 = BgL_res3698z00_3143;
														}
													}
													BgL_testz00_9540 =
														(BgL_arg2601z00_1166 == BgL_namez00_35);
												}
												if (BgL_testz00_9540)
													{	/* Llib/object.scm 421 */
														BgL_resz00_1157 = CAR(BgL_fieldsz00_1161);
													}
												else
													{
														obj_t BgL_fieldsz00_9549;

														BgL_fieldsz00_9549 = CDR(BgL_fieldsz00_1161);
														BgL_fieldsz00_1161 = BgL_fieldsz00_9549;
														goto BgL_zc3anonymousza32597ze3z83_1162;
													}
											}
										if (CBOOL(BgL_resz00_1157))
											{	/* Llib/object.scm 430 */
												return BgL_resz00_1157;
											}
										else
											{
												obj_t BgL_classz00_9553;

												BgL_classz00_9553 =
													VECTOR_REF(BgL_classz00_1152, (int) (((long) 3)));
												BgL_classz00_1152 = BgL_classz00_9553;
												goto BgL_zc3anonymousza32593ze3z83_1153;
											}
									}
								else
									{	/* Llib/object.scm 428 */
										return BFALSE;
									}
							}
						}
					else
						{	/* Llib/object.scm 426 */
							return BFALSE;
						}
				}
			}
		}
	}



/* _find-class-field */
	obj_t BGl__findzd2classzd2fieldz00zz__objectz00(obj_t BgL_envz00_7701,
		obj_t BgL_classz00_7702, obj_t BgL_namez00_7703)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 416 */
			{	/* Llib/object.scm 419 */
				obj_t BgL_auxz00_9556;

				if (SYMBOLP(BgL_namez00_7703))
					{	/* Llib/object.scm 419 */
						BgL_auxz00_9556 = BgL_namez00_7703;
					}
				else
					{
						obj_t BgL_auxz00_9559;

						BgL_auxz00_9559 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 18121)), BGl_string4241z00zz__objectz00,
							BGl_string4233z00zz__objectz00, BgL_namez00_7703);
						FAILURE(BgL_auxz00_9559, BFALSE, BFALSE);
					}
				return
					BGl_findzd2classzd2fieldz00zz__objectz00(BgL_classz00_7702,
					BgL_auxz00_9556);
			}
		}
	}



/* make-class-field */
	BGL_EXPORTED_DEF obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t
		BgL_namez00_36, obj_t BgL_getterz00_37, obj_t BgL_setterz00_38,
		obj_t BgL_indexedz00_39, bool_t BgL_virtualz00_40, obj_t BgL_infoz00_41,
		obj_t BgL_defaultz00_42)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 436 */
			{	/* Llib/object.scm 437 */
				obj_t BgL_v2395z00_3146;

				BgL_v2395z00_3146 = create_vector((int) (((long) 9)));
				VECTOR_SET(BgL_v2395z00_3146,
					(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
				VECTOR_SET(BgL_v2395z00_3146, (int) (((long) 7)), BgL_defaultz00_42);
				VECTOR_SET(BgL_v2395z00_3146, (int) (((long) 6)), BgL_infoz00_41);
				VECTOR_SET(BgL_v2395z00_3146,
					(int) (((long) 5)), BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
				VECTOR_SET(BgL_v2395z00_3146,
					(int) (((long) 4)), BBOOL(BgL_virtualz00_40));
				VECTOR_SET(BgL_v2395z00_3146, (int) (((long) 3)), BgL_indexedz00_39);
				VECTOR_SET(BgL_v2395z00_3146, (int) (((long) 2)), BgL_setterz00_38);
				VECTOR_SET(BgL_v2395z00_3146, (int) (((long) 1)), BgL_getterz00_37);
				VECTOR_SET(BgL_v2395z00_3146, (int) (((long) 0)), BgL_namez00_36);
				return BgL_v2395z00_3146;
			}
		}
	}



/* _make-class-field */
	obj_t BGl__makezd2classzd2fieldz00zz__objectz00(obj_t BgL_envz00_7704,
		obj_t BgL_namez00_7705, obj_t BgL_getterz00_7706, obj_t BgL_setterz00_7707,
		obj_t BgL_indexedz00_7708, obj_t BgL_virtualz00_7709,
		obj_t BgL_infoz00_7710, obj_t BgL_defaultz00_7711)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 436 */
			{	/* Llib/object.scm 437 */
				obj_t BgL_auxz00_9585;

				if (SYMBOLP(BgL_namez00_7705))
					{	/* Llib/object.scm 437 */
						BgL_auxz00_9585 = BgL_namez00_7705;
					}
				else
					{
						obj_t BgL_auxz00_9588;

						BgL_auxz00_9588 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 18791)), BGl_string4244z00zz__objectz00,
							BGl_string4233z00zz__objectz00, BgL_namez00_7705);
						FAILURE(BgL_auxz00_9588, BFALSE, BFALSE);
					}
				return
					BGl_makezd2classzd2fieldz00zz__objectz00(BgL_auxz00_9585,
					BgL_getterz00_7706, BgL_setterz00_7707, BgL_indexedz00_7708,
					CBOOL(BgL_virtualz00_7709), BgL_infoz00_7710, BgL_defaultz00_7711);
			}
		}
	}



/* class-field? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t
		BgL_objz00_43)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 442 */
			if (VECTORP(BgL_objz00_43))
				{	/* Llib/object.scm 444 */
					bool_t BgL_testz00_9596;

					{	/* Llib/object.scm 444 */
						int BgL_arg2604z00_1173;

						BgL_arg2604z00_1173 = VECTOR_LENGTH(BgL_objz00_43);
						BgL_testz00_9596 = ((long) (BgL_arg2604z00_1173) == ((long) 9));
					}
					if (BgL_testz00_9596)
						{	/* Llib/object.scm 444 */
							return
								(VECTOR_REF(BgL_objz00_43,
									(int) (((long) 5))) ==
								BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
						}
					else
						{	/* Llib/object.scm 444 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Llib/object.scm 443 */
					return ((bool_t) 0);
				}
		}
	}



/* _class-field? */
	obj_t BGl__classzd2fieldzf3z21zz__objectz00(obj_t BgL_envz00_7712,
		obj_t BgL_objz00_7713)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 442 */
			return BBOOL(BGl_classzd2fieldzf3z21zz__objectz00(BgL_objz00_7713));
		}
	}



/* class-fields? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2fieldszf3z21zz__objectz00(obj_t
		BgL_fieldsz00_44)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 450 */
			{	/* Llib/object.scm 451 */
				bool_t BgL__ortest_2369z00_8736;

				BgL__ortest_2369z00_8736 = PAIRP(BgL_fieldsz00_44);
				if (BgL__ortest_2369z00_8736)
					{	/* Llib/object.scm 451 */
						return BgL__ortest_2369z00_8736;
					}
				else
					{	/* Llib/object.scm 451 */
						return NULLP(BgL_fieldsz00_44);
					}
			}
		}
	}



/* _class-fields? */
	obj_t BGl__classzd2fieldszf3z21zz__objectz00(obj_t BgL_envz00_7714,
		obj_t BgL_fieldsz00_7715)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 450 */
			{	/* Llib/object.scm 451 */
				bool_t BgL_auxz00_9608;

				{	/* Llib/object.scm 451 */
					bool_t BgL__ortest_2369z00_8738;

					BgL__ortest_2369z00_8738 = PAIRP(BgL_fieldsz00_7715);
					if (BgL__ortest_2369z00_8738)
						{	/* Llib/object.scm 451 */
							BgL_auxz00_9608 = BgL__ortest_2369z00_8738;
						}
					else
						{	/* Llib/object.scm 451 */
							BgL_auxz00_9608 = NULLP(BgL_fieldsz00_7715);
						}
				}
				return BBOOL(BgL_auxz00_9608);
			}
		}
	}



/* class-field-name */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t
		BgL_fieldz00_45)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 456 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_45))
				{	/* Llib/object.scm 457 */
					return VECTOR_REF(BgL_fieldz00_45, (int) (((long) 0)));
				}
			else
				{	/* Llib/object.scm 457 */
					return
						BGl_errorz00zz__errorz00(BGl_string4239z00zz__objectz00,
						BGl_string4240z00zz__objectz00, BgL_fieldz00_45);
				}
		}
	}



/* _class-field-name */
	obj_t BGl__classzd2fieldzd2namez00zz__objectz00(obj_t BgL_envz00_7716,
		obj_t BgL_fieldz00_7717)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 456 */
			return BGl_classzd2fieldzd2namez00zz__objectz00(BgL_fieldz00_7717);
		}
	}



/* class-field-indexed? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzd2indexedzf3zf3zz__objectz00(obj_t
		BgL_fieldz00_46)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 464 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_46))
				{	/* Llib/object.scm 465 */
					obj_t BgL_auxz00_9621;

					BgL_auxz00_9621 = VECTOR_REF(BgL_fieldz00_46, (int) (((long) 3)));
					return PROCEDUREP(BgL_auxz00_9621);
				}
			else
				{	/* Llib/object.scm 465 */
					return
						CBOOL(BGl_errorz00zz__errorz00(BGl_string4245z00zz__objectz00,
							BGl_string4240z00zz__objectz00, BgL_fieldz00_46));
				}
		}
	}



/* _class-field-indexed? */
	obj_t BGl__classzd2fieldzd2indexedzf3zf3zz__objectz00(obj_t BgL_envz00_7718,
		obj_t BgL_fieldz00_7719)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 464 */
			return
				BBOOL(BGl_classzd2fieldzd2indexedzf3zf3zz__objectz00
				(BgL_fieldz00_7719));
		}
	}



/* class-field-virtual? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t
		BgL_fieldz00_47)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 472 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_47))
				{	/* Llib/object.scm 473 */
					obj_t BgL_vectorz00_3191;

					int BgL_kz00_3192;

					BgL_vectorz00_3191 = BgL_fieldz00_47;
					BgL_kz00_3192 = (int) (((long) 4));
					return CBOOL(VECTOR_REF(BgL_vectorz00_3191, BgL_kz00_3192));
				}
			else
				{	/* Llib/object.scm 473 */
					return
						CBOOL(BGl_errorz00zz__errorz00(BGl_string4246z00zz__objectz00,
							BGl_string4240z00zz__objectz00, BgL_fieldz00_47));
				}
		}
	}



/* _class-field-virtual? */
	obj_t BGl__classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t BgL_envz00_7720,
		obj_t BgL_fieldz00_7721)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 472 */
			return
				BBOOL(BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00
				(BgL_fieldz00_7721));
		}
	}



/* class-field-accessor */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t
		BgL_fieldz00_48)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 480 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_48))
				{	/* Llib/object.scm 481 */
					return VECTOR_REF(BgL_fieldz00_48, (int) (((long) 1)));
				}
			else
				{	/* Llib/object.scm 481 */
					return
						BGl_errorz00zz__errorz00(BGl_string4247z00zz__objectz00,
						BGl_string4240z00zz__objectz00, BgL_fieldz00_48);
				}
		}
	}



/* _class-field-accessor */
	obj_t BGl__classzd2fieldzd2accessorz00zz__objectz00(obj_t BgL_envz00_7722,
		obj_t BgL_fieldz00_7723)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 480 */
			return BGl_classzd2fieldzd2accessorz00zz__objectz00(BgL_fieldz00_7723);
		}
	}



/* class-field-mutable? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t
		BgL_fieldz00_49)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 488 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_49))
				{	/* Llib/object.scm 489 */
					obj_t BgL_auxz00_9646;

					BgL_auxz00_9646 = VECTOR_REF(BgL_fieldz00_49, (int) (((long) 2)));
					return PROCEDUREP(BgL_auxz00_9646);
				}
			else
				{	/* Llib/object.scm 489 */
					return
						CBOOL(BGl_errorz00zz__errorz00(BGl_string4248z00zz__objectz00,
							BGl_string4240z00zz__objectz00, BgL_fieldz00_49));
				}
		}
	}



/* _class-field-mutable? */
	obj_t BGl__classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t BgL_envz00_7724,
		obj_t BgL_fieldz00_7725)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 488 */
			return
				BBOOL(BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00
				(BgL_fieldz00_7725));
		}
	}



/* class-field-mutator */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t
		BgL_fieldz00_50)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 496 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_50))
				{	/* Llib/object.scm 497 */
					return VECTOR_REF(BgL_fieldz00_50, (int) (((long) 2)));
				}
			else
				{	/* Llib/object.scm 497 */
					return
						BGl_errorz00zz__errorz00(BGl_string4249z00zz__objectz00,
						BGl_string4240z00zz__objectz00, BgL_fieldz00_50);
				}
		}
	}



/* _class-field-mutator */
	obj_t BGl__classzd2fieldzd2mutatorz00zz__objectz00(obj_t BgL_envz00_7726,
		obj_t BgL_fieldz00_7727)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 496 */
			return BGl_classzd2fieldzd2mutatorz00zz__objectz00(BgL_fieldz00_7727);
		}
	}



/* class-field-len-accessor */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2fieldzd2lenzd2accessorzd2zz__objectz00(obj_t BgL_fieldz00_51)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 504 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_51))
				{	/* Llib/object.scm 505 */
					return VECTOR_REF(BgL_fieldz00_51, (int) (((long) 3)));
				}
			else
				{	/* Llib/object.scm 505 */
					return
						BGl_errorz00zz__errorz00(BGl_string4250z00zz__objectz00,
						BGl_string4240z00zz__objectz00, BgL_fieldz00_51);
				}
		}
	}



/* _class-field-len-accessor */
	obj_t BGl__classzd2fieldzd2lenzd2accessorzd2zz__objectz00(obj_t
		BgL_envz00_7728, obj_t BgL_fieldz00_7729)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 504 */
			return
				BGl_classzd2fieldzd2lenzd2accessorzd2zz__objectz00(BgL_fieldz00_7729);
		}
	}



/* class-field-info */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2infoz00zz__objectz00(obj_t
		BgL_fieldz00_52)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 512 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_52))
				{	/* Llib/object.scm 513 */
					return VECTOR_REF(BgL_fieldz00_52, (int) (((long) 6)));
				}
			else
				{	/* Llib/object.scm 513 */
					return
						BGl_errorz00zz__errorz00(BGl_string4251z00zz__objectz00,
						BGl_string4240z00zz__objectz00, BgL_fieldz00_52);
				}
		}
	}



/* _class-field-info */
	obj_t BGl__classzd2fieldzd2infoz00zz__objectz00(obj_t BgL_envz00_7730,
		obj_t BgL_fieldz00_7731)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 512 */
			return BGl_classzd2fieldzd2infoz00zz__objectz00(BgL_fieldz00_7731);
		}
	}



/* class-field-default-value */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t BgL_fieldz00_53)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 520 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_53))
				{	/* Llib/object.scm 521 */
					return VECTOR_REF(BgL_fieldz00_53, (int) (((long) 7)));
				}
			else
				{	/* Llib/object.scm 521 */
					return
						BGl_errorz00zz__errorz00(BGl_string4252z00zz__objectz00,
						BGl_string4240z00zz__objectz00, BgL_fieldz00_53);
				}
		}
	}



/* _class-field-default-value */
	obj_t BGl__classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t
		BgL_envz00_7732, obj_t BgL_fieldz00_7733)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 520 */
			return
				BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_fieldz00_7733);
		}
	}



/* class-field-type */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t
		BgL_fieldz00_54)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 528 */
			if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_54))
				{	/* Llib/object.scm 529 */
					return VECTOR_REF(BgL_fieldz00_54, (int) (((long) 8)));
				}
			else
				{	/* Llib/object.scm 529 */
					return
						BGl_errorz00zz__errorz00(BGl_string4253z00zz__objectz00,
						BGl_string4240z00zz__objectz00, BgL_fieldz00_54);
				}
		}
	}



/* _class-field-type */
	obj_t BGl__classzd2fieldzd2typez00zz__objectz00(obj_t BgL_envz00_7734,
		obj_t BgL_fieldz00_7735)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 528 */
			return BGl_classzd2fieldzd2typez00zz__objectz00(BgL_fieldz00_7735);
		}
	}



/* class-super */
	BGL_EXPORTED_DEF obj_t BGl_classzd2superzd2zz__objectz00(obj_t
		BgL_classz00_55)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 536 */
			return VECTOR_REF(BgL_classz00_55, (int) (((long) 3)));
		}
	}



/* _class-super */
	obj_t BGl__classzd2superzd2zz__objectz00(obj_t BgL_envz00_7736,
		obj_t BgL_classz00_7737)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 536 */
			return BGl_classzd2superzd2zz__objectz00(BgL_classz00_7737);
		}
	}



/* class-abstract? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2abstractzf3z21zz__objectz00(obj_t
		BgL_classz00_56)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 542 */
			{	/* Llib/object.scm 543 */
				obj_t BgL_vectorz00_3218;

				int BgL_kz00_3219;

				BgL_vectorz00_3218 = BgL_classz00_56;
				BgL_kz00_3219 = (int) (((long) 15));
				return CBOOL(VECTOR_REF(BgL_vectorz00_3218, BgL_kz00_3219));
			}
		}
	}



/* _class-abstract? */
	obj_t BGl__classzd2abstractzf3z21zz__objectz00(obj_t BgL_envz00_7738,
		obj_t BgL_classz00_7739)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 542 */
			return BBOOL(BGl_classzd2abstractzf3z21zz__objectz00(BgL_classz00_7739));
		}
	}



/* class-subclasses */
	BGL_EXPORTED_DEF obj_t BGl_classzd2subclasseszd2zz__objectz00(obj_t
		BgL_classz00_57)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 548 */
			return VECTOR_REF(BgL_classz00_57, (int) (((long) 4)));
		}
	}



/* _class-subclasses */
	obj_t BGl__classzd2subclasseszd2zz__objectz00(obj_t BgL_envz00_7740,
		obj_t BgL_classz00_7741)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 548 */
			return BGl_classzd2subclasseszd2zz__objectz00(BgL_classz00_7741);
		}
	}



/* class-hash */
	BGL_EXPORTED_DEF long BGl_classzd2hashzd2zz__objectz00(obj_t BgL_classz00_62)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 572 */
			{	/* Llib/object.scm 573 */
				obj_t BgL_vectorz00_3227;

				int BgL_kz00_3228;

				BgL_vectorz00_3227 = BgL_classz00_62;
				BgL_kz00_3228 = (int) (((long) 7));
				return (long) CINT(VECTOR_REF(BgL_vectorz00_3227, BgL_kz00_3228));
		}}
	}



/* _class-hash */
	obj_t BGl__classzd2hashzd2zz__objectz00(obj_t BgL_envz00_7742,
		obj_t BgL_classz00_7743)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 572 */
			return BINT(BGl_classzd2hashzd2zz__objectz00(BgL_classz00_7743));
		}
	}



/* class-constructor */
	BGL_EXPORTED_DEF obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t
		BgL_classz00_63)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 578 */
			return VECTOR_REF(BgL_classz00_63, (int) (((long) 9)));
		}
	}



/* _class-constructor */
	obj_t BGl__classzd2constructorzd2zz__objectz00(obj_t BgL_envz00_7744,
		obj_t BgL_classz00_7745)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 578 */
			return BGl_classzd2constructorzd2zz__objectz00(BgL_classz00_7745);
		}
	}



/* class-creator */
	BGL_EXPORTED_DEF obj_t BGl_classzd2creatorzd2zz__objectz00(obj_t
		BgL_classz00_64)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 584 */
			return VECTOR_REF(BgL_classz00_64, (int) (((long) 11)));
		}
	}



/* _class-creator */
	obj_t BGl__classzd2creatorzd2zz__objectz00(obj_t BgL_envz00_7746,
		obj_t BgL_classz00_7747)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 584 */
			return BGl_classzd2creatorzd2zz__objectz00(BgL_classz00_7747);
		}
	}



/* class-nil */
	BGL_EXPORTED_DEF obj_t BGl_classzd2nilzd2zz__objectz00(obj_t BgL_classz00_65)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 590 */
			return VECTOR_REF(BgL_classz00_65, (int) (((long) 12)));
		}
	}



/* _class-nil */
	obj_t BGl__classzd2nilzd2zz__objectz00(obj_t BgL_envz00_7748,
		obj_t BgL_classz00_7749)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 590 */
			return BGl_classzd2nilzd2zz__objectz00(BgL_classz00_7749);
		}
	}



/* initialize-objects! */
	obj_t BGl_initializa7ezd2objectsz12z67zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 624 */
			if (INTEGERP(BGl_za2nbzd2classesza2zd2zz__objectz00))
				{	/* Llib/object.scm 625 */
					return BFALSE;
				}
			else
				{	/* Llib/object.scm 625 */
					BGl_za2nbzd2classesza2zd2zz__objectz00 = BINT(((long) 0));
					BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 = ((long) 64);
					BGl_za2classesza2z00zz__objectz00 =
						make_vector_uncollectable(
						(int) (BGl_za2nbzd2classeszd2maxza2z00zz__objectz00), BFALSE);
					BGl_za2nbzd2genericszd2maxza2z00zz__objectz00 = ((long) 64);
					BGl_za2nbzd2genericsza2zd2zz__objectz00 = ((long) 0);
					BGl_za2genericsza2z00zz__objectz00 =
						make_vector_uncollectable(
						(int) (BGl_za2nbzd2genericszd2maxza2z00zz__objectz00), BFALSE);
					return BFALSE;
				}
		}
	}



/* double-vector */
	obj_t BGl_doublezd2vectorzd2zz__objectz00(obj_t BgL_oldzd2veczd2_66,
		obj_t BgL_fillz00_67)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 637 */
			{	/* Llib/object.scm 638 */
				int BgL_oldzd2lenzd2_1190;

				BgL_oldzd2lenzd2_1190 = VECTOR_LENGTH(BgL_oldzd2veczd2_66);
				{	/* Llib/object.scm 638 */
					long BgL_newzd2lenzd2_1191;

					BgL_newzd2lenzd2_1191 = (((long) 2) * (long) (BgL_oldzd2lenzd2_1190));
					{	/* Llib/object.scm 639 */
						obj_t BgL_newzd2veczd2_1192;

						BgL_newzd2veczd2_1192 =
							make_vector_uncollectable(
							(int) (BgL_newzd2lenzd2_1191), BgL_fillz00_67);
						{	/* Llib/object.scm 640 */

							{
								long BgL_iz00_1194;

								BgL_iz00_1194 = ((long) 0);
							BgL_zc3anonymousza32620ze3z83_1195:
								if ((BgL_iz00_1194 == (long) (BgL_oldzd2lenzd2_1190)))
									{	/* Llib/object.scm 642 */
										FREE_VECTOR_UNCOLLECTABLE(BgL_oldzd2veczd2_66);
										BUNSPEC;
										return BgL_newzd2veczd2_1192;
									}
								else
									{	/* Llib/object.scm 642 */
										VECTOR_SET(BgL_newzd2veczd2_1192,
											(int) (BgL_iz00_1194),
											VECTOR_REF(BgL_oldzd2veczd2_66, (int) (BgL_iz00_1194)));
										{
											long BgL_iz00_9729;

											BgL_iz00_9729 = (BgL_iz00_1194 + ((long) 1));
											BgL_iz00_1194 = BgL_iz00_9729;
											goto BgL_zc3anonymousza32620ze3z83_1195;
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* double-nb-classes! */
	bool_t BGl_doublezd2nbzd2classesz12z12zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 653 */
			BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 =
				(((long) 2) * BGl_za2nbzd2classeszd2maxza2z00zz__objectz00);
			BGl_za2classesza2z00zz__objectz00 =
				BGl_doublezd2vectorzd2zz__objectz00(BGl_za2classesza2z00zz__objectz00,
				BFALSE);
			{
				long BgL_iz00_1201;

				BgL_iz00_1201 = ((long) 0);
			BgL_zc3anonymousza32624ze3z83_1202:
				if ((BgL_iz00_1201 < BGl_za2nbzd2genericsza2zd2zz__objectz00))
					{	/* Llib/object.scm 659 */
						obj_t BgL_genz00_1204;

						BgL_genz00_1204 =
							VECTOR_REF(BGl_za2genericsza2z00zz__objectz00,
							(int) (BgL_iz00_1201));
						{	/* Llib/object.scm 659 */
							obj_t BgL_defaultzd2bucketzd2_1205;

							BgL_defaultzd2bucketzd2_1205 =
								PROCEDURE_REF(BgL_genz00_1204, (int) (((long) 2)));
							{	/* Llib/object.scm 660 */
								obj_t BgL_oldzd2methodzd2arrayz00_1206;

								BgL_oldzd2methodzd2arrayz00_1206 =
									PROCEDURE_REF(BgL_genz00_1204, (int) (((long) 1)));
								{	/* Llib/object.scm 661 */

									PROCEDURE_SET(BgL_genz00_1204,
										(int) (((long) 1)),
										BGl_doublezd2vectorzd2zz__objectz00
										(BgL_oldzd2methodzd2arrayz00_1206,
											BgL_defaultzd2bucketzd2_1205));
									{
										long BgL_iz00_9744;

										BgL_iz00_9744 = (BgL_iz00_1201 + ((long) 1));
										BgL_iz00_1201 = BgL_iz00_9744;
										goto BgL_zc3anonymousza32624ze3z83_1202;
									}
								}
							}
						}
					}
				else
					{	/* Llib/object.scm 658 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* double-nb-generics! */
	obj_t BGl_doublezd2nbzd2genericsz12z12zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 670 */
			BGl_za2nbzd2genericszd2maxza2z00zz__objectz00 =
				(((long) 2) * BGl_za2nbzd2genericszd2maxza2z00zz__objectz00);
			return (BGl_za2genericsza2z00zz__objectz00 =
				BGl_doublezd2vectorzd2zz__objectz00(BGl_za2genericsza2z00zz__objectz00,
					BFALSE), BUNSPEC);
		}
	}



/* object? */
	BGL_EXPORTED_DEF bool_t BGl_objectzf3zf3zz__objectz00(obj_t BgL_objz00_68)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 677 */
			return BGL_OBJECTP(BgL_objz00_68);
		}
	}



/* _object? */
	obj_t BGl__objectzf3zf3zz__objectz00(obj_t BgL_envz00_7750,
		obj_t BgL_objz00_7751)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 677 */
			return BBOOL(BGL_OBJECTP(BgL_objz00_7751));
		}
	}



/* object-class-num */
	BGL_EXPORTED_DEF long
		BGl_objectzd2classzd2numz00zz__objectz00(BgL_objectz00_bglt BgL_objz00_69)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 683 */
			return BGL_OBJECT_CLASS_NUM(BgL_objz00_69);
		}
	}



/* _object-class-num */
	obj_t BGl__objectzd2classzd2numz00zz__objectz00(obj_t BgL_envz00_7752,
		obj_t BgL_objz00_7753)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 683 */
			{	/* Llib/object.scm 684 */
				long BgL_auxz00_9752;

				{	/* Llib/object.scm 684 */
					BgL_objectz00_bglt BgL_objz00_8742;

					if (BGL_OBJECTP(BgL_objz00_7753))
						{	/* Llib/object.scm 684 */
							BgL_objz00_8742 = (BgL_objectz00_bglt) (BgL_objz00_7753);
						}
					else
						{
							obj_t BgL_auxz00_9756;

							BgL_auxz00_9756 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 30626)), BGl_string4254z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_objz00_7753);
							FAILURE(BgL_auxz00_9756, BFALSE, BFALSE);
						}
					BgL_auxz00_9752 = BGL_OBJECT_CLASS_NUM(BgL_objz00_8742);
				}
				return BINT(BgL_auxz00_9752);
			}
		}
	}



/* object-class-num-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_objectzd2classzd2numzd2setz12zc0zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_70, long BgL_numz00_71)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 689 */
			return BGL_OBJECT_CLASS_NUM_SET(BgL_objz00_70, BgL_numz00_71);
		}
	}



/* _object-class-num-set! */
	obj_t BGl__objectzd2classzd2numzd2setz12zc0zz__objectz00(obj_t
		BgL_envz00_7754, obj_t BgL_objz00_7755, obj_t BgL_numz00_7756)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 689 */
			{	/* Llib/object.scm 690 */
				BgL_objectz00_bglt BgL_objz00_8744;

				long BgL_numz00_8745;

				if (BGL_OBJECTP(BgL_objz00_7755))
					{	/* Llib/object.scm 690 */
						BgL_objz00_8744 = (BgL_objectz00_bglt) (BgL_objz00_7755);
					}
				else
					{
						obj_t BgL_auxz00_9766;

						BgL_auxz00_9766 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 30924)), BGl_string4256z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_7755);
						FAILURE(BgL_auxz00_9766, BFALSE, BFALSE);
					}
				{	/* Llib/object.scm 690 */
					obj_t BgL_auxz00_9770;

					if (INTEGERP(BgL_numz00_7756))
						{	/* Llib/object.scm 690 */
							BgL_auxz00_9770 = BgL_numz00_7756;
						}
					else
						{
							obj_t BgL_auxz00_9773;

							BgL_auxz00_9773 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 30924)), BGl_string4256z00zz__objectz00,
								BGl_string4257z00zz__objectz00, BgL_numz00_7756);
							FAILURE(BgL_auxz00_9773, BFALSE, BFALSE);
						}
					BgL_numz00_8745 = (long) CINT(BgL_auxz00_9770);
				}
				return BGL_OBJECT_CLASS_NUM_SET(BgL_objz00_8744, BgL_numz00_8745);
			}
		}
	}



/* object-class */
	BGL_EXPORTED_DEF obj_t BGl_objectzd2classzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objectz00_72)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 695 */
			{	/* Llib/object.scm 697 */
				long BgL_arg2628z00_8746;

				{	/* Llib/object.scm 697 */
					long BgL_arg2629z00_8747;

					BgL_arg2629z00_8747 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_72);
					BgL_arg2628z00_8746 = (BgL_arg2629z00_8747 - OBJECT_TYPE);
				}
				return
					VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
					(int) (BgL_arg2628z00_8746));
		}}
	}



/* _object-class */
	obj_t BGl__objectzd2classzd2zz__objectz00(obj_t BgL_envz00_7757,
		obj_t BgL_objectz00_7758)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 695 */
			{	/* Llib/object.scm 697 */
				BgL_objectz00_bglt BgL_objectz00_8749;

				if (BGL_OBJECTP(BgL_objectz00_7758))
					{	/* Llib/object.scm 697 */
						BgL_objectz00_8749 = (BgL_objectz00_bglt) (BgL_objectz00_7758);
					}
				else
					{
						obj_t BgL_auxz00_9786;

						BgL_auxz00_9786 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 31263)), BGl_string4258z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objectz00_7758);
						FAILURE(BgL_auxz00_9786, BFALSE, BFALSE);
					}
				{	/* Llib/object.scm 697 */
					long BgL_arg2628z00_8750;

					{	/* Llib/object.scm 697 */
						long BgL_arg2629z00_8751;

						BgL_arg2629z00_8751 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_8749);
						BgL_arg2628z00_8750 = (BgL_arg2629z00_8751 - OBJECT_TYPE);
					}
					return
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
						(int) (BgL_arg2628z00_8750));
		}}}
	}



/* generic-default */
	BGL_EXPORTED_DEF obj_t BGl_genericzd2defaultzd2zz__objectz00(obj_t
		BgL_genericz00_73)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 702 */
			return PROCEDURE_REF(BgL_genericz00_73, (int) (((long) 0)));
		}
	}



/* _generic-default */
	obj_t BGl__genericzd2defaultzd2zz__objectz00(obj_t BgL_envz00_7759,
		obj_t BgL_genericz00_7760)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 702 */
			{	/* Llib/object.scm 703 */
				obj_t BgL_res4498z00_8753;

				{	/* Llib/object.scm 703 */
					obj_t BgL_genericz00_8752;

					if (PROCEDUREP(BgL_genericz00_7760))
						{	/* Llib/object.scm 703 */
							BgL_genericz00_8752 = BgL_genericz00_7760;
						}
					else
						{
							obj_t BgL_auxz00_9798;

							BgL_auxz00_9798 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 31579)), BGl_string4259z00zz__objectz00,
								BGl_string4260z00zz__objectz00, BgL_genericz00_7760);
							FAILURE(BgL_auxz00_9798, BFALSE, BFALSE);
						}
					BgL_res4498z00_8753 =
						PROCEDURE_REF(BgL_genericz00_8752, (int) (((long) 0)));
				}
				return BgL_res4498z00_8753;
			}
		}
	}



/* generic-method-array */
	BGL_EXPORTED_DEF obj_t BGl_genericzd2methodzd2arrayz00zz__objectz00(obj_t
		BgL_genericz00_76)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 711 */
			return PROCEDURE_REF(BgL_genericz00_76, (int) (((long) 1)));
		}
	}



/* _generic-method-array */
	obj_t BGl__genericzd2methodzd2arrayz00zz__objectz00(obj_t BgL_envz00_7761,
		obj_t BgL_genericz00_7762)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 711 */
			{	/* Llib/object.scm 712 */
				obj_t BgL_genericz00_8754;

				if (PROCEDUREP(BgL_genericz00_7762))
					{	/* Llib/object.scm 712 */
						BgL_genericz00_8754 = BgL_genericz00_7762;
					}
				else
					{
						obj_t BgL_auxz00_9808;

						BgL_auxz00_9808 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 31972)), BGl_string4261z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_genericz00_7762);
						FAILURE(BgL_auxz00_9808, BFALSE, BFALSE);
					}
				return PROCEDURE_REF(BgL_genericz00_8754, (int) (((long) 1)));
		}}
	}



/* method-array-ref */
	BGL_EXPORTED_DEF obj_t BGl_methodzd2arrayzd2refz00zz__objectz00(obj_t
		BgL_genericz00_82, obj_t BgL_arrayz00_83, int BgL_offsetz00_84)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 729 */
			{	/* Llib/object.scm 730 */
				long BgL_offsetz00_8755;

				BgL_offsetz00_8755 = ((long) (BgL_offsetz00_84) - OBJECT_TYPE);
				{	/* Llib/object.scm 730 */
					long BgL_modz00_8756;

					{	/* Llib/object.scm 730 */
						int BgL_arg2631z00_8757;

						BgL_arg2631z00_8757 = (int) (((long) 16));
						{	/* Llib/object.scm 730 */
							long BgL_auxz00_9817;

							BgL_auxz00_9817 = (long) (BgL_arg2631z00_8757);
							BgL_modz00_8756 = (BgL_offsetz00_8755 / BgL_auxz00_9817);
					}}
					{	/* Llib/object.scm 730 */
						long BgL_restz00_8758;

						{	/* Llib/object.scm 730 */
							int BgL_arg2630z00_8759;

							BgL_arg2630z00_8759 = (int) (((long) 16));
							{	/* Llib/object.scm 730 */
								long BgL_auxz00_9821;

								BgL_auxz00_9821 = (long) (BgL_arg2630z00_8759);
								BgL_restz00_8758 = (BgL_offsetz00_8755 % BgL_auxz00_9821);
						}}
						{	/* Llib/object.scm 730 */

							return
								VECTOR_REF(VECTOR_REF(BgL_arrayz00_83,
									(int) (BgL_modz00_8756)), (int) (BgL_restz00_8758));
		}}}}}
	}



/* _method-array-ref */
	obj_t BGl__methodzd2arrayzd2refz00zz__objectz00(obj_t BgL_envz00_7763,
		obj_t BgL_genericz00_7764, obj_t BgL_arrayz00_7765,
		obj_t BgL_offsetz00_7766)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 729 */
			{	/* Llib/object.scm 730 */
				obj_t BgL_genericz00_8761;

				obj_t BgL_arrayz00_8762;

				int BgL_offsetz00_8763;

				if (PROCEDUREP(BgL_genericz00_7764))
					{	/* Llib/object.scm 730 */
						BgL_genericz00_8761 = BgL_genericz00_7764;
					}
				else
					{
						obj_t BgL_auxz00_9830;

						BgL_auxz00_9830 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 32829)), BGl_string4262z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_genericz00_7764);
						FAILURE(BgL_auxz00_9830, BFALSE, BFALSE);
					}
				if (VECTORP(BgL_arrayz00_7765))
					{	/* Llib/object.scm 730 */
						BgL_arrayz00_8762 = BgL_arrayz00_7765;
					}
				else
					{
						obj_t BgL_auxz00_9836;

						BgL_auxz00_9836 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 32829)), BGl_string4262z00zz__objectz00,
							BGl_string4235z00zz__objectz00, BgL_arrayz00_7765);
						FAILURE(BgL_auxz00_9836, BFALSE, BFALSE);
					}
				{	/* Llib/object.scm 730 */
					obj_t BgL_auxz00_9840;

					if (INTEGERP(BgL_offsetz00_7766))
						{	/* Llib/object.scm 730 */
							BgL_auxz00_9840 = BgL_offsetz00_7766;
						}
					else
						{
							obj_t BgL_auxz00_9843;

							BgL_auxz00_9843 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 32829)), BGl_string4262z00zz__objectz00,
								BGl_string4263z00zz__objectz00, BgL_offsetz00_7766);
							FAILURE(BgL_auxz00_9843, BFALSE, BFALSE);
						}
					BgL_offsetz00_8763 = CINT(BgL_auxz00_9840);
				}
				{	/* Llib/object.scm 730 */
					long BgL_offsetz00_8764;

					BgL_offsetz00_8764 = ((long) (BgL_offsetz00_8763) - OBJECT_TYPE);
					{	/* Llib/object.scm 730 */
						long BgL_modz00_8765;

						{	/* Llib/object.scm 730 */
							int BgL_arg2631z00_8766;

							BgL_arg2631z00_8766 = (int) (((long) 16));
							{	/* Llib/object.scm 730 */
								long BgL_auxz00_9851;

								BgL_auxz00_9851 = (long) (BgL_arg2631z00_8766);
								BgL_modz00_8765 = (BgL_offsetz00_8764 / BgL_auxz00_9851);
						}}
						{	/* Llib/object.scm 730 */
							long BgL_restz00_8767;

							{	/* Llib/object.scm 730 */
								int BgL_arg2630z00_8768;

								BgL_arg2630z00_8768 = (int) (((long) 16));
								{	/* Llib/object.scm 730 */
									long BgL_auxz00_9855;

									BgL_auxz00_9855 = (long) (BgL_arg2630z00_8768);
									BgL_restz00_8767 = (BgL_offsetz00_8764 % BgL_auxz00_9855);
							}}
							{	/* Llib/object.scm 730 */

								return
									VECTOR_REF(VECTOR_REF(BgL_arrayz00_8762,
										(int) (BgL_modz00_8765)), (int) (BgL_restz00_8767));
		}}}}}}
	}



/* method-array-set! */
	obj_t BGl_methodzd2arrayzd2setz12z12zz__objectz00(obj_t BgL_genericz00_85,
		obj_t BgL_arrayz00_86, long BgL_offsetz00_87, obj_t BgL_methodz00_88)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 739 */
			{	/* Llib/object.scm 740 */
				long BgL_offsetz00_1218;

				BgL_offsetz00_1218 = (BgL_offsetz00_87 - OBJECT_TYPE);
				{	/* Llib/object.scm 740 */
					long BgL_modz00_1219;

					{	/* Llib/object.scm 741 */
						int BgL_arg2639z00_1230;

						BgL_arg2639z00_1230 = (int) (((long) 16));
						{	/* Llib/object.scm 741 */
							long BgL_auxz00_9864;

							BgL_auxz00_9864 = (long) (BgL_arg2639z00_1230);
							BgL_modz00_1219 = (BgL_offsetz00_1218 / BgL_auxz00_9864);
					}}
					{	/* Llib/object.scm 741 */
						long BgL_restz00_1220;

						{	/* Llib/object.scm 742 */
							int BgL_arg2638z00_1229;

							BgL_arg2638z00_1229 = (int) (((long) 16));
							{	/* Llib/object.scm 742 */
								long BgL_auxz00_9868;

								BgL_auxz00_9868 = (long) (BgL_arg2638z00_1229);
								BgL_restz00_1220 = (BgL_offsetz00_1218 % BgL_auxz00_9868);
						}}
						{	/* Llib/object.scm 742 */

							{	/* Llib/object.scm 743 */
								obj_t BgL_bucketz00_1221;

								BgL_bucketz00_1221 =
									VECTOR_REF(BgL_arrayz00_86, (int) (BgL_modz00_1219));
								{	/* Llib/object.scm 744 */
									bool_t BgL_testz00_9873;

									if (
										(BgL_methodz00_88 ==
											PROCEDURE_REF(BgL_genericz00_85, (int) (((long) 0)))))
										{	/* Llib/object.scm 744 */
											BgL_testz00_9873 = ((bool_t) 1);
										}
									else
										{	/* Llib/object.scm 744 */
											if (
												(BgL_bucketz00_1221 ==
													PROCEDURE_REF(BgL_genericz00_85, (int) (((long) 2)))))
												{	/* Llib/object.scm 745 */
													BgL_testz00_9873 = ((bool_t) 0);
												}
											else
												{	/* Llib/object.scm 745 */
													BgL_testz00_9873 = ((bool_t) 1);
												}
										}
									if (BgL_testz00_9873)
										{	/* Llib/object.scm 747 */
											obj_t BgL_vectorz00_3304;

											int BgL_kz00_3305;

											BgL_vectorz00_3304 = BgL_bucketz00_1221;
											BgL_kz00_3305 = (int) (BgL_restz00_1220);
											{	/* Llib/object.scm 747 */
												obj_t BgL_xz00_8544;

												BgL_xz00_8544 =
													VECTOR_SET(BgL_vectorz00_3304, BgL_kz00_3305,
													BgL_methodz00_88);
												return BUNSPEC;
											}
										}
									else
										{	/* Llib/object.scm 749 */
											obj_t BgL_bucketz00_1223;

											BgL_bucketz00_1223 =
												BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00
												(BgL_bucketz00_1221, (int) (((long) 16)));
											VECTOR_SET(BgL_bucketz00_1223, (int) (BgL_restz00_1220),
												BgL_methodz00_88);
											{	/* Llib/object.scm 751 */
												obj_t BgL_vectorz00_3311;

												int BgL_kz00_3312;

												BgL_vectorz00_3311 = BgL_arrayz00_86;
												BgL_kz00_3312 = (int) (BgL_modz00_1219);
												{	/* Llib/object.scm 751 */
													obj_t BgL_xz00_8545;

													BgL_xz00_8545 =
														VECTOR_SET(BgL_vectorz00_3311, BgL_kz00_3312,
														BgL_bucketz00_1223);
													return BUNSPEC;
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
	}



/* generic-memory-statistics */
	BGL_EXPORTED_DEF obj_t BGl_genericzd2memoryzd2statisticsz00zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 756 */
			return
				BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
				BGl_proc4264z00zz__objectz00);
		}
	}



/* _generic-memory-statistics */
	obj_t BGl__genericzd2memoryzd2statisticsz00zz__objectz00(obj_t
		BgL_envz00_7768)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 756 */
			return BGl_genericzd2memoryzd2statisticsz00zz__objectz00();
		}
	}



/* <anonymous:2641> */
	obj_t BGl_zc3anonymousza32641ze3z83zz__objectz00(obj_t BgL_envz00_7769)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 759 */
			{

				{
					long BgL_gz00_1234;

					long BgL_siza7eza7_1235;

					BgL_gz00_1234 = ((long) 0);
					BgL_siza7eza7_1235 = ((long) 0);
				BgL_zc3anonymousza32642ze3z83_1236:
					if ((BgL_gz00_1234 == BGl_za2nbzd2genericsza2zd2zz__objectz00))
						{	/* Llib/object.scm 763 */
							obj_t BgL_arg2644z00_1238;

							obj_t BgL_arg2645z00_1239;

							{	/* Llib/object.scm 763 */
								obj_t BgL_arg2646z00_1240;

								obj_t BgL_arg2647z00_1241;

								BgL_arg2646z00_1240 = BGl_symbol4265z00zz__objectz00;
								{	/* Llib/object.scm 763 */
									obj_t BgL_list2648z00_1242;

									BgL_list2648z00_1242 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2647z00_1241 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
										(BGl_za2nbzd2genericsza2zd2zz__objectz00),
										BgL_list2648z00_1242);
								}
								BgL_arg2644z00_1238 =
									MAKE_PAIR(BgL_arg2646z00_1240, BgL_arg2647z00_1241);
							}
							{	/* Llib/object.scm 764 */
								obj_t BgL_arg2649z00_1243;

								obj_t BgL_arg2650z00_1244;

								obj_t BgL_arg2651z00_1245;

								obj_t BgL_arg2652z00_1246;

								obj_t BgL_arg2655z00_1247;

								obj_t BgL_arg2656z00_1248;

								{	/* Llib/object.scm 764 */
									obj_t BgL_arg2665z00_1256;

									obj_t BgL_arg2666z00_1257;

									BgL_arg2665z00_1256 = BGl_symbol4267z00zz__objectz00;
									{	/* Llib/object.scm 764 */
										obj_t BgL_list2667z00_1258;

										BgL_list2667z00_1258 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2666z00_1257 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BGl_za2nbzd2classesza2zd2zz__objectz00,
											BgL_list2667z00_1258);
									}
									BgL_arg2649z00_1243 =
										MAKE_PAIR(BgL_arg2665z00_1256, BgL_arg2666z00_1257);
								}
								{	/* Llib/object.scm 765 */
									obj_t BgL_arg2668z00_1259;

									obj_t BgL_arg2669z00_1260;

									BgL_arg2668z00_1259 = BGl_symbol4268z00zz__objectz00;
									{	/* Llib/object.scm 765 */
										obj_t BgL_list2670z00_1261;

										BgL_list2670z00_1261 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2669z00_1260 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
											(BgL_siza7eza7_1235), BgL_list2670z00_1261);
									}
									BgL_arg2650z00_1244 =
										MAKE_PAIR(BgL_arg2668z00_1259, BgL_arg2669z00_1260);
								}
								{	/* Llib/object.scm 766 */
									obj_t BgL_arg2671z00_1262;

									obj_t BgL_arg2672z00_1263;

									BgL_arg2671z00_1262 = BGl_symbol4270z00zz__objectz00;
									{	/* Llib/object.scm 766 */
										int BgL_arg2673z00_1264;

										BgL_arg2673z00_1264 =
											VECTOR_LENGTH(PROCEDURE_REF(VECTOR_REF
												(BGl_za2genericsza2z00zz__objectz00,
													(int) (((long) 0))), (int) (((long) 1))));
										{	/* Llib/object.scm 766 */
											obj_t BgL_list2675z00_1266;

											BgL_list2675z00_1266 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2672z00_1263 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
												(BgL_arg2673z00_1264), BgL_list2675z00_1266);
									}}
									BgL_arg2651z00_1245 =
										MAKE_PAIR(BgL_arg2671z00_1262, BgL_arg2672z00_1263);
								}
								{	/* Llib/object.scm 767 */
									obj_t BgL_arg2678z00_1269;

									obj_t BgL_arg2679z00_1270;

									BgL_arg2678z00_1269 = BGl_symbol4272z00zz__objectz00;
									{	/* Llib/object.scm 767 */
										int BgL_arg2680z00_1271;

										BgL_arg2680z00_1271 = (int) (((long) 16));
										{	/* Llib/object.scm 767 */
											obj_t BgL_list2682z00_1273;

											BgL_list2682z00_1273 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2679z00_1270 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
												(BgL_arg2680z00_1271), BgL_list2682z00_1273);
									}}
									BgL_arg2652z00_1246 =
										MAKE_PAIR(BgL_arg2678z00_1269, BgL_arg2679z00_1270);
								}
								{	/* Llib/object.scm 768 */
									obj_t BgL_arg2683z00_1274;

									obj_t BgL_arg2684z00_1275;

									BgL_arg2683z00_1274 = BGl_symbol4274z00zz__objectz00;
									{	/* Llib/object.scm 768 */
										obj_t BgL_list2685z00_1276;

										BgL_list2685z00_1276 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2684z00_1275 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
											(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00),
											BgL_list2685z00_1276);
									}
									BgL_arg2655z00_1247 =
										MAKE_PAIR(BgL_arg2683z00_1274, BgL_arg2684z00_1275);
								}
								{	/* Llib/object.scm 769 */
									obj_t BgL_arg2686z00_1277;

									obj_t BgL_arg2687z00_1278;

									BgL_arg2686z00_1277 = BGl_symbol4276z00zz__objectz00;
									{	/* Llib/object.scm 769 */
										obj_t BgL_list2688z00_1279;

										BgL_list2688z00_1279 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2687z00_1278 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
											(BGl_za2nbzd2genericszd2maxza2z00zz__objectz00),
											BgL_list2688z00_1279);
									}
									BgL_arg2656z00_1248 =
										MAKE_PAIR(BgL_arg2686z00_1277, BgL_arg2687z00_1278);
								}
								{	/* Llib/object.scm 763 */
									obj_t BgL_list2658z00_1250;

									{	/* Llib/object.scm 763 */
										obj_t BgL_arg2659z00_1251;

										{	/* Llib/object.scm 763 */
											obj_t BgL_arg2660z00_1252;

											{	/* Llib/object.scm 763 */
												obj_t BgL_arg2661z00_1253;

												{	/* Llib/object.scm 763 */
													obj_t BgL_arg2663z00_1254;

													{	/* Llib/object.scm 763 */
														obj_t BgL_arg2664z00_1255;

														BgL_arg2664z00_1255 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2663z00_1254 =
															MAKE_PAIR(BgL_arg2656z00_1248,
															BgL_arg2664z00_1255);
													}
													BgL_arg2661z00_1253 =
														MAKE_PAIR(BgL_arg2655z00_1247, BgL_arg2663z00_1254);
												}
												BgL_arg2660z00_1252 =
													MAKE_PAIR(BgL_arg2652z00_1246, BgL_arg2661z00_1253);
											}
											BgL_arg2659z00_1251 =
												MAKE_PAIR(BgL_arg2651z00_1245, BgL_arg2660z00_1252);
										}
										BgL_list2658z00_1250 =
											MAKE_PAIR(BgL_arg2650z00_1244, BgL_arg2659z00_1251);
									}
									BgL_arg2645z00_1239 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2649z00_1243, BgL_list2658z00_1250);
							}}
							return MAKE_PAIR(BgL_arg2644z00_1238, BgL_arg2645z00_1239);
						}
					else
						{	/* Llib/object.scm 770 */
							obj_t BgL_genz00_1280;

							BgL_genz00_1280 =
								VECTOR_REF(BGl_za2genericsza2z00zz__objectz00,
								(int) (BgL_gz00_1234));
							{	/* Llib/object.scm 770 */
								obj_t BgL_dbuckz00_1281;

								BgL_dbuckz00_1281 =
									PROCEDURE_REF(BgL_genz00_1280, (int) (((long) 2)));
								{	/* Llib/object.scm 771 */
									long BgL_dza7za7_1282;

									BgL_dza7za7_1282 = ((long) 0);
									{	/* Llib/object.scm 772 */
										obj_t BgL_sza7za7_1283;

										{	/* Llib/object.scm 773 */
											obj_t BgL_runner2708z00_1312;

											{	/* Llib/object.scm 773 */
												obj_t BgL_l2396z00_1292;

												BgL_l2396z00_1292 =
													BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
													(PROCEDURE_REF(BgL_genz00_1280, (int) (((long) 1))));
												if (NULLP(BgL_l2396z00_1292))
													{	/* Llib/object.scm 773 */
														BgL_runner2708z00_1312 = BNIL;
													}
												else
													{	/* Llib/object.scm 773 */
														obj_t BgL_head2398z00_1294;

														BgL_head2398z00_1294 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l2396z00_1296;

															obj_t BgL_tail2399z00_1297;

															BgL_l2396z00_1296 = BgL_l2396z00_1292;
															BgL_tail2399z00_1297 = BgL_head2398z00_1294;
														BgL_zc3anonymousza32697ze3z83_1298:
															if (NULLP(BgL_l2396z00_1296))
																{	/* Llib/object.scm 773 */
																	BgL_runner2708z00_1312 =
																		CDR(BgL_head2398z00_1294);
																}
															else
																{	/* Llib/object.scm 773 */
																	obj_t BgL_newtail2400z00_1300;

																	{	/* Llib/object.scm 773 */
																		long BgL_arg2700z00_1302;

																		{	/* Llib/object.scm 773 */
																			obj_t BgL_bz00_1304;

																			BgL_bz00_1304 = CAR(BgL_l2396z00_1296);
																			if ((BgL_bz00_1304 == BgL_dbuckz00_1281))
																				{	/* Llib/object.scm 775 */
																					{	/* Llib/object.scm 776 */
																						int BgL_arg2703z00_1306;

																						BgL_arg2703z00_1306 =
																							VECTOR_LENGTH(BgL_bz00_1304);
																						BgL_dza7za7_1282 =
																							(
																							(long) (BgL_arg2703z00_1306) *
																							((long) 4));
																					}
																					BgL_arg2700z00_1302 = ((long) 0);
																				}
																			else
																				{	/* Llib/object.scm 779 */
																					int BgL_arg2706z00_1309;

																					BgL_arg2706z00_1309 =
																						VECTOR_LENGTH(BgL_bz00_1304);
																					BgL_arg2700z00_1302 =
																						(((long) 4) *
																						(long) (BgL_arg2706z00_1309));
																		}}
																		BgL_newtail2400z00_1300 =
																			MAKE_PAIR(BINT(BgL_arg2700z00_1302),
																			BNIL);
																	}
																	SET_CDR(BgL_tail2399z00_1297,
																		BgL_newtail2400z00_1300);
																	{
																		obj_t BgL_tail2399z00_9962;

																		obj_t BgL_l2396z00_9960;

																		BgL_l2396z00_9960 = CDR(BgL_l2396z00_1296);
																		BgL_tail2399z00_9962 =
																			BgL_newtail2400z00_1300;
																		BgL_tail2399z00_1297 = BgL_tail2399z00_9962;
																		BgL_l2396z00_1296 = BgL_l2396z00_9960;
																		goto BgL_zc3anonymousza32697ze3z83_1298;
																	}
																}
														}
													}
											}
											BgL_sza7za7_1283 =
												BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner2708z00_1312);
										}
										{	/* Llib/object.scm 773 */
											long BgL_bza7za7_1284;

											{	/* Llib/object.scm 781 */
												int BgL_arg2694z00_1290;

												BgL_arg2694z00_1290 =
													VECTOR_LENGTH(PROCEDURE_REF(BgL_genz00_1280,
														(int) (((long) 1))));
												BgL_bza7za7_1284 =
													(((long) 4) * (long) (BgL_arg2694z00_1290));
											}
											{	/* Llib/object.scm 781 */

												{	/* Llib/object.scm 782 */
													long BgL_arg2689z00_1285;

													long BgL_arg2690z00_1286;

													BgL_arg2689z00_1285 = (BgL_gz00_1234 + ((long) 1));
													{	/* Llib/object.scm 783 */
														long BgL_arg2691z00_1287;

														{	/* Llib/object.scm 783 */
															long BgL_za72za7_3352;

															BgL_za72za7_3352 = (long) CINT(BgL_sza7za7_1283);
															BgL_arg2691z00_1287 =
																(
																(BgL_bza7za7_1284 + BgL_dza7za7_1282) +
																BgL_za72za7_3352);
														}
														BgL_arg2690z00_1286 =
															(BgL_siza7eza7_1235 + BgL_arg2691z00_1287);
													}
													{
														long BgL_siza7eza7_9975;

														long BgL_gz00_9974;

														BgL_gz00_9974 = BgL_arg2689z00_1285;
														BgL_siza7eza7_9975 = BgL_arg2690z00_1286;
														BgL_siza7eza7_1235 = BgL_siza7eza7_9975;
														BgL_gz00_1234 = BgL_gz00_9974;
														goto BgL_zc3anonymousza32642ze3z83_1236;
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
		}
	}



/* generics-add-class! */
	bool_t BGl_genericszd2addzd2classz12z12zz__objectz00(long
		BgL_classzd2numzd2_89, long BgL_superzd2numzd2_90)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 790 */
			{
				long BgL_gz00_1316;

				BgL_gz00_1316 = ((long) 0);
			BgL_zc3anonymousza32709ze3z83_1317:
				if ((BgL_gz00_1316 < BGl_za2nbzd2genericsza2zd2zz__objectz00))
					{	/* Llib/object.scm 793 */
						obj_t BgL_genz00_1319;

						BgL_genz00_1319 =
							VECTOR_REF(BGl_za2genericsza2z00zz__objectz00,
							(int) (BgL_gz00_1316));
						{	/* Llib/object.scm 793 */
							obj_t BgL_methodzd2arrayzd2_1320;

							BgL_methodzd2arrayzd2_1320 =
								PROCEDURE_REF(BgL_genz00_1319, (int) (((long) 1)));
							{	/* Llib/object.scm 794 */
								obj_t BgL_methodz00_1321;

								{	/* Llib/object.scm 795 */
									obj_t BgL_arrayz00_3361;

									int BgL_offsetz00_3362;

									BgL_arrayz00_3361 = BgL_methodzd2arrayzd2_1320;
									BgL_offsetz00_3362 = (int) (BgL_superzd2numzd2_90);
									{	/* Llib/object.scm 795 */
										long BgL_offsetz00_3363;

										BgL_offsetz00_3363 =
											((long) (BgL_offsetz00_3362) - OBJECT_TYPE);
										{	/* Llib/object.scm 795 */
											long BgL_modz00_3364;

											{	/* Llib/object.scm 795 */
												int BgL_arg2631z00_3365;

												BgL_arg2631z00_3365 = (int) (((long) 16));
												{	/* Llib/object.scm 795 */
													long BgL_auxz00_9986;

													BgL_auxz00_9986 = (long) (BgL_arg2631z00_3365);
													BgL_modz00_3364 =
														(BgL_offsetz00_3363 / BgL_auxz00_9986);
											}}
											{	/* Llib/object.scm 795 */
												long BgL_restz00_3366;

												{	/* Llib/object.scm 795 */
													int BgL_arg2630z00_3367;

													BgL_arg2630z00_3367 = (int) (((long) 16));
													{	/* Llib/object.scm 795 */
														long BgL_auxz00_9990;

														BgL_auxz00_9990 = (long) (BgL_arg2630z00_3367);
														BgL_restz00_3366 =
															(BgL_offsetz00_3363 % BgL_auxz00_9990);
												}}
												{	/* Llib/object.scm 795 */

													BgL_methodz00_1321 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_3361,
															(int) (BgL_modz00_3364)),
														(int) (BgL_restz00_3366));
								}}}}}
								{	/* Llib/object.scm 795 */

									BGl_methodzd2arrayzd2setz12z12zz__objectz00(BgL_genz00_1319,
										BgL_methodzd2arrayzd2_1320, BgL_classzd2numzd2_89,
										BgL_methodz00_1321);
									{
										long BgL_gz00_9998;

										BgL_gz00_9998 = (BgL_gz00_1316 + ((long) 1));
										BgL_gz00_1316 = BgL_gz00_9998;
										goto BgL_zc3anonymousza32709ze3z83_1317;
									}
								}
							}
						}
					}
				else
					{	/* Llib/object.scm 792 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* class-field-no-default-value */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 802 */
			return BGl_symbol4278z00zz__objectz00;
		}
	}



/* _class-field-no-default-value */
	obj_t BGl__classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00(obj_t
		BgL_envz00_7770)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 802 */
			return BGl_symbol4278z00zz__objectz00;
		}
	}



/* register-class! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t
		BgL_namez00_91, obj_t BgL_superz00_92, bool_t BgL_abstractz00_93,
		obj_t BgL_creatorz00_94, obj_t BgL_allocatez00_95, obj_t BgL_nilz00_96,
		obj_t BgL_predicatez00_97, long BgL_hashz00_98, obj_t BgL_defz00_99,
		obj_t BgL_constructorz00_100, obj_t BgL_virtualz00_101)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 809 */
			{	/* Llib/object.scm 812 */
				obj_t BgL_zc3anonymousza32713ze3z83_7771;

				BgL_zc3anonymousza32713ze3z83_7771 =
					make_fx_procedure(BGl_zc3anonymousza32713ze3z83zz__objectz00,
					(int) (((long) 0)), (int) (((long) 11)));
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 0)), BgL_namez00_91);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 1)), BgL_superz00_92);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 2)), BgL_virtualz00_101);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 3)), BgL_allocatez00_95);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 4)), BINT(BgL_hashz00_98));
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 5)), BgL_defz00_99);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 6)), BgL_constructorz00_100);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 7)), BgL_creatorz00_94);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 8)), BgL_nilz00_96);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 9)), BgL_predicatez00_97);
				PROCEDURE_SET(BgL_zc3anonymousza32713ze3z83_7771,
					(int) (((long) 10)), BBOOL(BgL_abstractz00_93));
				return
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
					BgL_zc3anonymousza32713ze3z83_7771);
			}
		}
	}



/* _register-class! */
	obj_t BGl__registerzd2classz12zc0zz__objectz00(obj_t BgL_envz00_7772,
		obj_t BgL_namez00_7773, obj_t BgL_superz00_7774, obj_t BgL_abstractz00_7775,
		obj_t BgL_creatorz00_7776, obj_t BgL_allocatez00_7777,
		obj_t BgL_nilz00_7778, obj_t BgL_predicatez00_7779, obj_t BgL_hashz00_7780,
		obj_t BgL_defz00_7781, obj_t BgL_constructorz00_7782,
		obj_t BgL_virtualz00_7783)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 809 */
			{	/* Llib/object.scm 812 */
				obj_t BgL_auxz00_10059;

				long BgL_auxz00_10050;

				obj_t BgL_auxz00_10043;

				obj_t BgL_auxz00_10036;

				obj_t BgL_auxz00_10028;

				if (VECTORP(BgL_virtualz00_7783))
					{	/* Llib/object.scm 812 */
						BgL_auxz00_10059 = BgL_virtualz00_7783;
					}
				else
					{
						obj_t BgL_auxz00_10062;

						BgL_auxz00_10062 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 36631)), BGl_string4280z00zz__objectz00,
							BGl_string4235z00zz__objectz00, BgL_virtualz00_7783);
						FAILURE(BgL_auxz00_10062, BFALSE, BFALSE);
					}
				{	/* Llib/object.scm 812 */
					obj_t BgL_auxz00_10051;

					if (INTEGERP(BgL_hashz00_7780))
						{	/* Llib/object.scm 812 */
							BgL_auxz00_10051 = BgL_hashz00_7780;
						}
					else
						{
							obj_t BgL_auxz00_10054;

							BgL_auxz00_10054 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 36631)), BGl_string4280z00zz__objectz00,
								BGl_string4257z00zz__objectz00, BgL_hashz00_7780);
							FAILURE(BgL_auxz00_10054, BFALSE, BFALSE);
						}
					BgL_auxz00_10050 = (long) CINT(BgL_auxz00_10051);
				}
				if (PROCEDUREP(BgL_predicatez00_7779))
					{	/* Llib/object.scm 812 */
						BgL_auxz00_10043 = BgL_predicatez00_7779;
					}
				else
					{
						obj_t BgL_auxz00_10046;

						BgL_auxz00_10046 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 36631)), BGl_string4280z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_predicatez00_7779);
						FAILURE(BgL_auxz00_10046, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_nilz00_7778))
					{	/* Llib/object.scm 812 */
						BgL_auxz00_10036 = BgL_nilz00_7778;
					}
				else
					{
						obj_t BgL_auxz00_10039;

						BgL_auxz00_10039 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 36631)), BGl_string4280z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_nilz00_7778);
						FAILURE(BgL_auxz00_10039, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_allocatez00_7777))
					{	/* Llib/object.scm 812 */
						BgL_auxz00_10028 = BgL_allocatez00_7777;
					}
				else
					{
						obj_t BgL_auxz00_10032;

						BgL_auxz00_10032 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 36631)), BGl_string4280z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_allocatez00_7777);
						FAILURE(BgL_auxz00_10032, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2classz12zc0zz__objectz00(BgL_namez00_7773,
					BgL_superz00_7774, CBOOL(BgL_abstractz00_7775), BgL_creatorz00_7776,
					BgL_auxz00_10028, BgL_auxz00_10036, BgL_auxz00_10043,
					BgL_auxz00_10050, BgL_defz00_7781, BgL_constructorz00_7782,
					BgL_auxz00_10059);
			}
		}
	}



/* <anonymous:2713> */
	obj_t BGl_zc3anonymousza32713ze3z83zz__objectz00(obj_t BgL_envz00_7784)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 811 */
			{	/* Llib/object.scm 812 */
				obj_t BgL_namez00_7785;

				obj_t BgL_superz00_7786;

				obj_t BgL_virtualz00_7787;

				obj_t BgL_allocatez00_7788;

				obj_t BgL_hashz00_7789;

				obj_t BgL_defz00_7790;

				obj_t BgL_constructorz00_7791;

				obj_t BgL_creatorz00_7792;

				obj_t BgL_nilz00_7793;

				obj_t BgL_predicatez00_7794;

				obj_t BgL_abstractz00_7795;

				BgL_namez00_7785 = PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 0)));
				BgL_superz00_7786 = PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 1)));
				BgL_virtualz00_7787 =
					PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 2)));
				BgL_allocatez00_7788 =
					PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 3)));
				BgL_hashz00_7789 = PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 4)));
				BgL_defz00_7790 = PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 5)));
				BgL_constructorz00_7791 =
					PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 6)));
				BgL_creatorz00_7792 =
					PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 7)));
				BgL_nilz00_7793 = PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 8)));
				BgL_predicatez00_7794 =
					PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 9)));
				BgL_abstractz00_7795 =
					PROCEDURE_REF(BgL_envz00_7784, (int) (((long) 10)));
				{

					BGl_initializa7ezd2objectsz12z67zz__objectz00();
					{	/* Llib/object.scm 813 */
						bool_t BgL_testz00_10090;

						if (CBOOL(BgL_superz00_7786))
							{	/* Llib/object.scm 813 */
								if (BGl_classzf3zf3zz__objectz00(BgL_superz00_7786))
									{	/* Llib/object.scm 813 */
										BgL_testz00_10090 = ((bool_t) 0);
									}
								else
									{	/* Llib/object.scm 813 */
										BgL_testz00_10090 = ((bool_t) 1);
									}
							}
						else
							{	/* Llib/object.scm 813 */
								BgL_testz00_10090 = ((bool_t) 0);
							}
						if (BgL_testz00_10090)
							{	/* Llib/object.scm 813 */
								BGl_errorz00zz__errorz00(BGl_string4281z00zz__objectz00,
									BGl_string4282z00zz__objectz00, BgL_namez00_7785);
							}
						else
							{	/* Llib/object.scm 813 */
								BFALSE;
							}
					}
					if (
						((long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00) ==
							BGl_za2nbzd2classeszd2maxza2z00zz__objectz00))
						{	/* Llib/object.scm 815 */
							BGl_doublezd2nbzd2classesz12z12zz__objectz00();
						}
					else
						{	/* Llib/object.scm 815 */
							((bool_t) 0);
						}
					{	/* Llib/object.scm 817 */
						long BgL_numz00_1329;

						BgL_numz00_1329 =
							(OBJECT_TYPE +
							(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00));
						{	/* Llib/object.scm 817 */
							obj_t BgL_classz00_1330;

							{	/* Llib/object.scm 818 */
								obj_t BgL_arg2726z00_1339;

								BgL_arg2726z00_1339 =
									BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00
									(BgL_superz00_7786, BgL_virtualz00_7787);
								{	/* Llib/object.scm 818 */
									obj_t BgL_namez00_3387;

									obj_t BgL_allocz00_3393;

									long BgL_haz00_3394;

									obj_t BgL_nilz00_3399;

									obj_t BgL_predz00_3400;

									bool_t BgL_abstractz00_3402;

									BgL_namez00_3387 = BgL_namez00_7785;
									BgL_allocz00_3393 = BgL_allocatez00_7788;
									BgL_haz00_3394 = (long) CINT(BgL_hashz00_7789);
									BgL_nilz00_3399 = BgL_nilz00_7793;
									BgL_predz00_3400 = BgL_predicatez00_7794;
									BgL_abstractz00_3402 = CBOOL(BgL_abstractz00_7795);
									{	/* Llib/object.scm 818 */
										obj_t BgL_vz00_3403;

										BgL_vz00_3403 =
											create_vector_uncollectable((int) (((long) 17)));
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 0)), BgL_namez00_3387);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 1)), BINT(BgL_numz00_1329));
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 2)), BINT(((long) -1)));
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 3)), BgL_superz00_7786);
										VECTOR_SET(BgL_vz00_3403, (int) (((long) 4)), BNIL);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 5)), BINT(((long) -1)));
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 6)), BgL_allocz00_3393);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 7)), BINT(BgL_haz00_3394));
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 8)), BgL_defz00_7790);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 9)), BgL_constructorz00_7791);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 10)), BgL_arg2726z00_1339);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 11)), BgL_creatorz00_7792);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 12)), BgL_nilz00_3399);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 13)), BgL_predz00_3400);
										VECTOR_SET(BgL_vz00_3403, (int) (((long) 14)), BFALSE);
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 15)), BBOOL(BgL_abstractz00_3402));
										VECTOR_SET(BgL_vz00_3403,
											(int) (((long) 16)),
											BGl_za2classzd2keyza2zd2zz__objectz00);
										BgL_classz00_1330 = BgL_vz00_3403;
							}}}
							{	/* Llib/object.scm 818 */

								if (BGl_classzf3zf3zz__objectz00(BgL_superz00_7786))
									{	/* Llib/object.scm 835 */
										{	/* Llib/object.scm 839 */
											obj_t BgL_arg2718z00_1332;

											BgL_arg2718z00_1332 =
												MAKE_PAIR(BgL_classz00_1330,
												VECTOR_REF(BgL_superz00_7786, (int) (((long) 4))));
											VECTOR_SET(BgL_superz00_7786,
												(int) (((long) 4)), BgL_arg2718z00_1332);
										}
										BBOOL(BGl_classzd2hierarchyzd2numberingz12z12zz__objectz00
											(BgL_classz00_1330, BgL_superz00_7786));
									}
								else
									{	/* Llib/object.scm 835 */
										VECTOR_SET(BgL_classz00_1330,
											(int) (((long) 2)), BINT(((long) 1)));
										VECTOR_SET(BgL_classz00_1330,
											(int) (((long) 5)), BINT(((long) 1)));
									}
								VECTOR_SET(BGl_za2classesza2z00zz__objectz00,
									CINT(BGl_za2nbzd2classesza2zd2zz__objectz00),
									BgL_classz00_1330);
								{	/* Llib/object.scm 848 */
									long BgL_za71za7_3476;

									BgL_za71za7_3476 =
										(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00);
									BGl_za2nbzd2classesza2zd2zz__objectz00 =
										BINT((BgL_za71za7_3476 + ((long) 1)));
								}
								{	/* Llib/object.scm 850 */
									long BgL_arg2720z00_1334;

									if (BGl_classzf3zf3zz__objectz00(BgL_superz00_7786))
										{	/* Llib/object.scm 850 */
											long BgL_res3711z00_3481;

											{	/* Llib/object.scm 850 */
												obj_t BgL_vectorz00_3479;

												int BgL_kz00_3480;

												BgL_vectorz00_3479 = BgL_superz00_7786;
												BgL_kz00_3480 = (int) (((long) 1));
												BgL_res3711z00_3481 =
													(long) CINT(VECTOR_REF(BgL_vectorz00_3479,
														BgL_kz00_3480));
											}
											BgL_arg2720z00_1334 = BgL_res3711z00_3481;
										}
									else
										{	/* Llib/object.scm 850 */
											BgL_arg2720z00_1334 = BgL_numz00_1329;
										}
									BGl_genericszd2addzd2classz12z12zz__objectz00(BgL_numz00_1329,
										BgL_arg2720z00_1334);
								}
								return BgL_classz00_1330;
							}
						}
					}
				}
			}
		}
	}



/* make-class-virtual-slots-vector */
	obj_t BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00(obj_t
		BgL_superz00_102, obj_t BgL_virtualsz00_103)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 856 */
			{
				obj_t BgL_vecz00_1359;

				if (BGl_classzf3zf3zz__objectz00(BgL_superz00_102))
					{	/* Llib/object.scm 867 */
						obj_t BgL_ovecz00_1343;

						BgL_ovecz00_1343 =
							VECTOR_REF(BgL_superz00_102, (int) (((long) 10)));
						{	/* Llib/object.scm 867 */
							int BgL_olenz00_1344;

							BgL_olenz00_1344 = VECTOR_LENGTH(BgL_ovecz00_1343);
							{	/* Llib/object.scm 868 */
								int BgL_lenz00_1345;

								BgL_lenz00_1345 = VECTOR_LENGTH(BgL_virtualsz00_103);
								{	/* Llib/object.scm 869 */
									obj_t BgL_vecz00_1346;

									{	/* Llib/object.scm 870 */
										long BgL_arg2732z00_1354;

										BgL_arg2732z00_1354 =
											((long) (BgL_olenz00_1344) + (long) (BgL_lenz00_1345));
										BgL_vecz00_1346 =
											make_vector((int) (BgL_arg2732z00_1354), BUNSPEC);
									}
									{	/* Llib/object.scm 870 */

										{
											long BgL_iz00_1348;

											BgL_iz00_1348 = ((long) 0);
										BgL_zc3anonymousza32728ze3z83_1349:
											if ((BgL_iz00_1348 == (long) (BgL_olenz00_1344)))
												{	/* Llib/object.scm 872 */
													BgL_vecz00_1359 = BgL_vecz00_1346;
												BgL_lambda2735z00_1360:
													{	/* Llib/object.scm 858 */
														obj_t BgL_g2403z00_1361;

														BgL_g2403z00_1361 =
															BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
															(BgL_virtualsz00_103);
														{
															obj_t BgL_l2401z00_1363;

															BgL_l2401z00_1363 = BgL_g2403z00_1361;
														BgL_zc3anonymousza32736ze3z83_1364:
															if (PAIRP(BgL_l2401z00_1363))
																{	/* Llib/object.scm 861 */
																	{	/* Llib/object.scm 859 */
																		obj_t BgL_virtualz00_1366;

																		BgL_virtualz00_1366 =
																			CAR(BgL_l2401z00_1363);
																		{	/* Llib/object.scm 859 */
																			obj_t BgL_numz00_1367;

																			BgL_numz00_1367 =
																				CAR(BgL_virtualz00_1366);
																			VECTOR_SET(BgL_vecz00_1359,
																				CINT(BgL_numz00_1367),
																				CDR(BgL_virtualz00_1366));
																		}
																	}
																	{
																		obj_t BgL_l2401z00_10194;

																		BgL_l2401z00_10194 = CDR(BgL_l2401z00_1363);
																		BgL_l2401z00_1363 = BgL_l2401z00_10194;
																		goto BgL_zc3anonymousza32736ze3z83_1364;
																	}
																}
															else
																{	/* Llib/object.scm 861 */
																	((bool_t) 1);
																}
														}
													}
													return BgL_vecz00_1359;
												}
											else
												{	/* Llib/object.scm 872 */
													VECTOR_SET(BgL_vecz00_1346,
														(int) (BgL_iz00_1348),
														VECTOR_REF(BgL_ovecz00_1343,
															(int) (BgL_iz00_1348)));
													{
														long BgL_iz00_10200;

														BgL_iz00_10200 = (BgL_iz00_1348 + ((long) 1));
														BgL_iz00_1348 = BgL_iz00_10200;
														goto BgL_zc3anonymousza32728ze3z83_1349;
													}
												}
										}
									}
								}
							}
						}
					}
				else
					{	/* Llib/object.scm 864 */
						int BgL_lenz00_1356;

						BgL_lenz00_1356 = VECTOR_LENGTH(BgL_virtualsz00_103);
						{	/* Llib/object.scm 864 */
							obj_t BgL_vecz00_1357;

							BgL_vecz00_1357 = make_vector(BgL_lenz00_1356, BUNSPEC);
							{	/* Llib/object.scm 865 */

								{
									obj_t BgL_vecz00_10204;

									BgL_vecz00_10204 = BgL_vecz00_1357;
									BgL_vecz00_1359 = BgL_vecz00_10204;
									goto BgL_lambda2735z00_1360;
								}
							}
						}
					}
			}
		}
	}



/* make-method-array */
	obj_t BGl_makezd2methodzd2arrayz00zz__objectz00(obj_t BgL_defzd2bucketzd2_105)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 887 */
			{	/* Llib/object.scm 888 */
				long BgL_sz00_1373;

				obj_t BgL_az00_1374;

				{	/* Llib/object.scm 888 */
					int BgL_arg2750z00_1383;

					BgL_arg2750z00_1383 = (int) (((long) 16));
					{	/* Llib/object.scm 888 */
						long BgL_auxz00_10206;

						BgL_auxz00_10206 = (long) (BgL_arg2750z00_1383);
						BgL_sz00_1373 =
							(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 / BgL_auxz00_10206);
				}}
				{	/* Llib/object.scm 889 */
					int BgL_arg2752z00_1384;

					BgL_arg2752z00_1384 = (int) (((long) 16));
					BgL_az00_1374 =
						BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
						(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00),
						BINT(BgL_arg2752z00_1384));
				}
				if (((long) CINT(BgL_az00_1374) > ((long) 0)))
					{	/* Llib/object.scm 890 */
						{	/* Llib/object.scm 892 */
							int BgL_arg2745z00_1378;

							BgL_arg2745z00_1378 = (int) (((long) 16));
							{	/* Llib/object.scm 892 */
								obj_t BgL_list2746z00_1379;

								{	/* Llib/object.scm 892 */
									obj_t BgL_arg2747z00_1380;

									{	/* Llib/object.scm 892 */
										obj_t BgL_arg2748z00_1381;

										BgL_arg2748z00_1381 =
											MAKE_PAIR(BINT(BgL_arg2745z00_1378), BNIL);
										BgL_arg2747z00_1380 =
											MAKE_PAIR(BGl_string4283z00zz__objectz00,
											BgL_arg2748z00_1381);
									}
									BgL_list2746z00_1379 =
										MAKE_PAIR(BGl_string4284z00zz__objectz00,
										BgL_arg2747z00_1380);
								}
								BGl_warningz00zz__errorz00(BgL_list2746z00_1379);
						}}
						{	/* Llib/object.scm 895 */
							long BgL_arg2749z00_1382;

							BgL_arg2749z00_1382 = (BgL_sz00_1373 + ((long) 1));
							return
								make_vector_uncollectable(
								(int) (BgL_arg2749z00_1382), BgL_defzd2bucketzd2_105);
					}}
				else
					{	/* Llib/object.scm 890 */
						return
							make_vector_uncollectable(
							(int) (BgL_sz00_1373), BgL_defzd2bucketzd2_105);
		}}}
	}



/* generic-no-default-behavior */
	obj_t BGl_genericzd2nozd2defaultzd2behaviorzd2zz__objectz00(obj_t
		BgL_lz00_106)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 901 */
			return
				BGl_errorz00zz__errorz00(BGl_string4266z00zz__objectz00,
				BGl_string4285z00zz__objectz00, BgL_lz00_106);
		}
	}



/* _generic-no-default-behavior */
	obj_t BGl__genericzd2nozd2defaultzd2behaviorzd2zz__objectz00(obj_t
		BgL_envz00_7796, obj_t BgL_lz00_7797)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 901 */
			return
				BGl_genericzd2nozd2defaultzd2behaviorzd2zz__objectz00(BgL_lz00_7797);
		}
	}



/* procedure->generic */
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2ze3genericz31zz__objectz00(obj_t
		BgL_procz00_107)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 907 */
			return bgl_make_generic(BgL_procz00_107);
		}
	}



/* _procedure->generic */
	obj_t BGl__procedurezd2ze3genericz31zz__objectz00(obj_t BgL_envz00_7798,
		obj_t BgL_procz00_7799)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 907 */
			{	/* Llib/object.scm 908 */
				obj_t BgL_procz00_8770;

				if (PROCEDUREP(BgL_procz00_7799))
					{	/* Llib/object.scm 908 */
						BgL_procz00_8770 = BgL_procz00_7799;
					}
				else
					{
						obj_t BgL_auxz00_10232;

						BgL_auxz00_10232 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 40415)), BGl_string4286z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_procz00_7799);
						FAILURE(BgL_auxz00_10232, BFALSE, BFALSE);
					}
				return bgl_make_generic(BgL_procz00_8770);
			}
		}
	}



/* register-generic! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t
		BgL_genericz00_108, obj_t BgL_defaultz00_109, obj_t BgL_classzd2minzd2_110,
		obj_t BgL_namez00_111)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 913 */
			{	/* Llib/object.scm 916 */
				obj_t BgL_zc3anonymousza32754ze3z83_7800;

				BgL_zc3anonymousza32754ze3z83_7800 =
					make_fx_procedure(BGl_zc3anonymousza32754ze3z83zz__objectz00,
					(int) (((long) 0)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_7800,
					(int) (((long) 0)), BgL_genericz00_108);
				PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_7800,
					(int) (((long) 1)), BgL_defaultz00_109);
				PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_7800,
					(int) (((long) 2)), BgL_namez00_111);
				return
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
					BgL_zc3anonymousza32754ze3z83_7800);
			}
		}
	}



/* _register-generic! */
	obj_t BGl__registerzd2genericz12zc0zz__objectz00(obj_t BgL_envz00_7801,
		obj_t BgL_genericz00_7802, obj_t BgL_defaultz00_7803,
		obj_t BgL_classzd2minzd2_7804, obj_t BgL_namez00_7805)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 913 */
			{	/* Llib/object.scm 916 */
				obj_t BgL_auxz00_10247;

				if (PROCEDUREP(BgL_genericz00_7802))
					{	/* Llib/object.scm 916 */
						BgL_auxz00_10247 = BgL_genericz00_7802;
					}
				else
					{
						obj_t BgL_auxz00_10250;

						BgL_auxz00_10250 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 40774)), BGl_string4287z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_genericz00_7802);
						FAILURE(BgL_auxz00_10250, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2genericz12zc0zz__objectz00(BgL_auxz00_10247,
					BgL_defaultz00_7803, BgL_classzd2minzd2_7804, BgL_namez00_7805);
			}
		}
	}



/* <anonymous:2754> */
	obj_t BGl_zc3anonymousza32754ze3z83zz__objectz00(obj_t BgL_envz00_7806)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 916 */
				obj_t BgL_genericz00_7807;

				obj_t BgL_defaultz00_7808;

				obj_t BgL_namez00_7809;

				BgL_genericz00_7807 =
					PROCEDURE_REF(BgL_envz00_7806, (int) (((long) 0)));
				BgL_defaultz00_7808 =
					PROCEDURE_REF(BgL_envz00_7806, (int) (((long) 1)));
				BgL_namez00_7809 = PROCEDURE_REF(BgL_envz00_7806, (int) (((long) 2)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BgL_genericz00_7807, BgL_defaultz00_7808, BgL_namez00_7809);
				}
			}
		}
	}



/* register-generic-sans-lock! */
	obj_t BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(obj_t
		BgL_genericz00_112, obj_t BgL_defaultz00_113, obj_t BgL_namez00_114)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 928 */
			{	/* Llib/object.scm 929 */
				bool_t BgL_testz00_10262;

				{	/* Llib/object.scm 929 */
					obj_t BgL_genericz00_3523;

					BgL_genericz00_3523 = BgL_genericz00_112;
					{	/* Llib/object.scm 929 */
						obj_t BgL_auxz00_10263;

						BgL_auxz00_10263 =
							PROCEDURE_REF(BgL_genericz00_3523, (int) (((long) 1)));
						BgL_testz00_10262 = VECTORP(BgL_auxz00_10263);
				}}
				if (BgL_testz00_10262)
					{	/* Llib/object.scm 929 */
						if (PROCEDUREP(BgL_defaultz00_113))
							{	/* Llib/object.scm 948 */
								obj_t BgL_oldzd2defzd2bucketz00_1390;

								obj_t BgL_newzd2defzd2bucketz00_1391;

								obj_t BgL_oldzd2defaultzd2_1392;

								BgL_oldzd2defzd2bucketz00_1390 =
									PROCEDURE_REF(BgL_genericz00_112, (int) (((long) 2)));
								BgL_newzd2defzd2bucketz00_1391 =
									make_vector_uncollectable(
									(int) (((long) 16)), BgL_defaultz00_113);
								BgL_oldzd2defaultzd2_1392 =
									PROCEDURE_REF(BgL_genericz00_112, (int) (((long) 0)));
								{	/* Llib/object.scm 952 */
									obj_t BgL_marrayz00_1393;

									BgL_marrayz00_1393 =
										PROCEDURE_REF(BgL_genericz00_112, (int) (((long) 1)));
									{	/* Llib/object.scm 952 */
										int BgL_alenz00_1394;

										BgL_alenz00_1394 = VECTOR_LENGTH(BgL_marrayz00_1393);
										{	/* Llib/object.scm 953 */

											{
												long BgL_iz00_1396;

												BgL_iz00_1396 = ((long) 0);
											BgL_zc3anonymousza32757ze3z83_1397:
												if ((BgL_iz00_1396 < (long) (BgL_alenz00_1394)))
													{	/* Llib/object.scm 956 */
														obj_t BgL_bucketz00_1399;

														BgL_bucketz00_1399 =
															VECTOR_REF(BgL_marrayz00_1393,
															(int) (BgL_iz00_1396));
														if (
															(BgL_bucketz00_1399 ==
																BgL_oldzd2defzd2bucketz00_1390))
															{	/* Llib/object.scm 957 */
																VECTOR_SET(BgL_marrayz00_1393,
																	(int) (BgL_iz00_1396),
																	BgL_newzd2defzd2bucketz00_1391);
																{
																	long BgL_iz00_10287;

																	BgL_iz00_10287 = (BgL_iz00_1396 + ((long) 1));
																	BgL_iz00_1396 = BgL_iz00_10287;
																	goto BgL_zc3anonymousza32757ze3z83_1397;
																}
															}
														else
															{
																long BgL_jz00_1403;

																BgL_jz00_1403 = ((long) 0);
															BgL_zc3anonymousza32761ze3z83_1404:
																if (
																	(BgL_jz00_1403 ==
																		(long) ((int) (((long) 16)))))
																	{
																		long BgL_iz00_10293;

																		BgL_iz00_10293 =
																			(BgL_iz00_1396 + ((long) 1));
																		BgL_iz00_1396 = BgL_iz00_10293;
																		goto BgL_zc3anonymousza32757ze3z83_1397;
																	}
																else
																	{	/* Llib/object.scm 963 */
																		if (
																			(VECTOR_REF(BgL_bucketz00_1399,
																					(int) (BgL_jz00_1403)) ==
																				BgL_oldzd2defaultzd2_1392))
																			{	/* Llib/object.scm 965 */
																				VECTOR_SET(BgL_bucketz00_1399,
																					(int) (BgL_jz00_1403),
																					BgL_defaultz00_113);
																				{
																					long BgL_jz00_10301;

																					BgL_jz00_10301 =
																						(BgL_jz00_1403 + ((long) 1));
																					BgL_jz00_1403 = BgL_jz00_10301;
																					goto
																						BgL_zc3anonymousza32761ze3z83_1404;
																				}
																			}
																		else
																			{
																				long BgL_jz00_10303;

																				BgL_jz00_10303 =
																					(BgL_jz00_1403 + ((long) 1));
																				BgL_jz00_1403 = BgL_jz00_10303;
																				goto BgL_zc3anonymousza32761ze3z83_1404;
																			}
																	}
															}
													}
												else
													{	/* Llib/object.scm 955 */
														PROCEDURE_SET(BgL_genericz00_112,
															(int) (((long) 0)), BgL_defaultz00_113);
														PROCEDURE_SET(BgL_genericz00_112,
															(int) (((long) 2)),
															BgL_newzd2defzd2bucketz00_1391);
														FREE_VECTOR_UNCOLLECTABLE
															(BgL_oldzd2defzd2bucketz00_1390);
														BUNSPEC;
							}}}}}}
						else
							{	/* Llib/object.scm 944 */
								BFALSE;
							}
						return BUNSPEC;
					}
				else
					{	/* Llib/object.scm 930 */
						obj_t BgL_defzd2metzd2_1415;

						if (PROCEDUREP(BgL_defaultz00_113))
							{	/* Llib/object.scm 930 */
								BgL_defzd2metzd2_1415 = BgL_defaultz00_113;
							}
						else
							{	/* Llib/object.scm 930 */
								BgL_defzd2metzd2_1415 =
									BGl_genericzd2nozd2defaultzd2behaviorzd2envz00zz__objectz00;
							}
						{	/* Llib/object.scm 930 */
							obj_t BgL_defzd2bucketzd2_1416;

							BgL_defzd2bucketzd2_1416 =
								make_vector_uncollectable(
								(int) (((long) 16)), BgL_defzd2metzd2_1415);
							{	/* Llib/object.scm 933 */

								if (
									(BGl_za2nbzd2genericsza2zd2zz__objectz00 ==
										BGl_za2nbzd2genericszd2maxza2z00zz__objectz00))
									{	/* Llib/object.scm 935 */
										BGl_doublezd2nbzd2genericsz12z12zz__objectz00();
									}
								else
									{	/* Llib/object.scm 935 */
										BFALSE;
									}
								VECTOR_SET(BGl_za2genericsza2z00zz__objectz00,
									(int) (BGl_za2nbzd2genericsza2zd2zz__objectz00),
									BgL_genericz00_112);
								BGl_za2nbzd2genericsza2zd2zz__objectz00 =
									(BGl_za2nbzd2genericsza2zd2zz__objectz00 + ((long) 1));
								PROCEDURE_SET(BgL_genericz00_112, (int) (((long) 0)),
									BgL_defzd2metzd2_1415);
								PROCEDURE_SET(BgL_genericz00_112, (int) (((long) 2)),
									BgL_defzd2bucketzd2_1416);
								PROCEDURE_SET(BgL_genericz00_112, (int) (((long) 1)),
									BGl_makezd2methodzd2arrayz00zz__objectz00
									(BgL_defzd2bucketzd2_1416));
								return BUNSPEC;
							}
						}
					}
			}
		}
	}



/* %add-method! */
	obj_t BGl_z52addzd2methodz12z92zz__objectz00(obj_t BgL_genericz00_115,
		obj_t BgL_classz00_116, obj_t BgL_methodz00_117)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 980 */
			{	/* Llib/object.scm 983 */
				obj_t BgL_zc3anonymousza32776ze3z83_7810;

				BgL_zc3anonymousza32776ze3z83_7810 =
					make_fx_procedure(BGl_zc3anonymousza32776ze3z83zz__objectz00,
					(int) (((long) 0)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_zc3anonymousza32776ze3z83_7810,
					(int) (((long) 0)), BgL_genericz00_115);
				PROCEDURE_SET(BgL_zc3anonymousza32776ze3z83_7810,
					(int) (((long) 1)), BgL_classz00_116);
				PROCEDURE_SET(BgL_zc3anonymousza32776ze3z83_7810,
					(int) (((long) 2)), BgL_methodz00_117);
				return
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
					BgL_zc3anonymousza32776ze3z83_7810);
			}
		}
	}



/* <anonymous:2776> */
	obj_t BGl_zc3anonymousza32776ze3z83zz__objectz00(obj_t BgL_envz00_7811)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 982 */
			{	/* Llib/object.scm 983 */
				obj_t BgL_genericz00_7812;

				obj_t BgL_classz00_7813;

				obj_t BgL_methodz00_7814;

				BgL_genericz00_7812 =
					PROCEDURE_REF(BgL_envz00_7811, (int) (((long) 0)));
				BgL_classz00_7813 = PROCEDURE_REF(BgL_envz00_7811, (int) (((long) 1)));
				BgL_methodz00_7814 = PROCEDURE_REF(BgL_envz00_7811, (int) (((long) 2)));
				{

					{	/* Llib/object.scm 983 */
						bool_t BgL_testz00_10343;

						{	/* Llib/object.scm 983 */
							obj_t BgL_genericz00_3577;

							BgL_genericz00_3577 = BgL_genericz00_7812;
							{	/* Llib/object.scm 983 */
								obj_t BgL_auxz00_10344;

								BgL_auxz00_10344 =
									PROCEDURE_REF(BgL_genericz00_3577, (int) (((long) 1)));
								BgL_testz00_10343 = VECTORP(BgL_auxz00_10344);
						}}
						if (BgL_testz00_10343)
							{	/* Llib/object.scm 983 */
								BFALSE;
							}
						else
							{	/* Llib/object.scm 983 */
								BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
									(BgL_genericz00_7812, BFALSE, BGl_string4288z00zz__objectz00);
							}
					}
					{	/* Llib/object.scm 987 */
						obj_t BgL_methodzd2arrayzd2_1424;

						BgL_methodzd2arrayzd2_1424 =
							PROCEDURE_REF(BgL_genericz00_7812, (int) (((long) 1)));
						{	/* Llib/object.scm 987 */
							long BgL_cnumz00_1425;

							{	/* Llib/object.scm 988 */
								long BgL_res3723z00_3585;

								{	/* Llib/object.scm 988 */
									obj_t BgL_vectorz00_3583;

									int BgL_kz00_3584;

									BgL_vectorz00_3583 = BgL_classz00_7813;
									BgL_kz00_3584 = (int) (((long) 1));
									BgL_res3723z00_3585 =
										(long) CINT(VECTOR_REF(BgL_vectorz00_3583, BgL_kz00_3584));
								}
								BgL_cnumz00_1425 = BgL_res3723z00_3585;
							}
							{	/* Llib/object.scm 988 */
								obj_t BgL_previousz00_1426;

								{	/* Llib/object.scm 989 */
									obj_t BgL_arrayz00_3587;

									int BgL_offsetz00_3588;

									BgL_arrayz00_3587 = BgL_methodzd2arrayzd2_1424;
									BgL_offsetz00_3588 = (int) (BgL_cnumz00_1425);
									{	/* Llib/object.scm 989 */
										long BgL_offsetz00_3589;

										BgL_offsetz00_3589 =
											((long) (BgL_offsetz00_3588) - OBJECT_TYPE);
										{	/* Llib/object.scm 989 */
											long BgL_modz00_3590;

											{	/* Llib/object.scm 989 */
												int BgL_arg2631z00_3591;

												BgL_arg2631z00_3591 = (int) (((long) 16));
												{	/* Llib/object.scm 989 */
													long BgL_auxz00_10358;

													BgL_auxz00_10358 = (long) (BgL_arg2631z00_3591);
													BgL_modz00_3590 =
														(BgL_offsetz00_3589 / BgL_auxz00_10358);
											}}
											{	/* Llib/object.scm 989 */
												long BgL_restz00_3592;

												{	/* Llib/object.scm 989 */
													int BgL_arg2630z00_3593;

													BgL_arg2630z00_3593 = (int) (((long) 16));
													{	/* Llib/object.scm 989 */
														long BgL_auxz00_10362;

														BgL_auxz00_10362 = (long) (BgL_arg2630z00_3593);
														BgL_restz00_3592 =
															(BgL_offsetz00_3589 % BgL_auxz00_10362);
												}}
												{	/* Llib/object.scm 989 */

													BgL_previousz00_1426 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_3587,
															(int) (BgL_modz00_3590)),
														(int) (BgL_restz00_3592));
								}}}}}
								{	/* Llib/object.scm 989 */
									obj_t BgL_defz00_1427;

									BgL_defz00_1427 =
										PROCEDURE_REF(BgL_genericz00_7812, (int) (((long) 0)));
									{	/* Llib/object.scm 990 */

										BGl_loopz00zz__objectz00(BgL_defz00_1427,
											BgL_previousz00_1426, BgL_methodz00_7814,
											BgL_genericz00_7812, BgL_methodzd2arrayzd2_1424,
											BgL_classz00_7813);
					}}}}}
					return BgL_methodz00_7814;
				}
			}
		}
	}



/* loop */
	bool_t BGl_loopz00zz__objectz00(obj_t BgL_defz00_8517,
		obj_t BgL_previousz00_8516, obj_t BgL_methodz00_8515,
		obj_t BgL_genericz00_8514, obj_t BgL_methodzd2arrayzd2_8513,
		obj_t BgL_claza7za7z00_1429)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 991 */
			{	/* Llib/object.scm 992 */
				long BgL_cnz00_1431;

				{	/* Llib/object.scm 992 */
					long BgL_res3727z00_3612;

					{	/* Llib/object.scm 992 */
						obj_t BgL_vectorz00_3610;

						int BgL_kz00_3611;

						BgL_vectorz00_3610 = BgL_claza7za7z00_1429;
						BgL_kz00_3611 = (int) (((long) 1));
						BgL_res3727z00_3612 =
							(long) CINT(VECTOR_REF(BgL_vectorz00_3610, BgL_kz00_3611));
					}
					BgL_cnz00_1431 = BgL_res3727z00_3612;
				}
				{	/* Llib/object.scm 992 */
					obj_t BgL_currentz00_1432;

					{	/* Llib/object.scm 993 */
						obj_t BgL_arrayz00_3614;

						int BgL_offsetz00_3615;

						BgL_arrayz00_3614 = BgL_methodzd2arrayzd2_8513;
						BgL_offsetz00_3615 = (int) (BgL_cnz00_1431);
						{	/* Llib/object.scm 993 */
							long BgL_offsetz00_3616;

							BgL_offsetz00_3616 = ((long) (BgL_offsetz00_3615) - OBJECT_TYPE);
							{	/* Llib/object.scm 993 */
								long BgL_modz00_3617;

								{	/* Llib/object.scm 993 */
									int BgL_arg2631z00_3618;

									BgL_arg2631z00_3618 = (int) (((long) 16));
									{	/* Llib/object.scm 993 */
										long BgL_auxz00_10379;

										BgL_auxz00_10379 = (long) (BgL_arg2631z00_3618);
										BgL_modz00_3617 = (BgL_offsetz00_3616 / BgL_auxz00_10379);
								}}
								{	/* Llib/object.scm 993 */
									long BgL_restz00_3619;

									{	/* Llib/object.scm 993 */
										int BgL_arg2630z00_3620;

										BgL_arg2630z00_3620 = (int) (((long) 16));
										{	/* Llib/object.scm 993 */
											long BgL_auxz00_10383;

											BgL_auxz00_10383 = (long) (BgL_arg2630z00_3620);
											BgL_restz00_3619 =
												(BgL_offsetz00_3616 % BgL_auxz00_10383);
									}}
									{	/* Llib/object.scm 993 */

										BgL_currentz00_1432 =
											VECTOR_REF(VECTOR_REF(BgL_arrayz00_3614,
												(int) (BgL_modz00_3617)), (int) (BgL_restz00_3619));
					}}}}}
					{	/* Llib/object.scm 993 */

						{	/* Llib/object.scm 994 */
							bool_t BgL_testz00_10390;

							if ((BgL_currentz00_1432 == BgL_defz00_8517))
								{	/* Llib/object.scm 994 */
									BgL_testz00_10390 = ((bool_t) 1);
								}
							else
								{	/* Llib/object.scm 994 */
									BgL_testz00_10390 =
										(BgL_currentz00_1432 == BgL_previousz00_8516);
								}
							if (BgL_testz00_10390)
								{	/* Llib/object.scm 994 */
									BGl_methodzd2arrayzd2setz12z12zz__objectz00
										(BgL_genericz00_8514, BgL_methodzd2arrayzd2_8513,
										BgL_cnz00_1431, BgL_methodz00_8515);
									{	/* Llib/object.scm 999 */
										obj_t BgL_g2406z00_1434;

										BgL_g2406z00_1434 =
											VECTOR_REF(BgL_claza7za7z00_1429, (int) (((long) 4)));
										{
											obj_t BgL_l2404z00_3638;

											BgL_l2404z00_3638 = BgL_g2406z00_1434;
										BgL_zc3anonymousza32780ze3z83_3637:
											if (PAIRP(BgL_l2404z00_3638))
												{	/* Llib/object.scm 999 */
													BGl_loopz00zz__objectz00(BgL_defz00_8517,
														BgL_previousz00_8516, BgL_methodz00_8515,
														BgL_genericz00_8514, BgL_methodzd2arrayzd2_8513,
														CAR(BgL_l2404z00_3638));
													{
														obj_t BgL_l2404z00_10401;

														BgL_l2404z00_10401 = CDR(BgL_l2404z00_3638);
														BgL_l2404z00_3638 = BgL_l2404z00_10401;
														goto BgL_zc3anonymousza32780ze3z83_3637;
													}
												}
											else
												{	/* Llib/object.scm 999 */
													return ((bool_t) 1);
												}
										}
									}
								}
							else
								{	/* Llib/object.scm 994 */
									return ((bool_t) 0);
								}
						}
					}
				}
			}
		}
	}



/* generic-add-method! */
	BGL_EXPORTED_DEF obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t
		BgL_genericz00_118, obj_t BgL_classz00_119, obj_t BgL_methodz00_120,
		obj_t BgL_namez00_121)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1005 */
			if (BGl_classzf3zf3zz__objectz00(BgL_classz00_119))
				{	/* Llib/object.scm 1007 */
					bool_t BgL_testz00_10405;

					{	/* Llib/object.scm 1007 */
						int BgL_arg2790z00_3663;

						int BgL_arg2791z00_3664;

						BgL_arg2790z00_3663 = PROCEDURE_ARITY(BgL_genericz00_118);
						BgL_arg2791z00_3664 = PROCEDURE_ARITY(BgL_methodz00_120);
						BgL_testz00_10405 =
							((long) (BgL_arg2790z00_3663) == (long) (BgL_arg2791z00_3664));
					}
					if (BgL_testz00_10405)
						{	/* Llib/object.scm 1007 */
							return
								BGl_z52addzd2methodz12z92zz__objectz00(BgL_genericz00_118,
								BgL_classz00_119, BgL_methodz00_120);
						}
					else
						{	/* Llib/object.scm 1007 */
							int BgL_arg2789z00_3666;

							BgL_arg2789z00_3666 = PROCEDURE_ARITY(BgL_methodz00_120);
							return
								BGl_errorz00zz__errorz00(BgL_namez00_121,
								BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_3666));
						}
				}
			else
				{	/* Llib/object.scm 1007 */
					return
						BGl_errorz00zz__errorz00(BgL_namez00_121,
						BGl_string4290z00zz__objectz00, BgL_classz00_119);
				}
		}
	}



/* _generic-add-method! */
	obj_t BGl__genericzd2addzd2methodz12z12zz__objectz00(obj_t BgL_envz00_7815,
		obj_t BgL_genericz00_7816, obj_t BgL_classz00_7817,
		obj_t BgL_methodz00_7818, obj_t BgL_namez00_7819)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1005 */
			{	/* Llib/object.scm 1007 */
				obj_t BgL_auxz00_10423;

				obj_t BgL_auxz00_10416;

				if (PROCEDUREP(BgL_methodz00_7818))
					{	/* Llib/object.scm 1007 */
						BgL_auxz00_10423 = BgL_methodz00_7818;
					}
				else
					{
						obj_t BgL_auxz00_10426;

						BgL_auxz00_10426 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 44748)), BGl_string4291z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_methodz00_7818);
						FAILURE(BgL_auxz00_10426, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_genericz00_7816))
					{	/* Llib/object.scm 1007 */
						BgL_auxz00_10416 = BgL_genericz00_7816;
					}
				else
					{
						obj_t BgL_auxz00_10419;

						BgL_auxz00_10419 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 44748)), BGl_string4291z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_genericz00_7816);
						FAILURE(BgL_auxz00_10419, BFALSE, BFALSE);
					}
				return
					BGl_genericzd2addzd2methodz12z12zz__objectz00(BgL_auxz00_10416,
					BgL_classz00_7817, BgL_auxz00_10423, BgL_namez00_7819);
			}
		}
	}



/* generic-add-eval-method! */
	BGL_EXPORTED_DEF obj_t
		BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(obj_t
		BgL_genericz00_122, obj_t BgL_classz00_123, obj_t BgL_methodz00_124,
		obj_t BgL_namez00_125)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1022 */
			if (BGl_classzf3zf3zz__objectz00(BgL_classz00_123))
				{	/* Llib/object.scm 1026 */
					bool_t BgL_testz00_10433;

					{	/* Llib/object.scm 1026 */
						bool_t BgL_testz00_10434;

						{	/* Llib/object.scm 1026 */
							int BgL_arg2801z00_1460;

							int BgL_arg2802z00_1461;

							BgL_arg2801z00_1460 = PROCEDURE_ARITY(BgL_genericz00_122);
							BgL_arg2802z00_1461 = PROCEDURE_ARITY(BgL_methodz00_124);
							BgL_testz00_10434 =
								((long) (BgL_arg2801z00_1460) == (long) (BgL_arg2802z00_1461));
						}
						if (BgL_testz00_10434)
							{	/* Llib/object.scm 1026 */
								BgL_testz00_10433 = ((bool_t) 0);
							}
						else
							{	/* Llib/object.scm 1027 */
								bool_t BgL_testz00_10440;

								{	/* Llib/object.scm 1027 */
									int BgL_arg2799z00_1458;

									BgL_arg2799z00_1458 = PROCEDURE_ARITY(BgL_genericz00_122);
									BgL_testz00_10440 =
										((long) (BgL_arg2799z00_1458) > ((long) 4));
								}
								if (BgL_testz00_10440)
									{	/* Llib/object.scm 1028 */
										bool_t BgL_testz00_10444;

										{	/* Llib/object.scm 1028 */
											int BgL_arg2797z00_1456;

											BgL_arg2797z00_1456 = PROCEDURE_ARITY(BgL_methodz00_124);
											BgL_testz00_10444 =
												((long) (BgL_arg2797z00_1456) == ((long) -1));
										}
										if (BgL_testz00_10444)
											{	/* Llib/object.scm 1028 */
												BgL_testz00_10433 = ((bool_t) 0);
											}
										else
											{	/* Llib/object.scm 1028 */
												BgL_testz00_10433 = ((bool_t) 1);
											}
									}
								else
									{	/* Llib/object.scm 1027 */
										BgL_testz00_10433 = ((bool_t) 0);
									}
							}
					}
					if (BgL_testz00_10433)
						{	/* Llib/object.scm 1026 */
							return
								BGl_errorz00zz__errorz00(BgL_namez00_125,
								BGl_string4289z00zz__objectz00, BgL_methodz00_124);
						}
					else
						{	/* Llib/object.scm 1026 */
							return
								BGl_z52addzd2methodz12z92zz__objectz00(BgL_genericz00_122,
								BgL_classz00_123, BgL_methodz00_124);
						}
				}
			else
				{	/* Llib/object.scm 1024 */
					return
						BGl_errorz00zz__errorz00(BgL_namez00_125,
						BGl_string4290z00zz__objectz00, BgL_classz00_123);
				}
		}
	}



/* _generic-add-eval-method! */
	obj_t BGl__genericzd2addzd2evalzd2methodz12zc0zz__objectz00(obj_t
		BgL_envz00_7820, obj_t BgL_genericz00_7821, obj_t BgL_classz00_7822,
		obj_t BgL_methodz00_7823, obj_t BgL_namez00_7824)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1022 */
			{	/* Llib/object.scm 1024 */
				obj_t BgL_auxz00_10458;

				obj_t BgL_auxz00_10451;

				if (PROCEDUREP(BgL_methodz00_7823))
					{	/* Llib/object.scm 1024 */
						BgL_auxz00_10458 = BgL_methodz00_7823;
					}
				else
					{
						obj_t BgL_auxz00_10461;

						BgL_auxz00_10461 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 45699)), BGl_string4292z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_methodz00_7823);
						FAILURE(BgL_auxz00_10461, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_genericz00_7821))
					{	/* Llib/object.scm 1024 */
						BgL_auxz00_10451 = BgL_genericz00_7821;
					}
				else
					{
						obj_t BgL_auxz00_10454;

						BgL_auxz00_10454 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 45699)), BGl_string4292z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_genericz00_7821);
						FAILURE(BgL_auxz00_10454, BFALSE, BFALSE);
					}
				return
					BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(BgL_auxz00_10451,
					BgL_classz00_7822, BgL_auxz00_10458, BgL_namez00_7824);
			}
		}
	}



/* find-method */
	BGL_EXPORTED_DEF obj_t BGl_findzd2methodzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_126, obj_t BgL_genericz00_127)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1038 */
			{	/* Llib/object.scm 1039 */
				long BgL_objzd2classzd2numz00_8771;

				BgL_objzd2classzd2numz00_8771 = BGL_OBJECT_CLASS_NUM(BgL_objz00_126);
				{	/* Llib/object.scm 1039 */
					obj_t BgL_arg2803z00_8772;

					BgL_arg2803z00_8772 =
						PROCEDURE_REF(BgL_genericz00_127, (int) (((long) 1)));
					{	/* Llib/object.scm 1039 */
						obj_t BgL_arrayz00_8773;

						int BgL_offsetz00_8774;

						BgL_arrayz00_8773 = BgL_arg2803z00_8772;
						BgL_offsetz00_8774 = (int) (BgL_objzd2classzd2numz00_8771);
						{	/* Llib/object.scm 1039 */
							long BgL_offsetz00_8775;

							BgL_offsetz00_8775 = ((long) (BgL_offsetz00_8774) - OBJECT_TYPE);
							{	/* Llib/object.scm 1039 */
								long BgL_modz00_8776;

								{	/* Llib/object.scm 1039 */
									int BgL_arg2631z00_8777;

									BgL_arg2631z00_8777 = (int) (((long) 16));
									{	/* Llib/object.scm 1039 */
										long BgL_auxz00_10473;

										BgL_auxz00_10473 = (long) (BgL_arg2631z00_8777);
										BgL_modz00_8776 = (BgL_offsetz00_8775 / BgL_auxz00_10473);
								}}
								{	/* Llib/object.scm 1039 */
									long BgL_restz00_8778;

									{	/* Llib/object.scm 1039 */
										int BgL_arg2630z00_8779;

										BgL_arg2630z00_8779 = (int) (((long) 16));
										{	/* Llib/object.scm 1039 */
											long BgL_auxz00_10477;

											BgL_auxz00_10477 = (long) (BgL_arg2630z00_8779);
											BgL_restz00_8778 =
												(BgL_offsetz00_8775 % BgL_auxz00_10477);
									}}
									{	/* Llib/object.scm 1039 */

										return
											VECTOR_REF(VECTOR_REF(BgL_arrayz00_8773,
												(int) (BgL_modz00_8776)), (int) (BgL_restz00_8778));
		}}}}}}}}
	}



/* _find-method */
	obj_t BGl__findzd2methodzd2zz__objectz00(obj_t BgL_envz00_7825,
		obj_t BgL_objz00_7826, obj_t BgL_genericz00_7827)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1038 */
			{	/* Llib/object.scm 1039 */
				BgL_objectz00_bglt BgL_objz00_8782;

				obj_t BgL_genericz00_8783;

				if (BGL_OBJECTP(BgL_objz00_7826))
					{	/* Llib/object.scm 1039 */
						BgL_objz00_8782 = (BgL_objectz00_bglt) (BgL_objz00_7826);
					}
				else
					{
						obj_t BgL_auxz00_10487;

						BgL_auxz00_10487 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 46467)), BGl_string4293z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_7826);
						FAILURE(BgL_auxz00_10487, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_genericz00_7827))
					{	/* Llib/object.scm 1039 */
						BgL_genericz00_8783 = BgL_genericz00_7827;
					}
				else
					{
						obj_t BgL_auxz00_10493;

						BgL_auxz00_10493 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 46467)), BGl_string4293z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_genericz00_7827);
						FAILURE(BgL_auxz00_10493, BFALSE, BFALSE);
					}
				{	/* Llib/object.scm 1039 */
					long BgL_objzd2classzd2numz00_8784;

					BgL_objzd2classzd2numz00_8784 = BGL_OBJECT_CLASS_NUM(BgL_objz00_8782);
					{	/* Llib/object.scm 1039 */
						obj_t BgL_arg2803z00_8785;

						BgL_arg2803z00_8785 =
							PROCEDURE_REF(BgL_genericz00_8783, (int) (((long) 1)));
						{	/* Llib/object.scm 1039 */
							obj_t BgL_arrayz00_8786;

							int BgL_offsetz00_8787;

							BgL_arrayz00_8786 = BgL_arg2803z00_8785;
							BgL_offsetz00_8787 = (int) (BgL_objzd2classzd2numz00_8784);
							{	/* Llib/object.scm 1039 */
								long BgL_offsetz00_8788;

								BgL_offsetz00_8788 =
									((long) (BgL_offsetz00_8787) - OBJECT_TYPE);
								{	/* Llib/object.scm 1039 */
									long BgL_modz00_8789;

									{	/* Llib/object.scm 1039 */
										int BgL_arg2631z00_8790;

										BgL_arg2631z00_8790 = (int) (((long) 16));
										{	/* Llib/object.scm 1039 */
											long BgL_auxz00_10504;

											BgL_auxz00_10504 = (long) (BgL_arg2631z00_8790);
											BgL_modz00_8789 = (BgL_offsetz00_8788 / BgL_auxz00_10504);
									}}
									{	/* Llib/object.scm 1039 */
										long BgL_restz00_8791;

										{	/* Llib/object.scm 1039 */
											int BgL_arg2630z00_8792;

											BgL_arg2630z00_8792 = (int) (((long) 16));
											{	/* Llib/object.scm 1039 */
												long BgL_auxz00_10508;

												BgL_auxz00_10508 = (long) (BgL_arg2630z00_8792);
												BgL_restz00_8791 =
													(BgL_offsetz00_8788 % BgL_auxz00_10508);
										}}
										{	/* Llib/object.scm 1039 */

											return
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_8786,
													(int) (BgL_modz00_8789)), (int) (BgL_restz00_8791));
		}}}}}}}}}
	}



/* find-super-class-method */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_128, obj_t BgL_genericz00_129, obj_t BgL_classz00_130)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1047 */
			{	/* Llib/object.scm 1048 */
				obj_t BgL_g2370z00_3707;

				BgL_g2370z00_3707 = VECTOR_REF(BgL_classz00_130, (int) (((long) 3)));
				{
					obj_t BgL_superz00_3709;

					BgL_superz00_3709 = BgL_g2370z00_3707;
				BgL_loopz00_3708:
					if (BGl_classzf3zf3zz__objectz00(BgL_superz00_3709))
						{	/* Llib/object.scm 1048 */
							long BgL_objzd2superzd2classzd2numzd2_3711;

							{	/* Llib/object.scm 1048 */
								long BgL_res3732z00_3721;

								{	/* Llib/object.scm 1048 */
									obj_t BgL_vectorz00_3719;

									int BgL_kz00_3720;

									BgL_vectorz00_3719 = BgL_superz00_3709;
									BgL_kz00_3720 = (int) (((long) 1));
									BgL_res3732z00_3721 =
										(long) CINT(VECTOR_REF(BgL_vectorz00_3719, BgL_kz00_3720));
								}
								BgL_objzd2superzd2classzd2numzd2_3711 = BgL_res3732z00_3721;
							}
							{	/* Llib/object.scm 1048 */
								obj_t BgL_methodz00_3712;

								{	/* Llib/object.scm 1048 */
									obj_t BgL_arg2806z00_3713;

									BgL_arg2806z00_3713 =
										PROCEDURE_REF(BgL_genericz00_129, (int) (((long) 1)));
									{	/* Llib/object.scm 1048 */
										obj_t BgL_arrayz00_3724;

										int BgL_offsetz00_3725;

										BgL_arrayz00_3724 = BgL_arg2806z00_3713;
										BgL_offsetz00_3725 =
											(int) (BgL_objzd2superzd2classzd2numzd2_3711);
										{	/* Llib/object.scm 1048 */
											long BgL_offsetz00_3726;

											BgL_offsetz00_3726 =
												((long) (BgL_offsetz00_3725) - OBJECT_TYPE);
											{	/* Llib/object.scm 1048 */
												long BgL_modz00_3727;

												{	/* Llib/object.scm 1048 */
													int BgL_arg2631z00_3728;

													BgL_arg2631z00_3728 = (int) (((long) 16));
													{	/* Llib/object.scm 1048 */
														long BgL_auxz00_10528;

														BgL_auxz00_10528 = (long) (BgL_arg2631z00_3728);
														BgL_modz00_3727 =
															(BgL_offsetz00_3726 / BgL_auxz00_10528);
												}}
												{	/* Llib/object.scm 1048 */
													long BgL_restz00_3729;

													{	/* Llib/object.scm 1048 */
														int BgL_arg2630z00_3730;

														BgL_arg2630z00_3730 = (int) (((long) 16));
														{	/* Llib/object.scm 1048 */
															long BgL_auxz00_10532;

															BgL_auxz00_10532 = (long) (BgL_arg2630z00_3730);
															BgL_restz00_3729 =
																(BgL_offsetz00_3726 % BgL_auxz00_10532);
													}}
													{	/* Llib/object.scm 1048 */

														BgL_methodz00_3712 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3724,
																(int) (BgL_modz00_3727)),
															(int) (BgL_restz00_3729));
								}}}}}}
								if (CBOOL(BgL_methodz00_3712))
									{	/* Llib/object.scm 1048 */
										return BgL_methodz00_3712;
									}
								else
									{
										obj_t BgL_superz00_10541;

										BgL_superz00_10541 =
											VECTOR_REF(BgL_superz00_3709, (int) (((long) 3)));
										BgL_superz00_3709 = BgL_superz00_10541;
										goto BgL_loopz00_3708;
									}
							}
						}
					else
						{	/* Llib/object.scm 1048 */
							return PROCEDURE_REF(BgL_genericz00_129, (int) (((long) 0)));
		}}}}
	}



/* _find-super-class-method */
	obj_t BGl__findzd2superzd2classzd2methodzd2zz__objectz00(obj_t
		BgL_envz00_7828, obj_t BgL_objz00_7829, obj_t BgL_genericz00_7830,
		obj_t BgL_classz00_7831)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1047 */
			{	/* Llib/object.scm 1048 */
				obj_t BgL_auxz00_10554;

				BgL_objectz00_bglt BgL_auxz00_10546;

				if (PROCEDUREP(BgL_genericz00_7830))
					{	/* Llib/object.scm 1048 */
						BgL_auxz00_10554 = BgL_genericz00_7830;
					}
				else
					{
						obj_t BgL_auxz00_10557;

						BgL_auxz00_10557 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 47019)), BGl_string4294z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_genericz00_7830);
						FAILURE(BgL_auxz00_10557, BFALSE, BFALSE);
					}
				if (BGL_OBJECTP(BgL_objz00_7829))
					{	/* Llib/object.scm 1048 */
						BgL_auxz00_10546 = (BgL_objectz00_bglt) (BgL_objz00_7829);
					}
				else
					{
						obj_t BgL_auxz00_10550;

						BgL_auxz00_10550 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 47019)), BGl_string4294z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_7829);
						FAILURE(BgL_auxz00_10550, BFALSE, BFALSE);
					}
				return
					BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_auxz00_10546,
					BgL_auxz00_10554, BgL_classz00_7831);
			}
		}
	}



/* find-method-from */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2methodzd2fromz00zz__objectz00(BgL_objectz00_bglt BgL_objz00_131,
		obj_t BgL_genericz00_132, obj_t BgL_classz00_133)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1063 */
			{
				obj_t BgL_classz00_3750;

				BgL_classz00_3750 = BgL_classz00_133;
			BgL_loopz00_3749:
				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_3750))
					{	/* Llib/object.scm 1065 */
						long BgL_objzd2superzd2classzd2numzd2_3752;

						{	/* Llib/object.scm 1065 */
							long BgL_res3736z00_3759;

							{	/* Llib/object.scm 1065 */
								obj_t BgL_vectorz00_3757;

								int BgL_kz00_3758;

								BgL_vectorz00_3757 = BgL_classz00_3750;
								BgL_kz00_3758 = (int) (((long) 1));
								BgL_res3736z00_3759 =
									(long) CINT(VECTOR_REF(BgL_vectorz00_3757, BgL_kz00_3758));
							}
							BgL_objzd2superzd2classzd2numzd2_3752 = BgL_res3736z00_3759;
						}
						{	/* Llib/object.scm 1065 */
							obj_t BgL_methodz00_3753;

							{	/* Llib/object.scm 1065 */
								obj_t BgL_arg2810z00_3754;

								BgL_arg2810z00_3754 =
									PROCEDURE_REF(BgL_genericz00_132, (int) (((long) 1)));
								{	/* Llib/object.scm 1065 */
									obj_t BgL_arrayz00_3762;

									int BgL_offsetz00_3763;

									BgL_arrayz00_3762 = BgL_arg2810z00_3754;
									BgL_offsetz00_3763 =
										(int) (BgL_objzd2superzd2classzd2numzd2_3752);
									{	/* Llib/object.scm 1065 */
										long BgL_offsetz00_3764;

										BgL_offsetz00_3764 =
											((long) (BgL_offsetz00_3763) - OBJECT_TYPE);
										{	/* Llib/object.scm 1065 */
											long BgL_modz00_3765;

											{	/* Llib/object.scm 1065 */
												int BgL_arg2631z00_3766;

												BgL_arg2631z00_3766 = (int) (((long) 16));
												{	/* Llib/object.scm 1065 */
													long BgL_auxz00_10573;

													BgL_auxz00_10573 = (long) (BgL_arg2631z00_3766);
													BgL_modz00_3765 =
														(BgL_offsetz00_3764 / BgL_auxz00_10573);
											}}
											{	/* Llib/object.scm 1065 */
												long BgL_restz00_3767;

												{	/* Llib/object.scm 1065 */
													int BgL_arg2630z00_3768;

													BgL_arg2630z00_3768 = (int) (((long) 16));
													{	/* Llib/object.scm 1065 */
														long BgL_auxz00_10577;

														BgL_auxz00_10577 = (long) (BgL_arg2630z00_3768);
														BgL_restz00_3767 =
															(BgL_offsetz00_3764 % BgL_auxz00_10577);
												}}
												{	/* Llib/object.scm 1065 */

													BgL_methodz00_3753 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_3762,
															(int) (BgL_modz00_3765)),
														(int) (BgL_restz00_3767));
							}}}}}}
							if (CBOOL(BgL_methodz00_3753))
								{	/* Llib/object.scm 1065 */
									return MAKE_PAIR(BgL_classz00_3750, BgL_methodz00_3753);
								}
							else
								{
									obj_t BgL_classz00_10587;

									BgL_classz00_10587 =
										VECTOR_REF(BgL_classz00_3750, (int) (((long) 3)));
									BgL_classz00_3750 = BgL_classz00_10587;
									goto BgL_loopz00_3749;
								}
						}
					}
				else
					{	/* Llib/object.scm 1065 */
						return MAKE_PAIR(BFALSE, BFALSE);
					}
			}
		}
	}



/* _find-method-from */
	obj_t BGl__findzd2methodzd2fromz00zz__objectz00(obj_t BgL_envz00_7832,
		obj_t BgL_objz00_7833, obj_t BgL_genericz00_7834, obj_t BgL_classz00_7835)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1063 */
			{	/* Llib/object.scm 1065 */
				obj_t BgL_auxz00_10599;

				BgL_objectz00_bglt BgL_auxz00_10591;

				if (PROCEDUREP(BgL_genericz00_7834))
					{	/* Llib/object.scm 1065 */
						BgL_auxz00_10599 = BgL_genericz00_7834;
					}
				else
					{
						obj_t BgL_auxz00_10602;

						BgL_auxz00_10602 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 47696)), BGl_string4295z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_genericz00_7834);
						FAILURE(BgL_auxz00_10602, BFALSE, BFALSE);
					}
				if (BGL_OBJECTP(BgL_objz00_7833))
					{	/* Llib/object.scm 1065 */
						BgL_auxz00_10591 = (BgL_objectz00_bglt) (BgL_objz00_7833);
					}
				else
					{
						obj_t BgL_auxz00_10595;

						BgL_auxz00_10595 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 47696)), BGl_string4295z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_7833);
						FAILURE(BgL_auxz00_10595, BFALSE, BFALSE);
					}
				return
					BGl_findzd2methodzd2fromz00zz__objectz00(BgL_auxz00_10591,
					BgL_auxz00_10599, BgL_classz00_7835);
			}
		}
	}



/* is-a? */
	BGL_EXPORTED_DEF bool_t BGl_iszd2azf3z21zz__objectz00(obj_t BgL_objz00_134,
		obj_t BgL_classz00_135)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1080 */
			if (BGL_OBJECTP(BgL_objz00_134))
				{	/* Llib/object.scm 1083 */
					obj_t BgL_oclassz00_1484;

					{	/* Llib/object.scm 1083 */
						BgL_objectz00_bglt BgL_objectz00_3786;

						BgL_objectz00_3786 = (BgL_objectz00_bglt) (BgL_objz00_134);
						{	/* Llib/object.scm 1083 */
							long BgL_arg2628z00_3787;

							{	/* Llib/object.scm 1083 */
								long BgL_arg2629z00_3788;

								BgL_arg2629z00_3788 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_3786);
								BgL_arg2628z00_3787 = (BgL_arg2629z00_3788 - OBJECT_TYPE);
							}
							BgL_oclassz00_1484 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								(int) (BgL_arg2628z00_3787));
					}}
					if ((BgL_oclassz00_1484 == BgL_classz00_135))
						{	/* Llib/object.scm 1084 */
							return ((bool_t) 1);
						}
					else
						{	/* Llib/object.scm 1084 */
							if (BGl_classzf3zf3zz__objectz00(BgL_classz00_135))
								{	/* Llib/object.scm 1087 */
									obj_t BgL_ominz00_1487;

									obj_t BgL_cminz00_1488;

									obj_t BgL_cmaxz00_1489;

									BgL_ominz00_1487 =
										VECTOR_REF(BgL_oclassz00_1484, (int) (((long) 2)));
									BgL_cminz00_1488 =
										VECTOR_REF(BgL_classz00_135, (int) (((long) 2)));
									BgL_cmaxz00_1489 =
										VECTOR_REF(BgL_classz00_135, (int) (((long) 5)));
									if (
										((long) CINT(BgL_ominz00_1487) >=
											(long) CINT(BgL_cminz00_1488)))
										{	/* Llib/object.scm 1090 */
											return
												(
												(long) CINT(BgL_ominz00_1487) <=
												(long) CINT(BgL_cmaxz00_1489));
										}
									else
										{	/* Llib/object.scm 1090 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Llib/object.scm 1086 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Llib/object.scm 1081 */
					return ((bool_t) 0);
				}
		}
	}



/* _is-a? */
	obj_t BGl__iszd2azf3z21zz__objectz00(obj_t BgL_envz00_7836,
		obj_t BgL_objz00_7837, obj_t BgL_classz00_7838)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1080 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_objz00_7837,
					BgL_classz00_7838));
		}
	}



/* is-nil? */
	BGL_EXPORTED_DEF bool_t BGl_iszd2nilzf3z21zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_136)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1100 */
			{	/* Llib/object.scm 1101 */
				obj_t BgL_klassz00_3807;

				{	/* Llib/object.scm 1101 */
					long BgL_arg2628z00_3811;

					{	/* Llib/object.scm 1101 */
						long BgL_arg2629z00_3812;

						BgL_arg2629z00_3812 = BGL_OBJECT_CLASS_NUM(BgL_objz00_136);
						BgL_arg2628z00_3811 = (BgL_arg2629z00_3812 - OBJECT_TYPE);
					}
					BgL_klassz00_3807 =
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
						(int) (BgL_arg2628z00_3811));
				}
				{	/* Llib/object.scm 1101 */
					obj_t BgL_arg2815z00_3808;

					{	/* Llib/object.scm 1101 */
						obj_t BgL_fun2816z00_3809;

						BgL_fun2816z00_3809 =
							VECTOR_REF(BgL_klassz00_3807, (int) (((long) 12)));
						BgL_arg2815z00_3808 =
							PROCEDURE_ENTRY(BgL_fun2816z00_3809) (BgL_fun2816z00_3809, BEOA);
					}
					return (BgL_arg2815z00_3808 == (obj_t) (BgL_objz00_136));
				}
			}
		}
	}



/* _is-nil? */
	obj_t BGl__iszd2nilzf3z21zz__objectz00(obj_t BgL_envz00_7839,
		obj_t BgL_objz00_7840)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1100 */
			{	/* Llib/object.scm 1101 */
				bool_t BgL_auxz00_10643;

				{	/* Llib/object.scm 1101 */
					BgL_objectz00_bglt BgL_auxz00_10644;

					if (BGL_OBJECTP(BgL_objz00_7840))
						{	/* Llib/object.scm 1101 */
							BgL_auxz00_10644 = (BgL_objectz00_bglt) (BgL_objz00_7840);
						}
					else
						{
							obj_t BgL_auxz00_10648;

							BgL_auxz00_10648 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 49048)), BGl_string4296z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_objz00_7840);
							FAILURE(BgL_auxz00_10648, BFALSE, BFALSE);
						}
					BgL_auxz00_10643 = BGl_iszd2nilzf3z21zz__objectz00(BgL_auxz00_10644);
				}
				return BBOOL(BgL_auxz00_10643);
			}
		}
	}



/* class-hierarchy-numbering! */
	bool_t BGl_classzd2hierarchyzd2numberingz12z12zz__objectz00(obj_t
		BgL_classz00_137, obj_t BgL_superz00_138)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1109 */
			{	/* Llib/object.scm 1110 */
				obj_t BgL_superzd2minzd2_1494;

				BgL_superzd2minzd2_1494 =
					VECTOR_REF(BgL_superz00_138, (int) (((long) 2)));
				{	/* Llib/object.scm 1110 */
					obj_t BgL_superzd2maxzd2_1495;

					BgL_superzd2maxzd2_1495 =
						VECTOR_REF(BgL_superz00_138, (int) (((long) 5)));
					{	/* Llib/object.scm 1111 */
						obj_t BgL_subclassesz00_1496;

						BgL_subclassesz00_1496 =
							VECTOR_REF(BgL_superz00_138, (int) (((long) 4)));
						{	/* Llib/object.scm 1112 */
							long BgL_newzd2numzd2_1497;

							if (NULLP(CDR(BgL_subclassesz00_1496)))
								{	/* Llib/object.scm 1114 */
									obj_t BgL_arg2825z00_1505;

									BgL_arg2825z00_1505 =
										VECTOR_REF(BgL_superz00_138, (int) (((long) 2)));
									BgL_newzd2numzd2_1497 =
										(((long) 1) + (long) CINT(BgL_arg2825z00_1505));
								}
							else
								{	/* Llib/object.scm 1115 */
									obj_t BgL_arg2827z00_1507;

									{	/* Llib/object.scm 1115 */
										obj_t BgL_arg2828z00_1508;

										{	/* Llib/object.scm 1115 */
											obj_t BgL_pairz00_3837;

											BgL_pairz00_3837 = BgL_subclassesz00_1496;
											BgL_arg2828z00_1508 = CAR(CDR(BgL_pairz00_3837));
										}
										BgL_arg2827z00_1507 =
											VECTOR_REF(BgL_arg2828z00_1508, (int) (((long) 5)));
									}
									BgL_newzd2numzd2_1497 =
										(((long) 1) + (long) CINT(BgL_arg2827z00_1507));
								}
							{	/* Llib/object.scm 1113 */

								if ((BgL_newzd2numzd2_1497 < ((long) 0)))
									{	/* Llib/object.scm 1117 */
										BGl_errorz00zz__errorz00(BGl_string4297z00zz__objectz00,
											BGl_string4298z00zz__objectz00,
											VECTOR_REF(BgL_classz00_137, (int) (((long) 0))));
									}
								else
									{	/* Llib/object.scm 1117 */
										BFALSE;
									}
								VECTOR_SET(BgL_classz00_137,
									(int) (((long) 2)), BINT(BgL_newzd2numzd2_1497));
								VECTOR_SET(BgL_classz00_137,
									(int) (((long) 5)), BINT(BgL_newzd2numzd2_1497));
								if (
									(BgL_newzd2numzd2_1497 >
										(long) CINT(BgL_superzd2maxzd2_1495)))
									{	/* Llib/object.scm 1124 */
										return
											BGl_classzd2hierarchyzd2upzd2renumberz12zc0zz__objectz00
											(BgL_superz00_138);
									}
								else
									{	/* Llib/object.scm 1124 */
										return ((bool_t) 0);
									}
							}
						}
					}
				}
			}
		}
	}



/* class-hierarchy-up-renumber! */
	bool_t BGl_classzd2hierarchyzd2upzd2renumberz12zc0zz__objectz00(obj_t
		BgL_classz00_139)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1131 */
		BGl_classzd2hierarchyzd2upzd2renumberz12zc0zz__objectz00:
			{	/* Llib/object.scm 1133 */
				obj_t BgL_oldzd2numzd2_1510;

				BgL_oldzd2numzd2_1510 =
					VECTOR_REF(BgL_classz00_139, (int) (((long) 5)));
				{	/* Llib/object.scm 1133 */
					long BgL_newzd2numzd2_1511;

					if (
						((long) CINT(BgL_oldzd2numzd2_1510) >
							((LONG_MAX >> TAG_SHIFT) / ((long) 2))))
						{	/* Llib/object.scm 1135 */
							BgL_newzd2numzd2_1511 =
								(((long) 10) + (long) CINT(BgL_oldzd2numzd2_1510));
						}
					else
						{	/* Llib/object.scm 1135 */
							if (
								((long) CINT(BgL_oldzd2numzd2_1510) >
									((LONG_MAX >> TAG_SHIFT) / ((long) 4))))
								{	/* Llib/object.scm 1137 */
									BgL_newzd2numzd2_1511 =
										(((long) 100) + (long) CINT(BgL_oldzd2numzd2_1510));
								}
							else
								{	/* Llib/object.scm 1139 */
									bool_t BgL_testz00_10702;

									{	/* Llib/object.scm 1139 */
										long BgL_arg2856z00_1549;

										{	/* Llib/object.scm 1139 */
											obj_t BgL_arg2858z00_1551;

											BgL_arg2858z00_1551 =
												VECTOR_REF(BgL_classz00_139, (int) (((long) 2)));
											BgL_arg2856z00_1549 =
												(
												(long) CINT(BgL_oldzd2numzd2_1510) -
												(long) CINT(BgL_arg2858z00_1551));
										}
										BgL_testz00_10702 = (BgL_arg2856z00_1549 < ((long) 512));
									}
									if (BgL_testz00_10702)
										{	/* Llib/object.scm 1139 */
											BgL_newzd2numzd2_1511 =
												((long) CINT(BgL_oldzd2numzd2_1510) + ((long) 1024));
										}
									else
										{	/* Llib/object.scm 1139 */
											BgL_newzd2numzd2_1511 =
												((long) CINT(BgL_oldzd2numzd2_1510) * ((long) 2));
						}}}
					{	/* Llib/object.scm 1134 */
						obj_t BgL_superz00_1512;

						BgL_superz00_1512 =
							VECTOR_REF(BgL_classz00_139, (int) (((long) 3)));
						{	/* Llib/object.scm 1143 */

							if ((BgL_newzd2numzd2_1511 < ((long) 0)))
								{	/* Llib/object.scm 1144 */
									BGl_errorz00zz__errorz00(BGl_string4299z00zz__objectz00,
										BGl_string4300z00zz__objectz00, VECTOR_REF(BgL_classz00_139,
											(int) (((long) 0))));
								}
							else
								{	/* Llib/object.scm 1144 */
									BFALSE;
								}
							VECTOR_SET(BgL_classz00_139,
								(int) (((long) 5)), BINT(BgL_newzd2numzd2_1511));
							if (BGl_classzf3zf3zz__objectz00(BgL_superz00_1512))
								{	/* Llib/object.scm 1151 */
									obj_t BgL_g2371z00_1518;

									BgL_g2371z00_1518 =
										VECTOR_REF(BgL_superz00_1512, (int) (((long) 4)));
									{
										obj_t BgL_sistersz00_1521;

										obj_t BgL_oldzd2sisterszd2_1522;

										BgL_sistersz00_1521 = BgL_g2371z00_1518;
										BgL_oldzd2sisterszd2_1522 = BNIL;
									BgL_zc3anonymousza32835ze3z83_1523:
										{	/* Llib/object.scm 1155 */
											bool_t BgL_testz00_10727;

											if (NULLP(BgL_sistersz00_1521))
												{	/* Llib/object.scm 1155 */
													BgL_testz00_10727 = ((bool_t) 1);
												}
											else
												{	/* Llib/object.scm 1155 */
													BgL_testz00_10727 =
														(CAR(BgL_sistersz00_1521) == BgL_classz00_139);
												}
											if (BgL_testz00_10727)
												{	/* Llib/object.scm 1157 */
													long BgL_g2373z00_1525;

													BgL_g2373z00_1525 =
														(BgL_newzd2numzd2_1511 + ((long) 1));
													{
														obj_t BgL_oldzd2sisterszd2_1527;

														long BgL_sisterzd2numzd2_1528;

														BgL_oldzd2sisterszd2_1527 =
															BgL_oldzd2sisterszd2_1522;
														BgL_sisterzd2numzd2_1528 = BgL_g2373z00_1525;
													BgL_zc3anonymousza32837ze3z83_1529:
														if (NULLP(BgL_oldzd2sisterszd2_1527))
															{	/* Llib/object.scm 1163 */
																bool_t BgL_testz00_10735;

																{	/* Llib/object.scm 1163 */
																	obj_t BgL_arg2841z00_1532;

																	obj_t BgL_arg2842z00_1533;

																	BgL_arg2841z00_1532 =
																		VECTOR_REF(CAR(VECTOR_REF(BgL_superz00_1512,
																				(int) (((long) 4)))),
																		(int) (((long) 5)));
																	BgL_arg2842z00_1533 =
																		VECTOR_REF(BgL_superz00_1512,
																		(int) (((long) 5)));
																	BgL_testz00_10735 =
																		(
																		(long) CINT(BgL_arg2841z00_1532) >
																		(long) CINT(BgL_arg2842z00_1533));
																}
																if (BgL_testz00_10735)
																	{
																		obj_t BgL_classz00_10746;

																		BgL_classz00_10746 = BgL_superz00_1512;
																		BgL_classz00_139 = BgL_classz00_10746;
																		goto
																			BGl_classzd2hierarchyzd2upzd2renumberz12zc0zz__objectz00;
																	}
																else
																	{	/* Llib/object.scm 1163 */
																		return ((bool_t) 0);
																	}
															}
														else
															{
																long BgL_sisterzd2numzd2_10749;

																obj_t BgL_oldzd2sisterszd2_10747;

																BgL_oldzd2sisterszd2_10747 =
																	CDR(BgL_oldzd2sisterszd2_1527);
																BgL_sisterzd2numzd2_10749 =
																	BGl_classzd2hierarchyzd2downzd2renumberz12zc0zz__objectz00
																	(CAR(BgL_oldzd2sisterszd2_1527),
																	BgL_sisterzd2numzd2_1528);
																BgL_sisterzd2numzd2_1528 =
																	BgL_sisterzd2numzd2_10749;
																BgL_oldzd2sisterszd2_1527 =
																	BgL_oldzd2sisterszd2_10747;
																goto BgL_zc3anonymousza32837ze3z83_1529;
															}
													}
												}
											else
												{	/* Llib/object.scm 1170 */
													obj_t BgL_arg2848z00_1540;

													obj_t BgL_arg2849z00_1541;

													BgL_arg2848z00_1540 = CDR(BgL_sistersz00_1521);
													BgL_arg2849z00_1541 =
														MAKE_PAIR(CAR(BgL_sistersz00_1521),
														BgL_oldzd2sisterszd2_1522);
													{
														obj_t BgL_oldzd2sisterszd2_10756;

														obj_t BgL_sistersz00_10755;

														BgL_sistersz00_10755 = BgL_arg2848z00_1540;
														BgL_oldzd2sisterszd2_10756 = BgL_arg2849z00_1541;
														BgL_oldzd2sisterszd2_1522 =
															BgL_oldzd2sisterszd2_10756;
														BgL_sistersz00_1521 = BgL_sistersz00_10755;
														goto BgL_zc3anonymousza32835ze3z83_1523;
													}
												}
										}
									}
								}
							else
								{	/* Llib/object.scm 1150 */
									return ((bool_t) 0);
								}
						}
					}
				}
			}
		}
	}



/* class-hierarchy-down-renumber! */
	long BGl_classzd2hierarchyzd2downzd2renumberz12zc0zz__objectz00(obj_t
		BgL_classz00_140, long BgL_numz00_141)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1176 */
			VECTOR_SET(BgL_classz00_140, (int) (((long) 2)), BINT(BgL_numz00_141));
			{	/* Llib/object.scm 1179 */
				obj_t BgL_g2374z00_1558;

				BgL_g2374z00_1558 =
					bgl_reverse(VECTOR_REF(BgL_classz00_140, (int) (((long) 4))));
				{
					obj_t BgL_classesz00_3937;

					long BgL_maxzd2numzd2_3938;

					BgL_classesz00_3937 = BgL_g2374z00_1558;
					BgL_maxzd2numzd2_3938 = BgL_numz00_141;
				BgL_liipz00_3936:
					if (NULLP(BgL_classesz00_3937))
						{	/* Llib/object.scm 1179 */
							VECTOR_SET(BgL_classz00_140,
								(int) (((long) 5)), BINT(BgL_maxzd2numzd2_3938));
							return (((long) 1) + BgL_maxzd2numzd2_3938);
						}
					else
						{
							long BgL_maxzd2numzd2_10771;

							obj_t BgL_classesz00_10769;

							BgL_classesz00_10769 = CDR(BgL_classesz00_3937);
							BgL_maxzd2numzd2_10771 =
								BGl_classzd2hierarchyzd2downzd2renumberz12zc0zz__objectz00(CAR
								(BgL_classesz00_3937), (((long) 1) + BgL_maxzd2numzd2_3938));
							BgL_maxzd2numzd2_3938 = BgL_maxzd2numzd2_10771;
							BgL_classesz00_3937 = BgL_classesz00_10769;
							goto BgL_liipz00_3936;
						}
				}
			}
		}
	}



/* struct->object */
	BGL_EXPORTED_DEF BgL_objectz00_bglt
		BGl_structzd2ze3objectz31zz__objectz00(obj_t BgL_structz00_158)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1224 */
			{	/* Llib/object.scm 1225 */
				BgL_objectz00_bglt BgL_arg2873z00_3997;

				BgL_arg2873z00_3997 =
					BGl_allocatezd2instancezd2zz__objectz00(STRUCT_KEY
					(BgL_structz00_158));
				{	/* Llib/object.scm 1225 */
					BgL_objectz00_bglt BgL_res3744z00_4028;

					{	/* Llib/object.scm 1225 */
						obj_t BgL_method2446z00_4003;

						{	/* Llib/object.scm 1225 */
							long BgL_objzd2classzd2numz00_4005;

							BgL_objzd2classzd2numz00_4005 =
								BGL_OBJECT_CLASS_NUM(BgL_arg2873z00_3997);
							{	/* Llib/object.scm 1225 */
								obj_t BgL_arg2803z00_4006;

								BgL_arg2803z00_4006 =
									PROCEDURE_REF
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									(int) (((long) 1)));
								{	/* Llib/object.scm 1225 */
									obj_t BgL_arrayz00_4008;

									int BgL_offsetz00_4009;

									BgL_arrayz00_4008 = BgL_arg2803z00_4006;
									BgL_offsetz00_4009 = (int) (BgL_objzd2classzd2numz00_4005);
									{	/* Llib/object.scm 1225 */
										long BgL_offsetz00_4010;

										BgL_offsetz00_4010 =
											((long) (BgL_offsetz00_4009) - OBJECT_TYPE);
										{	/* Llib/object.scm 1225 */
											long BgL_modz00_4011;

											{	/* Llib/object.scm 1225 */
												int BgL_arg2631z00_4012;

												BgL_arg2631z00_4012 = (int) (((long) 16));
												{	/* Llib/object.scm 1225 */
													long BgL_auxz00_10784;

													BgL_auxz00_10784 = (long) (BgL_arg2631z00_4012);
													BgL_modz00_4011 =
														(BgL_offsetz00_4010 / BgL_auxz00_10784);
											}}
											{	/* Llib/object.scm 1225 */
												long BgL_restz00_4013;

												{	/* Llib/object.scm 1225 */
													int BgL_arg2630z00_4014;

													BgL_arg2630z00_4014 = (int) (((long) 16));
													{	/* Llib/object.scm 1225 */
														long BgL_auxz00_10788;

														BgL_auxz00_10788 = (long) (BgL_arg2630z00_4014);
														BgL_restz00_4013 =
															(BgL_offsetz00_4010 % BgL_auxz00_10788);
												}}
												{	/* Llib/object.scm 1225 */

													BgL_method2446z00_4003 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_4008,
															(int) (BgL_modz00_4011)),
														(int) (BgL_restz00_4013));
						}}}}}}}
						BgL_res3744z00_4028 =
							(BgL_objectz00_bglt) (PROCEDURE_ENTRY(BgL_method2446z00_4003)
							(BgL_method2446z00_4003, (obj_t) (BgL_arg2873z00_3997),
								BgL_structz00_158, BEOA));
					}
					return BgL_res3744z00_4028;
				}
			}
		}
	}



/* _struct->object */
	obj_t BGl__structzd2ze3objectz31zz__objectz00(obj_t BgL_envz00_7841,
		obj_t BgL_structz00_7842)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1224 */
			{	/* Llib/object.scm 1225 */
				BgL_objectz00_bglt BgL_auxz00_10799;

				{	/* Llib/object.scm 1225 */
					obj_t BgL_auxz00_10800;

					if (STRUCTP(BgL_structz00_7842))
						{	/* Llib/object.scm 1225 */
							BgL_auxz00_10800 = BgL_structz00_7842;
						}
					else
						{
							obj_t BgL_auxz00_10803;

							BgL_auxz00_10803 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 54716)), BGl_string4301z00zz__objectz00,
								BGl_string4302z00zz__objectz00, BgL_structz00_7842);
							FAILURE(BgL_auxz00_10803, BFALSE, BFALSE);
						}
					BgL_auxz00_10799 =
						BGl_structzd2ze3objectz31zz__objectz00(BgL_auxz00_10800);
				}
				return (obj_t) (BgL_auxz00_10799);
			}
		}
	}



/* allocate-instance */
	BGL_EXPORTED_DEF BgL_objectz00_bglt
		BGl_allocatezd2instancezd2zz__objectz00(obj_t BgL_cnamez00_159)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1230 */
			{
				long BgL_iz00_1573;

				{	/* Llib/object.scm 1231 */
					obj_t BgL_auxz00_10809;

					BgL_iz00_1573 = ((long) 0);
				BgL_zc3anonymousza32875ze3z83_1574:
					if (
						(BgL_iz00_1573 ==
							(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00)))
						{	/* Llib/object.scm 1232 */
							BgL_auxz00_10809 =
								BGl_errorz00zz__errorz00(BGl_string4303z00zz__objectz00,
								BGl_string4230z00zz__objectz00, BgL_cnamez00_159);
						}
					else
						{	/* Llib/object.scm 1234 */
							obj_t BgL_classz00_1576;

							BgL_classz00_1576 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								(int) (BgL_iz00_1573));
							if (
								(VECTOR_REF(BgL_classz00_1576,
										(int) (((long) 0))) == BgL_cnamez00_159))
								{	/* Llib/object.scm 1236 */
									obj_t BgL_fun2878z00_1578;

									BgL_fun2878z00_1578 =
										VECTOR_REF(BgL_classz00_1576, (int) (((long) 6)));
									BgL_auxz00_10809 =
										PROCEDURE_ENTRY(BgL_fun2878z00_1578) (BgL_fun2878z00_1578,
										BEOA);
								}
							else
								{
									long BgL_iz00_10824;

									BgL_iz00_10824 = (BgL_iz00_1573 + ((long) 1));
									BgL_iz00_1573 = BgL_iz00_10824;
									goto BgL_zc3anonymousza32875ze3z83_1574;
								}
						}
					return (BgL_objectz00_bglt) (BgL_auxz00_10809);
				}
			}
		}
	}



/* _allocate-instance */
	obj_t BGl__allocatezd2instancezd2zz__objectz00(obj_t BgL_envz00_7846,
		obj_t BgL_cnamez00_7847)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1230 */
			{	/* Llib/object.scm 1232 */
				BgL_objectz00_bglt BgL_auxz00_10827;

				{	/* Llib/object.scm 1232 */
					obj_t BgL_auxz00_10828;

					if (SYMBOLP(BgL_cnamez00_7847))
						{	/* Llib/object.scm 1232 */
							BgL_auxz00_10828 = BgL_cnamez00_7847;
						}
					else
						{
							obj_t BgL_auxz00_10831;

							BgL_auxz00_10831 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 55046)), BGl_string4304z00zz__objectz00,
								BGl_string4233z00zz__objectz00, BgL_cnamez00_7847);
							FAILURE(BgL_auxz00_10831, BFALSE, BFALSE);
						}
					BgL_auxz00_10827 =
						BGl_allocatezd2instancezd2zz__objectz00(BgL_auxz00_10828);
				}
				return (obj_t) (BgL_auxz00_10827);
			}
		}
	}



/* wide-object? */
	BGL_EXPORTED_DEF bool_t
		BGl_widezd2objectzf3z21zz__objectz00(BgL_objectz00_bglt BgL_objectz00_160)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1242 */
			if (CBOOL(BGL_OBJECT_WIDENING(BgL_objectz00_160)))
				{	/* Llib/object.scm 1243 */
					return ((bool_t) 1);
				}
			else
				{	/* Llib/object.scm 1243 */
					return ((bool_t) 0);
				}
		}
	}



/* _wide-object? */
	obj_t BGl__widezd2objectzf3z21zz__objectz00(obj_t BgL_envz00_7848,
		obj_t BgL_objectz00_7849)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1242 */
			{	/* Llib/object.scm 1243 */
				bool_t BgL_auxz00_10840;

				{	/* Llib/object.scm 1243 */
					BgL_objectz00_bglt BgL_objectz00_8798;

					if (BGL_OBJECTP(BgL_objectz00_7849))
						{	/* Llib/object.scm 1243 */
							BgL_objectz00_8798 = (BgL_objectz00_bglt) (BgL_objectz00_7849);
						}
					else
						{
							obj_t BgL_auxz00_10844;

							BgL_auxz00_10844 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 55536)), BGl_string4305z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_objectz00_7849);
							FAILURE(BgL_auxz00_10844, BFALSE, BFALSE);
						}
					if (CBOOL(BGL_OBJECT_WIDENING(BgL_objectz00_8798)))
						{	/* Llib/object.scm 1243 */
							BgL_auxz00_10840 = ((bool_t) 1);
						}
					else
						{	/* Llib/object.scm 1243 */
							BgL_auxz00_10840 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_auxz00_10840);
			}
		}
	}



/* call-virtual-getter */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_175, int BgL_numz00_176)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1379 */
			{	/* Llib/object.scm 1380 */
				obj_t BgL_classz00_4044;

				{	/* Llib/object.scm 1380 */
					long BgL_arg2628z00_4049;

					{	/* Llib/object.scm 1380 */
						long BgL_arg2629z00_4050;

						BgL_arg2629z00_4050 = BGL_OBJECT_CLASS_NUM(BgL_objz00_175);
						BgL_arg2628z00_4049 = (BgL_arg2629z00_4050 - OBJECT_TYPE);
					}
					BgL_classz00_4044 =
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
						(int) (BgL_arg2628z00_4049));
				}
				{	/* Llib/object.scm 1380 */
					obj_t BgL_getterz00_4045;

					BgL_getterz00_4045 =
						CAR(VECTOR_REF(VECTOR_REF(BgL_classz00_4044,
								(int) (((long) 10))), BgL_numz00_176));
					{	/* Llib/object.scm 1380 */

						return
							PROCEDURE_ENTRY(BgL_getterz00_4045) (BgL_getterz00_4045,
							(obj_t) (BgL_objz00_175), BEOA);
					}
				}
			}
		}
	}



/* _call-virtual-getter */
	obj_t BGl__callzd2virtualzd2getterz00zz__objectz00(obj_t BgL_envz00_7850,
		obj_t BgL_objz00_7851, obj_t BgL_numz00_7852)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1379 */
			{	/* Llib/object.scm 1380 */
				int BgL_auxz00_10871;

				BgL_objectz00_bglt BgL_auxz00_10863;

				{	/* Llib/object.scm 1380 */
					obj_t BgL_auxz00_10872;

					if (INTEGERP(BgL_numz00_7852))
						{	/* Llib/object.scm 1380 */
							BgL_auxz00_10872 = BgL_numz00_7852;
						}
					else
						{
							obj_t BgL_auxz00_10875;

							BgL_auxz00_10875 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 60750)), BGl_string4306z00zz__objectz00,
								BGl_string4263z00zz__objectz00, BgL_numz00_7852);
							FAILURE(BgL_auxz00_10875, BFALSE, BFALSE);
						}
					BgL_auxz00_10871 = CINT(BgL_auxz00_10872);
				}
				if (BGL_OBJECTP(BgL_objz00_7851))
					{	/* Llib/object.scm 1380 */
						BgL_auxz00_10863 = (BgL_objectz00_bglt) (BgL_objz00_7851);
					}
				else
					{
						obj_t BgL_auxz00_10867;

						BgL_auxz00_10867 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 60750)), BGl_string4306z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_7851);
						FAILURE(BgL_auxz00_10867, BFALSE, BFALSE);
					}
				return
					BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_auxz00_10863,
					BgL_auxz00_10871);
			}
		}
	}



/* call-virtual-setter */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_177, int BgL_numz00_178, obj_t BgL_valuez00_179)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1392 */
			{	/* Llib/object.scm 1393 */
				obj_t BgL_classz00_4063;

				{	/* Llib/object.scm 1393 */
					long BgL_arg2628z00_4068;

					{	/* Llib/object.scm 1393 */
						long BgL_arg2629z00_4069;

						BgL_arg2629z00_4069 = BGL_OBJECT_CLASS_NUM(BgL_objz00_177);
						BgL_arg2628z00_4068 = (BgL_arg2629z00_4069 - OBJECT_TYPE);
					}
					BgL_classz00_4063 =
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
						(int) (BgL_arg2628z00_4068));
				}
				{	/* Llib/object.scm 1393 */
					obj_t BgL_setterz00_4064;

					BgL_setterz00_4064 =
						CDR(VECTOR_REF(VECTOR_REF(BgL_classz00_4063,
								(int) (((long) 10))), BgL_numz00_178));
					{	/* Llib/object.scm 1393 */

						return
							PROCEDURE_ENTRY(BgL_setterz00_4064) (BgL_setterz00_4064,
							(obj_t) (BgL_objz00_177), BgL_valuez00_179, BEOA);
					}
				}
			}
		}
	}



/* _call-virtual-setter */
	obj_t BGl__callzd2virtualzd2setterz00zz__objectz00(obj_t BgL_envz00_7853,
		obj_t BgL_objz00_7854, obj_t BgL_numz00_7855, obj_t BgL_valuez00_7856)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1392 */
			{	/* Llib/object.scm 1393 */
				int BgL_auxz00_10900;

				BgL_objectz00_bglt BgL_auxz00_10892;

				{	/* Llib/object.scm 1393 */
					obj_t BgL_auxz00_10901;

					if (INTEGERP(BgL_numz00_7855))
						{	/* Llib/object.scm 1393 */
							BgL_auxz00_10901 = BgL_numz00_7855;
						}
					else
						{
							obj_t BgL_auxz00_10904;

							BgL_auxz00_10904 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 61517)), BGl_string4307z00zz__objectz00,
								BGl_string4263z00zz__objectz00, BgL_numz00_7855);
							FAILURE(BgL_auxz00_10904, BFALSE, BFALSE);
						}
					BgL_auxz00_10900 = CINT(BgL_auxz00_10901);
				}
				if (BGL_OBJECTP(BgL_objz00_7854))
					{	/* Llib/object.scm 1393 */
						BgL_auxz00_10892 = (BgL_objectz00_bglt) (BgL_objz00_7854);
					}
				else
					{
						obj_t BgL_auxz00_10896;

						BgL_auxz00_10896 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 61517)), BGl_string4307z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_7854);
						FAILURE(BgL_auxz00_10896, BFALSE, BFALSE);
					}
				return
					BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_auxz00_10892,
					BgL_auxz00_10900, BgL_valuez00_7856);
			}
		}
	}



/* call-next-virtual-getter */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(obj_t BgL_classz00_180,
		BgL_objectz00_bglt BgL_objz00_181, int BgL_numz00_182)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1415 */
			{	/* Llib/object.scm 1416 */
				obj_t BgL_nextzd2classzd2_4082;

				BgL_nextzd2classzd2_4082 =
					VECTOR_REF(BgL_classz00_180, (int) (((long) 3)));
				{	/* Llib/object.scm 1416 */
					obj_t BgL_fun2889z00_4083;

					BgL_fun2889z00_4083 =
						CAR(VECTOR_REF(VECTOR_REF(BgL_nextzd2classzd2_4082,
								(int) (((long) 10))), BgL_numz00_182));
					return
						PROCEDURE_ENTRY(BgL_fun2889z00_4083) (BgL_fun2889z00_4083,
						(obj_t) (BgL_objz00_181), BEOA);
				}
			}
		}
	}



/* _call-next-virtual-getter */
	obj_t BGl__callzd2nextzd2virtualzd2getterzd2zz__objectz00(obj_t
		BgL_envz00_7857, obj_t BgL_classz00_7858, obj_t BgL_objz00_7859,
		obj_t BgL_numz00_7860)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1415 */
			{	/* Llib/object.scm 1416 */
				int BgL_auxz00_10927;

				BgL_objectz00_bglt BgL_auxz00_10919;

				{	/* Llib/object.scm 1416 */
					obj_t BgL_auxz00_10928;

					if (INTEGERP(BgL_numz00_7860))
						{	/* Llib/object.scm 1416 */
							BgL_auxz00_10928 = BgL_numz00_7860;
						}
					else
						{
							obj_t BgL_auxz00_10931;

							BgL_auxz00_10931 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 63035)), BGl_string4308z00zz__objectz00,
								BGl_string4263z00zz__objectz00, BgL_numz00_7860);
							FAILURE(BgL_auxz00_10931, BFALSE, BFALSE);
						}
					BgL_auxz00_10927 = CINT(BgL_auxz00_10928);
				}
				if (BGL_OBJECTP(BgL_objz00_7859))
					{	/* Llib/object.scm 1416 */
						BgL_auxz00_10919 = (BgL_objectz00_bglt) (BgL_objz00_7859);
					}
				else
					{
						obj_t BgL_auxz00_10923;

						BgL_auxz00_10923 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 63035)), BGl_string4308z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_7859);
						FAILURE(BgL_auxz00_10923, BFALSE, BFALSE);
					}
				return
					BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(BgL_classz00_7858,
					BgL_auxz00_10919, BgL_auxz00_10927);
			}
		}
	}



/* call-next-virtual-setter */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(obj_t BgL_classz00_183,
		BgL_objectz00_bglt BgL_objz00_184, int BgL_numz00_185,
		obj_t BgL_valuez00_186)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1427 */
			{	/* Llib/object.scm 1428 */
				obj_t BgL_nextzd2classzd2_4096;

				BgL_nextzd2classzd2_4096 =
					VECTOR_REF(BgL_classz00_183, (int) (((long) 3)));
				{	/* Llib/object.scm 1428 */
					obj_t BgL_fun2892z00_4097;

					BgL_fun2892z00_4097 =
						CDR(VECTOR_REF(VECTOR_REF(BgL_nextzd2classzd2_4096,
								(int) (((long) 10))), BgL_numz00_185));
					return
						PROCEDURE_ENTRY(BgL_fun2892z00_4097) (BgL_fun2892z00_4097,
						(obj_t) (BgL_objz00_184), BgL_valuez00_186, BEOA);
				}
			}
		}
	}



/* _call-next-virtual-setter */
	obj_t BGl__callzd2nextzd2virtualzd2setterzd2zz__objectz00(obj_t
		BgL_envz00_7861, obj_t BgL_classz00_7862, obj_t BgL_objz00_7863,
		obj_t BgL_numz00_7864, obj_t BgL_valuez00_7865)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1427 */
			{	/* Llib/object.scm 1428 */
				int BgL_auxz00_10954;

				BgL_objectz00_bglt BgL_auxz00_10946;

				{	/* Llib/object.scm 1428 */
					obj_t BgL_auxz00_10955;

					if (INTEGERP(BgL_numz00_7864))
						{	/* Llib/object.scm 1428 */
							BgL_auxz00_10955 = BgL_numz00_7864;
						}
					else
						{
							obj_t BgL_auxz00_10958;

							BgL_auxz00_10958 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 63803)), BGl_string4309z00zz__objectz00,
								BGl_string4263z00zz__objectz00, BgL_numz00_7864);
							FAILURE(BgL_auxz00_10958, BFALSE, BFALSE);
						}
					BgL_auxz00_10954 = CINT(BgL_auxz00_10955);
				}
				if (BGL_OBJECTP(BgL_objz00_7863))
					{	/* Llib/object.scm 1428 */
						BgL_auxz00_10946 = (BgL_objectz00_bglt) (BgL_objz00_7863);
					}
				else
					{
						obj_t BgL_auxz00_10950;

						BgL_auxz00_10950 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 63803)), BGl_string4309z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_7863);
						FAILURE(BgL_auxz00_10950, BFALSE, BFALSE);
					}
				return
					BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(BgL_classz00_7862,
					BgL_auxz00_10946, BgL_auxz00_10954, BgL_valuez00_7865);
			}
		}
	}



/* %object-widening */
	BGL_EXPORTED_DEF obj_t
		BGl_z52objectzd2wideningz80zz__objectz00(BgL_objectz00_bglt BgL_oz00_187)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1437 */
			return BGL_OBJECT_WIDENING(BgL_oz00_187);
		}
	}



/* _%object-widening */
	obj_t BGl__z52objectzd2wideningz80zz__objectz00(obj_t BgL_envz00_7866,
		obj_t BgL_oz00_7867)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1437 */
			{	/* Llib/object.scm 1438 */
				BgL_objectz00_bglt BgL_oz00_8804;

				if (BGL_OBJECTP(BgL_oz00_7867))
					{	/* Llib/object.scm 1438 */
						BgL_oz00_8804 = (BgL_objectz00_bglt) (BgL_oz00_7867);
					}
				else
					{
						obj_t BgL_auxz00_10968;

						BgL_auxz00_10968 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 64390)), BGl_string4310z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_oz00_7867);
						FAILURE(BgL_auxz00_10968, BFALSE, BFALSE);
					}
				return BGL_OBJECT_WIDENING(BgL_oz00_8804);
			}
		}
	}



/* %object-widening-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_objectz00_bglt
		BgL_oz00_188, obj_t BgL_wz00_189)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1446 */
			BGL_OBJECT_WIDENING_SET(BgL_oz00_188, BgL_wz00_189);
			return (obj_t) (BgL_oz00_188);
		}
	}



/* _%object-widening-set! */
	obj_t BGl__z52objectzd2wideningzd2setz12z40zz__objectz00(obj_t
		BgL_envz00_7868, obj_t BgL_oz00_7869, obj_t BgL_wz00_7870)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1446 */
			{	/* Llib/object.scm 1448 */
				BgL_objectz00_bglt BgL_auxz00_10975;

				if (BGL_OBJECTP(BgL_oz00_7869))
					{	/* Llib/object.scm 1448 */
						BgL_auxz00_10975 = (BgL_objectz00_bglt) (BgL_oz00_7869);
					}
				else
					{
						obj_t BgL_auxz00_10979;

						BgL_auxz00_10979 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 64925)), BGl_string4311z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_oz00_7869);
						FAILURE(BgL_auxz00_10979, BFALSE, BFALSE);
					}
				return
					BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_auxz00_10975,
					BgL_wz00_7870);
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 84 */
				obj_t BgL_arg2893z00_1599;

				obj_t BgL_arg2899z00_1604;

				BgL_arg2893z00_1599 = BGl_symbol4312z00zz__objectz00;
				{	/* Llib/object.scm 84 */
					obj_t BgL_v2407z00_1606;

					BgL_v2407z00_1606 = create_vector((int) (((long) 0)));
					BgL_arg2899z00_1604 = BgL_v2407z00_1606;
				}
				BGl_objectz00zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2893z00_1599, BFALSE,
					((bool_t) 0), BGl_makezd2objectzd2envz00zz__objectz00,
					BGl_z52allocatezd2objectzd2envz52zz__objectz00,
					BGl_objectzd2nilzd2envz00zz__objectz00,
					BGl_objectzf3zd2envz21zz__objectz00, ((long) 7283880), BNIL, BFALSE,
					BgL_arg2899z00_1604);
			}
			{	/* Llib/object.scm 85 */
				obj_t BgL_arg2901z00_1607;

				obj_t BgL_arg2902z00_1608;

				obj_t BgL_arg2907z00_1613;

				BgL_arg2901z00_1607 = BGl_symbol4313z00zz__objectz00;
				BgL_arg2902z00_1608 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 85 */
					obj_t BgL_v2408z00_1615;

					BgL_v2408z00_1615 = create_vector((int) (((long) 0)));
					BgL_arg2907z00_1613 = BgL_v2408z00_1615;
				}
				BGl_z62conditionz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2901z00_1607,
					BgL_arg2902z00_1608, ((bool_t) 0),
					BGl_makezd2z62conditionzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62conditionzd2envz30zz__objectz00,
					BGl_z62conditionzd2nilzd2envz62zz__objectz00,
					BGl_z62conditionzf3zd2envz43zz__objectz00, ((long) 252307182), BNIL,
					BFALSE, BgL_arg2907z00_1613);
			}
			{	/* Llib/object.scm 87 */
				obj_t BgL_arg2909z00_1616;

				obj_t BgL_arg2910z00_1617;

				obj_t BgL_arg2914z00_1621;

				obj_t BgL_arg2915z00_1622;

				BgL_arg2909z00_1616 = BGl_symbol4315z00zz__objectz00;
				BgL_arg2910z00_1617 = BGl_z62conditionz62zz__objectz00;
				{	/* Llib/object.scm 87 */
					obj_t BgL_arg2916z00_1623;

					obj_t BgL_arg2917z00_1624;

					obj_t BgL_arg2918z00_1625;

					{	/* Llib/object.scm 87 */
						obj_t BgL_res3753z00_4144;

						{	/* Llib/object.scm 87 */
							obj_t BgL_namez00_4114;

							BgL_namez00_4114 = BGl_symbol4317z00zz__objectz00;
							{	/* Llib/object.scm 87 */
								obj_t BgL_v2395z00_4119;

								BgL_v2395z00_4119 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4119,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4119, (int) (((long) 7)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4119, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4119,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4119, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4119, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4119,
									(int) (((long) 2)),
									BGl_z62exceptionzd2fnamezd2setz12zd2envza2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4119, (int) (((long) 1)),
									BGl_z62exceptionzd2fnamezd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4119, (int) (((long) 0)),
									BgL_namez00_4114);
								BgL_res3753z00_4144 = BgL_v2395z00_4119;
						}}
						BgL_arg2916z00_1623 = BgL_res3753z00_4144;
					}
					{	/* Llib/object.scm 87 */
						obj_t BgL_res3754z00_4175;

						{	/* Llib/object.scm 87 */
							obj_t BgL_namez00_4145;

							BgL_namez00_4145 = BGl_symbol4319z00zz__objectz00;
							{	/* Llib/object.scm 87 */
								obj_t BgL_v2395z00_4150;

								BgL_v2395z00_4150 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4150,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4150, (int) (((long) 7)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4150, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4150,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4150, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4150, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4150,
									(int) (((long) 2)),
									BGl_z62exceptionzd2locationzd2setz12zd2envza2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4150, (int) (((long) 1)),
									BGl_z62exceptionzd2locationzd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4150, (int) (((long) 0)),
									BgL_namez00_4145);
								BgL_res3754z00_4175 = BgL_v2395z00_4150;
						}}
						BgL_arg2917z00_1624 = BgL_res3754z00_4175;
					}
					{	/* Llib/object.scm 87 */
						obj_t BgL_res3755z00_4206;

						{	/* Llib/object.scm 87 */
							obj_t BgL_namez00_4176;

							obj_t BgL_defaultz00_4180;

							BgL_namez00_4176 = BGl_symbol4321z00zz__objectz00;
							BgL_defaultz00_4180 = BGl_list4323z00zz__objectz00;
							{	/* Llib/object.scm 87 */
								obj_t BgL_v2395z00_4181;

								BgL_v2395z00_4181 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4181,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4181,
									(int) (((long) 7)), BgL_defaultz00_4180);
								VECTOR_SET(BgL_v2395z00_4181, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4181,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4181, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4181, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4181,
									(int) (((long) 2)),
									BGl_z62exceptionzd2stackzd2setz12zd2envza2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4181, (int) (((long) 1)),
									BGl_z62exceptionzd2stackzd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4181, (int) (((long) 0)),
									BgL_namez00_4176);
								BgL_res3755z00_4206 = BgL_v2395z00_4181;
						}}
						BgL_arg2918z00_1625 = BgL_res3755z00_4206;
					}
					{	/* Llib/object.scm 87 */
						obj_t BgL_list2919z00_1626;

						{	/* Llib/object.scm 87 */
							obj_t BgL_arg2920z00_1627;

							{	/* Llib/object.scm 87 */
								obj_t BgL_arg2921z00_1628;

								BgL_arg2921z00_1628 = MAKE_PAIR(BgL_arg2918z00_1625, BNIL);
								BgL_arg2920z00_1627 =
									MAKE_PAIR(BgL_arg2917z00_1624, BgL_arg2921z00_1628);
							}
							BgL_list2919z00_1626 =
								MAKE_PAIR(BgL_arg2916z00_1623, BgL_arg2920z00_1627);
						}
						BgL_arg2914z00_1621 = BgL_list2919z00_1626;
				}}
				{	/* Llib/object.scm 87 */
					obj_t BgL_v2409z00_1629;

					BgL_v2409z00_1629 = create_vector((int) (((long) 0)));
					BgL_arg2915z00_1622 = BgL_v2409z00_1629;
				}
				BGl_z62exceptionz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2909z00_1616,
					BgL_arg2910z00_1617, ((bool_t) 0),
					BGl_makezd2z62exceptionzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62exceptionzd2envz30zz__objectz00,
					BGl_z62exceptionzd2nilzd2envz62zz__objectz00,
					BGl_z62exceptionzf3zd2envz43zz__objectz00, ((long) 349256899),
					BgL_arg2914z00_1621, BFALSE, BgL_arg2915z00_1622);
			}
			{	/* Llib/object.scm 92 */
				obj_t BgL_arg2922z00_1630;

				obj_t BgL_arg2923z00_1631;

				obj_t BgL_arg2927z00_1635;

				obj_t BgL_arg2928z00_1636;

				BgL_arg2922z00_1630 = BGl_symbol4326z00zz__objectz00;
				BgL_arg2923z00_1631 = BGl_z62exceptionz62zz__objectz00;
				{	/* Llib/object.scm 92 */
					obj_t BgL_arg2929z00_1637;

					obj_t BgL_arg2930z00_1638;

					obj_t BgL_arg2931z00_1639;

					{	/* Llib/object.scm 92 */
						obj_t BgL_arg2935z00_1643;

						obj_t BgL_arg2936z00_1644;

						BgL_arg2935z00_1643 = BGl_symbol4328z00zz__objectz00;
						BgL_arg2936z00_1644 = BGl_symbol4278z00zz__objectz00;
						{	/* Llib/object.scm 92 */
							obj_t BgL_res3757z00_4241;

							{	/* Llib/object.scm 92 */
								obj_t BgL_v2395z00_4215;

								BgL_v2395z00_4215 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4215,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4215,
									(int) (((long) 7)), BgL_arg2936z00_1644);
								VECTOR_SET(BgL_v2395z00_4215, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4215,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4215, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4215, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4215, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4215,
									(int) (((long) 1)),
									BGl_z62errorzd2proczd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4215, (int) (((long) 0)),
									BgL_arg2935z00_1643);
								BgL_res3757z00_4241 = BgL_v2395z00_4215;
							}
							BgL_arg2929z00_1637 = BgL_res3757z00_4241;
					}}
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg2937z00_1645;

						obj_t BgL_arg2938z00_1646;

						BgL_arg2937z00_1645 = BGl_symbol4330z00zz__objectz00;
						BgL_arg2938z00_1646 = BGl_symbol4278z00zz__objectz00;
						{	/* Llib/object.scm 92 */
							obj_t BgL_res3758z00_4274;

							{	/* Llib/object.scm 92 */
								obj_t BgL_v2395z00_4248;

								BgL_v2395z00_4248 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4248,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4248,
									(int) (((long) 7)), BgL_arg2938z00_1646);
								VECTOR_SET(BgL_v2395z00_4248, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4248,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4248, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4248, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4248, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4248,
									(int) (((long) 1)), BGl_z62errorzd2msgzd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4248,
									(int) (((long) 0)), BgL_arg2937z00_1645);
								BgL_res3758z00_4274 = BgL_v2395z00_4248;
							}
							BgL_arg2930z00_1638 = BgL_res3758z00_4274;
					}}
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg2939z00_1647;

						obj_t BgL_arg2940z00_1648;

						BgL_arg2939z00_1647 = BGl_symbol4242z00zz__objectz00;
						BgL_arg2940z00_1648 = BGl_symbol4278z00zz__objectz00;
						{	/* Llib/object.scm 92 */
							obj_t BgL_res3759z00_4307;

							{	/* Llib/object.scm 92 */
								obj_t BgL_v2395z00_4281;

								BgL_v2395z00_4281 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4281,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4281,
									(int) (((long) 7)), BgL_arg2940z00_1648);
								VECTOR_SET(BgL_v2395z00_4281, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4281,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4281, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4281, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4281, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4281,
									(int) (((long) 1)), BGl_z62errorzd2objzd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4281,
									(int) (((long) 0)), BgL_arg2939z00_1647);
								BgL_res3759z00_4307 = BgL_v2395z00_4281;
							}
							BgL_arg2931z00_1639 = BgL_res3759z00_4307;
					}}
					{	/* Llib/object.scm 92 */
						obj_t BgL_list2932z00_1640;

						{	/* Llib/object.scm 92 */
							obj_t BgL_arg2933z00_1641;

							{	/* Llib/object.scm 92 */
								obj_t BgL_arg2934z00_1642;

								BgL_arg2934z00_1642 = MAKE_PAIR(BgL_arg2931z00_1639, BNIL);
								BgL_arg2933z00_1641 =
									MAKE_PAIR(BgL_arg2930z00_1638, BgL_arg2934z00_1642);
							}
							BgL_list2932z00_1640 =
								MAKE_PAIR(BgL_arg2929z00_1637, BgL_arg2933z00_1641);
						}
						BgL_arg2927z00_1635 = BgL_list2932z00_1640;
				}}
				{	/* Llib/object.scm 92 */
					obj_t BgL_v2410z00_1649;

					BgL_v2410z00_1649 = create_vector((int) (((long) 0)));
					BgL_arg2928z00_1636 = BgL_v2410z00_1649;
				}
				BGl_z62errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2922z00_1630,
					BgL_arg2923z00_1631, ((bool_t) 0),
					BGl_makezd2z62errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62errorzd2envz30zz__objectz00,
					BGl_z62errorzd2nilzd2envz62zz__objectz00,
					BGl_z62errorzf3zd2envz43zz__objectz00, ((long) 2925032),
					BgL_arg2927z00_1635, BFALSE, BgL_arg2928z00_1636);
			}
			{	/* Llib/object.scm 96 */
				obj_t BgL_arg2942z00_1650;

				obj_t BgL_arg2943z00_1651;

				obj_t BgL_arg2947z00_1655;

				obj_t BgL_arg2948z00_1656;

				BgL_arg2942z00_1650 = BGl_symbol4332z00zz__objectz00;
				BgL_arg2943z00_1651 = BGl_z62errorz62zz__objectz00;
				{	/* Llib/object.scm 96 */
					obj_t BgL_arg2949z00_1657;

					{	/* Llib/object.scm 96 */
						obj_t BgL_arg2951z00_1659;

						obj_t BgL_arg2952z00_1660;

						BgL_arg2951z00_1659 = BGl_symbol4334z00zz__objectz00;
						BgL_arg2952z00_1660 = BGl_symbol4278z00zz__objectz00;
						{	/* Llib/object.scm 96 */
							obj_t BgL_res3761z00_4342;

							{	/* Llib/object.scm 96 */
								obj_t BgL_v2395z00_4316;

								BgL_v2395z00_4316 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4316,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4316,
									(int) (((long) 7)), BgL_arg2952z00_1660);
								VECTOR_SET(BgL_v2395z00_4316, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4316,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4316, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4316, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4316, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4316,
									(int) (((long) 1)),
									BGl_z62typezd2errorzd2typezd2envzb0zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4316, (int) (((long) 0)),
									BgL_arg2951z00_1659);
								BgL_res3761z00_4342 = BgL_v2395z00_4316;
							}
							BgL_arg2949z00_1657 = BgL_res3761z00_4342;
					}}
					{	/* Llib/object.scm 96 */
						obj_t BgL_list2950z00_1658;

						BgL_list2950z00_1658 = MAKE_PAIR(BgL_arg2949z00_1657, BNIL);
						BgL_arg2947z00_1655 = BgL_list2950z00_1658;
				}}
				{	/* Llib/object.scm 96 */
					obj_t BgL_v2411z00_1661;

					BgL_v2411z00_1661 = create_vector((int) (((long) 0)));
					BgL_arg2948z00_1656 = BgL_v2411z00_1661;
				}
				BGl_z62typezd2errorzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2942z00_1650,
					BgL_arg2943z00_1651, ((bool_t) 0),
					BGl_makezd2z62typezd2errorzd2envzb0zz__objectz00,
					BGl_z52allocatezd2z62typezd2errorzd2envze2zz__objectz00,
					BGl_z62typezd2errorzd2nilzd2envzb0zz__objectz00,
					BGl_z62typezd2errorzf3zd2envz91zz__objectz00, ((long) 167099987),
					BgL_arg2947z00_1655, BFALSE, BgL_arg2948z00_1656);
			}
			{	/* Llib/object.scm 98 */
				obj_t BgL_arg2953z00_1662;

				obj_t BgL_arg2954z00_1663;

				obj_t BgL_arg2959z00_1667;

				obj_t BgL_arg2960z00_1668;

				BgL_arg2953z00_1662 = BGl_symbol4336z00zz__objectz00;
				BgL_arg2954z00_1663 = BGl_z62errorz62zz__objectz00;
				{	/* Llib/object.scm 98 */
					obj_t BgL_arg2961z00_1669;

					{	/* Llib/object.scm 98 */
						obj_t BgL_arg2963z00_1671;

						obj_t BgL_arg2964z00_1672;

						BgL_arg2963z00_1671 = BGl_symbol4338z00zz__objectz00;
						BgL_arg2964z00_1672 = BGl_symbol4278z00zz__objectz00;
						{	/* Llib/object.scm 98 */
							obj_t BgL_res3763z00_4377;

							{	/* Llib/object.scm 98 */
								obj_t BgL_v2395z00_4351;

								BgL_v2395z00_4351 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4351,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4351,
									(int) (((long) 7)), BgL_arg2964z00_1672);
								VECTOR_SET(BgL_v2395z00_4351, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4351,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4351, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4351, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4351, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4351,
									(int) (((long) 1)),
									BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2indexzd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4351, (int) (((long) 0)),
									BgL_arg2963z00_1671);
								BgL_res3763z00_4377 = BgL_v2395z00_4351;
							}
							BgL_arg2961z00_1669 = BgL_res3763z00_4377;
					}}
					{	/* Llib/object.scm 98 */
						obj_t BgL_list2962z00_1670;

						BgL_list2962z00_1670 = MAKE_PAIR(BgL_arg2961z00_1669, BNIL);
						BgL_arg2959z00_1667 = BgL_list2962z00_1670;
				}}
				{	/* Llib/object.scm 98 */
					obj_t BgL_v2412z00_1673;

					BgL_v2412z00_1673 = create_vector((int) (((long) 0)));
					BgL_arg2960z00_1668 = BgL_v2412z00_1673;
				}
				BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2953z00_1662,
					BgL_arg2954z00_1663, ((bool_t) 0),
					BGl_makezd2z62indexzd2outzd2ofzd2boundszd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62indexzd2outzd2ofzd2boundszd2errorzd2envz30zz__objectz00,
					BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62indexzd2outzd2ofzd2boundszd2errorzf3zd2envz43zz__objectz00,
					((long) 23266620), BgL_arg2959z00_1667, BFALSE, BgL_arg2960z00_1668);
			}
			{	/* Llib/object.scm 100 */
				obj_t BgL_arg2965z00_1674;

				obj_t BgL_arg2966z00_1675;

				obj_t BgL_arg2971z00_1680;

				BgL_arg2965z00_1674 = BGl_symbol4340z00zz__objectz00;
				BgL_arg2966z00_1675 = BGl_z62errorz62zz__objectz00;
				{	/* Llib/object.scm 100 */
					obj_t BgL_v2413z00_1682;

					BgL_v2413z00_1682 = create_vector((int) (((long) 0)));
					BgL_arg2971z00_1680 = BgL_v2413z00_1682;
				}
				BGl_z62iozd2errorzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2965z00_1674,
					BgL_arg2966z00_1675, ((bool_t) 0),
					BGl_makezd2z62iozd2errorzd2envzb0zz__objectz00,
					BGl_z52allocatezd2z62iozd2errorzd2envze2zz__objectz00,
					BGl_z62iozd2errorzd2nilzd2envzb0zz__objectz00,
					BGl_z62iozd2errorzf3zd2envz91zz__objectz00, ((long) 52906766), BNIL,
					BFALSE, BgL_arg2971z00_1680);
			}
			{	/* Llib/object.scm 101 */
				obj_t BgL_arg2973z00_1683;

				obj_t BgL_arg2974z00_1684;

				obj_t BgL_arg2979z00_1689;

				BgL_arg2973z00_1683 = BGl_symbol4342z00zz__objectz00;
				BgL_arg2974z00_1684 = BGl_z62iozd2errorzb0zz__objectz00;
				{	/* Llib/object.scm 101 */
					obj_t BgL_v2414z00_1691;

					BgL_v2414z00_1691 = create_vector((int) (((long) 0)));
					BgL_arg2979z00_1689 = BgL_v2414z00_1691;
				}
				BGl_z62iozd2portzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2973z00_1683,
					BgL_arg2974z00_1684, ((bool_t) 0),
					BGl_makezd2z62iozd2portzd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62iozd2portzd2errorzd2envz30zz__objectz00,
					BGl_z62iozd2portzd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62iozd2portzd2errorzf3zd2envz43zz__objectz00, ((long) 413457328),
					BNIL, BFALSE, BgL_arg2979z00_1689);
			}
			{	/* Llib/object.scm 102 */
				obj_t BgL_arg2981z00_1692;

				obj_t BgL_arg2982z00_1693;

				obj_t BgL_arg2987z00_1698;

				BgL_arg2981z00_1692 = BGl_symbol4344z00zz__objectz00;
				BgL_arg2982z00_1693 = BGl_z62iozd2portzd2errorz62zz__objectz00;
				{	/* Llib/object.scm 102 */
					obj_t BgL_v2415z00_1700;

					BgL_v2415z00_1700 = create_vector((int) (((long) 0)));
					BgL_arg2987z00_1698 = BgL_v2415z00_1700;
				}
				BGl_z62iozd2readzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2981z00_1692,
					BgL_arg2982z00_1693, ((bool_t) 0),
					BGl_makezd2z62iozd2readzd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62iozd2readzd2errorzd2envz30zz__objectz00,
					BGl_z62iozd2readzd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62iozd2readzd2errorzf3zd2envz43zz__objectz00, ((long) 131146655),
					BNIL, BFALSE, BgL_arg2987z00_1698);
			}
			{	/* Llib/object.scm 103 */
				obj_t BgL_arg2989z00_1701;

				obj_t BgL_arg2990z00_1702;

				obj_t BgL_arg2995z00_1707;

				BgL_arg2989z00_1701 = BGl_symbol4346z00zz__objectz00;
				BgL_arg2990z00_1702 = BGl_z62iozd2portzd2errorz62zz__objectz00;
				{	/* Llib/object.scm 103 */
					obj_t BgL_v2416z00_1709;

					BgL_v2416z00_1709 = create_vector((int) (((long) 0)));
					BgL_arg2995z00_1707 = BgL_v2416z00_1709;
				}
				BGl_z62iozd2writezd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2989z00_1701,
					BgL_arg2990z00_1702, ((bool_t) 0),
					BGl_makezd2z62iozd2writezd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62iozd2writezd2errorzd2envz30zz__objectz00,
					BGl_z62iozd2writezd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62iozd2writezd2errorzf3zd2envz43zz__objectz00,
					((long) 475658382), BNIL, BFALSE, BgL_arg2995z00_1707);
			}
			{	/* Llib/object.scm 104 */
				obj_t BgL_arg2997z00_1710;

				obj_t BgL_arg2998z00_1711;

				obj_t BgL_arg3004z00_1716;

				BgL_arg2997z00_1710 = BGl_symbol4348z00zz__objectz00;
				BgL_arg2998z00_1711 = BGl_z62iozd2portzd2errorz62zz__objectz00;
				{	/* Llib/object.scm 104 */
					obj_t BgL_v2417z00_1718;

					BgL_v2417z00_1718 = create_vector((int) (((long) 0)));
					BgL_arg3004z00_1716 = BgL_v2417z00_1718;
				}
				BGl_z62iozd2closedzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2997z00_1710,
					BgL_arg2998z00_1711, ((bool_t) 0),
					BGl_makezd2z62iozd2closedzd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62iozd2closedzd2errorzd2envz30zz__objectz00,
					BGl_z62iozd2closedzd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62iozd2closedzd2errorzf3zd2envz43zz__objectz00,
					((long) 143951357), BNIL, BFALSE, BgL_arg3004z00_1716);
			}
			{	/* Llib/object.scm 105 */
				obj_t BgL_arg3006z00_1719;

				obj_t BgL_arg3007z00_1720;

				obj_t BgL_arg3012z00_1725;

				BgL_arg3006z00_1719 = BGl_symbol4350z00zz__objectz00;
				BgL_arg3007z00_1720 = BGl_z62iozd2errorzb0zz__objectz00;
				{	/* Llib/object.scm 105 */
					obj_t BgL_v2418z00_1727;

					BgL_v2418z00_1727 = create_vector((int) (((long) 0)));
					BgL_arg3012z00_1725 = BgL_v2418z00_1727;
				}
				BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3006z00_1719,
					BgL_arg3007z00_1720, ((bool_t) 0),
					BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62iozd2filezd2notzd2foundzd2errorzd2envz30zz__objectz00,
					BGl_z62iozd2filezd2notzd2foundzd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62iozd2filezd2notzd2foundzd2errorzf3zd2envz43zz__objectz00,
					((long) 112136770), BNIL, BFALSE, BgL_arg3012z00_1725);
			}
			{	/* Llib/object.scm 106 */
				obj_t BgL_arg3014z00_1728;

				obj_t BgL_arg3015z00_1729;

				obj_t BgL_arg3020z00_1734;

				BgL_arg3014z00_1728 = BGl_symbol4352z00zz__objectz00;
				BgL_arg3015z00_1729 = BGl_z62iozd2errorzb0zz__objectz00;
				{	/* Llib/object.scm 106 */
					obj_t BgL_v2419z00_1736;

					BgL_v2419z00_1736 = create_vector((int) (((long) 0)));
					BgL_arg3020z00_1734 = BgL_v2419z00_1736;
				}
				BGl_z62iozd2parsezd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3014z00_1728,
					BgL_arg3015z00_1729, ((bool_t) 0),
					BGl_makezd2z62iozd2parsezd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62iozd2parsezd2errorzd2envz30zz__objectz00,
					BGl_z62iozd2parsezd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62iozd2parsezd2errorzf3zd2envz43zz__objectz00,
					((long) 466298766), BNIL, BFALSE, BgL_arg3020z00_1734);
			}
			{	/* Llib/object.scm 107 */
				obj_t BgL_arg3022z00_1737;

				obj_t BgL_arg3023z00_1738;

				obj_t BgL_arg3028z00_1743;

				BgL_arg3022z00_1737 = BGl_symbol4354z00zz__objectz00;
				BgL_arg3023z00_1738 = BGl_z62iozd2errorzb0zz__objectz00;
				{	/* Llib/object.scm 107 */
					obj_t BgL_v2420z00_1745;

					BgL_v2420z00_1745 = create_vector((int) (((long) 0)));
					BgL_arg3028z00_1743 = BgL_v2420z00_1745;
				}
				BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3022z00_1737,
					BgL_arg3023z00_1738, ((bool_t) 0),
					BGl_makezd2z62iozd2unknownzd2hostzd2errorzd2envzb0zz__objectz00,
					BGl_z52allocatezd2z62iozd2unknownzd2hostzd2errorzd2envze2zz__objectz00,
					BGl_z62iozd2unknownzd2hostzd2errorzd2nilzd2envzb0zz__objectz00,
					BGl_z62iozd2unknownzd2hostzd2errorzf3zd2envz91zz__objectz00,
					((long) 283842790), BNIL, BFALSE, BgL_arg3028z00_1743);
			}
			{	/* Llib/object.scm 108 */
				obj_t BgL_arg3030z00_1746;

				obj_t BgL_arg3031z00_1747;

				obj_t BgL_arg3036z00_1752;

				BgL_arg3030z00_1746 = BGl_symbol4356z00zz__objectz00;
				BgL_arg3031z00_1747 = BGl_z62iozd2errorzb0zz__objectz00;
				{	/* Llib/object.scm 108 */
					obj_t BgL_v2421z00_1754;

					BgL_v2421z00_1754 = create_vector((int) (((long) 0)));
					BgL_arg3036z00_1752 = BgL_v2421z00_1754;
				}
				BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3030z00_1746,
					BgL_arg3031z00_1747, ((bool_t) 0),
					BGl_makezd2z62iozd2malformedzd2urlzd2errorzd2envzb0zz__objectz00,
					BGl_z52allocatezd2z62iozd2malformedzd2urlzd2errorzd2envze2zz__objectz00,
					BGl_z62iozd2malformedzd2urlzd2errorzd2nilzd2envzb0zz__objectz00,
					BGl_z62iozd2malformedzd2urlzd2errorzf3zd2envz91zz__objectz00,
					((long) 51483202), BNIL, BFALSE, BgL_arg3036z00_1752);
			}
			{	/* Llib/object.scm 109 */
				obj_t BgL_arg3038z00_1755;

				obj_t BgL_arg3039z00_1756;

				obj_t BgL_arg3044z00_1761;

				BgL_arg3038z00_1755 = BGl_symbol4358z00zz__objectz00;
				BgL_arg3039z00_1756 = BGl_z62iozd2errorzb0zz__objectz00;
				{	/* Llib/object.scm 109 */
					obj_t BgL_v2422z00_1763;

					BgL_v2422z00_1763 = create_vector((int) (((long) 0)));
					BgL_arg3044z00_1761 = BgL_v2422z00_1763;
				}
				BGl_z62iozd2sigpipezd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3038z00_1755,
					BgL_arg3039z00_1756, ((bool_t) 0),
					BGl_makezd2z62iozd2sigpipezd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62iozd2sigpipezd2errorzd2envz30zz__objectz00,
					BGl_z62iozd2sigpipezd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62iozd2sigpipezd2errorzf3zd2envz43zz__objectz00,
					((long) 251612620), BNIL, BFALSE, BgL_arg3044z00_1761);
			}
			{	/* Llib/object.scm 110 */
				obj_t BgL_arg3046z00_1764;

				obj_t BgL_arg3047z00_1765;

				obj_t BgL_arg3052z00_1770;

				BgL_arg3046z00_1764 = BGl_symbol4360z00zz__objectz00;
				BgL_arg3047z00_1765 = BGl_z62iozd2errorzb0zz__objectz00;
				{	/* Llib/object.scm 110 */
					obj_t BgL_v2423z00_1772;

					BgL_v2423z00_1772 = create_vector((int) (((long) 0)));
					BgL_arg3052z00_1770 = BgL_v2423z00_1772;
				}
				BGl_z62iozd2timeoutzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3046z00_1764,
					BgL_arg3047z00_1765, ((bool_t) 0),
					BGl_makezd2z62iozd2timeoutzd2errorzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62iozd2timeoutzd2errorzd2envz30zz__objectz00,
					BGl_z62iozd2timeoutzd2errorzd2nilzd2envz62zz__objectz00,
					BGl_z62iozd2timeoutzd2errorzf3zd2envz43zz__objectz00,
					((long) 56428018), BNIL, BFALSE, BgL_arg3052z00_1770);
			}
			{	/* Llib/object.scm 112 */
				obj_t BgL_arg3054z00_1773;

				obj_t BgL_arg3055z00_1774;

				obj_t BgL_arg3060z00_1779;

				BgL_arg3054z00_1773 = BGl_symbol4362z00zz__objectz00;
				BgL_arg3055z00_1774 = BGl_z62errorz62zz__objectz00;
				{	/* Llib/object.scm 112 */
					obj_t BgL_v2424z00_1781;

					BgL_v2424z00_1781 = create_vector((int) (((long) 0)));
					BgL_arg3060z00_1779 = BgL_v2424z00_1781;
				}
				BGl_z62processzd2exceptionzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3054z00_1773,
					BgL_arg3055z00_1774, ((bool_t) 0),
					BGl_makezd2z62processzd2exceptionzd2envzb0zz__objectz00,
					BGl_z52allocatezd2z62processzd2exceptionzd2envze2zz__objectz00,
					BGl_z62processzd2exceptionzd2nilzd2envzb0zz__objectz00,
					BGl_z62processzd2exceptionzf3zd2envz91zz__objectz00,
					((long) 45599498), BNIL, BFALSE, BgL_arg3060z00_1779);
			}
			{	/* Llib/object.scm 114 */
				obj_t BgL_arg3063z00_1782;

				obj_t BgL_arg3064z00_1783;

				obj_t BgL_arg3068z00_1787;

				obj_t BgL_arg3069z00_1788;

				BgL_arg3063z00_1782 = BGl_symbol4364z00zz__objectz00;
				BgL_arg3064z00_1783 = BGl_z62exceptionz62zz__objectz00;
				{	/* Llib/object.scm 114 */
					obj_t BgL_arg3070z00_1789;

					{	/* Llib/object.scm 114 */
						obj_t BgL_res3777z00_4436;

						{	/* Llib/object.scm 114 */
							obj_t BgL_namez00_4404;

							BgL_namez00_4404 = BGl_symbol4366z00zz__objectz00;
							{	/* Llib/object.scm 114 */
								obj_t BgL_v2395z00_4410;

								BgL_v2395z00_4410 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4410,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4410,
									(int) (((long) 7)), BGl_string4288z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4410, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4410,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4410, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4410, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4410, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4410,
									(int) (((long) 1)),
									BGl_z62securityzd2exceptionzd2messagezd2envzb0zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4410, (int) (((long) 0)),
									BgL_namez00_4404);
								BgL_res3777z00_4436 = BgL_v2395z00_4410;
						}}
						BgL_arg3070z00_1789 = BgL_res3777z00_4436;
					}
					{	/* Llib/object.scm 114 */
						obj_t BgL_list3071z00_1790;

						BgL_list3071z00_1790 = MAKE_PAIR(BgL_arg3070z00_1789, BNIL);
						BgL_arg3068z00_1787 = BgL_list3071z00_1790;
				}}
				{	/* Llib/object.scm 114 */
					obj_t BgL_v2425z00_1791;

					BgL_v2425z00_1791 = create_vector((int) (((long) 0)));
					BgL_arg3069z00_1788 = BgL_v2425z00_1791;
				}
				BGl_z62securityzd2exceptionzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3063z00_1782,
					BgL_arg3064z00_1783, ((bool_t) 0),
					BGl_makezd2z62securityzd2exceptionzd2envzb0zz__objectz00,
					BGl_z52allocatezd2z62securityzd2exceptionzd2envze2zz__objectz00,
					BGl_z62securityzd2exceptionzd2nilzd2envzb0zz__objectz00,
					BGl_z62securityzd2exceptionzf3zd2envz91zz__objectz00,
					((long) 208088680), BgL_arg3068z00_1787, BFALSE, BgL_arg3069z00_1788);
			}
			{	/* Llib/object.scm 116 */
				obj_t BgL_arg3072z00_1792;

				obj_t BgL_arg3073z00_1793;

				obj_t BgL_arg3077z00_1797;

				obj_t BgL_arg3078z00_1798;

				BgL_arg3072z00_1792 = BGl_symbol4368z00zz__objectz00;
				BgL_arg3073z00_1793 = BGl_z62securityzd2exceptionzb0zz__objectz00;
				{	/* Llib/object.scm 116 */
					obj_t BgL_arg3079z00_1799;

					obj_t BgL_arg3081z00_1800;

					{	/* Llib/object.scm 116 */
						obj_t BgL_res3779z00_4471;

						{	/* Llib/object.scm 116 */
							obj_t BgL_namez00_4439;

							BgL_namez00_4439 = BGl_symbol4242z00zz__objectz00;
							{	/* Llib/object.scm 116 */
								obj_t BgL_v2395z00_4445;

								BgL_v2395z00_4445 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4445,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4445, (int) (((long) 7)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4445, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4445,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4445, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4445, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4445, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4445,
									(int) (((long) 1)),
									BGl_z62accesszd2controlzd2exceptionzd2objzd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4445, (int) (((long) 0)),
									BgL_namez00_4439);
								BgL_res3779z00_4471 = BgL_v2395z00_4445;
						}}
						BgL_arg3079z00_1799 = BgL_res3779z00_4471;
					}
					{	/* Llib/object.scm 116 */
						obj_t BgL_res3780z00_4504;

						{	/* Llib/object.scm 116 */
							obj_t BgL_namez00_4472;

							BgL_namez00_4472 = BGl_symbol4370z00zz__objectz00;
							{	/* Llib/object.scm 116 */
								obj_t BgL_v2395z00_4478;

								BgL_v2395z00_4478 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4478,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4478, (int) (((long) 7)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4478, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4478,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4478, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4478, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4478, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4478,
									(int) (((long) 1)),
									BGl_z62accesszd2controlzd2exceptionzd2permissionzd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4478, (int) (((long) 0)),
									BgL_namez00_4472);
								BgL_res3780z00_4504 = BgL_v2395z00_4478;
						}}
						BgL_arg3081z00_1800 = BgL_res3780z00_4504;
					}
					{	/* Llib/object.scm 116 */
						obj_t BgL_list3082z00_1801;

						{	/* Llib/object.scm 116 */
							obj_t BgL_arg3083z00_1802;

							BgL_arg3083z00_1802 = MAKE_PAIR(BgL_arg3081z00_1800, BNIL);
							BgL_list3082z00_1801 =
								MAKE_PAIR(BgL_arg3079z00_1799, BgL_arg3083z00_1802);
						}
						BgL_arg3077z00_1797 = BgL_list3082z00_1801;
				}}
				{	/* Llib/object.scm 116 */
					obj_t BgL_v2426z00_1803;

					BgL_v2426z00_1803 = create_vector((int) (((long) 0)));
					BgL_arg3078z00_1798 = BgL_v2426z00_1803;
				}
				BGl_z62accesszd2controlzd2exceptionz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3072z00_1792,
					BgL_arg3073z00_1793, ((bool_t) 0),
					BGl_makezd2z62accesszd2controlzd2exceptionzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62accesszd2controlzd2exceptionzd2envz30zz__objectz00,
					BGl_z62accesszd2controlzd2exceptionzd2nilzd2envz62zz__objectz00,
					BGl_z62accesszd2controlzd2exceptionzf3zd2envz43zz__objectz00,
					((long) 44104833), BgL_arg3077z00_1797, BFALSE, BgL_arg3078z00_1798);
			}
			{	/* Llib/object.scm 120 */
				obj_t BgL_arg3084z00_1804;

				obj_t BgL_arg3085z00_1805;

				obj_t BgL_arg3089z00_1809;

				obj_t BgL_arg3090z00_1810;

				BgL_arg3084z00_1804 = BGl_symbol4372z00zz__objectz00;
				BgL_arg3085z00_1805 = BGl_z62exceptionz62zz__objectz00;
				{	/* Llib/object.scm 120 */
					obj_t BgL_arg3091z00_1811;

					{	/* Llib/object.scm 120 */
						obj_t BgL_arg3093z00_1813;

						obj_t BgL_arg3094z00_1814;

						BgL_arg3093z00_1813 = BGl_symbol4374z00zz__objectz00;
						BgL_arg3094z00_1814 = BGl_symbol4278z00zz__objectz00;
						{	/* Llib/object.scm 120 */
							obj_t BgL_res3782z00_4539;

							{	/* Llib/object.scm 120 */
								obj_t BgL_v2395z00_4513;

								BgL_v2395z00_4513 = create_vector((int) (((long) 9)));
								VECTOR_SET(BgL_v2395z00_4513,
									(int) (((long) 8)), BGl_symbol4242z00zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4513,
									(int) (((long) 7)), BgL_arg3094z00_1814);
								VECTOR_SET(BgL_v2395z00_4513, (int) (((long) 6)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4513,
									(int) (((long) 5)),
									BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4513, (int) (((long) 4)), BFALSE);
								VECTOR_SET(BgL_v2395z00_4513, (int) (((long) 3)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4513, (int) (((long) 2)), BUNSPEC);
								VECTOR_SET(BgL_v2395z00_4513,
									(int) (((long) 1)),
									BGl_z62warningzd2argszd2envz62zz__objectz00);
								VECTOR_SET(BgL_v2395z00_4513, (int) (((long) 0)),
									BgL_arg3093z00_1813);
								BgL_res3782z00_4539 = BgL_v2395z00_4513;
							}
							BgL_arg3091z00_1811 = BgL_res3782z00_4539;
					}}
					{	/* Llib/object.scm 120 */
						obj_t BgL_list3092z00_1812;

						BgL_list3092z00_1812 = MAKE_PAIR(BgL_arg3091z00_1811, BNIL);
						BgL_arg3089z00_1809 = BgL_list3092z00_1812;
				}}
				{	/* Llib/object.scm 120 */
					obj_t BgL_v2427z00_1815;

					BgL_v2427z00_1815 = create_vector((int) (((long) 0)));
					BgL_arg3090z00_1810 = BgL_v2427z00_1815;
				}
				BGl_z62warningz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3084z00_1804,
					BgL_arg3085z00_1805, ((bool_t) 0),
					BGl_makezd2z62warningzd2envz62zz__objectz00,
					BGl_z52allocatezd2z62warningzd2envz30zz__objectz00,
					BGl_z62warningzd2nilzd2envz62zz__objectz00,
					BGl_z62warningzf3zd2envz43zz__objectz00, ((long) 251609899),
					BgL_arg3089z00_1809, BFALSE, BgL_arg3090z00_1810);
			}
			{	/* Llib/object.scm 122 */
				obj_t BgL_arg3095z00_1816;

				obj_t BgL_arg3096z00_1817;

				obj_t BgL_arg3101z00_1822;

				BgL_arg3095z00_1816 = BGl_symbol4376z00zz__objectz00;
				BgL_arg3096z00_1817 = BGl_z62warningz62zz__objectz00;
				{	/* Llib/object.scm 122 */
					obj_t BgL_v2428z00_1824;

					BgL_v2428z00_1824 = create_vector((int) (((long) 0)));
					BgL_arg3101z00_1822 = BgL_v2428z00_1824;
				}
				BGl_z62evalzd2warningzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3095z00_1816,
					BgL_arg3096z00_1817, ((bool_t) 0),
					BGl_makezd2z62evalzd2warningzd2envzb0zz__objectz00,
					BGl_z52allocatezd2z62evalzd2warningzd2envze2zz__objectz00,
					BGl_z62evalzd2warningzd2nilzd2envzb0zz__objectz00,
					BGl_z62evalzd2warningzf3zd2envz91zz__objectz00, ((long) 372524018),
					BNIL, BFALSE, BgL_arg3101z00_1822);
			}
			BGl_z52thezd2z62evalzd2warningzd2nilze2zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62warningzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62accesszd2controlzd2exceptionzd2nilz30zz__objectz00 =
				BUNSPEC;
			BGl_z52thezd2z62securityzd2exceptionzd2nilze2zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62processzd2exceptionzd2nilze2zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62iozd2timeoutzd2errorzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62iozd2sigpipezd2errorzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62iozd2malformedzd2urlzd2errorzd2nilze2zz__objectz00 =
				BUNSPEC;
			BGl_z52thezd2z62iozd2unknownzd2hostzd2errorzd2nilze2zz__objectz00 =
				BUNSPEC;
			BGl_z52thezd2z62iozd2parsezd2errorzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62iozd2filezd2notzd2foundzd2errorzd2nilz30zz__objectz00 =
				BUNSPEC;
			BGl_z52thezd2z62iozd2closedzd2errorzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62iozd2writezd2errorzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62iozd2readzd2errorzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62iozd2portzd2errorzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62iozd2errorzd2nilze2zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62indexzd2outzd2ofzd2boundszd2errorzd2nilz30zz__objectz00 =
				BUNSPEC;
			BGl_z52thezd2z62typezd2errorzd2nilze2zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62errorzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62exceptionzd2nilz30zz__objectz00 = BUNSPEC;
			BGl_z52thezd2z62conditionzd2nilz30zz__objectz00 = BUNSPEC;
			return (BGl_z52thezd2objectzd2nilz52zz__objectz00 = BUNSPEC, BUNSPEC);
		}
	}



/* &eval-warning? */
	BGL_EXPORTED_DEF bool_t BGl_z62evalzd2warningzf3z43zz__objectz00(obj_t
		BgL_obj2294z00_225)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2294z00_225,
				BGl_z62evalzd2warningzb0zz__objectz00);
		}
	}



/* _&eval-warning? */
	obj_t BGl__z62evalzd2warningzf3z43zz__objectz00(obj_t BgL_envz00_8123,
		obj_t BgL_obj2294z00_8124)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2294z00_8124,
					BGl_z62evalzd2warningzb0zz__objectz00));
		}
	}



/* make-&eval-warning */
	BGL_EXPORTED_DEF BgL_z62evalzd2warningzb0_bglt
		BGl_makezd2z62evalzd2warningz62zz__objectz00(obj_t BgL_fname2259z00_229,
		obj_t BgL_location2260z00_230, obj_t BgL_stack2261z00_231,
		obj_t BgL_args2262z00_232)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			{	/* Llib/object.scm 122 */
				BgL_z62evalzd2warningzb0_bglt BgL_new2263z00_4544;

				{	/* Llib/object.scm 122 */
					BgL_z62evalzd2warningzb0_bglt BgL_res3786z00_4553;

					{	/* Llib/object.scm 122 */
						BgL_z62evalzd2warningzb0_bglt BgL_new2275z00_4545;

						BgL_new2275z00_4545 =
							((BgL_z62evalzd2warningzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62evalzd2warningzb0_bgl))));
						{	/* Llib/object.scm 122 */
							long BgL_arg3105z00_4546;

							{	/* Llib/object.scm 122 */
								long BgL_res3785z00_4550;

								{	/* Llib/object.scm 122 */
									obj_t BgL_classz00_4547;

									BgL_classz00_4547 = BGl_z62evalzd2warningzb0zz__objectz00;
									{	/* Llib/object.scm 122 */
										obj_t BgL_vectorz00_4548;

										int BgL_kz00_4549;

										BgL_vectorz00_4548 = BgL_classz00_4547;
										BgL_kz00_4549 = (int) (((long) 1));
										BgL_res3785z00_4550 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4548,
												BgL_kz00_4549));
								}}
								BgL_arg3105z00_4546 = BgL_res3785z00_4550;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new2275z00_4545),
								BgL_arg3105z00_4546);
						}
						{	/* Llib/object.scm 122 */
							BgL_objectz00_bglt BgL_auxz00_11311;

							BgL_auxz00_11311 = (BgL_objectz00_bglt) (BgL_new2275z00_4545);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11311, BFALSE);
						}
						BgL_res3786z00_4553 = BgL_new2275z00_4545;
					}
					BgL_new2263z00_4544 = BgL_res3786z00_4553;
				}
				{	/* Llib/object.scm 122 */
					BgL_z62evalzd2warningzb0_bglt BgL_res3787z00_4563;

					{	/* Llib/object.scm 122 */
						BgL_z62evalzd2warningzb0_bglt BgL_new2269z00_4554;

						BgL_new2269z00_4554 = BgL_new2263z00_4544;
						{	/* Llib/object.scm 122 */
							obj_t BgL_fname2265z00_4559;

							obj_t BgL_location2266z00_4560;

							obj_t BgL_stack2267z00_4561;

							obj_t BgL_args2268z00_4562;

							BgL_fname2265z00_4559 = BgL_fname2259z00_229;
							BgL_location2266z00_4560 = BgL_location2260z00_230;
							BgL_stack2267z00_4561 = BgL_stack2261z00_231;
							BgL_args2268z00_4562 = BgL_args2262z00_232;
							((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_4554))->
									BgL_fnamez00) = ((obj_t) BgL_fname2265z00_4559), BUNSPEC);
							((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_4554))->
									BgL_locationz00) =
								((obj_t) BgL_location2266z00_4560), BUNSPEC);
							((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_4554))->
									BgL_stackz00) = ((obj_t) BgL_stack2267z00_4561), BUNSPEC);
							((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_4554))->
									BgL_argsz00) = ((obj_t) BgL_args2268z00_4562), BUNSPEC);
							BgL_res3787z00_4563 = BgL_new2269z00_4554;
					}} BgL_res3787z00_4563;
				}
				return BgL_new2263z00_4544;
			}
		}
	}



/* _make-&eval-warning */
	obj_t BGl__makezd2z62evalzd2warningz62zz__objectz00(obj_t BgL_envz00_8116,
		obj_t BgL_fname2259z00_8117, obj_t BgL_location2260z00_8118,
		obj_t BgL_stack2261z00_8119, obj_t BgL_args2262z00_8120)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			return
				(obj_t) (BGl_makezd2z62evalzd2warningz62zz__objectz00
				(BgL_fname2259z00_8117, BgL_location2260z00_8118, BgL_stack2261z00_8119,
					BgL_args2262z00_8120));
		}
	}



/* fill-&eval-warning! */
	BGL_EXPORTED_DEF BgL_z62evalzd2warningzb0_bglt
		BGl_fillzd2z62evalzd2warningz12z70zz__objectz00
		(BgL_z62evalzd2warningzb0_bglt BgL_new2269z00_233,
		obj_t BgL_fname2265z00_234, obj_t BgL_location2266z00_235,
		obj_t BgL_stack2267z00_236, obj_t BgL_args2268z00_237)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			{	/* Llib/object.scm 122 */
				obj_t BgL_fname2265z00_8807;

				obj_t BgL_location2266z00_8808;

				obj_t BgL_stack2267z00_8809;

				obj_t BgL_args2268z00_8810;

				BgL_fname2265z00_8807 = BgL_fname2265z00_234;
				BgL_location2266z00_8808 = BgL_location2266z00_235;
				BgL_stack2267z00_8809 = BgL_stack2267z00_236;
				BgL_args2268z00_8810 = BgL_args2268z00_237;
				((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_233))->
						BgL_fnamez00) = ((obj_t) BgL_fname2265z00_8807), BUNSPEC);
				((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_233))->
						BgL_locationz00) = ((obj_t) BgL_location2266z00_8808), BUNSPEC);
				((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_233))->
						BgL_stackz00) = ((obj_t) BgL_stack2267z00_8809), BUNSPEC);
				((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_233))->
						BgL_argsz00) = ((obj_t) BgL_args2268z00_8810), BUNSPEC);
				return BgL_new2269z00_233;
			}
		}
	}



/* _fill-&eval-warning! */
	obj_t BGl__fillzd2z62evalzd2warningz12z70zz__objectz00(obj_t BgL_envz00_8125,
		obj_t BgL_new2269z00_8126, obj_t BgL_fname2265z00_8127,
		obj_t BgL_location2266z00_8128, obj_t BgL_stack2267z00_8129,
		obj_t BgL_args2268z00_8130)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			{	/* Llib/object.scm 122 */
				BgL_z62evalzd2warningzb0_bglt BgL_auxz00_11324;

				{	/* Llib/object.scm 122 */
					BgL_z62evalzd2warningzb0_bglt BgL_res4499z00_8821;

					{	/* Llib/object.scm 122 */
						BgL_z62evalzd2warningzb0_bglt BgL_new2269z00_8812;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new2269z00_8126,
								BGl_z62evalzd2warningzb0zz__objectz00))
							{	/* Llib/object.scm 122 */
								BgL_new2269z00_8812 =
									(BgL_z62evalzd2warningzb0_bglt) (BgL_new2269z00_8126);
							}
						else
							{
								obj_t BgL_auxz00_11328;

								BgL_auxz00_11328 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 4458)),
									BGl_string4378z00zz__objectz00,
									BGl_string4377z00zz__objectz00, BgL_new2269z00_8126);
								FAILURE(BgL_auxz00_11328, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 122 */
							obj_t BgL_fname2265z00_8817;

							obj_t BgL_location2266z00_8818;

							obj_t BgL_stack2267z00_8819;

							obj_t BgL_args2268z00_8820;

							BgL_fname2265z00_8817 = BgL_fname2265z00_8127;
							BgL_location2266z00_8818 = BgL_location2266z00_8128;
							BgL_stack2267z00_8819 = BgL_stack2267z00_8129;
							BgL_args2268z00_8820 = BgL_args2268z00_8130;
							((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_8812))->
									BgL_fnamez00) = ((obj_t) BgL_fname2265z00_8817), BUNSPEC);
							((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_8812))->
									BgL_locationz00) =
								((obj_t) BgL_location2266z00_8818), BUNSPEC);
							((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_8812))->
									BgL_stackz00) = ((obj_t) BgL_stack2267z00_8819), BUNSPEC);
							((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_8812))->
									BgL_argsz00) = ((obj_t) BgL_args2268z00_8820), BUNSPEC);
							BgL_res4499z00_8821 = BgL_new2269z00_8812;
					}}
					BgL_auxz00_11324 = BgL_res4499z00_8821;
				}
				return (obj_t) (BgL_auxz00_11324);
			}
		}
	}



/* %allocate-&eval-warning */
	BGL_EXPORTED_DEF BgL_z62evalzd2warningzb0_bglt
		BGl_z52allocatezd2z62evalzd2warningz30zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			{	/* Llib/object.scm 122 */
				BgL_z62evalzd2warningzb0_bglt BgL_new2275z00_8822;

				BgL_new2275z00_8822 =
					((BgL_z62evalzd2warningzb0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62evalzd2warningzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2275z00_8822),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62evalzd2warningzb0zz__objectz00));
				{	/* Llib/object.scm 122 */
					BgL_objectz00_bglt BgL_auxz00_11341;

					BgL_auxz00_11341 = (BgL_objectz00_bglt) (BgL_new2275z00_8822);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11341, BFALSE);
				}
				return BgL_new2275z00_8822;
			}
		}
	}



/* _%allocate-&eval-warning */
	obj_t BGl__z52allocatezd2z62evalzd2warningz30zz__objectz00(obj_t
		BgL_envz00_8121)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			{	/* Llib/object.scm 122 */
				BgL_z62evalzd2warningzb0_bglt BgL_auxz00_11344;

				{	/* Llib/object.scm 122 */
					BgL_z62evalzd2warningzb0_bglt BgL_res4500z00_8826;

					{	/* Llib/object.scm 122 */
						BgL_z62evalzd2warningzb0_bglt BgL_new2275z00_8824;

						BgL_new2275z00_8824 =
							((BgL_z62evalzd2warningzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62evalzd2warningzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2275z00_8824),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62evalzd2warningzb0zz__objectz00));
						{	/* Llib/object.scm 122 */
							BgL_objectz00_bglt BgL_auxz00_11349;

							BgL_auxz00_11349 = (BgL_objectz00_bglt) (BgL_new2275z00_8824);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11349, BFALSE);
						}
						BgL_res4500z00_8826 = BgL_new2275z00_8824;
					}
					BgL_auxz00_11344 = BgL_res4500z00_8826;
				}
				return (obj_t) (BgL_auxz00_11344);
			}
		}
	}



/* &eval-warning-nil */
	BGL_EXPORTED_DEF BgL_z62evalzd2warningzb0_bglt
		BGl_z62evalzd2warningzd2nilz62zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			if ((BGl_z52thezd2z62evalzd2warningzd2nilze2zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 122 */
					{	/* Llib/object.scm 122 */
						BgL_z62evalzd2warningzb0_bglt BgL_res3789z00_4580;

						{	/* Llib/object.scm 122 */
							BgL_z62evalzd2warningzb0_bglt BgL_new2275z00_4572;

							BgL_new2275z00_4572 =
								((BgL_z62evalzd2warningzb0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62evalzd2warningzb0_bgl))));
							{	/* Llib/object.scm 122 */
								long BgL_arg3105z00_4573;

								{	/* Llib/object.scm 122 */
									long BgL_res3788z00_4577;

									{	/* Llib/object.scm 122 */
										obj_t BgL_classz00_4574;

										BgL_classz00_4574 = BGl_z62evalzd2warningzb0zz__objectz00;
										{	/* Llib/object.scm 122 */
											obj_t BgL_vectorz00_4575;

											int BgL_kz00_4576;

											BgL_vectorz00_4575 = BgL_classz00_4574;
											BgL_kz00_4576 = (int) (((long) 1));
											BgL_res3788z00_4577 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_4575,
													BgL_kz00_4576));
									}}
									BgL_arg3105z00_4573 = BgL_res3788z00_4577;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2275z00_4572),
									BgL_arg3105z00_4573);
							}
							{	/* Llib/object.scm 122 */
								BgL_objectz00_bglt BgL_auxz00_11361;

								BgL_auxz00_11361 = (BgL_objectz00_bglt) (BgL_new2275z00_4572);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11361, BFALSE);
							}
							BgL_res3789z00_4580 = BgL_new2275z00_4572;
						}
						BGl_z52thezd2z62evalzd2warningzd2nilze2zz__objectz00 =
							(obj_t) (BgL_res3789z00_4580);
					}
					{	/* Llib/object.scm 122 */
						BgL_z62evalzd2warningzb0_bglt BgL_res3790z00_4590;

						{	/* Llib/object.scm 122 */
							BgL_z62evalzd2warningzb0_bglt BgL_new2269z00_4581;

							BgL_new2269z00_4581 =
								(BgL_z62evalzd2warningzb0_bglt)
								(BGl_z52thezd2z62evalzd2warningzd2nilze2zz__objectz00);
							{	/* Llib/object.scm 122 */
								obj_t BgL_fname2265z00_4586;

								obj_t BgL_location2266z00_4587;

								obj_t BgL_stack2267z00_4588;

								obj_t BgL_args2268z00_4589;

								BgL_fname2265z00_4586 = BUNSPEC;
								BgL_location2266z00_4587 = BUNSPEC;
								BgL_stack2267z00_4588 = BUNSPEC;
								BgL_args2268z00_4589 = BUNSPEC;
								((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_4581))->
										BgL_fnamez00) = ((obj_t) BgL_fname2265z00_4586), BUNSPEC);
								((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_4581))->
										BgL_locationz00) =
									((obj_t) BgL_location2266z00_4587), BUNSPEC);
								((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_4581))->
										BgL_stackz00) = ((obj_t) BgL_stack2267z00_4588), BUNSPEC);
								((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_new2269z00_4581))->
										BgL_argsz00) = ((obj_t) BgL_args2268z00_4589), BUNSPEC);
								BgL_res3790z00_4590 = BgL_new2269z00_4581;
						}}
						(obj_t) (BgL_res3790z00_4590);
				}}
			else
				{	/* Llib/object.scm 122 */
					BFALSE;
				}
			return
				(BgL_z62evalzd2warningzb0_bglt)
				(BGl_z52thezd2z62evalzd2warningzd2nilze2zz__objectz00);
		}
	}



/* _&eval-warning-nil */
	obj_t BGl__z62evalzd2warningzd2nilz62zz__objectz00(obj_t BgL_envz00_8122)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			return (obj_t) (BGl_z62evalzd2warningzd2nilz62zz__objectz00());
		}
	}



/* &warning? */
	BGL_EXPORTED_DEF bool_t BGl_z62warningzf3z91zz__objectz00(obj_t
		BgL_obj2248z00_238)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2248z00_238,
				BGl_z62warningz62zz__objectz00);
		}
	}



/* _&warning? */
	obj_t BGl__z62warningzf3z91zz__objectz00(obj_t BgL_envz00_8114,
		obj_t BgL_obj2248z00_8115)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2248z00_8115,
					BGl_z62warningz62zz__objectz00));
		}
	}



/* make-&warning */
	BGL_EXPORTED_DEF BgL_z62warningz62_bglt
		BGl_makezd2z62warningzb0zz__objectz00(obj_t BgL_fname2213z00_242,
		obj_t BgL_location2214z00_243, obj_t BgL_stack2215z00_244,
		obj_t BgL_args2216z00_245)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			{	/* Llib/object.scm 120 */
				BgL_z62warningz62_bglt BgL_new2217z00_4591;

				{	/* Llib/object.scm 120 */
					BgL_z62warningz62_bglt BgL_res3792z00_4600;

					{	/* Llib/object.scm 120 */
						BgL_z62warningz62_bglt BgL_new2229z00_4592;

						BgL_new2229z00_4592 =
							((BgL_z62warningz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62warningz62_bgl))));
						{	/* Llib/object.scm 120 */
							long BgL_arg3107z00_4593;

							{	/* Llib/object.scm 120 */
								long BgL_res3791z00_4597;

								{	/* Llib/object.scm 120 */
									obj_t BgL_classz00_4594;

									BgL_classz00_4594 = BGl_z62warningz62zz__objectz00;
									{	/* Llib/object.scm 120 */
										obj_t BgL_vectorz00_4595;

										int BgL_kz00_4596;

										BgL_vectorz00_4595 = BgL_classz00_4594;
										BgL_kz00_4596 = (int) (((long) 1));
										BgL_res3791z00_4597 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4595,
												BgL_kz00_4596));
								}}
								BgL_arg3107z00_4593 = BgL_res3791z00_4597;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new2229z00_4592),
								BgL_arg3107z00_4593);
						}
						{	/* Llib/object.scm 120 */
							BgL_objectz00_bglt BgL_auxz00_11383;

							BgL_auxz00_11383 = (BgL_objectz00_bglt) (BgL_new2229z00_4592);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11383, BFALSE);
						}
						BgL_res3792z00_4600 = BgL_new2229z00_4592;
					}
					BgL_new2217z00_4591 = BgL_res3792z00_4600;
				}
				{	/* Llib/object.scm 120 */
					BgL_z62warningz62_bglt BgL_res3793z00_4610;

					{	/* Llib/object.scm 120 */
						BgL_z62warningz62_bglt BgL_new2223z00_4601;

						BgL_new2223z00_4601 = BgL_new2217z00_4591;
						{	/* Llib/object.scm 120 */
							obj_t BgL_fname2219z00_4606;

							obj_t BgL_location2220z00_4607;

							obj_t BgL_stack2221z00_4608;

							obj_t BgL_args2222z00_4609;

							BgL_fname2219z00_4606 = BgL_fname2213z00_242;
							BgL_location2220z00_4607 = BgL_location2214z00_243;
							BgL_stack2221z00_4608 = BgL_stack2215z00_244;
							BgL_args2222z00_4609 = BgL_args2216z00_245;
							((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_4601))->
									BgL_fnamez00) = ((obj_t) BgL_fname2219z00_4606), BUNSPEC);
							((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_4601))->
									BgL_locationz00) =
								((obj_t) BgL_location2220z00_4607), BUNSPEC);
							((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_4601))->
									BgL_stackz00) = ((obj_t) BgL_stack2221z00_4608), BUNSPEC);
							((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_4601))->
									BgL_argsz00) = ((obj_t) BgL_args2222z00_4609), BUNSPEC);
							BgL_res3793z00_4610 = BgL_new2223z00_4601;
					}} BgL_res3793z00_4610;
				}
				return BgL_new2217z00_4591;
			}
		}
	}



/* _make-&warning */
	obj_t BGl__makezd2z62warningzb0zz__objectz00(obj_t BgL_envz00_8105,
		obj_t BgL_fname2213z00_8106, obj_t BgL_location2214z00_8107,
		obj_t BgL_stack2215z00_8108, obj_t BgL_args2216z00_8109)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			return
				(obj_t) (BGl_makezd2z62warningzb0zz__objectz00(BgL_fname2213z00_8106,
					BgL_location2214z00_8107, BgL_stack2215z00_8108,
					BgL_args2216z00_8109));
		}
	}



/* fill-&warning! */
	BGL_EXPORTED_DEF BgL_z62warningz62_bglt
		BGl_fillzd2z62warningz12za2zz__objectz00(BgL_z62warningz62_bglt
		BgL_new2223z00_246, obj_t BgL_fname2219z00_247,
		obj_t BgL_location2220z00_248, obj_t BgL_stack2221z00_249,
		obj_t BgL_args2222z00_250)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			{	/* Llib/object.scm 120 */
				obj_t BgL_fname2219z00_8828;

				obj_t BgL_location2220z00_8829;

				obj_t BgL_stack2221z00_8830;

				obj_t BgL_args2222z00_8831;

				BgL_fname2219z00_8828 = BgL_fname2219z00_247;
				BgL_location2220z00_8829 = BgL_location2220z00_248;
				BgL_stack2221z00_8830 = BgL_stack2221z00_249;
				BgL_args2222z00_8831 = BgL_args2222z00_250;
				((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_246))->BgL_fnamez00) =
					((obj_t) BgL_fname2219z00_8828), BUNSPEC);
				((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_246))->
						BgL_locationz00) = ((obj_t) BgL_location2220z00_8829), BUNSPEC);
				((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_246))->BgL_stackz00) =
					((obj_t) BgL_stack2221z00_8830), BUNSPEC);
				((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_246))->BgL_argsz00) =
					((obj_t) BgL_args2222z00_8831), BUNSPEC);
				return BgL_new2223z00_246;
			}
		}
	}



/* _fill-&warning! */
	obj_t BGl__fillzd2z62warningz12za2zz__objectz00(obj_t BgL_envz00_8131,
		obj_t BgL_new2223z00_8132, obj_t BgL_fname2219z00_8133,
		obj_t BgL_location2220z00_8134, obj_t BgL_stack2221z00_8135,
		obj_t BgL_args2222z00_8136)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			{	/* Llib/object.scm 120 */
				BgL_z62warningz62_bglt BgL_auxz00_11396;

				{	/* Llib/object.scm 120 */
					BgL_z62warningz62_bglt BgL_res4501z00_8842;

					{	/* Llib/object.scm 120 */
						BgL_z62warningz62_bglt BgL_new2223z00_8833;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new2223z00_8132,
								BGl_z62warningz62zz__objectz00))
							{	/* Llib/object.scm 120 */
								BgL_new2223z00_8833 =
									(BgL_z62warningz62_bglt) (BgL_new2223z00_8132);
							}
						else
							{
								obj_t BgL_auxz00_11400;

								BgL_auxz00_11400 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 4399)),
									BGl_string4379z00zz__objectz00,
									BGl_string4373z00zz__objectz00, BgL_new2223z00_8132);
								FAILURE(BgL_auxz00_11400, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 120 */
							obj_t BgL_fname2219z00_8838;

							obj_t BgL_location2220z00_8839;

							obj_t BgL_stack2221z00_8840;

							obj_t BgL_args2222z00_8841;

							BgL_fname2219z00_8838 = BgL_fname2219z00_8133;
							BgL_location2220z00_8839 = BgL_location2220z00_8134;
							BgL_stack2221z00_8840 = BgL_stack2221z00_8135;
							BgL_args2222z00_8841 = BgL_args2222z00_8136;
							((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_8833))->
									BgL_fnamez00) = ((obj_t) BgL_fname2219z00_8838), BUNSPEC);
							((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_8833))->
									BgL_locationz00) =
								((obj_t) BgL_location2220z00_8839), BUNSPEC);
							((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_8833))->
									BgL_stackz00) = ((obj_t) BgL_stack2221z00_8840), BUNSPEC);
							((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_8833))->
									BgL_argsz00) = ((obj_t) BgL_args2222z00_8841), BUNSPEC);
							BgL_res4501z00_8842 = BgL_new2223z00_8833;
					}}
					BgL_auxz00_11396 = BgL_res4501z00_8842;
				}
				return (obj_t) (BgL_auxz00_11396);
			}
		}
	}



/* %allocate-&warning */
	BGL_EXPORTED_DEF BgL_z62warningz62_bglt
		BGl_z52allocatezd2z62warningze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			{	/* Llib/object.scm 120 */
				BgL_z62warningz62_bglt BgL_new2229z00_8843;

				BgL_new2229z00_8843 =
					((BgL_z62warningz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62warningz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2229z00_8843),
					BGl_classzd2numzd2zz__objectz00(BGl_z62warningz62zz__objectz00));
				{	/* Llib/object.scm 120 */
					BgL_objectz00_bglt BgL_auxz00_11413;

					BgL_auxz00_11413 = (BgL_objectz00_bglt) (BgL_new2229z00_8843);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11413, BFALSE);
				}
				return BgL_new2229z00_8843;
			}
		}
	}



/* _%allocate-&warning */
	obj_t BGl__z52allocatezd2z62warningze2zz__objectz00(obj_t BgL_envz00_8110)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			{	/* Llib/object.scm 120 */
				BgL_z62warningz62_bglt BgL_auxz00_11416;

				{	/* Llib/object.scm 120 */
					BgL_z62warningz62_bglt BgL_res4502z00_8847;

					{	/* Llib/object.scm 120 */
						BgL_z62warningz62_bglt BgL_new2229z00_8845;

						BgL_new2229z00_8845 =
							((BgL_z62warningz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62warningz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2229z00_8845),
							BGl_classzd2numzd2zz__objectz00(BGl_z62warningz62zz__objectz00));
						{	/* Llib/object.scm 120 */
							BgL_objectz00_bglt BgL_auxz00_11421;

							BgL_auxz00_11421 = (BgL_objectz00_bglt) (BgL_new2229z00_8845);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11421, BFALSE);
						}
						BgL_res4502z00_8847 = BgL_new2229z00_8845;
					}
					BgL_auxz00_11416 = BgL_res4502z00_8847;
				}
				return (obj_t) (BgL_auxz00_11416);
			}
		}
	}



/* &warning-nil */
	BGL_EXPORTED_DEF BgL_z62warningz62_bglt BGl_z62warningzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			if ((BGl_z52thezd2z62warningzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 120 */
					{	/* Llib/object.scm 120 */
						BgL_z62warningz62_bglt BgL_res3795z00_4627;

						{	/* Llib/object.scm 120 */
							BgL_z62warningz62_bglt BgL_new2229z00_4619;

							BgL_new2229z00_4619 =
								((BgL_z62warningz62_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62warningz62_bgl))));
							{	/* Llib/object.scm 120 */
								long BgL_arg3107z00_4620;

								{	/* Llib/object.scm 120 */
									long BgL_res3794z00_4624;

									{	/* Llib/object.scm 120 */
										obj_t BgL_classz00_4621;

										BgL_classz00_4621 = BGl_z62warningz62zz__objectz00;
										{	/* Llib/object.scm 120 */
											obj_t BgL_vectorz00_4622;

											int BgL_kz00_4623;

											BgL_vectorz00_4622 = BgL_classz00_4621;
											BgL_kz00_4623 = (int) (((long) 1));
											BgL_res3794z00_4624 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_4622,
													BgL_kz00_4623));
									}}
									BgL_arg3107z00_4620 = BgL_res3794z00_4624;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2229z00_4619),
									BgL_arg3107z00_4620);
							}
							{	/* Llib/object.scm 120 */
								BgL_objectz00_bglt BgL_auxz00_11433;

								BgL_auxz00_11433 = (BgL_objectz00_bglt) (BgL_new2229z00_4619);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11433, BFALSE);
							}
							BgL_res3795z00_4627 = BgL_new2229z00_4619;
						}
						BGl_z52thezd2z62warningzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3795z00_4627);
					}
					{	/* Llib/object.scm 120 */
						BgL_z62warningz62_bglt BgL_res3796z00_4637;

						{	/* Llib/object.scm 120 */
							BgL_z62warningz62_bglt BgL_new2223z00_4628;

							BgL_new2223z00_4628 =
								(BgL_z62warningz62_bglt)
								(BGl_z52thezd2z62warningzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 120 */
								obj_t BgL_fname2219z00_4633;

								obj_t BgL_location2220z00_4634;

								obj_t BgL_stack2221z00_4635;

								obj_t BgL_args2222z00_4636;

								BgL_fname2219z00_4633 = BUNSPEC;
								BgL_location2220z00_4634 = BUNSPEC;
								BgL_stack2221z00_4635 = BUNSPEC;
								BgL_args2222z00_4636 = BUNSPEC;
								((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_4628))->
										BgL_fnamez00) = ((obj_t) BgL_fname2219z00_4633), BUNSPEC);
								((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_4628))->
										BgL_locationz00) =
									((obj_t) BgL_location2220z00_4634), BUNSPEC);
								((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_4628))->
										BgL_stackz00) = ((obj_t) BgL_stack2221z00_4635), BUNSPEC);
								((((BgL_z62warningz62_bglt) CREF(BgL_new2223z00_4628))->
										BgL_argsz00) = ((obj_t) BgL_args2222z00_4636), BUNSPEC);
								BgL_res3796z00_4637 = BgL_new2223z00_4628;
						}}
						(obj_t) (BgL_res3796z00_4637);
				}}
			else
				{	/* Llib/object.scm 120 */
					BFALSE;
				}
			return
				(BgL_z62warningz62_bglt)
				(BGl_z52thezd2z62warningzd2nilz30zz__objectz00);
		}
	}



/* _&warning-nil */
	obj_t BGl__z62warningzd2nilzb0zz__objectz00(obj_t BgL_envz00_8113)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			return (obj_t) (BGl_z62warningzd2nilzb0zz__objectz00());
		}
	}



/* _&warning-args */
	obj_t BGl__z62warningzd2argszb0zz__objectz00(obj_t BgL_envz00_8111,
		obj_t BgL_obj2212z00_8112)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 121 */
			{	/* Llib/object.scm 121 */
				BgL_z62warningz62_bglt BgL_obj2212z00_8849;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj2212z00_8112,
						BGl_z62warningz62zz__objectz00))
					{	/* Llib/object.scm 121 */
						BgL_obj2212z00_8849 =
							(BgL_z62warningz62_bglt) (BgL_obj2212z00_8112);
					}
				else
					{
						obj_t BgL_auxz00_11449;

						BgL_auxz00_11449 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 4435)), BGl_string4380z00zz__objectz00,
							BGl_string4373z00zz__objectz00, BgL_obj2212z00_8112);
						FAILURE(BgL_auxz00_11449, BFALSE, BFALSE);
					}
				return
					(((BgL_z62warningz62_bglt) CREF(BgL_obj2212z00_8849))->BgL_argsz00);
			}
		}
	}



/* &access-control-exception? */
	BGL_EXPORTED_DEF bool_t
		BGl_z62accesszd2controlzd2exceptionzf3z91zz__objectz00(obj_t
		BgL_obj2202z00_252)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2202z00_252,
				BGl_z62accesszd2controlzd2exceptionz62zz__objectz00);
		}
	}



/* _&access-control-exception? */
	obj_t BGl__z62accesszd2controlzd2exceptionzf3z91zz__objectz00(obj_t
		BgL_envz00_8103, obj_t BgL_obj2202z00_8104)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2202z00_8104,
					BGl_z62accesszd2controlzd2exceptionz62zz__objectz00));
		}
	}



/* make-&access-control-exception */
	BGL_EXPORTED_DEF BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_makezd2z62accesszd2controlzd2exceptionzb0zz__objectz00(obj_t
		BgL_fname2153z00_256, obj_t BgL_location2154z00_257,
		obj_t BgL_stack2155z00_258, obj_t BgL_message2156z00_259,
		obj_t BgL_obj2157z00_260, obj_t BgL_permission2158z00_261)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			{	/* Llib/object.scm 116 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2159z00_4638;

				{	/* Llib/object.scm 116 */
					BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_res3798z00_4647;

					{	/* Llib/object.scm 116 */
						BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2175z00_4639;

						BgL_new2175z00_4639 =
							((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62accesszd2controlzd2exceptionz62_bgl))));
						{	/* Llib/object.scm 116 */
							long BgL_arg3109z00_4640;

							{	/* Llib/object.scm 116 */
								long BgL_res3797z00_4644;

								{	/* Llib/object.scm 116 */
									obj_t BgL_classz00_4641;

									BgL_classz00_4641 =
										BGl_z62accesszd2controlzd2exceptionz62zz__objectz00;
									{	/* Llib/object.scm 116 */
										obj_t BgL_vectorz00_4642;

										int BgL_kz00_4643;

										BgL_vectorz00_4642 = BgL_classz00_4641;
										BgL_kz00_4643 = (int) (((long) 1));
										BgL_res3797z00_4644 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4642,
												BgL_kz00_4643));
								}}
								BgL_arg3109z00_4640 = BgL_res3797z00_4644;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new2175z00_4639),
								BgL_arg3109z00_4640);
						}
						{	/* Llib/object.scm 116 */
							BgL_objectz00_bglt BgL_auxz00_11463;

							BgL_auxz00_11463 = (BgL_objectz00_bglt) (BgL_new2175z00_4639);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11463, BFALSE);
						}
						BgL_res3798z00_4647 = BgL_new2175z00_4639;
					}
					BgL_new2159z00_4638 = BgL_res3798z00_4647;
				}
				{	/* Llib/object.scm 116 */
					BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_res3799z00_4661;

					{	/* Llib/object.scm 116 */
						BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2167z00_4648;

						BgL_new2167z00_4648 = BgL_new2159z00_4638;
						{	/* Llib/object.scm 116 */
							obj_t BgL_fname2161z00_4655;

							obj_t BgL_location2162z00_4656;

							obj_t BgL_stack2163z00_4657;

							obj_t BgL_message2164z00_4658;

							obj_t BgL_obj2165z00_4659;

							obj_t BgL_permission2166z00_4660;

							BgL_fname2161z00_4655 = BgL_fname2153z00_256;
							BgL_location2162z00_4656 = BgL_location2154z00_257;
							BgL_stack2163z00_4657 = BgL_stack2155z00_258;
							BgL_message2164z00_4658 = BgL_message2156z00_259;
							BgL_obj2165z00_4659 = BgL_obj2157z00_260;
							BgL_permission2166z00_4660 = BgL_permission2158z00_261;
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_4648))->BgL_fnamez00) =
								((obj_t) BgL_fname2161z00_4655), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_4648))->BgL_locationz00) =
								((obj_t) BgL_location2162z00_4656), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_4648))->BgL_stackz00) =
								((obj_t) BgL_stack2163z00_4657), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_4648))->BgL_messagez00) =
								((obj_t) BgL_message2164z00_4658), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_4648))->BgL_objz00) =
								((obj_t) BgL_obj2165z00_4659), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_4648))->BgL_permissionz00) =
								((obj_t) BgL_permission2166z00_4660), BUNSPEC);
							BgL_res3799z00_4661 = BgL_new2167z00_4648;
					}} BgL_res3799z00_4661;
				}
				return BgL_new2159z00_4638;
			}
		}
	}



/* _make-&access-control-exception */
	obj_t BGl__makezd2z62accesszd2controlzd2exceptionzb0zz__objectz00(obj_t
		BgL_envz00_8090, obj_t BgL_fname2153z00_8091,
		obj_t BgL_location2154z00_8092, obj_t BgL_stack2155z00_8093,
		obj_t BgL_message2156z00_8094, obj_t BgL_obj2157z00_8095,
		obj_t BgL_permission2158z00_8096)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			{	/* Llib/object.scm 116 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_auxz00_11472;

				{	/* Llib/object.scm 116 */
					obj_t BgL_auxz00_11473;

					if (STRINGP(BgL_message2156z00_8094))
						{	/* Llib/object.scm 116 */
							BgL_auxz00_11473 = BgL_message2156z00_8094;
						}
					else
						{
							obj_t BgL_auxz00_11476;

							BgL_auxz00_11476 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 4222)), BGl_string4381z00zz__objectz00,
								BGl_string4382z00zz__objectz00, BgL_message2156z00_8094);
							FAILURE(BgL_auxz00_11476, BFALSE, BFALSE);
						}
					BgL_auxz00_11472 =
						BGl_makezd2z62accesszd2controlzd2exceptionzb0zz__objectz00
						(BgL_fname2153z00_8091, BgL_location2154z00_8092,
						BgL_stack2155z00_8093, BgL_auxz00_11473, BgL_obj2157z00_8095,
						BgL_permission2158z00_8096);
				}
				return (obj_t) (BgL_auxz00_11472);
			}
		}
	}



/* fill-&access-control-exception! */
	BGL_EXPORTED_DEF BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_fillzd2z62accesszd2controlzd2exceptionz12za2zz__objectz00
		(BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2167z00_262,
		obj_t BgL_fname2161z00_263, obj_t BgL_location2162z00_264,
		obj_t BgL_stack2163z00_265, obj_t BgL_message2164z00_266,
		obj_t BgL_obj2165z00_267, obj_t BgL_permission2166z00_268)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			{	/* Llib/object.scm 116 */
				obj_t BgL_fname2161z00_8851;

				obj_t BgL_location2162z00_8852;

				obj_t BgL_stack2163z00_8853;

				obj_t BgL_message2164z00_8854;

				obj_t BgL_obj2165z00_8855;

				obj_t BgL_permission2166z00_8856;

				BgL_fname2161z00_8851 = BgL_fname2161z00_263;
				BgL_location2162z00_8852 = BgL_location2162z00_264;
				BgL_stack2163z00_8853 = BgL_stack2163z00_265;
				BgL_message2164z00_8854 = BgL_message2164z00_266;
				BgL_obj2165z00_8855 = BgL_obj2165z00_267;
				BgL_permission2166z00_8856 = BgL_permission2166z00_268;
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							CREF(BgL_new2167z00_262))->BgL_fnamez00) =
					((obj_t) BgL_fname2161z00_8851), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							CREF(BgL_new2167z00_262))->BgL_locationz00) =
					((obj_t) BgL_location2162z00_8852), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							CREF(BgL_new2167z00_262))->BgL_stackz00) =
					((obj_t) BgL_stack2163z00_8853), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							CREF(BgL_new2167z00_262))->BgL_messagez00) =
					((obj_t) BgL_message2164z00_8854), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							CREF(BgL_new2167z00_262))->BgL_objz00) =
					((obj_t) BgL_obj2165z00_8855), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							CREF(BgL_new2167z00_262))->BgL_permissionz00) =
					((obj_t) BgL_permission2166z00_8856), BUNSPEC);
				return BgL_new2167z00_262;
			}
		}
	}



/* _fill-&access-control-exception! */
	obj_t BGl__fillzd2z62accesszd2controlzd2exceptionz12za2zz__objectz00(obj_t
		BgL_envz00_8137, obj_t BgL_new2167z00_8138, obj_t BgL_fname2161z00_8139,
		obj_t BgL_location2162z00_8140, obj_t BgL_stack2163z00_8141,
		obj_t BgL_message2164z00_8142, obj_t BgL_obj2165z00_8143,
		obj_t BgL_permission2166z00_8144)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			{	/* Llib/object.scm 116 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_auxz00_11488;

				{	/* Llib/object.scm 116 */
					BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_res4503z00_8871;

					{	/* Llib/object.scm 116 */
						BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2167z00_8858;

						obj_t BgL_message2164z00_8862;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new2167z00_8138,
								BGl_z62accesszd2controlzd2exceptionz62zz__objectz00))
							{	/* Llib/object.scm 116 */
								BgL_new2167z00_8858 =
									(BgL_z62accesszd2controlzd2exceptionz62_bglt)
									(BgL_new2167z00_8138);
							}
						else
							{
								obj_t BgL_auxz00_11492;

								BgL_auxz00_11492 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 4222)),
									BGl_string4383z00zz__objectz00,
									BGl_string4369z00zz__objectz00, BgL_new2167z00_8138);
								FAILURE(BgL_auxz00_11492, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_message2164z00_8142))
							{	/* Llib/object.scm 116 */
								BgL_message2164z00_8862 = BgL_message2164z00_8142;
							}
						else
							{
								obj_t BgL_auxz00_11498;

								BgL_auxz00_11498 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 4222)),
									BGl_string4383z00zz__objectz00,
									BGl_string4382z00zz__objectz00, BgL_message2164z00_8142);
								FAILURE(BgL_auxz00_11498, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 116 */
							obj_t BgL_fname2161z00_8865;

							obj_t BgL_location2162z00_8866;

							obj_t BgL_stack2163z00_8867;

							obj_t BgL_message2164z00_8868;

							obj_t BgL_obj2165z00_8869;

							obj_t BgL_permission2166z00_8870;

							BgL_fname2161z00_8865 = BgL_fname2161z00_8139;
							BgL_location2162z00_8866 = BgL_location2162z00_8140;
							BgL_stack2163z00_8867 = BgL_stack2163z00_8141;
							BgL_message2164z00_8868 = BgL_message2164z00_8862;
							BgL_obj2165z00_8869 = BgL_obj2165z00_8143;
							BgL_permission2166z00_8870 = BgL_permission2166z00_8144;
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_8858))->BgL_fnamez00) =
								((obj_t) BgL_fname2161z00_8865), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_8858))->BgL_locationz00) =
								((obj_t) BgL_location2162z00_8866), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_8858))->BgL_stackz00) =
								((obj_t) BgL_stack2163z00_8867), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_8858))->BgL_messagez00) =
								((obj_t) BgL_message2164z00_8868), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_8858))->BgL_objz00) =
								((obj_t) BgL_obj2165z00_8869), BUNSPEC);
							((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										CREF(BgL_new2167z00_8858))->BgL_permissionz00) =
								((obj_t) BgL_permission2166z00_8870), BUNSPEC);
							BgL_res4503z00_8871 = BgL_new2167z00_8858;
					}}
					BgL_auxz00_11488 = BgL_res4503z00_8871;
				}
				return (obj_t) (BgL_auxz00_11488);
			}
		}
	}



/* %allocate-&access-control-exception */
	BGL_EXPORTED_DEF BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_z52allocatezd2z62accesszd2controlzd2exceptionze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			{	/* Llib/object.scm 116 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2175z00_8872;

				BgL_new2175z00_8872 =
					((BgL_z62accesszd2controlzd2exceptionz62_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_z62accesszd2controlzd2exceptionz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2175z00_8872),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62accesszd2controlzd2exceptionz62zz__objectz00));
				{	/* Llib/object.scm 116 */
					BgL_objectz00_bglt BgL_auxz00_11513;

					BgL_auxz00_11513 = (BgL_objectz00_bglt) (BgL_new2175z00_8872);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11513, BFALSE);
				}
				return BgL_new2175z00_8872;
			}
		}
	}



/* _%allocate-&access-control-exception */
	obj_t BGl__z52allocatezd2z62accesszd2controlzd2exceptionze2zz__objectz00(obj_t
		BgL_envz00_8097)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			{	/* Llib/object.scm 116 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_auxz00_11516;

				{	/* Llib/object.scm 116 */
					BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_res4504z00_8876;

					{	/* Llib/object.scm 116 */
						BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2175z00_8874;

						BgL_new2175z00_8874 =
							((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62accesszd2controlzd2exceptionz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2175z00_8874),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62accesszd2controlzd2exceptionz62zz__objectz00));
						{	/* Llib/object.scm 116 */
							BgL_objectz00_bglt BgL_auxz00_11521;

							BgL_auxz00_11521 = (BgL_objectz00_bglt) (BgL_new2175z00_8874);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11521, BFALSE);
						}
						BgL_res4504z00_8876 = BgL_new2175z00_8874;
					}
					BgL_auxz00_11516 = BgL_res4504z00_8876;
				}
				return (obj_t) (BgL_auxz00_11516);
			}
		}
	}



/* &access-control-exception-nil */
	BGL_EXPORTED_DEF BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_z62accesszd2controlzd2exceptionzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			if (
				(BGl_z52thezd2z62accesszd2controlzd2exceptionzd2nilz30zz__objectz00 ==
					BUNSPEC))
				{	/* Llib/object.scm 116 */
					{	/* Llib/object.scm 116 */
						BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_res3801z00_4680;

						{	/* Llib/object.scm 116 */
							BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2175z00_4672;

							BgL_new2175z00_4672 =
								((BgL_z62accesszd2controlzd2exceptionz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62accesszd2controlzd2exceptionz62_bgl))));
							{	/* Llib/object.scm 116 */
								long BgL_arg3109z00_4673;

								{	/* Llib/object.scm 116 */
									long BgL_res3800z00_4677;

									{	/* Llib/object.scm 116 */
										obj_t BgL_classz00_4674;

										BgL_classz00_4674 =
											BGl_z62accesszd2controlzd2exceptionz62zz__objectz00;
										{	/* Llib/object.scm 116 */
											obj_t BgL_vectorz00_4675;

											int BgL_kz00_4676;

											BgL_vectorz00_4675 = BgL_classz00_4674;
											BgL_kz00_4676 = (int) (((long) 1));
											BgL_res3800z00_4677 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_4675,
													BgL_kz00_4676));
									}}
									BgL_arg3109z00_4673 = BgL_res3800z00_4677;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2175z00_4672),
									BgL_arg3109z00_4673);
							}
							{	/* Llib/object.scm 116 */
								BgL_objectz00_bglt BgL_auxz00_11533;

								BgL_auxz00_11533 = (BgL_objectz00_bglt) (BgL_new2175z00_4672);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11533, BFALSE);
							}
							BgL_res3801z00_4680 = BgL_new2175z00_4672;
						}
						BGl_z52thezd2z62accesszd2controlzd2exceptionzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3801z00_4680);
					}
					{	/* Llib/object.scm 116 */
						BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_res3802z00_4694;

						{	/* Llib/object.scm 116 */
							BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new2167z00_4681;

							BgL_new2167z00_4681 =
								(BgL_z62accesszd2controlzd2exceptionz62_bglt)
								(BGl_z52thezd2z62accesszd2controlzd2exceptionzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 116 */
								obj_t BgL_fname2161z00_4688;

								obj_t BgL_location2162z00_4689;

								obj_t BgL_stack2163z00_4690;

								obj_t BgL_message2164z00_4691;

								obj_t BgL_obj2165z00_4692;

								obj_t BgL_permission2166z00_4693;

								BgL_fname2161z00_4688 = BUNSPEC;
								BgL_location2162z00_4689 = BUNSPEC;
								BgL_stack2163z00_4690 = BUNSPEC;
								BgL_message2164z00_4691 = BGl_string4288z00zz__objectz00;
								BgL_obj2165z00_4692 = BUNSPEC;
								BgL_permission2166z00_4693 = BUNSPEC;
								((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
											CREF(BgL_new2167z00_4681))->BgL_fnamez00) =
									((obj_t) BgL_fname2161z00_4688), BUNSPEC);
								((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
											CREF(BgL_new2167z00_4681))->BgL_locationz00) =
									((obj_t) BgL_location2162z00_4689), BUNSPEC);
								((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
											CREF(BgL_new2167z00_4681))->BgL_stackz00) =
									((obj_t) BgL_stack2163z00_4690), BUNSPEC);
								((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
											CREF(BgL_new2167z00_4681))->BgL_messagez00) =
									((obj_t) BgL_message2164z00_4691), BUNSPEC);
								((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
											CREF(BgL_new2167z00_4681))->BgL_objz00) =
									((obj_t) BgL_obj2165z00_4692), BUNSPEC);
								((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
											CREF(BgL_new2167z00_4681))->BgL_permissionz00) =
									((obj_t) BgL_permission2166z00_4693), BUNSPEC);
								BgL_res3802z00_4694 = BgL_new2167z00_4681;
						}}
						(obj_t) (BgL_res3802z00_4694);
				}}
			else
				{	/* Llib/object.scm 116 */
					BFALSE;
				}
			return
				(BgL_z62accesszd2controlzd2exceptionz62_bglt)
				(BGl_z52thezd2z62accesszd2controlzd2exceptionzd2nilz30zz__objectz00);
		}
	}



/* _&access-control-exception-nil */
	obj_t BGl__z62accesszd2controlzd2exceptionzd2nilzb0zz__objectz00(obj_t
		BgL_envz00_8102)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			return
				(obj_t) (BGl_z62accesszd2controlzd2exceptionzd2nilzb0zz__objectz00());
		}
	}



/* _&access-control-exception-obj */
	obj_t BGl__z62accesszd2controlzd2exceptionzd2objzb0zz__objectz00(obj_t
		BgL_envz00_8098, obj_t BgL_obj2151z00_8099)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 117 */
			{	/* Llib/object.scm 117 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_obj2151z00_8878;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj2151z00_8099,
						BGl_z62accesszd2controlzd2exceptionz62zz__objectz00))
					{	/* Llib/object.scm 117 */
						BgL_obj2151z00_8878 =
							(BgL_z62accesszd2controlzd2exceptionz62_bglt)
							(BgL_obj2151z00_8099);
					}
				else
					{
						obj_t BgL_auxz00_11551;

						BgL_auxz00_11551 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 4284)), BGl_string4384z00zz__objectz00,
							BGl_string4369z00zz__objectz00, BgL_obj2151z00_8099);
						FAILURE(BgL_auxz00_11551, BFALSE, BFALSE);
					}
				return
					(((BgL_z62accesszd2controlzd2exceptionz62_bglt)
						CREF(BgL_obj2151z00_8878))->BgL_objz00);
			}
		}
	}



/* _&access-control-exception-permission */
	obj_t BGl__z62accesszd2controlzd2exceptionzd2permissionzb0zz__objectz00(obj_t
		BgL_envz00_8100, obj_t BgL_obj2152z00_8101)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 118 */
			{	/* Llib/object.scm 118 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_obj2152z00_8880;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj2152z00_8101,
						BGl_z62accesszd2controlzd2exceptionz62zz__objectz00))
					{	/* Llib/object.scm 118 */
						BgL_obj2152z00_8880 =
							(BgL_z62accesszd2controlzd2exceptionz62_bglt)
							(BgL_obj2152z00_8101);
					}
				else
					{
						obj_t BgL_auxz00_11559;

						BgL_auxz00_11559 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 4336)), BGl_string4385z00zz__objectz00,
							BGl_string4369z00zz__objectz00, BgL_obj2152z00_8101);
						FAILURE(BgL_auxz00_11559, BFALSE, BFALSE);
					}
				return
					(((BgL_z62accesszd2controlzd2exceptionz62_bglt)
						CREF(BgL_obj2152z00_8880))->BgL_permissionz00);
			}
		}
	}



/* &security-exception? */
	BGL_EXPORTED_DEF bool_t BGl_z62securityzd2exceptionzf3z43zz__objectz00(obj_t
		BgL_obj2140z00_271)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2140z00_271,
				BGl_z62securityzd2exceptionzb0zz__objectz00);
		}
	}



/* _&security-exception? */
	obj_t BGl__z62securityzd2exceptionzf3z43zz__objectz00(obj_t BgL_envz00_8088,
		obj_t BgL_obj2140z00_8089)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2140z00_8089,
					BGl_z62securityzd2exceptionzb0zz__objectz00));
		}
	}



/* make-&security-exception */
	BGL_EXPORTED_DEF BgL_z62securityzd2exceptionzb0_bglt
		BGl_makezd2z62securityzd2exceptionz62zz__objectz00(obj_t
		BgL_fname2105z00_275, obj_t BgL_location2106z00_276,
		obj_t BgL_stack2107z00_277, obj_t BgL_message2108z00_278)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			{	/* Llib/object.scm 114 */
				BgL_z62securityzd2exceptionzb0_bglt BgL_new2109z00_4695;

				{	/* Llib/object.scm 114 */
					BgL_z62securityzd2exceptionzb0_bglt BgL_res3804z00_4704;

					{	/* Llib/object.scm 114 */
						BgL_z62securityzd2exceptionzb0_bglt BgL_new2121z00_4696;

						BgL_new2121z00_4696 =
							((BgL_z62securityzd2exceptionzb0_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62securityzd2exceptionzb0_bgl))));
						{	/* Llib/object.scm 114 */
							long BgL_arg3111z00_4697;

							{	/* Llib/object.scm 114 */
								long BgL_res3803z00_4701;

								{	/* Llib/object.scm 114 */
									obj_t BgL_classz00_4698;

									BgL_classz00_4698 =
										BGl_z62securityzd2exceptionzb0zz__objectz00;
									{	/* Llib/object.scm 114 */
										obj_t BgL_vectorz00_4699;

										int BgL_kz00_4700;

										BgL_vectorz00_4699 = BgL_classz00_4698;
										BgL_kz00_4700 = (int) (((long) 1));
										BgL_res3803z00_4701 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4699,
												BgL_kz00_4700));
								}}
								BgL_arg3111z00_4697 = BgL_res3803z00_4701;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new2121z00_4696),
								BgL_arg3111z00_4697);
						}
						{	/* Llib/object.scm 114 */
							BgL_objectz00_bglt BgL_auxz00_11573;

							BgL_auxz00_11573 = (BgL_objectz00_bglt) (BgL_new2121z00_4696);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11573, BFALSE);
						}
						BgL_res3804z00_4704 = BgL_new2121z00_4696;
					}
					BgL_new2109z00_4695 = BgL_res3804z00_4704;
				}
				{	/* Llib/object.scm 114 */
					BgL_z62securityzd2exceptionzb0_bglt BgL_res3805z00_4714;

					{	/* Llib/object.scm 114 */
						BgL_z62securityzd2exceptionzb0_bglt BgL_new2115z00_4705;

						BgL_new2115z00_4705 = BgL_new2109z00_4695;
						{	/* Llib/object.scm 114 */
							obj_t BgL_fname2111z00_4710;

							obj_t BgL_location2112z00_4711;

							obj_t BgL_stack2113z00_4712;

							obj_t BgL_message2114z00_4713;

							BgL_fname2111z00_4710 = BgL_fname2105z00_275;
							BgL_location2112z00_4711 = BgL_location2106z00_276;
							BgL_stack2113z00_4712 = BgL_stack2107z00_277;
							BgL_message2114z00_4713 = BgL_message2108z00_278;
							((((BgL_z62securityzd2exceptionzb0_bglt)
										CREF(BgL_new2115z00_4705))->BgL_fnamez00) =
								((obj_t) BgL_fname2111z00_4710), BUNSPEC);
							((((BgL_z62securityzd2exceptionzb0_bglt)
										CREF(BgL_new2115z00_4705))->BgL_locationz00) =
								((obj_t) BgL_location2112z00_4711), BUNSPEC);
							((((BgL_z62securityzd2exceptionzb0_bglt)
										CREF(BgL_new2115z00_4705))->BgL_stackz00) =
								((obj_t) BgL_stack2113z00_4712), BUNSPEC);
							((((BgL_z62securityzd2exceptionzb0_bglt)
										CREF(BgL_new2115z00_4705))->BgL_messagez00) =
								((obj_t) BgL_message2114z00_4713), BUNSPEC);
							BgL_res3805z00_4714 = BgL_new2115z00_4705;
					}} BgL_res3805z00_4714;
				}
				return BgL_new2109z00_4695;
			}
		}
	}



/* _make-&security-exception */
	obj_t BGl__makezd2z62securityzd2exceptionz62zz__objectz00(obj_t
		BgL_envz00_8079, obj_t BgL_fname2105z00_8080,
		obj_t BgL_location2106z00_8081, obj_t BgL_stack2107z00_8082,
		obj_t BgL_message2108z00_8083)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			{	/* Llib/object.scm 114 */
				BgL_z62securityzd2exceptionzb0_bglt BgL_auxz00_11580;

				{	/* Llib/object.scm 114 */
					obj_t BgL_auxz00_11581;

					if (STRINGP(BgL_message2108z00_8083))
						{	/* Llib/object.scm 114 */
							BgL_auxz00_11581 = BgL_message2108z00_8083;
						}
					else
						{
							obj_t BgL_auxz00_11584;

							BgL_auxz00_11584 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 4127)), BGl_string4386z00zz__objectz00,
								BGl_string4382z00zz__objectz00, BgL_message2108z00_8083);
							FAILURE(BgL_auxz00_11584, BFALSE, BFALSE);
						}
					BgL_auxz00_11580 =
						BGl_makezd2z62securityzd2exceptionz62zz__objectz00
						(BgL_fname2105z00_8080, BgL_location2106z00_8081,
						BgL_stack2107z00_8082, BgL_auxz00_11581);
				}
				return (obj_t) (BgL_auxz00_11580);
			}
		}
	}



/* fill-&security-exception! */
	BGL_EXPORTED_DEF BgL_z62securityzd2exceptionzb0_bglt
		BGl_fillzd2z62securityzd2exceptionz12z70zz__objectz00
		(BgL_z62securityzd2exceptionzb0_bglt BgL_new2115z00_279,
		obj_t BgL_fname2111z00_280, obj_t BgL_location2112z00_281,
		obj_t BgL_stack2113z00_282, obj_t BgL_message2114z00_283)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			{	/* Llib/object.scm 114 */
				obj_t BgL_fname2111z00_8882;

				obj_t BgL_location2112z00_8883;

				obj_t BgL_stack2113z00_8884;

				obj_t BgL_message2114z00_8885;

				BgL_fname2111z00_8882 = BgL_fname2111z00_280;
				BgL_location2112z00_8883 = BgL_location2112z00_281;
				BgL_stack2113z00_8884 = BgL_stack2113z00_282;
				BgL_message2114z00_8885 = BgL_message2114z00_283;
				((((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_new2115z00_279))->
						BgL_fnamez00) = ((obj_t) BgL_fname2111z00_8882), BUNSPEC);
				((((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_new2115z00_279))->
						BgL_locationz00) = ((obj_t) BgL_location2112z00_8883), BUNSPEC);
				((((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_new2115z00_279))->
						BgL_stackz00) = ((obj_t) BgL_stack2113z00_8884), BUNSPEC);
				((((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_new2115z00_279))->
						BgL_messagez00) = ((obj_t) BgL_message2114z00_8885), BUNSPEC);
				return BgL_new2115z00_279;
			}
		}
	}



/* _fill-&security-exception! */
	obj_t BGl__fillzd2z62securityzd2exceptionz12z70zz__objectz00(obj_t
		BgL_envz00_8145, obj_t BgL_new2115z00_8146, obj_t BgL_fname2111z00_8147,
		obj_t BgL_location2112z00_8148, obj_t BgL_stack2113z00_8149,
		obj_t BgL_message2114z00_8150)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			{	/* Llib/object.scm 114 */
				BgL_z62securityzd2exceptionzb0_bglt BgL_auxz00_11594;

				{	/* Llib/object.scm 114 */
					BgL_z62securityzd2exceptionzb0_bglt BgL_res4505z00_8896;

					{	/* Llib/object.scm 114 */
						BgL_z62securityzd2exceptionzb0_bglt BgL_new2115z00_8887;

						obj_t BgL_message2114z00_8891;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new2115z00_8146,
								BGl_z62securityzd2exceptionzb0zz__objectz00))
							{	/* Llib/object.scm 114 */
								BgL_new2115z00_8887 =
									(BgL_z62securityzd2exceptionzb0_bglt) (BgL_new2115z00_8146);
							}
						else
							{
								obj_t BgL_auxz00_11598;

								BgL_auxz00_11598 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 4127)),
									BGl_string4387z00zz__objectz00,
									BGl_string4365z00zz__objectz00, BgL_new2115z00_8146);
								FAILURE(BgL_auxz00_11598, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_message2114z00_8150))
							{	/* Llib/object.scm 114 */
								BgL_message2114z00_8891 = BgL_message2114z00_8150;
							}
						else
							{
								obj_t BgL_auxz00_11604;

								BgL_auxz00_11604 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 4127)),
									BGl_string4387z00zz__objectz00,
									BGl_string4382z00zz__objectz00, BgL_message2114z00_8150);
								FAILURE(BgL_auxz00_11604, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 114 */
							obj_t BgL_fname2111z00_8892;

							obj_t BgL_location2112z00_8893;

							obj_t BgL_stack2113z00_8894;

							obj_t BgL_message2114z00_8895;

							BgL_fname2111z00_8892 = BgL_fname2111z00_8147;
							BgL_location2112z00_8893 = BgL_location2112z00_8148;
							BgL_stack2113z00_8894 = BgL_stack2113z00_8149;
							BgL_message2114z00_8895 = BgL_message2114z00_8891;
							((((BgL_z62securityzd2exceptionzb0_bglt)
										CREF(BgL_new2115z00_8887))->BgL_fnamez00) =
								((obj_t) BgL_fname2111z00_8892), BUNSPEC);
							((((BgL_z62securityzd2exceptionzb0_bglt)
										CREF(BgL_new2115z00_8887))->BgL_locationz00) =
								((obj_t) BgL_location2112z00_8893), BUNSPEC);
							((((BgL_z62securityzd2exceptionzb0_bglt)
										CREF(BgL_new2115z00_8887))->BgL_stackz00) =
								((obj_t) BgL_stack2113z00_8894), BUNSPEC);
							((((BgL_z62securityzd2exceptionzb0_bglt)
										CREF(BgL_new2115z00_8887))->BgL_messagez00) =
								((obj_t) BgL_message2114z00_8895), BUNSPEC);
							BgL_res4505z00_8896 = BgL_new2115z00_8887;
					}}
					BgL_auxz00_11594 = BgL_res4505z00_8896;
				}
				return (obj_t) (BgL_auxz00_11594);
			}
		}
	}



/* %allocate-&security-exception */
	BGL_EXPORTED_DEF BgL_z62securityzd2exceptionzb0_bglt
		BGl_z52allocatezd2z62securityzd2exceptionz30zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			{	/* Llib/object.scm 114 */
				BgL_z62securityzd2exceptionzb0_bglt BgL_new2121z00_8897;

				BgL_new2121z00_8897 =
					((BgL_z62securityzd2exceptionzb0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62securityzd2exceptionzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2121z00_8897),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62securityzd2exceptionzb0zz__objectz00));
				{	/* Llib/object.scm 114 */
					BgL_objectz00_bglt BgL_auxz00_11617;

					BgL_auxz00_11617 = (BgL_objectz00_bglt) (BgL_new2121z00_8897);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11617, BFALSE);
				}
				return BgL_new2121z00_8897;
			}
		}
	}



/* _%allocate-&security-exception */
	obj_t BGl__z52allocatezd2z62securityzd2exceptionz30zz__objectz00(obj_t
		BgL_envz00_8084)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			{	/* Llib/object.scm 114 */
				BgL_z62securityzd2exceptionzb0_bglt BgL_auxz00_11620;

				{	/* Llib/object.scm 114 */
					BgL_z62securityzd2exceptionzb0_bglt BgL_res4506z00_8901;

					{	/* Llib/object.scm 114 */
						BgL_z62securityzd2exceptionzb0_bglt BgL_new2121z00_8899;

						BgL_new2121z00_8899 =
							((BgL_z62securityzd2exceptionzb0_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62securityzd2exceptionzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2121z00_8899),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62securityzd2exceptionzb0zz__objectz00));
						{	/* Llib/object.scm 114 */
							BgL_objectz00_bglt BgL_auxz00_11625;

							BgL_auxz00_11625 = (BgL_objectz00_bglt) (BgL_new2121z00_8899);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11625, BFALSE);
						}
						BgL_res4506z00_8901 = BgL_new2121z00_8899;
					}
					BgL_auxz00_11620 = BgL_res4506z00_8901;
				}
				return (obj_t) (BgL_auxz00_11620);
			}
		}
	}



/* &security-exception-nil */
	BGL_EXPORTED_DEF BgL_z62securityzd2exceptionzb0_bglt
		BGl_z62securityzd2exceptionzd2nilz62zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			if (
				(BGl_z52thezd2z62securityzd2exceptionzd2nilze2zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 114 */
					{	/* Llib/object.scm 114 */
						BgL_z62securityzd2exceptionzb0_bglt BgL_res3807z00_4731;

						{	/* Llib/object.scm 114 */
							BgL_z62securityzd2exceptionzb0_bglt BgL_new2121z00_4723;

							BgL_new2121z00_4723 =
								((BgL_z62securityzd2exceptionzb0_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62securityzd2exceptionzb0_bgl))));
							{	/* Llib/object.scm 114 */
								long BgL_arg3111z00_4724;

								{	/* Llib/object.scm 114 */
									long BgL_res3806z00_4728;

									{	/* Llib/object.scm 114 */
										obj_t BgL_classz00_4725;

										BgL_classz00_4725 =
											BGl_z62securityzd2exceptionzb0zz__objectz00;
										{	/* Llib/object.scm 114 */
											obj_t BgL_vectorz00_4726;

											int BgL_kz00_4727;

											BgL_vectorz00_4726 = BgL_classz00_4725;
											BgL_kz00_4727 = (int) (((long) 1));
											BgL_res3806z00_4728 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_4726,
													BgL_kz00_4727));
									}}
									BgL_arg3111z00_4724 = BgL_res3806z00_4728;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2121z00_4723),
									BgL_arg3111z00_4724);
							}
							{	/* Llib/object.scm 114 */
								BgL_objectz00_bglt BgL_auxz00_11637;

								BgL_auxz00_11637 = (BgL_objectz00_bglt) (BgL_new2121z00_4723);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11637, BFALSE);
							}
							BgL_res3807z00_4731 = BgL_new2121z00_4723;
						}
						BGl_z52thezd2z62securityzd2exceptionzd2nilze2zz__objectz00 =
							(obj_t) (BgL_res3807z00_4731);
					}
					{	/* Llib/object.scm 114 */
						BgL_z62securityzd2exceptionzb0_bglt BgL_res3808z00_4741;

						{	/* Llib/object.scm 114 */
							BgL_z62securityzd2exceptionzb0_bglt BgL_new2115z00_4732;

							BgL_new2115z00_4732 =
								(BgL_z62securityzd2exceptionzb0_bglt)
								(BGl_z52thezd2z62securityzd2exceptionzd2nilze2zz__objectz00);
							{	/* Llib/object.scm 114 */
								obj_t BgL_fname2111z00_4737;

								obj_t BgL_location2112z00_4738;

								obj_t BgL_stack2113z00_4739;

								obj_t BgL_message2114z00_4740;

								BgL_fname2111z00_4737 = BUNSPEC;
								BgL_location2112z00_4738 = BUNSPEC;
								BgL_stack2113z00_4739 = BUNSPEC;
								BgL_message2114z00_4740 = BGl_string4288z00zz__objectz00;
								((((BgL_z62securityzd2exceptionzb0_bglt)
											CREF(BgL_new2115z00_4732))->BgL_fnamez00) =
									((obj_t) BgL_fname2111z00_4737), BUNSPEC);
								((((BgL_z62securityzd2exceptionzb0_bglt)
											CREF(BgL_new2115z00_4732))->BgL_locationz00) =
									((obj_t) BgL_location2112z00_4738), BUNSPEC);
								((((BgL_z62securityzd2exceptionzb0_bglt)
											CREF(BgL_new2115z00_4732))->BgL_stackz00) =
									((obj_t) BgL_stack2113z00_4739), BUNSPEC);
								((((BgL_z62securityzd2exceptionzb0_bglt)
											CREF(BgL_new2115z00_4732))->BgL_messagez00) =
									((obj_t) BgL_message2114z00_4740), BUNSPEC);
								BgL_res3808z00_4741 = BgL_new2115z00_4732;
						}}
						(obj_t) (BgL_res3808z00_4741);
				}}
			else
				{	/* Llib/object.scm 114 */
					BFALSE;
				}
			return
				(BgL_z62securityzd2exceptionzb0_bglt)
				(BGl_z52thezd2z62securityzd2exceptionzd2nilze2zz__objectz00);
		}
	}



/* _&security-exception-nil */
	obj_t BGl__z62securityzd2exceptionzd2nilz62zz__objectz00(obj_t
		BgL_envz00_8087)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			return (obj_t) (BGl_z62securityzd2exceptionzd2nilz62zz__objectz00());
		}
	}



/* _&security-exception-message */
	obj_t BGl__z62securityzd2exceptionzd2messagez62zz__objectz00(obj_t
		BgL_envz00_8085, obj_t BgL_obj2104z00_8086)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 115 */
			{	/* Llib/object.scm 115 */
				BgL_z62securityzd2exceptionzb0_bglt BgL_obj2104z00_8903;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj2104z00_8086,
						BGl_z62securityzd2exceptionzb0zz__objectz00))
					{	/* Llib/object.scm 115 */
						BgL_obj2104z00_8903 =
							(BgL_z62securityzd2exceptionzb0_bglt) (BgL_obj2104z00_8086);
					}
				else
					{
						obj_t BgL_auxz00_11653;

						BgL_auxz00_11653 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 4174)), BGl_string4388z00zz__objectz00,
							BGl_string4365z00zz__objectz00, BgL_obj2104z00_8086);
						FAILURE(BgL_auxz00_11653, BFALSE, BFALSE);
					}
				return
					(((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_obj2104z00_8903))->
					BgL_messagez00);
			}
		}
	}



/* &process-exception? */
	BGL_EXPORTED_DEF bool_t BGl_z62processzd2exceptionzf3z43zz__objectz00(obj_t
		BgL_obj2094z00_285)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2094z00_285,
				BGl_z62processzd2exceptionzb0zz__objectz00);
		}
	}



/* _&process-exception? */
	obj_t BGl__z62processzd2exceptionzf3z43zz__objectz00(obj_t BgL_envz00_8077,
		obj_t BgL_obj2094z00_8078)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2094z00_8078,
					BGl_z62processzd2exceptionzb0zz__objectz00));
		}
	}



/* make-&process-exception */
	BGL_EXPORTED_DEF BgL_z62processzd2exceptionzb0_bglt
		BGl_makezd2z62processzd2exceptionz62zz__objectz00(obj_t
		BgL_fname2045z00_289, obj_t BgL_location2046z00_290,
		obj_t BgL_stack2047z00_291, obj_t BgL_proc2048z00_292,
		obj_t BgL_msg2049z00_293, obj_t BgL_obj2050z00_294)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			{	/* Llib/object.scm 112 */
				BgL_z62processzd2exceptionzb0_bglt BgL_new2051z00_4742;

				{	/* Llib/object.scm 112 */
					BgL_z62processzd2exceptionzb0_bglt BgL_res3810z00_4751;

					{	/* Llib/object.scm 112 */
						BgL_z62processzd2exceptionzb0_bglt BgL_new2067z00_4743;

						BgL_new2067z00_4743 =
							((BgL_z62processzd2exceptionzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62processzd2exceptionzb0_bgl))));
						{	/* Llib/object.scm 112 */
							long BgL_arg3113z00_4744;

							{	/* Llib/object.scm 112 */
								long BgL_res3809z00_4748;

								{	/* Llib/object.scm 112 */
									obj_t BgL_classz00_4745;

									BgL_classz00_4745 =
										BGl_z62processzd2exceptionzb0zz__objectz00;
									{	/* Llib/object.scm 112 */
										obj_t BgL_vectorz00_4746;

										int BgL_kz00_4747;

										BgL_vectorz00_4746 = BgL_classz00_4745;
										BgL_kz00_4747 = (int) (((long) 1));
										BgL_res3809z00_4748 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4746,
												BgL_kz00_4747));
								}}
								BgL_arg3113z00_4744 = BgL_res3809z00_4748;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new2067z00_4743),
								BgL_arg3113z00_4744);
						}
						{	/* Llib/object.scm 112 */
							BgL_objectz00_bglt BgL_auxz00_11667;

							BgL_auxz00_11667 = (BgL_objectz00_bglt) (BgL_new2067z00_4743);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11667, BFALSE);
						}
						BgL_res3810z00_4751 = BgL_new2067z00_4743;
					}
					BgL_new2051z00_4742 = BgL_res3810z00_4751;
				}
				{	/* Llib/object.scm 112 */
					BgL_z62processzd2exceptionzb0_bglt BgL_res3811z00_4765;

					{	/* Llib/object.scm 112 */
						BgL_z62processzd2exceptionzb0_bglt BgL_new2059z00_4752;

						BgL_new2059z00_4752 = BgL_new2051z00_4742;
						{	/* Llib/object.scm 112 */
							obj_t BgL_fname2053z00_4759;

							obj_t BgL_location2054z00_4760;

							obj_t BgL_stack2055z00_4761;

							obj_t BgL_proc2056z00_4762;

							obj_t BgL_msg2057z00_4763;

							obj_t BgL_obj2058z00_4764;

							BgL_fname2053z00_4759 = BgL_fname2045z00_289;
							BgL_location2054z00_4760 = BgL_location2046z00_290;
							BgL_stack2055z00_4761 = BgL_stack2047z00_291;
							BgL_proc2056z00_4762 = BgL_proc2048z00_292;
							BgL_msg2057z00_4763 = BgL_msg2049z00_293;
							BgL_obj2058z00_4764 = BgL_obj2050z00_294;
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_4752))->BgL_fnamez00) =
								((obj_t) BgL_fname2053z00_4759), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_4752))->BgL_locationz00) =
								((obj_t) BgL_location2054z00_4760), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_4752))->BgL_stackz00) =
								((obj_t) BgL_stack2055z00_4761), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_4752))->BgL_procz00) =
								((obj_t) BgL_proc2056z00_4762), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_4752))->BgL_msgz00) =
								((obj_t) BgL_msg2057z00_4763), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_4752))->BgL_objz00) =
								((obj_t) BgL_obj2058z00_4764), BUNSPEC);
							BgL_res3811z00_4765 = BgL_new2059z00_4752;
					}} BgL_res3811z00_4765;
				}
				return BgL_new2051z00_4742;
			}
		}
	}



/* _make-&process-exception */
	obj_t BGl__makezd2z62processzd2exceptionz62zz__objectz00(obj_t
		BgL_envz00_8068, obj_t BgL_fname2045z00_8069,
		obj_t BgL_location2046z00_8070, obj_t BgL_stack2047z00_8071,
		obj_t BgL_proc2048z00_8072, obj_t BgL_msg2049z00_8073,
		obj_t BgL_obj2050z00_8074)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			return
				(obj_t) (BGl_makezd2z62processzd2exceptionz62zz__objectz00
				(BgL_fname2045z00_8069, BgL_location2046z00_8070, BgL_stack2047z00_8071,
					BgL_proc2048z00_8072, BgL_msg2049z00_8073, BgL_obj2050z00_8074));
		}
	}



/* fill-&process-exception! */
	BGL_EXPORTED_DEF BgL_z62processzd2exceptionzb0_bglt
		BGl_fillzd2z62processzd2exceptionz12z70zz__objectz00
		(BgL_z62processzd2exceptionzb0_bglt BgL_new2059z00_295,
		obj_t BgL_fname2053z00_296, obj_t BgL_location2054z00_297,
		obj_t BgL_stack2055z00_298, obj_t BgL_proc2056z00_299,
		obj_t BgL_msg2057z00_300, obj_t BgL_obj2058z00_301)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			{	/* Llib/object.scm 112 */
				obj_t BgL_fname2053z00_8905;

				obj_t BgL_location2054z00_8906;

				obj_t BgL_stack2055z00_8907;

				obj_t BgL_proc2056z00_8908;

				obj_t BgL_msg2057z00_8909;

				obj_t BgL_obj2058z00_8910;

				BgL_fname2053z00_8905 = BgL_fname2053z00_296;
				BgL_location2054z00_8906 = BgL_location2054z00_297;
				BgL_stack2055z00_8907 = BgL_stack2055z00_298;
				BgL_proc2056z00_8908 = BgL_proc2056z00_299;
				BgL_msg2057z00_8909 = BgL_msg2057z00_300;
				BgL_obj2058z00_8910 = BgL_obj2058z00_301;
				((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_new2059z00_295))->
						BgL_fnamez00) = ((obj_t) BgL_fname2053z00_8905), BUNSPEC);
				((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_new2059z00_295))->
						BgL_locationz00) = ((obj_t) BgL_location2054z00_8906), BUNSPEC);
				((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_new2059z00_295))->
						BgL_stackz00) = ((obj_t) BgL_stack2055z00_8907), BUNSPEC);
				((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_new2059z00_295))->
						BgL_procz00) = ((obj_t) BgL_proc2056z00_8908), BUNSPEC);
				((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_new2059z00_295))->
						BgL_msgz00) = ((obj_t) BgL_msg2057z00_8909), BUNSPEC);
				((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_new2059z00_295))->
						BgL_objz00) = ((obj_t) BgL_obj2058z00_8910), BUNSPEC);
				return BgL_new2059z00_295;
			}
		}
	}



/* _fill-&process-exception! */
	obj_t BGl__fillzd2z62processzd2exceptionz12z70zz__objectz00(obj_t
		BgL_envz00_8151, obj_t BgL_new2059z00_8152, obj_t BgL_fname2053z00_8153,
		obj_t BgL_location2054z00_8154, obj_t BgL_stack2055z00_8155,
		obj_t BgL_proc2056z00_8156, obj_t BgL_msg2057z00_8157,
		obj_t BgL_obj2058z00_8158)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			{	/* Llib/object.scm 112 */
				BgL_z62processzd2exceptionzb0_bglt BgL_auxz00_11684;

				{	/* Llib/object.scm 112 */
					BgL_z62processzd2exceptionzb0_bglt BgL_res4507z00_8925;

					{	/* Llib/object.scm 112 */
						BgL_z62processzd2exceptionzb0_bglt BgL_new2059z00_8912;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new2059z00_8152,
								BGl_z62processzd2exceptionzb0zz__objectz00))
							{	/* Llib/object.scm 112 */
								BgL_new2059z00_8912 =
									(BgL_z62processzd2exceptionzb0_bglt) (BgL_new2059z00_8152);
							}
						else
							{
								obj_t BgL_auxz00_11688;

								BgL_auxz00_11688 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 4081)),
									BGl_string4389z00zz__objectz00,
									BGl_string4363z00zz__objectz00, BgL_new2059z00_8152);
								FAILURE(BgL_auxz00_11688, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 112 */
							obj_t BgL_fname2053z00_8919;

							obj_t BgL_location2054z00_8920;

							obj_t BgL_stack2055z00_8921;

							obj_t BgL_proc2056z00_8922;

							obj_t BgL_msg2057z00_8923;

							obj_t BgL_obj2058z00_8924;

							BgL_fname2053z00_8919 = BgL_fname2053z00_8153;
							BgL_location2054z00_8920 = BgL_location2054z00_8154;
							BgL_stack2055z00_8921 = BgL_stack2055z00_8155;
							BgL_proc2056z00_8922 = BgL_proc2056z00_8156;
							BgL_msg2057z00_8923 = BgL_msg2057z00_8157;
							BgL_obj2058z00_8924 = BgL_obj2058z00_8158;
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_8912))->BgL_fnamez00) =
								((obj_t) BgL_fname2053z00_8919), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_8912))->BgL_locationz00) =
								((obj_t) BgL_location2054z00_8920), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_8912))->BgL_stackz00) =
								((obj_t) BgL_stack2055z00_8921), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_8912))->BgL_procz00) =
								((obj_t) BgL_proc2056z00_8922), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_8912))->BgL_msgz00) =
								((obj_t) BgL_msg2057z00_8923), BUNSPEC);
							((((BgL_z62processzd2exceptionzb0_bglt)
										CREF(BgL_new2059z00_8912))->BgL_objz00) =
								((obj_t) BgL_obj2058z00_8924), BUNSPEC);
							BgL_res4507z00_8925 = BgL_new2059z00_8912;
					}}
					BgL_auxz00_11684 = BgL_res4507z00_8925;
				}
				return (obj_t) (BgL_auxz00_11684);
			}
		}
	}



/* %allocate-&process-exception */
	BGL_EXPORTED_DEF BgL_z62processzd2exceptionzb0_bglt
		BGl_z52allocatezd2z62processzd2exceptionz30zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			{	/* Llib/object.scm 112 */
				BgL_z62processzd2exceptionzb0_bglt BgL_new2067z00_8926;

				BgL_new2067z00_8926 =
					((BgL_z62processzd2exceptionzb0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62processzd2exceptionzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2067z00_8926),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62processzd2exceptionzb0zz__objectz00));
				{	/* Llib/object.scm 112 */
					BgL_objectz00_bglt BgL_auxz00_11703;

					BgL_auxz00_11703 = (BgL_objectz00_bglt) (BgL_new2067z00_8926);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11703, BFALSE);
				}
				return BgL_new2067z00_8926;
			}
		}
	}



/* _%allocate-&process-exception */
	obj_t BGl__z52allocatezd2z62processzd2exceptionz30zz__objectz00(obj_t
		BgL_envz00_8075)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			{	/* Llib/object.scm 112 */
				BgL_z62processzd2exceptionzb0_bglt BgL_auxz00_11706;

				{	/* Llib/object.scm 112 */
					BgL_z62processzd2exceptionzb0_bglt BgL_res4508z00_8930;

					{	/* Llib/object.scm 112 */
						BgL_z62processzd2exceptionzb0_bglt BgL_new2067z00_8928;

						BgL_new2067z00_8928 =
							((BgL_z62processzd2exceptionzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62processzd2exceptionzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2067z00_8928),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62processzd2exceptionzb0zz__objectz00));
						{	/* Llib/object.scm 112 */
							BgL_objectz00_bglt BgL_auxz00_11711;

							BgL_auxz00_11711 = (BgL_objectz00_bglt) (BgL_new2067z00_8928);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11711, BFALSE);
						}
						BgL_res4508z00_8930 = BgL_new2067z00_8928;
					}
					BgL_auxz00_11706 = BgL_res4508z00_8930;
				}
				return (obj_t) (BgL_auxz00_11706);
			}
		}
	}



/* &process-exception-nil */
	BGL_EXPORTED_DEF BgL_z62processzd2exceptionzb0_bglt
		BGl_z62processzd2exceptionzd2nilz62zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			if (
				(BGl_z52thezd2z62processzd2exceptionzd2nilze2zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 112 */
					{	/* Llib/object.scm 112 */
						BgL_z62processzd2exceptionzb0_bglt BgL_res3813z00_4784;

						{	/* Llib/object.scm 112 */
							BgL_z62processzd2exceptionzb0_bglt BgL_new2067z00_4776;

							BgL_new2067z00_4776 =
								((BgL_z62processzd2exceptionzb0_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62processzd2exceptionzb0_bgl))));
							{	/* Llib/object.scm 112 */
								long BgL_arg3113z00_4777;

								{	/* Llib/object.scm 112 */
									long BgL_res3812z00_4781;

									{	/* Llib/object.scm 112 */
										obj_t BgL_classz00_4778;

										BgL_classz00_4778 =
											BGl_z62processzd2exceptionzb0zz__objectz00;
										{	/* Llib/object.scm 112 */
											obj_t BgL_vectorz00_4779;

											int BgL_kz00_4780;

											BgL_vectorz00_4779 = BgL_classz00_4778;
											BgL_kz00_4780 = (int) (((long) 1));
											BgL_res3812z00_4781 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_4779,
													BgL_kz00_4780));
									}}
									BgL_arg3113z00_4777 = BgL_res3812z00_4781;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2067z00_4776),
									BgL_arg3113z00_4777);
							}
							{	/* Llib/object.scm 112 */
								BgL_objectz00_bglt BgL_auxz00_11723;

								BgL_auxz00_11723 = (BgL_objectz00_bglt) (BgL_new2067z00_4776);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11723, BFALSE);
							}
							BgL_res3813z00_4784 = BgL_new2067z00_4776;
						}
						BGl_z52thezd2z62processzd2exceptionzd2nilze2zz__objectz00 =
							(obj_t) (BgL_res3813z00_4784);
					}
					{	/* Llib/object.scm 112 */
						BgL_z62processzd2exceptionzb0_bglt BgL_res3814z00_4798;

						{	/* Llib/object.scm 112 */
							BgL_z62processzd2exceptionzb0_bglt BgL_new2059z00_4785;

							BgL_new2059z00_4785 =
								(BgL_z62processzd2exceptionzb0_bglt)
								(BGl_z52thezd2z62processzd2exceptionzd2nilze2zz__objectz00);
							{	/* Llib/object.scm 112 */
								obj_t BgL_fname2053z00_4792;

								obj_t BgL_location2054z00_4793;

								obj_t BgL_stack2055z00_4794;

								obj_t BgL_proc2056z00_4795;

								obj_t BgL_msg2057z00_4796;

								obj_t BgL_obj2058z00_4797;

								BgL_fname2053z00_4792 = BUNSPEC;
								BgL_location2054z00_4793 = BUNSPEC;
								BgL_stack2055z00_4794 = BUNSPEC;
								BgL_proc2056z00_4795 = BUNSPEC;
								BgL_msg2057z00_4796 = BUNSPEC;
								BgL_obj2058z00_4797 = BUNSPEC;
								((((BgL_z62processzd2exceptionzb0_bglt)
											CREF(BgL_new2059z00_4785))->BgL_fnamez00) =
									((obj_t) BgL_fname2053z00_4792), BUNSPEC);
								((((BgL_z62processzd2exceptionzb0_bglt)
											CREF(BgL_new2059z00_4785))->BgL_locationz00) =
									((obj_t) BgL_location2054z00_4793), BUNSPEC);
								((((BgL_z62processzd2exceptionzb0_bglt)
											CREF(BgL_new2059z00_4785))->BgL_stackz00) =
									((obj_t) BgL_stack2055z00_4794), BUNSPEC);
								((((BgL_z62processzd2exceptionzb0_bglt)
											CREF(BgL_new2059z00_4785))->BgL_procz00) =
									((obj_t) BgL_proc2056z00_4795), BUNSPEC);
								((((BgL_z62processzd2exceptionzb0_bglt)
											CREF(BgL_new2059z00_4785))->BgL_msgz00) =
									((obj_t) BgL_msg2057z00_4796), BUNSPEC);
								((((BgL_z62processzd2exceptionzb0_bglt)
											CREF(BgL_new2059z00_4785))->BgL_objz00) =
									((obj_t) BgL_obj2058z00_4797), BUNSPEC);
								BgL_res3814z00_4798 = BgL_new2059z00_4785;
						}}
						(obj_t) (BgL_res3814z00_4798);
				}}
			else
				{	/* Llib/object.scm 112 */
					BFALSE;
				}
			return
				(BgL_z62processzd2exceptionzb0_bglt)
				(BGl_z52thezd2z62processzd2exceptionzd2nilze2zz__objectz00);
		}
	}



/* _&process-exception-nil */
	obj_t BGl__z62processzd2exceptionzd2nilz62zz__objectz00(obj_t BgL_envz00_8076)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			return (obj_t) (BGl_z62processzd2exceptionzd2nilz62zz__objectz00());
		}
	}



/* &io-timeout-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62iozd2timeoutzd2errorzf3z91zz__objectz00(obj_t
		BgL_obj2032z00_302)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2032z00_302,
				BGl_z62iozd2timeoutzd2errorz62zz__objectz00);
		}
	}



/* _&io-timeout-error? */
	obj_t BGl__z62iozd2timeoutzd2errorzf3z91zz__objectz00(obj_t BgL_envz00_8066,
		obj_t BgL_obj2032z00_8067)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2032z00_8067,
					BGl_z62iozd2timeoutzd2errorz62zz__objectz00));
		}
	}



/* make-&io-timeout-error */
	BGL_EXPORTED_DEF BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_makezd2z62iozd2timeoutzd2errorzb0zz__objectz00(obj_t
		BgL_fname1983z00_306, obj_t BgL_location1984z00_307,
		obj_t BgL_stack1985z00_308, obj_t BgL_proc1986z00_309,
		obj_t BgL_msg1987z00_310, obj_t BgL_obj1988z00_311)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			{	/* Llib/object.scm 110 */
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1989z00_4799;

				{	/* Llib/object.scm 110 */
					BgL_z62iozd2timeoutzd2errorz62_bglt BgL_res3816z00_4808;

					{	/* Llib/object.scm 110 */
						BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new2005z00_4800;

						BgL_new2005z00_4800 =
							((BgL_z62iozd2timeoutzd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2timeoutzd2errorz62_bgl))));
						{	/* Llib/object.scm 110 */
							long BgL_arg3115z00_4801;

							{	/* Llib/object.scm 110 */
								long BgL_res3815z00_4805;

								{	/* Llib/object.scm 110 */
									obj_t BgL_classz00_4802;

									BgL_classz00_4802 =
										BGl_z62iozd2timeoutzd2errorz62zz__objectz00;
									{	/* Llib/object.scm 110 */
										obj_t BgL_vectorz00_4803;

										int BgL_kz00_4804;

										BgL_vectorz00_4803 = BgL_classz00_4802;
										BgL_kz00_4804 = (int) (((long) 1));
										BgL_res3815z00_4805 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4803,
												BgL_kz00_4804));
								}}
								BgL_arg3115z00_4801 = BgL_res3815z00_4805;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new2005z00_4800),
								BgL_arg3115z00_4801);
						}
						{	/* Llib/object.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_11747;

							BgL_auxz00_11747 = (BgL_objectz00_bglt) (BgL_new2005z00_4800);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11747, BFALSE);
						}
						BgL_res3816z00_4808 = BgL_new2005z00_4800;
					}
					BgL_new1989z00_4799 = BgL_res3816z00_4808;
				}
				{	/* Llib/object.scm 110 */
					BgL_z62iozd2timeoutzd2errorz62_bglt BgL_res3817z00_4822;

					{	/* Llib/object.scm 110 */
						BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1997z00_4809;

						BgL_new1997z00_4809 = BgL_new1989z00_4799;
						{	/* Llib/object.scm 110 */
							obj_t BgL_fname1991z00_4816;

							obj_t BgL_location1992z00_4817;

							obj_t BgL_stack1993z00_4818;

							obj_t BgL_proc1994z00_4819;

							obj_t BgL_msg1995z00_4820;

							obj_t BgL_obj1996z00_4821;

							BgL_fname1991z00_4816 = BgL_fname1983z00_306;
							BgL_location1992z00_4817 = BgL_location1984z00_307;
							BgL_stack1993z00_4818 = BgL_stack1985z00_308;
							BgL_proc1994z00_4819 = BgL_proc1986z00_309;
							BgL_msg1995z00_4820 = BgL_msg1987z00_310;
							BgL_obj1996z00_4821 = BgL_obj1988z00_311;
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_4809))->BgL_fnamez00) =
								((obj_t) BgL_fname1991z00_4816), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_4809))->BgL_locationz00) =
								((obj_t) BgL_location1992z00_4817), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_4809))->BgL_stackz00) =
								((obj_t) BgL_stack1993z00_4818), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_4809))->BgL_procz00) =
								((obj_t) BgL_proc1994z00_4819), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_4809))->BgL_msgz00) =
								((obj_t) BgL_msg1995z00_4820), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_4809))->BgL_objz00) =
								((obj_t) BgL_obj1996z00_4821), BUNSPEC);
							BgL_res3817z00_4822 = BgL_new1997z00_4809;
					}} BgL_res3817z00_4822;
				}
				return BgL_new1989z00_4799;
			}
		}
	}



/* _make-&io-timeout-error */
	obj_t BGl__makezd2z62iozd2timeoutzd2errorzb0zz__objectz00(obj_t
		BgL_envz00_8057, obj_t BgL_fname1983z00_8058,
		obj_t BgL_location1984z00_8059, obj_t BgL_stack1985z00_8060,
		obj_t BgL_proc1986z00_8061, obj_t BgL_msg1987z00_8062,
		obj_t BgL_obj1988z00_8063)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			return
				(obj_t) (BGl_makezd2z62iozd2timeoutzd2errorzb0zz__objectz00
				(BgL_fname1983z00_8058, BgL_location1984z00_8059, BgL_stack1985z00_8060,
					BgL_proc1986z00_8061, BgL_msg1987z00_8062, BgL_obj1988z00_8063));
		}
	}



/* fill-&io-timeout-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_fillzd2z62iozd2timeoutzd2errorz12za2zz__objectz00
		(BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1997z00_312,
		obj_t BgL_fname1991z00_313, obj_t BgL_location1992z00_314,
		obj_t BgL_stack1993z00_315, obj_t BgL_proc1994z00_316,
		obj_t BgL_msg1995z00_317, obj_t BgL_obj1996z00_318)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			{	/* Llib/object.scm 110 */
				obj_t BgL_fname1991z00_8932;

				obj_t BgL_location1992z00_8933;

				obj_t BgL_stack1993z00_8934;

				obj_t BgL_proc1994z00_8935;

				obj_t BgL_msg1995z00_8936;

				obj_t BgL_obj1996z00_8937;

				BgL_fname1991z00_8932 = BgL_fname1991z00_313;
				BgL_location1992z00_8933 = BgL_location1992z00_314;
				BgL_stack1993z00_8934 = BgL_stack1993z00_315;
				BgL_proc1994z00_8935 = BgL_proc1994z00_316;
				BgL_msg1995z00_8936 = BgL_msg1995z00_317;
				BgL_obj1996z00_8937 = BgL_obj1996z00_318;
				((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_new1997z00_312))->
						BgL_fnamez00) = ((obj_t) BgL_fname1991z00_8932), BUNSPEC);
				((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_new1997z00_312))->
						BgL_locationz00) = ((obj_t) BgL_location1992z00_8933), BUNSPEC);
				((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_new1997z00_312))->
						BgL_stackz00) = ((obj_t) BgL_stack1993z00_8934), BUNSPEC);
				((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_new1997z00_312))->
						BgL_procz00) = ((obj_t) BgL_proc1994z00_8935), BUNSPEC);
				((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_new1997z00_312))->
						BgL_msgz00) = ((obj_t) BgL_msg1995z00_8936), BUNSPEC);
				((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_new1997z00_312))->
						BgL_objz00) = ((obj_t) BgL_obj1996z00_8937), BUNSPEC);
				return BgL_new1997z00_312;
			}
		}
	}



/* _fill-&io-timeout-error! */
	obj_t BGl__fillzd2z62iozd2timeoutzd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8159, obj_t BgL_new1997z00_8160, obj_t BgL_fname1991z00_8161,
		obj_t BgL_location1992z00_8162, obj_t BgL_stack1993z00_8163,
		obj_t BgL_proc1994z00_8164, obj_t BgL_msg1995z00_8165,
		obj_t BgL_obj1996z00_8166)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			{	/* Llib/object.scm 110 */
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_auxz00_11764;

				{	/* Llib/object.scm 110 */
					BgL_z62iozd2timeoutzd2errorz62_bglt BgL_res4509z00_8952;

					{	/* Llib/object.scm 110 */
						BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1997z00_8939;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1997z00_8160,
								BGl_z62iozd2timeoutzd2errorz62zz__objectz00))
							{	/* Llib/object.scm 110 */
								BgL_new1997z00_8939 =
									(BgL_z62iozd2timeoutzd2errorz62_bglt) (BgL_new1997z00_8160);
							}
						else
							{
								obj_t BgL_auxz00_11768;

								BgL_auxz00_11768 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 4033)),
									BGl_string4390z00zz__objectz00,
									BGl_string4361z00zz__objectz00, BgL_new1997z00_8160);
								FAILURE(BgL_auxz00_11768, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 110 */
							obj_t BgL_fname1991z00_8946;

							obj_t BgL_location1992z00_8947;

							obj_t BgL_stack1993z00_8948;

							obj_t BgL_proc1994z00_8949;

							obj_t BgL_msg1995z00_8950;

							obj_t BgL_obj1996z00_8951;

							BgL_fname1991z00_8946 = BgL_fname1991z00_8161;
							BgL_location1992z00_8947 = BgL_location1992z00_8162;
							BgL_stack1993z00_8948 = BgL_stack1993z00_8163;
							BgL_proc1994z00_8949 = BgL_proc1994z00_8164;
							BgL_msg1995z00_8950 = BgL_msg1995z00_8165;
							BgL_obj1996z00_8951 = BgL_obj1996z00_8166;
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_8939))->BgL_fnamez00) =
								((obj_t) BgL_fname1991z00_8946), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_8939))->BgL_locationz00) =
								((obj_t) BgL_location1992z00_8947), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_8939))->BgL_stackz00) =
								((obj_t) BgL_stack1993z00_8948), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_8939))->BgL_procz00) =
								((obj_t) BgL_proc1994z00_8949), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_8939))->BgL_msgz00) =
								((obj_t) BgL_msg1995z00_8950), BUNSPEC);
							((((BgL_z62iozd2timeoutzd2errorz62_bglt)
										CREF(BgL_new1997z00_8939))->BgL_objz00) =
								((obj_t) BgL_obj1996z00_8951), BUNSPEC);
							BgL_res4509z00_8952 = BgL_new1997z00_8939;
					}}
					BgL_auxz00_11764 = BgL_res4509z00_8952;
				}
				return (obj_t) (BgL_auxz00_11764);
			}
		}
	}



/* %allocate-&io-timeout-error */
	BGL_EXPORTED_DEF BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2timeoutzd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			{	/* Llib/object.scm 110 */
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new2005z00_8953;

				BgL_new2005z00_8953 =
					((BgL_z62iozd2timeoutzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2timeoutzd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2005z00_8953),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2timeoutzd2errorz62zz__objectz00));
				{	/* Llib/object.scm 110 */
					BgL_objectz00_bglt BgL_auxz00_11783;

					BgL_auxz00_11783 = (BgL_objectz00_bglt) (BgL_new2005z00_8953);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11783, BFALSE);
				}
				return BgL_new2005z00_8953;
			}
		}
	}



/* _%allocate-&io-timeout-error */
	obj_t BGl__z52allocatezd2z62iozd2timeoutzd2errorze2zz__objectz00(obj_t
		BgL_envz00_8064)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			{	/* Llib/object.scm 110 */
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_auxz00_11786;

				{	/* Llib/object.scm 110 */
					BgL_z62iozd2timeoutzd2errorz62_bglt BgL_res4510z00_8957;

					{	/* Llib/object.scm 110 */
						BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new2005z00_8955;

						BgL_new2005z00_8955 =
							((BgL_z62iozd2timeoutzd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2timeoutzd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2005z00_8955),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2timeoutzd2errorz62zz__objectz00));
						{	/* Llib/object.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_11791;

							BgL_auxz00_11791 = (BgL_objectz00_bglt) (BgL_new2005z00_8955);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11791, BFALSE);
						}
						BgL_res4510z00_8957 = BgL_new2005z00_8955;
					}
					BgL_auxz00_11786 = BgL_res4510z00_8957;
				}
				return (obj_t) (BgL_auxz00_11786);
			}
		}
	}



/* &io-timeout-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_z62iozd2timeoutzd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			if (
				(BGl_z52thezd2z62iozd2timeoutzd2errorzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 110 */
					{	/* Llib/object.scm 110 */
						BgL_z62iozd2timeoutzd2errorz62_bglt BgL_res3819z00_4841;

						{	/* Llib/object.scm 110 */
							BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new2005z00_4833;

							BgL_new2005z00_4833 =
								((BgL_z62iozd2timeoutzd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2timeoutzd2errorz62_bgl))));
							{	/* Llib/object.scm 110 */
								long BgL_arg3115z00_4834;

								{	/* Llib/object.scm 110 */
									long BgL_res3818z00_4838;

									{	/* Llib/object.scm 110 */
										obj_t BgL_classz00_4835;

										BgL_classz00_4835 =
											BGl_z62iozd2timeoutzd2errorz62zz__objectz00;
										{	/* Llib/object.scm 110 */
											obj_t BgL_vectorz00_4836;

											int BgL_kz00_4837;

											BgL_vectorz00_4836 = BgL_classz00_4835;
											BgL_kz00_4837 = (int) (((long) 1));
											BgL_res3818z00_4838 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_4836,
													BgL_kz00_4837));
									}}
									BgL_arg3115z00_4834 = BgL_res3818z00_4838;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2005z00_4833),
									BgL_arg3115z00_4834);
							}
							{	/* Llib/object.scm 110 */
								BgL_objectz00_bglt BgL_auxz00_11803;

								BgL_auxz00_11803 = (BgL_objectz00_bglt) (BgL_new2005z00_4833);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11803, BFALSE);
							}
							BgL_res3819z00_4841 = BgL_new2005z00_4833;
						}
						BGl_z52thezd2z62iozd2timeoutzd2errorzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3819z00_4841);
					}
					{	/* Llib/object.scm 110 */
						BgL_z62iozd2timeoutzd2errorz62_bglt BgL_res3820z00_4855;

						{	/* Llib/object.scm 110 */
							BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1997z00_4842;

							BgL_new1997z00_4842 =
								(BgL_z62iozd2timeoutzd2errorz62_bglt)
								(BGl_z52thezd2z62iozd2timeoutzd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 110 */
								obj_t BgL_fname1991z00_4849;

								obj_t BgL_location1992z00_4850;

								obj_t BgL_stack1993z00_4851;

								obj_t BgL_proc1994z00_4852;

								obj_t BgL_msg1995z00_4853;

								obj_t BgL_obj1996z00_4854;

								BgL_fname1991z00_4849 = BUNSPEC;
								BgL_location1992z00_4850 = BUNSPEC;
								BgL_stack1993z00_4851 = BUNSPEC;
								BgL_proc1994z00_4852 = BUNSPEC;
								BgL_msg1995z00_4853 = BUNSPEC;
								BgL_obj1996z00_4854 = BUNSPEC;
								((((BgL_z62iozd2timeoutzd2errorz62_bglt)
											CREF(BgL_new1997z00_4842))->BgL_fnamez00) =
									((obj_t) BgL_fname1991z00_4849), BUNSPEC);
								((((BgL_z62iozd2timeoutzd2errorz62_bglt)
											CREF(BgL_new1997z00_4842))->BgL_locationz00) =
									((obj_t) BgL_location1992z00_4850), BUNSPEC);
								((((BgL_z62iozd2timeoutzd2errorz62_bglt)
											CREF(BgL_new1997z00_4842))->BgL_stackz00) =
									((obj_t) BgL_stack1993z00_4851), BUNSPEC);
								((((BgL_z62iozd2timeoutzd2errorz62_bglt)
											CREF(BgL_new1997z00_4842))->BgL_procz00) =
									((obj_t) BgL_proc1994z00_4852), BUNSPEC);
								((((BgL_z62iozd2timeoutzd2errorz62_bglt)
											CREF(BgL_new1997z00_4842))->BgL_msgz00) =
									((obj_t) BgL_msg1995z00_4853), BUNSPEC);
								((((BgL_z62iozd2timeoutzd2errorz62_bglt)
											CREF(BgL_new1997z00_4842))->BgL_objz00) =
									((obj_t) BgL_obj1996z00_4854), BUNSPEC);
								BgL_res3820z00_4855 = BgL_new1997z00_4842;
						}}
						(obj_t) (BgL_res3820z00_4855);
				}}
			else
				{	/* Llib/object.scm 110 */
					BFALSE;
				}
			return
				(BgL_z62iozd2timeoutzd2errorz62_bglt)
				(BGl_z52thezd2z62iozd2timeoutzd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&io-timeout-error-nil */
	obj_t BGl__z62iozd2timeoutzd2errorzd2nilzb0zz__objectz00(obj_t
		BgL_envz00_8065)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			return (obj_t) (BGl_z62iozd2timeoutzd2errorzd2nilzb0zz__objectz00());
		}
	}



/* &io-sigpipe-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62iozd2sigpipezd2errorzf3z91zz__objectz00(obj_t
		BgL_obj1970z00_319)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1970z00_319,
				BGl_z62iozd2sigpipezd2errorz62zz__objectz00);
		}
	}



/* _&io-sigpipe-error? */
	obj_t BGl__z62iozd2sigpipezd2errorzf3z91zz__objectz00(obj_t BgL_envz00_8055,
		obj_t BgL_obj1970z00_8056)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1970z00_8056,
					BGl_z62iozd2sigpipezd2errorz62zz__objectz00));
		}
	}



/* make-&io-sigpipe-error */
	BGL_EXPORTED_DEF BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_makezd2z62iozd2sigpipezd2errorzb0zz__objectz00(obj_t
		BgL_fname1921z00_323, obj_t BgL_location1922z00_324,
		obj_t BgL_stack1923z00_325, obj_t BgL_proc1924z00_326,
		obj_t BgL_msg1925z00_327, obj_t BgL_obj1926z00_328)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			{	/* Llib/object.scm 109 */
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1927z00_4856;

				{	/* Llib/object.scm 109 */
					BgL_z62iozd2sigpipezd2errorz62_bglt BgL_res3822z00_4865;

					{	/* Llib/object.scm 109 */
						BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1943z00_4857;

						BgL_new1943z00_4857 =
							((BgL_z62iozd2sigpipezd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2sigpipezd2errorz62_bgl))));
						{	/* Llib/object.scm 109 */
							long BgL_arg3117z00_4858;

							{	/* Llib/object.scm 109 */
								long BgL_res3821z00_4862;

								{	/* Llib/object.scm 109 */
									obj_t BgL_classz00_4859;

									BgL_classz00_4859 =
										BGl_z62iozd2sigpipezd2errorz62zz__objectz00;
									{	/* Llib/object.scm 109 */
										obj_t BgL_vectorz00_4860;

										int BgL_kz00_4861;

										BgL_vectorz00_4860 = BgL_classz00_4859;
										BgL_kz00_4861 = (int) (((long) 1));
										BgL_res3821z00_4862 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4860,
												BgL_kz00_4861));
								}}
								BgL_arg3117z00_4858 = BgL_res3821z00_4862;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1943z00_4857),
								BgL_arg3117z00_4858);
						}
						{	/* Llib/object.scm 109 */
							BgL_objectz00_bglt BgL_auxz00_11827;

							BgL_auxz00_11827 = (BgL_objectz00_bglt) (BgL_new1943z00_4857);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11827, BFALSE);
						}
						BgL_res3822z00_4865 = BgL_new1943z00_4857;
					}
					BgL_new1927z00_4856 = BgL_res3822z00_4865;
				}
				{	/* Llib/object.scm 109 */
					BgL_z62iozd2sigpipezd2errorz62_bglt BgL_res3823z00_4879;

					{	/* Llib/object.scm 109 */
						BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1935z00_4866;

						BgL_new1935z00_4866 = BgL_new1927z00_4856;
						{	/* Llib/object.scm 109 */
							obj_t BgL_fname1929z00_4873;

							obj_t BgL_location1930z00_4874;

							obj_t BgL_stack1931z00_4875;

							obj_t BgL_proc1932z00_4876;

							obj_t BgL_msg1933z00_4877;

							obj_t BgL_obj1934z00_4878;

							BgL_fname1929z00_4873 = BgL_fname1921z00_323;
							BgL_location1930z00_4874 = BgL_location1922z00_324;
							BgL_stack1931z00_4875 = BgL_stack1923z00_325;
							BgL_proc1932z00_4876 = BgL_proc1924z00_326;
							BgL_msg1933z00_4877 = BgL_msg1925z00_327;
							BgL_obj1934z00_4878 = BgL_obj1926z00_328;
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_4866))->BgL_fnamez00) =
								((obj_t) BgL_fname1929z00_4873), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_4866))->BgL_locationz00) =
								((obj_t) BgL_location1930z00_4874), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_4866))->BgL_stackz00) =
								((obj_t) BgL_stack1931z00_4875), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_4866))->BgL_procz00) =
								((obj_t) BgL_proc1932z00_4876), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_4866))->BgL_msgz00) =
								((obj_t) BgL_msg1933z00_4877), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_4866))->BgL_objz00) =
								((obj_t) BgL_obj1934z00_4878), BUNSPEC);
							BgL_res3823z00_4879 = BgL_new1935z00_4866;
					}} BgL_res3823z00_4879;
				}
				return BgL_new1927z00_4856;
			}
		}
	}



/* _make-&io-sigpipe-error */
	obj_t BGl__makezd2z62iozd2sigpipezd2errorzb0zz__objectz00(obj_t
		BgL_envz00_8046, obj_t BgL_fname1921z00_8047,
		obj_t BgL_location1922z00_8048, obj_t BgL_stack1923z00_8049,
		obj_t BgL_proc1924z00_8050, obj_t BgL_msg1925z00_8051,
		obj_t BgL_obj1926z00_8052)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			return
				(obj_t) (BGl_makezd2z62iozd2sigpipezd2errorzb0zz__objectz00
				(BgL_fname1921z00_8047, BgL_location1922z00_8048, BgL_stack1923z00_8049,
					BgL_proc1924z00_8050, BgL_msg1925z00_8051, BgL_obj1926z00_8052));
		}
	}



/* fill-&io-sigpipe-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_fillzd2z62iozd2sigpipezd2errorz12za2zz__objectz00
		(BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1935z00_329,
		obj_t BgL_fname1929z00_330, obj_t BgL_location1930z00_331,
		obj_t BgL_stack1931z00_332, obj_t BgL_proc1932z00_333,
		obj_t BgL_msg1933z00_334, obj_t BgL_obj1934z00_335)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			{	/* Llib/object.scm 109 */
				obj_t BgL_fname1929z00_8959;

				obj_t BgL_location1930z00_8960;

				obj_t BgL_stack1931z00_8961;

				obj_t BgL_proc1932z00_8962;

				obj_t BgL_msg1933z00_8963;

				obj_t BgL_obj1934z00_8964;

				BgL_fname1929z00_8959 = BgL_fname1929z00_330;
				BgL_location1930z00_8960 = BgL_location1930z00_331;
				BgL_stack1931z00_8961 = BgL_stack1931z00_332;
				BgL_proc1932z00_8962 = BgL_proc1932z00_333;
				BgL_msg1933z00_8963 = BgL_msg1933z00_334;
				BgL_obj1934z00_8964 = BgL_obj1934z00_335;
				((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_new1935z00_329))->
						BgL_fnamez00) = ((obj_t) BgL_fname1929z00_8959), BUNSPEC);
				((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_new1935z00_329))->
						BgL_locationz00) = ((obj_t) BgL_location1930z00_8960), BUNSPEC);
				((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_new1935z00_329))->
						BgL_stackz00) = ((obj_t) BgL_stack1931z00_8961), BUNSPEC);
				((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_new1935z00_329))->
						BgL_procz00) = ((obj_t) BgL_proc1932z00_8962), BUNSPEC);
				((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_new1935z00_329))->
						BgL_msgz00) = ((obj_t) BgL_msg1933z00_8963), BUNSPEC);
				((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_new1935z00_329))->
						BgL_objz00) = ((obj_t) BgL_obj1934z00_8964), BUNSPEC);
				return BgL_new1935z00_329;
			}
		}
	}



/* _fill-&io-sigpipe-error! */
	obj_t BGl__fillzd2z62iozd2sigpipezd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8167, obj_t BgL_new1935z00_8168, obj_t BgL_fname1929z00_8169,
		obj_t BgL_location1930z00_8170, obj_t BgL_stack1931z00_8171,
		obj_t BgL_proc1932z00_8172, obj_t BgL_msg1933z00_8173,
		obj_t BgL_obj1934z00_8174)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			{	/* Llib/object.scm 109 */
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_auxz00_11844;

				{	/* Llib/object.scm 109 */
					BgL_z62iozd2sigpipezd2errorz62_bglt BgL_res4511z00_8979;

					{	/* Llib/object.scm 109 */
						BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1935z00_8966;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1935z00_8168,
								BGl_z62iozd2sigpipezd2errorz62zz__objectz00))
							{	/* Llib/object.scm 109 */
								BgL_new1935z00_8966 =
									(BgL_z62iozd2sigpipezd2errorz62_bglt) (BgL_new1935z00_8168);
							}
						else
							{
								obj_t BgL_auxz00_11848;

								BgL_auxz00_11848 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3991)),
									BGl_string4391z00zz__objectz00,
									BGl_string4359z00zz__objectz00, BgL_new1935z00_8168);
								FAILURE(BgL_auxz00_11848, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 109 */
							obj_t BgL_fname1929z00_8973;

							obj_t BgL_location1930z00_8974;

							obj_t BgL_stack1931z00_8975;

							obj_t BgL_proc1932z00_8976;

							obj_t BgL_msg1933z00_8977;

							obj_t BgL_obj1934z00_8978;

							BgL_fname1929z00_8973 = BgL_fname1929z00_8169;
							BgL_location1930z00_8974 = BgL_location1930z00_8170;
							BgL_stack1931z00_8975 = BgL_stack1931z00_8171;
							BgL_proc1932z00_8976 = BgL_proc1932z00_8172;
							BgL_msg1933z00_8977 = BgL_msg1933z00_8173;
							BgL_obj1934z00_8978 = BgL_obj1934z00_8174;
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_8966))->BgL_fnamez00) =
								((obj_t) BgL_fname1929z00_8973), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_8966))->BgL_locationz00) =
								((obj_t) BgL_location1930z00_8974), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_8966))->BgL_stackz00) =
								((obj_t) BgL_stack1931z00_8975), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_8966))->BgL_procz00) =
								((obj_t) BgL_proc1932z00_8976), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_8966))->BgL_msgz00) =
								((obj_t) BgL_msg1933z00_8977), BUNSPEC);
							((((BgL_z62iozd2sigpipezd2errorz62_bglt)
										CREF(BgL_new1935z00_8966))->BgL_objz00) =
								((obj_t) BgL_obj1934z00_8978), BUNSPEC);
							BgL_res4511z00_8979 = BgL_new1935z00_8966;
					}}
					BgL_auxz00_11844 = BgL_res4511z00_8979;
				}
				return (obj_t) (BgL_auxz00_11844);
			}
		}
	}



/* %allocate-&io-sigpipe-error */
	BGL_EXPORTED_DEF BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2sigpipezd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			{	/* Llib/object.scm 109 */
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1943z00_8980;

				BgL_new1943z00_8980 =
					((BgL_z62iozd2sigpipezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2sigpipezd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1943z00_8980),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2sigpipezd2errorz62zz__objectz00));
				{	/* Llib/object.scm 109 */
					BgL_objectz00_bglt BgL_auxz00_11863;

					BgL_auxz00_11863 = (BgL_objectz00_bglt) (BgL_new1943z00_8980);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11863, BFALSE);
				}
				return BgL_new1943z00_8980;
			}
		}
	}



/* _%allocate-&io-sigpipe-error */
	obj_t BGl__z52allocatezd2z62iozd2sigpipezd2errorze2zz__objectz00(obj_t
		BgL_envz00_8053)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			{	/* Llib/object.scm 109 */
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_auxz00_11866;

				{	/* Llib/object.scm 109 */
					BgL_z62iozd2sigpipezd2errorz62_bglt BgL_res4512z00_8984;

					{	/* Llib/object.scm 109 */
						BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1943z00_8982;

						BgL_new1943z00_8982 =
							((BgL_z62iozd2sigpipezd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2sigpipezd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1943z00_8982),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2sigpipezd2errorz62zz__objectz00));
						{	/* Llib/object.scm 109 */
							BgL_objectz00_bglt BgL_auxz00_11871;

							BgL_auxz00_11871 = (BgL_objectz00_bglt) (BgL_new1943z00_8982);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11871, BFALSE);
						}
						BgL_res4512z00_8984 = BgL_new1943z00_8982;
					}
					BgL_auxz00_11866 = BgL_res4512z00_8984;
				}
				return (obj_t) (BgL_auxz00_11866);
			}
		}
	}



/* &io-sigpipe-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_z62iozd2sigpipezd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			if (
				(BGl_z52thezd2z62iozd2sigpipezd2errorzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 109 */
					{	/* Llib/object.scm 109 */
						BgL_z62iozd2sigpipezd2errorz62_bglt BgL_res3825z00_4898;

						{	/* Llib/object.scm 109 */
							BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1943z00_4890;

							BgL_new1943z00_4890 =
								((BgL_z62iozd2sigpipezd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2sigpipezd2errorz62_bgl))));
							{	/* Llib/object.scm 109 */
								long BgL_arg3117z00_4891;

								{	/* Llib/object.scm 109 */
									long BgL_res3824z00_4895;

									{	/* Llib/object.scm 109 */
										obj_t BgL_classz00_4892;

										BgL_classz00_4892 =
											BGl_z62iozd2sigpipezd2errorz62zz__objectz00;
										{	/* Llib/object.scm 109 */
											obj_t BgL_vectorz00_4893;

											int BgL_kz00_4894;

											BgL_vectorz00_4893 = BgL_classz00_4892;
											BgL_kz00_4894 = (int) (((long) 1));
											BgL_res3824z00_4895 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_4893,
													BgL_kz00_4894));
									}}
									BgL_arg3117z00_4891 = BgL_res3824z00_4895;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1943z00_4890),
									BgL_arg3117z00_4891);
							}
							{	/* Llib/object.scm 109 */
								BgL_objectz00_bglt BgL_auxz00_11883;

								BgL_auxz00_11883 = (BgL_objectz00_bglt) (BgL_new1943z00_4890);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11883, BFALSE);
							}
							BgL_res3825z00_4898 = BgL_new1943z00_4890;
						}
						BGl_z52thezd2z62iozd2sigpipezd2errorzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3825z00_4898);
					}
					{	/* Llib/object.scm 109 */
						BgL_z62iozd2sigpipezd2errorz62_bglt BgL_res3826z00_4912;

						{	/* Llib/object.scm 109 */
							BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1935z00_4899;

							BgL_new1935z00_4899 =
								(BgL_z62iozd2sigpipezd2errorz62_bglt)
								(BGl_z52thezd2z62iozd2sigpipezd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 109 */
								obj_t BgL_fname1929z00_4906;

								obj_t BgL_location1930z00_4907;

								obj_t BgL_stack1931z00_4908;

								obj_t BgL_proc1932z00_4909;

								obj_t BgL_msg1933z00_4910;

								obj_t BgL_obj1934z00_4911;

								BgL_fname1929z00_4906 = BUNSPEC;
								BgL_location1930z00_4907 = BUNSPEC;
								BgL_stack1931z00_4908 = BUNSPEC;
								BgL_proc1932z00_4909 = BUNSPEC;
								BgL_msg1933z00_4910 = BUNSPEC;
								BgL_obj1934z00_4911 = BUNSPEC;
								((((BgL_z62iozd2sigpipezd2errorz62_bglt)
											CREF(BgL_new1935z00_4899))->BgL_fnamez00) =
									((obj_t) BgL_fname1929z00_4906), BUNSPEC);
								((((BgL_z62iozd2sigpipezd2errorz62_bglt)
											CREF(BgL_new1935z00_4899))->BgL_locationz00) =
									((obj_t) BgL_location1930z00_4907), BUNSPEC);
								((((BgL_z62iozd2sigpipezd2errorz62_bglt)
											CREF(BgL_new1935z00_4899))->BgL_stackz00) =
									((obj_t) BgL_stack1931z00_4908), BUNSPEC);
								((((BgL_z62iozd2sigpipezd2errorz62_bglt)
											CREF(BgL_new1935z00_4899))->BgL_procz00) =
									((obj_t) BgL_proc1932z00_4909), BUNSPEC);
								((((BgL_z62iozd2sigpipezd2errorz62_bglt)
											CREF(BgL_new1935z00_4899))->BgL_msgz00) =
									((obj_t) BgL_msg1933z00_4910), BUNSPEC);
								((((BgL_z62iozd2sigpipezd2errorz62_bglt)
											CREF(BgL_new1935z00_4899))->BgL_objz00) =
									((obj_t) BgL_obj1934z00_4911), BUNSPEC);
								BgL_res3826z00_4912 = BgL_new1935z00_4899;
						}}
						(obj_t) (BgL_res3826z00_4912);
				}}
			else
				{	/* Llib/object.scm 109 */
					BFALSE;
				}
			return
				(BgL_z62iozd2sigpipezd2errorz62_bglt)
				(BGl_z52thezd2z62iozd2sigpipezd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&io-sigpipe-error-nil */
	obj_t BGl__z62iozd2sigpipezd2errorzd2nilzb0zz__objectz00(obj_t
		BgL_envz00_8054)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			return (obj_t) (BGl_z62iozd2sigpipezd2errorzd2nilzb0zz__objectz00());
		}
	}



/* &io-malformed-url-error? */
	BGL_EXPORTED_DEF bool_t
		BGl_z62iozd2malformedzd2urlzd2errorzf3z43zz__objectz00(obj_t
		BgL_obj1908z00_336)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1908z00_336,
				BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00);
		}
	}



/* _&io-malformed-url-error? */
	obj_t BGl__z62iozd2malformedzd2urlzd2errorzf3z43zz__objectz00(obj_t
		BgL_envz00_8044, obj_t BgL_obj1908z00_8045)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1908z00_8045,
					BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00));
		}
	}



/* make-&io-malformed-url-error */
	BGL_EXPORTED_DEF BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_makezd2z62iozd2malformedzd2urlzd2errorz62zz__objectz00(obj_t
		BgL_fname1859z00_340, obj_t BgL_location1860z00_341,
		obj_t BgL_stack1861z00_342, obj_t BgL_proc1862z00_343,
		obj_t BgL_msg1863z00_344, obj_t BgL_obj1864z00_345)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			{	/* Llib/object.scm 108 */
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1865z00_4913;

				{	/* Llib/object.scm 108 */
					BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_res3828z00_4922;

					{	/* Llib/object.scm 108 */
						BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1881z00_4914;

						BgL_new1881z00_4914 =
							((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl))));
						{	/* Llib/object.scm 108 */
							long BgL_arg3119z00_4915;

							{	/* Llib/object.scm 108 */
								long BgL_res3827z00_4919;

								{	/* Llib/object.scm 108 */
									obj_t BgL_classz00_4916;

									BgL_classz00_4916 =
										BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00;
									{	/* Llib/object.scm 108 */
										obj_t BgL_vectorz00_4917;

										int BgL_kz00_4918;

										BgL_vectorz00_4917 = BgL_classz00_4916;
										BgL_kz00_4918 = (int) (((long) 1));
										BgL_res3827z00_4919 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4917,
												BgL_kz00_4918));
								}}
								BgL_arg3119z00_4915 = BgL_res3827z00_4919;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1881z00_4914),
								BgL_arg3119z00_4915);
						}
						{	/* Llib/object.scm 108 */
							BgL_objectz00_bglt BgL_auxz00_11907;

							BgL_auxz00_11907 = (BgL_objectz00_bglt) (BgL_new1881z00_4914);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11907, BFALSE);
						}
						BgL_res3828z00_4922 = BgL_new1881z00_4914;
					}
					BgL_new1865z00_4913 = BgL_res3828z00_4922;
				}
				{	/* Llib/object.scm 108 */
					BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_res3829z00_4936;

					{	/* Llib/object.scm 108 */
						BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1873z00_4923;

						BgL_new1873z00_4923 = BgL_new1865z00_4913;
						{	/* Llib/object.scm 108 */
							obj_t BgL_fname1867z00_4930;

							obj_t BgL_location1868z00_4931;

							obj_t BgL_stack1869z00_4932;

							obj_t BgL_proc1870z00_4933;

							obj_t BgL_msg1871z00_4934;

							obj_t BgL_obj1872z00_4935;

							BgL_fname1867z00_4930 = BgL_fname1859z00_340;
							BgL_location1868z00_4931 = BgL_location1860z00_341;
							BgL_stack1869z00_4932 = BgL_stack1861z00_342;
							BgL_proc1870z00_4933 = BgL_proc1862z00_343;
							BgL_msg1871z00_4934 = BgL_msg1863z00_344;
							BgL_obj1872z00_4935 = BgL_obj1864z00_345;
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_4923))->BgL_fnamez00) =
								((obj_t) BgL_fname1867z00_4930), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_4923))->BgL_locationz00) =
								((obj_t) BgL_location1868z00_4931), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_4923))->BgL_stackz00) =
								((obj_t) BgL_stack1869z00_4932), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_4923))->BgL_procz00) =
								((obj_t) BgL_proc1870z00_4933), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_4923))->BgL_msgz00) =
								((obj_t) BgL_msg1871z00_4934), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_4923))->BgL_objz00) =
								((obj_t) BgL_obj1872z00_4935), BUNSPEC);
							BgL_res3829z00_4936 = BgL_new1873z00_4923;
					}} BgL_res3829z00_4936;
				}
				return BgL_new1865z00_4913;
			}
		}
	}



/* _make-&io-malformed-url-error */
	obj_t BGl__makezd2z62iozd2malformedzd2urlzd2errorz62zz__objectz00(obj_t
		BgL_envz00_8035, obj_t BgL_fname1859z00_8036,
		obj_t BgL_location1860z00_8037, obj_t BgL_stack1861z00_8038,
		obj_t BgL_proc1862z00_8039, obj_t BgL_msg1863z00_8040,
		obj_t BgL_obj1864z00_8041)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			return
				(obj_t) (BGl_makezd2z62iozd2malformedzd2urlzd2errorz62zz__objectz00
				(BgL_fname1859z00_8036, BgL_location1860z00_8037, BgL_stack1861z00_8038,
					BgL_proc1862z00_8039, BgL_msg1863z00_8040, BgL_obj1864z00_8041));
		}
	}



/* fill-&io-malformed-url-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_fillzd2z62iozd2malformedzd2urlzd2errorz12z70zz__objectz00
		(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1873z00_346,
		obj_t BgL_fname1867z00_347, obj_t BgL_location1868z00_348,
		obj_t BgL_stack1869z00_349, obj_t BgL_proc1870z00_350,
		obj_t BgL_msg1871z00_351, obj_t BgL_obj1872z00_352)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			{	/* Llib/object.scm 108 */
				obj_t BgL_fname1867z00_8986;

				obj_t BgL_location1868z00_8987;

				obj_t BgL_stack1869z00_8988;

				obj_t BgL_proc1870z00_8989;

				obj_t BgL_msg1871z00_8990;

				obj_t BgL_obj1872z00_8991;

				BgL_fname1867z00_8986 = BgL_fname1867z00_347;
				BgL_location1868z00_8987 = BgL_location1868z00_348;
				BgL_stack1869z00_8988 = BgL_stack1869z00_349;
				BgL_proc1870z00_8989 = BgL_proc1870z00_350;
				BgL_msg1871z00_8990 = BgL_msg1871z00_351;
				BgL_obj1872z00_8991 = BgL_obj1872z00_352;
				((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
							CREF(BgL_new1873z00_346))->BgL_fnamez00) =
					((obj_t) BgL_fname1867z00_8986), BUNSPEC);
				((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
							CREF(BgL_new1873z00_346))->BgL_locationz00) =
					((obj_t) BgL_location1868z00_8987), BUNSPEC);
				((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
							CREF(BgL_new1873z00_346))->BgL_stackz00) =
					((obj_t) BgL_stack1869z00_8988), BUNSPEC);
				((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
							CREF(BgL_new1873z00_346))->BgL_procz00) =
					((obj_t) BgL_proc1870z00_8989), BUNSPEC);
				((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
							CREF(BgL_new1873z00_346))->BgL_msgz00) =
					((obj_t) BgL_msg1871z00_8990), BUNSPEC);
				((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
							CREF(BgL_new1873z00_346))->BgL_objz00) =
					((obj_t) BgL_obj1872z00_8991), BUNSPEC);
				return BgL_new1873z00_346;
			}
		}
	}



/* _fill-&io-malformed-url-error! */
	obj_t BGl__fillzd2z62iozd2malformedzd2urlzd2errorz12z70zz__objectz00(obj_t
		BgL_envz00_8175, obj_t BgL_new1873z00_8176, obj_t BgL_fname1867z00_8177,
		obj_t BgL_location1868z00_8178, obj_t BgL_stack1869z00_8179,
		obj_t BgL_proc1870z00_8180, obj_t BgL_msg1871z00_8181,
		obj_t BgL_obj1872z00_8182)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			{	/* Llib/object.scm 108 */
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_auxz00_11924;

				{	/* Llib/object.scm 108 */
					BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_res4513z00_9006;

					{	/* Llib/object.scm 108 */
						BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1873z00_8993;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1873z00_8176,
								BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00))
							{	/* Llib/object.scm 108 */
								BgL_new1873z00_8993 =
									(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
									(BgL_new1873z00_8176);
							}
						else
							{
								obj_t BgL_auxz00_11928;

								BgL_auxz00_11928 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3943)),
									BGl_string4392z00zz__objectz00,
									BGl_string4357z00zz__objectz00, BgL_new1873z00_8176);
								FAILURE(BgL_auxz00_11928, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 108 */
							obj_t BgL_fname1867z00_9000;

							obj_t BgL_location1868z00_9001;

							obj_t BgL_stack1869z00_9002;

							obj_t BgL_proc1870z00_9003;

							obj_t BgL_msg1871z00_9004;

							obj_t BgL_obj1872z00_9005;

							BgL_fname1867z00_9000 = BgL_fname1867z00_8177;
							BgL_location1868z00_9001 = BgL_location1868z00_8178;
							BgL_stack1869z00_9002 = BgL_stack1869z00_8179;
							BgL_proc1870z00_9003 = BgL_proc1870z00_8180;
							BgL_msg1871z00_9004 = BgL_msg1871z00_8181;
							BgL_obj1872z00_9005 = BgL_obj1872z00_8182;
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_8993))->BgL_fnamez00) =
								((obj_t) BgL_fname1867z00_9000), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_8993))->BgL_locationz00) =
								((obj_t) BgL_location1868z00_9001), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_8993))->BgL_stackz00) =
								((obj_t) BgL_stack1869z00_9002), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_8993))->BgL_procz00) =
								((obj_t) BgL_proc1870z00_9003), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_8993))->BgL_msgz00) =
								((obj_t) BgL_msg1871z00_9004), BUNSPEC);
							((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										CREF(BgL_new1873z00_8993))->BgL_objz00) =
								((obj_t) BgL_obj1872z00_9005), BUNSPEC);
							BgL_res4513z00_9006 = BgL_new1873z00_8993;
					}}
					BgL_auxz00_11924 = BgL_res4513z00_9006;
				}
				return (obj_t) (BgL_auxz00_11924);
			}
		}
	}



/* %allocate-&io-malformed-url-error */
	BGL_EXPORTED_DEF BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_z52allocatezd2z62iozd2malformedzd2urlzd2errorz30zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			{	/* Llib/object.scm 108 */
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1881z00_9007;

				BgL_new1881z00_9007 =
					((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1881z00_9007),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00));
				{	/* Llib/object.scm 108 */
					BgL_objectz00_bglt BgL_auxz00_11943;

					BgL_auxz00_11943 = (BgL_objectz00_bglt) (BgL_new1881z00_9007);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11943, BFALSE);
				}
				return BgL_new1881z00_9007;
			}
		}
	}



/* _%allocate-&io-malformed-url-error */
	obj_t BGl__z52allocatezd2z62iozd2malformedzd2urlzd2errorz30zz__objectz00(obj_t
		BgL_envz00_8042)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			{	/* Llib/object.scm 108 */
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_auxz00_11946;

				{	/* Llib/object.scm 108 */
					BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_res4514z00_9011;

					{	/* Llib/object.scm 108 */
						BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1881z00_9009;

						BgL_new1881z00_9009 =
							((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1881z00_9009),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00));
						{	/* Llib/object.scm 108 */
							BgL_objectz00_bglt BgL_auxz00_11951;

							BgL_auxz00_11951 = (BgL_objectz00_bglt) (BgL_new1881z00_9009);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11951, BFALSE);
						}
						BgL_res4514z00_9011 = BgL_new1881z00_9009;
					}
					BgL_auxz00_11946 = BgL_res4514z00_9011;
				}
				return (obj_t) (BgL_auxz00_11946);
			}
		}
	}



/* &io-malformed-url-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_z62iozd2malformedzd2urlzd2errorzd2nilz62zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			if (
				(BGl_z52thezd2z62iozd2malformedzd2urlzd2errorzd2nilze2zz__objectz00 ==
					BUNSPEC))
				{	/* Llib/object.scm 108 */
					{	/* Llib/object.scm 108 */
						BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_res3831z00_4955;

						{	/* Llib/object.scm 108 */
							BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1881z00_4947;

							BgL_new1881z00_4947 =
								((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl))));
							{	/* Llib/object.scm 108 */
								long BgL_arg3119z00_4948;

								{	/* Llib/object.scm 108 */
									long BgL_res3830z00_4952;

									{	/* Llib/object.scm 108 */
										obj_t BgL_classz00_4949;

										BgL_classz00_4949 =
											BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00;
										{	/* Llib/object.scm 108 */
											obj_t BgL_vectorz00_4950;

											int BgL_kz00_4951;

											BgL_vectorz00_4950 = BgL_classz00_4949;
											BgL_kz00_4951 = (int) (((long) 1));
											BgL_res3830z00_4952 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_4950,
													BgL_kz00_4951));
									}}
									BgL_arg3119z00_4948 = BgL_res3830z00_4952;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1881z00_4947),
									BgL_arg3119z00_4948);
							}
							{	/* Llib/object.scm 108 */
								BgL_objectz00_bglt BgL_auxz00_11963;

								BgL_auxz00_11963 = (BgL_objectz00_bglt) (BgL_new1881z00_4947);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11963, BFALSE);
							}
							BgL_res3831z00_4955 = BgL_new1881z00_4947;
						}
						BGl_z52thezd2z62iozd2malformedzd2urlzd2errorzd2nilze2zz__objectz00 =
							(obj_t) (BgL_res3831z00_4955);
					}
					{	/* Llib/object.scm 108 */
						BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_res3832z00_4969;

						{	/* Llib/object.scm 108 */
							BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1873z00_4956;

							BgL_new1873z00_4956 =
								(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
								(BGl_z52thezd2z62iozd2malformedzd2urlzd2errorzd2nilze2zz__objectz00);
							{	/* Llib/object.scm 108 */
								obj_t BgL_fname1867z00_4963;

								obj_t BgL_location1868z00_4964;

								obj_t BgL_stack1869z00_4965;

								obj_t BgL_proc1870z00_4966;

								obj_t BgL_msg1871z00_4967;

								obj_t BgL_obj1872z00_4968;

								BgL_fname1867z00_4963 = BUNSPEC;
								BgL_location1868z00_4964 = BUNSPEC;
								BgL_stack1869z00_4965 = BUNSPEC;
								BgL_proc1870z00_4966 = BUNSPEC;
								BgL_msg1871z00_4967 = BUNSPEC;
								BgL_obj1872z00_4968 = BUNSPEC;
								((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
											CREF(BgL_new1873z00_4956))->BgL_fnamez00) =
									((obj_t) BgL_fname1867z00_4963), BUNSPEC);
								((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
											CREF(BgL_new1873z00_4956))->BgL_locationz00) =
									((obj_t) BgL_location1868z00_4964), BUNSPEC);
								((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
											CREF(BgL_new1873z00_4956))->BgL_stackz00) =
									((obj_t) BgL_stack1869z00_4965), BUNSPEC);
								((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
											CREF(BgL_new1873z00_4956))->BgL_procz00) =
									((obj_t) BgL_proc1870z00_4966), BUNSPEC);
								((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
											CREF(BgL_new1873z00_4956))->BgL_msgz00) =
									((obj_t) BgL_msg1871z00_4967), BUNSPEC);
								((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
											CREF(BgL_new1873z00_4956))->BgL_objz00) =
									((obj_t) BgL_obj1872z00_4968), BUNSPEC);
								BgL_res3832z00_4969 = BgL_new1873z00_4956;
						}}
						(obj_t) (BgL_res3832z00_4969);
				}}
			else
				{	/* Llib/object.scm 108 */
					BFALSE;
				}
			return
				(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
				(BGl_z52thezd2z62iozd2malformedzd2urlzd2errorzd2nilze2zz__objectz00);
		}
	}



/* _&io-malformed-url-error-nil */
	obj_t BGl__z62iozd2malformedzd2urlzd2errorzd2nilz62zz__objectz00(obj_t
		BgL_envz00_8043)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			return
				(obj_t) (BGl_z62iozd2malformedzd2urlzd2errorzd2nilz62zz__objectz00());
		}
	}



/* &io-unknown-host-error? */
	BGL_EXPORTED_DEF bool_t
		BGl_z62iozd2unknownzd2hostzd2errorzf3z43zz__objectz00(obj_t
		BgL_obj1846z00_353)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1846z00_353,
				BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00);
		}
	}



/* _&io-unknown-host-error? */
	obj_t BGl__z62iozd2unknownzd2hostzd2errorzf3z43zz__objectz00(obj_t
		BgL_envz00_8033, obj_t BgL_obj1846z00_8034)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1846z00_8034,
					BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00));
		}
	}



/* make-&io-unknown-host-error */
	BGL_EXPORTED_DEF BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_makezd2z62iozd2unknownzd2hostzd2errorz62zz__objectz00(obj_t
		BgL_fname1797z00_357, obj_t BgL_location1798z00_358,
		obj_t BgL_stack1799z00_359, obj_t BgL_proc1800z00_360,
		obj_t BgL_msg1801z00_361, obj_t BgL_obj1802z00_362)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			{	/* Llib/object.scm 107 */
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1803z00_4970;

				{	/* Llib/object.scm 107 */
					BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_res3834z00_4979;

					{	/* Llib/object.scm 107 */
						BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1819z00_4971;

						BgL_new1819z00_4971 =
							((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl))));
						{	/* Llib/object.scm 107 */
							long BgL_arg3121z00_4972;

							{	/* Llib/object.scm 107 */
								long BgL_res3833z00_4976;

								{	/* Llib/object.scm 107 */
									obj_t BgL_classz00_4973;

									BgL_classz00_4973 =
										BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00;
									{	/* Llib/object.scm 107 */
										obj_t BgL_vectorz00_4974;

										int BgL_kz00_4975;

										BgL_vectorz00_4974 = BgL_classz00_4973;
										BgL_kz00_4975 = (int) (((long) 1));
										BgL_res3833z00_4976 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_4974,
												BgL_kz00_4975));
								}}
								BgL_arg3121z00_4972 = BgL_res3833z00_4976;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1819z00_4971),
								BgL_arg3121z00_4972);
						}
						{	/* Llib/object.scm 107 */
							BgL_objectz00_bglt BgL_auxz00_11987;

							BgL_auxz00_11987 = (BgL_objectz00_bglt) (BgL_new1819z00_4971);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11987, BFALSE);
						}
						BgL_res3834z00_4979 = BgL_new1819z00_4971;
					}
					BgL_new1803z00_4970 = BgL_res3834z00_4979;
				}
				{	/* Llib/object.scm 107 */
					BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_res3835z00_4993;

					{	/* Llib/object.scm 107 */
						BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1811z00_4980;

						BgL_new1811z00_4980 = BgL_new1803z00_4970;
						{	/* Llib/object.scm 107 */
							obj_t BgL_fname1805z00_4987;

							obj_t BgL_location1806z00_4988;

							obj_t BgL_stack1807z00_4989;

							obj_t BgL_proc1808z00_4990;

							obj_t BgL_msg1809z00_4991;

							obj_t BgL_obj1810z00_4992;

							BgL_fname1805z00_4987 = BgL_fname1797z00_357;
							BgL_location1806z00_4988 = BgL_location1798z00_358;
							BgL_stack1807z00_4989 = BgL_stack1799z00_359;
							BgL_proc1808z00_4990 = BgL_proc1800z00_360;
							BgL_msg1809z00_4991 = BgL_msg1801z00_361;
							BgL_obj1810z00_4992 = BgL_obj1802z00_362;
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_4980))->BgL_fnamez00) =
								((obj_t) BgL_fname1805z00_4987), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_4980))->BgL_locationz00) =
								((obj_t) BgL_location1806z00_4988), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_4980))->BgL_stackz00) =
								((obj_t) BgL_stack1807z00_4989), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_4980))->BgL_procz00) =
								((obj_t) BgL_proc1808z00_4990), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_4980))->BgL_msgz00) =
								((obj_t) BgL_msg1809z00_4991), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_4980))->BgL_objz00) =
								((obj_t) BgL_obj1810z00_4992), BUNSPEC);
							BgL_res3835z00_4993 = BgL_new1811z00_4980;
					}} BgL_res3835z00_4993;
				}
				return BgL_new1803z00_4970;
			}
		}
	}



/* _make-&io-unknown-host-error */
	obj_t BGl__makezd2z62iozd2unknownzd2hostzd2errorz62zz__objectz00(obj_t
		BgL_envz00_8024, obj_t BgL_fname1797z00_8025,
		obj_t BgL_location1798z00_8026, obj_t BgL_stack1799z00_8027,
		obj_t BgL_proc1800z00_8028, obj_t BgL_msg1801z00_8029,
		obj_t BgL_obj1802z00_8030)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			return
				(obj_t) (BGl_makezd2z62iozd2unknownzd2hostzd2errorz62zz__objectz00
				(BgL_fname1797z00_8025, BgL_location1798z00_8026, BgL_stack1799z00_8027,
					BgL_proc1800z00_8028, BgL_msg1801z00_8029, BgL_obj1802z00_8030));
		}
	}



/* fill-&io-unknown-host-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_fillzd2z62iozd2unknownzd2hostzd2errorz12z70zz__objectz00
		(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1811z00_363,
		obj_t BgL_fname1805z00_364, obj_t BgL_location1806z00_365,
		obj_t BgL_stack1807z00_366, obj_t BgL_proc1808z00_367,
		obj_t BgL_msg1809z00_368, obj_t BgL_obj1810z00_369)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			{	/* Llib/object.scm 107 */
				obj_t BgL_fname1805z00_9013;

				obj_t BgL_location1806z00_9014;

				obj_t BgL_stack1807z00_9015;

				obj_t BgL_proc1808z00_9016;

				obj_t BgL_msg1809z00_9017;

				obj_t BgL_obj1810z00_9018;

				BgL_fname1805z00_9013 = BgL_fname1805z00_364;
				BgL_location1806z00_9014 = BgL_location1806z00_365;
				BgL_stack1807z00_9015 = BgL_stack1807z00_366;
				BgL_proc1808z00_9016 = BgL_proc1808z00_367;
				BgL_msg1809z00_9017 = BgL_msg1809z00_368;
				BgL_obj1810z00_9018 = BgL_obj1810z00_369;
				((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
							CREF(BgL_new1811z00_363))->BgL_fnamez00) =
					((obj_t) BgL_fname1805z00_9013), BUNSPEC);
				((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
							CREF(BgL_new1811z00_363))->BgL_locationz00) =
					((obj_t) BgL_location1806z00_9014), BUNSPEC);
				((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
							CREF(BgL_new1811z00_363))->BgL_stackz00) =
					((obj_t) BgL_stack1807z00_9015), BUNSPEC);
				((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
							CREF(BgL_new1811z00_363))->BgL_procz00) =
					((obj_t) BgL_proc1808z00_9016), BUNSPEC);
				((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
							CREF(BgL_new1811z00_363))->BgL_msgz00) =
					((obj_t) BgL_msg1809z00_9017), BUNSPEC);
				((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
							CREF(BgL_new1811z00_363))->BgL_objz00) =
					((obj_t) BgL_obj1810z00_9018), BUNSPEC);
				return BgL_new1811z00_363;
			}
		}
	}



/* _fill-&io-unknown-host-error! */
	obj_t BGl__fillzd2z62iozd2unknownzd2hostzd2errorz12z70zz__objectz00(obj_t
		BgL_envz00_8183, obj_t BgL_new1811z00_8184, obj_t BgL_fname1805z00_8185,
		obj_t BgL_location1806z00_8186, obj_t BgL_stack1807z00_8187,
		obj_t BgL_proc1808z00_8188, obj_t BgL_msg1809z00_8189,
		obj_t BgL_obj1810z00_8190)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			{	/* Llib/object.scm 107 */
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_auxz00_12004;

				{	/* Llib/object.scm 107 */
					BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_res4515z00_9033;

					{	/* Llib/object.scm 107 */
						BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1811z00_9020;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1811z00_8184,
								BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00))
							{	/* Llib/object.scm 107 */
								BgL_new1811z00_9020 =
									(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
									(BgL_new1811z00_8184);
							}
						else
							{
								obj_t BgL_auxz00_12008;

								BgL_auxz00_12008 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3896)),
									BGl_string4393z00zz__objectz00,
									BGl_string4355z00zz__objectz00, BgL_new1811z00_8184);
								FAILURE(BgL_auxz00_12008, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 107 */
							obj_t BgL_fname1805z00_9027;

							obj_t BgL_location1806z00_9028;

							obj_t BgL_stack1807z00_9029;

							obj_t BgL_proc1808z00_9030;

							obj_t BgL_msg1809z00_9031;

							obj_t BgL_obj1810z00_9032;

							BgL_fname1805z00_9027 = BgL_fname1805z00_8185;
							BgL_location1806z00_9028 = BgL_location1806z00_8186;
							BgL_stack1807z00_9029 = BgL_stack1807z00_8187;
							BgL_proc1808z00_9030 = BgL_proc1808z00_8188;
							BgL_msg1809z00_9031 = BgL_msg1809z00_8189;
							BgL_obj1810z00_9032 = BgL_obj1810z00_8190;
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_9020))->BgL_fnamez00) =
								((obj_t) BgL_fname1805z00_9027), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_9020))->BgL_locationz00) =
								((obj_t) BgL_location1806z00_9028), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_9020))->BgL_stackz00) =
								((obj_t) BgL_stack1807z00_9029), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_9020))->BgL_procz00) =
								((obj_t) BgL_proc1808z00_9030), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_9020))->BgL_msgz00) =
								((obj_t) BgL_msg1809z00_9031), BUNSPEC);
							((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										CREF(BgL_new1811z00_9020))->BgL_objz00) =
								((obj_t) BgL_obj1810z00_9032), BUNSPEC);
							BgL_res4515z00_9033 = BgL_new1811z00_9020;
					}}
					BgL_auxz00_12004 = BgL_res4515z00_9033;
				}
				return (obj_t) (BgL_auxz00_12004);
			}
		}
	}



/* %allocate-&io-unknown-host-error */
	BGL_EXPORTED_DEF BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_z52allocatezd2z62iozd2unknownzd2hostzd2errorz30zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			{	/* Llib/object.scm 107 */
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1819z00_9034;

				BgL_new1819z00_9034 =
					((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1819z00_9034),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00));
				{	/* Llib/object.scm 107 */
					BgL_objectz00_bglt BgL_auxz00_12023;

					BgL_auxz00_12023 = (BgL_objectz00_bglt) (BgL_new1819z00_9034);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12023, BFALSE);
				}
				return BgL_new1819z00_9034;
			}
		}
	}



/* _%allocate-&io-unknown-host-error */
	obj_t BGl__z52allocatezd2z62iozd2unknownzd2hostzd2errorz30zz__objectz00(obj_t
		BgL_envz00_8031)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			{	/* Llib/object.scm 107 */
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_auxz00_12026;

				{	/* Llib/object.scm 107 */
					BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_res4516z00_9038;

					{	/* Llib/object.scm 107 */
						BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1819z00_9036;

						BgL_new1819z00_9036 =
							((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1819z00_9036),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00));
						{	/* Llib/object.scm 107 */
							BgL_objectz00_bglt BgL_auxz00_12031;

							BgL_auxz00_12031 = (BgL_objectz00_bglt) (BgL_new1819z00_9036);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12031, BFALSE);
						}
						BgL_res4516z00_9038 = BgL_new1819z00_9036;
					}
					BgL_auxz00_12026 = BgL_res4516z00_9038;
				}
				return (obj_t) (BgL_auxz00_12026);
			}
		}
	}



/* &io-unknown-host-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_z62iozd2unknownzd2hostzd2errorzd2nilz62zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			if (
				(BGl_z52thezd2z62iozd2unknownzd2hostzd2errorzd2nilze2zz__objectz00 ==
					BUNSPEC))
				{	/* Llib/object.scm 107 */
					{	/* Llib/object.scm 107 */
						BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_res3837z00_5012;

						{	/* Llib/object.scm 107 */
							BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1819z00_5004;

							BgL_new1819z00_5004 =
								((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl))));
							{	/* Llib/object.scm 107 */
								long BgL_arg3121z00_5005;

								{	/* Llib/object.scm 107 */
									long BgL_res3836z00_5009;

									{	/* Llib/object.scm 107 */
										obj_t BgL_classz00_5006;

										BgL_classz00_5006 =
											BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00;
										{	/* Llib/object.scm 107 */
											obj_t BgL_vectorz00_5007;

											int BgL_kz00_5008;

											BgL_vectorz00_5007 = BgL_classz00_5006;
											BgL_kz00_5008 = (int) (((long) 1));
											BgL_res3836z00_5009 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5007,
													BgL_kz00_5008));
									}}
									BgL_arg3121z00_5005 = BgL_res3836z00_5009;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1819z00_5004),
									BgL_arg3121z00_5005);
							}
							{	/* Llib/object.scm 107 */
								BgL_objectz00_bglt BgL_auxz00_12043;

								BgL_auxz00_12043 = (BgL_objectz00_bglt) (BgL_new1819z00_5004);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12043, BFALSE);
							}
							BgL_res3837z00_5012 = BgL_new1819z00_5004;
						}
						BGl_z52thezd2z62iozd2unknownzd2hostzd2errorzd2nilze2zz__objectz00 =
							(obj_t) (BgL_res3837z00_5012);
					}
					{	/* Llib/object.scm 107 */
						BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_res3838z00_5026;

						{	/* Llib/object.scm 107 */
							BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1811z00_5013;

							BgL_new1811z00_5013 =
								(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
								(BGl_z52thezd2z62iozd2unknownzd2hostzd2errorzd2nilze2zz__objectz00);
							{	/* Llib/object.scm 107 */
								obj_t BgL_fname1805z00_5020;

								obj_t BgL_location1806z00_5021;

								obj_t BgL_stack1807z00_5022;

								obj_t BgL_proc1808z00_5023;

								obj_t BgL_msg1809z00_5024;

								obj_t BgL_obj1810z00_5025;

								BgL_fname1805z00_5020 = BUNSPEC;
								BgL_location1806z00_5021 = BUNSPEC;
								BgL_stack1807z00_5022 = BUNSPEC;
								BgL_proc1808z00_5023 = BUNSPEC;
								BgL_msg1809z00_5024 = BUNSPEC;
								BgL_obj1810z00_5025 = BUNSPEC;
								((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
											CREF(BgL_new1811z00_5013))->BgL_fnamez00) =
									((obj_t) BgL_fname1805z00_5020), BUNSPEC);
								((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
											CREF(BgL_new1811z00_5013))->BgL_locationz00) =
									((obj_t) BgL_location1806z00_5021), BUNSPEC);
								((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
											CREF(BgL_new1811z00_5013))->BgL_stackz00) =
									((obj_t) BgL_stack1807z00_5022), BUNSPEC);
								((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
											CREF(BgL_new1811z00_5013))->BgL_procz00) =
									((obj_t) BgL_proc1808z00_5023), BUNSPEC);
								((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
											CREF(BgL_new1811z00_5013))->BgL_msgz00) =
									((obj_t) BgL_msg1809z00_5024), BUNSPEC);
								((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
											CREF(BgL_new1811z00_5013))->BgL_objz00) =
									((obj_t) BgL_obj1810z00_5025), BUNSPEC);
								BgL_res3838z00_5026 = BgL_new1811z00_5013;
						}}
						(obj_t) (BgL_res3838z00_5026);
				}}
			else
				{	/* Llib/object.scm 107 */
					BFALSE;
				}
			return
				(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
				(BGl_z52thezd2z62iozd2unknownzd2hostzd2errorzd2nilze2zz__objectz00);
		}
	}



/* _&io-unknown-host-error-nil */
	obj_t BGl__z62iozd2unknownzd2hostzd2errorzd2nilz62zz__objectz00(obj_t
		BgL_envz00_8032)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			return
				(obj_t) (BGl_z62iozd2unknownzd2hostzd2errorzd2nilz62zz__objectz00());
		}
	}



/* &io-parse-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62iozd2parsezd2errorzf3z91zz__objectz00(obj_t
		BgL_obj1784z00_370)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1784z00_370,
				BGl_z62iozd2parsezd2errorz62zz__objectz00);
		}
	}



/* _&io-parse-error? */
	obj_t BGl__z62iozd2parsezd2errorzf3z91zz__objectz00(obj_t BgL_envz00_8022,
		obj_t BgL_obj1784z00_8023)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1784z00_8023,
					BGl_z62iozd2parsezd2errorz62zz__objectz00));
		}
	}



/* make-&io-parse-error */
	BGL_EXPORTED_DEF BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t BgL_fname1735z00_374,
		obj_t BgL_location1736z00_375, obj_t BgL_stack1737z00_376,
		obj_t BgL_proc1738z00_377, obj_t BgL_msg1739z00_378,
		obj_t BgL_obj1740z00_379)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			{	/* Llib/object.scm 106 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_new1741z00_5027;

				{	/* Llib/object.scm 106 */
					BgL_z62iozd2parsezd2errorz62_bglt BgL_res3840z00_5036;

					{	/* Llib/object.scm 106 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_new1757z00_5028;

						BgL_new1757z00_5028 =
							((BgL_z62iozd2parsezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2parsezd2errorz62_bgl))));
						{	/* Llib/object.scm 106 */
							long BgL_arg3123z00_5029;

							{	/* Llib/object.scm 106 */
								long BgL_res3839z00_5033;

								{	/* Llib/object.scm 106 */
									obj_t BgL_classz00_5030;

									BgL_classz00_5030 = BGl_z62iozd2parsezd2errorz62zz__objectz00;
									{	/* Llib/object.scm 106 */
										obj_t BgL_vectorz00_5031;

										int BgL_kz00_5032;

										BgL_vectorz00_5031 = BgL_classz00_5030;
										BgL_kz00_5032 = (int) (((long) 1));
										BgL_res3839z00_5033 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5031,
												BgL_kz00_5032));
								}}
								BgL_arg3123z00_5029 = BgL_res3839z00_5033;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1757z00_5028),
								BgL_arg3123z00_5029);
						}
						{	/* Llib/object.scm 106 */
							BgL_objectz00_bglt BgL_auxz00_12067;

							BgL_auxz00_12067 = (BgL_objectz00_bglt) (BgL_new1757z00_5028);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12067, BFALSE);
						}
						BgL_res3840z00_5036 = BgL_new1757z00_5028;
					}
					BgL_new1741z00_5027 = BgL_res3840z00_5036;
				}
				{	/* Llib/object.scm 106 */
					BgL_z62iozd2parsezd2errorz62_bglt BgL_res3841z00_5050;

					{	/* Llib/object.scm 106 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_new1749z00_5037;

						BgL_new1749z00_5037 = BgL_new1741z00_5027;
						{	/* Llib/object.scm 106 */
							obj_t BgL_fname1743z00_5044;

							obj_t BgL_location1744z00_5045;

							obj_t BgL_stack1745z00_5046;

							obj_t BgL_proc1746z00_5047;

							obj_t BgL_msg1747z00_5048;

							obj_t BgL_obj1748z00_5049;

							BgL_fname1743z00_5044 = BgL_fname1735z00_374;
							BgL_location1744z00_5045 = BgL_location1736z00_375;
							BgL_stack1745z00_5046 = BgL_stack1737z00_376;
							BgL_proc1746z00_5047 = BgL_proc1738z00_377;
							BgL_msg1747z00_5048 = BgL_msg1739z00_378;
							BgL_obj1748z00_5049 = BgL_obj1740z00_379;
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_5037))->BgL_fnamez00) =
								((obj_t) BgL_fname1743z00_5044), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_5037))->BgL_locationz00) =
								((obj_t) BgL_location1744z00_5045), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_5037))->BgL_stackz00) =
								((obj_t) BgL_stack1745z00_5046), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_5037))->BgL_procz00) =
								((obj_t) BgL_proc1746z00_5047), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_5037))->BgL_msgz00) =
								((obj_t) BgL_msg1747z00_5048), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_5037))->BgL_objz00) =
								((obj_t) BgL_obj1748z00_5049), BUNSPEC);
							BgL_res3841z00_5050 = BgL_new1749z00_5037;
					}} BgL_res3841z00_5050;
				}
				return BgL_new1741z00_5027;
			}
		}
	}



/* _make-&io-parse-error */
	obj_t BGl__makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t BgL_envz00_8013,
		obj_t BgL_fname1735z00_8014, obj_t BgL_location1736z00_8015,
		obj_t BgL_stack1737z00_8016, obj_t BgL_proc1738z00_8017,
		obj_t BgL_msg1739z00_8018, obj_t BgL_obj1740z00_8019)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			return
				(obj_t) (BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
				(BgL_fname1735z00_8014, BgL_location1736z00_8015, BgL_stack1737z00_8016,
					BgL_proc1738z00_8017, BgL_msg1739z00_8018, BgL_obj1740z00_8019));
		}
	}



/* fill-&io-parse-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2parsezd2errorz62_bglt
		BGl_fillzd2z62iozd2parsezd2errorz12za2zz__objectz00
		(BgL_z62iozd2parsezd2errorz62_bglt BgL_new1749z00_380,
		obj_t BgL_fname1743z00_381, obj_t BgL_location1744z00_382,
		obj_t BgL_stack1745z00_383, obj_t BgL_proc1746z00_384,
		obj_t BgL_msg1747z00_385, obj_t BgL_obj1748z00_386)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			{	/* Llib/object.scm 106 */
				obj_t BgL_fname1743z00_9040;

				obj_t BgL_location1744z00_9041;

				obj_t BgL_stack1745z00_9042;

				obj_t BgL_proc1746z00_9043;

				obj_t BgL_msg1747z00_9044;

				obj_t BgL_obj1748z00_9045;

				BgL_fname1743z00_9040 = BgL_fname1743z00_381;
				BgL_location1744z00_9041 = BgL_location1744z00_382;
				BgL_stack1745z00_9042 = BgL_stack1745z00_383;
				BgL_proc1746z00_9043 = BgL_proc1746z00_384;
				BgL_msg1747z00_9044 = BgL_msg1747z00_385;
				BgL_obj1748z00_9045 = BgL_obj1748z00_386;
				((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_new1749z00_380))->
						BgL_fnamez00) = ((obj_t) BgL_fname1743z00_9040), BUNSPEC);
				((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_new1749z00_380))->
						BgL_locationz00) = ((obj_t) BgL_location1744z00_9041), BUNSPEC);
				((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_new1749z00_380))->
						BgL_stackz00) = ((obj_t) BgL_stack1745z00_9042), BUNSPEC);
				((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_new1749z00_380))->
						BgL_procz00) = ((obj_t) BgL_proc1746z00_9043), BUNSPEC);
				((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_new1749z00_380))->
						BgL_msgz00) = ((obj_t) BgL_msg1747z00_9044), BUNSPEC);
				((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_new1749z00_380))->
						BgL_objz00) = ((obj_t) BgL_obj1748z00_9045), BUNSPEC);
				return BgL_new1749z00_380;
			}
		}
	}



/* _fill-&io-parse-error! */
	obj_t BGl__fillzd2z62iozd2parsezd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8191, obj_t BgL_new1749z00_8192, obj_t BgL_fname1743z00_8193,
		obj_t BgL_location1744z00_8194, obj_t BgL_stack1745z00_8195,
		obj_t BgL_proc1746z00_8196, obj_t BgL_msg1747z00_8197,
		obj_t BgL_obj1748z00_8198)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			{	/* Llib/object.scm 106 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_auxz00_12084;

				{	/* Llib/object.scm 106 */
					BgL_z62iozd2parsezd2errorz62_bglt BgL_res4517z00_9060;

					{	/* Llib/object.scm 106 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_new1749z00_9047;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1749z00_8192,
								BGl_z62iozd2parsezd2errorz62zz__objectz00))
							{	/* Llib/object.scm 106 */
								BgL_new1749z00_9047 =
									(BgL_z62iozd2parsezd2errorz62_bglt) (BgL_new1749z00_8192);
							}
						else
							{
								obj_t BgL_auxz00_12088;

								BgL_auxz00_12088 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3856)),
									BGl_string4394z00zz__objectz00,
									BGl_string4353z00zz__objectz00, BgL_new1749z00_8192);
								FAILURE(BgL_auxz00_12088, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 106 */
							obj_t BgL_fname1743z00_9054;

							obj_t BgL_location1744z00_9055;

							obj_t BgL_stack1745z00_9056;

							obj_t BgL_proc1746z00_9057;

							obj_t BgL_msg1747z00_9058;

							obj_t BgL_obj1748z00_9059;

							BgL_fname1743z00_9054 = BgL_fname1743z00_8193;
							BgL_location1744z00_9055 = BgL_location1744z00_8194;
							BgL_stack1745z00_9056 = BgL_stack1745z00_8195;
							BgL_proc1746z00_9057 = BgL_proc1746z00_8196;
							BgL_msg1747z00_9058 = BgL_msg1747z00_8197;
							BgL_obj1748z00_9059 = BgL_obj1748z00_8198;
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_9047))->BgL_fnamez00) =
								((obj_t) BgL_fname1743z00_9054), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_9047))->BgL_locationz00) =
								((obj_t) BgL_location1744z00_9055), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_9047))->BgL_stackz00) =
								((obj_t) BgL_stack1745z00_9056), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_9047))->BgL_procz00) =
								((obj_t) BgL_proc1746z00_9057), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_9047))->BgL_msgz00) =
								((obj_t) BgL_msg1747z00_9058), BUNSPEC);
							((((BgL_z62iozd2parsezd2errorz62_bglt)
										CREF(BgL_new1749z00_9047))->BgL_objz00) =
								((obj_t) BgL_obj1748z00_9059), BUNSPEC);
							BgL_res4517z00_9060 = BgL_new1749z00_9047;
					}}
					BgL_auxz00_12084 = BgL_res4517z00_9060;
				}
				return (obj_t) (BgL_auxz00_12084);
			}
		}
	}



/* %allocate-&io-parse-error */
	BGL_EXPORTED_DEF BgL_z62iozd2parsezd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2parsezd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			{	/* Llib/object.scm 106 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_new1757z00_9061;

				BgL_new1757z00_9061 =
					((BgL_z62iozd2parsezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2parsezd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1757z00_9061),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2parsezd2errorz62zz__objectz00));
				{	/* Llib/object.scm 106 */
					BgL_objectz00_bglt BgL_auxz00_12103;

					BgL_auxz00_12103 = (BgL_objectz00_bglt) (BgL_new1757z00_9061);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12103, BFALSE);
				}
				return BgL_new1757z00_9061;
			}
		}
	}



/* _%allocate-&io-parse-error */
	obj_t BGl__z52allocatezd2z62iozd2parsezd2errorze2zz__objectz00(obj_t
		BgL_envz00_8020)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			{	/* Llib/object.scm 106 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_auxz00_12106;

				{	/* Llib/object.scm 106 */
					BgL_z62iozd2parsezd2errorz62_bglt BgL_res4518z00_9065;

					{	/* Llib/object.scm 106 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_new1757z00_9063;

						BgL_new1757z00_9063 =
							((BgL_z62iozd2parsezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2parsezd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1757z00_9063),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2parsezd2errorz62zz__objectz00));
						{	/* Llib/object.scm 106 */
							BgL_objectz00_bglt BgL_auxz00_12111;

							BgL_auxz00_12111 = (BgL_objectz00_bglt) (BgL_new1757z00_9063);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12111, BFALSE);
						}
						BgL_res4518z00_9065 = BgL_new1757z00_9063;
					}
					BgL_auxz00_12106 = BgL_res4518z00_9065;
				}
				return (obj_t) (BgL_auxz00_12106);
			}
		}
	}



/* &io-parse-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2parsezd2errorz62_bglt
		BGl_z62iozd2parsezd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			if ((BGl_z52thezd2z62iozd2parsezd2errorzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 106 */
					{	/* Llib/object.scm 106 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_res3843z00_5069;

						{	/* Llib/object.scm 106 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_new1757z00_5061;

							BgL_new1757z00_5061 =
								((BgL_z62iozd2parsezd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2parsezd2errorz62_bgl))));
							{	/* Llib/object.scm 106 */
								long BgL_arg3123z00_5062;

								{	/* Llib/object.scm 106 */
									long BgL_res3842z00_5066;

									{	/* Llib/object.scm 106 */
										obj_t BgL_classz00_5063;

										BgL_classz00_5063 =
											BGl_z62iozd2parsezd2errorz62zz__objectz00;
										{	/* Llib/object.scm 106 */
											obj_t BgL_vectorz00_5064;

											int BgL_kz00_5065;

											BgL_vectorz00_5064 = BgL_classz00_5063;
											BgL_kz00_5065 = (int) (((long) 1));
											BgL_res3842z00_5066 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5064,
													BgL_kz00_5065));
									}}
									BgL_arg3123z00_5062 = BgL_res3842z00_5066;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1757z00_5061),
									BgL_arg3123z00_5062);
							}
							{	/* Llib/object.scm 106 */
								BgL_objectz00_bglt BgL_auxz00_12123;

								BgL_auxz00_12123 = (BgL_objectz00_bglt) (BgL_new1757z00_5061);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12123, BFALSE);
							}
							BgL_res3843z00_5069 = BgL_new1757z00_5061;
						}
						BGl_z52thezd2z62iozd2parsezd2errorzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3843z00_5069);
					}
					{	/* Llib/object.scm 106 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_res3844z00_5083;

						{	/* Llib/object.scm 106 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_new1749z00_5070;

							BgL_new1749z00_5070 =
								(BgL_z62iozd2parsezd2errorz62_bglt)
								(BGl_z52thezd2z62iozd2parsezd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 106 */
								obj_t BgL_fname1743z00_5077;

								obj_t BgL_location1744z00_5078;

								obj_t BgL_stack1745z00_5079;

								obj_t BgL_proc1746z00_5080;

								obj_t BgL_msg1747z00_5081;

								obj_t BgL_obj1748z00_5082;

								BgL_fname1743z00_5077 = BUNSPEC;
								BgL_location1744z00_5078 = BUNSPEC;
								BgL_stack1745z00_5079 = BUNSPEC;
								BgL_proc1746z00_5080 = BUNSPEC;
								BgL_msg1747z00_5081 = BUNSPEC;
								BgL_obj1748z00_5082 = BUNSPEC;
								((((BgL_z62iozd2parsezd2errorz62_bglt)
											CREF(BgL_new1749z00_5070))->BgL_fnamez00) =
									((obj_t) BgL_fname1743z00_5077), BUNSPEC);
								((((BgL_z62iozd2parsezd2errorz62_bglt)
											CREF(BgL_new1749z00_5070))->BgL_locationz00) =
									((obj_t) BgL_location1744z00_5078), BUNSPEC);
								((((BgL_z62iozd2parsezd2errorz62_bglt)
											CREF(BgL_new1749z00_5070))->BgL_stackz00) =
									((obj_t) BgL_stack1745z00_5079), BUNSPEC);
								((((BgL_z62iozd2parsezd2errorz62_bglt)
											CREF(BgL_new1749z00_5070))->BgL_procz00) =
									((obj_t) BgL_proc1746z00_5080), BUNSPEC);
								((((BgL_z62iozd2parsezd2errorz62_bglt)
											CREF(BgL_new1749z00_5070))->BgL_msgz00) =
									((obj_t) BgL_msg1747z00_5081), BUNSPEC);
								((((BgL_z62iozd2parsezd2errorz62_bglt)
											CREF(BgL_new1749z00_5070))->BgL_objz00) =
									((obj_t) BgL_obj1748z00_5082), BUNSPEC);
								BgL_res3844z00_5083 = BgL_new1749z00_5070;
						}}
						(obj_t) (BgL_res3844z00_5083);
				}}
			else
				{	/* Llib/object.scm 106 */
					BFALSE;
				}
			return
				(BgL_z62iozd2parsezd2errorz62_bglt)
				(BGl_z52thezd2z62iozd2parsezd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&io-parse-error-nil */
	obj_t BGl__z62iozd2parsezd2errorzd2nilzb0zz__objectz00(obj_t BgL_envz00_8021)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			return (obj_t) (BGl_z62iozd2parsezd2errorzd2nilzb0zz__objectz00());
		}
	}



/* &io-file-not-found-error? */
	BGL_EXPORTED_DEF bool_t
		BGl_z62iozd2filezd2notzd2foundzd2errorzf3z91zz__objectz00(obj_t
		BgL_obj1721z00_387)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1721z00_387,
				BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00);
		}
	}



/* _&io-file-not-found-error? */
	obj_t BGl__z62iozd2filezd2notzd2foundzd2errorzf3z91zz__objectz00(obj_t
		BgL_envz00_8011, obj_t BgL_obj1721z00_8012)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1721z00_8012,
					BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00));
		}
	}



/* make-&io-file-not-found-error */
	BGL_EXPORTED_DEF BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00(obj_t
		BgL_fname1672z00_391, obj_t BgL_location1673z00_392,
		obj_t BgL_stack1674z00_393, obj_t BgL_proc1675z00_394,
		obj_t BgL_msg1676z00_395, obj_t BgL_obj1677z00_396)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			{	/* Llib/object.scm 105 */
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1678z00_5084;

				{	/* Llib/object.scm 105 */
					BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_res3846z00_5093;

					{	/* Llib/object.scm 105 */
						BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1694z00_5085;

						BgL_new1694z00_5085 =
							((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl))));
						{	/* Llib/object.scm 105 */
							long BgL_arg3125z00_5086;

							{	/* Llib/object.scm 105 */
								long BgL_res3845z00_5090;

								{	/* Llib/object.scm 105 */
									obj_t BgL_classz00_5087;

									BgL_classz00_5087 =
										BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00;
									{	/* Llib/object.scm 105 */
										obj_t BgL_vectorz00_5088;

										int BgL_kz00_5089;

										BgL_vectorz00_5088 = BgL_classz00_5087;
										BgL_kz00_5089 = (int) (((long) 1));
										BgL_res3845z00_5090 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5088,
												BgL_kz00_5089));
								}}
								BgL_arg3125z00_5086 = BgL_res3845z00_5090;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1694z00_5085),
								BgL_arg3125z00_5086);
						}
						{	/* Llib/object.scm 105 */
							BgL_objectz00_bglt BgL_auxz00_12147;

							BgL_auxz00_12147 = (BgL_objectz00_bglt) (BgL_new1694z00_5085);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12147, BFALSE);
						}
						BgL_res3846z00_5093 = BgL_new1694z00_5085;
					}
					BgL_new1678z00_5084 = BgL_res3846z00_5093;
				}
				{	/* Llib/object.scm 105 */
					BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_res3847z00_5107;

					{	/* Llib/object.scm 105 */
						BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1686z00_5094;

						BgL_new1686z00_5094 = BgL_new1678z00_5084;
						{	/* Llib/object.scm 105 */
							obj_t BgL_fname1680z00_5101;

							obj_t BgL_location1681z00_5102;

							obj_t BgL_stack1682z00_5103;

							obj_t BgL_proc1683z00_5104;

							obj_t BgL_msg1684z00_5105;

							obj_t BgL_obj1685z00_5106;

							BgL_fname1680z00_5101 = BgL_fname1672z00_391;
							BgL_location1681z00_5102 = BgL_location1673z00_392;
							BgL_stack1682z00_5103 = BgL_stack1674z00_393;
							BgL_proc1683z00_5104 = BgL_proc1675z00_394;
							BgL_msg1684z00_5105 = BgL_msg1676z00_395;
							BgL_obj1685z00_5106 = BgL_obj1677z00_396;
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_5094))->BgL_fnamez00) =
								((obj_t) BgL_fname1680z00_5101), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_5094))->BgL_locationz00) =
								((obj_t) BgL_location1681z00_5102), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_5094))->BgL_stackz00) =
								((obj_t) BgL_stack1682z00_5103), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_5094))->BgL_procz00) =
								((obj_t) BgL_proc1683z00_5104), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_5094))->BgL_msgz00) =
								((obj_t) BgL_msg1684z00_5105), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_5094))->BgL_objz00) =
								((obj_t) BgL_obj1685z00_5106), BUNSPEC);
							BgL_res3847z00_5107 = BgL_new1686z00_5094;
					}} BgL_res3847z00_5107;
				}
				return BgL_new1678z00_5084;
			}
		}
	}



/* _make-&io-file-not-found-error */
	obj_t BGl__makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00(obj_t
		BgL_envz00_8002, obj_t BgL_fname1672z00_8003,
		obj_t BgL_location1673z00_8004, obj_t BgL_stack1674z00_8005,
		obj_t BgL_proc1675z00_8006, obj_t BgL_msg1676z00_8007,
		obj_t BgL_obj1677z00_8008)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			return
				(obj_t) (BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00
				(BgL_fname1672z00_8003, BgL_location1673z00_8004, BgL_stack1674z00_8005,
					BgL_proc1675z00_8006, BgL_msg1676z00_8007, BgL_obj1677z00_8008));
		}
	}



/* fill-&io-file-not-found-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_fillzd2z62iozd2filezd2notzd2foundzd2errorz12za2zz__objectz00
		(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1686z00_397,
		obj_t BgL_fname1680z00_398, obj_t BgL_location1681z00_399,
		obj_t BgL_stack1682z00_400, obj_t BgL_proc1683z00_401,
		obj_t BgL_msg1684z00_402, obj_t BgL_obj1685z00_403)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			{	/* Llib/object.scm 105 */
				obj_t BgL_fname1680z00_9067;

				obj_t BgL_location1681z00_9068;

				obj_t BgL_stack1682z00_9069;

				obj_t BgL_proc1683z00_9070;

				obj_t BgL_msg1684z00_9071;

				obj_t BgL_obj1685z00_9072;

				BgL_fname1680z00_9067 = BgL_fname1680z00_398;
				BgL_location1681z00_9068 = BgL_location1681z00_399;
				BgL_stack1682z00_9069 = BgL_stack1682z00_400;
				BgL_proc1683z00_9070 = BgL_proc1683z00_401;
				BgL_msg1684z00_9071 = BgL_msg1684z00_402;
				BgL_obj1685z00_9072 = BgL_obj1685z00_403;
				((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
							CREF(BgL_new1686z00_397))->BgL_fnamez00) =
					((obj_t) BgL_fname1680z00_9067), BUNSPEC);
				((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
							CREF(BgL_new1686z00_397))->BgL_locationz00) =
					((obj_t) BgL_location1681z00_9068), BUNSPEC);
				((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
							CREF(BgL_new1686z00_397))->BgL_stackz00) =
					((obj_t) BgL_stack1682z00_9069), BUNSPEC);
				((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
							CREF(BgL_new1686z00_397))->BgL_procz00) =
					((obj_t) BgL_proc1683z00_9070), BUNSPEC);
				((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
							CREF(BgL_new1686z00_397))->BgL_msgz00) =
					((obj_t) BgL_msg1684z00_9071), BUNSPEC);
				((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
							CREF(BgL_new1686z00_397))->BgL_objz00) =
					((obj_t) BgL_obj1685z00_9072), BUNSPEC);
				return BgL_new1686z00_397;
			}
		}
	}



/* _fill-&io-file-not-found-error! */
	obj_t BGl__fillzd2z62iozd2filezd2notzd2foundzd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8199, obj_t BgL_new1686z00_8200, obj_t BgL_fname1680z00_8201,
		obj_t BgL_location1681z00_8202, obj_t BgL_stack1682z00_8203,
		obj_t BgL_proc1683z00_8204, obj_t BgL_msg1684z00_8205,
		obj_t BgL_obj1685z00_8206)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			{	/* Llib/object.scm 105 */
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_auxz00_12164;

				{	/* Llib/object.scm 105 */
					BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_res4519z00_9087;

					{	/* Llib/object.scm 105 */
						BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1686z00_9074;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1686z00_8200,
								BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00))
							{	/* Llib/object.scm 105 */
								BgL_new1686z00_9074 =
									(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
									(BgL_new1686z00_8200);
							}
						else
							{
								obj_t BgL_auxz00_12168;

								BgL_auxz00_12168 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3807)),
									BGl_string4395z00zz__objectz00,
									BGl_string4351z00zz__objectz00, BgL_new1686z00_8200);
								FAILURE(BgL_auxz00_12168, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 105 */
							obj_t BgL_fname1680z00_9081;

							obj_t BgL_location1681z00_9082;

							obj_t BgL_stack1682z00_9083;

							obj_t BgL_proc1683z00_9084;

							obj_t BgL_msg1684z00_9085;

							obj_t BgL_obj1685z00_9086;

							BgL_fname1680z00_9081 = BgL_fname1680z00_8201;
							BgL_location1681z00_9082 = BgL_location1681z00_8202;
							BgL_stack1682z00_9083 = BgL_stack1682z00_8203;
							BgL_proc1683z00_9084 = BgL_proc1683z00_8204;
							BgL_msg1684z00_9085 = BgL_msg1684z00_8205;
							BgL_obj1685z00_9086 = BgL_obj1685z00_8206;
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_9074))->BgL_fnamez00) =
								((obj_t) BgL_fname1680z00_9081), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_9074))->BgL_locationz00) =
								((obj_t) BgL_location1681z00_9082), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_9074))->BgL_stackz00) =
								((obj_t) BgL_stack1682z00_9083), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_9074))->BgL_procz00) =
								((obj_t) BgL_proc1683z00_9084), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_9074))->BgL_msgz00) =
								((obj_t) BgL_msg1684z00_9085), BUNSPEC);
							((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										CREF(BgL_new1686z00_9074))->BgL_objz00) =
								((obj_t) BgL_obj1685z00_9086), BUNSPEC);
							BgL_res4519z00_9087 = BgL_new1686z00_9074;
					}}
					BgL_auxz00_12164 = BgL_res4519z00_9087;
				}
				return (obj_t) (BgL_auxz00_12164);
			}
		}
	}



/* %allocate-&io-file-not-found-error */
	BGL_EXPORTED_DEF BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2filezd2notzd2foundzd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			{	/* Llib/object.scm 105 */
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1694z00_9088;

				BgL_new1694z00_9088 =
					((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1694z00_9088),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00));
				{	/* Llib/object.scm 105 */
					BgL_objectz00_bglt BgL_auxz00_12183;

					BgL_auxz00_12183 = (BgL_objectz00_bglt) (BgL_new1694z00_9088);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12183, BFALSE);
				}
				return BgL_new1694z00_9088;
			}
		}
	}



/* _%allocate-&io-file-not-found-error */
	obj_t
		BGl__z52allocatezd2z62iozd2filezd2notzd2foundzd2errorze2zz__objectz00(obj_t
		BgL_envz00_8009)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			{	/* Llib/object.scm 105 */
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_auxz00_12186;

				{	/* Llib/object.scm 105 */
					BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_res4520z00_9092;

					{	/* Llib/object.scm 105 */
						BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1694z00_9090;

						BgL_new1694z00_9090 =
							((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1694z00_9090),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00));
						{	/* Llib/object.scm 105 */
							BgL_objectz00_bglt BgL_auxz00_12191;

							BgL_auxz00_12191 = (BgL_objectz00_bglt) (BgL_new1694z00_9090);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12191, BFALSE);
						}
						BgL_res4520z00_9092 = BgL_new1694z00_9090;
					}
					BgL_auxz00_12186 = BgL_res4520z00_9092;
				}
				return (obj_t) (BgL_auxz00_12186);
			}
		}
	}



/* &io-file-not-found-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_z62iozd2filezd2notzd2foundzd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			if (
				(BGl_z52thezd2z62iozd2filezd2notzd2foundzd2errorzd2nilz30zz__objectz00
					== BUNSPEC))
				{	/* Llib/object.scm 105 */
					{	/* Llib/object.scm 105 */
						BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_res3849z00_5126;

						{	/* Llib/object.scm 105 */
							BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
								BgL_new1694z00_5118;
							BgL_new1694z00_5118 =
								((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl))));
							{	/* Llib/object.scm 105 */
								long BgL_arg3125z00_5119;

								{	/* Llib/object.scm 105 */
									long BgL_res3848z00_5123;

									{	/* Llib/object.scm 105 */
										obj_t BgL_classz00_5120;

										BgL_classz00_5120 =
											BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00;
										{	/* Llib/object.scm 105 */
											obj_t BgL_vectorz00_5121;

											int BgL_kz00_5122;

											BgL_vectorz00_5121 = BgL_classz00_5120;
											BgL_kz00_5122 = (int) (((long) 1));
											BgL_res3848z00_5123 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5121,
													BgL_kz00_5122));
									}}
									BgL_arg3125z00_5119 = BgL_res3848z00_5123;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1694z00_5118),
									BgL_arg3125z00_5119);
							}
							{	/* Llib/object.scm 105 */
								BgL_objectz00_bglt BgL_auxz00_12203;

								BgL_auxz00_12203 = (BgL_objectz00_bglt) (BgL_new1694z00_5118);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12203, BFALSE);
							}
							BgL_res3849z00_5126 = BgL_new1694z00_5118;
						}
						BGl_z52thezd2z62iozd2filezd2notzd2foundzd2errorzd2nilz30zz__objectz00
							= (obj_t) (BgL_res3849z00_5126);
					}
					{	/* Llib/object.scm 105 */
						BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_res3850z00_5140;

						{	/* Llib/object.scm 105 */
							BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
								BgL_new1686z00_5127;
							BgL_new1686z00_5127 =
								(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
								(BGl_z52thezd2z62iozd2filezd2notzd2foundzd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 105 */
								obj_t BgL_fname1680z00_5134;

								obj_t BgL_location1681z00_5135;

								obj_t BgL_stack1682z00_5136;

								obj_t BgL_proc1683z00_5137;

								obj_t BgL_msg1684z00_5138;

								obj_t BgL_obj1685z00_5139;

								BgL_fname1680z00_5134 = BUNSPEC;
								BgL_location1681z00_5135 = BUNSPEC;
								BgL_stack1682z00_5136 = BUNSPEC;
								BgL_proc1683z00_5137 = BUNSPEC;
								BgL_msg1684z00_5138 = BUNSPEC;
								BgL_obj1685z00_5139 = BUNSPEC;
								((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
											CREF(BgL_new1686z00_5127))->BgL_fnamez00) =
									((obj_t) BgL_fname1680z00_5134), BUNSPEC);
								((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
											CREF(BgL_new1686z00_5127))->BgL_locationz00) =
									((obj_t) BgL_location1681z00_5135), BUNSPEC);
								((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
											CREF(BgL_new1686z00_5127))->BgL_stackz00) =
									((obj_t) BgL_stack1682z00_5136), BUNSPEC);
								((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
											CREF(BgL_new1686z00_5127))->BgL_procz00) =
									((obj_t) BgL_proc1683z00_5137), BUNSPEC);
								((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
											CREF(BgL_new1686z00_5127))->BgL_msgz00) =
									((obj_t) BgL_msg1684z00_5138), BUNSPEC);
								((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
											CREF(BgL_new1686z00_5127))->BgL_objz00) =
									((obj_t) BgL_obj1685z00_5139), BUNSPEC);
								BgL_res3850z00_5140 = BgL_new1686z00_5127;
						}}
						(obj_t) (BgL_res3850z00_5140);
				}}
			else
				{	/* Llib/object.scm 105 */
					BFALSE;
				}
			return
				(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
				(BGl_z52thezd2z62iozd2filezd2notzd2foundzd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&io-file-not-found-error-nil */
	obj_t BGl__z62iozd2filezd2notzd2foundzd2errorzd2nilzb0zz__objectz00(obj_t
		BgL_envz00_8010)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			return
				(obj_t) (BGl_z62iozd2filezd2notzd2foundzd2errorzd2nilzb0zz__objectz00
				());
		}
	}



/* &io-closed-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62iozd2closedzd2errorzf3z91zz__objectz00(obj_t
		BgL_obj1659z00_404)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1659z00_404,
				BGl_z62iozd2closedzd2errorz62zz__objectz00);
		}
	}



/* _&io-closed-error? */
	obj_t BGl__z62iozd2closedzd2errorzf3z91zz__objectz00(obj_t BgL_envz00_8000,
		obj_t BgL_obj1659z00_8001)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1659z00_8001,
					BGl_z62iozd2closedzd2errorz62zz__objectz00));
		}
	}



/* make-&io-closed-error */
	BGL_EXPORTED_DEF BgL_z62iozd2closedzd2errorz62_bglt
		BGl_makezd2z62iozd2closedzd2errorzb0zz__objectz00(obj_t
		BgL_fname1610z00_408, obj_t BgL_location1611z00_409,
		obj_t BgL_stack1612z00_410, obj_t BgL_proc1613z00_411,
		obj_t BgL_msg1614z00_412, obj_t BgL_obj1615z00_413)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			{	/* Llib/object.scm 104 */
				BgL_z62iozd2closedzd2errorz62_bglt BgL_new1616z00_5141;

				{	/* Llib/object.scm 104 */
					BgL_z62iozd2closedzd2errorz62_bglt BgL_res3852z00_5150;

					{	/* Llib/object.scm 104 */
						BgL_z62iozd2closedzd2errorz62_bglt BgL_new1632z00_5142;

						BgL_new1632z00_5142 =
							((BgL_z62iozd2closedzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2closedzd2errorz62_bgl))));
						{	/* Llib/object.scm 104 */
							long BgL_arg3127z00_5143;

							{	/* Llib/object.scm 104 */
								long BgL_res3851z00_5147;

								{	/* Llib/object.scm 104 */
									obj_t BgL_classz00_5144;

									BgL_classz00_5144 =
										BGl_z62iozd2closedzd2errorz62zz__objectz00;
									{	/* Llib/object.scm 104 */
										obj_t BgL_vectorz00_5145;

										int BgL_kz00_5146;

										BgL_vectorz00_5145 = BgL_classz00_5144;
										BgL_kz00_5146 = (int) (((long) 1));
										BgL_res3851z00_5147 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5145,
												BgL_kz00_5146));
								}}
								BgL_arg3127z00_5143 = BgL_res3851z00_5147;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1632z00_5142),
								BgL_arg3127z00_5143);
						}
						{	/* Llib/object.scm 104 */
							BgL_objectz00_bglt BgL_auxz00_12227;

							BgL_auxz00_12227 = (BgL_objectz00_bglt) (BgL_new1632z00_5142);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12227, BFALSE);
						}
						BgL_res3852z00_5150 = BgL_new1632z00_5142;
					}
					BgL_new1616z00_5141 = BgL_res3852z00_5150;
				}
				{	/* Llib/object.scm 104 */
					BgL_z62iozd2closedzd2errorz62_bglt BgL_res3853z00_5164;

					{	/* Llib/object.scm 104 */
						BgL_z62iozd2closedzd2errorz62_bglt BgL_new1624z00_5151;

						BgL_new1624z00_5151 = BgL_new1616z00_5141;
						{	/* Llib/object.scm 104 */
							obj_t BgL_fname1618z00_5158;

							obj_t BgL_location1619z00_5159;

							obj_t BgL_stack1620z00_5160;

							obj_t BgL_proc1621z00_5161;

							obj_t BgL_msg1622z00_5162;

							obj_t BgL_obj1623z00_5163;

							BgL_fname1618z00_5158 = BgL_fname1610z00_408;
							BgL_location1619z00_5159 = BgL_location1611z00_409;
							BgL_stack1620z00_5160 = BgL_stack1612z00_410;
							BgL_proc1621z00_5161 = BgL_proc1613z00_411;
							BgL_msg1622z00_5162 = BgL_msg1614z00_412;
							BgL_obj1623z00_5163 = BgL_obj1615z00_413;
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_5151))->BgL_fnamez00) =
								((obj_t) BgL_fname1618z00_5158), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_5151))->BgL_locationz00) =
								((obj_t) BgL_location1619z00_5159), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_5151))->BgL_stackz00) =
								((obj_t) BgL_stack1620z00_5160), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_5151))->BgL_procz00) =
								((obj_t) BgL_proc1621z00_5161), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_5151))->BgL_msgz00) =
								((obj_t) BgL_msg1622z00_5162), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_5151))->BgL_objz00) =
								((obj_t) BgL_obj1623z00_5163), BUNSPEC);
							BgL_res3853z00_5164 = BgL_new1624z00_5151;
					}} BgL_res3853z00_5164;
				}
				return BgL_new1616z00_5141;
			}
		}
	}



/* _make-&io-closed-error */
	obj_t BGl__makezd2z62iozd2closedzd2errorzb0zz__objectz00(obj_t
		BgL_envz00_7991, obj_t BgL_fname1610z00_7992,
		obj_t BgL_location1611z00_7993, obj_t BgL_stack1612z00_7994,
		obj_t BgL_proc1613z00_7995, obj_t BgL_msg1614z00_7996,
		obj_t BgL_obj1615z00_7997)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			return
				(obj_t) (BGl_makezd2z62iozd2closedzd2errorzb0zz__objectz00
				(BgL_fname1610z00_7992, BgL_location1611z00_7993, BgL_stack1612z00_7994,
					BgL_proc1613z00_7995, BgL_msg1614z00_7996, BgL_obj1615z00_7997));
		}
	}



/* fill-&io-closed-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2closedzd2errorz62_bglt
		BGl_fillzd2z62iozd2closedzd2errorz12za2zz__objectz00
		(BgL_z62iozd2closedzd2errorz62_bglt BgL_new1624z00_414,
		obj_t BgL_fname1618z00_415, obj_t BgL_location1619z00_416,
		obj_t BgL_stack1620z00_417, obj_t BgL_proc1621z00_418,
		obj_t BgL_msg1622z00_419, obj_t BgL_obj1623z00_420)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			{	/* Llib/object.scm 104 */
				obj_t BgL_fname1618z00_9094;

				obj_t BgL_location1619z00_9095;

				obj_t BgL_stack1620z00_9096;

				obj_t BgL_proc1621z00_9097;

				obj_t BgL_msg1622z00_9098;

				obj_t BgL_obj1623z00_9099;

				BgL_fname1618z00_9094 = BgL_fname1618z00_415;
				BgL_location1619z00_9095 = BgL_location1619z00_416;
				BgL_stack1620z00_9096 = BgL_stack1620z00_417;
				BgL_proc1621z00_9097 = BgL_proc1621z00_418;
				BgL_msg1622z00_9098 = BgL_msg1622z00_419;
				BgL_obj1623z00_9099 = BgL_obj1623z00_420;
				((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_new1624z00_414))->
						BgL_fnamez00) = ((obj_t) BgL_fname1618z00_9094), BUNSPEC);
				((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_new1624z00_414))->
						BgL_locationz00) = ((obj_t) BgL_location1619z00_9095), BUNSPEC);
				((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_new1624z00_414))->
						BgL_stackz00) = ((obj_t) BgL_stack1620z00_9096), BUNSPEC);
				((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_new1624z00_414))->
						BgL_procz00) = ((obj_t) BgL_proc1621z00_9097), BUNSPEC);
				((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_new1624z00_414))->
						BgL_msgz00) = ((obj_t) BgL_msg1622z00_9098), BUNSPEC);
				((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_new1624z00_414))->
						BgL_objz00) = ((obj_t) BgL_obj1623z00_9099), BUNSPEC);
				return BgL_new1624z00_414;
			}
		}
	}



/* _fill-&io-closed-error! */
	obj_t BGl__fillzd2z62iozd2closedzd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8207, obj_t BgL_new1624z00_8208, obj_t BgL_fname1618z00_8209,
		obj_t BgL_location1619z00_8210, obj_t BgL_stack1620z00_8211,
		obj_t BgL_proc1621z00_8212, obj_t BgL_msg1622z00_8213,
		obj_t BgL_obj1623z00_8214)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			{	/* Llib/object.scm 104 */
				BgL_z62iozd2closedzd2errorz62_bglt BgL_auxz00_12244;

				{	/* Llib/object.scm 104 */
					BgL_z62iozd2closedzd2errorz62_bglt BgL_res4521z00_9114;

					{	/* Llib/object.scm 104 */
						BgL_z62iozd2closedzd2errorz62_bglt BgL_new1624z00_9101;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1624z00_8208,
								BGl_z62iozd2closedzd2errorz62zz__objectz00))
							{	/* Llib/object.scm 104 */
								BgL_new1624z00_9101 =
									(BgL_z62iozd2closedzd2errorz62_bglt) (BgL_new1624z00_8208);
							}
						else
							{
								obj_t BgL_auxz00_12248;

								BgL_auxz00_12248 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3761)),
									BGl_string4396z00zz__objectz00,
									BGl_string4349z00zz__objectz00, BgL_new1624z00_8208);
								FAILURE(BgL_auxz00_12248, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 104 */
							obj_t BgL_fname1618z00_9108;

							obj_t BgL_location1619z00_9109;

							obj_t BgL_stack1620z00_9110;

							obj_t BgL_proc1621z00_9111;

							obj_t BgL_msg1622z00_9112;

							obj_t BgL_obj1623z00_9113;

							BgL_fname1618z00_9108 = BgL_fname1618z00_8209;
							BgL_location1619z00_9109 = BgL_location1619z00_8210;
							BgL_stack1620z00_9110 = BgL_stack1620z00_8211;
							BgL_proc1621z00_9111 = BgL_proc1621z00_8212;
							BgL_msg1622z00_9112 = BgL_msg1622z00_8213;
							BgL_obj1623z00_9113 = BgL_obj1623z00_8214;
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_9101))->BgL_fnamez00) =
								((obj_t) BgL_fname1618z00_9108), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_9101))->BgL_locationz00) =
								((obj_t) BgL_location1619z00_9109), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_9101))->BgL_stackz00) =
								((obj_t) BgL_stack1620z00_9110), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_9101))->BgL_procz00) =
								((obj_t) BgL_proc1621z00_9111), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_9101))->BgL_msgz00) =
								((obj_t) BgL_msg1622z00_9112), BUNSPEC);
							((((BgL_z62iozd2closedzd2errorz62_bglt)
										CREF(BgL_new1624z00_9101))->BgL_objz00) =
								((obj_t) BgL_obj1623z00_9113), BUNSPEC);
							BgL_res4521z00_9114 = BgL_new1624z00_9101;
					}}
					BgL_auxz00_12244 = BgL_res4521z00_9114;
				}
				return (obj_t) (BgL_auxz00_12244);
			}
		}
	}



/* %allocate-&io-closed-error */
	BGL_EXPORTED_DEF BgL_z62iozd2closedzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2closedzd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			{	/* Llib/object.scm 104 */
				BgL_z62iozd2closedzd2errorz62_bglt BgL_new1632z00_9115;

				BgL_new1632z00_9115 =
					((BgL_z62iozd2closedzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2closedzd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1632z00_9115),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2closedzd2errorz62zz__objectz00));
				{	/* Llib/object.scm 104 */
					BgL_objectz00_bglt BgL_auxz00_12263;

					BgL_auxz00_12263 = (BgL_objectz00_bglt) (BgL_new1632z00_9115);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12263, BFALSE);
				}
				return BgL_new1632z00_9115;
			}
		}
	}



/* _%allocate-&io-closed-error */
	obj_t BGl__z52allocatezd2z62iozd2closedzd2errorze2zz__objectz00(obj_t
		BgL_envz00_7998)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			{	/* Llib/object.scm 104 */
				BgL_z62iozd2closedzd2errorz62_bglt BgL_auxz00_12266;

				{	/* Llib/object.scm 104 */
					BgL_z62iozd2closedzd2errorz62_bglt BgL_res4522z00_9119;

					{	/* Llib/object.scm 104 */
						BgL_z62iozd2closedzd2errorz62_bglt BgL_new1632z00_9117;

						BgL_new1632z00_9117 =
							((BgL_z62iozd2closedzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2closedzd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1632z00_9117),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2closedzd2errorz62zz__objectz00));
						{	/* Llib/object.scm 104 */
							BgL_objectz00_bglt BgL_auxz00_12271;

							BgL_auxz00_12271 = (BgL_objectz00_bglt) (BgL_new1632z00_9117);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12271, BFALSE);
						}
						BgL_res4522z00_9119 = BgL_new1632z00_9117;
					}
					BgL_auxz00_12266 = BgL_res4522z00_9119;
				}
				return (obj_t) (BgL_auxz00_12266);
			}
		}
	}



/* &io-closed-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2closedzd2errorz62_bglt
		BGl_z62iozd2closedzd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			if (
				(BGl_z52thezd2z62iozd2closedzd2errorzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 104 */
					{	/* Llib/object.scm 104 */
						BgL_z62iozd2closedzd2errorz62_bglt BgL_res3855z00_5183;

						{	/* Llib/object.scm 104 */
							BgL_z62iozd2closedzd2errorz62_bglt BgL_new1632z00_5175;

							BgL_new1632z00_5175 =
								((BgL_z62iozd2closedzd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2closedzd2errorz62_bgl))));
							{	/* Llib/object.scm 104 */
								long BgL_arg3127z00_5176;

								{	/* Llib/object.scm 104 */
									long BgL_res3854z00_5180;

									{	/* Llib/object.scm 104 */
										obj_t BgL_classz00_5177;

										BgL_classz00_5177 =
											BGl_z62iozd2closedzd2errorz62zz__objectz00;
										{	/* Llib/object.scm 104 */
											obj_t BgL_vectorz00_5178;

											int BgL_kz00_5179;

											BgL_vectorz00_5178 = BgL_classz00_5177;
											BgL_kz00_5179 = (int) (((long) 1));
											BgL_res3854z00_5180 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5178,
													BgL_kz00_5179));
									}}
									BgL_arg3127z00_5176 = BgL_res3854z00_5180;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1632z00_5175),
									BgL_arg3127z00_5176);
							}
							{	/* Llib/object.scm 104 */
								BgL_objectz00_bglt BgL_auxz00_12283;

								BgL_auxz00_12283 = (BgL_objectz00_bglt) (BgL_new1632z00_5175);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12283, BFALSE);
							}
							BgL_res3855z00_5183 = BgL_new1632z00_5175;
						}
						BGl_z52thezd2z62iozd2closedzd2errorzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3855z00_5183);
					}
					{	/* Llib/object.scm 104 */
						BgL_z62iozd2closedzd2errorz62_bglt BgL_res3856z00_5197;

						{	/* Llib/object.scm 104 */
							BgL_z62iozd2closedzd2errorz62_bglt BgL_new1624z00_5184;

							BgL_new1624z00_5184 =
								(BgL_z62iozd2closedzd2errorz62_bglt)
								(BGl_z52thezd2z62iozd2closedzd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 104 */
								obj_t BgL_fname1618z00_5191;

								obj_t BgL_location1619z00_5192;

								obj_t BgL_stack1620z00_5193;

								obj_t BgL_proc1621z00_5194;

								obj_t BgL_msg1622z00_5195;

								obj_t BgL_obj1623z00_5196;

								BgL_fname1618z00_5191 = BUNSPEC;
								BgL_location1619z00_5192 = BUNSPEC;
								BgL_stack1620z00_5193 = BUNSPEC;
								BgL_proc1621z00_5194 = BUNSPEC;
								BgL_msg1622z00_5195 = BUNSPEC;
								BgL_obj1623z00_5196 = BUNSPEC;
								((((BgL_z62iozd2closedzd2errorz62_bglt)
											CREF(BgL_new1624z00_5184))->BgL_fnamez00) =
									((obj_t) BgL_fname1618z00_5191), BUNSPEC);
								((((BgL_z62iozd2closedzd2errorz62_bglt)
											CREF(BgL_new1624z00_5184))->BgL_locationz00) =
									((obj_t) BgL_location1619z00_5192), BUNSPEC);
								((((BgL_z62iozd2closedzd2errorz62_bglt)
											CREF(BgL_new1624z00_5184))->BgL_stackz00) =
									((obj_t) BgL_stack1620z00_5193), BUNSPEC);
								((((BgL_z62iozd2closedzd2errorz62_bglt)
											CREF(BgL_new1624z00_5184))->BgL_procz00) =
									((obj_t) BgL_proc1621z00_5194), BUNSPEC);
								((((BgL_z62iozd2closedzd2errorz62_bglt)
											CREF(BgL_new1624z00_5184))->BgL_msgz00) =
									((obj_t) BgL_msg1622z00_5195), BUNSPEC);
								((((BgL_z62iozd2closedzd2errorz62_bglt)
											CREF(BgL_new1624z00_5184))->BgL_objz00) =
									((obj_t) BgL_obj1623z00_5196), BUNSPEC);
								BgL_res3856z00_5197 = BgL_new1624z00_5184;
						}}
						(obj_t) (BgL_res3856z00_5197);
				}}
			else
				{	/* Llib/object.scm 104 */
					BFALSE;
				}
			return
				(BgL_z62iozd2closedzd2errorz62_bglt)
				(BGl_z52thezd2z62iozd2closedzd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&io-closed-error-nil */
	obj_t BGl__z62iozd2closedzd2errorzd2nilzb0zz__objectz00(obj_t BgL_envz00_7999)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			return (obj_t) (BGl_z62iozd2closedzd2errorzd2nilzb0zz__objectz00());
		}
	}



/* &io-write-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62iozd2writezd2errorzf3z91zz__objectz00(obj_t
		BgL_obj1597z00_421)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1597z00_421,
				BGl_z62iozd2writezd2errorz62zz__objectz00);
		}
	}



/* _&io-write-error? */
	obj_t BGl__z62iozd2writezd2errorzf3z91zz__objectz00(obj_t BgL_envz00_7989,
		obj_t BgL_obj1597z00_7990)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1597z00_7990,
					BGl_z62iozd2writezd2errorz62zz__objectz00));
		}
	}



/* make-&io-write-error */
	BGL_EXPORTED_DEF BgL_z62iozd2writezd2errorz62_bglt
		BGl_makezd2z62iozd2writezd2errorzb0zz__objectz00(obj_t BgL_fname1548z00_425,
		obj_t BgL_location1549z00_426, obj_t BgL_stack1550z00_427,
		obj_t BgL_proc1551z00_428, obj_t BgL_msg1552z00_429,
		obj_t BgL_obj1553z00_430)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			{	/* Llib/object.scm 103 */
				BgL_z62iozd2writezd2errorz62_bglt BgL_new1554z00_5198;

				{	/* Llib/object.scm 103 */
					BgL_z62iozd2writezd2errorz62_bglt BgL_res3858z00_5207;

					{	/* Llib/object.scm 103 */
						BgL_z62iozd2writezd2errorz62_bglt BgL_new1570z00_5199;

						BgL_new1570z00_5199 =
							((BgL_z62iozd2writezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2writezd2errorz62_bgl))));
						{	/* Llib/object.scm 103 */
							long BgL_arg3129z00_5200;

							{	/* Llib/object.scm 103 */
								long BgL_res3857z00_5204;

								{	/* Llib/object.scm 103 */
									obj_t BgL_classz00_5201;

									BgL_classz00_5201 = BGl_z62iozd2writezd2errorz62zz__objectz00;
									{	/* Llib/object.scm 103 */
										obj_t BgL_vectorz00_5202;

										int BgL_kz00_5203;

										BgL_vectorz00_5202 = BgL_classz00_5201;
										BgL_kz00_5203 = (int) (((long) 1));
										BgL_res3857z00_5204 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5202,
												BgL_kz00_5203));
								}}
								BgL_arg3129z00_5200 = BgL_res3857z00_5204;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1570z00_5199),
								BgL_arg3129z00_5200);
						}
						{	/* Llib/object.scm 103 */
							BgL_objectz00_bglt BgL_auxz00_12307;

							BgL_auxz00_12307 = (BgL_objectz00_bglt) (BgL_new1570z00_5199);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12307, BFALSE);
						}
						BgL_res3858z00_5207 = BgL_new1570z00_5199;
					}
					BgL_new1554z00_5198 = BgL_res3858z00_5207;
				}
				{	/* Llib/object.scm 103 */
					BgL_z62iozd2writezd2errorz62_bglt BgL_res3859z00_5221;

					{	/* Llib/object.scm 103 */
						BgL_z62iozd2writezd2errorz62_bglt BgL_new1562z00_5208;

						BgL_new1562z00_5208 = BgL_new1554z00_5198;
						{	/* Llib/object.scm 103 */
							obj_t BgL_fname1556z00_5215;

							obj_t BgL_location1557z00_5216;

							obj_t BgL_stack1558z00_5217;

							obj_t BgL_proc1559z00_5218;

							obj_t BgL_msg1560z00_5219;

							obj_t BgL_obj1561z00_5220;

							BgL_fname1556z00_5215 = BgL_fname1548z00_425;
							BgL_location1557z00_5216 = BgL_location1549z00_426;
							BgL_stack1558z00_5217 = BgL_stack1550z00_427;
							BgL_proc1559z00_5218 = BgL_proc1551z00_428;
							BgL_msg1560z00_5219 = BgL_msg1552z00_429;
							BgL_obj1561z00_5220 = BgL_obj1553z00_430;
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_5208))->BgL_fnamez00) =
								((obj_t) BgL_fname1556z00_5215), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_5208))->BgL_locationz00) =
								((obj_t) BgL_location1557z00_5216), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_5208))->BgL_stackz00) =
								((obj_t) BgL_stack1558z00_5217), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_5208))->BgL_procz00) =
								((obj_t) BgL_proc1559z00_5218), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_5208))->BgL_msgz00) =
								((obj_t) BgL_msg1560z00_5219), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_5208))->BgL_objz00) =
								((obj_t) BgL_obj1561z00_5220), BUNSPEC);
							BgL_res3859z00_5221 = BgL_new1562z00_5208;
					}} BgL_res3859z00_5221;
				}
				return BgL_new1554z00_5198;
			}
		}
	}



/* _make-&io-write-error */
	obj_t BGl__makezd2z62iozd2writezd2errorzb0zz__objectz00(obj_t BgL_envz00_7980,
		obj_t BgL_fname1548z00_7981, obj_t BgL_location1549z00_7982,
		obj_t BgL_stack1550z00_7983, obj_t BgL_proc1551z00_7984,
		obj_t BgL_msg1552z00_7985, obj_t BgL_obj1553z00_7986)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			return
				(obj_t) (BGl_makezd2z62iozd2writezd2errorzb0zz__objectz00
				(BgL_fname1548z00_7981, BgL_location1549z00_7982, BgL_stack1550z00_7983,
					BgL_proc1551z00_7984, BgL_msg1552z00_7985, BgL_obj1553z00_7986));
		}
	}



/* fill-&io-write-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2writezd2errorz62_bglt
		BGl_fillzd2z62iozd2writezd2errorz12za2zz__objectz00
		(BgL_z62iozd2writezd2errorz62_bglt BgL_new1562z00_431,
		obj_t BgL_fname1556z00_432, obj_t BgL_location1557z00_433,
		obj_t BgL_stack1558z00_434, obj_t BgL_proc1559z00_435,
		obj_t BgL_msg1560z00_436, obj_t BgL_obj1561z00_437)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			{	/* Llib/object.scm 103 */
				obj_t BgL_fname1556z00_9121;

				obj_t BgL_location1557z00_9122;

				obj_t BgL_stack1558z00_9123;

				obj_t BgL_proc1559z00_9124;

				obj_t BgL_msg1560z00_9125;

				obj_t BgL_obj1561z00_9126;

				BgL_fname1556z00_9121 = BgL_fname1556z00_432;
				BgL_location1557z00_9122 = BgL_location1557z00_433;
				BgL_stack1558z00_9123 = BgL_stack1558z00_434;
				BgL_proc1559z00_9124 = BgL_proc1559z00_435;
				BgL_msg1560z00_9125 = BgL_msg1560z00_436;
				BgL_obj1561z00_9126 = BgL_obj1561z00_437;
				((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_new1562z00_431))->
						BgL_fnamez00) = ((obj_t) BgL_fname1556z00_9121), BUNSPEC);
				((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_new1562z00_431))->
						BgL_locationz00) = ((obj_t) BgL_location1557z00_9122), BUNSPEC);
				((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_new1562z00_431))->
						BgL_stackz00) = ((obj_t) BgL_stack1558z00_9123), BUNSPEC);
				((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_new1562z00_431))->
						BgL_procz00) = ((obj_t) BgL_proc1559z00_9124), BUNSPEC);
				((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_new1562z00_431))->
						BgL_msgz00) = ((obj_t) BgL_msg1560z00_9125), BUNSPEC);
				((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_new1562z00_431))->
						BgL_objz00) = ((obj_t) BgL_obj1561z00_9126), BUNSPEC);
				return BgL_new1562z00_431;
			}
		}
	}



/* _fill-&io-write-error! */
	obj_t BGl__fillzd2z62iozd2writezd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8215, obj_t BgL_new1562z00_8216, obj_t BgL_fname1556z00_8217,
		obj_t BgL_location1557z00_8218, obj_t BgL_stack1558z00_8219,
		obj_t BgL_proc1559z00_8220, obj_t BgL_msg1560z00_8221,
		obj_t BgL_obj1561z00_8222)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			{	/* Llib/object.scm 103 */
				BgL_z62iozd2writezd2errorz62_bglt BgL_auxz00_12324;

				{	/* Llib/object.scm 103 */
					BgL_z62iozd2writezd2errorz62_bglt BgL_res4523z00_9141;

					{	/* Llib/object.scm 103 */
						BgL_z62iozd2writezd2errorz62_bglt BgL_new1562z00_9128;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1562z00_8216,
								BGl_z62iozd2writezd2errorz62zz__objectz00))
							{	/* Llib/object.scm 103 */
								BgL_new1562z00_9128 =
									(BgL_z62iozd2writezd2errorz62_bglt) (BgL_new1562z00_8216);
							}
						else
							{
								obj_t BgL_auxz00_12328;

								BgL_auxz00_12328 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3716)),
									BGl_string4397z00zz__objectz00,
									BGl_string4347z00zz__objectz00, BgL_new1562z00_8216);
								FAILURE(BgL_auxz00_12328, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 103 */
							obj_t BgL_fname1556z00_9135;

							obj_t BgL_location1557z00_9136;

							obj_t BgL_stack1558z00_9137;

							obj_t BgL_proc1559z00_9138;

							obj_t BgL_msg1560z00_9139;

							obj_t BgL_obj1561z00_9140;

							BgL_fname1556z00_9135 = BgL_fname1556z00_8217;
							BgL_location1557z00_9136 = BgL_location1557z00_8218;
							BgL_stack1558z00_9137 = BgL_stack1558z00_8219;
							BgL_proc1559z00_9138 = BgL_proc1559z00_8220;
							BgL_msg1560z00_9139 = BgL_msg1560z00_8221;
							BgL_obj1561z00_9140 = BgL_obj1561z00_8222;
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_9128))->BgL_fnamez00) =
								((obj_t) BgL_fname1556z00_9135), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_9128))->BgL_locationz00) =
								((obj_t) BgL_location1557z00_9136), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_9128))->BgL_stackz00) =
								((obj_t) BgL_stack1558z00_9137), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_9128))->BgL_procz00) =
								((obj_t) BgL_proc1559z00_9138), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_9128))->BgL_msgz00) =
								((obj_t) BgL_msg1560z00_9139), BUNSPEC);
							((((BgL_z62iozd2writezd2errorz62_bglt)
										CREF(BgL_new1562z00_9128))->BgL_objz00) =
								((obj_t) BgL_obj1561z00_9140), BUNSPEC);
							BgL_res4523z00_9141 = BgL_new1562z00_9128;
					}}
					BgL_auxz00_12324 = BgL_res4523z00_9141;
				}
				return (obj_t) (BgL_auxz00_12324);
			}
		}
	}



/* %allocate-&io-write-error */
	BGL_EXPORTED_DEF BgL_z62iozd2writezd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2writezd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			{	/* Llib/object.scm 103 */
				BgL_z62iozd2writezd2errorz62_bglt BgL_new1570z00_9142;

				BgL_new1570z00_9142 =
					((BgL_z62iozd2writezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2writezd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1570z00_9142),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2writezd2errorz62zz__objectz00));
				{	/* Llib/object.scm 103 */
					BgL_objectz00_bglt BgL_auxz00_12343;

					BgL_auxz00_12343 = (BgL_objectz00_bglt) (BgL_new1570z00_9142);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12343, BFALSE);
				}
				return BgL_new1570z00_9142;
			}
		}
	}



/* _%allocate-&io-write-error */
	obj_t BGl__z52allocatezd2z62iozd2writezd2errorze2zz__objectz00(obj_t
		BgL_envz00_7987)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			{	/* Llib/object.scm 103 */
				BgL_z62iozd2writezd2errorz62_bglt BgL_auxz00_12346;

				{	/* Llib/object.scm 103 */
					BgL_z62iozd2writezd2errorz62_bglt BgL_res4524z00_9146;

					{	/* Llib/object.scm 103 */
						BgL_z62iozd2writezd2errorz62_bglt BgL_new1570z00_9144;

						BgL_new1570z00_9144 =
							((BgL_z62iozd2writezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2writezd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1570z00_9144),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2writezd2errorz62zz__objectz00));
						{	/* Llib/object.scm 103 */
							BgL_objectz00_bglt BgL_auxz00_12351;

							BgL_auxz00_12351 = (BgL_objectz00_bglt) (BgL_new1570z00_9144);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12351, BFALSE);
						}
						BgL_res4524z00_9146 = BgL_new1570z00_9144;
					}
					BgL_auxz00_12346 = BgL_res4524z00_9146;
				}
				return (obj_t) (BgL_auxz00_12346);
			}
		}
	}



/* &io-write-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2writezd2errorz62_bglt
		BGl_z62iozd2writezd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			if ((BGl_z52thezd2z62iozd2writezd2errorzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 103 */
					{	/* Llib/object.scm 103 */
						BgL_z62iozd2writezd2errorz62_bglt BgL_res3861z00_5240;

						{	/* Llib/object.scm 103 */
							BgL_z62iozd2writezd2errorz62_bglt BgL_new1570z00_5232;

							BgL_new1570z00_5232 =
								((BgL_z62iozd2writezd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2writezd2errorz62_bgl))));
							{	/* Llib/object.scm 103 */
								long BgL_arg3129z00_5233;

								{	/* Llib/object.scm 103 */
									long BgL_res3860z00_5237;

									{	/* Llib/object.scm 103 */
										obj_t BgL_classz00_5234;

										BgL_classz00_5234 =
											BGl_z62iozd2writezd2errorz62zz__objectz00;
										{	/* Llib/object.scm 103 */
											obj_t BgL_vectorz00_5235;

											int BgL_kz00_5236;

											BgL_vectorz00_5235 = BgL_classz00_5234;
											BgL_kz00_5236 = (int) (((long) 1));
											BgL_res3860z00_5237 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5235,
													BgL_kz00_5236));
									}}
									BgL_arg3129z00_5233 = BgL_res3860z00_5237;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1570z00_5232),
									BgL_arg3129z00_5233);
							}
							{	/* Llib/object.scm 103 */
								BgL_objectz00_bglt BgL_auxz00_12363;

								BgL_auxz00_12363 = (BgL_objectz00_bglt) (BgL_new1570z00_5232);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12363, BFALSE);
							}
							BgL_res3861z00_5240 = BgL_new1570z00_5232;
						}
						BGl_z52thezd2z62iozd2writezd2errorzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3861z00_5240);
					}
					{	/* Llib/object.scm 103 */
						BgL_z62iozd2writezd2errorz62_bglt BgL_res3862z00_5254;

						{	/* Llib/object.scm 103 */
							BgL_z62iozd2writezd2errorz62_bglt BgL_new1562z00_5241;

							BgL_new1562z00_5241 =
								(BgL_z62iozd2writezd2errorz62_bglt)
								(BGl_z52thezd2z62iozd2writezd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 103 */
								obj_t BgL_fname1556z00_5248;

								obj_t BgL_location1557z00_5249;

								obj_t BgL_stack1558z00_5250;

								obj_t BgL_proc1559z00_5251;

								obj_t BgL_msg1560z00_5252;

								obj_t BgL_obj1561z00_5253;

								BgL_fname1556z00_5248 = BUNSPEC;
								BgL_location1557z00_5249 = BUNSPEC;
								BgL_stack1558z00_5250 = BUNSPEC;
								BgL_proc1559z00_5251 = BUNSPEC;
								BgL_msg1560z00_5252 = BUNSPEC;
								BgL_obj1561z00_5253 = BUNSPEC;
								((((BgL_z62iozd2writezd2errorz62_bglt)
											CREF(BgL_new1562z00_5241))->BgL_fnamez00) =
									((obj_t) BgL_fname1556z00_5248), BUNSPEC);
								((((BgL_z62iozd2writezd2errorz62_bglt)
											CREF(BgL_new1562z00_5241))->BgL_locationz00) =
									((obj_t) BgL_location1557z00_5249), BUNSPEC);
								((((BgL_z62iozd2writezd2errorz62_bglt)
											CREF(BgL_new1562z00_5241))->BgL_stackz00) =
									((obj_t) BgL_stack1558z00_5250), BUNSPEC);
								((((BgL_z62iozd2writezd2errorz62_bglt)
											CREF(BgL_new1562z00_5241))->BgL_procz00) =
									((obj_t) BgL_proc1559z00_5251), BUNSPEC);
								((((BgL_z62iozd2writezd2errorz62_bglt)
											CREF(BgL_new1562z00_5241))->BgL_msgz00) =
									((obj_t) BgL_msg1560z00_5252), BUNSPEC);
								((((BgL_z62iozd2writezd2errorz62_bglt)
											CREF(BgL_new1562z00_5241))->BgL_objz00) =
									((obj_t) BgL_obj1561z00_5253), BUNSPEC);
								BgL_res3862z00_5254 = BgL_new1562z00_5241;
						}}
						(obj_t) (BgL_res3862z00_5254);
				}}
			else
				{	/* Llib/object.scm 103 */
					BFALSE;
				}
			return
				(BgL_z62iozd2writezd2errorz62_bglt)
				(BGl_z52thezd2z62iozd2writezd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&io-write-error-nil */
	obj_t BGl__z62iozd2writezd2errorzd2nilzb0zz__objectz00(obj_t BgL_envz00_7988)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			return (obj_t) (BGl_z62iozd2writezd2errorzd2nilzb0zz__objectz00());
		}
	}



/* &io-read-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62iozd2readzd2errorzf3z91zz__objectz00(obj_t
		BgL_obj1535z00_438)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1535z00_438,
				BGl_z62iozd2readzd2errorz62zz__objectz00);
		}
	}



/* _&io-read-error? */
	obj_t BGl__z62iozd2readzd2errorzf3z91zz__objectz00(obj_t BgL_envz00_7978,
		obj_t BgL_obj1535z00_7979)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1535z00_7979,
					BGl_z62iozd2readzd2errorz62zz__objectz00));
		}
	}



/* make-&io-read-error */
	BGL_EXPORTED_DEF BgL_z62iozd2readzd2errorz62_bglt
		BGl_makezd2z62iozd2readzd2errorzb0zz__objectz00(obj_t BgL_fname1486z00_442,
		obj_t BgL_location1487z00_443, obj_t BgL_stack1488z00_444,
		obj_t BgL_proc1489z00_445, obj_t BgL_msg1490z00_446,
		obj_t BgL_obj1491z00_447)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			{	/* Llib/object.scm 102 */
				BgL_z62iozd2readzd2errorz62_bglt BgL_new1492z00_5255;

				{	/* Llib/object.scm 102 */
					BgL_z62iozd2readzd2errorz62_bglt BgL_res3864z00_5264;

					{	/* Llib/object.scm 102 */
						BgL_z62iozd2readzd2errorz62_bglt BgL_new1508z00_5256;

						BgL_new1508z00_5256 =
							((BgL_z62iozd2readzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2readzd2errorz62_bgl))));
						{	/* Llib/object.scm 102 */
							long BgL_arg3131z00_5257;

							{	/* Llib/object.scm 102 */
								long BgL_res3863z00_5261;

								{	/* Llib/object.scm 102 */
									obj_t BgL_classz00_5258;

									BgL_classz00_5258 = BGl_z62iozd2readzd2errorz62zz__objectz00;
									{	/* Llib/object.scm 102 */
										obj_t BgL_vectorz00_5259;

										int BgL_kz00_5260;

										BgL_vectorz00_5259 = BgL_classz00_5258;
										BgL_kz00_5260 = (int) (((long) 1));
										BgL_res3863z00_5261 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5259,
												BgL_kz00_5260));
								}}
								BgL_arg3131z00_5257 = BgL_res3863z00_5261;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1508z00_5256),
								BgL_arg3131z00_5257);
						}
						{	/* Llib/object.scm 102 */
							BgL_objectz00_bglt BgL_auxz00_12387;

							BgL_auxz00_12387 = (BgL_objectz00_bglt) (BgL_new1508z00_5256);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12387, BFALSE);
						}
						BgL_res3864z00_5264 = BgL_new1508z00_5256;
					}
					BgL_new1492z00_5255 = BgL_res3864z00_5264;
				}
				{	/* Llib/object.scm 102 */
					BgL_z62iozd2readzd2errorz62_bglt BgL_res3865z00_5278;

					{	/* Llib/object.scm 102 */
						BgL_z62iozd2readzd2errorz62_bglt BgL_new1500z00_5265;

						BgL_new1500z00_5265 = BgL_new1492z00_5255;
						{	/* Llib/object.scm 102 */
							obj_t BgL_fname1494z00_5272;

							obj_t BgL_location1495z00_5273;

							obj_t BgL_stack1496z00_5274;

							obj_t BgL_proc1497z00_5275;

							obj_t BgL_msg1498z00_5276;

							obj_t BgL_obj1499z00_5277;

							BgL_fname1494z00_5272 = BgL_fname1486z00_442;
							BgL_location1495z00_5273 = BgL_location1487z00_443;
							BgL_stack1496z00_5274 = BgL_stack1488z00_444;
							BgL_proc1497z00_5275 = BgL_proc1489z00_445;
							BgL_msg1498z00_5276 = BgL_msg1490z00_446;
							BgL_obj1499z00_5277 = BgL_obj1491z00_447;
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_5265))->
									BgL_fnamez00) = ((obj_t) BgL_fname1494z00_5272), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_5265))->
									BgL_locationz00) =
								((obj_t) BgL_location1495z00_5273), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_5265))->
									BgL_stackz00) = ((obj_t) BgL_stack1496z00_5274), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_5265))->
									BgL_procz00) = ((obj_t) BgL_proc1497z00_5275), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_5265))->
									BgL_msgz00) = ((obj_t) BgL_msg1498z00_5276), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_5265))->
									BgL_objz00) = ((obj_t) BgL_obj1499z00_5277), BUNSPEC);
							BgL_res3865z00_5278 = BgL_new1500z00_5265;
					}} BgL_res3865z00_5278;
				}
				return BgL_new1492z00_5255;
			}
		}
	}



/* _make-&io-read-error */
	obj_t BGl__makezd2z62iozd2readzd2errorzb0zz__objectz00(obj_t BgL_envz00_7969,
		obj_t BgL_fname1486z00_7970, obj_t BgL_location1487z00_7971,
		obj_t BgL_stack1488z00_7972, obj_t BgL_proc1489z00_7973,
		obj_t BgL_msg1490z00_7974, obj_t BgL_obj1491z00_7975)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			return
				(obj_t) (BGl_makezd2z62iozd2readzd2errorzb0zz__objectz00
				(BgL_fname1486z00_7970, BgL_location1487z00_7971, BgL_stack1488z00_7972,
					BgL_proc1489z00_7973, BgL_msg1490z00_7974, BgL_obj1491z00_7975));
		}
	}



/* fill-&io-read-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2readzd2errorz62_bglt
		BGl_fillzd2z62iozd2readzd2errorz12za2zz__objectz00
		(BgL_z62iozd2readzd2errorz62_bglt BgL_new1500z00_448,
		obj_t BgL_fname1494z00_449, obj_t BgL_location1495z00_450,
		obj_t BgL_stack1496z00_451, obj_t BgL_proc1497z00_452,
		obj_t BgL_msg1498z00_453, obj_t BgL_obj1499z00_454)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			{	/* Llib/object.scm 102 */
				obj_t BgL_fname1494z00_9148;

				obj_t BgL_location1495z00_9149;

				obj_t BgL_stack1496z00_9150;

				obj_t BgL_proc1497z00_9151;

				obj_t BgL_msg1498z00_9152;

				obj_t BgL_obj1499z00_9153;

				BgL_fname1494z00_9148 = BgL_fname1494z00_449;
				BgL_location1495z00_9149 = BgL_location1495z00_450;
				BgL_stack1496z00_9150 = BgL_stack1496z00_451;
				BgL_proc1497z00_9151 = BgL_proc1497z00_452;
				BgL_msg1498z00_9152 = BgL_msg1498z00_453;
				BgL_obj1499z00_9153 = BgL_obj1499z00_454;
				((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_448))->
						BgL_fnamez00) = ((obj_t) BgL_fname1494z00_9148), BUNSPEC);
				((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_448))->
						BgL_locationz00) = ((obj_t) BgL_location1495z00_9149), BUNSPEC);
				((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_448))->
						BgL_stackz00) = ((obj_t) BgL_stack1496z00_9150), BUNSPEC);
				((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_448))->
						BgL_procz00) = ((obj_t) BgL_proc1497z00_9151), BUNSPEC);
				((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_448))->
						BgL_msgz00) = ((obj_t) BgL_msg1498z00_9152), BUNSPEC);
				((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_448))->
						BgL_objz00) = ((obj_t) BgL_obj1499z00_9153), BUNSPEC);
				return BgL_new1500z00_448;
			}
		}
	}



/* _fill-&io-read-error! */
	obj_t BGl__fillzd2z62iozd2readzd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8223, obj_t BgL_new1500z00_8224, obj_t BgL_fname1494z00_8225,
		obj_t BgL_location1495z00_8226, obj_t BgL_stack1496z00_8227,
		obj_t BgL_proc1497z00_8228, obj_t BgL_msg1498z00_8229,
		obj_t BgL_obj1499z00_8230)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			{	/* Llib/object.scm 102 */
				BgL_z62iozd2readzd2errorz62_bglt BgL_auxz00_12404;

				{	/* Llib/object.scm 102 */
					BgL_z62iozd2readzd2errorz62_bglt BgL_res4525z00_9168;

					{	/* Llib/object.scm 102 */
						BgL_z62iozd2readzd2errorz62_bglt BgL_new1500z00_9155;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1500z00_8224,
								BGl_z62iozd2readzd2errorz62zz__objectz00))
							{	/* Llib/object.scm 102 */
								BgL_new1500z00_9155 =
									(BgL_z62iozd2readzd2errorz62_bglt) (BgL_new1500z00_8224);
							}
						else
							{
								obj_t BgL_auxz00_12408;

								BgL_auxz00_12408 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3672)),
									BGl_string4398z00zz__objectz00,
									BGl_string4345z00zz__objectz00, BgL_new1500z00_8224);
								FAILURE(BgL_auxz00_12408, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 102 */
							obj_t BgL_fname1494z00_9162;

							obj_t BgL_location1495z00_9163;

							obj_t BgL_stack1496z00_9164;

							obj_t BgL_proc1497z00_9165;

							obj_t BgL_msg1498z00_9166;

							obj_t BgL_obj1499z00_9167;

							BgL_fname1494z00_9162 = BgL_fname1494z00_8225;
							BgL_location1495z00_9163 = BgL_location1495z00_8226;
							BgL_stack1496z00_9164 = BgL_stack1496z00_8227;
							BgL_proc1497z00_9165 = BgL_proc1497z00_8228;
							BgL_msg1498z00_9166 = BgL_msg1498z00_8229;
							BgL_obj1499z00_9167 = BgL_obj1499z00_8230;
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_9155))->
									BgL_fnamez00) = ((obj_t) BgL_fname1494z00_9162), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_9155))->
									BgL_locationz00) =
								((obj_t) BgL_location1495z00_9163), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_9155))->
									BgL_stackz00) = ((obj_t) BgL_stack1496z00_9164), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_9155))->
									BgL_procz00) = ((obj_t) BgL_proc1497z00_9165), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_9155))->
									BgL_msgz00) = ((obj_t) BgL_msg1498z00_9166), BUNSPEC);
							((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_new1500z00_9155))->
									BgL_objz00) = ((obj_t) BgL_obj1499z00_9167), BUNSPEC);
							BgL_res4525z00_9168 = BgL_new1500z00_9155;
					}}
					BgL_auxz00_12404 = BgL_res4525z00_9168;
				}
				return (obj_t) (BgL_auxz00_12404);
			}
		}
	}



/* %allocate-&io-read-error */
	BGL_EXPORTED_DEF BgL_z62iozd2readzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2readzd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			{	/* Llib/object.scm 102 */
				BgL_z62iozd2readzd2errorz62_bglt BgL_new1508z00_9169;

				BgL_new1508z00_9169 =
					((BgL_z62iozd2readzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2readzd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1508z00_9169),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2readzd2errorz62zz__objectz00));
				{	/* Llib/object.scm 102 */
					BgL_objectz00_bglt BgL_auxz00_12423;

					BgL_auxz00_12423 = (BgL_objectz00_bglt) (BgL_new1508z00_9169);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12423, BFALSE);
				}
				return BgL_new1508z00_9169;
			}
		}
	}



/* _%allocate-&io-read-error */
	obj_t BGl__z52allocatezd2z62iozd2readzd2errorze2zz__objectz00(obj_t
		BgL_envz00_7976)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			{	/* Llib/object.scm 102 */
				BgL_z62iozd2readzd2errorz62_bglt BgL_auxz00_12426;

				{	/* Llib/object.scm 102 */
					BgL_z62iozd2readzd2errorz62_bglt BgL_res4526z00_9173;

					{	/* Llib/object.scm 102 */
						BgL_z62iozd2readzd2errorz62_bglt BgL_new1508z00_9171;

						BgL_new1508z00_9171 =
							((BgL_z62iozd2readzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2readzd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1508z00_9171),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2readzd2errorz62zz__objectz00));
						{	/* Llib/object.scm 102 */
							BgL_objectz00_bglt BgL_auxz00_12431;

							BgL_auxz00_12431 = (BgL_objectz00_bglt) (BgL_new1508z00_9171);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12431, BFALSE);
						}
						BgL_res4526z00_9173 = BgL_new1508z00_9171;
					}
					BgL_auxz00_12426 = BgL_res4526z00_9173;
				}
				return (obj_t) (BgL_auxz00_12426);
			}
		}
	}



/* &io-read-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2readzd2errorz62_bglt
		BGl_z62iozd2readzd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			if ((BGl_z52thezd2z62iozd2readzd2errorzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 102 */
					{	/* Llib/object.scm 102 */
						BgL_z62iozd2readzd2errorz62_bglt BgL_res3867z00_5297;

						{	/* Llib/object.scm 102 */
							BgL_z62iozd2readzd2errorz62_bglt BgL_new1508z00_5289;

							BgL_new1508z00_5289 =
								((BgL_z62iozd2readzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2readzd2errorz62_bgl))));
							{	/* Llib/object.scm 102 */
								long BgL_arg3131z00_5290;

								{	/* Llib/object.scm 102 */
									long BgL_res3866z00_5294;

									{	/* Llib/object.scm 102 */
										obj_t BgL_classz00_5291;

										BgL_classz00_5291 =
											BGl_z62iozd2readzd2errorz62zz__objectz00;
										{	/* Llib/object.scm 102 */
											obj_t BgL_vectorz00_5292;

											int BgL_kz00_5293;

											BgL_vectorz00_5292 = BgL_classz00_5291;
											BgL_kz00_5293 = (int) (((long) 1));
											BgL_res3866z00_5294 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5292,
													BgL_kz00_5293));
									}}
									BgL_arg3131z00_5290 = BgL_res3866z00_5294;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1508z00_5289),
									BgL_arg3131z00_5290);
							}
							{	/* Llib/object.scm 102 */
								BgL_objectz00_bglt BgL_auxz00_12443;

								BgL_auxz00_12443 = (BgL_objectz00_bglt) (BgL_new1508z00_5289);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12443, BFALSE);
							}
							BgL_res3867z00_5297 = BgL_new1508z00_5289;
						}
						BGl_z52thezd2z62iozd2readzd2errorzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3867z00_5297);
					}
					{	/* Llib/object.scm 102 */
						BgL_z62iozd2readzd2errorz62_bglt BgL_res3868z00_5311;

						{	/* Llib/object.scm 102 */
							BgL_z62iozd2readzd2errorz62_bglt BgL_new1500z00_5298;

							BgL_new1500z00_5298 =
								(BgL_z62iozd2readzd2errorz62_bglt)
								(BGl_z52thezd2z62iozd2readzd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 102 */
								obj_t BgL_fname1494z00_5305;

								obj_t BgL_location1495z00_5306;

								obj_t BgL_stack1496z00_5307;

								obj_t BgL_proc1497z00_5308;

								obj_t BgL_msg1498z00_5309;

								obj_t BgL_obj1499z00_5310;

								BgL_fname1494z00_5305 = BUNSPEC;
								BgL_location1495z00_5306 = BUNSPEC;
								BgL_stack1496z00_5307 = BUNSPEC;
								BgL_proc1497z00_5308 = BUNSPEC;
								BgL_msg1498z00_5309 = BUNSPEC;
								BgL_obj1499z00_5310 = BUNSPEC;
								((((BgL_z62iozd2readzd2errorz62_bglt)
											CREF(BgL_new1500z00_5298))->BgL_fnamez00) =
									((obj_t) BgL_fname1494z00_5305), BUNSPEC);
								((((BgL_z62iozd2readzd2errorz62_bglt)
											CREF(BgL_new1500z00_5298))->BgL_locationz00) =
									((obj_t) BgL_location1495z00_5306), BUNSPEC);
								((((BgL_z62iozd2readzd2errorz62_bglt)
											CREF(BgL_new1500z00_5298))->BgL_stackz00) =
									((obj_t) BgL_stack1496z00_5307), BUNSPEC);
								((((BgL_z62iozd2readzd2errorz62_bglt)
											CREF(BgL_new1500z00_5298))->BgL_procz00) =
									((obj_t) BgL_proc1497z00_5308), BUNSPEC);
								((((BgL_z62iozd2readzd2errorz62_bglt)
											CREF(BgL_new1500z00_5298))->BgL_msgz00) =
									((obj_t) BgL_msg1498z00_5309), BUNSPEC);
								((((BgL_z62iozd2readzd2errorz62_bglt)
											CREF(BgL_new1500z00_5298))->BgL_objz00) =
									((obj_t) BgL_obj1499z00_5310), BUNSPEC);
								BgL_res3868z00_5311 = BgL_new1500z00_5298;
						}}
						(obj_t) (BgL_res3868z00_5311);
				}}
			else
				{	/* Llib/object.scm 102 */
					BFALSE;
				}
			return
				(BgL_z62iozd2readzd2errorz62_bglt)
				(BGl_z52thezd2z62iozd2readzd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&io-read-error-nil */
	obj_t BGl__z62iozd2readzd2errorzd2nilzb0zz__objectz00(obj_t BgL_envz00_7977)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			return (obj_t) (BGl_z62iozd2readzd2errorzd2nilzb0zz__objectz00());
		}
	}



/* &io-port-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62iozd2portzd2errorzf3z91zz__objectz00(obj_t
		BgL_obj1473z00_455)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1473z00_455,
				BGl_z62iozd2portzd2errorz62zz__objectz00);
		}
	}



/* _&io-port-error? */
	obj_t BGl__z62iozd2portzd2errorzf3z91zz__objectz00(obj_t BgL_envz00_7967,
		obj_t BgL_obj1473z00_7968)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1473z00_7968,
					BGl_z62iozd2portzd2errorz62zz__objectz00));
		}
	}



/* make-&io-port-error */
	BGL_EXPORTED_DEF BgL_z62iozd2portzd2errorz62_bglt
		BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00(obj_t BgL_fname1424z00_459,
		obj_t BgL_location1425z00_460, obj_t BgL_stack1426z00_461,
		obj_t BgL_proc1427z00_462, obj_t BgL_msg1428z00_463,
		obj_t BgL_obj1429z00_464)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			{	/* Llib/object.scm 101 */
				BgL_z62iozd2portzd2errorz62_bglt BgL_new1430z00_5312;

				{	/* Llib/object.scm 101 */
					BgL_z62iozd2portzd2errorz62_bglt BgL_res3870z00_5321;

					{	/* Llib/object.scm 101 */
						BgL_z62iozd2portzd2errorz62_bglt BgL_new1446z00_5313;

						BgL_new1446z00_5313 =
							((BgL_z62iozd2portzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2portzd2errorz62_bgl))));
						{	/* Llib/object.scm 101 */
							long BgL_arg3133z00_5314;

							{	/* Llib/object.scm 101 */
								long BgL_res3869z00_5318;

								{	/* Llib/object.scm 101 */
									obj_t BgL_classz00_5315;

									BgL_classz00_5315 = BGl_z62iozd2portzd2errorz62zz__objectz00;
									{	/* Llib/object.scm 101 */
										obj_t BgL_vectorz00_5316;

										int BgL_kz00_5317;

										BgL_vectorz00_5316 = BgL_classz00_5315;
										BgL_kz00_5317 = (int) (((long) 1));
										BgL_res3869z00_5318 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5316,
												BgL_kz00_5317));
								}}
								BgL_arg3133z00_5314 = BgL_res3869z00_5318;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1446z00_5313),
								BgL_arg3133z00_5314);
						}
						{	/* Llib/object.scm 101 */
							BgL_objectz00_bglt BgL_auxz00_12467;

							BgL_auxz00_12467 = (BgL_objectz00_bglt) (BgL_new1446z00_5313);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12467, BFALSE);
						}
						BgL_res3870z00_5321 = BgL_new1446z00_5313;
					}
					BgL_new1430z00_5312 = BgL_res3870z00_5321;
				}
				{	/* Llib/object.scm 101 */
					BgL_z62iozd2portzd2errorz62_bglt BgL_res3871z00_5335;

					{	/* Llib/object.scm 101 */
						BgL_z62iozd2portzd2errorz62_bglt BgL_new1438z00_5322;

						BgL_new1438z00_5322 = BgL_new1430z00_5312;
						{	/* Llib/object.scm 101 */
							obj_t BgL_fname1432z00_5329;

							obj_t BgL_location1433z00_5330;

							obj_t BgL_stack1434z00_5331;

							obj_t BgL_proc1435z00_5332;

							obj_t BgL_msg1436z00_5333;

							obj_t BgL_obj1437z00_5334;

							BgL_fname1432z00_5329 = BgL_fname1424z00_459;
							BgL_location1433z00_5330 = BgL_location1425z00_460;
							BgL_stack1434z00_5331 = BgL_stack1426z00_461;
							BgL_proc1435z00_5332 = BgL_proc1427z00_462;
							BgL_msg1436z00_5333 = BgL_msg1428z00_463;
							BgL_obj1437z00_5334 = BgL_obj1429z00_464;
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_5322))->
									BgL_fnamez00) = ((obj_t) BgL_fname1432z00_5329), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_5322))->
									BgL_locationz00) =
								((obj_t) BgL_location1433z00_5330), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_5322))->
									BgL_stackz00) = ((obj_t) BgL_stack1434z00_5331), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_5322))->
									BgL_procz00) = ((obj_t) BgL_proc1435z00_5332), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_5322))->
									BgL_msgz00) = ((obj_t) BgL_msg1436z00_5333), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_5322))->
									BgL_objz00) = ((obj_t) BgL_obj1437z00_5334), BUNSPEC);
							BgL_res3871z00_5335 = BgL_new1438z00_5322;
					}} BgL_res3871z00_5335;
				}
				return BgL_new1430z00_5312;
			}
		}
	}



/* _make-&io-port-error */
	obj_t BGl__makezd2z62iozd2portzd2errorzb0zz__objectz00(obj_t BgL_envz00_7958,
		obj_t BgL_fname1424z00_7959, obj_t BgL_location1425z00_7960,
		obj_t BgL_stack1426z00_7961, obj_t BgL_proc1427z00_7962,
		obj_t BgL_msg1428z00_7963, obj_t BgL_obj1429z00_7964)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			return
				(obj_t) (BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00
				(BgL_fname1424z00_7959, BgL_location1425z00_7960, BgL_stack1426z00_7961,
					BgL_proc1427z00_7962, BgL_msg1428z00_7963, BgL_obj1429z00_7964));
		}
	}



/* fill-&io-port-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2portzd2errorz62_bglt
		BGl_fillzd2z62iozd2portzd2errorz12za2zz__objectz00
		(BgL_z62iozd2portzd2errorz62_bglt BgL_new1438z00_465,
		obj_t BgL_fname1432z00_466, obj_t BgL_location1433z00_467,
		obj_t BgL_stack1434z00_468, obj_t BgL_proc1435z00_469,
		obj_t BgL_msg1436z00_470, obj_t BgL_obj1437z00_471)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			{	/* Llib/object.scm 101 */
				obj_t BgL_fname1432z00_9175;

				obj_t BgL_location1433z00_9176;

				obj_t BgL_stack1434z00_9177;

				obj_t BgL_proc1435z00_9178;

				obj_t BgL_msg1436z00_9179;

				obj_t BgL_obj1437z00_9180;

				BgL_fname1432z00_9175 = BgL_fname1432z00_466;
				BgL_location1433z00_9176 = BgL_location1433z00_467;
				BgL_stack1434z00_9177 = BgL_stack1434z00_468;
				BgL_proc1435z00_9178 = BgL_proc1435z00_469;
				BgL_msg1436z00_9179 = BgL_msg1436z00_470;
				BgL_obj1437z00_9180 = BgL_obj1437z00_471;
				((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_465))->
						BgL_fnamez00) = ((obj_t) BgL_fname1432z00_9175), BUNSPEC);
				((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_465))->
						BgL_locationz00) = ((obj_t) BgL_location1433z00_9176), BUNSPEC);
				((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_465))->
						BgL_stackz00) = ((obj_t) BgL_stack1434z00_9177), BUNSPEC);
				((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_465))->
						BgL_procz00) = ((obj_t) BgL_proc1435z00_9178), BUNSPEC);
				((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_465))->
						BgL_msgz00) = ((obj_t) BgL_msg1436z00_9179), BUNSPEC);
				((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_465))->
						BgL_objz00) = ((obj_t) BgL_obj1437z00_9180), BUNSPEC);
				return BgL_new1438z00_465;
			}
		}
	}



/* _fill-&io-port-error! */
	obj_t BGl__fillzd2z62iozd2portzd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8231, obj_t BgL_new1438z00_8232, obj_t BgL_fname1432z00_8233,
		obj_t BgL_location1433z00_8234, obj_t BgL_stack1434z00_8235,
		obj_t BgL_proc1435z00_8236, obj_t BgL_msg1436z00_8237,
		obj_t BgL_obj1437z00_8238)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			{	/* Llib/object.scm 101 */
				BgL_z62iozd2portzd2errorz62_bglt BgL_auxz00_12484;

				{	/* Llib/object.scm 101 */
					BgL_z62iozd2portzd2errorz62_bglt BgL_res4527z00_9195;

					{	/* Llib/object.scm 101 */
						BgL_z62iozd2portzd2errorz62_bglt BgL_new1438z00_9182;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1438z00_8232,
								BGl_z62iozd2portzd2errorz62zz__objectz00))
							{	/* Llib/object.scm 101 */
								BgL_new1438z00_9182 =
									(BgL_z62iozd2portzd2errorz62_bglt) (BgL_new1438z00_8232);
							}
						else
							{
								obj_t BgL_auxz00_12488;

								BgL_auxz00_12488 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3633)),
									BGl_string4399z00zz__objectz00,
									BGl_string4343z00zz__objectz00, BgL_new1438z00_8232);
								FAILURE(BgL_auxz00_12488, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 101 */
							obj_t BgL_fname1432z00_9189;

							obj_t BgL_location1433z00_9190;

							obj_t BgL_stack1434z00_9191;

							obj_t BgL_proc1435z00_9192;

							obj_t BgL_msg1436z00_9193;

							obj_t BgL_obj1437z00_9194;

							BgL_fname1432z00_9189 = BgL_fname1432z00_8233;
							BgL_location1433z00_9190 = BgL_location1433z00_8234;
							BgL_stack1434z00_9191 = BgL_stack1434z00_8235;
							BgL_proc1435z00_9192 = BgL_proc1435z00_8236;
							BgL_msg1436z00_9193 = BgL_msg1436z00_8237;
							BgL_obj1437z00_9194 = BgL_obj1437z00_8238;
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_9182))->
									BgL_fnamez00) = ((obj_t) BgL_fname1432z00_9189), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_9182))->
									BgL_locationz00) =
								((obj_t) BgL_location1433z00_9190), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_9182))->
									BgL_stackz00) = ((obj_t) BgL_stack1434z00_9191), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_9182))->
									BgL_procz00) = ((obj_t) BgL_proc1435z00_9192), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_9182))->
									BgL_msgz00) = ((obj_t) BgL_msg1436z00_9193), BUNSPEC);
							((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_new1438z00_9182))->
									BgL_objz00) = ((obj_t) BgL_obj1437z00_9194), BUNSPEC);
							BgL_res4527z00_9195 = BgL_new1438z00_9182;
					}}
					BgL_auxz00_12484 = BgL_res4527z00_9195;
				}
				return (obj_t) (BgL_auxz00_12484);
			}
		}
	}



/* %allocate-&io-port-error */
	BGL_EXPORTED_DEF BgL_z62iozd2portzd2errorz62_bglt
		BGl_z52allocatezd2z62iozd2portzd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			{	/* Llib/object.scm 101 */
				BgL_z62iozd2portzd2errorz62_bglt BgL_new1446z00_9196;

				BgL_new1446z00_9196 =
					((BgL_z62iozd2portzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2portzd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1446z00_9196),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62iozd2portzd2errorz62zz__objectz00));
				{	/* Llib/object.scm 101 */
					BgL_objectz00_bglt BgL_auxz00_12503;

					BgL_auxz00_12503 = (BgL_objectz00_bglt) (BgL_new1446z00_9196);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12503, BFALSE);
				}
				return BgL_new1446z00_9196;
			}
		}
	}



/* _%allocate-&io-port-error */
	obj_t BGl__z52allocatezd2z62iozd2portzd2errorze2zz__objectz00(obj_t
		BgL_envz00_7965)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			{	/* Llib/object.scm 101 */
				BgL_z62iozd2portzd2errorz62_bglt BgL_auxz00_12506;

				{	/* Llib/object.scm 101 */
					BgL_z62iozd2portzd2errorz62_bglt BgL_res4528z00_9200;

					{	/* Llib/object.scm 101 */
						BgL_z62iozd2portzd2errorz62_bglt BgL_new1446z00_9198;

						BgL_new1446z00_9198 =
							((BgL_z62iozd2portzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2portzd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1446z00_9198),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2portzd2errorz62zz__objectz00));
						{	/* Llib/object.scm 101 */
							BgL_objectz00_bglt BgL_auxz00_12511;

							BgL_auxz00_12511 = (BgL_objectz00_bglt) (BgL_new1446z00_9198);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12511, BFALSE);
						}
						BgL_res4528z00_9200 = BgL_new1446z00_9198;
					}
					BgL_auxz00_12506 = BgL_res4528z00_9200;
				}
				return (obj_t) (BgL_auxz00_12506);
			}
		}
	}



/* &io-port-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2portzd2errorz62_bglt
		BGl_z62iozd2portzd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			if ((BGl_z52thezd2z62iozd2portzd2errorzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 101 */
					{	/* Llib/object.scm 101 */
						BgL_z62iozd2portzd2errorz62_bglt BgL_res3873z00_5354;

						{	/* Llib/object.scm 101 */
							BgL_z62iozd2portzd2errorz62_bglt BgL_new1446z00_5346;

							BgL_new1446z00_5346 =
								((BgL_z62iozd2portzd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2portzd2errorz62_bgl))));
							{	/* Llib/object.scm 101 */
								long BgL_arg3133z00_5347;

								{	/* Llib/object.scm 101 */
									long BgL_res3872z00_5351;

									{	/* Llib/object.scm 101 */
										obj_t BgL_classz00_5348;

										BgL_classz00_5348 =
											BGl_z62iozd2portzd2errorz62zz__objectz00;
										{	/* Llib/object.scm 101 */
											obj_t BgL_vectorz00_5349;

											int BgL_kz00_5350;

											BgL_vectorz00_5349 = BgL_classz00_5348;
											BgL_kz00_5350 = (int) (((long) 1));
											BgL_res3872z00_5351 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5349,
													BgL_kz00_5350));
									}}
									BgL_arg3133z00_5347 = BgL_res3872z00_5351;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1446z00_5346),
									BgL_arg3133z00_5347);
							}
							{	/* Llib/object.scm 101 */
								BgL_objectz00_bglt BgL_auxz00_12523;

								BgL_auxz00_12523 = (BgL_objectz00_bglt) (BgL_new1446z00_5346);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12523, BFALSE);
							}
							BgL_res3873z00_5354 = BgL_new1446z00_5346;
						}
						BGl_z52thezd2z62iozd2portzd2errorzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3873z00_5354);
					}
					{	/* Llib/object.scm 101 */
						BgL_z62iozd2portzd2errorz62_bglt BgL_res3874z00_5368;

						{	/* Llib/object.scm 101 */
							BgL_z62iozd2portzd2errorz62_bglt BgL_new1438z00_5355;

							BgL_new1438z00_5355 =
								(BgL_z62iozd2portzd2errorz62_bglt)
								(BGl_z52thezd2z62iozd2portzd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 101 */
								obj_t BgL_fname1432z00_5362;

								obj_t BgL_location1433z00_5363;

								obj_t BgL_stack1434z00_5364;

								obj_t BgL_proc1435z00_5365;

								obj_t BgL_msg1436z00_5366;

								obj_t BgL_obj1437z00_5367;

								BgL_fname1432z00_5362 = BUNSPEC;
								BgL_location1433z00_5363 = BUNSPEC;
								BgL_stack1434z00_5364 = BUNSPEC;
								BgL_proc1435z00_5365 = BUNSPEC;
								BgL_msg1436z00_5366 = BUNSPEC;
								BgL_obj1437z00_5367 = BUNSPEC;
								((((BgL_z62iozd2portzd2errorz62_bglt)
											CREF(BgL_new1438z00_5355))->BgL_fnamez00) =
									((obj_t) BgL_fname1432z00_5362), BUNSPEC);
								((((BgL_z62iozd2portzd2errorz62_bglt)
											CREF(BgL_new1438z00_5355))->BgL_locationz00) =
									((obj_t) BgL_location1433z00_5363), BUNSPEC);
								((((BgL_z62iozd2portzd2errorz62_bglt)
											CREF(BgL_new1438z00_5355))->BgL_stackz00) =
									((obj_t) BgL_stack1434z00_5364), BUNSPEC);
								((((BgL_z62iozd2portzd2errorz62_bglt)
											CREF(BgL_new1438z00_5355))->BgL_procz00) =
									((obj_t) BgL_proc1435z00_5365), BUNSPEC);
								((((BgL_z62iozd2portzd2errorz62_bglt)
											CREF(BgL_new1438z00_5355))->BgL_msgz00) =
									((obj_t) BgL_msg1436z00_5366), BUNSPEC);
								((((BgL_z62iozd2portzd2errorz62_bglt)
											CREF(BgL_new1438z00_5355))->BgL_objz00) =
									((obj_t) BgL_obj1437z00_5367), BUNSPEC);
								BgL_res3874z00_5368 = BgL_new1438z00_5355;
						}}
						(obj_t) (BgL_res3874z00_5368);
				}}
			else
				{	/* Llib/object.scm 101 */
					BFALSE;
				}
			return
				(BgL_z62iozd2portzd2errorz62_bglt)
				(BGl_z52thezd2z62iozd2portzd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&io-port-error-nil */
	obj_t BGl__z62iozd2portzd2errorzd2nilzb0zz__objectz00(obj_t BgL_envz00_7966)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			return (obj_t) (BGl_z62iozd2portzd2errorzd2nilzb0zz__objectz00());
		}
	}



/* &io-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62iozd2errorzf3z43zz__objectz00(obj_t
		BgL_obj1411z00_472)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1411z00_472,
				BGl_z62iozd2errorzb0zz__objectz00);
		}
	}



/* _&io-error? */
	obj_t BGl__z62iozd2errorzf3z43zz__objectz00(obj_t BgL_envz00_7956,
		obj_t BgL_obj1411z00_7957)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1411z00_7957,
					BGl_z62iozd2errorzb0zz__objectz00));
		}
	}



/* make-&io-error */
	BGL_EXPORTED_DEF BgL_z62iozd2errorzb0_bglt
		BGl_makezd2z62iozd2errorz62zz__objectz00(obj_t BgL_fname1362z00_476,
		obj_t BgL_location1363z00_477, obj_t BgL_stack1364z00_478,
		obj_t BgL_proc1365z00_479, obj_t BgL_msg1366z00_480,
		obj_t BgL_obj1367z00_481)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			{	/* Llib/object.scm 100 */
				BgL_z62iozd2errorzb0_bglt BgL_new1368z00_5369;

				{	/* Llib/object.scm 100 */
					BgL_z62iozd2errorzb0_bglt BgL_res3876z00_5378;

					{	/* Llib/object.scm 100 */
						BgL_z62iozd2errorzb0_bglt BgL_new1384z00_5370;

						BgL_new1384z00_5370 =
							((BgL_z62iozd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2errorzb0_bgl))));
						{	/* Llib/object.scm 100 */
							long BgL_arg3135z00_5371;

							{	/* Llib/object.scm 100 */
								long BgL_res3875z00_5375;

								{	/* Llib/object.scm 100 */
									obj_t BgL_classz00_5372;

									BgL_classz00_5372 = BGl_z62iozd2errorzb0zz__objectz00;
									{	/* Llib/object.scm 100 */
										obj_t BgL_vectorz00_5373;

										int BgL_kz00_5374;

										BgL_vectorz00_5373 = BgL_classz00_5372;
										BgL_kz00_5374 = (int) (((long) 1));
										BgL_res3875z00_5375 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5373,
												BgL_kz00_5374));
								}}
								BgL_arg3135z00_5371 = BgL_res3875z00_5375;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1384z00_5370),
								BgL_arg3135z00_5371);
						}
						{	/* Llib/object.scm 100 */
							BgL_objectz00_bglt BgL_auxz00_12547;

							BgL_auxz00_12547 = (BgL_objectz00_bglt) (BgL_new1384z00_5370);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12547, BFALSE);
						}
						BgL_res3876z00_5378 = BgL_new1384z00_5370;
					}
					BgL_new1368z00_5369 = BgL_res3876z00_5378;
				}
				{	/* Llib/object.scm 100 */
					BgL_z62iozd2errorzb0_bglt BgL_res3877z00_5392;

					{	/* Llib/object.scm 100 */
						BgL_z62iozd2errorzb0_bglt BgL_new1376z00_5379;

						BgL_new1376z00_5379 = BgL_new1368z00_5369;
						{	/* Llib/object.scm 100 */
							obj_t BgL_fname1370z00_5386;

							obj_t BgL_location1371z00_5387;

							obj_t BgL_stack1372z00_5388;

							obj_t BgL_proc1373z00_5389;

							obj_t BgL_msg1374z00_5390;

							obj_t BgL_obj1375z00_5391;

							BgL_fname1370z00_5386 = BgL_fname1362z00_476;
							BgL_location1371z00_5387 = BgL_location1363z00_477;
							BgL_stack1372z00_5388 = BgL_stack1364z00_478;
							BgL_proc1373z00_5389 = BgL_proc1365z00_479;
							BgL_msg1374z00_5390 = BgL_msg1366z00_480;
							BgL_obj1375z00_5391 = BgL_obj1367z00_481;
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5379))->
									BgL_fnamez00) = ((obj_t) BgL_fname1370z00_5386), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5379))->
									BgL_locationz00) =
								((obj_t) BgL_location1371z00_5387), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5379))->
									BgL_stackz00) = ((obj_t) BgL_stack1372z00_5388), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5379))->
									BgL_procz00) = ((obj_t) BgL_proc1373z00_5389), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5379))->
									BgL_msgz00) = ((obj_t) BgL_msg1374z00_5390), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5379))->
									BgL_objz00) = ((obj_t) BgL_obj1375z00_5391), BUNSPEC);
							BgL_res3877z00_5392 = BgL_new1376z00_5379;
					}} BgL_res3877z00_5392;
				}
				return BgL_new1368z00_5369;
			}
		}
	}



/* _make-&io-error */
	obj_t BGl__makezd2z62iozd2errorz62zz__objectz00(obj_t BgL_envz00_7947,
		obj_t BgL_fname1362z00_7948, obj_t BgL_location1363z00_7949,
		obj_t BgL_stack1364z00_7950, obj_t BgL_proc1365z00_7951,
		obj_t BgL_msg1366z00_7952, obj_t BgL_obj1367z00_7953)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			return
				(obj_t) (BGl_makezd2z62iozd2errorz62zz__objectz00(BgL_fname1362z00_7948,
					BgL_location1363z00_7949, BgL_stack1364z00_7950, BgL_proc1365z00_7951,
					BgL_msg1366z00_7952, BgL_obj1367z00_7953));
		}
	}



/* fill-&io-error! */
	BGL_EXPORTED_DEF BgL_z62iozd2errorzb0_bglt
		BGl_fillzd2z62iozd2errorz12z70zz__objectz00(BgL_z62iozd2errorzb0_bglt
		BgL_new1376z00_482, obj_t BgL_fname1370z00_483,
		obj_t BgL_location1371z00_484, obj_t BgL_stack1372z00_485,
		obj_t BgL_proc1373z00_486, obj_t BgL_msg1374z00_487,
		obj_t BgL_obj1375z00_488)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			{	/* Llib/object.scm 100 */
				obj_t BgL_fname1370z00_9202;

				obj_t BgL_location1371z00_9203;

				obj_t BgL_stack1372z00_9204;

				obj_t BgL_proc1373z00_9205;

				obj_t BgL_msg1374z00_9206;

				obj_t BgL_obj1375z00_9207;

				BgL_fname1370z00_9202 = BgL_fname1370z00_483;
				BgL_location1371z00_9203 = BgL_location1371z00_484;
				BgL_stack1372z00_9204 = BgL_stack1372z00_485;
				BgL_proc1373z00_9205 = BgL_proc1373z00_486;
				BgL_msg1374z00_9206 = BgL_msg1374z00_487;
				BgL_obj1375z00_9207 = BgL_obj1375z00_488;
				((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_482))->
						BgL_fnamez00) = ((obj_t) BgL_fname1370z00_9202), BUNSPEC);
				((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_482))->
						BgL_locationz00) = ((obj_t) BgL_location1371z00_9203), BUNSPEC);
				((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_482))->
						BgL_stackz00) = ((obj_t) BgL_stack1372z00_9204), BUNSPEC);
				((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_482))->BgL_procz00) =
					((obj_t) BgL_proc1373z00_9205), BUNSPEC);
				((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_482))->BgL_msgz00) =
					((obj_t) BgL_msg1374z00_9206), BUNSPEC);
				((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_482))->BgL_objz00) =
					((obj_t) BgL_obj1375z00_9207), BUNSPEC);
				return BgL_new1376z00_482;
			}
		}
	}



/* _fill-&io-error! */
	obj_t BGl__fillzd2z62iozd2errorz12z70zz__objectz00(obj_t BgL_envz00_8239,
		obj_t BgL_new1376z00_8240, obj_t BgL_fname1370z00_8241,
		obj_t BgL_location1371z00_8242, obj_t BgL_stack1372z00_8243,
		obj_t BgL_proc1373z00_8244, obj_t BgL_msg1374z00_8245,
		obj_t BgL_obj1375z00_8246)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			{	/* Llib/object.scm 100 */
				BgL_z62iozd2errorzb0_bglt BgL_auxz00_12564;

				{	/* Llib/object.scm 100 */
					BgL_z62iozd2errorzb0_bglt BgL_res4529z00_9222;

					{	/* Llib/object.scm 100 */
						BgL_z62iozd2errorzb0_bglt BgL_new1376z00_9209;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1376z00_8240,
								BGl_z62iozd2errorzb0zz__objectz00))
							{	/* Llib/object.scm 100 */
								BgL_new1376z00_9209 =
									(BgL_z62iozd2errorzb0_bglt) (BgL_new1376z00_8240);
							}
						else
							{
								obj_t BgL_auxz00_12568;

								BgL_auxz00_12568 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3602)),
									BGl_string4400z00zz__objectz00,
									BGl_string4341z00zz__objectz00, BgL_new1376z00_8240);
								FAILURE(BgL_auxz00_12568, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 100 */
							obj_t BgL_fname1370z00_9216;

							obj_t BgL_location1371z00_9217;

							obj_t BgL_stack1372z00_9218;

							obj_t BgL_proc1373z00_9219;

							obj_t BgL_msg1374z00_9220;

							obj_t BgL_obj1375z00_9221;

							BgL_fname1370z00_9216 = BgL_fname1370z00_8241;
							BgL_location1371z00_9217 = BgL_location1371z00_8242;
							BgL_stack1372z00_9218 = BgL_stack1372z00_8243;
							BgL_proc1373z00_9219 = BgL_proc1373z00_8244;
							BgL_msg1374z00_9220 = BgL_msg1374z00_8245;
							BgL_obj1375z00_9221 = BgL_obj1375z00_8246;
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_9209))->
									BgL_fnamez00) = ((obj_t) BgL_fname1370z00_9216), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_9209))->
									BgL_locationz00) =
								((obj_t) BgL_location1371z00_9217), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_9209))->
									BgL_stackz00) = ((obj_t) BgL_stack1372z00_9218), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_9209))->
									BgL_procz00) = ((obj_t) BgL_proc1373z00_9219), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_9209))->
									BgL_msgz00) = ((obj_t) BgL_msg1374z00_9220), BUNSPEC);
							((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_9209))->
									BgL_objz00) = ((obj_t) BgL_obj1375z00_9221), BUNSPEC);
							BgL_res4529z00_9222 = BgL_new1376z00_9209;
					}}
					BgL_auxz00_12564 = BgL_res4529z00_9222;
				}
				return (obj_t) (BgL_auxz00_12564);
			}
		}
	}



/* %allocate-&io-error */
	BGL_EXPORTED_DEF BgL_z62iozd2errorzb0_bglt
		BGl_z52allocatezd2z62iozd2errorz30zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			{	/* Llib/object.scm 100 */
				BgL_z62iozd2errorzb0_bglt BgL_new1384z00_9223;

				BgL_new1384z00_9223 =
					((BgL_z62iozd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62iozd2errorzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1384z00_9223),
					BGl_classzd2numzd2zz__objectz00(BGl_z62iozd2errorzb0zz__objectz00));
				{	/* Llib/object.scm 100 */
					BgL_objectz00_bglt BgL_auxz00_12583;

					BgL_auxz00_12583 = (BgL_objectz00_bglt) (BgL_new1384z00_9223);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12583, BFALSE);
				}
				return BgL_new1384z00_9223;
			}
		}
	}



/* _%allocate-&io-error */
	obj_t BGl__z52allocatezd2z62iozd2errorz30zz__objectz00(obj_t BgL_envz00_7954)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			{	/* Llib/object.scm 100 */
				BgL_z62iozd2errorzb0_bglt BgL_auxz00_12586;

				{	/* Llib/object.scm 100 */
					BgL_z62iozd2errorzb0_bglt BgL_res4530z00_9227;

					{	/* Llib/object.scm 100 */
						BgL_z62iozd2errorzb0_bglt BgL_new1384z00_9225;

						BgL_new1384z00_9225 =
							((BgL_z62iozd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62iozd2errorzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1384z00_9225),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62iozd2errorzb0zz__objectz00));
						{	/* Llib/object.scm 100 */
							BgL_objectz00_bglt BgL_auxz00_12591;

							BgL_auxz00_12591 = (BgL_objectz00_bglt) (BgL_new1384z00_9225);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12591, BFALSE);
						}
						BgL_res4530z00_9227 = BgL_new1384z00_9225;
					}
					BgL_auxz00_12586 = BgL_res4530z00_9227;
				}
				return (obj_t) (BgL_auxz00_12586);
			}
		}
	}



/* &io-error-nil */
	BGL_EXPORTED_DEF BgL_z62iozd2errorzb0_bglt
		BGl_z62iozd2errorzd2nilz62zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			if ((BGl_z52thezd2z62iozd2errorzd2nilze2zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 100 */
					{	/* Llib/object.scm 100 */
						BgL_z62iozd2errorzb0_bglt BgL_res3879z00_5411;

						{	/* Llib/object.scm 100 */
							BgL_z62iozd2errorzb0_bglt BgL_new1384z00_5403;

							BgL_new1384z00_5403 =
								((BgL_z62iozd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62iozd2errorzb0_bgl))));
							{	/* Llib/object.scm 100 */
								long BgL_arg3135z00_5404;

								{	/* Llib/object.scm 100 */
									long BgL_res3878z00_5408;

									{	/* Llib/object.scm 100 */
										obj_t BgL_classz00_5405;

										BgL_classz00_5405 = BGl_z62iozd2errorzb0zz__objectz00;
										{	/* Llib/object.scm 100 */
											obj_t BgL_vectorz00_5406;

											int BgL_kz00_5407;

											BgL_vectorz00_5406 = BgL_classz00_5405;
											BgL_kz00_5407 = (int) (((long) 1));
											BgL_res3878z00_5408 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5406,
													BgL_kz00_5407));
									}}
									BgL_arg3135z00_5404 = BgL_res3878z00_5408;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1384z00_5403),
									BgL_arg3135z00_5404);
							}
							{	/* Llib/object.scm 100 */
								BgL_objectz00_bglt BgL_auxz00_12603;

								BgL_auxz00_12603 = (BgL_objectz00_bglt) (BgL_new1384z00_5403);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12603, BFALSE);
							}
							BgL_res3879z00_5411 = BgL_new1384z00_5403;
						}
						BGl_z52thezd2z62iozd2errorzd2nilze2zz__objectz00 =
							(obj_t) (BgL_res3879z00_5411);
					}
					{	/* Llib/object.scm 100 */
						BgL_z62iozd2errorzb0_bglt BgL_res3880z00_5425;

						{	/* Llib/object.scm 100 */
							BgL_z62iozd2errorzb0_bglt BgL_new1376z00_5412;

							BgL_new1376z00_5412 =
								(BgL_z62iozd2errorzb0_bglt)
								(BGl_z52thezd2z62iozd2errorzd2nilze2zz__objectz00);
							{	/* Llib/object.scm 100 */
								obj_t BgL_fname1370z00_5419;

								obj_t BgL_location1371z00_5420;

								obj_t BgL_stack1372z00_5421;

								obj_t BgL_proc1373z00_5422;

								obj_t BgL_msg1374z00_5423;

								obj_t BgL_obj1375z00_5424;

								BgL_fname1370z00_5419 = BUNSPEC;
								BgL_location1371z00_5420 = BUNSPEC;
								BgL_stack1372z00_5421 = BUNSPEC;
								BgL_proc1373z00_5422 = BUNSPEC;
								BgL_msg1374z00_5423 = BUNSPEC;
								BgL_obj1375z00_5424 = BUNSPEC;
								((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5412))->
										BgL_fnamez00) = ((obj_t) BgL_fname1370z00_5419), BUNSPEC);
								((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5412))->
										BgL_locationz00) =
									((obj_t) BgL_location1371z00_5420), BUNSPEC);
								((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5412))->
										BgL_stackz00) = ((obj_t) BgL_stack1372z00_5421), BUNSPEC);
								((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5412))->
										BgL_procz00) = ((obj_t) BgL_proc1373z00_5422), BUNSPEC);
								((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5412))->
										BgL_msgz00) = ((obj_t) BgL_msg1374z00_5423), BUNSPEC);
								((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_new1376z00_5412))->
										BgL_objz00) = ((obj_t) BgL_obj1375z00_5424), BUNSPEC);
								BgL_res3880z00_5425 = BgL_new1376z00_5412;
						}}
						(obj_t) (BgL_res3880z00_5425);
				}}
			else
				{	/* Llib/object.scm 100 */
					BFALSE;
				}
			return
				(BgL_z62iozd2errorzb0_bglt)
				(BGl_z52thezd2z62iozd2errorzd2nilze2zz__objectz00);
		}
	}



/* _&io-error-nil */
	obj_t BGl__z62iozd2errorzd2nilz62zz__objectz00(obj_t BgL_envz00_7955)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			return (obj_t) (BGl_z62iozd2errorzd2nilz62zz__objectz00());
		}
	}



/* &index-out-of-bounds-error? */
	BGL_EXPORTED_DEF bool_t
		BGl_z62indexzd2outzd2ofzd2boundszd2errorzf3z91zz__objectz00(obj_t
		BgL_obj1349z00_489)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1349z00_489,
				BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00);
		}
	}



/* _&index-out-of-bounds-error? */
	obj_t BGl__z62indexzd2outzd2ofzd2boundszd2errorzf3z91zz__objectz00(obj_t
		BgL_envz00_7945, obj_t BgL_obj1349z00_7946)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1349z00_7946,
					BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00));
		}
	}



/* make-&index-out-of-bounds-error */
	BGL_EXPORTED_DEF BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00(obj_t
		BgL_fname1293z00_493, obj_t BgL_location1294z00_494,
		obj_t BgL_stack1295z00_495, obj_t BgL_proc1296z00_496,
		obj_t BgL_msg1297z00_497, obj_t BgL_obj1298z00_498,
		obj_t BgL_index1299z00_499)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			{	/* Llib/object.scm 98 */
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1300z00_5426;

				{	/* Llib/object.scm 98 */
					BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_res3882z00_5435;

					{	/* Llib/object.scm 98 */
						BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
							BgL_new1318z00_5427;
						BgL_new1318z00_5427 =
							((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl))));
						{	/* Llib/object.scm 98 */
							long BgL_arg3137z00_5428;

							{	/* Llib/object.scm 98 */
								long BgL_res3881z00_5432;

								{	/* Llib/object.scm 98 */
									obj_t BgL_classz00_5429;

									BgL_classz00_5429 =
										BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00;
									{	/* Llib/object.scm 98 */
										obj_t BgL_vectorz00_5430;

										int BgL_kz00_5431;

										BgL_vectorz00_5430 = BgL_classz00_5429;
										BgL_kz00_5431 = (int) (((long) 1));
										BgL_res3881z00_5432 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5430,
												BgL_kz00_5431));
								}}
								BgL_arg3137z00_5428 = BgL_res3881z00_5432;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1318z00_5427),
								BgL_arg3137z00_5428);
						}
						{	/* Llib/object.scm 98 */
							BgL_objectz00_bglt BgL_auxz00_12627;

							BgL_auxz00_12627 = (BgL_objectz00_bglt) (BgL_new1318z00_5427);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12627, BFALSE);
						}
						BgL_res3882z00_5435 = BgL_new1318z00_5427;
					}
					BgL_new1300z00_5426 = BgL_res3882z00_5435;
				}
				{	/* Llib/object.scm 98 */
					BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_res3883z00_5451;

					{	/* Llib/object.scm 98 */
						BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
							BgL_new1309z00_5436;
						BgL_new1309z00_5436 = BgL_new1300z00_5426;
						{	/* Llib/object.scm 98 */
							obj_t BgL_fname1302z00_5444;

							obj_t BgL_location1303z00_5445;

							obj_t BgL_stack1304z00_5446;

							obj_t BgL_proc1305z00_5447;

							obj_t BgL_msg1306z00_5448;

							obj_t BgL_obj1307z00_5449;

							obj_t BgL_index1308z00_5450;

							BgL_fname1302z00_5444 = BgL_fname1293z00_493;
							BgL_location1303z00_5445 = BgL_location1294z00_494;
							BgL_stack1304z00_5446 = BgL_stack1295z00_495;
							BgL_proc1305z00_5447 = BgL_proc1296z00_496;
							BgL_msg1306z00_5448 = BgL_msg1297z00_497;
							BgL_obj1307z00_5449 = BgL_obj1298z00_498;
							BgL_index1308z00_5450 = BgL_index1299z00_499;
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_5436))->BgL_fnamez00) =
								((obj_t) BgL_fname1302z00_5444), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_5436))->BgL_locationz00) =
								((obj_t) BgL_location1303z00_5445), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_5436))->BgL_stackz00) =
								((obj_t) BgL_stack1304z00_5446), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_5436))->BgL_procz00) =
								((obj_t) BgL_proc1305z00_5447), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_5436))->BgL_msgz00) =
								((obj_t) BgL_msg1306z00_5448), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_5436))->BgL_objz00) =
								((obj_t) BgL_obj1307z00_5449), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_5436))->BgL_indexz00) =
								((obj_t) BgL_index1308z00_5450), BUNSPEC);
							BgL_res3883z00_5451 = BgL_new1309z00_5436;
					}} BgL_res3883z00_5451;
				}
				return BgL_new1300z00_5426;
			}
		}
	}



/* _make-&index-out-of-bounds-error */
	obj_t BGl__makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00(obj_t
		BgL_envz00_7933, obj_t BgL_fname1293z00_7934,
		obj_t BgL_location1294z00_7935, obj_t BgL_stack1295z00_7936,
		obj_t BgL_proc1296z00_7937, obj_t BgL_msg1297z00_7938,
		obj_t BgL_obj1298z00_7939, obj_t BgL_index1299z00_7940)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			return
				(obj_t) (BGl_makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00
				(BgL_fname1293z00_7934, BgL_location1294z00_7935, BgL_stack1295z00_7936,
					BgL_proc1296z00_7937, BgL_msg1297z00_7938, BgL_obj1298z00_7939,
					BgL_index1299z00_7940));
		}
	}



/* fill-&index-out-of-bounds-error! */
	BGL_EXPORTED_DEF BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_fillzd2z62indexzd2outzd2ofzd2boundszd2errorz12za2zz__objectz00
		(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1309z00_500,
		obj_t BgL_fname1302z00_501, obj_t BgL_location1303z00_502,
		obj_t BgL_stack1304z00_503, obj_t BgL_proc1305z00_504,
		obj_t BgL_msg1306z00_505, obj_t BgL_obj1307z00_506,
		obj_t BgL_index1308z00_507)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			{	/* Llib/object.scm 98 */
				obj_t BgL_fname1302z00_9229;

				obj_t BgL_location1303z00_9230;

				obj_t BgL_stack1304z00_9231;

				obj_t BgL_proc1305z00_9232;

				obj_t BgL_msg1306z00_9233;

				obj_t BgL_obj1307z00_9234;

				obj_t BgL_index1308z00_9235;

				BgL_fname1302z00_9229 = BgL_fname1302z00_501;
				BgL_location1303z00_9230 = BgL_location1303z00_502;
				BgL_stack1304z00_9231 = BgL_stack1304z00_503;
				BgL_proc1305z00_9232 = BgL_proc1305z00_504;
				BgL_msg1306z00_9233 = BgL_msg1306z00_505;
				BgL_obj1307z00_9234 = BgL_obj1307z00_506;
				BgL_index1308z00_9235 = BgL_index1308z00_507;
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							CREF(BgL_new1309z00_500))->BgL_fnamez00) =
					((obj_t) BgL_fname1302z00_9229), BUNSPEC);
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							CREF(BgL_new1309z00_500))->BgL_locationz00) =
					((obj_t) BgL_location1303z00_9230), BUNSPEC);
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							CREF(BgL_new1309z00_500))->BgL_stackz00) =
					((obj_t) BgL_stack1304z00_9231), BUNSPEC);
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							CREF(BgL_new1309z00_500))->BgL_procz00) =
					((obj_t) BgL_proc1305z00_9232), BUNSPEC);
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							CREF(BgL_new1309z00_500))->BgL_msgz00) =
					((obj_t) BgL_msg1306z00_9233), BUNSPEC);
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							CREF(BgL_new1309z00_500))->BgL_objz00) =
					((obj_t) BgL_obj1307z00_9234), BUNSPEC);
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							CREF(BgL_new1309z00_500))->BgL_indexz00) =
					((obj_t) BgL_index1308z00_9235), BUNSPEC);
				return BgL_new1309z00_500;
			}
		}
	}



/* _fill-&index-out-of-bounds-error! */
	obj_t
		BGl__fillzd2z62indexzd2outzd2ofzd2boundszd2errorz12za2zz__objectz00(obj_t
		BgL_envz00_8247, obj_t BgL_new1309z00_8248, obj_t BgL_fname1302z00_8249,
		obj_t BgL_location1303z00_8250, obj_t BgL_stack1304z00_8251,
		obj_t BgL_proc1305z00_8252, obj_t BgL_msg1306z00_8253,
		obj_t BgL_obj1307z00_8254, obj_t BgL_index1308z00_8255)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			{	/* Llib/object.scm 98 */
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_auxz00_12646;

				{	/* Llib/object.scm 98 */
					BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_res4531z00_9252;

					{	/* Llib/object.scm 98 */
						BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
							BgL_new1309z00_9237;
						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1309z00_8248,
								BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00))
							{	/* Llib/object.scm 98 */
								BgL_new1309z00_9237 =
									(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									(BgL_new1309z00_8248);
							}
						else
							{
								obj_t BgL_auxz00_12650;

								BgL_auxz00_12650 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3528)),
									BGl_string4401z00zz__objectz00,
									BGl_string4337z00zz__objectz00, BgL_new1309z00_8248);
								FAILURE(BgL_auxz00_12650, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 98 */
							obj_t BgL_fname1302z00_9245;

							obj_t BgL_location1303z00_9246;

							obj_t BgL_stack1304z00_9247;

							obj_t BgL_proc1305z00_9248;

							obj_t BgL_msg1306z00_9249;

							obj_t BgL_obj1307z00_9250;

							obj_t BgL_index1308z00_9251;

							BgL_fname1302z00_9245 = BgL_fname1302z00_8249;
							BgL_location1303z00_9246 = BgL_location1303z00_8250;
							BgL_stack1304z00_9247 = BgL_stack1304z00_8251;
							BgL_proc1305z00_9248 = BgL_proc1305z00_8252;
							BgL_msg1306z00_9249 = BgL_msg1306z00_8253;
							BgL_obj1307z00_9250 = BgL_obj1307z00_8254;
							BgL_index1308z00_9251 = BgL_index1308z00_8255;
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_9237))->BgL_fnamez00) =
								((obj_t) BgL_fname1302z00_9245), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_9237))->BgL_locationz00) =
								((obj_t) BgL_location1303z00_9246), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_9237))->BgL_stackz00) =
								((obj_t) BgL_stack1304z00_9247), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_9237))->BgL_procz00) =
								((obj_t) BgL_proc1305z00_9248), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_9237))->BgL_msgz00) =
								((obj_t) BgL_msg1306z00_9249), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_9237))->BgL_objz00) =
								((obj_t) BgL_obj1307z00_9250), BUNSPEC);
							((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										CREF(BgL_new1309z00_9237))->BgL_indexz00) =
								((obj_t) BgL_index1308z00_9251), BUNSPEC);
							BgL_res4531z00_9252 = BgL_new1309z00_9237;
					}}
					BgL_auxz00_12646 = BgL_res4531z00_9252;
				}
				return (obj_t) (BgL_auxz00_12646);
			}
		}
	}



/* %allocate-&index-out-of-bounds-error */
	BGL_EXPORTED_DEF BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_z52allocatezd2z62indexzd2outzd2ofzd2boundszd2errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			{	/* Llib/object.scm 98 */
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1318z00_9253;

				BgL_new1318z00_9253 =
					((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1318z00_9253),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00));
				{	/* Llib/object.scm 98 */
					BgL_objectz00_bglt BgL_auxz00_12666;

					BgL_auxz00_12666 = (BgL_objectz00_bglt) (BgL_new1318z00_9253);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12666, BFALSE);
				}
				return BgL_new1318z00_9253;
			}
		}
	}



/* _%allocate-&index-out-of-bounds-error */
	obj_t
		BGl__z52allocatezd2z62indexzd2outzd2ofzd2boundszd2errorze2zz__objectz00
		(obj_t BgL_envz00_7941)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			{	/* Llib/object.scm 98 */
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_auxz00_12669;

				{	/* Llib/object.scm 98 */
					BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_res4532z00_9257;

					{	/* Llib/object.scm 98 */
						BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
							BgL_new1318z00_9255;
						BgL_new1318z00_9255 =
							((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1318z00_9255),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00));
						{	/* Llib/object.scm 98 */
							BgL_objectz00_bglt BgL_auxz00_12674;

							BgL_auxz00_12674 = (BgL_objectz00_bglt) (BgL_new1318z00_9255);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12674, BFALSE);
						}
						BgL_res4532z00_9257 = BgL_new1318z00_9255;
					}
					BgL_auxz00_12669 = BgL_res4532z00_9257;
				}
				return (obj_t) (BgL_auxz00_12669);
			}
		}
	}



/* &index-out-of-bounds-error-nil */
	BGL_EXPORTED_DEF BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			if (
				(BGl_z52thezd2z62indexzd2outzd2ofzd2boundszd2errorzd2nilz30zz__objectz00
					== BUNSPEC))
				{	/* Llib/object.scm 98 */
					{	/* Llib/object.scm 98 */
						BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
							BgL_res3885z00_5471;
						{	/* Llib/object.scm 98 */
							BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
								BgL_new1318z00_5463;
							BgL_new1318z00_5463 =
								((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl))));
							{	/* Llib/object.scm 98 */
								long BgL_arg3137z00_5464;

								{	/* Llib/object.scm 98 */
									long BgL_res3884z00_5468;

									{	/* Llib/object.scm 98 */
										obj_t BgL_classz00_5465;

										BgL_classz00_5465 =
											BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00;
										{	/* Llib/object.scm 98 */
											obj_t BgL_vectorz00_5466;

											int BgL_kz00_5467;

											BgL_vectorz00_5466 = BgL_classz00_5465;
											BgL_kz00_5467 = (int) (((long) 1));
											BgL_res3884z00_5468 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5466,
													BgL_kz00_5467));
									}}
									BgL_arg3137z00_5464 = BgL_res3884z00_5468;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1318z00_5463),
									BgL_arg3137z00_5464);
							}
							{	/* Llib/object.scm 98 */
								BgL_objectz00_bglt BgL_auxz00_12686;

								BgL_auxz00_12686 = (BgL_objectz00_bglt) (BgL_new1318z00_5463);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12686, BFALSE);
							}
							BgL_res3885z00_5471 = BgL_new1318z00_5463;
						}
						BGl_z52thezd2z62indexzd2outzd2ofzd2boundszd2errorzd2nilz30zz__objectz00
							= (obj_t) (BgL_res3885z00_5471);
					}
					{	/* Llib/object.scm 98 */
						BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
							BgL_res3886z00_5487;
						{	/* Llib/object.scm 98 */
							BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
								BgL_new1309z00_5472;
							BgL_new1309z00_5472 =
								(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
								(BGl_z52thezd2z62indexzd2outzd2ofzd2boundszd2errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 98 */
								obj_t BgL_fname1302z00_5480;

								obj_t BgL_location1303z00_5481;

								obj_t BgL_stack1304z00_5482;

								obj_t BgL_proc1305z00_5483;

								obj_t BgL_msg1306z00_5484;

								obj_t BgL_obj1307z00_5485;

								obj_t BgL_index1308z00_5486;

								BgL_fname1302z00_5480 = BUNSPEC;
								BgL_location1303z00_5481 = BUNSPEC;
								BgL_stack1304z00_5482 = BUNSPEC;
								BgL_proc1305z00_5483 = BUNSPEC;
								BgL_msg1306z00_5484 = BUNSPEC;
								BgL_obj1307z00_5485 = BUNSPEC;
								BgL_index1308z00_5486 = BUNSPEC;
								((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
											CREF(BgL_new1309z00_5472))->BgL_fnamez00) =
									((obj_t) BgL_fname1302z00_5480), BUNSPEC);
								((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
											CREF(BgL_new1309z00_5472))->BgL_locationz00) =
									((obj_t) BgL_location1303z00_5481), BUNSPEC);
								((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
											CREF(BgL_new1309z00_5472))->BgL_stackz00) =
									((obj_t) BgL_stack1304z00_5482), BUNSPEC);
								((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
											CREF(BgL_new1309z00_5472))->BgL_procz00) =
									((obj_t) BgL_proc1305z00_5483), BUNSPEC);
								((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
											CREF(BgL_new1309z00_5472))->BgL_msgz00) =
									((obj_t) BgL_msg1306z00_5484), BUNSPEC);
								((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
											CREF(BgL_new1309z00_5472))->BgL_objz00) =
									((obj_t) BgL_obj1307z00_5485), BUNSPEC);
								((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
											CREF(BgL_new1309z00_5472))->BgL_indexz00) =
									((obj_t) BgL_index1308z00_5486), BUNSPEC);
								BgL_res3886z00_5487 = BgL_new1309z00_5472;
						}}
						(obj_t) (BgL_res3886z00_5487);
				}}
			else
				{	/* Llib/object.scm 98 */
					BFALSE;
				}
			return
				(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
				(BGl_z52thezd2z62indexzd2outzd2ofzd2boundszd2errorzd2nilz30zz__objectz00);
		}
	}



/* _&index-out-of-bounds-error-nil */
	obj_t BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2nilzb0zz__objectz00(obj_t
		BgL_envz00_7944)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			return
				(obj_t) (BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2nilzb0zz__objectz00
				());
		}
	}



/* _&index-out-of-bounds-error-index */
	obj_t BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2indexzb0zz__objectz00(obj_t
		BgL_envz00_7942, obj_t BgL_obj1292z00_7943)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 99 */
			{	/* Llib/object.scm 99 */
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_obj1292z00_9259;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1292z00_7943,
						BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00))
					{	/* Llib/object.scm 99 */
						BgL_obj1292z00_9259 =
							(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							(BgL_obj1292z00_7943);
					}
				else
					{
						obj_t BgL_auxz00_12705;

						BgL_auxz00_12705 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3578)), BGl_string4402z00zz__objectz00,
							BGl_string4337z00zz__objectz00, BgL_obj1292z00_7943);
						FAILURE(BgL_auxz00_12705, BFALSE, BFALSE);
					}
				return
					(((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
						CREF(BgL_obj1292z00_9259))->BgL_indexz00);
			}
		}
	}



/* &type-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62typezd2errorzf3z43zz__objectz00(obj_t
		BgL_obj1279z00_509)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1279z00_509,
				BGl_z62typezd2errorzb0zz__objectz00);
		}
	}



/* _&type-error? */
	obj_t BGl__z62typezd2errorzf3z43zz__objectz00(obj_t BgL_envz00_7931,
		obj_t BgL_obj1279z00_7932)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1279z00_7932,
					BGl_z62typezd2errorzb0zz__objectz00));
		}
	}



/* make-&type-error */
	BGL_EXPORTED_DEF BgL_z62typezd2errorzb0_bglt
		BGl_makezd2z62typezd2errorz62zz__objectz00(obj_t BgL_fname1223z00_513,
		obj_t BgL_location1224z00_514, obj_t BgL_stack1225z00_515,
		obj_t BgL_proc1226z00_516, obj_t BgL_msg1227z00_517,
		obj_t BgL_obj1228z00_518, obj_t BgL_type1229z00_519)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			{	/* Llib/object.scm 96 */
				BgL_z62typezd2errorzb0_bglt BgL_new1230z00_5488;

				{	/* Llib/object.scm 96 */
					BgL_z62typezd2errorzb0_bglt BgL_res3888z00_5497;

					{	/* Llib/object.scm 96 */
						BgL_z62typezd2errorzb0_bglt BgL_new1248z00_5489;

						BgL_new1248z00_5489 =
							((BgL_z62typezd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62typezd2errorzb0_bgl))));
						{	/* Llib/object.scm 96 */
							long BgL_arg3139z00_5490;

							{	/* Llib/object.scm 96 */
								long BgL_res3887z00_5494;

								{	/* Llib/object.scm 96 */
									obj_t BgL_classz00_5491;

									BgL_classz00_5491 = BGl_z62typezd2errorzb0zz__objectz00;
									{	/* Llib/object.scm 96 */
										obj_t BgL_vectorz00_5492;

										int BgL_kz00_5493;

										BgL_vectorz00_5492 = BgL_classz00_5491;
										BgL_kz00_5493 = (int) (((long) 1));
										BgL_res3887z00_5494 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5492,
												BgL_kz00_5493));
								}}
								BgL_arg3139z00_5490 = BgL_res3887z00_5494;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1248z00_5489),
								BgL_arg3139z00_5490);
						}
						{	/* Llib/object.scm 96 */
							BgL_objectz00_bglt BgL_auxz00_12719;

							BgL_auxz00_12719 = (BgL_objectz00_bglt) (BgL_new1248z00_5489);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12719, BFALSE);
						}
						BgL_res3888z00_5497 = BgL_new1248z00_5489;
					}
					BgL_new1230z00_5488 = BgL_res3888z00_5497;
				}
				{	/* Llib/object.scm 96 */
					BgL_z62typezd2errorzb0_bglt BgL_res3889z00_5513;

					{	/* Llib/object.scm 96 */
						BgL_z62typezd2errorzb0_bglt BgL_new1239z00_5498;

						BgL_new1239z00_5498 = BgL_new1230z00_5488;
						{	/* Llib/object.scm 96 */
							obj_t BgL_fname1232z00_5506;

							obj_t BgL_location1233z00_5507;

							obj_t BgL_stack1234z00_5508;

							obj_t BgL_proc1235z00_5509;

							obj_t BgL_msg1236z00_5510;

							obj_t BgL_obj1237z00_5511;

							obj_t BgL_type1238z00_5512;

							BgL_fname1232z00_5506 = BgL_fname1223z00_513;
							BgL_location1233z00_5507 = BgL_location1224z00_514;
							BgL_stack1234z00_5508 = BgL_stack1225z00_515;
							BgL_proc1235z00_5509 = BgL_proc1226z00_516;
							BgL_msg1236z00_5510 = BgL_msg1227z00_517;
							BgL_obj1237z00_5511 = BgL_obj1228z00_518;
							BgL_type1238z00_5512 = BgL_type1229z00_519;
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5498))->
									BgL_fnamez00) = ((obj_t) BgL_fname1232z00_5506), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5498))->
									BgL_locationz00) =
								((obj_t) BgL_location1233z00_5507), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5498))->
									BgL_stackz00) = ((obj_t) BgL_stack1234z00_5508), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5498))->
									BgL_procz00) = ((obj_t) BgL_proc1235z00_5509), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5498))->
									BgL_msgz00) = ((obj_t) BgL_msg1236z00_5510), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5498))->
									BgL_objz00) = ((obj_t) BgL_obj1237z00_5511), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5498))->
									BgL_typez00) = ((obj_t) BgL_type1238z00_5512), BUNSPEC);
							BgL_res3889z00_5513 = BgL_new1239z00_5498;
					}} BgL_res3889z00_5513;
				}
				return BgL_new1230z00_5488;
			}
		}
	}



/* _make-&type-error */
	obj_t BGl__makezd2z62typezd2errorz62zz__objectz00(obj_t BgL_envz00_7919,
		obj_t BgL_fname1223z00_7920, obj_t BgL_location1224z00_7921,
		obj_t BgL_stack1225z00_7922, obj_t BgL_proc1226z00_7923,
		obj_t BgL_msg1227z00_7924, obj_t BgL_obj1228z00_7925,
		obj_t BgL_type1229z00_7926)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			return
				(obj_t) (BGl_makezd2z62typezd2errorz62zz__objectz00
				(BgL_fname1223z00_7920, BgL_location1224z00_7921, BgL_stack1225z00_7922,
					BgL_proc1226z00_7923, BgL_msg1227z00_7924, BgL_obj1228z00_7925,
					BgL_type1229z00_7926));
		}
	}



/* fill-&type-error! */
	BGL_EXPORTED_DEF BgL_z62typezd2errorzb0_bglt
		BGl_fillzd2z62typezd2errorz12z70zz__objectz00(BgL_z62typezd2errorzb0_bglt
		BgL_new1239z00_520, obj_t BgL_fname1232z00_521,
		obj_t BgL_location1233z00_522, obj_t BgL_stack1234z00_523,
		obj_t BgL_proc1235z00_524, obj_t BgL_msg1236z00_525,
		obj_t BgL_obj1237z00_526, obj_t BgL_type1238z00_527)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			{	/* Llib/object.scm 96 */
				obj_t BgL_fname1232z00_9261;

				obj_t BgL_location1233z00_9262;

				obj_t BgL_stack1234z00_9263;

				obj_t BgL_proc1235z00_9264;

				obj_t BgL_msg1236z00_9265;

				obj_t BgL_obj1237z00_9266;

				obj_t BgL_type1238z00_9267;

				BgL_fname1232z00_9261 = BgL_fname1232z00_521;
				BgL_location1233z00_9262 = BgL_location1233z00_522;
				BgL_stack1234z00_9263 = BgL_stack1234z00_523;
				BgL_proc1235z00_9264 = BgL_proc1235z00_524;
				BgL_msg1236z00_9265 = BgL_msg1236z00_525;
				BgL_obj1237z00_9266 = BgL_obj1237z00_526;
				BgL_type1238z00_9267 = BgL_type1238z00_527;
				((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_520))->
						BgL_fnamez00) = ((obj_t) BgL_fname1232z00_9261), BUNSPEC);
				((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_520))->
						BgL_locationz00) = ((obj_t) BgL_location1233z00_9262), BUNSPEC);
				((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_520))->
						BgL_stackz00) = ((obj_t) BgL_stack1234z00_9263), BUNSPEC);
				((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_520))->
						BgL_procz00) = ((obj_t) BgL_proc1235z00_9264), BUNSPEC);
				((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_520))->
						BgL_msgz00) = ((obj_t) BgL_msg1236z00_9265), BUNSPEC);
				((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_520))->
						BgL_objz00) = ((obj_t) BgL_obj1237z00_9266), BUNSPEC);
				((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_520))->
						BgL_typez00) = ((obj_t) BgL_type1238z00_9267), BUNSPEC);
				return BgL_new1239z00_520;
			}
		}
	}



/* _fill-&type-error! */
	obj_t BGl__fillzd2z62typezd2errorz12z70zz__objectz00(obj_t BgL_envz00_8256,
		obj_t BgL_new1239z00_8257, obj_t BgL_fname1232z00_8258,
		obj_t BgL_location1233z00_8259, obj_t BgL_stack1234z00_8260,
		obj_t BgL_proc1235z00_8261, obj_t BgL_msg1236z00_8262,
		obj_t BgL_obj1237z00_8263, obj_t BgL_type1238z00_8264)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			{	/* Llib/object.scm 96 */
				BgL_z62typezd2errorzb0_bglt BgL_auxz00_12738;

				{	/* Llib/object.scm 96 */
					BgL_z62typezd2errorzb0_bglt BgL_res4533z00_9284;

					{	/* Llib/object.scm 96 */
						BgL_z62typezd2errorzb0_bglt BgL_new1239z00_9269;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1239z00_8257,
								BGl_z62typezd2errorzb0zz__objectz00))
							{	/* Llib/object.scm 96 */
								BgL_new1239z00_9269 =
									(BgL_z62typezd2errorzb0_bglt) (BgL_new1239z00_8257);
							}
						else
							{
								obj_t BgL_auxz00_12742;

								BgL_auxz00_12742 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3470)),
									BGl_string4403z00zz__objectz00,
									BGl_string4333z00zz__objectz00, BgL_new1239z00_8257);
								FAILURE(BgL_auxz00_12742, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 96 */
							obj_t BgL_fname1232z00_9277;

							obj_t BgL_location1233z00_9278;

							obj_t BgL_stack1234z00_9279;

							obj_t BgL_proc1235z00_9280;

							obj_t BgL_msg1236z00_9281;

							obj_t BgL_obj1237z00_9282;

							obj_t BgL_type1238z00_9283;

							BgL_fname1232z00_9277 = BgL_fname1232z00_8258;
							BgL_location1233z00_9278 = BgL_location1233z00_8259;
							BgL_stack1234z00_9279 = BgL_stack1234z00_8260;
							BgL_proc1235z00_9280 = BgL_proc1235z00_8261;
							BgL_msg1236z00_9281 = BgL_msg1236z00_8262;
							BgL_obj1237z00_9282 = BgL_obj1237z00_8263;
							BgL_type1238z00_9283 = BgL_type1238z00_8264;
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_9269))->
									BgL_fnamez00) = ((obj_t) BgL_fname1232z00_9277), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_9269))->
									BgL_locationz00) =
								((obj_t) BgL_location1233z00_9278), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_9269))->
									BgL_stackz00) = ((obj_t) BgL_stack1234z00_9279), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_9269))->
									BgL_procz00) = ((obj_t) BgL_proc1235z00_9280), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_9269))->
									BgL_msgz00) = ((obj_t) BgL_msg1236z00_9281), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_9269))->
									BgL_objz00) = ((obj_t) BgL_obj1237z00_9282), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_9269))->
									BgL_typez00) = ((obj_t) BgL_type1238z00_9283), BUNSPEC);
							BgL_res4533z00_9284 = BgL_new1239z00_9269;
					}}
					BgL_auxz00_12738 = BgL_res4533z00_9284;
				}
				return (obj_t) (BgL_auxz00_12738);
			}
		}
	}



/* %allocate-&type-error */
	BGL_EXPORTED_DEF BgL_z62typezd2errorzb0_bglt
		BGl_z52allocatezd2z62typezd2errorz30zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			{	/* Llib/object.scm 96 */
				BgL_z62typezd2errorzb0_bglt BgL_new1248z00_9285;

				BgL_new1248z00_9285 =
					((BgL_z62typezd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62typezd2errorzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1248z00_9285),
					BGl_classzd2numzd2zz__objectz00(BGl_z62typezd2errorzb0zz__objectz00));
				{	/* Llib/object.scm 96 */
					BgL_objectz00_bglt BgL_auxz00_12758;

					BgL_auxz00_12758 = (BgL_objectz00_bglt) (BgL_new1248z00_9285);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12758, BFALSE);
				}
				return BgL_new1248z00_9285;
			}
		}
	}



/* _%allocate-&type-error */
	obj_t BGl__z52allocatezd2z62typezd2errorz30zz__objectz00(obj_t
		BgL_envz00_7927)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			{	/* Llib/object.scm 96 */
				BgL_z62typezd2errorzb0_bglt BgL_auxz00_12761;

				{	/* Llib/object.scm 96 */
					BgL_z62typezd2errorzb0_bglt BgL_res4534z00_9289;

					{	/* Llib/object.scm 96 */
						BgL_z62typezd2errorzb0_bglt BgL_new1248z00_9287;

						BgL_new1248z00_9287 =
							((BgL_z62typezd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62typezd2errorzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1248z00_9287),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62typezd2errorzb0zz__objectz00));
						{	/* Llib/object.scm 96 */
							BgL_objectz00_bglt BgL_auxz00_12766;

							BgL_auxz00_12766 = (BgL_objectz00_bglt) (BgL_new1248z00_9287);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12766, BFALSE);
						}
						BgL_res4534z00_9289 = BgL_new1248z00_9287;
					}
					BgL_auxz00_12761 = BgL_res4534z00_9289;
				}
				return (obj_t) (BgL_auxz00_12761);
			}
		}
	}



/* &type-error-nil */
	BGL_EXPORTED_DEF BgL_z62typezd2errorzb0_bglt
		BGl_z62typezd2errorzd2nilz62zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			if ((BGl_z52thezd2z62typezd2errorzd2nilze2zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 96 */
					{	/* Llib/object.scm 96 */
						BgL_z62typezd2errorzb0_bglt BgL_res3891z00_5533;

						{	/* Llib/object.scm 96 */
							BgL_z62typezd2errorzb0_bglt BgL_new1248z00_5525;

							BgL_new1248z00_5525 =
								((BgL_z62typezd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62typezd2errorzb0_bgl))));
							{	/* Llib/object.scm 96 */
								long BgL_arg3139z00_5526;

								{	/* Llib/object.scm 96 */
									long BgL_res3890z00_5530;

									{	/* Llib/object.scm 96 */
										obj_t BgL_classz00_5527;

										BgL_classz00_5527 = BGl_z62typezd2errorzb0zz__objectz00;
										{	/* Llib/object.scm 96 */
											obj_t BgL_vectorz00_5528;

											int BgL_kz00_5529;

											BgL_vectorz00_5528 = BgL_classz00_5527;
											BgL_kz00_5529 = (int) (((long) 1));
											BgL_res3890z00_5530 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5528,
													BgL_kz00_5529));
									}}
									BgL_arg3139z00_5526 = BgL_res3890z00_5530;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1248z00_5525),
									BgL_arg3139z00_5526);
							}
							{	/* Llib/object.scm 96 */
								BgL_objectz00_bglt BgL_auxz00_12778;

								BgL_auxz00_12778 = (BgL_objectz00_bglt) (BgL_new1248z00_5525);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12778, BFALSE);
							}
							BgL_res3891z00_5533 = BgL_new1248z00_5525;
						}
						BGl_z52thezd2z62typezd2errorzd2nilze2zz__objectz00 =
							(obj_t) (BgL_res3891z00_5533);
					}
					{	/* Llib/object.scm 96 */
						BgL_z62typezd2errorzb0_bglt BgL_res3892z00_5549;

						{	/* Llib/object.scm 96 */
							BgL_z62typezd2errorzb0_bglt BgL_new1239z00_5534;

							BgL_new1239z00_5534 =
								(BgL_z62typezd2errorzb0_bglt)
								(BGl_z52thezd2z62typezd2errorzd2nilze2zz__objectz00);
							{	/* Llib/object.scm 96 */
								obj_t BgL_fname1232z00_5542;

								obj_t BgL_location1233z00_5543;

								obj_t BgL_stack1234z00_5544;

								obj_t BgL_proc1235z00_5545;

								obj_t BgL_msg1236z00_5546;

								obj_t BgL_obj1237z00_5547;

								obj_t BgL_type1238z00_5548;

								BgL_fname1232z00_5542 = BUNSPEC;
								BgL_location1233z00_5543 = BUNSPEC;
								BgL_stack1234z00_5544 = BUNSPEC;
								BgL_proc1235z00_5545 = BUNSPEC;
								BgL_msg1236z00_5546 = BUNSPEC;
								BgL_obj1237z00_5547 = BUNSPEC;
								BgL_type1238z00_5548 = BUNSPEC;
								((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5534))->
										BgL_fnamez00) = ((obj_t) BgL_fname1232z00_5542), BUNSPEC);
								((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5534))->
										BgL_locationz00) =
									((obj_t) BgL_location1233z00_5543), BUNSPEC);
								((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5534))->
										BgL_stackz00) = ((obj_t) BgL_stack1234z00_5544), BUNSPEC);
								((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5534))->
										BgL_procz00) = ((obj_t) BgL_proc1235z00_5545), BUNSPEC);
								((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5534))->
										BgL_msgz00) = ((obj_t) BgL_msg1236z00_5546), BUNSPEC);
								((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5534))->
										BgL_objz00) = ((obj_t) BgL_obj1237z00_5547), BUNSPEC);
								((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_new1239z00_5534))->
										BgL_typez00) = ((obj_t) BgL_type1238z00_5548), BUNSPEC);
								BgL_res3892z00_5549 = BgL_new1239z00_5534;
						}}
						(obj_t) (BgL_res3892z00_5549);
				}}
			else
				{	/* Llib/object.scm 96 */
					BFALSE;
				}
			return
				(BgL_z62typezd2errorzb0_bglt)
				(BGl_z52thezd2z62typezd2errorzd2nilze2zz__objectz00);
		}
	}



/* _&type-error-nil */
	obj_t BGl__z62typezd2errorzd2nilz62zz__objectz00(obj_t BgL_envz00_7930)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			return (obj_t) (BGl_z62typezd2errorzd2nilz62zz__objectz00());
		}
	}



/* _&type-error-type */
	obj_t BGl__z62typezd2errorzd2typez62zz__objectz00(obj_t BgL_envz00_7928,
		obj_t BgL_obj1222z00_7929)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 97 */
			{	/* Llib/object.scm 97 */
				BgL_z62typezd2errorzb0_bglt BgL_obj1222z00_9291;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1222z00_7929,
						BGl_z62typezd2errorzb0zz__objectz00))
					{	/* Llib/object.scm 97 */
						BgL_obj1222z00_9291 =
							(BgL_z62typezd2errorzb0_bglt) (BgL_obj1222z00_7929);
					}
				else
					{
						obj_t BgL_auxz00_12797;

						BgL_auxz00_12797 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3505)), BGl_string4404z00zz__objectz00,
							BGl_string4333z00zz__objectz00, BgL_obj1222z00_7929);
						FAILURE(BgL_auxz00_12797, BFALSE, BFALSE);
					}
				return
					(((BgL_z62typezd2errorzb0_bglt) CREF(BgL_obj1222z00_9291))->
					BgL_typez00);
			}
		}
	}



/* &error? */
	BGL_EXPORTED_DEF bool_t BGl_z62errorzf3z91zz__objectz00(obj_t
		BgL_obj1209z00_529)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1209z00_529,
				BGl_z62errorz62zz__objectz00);
		}
	}



/* _&error? */
	obj_t BGl__z62errorzf3z91zz__objectz00(obj_t BgL_envz00_7917,
		obj_t BgL_obj1209z00_7918)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1209z00_7918,
					BGl_z62errorz62zz__objectz00));
		}
	}



/* make-&error */
	BGL_EXPORTED_DEF BgL_z62errorz62_bglt
		BGl_makezd2z62errorzb0zz__objectz00(obj_t BgL_fname1160z00_533,
		obj_t BgL_location1161z00_534, obj_t BgL_stack1162z00_535,
		obj_t BgL_proc1163z00_536, obj_t BgL_msg1164z00_537,
		obj_t BgL_obj1165z00_538)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			{	/* Llib/object.scm 92 */
				BgL_z62errorz62_bglt BgL_new1166z00_5550;

				{	/* Llib/object.scm 92 */
					BgL_z62errorz62_bglt BgL_res3894z00_5559;

					{	/* Llib/object.scm 92 */
						BgL_z62errorz62_bglt BgL_new1182z00_5551;

						BgL_new1182z00_5551 =
							((BgL_z62errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						{	/* Llib/object.scm 92 */
							long BgL_arg3141z00_5552;

							{	/* Llib/object.scm 92 */
								long BgL_res3893z00_5556;

								{	/* Llib/object.scm 92 */
									obj_t BgL_classz00_5553;

									BgL_classz00_5553 = BGl_z62errorz62zz__objectz00;
									{	/* Llib/object.scm 92 */
										obj_t BgL_vectorz00_5554;

										int BgL_kz00_5555;

										BgL_vectorz00_5554 = BgL_classz00_5553;
										BgL_kz00_5555 = (int) (((long) 1));
										BgL_res3893z00_5556 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5554,
												BgL_kz00_5555));
								}}
								BgL_arg3141z00_5552 = BgL_res3893z00_5556;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1182z00_5551),
								BgL_arg3141z00_5552);
						}
						{	/* Llib/object.scm 92 */
							BgL_objectz00_bglt BgL_auxz00_12811;

							BgL_auxz00_12811 = (BgL_objectz00_bglt) (BgL_new1182z00_5551);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12811, BFALSE);
						}
						BgL_res3894z00_5559 = BgL_new1182z00_5551;
					}
					BgL_new1166z00_5550 = BgL_res3894z00_5559;
				}
				{	/* Llib/object.scm 92 */
					BgL_z62errorz62_bglt BgL_res3895z00_5573;

					{	/* Llib/object.scm 92 */
						BgL_z62errorz62_bglt BgL_new1174z00_5560;

						BgL_new1174z00_5560 = BgL_new1166z00_5550;
						{	/* Llib/object.scm 92 */
							obj_t BgL_fname1168z00_5567;

							obj_t BgL_location1169z00_5568;

							obj_t BgL_stack1170z00_5569;

							obj_t BgL_proc1171z00_5570;

							obj_t BgL_msg1172z00_5571;

							obj_t BgL_obj1173z00_5572;

							BgL_fname1168z00_5567 = BgL_fname1160z00_533;
							BgL_location1169z00_5568 = BgL_location1161z00_534;
							BgL_stack1170z00_5569 = BgL_stack1162z00_535;
							BgL_proc1171z00_5570 = BgL_proc1163z00_536;
							BgL_msg1172z00_5571 = BgL_msg1164z00_537;
							BgL_obj1173z00_5572 = BgL_obj1165z00_538;
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5560))->
									BgL_fnamez00) = ((obj_t) BgL_fname1168z00_5567), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5560))->
									BgL_locationz00) =
								((obj_t) BgL_location1169z00_5568), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5560))->
									BgL_stackz00) = ((obj_t) BgL_stack1170z00_5569), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5560))->
									BgL_procz00) = ((obj_t) BgL_proc1171z00_5570), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5560))->
									BgL_msgz00) = ((obj_t) BgL_msg1172z00_5571), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5560))->
									BgL_objz00) = ((obj_t) BgL_obj1173z00_5572), BUNSPEC);
							BgL_res3895z00_5573 = BgL_new1174z00_5560;
					}} BgL_res3895z00_5573;
				}
				return BgL_new1166z00_5550;
			}
		}
	}



/* _make-&error */
	obj_t BGl__makezd2z62errorzb0zz__objectz00(obj_t BgL_envz00_7902,
		obj_t BgL_fname1160z00_7903, obj_t BgL_location1161z00_7904,
		obj_t BgL_stack1162z00_7905, obj_t BgL_proc1163z00_7906,
		obj_t BgL_msg1164z00_7907, obj_t BgL_obj1165z00_7908)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			return
				(obj_t) (BGl_makezd2z62errorzb0zz__objectz00(BgL_fname1160z00_7903,
					BgL_location1161z00_7904, BgL_stack1162z00_7905, BgL_proc1163z00_7906,
					BgL_msg1164z00_7907, BgL_obj1165z00_7908));
		}
	}



/* fill-&error! */
	BGL_EXPORTED_DEF BgL_z62errorz62_bglt
		BGl_fillzd2z62errorz12za2zz__objectz00(BgL_z62errorz62_bglt
		BgL_new1174z00_539, obj_t BgL_fname1168z00_540,
		obj_t BgL_location1169z00_541, obj_t BgL_stack1170z00_542,
		obj_t BgL_proc1171z00_543, obj_t BgL_msg1172z00_544,
		obj_t BgL_obj1173z00_545)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			{	/* Llib/object.scm 92 */
				obj_t BgL_fname1168z00_9293;

				obj_t BgL_location1169z00_9294;

				obj_t BgL_stack1170z00_9295;

				obj_t BgL_proc1171z00_9296;

				obj_t BgL_msg1172z00_9297;

				obj_t BgL_obj1173z00_9298;

				BgL_fname1168z00_9293 = BgL_fname1168z00_540;
				BgL_location1169z00_9294 = BgL_location1169z00_541;
				BgL_stack1170z00_9295 = BgL_stack1170z00_542;
				BgL_proc1171z00_9296 = BgL_proc1171z00_543;
				BgL_msg1172z00_9297 = BgL_msg1172z00_544;
				BgL_obj1173z00_9298 = BgL_obj1173z00_545;
				((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_539))->BgL_fnamez00) =
					((obj_t) BgL_fname1168z00_9293), BUNSPEC);
				((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_539))->BgL_locationz00) =
					((obj_t) BgL_location1169z00_9294), BUNSPEC);
				((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_539))->BgL_stackz00) =
					((obj_t) BgL_stack1170z00_9295), BUNSPEC);
				((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_539))->BgL_procz00) =
					((obj_t) BgL_proc1171z00_9296), BUNSPEC);
				((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_539))->BgL_msgz00) =
					((obj_t) BgL_msg1172z00_9297), BUNSPEC);
				((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_539))->BgL_objz00) =
					((obj_t) BgL_obj1173z00_9298), BUNSPEC);
				return BgL_new1174z00_539;
			}
		}
	}



/* _fill-&error! */
	obj_t BGl__fillzd2z62errorz12za2zz__objectz00(obj_t BgL_envz00_8265,
		obj_t BgL_new1174z00_8266, obj_t BgL_fname1168z00_8267,
		obj_t BgL_location1169z00_8268, obj_t BgL_stack1170z00_8269,
		obj_t BgL_proc1171z00_8270, obj_t BgL_msg1172z00_8271,
		obj_t BgL_obj1173z00_8272)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			{	/* Llib/object.scm 92 */
				BgL_z62errorz62_bglt BgL_auxz00_12828;

				{	/* Llib/object.scm 92 */
					BgL_z62errorz62_bglt BgL_res4535z00_9313;

					{	/* Llib/object.scm 92 */
						BgL_z62errorz62_bglt BgL_new1174z00_9300;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1174z00_8266,
								BGl_z62errorz62zz__objectz00))
							{	/* Llib/object.scm 92 */
								BgL_new1174z00_9300 =
									(BgL_z62errorz62_bglt) (BgL_new1174z00_8266);
							}
						else
							{
								obj_t BgL_auxz00_12832;

								BgL_auxz00_12832 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3365)),
									BGl_string4405z00zz__objectz00,
									BGl_string4327z00zz__objectz00, BgL_new1174z00_8266);
								FAILURE(BgL_auxz00_12832, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 92 */
							obj_t BgL_fname1168z00_9307;

							obj_t BgL_location1169z00_9308;

							obj_t BgL_stack1170z00_9309;

							obj_t BgL_proc1171z00_9310;

							obj_t BgL_msg1172z00_9311;

							obj_t BgL_obj1173z00_9312;

							BgL_fname1168z00_9307 = BgL_fname1168z00_8267;
							BgL_location1169z00_9308 = BgL_location1169z00_8268;
							BgL_stack1170z00_9309 = BgL_stack1170z00_8269;
							BgL_proc1171z00_9310 = BgL_proc1171z00_8270;
							BgL_msg1172z00_9311 = BgL_msg1172z00_8271;
							BgL_obj1173z00_9312 = BgL_obj1173z00_8272;
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_9300))->
									BgL_fnamez00) = ((obj_t) BgL_fname1168z00_9307), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_9300))->
									BgL_locationz00) =
								((obj_t) BgL_location1169z00_9308), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_9300))->
									BgL_stackz00) = ((obj_t) BgL_stack1170z00_9309), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_9300))->
									BgL_procz00) = ((obj_t) BgL_proc1171z00_9310), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_9300))->
									BgL_msgz00) = ((obj_t) BgL_msg1172z00_9311), BUNSPEC);
							((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_9300))->
									BgL_objz00) = ((obj_t) BgL_obj1173z00_9312), BUNSPEC);
							BgL_res4535z00_9313 = BgL_new1174z00_9300;
					}}
					BgL_auxz00_12828 = BgL_res4535z00_9313;
				}
				return (obj_t) (BgL_auxz00_12828);
			}
		}
	}



/* %allocate-&error */
	BGL_EXPORTED_DEF BgL_z62errorz62_bglt
		BGl_z52allocatezd2z62errorze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			{	/* Llib/object.scm 92 */
				BgL_z62errorz62_bglt BgL_new1182z00_9314;

				BgL_new1182z00_9314 =
					((BgL_z62errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1182z00_9314),
					BGl_classzd2numzd2zz__objectz00(BGl_z62errorz62zz__objectz00));
				{	/* Llib/object.scm 92 */
					BgL_objectz00_bglt BgL_auxz00_12847;

					BgL_auxz00_12847 = (BgL_objectz00_bglt) (BgL_new1182z00_9314);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12847, BFALSE);
				}
				return BgL_new1182z00_9314;
			}
		}
	}



/* _%allocate-&error */
	obj_t BGl__z52allocatezd2z62errorze2zz__objectz00(obj_t BgL_envz00_7909)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			{	/* Llib/object.scm 92 */
				BgL_z62errorz62_bglt BgL_auxz00_12850;

				{	/* Llib/object.scm 92 */
					BgL_z62errorz62_bglt BgL_res4536z00_9318;

					{	/* Llib/object.scm 92 */
						BgL_z62errorz62_bglt BgL_new1182z00_9316;

						BgL_new1182z00_9316 =
							((BgL_z62errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1182z00_9316),
							BGl_classzd2numzd2zz__objectz00(BGl_z62errorz62zz__objectz00));
						{	/* Llib/object.scm 92 */
							BgL_objectz00_bglt BgL_auxz00_12855;

							BgL_auxz00_12855 = (BgL_objectz00_bglt) (BgL_new1182z00_9316);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12855, BFALSE);
						}
						BgL_res4536z00_9318 = BgL_new1182z00_9316;
					}
					BgL_auxz00_12850 = BgL_res4536z00_9318;
				}
				return (obj_t) (BgL_auxz00_12850);
			}
		}
	}



/* &error-nil */
	BGL_EXPORTED_DEF BgL_z62errorz62_bglt BGl_z62errorzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			if ((BGl_z52thezd2z62errorzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 92 */
					{	/* Llib/object.scm 92 */
						BgL_z62errorz62_bglt BgL_res3897z00_5592;

						{	/* Llib/object.scm 92 */
							BgL_z62errorz62_bglt BgL_new1182z00_5584;

							BgL_new1182z00_5584 =
								((BgL_z62errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62errorz62_bgl))));
							{	/* Llib/object.scm 92 */
								long BgL_arg3141z00_5585;

								{	/* Llib/object.scm 92 */
									long BgL_res3896z00_5589;

									{	/* Llib/object.scm 92 */
										obj_t BgL_classz00_5586;

										BgL_classz00_5586 = BGl_z62errorz62zz__objectz00;
										{	/* Llib/object.scm 92 */
											obj_t BgL_vectorz00_5587;

											int BgL_kz00_5588;

											BgL_vectorz00_5587 = BgL_classz00_5586;
											BgL_kz00_5588 = (int) (((long) 1));
											BgL_res3896z00_5589 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5587,
													BgL_kz00_5588));
									}}
									BgL_arg3141z00_5585 = BgL_res3896z00_5589;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1182z00_5584),
									BgL_arg3141z00_5585);
							}
							{	/* Llib/object.scm 92 */
								BgL_objectz00_bglt BgL_auxz00_12867;

								BgL_auxz00_12867 = (BgL_objectz00_bglt) (BgL_new1182z00_5584);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12867, BFALSE);
							}
							BgL_res3897z00_5592 = BgL_new1182z00_5584;
						}
						BGl_z52thezd2z62errorzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3897z00_5592);
					}
					{	/* Llib/object.scm 92 */
						BgL_z62errorz62_bglt BgL_res3898z00_5606;

						{	/* Llib/object.scm 92 */
							BgL_z62errorz62_bglt BgL_new1174z00_5593;

							BgL_new1174z00_5593 =
								(BgL_z62errorz62_bglt)
								(BGl_z52thezd2z62errorzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 92 */
								obj_t BgL_fname1168z00_5600;

								obj_t BgL_location1169z00_5601;

								obj_t BgL_stack1170z00_5602;

								obj_t BgL_proc1171z00_5603;

								obj_t BgL_msg1172z00_5604;

								obj_t BgL_obj1173z00_5605;

								BgL_fname1168z00_5600 = BUNSPEC;
								BgL_location1169z00_5601 = BUNSPEC;
								BgL_stack1170z00_5602 = BUNSPEC;
								BgL_proc1171z00_5603 = BUNSPEC;
								BgL_msg1172z00_5604 = BUNSPEC;
								BgL_obj1173z00_5605 = BUNSPEC;
								((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5593))->
										BgL_fnamez00) = ((obj_t) BgL_fname1168z00_5600), BUNSPEC);
								((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5593))->
										BgL_locationz00) =
									((obj_t) BgL_location1169z00_5601), BUNSPEC);
								((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5593))->
										BgL_stackz00) = ((obj_t) BgL_stack1170z00_5602), BUNSPEC);
								((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5593))->
										BgL_procz00) = ((obj_t) BgL_proc1171z00_5603), BUNSPEC);
								((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5593))->
										BgL_msgz00) = ((obj_t) BgL_msg1172z00_5604), BUNSPEC);
								((((BgL_z62errorz62_bglt) CREF(BgL_new1174z00_5593))->
										BgL_objz00) = ((obj_t) BgL_obj1173z00_5605), BUNSPEC);
								BgL_res3898z00_5606 = BgL_new1174z00_5593;
						}}
						(obj_t) (BgL_res3898z00_5606);
				}}
			else
				{	/* Llib/object.scm 92 */
					BFALSE;
				}
			return
				(BgL_z62errorz62_bglt) (BGl_z52thezd2z62errorzd2nilz30zz__objectz00);
		}
	}



/* _&error-nil */
	obj_t BGl__z62errorzd2nilzb0zz__objectz00(obj_t BgL_envz00_7916)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			return (obj_t) (BGl_z62errorzd2nilzb0zz__objectz00());
		}
	}



/* _&error-proc */
	obj_t BGl__z62errorzd2proczb0zz__objectz00(obj_t BgL_envz00_7910,
		obj_t BgL_obj1157z00_7911)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 93 */
			{	/* Llib/object.scm 93 */
				BgL_z62errorz62_bglt BgL_obj1157z00_9320;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1157z00_7911,
						BGl_z62errorz62zz__objectz00))
					{	/* Llib/object.scm 93 */
						BgL_obj1157z00_9320 = (BgL_z62errorz62_bglt) (BgL_obj1157z00_7911);
					}
				else
					{
						obj_t BgL_auxz00_12885;

						BgL_auxz00_12885 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3399)), BGl_string4406z00zz__objectz00,
							BGl_string4327z00zz__objectz00, BgL_obj1157z00_7911);
						FAILURE(BgL_auxz00_12885, BFALSE, BFALSE);
					}
				return
					(((BgL_z62errorz62_bglt) CREF(BgL_obj1157z00_9320))->BgL_procz00);
			}
		}
	}



/* _&error-msg */
	obj_t BGl__z62errorzd2msgzb0zz__objectz00(obj_t BgL_envz00_7912,
		obj_t BgL_obj1158z00_7913)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 94 */
			{	/* Llib/object.scm 94 */
				BgL_z62errorz62_bglt BgL_obj1158z00_9322;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1158z00_7913,
						BGl_z62errorz62zz__objectz00))
					{	/* Llib/object.scm 94 */
						BgL_obj1158z00_9322 = (BgL_z62errorz62_bglt) (BgL_obj1158z00_7913);
					}
				else
					{
						obj_t BgL_auxz00_12893;

						BgL_auxz00_12893 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3424)), BGl_string4407z00zz__objectz00,
							BGl_string4327z00zz__objectz00, BgL_obj1158z00_7913);
						FAILURE(BgL_auxz00_12893, BFALSE, BFALSE);
					}
				return (((BgL_z62errorz62_bglt) CREF(BgL_obj1158z00_9322))->BgL_msgz00);
			}
		}
	}



/* _&error-obj */
	obj_t BGl__z62errorzd2objzb0zz__objectz00(obj_t BgL_envz00_7914,
		obj_t BgL_obj1159z00_7915)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 95 */
			{	/* Llib/object.scm 95 */
				BgL_z62errorz62_bglt BgL_obj1159z00_9324;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1159z00_7915,
						BGl_z62errorz62zz__objectz00))
					{	/* Llib/object.scm 95 */
						BgL_obj1159z00_9324 = (BgL_z62errorz62_bglt) (BgL_obj1159z00_7915);
					}
				else
					{
						obj_t BgL_auxz00_12901;

						BgL_auxz00_12901 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3448)), BGl_string4408z00zz__objectz00,
							BGl_string4327z00zz__objectz00, BgL_obj1159z00_7915);
						FAILURE(BgL_auxz00_12901, BFALSE, BFALSE);
					}
				return (((BgL_z62errorz62_bglt) CREF(BgL_obj1159z00_9324))->BgL_objz00);
			}
		}
	}



/* &exception? */
	BGL_EXPORTED_DEF bool_t BGl_z62exceptionzf3z91zz__objectz00(obj_t
		BgL_obj1147z00_549)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1147z00_549,
				BGl_z62exceptionz62zz__objectz00);
		}
	}



/* _&exception? */
	obj_t BGl__z62exceptionzf3z91zz__objectz00(obj_t BgL_envz00_7900,
		obj_t BgL_obj1147z00_7901)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1147z00_7901,
					BGl_z62exceptionz62zz__objectz00));
		}
	}



/* make-&exception */
	BGL_EXPORTED_DEF BgL_z62exceptionz62_bglt
		BGl_makezd2z62exceptionzb0zz__objectz00(obj_t BgL_fname1119z00_553,
		obj_t BgL_location1120z00_554, obj_t BgL_stack1121z00_555)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			{	/* Llib/object.scm 87 */
				BgL_z62exceptionz62_bglt BgL_new1122z00_5607;

				{	/* Llib/object.scm 87 */
					BgL_z62exceptionz62_bglt BgL_res3900z00_5616;

					{	/* Llib/object.scm 87 */
						BgL_z62exceptionz62_bglt BgL_new1132z00_5608;

						BgL_new1132z00_5608 =
							((BgL_z62exceptionz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62exceptionz62_bgl))));
						{	/* Llib/object.scm 87 */
							long BgL_arg3143z00_5609;

							{	/* Llib/object.scm 87 */
								long BgL_res3899z00_5613;

								{	/* Llib/object.scm 87 */
									obj_t BgL_classz00_5610;

									BgL_classz00_5610 = BGl_z62exceptionz62zz__objectz00;
									{	/* Llib/object.scm 87 */
										obj_t BgL_vectorz00_5611;

										int BgL_kz00_5612;

										BgL_vectorz00_5611 = BgL_classz00_5610;
										BgL_kz00_5612 = (int) (((long) 1));
										BgL_res3899z00_5613 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5611,
												BgL_kz00_5612));
								}}
								BgL_arg3143z00_5609 = BgL_res3899z00_5613;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1132z00_5608),
								BgL_arg3143z00_5609);
						}
						{	/* Llib/object.scm 87 */
							BgL_objectz00_bglt BgL_auxz00_12915;

							BgL_auxz00_12915 = (BgL_objectz00_bglt) (BgL_new1132z00_5608);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12915, BFALSE);
						}
						BgL_res3900z00_5616 = BgL_new1132z00_5608;
					}
					BgL_new1122z00_5607 = BgL_res3900z00_5616;
				}
				{	/* Llib/object.scm 87 */
					BgL_z62exceptionz62_bglt BgL_res3901z00_5624;

					{	/* Llib/object.scm 87 */
						BgL_z62exceptionz62_bglt BgL_new1127z00_5617;

						BgL_new1127z00_5617 = BgL_new1122z00_5607;
						{	/* Llib/object.scm 87 */
							obj_t BgL_fname1124z00_5621;

							obj_t BgL_location1125z00_5622;

							obj_t BgL_stack1126z00_5623;

							BgL_fname1124z00_5621 = BgL_fname1119z00_553;
							BgL_location1125z00_5622 = BgL_location1120z00_554;
							BgL_stack1126z00_5623 = BgL_stack1121z00_555;
							((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_5617))->
									BgL_fnamez00) = ((obj_t) BgL_fname1124z00_5621), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_5617))->
									BgL_locationz00) =
								((obj_t) BgL_location1125z00_5622), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_5617))->
									BgL_stackz00) = ((obj_t) BgL_stack1126z00_5623), BUNSPEC);
							BgL_res3901z00_5624 = BgL_new1127z00_5617;
					}} BgL_res3901z00_5624;
				}
				return BgL_new1122z00_5607;
			}
		}
	}



/* _make-&exception */
	obj_t BGl__makezd2z62exceptionzb0zz__objectz00(obj_t BgL_envz00_7879,
		obj_t BgL_fname1119z00_7880, obj_t BgL_location1120z00_7881,
		obj_t BgL_stack1121z00_7882)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			return
				(obj_t) (BGl_makezd2z62exceptionzb0zz__objectz00(BgL_fname1119z00_7880,
					BgL_location1120z00_7881, BgL_stack1121z00_7882));
		}
	}



/* fill-&exception! */
	BGL_EXPORTED_DEF BgL_z62exceptionz62_bglt
		BGl_fillzd2z62exceptionz12za2zz__objectz00(BgL_z62exceptionz62_bglt
		BgL_new1127z00_556, obj_t BgL_fname1124z00_557,
		obj_t BgL_location1125z00_558, obj_t BgL_stack1126z00_559)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			{	/* Llib/object.scm 87 */
				obj_t BgL_fname1124z00_9326;

				obj_t BgL_location1125z00_9327;

				obj_t BgL_stack1126z00_9328;

				BgL_fname1124z00_9326 = BgL_fname1124z00_557;
				BgL_location1125z00_9327 = BgL_location1125z00_558;
				BgL_stack1126z00_9328 = BgL_stack1126z00_559;
				((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_556))->BgL_fnamez00) =
					((obj_t) BgL_fname1124z00_9326), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_556))->
						BgL_locationz00) = ((obj_t) BgL_location1125z00_9327), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_556))->BgL_stackz00) =
					((obj_t) BgL_stack1126z00_9328), BUNSPEC);
				return BgL_new1127z00_556;
			}
		}
	}



/* _fill-&exception! */
	obj_t BGl__fillzd2z62exceptionz12za2zz__objectz00(obj_t BgL_envz00_8273,
		obj_t BgL_new1127z00_8274, obj_t BgL_fname1124z00_8275,
		obj_t BgL_location1125z00_8276, obj_t BgL_stack1126z00_8277)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			{	/* Llib/object.scm 87 */
				BgL_z62exceptionz62_bglt BgL_auxz00_12926;

				{	/* Llib/object.scm 87 */
					BgL_z62exceptionz62_bglt BgL_res4537z00_9337;

					{	/* Llib/object.scm 87 */
						BgL_z62exceptionz62_bglt BgL_new1127z00_9330;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1127z00_8274,
								BGl_z62exceptionz62zz__objectz00))
							{	/* Llib/object.scm 87 */
								BgL_new1127z00_9330 =
									(BgL_z62exceptionz62_bglt) (BgL_new1127z00_8274);
							}
						else
							{
								obj_t BgL_auxz00_12930;

								BgL_auxz00_12930 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4231z00zz__objectz00, BINT(((long) 3218)),
									BGl_string4409z00zz__objectz00,
									BGl_string4316z00zz__objectz00, BgL_new1127z00_8274);
								FAILURE(BgL_auxz00_12930, BFALSE, BFALSE);
							}
						{	/* Llib/object.scm 87 */
							obj_t BgL_fname1124z00_9334;

							obj_t BgL_location1125z00_9335;

							obj_t BgL_stack1126z00_9336;

							BgL_fname1124z00_9334 = BgL_fname1124z00_8275;
							BgL_location1125z00_9335 = BgL_location1125z00_8276;
							BgL_stack1126z00_9336 = BgL_stack1126z00_8277;
							((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_9330))->
									BgL_fnamez00) = ((obj_t) BgL_fname1124z00_9334), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_9330))->
									BgL_locationz00) =
								((obj_t) BgL_location1125z00_9335), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_9330))->
									BgL_stackz00) = ((obj_t) BgL_stack1126z00_9336), BUNSPEC);
							BgL_res4537z00_9337 = BgL_new1127z00_9330;
					}}
					BgL_auxz00_12926 = BgL_res4537z00_9337;
				}
				return (obj_t) (BgL_auxz00_12926);
			}
		}
	}



/* %allocate-&exception */
	BGL_EXPORTED_DEF BgL_z62exceptionz62_bglt
		BGl_z52allocatezd2z62exceptionze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			{	/* Llib/object.scm 87 */
				BgL_z62exceptionz62_bglt BgL_new1132z00_9338;

				BgL_new1132z00_9338 =
					((BgL_z62exceptionz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62exceptionz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1132z00_9338),
					BGl_classzd2numzd2zz__objectz00(BGl_z62exceptionz62zz__objectz00));
				{	/* Llib/object.scm 87 */
					BgL_objectz00_bglt BgL_auxz00_12942;

					BgL_auxz00_12942 = (BgL_objectz00_bglt) (BgL_new1132z00_9338);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_12942, BFALSE);
				}
				return BgL_new1132z00_9338;
			}
		}
	}



/* _%allocate-&exception */
	obj_t BGl__z52allocatezd2z62exceptionze2zz__objectz00(obj_t BgL_envz00_7883)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			{	/* Llib/object.scm 87 */
				BgL_z62exceptionz62_bglt BgL_auxz00_12945;

				{	/* Llib/object.scm 87 */
					BgL_z62exceptionz62_bglt BgL_res4538z00_9342;

					{	/* Llib/object.scm 87 */
						BgL_z62exceptionz62_bglt BgL_new1132z00_9340;

						BgL_new1132z00_9340 =
							((BgL_z62exceptionz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62exceptionz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1132z00_9340),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62exceptionz62zz__objectz00));
						{	/* Llib/object.scm 87 */
							BgL_objectz00_bglt BgL_auxz00_12950;

							BgL_auxz00_12950 = (BgL_objectz00_bglt) (BgL_new1132z00_9340);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12950, BFALSE);
						}
						BgL_res4538z00_9342 = BgL_new1132z00_9340;
					}
					BgL_auxz00_12945 = BgL_res4538z00_9342;
				}
				return (obj_t) (BgL_auxz00_12945);
			}
		}
	}



/* &exception-nil */
	BGL_EXPORTED_DEF BgL_z62exceptionz62_bglt
		BGl_z62exceptionzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			if ((BGl_z52thezd2z62exceptionzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 87 */
					{	/* Llib/object.scm 87 */
						BgL_z62exceptionz62_bglt BgL_res3903z00_5640;

						{	/* Llib/object.scm 87 */
							BgL_z62exceptionz62_bglt BgL_new1132z00_5632;

							BgL_new1132z00_5632 =
								((BgL_z62exceptionz62_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62exceptionz62_bgl))));
							{	/* Llib/object.scm 87 */
								long BgL_arg3143z00_5633;

								{	/* Llib/object.scm 87 */
									long BgL_res3902z00_5637;

									{	/* Llib/object.scm 87 */
										obj_t BgL_classz00_5634;

										BgL_classz00_5634 = BGl_z62exceptionz62zz__objectz00;
										{	/* Llib/object.scm 87 */
											obj_t BgL_vectorz00_5635;

											int BgL_kz00_5636;

											BgL_vectorz00_5635 = BgL_classz00_5634;
											BgL_kz00_5636 = (int) (((long) 1));
											BgL_res3902z00_5637 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5635,
													BgL_kz00_5636));
									}}
									BgL_arg3143z00_5633 = BgL_res3902z00_5637;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1132z00_5632),
									BgL_arg3143z00_5633);
							}
							{	/* Llib/object.scm 87 */
								BgL_objectz00_bglt BgL_auxz00_12962;

								BgL_auxz00_12962 = (BgL_objectz00_bglt) (BgL_new1132z00_5632);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_12962, BFALSE);
							}
							BgL_res3903z00_5640 = BgL_new1132z00_5632;
						}
						BGl_z52thezd2z62exceptionzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3903z00_5640);
					}
					{	/* Llib/object.scm 87 */
						BgL_z62exceptionz62_bglt BgL_res3904z00_5648;

						{	/* Llib/object.scm 87 */
							BgL_z62exceptionz62_bglt BgL_new1127z00_5641;

							BgL_new1127z00_5641 =
								(BgL_z62exceptionz62_bglt)
								(BGl_z52thezd2z62exceptionzd2nilz30zz__objectz00);
							{	/* Llib/object.scm 87 */
								obj_t BgL_fname1124z00_5645;

								obj_t BgL_location1125z00_5646;

								obj_t BgL_stack1126z00_5647;

								BgL_fname1124z00_5645 = BUNSPEC;
								BgL_location1125z00_5646 = BUNSPEC;
								BgL_stack1126z00_5647 = BUNSPEC;
								((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_5641))->
										BgL_fnamez00) = ((obj_t) BgL_fname1124z00_5645), BUNSPEC);
								((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_5641))->
										BgL_locationz00) =
									((obj_t) BgL_location1125z00_5646), BUNSPEC);
								((((BgL_z62exceptionz62_bglt) CREF(BgL_new1127z00_5641))->
										BgL_stackz00) = ((obj_t) BgL_stack1126z00_5647), BUNSPEC);
								BgL_res3904z00_5648 = BgL_new1127z00_5641;
						}}
						(obj_t) (BgL_res3904z00_5648);
				}}
			else
				{	/* Llib/object.scm 87 */
					BFALSE;
				}
			return
				(BgL_z62exceptionz62_bglt)
				(BGl_z52thezd2z62exceptionzd2nilz30zz__objectz00);
		}
	}



/* _&exception-nil */
	obj_t BGl__z62exceptionzd2nilzb0zz__objectz00(obj_t BgL_envz00_7899)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			return (obj_t) (BGl_z62exceptionzd2nilzb0zz__objectz00());
		}
	}



/* _&exception-fname-set! */
	obj_t BGl__z62exceptionzd2fnamezd2setz12z70zz__objectz00(obj_t
		BgL_envz00_7884, obj_t BgL_obj1112z00_7885, obj_t BgL_val1111z00_7886)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 88 */
			{	/* Llib/object.scm 88 */
				BgL_z62exceptionz62_bglt BgL_obj1112z00_9344;

				obj_t BgL_val1111z00_9345;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1112z00_7885,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Llib/object.scm 88 */
						BgL_obj1112z00_9344 =
							(BgL_z62exceptionz62_bglt) (BgL_obj1112z00_7885);
					}
				else
					{
						obj_t BgL_auxz00_12977;

						BgL_auxz00_12977 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3256)), BGl_string4410z00zz__objectz00,
							BGl_string4316z00zz__objectz00, BgL_obj1112z00_7885);
						FAILURE(BgL_auxz00_12977, BFALSE, BFALSE);
					}
				BgL_val1111z00_9345 = BgL_val1111z00_7886;
				return
					((((BgL_z62exceptionz62_bglt) CREF(BgL_obj1112z00_9344))->
						BgL_fnamez00) = ((obj_t) BgL_val1111z00_9345), BUNSPEC);
			}
		}
	}



/* _&exception-fname */
	obj_t BGl__z62exceptionzd2fnamezb0zz__objectz00(obj_t BgL_envz00_7887,
		obj_t BgL_obj1110z00_7888)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 88 */
			{	/* Llib/object.scm 88 */
				BgL_z62exceptionz62_bglt BgL_obj1110z00_9347;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1110z00_7888,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Llib/object.scm 88 */
						BgL_obj1110z00_9347 =
							(BgL_z62exceptionz62_bglt) (BgL_obj1110z00_7888);
					}
				else
					{
						obj_t BgL_auxz00_12985;

						BgL_auxz00_12985 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3256)), BGl_string4411z00zz__objectz00,
							BGl_string4316z00zz__objectz00, BgL_obj1110z00_7888);
						FAILURE(BgL_auxz00_12985, BFALSE, BFALSE);
					}
				return
					(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1110z00_9347))->
					BgL_fnamez00);
			}
		}
	}



/* _&exception-location-set! */
	obj_t BGl__z62exceptionzd2locationzd2setz12z70zz__objectz00(obj_t
		BgL_envz00_7889, obj_t BgL_obj1115z00_7890, obj_t BgL_val1114z00_7891)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 89 */
			{	/* Llib/object.scm 89 */
				BgL_z62exceptionz62_bglt BgL_obj1115z00_9349;

				obj_t BgL_val1114z00_9350;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1115z00_7890,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Llib/object.scm 89 */
						BgL_obj1115z00_9349 =
							(BgL_z62exceptionz62_bglt) (BgL_obj1115z00_7890);
					}
				else
					{
						obj_t BgL_auxz00_12993;

						BgL_auxz00_12993 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3285)), BGl_string4412z00zz__objectz00,
							BGl_string4316z00zz__objectz00, BgL_obj1115z00_7890);
						FAILURE(BgL_auxz00_12993, BFALSE, BFALSE);
					}
				BgL_val1114z00_9350 = BgL_val1114z00_7891;
				return
					((((BgL_z62exceptionz62_bglt) CREF(BgL_obj1115z00_9349))->
						BgL_locationz00) = ((obj_t) BgL_val1114z00_9350), BUNSPEC);
			}
		}
	}



/* _&exception-location */
	obj_t BGl__z62exceptionzd2locationzb0zz__objectz00(obj_t BgL_envz00_7892,
		obj_t BgL_obj1113z00_7893)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 89 */
			{	/* Llib/object.scm 89 */
				BgL_z62exceptionz62_bglt BgL_obj1113z00_9352;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1113z00_7893,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Llib/object.scm 89 */
						BgL_obj1113z00_9352 =
							(BgL_z62exceptionz62_bglt) (BgL_obj1113z00_7893);
					}
				else
					{
						obj_t BgL_auxz00_13001;

						BgL_auxz00_13001 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3285)), BGl_string4413z00zz__objectz00,
							BGl_string4316z00zz__objectz00, BgL_obj1113z00_7893);
						FAILURE(BgL_auxz00_13001, BFALSE, BFALSE);
					}
				return
					(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1113z00_9352))->
					BgL_locationz00);
			}
		}
	}



/* _&exception-stack-set! */
	obj_t BGl__z62exceptionzd2stackzd2setz12z70zz__objectz00(obj_t
		BgL_envz00_7894, obj_t BgL_obj1118z00_7895, obj_t BgL_val1117z00_7896)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 90 */
			{	/* Llib/object.scm 90 */
				BgL_z62exceptionz62_bglt BgL_obj1118z00_9354;

				obj_t BgL_val1117z00_9355;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1118z00_7895,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Llib/object.scm 90 */
						BgL_obj1118z00_9354 =
							(BgL_z62exceptionz62_bglt) (BgL_obj1118z00_7895);
					}
				else
					{
						obj_t BgL_auxz00_13009;

						BgL_auxz00_13009 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3317)), BGl_string4414z00zz__objectz00,
							BGl_string4316z00zz__objectz00, BgL_obj1118z00_7895);
						FAILURE(BgL_auxz00_13009, BFALSE, BFALSE);
					}
				BgL_val1117z00_9355 = BgL_val1117z00_7896;
				return
					((((BgL_z62exceptionz62_bglt) CREF(BgL_obj1118z00_9354))->
						BgL_stackz00) = ((obj_t) BgL_val1117z00_9355), BUNSPEC);
			}
		}
	}



/* _&exception-stack */
	obj_t BGl__z62exceptionzd2stackzb0zz__objectz00(obj_t BgL_envz00_7897,
		obj_t BgL_obj1116z00_7898)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 90 */
			{	/* Llib/object.scm 90 */
				BgL_z62exceptionz62_bglt BgL_obj1116z00_9357;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1116z00_7898,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Llib/object.scm 90 */
						BgL_obj1116z00_9357 =
							(BgL_z62exceptionz62_bglt) (BgL_obj1116z00_7898);
					}
				else
					{
						obj_t BgL_auxz00_13017;

						BgL_auxz00_13017 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 3317)), BGl_string4415z00zz__objectz00,
							BGl_string4316z00zz__objectz00, BgL_obj1116z00_7898);
						FAILURE(BgL_auxz00_13017, BFALSE, BFALSE);
					}
				return
					(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1116z00_9357))->
					BgL_stackz00);
			}
		}
	}



/* &condition? */
	BGL_EXPORTED_DEF bool_t BGl_z62conditionzf3z91zz__objectz00(obj_t
		BgL_obj1109z00_569)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1109z00_569,
				BGl_z62conditionz62zz__objectz00);
		}
	}



/* _&condition? */
	obj_t BGl__z62conditionzf3z91zz__objectz00(obj_t BgL_envz00_7877,
		obj_t BgL_obj1109z00_7878)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1109z00_7878,
					BGl_z62conditionz62zz__objectz00));
		}
	}



/* make-&condition */
	BGL_EXPORTED_DEF BgL_z62conditionz62_bglt
		BGl_makezd2z62conditionzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			{	/* Llib/object.scm 85 */
				BgL_z62conditionz62_bglt BgL_new1102z00_5649;

				{	/* Llib/object.scm 85 */
					BgL_z62conditionz62_bglt BgL_res3906z00_5658;

					{	/* Llib/object.scm 85 */
						BgL_z62conditionz62_bglt BgL_new1106z00_5650;

						BgL_new1106z00_5650 =
							((BgL_z62conditionz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62conditionz62_bgl))));
						{	/* Llib/object.scm 85 */
							long BgL_arg3145z00_5651;

							{	/* Llib/object.scm 85 */
								long BgL_res3905z00_5655;

								{	/* Llib/object.scm 85 */
									obj_t BgL_classz00_5652;

									BgL_classz00_5652 = BGl_z62conditionz62zz__objectz00;
									{	/* Llib/object.scm 85 */
										obj_t BgL_vectorz00_5653;

										int BgL_kz00_5654;

										BgL_vectorz00_5653 = BgL_classz00_5652;
										BgL_kz00_5654 = (int) (((long) 1));
										BgL_res3905z00_5655 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5653,
												BgL_kz00_5654));
								}}
								BgL_arg3145z00_5651 = BgL_res3905z00_5655;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_new1106z00_5650),
								BgL_arg3145z00_5651);
						}
						{	/* Llib/object.scm 85 */
							BgL_objectz00_bglt BgL_auxz00_13031;

							BgL_auxz00_13031 = (BgL_objectz00_bglt) (BgL_new1106z00_5650);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13031, BFALSE);
						}
						BgL_res3906z00_5658 = BgL_new1106z00_5650;
					}
					BgL_new1102z00_5649 = BgL_res3906z00_5658;
				}
				return BgL_new1102z00_5649;
			}
		}
	}



/* _make-&condition */
	obj_t BGl__makezd2z62conditionzb0zz__objectz00(obj_t BgL_envz00_7874)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			return (obj_t) (BGl_makezd2z62conditionzb0zz__objectz00());
		}
	}



/* fill-&condition! */
	BGL_EXPORTED_DEF BgL_z62conditionz62_bglt
		BGl_fillzd2z62conditionz12za2zz__objectz00(BgL_z62conditionz62_bglt
		BgL_new1104z00_573)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			{	/* Llib/object.scm 85 */

				return BgL_new1104z00_573;
			}
		}
	}



/* _fill-&condition! */
	obj_t BGl__fillzd2z62conditionz12za2zz__objectz00(obj_t BgL_envz00_8278,
		obj_t BgL_new1104z00_8279)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			{	/* Llib/object.scm 85 */
				BgL_z62conditionz62_bglt BgL_auxz00_13036;

				{	/* Llib/object.scm 85 */
					BgL_z62conditionz62_bglt BgL_new1104z00_9360;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_new1104z00_8279,
							BGl_z62conditionz62zz__objectz00))
						{	/* Llib/object.scm 85 */
							BgL_new1104z00_9360 =
								(BgL_z62conditionz62_bglt) (BgL_new1104z00_8279);
						}
					else
						{
							obj_t BgL_auxz00_13040;

							BgL_auxz00_13040 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 3188)), BGl_string4416z00zz__objectz00,
								BGl_string4314z00zz__objectz00, BgL_new1104z00_8279);
							FAILURE(BgL_auxz00_13040, BFALSE, BFALSE);
						}
					{	/* Llib/object.scm 85 */

						BgL_auxz00_13036 = BgL_new1104z00_9360;
				}}
				return (obj_t) (BgL_auxz00_13036);
			}
		}
	}



/* %allocate-&condition */
	BGL_EXPORTED_DEF BgL_z62conditionz62_bglt
		BGl_z52allocatezd2z62conditionze2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			{	/* Llib/object.scm 85 */
				BgL_z62conditionz62_bglt BgL_new1106z00_9361;

				BgL_new1106z00_9361 =
					((BgL_z62conditionz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62conditionz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1106z00_9361),
					BGl_classzd2numzd2zz__objectz00(BGl_z62conditionz62zz__objectz00));
				{	/* Llib/object.scm 85 */
					BgL_objectz00_bglt BgL_auxz00_13049;

					BgL_auxz00_13049 = (BgL_objectz00_bglt) (BgL_new1106z00_9361);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_13049, BFALSE);
				}
				return BgL_new1106z00_9361;
			}
		}
	}



/* _%allocate-&condition */
	obj_t BGl__z52allocatezd2z62conditionze2zz__objectz00(obj_t BgL_envz00_7875)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			{	/* Llib/object.scm 85 */
				BgL_z62conditionz62_bglt BgL_auxz00_13052;

				{	/* Llib/object.scm 85 */
					BgL_z62conditionz62_bglt BgL_res4539z00_9365;

					{	/* Llib/object.scm 85 */
						BgL_z62conditionz62_bglt BgL_new1106z00_9363;

						BgL_new1106z00_9363 =
							((BgL_z62conditionz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62conditionz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1106z00_9363),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62conditionz62zz__objectz00));
						{	/* Llib/object.scm 85 */
							BgL_objectz00_bglt BgL_auxz00_13057;

							BgL_auxz00_13057 = (BgL_objectz00_bglt) (BgL_new1106z00_9363);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13057, BFALSE);
						}
						BgL_res4539z00_9365 = BgL_new1106z00_9363;
					}
					BgL_auxz00_13052 = BgL_res4539z00_9365;
				}
				return (obj_t) (BgL_auxz00_13052);
			}
		}
	}



/* &condition-nil */
	BGL_EXPORTED_DEF BgL_z62conditionz62_bglt
		BGl_z62conditionzd2nilzb0zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			if ((BGl_z52thezd2z62conditionzd2nilz30zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 85 */
					{	/* Llib/object.scm 85 */
						BgL_z62conditionz62_bglt BgL_res3908z00_5672;

						{	/* Llib/object.scm 85 */
							BgL_z62conditionz62_bglt BgL_new1106z00_5664;

							BgL_new1106z00_5664 =
								((BgL_z62conditionz62_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62conditionz62_bgl))));
							{	/* Llib/object.scm 85 */
								long BgL_arg3145z00_5665;

								{	/* Llib/object.scm 85 */
									long BgL_res3907z00_5669;

									{	/* Llib/object.scm 85 */
										obj_t BgL_classz00_5666;

										BgL_classz00_5666 = BGl_z62conditionz62zz__objectz00;
										{	/* Llib/object.scm 85 */
											obj_t BgL_vectorz00_5667;

											int BgL_kz00_5668;

											BgL_vectorz00_5667 = BgL_classz00_5666;
											BgL_kz00_5668 = (int) (((long) 1));
											BgL_res3907z00_5669 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5667,
													BgL_kz00_5668));
									}}
									BgL_arg3145z00_5665 = BgL_res3907z00_5669;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1106z00_5664),
									BgL_arg3145z00_5665);
							}
							{	/* Llib/object.scm 85 */
								BgL_objectz00_bglt BgL_auxz00_13069;

								BgL_auxz00_13069 = (BgL_objectz00_bglt) (BgL_new1106z00_5664);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_13069, BFALSE);
							}
							BgL_res3908z00_5672 = BgL_new1106z00_5664;
						}
						BGl_z52thezd2z62conditionzd2nilz30zz__objectz00 =
							(obj_t) (BgL_res3908z00_5672);
					}
					{	/* Llib/object.scm 85 */
						BgL_z62conditionz62_bglt BgL_new1104z00_5673;

						BgL_new1104z00_5673 =
							(BgL_z62conditionz62_bglt)
							(BGl_z52thezd2z62conditionzd2nilz30zz__objectz00);
						{	/* Llib/object.scm 85 */

							(obj_t) (BgL_new1104z00_5673);
				}}}
			else
				{	/* Llib/object.scm 85 */
					BFALSE;
				}
			return
				(BgL_z62conditionz62_bglt)
				(BGl_z52thezd2z62conditionzd2nilz30zz__objectz00);
		}
	}



/* _&condition-nil */
	obj_t BGl__z62conditionzd2nilzb0zz__objectz00(obj_t BgL_envz00_7876)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			return (obj_t) (BGl_z62conditionzd2nilzb0zz__objectz00());
		}
	}



/* make-object */
	BGL_EXPORTED_DEF BgL_objectz00_bglt BGl_makezd2objectzd2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			{	/* Llib/object.scm 84 */
				BgL_objectz00_bglt BgL_new1094z00_5674;

				{	/* Llib/object.scm 84 */
					BgL_objectz00_bglt BgL_res3910z00_5683;

					{	/* Llib/object.scm 84 */
						BgL_objectz00_bglt BgL_new1098z00_5675;

						BgL_new1098z00_5675 =
							((BgL_objectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_objectz00_bgl))));
						{	/* Llib/object.scm 84 */
							long BgL_arg3147z00_5676;

							{	/* Llib/object.scm 84 */
								long BgL_res3909z00_5680;

								{	/* Llib/object.scm 84 */
									obj_t BgL_classz00_5677;

									BgL_classz00_5677 = BGl_objectz00zz__objectz00;
									{	/* Llib/object.scm 84 */
										obj_t BgL_vectorz00_5678;

										int BgL_kz00_5679;

										BgL_vectorz00_5678 = BgL_classz00_5677;
										BgL_kz00_5679 = (int) (((long) 1));
										BgL_res3909z00_5680 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5678,
												BgL_kz00_5679));
								}}
								BgL_arg3147z00_5676 = BgL_res3909z00_5680;
							}
							BGL_OBJECT_CLASS_NUM_SET(BgL_new1098z00_5675,
								BgL_arg3147z00_5676);
						}
						BGL_OBJECT_WIDENING_SET(BgL_new1098z00_5675, BFALSE);
						BgL_res3910z00_5683 = BgL_new1098z00_5675;
					}
					BgL_new1094z00_5674 = BgL_res3910z00_5683;
				}
				return BgL_new1094z00_5674;
			}
		}
	}



/* _make-object */
	obj_t BGl__makezd2objectzd2zz__objectz00(obj_t BgL_envz00_7871)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			return (obj_t) (BGl_makezd2objectzd2zz__objectz00());
		}
	}



/* fill-object! */
	BGL_EXPORTED_DEF BgL_objectz00_bglt
		BGl_fillzd2objectz12zc0zz__objectz00(BgL_objectz00_bglt BgL_new1096z00_577)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			{	/* Llib/object.scm 84 */

				return BgL_new1096z00_577;
			}
		}
	}



/* _fill-object! */
	obj_t BGl__fillzd2objectz12zc0zz__objectz00(obj_t BgL_envz00_8280,
		obj_t BgL_new1096z00_8281)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			{	/* Llib/object.scm 84 */
				BgL_objectz00_bglt BgL_auxz00_13086;

				{	/* Llib/object.scm 84 */
					BgL_objectz00_bglt BgL_new1096z00_9367;

					if (BGL_OBJECTP(BgL_new1096z00_8281))
						{	/* Llib/object.scm 84 */
							BgL_new1096z00_9367 = (BgL_objectz00_bglt) (BgL_new1096z00_8281);
						}
					else
						{
							obj_t BgL_auxz00_13090;

							BgL_auxz00_13090 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 3160)), BGl_string4417z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_new1096z00_8281);
							FAILURE(BgL_auxz00_13090, BFALSE, BFALSE);
						}
					{	/* Llib/object.scm 84 */

						BgL_auxz00_13086 = BgL_new1096z00_9367;
				}}
				return (obj_t) (BgL_auxz00_13086);
			}
		}
	}



/* %allocate-object */
	BGL_EXPORTED_DEF BgL_objectz00_bglt BGl_z52allocatezd2objectz80zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			{	/* Llib/object.scm 84 */
				BgL_objectz00_bglt BgL_new1098z00_9368;

				BgL_new1098z00_9368 =
					((BgL_objectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_objectz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(BgL_new1098z00_9368,
					BGl_classzd2numzd2zz__objectz00(BGl_objectz00zz__objectz00));
				BGL_OBJECT_WIDENING_SET(BgL_new1098z00_9368, BFALSE);
				return BgL_new1098z00_9368;
			}
		}
	}



/* _%allocate-object */
	obj_t BGl__z52allocatezd2objectz80zz__objectz00(obj_t BgL_envz00_7872)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			{	/* Llib/object.scm 84 */
				BgL_objectz00_bglt BgL_auxz00_13099;

				{	/* Llib/object.scm 84 */
					BgL_objectz00_bglt BgL_res4540z00_9370;

					{	/* Llib/object.scm 84 */
						BgL_objectz00_bglt BgL_new1098z00_9369;

						BgL_new1098z00_9369 =
							((BgL_objectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_objectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET(BgL_new1098z00_9369,
							BGl_classzd2numzd2zz__objectz00(BGl_objectz00zz__objectz00));
						BGL_OBJECT_WIDENING_SET(BgL_new1098z00_9369, BFALSE);
						BgL_res4540z00_9370 = BgL_new1098z00_9369;
					}
					BgL_auxz00_13099 = BgL_res4540z00_9370;
				}
				return (obj_t) (BgL_auxz00_13099);
			}
		}
	}



/* object-nil */
	BGL_EXPORTED_DEF BgL_objectz00_bglt BGl_objectzd2nilzd2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			if ((BGl_z52thezd2objectzd2nilz52zz__objectz00 == BUNSPEC))
				{	/* Llib/object.scm 84 */
					{	/* Llib/object.scm 84 */
						BgL_objectz00_bglt BgL_res3912z00_5697;

						{	/* Llib/object.scm 84 */
							BgL_objectz00_bglt BgL_new1098z00_5689;

							BgL_new1098z00_5689 =
								((BgL_objectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_objectz00_bgl))));
							{	/* Llib/object.scm 84 */
								long BgL_arg3147z00_5690;

								{	/* Llib/object.scm 84 */
									long BgL_res3911z00_5694;

									{	/* Llib/object.scm 84 */
										obj_t BgL_classz00_5691;

										BgL_classz00_5691 = BGl_objectz00zz__objectz00;
										{	/* Llib/object.scm 84 */
											obj_t BgL_vectorz00_5692;

											int BgL_kz00_5693;

											BgL_vectorz00_5692 = BgL_classz00_5691;
											BgL_kz00_5693 = (int) (((long) 1));
											BgL_res3911z00_5694 =
												(long) CINT(VECTOR_REF(BgL_vectorz00_5692,
													BgL_kz00_5693));
									}}
									BgL_arg3147z00_5690 = BgL_res3911z00_5694;
								}
								BGL_OBJECT_CLASS_NUM_SET(BgL_new1098z00_5689,
									BgL_arg3147z00_5690);
							}
							BGL_OBJECT_WIDENING_SET(BgL_new1098z00_5689, BFALSE);
							BgL_res3912z00_5697 = BgL_new1098z00_5689;
						}
						BGl_z52thezd2objectzd2nilz52zz__objectz00 =
							(obj_t) (BgL_res3912z00_5697);
					}
					{	/* Llib/object.scm 84 */
						BgL_objectz00_bglt BgL_new1096z00_5698;

						BgL_new1096z00_5698 =
							(BgL_objectz00_bglt) (BGl_z52thezd2objectzd2nilz52zz__objectz00);
						{	/* Llib/object.scm 84 */

							(obj_t) (BgL_new1096z00_5698);
				}}}
			else
				{	/* Llib/object.scm 84 */
					BFALSE;
				}
			return (BgL_objectz00_bglt) (BGl_z52thezd2objectzd2nilz52zz__objectz00);
		}
	}



/* _object-nil */
	obj_t BGl__objectzd2nilzd2zz__objectz00(obj_t BgL_envz00_7873)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			return (obj_t) (BGl_objectzd2nilzd2zz__objectz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_5699;

				BgL_classzd2minzd2_5699 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 17 */
					obj_t BgL_zc3anonymousza32754ze3z83_8324;

					BgL_zc3anonymousza32754ze3z83_8324 =
						make_fx_procedure(BGl_zc3anonymousza32754ze3_4012z83zz__objectz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_8324,
						(int) (((long) 0)), BGl_string4418z00zz__objectz00);
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
						BgL_zc3anonymousza32754ze3z83_8324);
			}}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_5702;

				BgL_classzd2minzd2_5702 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 17 */
					obj_t BgL_zc3anonymousza32754ze3z83_8317;

					BgL_zc3anonymousza32754ze3z83_8317 =
						make_fx_procedure(BGl_zc3anonymousza32754ze3_4011z83zz__objectz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_8317,
						(int) (((long) 0)), BGl_string4419z00zz__objectz00);
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
						BgL_zc3anonymousza32754ze3z83_8317);
			}}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_5705;

				BgL_classzd2minzd2_5705 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 17 */
					obj_t BgL_zc3anonymousza32754ze3z83_8312;

					BgL_zc3anonymousza32754ze3z83_8312 =
						make_fx_procedure(BGl_zc3anonymousza32754ze3_4010z83zz__objectz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_8312,
						(int) (((long) 0)), BGl_string4420z00zz__objectz00);
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
						BgL_zc3anonymousza32754ze3z83_8312);
			}}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_5708;

				BgL_classzd2minzd2_5708 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 17 */
					obj_t BgL_zc3anonymousza32754ze3z83_8308;

					BgL_zc3anonymousza32754ze3z83_8308 =
						make_fx_procedure(BGl_zc3anonymousza32754ze3_4009z83zz__objectz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_8308,
						(int) (((long) 0)), BGl_string4421z00zz__objectz00);
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
						BgL_zc3anonymousza32754ze3z83_8308);
			}}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_5711;

				BgL_classzd2minzd2_5711 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 17 */
					obj_t BgL_zc3anonymousza32754ze3z83_8303;

					BgL_zc3anonymousza32754ze3z83_8303 =
						make_fx_procedure(BGl_zc3anonymousza32754ze3_4008z83zz__objectz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_8303,
						(int) (((long) 0)), BGl_string4422z00zz__objectz00);
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
						BgL_zc3anonymousza32754ze3z83_8303);
			}}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_5714;

				BgL_classzd2minzd2_5714 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 17 */
					obj_t BgL_zc3anonymousza32754ze3z83_8294;

					BgL_zc3anonymousza32754ze3z83_8294 =
						make_fx_procedure(BGl_zc3anonymousza32754ze3_4007z83zz__objectz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_8294,
						(int) (((long) 0)), BGl_string4423z00zz__objectz00);
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
						BgL_zc3anonymousza32754ze3z83_8294);
			}}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_5717;

				BgL_classzd2minzd2_5717 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 17 */
					obj_t BgL_zc3anonymousza32754ze3z83_8287;

					BgL_zc3anonymousza32754ze3z83_8287 =
						make_fx_procedure(BGl_zc3anonymousza32754ze3_4006z83zz__objectz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_8287,
						(int) (((long) 0)), BGl_string4424z00zz__objectz00);
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
						BgL_zc3anonymousza32754ze3z83_8287);
			}}
			{	/* Llib/object.scm 17 */
				obj_t BgL_zc3anonymousza32754ze3z83_8282;

				BgL_zc3anonymousza32754ze3z83_8282 =
					make_fx_procedure(BGl_zc3anonymousza32754ze3_4005z83zz__objectz00,
					(int) (((long) 0)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32754ze3z83_8282,
					(int) (((long) 0)), BGl_string4425z00zz__objectz00);
				return
					BGl_withzd2lockzd2zz__threadz00(bigloo_generic_mutex,
					BgL_zc3anonymousza32754ze3z83_8282);
			}
		}
	}



/* <anonymous:2754>_4005 */
	obj_t BGl_zc3anonymousza32754ze3_4005z83zz__objectz00(obj_t BgL_envz00_8331)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_namez00_8332;

				BgL_namez00_8332 = PROCEDURE_REF(BgL_envz00_8331, (int) (((long) 0)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
						BGl_exceptionzd2notifyzd2def2453zd2envzd2zz__objectz00,
						BgL_namez00_8332);
				}
			}
		}
	}



/* <anonymous:2754>_4006 */
	obj_t BGl_zc3anonymousza32754ze3_4006z83zz__objectz00(obj_t BgL_envz00_8333)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_namez00_8334;

				BgL_namez00_8334 = PROCEDURE_REF(BgL_envz00_8333, (int) (((long) 0)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_objectzd2equalzf3zd2envzf3zz__objectz00,
						BGl_objectzd2equalzf3zd2defaul2451zd2envz21zz__objectz00,
						BgL_namez00_8334);
				}
			}
		}
	}



/* <anonymous:2754>_4007 */
	obj_t BGl_zc3anonymousza32754ze3_4007z83zz__objectz00(obj_t BgL_envz00_8335)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_namez00_8336;

				BgL_namez00_8336 = PROCEDURE_REF(BgL_envz00_8335, (int) (((long) 0)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_objectzd2printzd2envz00zz__objectz00,
						BGl_objectzd2printzd2default2449zd2envzd2zz__objectz00,
						BgL_namez00_8336);
				}
			}
		}
	}



/* <anonymous:2754>_4008 */
	obj_t BGl_zc3anonymousza32754ze3_4008z83zz__objectz00(obj_t BgL_envz00_8337)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_namez00_8338;

				BgL_namez00_8338 = PROCEDURE_REF(BgL_envz00_8337, (int) (((long) 0)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_objectzd2hashnumberzd2envz00zz__objectz00,
						BGl_objectzd2hashnumberzd2de2447zd2envzd2zz__objectz00,
						BgL_namez00_8338);
				}
			}
		}
	}



/* <anonymous:2754>_4009 */
	obj_t BGl_zc3anonymousza32754ze3_4009z83zz__objectz00(obj_t BgL_envz00_8339)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_namez00_8340;

				BgL_namez00_8340 = PROCEDURE_REF(BgL_envz00_8339, (int) (((long) 0)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
						BGl_structzb2objectzd2ze3objec2445zd2envz51zz__objectz00,
						BgL_namez00_8340);
				}
			}
		}
	}



/* <anonymous:2754>_4010 */
	obj_t BGl_zc3anonymousza32754ze3_4010z83zz__objectz00(obj_t BgL_envz00_8341)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_namez00_8342;

				BgL_namez00_8342 = PROCEDURE_REF(BgL_envz00_8341, (int) (((long) 0)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_objectzd2ze3structzd2envze3zz__objectz00,
						BGl_objectzd2ze3structzd2defau2442zd2envz31zz__objectz00,
						BgL_namez00_8342);
				}
			}
		}
	}



/* <anonymous:2754>_4011 */
	obj_t BGl_zc3anonymousza32754ze3_4011z83zz__objectz00(obj_t BgL_envz00_8343)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_namez00_8344;

				BgL_namez00_8344 = PROCEDURE_REF(BgL_envz00_8343, (int) (((long) 0)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_objectzd2writezd2envz00zz__objectz00,
						BGl_objectzd2writezd2default2440zd2envzd2zz__objectz00,
						BgL_namez00_8344);
				}
			}
		}
	}



/* <anonymous:2754>_4012 */
	obj_t BGl_zc3anonymousza32754ze3_4012z83zz__objectz00(obj_t BgL_envz00_8345)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 915 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_namez00_8346;

				BgL_namez00_8346 = PROCEDURE_REF(BgL_envz00_8345, (int) (((long) 0)));
				{

					return
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_objectzd2displayzd2envz00zz__objectz00,
						BGl_objectzd2displayzd2defau2437zd2envzd2zz__objectz00,
						BgL_namez00_8346);
				}
			}
		}
	}



/* object-display */
	BGL_EXPORTED_DEF obj_t BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_142, obj_t BgL_portz00_143)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1192 */
			{	/* Llib/object.scm 1192 */
				obj_t BgL_method2439z00_5723;

				{	/* Llib/object.scm 1192 */
					long BgL_objzd2classzd2numz00_5726;

					BgL_objzd2classzd2numz00_5726 = BGL_OBJECT_CLASS_NUM(BgL_objz00_142);
					{	/* Llib/object.scm 1192 */
						obj_t BgL_arg2803z00_5727;

						BgL_arg2803z00_5727 =
							PROCEDURE_REF(BGl_objectzd2displayzd2envz00zz__objectz00,
							(int) (((long) 1)));
						{	/* Llib/object.scm 1192 */
							obj_t BgL_arrayz00_5729;

							int BgL_offsetz00_5730;

							BgL_arrayz00_5729 = BgL_arg2803z00_5727;
							BgL_offsetz00_5730 = (int) (BgL_objzd2classzd2numz00_5726);
							{	/* Llib/object.scm 1192 */
								long BgL_offsetz00_5731;

								BgL_offsetz00_5731 =
									((long) (BgL_offsetz00_5730) - OBJECT_TYPE);
								{	/* Llib/object.scm 1192 */
									long BgL_modz00_5732;

									{	/* Llib/object.scm 1192 */
										int BgL_arg2631z00_5733;

										BgL_arg2631z00_5733 = (int) (((long) 16));
										{	/* Llib/object.scm 1192 */
											long BgL_auxz00_13198;

											BgL_auxz00_13198 = (long) (BgL_arg2631z00_5733);
											BgL_modz00_5732 = (BgL_offsetz00_5731 / BgL_auxz00_13198);
									}}
									{	/* Llib/object.scm 1192 */
										long BgL_restz00_5734;

										{	/* Llib/object.scm 1192 */
											int BgL_arg2630z00_5735;

											BgL_arg2630z00_5735 = (int) (((long) 16));
											{	/* Llib/object.scm 1192 */
												long BgL_auxz00_13202;

												BgL_auxz00_13202 = (long) (BgL_arg2630z00_5735);
												BgL_restz00_5734 =
													(BgL_offsetz00_5731 % BgL_auxz00_13202);
										}}
										{	/* Llib/object.scm 1192 */

											BgL_method2439z00_5723 =
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_5729,
													(int) (BgL_modz00_5732)), (int) (BgL_restz00_5734));
				}}}}}}}
				{	/* Llib/object.scm 1192 */
					obj_t BgL_auxz00_13209;

					{	/* Llib/object.scm 1192 */
						obj_t BgL_list3149z00_5724;

						BgL_list3149z00_5724 = MAKE_PAIR(BgL_portz00_143, BNIL);
						BgL_auxz00_13209 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
							(obj_t) (BgL_objz00_142), BgL_list3149z00_5724);
					}
					return apply(BgL_method2439z00_5723, BgL_auxz00_13209);
				}
			}
		}
	}



/* _object-display */
	obj_t BGl__objectzd2displayzd2zz__objectz00(obj_t BgL_envz00_8325,
		obj_t BgL_objz00_8326, obj_t BgL_portz00_8327)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1192 */
			{	/* Llib/object.scm 1192 */
				BgL_objectz00_bglt BgL_auxz00_13214;

				if (BGL_OBJECTP(BgL_objz00_8326))
					{	/* Llib/object.scm 1192 */
						BgL_auxz00_13214 = (BgL_objectz00_bglt) (BgL_objz00_8326);
					}
				else
					{
						obj_t BgL_auxz00_13218;

						BgL_auxz00_13218 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 52822)), BGl_string4426z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_8326);
						FAILURE(BgL_auxz00_13218, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2displayzd2zz__objectz00(BgL_auxz00_13214,
					BgL_portz00_8327);
			}
		}
	}



/* object-display-defau2437 */
	obj_t BGl_objectzd2displayzd2defau2437z00zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_144, obj_t BgL_portz00_145)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1193 */
				obj_t BgL_portz00_5749;

				if (PAIRP(BgL_portz00_145))
					{	/* Llib/object.scm 1193 */
						BgL_portz00_5749 = CAR(BgL_portz00_145);
					}
				else
					{	/* Llib/object.scm 1193 */
						obj_t BgL_res3915z00_5754;

						{	/* Llib/object.scm 1193 */
							obj_t BgL_auxz00_13226;

							BgL_auxz00_13226 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3915z00_5754 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_13226);
						}
						BgL_portz00_5749 = BgL_res3915z00_5754;
					}
				{	/* Llib/object.scm 1193 */
					obj_t BgL_portz00_5756;

					BgL_portz00_5756 = BgL_portz00_5749;
					{	/* Llib/object.scm 1193 */
						obj_t BgL_method2450z00_5757;

						{	/* Llib/object.scm 1193 */
							long BgL_objzd2classzd2numz00_5759;

							BgL_objzd2classzd2numz00_5759 =
								BGL_OBJECT_CLASS_NUM(BgL_objz00_144);
							{	/* Llib/object.scm 1193 */
								obj_t BgL_arg2803z00_5760;

								BgL_arg2803z00_5760 =
									PROCEDURE_REF(BGl_objectzd2printzd2envz00zz__objectz00,
									(int) (((long) 1)));
								{	/* Llib/object.scm 1193 */
									obj_t BgL_arrayz00_5762;

									int BgL_offsetz00_5763;

									BgL_arrayz00_5762 = BgL_arg2803z00_5760;
									BgL_offsetz00_5763 = (int) (BgL_objzd2classzd2numz00_5759);
									{	/* Llib/object.scm 1193 */
										long BgL_offsetz00_5764;

										BgL_offsetz00_5764 =
											((long) (BgL_offsetz00_5763) - OBJECT_TYPE);
										{	/* Llib/object.scm 1193 */
											long BgL_modz00_5765;

											{	/* Llib/object.scm 1193 */
												int BgL_arg2631z00_5766;

												BgL_arg2631z00_5766 = (int) (((long) 16));
												{	/* Llib/object.scm 1193 */
													long BgL_auxz00_13236;

													BgL_auxz00_13236 = (long) (BgL_arg2631z00_5766);
													BgL_modz00_5765 =
														(BgL_offsetz00_5764 / BgL_auxz00_13236);
											}}
											{	/* Llib/object.scm 1193 */
												long BgL_restz00_5767;

												{	/* Llib/object.scm 1193 */
													int BgL_arg2630z00_5768;

													BgL_arg2630z00_5768 = (int) (((long) 16));
													{	/* Llib/object.scm 1193 */
														long BgL_auxz00_13240;

														BgL_auxz00_13240 = (long) (BgL_arg2630z00_5768);
														BgL_restz00_5767 =
															(BgL_offsetz00_5764 % BgL_auxz00_13240);
												}}
												{	/* Llib/object.scm 1193 */

													BgL_method2450z00_5757 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_5762,
															(int) (BgL_modz00_5765)),
														(int) (BgL_restz00_5767));
						}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method2450z00_5757) (BgL_method2450z00_5757,
							(obj_t) (BgL_objz00_144), BgL_portz00_5756,
							BGl_displayzd2envzd2zz__r4_output_6_10_3z00, BEOA);
					}
				}
			}
		}
	}



/* _object-display-defau2437 */
	obj_t BGl__objectzd2displayzd2defau2437z00zz__objectz00(obj_t BgL_envz00_8328,
		obj_t BgL_objz00_8329, obj_t BgL_portz00_8330)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1193 */
				BgL_objectz00_bglt BgL_auxz00_13250;

				if (BGL_OBJECTP(BgL_objz00_8329))
					{	/* Llib/object.scm 1193 */
						BgL_auxz00_13250 = (BgL_objectz00_bglt) (BgL_objz00_8329);
					}
				else
					{
						obj_t BgL_auxz00_13254;

						BgL_auxz00_13254 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 52889)), BGl_string4427z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_8329);
						FAILURE(BgL_auxz00_13254, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2displayzd2defau2437z00zz__objectz00(BgL_auxz00_13250,
					BgL_portz00_8330);
			}
		}
	}



/* object-write */
	BGL_EXPORTED_DEF obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_146, obj_t BgL_portz00_147)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1199 */
			{	/* Llib/object.scm 1199 */
				obj_t BgL_method2441z00_5782;

				{	/* Llib/object.scm 1199 */
					long BgL_objzd2classzd2numz00_5785;

					BgL_objzd2classzd2numz00_5785 = BGL_OBJECT_CLASS_NUM(BgL_objz00_146);
					{	/* Llib/object.scm 1199 */
						obj_t BgL_arg2803z00_5786;

						BgL_arg2803z00_5786 =
							PROCEDURE_REF(BGl_objectzd2writezd2envz00zz__objectz00,
							(int) (((long) 1)));
						{	/* Llib/object.scm 1199 */
							obj_t BgL_arrayz00_5788;

							int BgL_offsetz00_5789;

							BgL_arrayz00_5788 = BgL_arg2803z00_5786;
							BgL_offsetz00_5789 = (int) (BgL_objzd2classzd2numz00_5785);
							{	/* Llib/object.scm 1199 */
								long BgL_offsetz00_5790;

								BgL_offsetz00_5790 =
									((long) (BgL_offsetz00_5789) - OBJECT_TYPE);
								{	/* Llib/object.scm 1199 */
									long BgL_modz00_5791;

									{	/* Llib/object.scm 1199 */
										int BgL_arg2631z00_5792;

										BgL_arg2631z00_5792 = (int) (((long) 16));
										{	/* Llib/object.scm 1199 */
											long BgL_auxz00_13266;

											BgL_auxz00_13266 = (long) (BgL_arg2631z00_5792);
											BgL_modz00_5791 = (BgL_offsetz00_5790 / BgL_auxz00_13266);
									}}
									{	/* Llib/object.scm 1199 */
										long BgL_restz00_5793;

										{	/* Llib/object.scm 1199 */
											int BgL_arg2630z00_5794;

											BgL_arg2630z00_5794 = (int) (((long) 16));
											{	/* Llib/object.scm 1199 */
												long BgL_auxz00_13270;

												BgL_auxz00_13270 = (long) (BgL_arg2630z00_5794);
												BgL_restz00_5793 =
													(BgL_offsetz00_5790 % BgL_auxz00_13270);
										}}
										{	/* Llib/object.scm 1199 */

											BgL_method2441z00_5782 =
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_5788,
													(int) (BgL_modz00_5791)), (int) (BgL_restz00_5793));
				}}}}}}}
				{	/* Llib/object.scm 1199 */
					obj_t BgL_auxz00_13277;

					{	/* Llib/object.scm 1199 */
						obj_t BgL_list3151z00_5783;

						BgL_list3151z00_5783 = MAKE_PAIR(BgL_portz00_147, BNIL);
						BgL_auxz00_13277 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
							(obj_t) (BgL_objz00_146), BgL_list3151z00_5783);
					}
					return apply(BgL_method2441z00_5782, BgL_auxz00_13277);
				}
			}
		}
	}



/* _object-write */
	obj_t BGl__objectzd2writezd2zz__objectz00(obj_t BgL_envz00_8318,
		obj_t BgL_objz00_8319, obj_t BgL_portz00_8320)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1199 */
			{	/* Llib/object.scm 1199 */
				BgL_objectz00_bglt BgL_auxz00_13282;

				if (BGL_OBJECTP(BgL_objz00_8319))
					{	/* Llib/object.scm 1199 */
						BgL_auxz00_13282 = (BgL_objectz00_bglt) (BgL_objz00_8319);
					}
				else
					{
						obj_t BgL_auxz00_13286;

						BgL_auxz00_13286 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 53205)), BGl_string4428z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_8319);
						FAILURE(BgL_auxz00_13286, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2writezd2zz__objectz00(BgL_auxz00_13282,
					BgL_portz00_8320);
			}
		}
	}



/* object-write-default2440 */
	obj_t BGl_objectzd2writezd2default2440z00zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_148, obj_t BgL_portz00_149)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1200 */
				obj_t BgL_portz00_5808;

				if (PAIRP(BgL_portz00_149))
					{	/* Llib/object.scm 1200 */
						BgL_portz00_5808 = CAR(BgL_portz00_149);
					}
				else
					{	/* Llib/object.scm 1200 */
						obj_t BgL_res3920z00_5813;

						{	/* Llib/object.scm 1200 */
							obj_t BgL_auxz00_13294;

							BgL_auxz00_13294 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3920z00_5813 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_13294);
						}
						BgL_portz00_5808 = BgL_res3920z00_5813;
					}
				{	/* Llib/object.scm 1200 */
					obj_t BgL_portz00_5815;

					BgL_portz00_5815 = BgL_portz00_5808;
					{	/* Llib/object.scm 1200 */
						obj_t BgL_method2450z00_5816;

						{	/* Llib/object.scm 1200 */
							long BgL_objzd2classzd2numz00_5818;

							BgL_objzd2classzd2numz00_5818 =
								BGL_OBJECT_CLASS_NUM(BgL_objz00_148);
							{	/* Llib/object.scm 1200 */
								obj_t BgL_arg2803z00_5819;

								BgL_arg2803z00_5819 =
									PROCEDURE_REF(BGl_objectzd2printzd2envz00zz__objectz00,
									(int) (((long) 1)));
								{	/* Llib/object.scm 1200 */
									obj_t BgL_arrayz00_5821;

									int BgL_offsetz00_5822;

									BgL_arrayz00_5821 = BgL_arg2803z00_5819;
									BgL_offsetz00_5822 = (int) (BgL_objzd2classzd2numz00_5818);
									{	/* Llib/object.scm 1200 */
										long BgL_offsetz00_5823;

										BgL_offsetz00_5823 =
											((long) (BgL_offsetz00_5822) - OBJECT_TYPE);
										{	/* Llib/object.scm 1200 */
											long BgL_modz00_5824;

											{	/* Llib/object.scm 1200 */
												int BgL_arg2631z00_5825;

												BgL_arg2631z00_5825 = (int) (((long) 16));
												{	/* Llib/object.scm 1200 */
													long BgL_auxz00_13304;

													BgL_auxz00_13304 = (long) (BgL_arg2631z00_5825);
													BgL_modz00_5824 =
														(BgL_offsetz00_5823 / BgL_auxz00_13304);
											}}
											{	/* Llib/object.scm 1200 */
												long BgL_restz00_5826;

												{	/* Llib/object.scm 1200 */
													int BgL_arg2630z00_5827;

													BgL_arg2630z00_5827 = (int) (((long) 16));
													{	/* Llib/object.scm 1200 */
														long BgL_auxz00_13308;

														BgL_auxz00_13308 = (long) (BgL_arg2630z00_5827);
														BgL_restz00_5826 =
															(BgL_offsetz00_5823 % BgL_auxz00_13308);
												}}
												{	/* Llib/object.scm 1200 */

													BgL_method2450z00_5816 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_5821,
															(int) (BgL_modz00_5824)),
														(int) (BgL_restz00_5826));
						}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method2450z00_5816) (BgL_method2450z00_5816,
							(obj_t) (BgL_objz00_148), BgL_portz00_5815,
							BGl_writezd2envzd2zz__r4_output_6_10_3z00, BEOA);
					}
				}
			}
		}
	}



/* _object-write-default2440 */
	obj_t BGl__objectzd2writezd2default2440z00zz__objectz00(obj_t BgL_envz00_8321,
		obj_t BgL_objz00_8322, obj_t BgL_portz00_8323)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1200 */
				BgL_objectz00_bglt BgL_auxz00_13318;

				if (BGL_OBJECTP(BgL_objz00_8322))
					{	/* Llib/object.scm 1200 */
						BgL_auxz00_13318 = (BgL_objectz00_bglt) (BgL_objz00_8322);
					}
				else
					{
						obj_t BgL_auxz00_13322;

						BgL_auxz00_13322 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 53270)), BGl_string4429z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_8322);
						FAILURE(BgL_auxz00_13322, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2writezd2default2440z00zz__objectz00(BgL_auxz00_13318,
					BgL_portz00_8323);
			}
		}
	}



/* object->struct */
	BGL_EXPORTED_DEF obj_t
		BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt BgL_objectz00_150)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1206 */
			{	/* Llib/object.scm 1206 */
				obj_t BgL_method2444z00_5841;

				{	/* Llib/object.scm 1206 */
					long BgL_objzd2classzd2numz00_5843;

					BgL_objzd2classzd2numz00_5843 =
						BGL_OBJECT_CLASS_NUM(BgL_objectz00_150);
					{	/* Llib/object.scm 1206 */
						obj_t BgL_arg2803z00_5844;

						BgL_arg2803z00_5844 =
							PROCEDURE_REF(BGl_objectzd2ze3structzd2envze3zz__objectz00,
							(int) (((long) 1)));
						{	/* Llib/object.scm 1206 */
							obj_t BgL_arrayz00_5846;

							int BgL_offsetz00_5847;

							BgL_arrayz00_5846 = BgL_arg2803z00_5844;
							BgL_offsetz00_5847 = (int) (BgL_objzd2classzd2numz00_5843);
							{	/* Llib/object.scm 1206 */
								long BgL_offsetz00_5848;

								BgL_offsetz00_5848 =
									((long) (BgL_offsetz00_5847) - OBJECT_TYPE);
								{	/* Llib/object.scm 1206 */
									long BgL_modz00_5849;

									{	/* Llib/object.scm 1206 */
										int BgL_arg2631z00_5850;

										BgL_arg2631z00_5850 = (int) (((long) 16));
										{	/* Llib/object.scm 1206 */
											long BgL_auxz00_13334;

											BgL_auxz00_13334 = (long) (BgL_arg2631z00_5850);
											BgL_modz00_5849 = (BgL_offsetz00_5848 / BgL_auxz00_13334);
									}}
									{	/* Llib/object.scm 1206 */
										long BgL_restz00_5851;

										{	/* Llib/object.scm 1206 */
											int BgL_arg2630z00_5852;

											BgL_arg2630z00_5852 = (int) (((long) 16));
											{	/* Llib/object.scm 1206 */
												long BgL_auxz00_13338;

												BgL_auxz00_13338 = (long) (BgL_arg2630z00_5852);
												BgL_restz00_5851 =
													(BgL_offsetz00_5848 % BgL_auxz00_13338);
										}}
										{	/* Llib/object.scm 1206 */

											BgL_method2444z00_5841 =
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_5846,
													(int) (BgL_modz00_5849)), (int) (BgL_restz00_5851));
				}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method2444z00_5841) (BgL_method2444z00_5841,
					(obj_t) (BgL_objectz00_150), BEOA);
			}
		}
	}



/* _object->struct */
	obj_t BGl__objectzd2ze3structz31zz__objectz00(obj_t BgL_envz00_8313,
		obj_t BgL_objectz00_8314)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1206 */
			{	/* Llib/object.scm 1206 */
				BgL_objectz00_bglt BgL_auxz00_13348;

				if (BGL_OBJECTP(BgL_objectz00_8314))
					{	/* Llib/object.scm 1206 */
						BgL_auxz00_13348 = (BgL_objectz00_bglt) (BgL_objectz00_8314);
					}
				else
					{
						obj_t BgL_auxz00_13352;

						BgL_auxz00_13352 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 53584)), BGl_string4430z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objectz00_8314);
						FAILURE(BgL_auxz00_13352, BFALSE, BFALSE);
					}
				return BGl_objectzd2ze3structz31zz__objectz00(BgL_auxz00_13348);
			}
		}
	}



/* object->struct-defau2442 */
	obj_t BGl_objectzd2ze3structzd2defau2442ze3zz__objectz00(BgL_objectz00_bglt
		BgL_objectz00_151)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_string4420z00zz__objectz00,
				BGl_string4431z00zz__objectz00, (obj_t) (BgL_objectz00_151));
		}
	}



/* _object->struct-defau2442 */
	obj_t BGl__objectzd2ze3structzd2defau2442ze3zz__objectz00(obj_t
		BgL_envz00_8315, obj_t BgL_objectz00_8316)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1207 */
				BgL_objectz00_bglt BgL_auxz00_13359;

				if (BGL_OBJECTP(BgL_objectz00_8316))
					{	/* Llib/object.scm 1207 */
						BgL_auxz00_13359 = (BgL_objectz00_bglt) (BgL_objectz00_8316);
					}
				else
					{
						obj_t BgL_auxz00_13363;

						BgL_auxz00_13363 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 53643)), BGl_string4432z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objectz00_8316);
						FAILURE(BgL_auxz00_13363, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2ze3structzd2defau2442ze3zz__objectz00(BgL_auxz00_13359);
			}
		}
	}



/* struct+object->object */
	BGL_EXPORTED_DEF BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt
		BgL_objectz00_152, obj_t BgL_structz00_153)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1212 */
			{	/* Llib/object.scm 1212 */
				obj_t BgL_method2446z00_5866;

				{	/* Llib/object.scm 1212 */
					long BgL_objzd2classzd2numz00_5868;

					BgL_objzd2classzd2numz00_5868 =
						BGL_OBJECT_CLASS_NUM(BgL_objectz00_152);
					{	/* Llib/object.scm 1212 */
						obj_t BgL_arg2803z00_5869;

						BgL_arg2803z00_5869 =
							PROCEDURE_REF
							(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
							(int) (((long) 1)));
						{	/* Llib/object.scm 1212 */
							obj_t BgL_arrayz00_5871;

							int BgL_offsetz00_5872;

							BgL_arrayz00_5871 = BgL_arg2803z00_5869;
							BgL_offsetz00_5872 = (int) (BgL_objzd2classzd2numz00_5868);
							{	/* Llib/object.scm 1212 */
								long BgL_offsetz00_5873;

								BgL_offsetz00_5873 =
									((long) (BgL_offsetz00_5872) - OBJECT_TYPE);
								{	/* Llib/object.scm 1212 */
									long BgL_modz00_5874;

									{	/* Llib/object.scm 1212 */
										int BgL_arg2631z00_5875;

										BgL_arg2631z00_5875 = (int) (((long) 16));
										{	/* Llib/object.scm 1212 */
											long BgL_auxz00_13375;

											BgL_auxz00_13375 = (long) (BgL_arg2631z00_5875);
											BgL_modz00_5874 = (BgL_offsetz00_5873 / BgL_auxz00_13375);
									}}
									{	/* Llib/object.scm 1212 */
										long BgL_restz00_5876;

										{	/* Llib/object.scm 1212 */
											int BgL_arg2630z00_5877;

											BgL_arg2630z00_5877 = (int) (((long) 16));
											{	/* Llib/object.scm 1212 */
												long BgL_auxz00_13379;

												BgL_auxz00_13379 = (long) (BgL_arg2630z00_5877);
												BgL_restz00_5876 =
													(BgL_offsetz00_5873 % BgL_auxz00_13379);
										}}
										{	/* Llib/object.scm 1212 */

											BgL_method2446z00_5866 =
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_5871,
													(int) (BgL_modz00_5874)), (int) (BgL_restz00_5876));
				}}}}}}}
				return
					(BgL_objectz00_bglt) (PROCEDURE_ENTRY(BgL_method2446z00_5866)
					(BgL_method2446z00_5866, (obj_t) (BgL_objectz00_152),
						BgL_structz00_153, BEOA));
			}
		}
	}



/* _struct+object->object */
	obj_t BGl__structzb2objectzd2ze3objectz83zz__objectz00(obj_t BgL_envz00_7843,
		obj_t BgL_objectz00_7844, obj_t BgL_structz00_7845)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1212 */
			{	/* Llib/object.scm 1212 */
				BgL_objectz00_bglt BgL_auxz00_13390;

				{	/* Llib/object.scm 1212 */
					obj_t BgL_auxz00_13399;

					BgL_objectz00_bglt BgL_auxz00_13391;

					if (STRUCTP(BgL_structz00_7845))
						{	/* Llib/object.scm 1212 */
							BgL_auxz00_13399 = BgL_structz00_7845;
						}
					else
						{
							obj_t BgL_auxz00_13402;

							BgL_auxz00_13402 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 53932)), BGl_string4433z00zz__objectz00,
								BGl_string4302z00zz__objectz00, BgL_structz00_7845);
							FAILURE(BgL_auxz00_13402, BFALSE, BFALSE);
						}
					if (BGL_OBJECTP(BgL_objectz00_7844))
						{	/* Llib/object.scm 1212 */
							BgL_auxz00_13391 = (BgL_objectz00_bglt) (BgL_objectz00_7844);
						}
					else
						{
							obj_t BgL_auxz00_13395;

							BgL_auxz00_13395 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 53932)), BGl_string4433z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_objectz00_7844);
							FAILURE(BgL_auxz00_13395, BFALSE, BFALSE);
						}
					BgL_auxz00_13390 =
						BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_auxz00_13391,
						BgL_auxz00_13399);
				}
				return (obj_t) (BgL_auxz00_13390);
			}
		}
	}



/* struct+object->objec2445 */
	BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objec2445z83zz__objectz00(BgL_objectz00_bglt
		BgL_objectz00_154, obj_t BgL_structz00_155)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			return
				(BgL_objectz00_bglt) (BGl_errorz00zz__errorz00
				(BGl_string4421z00zz__objectz00, BGl_string4434z00zz__objectz00,
					BgL_structz00_155));
		}
	}



/* _struct+object->objec2445 */
	obj_t BGl__structzb2objectzd2ze3objec2445z83zz__objectz00(obj_t
		BgL_envz00_8309, obj_t BgL_objectz00_8310, obj_t BgL_structz00_8311)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1213 */
				BgL_objectz00_bglt BgL_auxz00_13410;

				{	/* Llib/object.scm 1213 */
					obj_t BgL_auxz00_13419;

					BgL_objectz00_bglt BgL_auxz00_13411;

					if (STRUCTP(BgL_structz00_8311))
						{	/* Llib/object.scm 1213 */
							BgL_auxz00_13419 = BgL_structz00_8311;
						}
					else
						{
							obj_t BgL_auxz00_13422;

							BgL_auxz00_13422 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 54013)), BGl_string4435z00zz__objectz00,
								BGl_string4302z00zz__objectz00, BgL_structz00_8311);
							FAILURE(BgL_auxz00_13422, BFALSE, BFALSE);
						}
					if (BGL_OBJECTP(BgL_objectz00_8310))
						{	/* Llib/object.scm 1213 */
							BgL_auxz00_13411 = (BgL_objectz00_bglt) (BgL_objectz00_8310);
						}
					else
						{
							obj_t BgL_auxz00_13415;

							BgL_auxz00_13415 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 54013)), BGl_string4435z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_objectz00_8310);
							FAILURE(BgL_auxz00_13415, BFALSE, BFALSE);
						}
					BgL_auxz00_13410 =
						BGl_structzb2objectzd2ze3objec2445z83zz__objectz00(BgL_auxz00_13411,
						BgL_auxz00_13419);
				}
				return (obj_t) (BgL_auxz00_13410);
			}
		}
	}



/* object-hashnumber */
	BGL_EXPORTED_DEF int
		BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objectz00_156)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1218 */
			{	/* Llib/object.scm 1218 */
				obj_t BgL_method2448z00_5891;

				{	/* Llib/object.scm 1218 */
					long BgL_objzd2classzd2numz00_5893;

					BgL_objzd2classzd2numz00_5893 =
						BGL_OBJECT_CLASS_NUM(BgL_objectz00_156);
					{	/* Llib/object.scm 1218 */
						obj_t BgL_arg2803z00_5894;

						BgL_arg2803z00_5894 =
							PROCEDURE_REF(BGl_objectzd2hashnumberzd2envz00zz__objectz00,
							(int) (((long) 1)));
						{	/* Llib/object.scm 1218 */
							obj_t BgL_arrayz00_5896;

							int BgL_offsetz00_5897;

							BgL_arrayz00_5896 = BgL_arg2803z00_5894;
							BgL_offsetz00_5897 = (int) (BgL_objzd2classzd2numz00_5893);
							{	/* Llib/object.scm 1218 */
								long BgL_offsetz00_5898;

								BgL_offsetz00_5898 =
									((long) (BgL_offsetz00_5897) - OBJECT_TYPE);
								{	/* Llib/object.scm 1218 */
									long BgL_modz00_5899;

									{	/* Llib/object.scm 1218 */
										int BgL_arg2631z00_5900;

										BgL_arg2631z00_5900 = (int) (((long) 16));
										{	/* Llib/object.scm 1218 */
											long BgL_auxz00_13435;

											BgL_auxz00_13435 = (long) (BgL_arg2631z00_5900);
											BgL_modz00_5899 = (BgL_offsetz00_5898 / BgL_auxz00_13435);
									}}
									{	/* Llib/object.scm 1218 */
										long BgL_restz00_5901;

										{	/* Llib/object.scm 1218 */
											int BgL_arg2630z00_5902;

											BgL_arg2630z00_5902 = (int) (((long) 16));
											{	/* Llib/object.scm 1218 */
												long BgL_auxz00_13439;

												BgL_auxz00_13439 = (long) (BgL_arg2630z00_5902);
												BgL_restz00_5901 =
													(BgL_offsetz00_5898 % BgL_auxz00_13439);
										}}
										{	/* Llib/object.scm 1218 */

											BgL_method2448z00_5891 =
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_5896,
													(int) (BgL_modz00_5899)), (int) (BgL_restz00_5901));
				}}}}}}}
				return
					CINT(PROCEDURE_ENTRY(BgL_method2448z00_5891) (BgL_method2448z00_5891,
						(obj_t) (BgL_objectz00_156), BEOA));
			}
		}
	}



/* _object-hashnumber */
	obj_t BGl__objectzd2hashnumberzd2zz__objectz00(obj_t BgL_envz00_8304,
		obj_t BgL_objectz00_8305)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1218 */
			{	/* Llib/object.scm 1218 */
				int BgL_auxz00_13450;

				{	/* Llib/object.scm 1218 */
					BgL_objectz00_bglt BgL_auxz00_13451;

					if (BGL_OBJECTP(BgL_objectz00_8305))
						{	/* Llib/object.scm 1218 */
							BgL_auxz00_13451 = (BgL_objectz00_bglt) (BgL_objectz00_8305);
						}
					else
						{
							obj_t BgL_auxz00_13455;

							BgL_auxz00_13455 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 54312)), BGl_string4436z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_objectz00_8305);
							FAILURE(BgL_auxz00_13455, BFALSE, BFALSE);
						}
					BgL_auxz00_13450 =
						BGl_objectzd2hashnumberzd2zz__objectz00(BgL_auxz00_13451);
				}
				return BINT(BgL_auxz00_13450);
			}
		}
	}



/* object-hashnumber-de2447 */
	int BGl_objectzd2hashnumberzd2de2447z00zz__objectz00(BgL_objectz00_bglt
		BgL_objectz00_157)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			return bgl_obj_hash_number((obj_t) (BgL_objectz00_157));
		}
	}



/* _object-hashnumber-de2447 */
	obj_t BGl__objectzd2hashnumberzd2de2447z00zz__objectz00(obj_t BgL_envz00_8306,
		obj_t BgL_objectz00_8307)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1219 */
				int BgL_auxz00_13463;

				{	/* Llib/object.scm 1219 */
					BgL_objectz00_bglt BgL_auxz00_13464;

					if (BGL_OBJECTP(BgL_objectz00_8307))
						{	/* Llib/object.scm 1219 */
							BgL_auxz00_13464 = (BgL_objectz00_bglt) (BgL_objectz00_8307);
						}
					else
						{
							obj_t BgL_auxz00_13468;

							BgL_auxz00_13468 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 54371)), BGl_string4437z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_objectz00_8307);
							FAILURE(BgL_auxz00_13468, BFALSE, BFALSE);
						}
					BgL_auxz00_13463 =
						BGl_objectzd2hashnumberzd2de2447z00zz__objectz00(BgL_auxz00_13464);
				}
				return BINT(BgL_auxz00_13463);
			}
		}
	}



/* object-print */
	BGL_EXPORTED_DEF obj_t BGl_objectzd2printzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_161, obj_t BgL_portz00_162, obj_t BgL_printzd2slotzd2_163)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1248 */
			{	/* Llib/object.scm 1248 */
				obj_t BgL_method2450z00_5916;

				{	/* Llib/object.scm 1248 */
					long BgL_objzd2classzd2numz00_5918;

					BgL_objzd2classzd2numz00_5918 = BGL_OBJECT_CLASS_NUM(BgL_objz00_161);
					{	/* Llib/object.scm 1248 */
						obj_t BgL_arg2803z00_5919;

						BgL_arg2803z00_5919 =
							PROCEDURE_REF(BGl_objectzd2printzd2envz00zz__objectz00,
							(int) (((long) 1)));
						{	/* Llib/object.scm 1248 */
							obj_t BgL_arrayz00_5921;

							int BgL_offsetz00_5922;

							BgL_arrayz00_5921 = BgL_arg2803z00_5919;
							BgL_offsetz00_5922 = (int) (BgL_objzd2classzd2numz00_5918);
							{	/* Llib/object.scm 1248 */
								long BgL_offsetz00_5923;

								BgL_offsetz00_5923 =
									((long) (BgL_offsetz00_5922) - OBJECT_TYPE);
								{	/* Llib/object.scm 1248 */
									long BgL_modz00_5924;

									{	/* Llib/object.scm 1248 */
										int BgL_arg2631z00_5925;

										BgL_arg2631z00_5925 = (int) (((long) 16));
										{	/* Llib/object.scm 1248 */
											long BgL_auxz00_13481;

											BgL_auxz00_13481 = (long) (BgL_arg2631z00_5925);
											BgL_modz00_5924 = (BgL_offsetz00_5923 / BgL_auxz00_13481);
									}}
									{	/* Llib/object.scm 1248 */
										long BgL_restz00_5926;

										{	/* Llib/object.scm 1248 */
											int BgL_arg2630z00_5927;

											BgL_arg2630z00_5927 = (int) (((long) 16));
											{	/* Llib/object.scm 1248 */
												long BgL_auxz00_13485;

												BgL_auxz00_13485 = (long) (BgL_arg2630z00_5927);
												BgL_restz00_5926 =
													(BgL_offsetz00_5923 % BgL_auxz00_13485);
										}}
										{	/* Llib/object.scm 1248 */

											BgL_method2450z00_5916 =
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_5921,
													(int) (BgL_modz00_5924)), (int) (BgL_restz00_5926));
				}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method2450z00_5916) (BgL_method2450z00_5916,
					(obj_t) (BgL_objz00_161), BgL_portz00_162, BgL_printzd2slotzd2_163,
					BEOA);
			}
		}
	}



/* _object-print */
	obj_t BGl__objectzd2printzd2zz__objectz00(obj_t BgL_envz00_8295,
		obj_t BgL_objz00_8296, obj_t BgL_portz00_8297,
		obj_t BgL_printzd2slotzd2_8298)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1248 */
			{	/* Llib/object.scm 1248 */
				obj_t BgL_auxz00_13510;

				obj_t BgL_auxz00_13503;

				BgL_objectz00_bglt BgL_auxz00_13495;

				if (PROCEDUREP(BgL_printzd2slotzd2_8298))
					{	/* Llib/object.scm 1248 */
						BgL_auxz00_13510 = BgL_printzd2slotzd2_8298;
					}
				else
					{
						obj_t BgL_auxz00_13513;

						BgL_auxz00_13513 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 55797)), BGl_string4438z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_printzd2slotzd2_8298);
						FAILURE(BgL_auxz00_13513, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_8297))
					{	/* Llib/object.scm 1248 */
						BgL_auxz00_13503 = BgL_portz00_8297;
					}
				else
					{
						obj_t BgL_auxz00_13506;

						BgL_auxz00_13506 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 55797)), BGl_string4438z00zz__objectz00,
							BGl_string4439z00zz__objectz00, BgL_portz00_8297);
						FAILURE(BgL_auxz00_13506, BFALSE, BFALSE);
					}
				if (BGL_OBJECTP(BgL_objz00_8296))
					{	/* Llib/object.scm 1248 */
						BgL_auxz00_13495 = (BgL_objectz00_bglt) (BgL_objz00_8296);
					}
				else
					{
						obj_t BgL_auxz00_13499;

						BgL_auxz00_13499 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 55797)), BGl_string4438z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_8296);
						FAILURE(BgL_auxz00_13499, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2printzd2zz__objectz00(BgL_auxz00_13495, BgL_auxz00_13503,
					BgL_auxz00_13510);
			}
		}
	}



/* object-print-default2449 */
	obj_t BGl_objectzd2printzd2default2449z00zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_164, obj_t BgL_portz00_165, obj_t BgL_printzd2slotzd2_166)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{
				obj_t BgL_fieldz00_2067;

				{	/* Llib/object.scm 1272 */
					obj_t BgL_classz00_2050;

					{	/* Llib/object.scm 1272 */
						long BgL_arg2628z00_5942;

						{	/* Llib/object.scm 1272 */
							long BgL_arg2629z00_5943;

							BgL_arg2629z00_5943 = BGL_OBJECT_CLASS_NUM(BgL_objz00_164);
							BgL_arg2628z00_5942 = (BgL_arg2629z00_5943 - OBJECT_TYPE);
						}
						BgL_classz00_2050 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							(int) (BgL_arg2628z00_5942));
					}
					{	/* Llib/object.scm 1272 */
						obj_t BgL_classzd2namezd2_2051;

						BgL_classzd2namezd2_2051 =
							VECTOR_REF(BgL_classz00_2050, (int) (((long) 0)));
						{	/* Llib/object.scm 1273 */
							obj_t BgL_fieldsz00_2052;

							BgL_fieldsz00_2052 =
								BGl_classzd2fieldszd2zz__objectz00(BgL_classz00_2050);
							{	/* Llib/object.scm 1274 */

								bgl_display_string(BGl_string4441z00zz__objectz00,
									BgL_portz00_165);
								bgl_display_obj(BgL_classzd2namezd2_2051, BgL_portz00_165);
								{	/* Llib/object.scm 1277 */
									bool_t BgL_testz00_13527;

									{	/* Llib/object.scm 1277 */
										bool_t BgL_res3932z00_5970;

										{	/* Llib/object.scm 1277 */
											obj_t BgL_klassz00_5956;

											{	/* Llib/object.scm 1277 */
												long BgL_arg2628z00_5960;

												{	/* Llib/object.scm 1277 */
													long BgL_arg2629z00_5961;

													BgL_arg2629z00_5961 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_164);
													BgL_arg2628z00_5960 =
														(BgL_arg2629z00_5961 - OBJECT_TYPE);
												}
												BgL_klassz00_5956 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2628z00_5960));
											}
											{	/* Llib/object.scm 1277 */
												obj_t BgL_arg2815z00_5957;

												{	/* Llib/object.scm 1277 */
													obj_t BgL_fun2816z00_5958;

													BgL_fun2816z00_5958 =
														VECTOR_REF(BgL_klassz00_5956, (int) (((long) 12)));
													BgL_arg2815z00_5957 =
														PROCEDURE_ENTRY(BgL_fun2816z00_5958)
														(BgL_fun2816z00_5958, BEOA);
												}
												BgL_res3932z00_5970 =
													(BgL_arg2815z00_5957 == (obj_t) (BgL_objz00_164));
										}}
										BgL_testz00_13527 = BgL_res3932z00_5970;
									}
									if (BgL_testz00_13527)
										{	/* Llib/object.scm 1277 */
											return
												bgl_display_string(BGl_string4442z00zz__objectz00,
												BgL_portz00_165);
										}
									else
										{	/* Llib/object.scm 1279 */
											bool_t BgL_testz00_13539;

											{	/* Llib/object.scm 1279 */
												bool_t BgL__ortest_2369z00_5974;

												BgL__ortest_2369z00_5974 = PAIRP(BgL_fieldsz00_2052);
												if (BgL__ortest_2369z00_5974)
													{	/* Llib/object.scm 1279 */
														BgL_testz00_13539 = BgL__ortest_2369z00_5974;
													}
												else
													{	/* Llib/object.scm 1279 */
														BgL_testz00_13539 = NULLP(BgL_fieldsz00_2052);
													}
											}
											if (BgL_testz00_13539)
												{
													obj_t BgL_fieldsz00_2056;

													obj_t BgL_classz00_2057;

													BgL_fieldsz00_2056 = BgL_fieldsz00_2052;
													BgL_classz00_2057 = BgL_classz00_2050;
												BgL_zc3anonymousza33155ze3z83_2058:
													if (NULLP(BgL_fieldsz00_2056))
														{	/* Llib/object.scm 1284 */
															obj_t BgL_superz00_2060;

															BgL_superz00_2060 =
																VECTOR_REF(BgL_classz00_2057,
																(int) (((long) 3)));
															if (BGl_classzf3zf3zz__objectz00
																(BgL_superz00_2060))
																{
																	obj_t BgL_classz00_13551;

																	obj_t BgL_fieldsz00_13549;

																	BgL_fieldsz00_13549 =
																		BGl_classzd2fieldszd2zz__objectz00
																		(BgL_superz00_2060);
																	BgL_classz00_13551 = BgL_superz00_2060;
																	BgL_classz00_2057 = BgL_classz00_13551;
																	BgL_fieldsz00_2056 = BgL_fieldsz00_13549;
																	goto BgL_zc3anonymousza33155ze3z83_2058;
																}
															else
																{	/* Llib/object.scm 1285 */
																	return
																		bgl_display_char(((unsigned char) '|'),
																		BgL_portz00_165);
														}}
													else
														{	/* Llib/object.scm 1283 */
															if ((BgL_fieldsz00_2056 == BUNSPEC))
																{	/* Llib/object.scm 1289 */
																	bgl_display_string
																		(BGl_string4443z00zz__objectz00,
																		BgL_portz00_165);
																	{
																		obj_t BgL_fieldsz00_13556;

																		BgL_fieldsz00_13556 = BNIL;
																		BgL_fieldsz00_2056 = BgL_fieldsz00_13556;
																		goto BgL_zc3anonymousza33155ze3z83_2058;
																	}
																}
															else
																{	/* Llib/object.scm 1289 */
																	BgL_fieldz00_2067 = CAR(BgL_fieldsz00_2056);
																	{	/* Llib/object.scm 1250 */
																		obj_t BgL_namez00_2069;

																		{	/* Llib/object.scm 1250 */
																			obj_t BgL_res3934z00_5994;

																			if (BGl_classzd2fieldzf3z21zz__objectz00
																				(BgL_fieldz00_2067))
																				{	/* Llib/object.scm 1250 */
																					BgL_res3934z00_5994 =
																						VECTOR_REF(BgL_fieldz00_2067,
																						(int) (((long) 0)));
																				}
																			else
																				{	/* Llib/object.scm 1250 */
																					BgL_res3934z00_5994 =
																						BGl_errorz00zz__errorz00
																						(BGl_string4239z00zz__objectz00,
																						BGl_string4240z00zz__objectz00,
																						BgL_fieldz00_2067);
																				}
																			BgL_namez00_2069 = BgL_res3934z00_5994;
																		}
																		{	/* Llib/object.scm 1250 */
																			obj_t BgL_getzd2valuezd2_2070;

																			{	/* Llib/object.scm 1251 */
																				obj_t BgL_res3935z00_5999;

																				if (BGl_classzd2fieldzf3z21zz__objectz00
																					(BgL_fieldz00_2067))
																					{	/* Llib/object.scm 1251 */
																						BgL_res3935z00_5999 =
																							VECTOR_REF(BgL_fieldz00_2067,
																							(int) (((long) 1)));
																					}
																				else
																					{	/* Llib/object.scm 1251 */
																						BgL_res3935z00_5999 =
																							BGl_errorz00zz__errorz00
																							(BGl_string4247z00zz__objectz00,
																							BGl_string4240z00zz__objectz00,
																							BgL_fieldz00_2067);
																					}
																				BgL_getzd2valuezd2_2070 =
																					BgL_res3935z00_5999;
																			}
																			{	/* Llib/object.scm 1251 */

																				bgl_display_string
																					(BGl_string4440z00zz__objectz00,
																					BgL_portz00_165);
																				bgl_display_obj(BgL_namez00_2069,
																					BgL_portz00_165);
																				bgl_display_char(((unsigned char) ':'),
																					BgL_portz00_165);
																				{	/* Llib/object.scm 1256 */
																					bool_t BgL_testz00_13570;

																					{	/* Llib/object.scm 1256 */
																						bool_t BgL_res3936z00_6010;

																						if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_2067))
																							{	/* Llib/object.scm 1256 */
																								obj_t BgL_auxz00_13573;

																								BgL_auxz00_13573 =
																									VECTOR_REF(BgL_fieldz00_2067,
																									(int) (((long) 3)));
																								BgL_res3936z00_6010 =
																									PROCEDUREP(BgL_auxz00_13573);
																							}
																						else
																							{	/* Llib/object.scm 1256 */
																								BgL_res3936z00_6010 =
																									CBOOL(BGl_errorz00zz__errorz00
																									(BGl_string4245z00zz__objectz00,
																										BGl_string4240z00zz__objectz00,
																										BgL_fieldz00_2067));
																							}
																						BgL_testz00_13570 =
																							BgL_res3936z00_6010;
																					}
																					if (BgL_testz00_13570)
																						{	/* Llib/object.scm 1263 */
																							obj_t BgL_getzd2lenzd2_2072;

																							{	/* Llib/object.scm 1263 */
																								obj_t BgL_res3937z00_6015;

																								if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_2067))
																									{	/* Llib/object.scm 1263 */
																										BgL_res3937z00_6015 =
																											VECTOR_REF
																											(BgL_fieldz00_2067,
																											(int) (((long) 3)));
																									}
																								else
																									{	/* Llib/object.scm 1263 */
																										BgL_res3937z00_6015 =
																											BGl_errorz00zz__errorz00
																											(BGl_string4250z00zz__objectz00,
																											BGl_string4240z00zz__objectz00,
																											BgL_fieldz00_2067);
																									}
																								BgL_getzd2lenzd2_2072 =
																									BgL_res3937z00_6015;
																							}
																							{	/* Llib/object.scm 1263 */
																								obj_t BgL_lenz00_2073;

																								BgL_lenz00_2073 =
																									PROCEDURE_ENTRY
																									(BgL_getzd2lenzd2_2072)
																									(BgL_getzd2lenzd2_2072,
																									(obj_t) (BgL_objz00_164),
																									BEOA);
																								{	/* Llib/object.scm 1264 */

																									{
																										long BgL_iz00_2075;

																										BgL_iz00_2075 = ((long) 0);
																									BgL_zc3anonymousza33164ze3z83_2076:
																										if (
																											(BgL_iz00_2075 ==
																												(long)
																												CINT(BgL_lenz00_2073)))
																											{	/* Llib/object.scm 1266 */
																												bgl_display_char((
																														(unsigned char)
																														']'),
																													BgL_portz00_165);
																											}
																										else
																											{	/* Llib/object.scm 1266 */
																												bgl_display_char((
																														(unsigned char)
																														' '),
																													BgL_portz00_165);
																												{	/* Llib/object.scm 1270 */
																													obj_t
																														BgL_arg3167z00_2078;
																													BgL_arg3167z00_2078 =
																														PROCEDURE_ENTRY
																														(BgL_getzd2valuezd2_2070)
																														(BgL_getzd2valuezd2_2070,
																														(obj_t)
																														(BgL_objz00_164),
																														BINT(BgL_iz00_2075),
																														BEOA);
																													PROCEDURE_ENTRY
																														(BgL_printzd2slotzd2_166)
																														(BgL_printzd2slotzd2_166,
																														BgL_arg3167z00_2078,
																														BgL_portz00_165,
																														BEOA);
																												}
																												{
																													long BgL_iz00_13598;

																													BgL_iz00_13598 =
																														(BgL_iz00_2075 +
																														((long) 1));
																													BgL_iz00_2075 =
																														BgL_iz00_13598;
																													goto
																														BgL_zc3anonymousza33164ze3z83_2076;
																												}
																											}
																									}
																								}
																							}
																						}
																					else
																						{	/* Llib/object.scm 1256 */
																							bgl_display_char(((unsigned char)
																									' '), BgL_portz00_165);
																							{	/* Llib/object.scm 1260 */
																								obj_t BgL_arg3169z00_2081;

																								BgL_arg3169z00_2081 =
																									PROCEDURE_ENTRY
																									(BgL_getzd2valuezd2_2070)
																									(BgL_getzd2valuezd2_2070,
																									(obj_t) (BgL_objz00_164),
																									BEOA);
																								PROCEDURE_ENTRY
																									(BgL_printzd2slotzd2_166)
																									(BgL_printzd2slotzd2_166,
																									BgL_arg3169z00_2081,
																									BgL_portz00_165, BEOA);
																							}
																							bgl_display_char(((unsigned char)
																									']'), BgL_portz00_165);
																	}}}}}
																	{
																		obj_t BgL_fieldsz00_13608;

																		BgL_fieldsz00_13608 =
																			CDR(BgL_fieldsz00_2056);
																		BgL_fieldsz00_2056 = BgL_fieldsz00_13608;
																		goto BgL_zc3anonymousza33155ze3z83_2058;
																	}
																}
														}
												}
											else
												{	/* Llib/object.scm 1279 */
													return
														bgl_display_char(((unsigned char) '|'),
														BgL_portz00_165);
		}}}}}}}}}
	}



/* _object-print-default2449 */
	obj_t BGl__objectzd2printzd2default2449z00zz__objectz00(obj_t BgL_envz00_8299,
		obj_t BgL_objz00_8300, obj_t BgL_portz00_8301,
		obj_t BgL_printzd2slotzd2_8302)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1250 */
				obj_t BgL_auxz00_13619;

				BgL_objectz00_bglt BgL_auxz00_13611;

				if (PROCEDUREP(BgL_printzd2slotzd2_8302))
					{	/* Llib/object.scm 1250 */
						BgL_auxz00_13619 = BgL_printzd2slotzd2_8302;
					}
				else
					{
						obj_t BgL_auxz00_13622;

						BgL_auxz00_13622 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 55918)), BGl_string4444z00zz__objectz00,
							BGl_string4260z00zz__objectz00, BgL_printzd2slotzd2_8302);
						FAILURE(BgL_auxz00_13622, BFALSE, BFALSE);
					}
				if (BGL_OBJECTP(BgL_objz00_8300))
					{	/* Llib/object.scm 1250 */
						BgL_auxz00_13611 = (BgL_objectz00_bglt) (BgL_objz00_8300);
					}
				else
					{
						obj_t BgL_auxz00_13615;

						BgL_auxz00_13615 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
							BINT(((long) 55918)), BGl_string4444z00zz__objectz00,
							BGl_string4255z00zz__objectz00, BgL_objz00_8300);
						FAILURE(BgL_auxz00_13615, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2printzd2default2449z00zz__objectz00(BgL_auxz00_13611,
					BgL_portz00_8301, BgL_auxz00_13619);
			}
		}
	}



/* object-equal? */
	BGL_EXPORTED_DEF bool_t
		BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt BgL_obj1z00_167,
		BgL_objectz00_bglt BgL_obj2z00_168)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1300 */
			{	/* Llib/object.scm 1300 */
				obj_t BgL_method2452z00_6028;

				{	/* Llib/object.scm 1300 */
					long BgL_objzd2classzd2numz00_6030;

					BgL_objzd2classzd2numz00_6030 = BGL_OBJECT_CLASS_NUM(BgL_obj1z00_167);
					{	/* Llib/object.scm 1300 */
						obj_t BgL_arg2803z00_6031;

						BgL_arg2803z00_6031 =
							PROCEDURE_REF(BGl_objectzd2equalzf3zd2envzf3zz__objectz00,
							(int) (((long) 1)));
						{	/* Llib/object.scm 1300 */
							obj_t BgL_arrayz00_6033;

							int BgL_offsetz00_6034;

							BgL_arrayz00_6033 = BgL_arg2803z00_6031;
							BgL_offsetz00_6034 = (int) (BgL_objzd2classzd2numz00_6030);
							{	/* Llib/object.scm 1300 */
								long BgL_offsetz00_6035;

								BgL_offsetz00_6035 =
									((long) (BgL_offsetz00_6034) - OBJECT_TYPE);
								{	/* Llib/object.scm 1300 */
									long BgL_modz00_6036;

									{	/* Llib/object.scm 1300 */
										int BgL_arg2631z00_6037;

										BgL_arg2631z00_6037 = (int) (((long) 16));
										{	/* Llib/object.scm 1300 */
											long BgL_auxz00_13634;

											BgL_auxz00_13634 = (long) (BgL_arg2631z00_6037);
											BgL_modz00_6036 = (BgL_offsetz00_6035 / BgL_auxz00_13634);
									}}
									{	/* Llib/object.scm 1300 */
										long BgL_restz00_6038;

										{	/* Llib/object.scm 1300 */
											int BgL_arg2630z00_6039;

											BgL_arg2630z00_6039 = (int) (((long) 16));
											{	/* Llib/object.scm 1300 */
												long BgL_auxz00_13638;

												BgL_auxz00_13638 = (long) (BgL_arg2630z00_6039);
												BgL_restz00_6038 =
													(BgL_offsetz00_6035 % BgL_auxz00_13638);
										}}
										{	/* Llib/object.scm 1300 */

											BgL_method2452z00_6028 =
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_6033,
													(int) (BgL_modz00_6036)), (int) (BgL_restz00_6038));
				}}}}}}}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method2452z00_6028) (BgL_method2452z00_6028,
						(obj_t) (BgL_obj1z00_167), (obj_t) (BgL_obj2z00_168), BEOA));
			}
		}
	}



/* _object-equal? */
	obj_t BGl__objectzd2equalzf3z21zz__objectz00(obj_t BgL_envz00_8288,
		obj_t BgL_obj1z00_8289, obj_t BgL_obj2z00_8290)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1300 */
			{	/* Llib/object.scm 1300 */
				bool_t BgL_auxz00_13650;

				{	/* Llib/object.scm 1300 */
					BgL_objectz00_bglt BgL_auxz00_13659;

					BgL_objectz00_bglt BgL_auxz00_13651;

					if (BGL_OBJECTP(BgL_obj2z00_8290))
						{	/* Llib/object.scm 1300 */
							BgL_auxz00_13659 = (BgL_objectz00_bglt) (BgL_obj2z00_8290);
						}
					else
						{
							obj_t BgL_auxz00_13663;

							BgL_auxz00_13663 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 57534)), BGl_string4445z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_obj2z00_8290);
							FAILURE(BgL_auxz00_13663, BFALSE, BFALSE);
						}
					if (BGL_OBJECTP(BgL_obj1z00_8289))
						{	/* Llib/object.scm 1300 */
							BgL_auxz00_13651 = (BgL_objectz00_bglt) (BgL_obj1z00_8289);
						}
					else
						{
							obj_t BgL_auxz00_13655;

							BgL_auxz00_13655 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 57534)), BGl_string4445z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_obj1z00_8289);
							FAILURE(BgL_auxz00_13655, BFALSE, BFALSE);
						}
					BgL_auxz00_13650 =
						BGl_objectzd2equalzf3z21zz__objectz00(BgL_auxz00_13651,
						BgL_auxz00_13659);
				}
				return BBOOL(BgL_auxz00_13650);
			}
		}
	}



/* object-equal?-defaul2451 */
	bool_t BGl_objectzd2equalzf3zd2defaul2451zf3zz__objectz00(BgL_objectz00_bglt
		BgL_obj1z00_169, BgL_objectz00_bglt BgL_obj2z00_170)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{
				obj_t BgL_fieldz00_2103;

				{	/* Llib/object.scm 1319 */
					obj_t BgL_class1z00_2085;

					obj_t BgL_class2z00_2086;

					{	/* Llib/object.scm 1319 */
						long BgL_arg2628z00_6054;

						{	/* Llib/object.scm 1319 */
							long BgL_arg2629z00_6055;

							BgL_arg2629z00_6055 = BGL_OBJECT_CLASS_NUM(BgL_obj1z00_169);
							BgL_arg2628z00_6054 = (BgL_arg2629z00_6055 - OBJECT_TYPE);
						}
						BgL_class1z00_2085 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							(int) (BgL_arg2628z00_6054));
					}
					{	/* Llib/object.scm 1320 */
						long BgL_arg2628z00_6062;

						{	/* Llib/object.scm 1320 */
							long BgL_arg2629z00_6063;

							BgL_arg2629z00_6063 = BGL_OBJECT_CLASS_NUM(BgL_obj2z00_170);
							BgL_arg2628z00_6062 = (BgL_arg2629z00_6063 - OBJECT_TYPE);
						}
						BgL_class2z00_2086 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							(int) (BgL_arg2628z00_6062));
					}
					if ((BgL_class1z00_2085 == BgL_class2z00_2086))
						{	/* Llib/object.scm 1325 */
							obj_t BgL_fieldsz00_2088;

							BgL_fieldsz00_2088 =
								BGl_classzd2fieldszd2zz__objectz00(BgL_class1z00_2085);
							{	/* Llib/object.scm 1326 */
								bool_t BgL_testz00_13680;

								{	/* Llib/object.scm 1326 */
									bool_t BgL__ortest_2369z00_6070;

									BgL__ortest_2369z00_6070 = PAIRP(BgL_fieldsz00_2088);
									if (BgL__ortest_2369z00_6070)
										{	/* Llib/object.scm 1326 */
											BgL_testz00_13680 = BgL__ortest_2369z00_6070;
										}
									else
										{	/* Llib/object.scm 1326 */
											BgL_testz00_13680 = NULLP(BgL_fieldsz00_2088);
										}
								}
								if (BgL_testz00_13680)
									{
										obj_t BgL_fieldsz00_2091;

										obj_t BgL_classz00_2092;

										BgL_fieldsz00_2091 = BgL_fieldsz00_2088;
										BgL_classz00_2092 = BgL_class1z00_2085;
									BgL_zc3anonymousza33172ze3z83_2093:
										if (NULLP(BgL_fieldsz00_2091))
											{	/* Llib/object.scm 1332 */
												obj_t BgL_superz00_2095;

												BgL_superz00_2095 =
													VECTOR_REF(BgL_classz00_2092, (int) (((long) 3)));
												if (BGl_classzf3zf3zz__objectz00(BgL_superz00_2095))
													{	/* Llib/object.scm 1335 */
														obj_t BgL_fieldsz00_2097;

														BgL_fieldsz00_2097 =
															BGl_classzd2fieldszd2zz__objectz00
															(BgL_superz00_2095);
														{	/* Llib/object.scm 1336 */
															bool_t BgL_testz00_13691;

															{	/* Llib/object.scm 1336 */
																bool_t BgL__ortest_2369z00_6079;

																BgL__ortest_2369z00_6079 =
																	PAIRP(BgL_fieldsz00_2097);
																if (BgL__ortest_2369z00_6079)
																	{	/* Llib/object.scm 1336 */
																		BgL_testz00_13691 =
																			BgL__ortest_2369z00_6079;
																	}
																else
																	{	/* Llib/object.scm 1336 */
																		BgL_testz00_13691 =
																			NULLP(BgL_fieldsz00_2097);
																	}
															}
															if (BgL_testz00_13691)
																{
																	obj_t BgL_classz00_13696;

																	obj_t BgL_fieldsz00_13695;

																	BgL_fieldsz00_13695 = BgL_fieldsz00_2097;
																	BgL_classz00_13696 = BgL_superz00_2095;
																	BgL_classz00_2092 = BgL_classz00_13696;
																	BgL_fieldsz00_2091 = BgL_fieldsz00_13695;
																	goto BgL_zc3anonymousza33172ze3z83_2093;
																}
															else
																{	/* Llib/object.scm 1336 */
																	return ((bool_t) 0);
																}
														}
													}
												else
													{	/* Llib/object.scm 1333 */
														return ((bool_t) 1);
													}
											}
										else
											{	/* Llib/object.scm 1341 */
												bool_t BgL_testz00_13697;

												BgL_fieldz00_2103 = CAR(BgL_fieldsz00_2091);
												{	/* Llib/object.scm 1302 */
													obj_t BgL_getzd2valuezd2_2105;

													{	/* Llib/object.scm 1302 */
														obj_t BgL_res3942z00_6089;

														if (BGl_classzd2fieldzf3z21zz__objectz00
															(BgL_fieldz00_2103))
															{	/* Llib/object.scm 1302 */
																BgL_res3942z00_6089 =
																	VECTOR_REF(BgL_fieldz00_2103,
																	(int) (((long) 1)));
															}
														else
															{	/* Llib/object.scm 1302 */
																BgL_res3942z00_6089 =
																	BGl_errorz00zz__errorz00
																	(BGl_string4247z00zz__objectz00,
																	BGl_string4240z00zz__objectz00,
																	BgL_fieldz00_2103);
															}
														BgL_getzd2valuezd2_2105 = BgL_res3942z00_6089;
													}
													{	/* Llib/object.scm 1303 */
														bool_t BgL_testz00_13703;

														{	/* Llib/object.scm 1303 */
															bool_t BgL_res3943z00_6096;

															if (BGl_classzd2fieldzf3z21zz__objectz00
																(BgL_fieldz00_2103))
																{	/* Llib/object.scm 1303 */
																	obj_t BgL_auxz00_13706;

																	BgL_auxz00_13706 =
																		VECTOR_REF(BgL_fieldz00_2103,
																		(int) (((long) 3)));
																	BgL_res3943z00_6096 =
																		PROCEDUREP(BgL_auxz00_13706);
																}
															else
																{	/* Llib/object.scm 1303 */
																	BgL_res3943z00_6096 =
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_string4245z00zz__objectz00,
																			BGl_string4240z00zz__objectz00,
																			BgL_fieldz00_2103));
																}
															BgL_testz00_13703 = BgL_res3943z00_6096;
														}
														if (BgL_testz00_13703)
															{	/* Llib/object.scm 1307 */
																obj_t BgL_getzd2lenzd2_2107;

																{	/* Llib/object.scm 1307 */
																	obj_t BgL_res3944z00_6101;

																	if (BGl_classzd2fieldzf3z21zz__objectz00
																		(BgL_fieldz00_2103))
																		{	/* Llib/object.scm 1307 */
																			BgL_res3944z00_6101 =
																				VECTOR_REF(BgL_fieldz00_2103,
																				(int) (((long) 3)));
																		}
																	else
																		{	/* Llib/object.scm 1307 */
																			BgL_res3944z00_6101 =
																				BGl_errorz00zz__errorz00
																				(BGl_string4250z00zz__objectz00,
																				BGl_string4240z00zz__objectz00,
																				BgL_fieldz00_2103);
																		}
																	BgL_getzd2lenzd2_2107 = BgL_res3944z00_6101;
																}
																{	/* Llib/object.scm 1307 */
																	obj_t BgL_len1z00_2108;

																	BgL_len1z00_2108 =
																		PROCEDURE_ENTRY(BgL_getzd2lenzd2_2107)
																		(BgL_getzd2lenzd2_2107,
																		(obj_t) (BgL_obj1z00_169), BEOA);
																	{	/* Llib/object.scm 1308 */
																		obj_t BgL_len2z00_2109;

																		BgL_len2z00_2109 =
																			PROCEDURE_ENTRY(BgL_getzd2lenzd2_2107)
																			(BgL_getzd2lenzd2_2107,
																			(obj_t) (BgL_obj2z00_170), BEOA);
																		{	/* Llib/object.scm 1309 */

																			if (
																				((long) CINT(BgL_len1z00_2108) ==
																					(long) CINT(BgL_len2z00_2109)))
																				{
																					long BgL_iz00_2112;

																					BgL_iz00_2112 = ((long) 0);
																				BgL_zc3anonymousza33181ze3z83_2113:
																					if (
																						(BgL_iz00_2112 ==
																							(long) CINT(BgL_len1z00_2108)))
																						{	/* Llib/object.scm 1313 */
																							BgL_testz00_13697 = ((bool_t) 1);
																						}
																					else
																						{	/* Llib/object.scm 1315 */
																							bool_t BgL_testz00_13730;

																							{	/* Llib/object.scm 1315 */
																								obj_t BgL_arg3185z00_2117;

																								obj_t BgL_arg3186z00_2118;

																								BgL_arg3185z00_2117 =
																									PROCEDURE_ENTRY
																									(BgL_getzd2valuezd2_2105)
																									(BgL_getzd2valuezd2_2105,
																									(obj_t) (BgL_obj1z00_169),
																									BINT(BgL_iz00_2112), BEOA);
																								BgL_arg3186z00_2118 =
																									PROCEDURE_ENTRY
																									(BgL_getzd2valuezd2_2105)
																									(BgL_getzd2valuezd2_2105,
																									(obj_t) (BgL_obj2z00_170),
																									BINT(BgL_iz00_2112), BEOA);
																								BgL_testz00_13730 =
																									BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																									(BgL_arg3185z00_2117,
																									BgL_arg3186z00_2118);
																							}
																							if (BgL_testz00_13730)
																								{
																									long BgL_iz00_13740;

																									BgL_iz00_13740 =
																										(BgL_iz00_2112 +
																										((long) 1));
																									BgL_iz00_2112 =
																										BgL_iz00_13740;
																									goto
																										BgL_zc3anonymousza33181ze3z83_2113;
																								}
																							else
																								{	/* Llib/object.scm 1315 */
																									BgL_testz00_13697 =
																										((bool_t) 0);
																								}
																						}
																				}
																			else
																				{	/* Llib/object.scm 1310 */
																					BgL_testz00_13697 = ((bool_t) 0);
																				}
																		}
																	}
																}
															}
														else
															{	/* Llib/object.scm 1305 */
																obj_t BgL_arg3187z00_2120;

																obj_t BgL_arg3189z00_2121;

																BgL_arg3187z00_2120 =
																	PROCEDURE_ENTRY(BgL_getzd2valuezd2_2105)
																	(BgL_getzd2valuezd2_2105,
																	(obj_t) (BgL_obj1z00_169), BEOA);
																BgL_arg3189z00_2121 =
																	PROCEDURE_ENTRY(BgL_getzd2valuezd2_2105)
																	(BgL_getzd2valuezd2_2105,
																	(obj_t) (BgL_obj2z00_170), BEOA);
																BgL_testz00_13697 =
																	BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																	(BgL_arg3187z00_2120, BgL_arg3189z00_2121);
															}
													}
												}
												if (BgL_testz00_13697)
													{
														obj_t BgL_fieldsz00_13750;

														BgL_fieldsz00_13750 = CDR(BgL_fieldsz00_2091);
														BgL_fieldsz00_2091 = BgL_fieldsz00_13750;
														goto BgL_zc3anonymousza33172ze3z83_2093;
													}
												else
													{	/* Llib/object.scm 1341 */
														return ((bool_t) 0);
													}
											}
									}
								else
									{	/* Llib/object.scm 1326 */
										return ((bool_t) 0);
									}
							}
						}
					else
						{	/* Llib/object.scm 1322 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* _object-equal?-defaul2451 */
	obj_t BGl__objectzd2equalzf3zd2defaul2451zf3zz__objectz00(obj_t
		BgL_envz00_8291, obj_t BgL_obj1z00_8292, obj_t BgL_obj2z00_8293)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1302 */
				bool_t BgL_auxz00_13752;

				{	/* Llib/object.scm 1302 */
					BgL_objectz00_bglt BgL_auxz00_13761;

					BgL_objectz00_bglt BgL_auxz00_13753;

					if (BGL_OBJECTP(BgL_obj2z00_8293))
						{	/* Llib/object.scm 1302 */
							BgL_auxz00_13761 = (BgL_objectz00_bglt) (BgL_obj2z00_8293);
						}
					else
						{
							obj_t BgL_auxz00_13765;

							BgL_auxz00_13765 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 57642)), BGl_string4446z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_obj2z00_8293);
							FAILURE(BgL_auxz00_13765, BFALSE, BFALSE);
						}
					if (BGL_OBJECTP(BgL_obj1z00_8292))
						{	/* Llib/object.scm 1302 */
							BgL_auxz00_13753 = (BgL_objectz00_bglt) (BgL_obj1z00_8292);
						}
					else
						{
							obj_t BgL_auxz00_13757;

							BgL_auxz00_13757 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4231z00zz__objectz00,
								BINT(((long) 57642)), BGl_string4446z00zz__objectz00,
								BGl_string4255z00zz__objectz00, BgL_obj1z00_8292);
							FAILURE(BgL_auxz00_13757, BFALSE, BFALSE);
						}
					BgL_auxz00_13752 =
						BGl_objectzd2equalzf3zd2defaul2451zf3zz__objectz00(BgL_auxz00_13753,
						BgL_auxz00_13761);
				}
				return BBOOL(BgL_auxz00_13752);
			}
		}
	}



/* exception-notify */
	BGL_EXPORTED_DEF obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t
		BgL_excz00_171)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1349 */
			if (BGL_OBJECTP(BgL_excz00_171))
				{	/* Llib/object.scm 1349 */
					obj_t BgL_method2454z00_2125;

					{	/* Llib/object.scm 1349 */
						BgL_objectz00_bglt BgL_objz00_6109;

						BgL_objz00_6109 = (BgL_objectz00_bglt) (BgL_excz00_171);
						{	/* Llib/object.scm 1349 */
							long BgL_objzd2classzd2numz00_6110;

							BgL_objzd2classzd2numz00_6110 =
								BGL_OBJECT_CLASS_NUM(BgL_objz00_6109);
							{	/* Llib/object.scm 1349 */
								obj_t BgL_arg2803z00_6111;

								BgL_arg2803z00_6111 =
									PROCEDURE_REF(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
									(int) (((long) 1)));
								{	/* Llib/object.scm 1349 */
									obj_t BgL_arrayz00_6113;

									int BgL_offsetz00_6114;

									BgL_arrayz00_6113 = BgL_arg2803z00_6111;
									BgL_offsetz00_6114 = (int) (BgL_objzd2classzd2numz00_6110);
									{	/* Llib/object.scm 1349 */
										long BgL_offsetz00_6115;

										BgL_offsetz00_6115 =
											((long) (BgL_offsetz00_6114) - OBJECT_TYPE);
										{	/* Llib/object.scm 1349 */
											long BgL_modz00_6116;

											{	/* Llib/object.scm 1349 */
												int BgL_arg2631z00_6117;

												BgL_arg2631z00_6117 = (int) (((long) 16));
												{	/* Llib/object.scm 1349 */
													long BgL_auxz00_13781;

													BgL_auxz00_13781 = (long) (BgL_arg2631z00_6117);
													BgL_modz00_6116 =
														(BgL_offsetz00_6115 / BgL_auxz00_13781);
											}}
											{	/* Llib/object.scm 1349 */
												long BgL_restz00_6118;

												{	/* Llib/object.scm 1349 */
													int BgL_arg2630z00_6119;

													BgL_arg2630z00_6119 = (int) (((long) 16));
													{	/* Llib/object.scm 1349 */
														long BgL_auxz00_13785;

														BgL_auxz00_13785 = (long) (BgL_arg2630z00_6119);
														BgL_restz00_6118 =
															(BgL_offsetz00_6115 % BgL_auxz00_13785);
												}}
												{	/* Llib/object.scm 1349 */

													BgL_method2454z00_2125 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_6113,
															(int) (BgL_modz00_6116)),
														(int) (BgL_restz00_6118));
					}}}}}}}}
					return
						PROCEDURE_ENTRY(BgL_method2454z00_2125) (BgL_method2454z00_2125,
						BgL_excz00_171, BEOA);
				}
			else
				{	/* Llib/object.scm 1349 */
					obj_t BgL_fun3192z00_6136;

					BgL_fun3192z00_6136 =
						PROCEDURE_REF(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
						(int) (((long) 0)));
					return
						PROCEDURE_ENTRY(BgL_fun3192z00_6136) (BgL_fun3192z00_6136,
						BgL_excz00_171, BEOA);
				}
		}
	}



/* _exception-notify */
	obj_t BGl__exceptionzd2notifyzd2zz__objectz00(obj_t BgL_envz00_8283,
		obj_t BgL_excz00_8284)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1349 */
			return BGl_exceptionzd2notifyzd2zz__objectz00(BgL_excz00_8284);
		}
	}



/* exception-notify-def2453 */
	obj_t BGl_exceptionzd2notifyzd2def2453z00zz__objectz00(obj_t BgL_excz00_172)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 1350 */
				obj_t BgL_portz00_2128;

				{	/* Llib/object.scm 1350 */
					obj_t BgL_res3950z00_6141;

					{	/* Llib/object.scm 1350 */
						obj_t BgL_auxz00_13799;

						BgL_auxz00_13799 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3950z00_6141 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_13799);
					}
					BgL_portz00_2128 = BgL_res3950z00_6141;
				}
				bgl_display_string(BGl_string4447z00zz__objectz00, BgL_portz00_2128);
				BGl_writezd2circlezd2zz__pp_circlez00(BgL_excz00_172, BgL_portz00_2128);
				bgl_display_char(((unsigned char) '\n'), BgL_portz00_2128);
				{	/* Llib/object.scm 1354 */
					obj_t BgL_stackz00_2129;

					{	/* Llib/object.scm 1354 */
						bool_t BgL_testz00_13805;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_excz00_172,
								BGl_z62exceptionz62zz__objectz00))
							{	/* Llib/object.scm 1354 */
								BgL_z62exceptionz62_bglt BgL_obj1116z00_6146;

								BgL_obj1116z00_6146 =
									(BgL_z62exceptionz62_bglt) (BgL_excz00_172);
								BgL_testz00_13805 =
									CBOOL(
									(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1116z00_6146))->
										BgL_stackz00));
							}
						else
							{	/* Llib/object.scm 1354 */
								BgL_testz00_13805 = ((bool_t) 0);
							}
						if (BgL_testz00_13805)
							{
								BgL_z62exceptionz62_bglt BgL_auxz00_13811;

								BgL_auxz00_13811 = (BgL_z62exceptionz62_bglt) (BgL_excz00_172);
								BgL_stackz00_2129 =
									(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_13811))->
									BgL_stackz00);
							}
						else
							{	/* Llib/object.scm 1356 */

								{	/* Llib/object.scm 1356 */

									BgL_stackz00_2129 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
					}
					return
						BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_stackz00_2129,
						BgL_portz00_2128);
				}
			}
		}
	}



/* _exception-notify-def2453 */
	obj_t BGl__exceptionzd2notifyzd2def2453z00zz__objectz00(obj_t BgL_envz00_8285,
		obj_t BgL_excz00_8286)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			return BGl_exceptionzd2notifyzd2def2453z00zz__objectz00(BgL_excz00_8286);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__objectz00()
	{
		AN_OBJECT;
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3951z00_6158;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6148;

					BgL_classz00_6148 = BGl_z62errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6148))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13819;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6152;

								int BgL_arg2791z00_6153;

								BgL_arg2790z00_6152 =
									PROCEDURE_ARITY(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
								BgL_arg2791z00_6153 =
									PROCEDURE_ARITY(BGl_proc4448z00zz__objectz00);
								BgL_testz00_13819 =
									(
									(long) (BgL_arg2790z00_6152) == (long) (BgL_arg2791z00_6153));
							}
							if (BgL_testz00_13819)
								{	/* Llib/object.scm 17 */
									BgL_res3951z00_6158 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
										BgL_classz00_6148, BGl_proc4448z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6155;

									BgL_arg2789z00_6155 =
										PROCEDURE_ARITY(BGl_proc4448z00zz__objectz00);
									BgL_res3951z00_6158 =
										BGl_errorz00zz__errorz00(BGl_string4425z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6155));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3951z00_6158 =
								BGl_errorz00zz__errorz00(BGl_string4425z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6148);
						}
				}
				BgL_res3951z00_6158;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3952z00_6169;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6159;

					BgL_classz00_6159 = BGl_z62warningz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6159))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13832;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6163;

								int BgL_arg2791z00_6164;

								BgL_arg2790z00_6163 =
									PROCEDURE_ARITY(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
								BgL_arg2791z00_6164 =
									PROCEDURE_ARITY(BGl_proc4449z00zz__objectz00);
								BgL_testz00_13832 =
									(
									(long) (BgL_arg2790z00_6163) == (long) (BgL_arg2791z00_6164));
							}
							if (BgL_testz00_13832)
								{	/* Llib/object.scm 17 */
									BgL_res3952z00_6169 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
										BgL_classz00_6159, BGl_proc4449z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6166;

									BgL_arg2789z00_6166 =
										PROCEDURE_ARITY(BGl_proc4449z00zz__objectz00);
									BgL_res3952z00_6169 =
										BGl_errorz00zz__errorz00(BGl_string4425z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6166));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3952z00_6169 =
								BGl_errorz00zz__errorz00(BGl_string4425z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6159);
						}
				}
				BgL_res3952z00_6169;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3953z00_6180;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6170;

					BgL_classz00_6170 = BGl_z62evalzd2warningzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6170))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13845;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6174;

								int BgL_arg2791z00_6175;

								BgL_arg2790z00_6174 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6175 =
									PROCEDURE_ARITY(BGl_proc4450z00zz__objectz00);
								BgL_testz00_13845 =
									(
									(long) (BgL_arg2790z00_6174) == (long) (BgL_arg2791z00_6175));
							}
							if (BgL_testz00_13845)
								{	/* Llib/object.scm 17 */
									BgL_res3953z00_6180 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6170, BGl_proc4450z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6177;

									BgL_arg2789z00_6177 =
										PROCEDURE_ARITY(BGl_proc4450z00zz__objectz00);
									BgL_res3953z00_6180 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6177));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3953z00_6180 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6170);
						}
				}
				BgL_res3953z00_6180;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3954z00_6213;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6203;

					BgL_classz00_6203 = BGl_z62evalzd2warningzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6203))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13858;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6207;

								int BgL_arg2791z00_6208;

								BgL_arg2790z00_6207 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6208 =
									PROCEDURE_ARITY(BGl_proc4452z00zz__objectz00);
								BgL_testz00_13858 =
									((long) (BgL_arg2790z00_6207) ==
									(long) (BgL_arg2791z00_6208));
							}
							if (BgL_testz00_13858)
								{	/* Llib/object.scm 17 */
									BgL_res3954z00_6213 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6203, BGl_proc4452z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6210;

									BgL_arg2789z00_6210 =
										PROCEDURE_ARITY(BGl_proc4452z00zz__objectz00);
									BgL_res3954z00_6213 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6210));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3954z00_6213 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6203);
						}
				}
				BgL_res3954z00_6213;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3955z00_6234;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6224;

					BgL_classz00_6224 = BGl_z62warningz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6224))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13871;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6228;

								int BgL_arg2791z00_6229;

								BgL_arg2790z00_6228 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6229 =
									PROCEDURE_ARITY(BGl_proc4454z00zz__objectz00);
								BgL_testz00_13871 =
									(
									(long) (BgL_arg2790z00_6228) == (long) (BgL_arg2791z00_6229));
							}
							if (BgL_testz00_13871)
								{	/* Llib/object.scm 17 */
									BgL_res3955z00_6234 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6224, BGl_proc4454z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6231;

									BgL_arg2789z00_6231 =
										PROCEDURE_ARITY(BGl_proc4454z00zz__objectz00);
									BgL_res3955z00_6234 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6231));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3955z00_6234 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6224);
						}
				}
				BgL_res3955z00_6234;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3956z00_6267;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6257;

					BgL_classz00_6257 = BGl_z62warningz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6257))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13884;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6261;

								int BgL_arg2791z00_6262;

								BgL_arg2790z00_6261 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6262 =
									PROCEDURE_ARITY(BGl_proc4455z00zz__objectz00);
								BgL_testz00_13884 =
									((long) (BgL_arg2790z00_6261) ==
									(long) (BgL_arg2791z00_6262));
							}
							if (BgL_testz00_13884)
								{	/* Llib/object.scm 17 */
									BgL_res3956z00_6267 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6257, BGl_proc4455z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6264;

									BgL_arg2789z00_6264 =
										PROCEDURE_ARITY(BGl_proc4455z00zz__objectz00);
									BgL_res3956z00_6267 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6264));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3956z00_6267 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6257);
						}
				}
				BgL_res3956z00_6267;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3957z00_6288;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6278;

					BgL_classz00_6278 =
						BGl_z62accesszd2controlzd2exceptionz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6278))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13897;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6282;

								int BgL_arg2791z00_6283;

								BgL_arg2790z00_6282 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6283 =
									PROCEDURE_ARITY(BGl_proc4456z00zz__objectz00);
								BgL_testz00_13897 =
									(
									(long) (BgL_arg2790z00_6282) == (long) (BgL_arg2791z00_6283));
							}
							if (BgL_testz00_13897)
								{	/* Llib/object.scm 17 */
									BgL_res3957z00_6288 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6278, BGl_proc4456z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6285;

									BgL_arg2789z00_6285 =
										PROCEDURE_ARITY(BGl_proc4456z00zz__objectz00);
									BgL_res3957z00_6288 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6285));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3957z00_6288 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6278);
						}
				}
				BgL_res3957z00_6288;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3958z00_6329;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6319;

					BgL_classz00_6319 =
						BGl_z62accesszd2controlzd2exceptionz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6319))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13910;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6323;

								int BgL_arg2791z00_6324;

								BgL_arg2790z00_6323 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6324 =
									PROCEDURE_ARITY(BGl_proc4457z00zz__objectz00);
								BgL_testz00_13910 =
									((long) (BgL_arg2790z00_6323) ==
									(long) (BgL_arg2791z00_6324));
							}
							if (BgL_testz00_13910)
								{	/* Llib/object.scm 17 */
									BgL_res3958z00_6329 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6319, BGl_proc4457z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6326;

									BgL_arg2789z00_6326 =
										PROCEDURE_ARITY(BGl_proc4457z00zz__objectz00);
									BgL_res3958z00_6329 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6326));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3958z00_6329 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6319);
						}
				}
				BgL_res3958z00_6329;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3959z00_6354;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6344;

					BgL_classz00_6344 = BGl_z62securityzd2exceptionzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6344))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13923;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6348;

								int BgL_arg2791z00_6349;

								BgL_arg2790z00_6348 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6349 =
									PROCEDURE_ARITY(BGl_proc4458z00zz__objectz00);
								BgL_testz00_13923 =
									(
									(long) (BgL_arg2790z00_6348) == (long) (BgL_arg2791z00_6349));
							}
							if (BgL_testz00_13923)
								{	/* Llib/object.scm 17 */
									BgL_res3959z00_6354 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6344, BGl_proc4458z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6351;

									BgL_arg2789z00_6351 =
										PROCEDURE_ARITY(BGl_proc4458z00zz__objectz00);
									BgL_res3959z00_6354 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6351));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3959z00_6354 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6344);
						}
				}
				BgL_res3959z00_6354;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3960z00_6387;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6377;

					BgL_classz00_6377 = BGl_z62securityzd2exceptionzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6377))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13936;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6381;

								int BgL_arg2791z00_6382;

								BgL_arg2790z00_6381 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6382 =
									PROCEDURE_ARITY(BGl_proc4459z00zz__objectz00);
								BgL_testz00_13936 =
									((long) (BgL_arg2790z00_6381) ==
									(long) (BgL_arg2791z00_6382));
							}
							if (BgL_testz00_13936)
								{	/* Llib/object.scm 17 */
									BgL_res3960z00_6387 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6377, BGl_proc4459z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6384;

									BgL_arg2789z00_6384 =
										PROCEDURE_ARITY(BGl_proc4459z00zz__objectz00);
									BgL_res3960z00_6387 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6384));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3960z00_6387 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6377);
						}
				}
				BgL_res3960z00_6387;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3961z00_6408;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6398;

					BgL_classz00_6398 = BGl_z62processzd2exceptionzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6398))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13949;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6402;

								int BgL_arg2791z00_6403;

								BgL_arg2790z00_6402 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6403 =
									PROCEDURE_ARITY(BGl_proc4460z00zz__objectz00);
								BgL_testz00_13949 =
									(
									(long) (BgL_arg2790z00_6402) == (long) (BgL_arg2791z00_6403));
							}
							if (BgL_testz00_13949)
								{	/* Llib/object.scm 17 */
									BgL_res3961z00_6408 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6398, BGl_proc4460z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6405;

									BgL_arg2789z00_6405 =
										PROCEDURE_ARITY(BGl_proc4460z00zz__objectz00);
									BgL_res3961z00_6408 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6405));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3961z00_6408 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6398);
						}
				}
				BgL_res3961z00_6408;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3962z00_6449;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6439;

					BgL_classz00_6439 = BGl_z62processzd2exceptionzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6439))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13962;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6443;

								int BgL_arg2791z00_6444;

								BgL_arg2790z00_6443 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6444 =
									PROCEDURE_ARITY(BGl_proc4461z00zz__objectz00);
								BgL_testz00_13962 =
									((long) (BgL_arg2790z00_6443) ==
									(long) (BgL_arg2791z00_6444));
							}
							if (BgL_testz00_13962)
								{	/* Llib/object.scm 17 */
									BgL_res3962z00_6449 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6439, BGl_proc4461z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6446;

									BgL_arg2789z00_6446 =
										PROCEDURE_ARITY(BGl_proc4461z00zz__objectz00);
									BgL_res3962z00_6449 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6446));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3962z00_6449 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6439);
						}
				}
				BgL_res3962z00_6449;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3963z00_6474;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6464;

					BgL_classz00_6464 = BGl_z62iozd2timeoutzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6464))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13975;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6468;

								int BgL_arg2791z00_6469;

								BgL_arg2790z00_6468 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6469 =
									PROCEDURE_ARITY(BGl_proc4462z00zz__objectz00);
								BgL_testz00_13975 =
									(
									(long) (BgL_arg2790z00_6468) == (long) (BgL_arg2791z00_6469));
							}
							if (BgL_testz00_13975)
								{	/* Llib/object.scm 17 */
									BgL_res3963z00_6474 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6464, BGl_proc4462z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6471;

									BgL_arg2789z00_6471 =
										PROCEDURE_ARITY(BGl_proc4462z00zz__objectz00);
									BgL_res3963z00_6474 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6471));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3963z00_6474 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6464);
						}
				}
				BgL_res3963z00_6474;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3964z00_6515;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6505;

					BgL_classz00_6505 = BGl_z62iozd2timeoutzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6505))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_13988;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6509;

								int BgL_arg2791z00_6510;

								BgL_arg2790z00_6509 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6510 =
									PROCEDURE_ARITY(BGl_proc4463z00zz__objectz00);
								BgL_testz00_13988 =
									((long) (BgL_arg2790z00_6509) ==
									(long) (BgL_arg2791z00_6510));
							}
							if (BgL_testz00_13988)
								{	/* Llib/object.scm 17 */
									BgL_res3964z00_6515 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6505, BGl_proc4463z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6512;

									BgL_arg2789z00_6512 =
										PROCEDURE_ARITY(BGl_proc4463z00zz__objectz00);
									BgL_res3964z00_6515 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6512));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3964z00_6515 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6505);
						}
				}
				BgL_res3964z00_6515;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3965z00_6540;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6530;

					BgL_classz00_6530 = BGl_z62iozd2sigpipezd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6530))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14001;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6534;

								int BgL_arg2791z00_6535;

								BgL_arg2790z00_6534 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6535 =
									PROCEDURE_ARITY(BGl_proc4464z00zz__objectz00);
								BgL_testz00_14001 =
									(
									(long) (BgL_arg2790z00_6534) == (long) (BgL_arg2791z00_6535));
							}
							if (BgL_testz00_14001)
								{	/* Llib/object.scm 17 */
									BgL_res3965z00_6540 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6530, BGl_proc4464z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6537;

									BgL_arg2789z00_6537 =
										PROCEDURE_ARITY(BGl_proc4464z00zz__objectz00);
									BgL_res3965z00_6540 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6537));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3965z00_6540 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6530);
						}
				}
				BgL_res3965z00_6540;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3966z00_6581;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6571;

					BgL_classz00_6571 = BGl_z62iozd2sigpipezd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6571))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14014;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6575;

								int BgL_arg2791z00_6576;

								BgL_arg2790z00_6575 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6576 =
									PROCEDURE_ARITY(BGl_proc4465z00zz__objectz00);
								BgL_testz00_14014 =
									((long) (BgL_arg2790z00_6575) ==
									(long) (BgL_arg2791z00_6576));
							}
							if (BgL_testz00_14014)
								{	/* Llib/object.scm 17 */
									BgL_res3966z00_6581 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6571, BGl_proc4465z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6578;

									BgL_arg2789z00_6578 =
										PROCEDURE_ARITY(BGl_proc4465z00zz__objectz00);
									BgL_res3966z00_6581 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6578));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3966z00_6581 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6571);
						}
				}
				BgL_res3966z00_6581;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3967z00_6606;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6596;

					BgL_classz00_6596 =
						BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6596))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14027;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6600;

								int BgL_arg2791z00_6601;

								BgL_arg2790z00_6600 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6601 =
									PROCEDURE_ARITY(BGl_proc4466z00zz__objectz00);
								BgL_testz00_14027 =
									(
									(long) (BgL_arg2790z00_6600) == (long) (BgL_arg2791z00_6601));
							}
							if (BgL_testz00_14027)
								{	/* Llib/object.scm 17 */
									BgL_res3967z00_6606 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6596, BGl_proc4466z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6603;

									BgL_arg2789z00_6603 =
										PROCEDURE_ARITY(BGl_proc4466z00zz__objectz00);
									BgL_res3967z00_6606 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6603));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3967z00_6606 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6596);
						}
				}
				BgL_res3967z00_6606;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3968z00_6647;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6637;

					BgL_classz00_6637 =
						BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6637))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14040;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6641;

								int BgL_arg2791z00_6642;

								BgL_arg2790z00_6641 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6642 =
									PROCEDURE_ARITY(BGl_proc4467z00zz__objectz00);
								BgL_testz00_14040 =
									((long) (BgL_arg2790z00_6641) ==
									(long) (BgL_arg2791z00_6642));
							}
							if (BgL_testz00_14040)
								{	/* Llib/object.scm 17 */
									BgL_res3968z00_6647 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6637, BGl_proc4467z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6644;

									BgL_arg2789z00_6644 =
										PROCEDURE_ARITY(BGl_proc4467z00zz__objectz00);
									BgL_res3968z00_6647 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6644));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3968z00_6647 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6637);
						}
				}
				BgL_res3968z00_6647;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3969z00_6672;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6662;

					BgL_classz00_6662 =
						BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6662))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14053;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6666;

								int BgL_arg2791z00_6667;

								BgL_arg2790z00_6666 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6667 =
									PROCEDURE_ARITY(BGl_proc4468z00zz__objectz00);
								BgL_testz00_14053 =
									(
									(long) (BgL_arg2790z00_6666) == (long) (BgL_arg2791z00_6667));
							}
							if (BgL_testz00_14053)
								{	/* Llib/object.scm 17 */
									BgL_res3969z00_6672 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6662, BGl_proc4468z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6669;

									BgL_arg2789z00_6669 =
										PROCEDURE_ARITY(BGl_proc4468z00zz__objectz00);
									BgL_res3969z00_6672 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6669));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3969z00_6672 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6662);
						}
				}
				BgL_res3969z00_6672;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3970z00_6713;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6703;

					BgL_classz00_6703 =
						BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6703))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14066;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6707;

								int BgL_arg2791z00_6708;

								BgL_arg2790z00_6707 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6708 =
									PROCEDURE_ARITY(BGl_proc4469z00zz__objectz00);
								BgL_testz00_14066 =
									((long) (BgL_arg2790z00_6707) ==
									(long) (BgL_arg2791z00_6708));
							}
							if (BgL_testz00_14066)
								{	/* Llib/object.scm 17 */
									BgL_res3970z00_6713 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6703, BGl_proc4469z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6710;

									BgL_arg2789z00_6710 =
										PROCEDURE_ARITY(BGl_proc4469z00zz__objectz00);
									BgL_res3970z00_6713 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6710));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3970z00_6713 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6703);
						}
				}
				BgL_res3970z00_6713;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3971z00_6738;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6728;

					BgL_classz00_6728 = BGl_z62iozd2parsezd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6728))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14079;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6732;

								int BgL_arg2791z00_6733;

								BgL_arg2790z00_6732 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6733 =
									PROCEDURE_ARITY(BGl_proc4470z00zz__objectz00);
								BgL_testz00_14079 =
									(
									(long) (BgL_arg2790z00_6732) == (long) (BgL_arg2791z00_6733));
							}
							if (BgL_testz00_14079)
								{	/* Llib/object.scm 17 */
									BgL_res3971z00_6738 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6728, BGl_proc4470z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6735;

									BgL_arg2789z00_6735 =
										PROCEDURE_ARITY(BGl_proc4470z00zz__objectz00);
									BgL_res3971z00_6738 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6735));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3971z00_6738 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6728);
						}
				}
				BgL_res3971z00_6738;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3972z00_6779;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6769;

					BgL_classz00_6769 = BGl_z62iozd2parsezd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6769))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14092;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6773;

								int BgL_arg2791z00_6774;

								BgL_arg2790z00_6773 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6774 =
									PROCEDURE_ARITY(BGl_proc4471z00zz__objectz00);
								BgL_testz00_14092 =
									((long) (BgL_arg2790z00_6773) ==
									(long) (BgL_arg2791z00_6774));
							}
							if (BgL_testz00_14092)
								{	/* Llib/object.scm 17 */
									BgL_res3972z00_6779 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6769, BGl_proc4471z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6776;

									BgL_arg2789z00_6776 =
										PROCEDURE_ARITY(BGl_proc4471z00zz__objectz00);
									BgL_res3972z00_6779 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6776));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3972z00_6779 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6769);
						}
				}
				BgL_res3972z00_6779;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3973z00_6804;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6794;

					BgL_classz00_6794 =
						BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6794))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14105;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6798;

								int BgL_arg2791z00_6799;

								BgL_arg2790z00_6798 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6799 =
									PROCEDURE_ARITY(BGl_proc4472z00zz__objectz00);
								BgL_testz00_14105 =
									(
									(long) (BgL_arg2790z00_6798) == (long) (BgL_arg2791z00_6799));
							}
							if (BgL_testz00_14105)
								{	/* Llib/object.scm 17 */
									BgL_res3973z00_6804 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6794, BGl_proc4472z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6801;

									BgL_arg2789z00_6801 =
										PROCEDURE_ARITY(BGl_proc4472z00zz__objectz00);
									BgL_res3973z00_6804 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6801));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3973z00_6804 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6794);
						}
				}
				BgL_res3973z00_6804;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3974z00_6845;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6835;

					BgL_classz00_6835 =
						BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6835))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14118;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6839;

								int BgL_arg2791z00_6840;

								BgL_arg2790z00_6839 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6840 =
									PROCEDURE_ARITY(BGl_proc4473z00zz__objectz00);
								BgL_testz00_14118 =
									((long) (BgL_arg2790z00_6839) ==
									(long) (BgL_arg2791z00_6840));
							}
							if (BgL_testz00_14118)
								{	/* Llib/object.scm 17 */
									BgL_res3974z00_6845 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6835, BGl_proc4473z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6842;

									BgL_arg2789z00_6842 =
										PROCEDURE_ARITY(BGl_proc4473z00zz__objectz00);
									BgL_res3974z00_6845 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6842));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3974z00_6845 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6835);
						}
				}
				BgL_res3974z00_6845;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3975z00_6870;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6860;

					BgL_classz00_6860 = BGl_z62iozd2closedzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6860))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14131;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6864;

								int BgL_arg2791z00_6865;

								BgL_arg2790z00_6864 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6865 =
									PROCEDURE_ARITY(BGl_proc4474z00zz__objectz00);
								BgL_testz00_14131 =
									(
									(long) (BgL_arg2790z00_6864) == (long) (BgL_arg2791z00_6865));
							}
							if (BgL_testz00_14131)
								{	/* Llib/object.scm 17 */
									BgL_res3975z00_6870 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6860, BGl_proc4474z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6867;

									BgL_arg2789z00_6867 =
										PROCEDURE_ARITY(BGl_proc4474z00zz__objectz00);
									BgL_res3975z00_6870 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6867));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3975z00_6870 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6860);
						}
				}
				BgL_res3975z00_6870;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3976z00_6911;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6901;

					BgL_classz00_6901 = BGl_z62iozd2closedzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6901))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14144;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6905;

								int BgL_arg2791z00_6906;

								BgL_arg2790z00_6905 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6906 =
									PROCEDURE_ARITY(BGl_proc4475z00zz__objectz00);
								BgL_testz00_14144 =
									((long) (BgL_arg2790z00_6905) ==
									(long) (BgL_arg2791z00_6906));
							}
							if (BgL_testz00_14144)
								{	/* Llib/object.scm 17 */
									BgL_res3976z00_6911 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6901, BGl_proc4475z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6908;

									BgL_arg2789z00_6908 =
										PROCEDURE_ARITY(BGl_proc4475z00zz__objectz00);
									BgL_res3976z00_6911 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6908));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3976z00_6911 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6901);
						}
				}
				BgL_res3976z00_6911;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3977z00_6936;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6926;

					BgL_classz00_6926 = BGl_z62iozd2writezd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6926))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14157;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6930;

								int BgL_arg2791z00_6931;

								BgL_arg2790z00_6930 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6931 =
									PROCEDURE_ARITY(BGl_proc4476z00zz__objectz00);
								BgL_testz00_14157 =
									(
									(long) (BgL_arg2790z00_6930) == (long) (BgL_arg2791z00_6931));
							}
							if (BgL_testz00_14157)
								{	/* Llib/object.scm 17 */
									BgL_res3977z00_6936 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6926, BGl_proc4476z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6933;

									BgL_arg2789z00_6933 =
										PROCEDURE_ARITY(BGl_proc4476z00zz__objectz00);
									BgL_res3977z00_6936 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6933));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3977z00_6936 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6926);
						}
				}
				BgL_res3977z00_6936;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3978z00_6977;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6967;

					BgL_classz00_6967 = BGl_z62iozd2writezd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6967))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14170;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6971;

								int BgL_arg2791z00_6972;

								BgL_arg2790z00_6971 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_6972 =
									PROCEDURE_ARITY(BGl_proc4477z00zz__objectz00);
								BgL_testz00_14170 =
									((long) (BgL_arg2790z00_6971) ==
									(long) (BgL_arg2791z00_6972));
							}
							if (BgL_testz00_14170)
								{	/* Llib/object.scm 17 */
									BgL_res3978z00_6977 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_6967, BGl_proc4477z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6974;

									BgL_arg2789z00_6974 =
										PROCEDURE_ARITY(BGl_proc4477z00zz__objectz00);
									BgL_res3978z00_6977 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6974));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3978z00_6977 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6967);
						}
				}
				BgL_res3978z00_6977;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3979z00_7002;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_6992;

					BgL_classz00_6992 = BGl_z62iozd2readzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_6992))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14183;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_6996;

								int BgL_arg2791z00_6997;

								BgL_arg2790z00_6996 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_6997 =
									PROCEDURE_ARITY(BGl_proc4478z00zz__objectz00);
								BgL_testz00_14183 =
									(
									(long) (BgL_arg2790z00_6996) == (long) (BgL_arg2791z00_6997));
							}
							if (BgL_testz00_14183)
								{	/* Llib/object.scm 17 */
									BgL_res3979z00_7002 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_6992, BGl_proc4478z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_6999;

									BgL_arg2789z00_6999 =
										PROCEDURE_ARITY(BGl_proc4478z00zz__objectz00);
									BgL_res3979z00_7002 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_6999));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3979z00_7002 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_6992);
						}
				}
				BgL_res3979z00_7002;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3980z00_7043;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7033;

					BgL_classz00_7033 = BGl_z62iozd2readzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7033))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14196;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7037;

								int BgL_arg2791z00_7038;

								BgL_arg2790z00_7037 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7038 =
									PROCEDURE_ARITY(BGl_proc4479z00zz__objectz00);
								BgL_testz00_14196 =
									((long) (BgL_arg2790z00_7037) ==
									(long) (BgL_arg2791z00_7038));
							}
							if (BgL_testz00_14196)
								{	/* Llib/object.scm 17 */
									BgL_res3980z00_7043 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7033, BGl_proc4479z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7040;

									BgL_arg2789z00_7040 =
										PROCEDURE_ARITY(BGl_proc4479z00zz__objectz00);
									BgL_res3980z00_7043 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7040));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3980z00_7043 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7033);
						}
				}
				BgL_res3980z00_7043;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3981z00_7068;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7058;

					BgL_classz00_7058 = BGl_z62iozd2portzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7058))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14209;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7062;

								int BgL_arg2791z00_7063;

								BgL_arg2790z00_7062 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_7063 =
									PROCEDURE_ARITY(BGl_proc4480z00zz__objectz00);
								BgL_testz00_14209 =
									(
									(long) (BgL_arg2790z00_7062) == (long) (BgL_arg2791z00_7063));
							}
							if (BgL_testz00_14209)
								{	/* Llib/object.scm 17 */
									BgL_res3981z00_7068 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_7058, BGl_proc4480z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7065;

									BgL_arg2789z00_7065 =
										PROCEDURE_ARITY(BGl_proc4480z00zz__objectz00);
									BgL_res3981z00_7068 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7065));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3981z00_7068 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7058);
						}
				}
				BgL_res3981z00_7068;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3982z00_7109;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7099;

					BgL_classz00_7099 = BGl_z62iozd2portzd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7099))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14222;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7103;

								int BgL_arg2791z00_7104;

								BgL_arg2790z00_7103 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7104 =
									PROCEDURE_ARITY(BGl_proc4481z00zz__objectz00);
								BgL_testz00_14222 =
									((long) (BgL_arg2790z00_7103) ==
									(long) (BgL_arg2791z00_7104));
							}
							if (BgL_testz00_14222)
								{	/* Llib/object.scm 17 */
									BgL_res3982z00_7109 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7099, BGl_proc4481z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7106;

									BgL_arg2789z00_7106 =
										PROCEDURE_ARITY(BGl_proc4481z00zz__objectz00);
									BgL_res3982z00_7109 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7106));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3982z00_7109 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7099);
						}
				}
				BgL_res3982z00_7109;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3983z00_7134;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7124;

					BgL_classz00_7124 = BGl_z62iozd2errorzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7124))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14235;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7128;

								int BgL_arg2791z00_7129;

								BgL_arg2790z00_7128 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_7129 =
									PROCEDURE_ARITY(BGl_proc4482z00zz__objectz00);
								BgL_testz00_14235 =
									(
									(long) (BgL_arg2790z00_7128) == (long) (BgL_arg2791z00_7129));
							}
							if (BgL_testz00_14235)
								{	/* Llib/object.scm 17 */
									BgL_res3983z00_7134 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_7124, BGl_proc4482z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7131;

									BgL_arg2789z00_7131 =
										PROCEDURE_ARITY(BGl_proc4482z00zz__objectz00);
									BgL_res3983z00_7134 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7131));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3983z00_7134 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7124);
						}
				}
				BgL_res3983z00_7134;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3984z00_7175;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7165;

					BgL_classz00_7165 = BGl_z62iozd2errorzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7165))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14248;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7169;

								int BgL_arg2791z00_7170;

								BgL_arg2790z00_7169 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7170 =
									PROCEDURE_ARITY(BGl_proc4483z00zz__objectz00);
								BgL_testz00_14248 =
									((long) (BgL_arg2790z00_7169) ==
									(long) (BgL_arg2791z00_7170));
							}
							if (BgL_testz00_14248)
								{	/* Llib/object.scm 17 */
									BgL_res3984z00_7175 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7165, BGl_proc4483z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7172;

									BgL_arg2789z00_7172 =
										PROCEDURE_ARITY(BGl_proc4483z00zz__objectz00);
									BgL_res3984z00_7175 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7172));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3984z00_7175 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7165);
						}
				}
				BgL_res3984z00_7175;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3985z00_7200;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7190;

					BgL_classz00_7190 =
						BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7190))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14261;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7194;

								int BgL_arg2791z00_7195;

								BgL_arg2790z00_7194 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_7195 =
									PROCEDURE_ARITY(BGl_proc4484z00zz__objectz00);
								BgL_testz00_14261 =
									(
									(long) (BgL_arg2790z00_7194) == (long) (BgL_arg2791z00_7195));
							}
							if (BgL_testz00_14261)
								{	/* Llib/object.scm 17 */
									BgL_res3985z00_7200 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_7190, BGl_proc4484z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7197;

									BgL_arg2789z00_7197 =
										PROCEDURE_ARITY(BGl_proc4484z00zz__objectz00);
									BgL_res3985z00_7200 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7197));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3985z00_7200 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7190);
						}
				}
				BgL_res3985z00_7200;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3986z00_7245;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7235;

					BgL_classz00_7235 =
						BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7235))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14274;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7239;

								int BgL_arg2791z00_7240;

								BgL_arg2790z00_7239 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7240 =
									PROCEDURE_ARITY(BGl_proc4485z00zz__objectz00);
								BgL_testz00_14274 =
									((long) (BgL_arg2790z00_7239) ==
									(long) (BgL_arg2791z00_7240));
							}
							if (BgL_testz00_14274)
								{	/* Llib/object.scm 17 */
									BgL_res3986z00_7245 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7235, BGl_proc4485z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7242;

									BgL_arg2789z00_7242 =
										PROCEDURE_ARITY(BGl_proc4485z00zz__objectz00);
									BgL_res3986z00_7245 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7242));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3986z00_7245 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7235);
						}
				}
				BgL_res3986z00_7245;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3987z00_7272;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7262;

					BgL_classz00_7262 = BGl_z62typezd2errorzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7262))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14287;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7266;

								int BgL_arg2791z00_7267;

								BgL_arg2790z00_7266 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_7267 =
									PROCEDURE_ARITY(BGl_proc4486z00zz__objectz00);
								BgL_testz00_14287 =
									(
									(long) (BgL_arg2790z00_7266) == (long) (BgL_arg2791z00_7267));
							}
							if (BgL_testz00_14287)
								{	/* Llib/object.scm 17 */
									BgL_res3987z00_7272 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_7262, BGl_proc4486z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7269;

									BgL_arg2789z00_7269 =
										PROCEDURE_ARITY(BGl_proc4486z00zz__objectz00);
									BgL_res3987z00_7272 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7269));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3987z00_7272 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7262);
						}
				}
				BgL_res3987z00_7272;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3988z00_7317;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7307;

					BgL_classz00_7307 = BGl_z62typezd2errorzb0zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7307))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14300;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7311;

								int BgL_arg2791z00_7312;

								BgL_arg2790z00_7311 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7312 =
									PROCEDURE_ARITY(BGl_proc4487z00zz__objectz00);
								BgL_testz00_14300 =
									((long) (BgL_arg2790z00_7311) ==
									(long) (BgL_arg2791z00_7312));
							}
							if (BgL_testz00_14300)
								{	/* Llib/object.scm 17 */
									BgL_res3988z00_7317 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7307, BGl_proc4487z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7314;

									BgL_arg2789z00_7314 =
										PROCEDURE_ARITY(BGl_proc4487z00zz__objectz00);
									BgL_res3988z00_7317 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7314));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3988z00_7317 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7307);
						}
				}
				BgL_res3988z00_7317;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3989z00_7344;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7334;

					BgL_classz00_7334 = BGl_z62errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7334))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14313;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7338;

								int BgL_arg2791z00_7339;

								BgL_arg2790z00_7338 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_7339 =
									PROCEDURE_ARITY(BGl_proc4488z00zz__objectz00);
								BgL_testz00_14313 =
									(
									(long) (BgL_arg2790z00_7338) == (long) (BgL_arg2791z00_7339));
							}
							if (BgL_testz00_14313)
								{	/* Llib/object.scm 17 */
									BgL_res3989z00_7344 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_7334, BGl_proc4488z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7341;

									BgL_arg2789z00_7341 =
										PROCEDURE_ARITY(BGl_proc4488z00zz__objectz00);
									BgL_res3989z00_7344 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7341));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3989z00_7344 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7334);
						}
				}
				BgL_res3989z00_7344;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3990z00_7385;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7375;

					BgL_classz00_7375 = BGl_z62errorz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7375))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14326;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7379;

								int BgL_arg2791z00_7380;

								BgL_arg2790z00_7379 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7380 =
									PROCEDURE_ARITY(BGl_proc4489z00zz__objectz00);
								BgL_testz00_14326 =
									((long) (BgL_arg2790z00_7379) ==
									(long) (BgL_arg2791z00_7380));
							}
							if (BgL_testz00_14326)
								{	/* Llib/object.scm 17 */
									BgL_res3990z00_7385 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7375, BGl_proc4489z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7382;

									BgL_arg2789z00_7382 =
										PROCEDURE_ARITY(BGl_proc4489z00zz__objectz00);
									BgL_res3990z00_7385 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7382));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3990z00_7385 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7375);
						}
				}
				BgL_res3990z00_7385;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3991z00_7410;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7400;

					BgL_classz00_7400 = BGl_z62exceptionz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7400))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14339;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7404;

								int BgL_arg2791z00_7405;

								BgL_arg2790z00_7404 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_7405 =
									PROCEDURE_ARITY(BGl_proc4490z00zz__objectz00);
								BgL_testz00_14339 =
									(
									(long) (BgL_arg2790z00_7404) == (long) (BgL_arg2791z00_7405));
							}
							if (BgL_testz00_14339)
								{	/* Llib/object.scm 17 */
									BgL_res3991z00_7410 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_7400, BGl_proc4490z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7407;

									BgL_arg2789z00_7407 =
										PROCEDURE_ARITY(BGl_proc4490z00zz__objectz00);
									BgL_res3991z00_7410 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7407));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3991z00_7410 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7400);
						}
				}
				BgL_res3991z00_7410;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3992z00_7439;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7429;

					BgL_classz00_7429 = BGl_z62exceptionz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7429))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14352;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7433;

								int BgL_arg2791z00_7434;

								BgL_arg2790z00_7433 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7434 =
									PROCEDURE_ARITY(BGl_proc4491z00zz__objectz00);
								BgL_testz00_14352 =
									((long) (BgL_arg2790z00_7433) ==
									(long) (BgL_arg2791z00_7434));
							}
							if (BgL_testz00_14352)
								{	/* Llib/object.scm 17 */
									BgL_res3992z00_7439 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7429, BGl_proc4491z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7436;

									BgL_arg2789z00_7436 =
										PROCEDURE_ARITY(BGl_proc4491z00zz__objectz00);
									BgL_res3992z00_7439 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7436));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3992z00_7439 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7429);
						}
				}
				BgL_res3992z00_7439;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3993z00_7458;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7448;

					BgL_classz00_7448 = BGl_z62conditionz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7448))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14365;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7452;

								int BgL_arg2791z00_7453;

								BgL_arg2790z00_7452 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_7453 =
									PROCEDURE_ARITY(BGl_proc4492z00zz__objectz00);
								BgL_testz00_14365 =
									(
									(long) (BgL_arg2790z00_7452) == (long) (BgL_arg2791z00_7453));
							}
							if (BgL_testz00_14365)
								{	/* Llib/object.scm 17 */
									BgL_res3993z00_7458 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_7448, BGl_proc4492z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7455;

									BgL_arg2789z00_7455 =
										PROCEDURE_ARITY(BGl_proc4492z00zz__objectz00);
									BgL_res3993z00_7458 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7455));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3993z00_7458 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7448);
						}
				}
				BgL_res3993z00_7458;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3994z00_7476;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7466;

					BgL_classz00_7466 = BGl_z62conditionz62zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7466))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14378;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7470;

								int BgL_arg2791z00_7471;

								BgL_arg2790z00_7470 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7471 =
									PROCEDURE_ARITY(BGl_proc4493z00zz__objectz00);
								BgL_testz00_14378 =
									((long) (BgL_arg2790z00_7470) ==
									(long) (BgL_arg2791z00_7471));
							}
							if (BgL_testz00_14378)
								{	/* Llib/object.scm 17 */
									BgL_res3994z00_7476 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7466, BGl_proc4493z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7473;

									BgL_arg2789z00_7473 =
										PROCEDURE_ARITY(BGl_proc4493z00zz__objectz00);
									BgL_res3994z00_7476 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7473));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3994z00_7476 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7466);
						}
				}
				BgL_res3994z00_7476;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3995z00_7490;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7480;

					BgL_classz00_7480 = BGl_objectz00zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7480))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14391;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7484;

								int BgL_arg2791z00_7485;

								BgL_arg2790z00_7484 =
									PROCEDURE_ARITY(BGl_objectzd2ze3structzd2envze3zz__objectz00);
								BgL_arg2791z00_7485 =
									PROCEDURE_ARITY(BGl_proc4494z00zz__objectz00);
								BgL_testz00_14391 =
									(
									(long) (BgL_arg2790z00_7484) == (long) (BgL_arg2791z00_7485));
							}
							if (BgL_testz00_14391)
								{	/* Llib/object.scm 17 */
									BgL_res3995z00_7490 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_objectzd2ze3structzd2envze3zz__objectz00,
										BgL_classz00_7480, BGl_proc4494z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7487;

									BgL_arg2789z00_7487 =
										PROCEDURE_ARITY(BGl_proc4494z00zz__objectz00);
									BgL_res3995z00_7490 =
										BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7487));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3995z00_7490 =
								BGl_errorz00zz__errorz00(BGl_string4451z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7480);
						}
				}
				BgL_res3995z00_7490;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res3996z00_7508;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_7498;

					BgL_classz00_7498 = BGl_objectz00zz__objectz00;
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_7498))
						{	/* Llib/object.scm 17 */
							bool_t BgL_testz00_14404;

							{	/* Llib/object.scm 17 */
								int BgL_arg2790z00_7502;

								int BgL_arg2791z00_7503;

								BgL_arg2790z00_7502 =
									PROCEDURE_ARITY
									(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00);
								BgL_arg2791z00_7503 =
									PROCEDURE_ARITY(BGl_proc4495z00zz__objectz00);
								BgL_testz00_14404 =
									((long) (BgL_arg2790z00_7502) ==
									(long) (BgL_arg2791z00_7503));
							}
							if (BgL_testz00_14404)
								{	/* Llib/object.scm 17 */
									BgL_res3996z00_7508 =
										BGl_z52addzd2methodz12z92zz__objectz00
										(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
										BgL_classz00_7498, BGl_proc4495z00zz__objectz00);
								}
							else
								{	/* Llib/object.scm 17 */
									int BgL_arg2789z00_7505;

									BgL_arg2789z00_7505 =
										PROCEDURE_ARITY(BGl_proc4495z00zz__objectz00);
									BgL_res3996z00_7508 =
										BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
										BGl_string4289z00zz__objectz00, BINT(BgL_arg2789z00_7505));
						}}
					else
						{	/* Llib/object.scm 17 */
							BgL_res3996z00_7508 =
								BGl_errorz00zz__errorz00(BGl_string4453z00zz__objectz00,
								BGl_string4290z00zz__objectz00, BgL_classz00_7498);
						}
				}
				return BgL_res3996z00_7508;
			}
		}
	}



/* struct+object->objec2546 */
	obj_t BGl_structzb2objectzd2ze3objec2546z83zz__objectz00(obj_t
		BgL_envz00_8399, obj_t BgL_oz00_8400, obj_t BgL_sz00_8401)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			{
				BgL_objectz00_bglt BgL_oz00_2761;

				obj_t BgL_sz00_2762;

				{	/* Llib/object.scm 84 */
					BgL_objectz00_bglt BgL_auxz00_14415;

					BgL_oz00_2761 = (BgL_objectz00_bglt) (BgL_oz00_8400);
					BgL_sz00_2762 = BgL_sz00_8401;
					{	/* Llib/object.scm 84 */
						obj_t BgL_auxz00_14416;

						BgL_auxz00_14416 = STRUCT_REF(BgL_sz00_2762, (int) (((long) 0)));
						BGL_OBJECT_WIDENING_SET(BgL_oz00_2761, BgL_auxz00_14416);
					}
					BgL_auxz00_14415 = BgL_oz00_2761;
					return (obj_t) (BgL_auxz00_14415);
				}
			}
		}
	}



/* object->struct-objec2544 */
	obj_t BGl_objectzd2ze3structzd2objec2544ze3zz__objectz00(obj_t
		BgL_envz00_8402, obj_t BgL_obj1099z00_8403)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 84 */
			{
				BgL_objectz00_bglt BgL_obj1099z00_2755;

				BgL_obj1099z00_2755 = (BgL_objectz00_bglt) (BgL_obj1099z00_8403);
				{	/* Llib/object.scm 84 */
					obj_t BgL_res1100z00_7491;

					BgL_res1100z00_7491 =
						make_struct(BGl_symbol4312z00zz__objectz00,
						(int) (((long) 1)), BUNSPEC);
					{	/* Llib/object.scm 84 */
						int BgL_auxz00_14424;

						BgL_auxz00_14424 = (int) (((long) 0));
						STRUCT_SET(BgL_res1100z00_7491, BgL_auxz00_14424, BFALSE);
					}
					return BgL_res1100z00_7491;
				}
			}
		}
	}



/* struct+object->objec2542 */
	obj_t BGl_structzb2objectzd2ze3objec2542z83zz__objectz00(obj_t
		BgL_envz00_8404, obj_t BgL_oz00_8405, obj_t BgL_sz00_8406)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			{
				BgL_z62conditionz62_bglt BgL_oz00_2748;

				obj_t BgL_sz00_2749;

				{	/* Llib/object.scm 85 */
					BgL_z62conditionz62_bglt BgL_auxz00_14428;

					BgL_oz00_2748 = (BgL_z62conditionz62_bglt) (BgL_oz00_8405);
					BgL_sz00_2749 = BgL_sz00_8406;
					{	/* Llib/object.scm 85 */
						obj_t BgL_auxz00_14431;

						BgL_objectz00_bglt BgL_auxz00_14429;

						BgL_auxz00_14431 = STRUCT_REF(BgL_sz00_2749, (int) (((long) 0)));
						BgL_auxz00_14429 = (BgL_objectz00_bglt) (BgL_oz00_2748);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_14429, BgL_auxz00_14431);
					}
					BgL_auxz00_14428 = BgL_oz00_2748;
					return (obj_t) (BgL_auxz00_14428);
				}
			}
		}
	}



/* object->struct-&cond2540 */
	obj_t BGl_objectzd2ze3structzd2z62cond2540z81zz__objectz00(obj_t
		BgL_envz00_8407, obj_t BgL_obj1107z00_8408)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 85 */
			{
				BgL_z62conditionz62_bglt BgL_obj1107z00_2742;

				BgL_obj1107z00_2742 = (BgL_z62conditionz62_bglt) (BgL_obj1107z00_8408);
				{	/* Llib/object.scm 85 */
					obj_t BgL_res1108z00_7459;

					BgL_res1108z00_7459 =
						make_struct(BGl_symbol4313z00zz__objectz00,
						(int) (((long) 1)), BUNSPEC);
					{	/* Llib/object.scm 85 */
						int BgL_auxz00_14439;

						BgL_auxz00_14439 = (int) (((long) 0));
						STRUCT_SET(BgL_res1108z00_7459, BgL_auxz00_14439, BFALSE);
					}
					return BgL_res1108z00_7459;
				}
			}
		}
	}



/* struct+object->objec2538 */
	obj_t BGl_structzb2objectzd2ze3objec2538z83zz__objectz00(obj_t
		BgL_envz00_8409, obj_t BgL_oz00_8410, obj_t BgL_sz00_8411)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			{
				BgL_z62exceptionz62_bglt BgL_oz00_2732;

				obj_t BgL_sz00_2733;

				{	/* Llib/object.scm 87 */
					BgL_z62exceptionz62_bglt BgL_auxz00_14443;

					BgL_oz00_2732 = (BgL_z62exceptionz62_bglt) (BgL_oz00_8410);
					BgL_sz00_2733 = BgL_sz00_8411;
					{	/* Llib/object.scm 87 */
						obj_t BgL_arg3489z00_2736;

						BgL_arg3489z00_2736 = STRUCT_REF(BgL_sz00_2733, (int) (((long) 0)));
						{	/* Llib/object.scm 87 */
							BgL_objectz00_bglt BgL_auxz00_14446;

							BgL_auxz00_14446 = (BgL_objectz00_bglt) (BgL_oz00_2732);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14446, BgL_arg3489z00_2736);
					}}
					{
						obj_t BgL_auxz00_14449;

						BgL_auxz00_14449 = STRUCT_REF(BgL_sz00_2733, (int) (((long) 1)));
						((((BgL_z62exceptionz62_bglt) CREF(BgL_oz00_2732))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_14449), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14453;

						BgL_auxz00_14453 = STRUCT_REF(BgL_sz00_2733, (int) (((long) 2)));
						((((BgL_z62exceptionz62_bglt) CREF(BgL_oz00_2732))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_14453), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14457;

						BgL_auxz00_14457 = STRUCT_REF(BgL_sz00_2733, (int) (((long) 3)));
						((((BgL_z62exceptionz62_bglt) CREF(BgL_oz00_2732))->BgL_stackz00) =
							((obj_t) BgL_auxz00_14457), BUNSPEC);
					}
					BgL_auxz00_14443 = BgL_oz00_2732;
					return (obj_t) (BgL_auxz00_14443);
				}
			}
		}
	}



/* object->struct-&exce2536 */
	obj_t BGl_objectzd2ze3structzd2z62exce2536z81zz__objectz00(obj_t
		BgL_envz00_8412, obj_t BgL_obj1133z00_8413)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 87 */
			{
				BgL_z62exceptionz62_bglt BgL_obj1133z00_2720;

				BgL_obj1133z00_2720 = (BgL_z62exceptionz62_bglt) (BgL_obj1133z00_8413);
				{	/* Llib/object.scm 87 */
					obj_t BgL_res1134z00_2723;

					BgL_res1134z00_2723 =
						make_struct(BGl_symbol4315z00zz__objectz00,
						(int) (((long) 4)), BUNSPEC);
					{	/* Llib/object.scm 87 */
						int BgL_auxz00_14465;

						BgL_auxz00_14465 = (int) (((long) 0));
						STRUCT_SET(BgL_res1134z00_2723, BgL_auxz00_14465, BFALSE);
					}
					{	/* Llib/object.scm 87 */
						obj_t BgL_arg3483z00_2725;

						BgL_arg3483z00_2725 =
							(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1133z00_2720))->
							BgL_fnamez00);
						{	/* Llib/object.scm 87 */
							int BgL_auxz00_14469;

							BgL_auxz00_14469 = (int) (((long) 1));
							STRUCT_SET(BgL_res1134z00_2723, BgL_auxz00_14469,
								BgL_arg3483z00_2725);
					}}
					{	/* Llib/object.scm 87 */
						obj_t BgL_arg3485z00_2727;

						BgL_arg3485z00_2727 =
							(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1133z00_2720))->
							BgL_locationz00);
						{	/* Llib/object.scm 87 */
							int BgL_auxz00_14473;

							BgL_auxz00_14473 = (int) (((long) 2));
							STRUCT_SET(BgL_res1134z00_2723, BgL_auxz00_14473,
								BgL_arg3485z00_2727);
					}}
					{	/* Llib/object.scm 87 */
						obj_t BgL_arg3487z00_2729;

						BgL_arg3487z00_2729 =
							(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1133z00_2720))->
							BgL_stackz00);
						{	/* Llib/object.scm 87 */
							int BgL_auxz00_14477;

							BgL_auxz00_14477 = (int) (((long) 3));
							STRUCT_SET(BgL_res1134z00_2723, BgL_auxz00_14477,
								BgL_arg3487z00_2729);
					}}
					return BgL_res1134z00_2723;
				}
			}
		}
	}



/* struct+object->objec2534 */
	obj_t BGl_structzb2objectzd2ze3objec2534z83zz__objectz00(obj_t
		BgL_envz00_8414, obj_t BgL_oz00_8415, obj_t BgL_sz00_8416)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			{
				BgL_z62errorz62_bglt BgL_oz00_2707;

				obj_t BgL_sz00_2708;

				{	/* Llib/object.scm 92 */
					BgL_z62errorz62_bglt BgL_auxz00_14481;

					BgL_oz00_2707 = (BgL_z62errorz62_bglt) (BgL_oz00_8415);
					BgL_sz00_2708 = BgL_sz00_8416;
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg3480z00_2711;

						BgL_arg3480z00_2711 = STRUCT_REF(BgL_sz00_2708, (int) (((long) 0)));
						{	/* Llib/object.scm 92 */
							BgL_objectz00_bglt BgL_auxz00_14484;

							BgL_auxz00_14484 = (BgL_objectz00_bglt) (BgL_oz00_2707);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14484, BgL_arg3480z00_2711);
					}}
					{
						obj_t BgL_auxz00_14487;

						BgL_auxz00_14487 = STRUCT_REF(BgL_sz00_2708, (int) (((long) 1)));
						((((BgL_z62errorz62_bglt) CREF(BgL_oz00_2707))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_14487), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14491;

						BgL_auxz00_14491 = STRUCT_REF(BgL_sz00_2708, (int) (((long) 2)));
						((((BgL_z62errorz62_bglt) CREF(BgL_oz00_2707))->BgL_locationz00) =
							((obj_t) BgL_auxz00_14491), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14495;

						BgL_auxz00_14495 = STRUCT_REF(BgL_sz00_2708, (int) (((long) 3)));
						((((BgL_z62errorz62_bglt) CREF(BgL_oz00_2707))->BgL_stackz00) =
							((obj_t) BgL_auxz00_14495), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14499;

						BgL_auxz00_14499 = STRUCT_REF(BgL_sz00_2708, (int) (((long) 4)));
						((((BgL_z62errorz62_bglt) CREF(BgL_oz00_2707))->BgL_procz00) =
							((obj_t) BgL_auxz00_14499), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14503;

						BgL_auxz00_14503 = STRUCT_REF(BgL_sz00_2708, (int) (((long) 5)));
						((((BgL_z62errorz62_bglt) CREF(BgL_oz00_2707))->BgL_msgz00) =
							((obj_t) BgL_auxz00_14503), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14507;

						BgL_auxz00_14507 = STRUCT_REF(BgL_sz00_2708, (int) (((long) 6)));
						((((BgL_z62errorz62_bglt) CREF(BgL_oz00_2707))->BgL_objz00) =
							((obj_t) BgL_auxz00_14507), BUNSPEC);
					}
					BgL_auxz00_14481 = BgL_oz00_2707;
					return (obj_t) (BgL_auxz00_14481);
				}
			}
		}
	}



/* object->struct-&erro2532 */
	obj_t BGl_objectzd2ze3structzd2z62erro2532z81zz__objectz00(obj_t
		BgL_envz00_8417, obj_t BgL_obj1183z00_8418)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 92 */
			{
				BgL_z62errorz62_bglt BgL_obj1183z00_2689;

				BgL_obj1183z00_2689 = (BgL_z62errorz62_bglt) (BgL_obj1183z00_8418);
				{	/* Llib/object.scm 92 */
					obj_t BgL_res1184z00_2692;

					BgL_res1184z00_2692 =
						make_struct(BGl_symbol4326z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 92 */
						int BgL_auxz00_14515;

						BgL_auxz00_14515 = (int) (((long) 0));
						STRUCT_SET(BgL_res1184z00_2692, BgL_auxz00_14515, BFALSE);
					}
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg3468z00_2694;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14518;

							BgL_auxz00_14518 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1183z00_2689);
							BgL_arg3468z00_2694 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14518))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 92 */
							int BgL_auxz00_14521;

							BgL_auxz00_14521 = (int) (((long) 1));
							STRUCT_SET(BgL_res1184z00_2692, BgL_auxz00_14521,
								BgL_arg3468z00_2694);
					}}
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg3470z00_2696;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14524;

							BgL_auxz00_14524 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1183z00_2689);
							BgL_arg3470z00_2696 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14524))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 92 */
							int BgL_auxz00_14527;

							BgL_auxz00_14527 = (int) (((long) 2));
							STRUCT_SET(BgL_res1184z00_2692, BgL_auxz00_14527,
								BgL_arg3470z00_2696);
					}}
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg3472z00_2698;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14530;

							BgL_auxz00_14530 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1183z00_2689);
							BgL_arg3472z00_2698 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14530))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 92 */
							int BgL_auxz00_14533;

							BgL_auxz00_14533 = (int) (((long) 3));
							STRUCT_SET(BgL_res1184z00_2692, BgL_auxz00_14533,
								BgL_arg3472z00_2698);
					}}
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg3474z00_2700;

						BgL_arg3474z00_2700 =
							(((BgL_z62errorz62_bglt) CREF(BgL_obj1183z00_2689))->BgL_procz00);
						{	/* Llib/object.scm 92 */
							int BgL_auxz00_14537;

							BgL_auxz00_14537 = (int) (((long) 4));
							STRUCT_SET(BgL_res1184z00_2692, BgL_auxz00_14537,
								BgL_arg3474z00_2700);
					}}
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg3476z00_2702;

						BgL_arg3476z00_2702 =
							(((BgL_z62errorz62_bglt) CREF(BgL_obj1183z00_2689))->BgL_msgz00);
						{	/* Llib/object.scm 92 */
							int BgL_auxz00_14541;

							BgL_auxz00_14541 = (int) (((long) 5));
							STRUCT_SET(BgL_res1184z00_2692, BgL_auxz00_14541,
								BgL_arg3476z00_2702);
					}}
					{	/* Llib/object.scm 92 */
						obj_t BgL_arg3478z00_2704;

						BgL_arg3478z00_2704 =
							(((BgL_z62errorz62_bglt) CREF(BgL_obj1183z00_2689))->BgL_objz00);
						{	/* Llib/object.scm 92 */
							int BgL_auxz00_14545;

							BgL_auxz00_14545 = (int) (((long) 6));
							STRUCT_SET(BgL_res1184z00_2692, BgL_auxz00_14545,
								BgL_arg3478z00_2704);
					}}
					return BgL_res1184z00_2692;
				}
			}
		}
	}



/* struct+object->objec2530 */
	obj_t BGl_structzb2objectzd2ze3objec2530z83zz__objectz00(obj_t
		BgL_envz00_8419, obj_t BgL_oz00_8420, obj_t BgL_sz00_8421)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			{
				BgL_z62typezd2errorzb0_bglt BgL_oz00_2675;

				obj_t BgL_sz00_2676;

				{	/* Llib/object.scm 96 */
					BgL_z62typezd2errorzb0_bglt BgL_auxz00_14549;

					BgL_oz00_2675 = (BgL_z62typezd2errorzb0_bglt) (BgL_oz00_8420);
					BgL_sz00_2676 = BgL_sz00_8421;
					{	/* Llib/object.scm 96 */
						obj_t BgL_arg3465z00_2679;

						BgL_arg3465z00_2679 = STRUCT_REF(BgL_sz00_2676, (int) (((long) 0)));
						{	/* Llib/object.scm 96 */
							BgL_objectz00_bglt BgL_auxz00_14552;

							BgL_auxz00_14552 = (BgL_objectz00_bglt) (BgL_oz00_2675);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14552, BgL_arg3465z00_2679);
					}}
					{
						obj_t BgL_auxz00_14555;

						BgL_auxz00_14555 = STRUCT_REF(BgL_sz00_2676, (int) (((long) 1)));
						((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_oz00_2675))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_14555), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14559;

						BgL_auxz00_14559 = STRUCT_REF(BgL_sz00_2676, (int) (((long) 2)));
						((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_oz00_2675))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_14559), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14563;

						BgL_auxz00_14563 = STRUCT_REF(BgL_sz00_2676, (int) (((long) 3)));
						((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_oz00_2675))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_14563), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14567;

						BgL_auxz00_14567 = STRUCT_REF(BgL_sz00_2676, (int) (((long) 4)));
						((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_oz00_2675))->
								BgL_procz00) = ((obj_t) BgL_auxz00_14567), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14571;

						BgL_auxz00_14571 = STRUCT_REF(BgL_sz00_2676, (int) (((long) 5)));
						((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_oz00_2675))->BgL_msgz00) =
							((obj_t) BgL_auxz00_14571), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14575;

						BgL_auxz00_14575 = STRUCT_REF(BgL_sz00_2676, (int) (((long) 6)));
						((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_oz00_2675))->BgL_objz00) =
							((obj_t) BgL_auxz00_14575), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14579;

						BgL_auxz00_14579 = STRUCT_REF(BgL_sz00_2676, (int) (((long) 7)));
						((((BgL_z62typezd2errorzb0_bglt) CREF(BgL_oz00_2675))->
								BgL_typez00) = ((obj_t) BgL_auxz00_14579), BUNSPEC);
					}
					BgL_auxz00_14549 = BgL_oz00_2675;
					return (obj_t) (BgL_auxz00_14549);
				}
			}
		}
	}



/* object->struct-&type2528 */
	obj_t BGl_objectzd2ze3structzd2z62type2528z81zz__objectz00(obj_t
		BgL_envz00_8422, obj_t BgL_obj1249z00_8423)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 96 */
			{
				BgL_z62typezd2errorzb0_bglt BgL_obj1249z00_2655;

				BgL_obj1249z00_2655 =
					(BgL_z62typezd2errorzb0_bglt) (BgL_obj1249z00_8423);
				{	/* Llib/object.scm 96 */
					obj_t BgL_res1250z00_2658;

					BgL_res1250z00_2658 =
						make_struct(BGl_symbol4332z00zz__objectz00,
						(int) (((long) 8)), BUNSPEC);
					{	/* Llib/object.scm 96 */
						int BgL_auxz00_14587;

						BgL_auxz00_14587 = (int) (((long) 0));
						STRUCT_SET(BgL_res1250z00_2658, BgL_auxz00_14587, BFALSE);
					}
					{	/* Llib/object.scm 96 */
						obj_t BgL_arg3451z00_2660;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14590;

							BgL_auxz00_14590 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1249z00_2655);
							BgL_arg3451z00_2660 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14590))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 96 */
							int BgL_auxz00_14593;

							BgL_auxz00_14593 = (int) (((long) 1));
							STRUCT_SET(BgL_res1250z00_2658, BgL_auxz00_14593,
								BgL_arg3451z00_2660);
					}}
					{	/* Llib/object.scm 96 */
						obj_t BgL_arg3453z00_2662;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14596;

							BgL_auxz00_14596 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1249z00_2655);
							BgL_arg3453z00_2662 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14596))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 96 */
							int BgL_auxz00_14599;

							BgL_auxz00_14599 = (int) (((long) 2));
							STRUCT_SET(BgL_res1250z00_2658, BgL_auxz00_14599,
								BgL_arg3453z00_2662);
					}}
					{	/* Llib/object.scm 96 */
						obj_t BgL_arg3455z00_2664;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14602;

							BgL_auxz00_14602 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1249z00_2655);
							BgL_arg3455z00_2664 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14602))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 96 */
							int BgL_auxz00_14605;

							BgL_auxz00_14605 = (int) (((long) 3));
							STRUCT_SET(BgL_res1250z00_2658, BgL_auxz00_14605,
								BgL_arg3455z00_2664);
					}}
					{	/* Llib/object.scm 96 */
						obj_t BgL_arg3457z00_2666;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14608;

							BgL_auxz00_14608 = (BgL_z62errorz62_bglt) (BgL_obj1249z00_2655);
							BgL_arg3457z00_2666 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14608))->BgL_procz00);
						}
						{	/* Llib/object.scm 96 */
							int BgL_auxz00_14611;

							BgL_auxz00_14611 = (int) (((long) 4));
							STRUCT_SET(BgL_res1250z00_2658, BgL_auxz00_14611,
								BgL_arg3457z00_2666);
					}}
					{	/* Llib/object.scm 96 */
						obj_t BgL_arg3459z00_2668;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14614;

							BgL_auxz00_14614 = (BgL_z62errorz62_bglt) (BgL_obj1249z00_2655);
							BgL_arg3459z00_2668 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14614))->BgL_msgz00);
						}
						{	/* Llib/object.scm 96 */
							int BgL_auxz00_14617;

							BgL_auxz00_14617 = (int) (((long) 5));
							STRUCT_SET(BgL_res1250z00_2658, BgL_auxz00_14617,
								BgL_arg3459z00_2668);
					}}
					{	/* Llib/object.scm 96 */
						obj_t BgL_arg3461z00_2670;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14620;

							BgL_auxz00_14620 = (BgL_z62errorz62_bglt) (BgL_obj1249z00_2655);
							BgL_arg3461z00_2670 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14620))->BgL_objz00);
						}
						{	/* Llib/object.scm 96 */
							int BgL_auxz00_14623;

							BgL_auxz00_14623 = (int) (((long) 6));
							STRUCT_SET(BgL_res1250z00_2658, BgL_auxz00_14623,
								BgL_arg3461z00_2670);
					}}
					{	/* Llib/object.scm 96 */
						obj_t BgL_arg3463z00_2672;

						BgL_arg3463z00_2672 =
							(((BgL_z62typezd2errorzb0_bglt) CREF(BgL_obj1249z00_2655))->
							BgL_typez00);
						{	/* Llib/object.scm 96 */
							int BgL_auxz00_14627;

							BgL_auxz00_14627 = (int) (((long) 7));
							STRUCT_SET(BgL_res1250z00_2658, BgL_auxz00_14627,
								BgL_arg3463z00_2672);
					}}
					return BgL_res1250z00_2658;
				}
			}
		}
	}



/* struct+object->objec2526 */
	obj_t BGl_structzb2objectzd2ze3objec2526z83zz__objectz00(obj_t
		BgL_envz00_8424, obj_t BgL_oz00_8425, obj_t BgL_sz00_8426)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			{
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_oz00_2641;

				obj_t BgL_sz00_2642;

				{	/* Llib/object.scm 98 */
					BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_auxz00_14631;

					BgL_oz00_2641 =
						(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt) (BgL_oz00_8425);
					BgL_sz00_2642 = BgL_sz00_8426;
					{	/* Llib/object.scm 98 */
						obj_t BgL_arg3448z00_2645;

						BgL_arg3448z00_2645 = STRUCT_REF(BgL_sz00_2642, (int) (((long) 0)));
						{	/* Llib/object.scm 98 */
							BgL_objectz00_bglt BgL_auxz00_14634;

							BgL_auxz00_14634 = (BgL_objectz00_bglt) (BgL_oz00_2641);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14634, BgL_arg3448z00_2645);
					}}
					{
						obj_t BgL_auxz00_14637;

						BgL_auxz00_14637 = STRUCT_REF(BgL_sz00_2642, (int) (((long) 1)));
						((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									CREF(BgL_oz00_2641))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_14637), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14641;

						BgL_auxz00_14641 = STRUCT_REF(BgL_sz00_2642, (int) (((long) 2)));
						((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									CREF(BgL_oz00_2641))->BgL_locationz00) =
							((obj_t) BgL_auxz00_14641), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14645;

						BgL_auxz00_14645 = STRUCT_REF(BgL_sz00_2642, (int) (((long) 3)));
						((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									CREF(BgL_oz00_2641))->BgL_stackz00) =
							((obj_t) BgL_auxz00_14645), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14649;

						BgL_auxz00_14649 = STRUCT_REF(BgL_sz00_2642, (int) (((long) 4)));
						((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									CREF(BgL_oz00_2641))->BgL_procz00) =
							((obj_t) BgL_auxz00_14649), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14653;

						BgL_auxz00_14653 = STRUCT_REF(BgL_sz00_2642, (int) (((long) 5)));
						((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									CREF(BgL_oz00_2641))->BgL_msgz00) =
							((obj_t) BgL_auxz00_14653), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14657;

						BgL_auxz00_14657 = STRUCT_REF(BgL_sz00_2642, (int) (((long) 6)));
						((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									CREF(BgL_oz00_2641))->BgL_objz00) =
							((obj_t) BgL_auxz00_14657), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14661;

						BgL_auxz00_14661 = STRUCT_REF(BgL_sz00_2642, (int) (((long) 7)));
						((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									CREF(BgL_oz00_2641))->BgL_indexz00) =
							((obj_t) BgL_auxz00_14661), BUNSPEC);
					}
					BgL_auxz00_14631 = BgL_oz00_2641;
					return (obj_t) (BgL_auxz00_14631);
				}
			}
		}
	}



/* object->struct-&inde2524 */
	obj_t BGl_objectzd2ze3structzd2z62inde2524z81zz__objectz00(obj_t
		BgL_envz00_8427, obj_t BgL_obj1319z00_8428)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 98 */
			{
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_obj1319z00_2621;

				BgL_obj1319z00_2621 =
					(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
					(BgL_obj1319z00_8428);
				{	/* Llib/object.scm 98 */
					obj_t BgL_res1320z00_2624;

					BgL_res1320z00_2624 =
						make_struct(BGl_symbol4336z00zz__objectz00,
						(int) (((long) 8)), BUNSPEC);
					{	/* Llib/object.scm 98 */
						int BgL_auxz00_14669;

						BgL_auxz00_14669 = (int) (((long) 0));
						STRUCT_SET(BgL_res1320z00_2624, BgL_auxz00_14669, BFALSE);
					}
					{	/* Llib/object.scm 98 */
						obj_t BgL_arg3433z00_2626;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14672;

							BgL_auxz00_14672 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1319z00_2621);
							BgL_arg3433z00_2626 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14672))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 98 */
							int BgL_auxz00_14675;

							BgL_auxz00_14675 = (int) (((long) 1));
							STRUCT_SET(BgL_res1320z00_2624, BgL_auxz00_14675,
								BgL_arg3433z00_2626);
					}}
					{	/* Llib/object.scm 98 */
						obj_t BgL_arg3435z00_2628;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14678;

							BgL_auxz00_14678 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1319z00_2621);
							BgL_arg3435z00_2628 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14678))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 98 */
							int BgL_auxz00_14681;

							BgL_auxz00_14681 = (int) (((long) 2));
							STRUCT_SET(BgL_res1320z00_2624, BgL_auxz00_14681,
								BgL_arg3435z00_2628);
					}}
					{	/* Llib/object.scm 98 */
						obj_t BgL_arg3437z00_2630;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14684;

							BgL_auxz00_14684 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1319z00_2621);
							BgL_arg3437z00_2630 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14684))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 98 */
							int BgL_auxz00_14687;

							BgL_auxz00_14687 = (int) (((long) 3));
							STRUCT_SET(BgL_res1320z00_2624, BgL_auxz00_14687,
								BgL_arg3437z00_2630);
					}}
					{	/* Llib/object.scm 98 */
						obj_t BgL_arg3439z00_2632;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14690;

							BgL_auxz00_14690 = (BgL_z62errorz62_bglt) (BgL_obj1319z00_2621);
							BgL_arg3439z00_2632 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14690))->BgL_procz00);
						}
						{	/* Llib/object.scm 98 */
							int BgL_auxz00_14693;

							BgL_auxz00_14693 = (int) (((long) 4));
							STRUCT_SET(BgL_res1320z00_2624, BgL_auxz00_14693,
								BgL_arg3439z00_2632);
					}}
					{	/* Llib/object.scm 98 */
						obj_t BgL_arg3441z00_2634;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14696;

							BgL_auxz00_14696 = (BgL_z62errorz62_bglt) (BgL_obj1319z00_2621);
							BgL_arg3441z00_2634 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14696))->BgL_msgz00);
						}
						{	/* Llib/object.scm 98 */
							int BgL_auxz00_14699;

							BgL_auxz00_14699 = (int) (((long) 5));
							STRUCT_SET(BgL_res1320z00_2624, BgL_auxz00_14699,
								BgL_arg3441z00_2634);
					}}
					{	/* Llib/object.scm 98 */
						obj_t BgL_arg3444z00_2636;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14702;

							BgL_auxz00_14702 = (BgL_z62errorz62_bglt) (BgL_obj1319z00_2621);
							BgL_arg3444z00_2636 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14702))->BgL_objz00);
						}
						{	/* Llib/object.scm 98 */
							int BgL_auxz00_14705;

							BgL_auxz00_14705 = (int) (((long) 6));
							STRUCT_SET(BgL_res1320z00_2624, BgL_auxz00_14705,
								BgL_arg3444z00_2636);
					}}
					{	/* Llib/object.scm 98 */
						obj_t BgL_arg3446z00_2638;

						BgL_arg3446z00_2638 =
							(((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
								CREF(BgL_obj1319z00_2621))->BgL_indexz00);
						{	/* Llib/object.scm 98 */
							int BgL_auxz00_14709;

							BgL_auxz00_14709 = (int) (((long) 7));
							STRUCT_SET(BgL_res1320z00_2624, BgL_auxz00_14709,
								BgL_arg3446z00_2638);
					}}
					return BgL_res1320z00_2624;
				}
			}
		}
	}



/* struct+object->objec2522 */
	obj_t BGl_structzb2objectzd2ze3objec2522z83zz__objectz00(obj_t
		BgL_envz00_8429, obj_t BgL_oz00_8430, obj_t BgL_sz00_8431)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			{
				BgL_z62iozd2errorzb0_bglt BgL_oz00_2608;

				obj_t BgL_sz00_2609;

				{	/* Llib/object.scm 100 */
					BgL_z62iozd2errorzb0_bglt BgL_auxz00_14713;

					BgL_oz00_2608 = (BgL_z62iozd2errorzb0_bglt) (BgL_oz00_8430);
					BgL_sz00_2609 = BgL_sz00_8431;
					{	/* Llib/object.scm 100 */
						obj_t BgL_arg3430z00_2612;

						BgL_arg3430z00_2612 = STRUCT_REF(BgL_sz00_2609, (int) (((long) 0)));
						{	/* Llib/object.scm 100 */
							BgL_objectz00_bglt BgL_auxz00_14716;

							BgL_auxz00_14716 = (BgL_objectz00_bglt) (BgL_oz00_2608);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14716, BgL_arg3430z00_2612);
					}}
					{
						obj_t BgL_auxz00_14719;

						BgL_auxz00_14719 = STRUCT_REF(BgL_sz00_2609, (int) (((long) 1)));
						((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_oz00_2608))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_14719), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14723;

						BgL_auxz00_14723 = STRUCT_REF(BgL_sz00_2609, (int) (((long) 2)));
						((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_oz00_2608))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_14723), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14727;

						BgL_auxz00_14727 = STRUCT_REF(BgL_sz00_2609, (int) (((long) 3)));
						((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_oz00_2608))->BgL_stackz00) =
							((obj_t) BgL_auxz00_14727), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14731;

						BgL_auxz00_14731 = STRUCT_REF(BgL_sz00_2609, (int) (((long) 4)));
						((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_oz00_2608))->BgL_procz00) =
							((obj_t) BgL_auxz00_14731), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14735;

						BgL_auxz00_14735 = STRUCT_REF(BgL_sz00_2609, (int) (((long) 5)));
						((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_oz00_2608))->BgL_msgz00) =
							((obj_t) BgL_auxz00_14735), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14739;

						BgL_auxz00_14739 = STRUCT_REF(BgL_sz00_2609, (int) (((long) 6)));
						((((BgL_z62iozd2errorzb0_bglt) CREF(BgL_oz00_2608))->BgL_objz00) =
							((obj_t) BgL_auxz00_14739), BUNSPEC);
					}
					BgL_auxz00_14713 = BgL_oz00_2608;
					return (obj_t) (BgL_auxz00_14713);
				}
			}
		}
	}



/* object->struct-&io-e2520 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2e2520z53zz__objectz00(obj_t
		BgL_envz00_8432, obj_t BgL_obj1385z00_8433)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 100 */
			{
				BgL_z62iozd2errorzb0_bglt BgL_obj1385z00_2590;

				BgL_obj1385z00_2590 = (BgL_z62iozd2errorzb0_bglt) (BgL_obj1385z00_8433);
				{	/* Llib/object.scm 100 */
					obj_t BgL_res1386z00_2593;

					BgL_res1386z00_2593 =
						make_struct(BGl_symbol4340z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 100 */
						int BgL_auxz00_14747;

						BgL_auxz00_14747 = (int) (((long) 0));
						STRUCT_SET(BgL_res1386z00_2593, BgL_auxz00_14747, BFALSE);
					}
					{	/* Llib/object.scm 100 */
						obj_t BgL_arg3416z00_2595;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14750;

							BgL_auxz00_14750 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1385z00_2590);
							BgL_arg3416z00_2595 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14750))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 100 */
							int BgL_auxz00_14753;

							BgL_auxz00_14753 = (int) (((long) 1));
							STRUCT_SET(BgL_res1386z00_2593, BgL_auxz00_14753,
								BgL_arg3416z00_2595);
					}}
					{	/* Llib/object.scm 100 */
						obj_t BgL_arg3418z00_2597;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14756;

							BgL_auxz00_14756 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1385z00_2590);
							BgL_arg3418z00_2597 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14756))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 100 */
							int BgL_auxz00_14759;

							BgL_auxz00_14759 = (int) (((long) 2));
							STRUCT_SET(BgL_res1386z00_2593, BgL_auxz00_14759,
								BgL_arg3418z00_2597);
					}}
					{	/* Llib/object.scm 100 */
						obj_t BgL_arg3420z00_2599;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14762;

							BgL_auxz00_14762 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1385z00_2590);
							BgL_arg3420z00_2599 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14762))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 100 */
							int BgL_auxz00_14765;

							BgL_auxz00_14765 = (int) (((long) 3));
							STRUCT_SET(BgL_res1386z00_2593, BgL_auxz00_14765,
								BgL_arg3420z00_2599);
					}}
					{	/* Llib/object.scm 100 */
						obj_t BgL_arg3422z00_2601;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14768;

							BgL_auxz00_14768 = (BgL_z62errorz62_bglt) (BgL_obj1385z00_2590);
							BgL_arg3422z00_2601 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14768))->BgL_procz00);
						}
						{	/* Llib/object.scm 100 */
							int BgL_auxz00_14771;

							BgL_auxz00_14771 = (int) (((long) 4));
							STRUCT_SET(BgL_res1386z00_2593, BgL_auxz00_14771,
								BgL_arg3422z00_2601);
					}}
					{	/* Llib/object.scm 100 */
						obj_t BgL_arg3425z00_2603;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14774;

							BgL_auxz00_14774 = (BgL_z62errorz62_bglt) (BgL_obj1385z00_2590);
							BgL_arg3425z00_2603 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14774))->BgL_msgz00);
						}
						{	/* Llib/object.scm 100 */
							int BgL_auxz00_14777;

							BgL_auxz00_14777 = (int) (((long) 5));
							STRUCT_SET(BgL_res1386z00_2593, BgL_auxz00_14777,
								BgL_arg3425z00_2603);
					}}
					{	/* Llib/object.scm 100 */
						obj_t BgL_arg3427z00_2605;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14780;

							BgL_auxz00_14780 = (BgL_z62errorz62_bglt) (BgL_obj1385z00_2590);
							BgL_arg3427z00_2605 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14780))->BgL_objz00);
						}
						{	/* Llib/object.scm 100 */
							int BgL_auxz00_14783;

							BgL_auxz00_14783 = (int) (((long) 6));
							STRUCT_SET(BgL_res1386z00_2593, BgL_auxz00_14783,
								BgL_arg3427z00_2605);
					}}
					return BgL_res1386z00_2593;
				}
			}
		}
	}



/* struct+object->objec2518 */
	obj_t BGl_structzb2objectzd2ze3objec2518z83zz__objectz00(obj_t
		BgL_envz00_8434, obj_t BgL_oz00_8435, obj_t BgL_sz00_8436)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			{
				BgL_z62iozd2portzd2errorz62_bglt BgL_oz00_2577;

				obj_t BgL_sz00_2578;

				{	/* Llib/object.scm 101 */
					BgL_z62iozd2portzd2errorz62_bglt BgL_auxz00_14787;

					BgL_oz00_2577 = (BgL_z62iozd2portzd2errorz62_bglt) (BgL_oz00_8435);
					BgL_sz00_2578 = BgL_sz00_8436;
					{	/* Llib/object.scm 101 */
						obj_t BgL_arg3413z00_2581;

						BgL_arg3413z00_2581 = STRUCT_REF(BgL_sz00_2578, (int) (((long) 0)));
						{	/* Llib/object.scm 101 */
							BgL_objectz00_bglt BgL_auxz00_14790;

							BgL_auxz00_14790 = (BgL_objectz00_bglt) (BgL_oz00_2577);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14790, BgL_arg3413z00_2581);
					}}
					{
						obj_t BgL_auxz00_14793;

						BgL_auxz00_14793 = STRUCT_REF(BgL_sz00_2578, (int) (((long) 1)));
						((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_oz00_2577))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_14793), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14797;

						BgL_auxz00_14797 = STRUCT_REF(BgL_sz00_2578, (int) (((long) 2)));
						((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_oz00_2577))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_14797), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14801;

						BgL_auxz00_14801 = STRUCT_REF(BgL_sz00_2578, (int) (((long) 3)));
						((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_oz00_2577))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_14801), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14805;

						BgL_auxz00_14805 = STRUCT_REF(BgL_sz00_2578, (int) (((long) 4)));
						((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_oz00_2577))->
								BgL_procz00) = ((obj_t) BgL_auxz00_14805), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14809;

						BgL_auxz00_14809 = STRUCT_REF(BgL_sz00_2578, (int) (((long) 5)));
						((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_oz00_2577))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_14809), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14813;

						BgL_auxz00_14813 = STRUCT_REF(BgL_sz00_2578, (int) (((long) 6)));
						((((BgL_z62iozd2portzd2errorz62_bglt) CREF(BgL_oz00_2577))->
								BgL_objz00) = ((obj_t) BgL_auxz00_14813), BUNSPEC);
					}
					BgL_auxz00_14787 = BgL_oz00_2577;
					return (obj_t) (BgL_auxz00_14787);
				}
			}
		}
	}



/* object->struct-&io-p2516 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2p2516z53zz__objectz00(obj_t
		BgL_envz00_8437, obj_t BgL_obj1447z00_8438)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 101 */
			{
				BgL_z62iozd2portzd2errorz62_bglt BgL_obj1447z00_2559;

				BgL_obj1447z00_2559 =
					(BgL_z62iozd2portzd2errorz62_bglt) (BgL_obj1447z00_8438);
				{	/* Llib/object.scm 101 */
					obj_t BgL_res1448z00_2562;

					BgL_res1448z00_2562 =
						make_struct(BGl_symbol4342z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 101 */
						int BgL_auxz00_14821;

						BgL_auxz00_14821 = (int) (((long) 0));
						STRUCT_SET(BgL_res1448z00_2562, BgL_auxz00_14821, BFALSE);
					}
					{	/* Llib/object.scm 101 */
						obj_t BgL_arg3401z00_2564;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14824;

							BgL_auxz00_14824 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1447z00_2559);
							BgL_arg3401z00_2564 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14824))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 101 */
							int BgL_auxz00_14827;

							BgL_auxz00_14827 = (int) (((long) 1));
							STRUCT_SET(BgL_res1448z00_2562, BgL_auxz00_14827,
								BgL_arg3401z00_2564);
					}}
					{	/* Llib/object.scm 101 */
						obj_t BgL_arg3403z00_2566;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14830;

							BgL_auxz00_14830 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1447z00_2559);
							BgL_arg3403z00_2566 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14830))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 101 */
							int BgL_auxz00_14833;

							BgL_auxz00_14833 = (int) (((long) 2));
							STRUCT_SET(BgL_res1448z00_2562, BgL_auxz00_14833,
								BgL_arg3403z00_2566);
					}}
					{	/* Llib/object.scm 101 */
						obj_t BgL_arg3405z00_2568;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14836;

							BgL_auxz00_14836 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1447z00_2559);
							BgL_arg3405z00_2568 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14836))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 101 */
							int BgL_auxz00_14839;

							BgL_auxz00_14839 = (int) (((long) 3));
							STRUCT_SET(BgL_res1448z00_2562, BgL_auxz00_14839,
								BgL_arg3405z00_2568);
					}}
					{	/* Llib/object.scm 101 */
						obj_t BgL_arg3407z00_2570;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14842;

							BgL_auxz00_14842 = (BgL_z62errorz62_bglt) (BgL_obj1447z00_2559);
							BgL_arg3407z00_2570 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14842))->BgL_procz00);
						}
						{	/* Llib/object.scm 101 */
							int BgL_auxz00_14845;

							BgL_auxz00_14845 = (int) (((long) 4));
							STRUCT_SET(BgL_res1448z00_2562, BgL_auxz00_14845,
								BgL_arg3407z00_2570);
					}}
					{	/* Llib/object.scm 101 */
						obj_t BgL_arg3409z00_2572;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14848;

							BgL_auxz00_14848 = (BgL_z62errorz62_bglt) (BgL_obj1447z00_2559);
							BgL_arg3409z00_2572 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14848))->BgL_msgz00);
						}
						{	/* Llib/object.scm 101 */
							int BgL_auxz00_14851;

							BgL_auxz00_14851 = (int) (((long) 5));
							STRUCT_SET(BgL_res1448z00_2562, BgL_auxz00_14851,
								BgL_arg3409z00_2572);
					}}
					{	/* Llib/object.scm 101 */
						obj_t BgL_arg3411z00_2574;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14854;

							BgL_auxz00_14854 = (BgL_z62errorz62_bglt) (BgL_obj1447z00_2559);
							BgL_arg3411z00_2574 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14854))->BgL_objz00);
						}
						{	/* Llib/object.scm 101 */
							int BgL_auxz00_14857;

							BgL_auxz00_14857 = (int) (((long) 6));
							STRUCT_SET(BgL_res1448z00_2562, BgL_auxz00_14857,
								BgL_arg3411z00_2574);
					}}
					return BgL_res1448z00_2562;
				}
			}
		}
	}



/* struct+object->objec2514 */
	obj_t BGl_structzb2objectzd2ze3objec2514z83zz__objectz00(obj_t
		BgL_envz00_8439, obj_t BgL_oz00_8440, obj_t BgL_sz00_8441)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			{
				BgL_z62iozd2readzd2errorz62_bglt BgL_oz00_2546;

				obj_t BgL_sz00_2547;

				{	/* Llib/object.scm 102 */
					BgL_z62iozd2readzd2errorz62_bglt BgL_auxz00_14861;

					BgL_oz00_2546 = (BgL_z62iozd2readzd2errorz62_bglt) (BgL_oz00_8440);
					BgL_sz00_2547 = BgL_sz00_8441;
					{	/* Llib/object.scm 102 */
						obj_t BgL_arg3398z00_2550;

						BgL_arg3398z00_2550 = STRUCT_REF(BgL_sz00_2547, (int) (((long) 0)));
						{	/* Llib/object.scm 102 */
							BgL_objectz00_bglt BgL_auxz00_14864;

							BgL_auxz00_14864 = (BgL_objectz00_bglt) (BgL_oz00_2546);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14864, BgL_arg3398z00_2550);
					}}
					{
						obj_t BgL_auxz00_14867;

						BgL_auxz00_14867 = STRUCT_REF(BgL_sz00_2547, (int) (((long) 1)));
						((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_oz00_2546))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_14867), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14871;

						BgL_auxz00_14871 = STRUCT_REF(BgL_sz00_2547, (int) (((long) 2)));
						((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_oz00_2546))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_14871), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14875;

						BgL_auxz00_14875 = STRUCT_REF(BgL_sz00_2547, (int) (((long) 3)));
						((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_oz00_2546))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_14875), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14879;

						BgL_auxz00_14879 = STRUCT_REF(BgL_sz00_2547, (int) (((long) 4)));
						((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_oz00_2546))->
								BgL_procz00) = ((obj_t) BgL_auxz00_14879), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14883;

						BgL_auxz00_14883 = STRUCT_REF(BgL_sz00_2547, (int) (((long) 5)));
						((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_oz00_2546))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_14883), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14887;

						BgL_auxz00_14887 = STRUCT_REF(BgL_sz00_2547, (int) (((long) 6)));
						((((BgL_z62iozd2readzd2errorz62_bglt) CREF(BgL_oz00_2546))->
								BgL_objz00) = ((obj_t) BgL_auxz00_14887), BUNSPEC);
					}
					BgL_auxz00_14861 = BgL_oz00_2546;
					return (obj_t) (BgL_auxz00_14861);
				}
			}
		}
	}



/* object->struct-&io-r2512 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2r2512z53zz__objectz00(obj_t
		BgL_envz00_8442, obj_t BgL_obj1509z00_8443)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 102 */
			{
				BgL_z62iozd2readzd2errorz62_bglt BgL_obj1509z00_2528;

				BgL_obj1509z00_2528 =
					(BgL_z62iozd2readzd2errorz62_bglt) (BgL_obj1509z00_8443);
				{	/* Llib/object.scm 102 */
					obj_t BgL_res1510z00_2531;

					BgL_res1510z00_2531 =
						make_struct(BGl_symbol4344z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 102 */
						int BgL_auxz00_14895;

						BgL_auxz00_14895 = (int) (((long) 0));
						STRUCT_SET(BgL_res1510z00_2531, BgL_auxz00_14895, BFALSE);
					}
					{	/* Llib/object.scm 102 */
						obj_t BgL_arg3386z00_2533;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14898;

							BgL_auxz00_14898 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1509z00_2528);
							BgL_arg3386z00_2533 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14898))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 102 */
							int BgL_auxz00_14901;

							BgL_auxz00_14901 = (int) (((long) 1));
							STRUCT_SET(BgL_res1510z00_2531, BgL_auxz00_14901,
								BgL_arg3386z00_2533);
					}}
					{	/* Llib/object.scm 102 */
						obj_t BgL_arg3388z00_2535;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14904;

							BgL_auxz00_14904 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1509z00_2528);
							BgL_arg3388z00_2535 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14904))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 102 */
							int BgL_auxz00_14907;

							BgL_auxz00_14907 = (int) (((long) 2));
							STRUCT_SET(BgL_res1510z00_2531, BgL_auxz00_14907,
								BgL_arg3388z00_2535);
					}}
					{	/* Llib/object.scm 102 */
						obj_t BgL_arg3390z00_2537;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14910;

							BgL_auxz00_14910 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1509z00_2528);
							BgL_arg3390z00_2537 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14910))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 102 */
							int BgL_auxz00_14913;

							BgL_auxz00_14913 = (int) (((long) 3));
							STRUCT_SET(BgL_res1510z00_2531, BgL_auxz00_14913,
								BgL_arg3390z00_2537);
					}}
					{	/* Llib/object.scm 102 */
						obj_t BgL_arg3392z00_2539;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14916;

							BgL_auxz00_14916 = (BgL_z62errorz62_bglt) (BgL_obj1509z00_2528);
							BgL_arg3392z00_2539 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14916))->BgL_procz00);
						}
						{	/* Llib/object.scm 102 */
							int BgL_auxz00_14919;

							BgL_auxz00_14919 = (int) (((long) 4));
							STRUCT_SET(BgL_res1510z00_2531, BgL_auxz00_14919,
								BgL_arg3392z00_2539);
					}}
					{	/* Llib/object.scm 102 */
						obj_t BgL_arg3394z00_2541;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14922;

							BgL_auxz00_14922 = (BgL_z62errorz62_bglt) (BgL_obj1509z00_2528);
							BgL_arg3394z00_2541 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14922))->BgL_msgz00);
						}
						{	/* Llib/object.scm 102 */
							int BgL_auxz00_14925;

							BgL_auxz00_14925 = (int) (((long) 5));
							STRUCT_SET(BgL_res1510z00_2531, BgL_auxz00_14925,
								BgL_arg3394z00_2541);
					}}
					{	/* Llib/object.scm 102 */
						obj_t BgL_arg3396z00_2543;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14928;

							BgL_auxz00_14928 = (BgL_z62errorz62_bglt) (BgL_obj1509z00_2528);
							BgL_arg3396z00_2543 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14928))->BgL_objz00);
						}
						{	/* Llib/object.scm 102 */
							int BgL_auxz00_14931;

							BgL_auxz00_14931 = (int) (((long) 6));
							STRUCT_SET(BgL_res1510z00_2531, BgL_auxz00_14931,
								BgL_arg3396z00_2543);
					}}
					return BgL_res1510z00_2531;
				}
			}
		}
	}



/* struct+object->objec2510 */
	obj_t BGl_structzb2objectzd2ze3objec2510z83zz__objectz00(obj_t
		BgL_envz00_8444, obj_t BgL_oz00_8445, obj_t BgL_sz00_8446)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			{
				BgL_z62iozd2writezd2errorz62_bglt BgL_oz00_2515;

				obj_t BgL_sz00_2516;

				{	/* Llib/object.scm 103 */
					BgL_z62iozd2writezd2errorz62_bglt BgL_auxz00_14935;

					BgL_oz00_2515 = (BgL_z62iozd2writezd2errorz62_bglt) (BgL_oz00_8445);
					BgL_sz00_2516 = BgL_sz00_8446;
					{	/* Llib/object.scm 103 */
						obj_t BgL_arg3383z00_2519;

						BgL_arg3383z00_2519 = STRUCT_REF(BgL_sz00_2516, (int) (((long) 0)));
						{	/* Llib/object.scm 103 */
							BgL_objectz00_bglt BgL_auxz00_14938;

							BgL_auxz00_14938 = (BgL_objectz00_bglt) (BgL_oz00_2515);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14938, BgL_arg3383z00_2519);
					}}
					{
						obj_t BgL_auxz00_14941;

						BgL_auxz00_14941 = STRUCT_REF(BgL_sz00_2516, (int) (((long) 1)));
						((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_oz00_2515))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_14941), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14945;

						BgL_auxz00_14945 = STRUCT_REF(BgL_sz00_2516, (int) (((long) 2)));
						((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_oz00_2515))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_14945), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14949;

						BgL_auxz00_14949 = STRUCT_REF(BgL_sz00_2516, (int) (((long) 3)));
						((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_oz00_2515))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_14949), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14953;

						BgL_auxz00_14953 = STRUCT_REF(BgL_sz00_2516, (int) (((long) 4)));
						((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_oz00_2515))->
								BgL_procz00) = ((obj_t) BgL_auxz00_14953), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14957;

						BgL_auxz00_14957 = STRUCT_REF(BgL_sz00_2516, (int) (((long) 5)));
						((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_oz00_2515))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_14957), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14961;

						BgL_auxz00_14961 = STRUCT_REF(BgL_sz00_2516, (int) (((long) 6)));
						((((BgL_z62iozd2writezd2errorz62_bglt) CREF(BgL_oz00_2515))->
								BgL_objz00) = ((obj_t) BgL_auxz00_14961), BUNSPEC);
					}
					BgL_auxz00_14935 = BgL_oz00_2515;
					return (obj_t) (BgL_auxz00_14935);
				}
			}
		}
	}



/* object->struct-&io-w2508 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2w2508z53zz__objectz00(obj_t
		BgL_envz00_8447, obj_t BgL_obj1571z00_8448)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 103 */
			{
				BgL_z62iozd2writezd2errorz62_bglt BgL_obj1571z00_2497;

				BgL_obj1571z00_2497 =
					(BgL_z62iozd2writezd2errorz62_bglt) (BgL_obj1571z00_8448);
				{	/* Llib/object.scm 103 */
					obj_t BgL_res1572z00_2500;

					BgL_res1572z00_2500 =
						make_struct(BGl_symbol4346z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 103 */
						int BgL_auxz00_14969;

						BgL_auxz00_14969 = (int) (((long) 0));
						STRUCT_SET(BgL_res1572z00_2500, BgL_auxz00_14969, BFALSE);
					}
					{	/* Llib/object.scm 103 */
						obj_t BgL_arg3371z00_2502;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14972;

							BgL_auxz00_14972 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1571z00_2497);
							BgL_arg3371z00_2502 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14972))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 103 */
							int BgL_auxz00_14975;

							BgL_auxz00_14975 = (int) (((long) 1));
							STRUCT_SET(BgL_res1572z00_2500, BgL_auxz00_14975,
								BgL_arg3371z00_2502);
					}}
					{	/* Llib/object.scm 103 */
						obj_t BgL_arg3373z00_2504;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14978;

							BgL_auxz00_14978 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1571z00_2497);
							BgL_arg3373z00_2504 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14978))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 103 */
							int BgL_auxz00_14981;

							BgL_auxz00_14981 = (int) (((long) 2));
							STRUCT_SET(BgL_res1572z00_2500, BgL_auxz00_14981,
								BgL_arg3373z00_2504);
					}}
					{	/* Llib/object.scm 103 */
						obj_t BgL_arg3375z00_2506;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14984;

							BgL_auxz00_14984 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1571z00_2497);
							BgL_arg3375z00_2506 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14984))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 103 */
							int BgL_auxz00_14987;

							BgL_auxz00_14987 = (int) (((long) 3));
							STRUCT_SET(BgL_res1572z00_2500, BgL_auxz00_14987,
								BgL_arg3375z00_2506);
					}}
					{	/* Llib/object.scm 103 */
						obj_t BgL_arg3377z00_2508;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14990;

							BgL_auxz00_14990 = (BgL_z62errorz62_bglt) (BgL_obj1571z00_2497);
							BgL_arg3377z00_2508 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14990))->BgL_procz00);
						}
						{	/* Llib/object.scm 103 */
							int BgL_auxz00_14993;

							BgL_auxz00_14993 = (int) (((long) 4));
							STRUCT_SET(BgL_res1572z00_2500, BgL_auxz00_14993,
								BgL_arg3377z00_2508);
					}}
					{	/* Llib/object.scm 103 */
						obj_t BgL_arg3379z00_2510;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14996;

							BgL_auxz00_14996 = (BgL_z62errorz62_bglt) (BgL_obj1571z00_2497);
							BgL_arg3379z00_2510 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14996))->BgL_msgz00);
						}
						{	/* Llib/object.scm 103 */
							int BgL_auxz00_14999;

							BgL_auxz00_14999 = (int) (((long) 5));
							STRUCT_SET(BgL_res1572z00_2500, BgL_auxz00_14999,
								BgL_arg3379z00_2510);
					}}
					{	/* Llib/object.scm 103 */
						obj_t BgL_arg3381z00_2512;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15002;

							BgL_auxz00_15002 = (BgL_z62errorz62_bglt) (BgL_obj1571z00_2497);
							BgL_arg3381z00_2512 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15002))->BgL_objz00);
						}
						{	/* Llib/object.scm 103 */
							int BgL_auxz00_15005;

							BgL_auxz00_15005 = (int) (((long) 6));
							STRUCT_SET(BgL_res1572z00_2500, BgL_auxz00_15005,
								BgL_arg3381z00_2512);
					}}
					return BgL_res1572z00_2500;
				}
			}
		}
	}



/* struct+object->objec2506 */
	obj_t BGl_structzb2objectzd2ze3objec2506z83zz__objectz00(obj_t
		BgL_envz00_8449, obj_t BgL_oz00_8450, obj_t BgL_sz00_8451)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			{
				BgL_z62iozd2closedzd2errorz62_bglt BgL_oz00_2484;

				obj_t BgL_sz00_2485;

				{	/* Llib/object.scm 104 */
					BgL_z62iozd2closedzd2errorz62_bglt BgL_auxz00_15009;

					BgL_oz00_2484 = (BgL_z62iozd2closedzd2errorz62_bglt) (BgL_oz00_8450);
					BgL_sz00_2485 = BgL_sz00_8451;
					{	/* Llib/object.scm 104 */
						obj_t BgL_arg3367z00_2488;

						BgL_arg3367z00_2488 = STRUCT_REF(BgL_sz00_2485, (int) (((long) 0)));
						{	/* Llib/object.scm 104 */
							BgL_objectz00_bglt BgL_auxz00_15012;

							BgL_auxz00_15012 = (BgL_objectz00_bglt) (BgL_oz00_2484);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15012, BgL_arg3367z00_2488);
					}}
					{
						obj_t BgL_auxz00_15015;

						BgL_auxz00_15015 = STRUCT_REF(BgL_sz00_2485, (int) (((long) 1)));
						((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_oz00_2484))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_15015), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15019;

						BgL_auxz00_15019 = STRUCT_REF(BgL_sz00_2485, (int) (((long) 2)));
						((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_oz00_2484))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_15019), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15023;

						BgL_auxz00_15023 = STRUCT_REF(BgL_sz00_2485, (int) (((long) 3)));
						((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_oz00_2484))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_15023), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15027;

						BgL_auxz00_15027 = STRUCT_REF(BgL_sz00_2485, (int) (((long) 4)));
						((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_oz00_2484))->
								BgL_procz00) = ((obj_t) BgL_auxz00_15027), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15031;

						BgL_auxz00_15031 = STRUCT_REF(BgL_sz00_2485, (int) (((long) 5)));
						((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_oz00_2484))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_15031), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15035;

						BgL_auxz00_15035 = STRUCT_REF(BgL_sz00_2485, (int) (((long) 6)));
						((((BgL_z62iozd2closedzd2errorz62_bglt) CREF(BgL_oz00_2484))->
								BgL_objz00) = ((obj_t) BgL_auxz00_15035), BUNSPEC);
					}
					BgL_auxz00_15009 = BgL_oz00_2484;
					return (obj_t) (BgL_auxz00_15009);
				}
			}
		}
	}



/* object->struct-&io-c2504 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2c2504z53zz__objectz00(obj_t
		BgL_envz00_8452, obj_t BgL_obj1633z00_8453)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 104 */
			{
				BgL_z62iozd2closedzd2errorz62_bglt BgL_obj1633z00_2466;

				BgL_obj1633z00_2466 =
					(BgL_z62iozd2closedzd2errorz62_bglt) (BgL_obj1633z00_8453);
				{	/* Llib/object.scm 104 */
					obj_t BgL_res1634z00_2469;

					BgL_res1634z00_2469 =
						make_struct(BGl_symbol4348z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 104 */
						int BgL_auxz00_15043;

						BgL_auxz00_15043 = (int) (((long) 0));
						STRUCT_SET(BgL_res1634z00_2469, BgL_auxz00_15043, BFALSE);
					}
					{	/* Llib/object.scm 104 */
						obj_t BgL_arg3355z00_2471;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15046;

							BgL_auxz00_15046 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1633z00_2466);
							BgL_arg3355z00_2471 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15046))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 104 */
							int BgL_auxz00_15049;

							BgL_auxz00_15049 = (int) (((long) 1));
							STRUCT_SET(BgL_res1634z00_2469, BgL_auxz00_15049,
								BgL_arg3355z00_2471);
					}}
					{	/* Llib/object.scm 104 */
						obj_t BgL_arg3357z00_2473;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15052;

							BgL_auxz00_15052 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1633z00_2466);
							BgL_arg3357z00_2473 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15052))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 104 */
							int BgL_auxz00_15055;

							BgL_auxz00_15055 = (int) (((long) 2));
							STRUCT_SET(BgL_res1634z00_2469, BgL_auxz00_15055,
								BgL_arg3357z00_2473);
					}}
					{	/* Llib/object.scm 104 */
						obj_t BgL_arg3359z00_2475;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15058;

							BgL_auxz00_15058 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1633z00_2466);
							BgL_arg3359z00_2475 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15058))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 104 */
							int BgL_auxz00_15061;

							BgL_auxz00_15061 = (int) (((long) 3));
							STRUCT_SET(BgL_res1634z00_2469, BgL_auxz00_15061,
								BgL_arg3359z00_2475);
					}}
					{	/* Llib/object.scm 104 */
						obj_t BgL_arg3361z00_2477;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15064;

							BgL_auxz00_15064 = (BgL_z62errorz62_bglt) (BgL_obj1633z00_2466);
							BgL_arg3361z00_2477 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15064))->BgL_procz00);
						}
						{	/* Llib/object.scm 104 */
							int BgL_auxz00_15067;

							BgL_auxz00_15067 = (int) (((long) 4));
							STRUCT_SET(BgL_res1634z00_2469, BgL_auxz00_15067,
								BgL_arg3361z00_2477);
					}}
					{	/* Llib/object.scm 104 */
						obj_t BgL_arg3363z00_2479;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15070;

							BgL_auxz00_15070 = (BgL_z62errorz62_bglt) (BgL_obj1633z00_2466);
							BgL_arg3363z00_2479 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15070))->BgL_msgz00);
						}
						{	/* Llib/object.scm 104 */
							int BgL_auxz00_15073;

							BgL_auxz00_15073 = (int) (((long) 5));
							STRUCT_SET(BgL_res1634z00_2469, BgL_auxz00_15073,
								BgL_arg3363z00_2479);
					}}
					{	/* Llib/object.scm 104 */
						obj_t BgL_arg3365z00_2481;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15076;

							BgL_auxz00_15076 = (BgL_z62errorz62_bglt) (BgL_obj1633z00_2466);
							BgL_arg3365z00_2481 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15076))->BgL_objz00);
						}
						{	/* Llib/object.scm 104 */
							int BgL_auxz00_15079;

							BgL_auxz00_15079 = (int) (((long) 6));
							STRUCT_SET(BgL_res1634z00_2469, BgL_auxz00_15079,
								BgL_arg3365z00_2481);
					}}
					return BgL_res1634z00_2469;
				}
			}
		}
	}



/* struct+object->objec2502 */
	obj_t BGl_structzb2objectzd2ze3objec2502z83zz__objectz00(obj_t
		BgL_envz00_8454, obj_t BgL_oz00_8455, obj_t BgL_sz00_8456)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			{
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_oz00_2453;

				obj_t BgL_sz00_2454;

				{	/* Llib/object.scm 105 */
					BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_auxz00_15083;

					BgL_oz00_2453 =
						(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt) (BgL_oz00_8455);
					BgL_sz00_2454 = BgL_sz00_8456;
					{	/* Llib/object.scm 105 */
						obj_t BgL_arg3352z00_2457;

						BgL_arg3352z00_2457 = STRUCT_REF(BgL_sz00_2454, (int) (((long) 0)));
						{	/* Llib/object.scm 105 */
							BgL_objectz00_bglt BgL_auxz00_15086;

							BgL_auxz00_15086 = (BgL_objectz00_bglt) (BgL_oz00_2453);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15086, BgL_arg3352z00_2457);
					}}
					{
						obj_t BgL_auxz00_15089;

						BgL_auxz00_15089 = STRUCT_REF(BgL_sz00_2454, (int) (((long) 1)));
						((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
									CREF(BgL_oz00_2453))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_15089), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15093;

						BgL_auxz00_15093 = STRUCT_REF(BgL_sz00_2454, (int) (((long) 2)));
						((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
									CREF(BgL_oz00_2453))->BgL_locationz00) =
							((obj_t) BgL_auxz00_15093), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15097;

						BgL_auxz00_15097 = STRUCT_REF(BgL_sz00_2454, (int) (((long) 3)));
						((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
									CREF(BgL_oz00_2453))->BgL_stackz00) =
							((obj_t) BgL_auxz00_15097), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15101;

						BgL_auxz00_15101 = STRUCT_REF(BgL_sz00_2454, (int) (((long) 4)));
						((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
									CREF(BgL_oz00_2453))->BgL_procz00) =
							((obj_t) BgL_auxz00_15101), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15105;

						BgL_auxz00_15105 = STRUCT_REF(BgL_sz00_2454, (int) (((long) 5)));
						((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
									CREF(BgL_oz00_2453))->BgL_msgz00) =
							((obj_t) BgL_auxz00_15105), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15109;

						BgL_auxz00_15109 = STRUCT_REF(BgL_sz00_2454, (int) (((long) 6)));
						((((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
									CREF(BgL_oz00_2453))->BgL_objz00) =
							((obj_t) BgL_auxz00_15109), BUNSPEC);
					}
					BgL_auxz00_15083 = BgL_oz00_2453;
					return (obj_t) (BgL_auxz00_15083);
				}
			}
		}
	}



/* object->struct-&io-f2500 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2f2500z53zz__objectz00(obj_t
		BgL_envz00_8457, obj_t BgL_obj1695z00_8458)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 105 */
			{
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_obj1695z00_2435;

				BgL_obj1695z00_2435 =
					(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
					(BgL_obj1695z00_8458);
				{	/* Llib/object.scm 105 */
					obj_t BgL_res1696z00_2438;

					BgL_res1696z00_2438 =
						make_struct(BGl_symbol4350z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 105 */
						int BgL_auxz00_15117;

						BgL_auxz00_15117 = (int) (((long) 0));
						STRUCT_SET(BgL_res1696z00_2438, BgL_auxz00_15117, BFALSE);
					}
					{	/* Llib/object.scm 105 */
						obj_t BgL_arg3339z00_2440;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15120;

							BgL_auxz00_15120 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1695z00_2435);
							BgL_arg3339z00_2440 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15120))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 105 */
							int BgL_auxz00_15123;

							BgL_auxz00_15123 = (int) (((long) 1));
							STRUCT_SET(BgL_res1696z00_2438, BgL_auxz00_15123,
								BgL_arg3339z00_2440);
					}}
					{	/* Llib/object.scm 105 */
						obj_t BgL_arg3341z00_2442;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15126;

							BgL_auxz00_15126 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1695z00_2435);
							BgL_arg3341z00_2442 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15126))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 105 */
							int BgL_auxz00_15129;

							BgL_auxz00_15129 = (int) (((long) 2));
							STRUCT_SET(BgL_res1696z00_2438, BgL_auxz00_15129,
								BgL_arg3341z00_2442);
					}}
					{	/* Llib/object.scm 105 */
						obj_t BgL_arg3343z00_2444;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15132;

							BgL_auxz00_15132 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1695z00_2435);
							BgL_arg3343z00_2444 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15132))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 105 */
							int BgL_auxz00_15135;

							BgL_auxz00_15135 = (int) (((long) 3));
							STRUCT_SET(BgL_res1696z00_2438, BgL_auxz00_15135,
								BgL_arg3343z00_2444);
					}}
					{	/* Llib/object.scm 105 */
						obj_t BgL_arg3346z00_2446;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15138;

							BgL_auxz00_15138 = (BgL_z62errorz62_bglt) (BgL_obj1695z00_2435);
							BgL_arg3346z00_2446 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15138))->BgL_procz00);
						}
						{	/* Llib/object.scm 105 */
							int BgL_auxz00_15141;

							BgL_auxz00_15141 = (int) (((long) 4));
							STRUCT_SET(BgL_res1696z00_2438, BgL_auxz00_15141,
								BgL_arg3346z00_2446);
					}}
					{	/* Llib/object.scm 105 */
						obj_t BgL_arg3348z00_2448;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15144;

							BgL_auxz00_15144 = (BgL_z62errorz62_bglt) (BgL_obj1695z00_2435);
							BgL_arg3348z00_2448 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15144))->BgL_msgz00);
						}
						{	/* Llib/object.scm 105 */
							int BgL_auxz00_15147;

							BgL_auxz00_15147 = (int) (((long) 5));
							STRUCT_SET(BgL_res1696z00_2438, BgL_auxz00_15147,
								BgL_arg3348z00_2448);
					}}
					{	/* Llib/object.scm 105 */
						obj_t BgL_arg3350z00_2450;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15150;

							BgL_auxz00_15150 = (BgL_z62errorz62_bglt) (BgL_obj1695z00_2435);
							BgL_arg3350z00_2450 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15150))->BgL_objz00);
						}
						{	/* Llib/object.scm 105 */
							int BgL_auxz00_15153;

							BgL_auxz00_15153 = (int) (((long) 6));
							STRUCT_SET(BgL_res1696z00_2438, BgL_auxz00_15153,
								BgL_arg3350z00_2450);
					}}
					return BgL_res1696z00_2438;
				}
			}
		}
	}



/* struct+object->objec2498 */
	obj_t BGl_structzb2objectzd2ze3objec2498z83zz__objectz00(obj_t
		BgL_envz00_8459, obj_t BgL_oz00_8460, obj_t BgL_sz00_8461)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			{
				BgL_z62iozd2parsezd2errorz62_bglt BgL_oz00_2422;

				obj_t BgL_sz00_2423;

				{	/* Llib/object.scm 106 */
					BgL_z62iozd2parsezd2errorz62_bglt BgL_auxz00_15157;

					BgL_oz00_2422 = (BgL_z62iozd2parsezd2errorz62_bglt) (BgL_oz00_8460);
					BgL_sz00_2423 = BgL_sz00_8461;
					{	/* Llib/object.scm 106 */
						obj_t BgL_arg3336z00_2426;

						BgL_arg3336z00_2426 = STRUCT_REF(BgL_sz00_2423, (int) (((long) 0)));
						{	/* Llib/object.scm 106 */
							BgL_objectz00_bglt BgL_auxz00_15160;

							BgL_auxz00_15160 = (BgL_objectz00_bglt) (BgL_oz00_2422);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15160, BgL_arg3336z00_2426);
					}}
					{
						obj_t BgL_auxz00_15163;

						BgL_auxz00_15163 = STRUCT_REF(BgL_sz00_2423, (int) (((long) 1)));
						((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_oz00_2422))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_15163), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15167;

						BgL_auxz00_15167 = STRUCT_REF(BgL_sz00_2423, (int) (((long) 2)));
						((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_oz00_2422))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_15167), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15171;

						BgL_auxz00_15171 = STRUCT_REF(BgL_sz00_2423, (int) (((long) 3)));
						((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_oz00_2422))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_15171), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15175;

						BgL_auxz00_15175 = STRUCT_REF(BgL_sz00_2423, (int) (((long) 4)));
						((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_oz00_2422))->
								BgL_procz00) = ((obj_t) BgL_auxz00_15175), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15179;

						BgL_auxz00_15179 = STRUCT_REF(BgL_sz00_2423, (int) (((long) 5)));
						((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_oz00_2422))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_15179), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15183;

						BgL_auxz00_15183 = STRUCT_REF(BgL_sz00_2423, (int) (((long) 6)));
						((((BgL_z62iozd2parsezd2errorz62_bglt) CREF(BgL_oz00_2422))->
								BgL_objz00) = ((obj_t) BgL_auxz00_15183), BUNSPEC);
					}
					BgL_auxz00_15157 = BgL_oz00_2422;
					return (obj_t) (BgL_auxz00_15157);
				}
			}
		}
	}



/* object->struct-&io-p2496 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2p2496z53zz__objectz00(obj_t
		BgL_envz00_8462, obj_t BgL_obj1758z00_8463)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 106 */
			{
				BgL_z62iozd2parsezd2errorz62_bglt BgL_obj1758z00_2404;

				BgL_obj1758z00_2404 =
					(BgL_z62iozd2parsezd2errorz62_bglt) (BgL_obj1758z00_8463);
				{	/* Llib/object.scm 106 */
					obj_t BgL_res1759z00_2407;

					BgL_res1759z00_2407 =
						make_struct(BGl_symbol4352z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 106 */
						int BgL_auxz00_15191;

						BgL_auxz00_15191 = (int) (((long) 0));
						STRUCT_SET(BgL_res1759z00_2407, BgL_auxz00_15191, BFALSE);
					}
					{	/* Llib/object.scm 106 */
						obj_t BgL_arg3324z00_2409;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15194;

							BgL_auxz00_15194 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1758z00_2404);
							BgL_arg3324z00_2409 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15194))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 106 */
							int BgL_auxz00_15197;

							BgL_auxz00_15197 = (int) (((long) 1));
							STRUCT_SET(BgL_res1759z00_2407, BgL_auxz00_15197,
								BgL_arg3324z00_2409);
					}}
					{	/* Llib/object.scm 106 */
						obj_t BgL_arg3326z00_2411;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15200;

							BgL_auxz00_15200 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1758z00_2404);
							BgL_arg3326z00_2411 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15200))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 106 */
							int BgL_auxz00_15203;

							BgL_auxz00_15203 = (int) (((long) 2));
							STRUCT_SET(BgL_res1759z00_2407, BgL_auxz00_15203,
								BgL_arg3326z00_2411);
					}}
					{	/* Llib/object.scm 106 */
						obj_t BgL_arg3328z00_2413;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15206;

							BgL_auxz00_15206 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1758z00_2404);
							BgL_arg3328z00_2413 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15206))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 106 */
							int BgL_auxz00_15209;

							BgL_auxz00_15209 = (int) (((long) 3));
							STRUCT_SET(BgL_res1759z00_2407, BgL_auxz00_15209,
								BgL_arg3328z00_2413);
					}}
					{	/* Llib/object.scm 106 */
						obj_t BgL_arg3330z00_2415;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15212;

							BgL_auxz00_15212 = (BgL_z62errorz62_bglt) (BgL_obj1758z00_2404);
							BgL_arg3330z00_2415 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15212))->BgL_procz00);
						}
						{	/* Llib/object.scm 106 */
							int BgL_auxz00_15215;

							BgL_auxz00_15215 = (int) (((long) 4));
							STRUCT_SET(BgL_res1759z00_2407, BgL_auxz00_15215,
								BgL_arg3330z00_2415);
					}}
					{	/* Llib/object.scm 106 */
						obj_t BgL_arg3332z00_2417;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15218;

							BgL_auxz00_15218 = (BgL_z62errorz62_bglt) (BgL_obj1758z00_2404);
							BgL_arg3332z00_2417 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15218))->BgL_msgz00);
						}
						{	/* Llib/object.scm 106 */
							int BgL_auxz00_15221;

							BgL_auxz00_15221 = (int) (((long) 5));
							STRUCT_SET(BgL_res1759z00_2407, BgL_auxz00_15221,
								BgL_arg3332z00_2417);
					}}
					{	/* Llib/object.scm 106 */
						obj_t BgL_arg3334z00_2419;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15224;

							BgL_auxz00_15224 = (BgL_z62errorz62_bglt) (BgL_obj1758z00_2404);
							BgL_arg3334z00_2419 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15224))->BgL_objz00);
						}
						{	/* Llib/object.scm 106 */
							int BgL_auxz00_15227;

							BgL_auxz00_15227 = (int) (((long) 6));
							STRUCT_SET(BgL_res1759z00_2407, BgL_auxz00_15227,
								BgL_arg3334z00_2419);
					}}
					return BgL_res1759z00_2407;
				}
			}
		}
	}



/* struct+object->objec2494 */
	obj_t BGl_structzb2objectzd2ze3objec2494z83zz__objectz00(obj_t
		BgL_envz00_8464, obj_t BgL_oz00_8465, obj_t BgL_sz00_8466)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			{
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_oz00_2391;

				obj_t BgL_sz00_2392;

				{	/* Llib/object.scm 107 */
					BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_auxz00_15231;

					BgL_oz00_2391 =
						(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt) (BgL_oz00_8465);
					BgL_sz00_2392 = BgL_sz00_8466;
					{	/* Llib/object.scm 107 */
						obj_t BgL_arg3319z00_2395;

						BgL_arg3319z00_2395 = STRUCT_REF(BgL_sz00_2392, (int) (((long) 0)));
						{	/* Llib/object.scm 107 */
							BgL_objectz00_bglt BgL_auxz00_15234;

							BgL_auxz00_15234 = (BgL_objectz00_bglt) (BgL_oz00_2391);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15234, BgL_arg3319z00_2395);
					}}
					{
						obj_t BgL_auxz00_15237;

						BgL_auxz00_15237 = STRUCT_REF(BgL_sz00_2392, (int) (((long) 1)));
						((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
									CREF(BgL_oz00_2391))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_15237), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15241;

						BgL_auxz00_15241 = STRUCT_REF(BgL_sz00_2392, (int) (((long) 2)));
						((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
									CREF(BgL_oz00_2391))->BgL_locationz00) =
							((obj_t) BgL_auxz00_15241), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15245;

						BgL_auxz00_15245 = STRUCT_REF(BgL_sz00_2392, (int) (((long) 3)));
						((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
									CREF(BgL_oz00_2391))->BgL_stackz00) =
							((obj_t) BgL_auxz00_15245), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15249;

						BgL_auxz00_15249 = STRUCT_REF(BgL_sz00_2392, (int) (((long) 4)));
						((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
									CREF(BgL_oz00_2391))->BgL_procz00) =
							((obj_t) BgL_auxz00_15249), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15253;

						BgL_auxz00_15253 = STRUCT_REF(BgL_sz00_2392, (int) (((long) 5)));
						((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
									CREF(BgL_oz00_2391))->BgL_msgz00) =
							((obj_t) BgL_auxz00_15253), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15257;

						BgL_auxz00_15257 = STRUCT_REF(BgL_sz00_2392, (int) (((long) 6)));
						((((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
									CREF(BgL_oz00_2391))->BgL_objz00) =
							((obj_t) BgL_auxz00_15257), BUNSPEC);
					}
					BgL_auxz00_15231 = BgL_oz00_2391;
					return (obj_t) (BgL_auxz00_15231);
				}
			}
		}
	}



/* object->struct-&io-u2492 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2u2492z53zz__objectz00(obj_t
		BgL_envz00_8467, obj_t BgL_obj1820z00_8468)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 107 */
			{
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_obj1820z00_2373;

				BgL_obj1820z00_2373 =
					(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt) (BgL_obj1820z00_8468);
				{	/* Llib/object.scm 107 */
					obj_t BgL_res1821z00_2376;

					BgL_res1821z00_2376 =
						make_struct(BGl_symbol4354z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 107 */
						int BgL_auxz00_15265;

						BgL_auxz00_15265 = (int) (((long) 0));
						STRUCT_SET(BgL_res1821z00_2376, BgL_auxz00_15265, BFALSE);
					}
					{	/* Llib/object.scm 107 */
						obj_t BgL_arg3307z00_2378;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15268;

							BgL_auxz00_15268 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1820z00_2373);
							BgL_arg3307z00_2378 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15268))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 107 */
							int BgL_auxz00_15271;

							BgL_auxz00_15271 = (int) (((long) 1));
							STRUCT_SET(BgL_res1821z00_2376, BgL_auxz00_15271,
								BgL_arg3307z00_2378);
					}}
					{	/* Llib/object.scm 107 */
						obj_t BgL_arg3309z00_2380;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15274;

							BgL_auxz00_15274 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1820z00_2373);
							BgL_arg3309z00_2380 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15274))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 107 */
							int BgL_auxz00_15277;

							BgL_auxz00_15277 = (int) (((long) 2));
							STRUCT_SET(BgL_res1821z00_2376, BgL_auxz00_15277,
								BgL_arg3309z00_2380);
					}}
					{	/* Llib/object.scm 107 */
						obj_t BgL_arg3311z00_2382;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15280;

							BgL_auxz00_15280 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1820z00_2373);
							BgL_arg3311z00_2382 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15280))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 107 */
							int BgL_auxz00_15283;

							BgL_auxz00_15283 = (int) (((long) 3));
							STRUCT_SET(BgL_res1821z00_2376, BgL_auxz00_15283,
								BgL_arg3311z00_2382);
					}}
					{	/* Llib/object.scm 107 */
						obj_t BgL_arg3313z00_2384;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15286;

							BgL_auxz00_15286 = (BgL_z62errorz62_bglt) (BgL_obj1820z00_2373);
							BgL_arg3313z00_2384 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15286))->BgL_procz00);
						}
						{	/* Llib/object.scm 107 */
							int BgL_auxz00_15289;

							BgL_auxz00_15289 = (int) (((long) 4));
							STRUCT_SET(BgL_res1821z00_2376, BgL_auxz00_15289,
								BgL_arg3313z00_2384);
					}}
					{	/* Llib/object.scm 107 */
						obj_t BgL_arg3315z00_2386;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15292;

							BgL_auxz00_15292 = (BgL_z62errorz62_bglt) (BgL_obj1820z00_2373);
							BgL_arg3315z00_2386 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15292))->BgL_msgz00);
						}
						{	/* Llib/object.scm 107 */
							int BgL_auxz00_15295;

							BgL_auxz00_15295 = (int) (((long) 5));
							STRUCT_SET(BgL_res1821z00_2376, BgL_auxz00_15295,
								BgL_arg3315z00_2386);
					}}
					{	/* Llib/object.scm 107 */
						obj_t BgL_arg3317z00_2388;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15298;

							BgL_auxz00_15298 = (BgL_z62errorz62_bglt) (BgL_obj1820z00_2373);
							BgL_arg3317z00_2388 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15298))->BgL_objz00);
						}
						{	/* Llib/object.scm 107 */
							int BgL_auxz00_15301;

							BgL_auxz00_15301 = (int) (((long) 6));
							STRUCT_SET(BgL_res1821z00_2376, BgL_auxz00_15301,
								BgL_arg3317z00_2388);
					}}
					return BgL_res1821z00_2376;
				}
			}
		}
	}



/* struct+object->objec2490 */
	obj_t BGl_structzb2objectzd2ze3objec2490z83zz__objectz00(obj_t
		BgL_envz00_8469, obj_t BgL_oz00_8470, obj_t BgL_sz00_8471)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			{
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_oz00_2360;

				obj_t BgL_sz00_2361;

				{	/* Llib/object.scm 108 */
					BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_auxz00_15305;

					BgL_oz00_2360 =
						(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt) (BgL_oz00_8470);
					BgL_sz00_2361 = BgL_sz00_8471;
					{	/* Llib/object.scm 108 */
						obj_t BgL_arg3304z00_2364;

						BgL_arg3304z00_2364 = STRUCT_REF(BgL_sz00_2361, (int) (((long) 0)));
						{	/* Llib/object.scm 108 */
							BgL_objectz00_bglt BgL_auxz00_15308;

							BgL_auxz00_15308 = (BgL_objectz00_bglt) (BgL_oz00_2360);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15308, BgL_arg3304z00_2364);
					}}
					{
						obj_t BgL_auxz00_15311;

						BgL_auxz00_15311 = STRUCT_REF(BgL_sz00_2361, (int) (((long) 1)));
						((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
									CREF(BgL_oz00_2360))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_15311), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15315;

						BgL_auxz00_15315 = STRUCT_REF(BgL_sz00_2361, (int) (((long) 2)));
						((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
									CREF(BgL_oz00_2360))->BgL_locationz00) =
							((obj_t) BgL_auxz00_15315), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15319;

						BgL_auxz00_15319 = STRUCT_REF(BgL_sz00_2361, (int) (((long) 3)));
						((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
									CREF(BgL_oz00_2360))->BgL_stackz00) =
							((obj_t) BgL_auxz00_15319), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15323;

						BgL_auxz00_15323 = STRUCT_REF(BgL_sz00_2361, (int) (((long) 4)));
						((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
									CREF(BgL_oz00_2360))->BgL_procz00) =
							((obj_t) BgL_auxz00_15323), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15327;

						BgL_auxz00_15327 = STRUCT_REF(BgL_sz00_2361, (int) (((long) 5)));
						((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
									CREF(BgL_oz00_2360))->BgL_msgz00) =
							((obj_t) BgL_auxz00_15327), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15331;

						BgL_auxz00_15331 = STRUCT_REF(BgL_sz00_2361, (int) (((long) 6)));
						((((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
									CREF(BgL_oz00_2360))->BgL_objz00) =
							((obj_t) BgL_auxz00_15331), BUNSPEC);
					}
					BgL_auxz00_15305 = BgL_oz00_2360;
					return (obj_t) (BgL_auxz00_15305);
				}
			}
		}
	}



/* object->struct-&io-m2488 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2m2488z53zz__objectz00(obj_t
		BgL_envz00_8472, obj_t BgL_obj1882z00_8473)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 108 */
			{
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_obj1882z00_2342;

				BgL_obj1882z00_2342 =
					(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt) (BgL_obj1882z00_8473);
				{	/* Llib/object.scm 108 */
					obj_t BgL_res1883z00_2345;

					BgL_res1883z00_2345 =
						make_struct(BGl_symbol4356z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 108 */
						int BgL_auxz00_15339;

						BgL_auxz00_15339 = (int) (((long) 0));
						STRUCT_SET(BgL_res1883z00_2345, BgL_auxz00_15339, BFALSE);
					}
					{	/* Llib/object.scm 108 */
						obj_t BgL_arg3292z00_2347;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15342;

							BgL_auxz00_15342 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1882z00_2342);
							BgL_arg3292z00_2347 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15342))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 108 */
							int BgL_auxz00_15345;

							BgL_auxz00_15345 = (int) (((long) 1));
							STRUCT_SET(BgL_res1883z00_2345, BgL_auxz00_15345,
								BgL_arg3292z00_2347);
					}}
					{	/* Llib/object.scm 108 */
						obj_t BgL_arg3294z00_2349;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15348;

							BgL_auxz00_15348 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1882z00_2342);
							BgL_arg3294z00_2349 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15348))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 108 */
							int BgL_auxz00_15351;

							BgL_auxz00_15351 = (int) (((long) 2));
							STRUCT_SET(BgL_res1883z00_2345, BgL_auxz00_15351,
								BgL_arg3294z00_2349);
					}}
					{	/* Llib/object.scm 108 */
						obj_t BgL_arg3296z00_2351;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15354;

							BgL_auxz00_15354 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1882z00_2342);
							BgL_arg3296z00_2351 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15354))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 108 */
							int BgL_auxz00_15357;

							BgL_auxz00_15357 = (int) (((long) 3));
							STRUCT_SET(BgL_res1883z00_2345, BgL_auxz00_15357,
								BgL_arg3296z00_2351);
					}}
					{	/* Llib/object.scm 108 */
						obj_t BgL_arg3298z00_2353;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15360;

							BgL_auxz00_15360 = (BgL_z62errorz62_bglt) (BgL_obj1882z00_2342);
							BgL_arg3298z00_2353 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15360))->BgL_procz00);
						}
						{	/* Llib/object.scm 108 */
							int BgL_auxz00_15363;

							BgL_auxz00_15363 = (int) (((long) 4));
							STRUCT_SET(BgL_res1883z00_2345, BgL_auxz00_15363,
								BgL_arg3298z00_2353);
					}}
					{	/* Llib/object.scm 108 */
						obj_t BgL_arg3300z00_2355;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15366;

							BgL_auxz00_15366 = (BgL_z62errorz62_bglt) (BgL_obj1882z00_2342);
							BgL_arg3300z00_2355 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15366))->BgL_msgz00);
						}
						{	/* Llib/object.scm 108 */
							int BgL_auxz00_15369;

							BgL_auxz00_15369 = (int) (((long) 5));
							STRUCT_SET(BgL_res1883z00_2345, BgL_auxz00_15369,
								BgL_arg3300z00_2355);
					}}
					{	/* Llib/object.scm 108 */
						obj_t BgL_arg3302z00_2357;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15372;

							BgL_auxz00_15372 = (BgL_z62errorz62_bglt) (BgL_obj1882z00_2342);
							BgL_arg3302z00_2357 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15372))->BgL_objz00);
						}
						{	/* Llib/object.scm 108 */
							int BgL_auxz00_15375;

							BgL_auxz00_15375 = (int) (((long) 6));
							STRUCT_SET(BgL_res1883z00_2345, BgL_auxz00_15375,
								BgL_arg3302z00_2357);
					}}
					return BgL_res1883z00_2345;
				}
			}
		}
	}



/* struct+object->objec2486 */
	obj_t BGl_structzb2objectzd2ze3objec2486z83zz__objectz00(obj_t
		BgL_envz00_8474, obj_t BgL_oz00_8475, obj_t BgL_sz00_8476)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			{
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_oz00_2329;

				obj_t BgL_sz00_2330;

				{	/* Llib/object.scm 109 */
					BgL_z62iozd2sigpipezd2errorz62_bglt BgL_auxz00_15379;

					BgL_oz00_2329 = (BgL_z62iozd2sigpipezd2errorz62_bglt) (BgL_oz00_8475);
					BgL_sz00_2330 = BgL_sz00_8476;
					{	/* Llib/object.scm 109 */
						obj_t BgL_arg3289z00_2333;

						BgL_arg3289z00_2333 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 0)));
						{	/* Llib/object.scm 109 */
							BgL_objectz00_bglt BgL_auxz00_15382;

							BgL_auxz00_15382 = (BgL_objectz00_bglt) (BgL_oz00_2329);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15382, BgL_arg3289z00_2333);
					}}
					{
						obj_t BgL_auxz00_15385;

						BgL_auxz00_15385 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 1)));
						((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_oz00_2329))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_15385), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15389;

						BgL_auxz00_15389 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 2)));
						((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_oz00_2329))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_15389), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15393;

						BgL_auxz00_15393 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 3)));
						((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_oz00_2329))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_15393), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15397;

						BgL_auxz00_15397 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 4)));
						((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_oz00_2329))->
								BgL_procz00) = ((obj_t) BgL_auxz00_15397), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15401;

						BgL_auxz00_15401 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 5)));
						((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_oz00_2329))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_15401), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15405;

						BgL_auxz00_15405 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 6)));
						((((BgL_z62iozd2sigpipezd2errorz62_bglt) CREF(BgL_oz00_2329))->
								BgL_objz00) = ((obj_t) BgL_auxz00_15405), BUNSPEC);
					}
					BgL_auxz00_15379 = BgL_oz00_2329;
					return (obj_t) (BgL_auxz00_15379);
				}
			}
		}
	}



/* object->struct-&io-s2484 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2s2484z53zz__objectz00(obj_t
		BgL_envz00_8477, obj_t BgL_obj1944z00_8478)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 109 */
			{
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_obj1944z00_2311;

				BgL_obj1944z00_2311 =
					(BgL_z62iozd2sigpipezd2errorz62_bglt) (BgL_obj1944z00_8478);
				{	/* Llib/object.scm 109 */
					obj_t BgL_res1945z00_2314;

					BgL_res1945z00_2314 =
						make_struct(BGl_symbol4358z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 109 */
						int BgL_auxz00_15413;

						BgL_auxz00_15413 = (int) (((long) 0));
						STRUCT_SET(BgL_res1945z00_2314, BgL_auxz00_15413, BFALSE);
					}
					{	/* Llib/object.scm 109 */
						obj_t BgL_arg3277z00_2316;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15416;

							BgL_auxz00_15416 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1944z00_2311);
							BgL_arg3277z00_2316 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15416))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 109 */
							int BgL_auxz00_15419;

							BgL_auxz00_15419 = (int) (((long) 1));
							STRUCT_SET(BgL_res1945z00_2314, BgL_auxz00_15419,
								BgL_arg3277z00_2316);
					}}
					{	/* Llib/object.scm 109 */
						obj_t BgL_arg3279z00_2318;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15422;

							BgL_auxz00_15422 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1944z00_2311);
							BgL_arg3279z00_2318 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15422))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 109 */
							int BgL_auxz00_15425;

							BgL_auxz00_15425 = (int) (((long) 2));
							STRUCT_SET(BgL_res1945z00_2314, BgL_auxz00_15425,
								BgL_arg3279z00_2318);
					}}
					{	/* Llib/object.scm 109 */
						obj_t BgL_arg3281z00_2320;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15428;

							BgL_auxz00_15428 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1944z00_2311);
							BgL_arg3281z00_2320 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15428))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 109 */
							int BgL_auxz00_15431;

							BgL_auxz00_15431 = (int) (((long) 3));
							STRUCT_SET(BgL_res1945z00_2314, BgL_auxz00_15431,
								BgL_arg3281z00_2320);
					}}
					{	/* Llib/object.scm 109 */
						obj_t BgL_arg3283z00_2322;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15434;

							BgL_auxz00_15434 = (BgL_z62errorz62_bglt) (BgL_obj1944z00_2311);
							BgL_arg3283z00_2322 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15434))->BgL_procz00);
						}
						{	/* Llib/object.scm 109 */
							int BgL_auxz00_15437;

							BgL_auxz00_15437 = (int) (((long) 4));
							STRUCT_SET(BgL_res1945z00_2314, BgL_auxz00_15437,
								BgL_arg3283z00_2322);
					}}
					{	/* Llib/object.scm 109 */
						obj_t BgL_arg3285z00_2324;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15440;

							BgL_auxz00_15440 = (BgL_z62errorz62_bglt) (BgL_obj1944z00_2311);
							BgL_arg3285z00_2324 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15440))->BgL_msgz00);
						}
						{	/* Llib/object.scm 109 */
							int BgL_auxz00_15443;

							BgL_auxz00_15443 = (int) (((long) 5));
							STRUCT_SET(BgL_res1945z00_2314, BgL_auxz00_15443,
								BgL_arg3285z00_2324);
					}}
					{	/* Llib/object.scm 109 */
						obj_t BgL_arg3287z00_2326;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15446;

							BgL_auxz00_15446 = (BgL_z62errorz62_bglt) (BgL_obj1944z00_2311);
							BgL_arg3287z00_2326 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15446))->BgL_objz00);
						}
						{	/* Llib/object.scm 109 */
							int BgL_auxz00_15449;

							BgL_auxz00_15449 = (int) (((long) 6));
							STRUCT_SET(BgL_res1945z00_2314, BgL_auxz00_15449,
								BgL_arg3287z00_2326);
					}}
					return BgL_res1945z00_2314;
				}
			}
		}
	}



/* struct+object->objec2482 */
	obj_t BGl_structzb2objectzd2ze3objec2482z83zz__objectz00(obj_t
		BgL_envz00_8479, obj_t BgL_oz00_8480, obj_t BgL_sz00_8481)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			{
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_oz00_2298;

				obj_t BgL_sz00_2299;

				{	/* Llib/object.scm 110 */
					BgL_z62iozd2timeoutzd2errorz62_bglt BgL_auxz00_15453;

					BgL_oz00_2298 = (BgL_z62iozd2timeoutzd2errorz62_bglt) (BgL_oz00_8480);
					BgL_sz00_2299 = BgL_sz00_8481;
					{	/* Llib/object.scm 110 */
						obj_t BgL_arg3274z00_2302;

						BgL_arg3274z00_2302 = STRUCT_REF(BgL_sz00_2299, (int) (((long) 0)));
						{	/* Llib/object.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_15456;

							BgL_auxz00_15456 = (BgL_objectz00_bglt) (BgL_oz00_2298);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15456, BgL_arg3274z00_2302);
					}}
					{
						obj_t BgL_auxz00_15459;

						BgL_auxz00_15459 = STRUCT_REF(BgL_sz00_2299, (int) (((long) 1)));
						((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_oz00_2298))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_15459), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15463;

						BgL_auxz00_15463 = STRUCT_REF(BgL_sz00_2299, (int) (((long) 2)));
						((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_oz00_2298))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_15463), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15467;

						BgL_auxz00_15467 = STRUCT_REF(BgL_sz00_2299, (int) (((long) 3)));
						((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_oz00_2298))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_15467), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15471;

						BgL_auxz00_15471 = STRUCT_REF(BgL_sz00_2299, (int) (((long) 4)));
						((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_oz00_2298))->
								BgL_procz00) = ((obj_t) BgL_auxz00_15471), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15475;

						BgL_auxz00_15475 = STRUCT_REF(BgL_sz00_2299, (int) (((long) 5)));
						((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_oz00_2298))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_15475), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15479;

						BgL_auxz00_15479 = STRUCT_REF(BgL_sz00_2299, (int) (((long) 6)));
						((((BgL_z62iozd2timeoutzd2errorz62_bglt) CREF(BgL_oz00_2298))->
								BgL_objz00) = ((obj_t) BgL_auxz00_15479), BUNSPEC);
					}
					BgL_auxz00_15453 = BgL_oz00_2298;
					return (obj_t) (BgL_auxz00_15453);
				}
			}
		}
	}



/* object->struct-&io-t2480 */
	obj_t BGl_objectzd2ze3structzd2z62iozd2t2480z53zz__objectz00(obj_t
		BgL_envz00_8482, obj_t BgL_obj2006z00_8483)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 110 */
			{
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_obj2006z00_2280;

				BgL_obj2006z00_2280 =
					(BgL_z62iozd2timeoutzd2errorz62_bglt) (BgL_obj2006z00_8483);
				{	/* Llib/object.scm 110 */
					obj_t BgL_res2007z00_2283;

					BgL_res2007z00_2283 =
						make_struct(BGl_symbol4360z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 110 */
						int BgL_auxz00_15487;

						BgL_auxz00_15487 = (int) (((long) 0));
						STRUCT_SET(BgL_res2007z00_2283, BgL_auxz00_15487, BFALSE);
					}
					{	/* Llib/object.scm 110 */
						obj_t BgL_arg3262z00_2285;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15490;

							BgL_auxz00_15490 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2006z00_2280);
							BgL_arg3262z00_2285 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15490))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 110 */
							int BgL_auxz00_15493;

							BgL_auxz00_15493 = (int) (((long) 1));
							STRUCT_SET(BgL_res2007z00_2283, BgL_auxz00_15493,
								BgL_arg3262z00_2285);
					}}
					{	/* Llib/object.scm 110 */
						obj_t BgL_arg3264z00_2287;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15496;

							BgL_auxz00_15496 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2006z00_2280);
							BgL_arg3264z00_2287 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15496))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 110 */
							int BgL_auxz00_15499;

							BgL_auxz00_15499 = (int) (((long) 2));
							STRUCT_SET(BgL_res2007z00_2283, BgL_auxz00_15499,
								BgL_arg3264z00_2287);
					}}
					{	/* Llib/object.scm 110 */
						obj_t BgL_arg3266z00_2289;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15502;

							BgL_auxz00_15502 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2006z00_2280);
							BgL_arg3266z00_2289 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15502))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 110 */
							int BgL_auxz00_15505;

							BgL_auxz00_15505 = (int) (((long) 3));
							STRUCT_SET(BgL_res2007z00_2283, BgL_auxz00_15505,
								BgL_arg3266z00_2289);
					}}
					{	/* Llib/object.scm 110 */
						obj_t BgL_arg3268z00_2291;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15508;

							BgL_auxz00_15508 = (BgL_z62errorz62_bglt) (BgL_obj2006z00_2280);
							BgL_arg3268z00_2291 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15508))->BgL_procz00);
						}
						{	/* Llib/object.scm 110 */
							int BgL_auxz00_15511;

							BgL_auxz00_15511 = (int) (((long) 4));
							STRUCT_SET(BgL_res2007z00_2283, BgL_auxz00_15511,
								BgL_arg3268z00_2291);
					}}
					{	/* Llib/object.scm 110 */
						obj_t BgL_arg3270z00_2293;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15514;

							BgL_auxz00_15514 = (BgL_z62errorz62_bglt) (BgL_obj2006z00_2280);
							BgL_arg3270z00_2293 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15514))->BgL_msgz00);
						}
						{	/* Llib/object.scm 110 */
							int BgL_auxz00_15517;

							BgL_auxz00_15517 = (int) (((long) 5));
							STRUCT_SET(BgL_res2007z00_2283, BgL_auxz00_15517,
								BgL_arg3270z00_2293);
					}}
					{	/* Llib/object.scm 110 */
						obj_t BgL_arg3272z00_2295;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15520;

							BgL_auxz00_15520 = (BgL_z62errorz62_bglt) (BgL_obj2006z00_2280);
							BgL_arg3272z00_2295 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15520))->BgL_objz00);
						}
						{	/* Llib/object.scm 110 */
							int BgL_auxz00_15523;

							BgL_auxz00_15523 = (int) (((long) 6));
							STRUCT_SET(BgL_res2007z00_2283, BgL_auxz00_15523,
								BgL_arg3272z00_2295);
					}}
					return BgL_res2007z00_2283;
				}
			}
		}
	}



/* struct+object->objec2478 */
	obj_t BGl_structzb2objectzd2ze3objec2478z83zz__objectz00(obj_t
		BgL_envz00_8484, obj_t BgL_oz00_8485, obj_t BgL_sz00_8486)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			{
				BgL_z62processzd2exceptionzb0_bglt BgL_oz00_2267;

				obj_t BgL_sz00_2268;

				{	/* Llib/object.scm 112 */
					BgL_z62processzd2exceptionzb0_bglt BgL_auxz00_15527;

					BgL_oz00_2267 = (BgL_z62processzd2exceptionzb0_bglt) (BgL_oz00_8485);
					BgL_sz00_2268 = BgL_sz00_8486;
					{	/* Llib/object.scm 112 */
						obj_t BgL_arg3259z00_2271;

						BgL_arg3259z00_2271 = STRUCT_REF(BgL_sz00_2268, (int) (((long) 0)));
						{	/* Llib/object.scm 112 */
							BgL_objectz00_bglt BgL_auxz00_15530;

							BgL_auxz00_15530 = (BgL_objectz00_bglt) (BgL_oz00_2267);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15530, BgL_arg3259z00_2271);
					}}
					{
						obj_t BgL_auxz00_15533;

						BgL_auxz00_15533 = STRUCT_REF(BgL_sz00_2268, (int) (((long) 1)));
						((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_oz00_2267))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_15533), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15537;

						BgL_auxz00_15537 = STRUCT_REF(BgL_sz00_2268, (int) (((long) 2)));
						((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_oz00_2267))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_15537), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15541;

						BgL_auxz00_15541 = STRUCT_REF(BgL_sz00_2268, (int) (((long) 3)));
						((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_oz00_2267))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_15541), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15545;

						BgL_auxz00_15545 = STRUCT_REF(BgL_sz00_2268, (int) (((long) 4)));
						((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_oz00_2267))->
								BgL_procz00) = ((obj_t) BgL_auxz00_15545), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15549;

						BgL_auxz00_15549 = STRUCT_REF(BgL_sz00_2268, (int) (((long) 5)));
						((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_oz00_2267))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_15549), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15553;

						BgL_auxz00_15553 = STRUCT_REF(BgL_sz00_2268, (int) (((long) 6)));
						((((BgL_z62processzd2exceptionzb0_bglt) CREF(BgL_oz00_2267))->
								BgL_objz00) = ((obj_t) BgL_auxz00_15553), BUNSPEC);
					}
					BgL_auxz00_15527 = BgL_oz00_2267;
					return (obj_t) (BgL_auxz00_15527);
				}
			}
		}
	}



/* object->struct-&proc2476 */
	obj_t BGl_objectzd2ze3structzd2z62proc2476z81zz__objectz00(obj_t
		BgL_envz00_8487, obj_t BgL_obj2068z00_8488)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 112 */
			{
				BgL_z62processzd2exceptionzb0_bglt BgL_obj2068z00_2249;

				BgL_obj2068z00_2249 =
					(BgL_z62processzd2exceptionzb0_bglt) (BgL_obj2068z00_8488);
				{	/* Llib/object.scm 112 */
					obj_t BgL_res2069z00_2252;

					BgL_res2069z00_2252 =
						make_struct(BGl_symbol4362z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 112 */
						int BgL_auxz00_15561;

						BgL_auxz00_15561 = (int) (((long) 0));
						STRUCT_SET(BgL_res2069z00_2252, BgL_auxz00_15561, BFALSE);
					}
					{	/* Llib/object.scm 112 */
						obj_t BgL_arg3247z00_2254;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15564;

							BgL_auxz00_15564 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2068z00_2249);
							BgL_arg3247z00_2254 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15564))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 112 */
							int BgL_auxz00_15567;

							BgL_auxz00_15567 = (int) (((long) 1));
							STRUCT_SET(BgL_res2069z00_2252, BgL_auxz00_15567,
								BgL_arg3247z00_2254);
					}}
					{	/* Llib/object.scm 112 */
						obj_t BgL_arg3249z00_2256;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15570;

							BgL_auxz00_15570 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2068z00_2249);
							BgL_arg3249z00_2256 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15570))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 112 */
							int BgL_auxz00_15573;

							BgL_auxz00_15573 = (int) (((long) 2));
							STRUCT_SET(BgL_res2069z00_2252, BgL_auxz00_15573,
								BgL_arg3249z00_2256);
					}}
					{	/* Llib/object.scm 112 */
						obj_t BgL_arg3251z00_2258;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15576;

							BgL_auxz00_15576 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2068z00_2249);
							BgL_arg3251z00_2258 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15576))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 112 */
							int BgL_auxz00_15579;

							BgL_auxz00_15579 = (int) (((long) 3));
							STRUCT_SET(BgL_res2069z00_2252, BgL_auxz00_15579,
								BgL_arg3251z00_2258);
					}}
					{	/* Llib/object.scm 112 */
						obj_t BgL_arg3253z00_2260;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15582;

							BgL_auxz00_15582 = (BgL_z62errorz62_bglt) (BgL_obj2068z00_2249);
							BgL_arg3253z00_2260 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15582))->BgL_procz00);
						}
						{	/* Llib/object.scm 112 */
							int BgL_auxz00_15585;

							BgL_auxz00_15585 = (int) (((long) 4));
							STRUCT_SET(BgL_res2069z00_2252, BgL_auxz00_15585,
								BgL_arg3253z00_2260);
					}}
					{	/* Llib/object.scm 112 */
						obj_t BgL_arg3255z00_2262;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15588;

							BgL_auxz00_15588 = (BgL_z62errorz62_bglt) (BgL_obj2068z00_2249);
							BgL_arg3255z00_2262 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15588))->BgL_msgz00);
						}
						{	/* Llib/object.scm 112 */
							int BgL_auxz00_15591;

							BgL_auxz00_15591 = (int) (((long) 5));
							STRUCT_SET(BgL_res2069z00_2252, BgL_auxz00_15591,
								BgL_arg3255z00_2262);
					}}
					{	/* Llib/object.scm 112 */
						obj_t BgL_arg3257z00_2264;

						{
							BgL_z62errorz62_bglt BgL_auxz00_15594;

							BgL_auxz00_15594 = (BgL_z62errorz62_bglt) (BgL_obj2068z00_2249);
							BgL_arg3257z00_2264 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_15594))->BgL_objz00);
						}
						{	/* Llib/object.scm 112 */
							int BgL_auxz00_15597;

							BgL_auxz00_15597 = (int) (((long) 6));
							STRUCT_SET(BgL_res2069z00_2252, BgL_auxz00_15597,
								BgL_arg3257z00_2264);
					}}
					return BgL_res2069z00_2252;
				}
			}
		}
	}



/* struct+object->objec2474 */
	obj_t BGl_structzb2objectzd2ze3objec2474z83zz__objectz00(obj_t
		BgL_envz00_8489, obj_t BgL_oz00_8490, obj_t BgL_sz00_8491)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			{
				BgL_z62securityzd2exceptionzb0_bglt BgL_oz00_2238;

				obj_t BgL_sz00_2239;

				{	/* Llib/object.scm 114 */
					BgL_z62securityzd2exceptionzb0_bglt BgL_auxz00_15601;

					BgL_oz00_2238 = (BgL_z62securityzd2exceptionzb0_bglt) (BgL_oz00_8490);
					BgL_sz00_2239 = BgL_sz00_8491;
					{	/* Llib/object.scm 114 */
						obj_t BgL_arg3244z00_2242;

						BgL_arg3244z00_2242 = STRUCT_REF(BgL_sz00_2239, (int) (((long) 0)));
						{	/* Llib/object.scm 114 */
							BgL_objectz00_bglt BgL_auxz00_15604;

							BgL_auxz00_15604 = (BgL_objectz00_bglt) (BgL_oz00_2238);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15604, BgL_arg3244z00_2242);
					}}
					{
						obj_t BgL_auxz00_15607;

						BgL_auxz00_15607 = STRUCT_REF(BgL_sz00_2239, (int) (((long) 1)));
						((((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_oz00_2238))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_15607), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15611;

						BgL_auxz00_15611 = STRUCT_REF(BgL_sz00_2239, (int) (((long) 2)));
						((((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_oz00_2238))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_15611), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15615;

						BgL_auxz00_15615 = STRUCT_REF(BgL_sz00_2239, (int) (((long) 3)));
						((((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_oz00_2238))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_15615), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15619;

						BgL_auxz00_15619 = STRUCT_REF(BgL_sz00_2239, (int) (((long) 4)));
						((((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_oz00_2238))->
								BgL_messagez00) = ((obj_t) BgL_auxz00_15619), BUNSPEC);
					}
					BgL_auxz00_15601 = BgL_oz00_2238;
					return (obj_t) (BgL_auxz00_15601);
				}
			}
		}
	}



/* object->struct-&secu2472 */
	obj_t BGl_objectzd2ze3structzd2z62secu2472z81zz__objectz00(obj_t
		BgL_envz00_8492, obj_t BgL_obj2122z00_8493)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 114 */
			{
				BgL_z62securityzd2exceptionzb0_bglt BgL_obj2122z00_2224;

				BgL_obj2122z00_2224 =
					(BgL_z62securityzd2exceptionzb0_bglt) (BgL_obj2122z00_8493);
				{	/* Llib/object.scm 114 */
					obj_t BgL_res2123z00_2227;

					BgL_res2123z00_2227 =
						make_struct(BGl_symbol4364z00zz__objectz00,
						(int) (((long) 5)), BUNSPEC);
					{	/* Llib/object.scm 114 */
						int BgL_auxz00_15627;

						BgL_auxz00_15627 = (int) (((long) 0));
						STRUCT_SET(BgL_res2123z00_2227, BgL_auxz00_15627, BFALSE);
					}
					{	/* Llib/object.scm 114 */
						obj_t BgL_arg3236z00_2229;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15630;

							BgL_auxz00_15630 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2122z00_2224);
							BgL_arg3236z00_2229 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15630))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 114 */
							int BgL_auxz00_15633;

							BgL_auxz00_15633 = (int) (((long) 1));
							STRUCT_SET(BgL_res2123z00_2227, BgL_auxz00_15633,
								BgL_arg3236z00_2229);
					}}
					{	/* Llib/object.scm 114 */
						obj_t BgL_arg3238z00_2231;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15636;

							BgL_auxz00_15636 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2122z00_2224);
							BgL_arg3238z00_2231 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15636))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 114 */
							int BgL_auxz00_15639;

							BgL_auxz00_15639 = (int) (((long) 2));
							STRUCT_SET(BgL_res2123z00_2227, BgL_auxz00_15639,
								BgL_arg3238z00_2231);
					}}
					{	/* Llib/object.scm 114 */
						obj_t BgL_arg3240z00_2233;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15642;

							BgL_auxz00_15642 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2122z00_2224);
							BgL_arg3240z00_2233 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15642))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 114 */
							int BgL_auxz00_15645;

							BgL_auxz00_15645 = (int) (((long) 3));
							STRUCT_SET(BgL_res2123z00_2227, BgL_auxz00_15645,
								BgL_arg3240z00_2233);
					}}
					{	/* Llib/object.scm 114 */
						obj_t BgL_arg3242z00_2235;

						BgL_arg3242z00_2235 =
							(((BgL_z62securityzd2exceptionzb0_bglt)
								CREF(BgL_obj2122z00_2224))->BgL_messagez00);
						{	/* Llib/object.scm 114 */
							int BgL_auxz00_15649;

							BgL_auxz00_15649 = (int) (((long) 4));
							STRUCT_SET(BgL_res2123z00_2227, BgL_auxz00_15649,
								BgL_arg3242z00_2235);
					}}
					return BgL_res2123z00_2227;
				}
			}
		}
	}



/* struct+object->objec2470 */
	obj_t BGl_structzb2objectzd2ze3objec2470z83zz__objectz00(obj_t
		BgL_envz00_8494, obj_t BgL_oz00_8495, obj_t BgL_sz00_8496)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			{
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_oz00_2211;

				obj_t BgL_sz00_2212;

				{	/* Llib/object.scm 116 */
					BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_auxz00_15653;

					BgL_oz00_2211 =
						(BgL_z62accesszd2controlzd2exceptionz62_bglt) (BgL_oz00_8495);
					BgL_sz00_2212 = BgL_sz00_8496;
					{	/* Llib/object.scm 116 */
						obj_t BgL_arg3233z00_2215;

						BgL_arg3233z00_2215 = STRUCT_REF(BgL_sz00_2212, (int) (((long) 0)));
						{	/* Llib/object.scm 116 */
							BgL_objectz00_bglt BgL_auxz00_15656;

							BgL_auxz00_15656 = (BgL_objectz00_bglt) (BgL_oz00_2211);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15656, BgL_arg3233z00_2215);
					}}
					{
						obj_t BgL_auxz00_15659;

						BgL_auxz00_15659 = STRUCT_REF(BgL_sz00_2212, (int) (((long) 1)));
						((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
									CREF(BgL_oz00_2211))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_15659), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15663;

						BgL_auxz00_15663 = STRUCT_REF(BgL_sz00_2212, (int) (((long) 2)));
						((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
									CREF(BgL_oz00_2211))->BgL_locationz00) =
							((obj_t) BgL_auxz00_15663), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15667;

						BgL_auxz00_15667 = STRUCT_REF(BgL_sz00_2212, (int) (((long) 3)));
						((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
									CREF(BgL_oz00_2211))->BgL_stackz00) =
							((obj_t) BgL_auxz00_15667), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15671;

						BgL_auxz00_15671 = STRUCT_REF(BgL_sz00_2212, (int) (((long) 4)));
						((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
									CREF(BgL_oz00_2211))->BgL_messagez00) =
							((obj_t) BgL_auxz00_15671), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15675;

						BgL_auxz00_15675 = STRUCT_REF(BgL_sz00_2212, (int) (((long) 5)));
						((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
									CREF(BgL_oz00_2211))->BgL_objz00) =
							((obj_t) BgL_auxz00_15675), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15679;

						BgL_auxz00_15679 = STRUCT_REF(BgL_sz00_2212, (int) (((long) 6)));
						((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
									CREF(BgL_oz00_2211))->BgL_permissionz00) =
							((obj_t) BgL_auxz00_15679), BUNSPEC);
					}
					BgL_auxz00_15653 = BgL_oz00_2211;
					return (obj_t) (BgL_auxz00_15653);
				}
			}
		}
	}



/* object->struct-&acce2468 */
	obj_t BGl_objectzd2ze3structzd2z62acce2468z81zz__objectz00(obj_t
		BgL_envz00_8497, obj_t BgL_obj2176z00_8498)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 116 */
			{
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_obj2176z00_2193;

				BgL_obj2176z00_2193 =
					(BgL_z62accesszd2controlzd2exceptionz62_bglt) (BgL_obj2176z00_8498);
				{	/* Llib/object.scm 116 */
					obj_t BgL_res2177z00_2196;

					BgL_res2177z00_2196 =
						make_struct(BGl_symbol4368z00zz__objectz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/object.scm 116 */
						int BgL_auxz00_15687;

						BgL_auxz00_15687 = (int) (((long) 0));
						STRUCT_SET(BgL_res2177z00_2196, BgL_auxz00_15687, BFALSE);
					}
					{	/* Llib/object.scm 116 */
						obj_t BgL_arg3220z00_2198;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15690;

							BgL_auxz00_15690 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2176z00_2193);
							BgL_arg3220z00_2198 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15690))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 116 */
							int BgL_auxz00_15693;

							BgL_auxz00_15693 = (int) (((long) 1));
							STRUCT_SET(BgL_res2177z00_2196, BgL_auxz00_15693,
								BgL_arg3220z00_2198);
					}}
					{	/* Llib/object.scm 116 */
						obj_t BgL_arg3222z00_2200;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15696;

							BgL_auxz00_15696 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2176z00_2193);
							BgL_arg3222z00_2200 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15696))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 116 */
							int BgL_auxz00_15699;

							BgL_auxz00_15699 = (int) (((long) 2));
							STRUCT_SET(BgL_res2177z00_2196, BgL_auxz00_15699,
								BgL_arg3222z00_2200);
					}}
					{	/* Llib/object.scm 116 */
						obj_t BgL_arg3224z00_2202;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15702;

							BgL_auxz00_15702 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2176z00_2193);
							BgL_arg3224z00_2202 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15702))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 116 */
							int BgL_auxz00_15705;

							BgL_auxz00_15705 = (int) (((long) 3));
							STRUCT_SET(BgL_res2177z00_2196, BgL_auxz00_15705,
								BgL_arg3224z00_2202);
					}}
					{	/* Llib/object.scm 116 */
						obj_t BgL_arg3227z00_2204;

						{
							BgL_z62securityzd2exceptionzb0_bglt BgL_auxz00_15708;

							BgL_auxz00_15708 =
								(BgL_z62securityzd2exceptionzb0_bglt) (BgL_obj2176z00_2193);
							BgL_arg3227z00_2204 =
								(((BgL_z62securityzd2exceptionzb0_bglt)
									CREF(BgL_auxz00_15708))->BgL_messagez00);
						}
						{	/* Llib/object.scm 116 */
							int BgL_auxz00_15711;

							BgL_auxz00_15711 = (int) (((long) 4));
							STRUCT_SET(BgL_res2177z00_2196, BgL_auxz00_15711,
								BgL_arg3227z00_2204);
					}}
					{	/* Llib/object.scm 116 */
						obj_t BgL_arg3229z00_2206;

						BgL_arg3229z00_2206 =
							(((BgL_z62accesszd2controlzd2exceptionz62_bglt)
								CREF(BgL_obj2176z00_2193))->BgL_objz00);
						{	/* Llib/object.scm 116 */
							int BgL_auxz00_15715;

							BgL_auxz00_15715 = (int) (((long) 5));
							STRUCT_SET(BgL_res2177z00_2196, BgL_auxz00_15715,
								BgL_arg3229z00_2206);
					}}
					{	/* Llib/object.scm 116 */
						obj_t BgL_arg3231z00_2208;

						BgL_arg3231z00_2208 =
							(((BgL_z62accesszd2controlzd2exceptionz62_bglt)
								CREF(BgL_obj2176z00_2193))->BgL_permissionz00);
						{	/* Llib/object.scm 116 */
							int BgL_auxz00_15719;

							BgL_auxz00_15719 = (int) (((long) 6));
							STRUCT_SET(BgL_res2177z00_2196, BgL_auxz00_15719,
								BgL_arg3231z00_2208);
					}}
					return BgL_res2177z00_2196;
				}
			}
		}
	}



/* struct+object->objec2466 */
	obj_t BGl_structzb2objectzd2ze3objec2466z83zz__objectz00(obj_t
		BgL_envz00_8499, obj_t BgL_oz00_8500, obj_t BgL_sz00_8501)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			{
				BgL_z62warningz62_bglt BgL_oz00_2182;

				obj_t BgL_sz00_2183;

				{	/* Llib/object.scm 120 */
					BgL_z62warningz62_bglt BgL_auxz00_15723;

					BgL_oz00_2182 = (BgL_z62warningz62_bglt) (BgL_oz00_8500);
					BgL_sz00_2183 = BgL_sz00_8501;
					{	/* Llib/object.scm 120 */
						obj_t BgL_arg3217z00_2186;

						BgL_arg3217z00_2186 = STRUCT_REF(BgL_sz00_2183, (int) (((long) 0)));
						{	/* Llib/object.scm 120 */
							BgL_objectz00_bglt BgL_auxz00_15726;

							BgL_auxz00_15726 = (BgL_objectz00_bglt) (BgL_oz00_2182);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15726, BgL_arg3217z00_2186);
					}}
					{
						obj_t BgL_auxz00_15729;

						BgL_auxz00_15729 = STRUCT_REF(BgL_sz00_2183, (int) (((long) 1)));
						((((BgL_z62warningz62_bglt) CREF(BgL_oz00_2182))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_15729), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15733;

						BgL_auxz00_15733 = STRUCT_REF(BgL_sz00_2183, (int) (((long) 2)));
						((((BgL_z62warningz62_bglt) CREF(BgL_oz00_2182))->BgL_locationz00) =
							((obj_t) BgL_auxz00_15733), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15737;

						BgL_auxz00_15737 = STRUCT_REF(BgL_sz00_2183, (int) (((long) 3)));
						((((BgL_z62warningz62_bglt) CREF(BgL_oz00_2182))->BgL_stackz00) =
							((obj_t) BgL_auxz00_15737), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15741;

						BgL_auxz00_15741 = STRUCT_REF(BgL_sz00_2183, (int) (((long) 4)));
						((((BgL_z62warningz62_bglt) CREF(BgL_oz00_2182))->BgL_argsz00) =
							((obj_t) BgL_auxz00_15741), BUNSPEC);
					}
					BgL_auxz00_15723 = BgL_oz00_2182;
					return (obj_t) (BgL_auxz00_15723);
				}
			}
		}
	}



/* object->struct-&warn2464 */
	obj_t BGl_objectzd2ze3structzd2z62warn2464z81zz__objectz00(obj_t
		BgL_envz00_8502, obj_t BgL_obj2230z00_8503)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 120 */
			{
				BgL_z62warningz62_bglt BgL_obj2230z00_2168;

				BgL_obj2230z00_2168 = (BgL_z62warningz62_bglt) (BgL_obj2230z00_8503);
				{	/* Llib/object.scm 120 */
					obj_t BgL_res2231z00_2171;

					BgL_res2231z00_2171 =
						make_struct(BGl_symbol4372z00zz__objectz00,
						(int) (((long) 5)), BUNSPEC);
					{	/* Llib/object.scm 120 */
						int BgL_auxz00_15749;

						BgL_auxz00_15749 = (int) (((long) 0));
						STRUCT_SET(BgL_res2231z00_2171, BgL_auxz00_15749, BFALSE);
					}
					{	/* Llib/object.scm 120 */
						obj_t BgL_arg3209z00_2173;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15752;

							BgL_auxz00_15752 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2230z00_2168);
							BgL_arg3209z00_2173 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15752))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 120 */
							int BgL_auxz00_15755;

							BgL_auxz00_15755 = (int) (((long) 1));
							STRUCT_SET(BgL_res2231z00_2171, BgL_auxz00_15755,
								BgL_arg3209z00_2173);
					}}
					{	/* Llib/object.scm 120 */
						obj_t BgL_arg3211z00_2175;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15758;

							BgL_auxz00_15758 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2230z00_2168);
							BgL_arg3211z00_2175 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15758))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 120 */
							int BgL_auxz00_15761;

							BgL_auxz00_15761 = (int) (((long) 2));
							STRUCT_SET(BgL_res2231z00_2171, BgL_auxz00_15761,
								BgL_arg3211z00_2175);
					}}
					{	/* Llib/object.scm 120 */
						obj_t BgL_arg3213z00_2177;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15764;

							BgL_auxz00_15764 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2230z00_2168);
							BgL_arg3213z00_2177 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15764))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 120 */
							int BgL_auxz00_15767;

							BgL_auxz00_15767 = (int) (((long) 3));
							STRUCT_SET(BgL_res2231z00_2171, BgL_auxz00_15767,
								BgL_arg3213z00_2177);
					}}
					{	/* Llib/object.scm 120 */
						obj_t BgL_arg3215z00_2179;

						BgL_arg3215z00_2179 =
							(((BgL_z62warningz62_bglt) CREF(BgL_obj2230z00_2168))->
							BgL_argsz00);
						{	/* Llib/object.scm 120 */
							int BgL_auxz00_15771;

							BgL_auxz00_15771 = (int) (((long) 4));
							STRUCT_SET(BgL_res2231z00_2171, BgL_auxz00_15771,
								BgL_arg3215z00_2179);
					}}
					return BgL_res2231z00_2171;
				}
			}
		}
	}



/* struct+object->objec2462 */
	obj_t BGl_structzb2objectzd2ze3objec2462z83zz__objectz00(obj_t
		BgL_envz00_8504, obj_t BgL_oz00_8505, obj_t BgL_sz00_8506)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			{
				BgL_z62evalzd2warningzb0_bglt BgL_oz00_2157;

				obj_t BgL_sz00_2158;

				{	/* Llib/object.scm 122 */
					BgL_z62evalzd2warningzb0_bglt BgL_auxz00_15775;

					BgL_oz00_2157 = (BgL_z62evalzd2warningzb0_bglt) (BgL_oz00_8505);
					BgL_sz00_2158 = BgL_sz00_8506;
					{	/* Llib/object.scm 122 */
						obj_t BgL_arg3206z00_2161;

						BgL_arg3206z00_2161 = STRUCT_REF(BgL_sz00_2158, (int) (((long) 0)));
						{	/* Llib/object.scm 122 */
							BgL_objectz00_bglt BgL_auxz00_15778;

							BgL_auxz00_15778 = (BgL_objectz00_bglt) (BgL_oz00_2157);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_15778, BgL_arg3206z00_2161);
					}}
					{
						obj_t BgL_auxz00_15781;

						BgL_auxz00_15781 = STRUCT_REF(BgL_sz00_2158, (int) (((long) 1)));
						((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_oz00_2157))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_15781), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15785;

						BgL_auxz00_15785 = STRUCT_REF(BgL_sz00_2158, (int) (((long) 2)));
						((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_oz00_2157))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_15785), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15789;

						BgL_auxz00_15789 = STRUCT_REF(BgL_sz00_2158, (int) (((long) 3)));
						((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_oz00_2157))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_15789), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_15793;

						BgL_auxz00_15793 = STRUCT_REF(BgL_sz00_2158, (int) (((long) 4)));
						((((BgL_z62evalzd2warningzb0_bglt) CREF(BgL_oz00_2157))->
								BgL_argsz00) = ((obj_t) BgL_auxz00_15793), BUNSPEC);
					}
					BgL_auxz00_15775 = BgL_oz00_2157;
					return (obj_t) (BgL_auxz00_15775);
				}
			}
		}
	}



/* object->struct-&eval2460 */
	obj_t BGl_objectzd2ze3structzd2z62eval2460z81zz__objectz00(obj_t
		BgL_envz00_8507, obj_t BgL_obj2276z00_8508)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 122 */
			{
				BgL_z62evalzd2warningzb0_bglt BgL_obj2276z00_2143;

				BgL_obj2276z00_2143 =
					(BgL_z62evalzd2warningzb0_bglt) (BgL_obj2276z00_8508);
				{	/* Llib/object.scm 122 */
					obj_t BgL_res2277z00_2146;

					BgL_res2277z00_2146 =
						make_struct(BGl_symbol4376z00zz__objectz00,
						(int) (((long) 5)), BUNSPEC);
					{	/* Llib/object.scm 122 */
						int BgL_auxz00_15801;

						BgL_auxz00_15801 = (int) (((long) 0));
						STRUCT_SET(BgL_res2277z00_2146, BgL_auxz00_15801, BFALSE);
					}
					{	/* Llib/object.scm 122 */
						obj_t BgL_arg3198z00_2148;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15804;

							BgL_auxz00_15804 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2276z00_2143);
							BgL_arg3198z00_2148 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15804))->
								BgL_fnamez00);
						}
						{	/* Llib/object.scm 122 */
							int BgL_auxz00_15807;

							BgL_auxz00_15807 = (int) (((long) 1));
							STRUCT_SET(BgL_res2277z00_2146, BgL_auxz00_15807,
								BgL_arg3198z00_2148);
					}}
					{	/* Llib/object.scm 122 */
						obj_t BgL_arg3200z00_2150;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15810;

							BgL_auxz00_15810 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2276z00_2143);
							BgL_arg3200z00_2150 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15810))->
								BgL_locationz00);
						}
						{	/* Llib/object.scm 122 */
							int BgL_auxz00_15813;

							BgL_auxz00_15813 = (int) (((long) 2));
							STRUCT_SET(BgL_res2277z00_2146, BgL_auxz00_15813,
								BgL_arg3200z00_2150);
					}}
					{	/* Llib/object.scm 122 */
						obj_t BgL_arg3202z00_2152;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_15816;

							BgL_auxz00_15816 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2276z00_2143);
							BgL_arg3202z00_2152 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_15816))->
								BgL_stackz00);
						}
						{	/* Llib/object.scm 122 */
							int BgL_auxz00_15819;

							BgL_auxz00_15819 = (int) (((long) 3));
							STRUCT_SET(BgL_res2277z00_2146, BgL_auxz00_15819,
								BgL_arg3202z00_2152);
					}}
					{	/* Llib/object.scm 122 */
						obj_t BgL_arg3204z00_2154;

						{
							BgL_z62warningz62_bglt BgL_auxz00_15822;

							BgL_auxz00_15822 = (BgL_z62warningz62_bglt) (BgL_obj2276z00_2143);
							BgL_arg3204z00_2154 =
								(((BgL_z62warningz62_bglt) CREF(BgL_auxz00_15822))->
								BgL_argsz00);
						}
						{	/* Llib/object.scm 122 */
							int BgL_auxz00_15825;

							BgL_auxz00_15825 = (int) (((long) 4));
							STRUCT_SET(BgL_res2277z00_2146, BgL_auxz00_15825,
								BgL_arg3204z00_2154);
					}}
					return BgL_res2277z00_2146;
				}
			}
		}
	}



/* exception-notify-&wa2458 */
	obj_t BGl_exceptionzd2notifyzd2z62wa2458z62zz__objectz00(obj_t
		BgL_envz00_8509, obj_t BgL_excz00_8510)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1368 */
			{
				BgL_z62warningz62_bglt BgL_excz00_2138;

				BgL_excz00_2138 = (BgL_z62warningz62_bglt) (BgL_excz00_8510);
				return BGl_warningzd2notifyzd2zz__errorz00((obj_t) (BgL_excz00_2138));
			}
		}
	}



/* exception-notify-&er2456 */
	obj_t BGl_exceptionzd2notifyzd2z62er2456z62zz__objectz00(obj_t
		BgL_envz00_8511, obj_t BgL_excz00_8512)
	{
		AN_OBJECT;
		{	/* Llib/object.scm 1362 */
			{
				BgL_z62errorz62_bglt BgL_excz00_2133;

				BgL_excz00_2133 = (BgL_z62errorz62_bglt) (BgL_excz00_8512);
				return BGl_errorzd2notifyzd2zz__errorz00((obj_t) (BgL_excz00_2133));
			}
		}
	}

#ifdef __cplusplus
}
#endif
