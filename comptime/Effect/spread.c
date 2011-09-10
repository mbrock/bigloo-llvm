/*===========================================================================*/
/*   (Effect/spread.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/spread.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

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

	typedef struct BgL_funz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
	}             *BgL_funz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_sequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_nodesz00;
	}                  *BgL_sequencez00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
	}                 *BgL_funcallz00_bglt;

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

	typedef struct BgL_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_procz00;
		struct BgL_nodez00_bgl *BgL_msgz00;
		struct BgL_nodez00_bgl *BgL_objz00;
	}              *BgL_failz00_bglt;

	typedef struct BgL_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_selectz00_bglt;

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_varz00;
	}                   *BgL_boxzd2refzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                      *BgL_boxzd2setz12zc0_bglt;


	static obj_t BGl_spreadzd2sidezd2effectz12zd23289zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23291zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23301zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23293zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23303zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23295zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23305zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23297zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23307zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23299zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23309zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23311zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23313zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23315zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23317zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23319zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23321zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2sidezd2effectz12zd23323zc0zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl__spreadzd2sidezd2effectz12z12zzeffect_spreadz00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzeffect_spreadz00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzeffect_spreadz00();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl__spreadzd2sidezd2effectz12zd23286zc0zzeffect_spreadz00(obj_t,
		obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzeffect_spreadz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_spreadz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzeffect_spreadz00();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_spreadz00();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static bool_t BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_spreadz00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
		BgL_bgl__spreadza7d2sideza7d3544z00,
		BGl__spreadzd2sidezd2effectz12z12zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3522z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23545z00,
		BGl_spreadzd2sidezd2effectz12zd23289zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3523z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23546z00,
		BGl_spreadzd2sidezd2effectz12zd23291zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3524z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23547z00,
		BGl_spreadzd2sidezd2effectz12zd23293zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3525z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23548z00,
		BGl_spreadzd2sidezd2effectz12zd23295zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3526z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23549z00,
		BGl_spreadzd2sidezd2effectz12zd23297zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3527z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23550z00,
		BGl_spreadzd2sidezd2effectz12zd23299zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3528z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23551z00,
		BGl_spreadzd2sidezd2effectz12zd23301zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3530z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23552z00,
		BGl_spreadzd2sidezd2effectz12zd23305zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3529z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23553z00,
		BGl_spreadzd2sidezd2effectz12zd23303zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3531z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23554z00,
		BGl_spreadzd2sidezd2effectz12zd23307zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3532z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23555z00,
		BGl_spreadzd2sidezd2effectz12zd23309zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3533z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23556z00,
		BGl_spreadzd2sidezd2effectz12zd23311zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3534z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23557z00,
		BGl_spreadzd2sidezd2effectz12zd23313zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3535z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23558z00,
		BGl_spreadzd2sidezd2effectz12zd23315zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3536z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23559z00,
		BGl_spreadzd2sidezd2effectz12zd23317zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3537z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23560z00,
		BGl_spreadzd2sidezd2effectz12zd23319zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3538z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23561z00,
		BGl_spreadzd2sidezd2effectz12zd23321zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3539z00zzeffect_spreadz00,
		BgL_bgl_spreadza7d2sideza7d23562z00,
		BGl_spreadzd2sidezd2effectz12zd23323zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_spreadzd2sidezd2effectz12zd23286zd2envz12zzeffect_spreadz00,
		BgL_bgl__spreadza7d2sideza7d3563z00,
		BGl__spreadzd2sidezd2effectz12zd23286zc0zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3521z00zzeffect_spreadz00,
		BgL_bgl_string3521za700za7za7e3564za7, "spread-side-effect!", 19);
	      DEFINE_STRING(BGl_string3540z00zzeffect_spreadz00,
		BgL_bgl_string3540za700za7za7e3565za7, "effect_spread", 13);
	      DEFINE_STRING(BGl_string3541z00zzeffect_spreadz00,
		BgL_bgl_string3541za700za7za7e3566za7, "read ", 5);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long
		BgL_checksumz00_2184, char *BgL_fromz00_2185)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_spreadz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_spreadz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzeffect_spreadz00();
					BGl_cnstzd2initzd2zzeffect_spreadz00();
					BGl_importedzd2moduleszd2initz00zzeffect_spreadz00();
					BGl_genericzd2initzd2zzeffect_spreadz00();
					BGl_methodzd2initzd2zzeffect_spreadz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_spreadz00()
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"effect_spread");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"effect_spread");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_spreadz00()
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 15 */
			{	/* Effect/spread.scm 15 */
				obj_t BgL_cportz00_2175;

				BgL_cportz00_2175 =
					bgl_open_input_string(BGl_string3541z00zzeffect_spreadz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2176;

					BgL_iz00_2176 = ((long) 0);
				BgL_loopz00_2177:
					if ((BgL_iz00_2176 == ((long) -1)))
						{	/* Effect/spread.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Effect/spread.scm 15 */
							{	/* Effect/spread.scm 15 */
								obj_t BgL_arg3543z00_2179;

								{	/* Effect/spread.scm 15 */

									{	/* Effect/spread.scm 15 */
										obj_t BgL_locationz00_2181;

										BgL_locationz00_2181 = BBOOL(((bool_t) 0));
										{	/* Effect/spread.scm 15 */

											BgL_arg3543z00_2179 =
												BGl_readz00zz__readerz00(BgL_cportz00_2175,
												BgL_locationz00_2181);
										}
									}
								}
								{	/* Effect/spread.scm 15 */
									int BgL_auxz00_2202;

									BgL_auxz00_2202 = (int) (BgL_iz00_2176);
									CNST_TABLE_SET(BgL_auxz00_2202, BgL_arg3543z00_2179);
							}}
							{	/* Effect/spread.scm 15 */
								int BgL_auxz00_2182;

								BgL_auxz00_2182 = (int) ((BgL_iz00_2176 - ((long) 1)));
								{
									long BgL_iz00_2207;

									BgL_iz00_2207 = (long) (BgL_auxz00_2182);
									BgL_iz00_2176 = BgL_iz00_2207;
									goto BgL_loopz00_2177;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzeffect_spreadz00()
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 15 */
			return BUNSPEC;
		}
	}



/* spread-side-effect*! */
	bool_t BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00(obj_t
		BgL_nodeza2za2_21)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 201 */
			{
				obj_t BgL_nodeza2za2_795;

				bool_t BgL_resz00_796;

				BgL_nodeza2za2_795 = BgL_nodeza2za2_21;
				BgL_resz00_796 = ((bool_t) 0);
			BgL_zc3anonymousza33324ze3z83_797:
				if (NULLP(BgL_nodeza2za2_795))
					{	/* Effect/spread.scm 204 */
						return BgL_resz00_796;
					}
				else
					{	/* Effect/spread.scm 206 */
						obj_t BgL_arg3326z00_799;

						bool_t BgL_arg3327z00_800;

						BgL_arg3326z00_799 = CDR(BgL_nodeza2za2_795);
						{	/* Effect/spread.scm 206 */
							bool_t BgL__ortest_3282z00_801;

							{	/* Effect/spread.scm 206 */
								obj_t BgL_arg3328z00_802;

								BgL_arg3328z00_802 = CAR(BgL_nodeza2za2_795);
								{	/* Effect/spread.scm 206 */
									bool_t BgL_res3449z00_1397;

									{	/* Effect/spread.scm 206 */
										BgL_nodez00_bglt BgL_nodez00_1371;

										BgL_nodez00_1371 = (BgL_nodez00_bglt) (BgL_arg3328z00_802);
										{	/* Effect/spread.scm 206 */
											obj_t BgL_method3287z00_1372;

											{	/* Effect/spread.scm 206 */
												BgL_objectz00_bglt BgL_objz00_1373;

												BgL_objz00_1373 =
													(BgL_objectz00_bglt) (BgL_nodez00_1371);
												{	/* Effect/spread.scm 206 */
													long BgL_objzd2classzd2numz00_1374;

													BgL_objzd2classzd2numz00_1374 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1373);
													{	/* Effect/spread.scm 206 */
														obj_t BgL_arg2643z00_1375;

														BgL_arg2643z00_1375 =
															PROCEDURE_REF
															(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
															(int) (((long) 1)));
														{	/* Effect/spread.scm 206 */
															obj_t BgL_arrayz00_1377;

															int BgL_offsetz00_1378;

															BgL_arrayz00_1377 = BgL_arg2643z00_1375;
															BgL_offsetz00_1378 =
																(int) (BgL_objzd2classzd2numz00_1374);
															{	/* Effect/spread.scm 206 */
																long BgL_offsetz00_1379;

																BgL_offsetz00_1379 =
																	((long) (BgL_offsetz00_1378) - OBJECT_TYPE);
																{	/* Effect/spread.scm 206 */
																	long BgL_modz00_1380;

																	{	/* Effect/spread.scm 206 */
																		int BgL_arg2645z00_1381;

																		BgL_arg2645z00_1381 = (int) (((long) 16));
																		{	/* Effect/spread.scm 206 */
																			long BgL_auxz00_2222;

																			BgL_auxz00_2222 =
																				(long) (BgL_arg2645z00_1381);
																			BgL_modz00_1380 =
																				(BgL_offsetz00_1379 / BgL_auxz00_2222);
																	}}
																	{	/* Effect/spread.scm 206 */
																		long BgL_restz00_1382;

																		{	/* Effect/spread.scm 206 */
																			int BgL_arg2644z00_1383;

																			BgL_arg2644z00_1383 = (int) (((long) 16));
																			{	/* Effect/spread.scm 206 */
																				long BgL_auxz00_2226;

																				BgL_auxz00_2226 =
																					(long) (BgL_arg2644z00_1383);
																				BgL_restz00_1382 =
																					(BgL_offsetz00_1379 %
																					BgL_auxz00_2226);
																		}}
																		{	/* Effect/spread.scm 206 */

																			BgL_method3287z00_1372 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1377,
																					(int) (BgL_modz00_1380)),
																				(int) (BgL_restz00_1382));
											}}}}}}}}
											BgL_res3449z00_1397 =
												CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1372)
												(BgL_method3287z00_1372, (obj_t) (BgL_nodez00_1371),
													BEOA));
									}}
									BgL__ortest_3282z00_801 = BgL_res3449z00_1397;
							}}
							if (BgL__ortest_3282z00_801)
								{	/* Effect/spread.scm 206 */
									BgL_arg3327z00_800 = BgL__ortest_3282z00_801;
								}
							else
								{	/* Effect/spread.scm 206 */
									BgL_arg3327z00_800 = BgL_resz00_796;
								}
						}
						{
							bool_t BgL_resz00_2239;

							obj_t BgL_nodeza2za2_2238;

							BgL_nodeza2za2_2238 = BgL_arg3326z00_799;
							BgL_resz00_2239 = BgL_arg3327z00_800;
							BgL_resz00_796 = BgL_resz00_2239;
							BgL_nodeza2za2_795 = BgL_nodeza2za2_2238;
							goto BgL_zc3anonymousza33324ze3z83_797;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_spreadz00()
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_spreadzd2sidezd2effectz12zd23286zd2envz12zzeffect_spreadz00,
				BGl_nodez00zzast_nodez00, BGl_string3521z00zzeffect_spreadz00);
		}
	}



/* spread-side-effect! */
	BGL_EXPORTED_DEF bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt
		BgL_nodez00_1)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 23 */
			{	/* Effect/spread.scm 23 */
				obj_t BgL_method3287z00_1398;

				{	/* Effect/spread.scm 23 */
					BgL_objectz00_bglt BgL_objz00_1399;

					BgL_objz00_1399 = (BgL_objectz00_bglt) (BgL_nodez00_1);
					{	/* Effect/spread.scm 23 */
						long BgL_objzd2classzd2numz00_1400;

						BgL_objzd2classzd2numz00_1400 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1399);
						{	/* Effect/spread.scm 23 */
							obj_t BgL_arg2643z00_1401;

							BgL_arg2643z00_1401 =
								PROCEDURE_REF
								(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
								(int) (((long) 1)));
							{	/* Effect/spread.scm 23 */
								obj_t BgL_arrayz00_1403;

								int BgL_offsetz00_1404;

								BgL_arrayz00_1403 = BgL_arg2643z00_1401;
								BgL_offsetz00_1404 = (int) (BgL_objzd2classzd2numz00_1400);
								{	/* Effect/spread.scm 23 */
									long BgL_offsetz00_1405;

									BgL_offsetz00_1405 =
										((long) (BgL_offsetz00_1404) - OBJECT_TYPE);
									{	/* Effect/spread.scm 23 */
										long BgL_modz00_1406;

										{	/* Effect/spread.scm 23 */
											int BgL_arg2645z00_1407;

											BgL_arg2645z00_1407 = (int) (((long) 16));
											{	/* Effect/spread.scm 23 */
												long BgL_auxz00_2249;

												BgL_auxz00_2249 = (long) (BgL_arg2645z00_1407);
												BgL_modz00_1406 =
													(BgL_offsetz00_1405 / BgL_auxz00_2249);
										}}
										{	/* Effect/spread.scm 23 */
											long BgL_restz00_1408;

											{	/* Effect/spread.scm 23 */
												int BgL_arg2644z00_1409;

												BgL_arg2644z00_1409 = (int) (((long) 16));
												{	/* Effect/spread.scm 23 */
													long BgL_auxz00_2253;

													BgL_auxz00_2253 = (long) (BgL_arg2644z00_1409);
													BgL_restz00_1408 =
														(BgL_offsetz00_1405 % BgL_auxz00_2253);
											}}
											{	/* Effect/spread.scm 23 */

												BgL_method3287z00_1398 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1403,
														(int) (BgL_modz00_1406)), (int) (BgL_restz00_1408));
				}}}}}}}}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1398) (BgL_method3287z00_1398,
						(obj_t) (BgL_nodez00_1), BEOA));
			}
		}
	}



/* _spread-side-effect! */
	obj_t BGl__spreadzd2sidezd2effectz12z12zzeffect_spreadz00(obj_t
		BgL_envz00_2117, obj_t BgL_nodez00_2118)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 23 */
			return
				BBOOL(BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2118)));
		}
	}



/* _spread-side-effect!-3286 */
	obj_t BGl__spreadzd2sidezd2effectz12zd23286zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2119, obj_t BgL_nodez00_2120)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 15 */
			return BBOOL(((bool_t) 0));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_spreadz00()
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_varz00zzast_nodez00, BGl_proc3522z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3523z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_appz00zzast_nodez00, BGl_proc3524z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3525z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3526z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_externz00zzast_nodez00, BGl_proc3527z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_castz00zzast_nodez00, BGl_proc3528z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_setqz00zzast_nodez00, BGl_proc3529z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3530z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_failz00zzast_nodez00, BGl_proc3531z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_selectz00zzast_nodez00, BGl_proc3532z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3533z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3534z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3535z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3536z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3537z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3538z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3539z00zzeffect_spreadz00,
				BGl_string3521z00zzeffect_spreadz00);
		}
	}



/* spread-side-effect!-3323 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23323zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2139, obj_t BgL_nodez00_2140)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 194 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1361;

				{	/* Effect/spread.scm 195 */
					bool_t BgL_auxz00_2286;

					BgL_nodez00_1361 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2140);
					{	/* Effect/spread.scm 195 */
						BgL_varz00_bglt BgL_arg3445z00_2088;

						BgL_arg3445z00_2088 =
							(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1361))->BgL_varz00);
						{	/* Effect/spread.scm 195 */
							bool_t BgL_res3520z00_2116;

							{	/* Effect/spread.scm 195 */
								BgL_nodez00_bglt BgL_nodez00_2090;

								BgL_nodez00_2090 = (BgL_nodez00_bglt) (BgL_arg3445z00_2088);
								{	/* Effect/spread.scm 195 */
									obj_t BgL_method3287z00_2091;

									{	/* Effect/spread.scm 195 */
										BgL_objectz00_bglt BgL_objz00_2092;

										BgL_objz00_2092 = (BgL_objectz00_bglt) (BgL_nodez00_2090);
										{	/* Effect/spread.scm 195 */
											long BgL_objzd2classzd2numz00_2093;

											BgL_objzd2classzd2numz00_2093 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2092);
											{	/* Effect/spread.scm 195 */
												obj_t BgL_arg2643z00_2094;

												BgL_arg2643z00_2094 =
													PROCEDURE_REF
													(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
													(int) (((long) 1)));
												{	/* Effect/spread.scm 195 */
													obj_t BgL_arrayz00_2096;

													int BgL_offsetz00_2097;

													BgL_arrayz00_2096 = BgL_arg2643z00_2094;
													BgL_offsetz00_2097 =
														(int) (BgL_objzd2classzd2numz00_2093);
													{	/* Effect/spread.scm 195 */
														long BgL_offsetz00_2098;

														BgL_offsetz00_2098 =
															((long) (BgL_offsetz00_2097) - OBJECT_TYPE);
														{	/* Effect/spread.scm 195 */
															long BgL_modz00_2099;

															{	/* Effect/spread.scm 195 */
																int BgL_arg2645z00_2100;

																BgL_arg2645z00_2100 = (int) (((long) 16));
																{	/* Effect/spread.scm 195 */
																	long BgL_auxz00_2297;

																	BgL_auxz00_2297 =
																		(long) (BgL_arg2645z00_2100);
																	BgL_modz00_2099 =
																		(BgL_offsetz00_2098 / BgL_auxz00_2297);
															}}
															{	/* Effect/spread.scm 195 */
																long BgL_restz00_2101;

																{	/* Effect/spread.scm 195 */
																	int BgL_arg2644z00_2102;

																	BgL_arg2644z00_2102 = (int) (((long) 16));
																	{	/* Effect/spread.scm 195 */
																		long BgL_auxz00_2301;

																		BgL_auxz00_2301 =
																			(long) (BgL_arg2644z00_2102);
																		BgL_restz00_2101 =
																			(BgL_offsetz00_2098 % BgL_auxz00_2301);
																}}
																{	/* Effect/spread.scm 195 */

																	BgL_method3287z00_2091 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2096,
																			(int) (BgL_modz00_2099)),
																		(int) (BgL_restz00_2101));
									}}}}}}}}
									BgL_res3520z00_2116 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_2091)
										(BgL_method3287z00_2091, (obj_t) (BgL_nodez00_2090), BEOA));
							}}
							BgL_auxz00_2286 = BgL_res3520z00_2116;
					}}
					return BBOOL(BgL_auxz00_2286);
				}
			}
		}
	}



/* spread-side-effect!-3321 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23321zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2141, obj_t BgL_nodez00_2142)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 182 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1354;

				{	/* Effect/spread.scm 183 */
					bool_t BgL_auxz00_2314;

					BgL_nodez00_1354 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2142);
					{	/* Effect/spread.scm 183 */
						BgL_nodez00_bglt BgL_arg3443z00_2058;

						BgL_arg3443z00_2058 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1354))->
							BgL_valuez00);
						{	/* Effect/spread.scm 183 */
							bool_t BgL_res3517z00_2086;

							{	/* Effect/spread.scm 183 */
								obj_t BgL_method3287z00_2061;

								{	/* Effect/spread.scm 183 */
									BgL_objectz00_bglt BgL_objz00_2062;

									BgL_objz00_2062 = (BgL_objectz00_bglt) (BgL_arg3443z00_2058);
									{	/* Effect/spread.scm 183 */
										long BgL_objzd2classzd2numz00_2063;

										BgL_objzd2classzd2numz00_2063 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2062);
										{	/* Effect/spread.scm 183 */
											obj_t BgL_arg2643z00_2064;

											BgL_arg2643z00_2064 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 183 */
												obj_t BgL_arrayz00_2066;

												int BgL_offsetz00_2067;

												BgL_arrayz00_2066 = BgL_arg2643z00_2064;
												BgL_offsetz00_2067 =
													(int) (BgL_objzd2classzd2numz00_2063);
												{	/* Effect/spread.scm 183 */
													long BgL_offsetz00_2068;

													BgL_offsetz00_2068 =
														((long) (BgL_offsetz00_2067) - OBJECT_TYPE);
													{	/* Effect/spread.scm 183 */
														long BgL_modz00_2069;

														{	/* Effect/spread.scm 183 */
															int BgL_arg2645z00_2070;

															BgL_arg2645z00_2070 = (int) (((long) 16));
															{	/* Effect/spread.scm 183 */
																long BgL_auxz00_2324;

																BgL_auxz00_2324 = (long) (BgL_arg2645z00_2070);
																BgL_modz00_2069 =
																	(BgL_offsetz00_2068 / BgL_auxz00_2324);
														}}
														{	/* Effect/spread.scm 183 */
															long BgL_restz00_2071;

															{	/* Effect/spread.scm 183 */
																int BgL_arg2644z00_2072;

																BgL_arg2644z00_2072 = (int) (((long) 16));
																{	/* Effect/spread.scm 183 */
																	long BgL_auxz00_2328;

																	BgL_auxz00_2328 =
																		(long) (BgL_arg2644z00_2072);
																	BgL_restz00_2071 =
																		(BgL_offsetz00_2068 % BgL_auxz00_2328);
															}}
															{	/* Effect/spread.scm 183 */

																BgL_method3287z00_2061 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2066,
																		(int) (BgL_modz00_2069)),
																	(int) (BgL_restz00_2071));
								}}}}}}}}
								BgL_res3517z00_2086 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_2061)
									(BgL_method3287z00_2061, (obj_t) (BgL_arg3443z00_2058),
										BEOA));
							} BgL_res3517z00_2086;
					}}
					BgL_auxz00_2314 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_2314);
				}
			}
		}
	}



/* spread-side-effect!-3319 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23319zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2143, obj_t BgL_nodez00_2144)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 173 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1346;

				{	/* Effect/spread.scm 174 */
					bool_t BgL_auxz00_2341;

					BgL_nodez00_1346 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2144);
					{	/* Effect/spread.scm 175 */
						bool_t BgL_resz00_1350;

						{	/* Effect/spread.scm 175 */
							BgL_nodez00_bglt BgL_arg3441z00_1351;

							BgL_arg3441z00_1351 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1346))->
								BgL_valuez00);
							{	/* Effect/spread.scm 175 */
								bool_t BgL_res3514z00_2054;

								{	/* Effect/spread.scm 175 */
									obj_t BgL_method3287z00_2029;

									{	/* Effect/spread.scm 175 */
										BgL_objectz00_bglt BgL_objz00_2030;

										BgL_objz00_2030 =
											(BgL_objectz00_bglt) (BgL_arg3441z00_1351);
										{	/* Effect/spread.scm 175 */
											long BgL_objzd2classzd2numz00_2031;

											BgL_objzd2classzd2numz00_2031 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2030);
											{	/* Effect/spread.scm 175 */
												obj_t BgL_arg2643z00_2032;

												BgL_arg2643z00_2032 =
													PROCEDURE_REF
													(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
													(int) (((long) 1)));
												{	/* Effect/spread.scm 175 */
													obj_t BgL_arrayz00_2034;

													int BgL_offsetz00_2035;

													BgL_arrayz00_2034 = BgL_arg2643z00_2032;
													BgL_offsetz00_2035 =
														(int) (BgL_objzd2classzd2numz00_2031);
													{	/* Effect/spread.scm 175 */
														long BgL_offsetz00_2036;

														BgL_offsetz00_2036 =
															((long) (BgL_offsetz00_2035) - OBJECT_TYPE);
														{	/* Effect/spread.scm 175 */
															long BgL_modz00_2037;

															{	/* Effect/spread.scm 175 */
																int BgL_arg2645z00_2038;

																BgL_arg2645z00_2038 = (int) (((long) 16));
																{	/* Effect/spread.scm 175 */
																	long BgL_auxz00_2351;

																	BgL_auxz00_2351 =
																		(long) (BgL_arg2645z00_2038);
																	BgL_modz00_2037 =
																		(BgL_offsetz00_2036 / BgL_auxz00_2351);
															}}
															{	/* Effect/spread.scm 175 */
																long BgL_restz00_2039;

																{	/* Effect/spread.scm 175 */
																	int BgL_arg2644z00_2040;

																	BgL_arg2644z00_2040 = (int) (((long) 16));
																	{	/* Effect/spread.scm 175 */
																		long BgL_auxz00_2355;

																		BgL_auxz00_2355 =
																			(long) (BgL_arg2644z00_2040);
																		BgL_restz00_2039 =
																			(BgL_offsetz00_2036 % BgL_auxz00_2355);
																}}
																{	/* Effect/spread.scm 175 */

																	BgL_method3287z00_2029 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2034,
																			(int) (BgL_modz00_2037)),
																		(int) (BgL_restz00_2039));
									}}}}}}}}
									BgL_res3514z00_2054 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_2029)
										(BgL_method3287z00_2029, (obj_t) (BgL_arg3441z00_1351),
											BEOA));
								}
								BgL_resz00_1350 = BgL_res3514z00_2054;
						}}
						{
							obj_t BgL_auxz00_2368;

							BgL_nodezf2effectzf2_bglt BgL_auxz00_2366;

							BgL_auxz00_2368 = BBOOL(BgL_resz00_1350);
							BgL_auxz00_2366 = (BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1346);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2366))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_auxz00_2368), BUNSPEC);
						}
						BgL_auxz00_2341 = BgL_resz00_1350;
					}
					return BBOOL(BgL_auxz00_2341);
				}
			}
		}
	}



/* spread-side-effect!-3317 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23317zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2145, obj_t BgL_nodez00_2146)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 164 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1338;

				{	/* Effect/spread.scm 165 */
					bool_t BgL_auxz00_2373;

					BgL_nodez00_1338 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2146);
					{	/* Effect/spread.scm 166 */
						BgL_nodez00_bglt BgL_arg3438z00_1342;

						BgL_arg3438z00_1342 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1338))->
							BgL_exitz00);
						{	/* Effect/spread.scm 166 */
							bool_t BgL_res3508z00_1998;

							{	/* Effect/spread.scm 166 */
								obj_t BgL_method3287z00_1973;

								{	/* Effect/spread.scm 166 */
									BgL_objectz00_bglt BgL_objz00_1974;

									BgL_objz00_1974 = (BgL_objectz00_bglt) (BgL_arg3438z00_1342);
									{	/* Effect/spread.scm 166 */
										long BgL_objzd2classzd2numz00_1975;

										BgL_objzd2classzd2numz00_1975 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1974);
										{	/* Effect/spread.scm 166 */
											obj_t BgL_arg2643z00_1976;

											BgL_arg2643z00_1976 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 166 */
												obj_t BgL_arrayz00_1978;

												int BgL_offsetz00_1979;

												BgL_arrayz00_1978 = BgL_arg2643z00_1976;
												BgL_offsetz00_1979 =
													(int) (BgL_objzd2classzd2numz00_1975);
												{	/* Effect/spread.scm 166 */
													long BgL_offsetz00_1980;

													BgL_offsetz00_1980 =
														((long) (BgL_offsetz00_1979) - OBJECT_TYPE);
													{	/* Effect/spread.scm 166 */
														long BgL_modz00_1981;

														{	/* Effect/spread.scm 166 */
															int BgL_arg2645z00_1982;

															BgL_arg2645z00_1982 = (int) (((long) 16));
															{	/* Effect/spread.scm 166 */
																long BgL_auxz00_2383;

																BgL_auxz00_2383 = (long) (BgL_arg2645z00_1982);
																BgL_modz00_1981 =
																	(BgL_offsetz00_1980 / BgL_auxz00_2383);
														}}
														{	/* Effect/spread.scm 166 */
															long BgL_restz00_1983;

															{	/* Effect/spread.scm 166 */
																int BgL_arg2644z00_1984;

																BgL_arg2644z00_1984 = (int) (((long) 16));
																{	/* Effect/spread.scm 166 */
																	long BgL_auxz00_2387;

																	BgL_auxz00_2387 =
																		(long) (BgL_arg2644z00_1984);
																	BgL_restz00_1983 =
																		(BgL_offsetz00_1980 % BgL_auxz00_2387);
															}}
															{	/* Effect/spread.scm 166 */

																BgL_method3287z00_1973 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1978,
																		(int) (BgL_modz00_1981)),
																	(int) (BgL_restz00_1983));
								}}}}}}}}
								BgL_res3508z00_1998 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1973)
									(BgL_method3287z00_1973, (obj_t) (BgL_arg3438z00_1342),
										BEOA));
							} BgL_res3508z00_1998;
					}}
					{	/* Effect/spread.scm 167 */
						BgL_nodez00_bglt BgL_arg3439z00_1343;

						BgL_arg3439z00_1343 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1338))->
							BgL_valuez00);
						{	/* Effect/spread.scm 167 */
							bool_t BgL_res3511z00_2026;

							{	/* Effect/spread.scm 167 */
								obj_t BgL_method3287z00_2001;

								{	/* Effect/spread.scm 167 */
									BgL_objectz00_bglt BgL_objz00_2002;

									BgL_objz00_2002 = (BgL_objectz00_bglt) (BgL_arg3439z00_1343);
									{	/* Effect/spread.scm 167 */
										long BgL_objzd2classzd2numz00_2003;

										BgL_objzd2classzd2numz00_2003 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2002);
										{	/* Effect/spread.scm 167 */
											obj_t BgL_arg2643z00_2004;

											BgL_arg2643z00_2004 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 167 */
												obj_t BgL_arrayz00_2006;

												int BgL_offsetz00_2007;

												BgL_arrayz00_2006 = BgL_arg2643z00_2004;
												BgL_offsetz00_2007 =
													(int) (BgL_objzd2classzd2numz00_2003);
												{	/* Effect/spread.scm 167 */
													long BgL_offsetz00_2008;

													BgL_offsetz00_2008 =
														((long) (BgL_offsetz00_2007) - OBJECT_TYPE);
													{	/* Effect/spread.scm 167 */
														long BgL_modz00_2009;

														{	/* Effect/spread.scm 167 */
															int BgL_arg2645z00_2010;

															BgL_arg2645z00_2010 = (int) (((long) 16));
															{	/* Effect/spread.scm 167 */
																long BgL_auxz00_2407;

																BgL_auxz00_2407 = (long) (BgL_arg2645z00_2010);
																BgL_modz00_2009 =
																	(BgL_offsetz00_2008 / BgL_auxz00_2407);
														}}
														{	/* Effect/spread.scm 167 */
															long BgL_restz00_2011;

															{	/* Effect/spread.scm 167 */
																int BgL_arg2644z00_2012;

																BgL_arg2644z00_2012 = (int) (((long) 16));
																{	/* Effect/spread.scm 167 */
																	long BgL_auxz00_2411;

																	BgL_auxz00_2411 =
																		(long) (BgL_arg2644z00_2012);
																	BgL_restz00_2011 =
																		(BgL_offsetz00_2008 % BgL_auxz00_2411);
															}}
															{	/* Effect/spread.scm 167 */

																BgL_method3287z00_2001 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2006,
																		(int) (BgL_modz00_2009)),
																	(int) (BgL_restz00_2011));
								}}}}}}}}
								BgL_res3511z00_2026 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_2001)
									(BgL_method3287z00_2001, (obj_t) (BgL_arg3439z00_1343),
										BEOA));
							} BgL_res3511z00_2026;
					}}
					BgL_auxz00_2373 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_2373);
				}
			}
		}
	}



/* spread-side-effect!-3315 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23315zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2147, obj_t BgL_nodez00_2148)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 157 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1331;

				{	/* Effect/spread.scm 158 */
					bool_t BgL_auxz00_2424;

					BgL_nodez00_1331 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2148);
					{	/* Effect/spread.scm 158 */
						BgL_nodez00_bglt BgL_arg3436z00_1942;

						BgL_arg3436z00_1942 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1331))->
							BgL_bodyz00);
						{	/* Effect/spread.scm 158 */
							bool_t BgL_res3505z00_1970;

							{	/* Effect/spread.scm 158 */
								obj_t BgL_method3287z00_1945;

								{	/* Effect/spread.scm 158 */
									BgL_objectz00_bglt BgL_objz00_1946;

									BgL_objz00_1946 = (BgL_objectz00_bglt) (BgL_arg3436z00_1942);
									{	/* Effect/spread.scm 158 */
										long BgL_objzd2classzd2numz00_1947;

										BgL_objzd2classzd2numz00_1947 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1946);
										{	/* Effect/spread.scm 158 */
											obj_t BgL_arg2643z00_1948;

											BgL_arg2643z00_1948 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 158 */
												obj_t BgL_arrayz00_1950;

												int BgL_offsetz00_1951;

												BgL_arrayz00_1950 = BgL_arg2643z00_1948;
												BgL_offsetz00_1951 =
													(int) (BgL_objzd2classzd2numz00_1947);
												{	/* Effect/spread.scm 158 */
													long BgL_offsetz00_1952;

													BgL_offsetz00_1952 =
														((long) (BgL_offsetz00_1951) - OBJECT_TYPE);
													{	/* Effect/spread.scm 158 */
														long BgL_modz00_1953;

														{	/* Effect/spread.scm 158 */
															int BgL_arg2645z00_1954;

															BgL_arg2645z00_1954 = (int) (((long) 16));
															{	/* Effect/spread.scm 158 */
																long BgL_auxz00_2434;

																BgL_auxz00_2434 = (long) (BgL_arg2645z00_1954);
																BgL_modz00_1953 =
																	(BgL_offsetz00_1952 / BgL_auxz00_2434);
														}}
														{	/* Effect/spread.scm 158 */
															long BgL_restz00_1955;

															{	/* Effect/spread.scm 158 */
																int BgL_arg2644z00_1956;

																BgL_arg2644z00_1956 = (int) (((long) 16));
																{	/* Effect/spread.scm 158 */
																	long BgL_auxz00_2438;

																	BgL_auxz00_2438 =
																		(long) (BgL_arg2644z00_1956);
																	BgL_restz00_1955 =
																		(BgL_offsetz00_1952 % BgL_auxz00_2438);
															}}
															{	/* Effect/spread.scm 158 */

																BgL_method3287z00_1945 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1950,
																		(int) (BgL_modz00_1953)),
																	(int) (BgL_restz00_1955));
								}}}}}}}}
								BgL_res3505z00_1970 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1945)
									(BgL_method3287z00_1945, (obj_t) (BgL_arg3436z00_1942),
										BEOA));
							}
							BgL_auxz00_2424 = BgL_res3505z00_1970;
					}}
					return BBOOL(BgL_auxz00_2424);
				}
			}
		}
	}



/* spread-side-effect!-3313 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23313zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2149, obj_t BgL_nodez00_2150)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 143 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1311;

				{	/* Effect/spread.scm 144 */
					bool_t BgL_auxz00_2451;

					BgL_nodez00_1311 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2150);
					{	/* Effect/spread.scm 145 */
						bool_t BgL_g3270z00_1315;

						{	/* Effect/spread.scm 146 */
							BgL_nodez00_bglt BgL_arg3434z00_1328;

							BgL_arg3434z00_1328 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1311))->BgL_bodyz00);
							{	/* Effect/spread.scm 146 */
								bool_t BgL_res3499z00_1906;

								{	/* Effect/spread.scm 146 */
									obj_t BgL_method3287z00_1881;

									{	/* Effect/spread.scm 146 */
										BgL_objectz00_bglt BgL_objz00_1882;

										BgL_objz00_1882 =
											(BgL_objectz00_bglt) (BgL_arg3434z00_1328);
										{	/* Effect/spread.scm 146 */
											long BgL_objzd2classzd2numz00_1883;

											BgL_objzd2classzd2numz00_1883 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1882);
											{	/* Effect/spread.scm 146 */
												obj_t BgL_arg2643z00_1884;

												BgL_arg2643z00_1884 =
													PROCEDURE_REF
													(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
													(int) (((long) 1)));
												{	/* Effect/spread.scm 146 */
													obj_t BgL_arrayz00_1886;

													int BgL_offsetz00_1887;

													BgL_arrayz00_1886 = BgL_arg2643z00_1884;
													BgL_offsetz00_1887 =
														(int) (BgL_objzd2classzd2numz00_1883);
													{	/* Effect/spread.scm 146 */
														long BgL_offsetz00_1888;

														BgL_offsetz00_1888 =
															((long) (BgL_offsetz00_1887) - OBJECT_TYPE);
														{	/* Effect/spread.scm 146 */
															long BgL_modz00_1889;

															{	/* Effect/spread.scm 146 */
																int BgL_arg2645z00_1890;

																BgL_arg2645z00_1890 = (int) (((long) 16));
																{	/* Effect/spread.scm 146 */
																	long BgL_auxz00_2461;

																	BgL_auxz00_2461 =
																		(long) (BgL_arg2645z00_1890);
																	BgL_modz00_1889 =
																		(BgL_offsetz00_1888 / BgL_auxz00_2461);
															}}
															{	/* Effect/spread.scm 146 */
																long BgL_restz00_1891;

																{	/* Effect/spread.scm 146 */
																	int BgL_arg2644z00_1892;

																	BgL_arg2644z00_1892 = (int) (((long) 16));
																	{	/* Effect/spread.scm 146 */
																		long BgL_auxz00_2465;

																		BgL_auxz00_2465 =
																			(long) (BgL_arg2644z00_1892);
																		BgL_restz00_1891 =
																			(BgL_offsetz00_1888 % BgL_auxz00_2465);
																}}
																{	/* Effect/spread.scm 146 */

																	BgL_method3287z00_1881 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1886,
																			(int) (BgL_modz00_1889)),
																		(int) (BgL_restz00_1891));
									}}}}}}}}
									BgL_res3499z00_1906 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1881)
										(BgL_method3287z00_1881, (obj_t) (BgL_arg3434z00_1328),
											BEOA));
								}
								BgL_g3270z00_1315 = BgL_res3499z00_1906;
						}}
						{
							obj_t BgL_bdgsz00_1318;

							bool_t BgL_resz00_1319;

							{	/* Effect/spread.scm 145 */
								obj_t BgL_arg3426z00_1317;

								BgL_arg3426z00_1317 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1311))->
									BgL_bindingsz00);
								BgL_bdgsz00_1318 = BgL_arg3426z00_1317;
								BgL_resz00_1319 = BgL_g3270z00_1315;
							BgL_zc3anonymousza33427ze3z83_1320:
								if (NULLP(BgL_bdgsz00_1318))
									{	/* Effect/spread.scm 147 */
										{
											obj_t BgL_auxz00_2481;

											BgL_nodezf2effectzf2_bglt BgL_auxz00_2479;

											BgL_auxz00_2481 = BBOOL(BgL_resz00_1319);
											BgL_auxz00_2479 =
												(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1311);
											((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2479))->
													BgL_sidezd2effectzf3z21) =
												((obj_t) BgL_auxz00_2481), BUNSPEC);
										}
										BgL_auxz00_2451 = BgL_resz00_1319;
									}
								else
									{	/* Effect/spread.scm 151 */
										obj_t BgL_arg3430z00_1322;

										bool_t BgL_arg3431z00_1323;

										BgL_arg3430z00_1322 = CDR(BgL_bdgsz00_1318);
										{	/* Effect/spread.scm 152 */
											bool_t BgL__ortest_3271z00_1324;

											{	/* Effect/spread.scm 152 */
												obj_t BgL_arg3432z00_1325;

												BgL_arg3432z00_1325 = CDR(CAR(BgL_bdgsz00_1318));
												{	/* Effect/spread.scm 152 */
													bool_t BgL_res3502z00_1940;

													{	/* Effect/spread.scm 152 */
														BgL_nodez00_bglt BgL_nodez00_1914;

														BgL_nodez00_1914 =
															(BgL_nodez00_bglt) (BgL_arg3432z00_1325);
														{	/* Effect/spread.scm 152 */
															obj_t BgL_method3287z00_1915;

															{	/* Effect/spread.scm 152 */
																BgL_objectz00_bglt BgL_objz00_1916;

																BgL_objz00_1916 =
																	(BgL_objectz00_bglt) (BgL_nodez00_1914);
																{	/* Effect/spread.scm 152 */
																	long BgL_objzd2classzd2numz00_1917;

																	BgL_objzd2classzd2numz00_1917 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_1916);
																	{	/* Effect/spread.scm 152 */
																		obj_t BgL_arg2643z00_1918;

																		BgL_arg2643z00_1918 =
																			PROCEDURE_REF
																			(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
																			(int) (((long) 1)));
																		{	/* Effect/spread.scm 152 */
																			obj_t BgL_arrayz00_1920;

																			int BgL_offsetz00_1921;

																			BgL_arrayz00_1920 = BgL_arg2643z00_1918;
																			BgL_offsetz00_1921 =
																				(int) (BgL_objzd2classzd2numz00_1917);
																			{	/* Effect/spread.scm 152 */
																				long BgL_offsetz00_1922;

																				BgL_offsetz00_1922 =
																					(
																					(long) (BgL_offsetz00_1921) -
																					OBJECT_TYPE);
																				{	/* Effect/spread.scm 152 */
																					long BgL_modz00_1923;

																					{	/* Effect/spread.scm 152 */
																						int BgL_arg2645z00_1924;

																						BgL_arg2645z00_1924 =
																							(int) (((long) 16));
																						{	/* Effect/spread.scm 152 */
																							long BgL_auxz00_2496;

																							BgL_auxz00_2496 =
																								(long) (BgL_arg2645z00_1924);
																							BgL_modz00_1923 =
																								(BgL_offsetz00_1922 /
																								BgL_auxz00_2496);
																					}}
																					{	/* Effect/spread.scm 152 */
																						long BgL_restz00_1925;

																						{	/* Effect/spread.scm 152 */
																							int BgL_arg2644z00_1926;

																							BgL_arg2644z00_1926 =
																								(int) (((long) 16));
																							{	/* Effect/spread.scm 152 */
																								long BgL_auxz00_2500;

																								BgL_auxz00_2500 =
																									(long) (BgL_arg2644z00_1926);
																								BgL_restz00_1925 =
																									(BgL_offsetz00_1922 %
																									BgL_auxz00_2500);
																						}}
																						{	/* Effect/spread.scm 152 */

																							BgL_method3287z00_1915 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_1920,
																									(int) (BgL_modz00_1923)),
																								(int) (BgL_restz00_1925));
															}}}}}}}}
															BgL_res3502z00_1940 =
																CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1915)
																(BgL_method3287z00_1915,
																	(obj_t) (BgL_nodez00_1914), BEOA));
													}}
													BgL__ortest_3271z00_1324 = BgL_res3502z00_1940;
											}}
											if (BgL__ortest_3271z00_1324)
												{	/* Effect/spread.scm 152 */
													BgL_arg3431z00_1323 = BgL__ortest_3271z00_1324;
												}
											else
												{	/* Effect/spread.scm 152 */
													BgL_arg3431z00_1323 = BgL_resz00_1319;
												}
										}
										{
											bool_t BgL_resz00_2513;

											obj_t BgL_bdgsz00_2512;

											BgL_bdgsz00_2512 = BgL_arg3430z00_1322;
											BgL_resz00_2513 = BgL_arg3431z00_1323;
											BgL_resz00_1319 = BgL_resz00_2513;
											BgL_bdgsz00_1318 = BgL_bdgsz00_2512;
											goto BgL_zc3anonymousza33427ze3z83_1320;
										}
									}
							}
						}
					}
					return BBOOL(BgL_auxz00_2451);
				}
			}
		}
	}



/* spread-side-effect!-3311 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23311zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2151, obj_t BgL_nodez00_2152)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 131 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1293;

				{	/* Effect/spread.scm 132 */
					bool_t BgL_auxz00_2516;

					BgL_nodez00_1293 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2152);
					{	/* Effect/spread.scm 133 */
						obj_t BgL_g3285z00_1297;

						BgL_g3285z00_1297 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1293))->BgL_localsz00);
						{
							obj_t BgL_l3283z00_1299;

							BgL_l3283z00_1299 = BgL_g3285z00_1297;
						BgL_zc3anonymousza33418ze3z83_1300:
							if (PAIRP(BgL_l3283z00_1299))
								{	/* Effect/spread.scm 133 */
									{	/* Effect/spread.scm 134 */
										obj_t BgL_localz00_1302;

										BgL_localz00_1302 = CAR(BgL_l3283z00_1299);
										{	/* Effect/spread.scm 134 */
											obj_t BgL_arg3420z00_1303;

											{	/* Effect/spread.scm 134 */
												BgL_sfunz00_bglt BgL_obj1884z00_1820;

												{	/* Effect/spread.scm 134 */
													BgL_variablez00_bglt BgL_obj1611z00_1819;

													BgL_obj1611z00_1819 =
														(BgL_variablez00_bglt) (BgL_localz00_1302);
													BgL_obj1884z00_1820 =
														(BgL_sfunz00_bglt) (
														(((BgL_variablez00_bglt)
																CREF(BgL_obj1611z00_1819))->BgL_valuez00));
												}
												BgL_arg3420z00_1303 =
													(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1820))->
													BgL_bodyz00);
											}
											{	/* Effect/spread.scm 134 */
												bool_t BgL_res3493z00_1847;

												{	/* Effect/spread.scm 134 */
													BgL_nodez00_bglt BgL_nodez00_1821;

													BgL_nodez00_1821 =
														(BgL_nodez00_bglt) (BgL_arg3420z00_1303);
													{	/* Effect/spread.scm 134 */
														obj_t BgL_method3287z00_1822;

														{	/* Effect/spread.scm 134 */
															BgL_objectz00_bglt BgL_objz00_1823;

															BgL_objz00_1823 =
																(BgL_objectz00_bglt) (BgL_nodez00_1821);
															{	/* Effect/spread.scm 134 */
																long BgL_objzd2classzd2numz00_1824;

																BgL_objzd2classzd2numz00_1824 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1823);
																{	/* Effect/spread.scm 134 */
																	obj_t BgL_arg2643z00_1825;

																	BgL_arg2643z00_1825 =
																		PROCEDURE_REF
																		(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
																		(int) (((long) 1)));
																	{	/* Effect/spread.scm 134 */
																		obj_t BgL_arrayz00_1827;

																		int BgL_offsetz00_1828;

																		BgL_arrayz00_1827 = BgL_arg2643z00_1825;
																		BgL_offsetz00_1828 =
																			(int) (BgL_objzd2classzd2numz00_1824);
																		{	/* Effect/spread.scm 134 */
																			long BgL_offsetz00_1829;

																			BgL_offsetz00_1829 =
																				(
																				(long) (BgL_offsetz00_1828) -
																				OBJECT_TYPE);
																			{	/* Effect/spread.scm 134 */
																				long BgL_modz00_1830;

																				{	/* Effect/spread.scm 134 */
																					int BgL_arg2645z00_1831;

																					BgL_arg2645z00_1831 =
																						(int) (((long) 16));
																					{	/* Effect/spread.scm 134 */
																						long BgL_auxz00_2534;

																						BgL_auxz00_2534 =
																							(long) (BgL_arg2645z00_1831);
																						BgL_modz00_1830 =
																							(BgL_offsetz00_1829 /
																							BgL_auxz00_2534);
																				}}
																				{	/* Effect/spread.scm 134 */
																					long BgL_restz00_1832;

																					{	/* Effect/spread.scm 134 */
																						int BgL_arg2644z00_1833;

																						BgL_arg2644z00_1833 =
																							(int) (((long) 16));
																						{	/* Effect/spread.scm 134 */
																							long BgL_auxz00_2538;

																							BgL_auxz00_2538 =
																								(long) (BgL_arg2644z00_1833);
																							BgL_restz00_1832 =
																								(BgL_offsetz00_1829 %
																								BgL_auxz00_2538);
																					}}
																					{	/* Effect/spread.scm 134 */

																						BgL_method3287z00_1822 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1827,
																								(int) (BgL_modz00_1830)),
																							(int) (BgL_restz00_1832));
														}}}}}}}}
														BgL_res3493z00_1847 =
															CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1822)
															(BgL_method3287z00_1822,
																(obj_t) (BgL_nodez00_1821), BEOA));
												}} BgL_res3493z00_1847;
									}}}
									{
										obj_t BgL_l3283z00_2549;

										BgL_l3283z00_2549 = CDR(BgL_l3283z00_1299);
										BgL_l3283z00_1299 = BgL_l3283z00_2549;
										goto BgL_zc3anonymousza33418ze3z83_1300;
									}
								}
							else
								{	/* Effect/spread.scm 133 */
									((bool_t) 1);
								}
						}
					}
					{	/* Effect/spread.scm 136 */
						bool_t BgL_resz00_1307;

						{	/* Effect/spread.scm 136 */
							BgL_nodez00_bglt BgL_arg3424z00_1308;

							BgL_arg3424z00_1308 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1293))->BgL_bodyz00);
							{	/* Effect/spread.scm 136 */
								bool_t BgL_res3496z00_1876;

								{	/* Effect/spread.scm 136 */
									obj_t BgL_method3287z00_1851;

									{	/* Effect/spread.scm 136 */
										BgL_objectz00_bglt BgL_objz00_1852;

										BgL_objz00_1852 =
											(BgL_objectz00_bglt) (BgL_arg3424z00_1308);
										{	/* Effect/spread.scm 136 */
											long BgL_objzd2classzd2numz00_1853;

											BgL_objzd2classzd2numz00_1853 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1852);
											{	/* Effect/spread.scm 136 */
												obj_t BgL_arg2643z00_1854;

												BgL_arg2643z00_1854 =
													PROCEDURE_REF
													(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
													(int) (((long) 1)));
												{	/* Effect/spread.scm 136 */
													obj_t BgL_arrayz00_1856;

													int BgL_offsetz00_1857;

													BgL_arrayz00_1856 = BgL_arg2643z00_1854;
													BgL_offsetz00_1857 =
														(int) (BgL_objzd2classzd2numz00_1853);
													{	/* Effect/spread.scm 136 */
														long BgL_offsetz00_1858;

														BgL_offsetz00_1858 =
															((long) (BgL_offsetz00_1857) - OBJECT_TYPE);
														{	/* Effect/spread.scm 136 */
															long BgL_modz00_1859;

															{	/* Effect/spread.scm 136 */
																int BgL_arg2645z00_1860;

																BgL_arg2645z00_1860 = (int) (((long) 16));
																{	/* Effect/spread.scm 136 */
																	long BgL_auxz00_2560;

																	BgL_auxz00_2560 =
																		(long) (BgL_arg2645z00_1860);
																	BgL_modz00_1859 =
																		(BgL_offsetz00_1858 / BgL_auxz00_2560);
															}}
															{	/* Effect/spread.scm 136 */
																long BgL_restz00_1861;

																{	/* Effect/spread.scm 136 */
																	int BgL_arg2644z00_1862;

																	BgL_arg2644z00_1862 = (int) (((long) 16));
																	{	/* Effect/spread.scm 136 */
																		long BgL_auxz00_2564;

																		BgL_auxz00_2564 =
																			(long) (BgL_arg2644z00_1862);
																		BgL_restz00_1861 =
																			(BgL_offsetz00_1858 % BgL_auxz00_2564);
																}}
																{	/* Effect/spread.scm 136 */

																	BgL_method3287z00_1851 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1856,
																			(int) (BgL_modz00_1859)),
																		(int) (BgL_restz00_1861));
									}}}}}}}}
									BgL_res3496z00_1876 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1851)
										(BgL_method3287z00_1851, (obj_t) (BgL_arg3424z00_1308),
											BEOA));
								}
								BgL_resz00_1307 = BgL_res3496z00_1876;
						}}
						{
							obj_t BgL_auxz00_2577;

							BgL_nodezf2effectzf2_bglt BgL_auxz00_2575;

							BgL_auxz00_2577 = BBOOL(BgL_resz00_1307);
							BgL_auxz00_2575 = (BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1293);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2575))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_auxz00_2577), BUNSPEC);
						}
						BgL_auxz00_2516 = BgL_resz00_1307;
					}
					return BBOOL(BgL_auxz00_2516);
				}
			}
		}
	}



/* spread-side-effect!-3309 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23309zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2153, obj_t BgL_nodez00_2154)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 117 */
			{
				BgL_selectz00_bglt BgL_nodez00_1273;

				{	/* Effect/spread.scm 118 */
					bool_t BgL_auxz00_2582;

					BgL_nodez00_1273 = (BgL_selectz00_bglt) (BgL_nodez00_2154);
					{	/* Effect/spread.scm 119 */
						bool_t BgL_g3264z00_1277;

						{	/* Effect/spread.scm 120 */
							BgL_nodez00_bglt BgL_arg3416z00_1290;

							BgL_arg3416z00_1290 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1273))->BgL_testz00);
							{	/* Effect/spread.scm 120 */
								bool_t BgL_res3487z00_1781;

								{	/* Effect/spread.scm 120 */
									obj_t BgL_method3287z00_1756;

									{	/* Effect/spread.scm 120 */
										BgL_objectz00_bglt BgL_objz00_1757;

										BgL_objz00_1757 =
											(BgL_objectz00_bglt) (BgL_arg3416z00_1290);
										{	/* Effect/spread.scm 120 */
											long BgL_objzd2classzd2numz00_1758;

											BgL_objzd2classzd2numz00_1758 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1757);
											{	/* Effect/spread.scm 120 */
												obj_t BgL_arg2643z00_1759;

												BgL_arg2643z00_1759 =
													PROCEDURE_REF
													(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
													(int) (((long) 1)));
												{	/* Effect/spread.scm 120 */
													obj_t BgL_arrayz00_1761;

													int BgL_offsetz00_1762;

													BgL_arrayz00_1761 = BgL_arg2643z00_1759;
													BgL_offsetz00_1762 =
														(int) (BgL_objzd2classzd2numz00_1758);
													{	/* Effect/spread.scm 120 */
														long BgL_offsetz00_1763;

														BgL_offsetz00_1763 =
															((long) (BgL_offsetz00_1762) - OBJECT_TYPE);
														{	/* Effect/spread.scm 120 */
															long BgL_modz00_1764;

															{	/* Effect/spread.scm 120 */
																int BgL_arg2645z00_1765;

																BgL_arg2645z00_1765 = (int) (((long) 16));
																{	/* Effect/spread.scm 120 */
																	long BgL_auxz00_2592;

																	BgL_auxz00_2592 =
																		(long) (BgL_arg2645z00_1765);
																	BgL_modz00_1764 =
																		(BgL_offsetz00_1763 / BgL_auxz00_2592);
															}}
															{	/* Effect/spread.scm 120 */
																long BgL_restz00_1766;

																{	/* Effect/spread.scm 120 */
																	int BgL_arg2644z00_1767;

																	BgL_arg2644z00_1767 = (int) (((long) 16));
																	{	/* Effect/spread.scm 120 */
																		long BgL_auxz00_2596;

																		BgL_auxz00_2596 =
																			(long) (BgL_arg2644z00_1767);
																		BgL_restz00_1766 =
																			(BgL_offsetz00_1763 % BgL_auxz00_2596);
																}}
																{	/* Effect/spread.scm 120 */

																	BgL_method3287z00_1756 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1761,
																			(int) (BgL_modz00_1764)),
																		(int) (BgL_restz00_1766));
									}}}}}}}}
									BgL_res3487z00_1781 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1756)
										(BgL_method3287z00_1756, (obj_t) (BgL_arg3416z00_1290),
											BEOA));
								}
								BgL_g3264z00_1277 = BgL_res3487z00_1781;
						}}
						{
							obj_t BgL_clausesz00_1280;

							bool_t BgL_resz00_1281;

							{	/* Effect/spread.scm 119 */
								obj_t BgL_arg3409z00_1279;

								BgL_arg3409z00_1279 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1273))->
									BgL_clausesz00);
								BgL_clausesz00_1280 = BgL_arg3409z00_1279;
								BgL_resz00_1281 = BgL_g3264z00_1277;
							BgL_zc3anonymousza33410ze3z83_1282:
								if (NULLP(BgL_clausesz00_1280))
									{	/* Effect/spread.scm 121 */
										{
											obj_t BgL_auxz00_2612;

											BgL_nodezf2effectzf2_bglt BgL_auxz00_2610;

											BgL_auxz00_2612 = BBOOL(BgL_resz00_1281);
											BgL_auxz00_2610 =
												(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1273);
											((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2610))->
													BgL_sidezd2effectzf3z21) =
												((obj_t) BgL_auxz00_2612), BUNSPEC);
										}
										BgL_auxz00_2582 = BgL_resz00_1281;
									}
								else
									{	/* Effect/spread.scm 125 */
										obj_t BgL_arg3412z00_1284;

										bool_t BgL_arg3413z00_1285;

										BgL_arg3412z00_1284 = CDR(BgL_clausesz00_1280);
										{	/* Effect/spread.scm 126 */
											bool_t BgL__ortest_3265z00_1286;

											{	/* Effect/spread.scm 126 */
												obj_t BgL_arg3414z00_1287;

												BgL_arg3414z00_1287 = CDR(CAR(BgL_clausesz00_1280));
												{	/* Effect/spread.scm 126 */
													bool_t BgL_res3490z00_1815;

													{	/* Effect/spread.scm 126 */
														BgL_nodez00_bglt BgL_nodez00_1789;

														BgL_nodez00_1789 =
															(BgL_nodez00_bglt) (BgL_arg3414z00_1287);
														{	/* Effect/spread.scm 126 */
															obj_t BgL_method3287z00_1790;

															{	/* Effect/spread.scm 126 */
																BgL_objectz00_bglt BgL_objz00_1791;

																BgL_objz00_1791 =
																	(BgL_objectz00_bglt) (BgL_nodez00_1789);
																{	/* Effect/spread.scm 126 */
																	long BgL_objzd2classzd2numz00_1792;

																	BgL_objzd2classzd2numz00_1792 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_1791);
																	{	/* Effect/spread.scm 126 */
																		obj_t BgL_arg2643z00_1793;

																		BgL_arg2643z00_1793 =
																			PROCEDURE_REF
																			(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
																			(int) (((long) 1)));
																		{	/* Effect/spread.scm 126 */
																			obj_t BgL_arrayz00_1795;

																			int BgL_offsetz00_1796;

																			BgL_arrayz00_1795 = BgL_arg2643z00_1793;
																			BgL_offsetz00_1796 =
																				(int) (BgL_objzd2classzd2numz00_1792);
																			{	/* Effect/spread.scm 126 */
																				long BgL_offsetz00_1797;

																				BgL_offsetz00_1797 =
																					(
																					(long) (BgL_offsetz00_1796) -
																					OBJECT_TYPE);
																				{	/* Effect/spread.scm 126 */
																					long BgL_modz00_1798;

																					{	/* Effect/spread.scm 126 */
																						int BgL_arg2645z00_1799;

																						BgL_arg2645z00_1799 =
																							(int) (((long) 16));
																						{	/* Effect/spread.scm 126 */
																							long BgL_auxz00_2627;

																							BgL_auxz00_2627 =
																								(long) (BgL_arg2645z00_1799);
																							BgL_modz00_1798 =
																								(BgL_offsetz00_1797 /
																								BgL_auxz00_2627);
																					}}
																					{	/* Effect/spread.scm 126 */
																						long BgL_restz00_1800;

																						{	/* Effect/spread.scm 126 */
																							int BgL_arg2644z00_1801;

																							BgL_arg2644z00_1801 =
																								(int) (((long) 16));
																							{	/* Effect/spread.scm 126 */
																								long BgL_auxz00_2631;

																								BgL_auxz00_2631 =
																									(long) (BgL_arg2644z00_1801);
																								BgL_restz00_1800 =
																									(BgL_offsetz00_1797 %
																									BgL_auxz00_2631);
																						}}
																						{	/* Effect/spread.scm 126 */

																							BgL_method3287z00_1790 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_1795,
																									(int) (BgL_modz00_1798)),
																								(int) (BgL_restz00_1800));
															}}}}}}}}
															BgL_res3490z00_1815 =
																CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1790)
																(BgL_method3287z00_1790,
																	(obj_t) (BgL_nodez00_1789), BEOA));
													}}
													BgL__ortest_3265z00_1286 = BgL_res3490z00_1815;
											}}
											if (BgL__ortest_3265z00_1286)
												{	/* Effect/spread.scm 126 */
													BgL_arg3413z00_1285 = BgL__ortest_3265z00_1286;
												}
											else
												{	/* Effect/spread.scm 126 */
													BgL_arg3413z00_1285 = BgL_resz00_1281;
												}
										}
										{
											bool_t BgL_resz00_2644;

											obj_t BgL_clausesz00_2643;

											BgL_clausesz00_2643 = BgL_arg3412z00_1284;
											BgL_resz00_2644 = BgL_arg3413z00_1285;
											BgL_resz00_1281 = BgL_resz00_2644;
											BgL_clausesz00_1280 = BgL_clausesz00_2643;
											goto BgL_zc3anonymousza33410ze3z83_1282;
										}
									}
							}
						}
					}
					return BBOOL(BgL_auxz00_2582);
				}
			}
		}
	}



/* spread-side-effect!-3307 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23307zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2155, obj_t BgL_nodez00_2156)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 107 */
			{
				BgL_failz00_bglt BgL_nodez00_1261;

				{	/* Effect/spread.scm 108 */
					bool_t BgL_auxz00_2647;

					BgL_nodez00_1261 = (BgL_failz00_bglt) (BgL_nodez00_2156);
					{	/* Effect/spread.scm 109 */
						bool_t BgL_reszd2proczd2_1265;

						{	/* Effect/spread.scm 109 */
							BgL_nodez00_bglt BgL_arg3407z00_1270;

							BgL_arg3407z00_1270 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1261))->BgL_procz00);
							{	/* Effect/spread.scm 109 */
								bool_t BgL_res3478z00_1697;

								{	/* Effect/spread.scm 109 */
									obj_t BgL_method3287z00_1672;

									{	/* Effect/spread.scm 109 */
										BgL_objectz00_bglt BgL_objz00_1673;

										BgL_objz00_1673 =
											(BgL_objectz00_bglt) (BgL_arg3407z00_1270);
										{	/* Effect/spread.scm 109 */
											long BgL_objzd2classzd2numz00_1674;

											BgL_objzd2classzd2numz00_1674 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1673);
											{	/* Effect/spread.scm 109 */
												obj_t BgL_arg2643z00_1675;

												BgL_arg2643z00_1675 =
													PROCEDURE_REF
													(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
													(int) (((long) 1)));
												{	/* Effect/spread.scm 109 */
													obj_t BgL_arrayz00_1677;

													int BgL_offsetz00_1678;

													BgL_arrayz00_1677 = BgL_arg2643z00_1675;
													BgL_offsetz00_1678 =
														(int) (BgL_objzd2classzd2numz00_1674);
													{	/* Effect/spread.scm 109 */
														long BgL_offsetz00_1679;

														BgL_offsetz00_1679 =
															((long) (BgL_offsetz00_1678) - OBJECT_TYPE);
														{	/* Effect/spread.scm 109 */
															long BgL_modz00_1680;

															{	/* Effect/spread.scm 109 */
																int BgL_arg2645z00_1681;

																BgL_arg2645z00_1681 = (int) (((long) 16));
																{	/* Effect/spread.scm 109 */
																	long BgL_auxz00_2657;

																	BgL_auxz00_2657 =
																		(long) (BgL_arg2645z00_1681);
																	BgL_modz00_1680 =
																		(BgL_offsetz00_1679 / BgL_auxz00_2657);
															}}
															{	/* Effect/spread.scm 109 */
																long BgL_restz00_1682;

																{	/* Effect/spread.scm 109 */
																	int BgL_arg2644z00_1683;

																	BgL_arg2644z00_1683 = (int) (((long) 16));
																	{	/* Effect/spread.scm 109 */
																		long BgL_auxz00_2661;

																		BgL_auxz00_2661 =
																			(long) (BgL_arg2644z00_1683);
																		BgL_restz00_1682 =
																			(BgL_offsetz00_1679 % BgL_auxz00_2661);
																}}
																{	/* Effect/spread.scm 109 */

																	BgL_method3287z00_1672 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1677,
																			(int) (BgL_modz00_1680)),
																		(int) (BgL_restz00_1682));
									}}}}}}}}
									BgL_res3478z00_1697 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1672)
										(BgL_method3287z00_1672, (obj_t) (BgL_arg3407z00_1270),
											BEOA));
								}
								BgL_reszd2proczd2_1265 = BgL_res3478z00_1697;
						}}
						{	/* Effect/spread.scm 109 */
							bool_t BgL_reszd2msgzd2_1266;

							{	/* Effect/spread.scm 110 */
								BgL_nodez00_bglt BgL_arg3406z00_1269;

								BgL_arg3406z00_1269 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1261))->BgL_msgz00);
								{	/* Effect/spread.scm 110 */
									bool_t BgL_res3481z00_1725;

									{	/* Effect/spread.scm 110 */
										obj_t BgL_method3287z00_1700;

										{	/* Effect/spread.scm 110 */
											BgL_objectz00_bglt BgL_objz00_1701;

											BgL_objz00_1701 =
												(BgL_objectz00_bglt) (BgL_arg3406z00_1269);
											{	/* Effect/spread.scm 110 */
												long BgL_objzd2classzd2numz00_1702;

												BgL_objzd2classzd2numz00_1702 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1701);
												{	/* Effect/spread.scm 110 */
													obj_t BgL_arg2643z00_1703;

													BgL_arg2643z00_1703 =
														PROCEDURE_REF
														(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
														(int) (((long) 1)));
													{	/* Effect/spread.scm 110 */
														obj_t BgL_arrayz00_1705;

														int BgL_offsetz00_1706;

														BgL_arrayz00_1705 = BgL_arg2643z00_1703;
														BgL_offsetz00_1706 =
															(int) (BgL_objzd2classzd2numz00_1702);
														{	/* Effect/spread.scm 110 */
															long BgL_offsetz00_1707;

															BgL_offsetz00_1707 =
																((long) (BgL_offsetz00_1706) - OBJECT_TYPE);
															{	/* Effect/spread.scm 110 */
																long BgL_modz00_1708;

																{	/* Effect/spread.scm 110 */
																	int BgL_arg2645z00_1709;

																	BgL_arg2645z00_1709 = (int) (((long) 16));
																	{	/* Effect/spread.scm 110 */
																		long BgL_auxz00_2681;

																		BgL_auxz00_2681 =
																			(long) (BgL_arg2645z00_1709);
																		BgL_modz00_1708 =
																			(BgL_offsetz00_1707 / BgL_auxz00_2681);
																}}
																{	/* Effect/spread.scm 110 */
																	long BgL_restz00_1710;

																	{	/* Effect/spread.scm 110 */
																		int BgL_arg2644z00_1711;

																		BgL_arg2644z00_1711 = (int) (((long) 16));
																		{	/* Effect/spread.scm 110 */
																			long BgL_auxz00_2685;

																			BgL_auxz00_2685 =
																				(long) (BgL_arg2644z00_1711);
																			BgL_restz00_1710 =
																				(BgL_offsetz00_1707 % BgL_auxz00_2685);
																	}}
																	{	/* Effect/spread.scm 110 */

																		BgL_method3287z00_1700 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1705,
																				(int) (BgL_modz00_1708)),
																			(int) (BgL_restz00_1710));
										}}}}}}}}
										BgL_res3481z00_1725 =
											CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1700)
											(BgL_method3287z00_1700, (obj_t) (BgL_arg3406z00_1269),
												BEOA));
									}
									BgL_reszd2msgzd2_1266 = BgL_res3481z00_1725;
							}}
							{	/* Effect/spread.scm 110 */
								bool_t BgL_reszd2objzd2_1267;

								{	/* Effect/spread.scm 111 */
									BgL_nodez00_bglt BgL_arg3405z00_1268;

									BgL_arg3405z00_1268 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1261))->BgL_objz00);
									{	/* Effect/spread.scm 111 */
										bool_t BgL_res3484z00_1753;

										{	/* Effect/spread.scm 111 */
											obj_t BgL_method3287z00_1728;

											{	/* Effect/spread.scm 111 */
												BgL_objectz00_bglt BgL_objz00_1729;

												BgL_objz00_1729 =
													(BgL_objectz00_bglt) (BgL_arg3405z00_1268);
												{	/* Effect/spread.scm 111 */
													long BgL_objzd2classzd2numz00_1730;

													BgL_objzd2classzd2numz00_1730 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1729);
													{	/* Effect/spread.scm 111 */
														obj_t BgL_arg2643z00_1731;

														BgL_arg2643z00_1731 =
															PROCEDURE_REF
															(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
															(int) (((long) 1)));
														{	/* Effect/spread.scm 111 */
															obj_t BgL_arrayz00_1733;

															int BgL_offsetz00_1734;

															BgL_arrayz00_1733 = BgL_arg2643z00_1731;
															BgL_offsetz00_1734 =
																(int) (BgL_objzd2classzd2numz00_1730);
															{	/* Effect/spread.scm 111 */
																long BgL_offsetz00_1735;

																BgL_offsetz00_1735 =
																	((long) (BgL_offsetz00_1734) - OBJECT_TYPE);
																{	/* Effect/spread.scm 111 */
																	long BgL_modz00_1736;

																	{	/* Effect/spread.scm 111 */
																		int BgL_arg2645z00_1737;

																		BgL_arg2645z00_1737 = (int) (((long) 16));
																		{	/* Effect/spread.scm 111 */
																			long BgL_auxz00_2705;

																			BgL_auxz00_2705 =
																				(long) (BgL_arg2645z00_1737);
																			BgL_modz00_1736 =
																				(BgL_offsetz00_1735 / BgL_auxz00_2705);
																	}}
																	{	/* Effect/spread.scm 111 */
																		long BgL_restz00_1738;

																		{	/* Effect/spread.scm 111 */
																			int BgL_arg2644z00_1739;

																			BgL_arg2644z00_1739 = (int) (((long) 16));
																			{	/* Effect/spread.scm 111 */
																				long BgL_auxz00_2709;

																				BgL_auxz00_2709 =
																					(long) (BgL_arg2644z00_1739);
																				BgL_restz00_1738 =
																					(BgL_offsetz00_1735 %
																					BgL_auxz00_2709);
																		}}
																		{	/* Effect/spread.scm 111 */

																			BgL_method3287z00_1728 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1733,
																					(int) (BgL_modz00_1736)),
																				(int) (BgL_restz00_1738));
											}}}}}}}}
											BgL_res3484z00_1753 =
												CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1728)
												(BgL_method3287z00_1728, (obj_t) (BgL_arg3405z00_1268),
													BEOA));
										}
										BgL_reszd2objzd2_1267 = BgL_res3484z00_1753;
								}}
								{	/* Effect/spread.scm 111 */

									BgL_auxz00_2647 = ((bool_t) 1);
					}}}}
					return BBOOL(BgL_auxz00_2647);
				}
			}
		}
	}



/* spread-side-effect!-3305 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23305zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2157, obj_t BgL_nodez00_2158)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 95 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1246;

				{	/* Effect/spread.scm 96 */
					bool_t BgL_auxz00_2722;

					BgL_nodez00_1246 = (BgL_conditionalz00_bglt) (BgL_nodez00_2158);
					{	/* Effect/spread.scm 97 */
						bool_t BgL_reszd2testzd2_1250;

						{	/* Effect/spread.scm 97 */
							BgL_nodez00_bglt BgL_arg3403z00_1258;

							BgL_arg3403z00_1258 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1246))->
								BgL_testz00);
							{	/* Effect/spread.scm 97 */
								bool_t BgL_res3469z00_1611;

								{	/* Effect/spread.scm 97 */
									obj_t BgL_method3287z00_1586;

									{	/* Effect/spread.scm 97 */
										BgL_objectz00_bglt BgL_objz00_1587;

										BgL_objz00_1587 =
											(BgL_objectz00_bglt) (BgL_arg3403z00_1258);
										{	/* Effect/spread.scm 97 */
											long BgL_objzd2classzd2numz00_1588;

											BgL_objzd2classzd2numz00_1588 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1587);
											{	/* Effect/spread.scm 97 */
												obj_t BgL_arg2643z00_1589;

												BgL_arg2643z00_1589 =
													PROCEDURE_REF
													(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
													(int) (((long) 1)));
												{	/* Effect/spread.scm 97 */
													obj_t BgL_arrayz00_1591;

													int BgL_offsetz00_1592;

													BgL_arrayz00_1591 = BgL_arg2643z00_1589;
													BgL_offsetz00_1592 =
														(int) (BgL_objzd2classzd2numz00_1588);
													{	/* Effect/spread.scm 97 */
														long BgL_offsetz00_1593;

														BgL_offsetz00_1593 =
															((long) (BgL_offsetz00_1592) - OBJECT_TYPE);
														{	/* Effect/spread.scm 97 */
															long BgL_modz00_1594;

															{	/* Effect/spread.scm 97 */
																int BgL_arg2645z00_1595;

																BgL_arg2645z00_1595 = (int) (((long) 16));
																{	/* Effect/spread.scm 97 */
																	long BgL_auxz00_2732;

																	BgL_auxz00_2732 =
																		(long) (BgL_arg2645z00_1595);
																	BgL_modz00_1594 =
																		(BgL_offsetz00_1593 / BgL_auxz00_2732);
															}}
															{	/* Effect/spread.scm 97 */
																long BgL_restz00_1596;

																{	/* Effect/spread.scm 97 */
																	int BgL_arg2644z00_1597;

																	BgL_arg2644z00_1597 = (int) (((long) 16));
																	{	/* Effect/spread.scm 97 */
																		long BgL_auxz00_2736;

																		BgL_auxz00_2736 =
																			(long) (BgL_arg2644z00_1597);
																		BgL_restz00_1596 =
																			(BgL_offsetz00_1593 % BgL_auxz00_2736);
																}}
																{	/* Effect/spread.scm 97 */

																	BgL_method3287z00_1586 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1591,
																			(int) (BgL_modz00_1594)),
																		(int) (BgL_restz00_1596));
									}}}}}}}}
									BgL_res3469z00_1611 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1586)
										(BgL_method3287z00_1586, (obj_t) (BgL_arg3403z00_1258),
											BEOA));
								}
								BgL_reszd2testzd2_1250 = BgL_res3469z00_1611;
						}}
						{	/* Effect/spread.scm 97 */
							bool_t BgL_reszd2truezd2_1251;

							{	/* Effect/spread.scm 98 */
								BgL_nodez00_bglt BgL_arg3402z00_1257;

								BgL_arg3402z00_1257 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1246))->
									BgL_truez00);
								{	/* Effect/spread.scm 98 */
									bool_t BgL_res3472z00_1639;

									{	/* Effect/spread.scm 98 */
										obj_t BgL_method3287z00_1614;

										{	/* Effect/spread.scm 98 */
											BgL_objectz00_bglt BgL_objz00_1615;

											BgL_objz00_1615 =
												(BgL_objectz00_bglt) (BgL_arg3402z00_1257);
											{	/* Effect/spread.scm 98 */
												long BgL_objzd2classzd2numz00_1616;

												BgL_objzd2classzd2numz00_1616 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1615);
												{	/* Effect/spread.scm 98 */
													obj_t BgL_arg2643z00_1617;

													BgL_arg2643z00_1617 =
														PROCEDURE_REF
														(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
														(int) (((long) 1)));
													{	/* Effect/spread.scm 98 */
														obj_t BgL_arrayz00_1619;

														int BgL_offsetz00_1620;

														BgL_arrayz00_1619 = BgL_arg2643z00_1617;
														BgL_offsetz00_1620 =
															(int) (BgL_objzd2classzd2numz00_1616);
														{	/* Effect/spread.scm 98 */
															long BgL_offsetz00_1621;

															BgL_offsetz00_1621 =
																((long) (BgL_offsetz00_1620) - OBJECT_TYPE);
															{	/* Effect/spread.scm 98 */
																long BgL_modz00_1622;

																{	/* Effect/spread.scm 98 */
																	int BgL_arg2645z00_1623;

																	BgL_arg2645z00_1623 = (int) (((long) 16));
																	{	/* Effect/spread.scm 98 */
																		long BgL_auxz00_2756;

																		BgL_auxz00_2756 =
																			(long) (BgL_arg2645z00_1623);
																		BgL_modz00_1622 =
																			(BgL_offsetz00_1621 / BgL_auxz00_2756);
																}}
																{	/* Effect/spread.scm 98 */
																	long BgL_restz00_1624;

																	{	/* Effect/spread.scm 98 */
																		int BgL_arg2644z00_1625;

																		BgL_arg2644z00_1625 = (int) (((long) 16));
																		{	/* Effect/spread.scm 98 */
																			long BgL_auxz00_2760;

																			BgL_auxz00_2760 =
																				(long) (BgL_arg2644z00_1625);
																			BgL_restz00_1624 =
																				(BgL_offsetz00_1621 % BgL_auxz00_2760);
																	}}
																	{	/* Effect/spread.scm 98 */

																		BgL_method3287z00_1614 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1619,
																				(int) (BgL_modz00_1622)),
																			(int) (BgL_restz00_1624));
										}}}}}}}}
										BgL_res3472z00_1639 =
											CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1614)
											(BgL_method3287z00_1614, (obj_t) (BgL_arg3402z00_1257),
												BEOA));
									}
									BgL_reszd2truezd2_1251 = BgL_res3472z00_1639;
							}}
							{	/* Effect/spread.scm 98 */
								bool_t BgL_reszd2falsezd2_1252;

								{	/* Effect/spread.scm 99 */
									BgL_nodez00_bglt BgL_arg3401z00_1256;

									BgL_arg3401z00_1256 =
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1246))->
										BgL_falsez00);
									{	/* Effect/spread.scm 99 */
										bool_t BgL_res3475z00_1667;

										{	/* Effect/spread.scm 99 */
											obj_t BgL_method3287z00_1642;

											{	/* Effect/spread.scm 99 */
												BgL_objectz00_bglt BgL_objz00_1643;

												BgL_objz00_1643 =
													(BgL_objectz00_bglt) (BgL_arg3401z00_1256);
												{	/* Effect/spread.scm 99 */
													long BgL_objzd2classzd2numz00_1644;

													BgL_objzd2classzd2numz00_1644 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1643);
													{	/* Effect/spread.scm 99 */
														obj_t BgL_arg2643z00_1645;

														BgL_arg2643z00_1645 =
															PROCEDURE_REF
															(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
															(int) (((long) 1)));
														{	/* Effect/spread.scm 99 */
															obj_t BgL_arrayz00_1647;

															int BgL_offsetz00_1648;

															BgL_arrayz00_1647 = BgL_arg2643z00_1645;
															BgL_offsetz00_1648 =
																(int) (BgL_objzd2classzd2numz00_1644);
															{	/* Effect/spread.scm 99 */
																long BgL_offsetz00_1649;

																BgL_offsetz00_1649 =
																	((long) (BgL_offsetz00_1648) - OBJECT_TYPE);
																{	/* Effect/spread.scm 99 */
																	long BgL_modz00_1650;

																	{	/* Effect/spread.scm 99 */
																		int BgL_arg2645z00_1651;

																		BgL_arg2645z00_1651 = (int) (((long) 16));
																		{	/* Effect/spread.scm 99 */
																			long BgL_auxz00_2780;

																			BgL_auxz00_2780 =
																				(long) (BgL_arg2645z00_1651);
																			BgL_modz00_1650 =
																				(BgL_offsetz00_1649 / BgL_auxz00_2780);
																	}}
																	{	/* Effect/spread.scm 99 */
																		long BgL_restz00_1652;

																		{	/* Effect/spread.scm 99 */
																			int BgL_arg2644z00_1653;

																			BgL_arg2644z00_1653 = (int) (((long) 16));
																			{	/* Effect/spread.scm 99 */
																				long BgL_auxz00_2784;

																				BgL_auxz00_2784 =
																					(long) (BgL_arg2644z00_1653);
																				BgL_restz00_1652 =
																					(BgL_offsetz00_1649 %
																					BgL_auxz00_2784);
																		}}
																		{	/* Effect/spread.scm 99 */

																			BgL_method3287z00_1642 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1647,
																					(int) (BgL_modz00_1650)),
																				(int) (BgL_restz00_1652));
											}}}}}}}}
											BgL_res3475z00_1667 =
												CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1642)
												(BgL_method3287z00_1642, (obj_t) (BgL_arg3401z00_1256),
													BEOA));
										}
										BgL_reszd2falsezd2_1252 = BgL_res3475z00_1667;
								}}
								{	/* Effect/spread.scm 99 */
									bool_t BgL_resz00_1253;

									if (BgL_reszd2testzd2_1250)
										{	/* Effect/spread.scm 100 */
											BgL_resz00_1253 = BgL_reszd2testzd2_1250;
										}
									else
										{	/* Effect/spread.scm 100 */
											if (BgL_reszd2truezd2_1251)
												{	/* Effect/spread.scm 100 */
													BgL_resz00_1253 = BgL_reszd2truezd2_1251;
												}
											else
												{	/* Effect/spread.scm 100 */
													BgL_resz00_1253 = BgL_reszd2falsezd2_1252;
												}
										}
									{	/* Effect/spread.scm 100 */

										{
											obj_t BgL_auxz00_2799;

											BgL_nodezf2effectzf2_bglt BgL_auxz00_2797;

											BgL_auxz00_2799 = BBOOL(BgL_resz00_1253);
											BgL_auxz00_2797 =
												(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1246);
											((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2797))->
													BgL_sidezd2effectzf3z21) =
												((obj_t) BgL_auxz00_2799), BUNSPEC);
										}
										BgL_auxz00_2722 = BgL_resz00_1253;
									}
								}
							}
						}
					}
					return BBOOL(BgL_auxz00_2722);
				}
			}
		}
	}



/* spread-side-effect!-3303 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23303zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2159, obj_t BgL_nodez00_2160)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 87 */
			{
				BgL_setqz00_bglt BgL_nodez00_1239;

				{	/* Effect/spread.scm 88 */
					bool_t BgL_auxz00_2804;

					BgL_nodez00_1239 = (BgL_setqz00_bglt) (BgL_nodez00_2160);
					{	/* Effect/spread.scm 88 */
						BgL_nodez00_bglt BgL_arg3399z00_1555;

						BgL_arg3399z00_1555 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1239))->BgL_valuez00);
						{	/* Effect/spread.scm 88 */
							bool_t BgL_res3466z00_1583;

							{	/* Effect/spread.scm 88 */
								obj_t BgL_method3287z00_1558;

								{	/* Effect/spread.scm 88 */
									BgL_objectz00_bglt BgL_objz00_1559;

									BgL_objz00_1559 = (BgL_objectz00_bglt) (BgL_arg3399z00_1555);
									{	/* Effect/spread.scm 88 */
										long BgL_objzd2classzd2numz00_1560;

										BgL_objzd2classzd2numz00_1560 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1559);
										{	/* Effect/spread.scm 88 */
											obj_t BgL_arg2643z00_1561;

											BgL_arg2643z00_1561 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 88 */
												obj_t BgL_arrayz00_1563;

												int BgL_offsetz00_1564;

												BgL_arrayz00_1563 = BgL_arg2643z00_1561;
												BgL_offsetz00_1564 =
													(int) (BgL_objzd2classzd2numz00_1560);
												{	/* Effect/spread.scm 88 */
													long BgL_offsetz00_1565;

													BgL_offsetz00_1565 =
														((long) (BgL_offsetz00_1564) - OBJECT_TYPE);
													{	/* Effect/spread.scm 88 */
														long BgL_modz00_1566;

														{	/* Effect/spread.scm 88 */
															int BgL_arg2645z00_1567;

															BgL_arg2645z00_1567 = (int) (((long) 16));
															{	/* Effect/spread.scm 88 */
																long BgL_auxz00_2814;

																BgL_auxz00_2814 = (long) (BgL_arg2645z00_1567);
																BgL_modz00_1566 =
																	(BgL_offsetz00_1565 / BgL_auxz00_2814);
														}}
														{	/* Effect/spread.scm 88 */
															long BgL_restz00_1568;

															{	/* Effect/spread.scm 88 */
																int BgL_arg2644z00_1569;

																BgL_arg2644z00_1569 = (int) (((long) 16));
																{	/* Effect/spread.scm 88 */
																	long BgL_auxz00_2818;

																	BgL_auxz00_2818 =
																		(long) (BgL_arg2644z00_1569);
																	BgL_restz00_1568 =
																		(BgL_offsetz00_1565 % BgL_auxz00_2818);
															}}
															{	/* Effect/spread.scm 88 */

																BgL_method3287z00_1558 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1563,
																		(int) (BgL_modz00_1566)),
																	(int) (BgL_restz00_1568));
								}}}}}}}}
								BgL_res3466z00_1583 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1558)
									(BgL_method3287z00_1558, (obj_t) (BgL_arg3399z00_1555),
										BEOA));
							} BgL_res3466z00_1583;
					}}
					BgL_auxz00_2804 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_2804);
				}
			}
		}
	}



/* spread-side-effect!-3301 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23301zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2161, obj_t BgL_nodez00_2162)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 80 */
			{
				BgL_castz00_bglt BgL_nodez00_1232;

				{	/* Effect/spread.scm 81 */
					bool_t BgL_auxz00_2831;

					BgL_nodez00_1232 = (BgL_castz00_bglt) (BgL_nodez00_2162);
					{	/* Effect/spread.scm 81 */
						BgL_nodez00_bglt BgL_arg3397z00_1525;

						BgL_arg3397z00_1525 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1232))->BgL_argz00);
						{	/* Effect/spread.scm 81 */
							bool_t BgL_res3463z00_1553;

							{	/* Effect/spread.scm 81 */
								obj_t BgL_method3287z00_1528;

								{	/* Effect/spread.scm 81 */
									BgL_objectz00_bglt BgL_objz00_1529;

									BgL_objz00_1529 = (BgL_objectz00_bglt) (BgL_arg3397z00_1525);
									{	/* Effect/spread.scm 81 */
										long BgL_objzd2classzd2numz00_1530;

										BgL_objzd2classzd2numz00_1530 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1529);
										{	/* Effect/spread.scm 81 */
											obj_t BgL_arg2643z00_1531;

											BgL_arg2643z00_1531 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 81 */
												obj_t BgL_arrayz00_1533;

												int BgL_offsetz00_1534;

												BgL_arrayz00_1533 = BgL_arg2643z00_1531;
												BgL_offsetz00_1534 =
													(int) (BgL_objzd2classzd2numz00_1530);
												{	/* Effect/spread.scm 81 */
													long BgL_offsetz00_1535;

													BgL_offsetz00_1535 =
														((long) (BgL_offsetz00_1534) - OBJECT_TYPE);
													{	/* Effect/spread.scm 81 */
														long BgL_modz00_1536;

														{	/* Effect/spread.scm 81 */
															int BgL_arg2645z00_1537;

															BgL_arg2645z00_1537 = (int) (((long) 16));
															{	/* Effect/spread.scm 81 */
																long BgL_auxz00_2841;

																BgL_auxz00_2841 = (long) (BgL_arg2645z00_1537);
																BgL_modz00_1536 =
																	(BgL_offsetz00_1535 / BgL_auxz00_2841);
														}}
														{	/* Effect/spread.scm 81 */
															long BgL_restz00_1538;

															{	/* Effect/spread.scm 81 */
																int BgL_arg2644z00_1539;

																BgL_arg2644z00_1539 = (int) (((long) 16));
																{	/* Effect/spread.scm 81 */
																	long BgL_auxz00_2845;

																	BgL_auxz00_2845 =
																		(long) (BgL_arg2644z00_1539);
																	BgL_restz00_1538 =
																		(BgL_offsetz00_1535 % BgL_auxz00_2845);
															}}
															{	/* Effect/spread.scm 81 */

																BgL_method3287z00_1528 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1533,
																		(int) (BgL_modz00_1536)),
																	(int) (BgL_restz00_1538));
								}}}}}}}}
								BgL_res3463z00_1553 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1528)
									(BgL_method3287z00_1528, (obj_t) (BgL_arg3397z00_1525),
										BEOA));
							}
							BgL_auxz00_2831 = BgL_res3463z00_1553;
					}}
					return BBOOL(BgL_auxz00_2831);
				}
			}
		}
	}



/* spread-side-effect!-3299 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23299zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2163, obj_t BgL_nodez00_2164)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 71 */
			{
				BgL_externz00_bglt BgL_nodez00_1223;

				BgL_nodez00_1223 = (BgL_externz00_bglt) (BgL_nodez00_2164);
				{	/* Effect/spread.scm 73 */
					obj_t BgL_resz00_1227;

					{	/* Effect/spread.scm 73 */
						bool_t BgL__ortest_3251z00_1228;

						{	/* Effect/spread.scm 73 */
							obj_t BgL_arg3395z00_1229;

							BgL_arg3395z00_1229 =
								(((BgL_externz00_bglt) CREF(BgL_nodez00_1223))->BgL_exprza2za2);
							BgL__ortest_3251z00_1228 =
								BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00
								(BgL_arg3395z00_1229);
						}
						if (BgL__ortest_3251z00_1228)
							{	/* Effect/spread.scm 73 */
								BgL_resz00_1227 = BBOOL(BgL__ortest_3251z00_1228);
							}
						else
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_2862;

								BgL_auxz00_2862 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1223);
								BgL_resz00_1227 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2862))->
									BgL_sidezd2effectzf3z21);
							}
					}
					{
						BgL_nodezf2effectzf2_bglt BgL_auxz00_2865;

						BgL_auxz00_2865 = (BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1223);
						((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2865))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_resz00_1227), BUNSPEC);
					}
					return BgL_resz00_1227;
				}
			}
		}
	}



/* spread-side-effect!-3297 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23297zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2165, obj_t BgL_nodez00_2166)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 62 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1215;

				{	/* Effect/spread.scm 63 */
					bool_t BgL_auxz00_2869;

					BgL_nodez00_1215 = (BgL_funcallz00_bglt) (BgL_nodez00_2166);
					{	/* Effect/spread.scm 64 */
						BgL_nodez00_bglt BgL_arg3392z00_1219;

						BgL_arg3392z00_1219 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1215))->BgL_funz00);
						{	/* Effect/spread.scm 64 */
							bool_t BgL_res3460z00_1518;

							{	/* Effect/spread.scm 64 */
								obj_t BgL_method3287z00_1493;

								{	/* Effect/spread.scm 64 */
									BgL_objectz00_bglt BgL_objz00_1494;

									BgL_objz00_1494 = (BgL_objectz00_bglt) (BgL_arg3392z00_1219);
									{	/* Effect/spread.scm 64 */
										long BgL_objzd2classzd2numz00_1495;

										BgL_objzd2classzd2numz00_1495 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1494);
										{	/* Effect/spread.scm 64 */
											obj_t BgL_arg2643z00_1496;

											BgL_arg2643z00_1496 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 64 */
												obj_t BgL_arrayz00_1498;

												int BgL_offsetz00_1499;

												BgL_arrayz00_1498 = BgL_arg2643z00_1496;
												BgL_offsetz00_1499 =
													(int) (BgL_objzd2classzd2numz00_1495);
												{	/* Effect/spread.scm 64 */
													long BgL_offsetz00_1500;

													BgL_offsetz00_1500 =
														((long) (BgL_offsetz00_1499) - OBJECT_TYPE);
													{	/* Effect/spread.scm 64 */
														long BgL_modz00_1501;

														{	/* Effect/spread.scm 64 */
															int BgL_arg2645z00_1502;

															BgL_arg2645z00_1502 = (int) (((long) 16));
															{	/* Effect/spread.scm 64 */
																long BgL_auxz00_2879;

																BgL_auxz00_2879 = (long) (BgL_arg2645z00_1502);
																BgL_modz00_1501 =
																	(BgL_offsetz00_1500 / BgL_auxz00_2879);
														}}
														{	/* Effect/spread.scm 64 */
															long BgL_restz00_1503;

															{	/* Effect/spread.scm 64 */
																int BgL_arg2644z00_1504;

																BgL_arg2644z00_1504 = (int) (((long) 16));
																{	/* Effect/spread.scm 64 */
																	long BgL_auxz00_2883;

																	BgL_auxz00_2883 =
																		(long) (BgL_arg2644z00_1504);
																	BgL_restz00_1503 =
																		(BgL_offsetz00_1500 % BgL_auxz00_2883);
															}}
															{	/* Effect/spread.scm 64 */

																BgL_method3287z00_1493 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1498,
																		(int) (BgL_modz00_1501)),
																	(int) (BgL_restz00_1503));
								}}}}}}}}
								BgL_res3460z00_1518 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1493)
									(BgL_method3287z00_1493, (obj_t) (BgL_arg3392z00_1219),
										BEOA));
							} BgL_res3460z00_1518;
					}}
					{	/* Effect/spread.scm 65 */
						obj_t BgL_arg3393z00_1220;

						BgL_arg3393z00_1220 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1215))->BgL_argsz00);
						BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00
							(BgL_arg3393z00_1220);
					}
					BgL_auxz00_2869 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_2869);
				}
			}
		}
	}



/* spread-side-effect!-3295 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23295zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2167, obj_t BgL_nodez00_2168)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 53 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1207;

				{	/* Effect/spread.scm 54 */
					bool_t BgL_auxz00_2898;

					BgL_nodez00_1207 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2168);
					{	/* Effect/spread.scm 55 */
						BgL_nodez00_bglt BgL_arg3389z00_1211;

						BgL_arg3389z00_1211 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1207))->BgL_funz00);
						{	/* Effect/spread.scm 55 */
							bool_t BgL_res3454z00_1462;

							{	/* Effect/spread.scm 55 */
								obj_t BgL_method3287z00_1437;

								{	/* Effect/spread.scm 55 */
									BgL_objectz00_bglt BgL_objz00_1438;

									BgL_objz00_1438 = (BgL_objectz00_bglt) (BgL_arg3389z00_1211);
									{	/* Effect/spread.scm 55 */
										long BgL_objzd2classzd2numz00_1439;

										BgL_objzd2classzd2numz00_1439 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1438);
										{	/* Effect/spread.scm 55 */
											obj_t BgL_arg2643z00_1440;

											BgL_arg2643z00_1440 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 55 */
												obj_t BgL_arrayz00_1442;

												int BgL_offsetz00_1443;

												BgL_arrayz00_1442 = BgL_arg2643z00_1440;
												BgL_offsetz00_1443 =
													(int) (BgL_objzd2classzd2numz00_1439);
												{	/* Effect/spread.scm 55 */
													long BgL_offsetz00_1444;

													BgL_offsetz00_1444 =
														((long) (BgL_offsetz00_1443) - OBJECT_TYPE);
													{	/* Effect/spread.scm 55 */
														long BgL_modz00_1445;

														{	/* Effect/spread.scm 55 */
															int BgL_arg2645z00_1446;

															BgL_arg2645z00_1446 = (int) (((long) 16));
															{	/* Effect/spread.scm 55 */
																long BgL_auxz00_2908;

																BgL_auxz00_2908 = (long) (BgL_arg2645z00_1446);
																BgL_modz00_1445 =
																	(BgL_offsetz00_1444 / BgL_auxz00_2908);
														}}
														{	/* Effect/spread.scm 55 */
															long BgL_restz00_1447;

															{	/* Effect/spread.scm 55 */
																int BgL_arg2644z00_1448;

																BgL_arg2644z00_1448 = (int) (((long) 16));
																{	/* Effect/spread.scm 55 */
																	long BgL_auxz00_2912;

																	BgL_auxz00_2912 =
																		(long) (BgL_arg2644z00_1448);
																	BgL_restz00_1447 =
																		(BgL_offsetz00_1444 % BgL_auxz00_2912);
															}}
															{	/* Effect/spread.scm 55 */

																BgL_method3287z00_1437 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1442,
																		(int) (BgL_modz00_1445)),
																	(int) (BgL_restz00_1447));
								}}}}}}}}
								BgL_res3454z00_1462 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1437)
									(BgL_method3287z00_1437, (obj_t) (BgL_arg3389z00_1211),
										BEOA));
							} BgL_res3454z00_1462;
					}}
					{	/* Effect/spread.scm 56 */
						BgL_nodez00_bglt BgL_arg3390z00_1212;

						BgL_arg3390z00_1212 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1207))->BgL_argz00);
						{	/* Effect/spread.scm 56 */
							bool_t BgL_res3457z00_1490;

							{	/* Effect/spread.scm 56 */
								obj_t BgL_method3287z00_1465;

								{	/* Effect/spread.scm 56 */
									BgL_objectz00_bglt BgL_objz00_1466;

									BgL_objz00_1466 = (BgL_objectz00_bglt) (BgL_arg3390z00_1212);
									{	/* Effect/spread.scm 56 */
										long BgL_objzd2classzd2numz00_1467;

										BgL_objzd2classzd2numz00_1467 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1466);
										{	/* Effect/spread.scm 56 */
											obj_t BgL_arg2643z00_1468;

											BgL_arg2643z00_1468 =
												PROCEDURE_REF
												(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
												(int) (((long) 1)));
											{	/* Effect/spread.scm 56 */
												obj_t BgL_arrayz00_1470;

												int BgL_offsetz00_1471;

												BgL_arrayz00_1470 = BgL_arg2643z00_1468;
												BgL_offsetz00_1471 =
													(int) (BgL_objzd2classzd2numz00_1467);
												{	/* Effect/spread.scm 56 */
													long BgL_offsetz00_1472;

													BgL_offsetz00_1472 =
														((long) (BgL_offsetz00_1471) - OBJECT_TYPE);
													{	/* Effect/spread.scm 56 */
														long BgL_modz00_1473;

														{	/* Effect/spread.scm 56 */
															int BgL_arg2645z00_1474;

															BgL_arg2645z00_1474 = (int) (((long) 16));
															{	/* Effect/spread.scm 56 */
																long BgL_auxz00_2932;

																BgL_auxz00_2932 = (long) (BgL_arg2645z00_1474);
																BgL_modz00_1473 =
																	(BgL_offsetz00_1472 / BgL_auxz00_2932);
														}}
														{	/* Effect/spread.scm 56 */
															long BgL_restz00_1475;

															{	/* Effect/spread.scm 56 */
																int BgL_arg2644z00_1476;

																BgL_arg2644z00_1476 = (int) (((long) 16));
																{	/* Effect/spread.scm 56 */
																	long BgL_auxz00_2936;

																	BgL_auxz00_2936 =
																		(long) (BgL_arg2644z00_1476);
																	BgL_restz00_1475 =
																		(BgL_offsetz00_1472 % BgL_auxz00_2936);
															}}
															{	/* Effect/spread.scm 56 */

																BgL_method3287z00_1465 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1470,
																		(int) (BgL_modz00_1473)),
																	(int) (BgL_restz00_1475));
								}}}}}}}}
								BgL_res3457z00_1490 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3287z00_1465)
									(BgL_method3287z00_1465, (obj_t) (BgL_arg3390z00_1212),
										BEOA));
							} BgL_res3457z00_1490;
					}}
					BgL_auxz00_2898 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_2898);
				}
			}
		}
	}



/* spread-side-effect!-3293 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23293zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2169, obj_t BgL_nodez00_2170)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 43 */
			{
				BgL_appz00_bglt BgL_nodez00_1195;

				BgL_nodez00_1195 = (BgL_appz00_bglt) (BgL_nodez00_2170);
				{	/* Effect/spread.scm 45 */
					obj_t BgL_resz00_1199;

					{	/* Effect/spread.scm 45 */
						bool_t BgL__ortest_3244z00_1200;

						{	/* Effect/spread.scm 45 */
							obj_t BgL_arg3387z00_1204;

							BgL_arg3387z00_1204 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1195))->BgL_argsz00);
							BgL__ortest_3244z00_1200 =
								BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00
								(BgL_arg3387z00_1204);
						}
						if (BgL__ortest_3244z00_1200)
							{	/* Effect/spread.scm 45 */
								BgL_resz00_1199 = BBOOL(BgL__ortest_3244z00_1200);
							}
						else
							{	/* Effect/spread.scm 46 */
								BgL_funz00_bglt BgL_obj1814z00_1432;

								{	/* Effect/spread.scm 46 */
									BgL_valuez00_bglt BgL_auxz00_2953;

									{	/* Effect/spread.scm 46 */
										BgL_variablez00_bglt BgL_arg3385z00_1202;

										{	/* Effect/spread.scm 46 */
											BgL_varz00_bglt BgL_obj2155z00_1430;

											BgL_obj2155z00_1430 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_1195))->
												BgL_funz00);
											BgL_arg3385z00_1202 =
												(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1430))->
												BgL_variablez00);
										}
										BgL_auxz00_2953 =
											(((BgL_variablez00_bglt) CREF(BgL_arg3385z00_1202))->
											BgL_valuez00);
									}
									BgL_obj1814z00_1432 = (BgL_funz00_bglt) (BgL_auxz00_2953);
								}
								BgL_resz00_1199 =
									(((BgL_funz00_bglt) CREF(BgL_obj1814z00_1432))->
									BgL_sidezd2effectzf3z21);
							}
					}
					{
						BgL_nodezf2effectzf2_bglt BgL_auxz00_2959;

						BgL_auxz00_2959 = (BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1195);
						((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2959))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_resz00_1199), BUNSPEC);
					}
					return BgL_resz00_1199;
				}
			}
		}
	}



/* spread-side-effect!-3291 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23291zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2171, obj_t BgL_nodez00_2172)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 35 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1188;

				{	/* Effect/spread.scm 36 */
					bool_t BgL_auxz00_2963;

					BgL_nodez00_1188 = (BgL_sequencez00_bglt) (BgL_nodez00_2172);
					{	/* Effect/spread.scm 36 */
						bool_t BgL_resz00_1191;

						{	/* Effect/spread.scm 36 */
							obj_t BgL_arg3382z00_1192;

							BgL_arg3382z00_1192 =
								(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1188))->BgL_nodesz00);
							BgL_resz00_1191 =
								BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00
								(BgL_arg3382z00_1192);
						}
						{
							obj_t BgL_auxz00_2968;

							BgL_nodezf2effectzf2_bglt BgL_auxz00_2966;

							BgL_auxz00_2968 = BBOOL(BgL_resz00_1191);
							BgL_auxz00_2966 = (BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1188);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2966))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_auxz00_2968), BUNSPEC);
						}
						BgL_auxz00_2963 = BgL_resz00_1191;
					}
					return BBOOL(BgL_auxz00_2963);
				}
			}
		}
	}



/* spread-side-effect!-3289 */
	obj_t BGl_spreadzd2sidezd2effectz12zd23289zc0zzeffect_spreadz00(obj_t
		BgL_envz00_2173, obj_t BgL_nodez00_2174)
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 29 */
			{
				BgL_varz00_bglt BgL_nodez00_1179;

				{	/* Effect/spread.scm 30 */
					bool_t BgL_auxz00_2973;

					BgL_nodez00_1179 = (BgL_varz00_bglt) (BgL_nodez00_2174);
					{	/* Effect/spread.scm 30 */
						bool_t BgL_testz00_2974;

						{	/* Effect/spread.scm 30 */
							obj_t BgL_auxz00_2975;

							{	/* Effect/spread.scm 30 */
								BgL_variablez00_bglt BgL_obj1614z00_1424;

								BgL_obj1614z00_1424 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1179))->BgL_variablez00);
								BgL_auxz00_2975 =
									(((BgL_variablez00_bglt) CREF(BgL_obj1614z00_1424))->
									BgL_accessz00);
							}
							BgL_testz00_2974 =
								(BgL_auxz00_2975 == CNST_TABLE_REF(((long) 0)));
						}
						if (BgL_testz00_2974)
							{	/* Effect/spread.scm 30 */
								BgL_auxz00_2973 = ((bool_t) 0);
							}
						else
							{	/* Effect/spread.scm 30 */
								BgL_auxz00_2973 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_2973);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_spreadz00()
	{
		AN_OBJECT;
		{	/* Effect/spread.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3540z00zzeffect_spreadz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3540z00zzeffect_spreadz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3540z00zzeffect_spreadz00));
		}
	}

#ifdef __cplusplus
}
#endif
