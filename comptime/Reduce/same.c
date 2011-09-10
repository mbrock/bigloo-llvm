/*===========================================================================*/
/*   (Reduce/same.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/same.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_kwotez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}               *BgL_kwotez00_bglt;

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

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

	typedef struct BgL_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_getfieldz00_bglt;

	typedef struct BgL_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_setfieldz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

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


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_samezd2nodezf3zd2sequence3307zf3zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__samezd2nodezf3zd2default3296zf3zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_samez00();
	static obj_t BGl_samezd2nodezf3zd2funcall3311zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_vallocz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_samez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzreduce_samez00();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_samezd2nodezf3zd2condition3328zf3zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_samezd2nodezf3z21zzreduce_samez00(BgL_nodez00_bglt, BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_samezd2nodezf3zd2atom3301zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_samezd2nodezf3zd2kwote3303zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_samezd2nodezf3zd2getfield3319zf3zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzreduce_samez00();
	static obj_t BGl_samezd2nodezf3zd2setfield3321zf3zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_samezd2nodezf3zd2extern3315zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_samez00 = BUNSPEC;
	static obj_t BGl_samezd2nodezf3zd2appzd2ly3309z21zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_samez00();
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_samezd2nodezf3zd2cast3325zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_samezd2nodezf3zd2app3313zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl__samezd2nodezf3z21zzreduce_samez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_samezd2nodezf3zd2valloc3323zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_samezd2nodeza2zf3z83zzreduce_samez00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_samez00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	static obj_t BGl_samezd2nodezf3zd2letzd2var3333z21zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_samezd2nodezf3zd2pragma3317zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_samezd2nodezf3zd2var3305zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_aliasedzf3zf3zzreduce_samez00(BgL_variablez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static obj_t BGl_samezd2nodezf3zd2fail3331zf3zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_samez00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
		BgL_bgl__sameza7d2nodeza7f3za73609za7,
		BGl__samezd2nodezf3z21zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3600z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3610za7,
		BGl_samezd2nodezf3zd2valloc3323zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3590z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3611za7,
		BGl_samezd2nodezf3zd2kwote3303zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3589z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3612za7,
		BGl_samezd2nodezf3zd2atom3301zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3601z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3613za7,
		BGl_samezd2nodezf3zd2cast3325zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3591z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3614za7,
		BGl_samezd2nodezf3zd2var3305zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3602z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3615za7,
		BGl_samezd2nodezf3zd2condition3328zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3592z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3616za7,
		BGl_samezd2nodezf3zd2sequence3307zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3603z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3617za7,
		BGl_samezd2nodezf3zd2fail3331zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3593z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3618za7,
		BGl_samezd2nodezf3zd2appzd2ly3309z21zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3604z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3619za7,
		BGl_samezd2nodezf3zd2letzd2var3333z21zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3594z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3620za7,
		BGl_samezd2nodezf3zd2funcall3311zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3595z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3621za7,
		BGl_samezd2nodezf3zd2app3313zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3596z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3622za7,
		BGl_samezd2nodezf3zd2extern3315zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3597z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3623za7,
		BGl_samezd2nodezf3zd2pragma3317zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3598z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3624za7,
		BGl_samezd2nodezf3zd2getfield3319zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3599z00zzreduce_samez00,
		BgL_bgl_sameza7d2nodeza7f3za7d3625za7,
		BGl_samezd2nodezf3zd2setfield3321zf3zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3588z00zzreduce_samez00,
		BgL_bgl_string3588za700za7za7r3626za7, "same-node?", 10);
	      DEFINE_STRING(BGl_string3605z00zzreduce_samez00,
		BgL_bgl_string3605za700za7za7r3627za7, "reduce_same", 11);
	      DEFINE_STRING(BGl_string3606z00zzreduce_samez00,
		BgL_bgl_string3606za700za7za7r3628za7, "read ", 5);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_samezd2nodezf3zd2default3296zd2envz21zzreduce_samez00,
		BgL_bgl__sameza7d2nodeza7f3za73629za7,
		BGl__samezd2nodezf3zd2default3296zf3zzreduce_samez00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_samez00(long
		BgL_checksumz00_2262, char *BgL_fromz00_2263)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_samez00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_samez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_samez00();
					BGl_cnstzd2initzd2zzreduce_samez00();
					BGl_importedzd2moduleszd2initz00zzreduce_samez00();
					BGl_genericzd2initzd2zzreduce_samez00();
					BGl_methodzd2initzd2zzreduce_samez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_samez00()
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_same");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_same");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"reduce_same");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_same");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_samez00()
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 15 */
			{	/* Reduce/same.scm 15 */
				obj_t BgL_cportz00_2246;

				BgL_cportz00_2246 =
					bgl_open_input_string(BGl_string3606z00zzreduce_samez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2247;

					BgL_iz00_2247 = ((long) 0);
				BgL_loopz00_2248:
					if ((BgL_iz00_2247 == ((long) -1)))
						{	/* Reduce/same.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/same.scm 15 */
							{	/* Reduce/same.scm 15 */
								obj_t BgL_arg3608z00_2250;

								{	/* Reduce/same.scm 15 */

									{	/* Reduce/same.scm 15 */
										obj_t BgL_locationz00_2252;

										BgL_locationz00_2252 = BBOOL(((bool_t) 0));
										{	/* Reduce/same.scm 15 */

											BgL_arg3608z00_2250 =
												BGl_readz00zz__readerz00(BgL_cportz00_2246,
												BgL_locationz00_2252);
										}
									}
								}
								{	/* Reduce/same.scm 15 */
									int BgL_auxz00_2282;

									BgL_auxz00_2282 = (int) (BgL_iz00_2247);
									CNST_TABLE_SET(BgL_auxz00_2282, BgL_arg3608z00_2250);
							}}
							{	/* Reduce/same.scm 15 */
								int BgL_auxz00_2253;

								BgL_auxz00_2253 = (int) ((BgL_iz00_2247 - ((long) 1)));
								{
									long BgL_iz00_2287;

									BgL_iz00_2287 = (long) (BgL_auxz00_2253);
									BgL_iz00_2247 = BgL_iz00_2287;
									goto BgL_loopz00_2248;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_samez00()
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 15 */
			return BUNSPEC;
		}
	}



/* same-node*? */
	bool_t BGl_samezd2nodeza2zf3z83zzreduce_samez00(obj_t BgL_node1z00_55,
		obj_t BgL_node2z00_56, obj_t BgL_aliasz00_57)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 214 */
		BGl_samezd2nodeza2zf3z83zzreduce_samez00:
			if (NULLP(BgL_node1z00_55))
				{	/* Reduce/same.scm 216 */
					return NULLP(BgL_node2z00_56);
				}
			else
				{	/* Reduce/same.scm 216 */
					if (NULLP(BgL_node2z00_56))
						{	/* Reduce/same.scm 218 */
							return ((bool_t) 0);
						}
					else
						{	/* Reduce/same.scm 220 */
							bool_t BgL_testz00_2294;

							{	/* Reduce/same.scm 220 */
								obj_t BgL_arg3339z00_838;

								obj_t BgL_arg3340z00_839;

								BgL_arg3339z00_838 = CAR(BgL_node1z00_55);
								BgL_arg3340z00_839 = CAR(BgL_node2z00_56);
								{	/* Reduce/same.scm 220 */
									bool_t BgL_res3540z00_1550;

									{	/* Reduce/same.scm 220 */
										BgL_nodez00_bglt BgL_node1z00_1522;

										BgL_nodez00_bglt BgL_node2z00_1523;

										BgL_node1z00_1522 = (BgL_nodez00_bglt) (BgL_arg3339z00_838);
										BgL_node2z00_1523 = (BgL_nodez00_bglt) (BgL_arg3340z00_839);
										{	/* Reduce/same.scm 220 */
											obj_t BgL_method3299z00_1525;

											{	/* Reduce/same.scm 220 */
												BgL_objectz00_bglt BgL_objz00_1526;

												BgL_objz00_1526 =
													(BgL_objectz00_bglt) (BgL_node1z00_1522);
												{	/* Reduce/same.scm 220 */
													long BgL_objzd2classzd2numz00_1527;

													BgL_objzd2classzd2numz00_1527 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1526);
													{	/* Reduce/same.scm 220 */
														obj_t BgL_arg2643z00_1528;

														BgL_arg2643z00_1528 =
															PROCEDURE_REF
															(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
															(int) (((long) 1)));
														{	/* Reduce/same.scm 220 */
															obj_t BgL_arrayz00_1530;

															int BgL_offsetz00_1531;

															BgL_arrayz00_1530 = BgL_arg2643z00_1528;
															BgL_offsetz00_1531 =
																(int) (BgL_objzd2classzd2numz00_1527);
															{	/* Reduce/same.scm 220 */
																long BgL_offsetz00_1532;

																BgL_offsetz00_1532 =
																	((long) (BgL_offsetz00_1531) - OBJECT_TYPE);
																{	/* Reduce/same.scm 220 */
																	long BgL_modz00_1533;

																	{	/* Reduce/same.scm 220 */
																		int BgL_arg2645z00_1534;

																		BgL_arg2645z00_1534 = (int) (((long) 16));
																		{	/* Reduce/same.scm 220 */
																			long BgL_auxz00_2307;

																			BgL_auxz00_2307 =
																				(long) (BgL_arg2645z00_1534);
																			BgL_modz00_1533 =
																				(BgL_offsetz00_1532 / BgL_auxz00_2307);
																	}}
																	{	/* Reduce/same.scm 220 */
																		long BgL_restz00_1535;

																		{	/* Reduce/same.scm 220 */
																			int BgL_arg2644z00_1536;

																			BgL_arg2644z00_1536 = (int) (((long) 16));
																			{	/* Reduce/same.scm 220 */
																				long BgL_auxz00_2311;

																				BgL_auxz00_2311 =
																					(long) (BgL_arg2644z00_1536);
																				BgL_restz00_1535 =
																					(BgL_offsetz00_1532 %
																					BgL_auxz00_2311);
																		}}
																		{	/* Reduce/same.scm 220 */

																			BgL_method3299z00_1525 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1530,
																					(int) (BgL_modz00_1533)),
																				(int) (BgL_restz00_1535));
											}}}}}}}}
											BgL_res3540z00_1550 =
												CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1525)
												(BgL_method3299z00_1525, (obj_t) (BgL_node1z00_1522),
													(obj_t) (BgL_node2z00_1523), BgL_aliasz00_57, BEOA));
									}}
									BgL_testz00_2294 = BgL_res3540z00_1550;
							}}
							if (BgL_testz00_2294)
								{
									obj_t BgL_node2z00_2325;

									obj_t BgL_node1z00_2323;

									BgL_node1z00_2323 = CDR(BgL_node1z00_55);
									BgL_node2z00_2325 = CDR(BgL_node2z00_56);
									BgL_node2z00_56 = BgL_node2z00_2325;
									BgL_node1z00_55 = BgL_node1z00_2323;
									goto BGl_samezd2nodeza2zf3z83zzreduce_samez00;
								}
							else
								{	/* Reduce/same.scm 220 */
									return ((bool_t) 0);
								}
						}
				}
		}
	}



/* aliased? */
	bool_t BGl_aliasedzf3zf3zzreduce_samez00(BgL_variablez00_bglt BgL_var1z00_58,
		BgL_variablez00_bglt BgL_var2z00_59, obj_t BgL_aliasz00_60)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 228 */
			{
				obj_t BgL_aliasz00_841;

				BgL_aliasz00_841 = BgL_aliasz00_60;
			BgL_zc3anonymousza33341ze3z83_842:
				if (NULLP(BgL_aliasz00_841))
					{	/* Reduce/same.scm 231 */
						return ((bool_t) 0);
					}
				else
					{	/* Reduce/same.scm 231 */
						if ((CAR(CAR(BgL_aliasz00_841)) == (obj_t) (BgL_var1z00_58)))
							{	/* Reduce/same.scm 233 */
								if ((CDR(CAR(BgL_aliasz00_841)) == (obj_t) (BgL_var2z00_59)))
									{	/* Reduce/same.scm 234 */
										return ((bool_t) 1);
									}
								else
									{
										obj_t BgL_aliasz00_2339;

										BgL_aliasz00_2339 = CDR(BgL_aliasz00_841);
										BgL_aliasz00_841 = BgL_aliasz00_2339;
										goto BgL_zc3anonymousza33341ze3z83_842;
									}
							}
						else
							{	/* Reduce/same.scm 233 */
								if ((CAR(CAR(BgL_aliasz00_841)) == (obj_t) (BgL_var2z00_59)))
									{	/* Reduce/same.scm 237 */
										if (
											(CDR(CAR(BgL_aliasz00_841)) == (obj_t) (BgL_var1z00_58)))
											{	/* Reduce/same.scm 238 */
												return ((bool_t) 1);
											}
										else
											{
												obj_t BgL_aliasz00_2351;

												BgL_aliasz00_2351 = CDR(BgL_aliasz00_841);
												BgL_aliasz00_841 = BgL_aliasz00_2351;
												goto BgL_zc3anonymousza33341ze3z83_842;
											}
									}
								else
									{
										obj_t BgL_aliasz00_2353;

										BgL_aliasz00_2353 = CDR(BgL_aliasz00_841);
										BgL_aliasz00_841 = BgL_aliasz00_2353;
										goto BgL_zc3anonymousza33341ze3z83_842;
									}
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_samez00()
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_samezd2nodezf3zd2default3296zd2envz21zzreduce_samez00,
				BGl_nodez00zzast_nodez00, BGl_string3588z00zzreduce_samez00);
		}
	}



/* same-node? */
	BGL_EXPORTED_DEF bool_t BGl_samezd2nodezf3z21zzreduce_samez00(BgL_nodez00_bglt
		BgL_node1z00_1, BgL_nodez00_bglt BgL_node2z00_2, obj_t BgL_aliasz00_3)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 26 */
			{	/* Reduce/same.scm 26 */
				obj_t BgL_method3299z00_1565;

				{	/* Reduce/same.scm 26 */
					BgL_objectz00_bglt BgL_objz00_1566;

					BgL_objz00_1566 = (BgL_objectz00_bglt) (BgL_node1z00_1);
					{	/* Reduce/same.scm 26 */
						long BgL_objzd2classzd2numz00_1567;

						BgL_objzd2classzd2numz00_1567 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1566);
						{	/* Reduce/same.scm 26 */
							obj_t BgL_arg2643z00_1568;

							BgL_arg2643z00_1568 =
								PROCEDURE_REF(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
								(int) (((long) 1)));
							{	/* Reduce/same.scm 26 */
								obj_t BgL_arrayz00_1570;

								int BgL_offsetz00_1571;

								BgL_arrayz00_1570 = BgL_arg2643z00_1568;
								BgL_offsetz00_1571 = (int) (BgL_objzd2classzd2numz00_1567);
								{	/* Reduce/same.scm 26 */
									long BgL_offsetz00_1572;

									BgL_offsetz00_1572 =
										((long) (BgL_offsetz00_1571) - OBJECT_TYPE);
									{	/* Reduce/same.scm 26 */
										long BgL_modz00_1573;

										{	/* Reduce/same.scm 26 */
											int BgL_arg2645z00_1574;

											BgL_arg2645z00_1574 = (int) (((long) 16));
											{	/* Reduce/same.scm 26 */
												long BgL_auxz00_2364;

												BgL_auxz00_2364 = (long) (BgL_arg2645z00_1574);
												BgL_modz00_1573 =
													(BgL_offsetz00_1572 / BgL_auxz00_2364);
										}}
										{	/* Reduce/same.scm 26 */
											long BgL_restz00_1575;

											{	/* Reduce/same.scm 26 */
												int BgL_arg2644z00_1576;

												BgL_arg2644z00_1576 = (int) (((long) 16));
												{	/* Reduce/same.scm 26 */
													long BgL_auxz00_2368;

													BgL_auxz00_2368 = (long) (BgL_arg2644z00_1576);
													BgL_restz00_1575 =
														(BgL_offsetz00_1572 % BgL_auxz00_2368);
											}}
											{	/* Reduce/same.scm 26 */

												BgL_method3299z00_1565 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1570,
														(int) (BgL_modz00_1573)), (int) (BgL_restz00_1575));
				}}}}}}}}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1565) (BgL_method3299z00_1565,
						(obj_t) (BgL_node1z00_1),
						(obj_t) (BgL_node2z00_2), BgL_aliasz00_3, BEOA));
			}
		}
	}



/* _same-node? */
	obj_t BGl__samezd2nodezf3z21zzreduce_samez00(obj_t BgL_envz00_2158,
		obj_t BgL_node1z00_2159, obj_t BgL_node2z00_2160, obj_t BgL_aliasz00_2161)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 26 */
			return
				BBOOL(BGl_samezd2nodezf3z21zzreduce_samez00(
					(BgL_nodez00_bglt) (BgL_node1z00_2159),
					(BgL_nodez00_bglt) (BgL_node2z00_2160), BgL_aliasz00_2161));
		}
	}



/* _same-node?-default3296 */
	obj_t BGl__samezd2nodezf3zd2default3296zf3zzreduce_samez00(obj_t
		BgL_envz00_2162, obj_t BgL_node1z00_2163, obj_t BgL_node2z00_2164,
		obj_t BgL_aliasz00_2165)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 15 */
			return BBOOL(((bool_t) 0));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_samez00()
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_atomz00zzast_nodez00,
				BGl_proc3589z00zzreduce_samez00, BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_kwotez00zzast_nodez00,
				BGl_proc3590z00zzreduce_samez00, BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_varz00zzast_nodez00,
				BGl_proc3591z00zzreduce_samez00, BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_sequencez00zzast_nodez00, BGl_proc3592z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3593z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_funcallz00zzast_nodez00, BGl_proc3594z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_appz00zzast_nodez00,
				BGl_proc3595z00zzreduce_samez00, BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_externz00zzast_nodez00, BGl_proc3596z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_pragmaz00zzast_nodez00, BGl_proc3597z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_getfieldz00zzast_nodez00, BGl_proc3598z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_setfieldz00zzast_nodez00, BGl_proc3599z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_vallocz00zzast_nodez00, BGl_proc3600z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_castz00zzast_nodez00,
				BGl_proc3601z00zzreduce_samez00, BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3602z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_failz00zzast_nodez00,
				BGl_proc3603z00zzreduce_samez00, BGl_string3588z00zzreduce_samez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3604z00zzreduce_samez00,
				BGl_string3588z00zzreduce_samez00);
		}
	}



/* same-node?-let-var3333 */
	obj_t BGl_samezd2nodezf3zd2letzd2var3333z21zzreduce_samez00(obj_t
		BgL_envz00_2182, obj_t BgL_nodez00_2183, obj_t BgL_node2z00_2184,
		obj_t BgL_aliasz00_2185)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 180 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1451;

				BgL_nodez00_bglt BgL_node2z00_1452;

				obj_t BgL_aliasz00_1453;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_auxz00_2401;

					BgL_nodez00_1451 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2183);
					BgL_node2z00_1452 = (BgL_nodez00_bglt) (BgL_node2z00_2184);
					BgL_aliasz00_1453 = BgL_aliasz00_2185;
					{	/* Reduce/same.scm 185 */
						bool_t BgL_testz00_2402;

						{	/* Reduce/same.scm 185 */
							obj_t BgL_obj3099z00_2061;

							BgL_obj3099z00_2061 = (obj_t) (BgL_node2z00_1452);
							BgL_testz00_2402 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3099z00_2061,
								BGl_letzd2varzd2zzast_nodez00);
						}
						if (BgL_testz00_2402)
							{	/* Reduce/same.scm 186 */
								bool_t BgL_testz00_2405;

								{	/* Reduce/same.scm 186 */
									obj_t BgL_auxz00_2406;

									{	/* Reduce/same.scm 186 */
										BgL_typez00_bglt BgL_auxz00_2407;

										{
											BgL_nodez00_bglt BgL_auxz00_2408;

											BgL_auxz00_2408 = (BgL_nodez00_bglt) (BgL_nodez00_1451);
											BgL_auxz00_2407 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2408))->
												BgL_typez00);
										}
										BgL_auxz00_2406 = (obj_t) (BgL_auxz00_2407);
									}
									BgL_testz00_2405 =
										(BgL_auxz00_2406 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1452))->
												BgL_typez00)));
								}
								if (BgL_testz00_2405)
									{	/* Reduce/same.scm 187 */
										bool_t BgL_testz00_2415;

										{	/* Reduce/same.scm 187 */
											long BgL_auxz00_2416;

											{	/* Reduce/same.scm 188 */
												obj_t BgL_auxz00_2419;

												{
													BgL_letzd2varzd2_bglt BgL_auxz00_2420;

													BgL_auxz00_2420 =
														(BgL_letzd2varzd2_bglt) (BgL_node2z00_1452);
													BgL_auxz00_2419 =
														(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_2420))->
														BgL_bindingsz00);
												}
												BgL_auxz00_2416 = bgl_list_length(BgL_auxz00_2419);
											}
											BgL_testz00_2415 =
												(bgl_list_length(
													(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1451))->
														BgL_bindingsz00)) == BgL_auxz00_2416);
										}
										if (BgL_testz00_2415)
											{	/* Reduce/same.scm 189 */
												obj_t BgL_newzd2aliaszd2_1459;

												{	/* Reduce/same.scm 189 */
													obj_t BgL_arg3520z00_1488;

													{	/* Reduce/same.scm 189 */
														obj_t BgL_ll3290z00_1489;

														obj_t BgL_ll3291z00_1490;

														BgL_ll3290z00_1489 =
															(((BgL_letzd2varzd2_bglt)
																CREF(BgL_nodez00_1451))->BgL_bindingsz00);
														{
															BgL_letzd2varzd2_bglt BgL_auxz00_2426;

															BgL_auxz00_2426 =
																(BgL_letzd2varzd2_bglt) (BgL_node2z00_1452);
															BgL_ll3291z00_1490 =
																(((BgL_letzd2varzd2_bglt)
																	CREF(BgL_auxz00_2426))->BgL_bindingsz00);
														}
														if (NULLP(BgL_ll3290z00_1489))
															{	/* Reduce/same.scm 189 */
																BgL_arg3520z00_1488 = BNIL;
															}
														else
															{	/* Reduce/same.scm 189 */
																obj_t BgL_head3292z00_1492;

																BgL_head3292z00_1492 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_ll3290z00_1494;

																	obj_t BgL_ll3291z00_1495;

																	obj_t BgL_tail3293z00_1496;

																	BgL_ll3290z00_1494 = BgL_ll3290z00_1489;
																	BgL_ll3291z00_1495 = BgL_ll3291z00_1490;
																	BgL_tail3293z00_1496 = BgL_head3292z00_1492;
																BgL_zc3anonymousza33522ze3z83_1497:
																	if (NULLP(BgL_ll3290z00_1494))
																		{	/* Reduce/same.scm 189 */
																			BgL_arg3520z00_1488 =
																				CDR(BgL_head3292z00_1492);
																		}
																	else
																		{	/* Reduce/same.scm 189 */
																			obj_t BgL_newtail3294z00_1499;

																			{	/* Reduce/same.scm 189 */
																				obj_t BgL_arg3526z00_1502;

																				{	/* Reduce/same.scm 189 */
																					obj_t BgL_b1z00_1504;

																					obj_t BgL_b2z00_1505;

																					BgL_b1z00_1504 =
																						CAR(BgL_ll3290z00_1494);
																					BgL_b2z00_1505 =
																						CAR(BgL_ll3291z00_1495);
																					BgL_arg3526z00_1502 =
																						MAKE_PAIR(CAR(BgL_b1z00_1504),
																						CAR(BgL_b2z00_1505));
																				}
																				BgL_newtail3294z00_1499 =
																					MAKE_PAIR(BgL_arg3526z00_1502, BNIL);
																			}
																			SET_CDR(BgL_tail3293z00_1496,
																				BgL_newtail3294z00_1499);
																			{
																				obj_t BgL_tail3293z00_2446;

																				obj_t BgL_ll3291z00_2444;

																				obj_t BgL_ll3290z00_2442;

																				BgL_ll3290z00_2442 =
																					CDR(BgL_ll3290z00_1494);
																				BgL_ll3291z00_2444 =
																					CDR(BgL_ll3291z00_1495);
																				BgL_tail3293z00_2446 =
																					BgL_newtail3294z00_1499;
																				BgL_tail3293z00_1496 =
																					BgL_tail3293z00_2446;
																				BgL_ll3291z00_1495 = BgL_ll3291z00_2444;
																				BgL_ll3290z00_1494 = BgL_ll3290z00_2442;
																				goto BgL_zc3anonymousza33522ze3z83_1497;
																			}
																		}
																}
															}
													}
													BgL_newzd2aliaszd2_1459 =
														BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3520z00_1488, BgL_aliasz00_1453);
												}
												{	/* Reduce/same.scm 194 */
													bool_t BgL_testz00_2448;

													{	/* Reduce/same.scm 194 */
														BgL_nodez00_bglt BgL_arg3518z00_1486;

														BgL_nodez00_bglt BgL_arg3519z00_1487;

														BgL_arg3518z00_1486 =
															(((BgL_letzd2varzd2_bglt)
																CREF(BgL_nodez00_1451))->BgL_bodyz00);
														{
															BgL_letzd2varzd2_bglt BgL_auxz00_2450;

															BgL_auxz00_2450 =
																(BgL_letzd2varzd2_bglt) (BgL_node2z00_1452);
															BgL_arg3519z00_1487 =
																(((BgL_letzd2varzd2_bglt)
																	CREF(BgL_auxz00_2450))->BgL_bodyz00);
														}
														{	/* Reduce/same.scm 194 */
															bool_t BgL_res3584z00_2113;

															{	/* Reduce/same.scm 194 */
																obj_t BgL_method3299z00_2088;

																{	/* Reduce/same.scm 194 */
																	BgL_objectz00_bglt BgL_objz00_2089;

																	BgL_objz00_2089 =
																		(BgL_objectz00_bglt) (BgL_arg3518z00_1486);
																	{	/* Reduce/same.scm 194 */
																		long BgL_objzd2classzd2numz00_2090;

																		BgL_objzd2classzd2numz00_2090 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2089);
																		{	/* Reduce/same.scm 194 */
																			obj_t BgL_arg2643z00_2091;

																			BgL_arg2643z00_2091 =
																				PROCEDURE_REF
																				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																				(int) (((long) 1)));
																			{	/* Reduce/same.scm 194 */
																				obj_t BgL_arrayz00_2093;

																				int BgL_offsetz00_2094;

																				BgL_arrayz00_2093 = BgL_arg2643z00_2091;
																				BgL_offsetz00_2094 =
																					(int) (BgL_objzd2classzd2numz00_2090);
																				{	/* Reduce/same.scm 194 */
																					long BgL_offsetz00_2095;

																					BgL_offsetz00_2095 =
																						(
																						(long) (BgL_offsetz00_2094) -
																						OBJECT_TYPE);
																					{	/* Reduce/same.scm 194 */
																						long BgL_modz00_2096;

																						{	/* Reduce/same.scm 194 */
																							int BgL_arg2645z00_2097;

																							BgL_arg2645z00_2097 =
																								(int) (((long) 16));
																							{	/* Reduce/same.scm 194 */
																								long BgL_auxz00_2461;

																								BgL_auxz00_2461 =
																									(long) (BgL_arg2645z00_2097);
																								BgL_modz00_2096 =
																									(BgL_offsetz00_2095 /
																									BgL_auxz00_2461);
																						}}
																						{	/* Reduce/same.scm 194 */
																							long BgL_restz00_2098;

																							{	/* Reduce/same.scm 194 */
																								int BgL_arg2644z00_2099;

																								BgL_arg2644z00_2099 =
																									(int) (((long) 16));
																								{	/* Reduce/same.scm 194 */
																									long BgL_auxz00_2465;

																									BgL_auxz00_2465 =
																										(long)
																										(BgL_arg2644z00_2099);
																									BgL_restz00_2098 =
																										(BgL_offsetz00_2095 %
																										BgL_auxz00_2465);
																							}}
																							{	/* Reduce/same.scm 194 */

																								BgL_method3299z00_2088 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2093,
																										(int) (BgL_modz00_2096)),
																									(int) (BgL_restz00_2098));
																}}}}}}}}
																BgL_res3584z00_2113 =
																	CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_2088)
																	(BgL_method3299z00_2088,
																		(obj_t) (BgL_arg3518z00_1486),
																		(obj_t) (BgL_arg3519z00_1487),
																		BgL_newzd2aliaszd2_1459, BEOA));
															}
															BgL_testz00_2448 = BgL_res3584z00_2113;
													}}
													if (BgL_testz00_2448)
														{	/* Reduce/same.scm 195 */
															obj_t BgL_g3288z00_1461;

															obj_t BgL_g3289z00_1462;

															BgL_g3288z00_1461 =
																(((BgL_letzd2varzd2_bglt)
																	CREF(BgL_nodez00_1451))->BgL_bindingsz00);
															{
																BgL_letzd2varzd2_bglt BgL_auxz00_2478;

																BgL_auxz00_2478 =
																	(BgL_letzd2varzd2_bglt) (BgL_node2z00_1452);
																BgL_g3289z00_1462 =
																	(((BgL_letzd2varzd2_bglt)
																		CREF(BgL_auxz00_2478))->BgL_bindingsz00);
															}
															{
																obj_t BgL_bindings1z00_1464;

																obj_t BgL_bindings2z00_1465;

																BgL_bindings1z00_1464 = BgL_g3288z00_1461;
																BgL_bindings2z00_1465 = BgL_g3289z00_1462;
															BgL_zc3anonymousza33498ze3z83_1466:
																if (NULLP(BgL_bindings1z00_1464))
																	{	/* Reduce/same.scm 198 */
																		BgL_auxz00_2401 = ((bool_t) 1);
																	}
																else
																	{	/* Reduce/same.scm 200 */
																		bool_t BgL_testz00_2483;

																		{	/* Reduce/same.scm 201 */
																			bool_t BgL_testz00_2484;

																			{	/* Reduce/same.scm 201 */
																				obj_t BgL_auxz00_2485;

																				{
																					BgL_variablez00_bglt BgL_auxz00_2486;

																					BgL_auxz00_2486 =
																						(BgL_variablez00_bglt) (CAR(CAR
																							(BgL_bindings1z00_1464)));
																					BgL_auxz00_2485 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_auxz00_2486))->
																						BgL_accessz00);
																				}
																				BgL_testz00_2484 =
																					(BgL_auxz00_2485 ==
																					CNST_TABLE_REF(((long) 0)));
																			}
																			if (BgL_testz00_2484)
																				{	/* Reduce/same.scm 202 */
																					obj_t BgL_auxz00_2493;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2494;
																						BgL_auxz00_2494 =
																							(BgL_variablez00_bglt) (CAR(CAR
																								(BgL_bindings2z00_1465)));
																						BgL_auxz00_2493 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_2494))->
																							BgL_accessz00);
																					}
																					BgL_testz00_2483 =
																						(BgL_auxz00_2493 ==
																						CNST_TABLE_REF(((long) 0)));
																				}
																			else
																				{	/* Reduce/same.scm 201 */
																					BgL_testz00_2483 = ((bool_t) 0);
																				}
																		}
																		if (BgL_testz00_2483)
																			{	/* Reduce/same.scm 204 */
																				bool_t BgL_testz00_2501;

																				{	/* Reduce/same.scm 204 */
																					obj_t BgL_arg3504z00_1472;

																					obj_t BgL_arg3505z00_1473;

																					BgL_arg3504z00_1472 =
																						CDR(CAR(BgL_bindings1z00_1464));
																					BgL_arg3505z00_1473 =
																						CDR(CAR(BgL_bindings2z00_1465));
																					{	/* Reduce/same.scm 204 */
																						bool_t BgL_res3587z00_2155;

																						{	/* Reduce/same.scm 204 */
																							BgL_nodez00_bglt
																								BgL_node1z00_2127;
																							BgL_nodez00_bglt
																								BgL_node2z00_2128;
																							BgL_node1z00_2127 =
																								(BgL_nodez00_bglt)
																								(BgL_arg3504z00_1472);
																							BgL_node2z00_2128 =
																								(BgL_nodez00_bglt)
																								(BgL_arg3505z00_1473);
																							{	/* Reduce/same.scm 204 */
																								obj_t BgL_method3299z00_2130;

																								{	/* Reduce/same.scm 204 */
																									BgL_objectz00_bglt
																										BgL_objz00_2131;
																									BgL_objz00_2131 =
																										(BgL_objectz00_bglt)
																										(BgL_node1z00_2127);
																									{	/* Reduce/same.scm 204 */
																										long
																											BgL_objzd2classzd2numz00_2132;
																										BgL_objzd2classzd2numz00_2132
																											=
																											BGL_OBJECT_CLASS_NUM
																											(BgL_objz00_2131);
																										{	/* Reduce/same.scm 204 */
																											obj_t BgL_arg2643z00_2133;

																											BgL_arg2643z00_2133 =
																												PROCEDURE_REF
																												(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																												(int) (((long) 1)));
																											{	/* Reduce/same.scm 204 */
																												obj_t BgL_arrayz00_2135;

																												int BgL_offsetz00_2136;

																												BgL_arrayz00_2135 =
																													BgL_arg2643z00_2133;
																												BgL_offsetz00_2136 =
																													(int)
																													(BgL_objzd2classzd2numz00_2132);
																												{	/* Reduce/same.scm 204 */
																													long
																														BgL_offsetz00_2137;
																													BgL_offsetz00_2137 =
																														((long)
																														(BgL_offsetz00_2136)
																														- OBJECT_TYPE);
																													{	/* Reduce/same.scm 204 */
																														long
																															BgL_modz00_2138;
																														{	/* Reduce/same.scm 204 */
																															int
																																BgL_arg2645z00_2139;
																															BgL_arg2645z00_2139
																																=
																																(int) (((long)
																																	16));
																															{	/* Reduce/same.scm 204 */
																																long
																																	BgL_auxz00_2516;
																																BgL_auxz00_2516
																																	=
																																	(long)
																																	(BgL_arg2645z00_2139);
																																BgL_modz00_2138
																																	=
																																	(BgL_offsetz00_2137
																																	/
																																	BgL_auxz00_2516);
																														}}
																														{	/* Reduce/same.scm 204 */
																															long
																																BgL_restz00_2140;
																															{	/* Reduce/same.scm 204 */
																																int
																																	BgL_arg2644z00_2141;
																																BgL_arg2644z00_2141
																																	=
																																	(int) (((long)
																																		16));
																																{	/* Reduce/same.scm 204 */
																																	long
																																		BgL_auxz00_2520;
																																	BgL_auxz00_2520
																																		=
																																		(long)
																																		(BgL_arg2644z00_2141);
																																	BgL_restz00_2140
																																		=
																																		(BgL_offsetz00_2137
																																		%
																																		BgL_auxz00_2520);
																															}}
																															{	/* Reduce/same.scm 204 */

																																BgL_method3299z00_2130
																																	=
																																	VECTOR_REF
																																	(VECTOR_REF
																																	(BgL_arrayz00_2135,
																																		(int)
																																		(BgL_modz00_2138)),
																																	(int)
																																	(BgL_restz00_2140));
																								}}}}}}}}
																								BgL_res3587z00_2155 =
																									CBOOL(PROCEDURE_ENTRY
																									(BgL_method3299z00_2130)
																									(BgL_method3299z00_2130,
																										(obj_t) (BgL_node1z00_2127),
																										(obj_t) (BgL_node2z00_2128),
																										BgL_aliasz00_1453, BEOA));
																						}}
																						BgL_testz00_2501 =
																							BgL_res3587z00_2155;
																				}}
																				if (BgL_testz00_2501)
																					{
																						obj_t BgL_bindings2z00_2534;

																						obj_t BgL_bindings1z00_2532;

																						BgL_bindings1z00_2532 =
																							CDR(BgL_bindings1z00_1464);
																						BgL_bindings2z00_2534 =
																							CDR(BgL_bindings2z00_1465);
																						BgL_bindings2z00_1465 =
																							BgL_bindings2z00_2534;
																						BgL_bindings1z00_1464 =
																							BgL_bindings1z00_2532;
																						goto
																							BgL_zc3anonymousza33498ze3z83_1466;
																					}
																				else
																					{	/* Reduce/same.scm 204 */
																						BgL_auxz00_2401 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Reduce/same.scm 200 */
																				BgL_auxz00_2401 = ((bool_t) 0);
																			}
																	}
															}
														}
													else
														{	/* Reduce/same.scm 194 */
															BgL_auxz00_2401 = ((bool_t) 0);
														}
												}
											}
										else
											{	/* Reduce/same.scm 187 */
												BgL_auxz00_2401 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/same.scm 186 */
										BgL_auxz00_2401 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 185 */
								BgL_auxz00_2401 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_2401);
				}
			}
		}
	}



/* same-node?-fail3331 */
	obj_t BGl_samezd2nodezf3zd2fail3331zf3zzreduce_samez00(obj_t BgL_envz00_2186,
		obj_t BgL_nodez00_2187, obj_t BgL_node2z00_2188, obj_t BgL_aliasz00_2189)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 167 */
			{
				BgL_failz00_bglt BgL_nodez00_1432;

				BgL_nodez00_bglt BgL_node2z00_1433;

				obj_t BgL_aliasz00_1434;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_auxz00_2539;

					BgL_nodez00_1432 = (BgL_failz00_bglt) (BgL_nodez00_2187);
					BgL_node2z00_1433 = (BgL_nodez00_bglt) (BgL_node2z00_2188);
					BgL_aliasz00_1434 = BgL_aliasz00_2189;
					{	/* Reduce/same.scm 171 */
						bool_t BgL_testz00_2540;

						{	/* Reduce/same.scm 171 */
							obj_t BgL_obj2977z00_1965;

							BgL_obj2977z00_1965 = (obj_t) (BgL_node2z00_1433);
							BgL_testz00_2540 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2977z00_1965,
								BGl_failz00zzast_nodez00);
						}
						if (BgL_testz00_2540)
							{	/* Reduce/same.scm 172 */
								bool_t BgL_testz00_2543;

								{	/* Reduce/same.scm 172 */
									obj_t BgL_auxz00_2544;

									{	/* Reduce/same.scm 172 */
										BgL_typez00_bglt BgL_auxz00_2545;

										{
											BgL_nodez00_bglt BgL_auxz00_2546;

											BgL_auxz00_2546 = (BgL_nodez00_bglt) (BgL_nodez00_1432);
											BgL_auxz00_2545 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2546))->
												BgL_typez00);
										}
										BgL_auxz00_2544 = (obj_t) (BgL_auxz00_2545);
									}
									BgL_testz00_2543 =
										(BgL_auxz00_2544 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1433))->
												BgL_typez00)));
								}
								if (BgL_testz00_2543)
									{	/* Reduce/same.scm 173 */
										bool_t BgL_testz00_2553;

										{	/* Reduce/same.scm 173 */
											BgL_nodez00_bglt BgL_arg3493z00_1445;

											BgL_nodez00_bglt BgL_arg3494z00_1446;

											BgL_arg3493z00_1445 =
												(((BgL_failz00_bglt) CREF(BgL_nodez00_1432))->
												BgL_msgz00);
											{
												BgL_failz00_bglt BgL_auxz00_2555;

												BgL_auxz00_2555 =
													(BgL_failz00_bglt) (BgL_node2z00_1433);
												BgL_arg3494z00_1446 =
													(((BgL_failz00_bglt) CREF(BgL_auxz00_2555))->
													BgL_msgz00);
											}
											{	/* Reduce/same.scm 173 */
												bool_t BgL_res3575z00_1998;

												{	/* Reduce/same.scm 173 */
													obj_t BgL_method3299z00_1973;

													{	/* Reduce/same.scm 173 */
														BgL_objectz00_bglt BgL_objz00_1974;

														BgL_objz00_1974 =
															(BgL_objectz00_bglt) (BgL_arg3493z00_1445);
														{	/* Reduce/same.scm 173 */
															long BgL_objzd2classzd2numz00_1975;

															BgL_objzd2classzd2numz00_1975 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1974);
															{	/* Reduce/same.scm 173 */
																obj_t BgL_arg2643z00_1976;

																BgL_arg2643z00_1976 =
																	PROCEDURE_REF
																	(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																	(int) (((long) 1)));
																{	/* Reduce/same.scm 173 */
																	obj_t BgL_arrayz00_1978;

																	int BgL_offsetz00_1979;

																	BgL_arrayz00_1978 = BgL_arg2643z00_1976;
																	BgL_offsetz00_1979 =
																		(int) (BgL_objzd2classzd2numz00_1975);
																	{	/* Reduce/same.scm 173 */
																		long BgL_offsetz00_1980;

																		BgL_offsetz00_1980 =
																			(
																			(long) (BgL_offsetz00_1979) -
																			OBJECT_TYPE);
																		{	/* Reduce/same.scm 173 */
																			long BgL_modz00_1981;

																			{	/* Reduce/same.scm 173 */
																				int BgL_arg2645z00_1982;

																				BgL_arg2645z00_1982 =
																					(int) (((long) 16));
																				{	/* Reduce/same.scm 173 */
																					long BgL_auxz00_2566;

																					BgL_auxz00_2566 =
																						(long) (BgL_arg2645z00_1982);
																					BgL_modz00_1981 =
																						(BgL_offsetz00_1980 /
																						BgL_auxz00_2566);
																			}}
																			{	/* Reduce/same.scm 173 */
																				long BgL_restz00_1983;

																				{	/* Reduce/same.scm 173 */
																					int BgL_arg2644z00_1984;

																					BgL_arg2644z00_1984 =
																						(int) (((long) 16));
																					{	/* Reduce/same.scm 173 */
																						long BgL_auxz00_2570;

																						BgL_auxz00_2570 =
																							(long) (BgL_arg2644z00_1984);
																						BgL_restz00_1983 =
																							(BgL_offsetz00_1980 %
																							BgL_auxz00_2570);
																				}}
																				{	/* Reduce/same.scm 173 */

																					BgL_method3299z00_1973 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1978,
																							(int) (BgL_modz00_1981)),
																						(int) (BgL_restz00_1983));
													}}}}}}}}
													BgL_res3575z00_1998 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1973)
														(BgL_method3299z00_1973,
															(obj_t) (BgL_arg3493z00_1445),
															(obj_t) (BgL_arg3494z00_1446), BgL_aliasz00_1434,
															BEOA));
												}
												BgL_testz00_2553 = BgL_res3575z00_1998;
										}}
										if (BgL_testz00_2553)
											{	/* Reduce/same.scm 174 */
												bool_t BgL_testz00_2582;

												{	/* Reduce/same.scm 174 */
													BgL_nodez00_bglt BgL_arg3491z00_1443;

													BgL_nodez00_bglt BgL_arg3492z00_1444;

													BgL_arg3491z00_1443 =
														(((BgL_failz00_bglt) CREF(BgL_nodez00_1432))->
														BgL_procz00);
													{
														BgL_failz00_bglt BgL_auxz00_2584;

														BgL_auxz00_2584 =
															(BgL_failz00_bglt) (BgL_node2z00_1433);
														BgL_arg3492z00_1444 =
															(((BgL_failz00_bglt) CREF(BgL_auxz00_2584))->
															BgL_procz00);
													}
													{	/* Reduce/same.scm 174 */
														bool_t BgL_res3578z00_2029;

														{	/* Reduce/same.scm 174 */
															obj_t BgL_method3299z00_2004;

															{	/* Reduce/same.scm 174 */
																BgL_objectz00_bglt BgL_objz00_2005;

																BgL_objz00_2005 =
																	(BgL_objectz00_bglt) (BgL_arg3491z00_1443);
																{	/* Reduce/same.scm 174 */
																	long BgL_objzd2classzd2numz00_2006;

																	BgL_objzd2classzd2numz00_2006 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2005);
																	{	/* Reduce/same.scm 174 */
																		obj_t BgL_arg2643z00_2007;

																		BgL_arg2643z00_2007 =
																			PROCEDURE_REF
																			(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																			(int) (((long) 1)));
																		{	/* Reduce/same.scm 174 */
																			obj_t BgL_arrayz00_2009;

																			int BgL_offsetz00_2010;

																			BgL_arrayz00_2009 = BgL_arg2643z00_2007;
																			BgL_offsetz00_2010 =
																				(int) (BgL_objzd2classzd2numz00_2006);
																			{	/* Reduce/same.scm 174 */
																				long BgL_offsetz00_2011;

																				BgL_offsetz00_2011 =
																					(
																					(long) (BgL_offsetz00_2010) -
																					OBJECT_TYPE);
																				{	/* Reduce/same.scm 174 */
																					long BgL_modz00_2012;

																					{	/* Reduce/same.scm 174 */
																						int BgL_arg2645z00_2013;

																						BgL_arg2645z00_2013 =
																							(int) (((long) 16));
																						{	/* Reduce/same.scm 174 */
																							long BgL_auxz00_2595;

																							BgL_auxz00_2595 =
																								(long) (BgL_arg2645z00_2013);
																							BgL_modz00_2012 =
																								(BgL_offsetz00_2011 /
																								BgL_auxz00_2595);
																					}}
																					{	/* Reduce/same.scm 174 */
																						long BgL_restz00_2014;

																						{	/* Reduce/same.scm 174 */
																							int BgL_arg2644z00_2015;

																							BgL_arg2644z00_2015 =
																								(int) (((long) 16));
																							{	/* Reduce/same.scm 174 */
																								long BgL_auxz00_2599;

																								BgL_auxz00_2599 =
																									(long) (BgL_arg2644z00_2015);
																								BgL_restz00_2014 =
																									(BgL_offsetz00_2011 %
																									BgL_auxz00_2599);
																						}}
																						{	/* Reduce/same.scm 174 */

																							BgL_method3299z00_2004 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2009,
																									(int) (BgL_modz00_2012)),
																								(int) (BgL_restz00_2014));
															}}}}}}}}
															BgL_res3578z00_2029 =
																CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_2004)
																(BgL_method3299z00_2004,
																	(obj_t) (BgL_arg3491z00_1443),
																	(obj_t) (BgL_arg3492z00_1444),
																	BgL_aliasz00_1434, BEOA));
														}
														BgL_testz00_2582 = BgL_res3578z00_2029;
												}}
												if (BgL_testz00_2582)
													{	/* Reduce/same.scm 175 */
														BgL_nodez00_bglt BgL_arg3489z00_1441;

														BgL_nodez00_bglt BgL_arg3490z00_1442;

														BgL_arg3489z00_1441 =
															(((BgL_failz00_bglt) CREF(BgL_nodez00_1432))->
															BgL_objz00);
														{
															BgL_failz00_bglt BgL_auxz00_2612;

															BgL_auxz00_2612 =
																(BgL_failz00_bglt) (BgL_node2z00_1433);
															BgL_arg3490z00_1442 =
																(((BgL_failz00_bglt) CREF(BgL_auxz00_2612))->
																BgL_objz00);
														}
														{	/* Reduce/same.scm 175 */
															bool_t BgL_res3581z00_2060;

															{	/* Reduce/same.scm 175 */
																obj_t BgL_method3299z00_2035;

																{	/* Reduce/same.scm 175 */
																	BgL_objectz00_bglt BgL_objz00_2036;

																	BgL_objz00_2036 =
																		(BgL_objectz00_bglt) (BgL_arg3489z00_1441);
																	{	/* Reduce/same.scm 175 */
																		long BgL_objzd2classzd2numz00_2037;

																		BgL_objzd2classzd2numz00_2037 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2036);
																		{	/* Reduce/same.scm 175 */
																			obj_t BgL_arg2643z00_2038;

																			BgL_arg2643z00_2038 =
																				PROCEDURE_REF
																				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																				(int) (((long) 1)));
																			{	/* Reduce/same.scm 175 */
																				obj_t BgL_arrayz00_2040;

																				int BgL_offsetz00_2041;

																				BgL_arrayz00_2040 = BgL_arg2643z00_2038;
																				BgL_offsetz00_2041 =
																					(int) (BgL_objzd2classzd2numz00_2037);
																				{	/* Reduce/same.scm 175 */
																					long BgL_offsetz00_2042;

																					BgL_offsetz00_2042 =
																						(
																						(long) (BgL_offsetz00_2041) -
																						OBJECT_TYPE);
																					{	/* Reduce/same.scm 175 */
																						long BgL_modz00_2043;

																						{	/* Reduce/same.scm 175 */
																							int BgL_arg2645z00_2044;

																							BgL_arg2645z00_2044 =
																								(int) (((long) 16));
																							{	/* Reduce/same.scm 175 */
																								long BgL_auxz00_2623;

																								BgL_auxz00_2623 =
																									(long) (BgL_arg2645z00_2044);
																								BgL_modz00_2043 =
																									(BgL_offsetz00_2042 /
																									BgL_auxz00_2623);
																						}}
																						{	/* Reduce/same.scm 175 */
																							long BgL_restz00_2045;

																							{	/* Reduce/same.scm 175 */
																								int BgL_arg2644z00_2046;

																								BgL_arg2644z00_2046 =
																									(int) (((long) 16));
																								{	/* Reduce/same.scm 175 */
																									long BgL_auxz00_2627;

																									BgL_auxz00_2627 =
																										(long)
																										(BgL_arg2644z00_2046);
																									BgL_restz00_2045 =
																										(BgL_offsetz00_2042 %
																										BgL_auxz00_2627);
																							}}
																							{	/* Reduce/same.scm 175 */

																								BgL_method3299z00_2035 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2040,
																										(int) (BgL_modz00_2043)),
																									(int) (BgL_restz00_2045));
																}}}}}}}}
																BgL_res3581z00_2060 =
																	CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_2035)
																	(BgL_method3299z00_2035,
																		(obj_t) (BgL_arg3489z00_1441),
																		(obj_t) (BgL_arg3490z00_1442),
																		BgL_aliasz00_1434, BEOA));
															}
															BgL_auxz00_2539 = BgL_res3581z00_2060;
													}}
												else
													{	/* Reduce/same.scm 174 */
														BgL_auxz00_2539 = ((bool_t) 0);
													}
											}
										else
											{	/* Reduce/same.scm 173 */
												BgL_auxz00_2539 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/same.scm 172 */
										BgL_auxz00_2539 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 171 */
								BgL_auxz00_2539 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_2539);
				}
			}
		}
	}



/* same-node?-condition3328 */
	obj_t BGl_samezd2nodezf3zd2condition3328zf3zzreduce_samez00(obj_t
		BgL_envz00_2190, obj_t BgL_nodez00_2191, obj_t BgL_node2z00_2192,
		obj_t BgL_aliasz00_2193)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 154 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1413;

				BgL_nodez00_bglt BgL_node2z00_1414;

				obj_t BgL_aliasz00_1415;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_auxz00_2642;

					BgL_nodez00_1413 = (BgL_conditionalz00_bglt) (BgL_nodez00_2191);
					BgL_node2z00_1414 = (BgL_nodez00_bglt) (BgL_node2z00_2192);
					BgL_aliasz00_1415 = BgL_aliasz00_2193;
					{	/* Reduce/same.scm 158 */
						bool_t BgL_testz00_2643;

						{	/* Reduce/same.scm 158 */
							obj_t BgL_obj2945z00_1869;

							BgL_obj2945z00_1869 = (obj_t) (BgL_node2z00_1414);
							BgL_testz00_2643 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2945z00_1869,
								BGl_conditionalz00zzast_nodez00);
						}
						if (BgL_testz00_2643)
							{	/* Reduce/same.scm 159 */
								bool_t BgL_testz00_2646;

								{	/* Reduce/same.scm 159 */
									obj_t BgL_auxz00_2647;

									{	/* Reduce/same.scm 159 */
										BgL_typez00_bglt BgL_auxz00_2648;

										{
											BgL_nodez00_bglt BgL_auxz00_2649;

											BgL_auxz00_2649 = (BgL_nodez00_bglt) (BgL_nodez00_1413);
											BgL_auxz00_2648 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2649))->
												BgL_typez00);
										}
										BgL_auxz00_2647 = (obj_t) (BgL_auxz00_2648);
									}
									BgL_testz00_2646 =
										(BgL_auxz00_2647 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1414))->
												BgL_typez00)));
								}
								if (BgL_testz00_2646)
									{	/* Reduce/same.scm 160 */
										bool_t BgL_testz00_2656;

										{	/* Reduce/same.scm 160 */
											BgL_nodez00_bglt BgL_arg3484z00_1426;

											BgL_nodez00_bglt BgL_arg3485z00_1427;

											BgL_arg3484z00_1426 =
												(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1413))->
												BgL_falsez00);
											{
												BgL_conditionalz00_bglt BgL_auxz00_2658;

												BgL_auxz00_2658 =
													(BgL_conditionalz00_bglt) (BgL_node2z00_1414);
												BgL_arg3485z00_1427 =
													(((BgL_conditionalz00_bglt) CREF(BgL_auxz00_2658))->
													BgL_falsez00);
											}
											{	/* Reduce/same.scm 160 */
												bool_t BgL_res3566z00_1902;

												{	/* Reduce/same.scm 160 */
													obj_t BgL_method3299z00_1877;

													{	/* Reduce/same.scm 160 */
														BgL_objectz00_bglt BgL_objz00_1878;

														BgL_objz00_1878 =
															(BgL_objectz00_bglt) (BgL_arg3484z00_1426);
														{	/* Reduce/same.scm 160 */
															long BgL_objzd2classzd2numz00_1879;

															BgL_objzd2classzd2numz00_1879 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1878);
															{	/* Reduce/same.scm 160 */
																obj_t BgL_arg2643z00_1880;

																BgL_arg2643z00_1880 =
																	PROCEDURE_REF
																	(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																	(int) (((long) 1)));
																{	/* Reduce/same.scm 160 */
																	obj_t BgL_arrayz00_1882;

																	int BgL_offsetz00_1883;

																	BgL_arrayz00_1882 = BgL_arg2643z00_1880;
																	BgL_offsetz00_1883 =
																		(int) (BgL_objzd2classzd2numz00_1879);
																	{	/* Reduce/same.scm 160 */
																		long BgL_offsetz00_1884;

																		BgL_offsetz00_1884 =
																			(
																			(long) (BgL_offsetz00_1883) -
																			OBJECT_TYPE);
																		{	/* Reduce/same.scm 160 */
																			long BgL_modz00_1885;

																			{	/* Reduce/same.scm 160 */
																				int BgL_arg2645z00_1886;

																				BgL_arg2645z00_1886 =
																					(int) (((long) 16));
																				{	/* Reduce/same.scm 160 */
																					long BgL_auxz00_2669;

																					BgL_auxz00_2669 =
																						(long) (BgL_arg2645z00_1886);
																					BgL_modz00_1885 =
																						(BgL_offsetz00_1884 /
																						BgL_auxz00_2669);
																			}}
																			{	/* Reduce/same.scm 160 */
																				long BgL_restz00_1887;

																				{	/* Reduce/same.scm 160 */
																					int BgL_arg2644z00_1888;

																					BgL_arg2644z00_1888 =
																						(int) (((long) 16));
																					{	/* Reduce/same.scm 160 */
																						long BgL_auxz00_2673;

																						BgL_auxz00_2673 =
																							(long) (BgL_arg2644z00_1888);
																						BgL_restz00_1887 =
																							(BgL_offsetz00_1884 %
																							BgL_auxz00_2673);
																				}}
																				{	/* Reduce/same.scm 160 */

																					BgL_method3299z00_1877 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1882,
																							(int) (BgL_modz00_1885)),
																						(int) (BgL_restz00_1887));
													}}}}}}}}
													BgL_res3566z00_1902 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1877)
														(BgL_method3299z00_1877,
															(obj_t) (BgL_arg3484z00_1426),
															(obj_t) (BgL_arg3485z00_1427), BgL_aliasz00_1415,
															BEOA));
												}
												BgL_testz00_2656 = BgL_res3566z00_1902;
										}}
										if (BgL_testz00_2656)
											{	/* Reduce/same.scm 161 */
												bool_t BgL_testz00_2685;

												{	/* Reduce/same.scm 161 */
													BgL_nodez00_bglt BgL_arg3482z00_1424;

													BgL_nodez00_bglt BgL_arg3483z00_1425;

													BgL_arg3482z00_1424 =
														(((BgL_conditionalz00_bglt)
															CREF(BgL_nodez00_1413))->BgL_truez00);
													{
														BgL_conditionalz00_bglt BgL_auxz00_2687;

														BgL_auxz00_2687 =
															(BgL_conditionalz00_bglt) (BgL_node2z00_1414);
														BgL_arg3483z00_1425 =
															(((BgL_conditionalz00_bglt)
																CREF(BgL_auxz00_2687))->BgL_truez00);
													}
													{	/* Reduce/same.scm 161 */
														bool_t BgL_res3569z00_1933;

														{	/* Reduce/same.scm 161 */
															obj_t BgL_method3299z00_1908;

															{	/* Reduce/same.scm 161 */
																BgL_objectz00_bglt BgL_objz00_1909;

																BgL_objz00_1909 =
																	(BgL_objectz00_bglt) (BgL_arg3482z00_1424);
																{	/* Reduce/same.scm 161 */
																	long BgL_objzd2classzd2numz00_1910;

																	BgL_objzd2classzd2numz00_1910 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_1909);
																	{	/* Reduce/same.scm 161 */
																		obj_t BgL_arg2643z00_1911;

																		BgL_arg2643z00_1911 =
																			PROCEDURE_REF
																			(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																			(int) (((long) 1)));
																		{	/* Reduce/same.scm 161 */
																			obj_t BgL_arrayz00_1913;

																			int BgL_offsetz00_1914;

																			BgL_arrayz00_1913 = BgL_arg2643z00_1911;
																			BgL_offsetz00_1914 =
																				(int) (BgL_objzd2classzd2numz00_1910);
																			{	/* Reduce/same.scm 161 */
																				long BgL_offsetz00_1915;

																				BgL_offsetz00_1915 =
																					(
																					(long) (BgL_offsetz00_1914) -
																					OBJECT_TYPE);
																				{	/* Reduce/same.scm 161 */
																					long BgL_modz00_1916;

																					{	/* Reduce/same.scm 161 */
																						int BgL_arg2645z00_1917;

																						BgL_arg2645z00_1917 =
																							(int) (((long) 16));
																						{	/* Reduce/same.scm 161 */
																							long BgL_auxz00_2698;

																							BgL_auxz00_2698 =
																								(long) (BgL_arg2645z00_1917);
																							BgL_modz00_1916 =
																								(BgL_offsetz00_1915 /
																								BgL_auxz00_2698);
																					}}
																					{	/* Reduce/same.scm 161 */
																						long BgL_restz00_1918;

																						{	/* Reduce/same.scm 161 */
																							int BgL_arg2644z00_1919;

																							BgL_arg2644z00_1919 =
																								(int) (((long) 16));
																							{	/* Reduce/same.scm 161 */
																								long BgL_auxz00_2702;

																								BgL_auxz00_2702 =
																									(long) (BgL_arg2644z00_1919);
																								BgL_restz00_1918 =
																									(BgL_offsetz00_1915 %
																									BgL_auxz00_2702);
																						}}
																						{	/* Reduce/same.scm 161 */

																							BgL_method3299z00_1908 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_1913,
																									(int) (BgL_modz00_1916)),
																								(int) (BgL_restz00_1918));
															}}}}}}}}
															BgL_res3569z00_1933 =
																CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1908)
																(BgL_method3299z00_1908,
																	(obj_t) (BgL_arg3482z00_1424),
																	(obj_t) (BgL_arg3483z00_1425),
																	BgL_aliasz00_1415, BEOA));
														}
														BgL_testz00_2685 = BgL_res3569z00_1933;
												}}
												if (BgL_testz00_2685)
													{	/* Reduce/same.scm 162 */
														BgL_nodez00_bglt BgL_arg3479z00_1422;

														BgL_nodez00_bglt BgL_arg3480z00_1423;

														BgL_arg3479z00_1422 =
															(((BgL_conditionalz00_bglt)
																CREF(BgL_nodez00_1413))->BgL_testz00);
														{
															BgL_conditionalz00_bglt BgL_auxz00_2715;

															BgL_auxz00_2715 =
																(BgL_conditionalz00_bglt) (BgL_node2z00_1414);
															BgL_arg3480z00_1423 =
																(((BgL_conditionalz00_bglt)
																	CREF(BgL_auxz00_2715))->BgL_testz00);
														}
														{	/* Reduce/same.scm 162 */
															bool_t BgL_res3572z00_1964;

															{	/* Reduce/same.scm 162 */
																obj_t BgL_method3299z00_1939;

																{	/* Reduce/same.scm 162 */
																	BgL_objectz00_bglt BgL_objz00_1940;

																	BgL_objz00_1940 =
																		(BgL_objectz00_bglt) (BgL_arg3479z00_1422);
																	{	/* Reduce/same.scm 162 */
																		long BgL_objzd2classzd2numz00_1941;

																		BgL_objzd2classzd2numz00_1941 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_1940);
																		{	/* Reduce/same.scm 162 */
																			obj_t BgL_arg2643z00_1942;

																			BgL_arg2643z00_1942 =
																				PROCEDURE_REF
																				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																				(int) (((long) 1)));
																			{	/* Reduce/same.scm 162 */
																				obj_t BgL_arrayz00_1944;

																				int BgL_offsetz00_1945;

																				BgL_arrayz00_1944 = BgL_arg2643z00_1942;
																				BgL_offsetz00_1945 =
																					(int) (BgL_objzd2classzd2numz00_1941);
																				{	/* Reduce/same.scm 162 */
																					long BgL_offsetz00_1946;

																					BgL_offsetz00_1946 =
																						(
																						(long) (BgL_offsetz00_1945) -
																						OBJECT_TYPE);
																					{	/* Reduce/same.scm 162 */
																						long BgL_modz00_1947;

																						{	/* Reduce/same.scm 162 */
																							int BgL_arg2645z00_1948;

																							BgL_arg2645z00_1948 =
																								(int) (((long) 16));
																							{	/* Reduce/same.scm 162 */
																								long BgL_auxz00_2726;

																								BgL_auxz00_2726 =
																									(long) (BgL_arg2645z00_1948);
																								BgL_modz00_1947 =
																									(BgL_offsetz00_1946 /
																									BgL_auxz00_2726);
																						}}
																						{	/* Reduce/same.scm 162 */
																							long BgL_restz00_1949;

																							{	/* Reduce/same.scm 162 */
																								int BgL_arg2644z00_1950;

																								BgL_arg2644z00_1950 =
																									(int) (((long) 16));
																								{	/* Reduce/same.scm 162 */
																									long BgL_auxz00_2730;

																									BgL_auxz00_2730 =
																										(long)
																										(BgL_arg2644z00_1950);
																									BgL_restz00_1949 =
																										(BgL_offsetz00_1946 %
																										BgL_auxz00_2730);
																							}}
																							{	/* Reduce/same.scm 162 */

																								BgL_method3299z00_1939 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_1944,
																										(int) (BgL_modz00_1947)),
																									(int) (BgL_restz00_1949));
																}}}}}}}}
																BgL_res3572z00_1964 =
																	CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1939)
																	(BgL_method3299z00_1939,
																		(obj_t) (BgL_arg3479z00_1422),
																		(obj_t) (BgL_arg3480z00_1423),
																		BgL_aliasz00_1415, BEOA));
															}
															BgL_auxz00_2642 = BgL_res3572z00_1964;
													}}
												else
													{	/* Reduce/same.scm 161 */
														BgL_auxz00_2642 = ((bool_t) 0);
													}
											}
										else
											{	/* Reduce/same.scm 160 */
												BgL_auxz00_2642 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/same.scm 159 */
										BgL_auxz00_2642 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 158 */
								BgL_auxz00_2642 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_2642);
				}
			}
		}
	}



/* same-node?-cast3325 */
	obj_t BGl_samezd2nodezf3zd2cast3325zf3zzreduce_samez00(obj_t BgL_envz00_2194,
		obj_t BgL_nodez00_2195, obj_t BgL_node2z00_2196, obj_t BgL_aliasz00_2197)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 146 */
			{
				BgL_castz00_bglt BgL_nodez00_1400;

				BgL_nodez00_bglt BgL_node2z00_1401;

				obj_t BgL_aliasz00_1402;

				{	/* Reduce/same.scm 147 */
					bool_t BgL_auxz00_2745;

					BgL_nodez00_1400 = (BgL_castz00_bglt) (BgL_nodez00_2195);
					BgL_node2z00_1401 = (BgL_nodez00_bglt) (BgL_node2z00_2196);
					BgL_aliasz00_1402 = BgL_aliasz00_2197;
					{	/* Reduce/same.scm 147 */
						bool_t BgL_testz00_2746;

						{	/* Reduce/same.scm 147 */
							obj_t BgL_obj2875z00_1835;

							BgL_obj2875z00_1835 = (obj_t) (BgL_node2z00_1401);
							BgL_testz00_2746 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2875z00_1835,
								BGl_castz00zzast_nodez00);
						}
						if (BgL_testz00_2746)
							{	/* Reduce/same.scm 148 */
								bool_t BgL_testz00_2749;

								{	/* Reduce/same.scm 148 */
									obj_t BgL_auxz00_2750;

									{	/* Reduce/same.scm 148 */
										BgL_typez00_bglt BgL_auxz00_2751;

										{
											BgL_nodez00_bglt BgL_auxz00_2752;

											BgL_auxz00_2752 = (BgL_nodez00_bglt) (BgL_nodez00_1400);
											BgL_auxz00_2751 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2752))->
												BgL_typez00);
										}
										BgL_auxz00_2750 = (obj_t) (BgL_auxz00_2751);
									}
									BgL_testz00_2749 =
										(BgL_auxz00_2750 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1401))->
												BgL_typez00)));
								}
								if (BgL_testz00_2749)
									{	/* Reduce/same.scm 149 */
										BgL_nodez00_bglt BgL_arg3474z00_1407;

										BgL_nodez00_bglt BgL_arg3475z00_1408;

										BgL_arg3474z00_1407 =
											(((BgL_castz00_bglt) CREF(BgL_nodez00_1400))->BgL_argz00);
										{
											BgL_castz00_bglt BgL_auxz00_2760;

											BgL_auxz00_2760 = (BgL_castz00_bglt) (BgL_node2z00_1401);
											BgL_arg3475z00_1408 =
												(((BgL_castz00_bglt) CREF(BgL_auxz00_2760))->
												BgL_argz00);
										}
										{	/* Reduce/same.scm 149 */
											bool_t BgL_res3563z00_1868;

											{	/* Reduce/same.scm 149 */
												obj_t BgL_method3299z00_1843;

												{	/* Reduce/same.scm 149 */
													BgL_objectz00_bglt BgL_objz00_1844;

													BgL_objz00_1844 =
														(BgL_objectz00_bglt) (BgL_arg3474z00_1407);
													{	/* Reduce/same.scm 149 */
														long BgL_objzd2classzd2numz00_1845;

														BgL_objzd2classzd2numz00_1845 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1844);
														{	/* Reduce/same.scm 149 */
															obj_t BgL_arg2643z00_1846;

															BgL_arg2643z00_1846 =
																PROCEDURE_REF
																(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																(int) (((long) 1)));
															{	/* Reduce/same.scm 149 */
																obj_t BgL_arrayz00_1848;

																int BgL_offsetz00_1849;

																BgL_arrayz00_1848 = BgL_arg2643z00_1846;
																BgL_offsetz00_1849 =
																	(int) (BgL_objzd2classzd2numz00_1845);
																{	/* Reduce/same.scm 149 */
																	long BgL_offsetz00_1850;

																	BgL_offsetz00_1850 =
																		((long) (BgL_offsetz00_1849) - OBJECT_TYPE);
																	{	/* Reduce/same.scm 149 */
																		long BgL_modz00_1851;

																		{	/* Reduce/same.scm 149 */
																			int BgL_arg2645z00_1852;

																			BgL_arg2645z00_1852 = (int) (((long) 16));
																			{	/* Reduce/same.scm 149 */
																				long BgL_auxz00_2771;

																				BgL_auxz00_2771 =
																					(long) (BgL_arg2645z00_1852);
																				BgL_modz00_1851 =
																					(BgL_offsetz00_1850 /
																					BgL_auxz00_2771);
																		}}
																		{	/* Reduce/same.scm 149 */
																			long BgL_restz00_1853;

																			{	/* Reduce/same.scm 149 */
																				int BgL_arg2644z00_1854;

																				BgL_arg2644z00_1854 =
																					(int) (((long) 16));
																				{	/* Reduce/same.scm 149 */
																					long BgL_auxz00_2775;

																					BgL_auxz00_2775 =
																						(long) (BgL_arg2644z00_1854);
																					BgL_restz00_1853 =
																						(BgL_offsetz00_1850 %
																						BgL_auxz00_2775);
																			}}
																			{	/* Reduce/same.scm 149 */

																				BgL_method3299z00_1843 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1848,
																						(int) (BgL_modz00_1851)),
																					(int) (BgL_restz00_1853));
												}}}}}}}}
												BgL_res3563z00_1868 =
													CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1843)
													(BgL_method3299z00_1843,
														(obj_t) (BgL_arg3474z00_1407),
														(obj_t) (BgL_arg3475z00_1408), BgL_aliasz00_1402,
														BEOA));
											}
											BgL_auxz00_2745 = BgL_res3563z00_1868;
									}}
								else
									{	/* Reduce/same.scm 148 */
										BgL_auxz00_2745 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 147 */
								BgL_auxz00_2745 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_2745);
				}
			}
		}
	}



/* same-node?-valloc3323 */
	obj_t BGl_samezd2nodezf3zd2valloc3323zf3zzreduce_samez00(obj_t
		BgL_envz00_2198, obj_t BgL_nodez00_2199, obj_t BgL_node2z00_2200,
		obj_t BgL_aliasz00_2201)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 140 */
			return BBOOL(((bool_t) 0));
		}
	}



/* same-node?-setfield3321 */
	obj_t BGl_samezd2nodezf3zd2setfield3321zf3zzreduce_samez00(obj_t
		BgL_envz00_2202, obj_t BgL_nodez00_2203, obj_t BgL_node2z00_2204,
		obj_t BgL_aliasz00_2205)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 132 */
			{
				BgL_setfieldz00_bglt BgL_nodez00_1382;

				BgL_nodez00_bglt BgL_node2z00_1383;

				obj_t BgL_aliasz00_1384;

				BgL_nodez00_1382 = (BgL_setfieldz00_bglt) (BgL_nodez00_2203);
				BgL_node2z00_1383 = (BgL_nodez00_bglt) (BgL_node2z00_2204);
				BgL_aliasz00_1384 = BgL_aliasz00_2205;
				{

					{	/* Reduce/same.scm 133 */
						bool_t BgL_testz00_2791;

						{	/* Reduce/same.scm 133 */
							obj_t BgL_obj2515z00_1800;

							BgL_obj2515z00_1800 = (obj_t) (BgL_node2z00_1383);
							BgL_testz00_2791 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2515z00_1800,
								BGl_setfieldz00zzast_nodez00);
						}
						if (BgL_testz00_2791)
							{	/* Reduce/same.scm 134 */
								bool_t BgL_testz00_2794;

								{	/* Reduce/same.scm 134 */
									obj_t BgL_arg3470z00_1389;

									obj_t BgL_arg3471z00_1390;

									BgL_arg3470z00_1389 =
										(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_1382))->
										BgL_fnamez00);
									{
										BgL_setfieldz00_bglt BgL_auxz00_2796;

										BgL_auxz00_2796 =
											(BgL_setfieldz00_bglt) (BgL_node2z00_1383);
										BgL_arg3471z00_1390 =
											(((BgL_setfieldz00_bglt) CREF(BgL_auxz00_2796))->
											BgL_fnamez00);
									}
									BgL_testz00_2794 =
										bigloo_strcmp(BgL_arg3470z00_1389, BgL_arg3471z00_1390);
								}
								if (BgL_testz00_2794)
									{	/* Reduce/same.scm 134 */
										{	/* Reduce/same.scm 132 */
											obj_t BgL_nextzd2method3320zd2_1391;

											BgL_nextzd2method3320zd2_1391 =
												BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
												(BgL_objectz00_bglt) (BgL_nodez00_1382),
												BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
												BGl_setfieldz00zzast_nodez00);
											if (PROCEDUREP(BgL_nextzd2method3320zd2_1391))
												{	/* Reduce/same.scm 132 */
													return
														PROCEDURE_ENTRY(BgL_nextzd2method3320zd2_1391)
														(BgL_nextzd2method3320zd2_1391,
														(obj_t) (BgL_nodez00_1382),
														(obj_t) (BgL_node2z00_1383), BgL_aliasz00_1384,
														BEOA);
												}
											else
												{	/* Reduce/same.scm 132 */
													{	/* Reduce/same.scm 132 */
														bool_t BgL_res3560z00_1834;

														{	/* Reduce/same.scm 132 */
															BgL_nodez00_bglt BgL_node1z00_1806;

															BgL_node1z00_1806 =
																(BgL_nodez00_bglt) (BgL_nodez00_1382);
															{	/* Reduce/same.scm 132 */
																obj_t BgL_method3299z00_1809;

																{	/* Reduce/same.scm 132 */
																	BgL_objectz00_bglt BgL_objz00_1810;

																	BgL_objz00_1810 =
																		(BgL_objectz00_bglt) (BgL_node1z00_1806);
																	{	/* Reduce/same.scm 132 */
																		long BgL_objzd2classzd2numz00_1811;

																		BgL_objzd2classzd2numz00_1811 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_1810);
																		{	/* Reduce/same.scm 132 */
																			obj_t BgL_arg2643z00_1812;

																			BgL_arg2643z00_1812 =
																				PROCEDURE_REF
																				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																				(int) (((long) 1)));
																			{	/* Reduce/same.scm 132 */
																				obj_t BgL_arrayz00_1814;

																				int BgL_offsetz00_1815;

																				BgL_arrayz00_1814 = BgL_arg2643z00_1812;
																				BgL_offsetz00_1815 =
																					(int) (BgL_objzd2classzd2numz00_1811);
																				{	/* Reduce/same.scm 132 */
																					long BgL_offsetz00_1816;

																					BgL_offsetz00_1816 =
																						(
																						(long) (BgL_offsetz00_1815) -
																						OBJECT_TYPE);
																					{	/* Reduce/same.scm 132 */
																						long BgL_modz00_1817;

																						{	/* Reduce/same.scm 132 */
																							int BgL_arg2645z00_1818;

																							BgL_arg2645z00_1818 =
																								(int) (((long) 16));
																							{	/* Reduce/same.scm 132 */
																								long BgL_auxz00_2817;

																								BgL_auxz00_2817 =
																									(long) (BgL_arg2645z00_1818);
																								BgL_modz00_1817 =
																									(BgL_offsetz00_1816 /
																									BgL_auxz00_2817);
																						}}
																						{	/* Reduce/same.scm 132 */
																							long BgL_restz00_1819;

																							{	/* Reduce/same.scm 132 */
																								int BgL_arg2644z00_1820;

																								BgL_arg2644z00_1820 =
																									(int) (((long) 16));
																								{	/* Reduce/same.scm 132 */
																									long BgL_auxz00_2821;

																									BgL_auxz00_2821 =
																										(long)
																										(BgL_arg2644z00_1820);
																									BgL_restz00_1819 =
																										(BgL_offsetz00_1816 %
																										BgL_auxz00_2821);
																							}}
																							{	/* Reduce/same.scm 132 */

																								BgL_method3299z00_1809 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_1814,
																										(int) (BgL_modz00_1817)),
																									(int) (BgL_restz00_1819));
																}}}}}}}}
																BgL_res3560z00_1834 =
																	CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1809)
																	(BgL_method3299z00_1809,
																		(obj_t) (BgL_node1z00_1806),
																		(obj_t) (BgL_node2z00_1383),
																		BgL_aliasz00_1384, BEOA));
														}}
														return BBOOL(BgL_res3560z00_1834);
													}
												}
										}
									}
								else
									{	/* Reduce/same.scm 134 */
										return BFALSE;
									}
							}
						else
							{	/* Reduce/same.scm 133 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* same-node?-getfield3319 */
	obj_t BGl_samezd2nodezf3zd2getfield3319zf3zzreduce_samez00(obj_t
		BgL_envz00_2206, obj_t BgL_nodez00_2207, obj_t BgL_node2z00_2208,
		obj_t BgL_aliasz00_2209)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 124 */
			{
				BgL_getfieldz00_bglt BgL_nodez00_1371;

				BgL_nodez00_bglt BgL_node2z00_1372;

				obj_t BgL_aliasz00_1373;

				BgL_nodez00_1371 = (BgL_getfieldz00_bglt) (BgL_nodez00_2207);
				BgL_node2z00_1372 = (BgL_nodez00_bglt) (BgL_node2z00_2208);
				BgL_aliasz00_1373 = BgL_aliasz00_2209;
				{

					{	/* Reduce/same.scm 125 */
						bool_t BgL_testz00_2836;

						{	/* Reduce/same.scm 125 */
							obj_t BgL_obj2465z00_1765;

							BgL_obj2465z00_1765 = (obj_t) (BgL_node2z00_1372);
							BgL_testz00_2836 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2465z00_1765,
								BGl_getfieldz00zzast_nodez00);
						}
						if (BgL_testz00_2836)
							{	/* Reduce/same.scm 126 */
								bool_t BgL_testz00_2839;

								{	/* Reduce/same.scm 126 */
									obj_t BgL_arg3467z00_1378;

									obj_t BgL_arg3468z00_1379;

									BgL_arg3467z00_1378 =
										(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1371))->
										BgL_fnamez00);
									{
										BgL_getfieldz00_bglt BgL_auxz00_2841;

										BgL_auxz00_2841 =
											(BgL_getfieldz00_bglt) (BgL_node2z00_1372);
										BgL_arg3468z00_1379 =
											(((BgL_getfieldz00_bglt) CREF(BgL_auxz00_2841))->
											BgL_fnamez00);
									}
									BgL_testz00_2839 =
										bigloo_strcmp(BgL_arg3467z00_1378, BgL_arg3468z00_1379);
								}
								if (BgL_testz00_2839)
									{	/* Reduce/same.scm 126 */
										{	/* Reduce/same.scm 124 */
											obj_t BgL_nextzd2method3318zd2_1380;

											BgL_nextzd2method3318zd2_1380 =
												BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
												(BgL_objectz00_bglt) (BgL_nodez00_1371),
												BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
												BGl_getfieldz00zzast_nodez00);
											if (PROCEDUREP(BgL_nextzd2method3318zd2_1380))
												{	/* Reduce/same.scm 124 */
													return
														PROCEDURE_ENTRY(BgL_nextzd2method3318zd2_1380)
														(BgL_nextzd2method3318zd2_1380,
														(obj_t) (BgL_nodez00_1371),
														(obj_t) (BgL_node2z00_1372), BgL_aliasz00_1373,
														BEOA);
												}
											else
												{	/* Reduce/same.scm 124 */
													{	/* Reduce/same.scm 124 */
														bool_t BgL_res3557z00_1799;

														{	/* Reduce/same.scm 124 */
															BgL_nodez00_bglt BgL_node1z00_1771;

															BgL_node1z00_1771 =
																(BgL_nodez00_bglt) (BgL_nodez00_1371);
															{	/* Reduce/same.scm 124 */
																obj_t BgL_method3299z00_1774;

																{	/* Reduce/same.scm 124 */
																	BgL_objectz00_bglt BgL_objz00_1775;

																	BgL_objz00_1775 =
																		(BgL_objectz00_bglt) (BgL_node1z00_1771);
																	{	/* Reduce/same.scm 124 */
																		long BgL_objzd2classzd2numz00_1776;

																		BgL_objzd2classzd2numz00_1776 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_1775);
																		{	/* Reduce/same.scm 124 */
																			obj_t BgL_arg2643z00_1777;

																			BgL_arg2643z00_1777 =
																				PROCEDURE_REF
																				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																				(int) (((long) 1)));
																			{	/* Reduce/same.scm 124 */
																				obj_t BgL_arrayz00_1779;

																				int BgL_offsetz00_1780;

																				BgL_arrayz00_1779 = BgL_arg2643z00_1777;
																				BgL_offsetz00_1780 =
																					(int) (BgL_objzd2classzd2numz00_1776);
																				{	/* Reduce/same.scm 124 */
																					long BgL_offsetz00_1781;

																					BgL_offsetz00_1781 =
																						(
																						(long) (BgL_offsetz00_1780) -
																						OBJECT_TYPE);
																					{	/* Reduce/same.scm 124 */
																						long BgL_modz00_1782;

																						{	/* Reduce/same.scm 124 */
																							int BgL_arg2645z00_1783;

																							BgL_arg2645z00_1783 =
																								(int) (((long) 16));
																							{	/* Reduce/same.scm 124 */
																								long BgL_auxz00_2862;

																								BgL_auxz00_2862 =
																									(long) (BgL_arg2645z00_1783);
																								BgL_modz00_1782 =
																									(BgL_offsetz00_1781 /
																									BgL_auxz00_2862);
																						}}
																						{	/* Reduce/same.scm 124 */
																							long BgL_restz00_1784;

																							{	/* Reduce/same.scm 124 */
																								int BgL_arg2644z00_1785;

																								BgL_arg2644z00_1785 =
																									(int) (((long) 16));
																								{	/* Reduce/same.scm 124 */
																									long BgL_auxz00_2866;

																									BgL_auxz00_2866 =
																										(long)
																										(BgL_arg2644z00_1785);
																									BgL_restz00_1784 =
																										(BgL_offsetz00_1781 %
																										BgL_auxz00_2866);
																							}}
																							{	/* Reduce/same.scm 124 */

																								BgL_method3299z00_1774 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_1779,
																										(int) (BgL_modz00_1782)),
																									(int) (BgL_restz00_1784));
																}}}}}}}}
																BgL_res3557z00_1799 =
																	CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1774)
																	(BgL_method3299z00_1774,
																		(obj_t) (BgL_node1z00_1771),
																		(obj_t) (BgL_node2z00_1372),
																		BgL_aliasz00_1373, BEOA));
														}}
														return BBOOL(BgL_res3557z00_1799);
													}
												}
										}
									}
								else
									{	/* Reduce/same.scm 126 */
										return BFALSE;
									}
							}
						else
							{	/* Reduce/same.scm 125 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* same-node?-pragma3317 */
	obj_t BGl_samezd2nodezf3zd2pragma3317zf3zzreduce_samez00(obj_t
		BgL_envz00_2210, obj_t BgL_nodez00_2211, obj_t BgL_node2z00_2212,
		obj_t BgL_aliasz00_2213)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 115 */
			{
				BgL_pragmaz00_bglt BgL_nodez00_1355;

				BgL_nodez00_bglt BgL_node2z00_1356;

				obj_t BgL_aliasz00_1357;

				{	/* Reduce/same.scm 116 */
					bool_t BgL_auxz00_2881;

					BgL_nodez00_1355 = (BgL_pragmaz00_bglt) (BgL_nodez00_2211);
					BgL_node2z00_1356 = (BgL_nodez00_bglt) (BgL_node2z00_2212);
					BgL_aliasz00_1357 = BgL_aliasz00_2213;
					{	/* Reduce/same.scm 116 */
						bool_t BgL_testz00_2882;

						{	/* Reduce/same.scm 116 */
							obj_t BgL_obj2415z00_1756;

							BgL_obj2415z00_1756 = (obj_t) (BgL_node2z00_1356);
							BgL_testz00_2882 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2415z00_1756,
								BGl_pragmaz00zzast_nodez00);
						}
						if (BgL_testz00_2882)
							{	/* Reduce/same.scm 117 */
								bool_t BgL_testz00_2885;

								{	/* Reduce/same.scm 117 */
									obj_t BgL_auxz00_2886;

									{	/* Reduce/same.scm 117 */
										BgL_typez00_bglt BgL_auxz00_2887;

										{
											BgL_nodez00_bglt BgL_auxz00_2888;

											BgL_auxz00_2888 = (BgL_nodez00_bglt) (BgL_nodez00_1355);
											BgL_auxz00_2887 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2888))->
												BgL_typez00);
										}
										BgL_auxz00_2886 = (obj_t) (BgL_auxz00_2887);
									}
									BgL_testz00_2885 =
										(BgL_auxz00_2886 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1356))->
												BgL_typez00)));
								}
								if (BgL_testz00_2885)
									{	/* Reduce/same.scm 118 */
										bool_t BgL_testz00_2895;

										{	/* Reduce/same.scm 118 */
											obj_t BgL_arg3462z00_1365;

											obj_t BgL_arg3463z00_1366;

											BgL_arg3462z00_1365 =
												(((BgL_pragmaz00_bglt) CREF(BgL_nodez00_1355))->
												BgL_formatz00);
											{
												BgL_pragmaz00_bglt BgL_auxz00_2897;

												BgL_auxz00_2897 =
													(BgL_pragmaz00_bglt) (BgL_node2z00_1356);
												BgL_arg3463z00_1366 =
													(((BgL_pragmaz00_bglt) CREF(BgL_auxz00_2897))->
													BgL_formatz00);
											}
											BgL_testz00_2895 =
												bigloo_strcmp(BgL_arg3462z00_1365, BgL_arg3463z00_1366);
										}
										if (BgL_testz00_2895)
											{	/* Reduce/same.scm 119 */
												obj_t BgL_arg3460z00_1363;

												obj_t BgL_arg3461z00_1364;

												{
													BgL_externz00_bglt BgL_auxz00_2901;

													BgL_auxz00_2901 =
														(BgL_externz00_bglt) (BgL_nodez00_1355);
													BgL_arg3460z00_1363 =
														(((BgL_externz00_bglt) CREF(BgL_auxz00_2901))->
														BgL_exprza2za2);
												}
												{
													BgL_externz00_bglt BgL_auxz00_2904;

													BgL_auxz00_2904 =
														(BgL_externz00_bglt) (
														(BgL_pragmaz00_bglt) (BgL_node2z00_1356));
													BgL_arg3461z00_1364 =
														(((BgL_externz00_bglt) CREF(BgL_auxz00_2904))->
														BgL_exprza2za2);
												}
												BgL_auxz00_2881 =
													BGl_samezd2nodeza2zf3z83zzreduce_samez00
													(BgL_arg3460z00_1363, BgL_arg3461z00_1364,
													BgL_aliasz00_1357);
											}
										else
											{	/* Reduce/same.scm 118 */
												BgL_auxz00_2881 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/same.scm 117 */
										BgL_auxz00_2881 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 116 */
								BgL_auxz00_2881 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_2881);
				}
			}
		}
	}



/* same-node?-extern3315 */
	obj_t BGl_samezd2nodezf3zd2extern3315zf3zzreduce_samez00(obj_t
		BgL_envz00_2214, obj_t BgL_nodez00_2215, obj_t BgL_node2z00_2216,
		obj_t BgL_aliasz00_2217)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 104 */
			{
				BgL_externz00_bglt BgL_nodez00_1342;

				BgL_nodez00_bglt BgL_node2z00_1343;

				obj_t BgL_aliasz00_1344;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_auxz00_2912;

					BgL_nodez00_1342 = (BgL_externz00_bglt) (BgL_nodez00_2215);
					BgL_node2z00_1343 = (BgL_nodez00_bglt) (BgL_node2z00_2216);
					BgL_aliasz00_1344 = BgL_aliasz00_2217;
					{	/* Reduce/same.scm 108 */
						bool_t BgL_testz00_2913;

						{	/* Reduce/same.scm 108 */
							obj_t BgL_obj2373z00_1751;

							BgL_obj2373z00_1751 = (obj_t) (BgL_node2z00_1343);
							BgL_testz00_2913 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2373z00_1751,
								BGl_externz00zzast_nodez00);
						}
						if (BgL_testz00_2913)
							{	/* Reduce/same.scm 109 */
								bool_t BgL_testz00_2916;

								{	/* Reduce/same.scm 109 */
									obj_t BgL_auxz00_2917;

									{	/* Reduce/same.scm 109 */
										BgL_typez00_bglt BgL_auxz00_2918;

										{
											BgL_nodez00_bglt BgL_auxz00_2919;

											BgL_auxz00_2919 = (BgL_nodez00_bglt) (BgL_nodez00_1342);
											BgL_auxz00_2918 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2919))->
												BgL_typez00);
										}
										BgL_auxz00_2917 = (obj_t) (BgL_auxz00_2918);
									}
									BgL_testz00_2916 =
										(BgL_auxz00_2917 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1343))->
												BgL_typez00)));
								}
								if (BgL_testz00_2916)
									{	/* Reduce/same.scm 110 */
										obj_t BgL_arg3455z00_1349;

										obj_t BgL_arg3456z00_1350;

										BgL_arg3455z00_1349 =
											(((BgL_externz00_bglt) CREF(BgL_nodez00_1342))->
											BgL_exprza2za2);
										{
											BgL_externz00_bglt BgL_auxz00_2927;

											BgL_auxz00_2927 =
												(BgL_externz00_bglt) (BgL_node2z00_1343);
											BgL_arg3456z00_1350 =
												(((BgL_externz00_bglt) CREF(BgL_auxz00_2927))->
												BgL_exprza2za2);
										}
										BgL_auxz00_2912 =
											BGl_samezd2nodeza2zf3z83zzreduce_samez00
											(BgL_arg3455z00_1349, BgL_arg3456z00_1350,
											BgL_aliasz00_1344);
									}
								else
									{	/* Reduce/same.scm 109 */
										BgL_auxz00_2912 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 108 */
								BgL_auxz00_2912 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_2912);
				}
			}
		}
	}



/* same-node?-app3313 */
	obj_t BGl_samezd2nodezf3zd2app3313zf3zzreduce_samez00(obj_t BgL_envz00_2218,
		obj_t BgL_nodez00_2219, obj_t BgL_node2z00_2220, obj_t BgL_aliasz00_2221)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 95 */
			{
				BgL_appz00_bglt BgL_nodez00_1326;

				BgL_nodez00_bglt BgL_node2z00_1327;

				obj_t BgL_aliasz00_1328;

				{	/* Reduce/same.scm 96 */
					bool_t BgL_auxz00_2934;

					BgL_nodez00_1326 = (BgL_appz00_bglt) (BgL_nodez00_2219);
					BgL_node2z00_1327 = (BgL_nodez00_bglt) (BgL_node2z00_2220);
					BgL_aliasz00_1328 = BgL_aliasz00_2221;
					{	/* Reduce/same.scm 96 */
						bool_t BgL_testz00_2935;

						{	/* Reduce/same.scm 96 */
							obj_t BgL_obj2276z00_1715;

							BgL_obj2276z00_1715 = (obj_t) (BgL_node2z00_1327);
							BgL_testz00_2935 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2276z00_1715,
								BGl_appz00zzast_nodez00);
						}
						if (BgL_testz00_2935)
							{	/* Reduce/same.scm 97 */
								bool_t BgL_testz00_2938;

								{	/* Reduce/same.scm 97 */
									obj_t BgL_auxz00_2939;

									{	/* Reduce/same.scm 97 */
										BgL_typez00_bglt BgL_auxz00_2940;

										{
											BgL_nodez00_bglt BgL_auxz00_2941;

											BgL_auxz00_2941 = (BgL_nodez00_bglt) (BgL_nodez00_1326);
											BgL_auxz00_2940 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2941))->
												BgL_typez00);
										}
										BgL_auxz00_2939 = (obj_t) (BgL_auxz00_2940);
									}
									BgL_testz00_2938 =
										(BgL_auxz00_2939 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1327))->
												BgL_typez00)));
								}
								if (BgL_testz00_2938)
									{	/* Reduce/same.scm 98 */
										bool_t BgL_testz00_2948;

										{	/* Reduce/same.scm 98 */
											BgL_varz00_bglt BgL_arg3450z00_1336;

											BgL_varz00_bglt BgL_arg3451z00_1337;

											BgL_arg3450z00_1336 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_1326))->
												BgL_funz00);
											{
												BgL_appz00_bglt BgL_auxz00_2950;

												BgL_auxz00_2950 = (BgL_appz00_bglt) (BgL_node2z00_1327);
												BgL_arg3451z00_1337 =
													(((BgL_appz00_bglt) CREF(BgL_auxz00_2950))->
													BgL_funz00);
											}
											{	/* Reduce/same.scm 98 */
												bool_t BgL_res3554z00_1748;

												{	/* Reduce/same.scm 98 */
													BgL_nodez00_bglt BgL_node1z00_1720;

													BgL_nodez00_bglt BgL_node2z00_1721;

													BgL_node1z00_1720 =
														(BgL_nodez00_bglt) (BgL_arg3450z00_1336);
													BgL_node2z00_1721 =
														(BgL_nodez00_bglt) (BgL_arg3451z00_1337);
													{	/* Reduce/same.scm 98 */
														obj_t BgL_method3299z00_1723;

														{	/* Reduce/same.scm 98 */
															BgL_objectz00_bglt BgL_objz00_1724;

															BgL_objz00_1724 =
																(BgL_objectz00_bglt) (BgL_node1z00_1720);
															{	/* Reduce/same.scm 98 */
																long BgL_objzd2classzd2numz00_1725;

																BgL_objzd2classzd2numz00_1725 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1724);
																{	/* Reduce/same.scm 98 */
																	obj_t BgL_arg2643z00_1726;

																	BgL_arg2643z00_1726 =
																		PROCEDURE_REF
																		(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																		(int) (((long) 1)));
																	{	/* Reduce/same.scm 98 */
																		obj_t BgL_arrayz00_1728;

																		int BgL_offsetz00_1729;

																		BgL_arrayz00_1728 = BgL_arg2643z00_1726;
																		BgL_offsetz00_1729 =
																			(int) (BgL_objzd2classzd2numz00_1725);
																		{	/* Reduce/same.scm 98 */
																			long BgL_offsetz00_1730;

																			BgL_offsetz00_1730 =
																				(
																				(long) (BgL_offsetz00_1729) -
																				OBJECT_TYPE);
																			{	/* Reduce/same.scm 98 */
																				long BgL_modz00_1731;

																				{	/* Reduce/same.scm 98 */
																					int BgL_arg2645z00_1732;

																					BgL_arg2645z00_1732 =
																						(int) (((long) 16));
																					{	/* Reduce/same.scm 98 */
																						long BgL_auxz00_2963;

																						BgL_auxz00_2963 =
																							(long) (BgL_arg2645z00_1732);
																						BgL_modz00_1731 =
																							(BgL_offsetz00_1730 /
																							BgL_auxz00_2963);
																				}}
																				{	/* Reduce/same.scm 98 */
																					long BgL_restz00_1733;

																					{	/* Reduce/same.scm 98 */
																						int BgL_arg2644z00_1734;

																						BgL_arg2644z00_1734 =
																							(int) (((long) 16));
																						{	/* Reduce/same.scm 98 */
																							long BgL_auxz00_2967;

																							BgL_auxz00_2967 =
																								(long) (BgL_arg2644z00_1734);
																							BgL_restz00_1733 =
																								(BgL_offsetz00_1730 %
																								BgL_auxz00_2967);
																					}}
																					{	/* Reduce/same.scm 98 */

																						BgL_method3299z00_1723 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1728,
																								(int) (BgL_modz00_1731)),
																							(int) (BgL_restz00_1733));
														}}}}}}}}
														BgL_res3554z00_1748 =
															CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1723)
															(BgL_method3299z00_1723,
																(obj_t) (BgL_node1z00_1720),
																(obj_t) (BgL_node2z00_1721), BgL_aliasz00_1328,
																BEOA));
												}}
												BgL_testz00_2948 = BgL_res3554z00_1748;
										}}
										if (BgL_testz00_2948)
											{	/* Reduce/same.scm 99 */
												obj_t BgL_arg3448z00_1334;

												obj_t BgL_arg3449z00_1335;

												BgL_arg3448z00_1334 =
													(((BgL_appz00_bglt) CREF(BgL_nodez00_1326))->
													BgL_argsz00);
												{
													BgL_appz00_bglt BgL_auxz00_2980;

													BgL_auxz00_2980 =
														(BgL_appz00_bglt) (BgL_node2z00_1327);
													BgL_arg3449z00_1335 =
														(((BgL_appz00_bglt) CREF(BgL_auxz00_2980))->
														BgL_argsz00);
												}
												BgL_auxz00_2934 =
													BGl_samezd2nodeza2zf3z83zzreduce_samez00
													(BgL_arg3448z00_1334, BgL_arg3449z00_1335,
													BgL_aliasz00_1328);
											}
										else
											{	/* Reduce/same.scm 98 */
												BgL_auxz00_2934 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/same.scm 97 */
										BgL_auxz00_2934 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 96 */
								BgL_auxz00_2934 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_2934);
				}
			}
		}
	}



/* same-node?-funcall3311 */
	obj_t BGl_samezd2nodezf3zd2funcall3311zf3zzreduce_samez00(obj_t
		BgL_envz00_2222, obj_t BgL_nodez00_2223, obj_t BgL_node2z00_2224,
		obj_t BgL_aliasz00_2225)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 86 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1310;

				BgL_nodez00_bglt BgL_node2z00_1311;

				obj_t BgL_aliasz00_1312;

				{	/* Reduce/same.scm 87 */
					bool_t BgL_auxz00_2987;

					BgL_nodez00_1310 = (BgL_funcallz00_bglt) (BgL_nodez00_2223);
					BgL_node2z00_1311 = (BgL_nodez00_bglt) (BgL_node2z00_2224);
					BgL_aliasz00_1312 = BgL_aliasz00_2225;
					{	/* Reduce/same.scm 87 */
						bool_t BgL_testz00_2988;

						{	/* Reduce/same.scm 87 */
							obj_t BgL_obj2335z00_1679;

							BgL_obj2335z00_1679 = (obj_t) (BgL_node2z00_1311);
							BgL_testz00_2988 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2335z00_1679,
								BGl_funcallz00zzast_nodez00);
						}
						if (BgL_testz00_2988)
							{	/* Reduce/same.scm 88 */
								bool_t BgL_testz00_2991;

								{	/* Reduce/same.scm 88 */
									obj_t BgL_auxz00_2992;

									{	/* Reduce/same.scm 88 */
										BgL_typez00_bglt BgL_auxz00_2993;

										{
											BgL_nodez00_bglt BgL_auxz00_2994;

											BgL_auxz00_2994 = (BgL_nodez00_bglt) (BgL_nodez00_1310);
											BgL_auxz00_2993 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2994))->
												BgL_typez00);
										}
										BgL_auxz00_2992 = (obj_t) (BgL_auxz00_2993);
									}
									BgL_testz00_2991 =
										(BgL_auxz00_2992 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1311))->
												BgL_typez00)));
								}
								if (BgL_testz00_2991)
									{	/* Reduce/same.scm 89 */
										bool_t BgL_testz00_3001;

										{	/* Reduce/same.scm 89 */
											BgL_nodez00_bglt BgL_arg3443z00_1320;

											BgL_nodez00_bglt BgL_arg3444z00_1321;

											BgL_arg3443z00_1320 =
												(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1310))->
												BgL_funz00);
											{
												BgL_funcallz00_bglt BgL_auxz00_3003;

												BgL_auxz00_3003 =
													(BgL_funcallz00_bglt) (BgL_node2z00_1311);
												BgL_arg3444z00_1321 =
													(((BgL_funcallz00_bglt) CREF(BgL_auxz00_3003))->
													BgL_funz00);
											}
											{	/* Reduce/same.scm 89 */
												bool_t BgL_res3551z00_1712;

												{	/* Reduce/same.scm 89 */
													obj_t BgL_method3299z00_1687;

													{	/* Reduce/same.scm 89 */
														BgL_objectz00_bglt BgL_objz00_1688;

														BgL_objz00_1688 =
															(BgL_objectz00_bglt) (BgL_arg3443z00_1320);
														{	/* Reduce/same.scm 89 */
															long BgL_objzd2classzd2numz00_1689;

															BgL_objzd2classzd2numz00_1689 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1688);
															{	/* Reduce/same.scm 89 */
																obj_t BgL_arg2643z00_1690;

																BgL_arg2643z00_1690 =
																	PROCEDURE_REF
																	(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																	(int) (((long) 1)));
																{	/* Reduce/same.scm 89 */
																	obj_t BgL_arrayz00_1692;

																	int BgL_offsetz00_1693;

																	BgL_arrayz00_1692 = BgL_arg2643z00_1690;
																	BgL_offsetz00_1693 =
																		(int) (BgL_objzd2classzd2numz00_1689);
																	{	/* Reduce/same.scm 89 */
																		long BgL_offsetz00_1694;

																		BgL_offsetz00_1694 =
																			(
																			(long) (BgL_offsetz00_1693) -
																			OBJECT_TYPE);
																		{	/* Reduce/same.scm 89 */
																			long BgL_modz00_1695;

																			{	/* Reduce/same.scm 89 */
																				int BgL_arg2645z00_1696;

																				BgL_arg2645z00_1696 =
																					(int) (((long) 16));
																				{	/* Reduce/same.scm 89 */
																					long BgL_auxz00_3014;

																					BgL_auxz00_3014 =
																						(long) (BgL_arg2645z00_1696);
																					BgL_modz00_1695 =
																						(BgL_offsetz00_1694 /
																						BgL_auxz00_3014);
																			}}
																			{	/* Reduce/same.scm 89 */
																				long BgL_restz00_1697;

																				{	/* Reduce/same.scm 89 */
																					int BgL_arg2644z00_1698;

																					BgL_arg2644z00_1698 =
																						(int) (((long) 16));
																					{	/* Reduce/same.scm 89 */
																						long BgL_auxz00_3018;

																						BgL_auxz00_3018 =
																							(long) (BgL_arg2644z00_1698);
																						BgL_restz00_1697 =
																							(BgL_offsetz00_1694 %
																							BgL_auxz00_3018);
																				}}
																				{	/* Reduce/same.scm 89 */

																					BgL_method3299z00_1687 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1692,
																							(int) (BgL_modz00_1695)),
																						(int) (BgL_restz00_1697));
													}}}}}}}}
													BgL_res3551z00_1712 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1687)
														(BgL_method3299z00_1687,
															(obj_t) (BgL_arg3443z00_1320),
															(obj_t) (BgL_arg3444z00_1321), BgL_aliasz00_1312,
															BEOA));
												}
												BgL_testz00_3001 = BgL_res3551z00_1712;
										}}
										if (BgL_testz00_3001)
											{	/* Reduce/same.scm 90 */
												obj_t BgL_arg3440z00_1318;

												obj_t BgL_arg3441z00_1319;

												BgL_arg3440z00_1318 =
													(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1310))->
													BgL_argsz00);
												{
													BgL_funcallz00_bglt BgL_auxz00_3031;

													BgL_auxz00_3031 =
														(BgL_funcallz00_bglt) (BgL_node2z00_1311);
													BgL_arg3441z00_1319 =
														(((BgL_funcallz00_bglt) CREF(BgL_auxz00_3031))->
														BgL_argsz00);
												}
												BgL_auxz00_2987 =
													BGl_samezd2nodeza2zf3z83zzreduce_samez00
													(BgL_arg3440z00_1318, BgL_arg3441z00_1319,
													BgL_aliasz00_1312);
											}
										else
											{	/* Reduce/same.scm 89 */
												BgL_auxz00_2987 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/same.scm 88 */
										BgL_auxz00_2987 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 87 */
								BgL_auxz00_2987 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_2987);
				}
			}
		}
	}



/* same-node?-app-ly3309 */
	obj_t BGl_samezd2nodezf3zd2appzd2ly3309z21zzreduce_samez00(obj_t
		BgL_envz00_2226, obj_t BgL_nodez00_2227, obj_t BgL_node2z00_2228,
		obj_t BgL_aliasz00_2229)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 77 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1294;

				BgL_nodez00_bglt BgL_node2z00_1295;

				obj_t BgL_aliasz00_1296;

				{	/* Reduce/same.scm 78 */
					bool_t BgL_auxz00_3038;

					BgL_nodez00_1294 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2227);
					BgL_node2z00_1295 = (BgL_nodez00_bglt) (BgL_node2z00_2228);
					BgL_aliasz00_1296 = BgL_aliasz00_2229;
					{	/* Reduce/same.scm 78 */
						bool_t BgL_testz00_3039;

						{	/* Reduce/same.scm 78 */
							obj_t BgL_obj2303z00_1614;

							BgL_obj2303z00_1614 = (obj_t) (BgL_node2z00_1295);
							BgL_testz00_3039 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2303z00_1614,
								BGl_appzd2lyzd2zzast_nodez00);
						}
						if (BgL_testz00_3039)
							{	/* Reduce/same.scm 79 */
								bool_t BgL_testz00_3042;

								{	/* Reduce/same.scm 79 */
									obj_t BgL_auxz00_3043;

									{	/* Reduce/same.scm 79 */
										BgL_typez00_bglt BgL_auxz00_3044;

										{
											BgL_nodez00_bglt BgL_auxz00_3045;

											BgL_auxz00_3045 = (BgL_nodez00_bglt) (BgL_nodez00_1294);
											BgL_auxz00_3044 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3045))->
												BgL_typez00);
										}
										BgL_auxz00_3043 = (obj_t) (BgL_auxz00_3044);
									}
									BgL_testz00_3042 =
										(BgL_auxz00_3043 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1295))->
												BgL_typez00)));
								}
								if (BgL_testz00_3042)
									{	/* Reduce/same.scm 80 */
										bool_t BgL_testz00_3052;

										{	/* Reduce/same.scm 80 */
											BgL_nodez00_bglt BgL_arg3435z00_1304;

											BgL_nodez00_bglt BgL_arg3436z00_1305;

											BgL_arg3435z00_1304 =
												(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1294))->
												BgL_funz00);
											{
												BgL_appzd2lyzd2_bglt BgL_auxz00_3054;

												BgL_auxz00_3054 =
													(BgL_appzd2lyzd2_bglt) (BgL_node2z00_1295);
												BgL_arg3436z00_1305 =
													(((BgL_appzd2lyzd2_bglt) CREF(BgL_auxz00_3054))->
													BgL_funz00);
											}
											{	/* Reduce/same.scm 80 */
												bool_t BgL_res3545z00_1647;

												{	/* Reduce/same.scm 80 */
													obj_t BgL_method3299z00_1622;

													{	/* Reduce/same.scm 80 */
														BgL_objectz00_bglt BgL_objz00_1623;

														BgL_objz00_1623 =
															(BgL_objectz00_bglt) (BgL_arg3435z00_1304);
														{	/* Reduce/same.scm 80 */
															long BgL_objzd2classzd2numz00_1624;

															BgL_objzd2classzd2numz00_1624 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1623);
															{	/* Reduce/same.scm 80 */
																obj_t BgL_arg2643z00_1625;

																BgL_arg2643z00_1625 =
																	PROCEDURE_REF
																	(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																	(int) (((long) 1)));
																{	/* Reduce/same.scm 80 */
																	obj_t BgL_arrayz00_1627;

																	int BgL_offsetz00_1628;

																	BgL_arrayz00_1627 = BgL_arg2643z00_1625;
																	BgL_offsetz00_1628 =
																		(int) (BgL_objzd2classzd2numz00_1624);
																	{	/* Reduce/same.scm 80 */
																		long BgL_offsetz00_1629;

																		BgL_offsetz00_1629 =
																			(
																			(long) (BgL_offsetz00_1628) -
																			OBJECT_TYPE);
																		{	/* Reduce/same.scm 80 */
																			long BgL_modz00_1630;

																			{	/* Reduce/same.scm 80 */
																				int BgL_arg2645z00_1631;

																				BgL_arg2645z00_1631 =
																					(int) (((long) 16));
																				{	/* Reduce/same.scm 80 */
																					long BgL_auxz00_3065;

																					BgL_auxz00_3065 =
																						(long) (BgL_arg2645z00_1631);
																					BgL_modz00_1630 =
																						(BgL_offsetz00_1629 /
																						BgL_auxz00_3065);
																			}}
																			{	/* Reduce/same.scm 80 */
																				long BgL_restz00_1632;

																				{	/* Reduce/same.scm 80 */
																					int BgL_arg2644z00_1633;

																					BgL_arg2644z00_1633 =
																						(int) (((long) 16));
																					{	/* Reduce/same.scm 80 */
																						long BgL_auxz00_3069;

																						BgL_auxz00_3069 =
																							(long) (BgL_arg2644z00_1633);
																						BgL_restz00_1632 =
																							(BgL_offsetz00_1629 %
																							BgL_auxz00_3069);
																				}}
																				{	/* Reduce/same.scm 80 */

																					BgL_method3299z00_1622 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1627,
																							(int) (BgL_modz00_1630)),
																						(int) (BgL_restz00_1632));
													}}}}}}}}
													BgL_res3545z00_1647 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1622)
														(BgL_method3299z00_1622,
															(obj_t) (BgL_arg3435z00_1304),
															(obj_t) (BgL_arg3436z00_1305), BgL_aliasz00_1296,
															BEOA));
												}
												BgL_testz00_3052 = BgL_res3545z00_1647;
										}}
										if (BgL_testz00_3052)
											{	/* Reduce/same.scm 81 */
												BgL_nodez00_bglt BgL_arg3433z00_1302;

												BgL_nodez00_bglt BgL_arg3434z00_1303;

												BgL_arg3433z00_1302 =
													(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1294))->
													BgL_argz00);
												{
													BgL_appzd2lyzd2_bglt BgL_auxz00_3082;

													BgL_auxz00_3082 =
														(BgL_appzd2lyzd2_bglt) (BgL_node2z00_1295);
													BgL_arg3434z00_1303 =
														(((BgL_appzd2lyzd2_bglt) CREF(BgL_auxz00_3082))->
														BgL_argz00);
												}
												{	/* Reduce/same.scm 81 */
													bool_t BgL_res3548z00_1678;

													{	/* Reduce/same.scm 81 */
														obj_t BgL_method3299z00_1653;

														{	/* Reduce/same.scm 81 */
															BgL_objectz00_bglt BgL_objz00_1654;

															BgL_objz00_1654 =
																(BgL_objectz00_bglt) (BgL_arg3433z00_1302);
															{	/* Reduce/same.scm 81 */
																long BgL_objzd2classzd2numz00_1655;

																BgL_objzd2classzd2numz00_1655 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1654);
																{	/* Reduce/same.scm 81 */
																	obj_t BgL_arg2643z00_1656;

																	BgL_arg2643z00_1656 =
																		PROCEDURE_REF
																		(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
																		(int) (((long) 1)));
																	{	/* Reduce/same.scm 81 */
																		obj_t BgL_arrayz00_1658;

																		int BgL_offsetz00_1659;

																		BgL_arrayz00_1658 = BgL_arg2643z00_1656;
																		BgL_offsetz00_1659 =
																			(int) (BgL_objzd2classzd2numz00_1655);
																		{	/* Reduce/same.scm 81 */
																			long BgL_offsetz00_1660;

																			BgL_offsetz00_1660 =
																				(
																				(long) (BgL_offsetz00_1659) -
																				OBJECT_TYPE);
																			{	/* Reduce/same.scm 81 */
																				long BgL_modz00_1661;

																				{	/* Reduce/same.scm 81 */
																					int BgL_arg2645z00_1662;

																					BgL_arg2645z00_1662 =
																						(int) (((long) 16));
																					{	/* Reduce/same.scm 81 */
																						long BgL_auxz00_3093;

																						BgL_auxz00_3093 =
																							(long) (BgL_arg2645z00_1662);
																						BgL_modz00_1661 =
																							(BgL_offsetz00_1660 /
																							BgL_auxz00_3093);
																				}}
																				{	/* Reduce/same.scm 81 */
																					long BgL_restz00_1663;

																					{	/* Reduce/same.scm 81 */
																						int BgL_arg2644z00_1664;

																						BgL_arg2644z00_1664 =
																							(int) (((long) 16));
																						{	/* Reduce/same.scm 81 */
																							long BgL_auxz00_3097;

																							BgL_auxz00_3097 =
																								(long) (BgL_arg2644z00_1664);
																							BgL_restz00_1663 =
																								(BgL_offsetz00_1660 %
																								BgL_auxz00_3097);
																					}}
																					{	/* Reduce/same.scm 81 */

																						BgL_method3299z00_1653 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1658,
																								(int) (BgL_modz00_1661)),
																							(int) (BgL_restz00_1663));
														}}}}}}}}
														BgL_res3548z00_1678 =
															CBOOL(PROCEDURE_ENTRY(BgL_method3299z00_1653)
															(BgL_method3299z00_1653,
																(obj_t) (BgL_arg3433z00_1302),
																(obj_t) (BgL_arg3434z00_1303),
																BgL_aliasz00_1296, BEOA));
													}
													BgL_auxz00_3038 = BgL_res3548z00_1678;
											}}
										else
											{	/* Reduce/same.scm 80 */
												BgL_auxz00_3038 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/same.scm 79 */
										BgL_auxz00_3038 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 78 */
								BgL_auxz00_3038 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_3038);
				}
			}
		}
	}



/* same-node?-sequence3307 */
	obj_t BGl_samezd2nodezf3zd2sequence3307zf3zzreduce_samez00(obj_t
		BgL_envz00_2230, obj_t BgL_nodez00_2231, obj_t BgL_node2z00_2232,
		obj_t BgL_aliasz00_2233)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 67 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1281;

				BgL_nodez00_bglt BgL_node2z00_1282;

				obj_t BgL_aliasz00_1283;

				{	/* Reduce/same.scm 68 */
					bool_t BgL_auxz00_3112;

					BgL_nodez00_1281 = (BgL_sequencez00_bglt) (BgL_nodez00_2231);
					BgL_node2z00_1282 = (BgL_nodez00_bglt) (BgL_node2z00_2232);
					BgL_aliasz00_1283 = BgL_aliasz00_2233;
					{	/* Reduce/same.scm 68 */
						bool_t BgL_testz00_3113;

						{	/* Reduce/same.scm 68 */
							obj_t BgL_obj2238z00_1609;

							BgL_obj2238z00_1609 = (obj_t) (BgL_node2z00_1282);
							BgL_testz00_3113 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2238z00_1609,
								BGl_sequencez00zzast_nodez00);
						}
						if (BgL_testz00_3113)
							{	/* Reduce/same.scm 69 */
								bool_t BgL_testz00_3116;

								{	/* Reduce/same.scm 69 */
									obj_t BgL_auxz00_3117;

									{	/* Reduce/same.scm 69 */
										BgL_typez00_bglt BgL_auxz00_3118;

										{
											BgL_nodez00_bglt BgL_auxz00_3119;

											BgL_auxz00_3119 = (BgL_nodez00_bglt) (BgL_nodez00_1281);
											BgL_auxz00_3118 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3119))->
												BgL_typez00);
										}
										BgL_auxz00_3117 = (obj_t) (BgL_auxz00_3118);
									}
									BgL_testz00_3116 =
										(BgL_auxz00_3117 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1282))->
												BgL_typez00)));
								}
								if (BgL_testz00_3116)
									{	/* Reduce/same.scm 70 */
										obj_t BgL_arg3426z00_1288;

										obj_t BgL_arg3427z00_1289;

										BgL_arg3426z00_1288 =
											(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1281))->
											BgL_nodesz00);
										{
											BgL_sequencez00_bglt BgL_auxz00_3127;

											BgL_auxz00_3127 =
												(BgL_sequencez00_bglt) (BgL_node2z00_1282);
											BgL_arg3427z00_1289 =
												(((BgL_sequencez00_bglt) CREF(BgL_auxz00_3127))->
												BgL_nodesz00);
										}
										BgL_auxz00_3112 =
											BGl_samezd2nodeza2zf3z83zzreduce_samez00
											(BgL_arg3426z00_1288, BgL_arg3427z00_1289,
											BgL_aliasz00_1283);
									}
								else
									{	/* Reduce/same.scm 69 */
										BgL_auxz00_3112 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 68 */
								BgL_auxz00_3112 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_3112);
				}
			}
		}
	}



/* same-node?-var3305 */
	obj_t BGl_samezd2nodezf3zd2var3305zf3zzreduce_samez00(obj_t BgL_envz00_2234,
		obj_t BgL_nodez00_2235, obj_t BgL_node2z00_2236, obj_t BgL_aliasz00_2237)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 54 */
			{
				BgL_varz00_bglt BgL_nodez00_1261;

				BgL_nodez00_bglt BgL_node2z00_1262;

				obj_t BgL_aliasz00_1263;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_auxz00_3134;

					BgL_nodez00_1261 = (BgL_varz00_bglt) (BgL_nodez00_2235);
					BgL_node2z00_1262 = (BgL_nodez00_bglt) (BgL_node2z00_2236);
					BgL_aliasz00_1263 = BgL_aliasz00_2237;
					{	/* Reduce/same.scm 58 */
						bool_t BgL_testz00_3135;

						{	/* Reduce/same.scm 58 */
							obj_t BgL_obj2170z00_1600;

							BgL_obj2170z00_1600 = (obj_t) (BgL_node2z00_1262);
							BgL_testz00_3135 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_1600,
								BGl_varz00zzast_nodez00);
						}
						if (BgL_testz00_3135)
							{	/* Reduce/same.scm 59 */
								bool_t BgL_testz00_3138;

								{	/* Reduce/same.scm 59 */
									obj_t BgL_auxz00_3139;

									{	/* Reduce/same.scm 59 */
										BgL_variablez00_bglt BgL_obj1614z00_1602;

										BgL_obj1614z00_1602 =
											(((BgL_varz00_bglt) CREF(BgL_nodez00_1261))->
											BgL_variablez00);
										BgL_auxz00_3139 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1614z00_1602))->
											BgL_accessz00);
									}
									BgL_testz00_3138 =
										(BgL_auxz00_3139 == CNST_TABLE_REF(((long) 0)));
								}
								if (BgL_testz00_3138)
									{	/* Reduce/same.scm 60 */
										bool_t BgL_testz00_3144;

										{	/* Reduce/same.scm 60 */
											obj_t BgL_auxz00_3145;

											{	/* Reduce/same.scm 60 */
												BgL_typez00_bglt BgL_auxz00_3146;

												{
													BgL_nodez00_bglt BgL_auxz00_3147;

													BgL_auxz00_3147 =
														(BgL_nodez00_bglt) (BgL_nodez00_1261);
													BgL_auxz00_3146 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3147))->
														BgL_typez00);
												}
												BgL_auxz00_3145 = (obj_t) (BgL_auxz00_3146);
											}
											BgL_testz00_3144 =
												(BgL_auxz00_3145 ==
												(obj_t) (
													(((BgL_nodez00_bglt) CREF(BgL_node2z00_1262))->
														BgL_typez00)));
										}
										if (BgL_testz00_3144)
											{	/* Reduce/same.scm 61 */
												bool_t BgL__ortest_3253z00_1269;

												{	/* Reduce/same.scm 61 */
													obj_t BgL_auxz00_3154;

													{	/* Reduce/same.scm 61 */
														BgL_variablez00_bglt BgL_auxz00_3157;

														{
															BgL_varz00_bglt BgL_auxz00_3158;

															BgL_auxz00_3158 =
																(BgL_varz00_bglt) (BgL_node2z00_1262);
															BgL_auxz00_3157 =
																(((BgL_varz00_bglt) CREF(BgL_auxz00_3158))->
																BgL_variablez00);
														}
														BgL_auxz00_3154 = (obj_t) (BgL_auxz00_3157);
													}
													BgL__ortest_3253z00_1269 =
														(
														(obj_t) (
															(((BgL_varz00_bglt) CREF(BgL_nodez00_1261))->
																BgL_variablez00)) == BgL_auxz00_3154);
												}
												if (BgL__ortest_3253z00_1269)
													{	/* Reduce/same.scm 61 */
														BgL_auxz00_3134 = BgL__ortest_3253z00_1269;
													}
												else
													{	/* Reduce/same.scm 62 */
														BgL_variablez00_bglt BgL_auxz00_3164;

														{
															BgL_varz00_bglt BgL_auxz00_3166;

															BgL_auxz00_3166 =
																(BgL_varz00_bglt) (BgL_node2z00_1262);
															BgL_auxz00_3164 =
																(((BgL_varz00_bglt) CREF(BgL_auxz00_3166))->
																BgL_variablez00);
														}
														BgL_auxz00_3134 =
															BGl_aliasedzf3zf3zzreduce_samez00(
															(((BgL_varz00_bglt) CREF(BgL_nodez00_1261))->
																BgL_variablez00), BgL_auxz00_3164,
															BgL_aliasz00_1263);
													}
											}
										else
											{	/* Reduce/same.scm 60 */
												BgL_auxz00_3134 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/same.scm 59 */
										BgL_auxz00_3134 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 58 */
								BgL_auxz00_3134 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_3134);
				}
			}
		}
	}



/* same-node?-kwote3303 */
	obj_t BGl_samezd2nodezf3zd2kwote3303zf3zzreduce_samez00(obj_t BgL_envz00_2238,
		obj_t BgL_nodez00_2239, obj_t BgL_node2z00_2240, obj_t BgL_aliasz00_2241)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 43 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1248;

				BgL_nodez00_bglt BgL_node2z00_1249;

				obj_t BgL_aliasz00_1250;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_auxz00_3173;

					BgL_nodez00_1248 = (BgL_kwotez00_bglt) (BgL_nodez00_2239);
					BgL_node2z00_1249 = (BgL_nodez00_bglt) (BgL_node2z00_2240);
					BgL_aliasz00_1250 = BgL_aliasz00_2241;
					{	/* Reduce/same.scm 47 */
						bool_t BgL_testz00_3174;

						{	/* Reduce/same.scm 47 */
							obj_t BgL_obj2208z00_1595;

							BgL_obj2208z00_1595 = (obj_t) (BgL_node2z00_1249);
							BgL_testz00_3174 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2208z00_1595,
								BGl_kwotez00zzast_nodez00);
						}
						if (BgL_testz00_3174)
							{	/* Reduce/same.scm 48 */
								bool_t BgL_testz00_3177;

								{	/* Reduce/same.scm 48 */
									obj_t BgL_auxz00_3178;

									{	/* Reduce/same.scm 48 */
										BgL_typez00_bglt BgL_auxz00_3179;

										{
											BgL_nodez00_bglt BgL_auxz00_3180;

											BgL_auxz00_3180 = (BgL_nodez00_bglt) (BgL_nodez00_1248);
											BgL_auxz00_3179 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3180))->
												BgL_typez00);
										}
										BgL_auxz00_3178 = (obj_t) (BgL_auxz00_3179);
									}
									BgL_testz00_3177 =
										(BgL_auxz00_3178 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1249))->
												BgL_typez00)));
								}
								if (BgL_testz00_3177)
									{	/* Reduce/same.scm 49 */
										obj_t BgL_auxz00_3187;

										{
											BgL_kwotez00_bglt BgL_auxz00_3189;

											BgL_auxz00_3189 = (BgL_kwotez00_bglt) (BgL_node2z00_1249);
											BgL_auxz00_3187 =
												(((BgL_kwotez00_bglt) CREF(BgL_auxz00_3189))->
												BgL_valuez00);
										}
										BgL_auxz00_3173 =
											BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
											(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1248))->
												BgL_valuez00), BgL_auxz00_3187);
									}
								else
									{	/* Reduce/same.scm 48 */
										BgL_auxz00_3173 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 47 */
								BgL_auxz00_3173 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_3173);
				}
			}
		}
	}



/* same-node?-atom3301 */
	obj_t BGl_samezd2nodezf3zd2atom3301zf3zzreduce_samez00(obj_t BgL_envz00_2242,
		obj_t BgL_nodez00_2243, obj_t BgL_node2z00_2244, obj_t BgL_aliasz00_2245)
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 32 */
			{
				BgL_atomz00_bglt BgL_nodez00_1235;

				BgL_nodez00_bglt BgL_node2z00_1236;

				obj_t BgL_aliasz00_1237;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_auxz00_3196;

					BgL_nodez00_1235 = (BgL_atomz00_bglt) (BgL_nodez00_2243);
					BgL_node2z00_1236 = (BgL_nodez00_bglt) (BgL_node2z00_2244);
					BgL_aliasz00_1237 = BgL_aliasz00_2245;
					{	/* Reduce/same.scm 36 */
						bool_t BgL_testz00_3197;

						{	/* Reduce/same.scm 36 */
							obj_t BgL_obj2150z00_1590;

							BgL_obj2150z00_1590 = (obj_t) (BgL_node2z00_1236);
							BgL_testz00_3197 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2150z00_1590,
								BGl_atomz00zzast_nodez00);
						}
						if (BgL_testz00_3197)
							{	/* Reduce/same.scm 37 */
								bool_t BgL_testz00_3200;

								{	/* Reduce/same.scm 37 */
									obj_t BgL_auxz00_3201;

									{	/* Reduce/same.scm 37 */
										BgL_typez00_bglt BgL_auxz00_3202;

										{
											BgL_nodez00_bglt BgL_auxz00_3203;

											BgL_auxz00_3203 = (BgL_nodez00_bglt) (BgL_nodez00_1235);
											BgL_auxz00_3202 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3203))->
												BgL_typez00);
										}
										BgL_auxz00_3201 = (obj_t) (BgL_auxz00_3202);
									}
									BgL_testz00_3200 =
										(BgL_auxz00_3201 ==
										(obj_t) (
											(((BgL_nodez00_bglt) CREF(BgL_node2z00_1236))->
												BgL_typez00)));
								}
								if (BgL_testz00_3200)
									{	/* Reduce/same.scm 38 */
										obj_t BgL_auxz00_3210;

										{
											BgL_atomz00_bglt BgL_auxz00_3212;

											BgL_auxz00_3212 = (BgL_atomz00_bglt) (BgL_node2z00_1236);
											BgL_auxz00_3210 =
												(((BgL_atomz00_bglt) CREF(BgL_auxz00_3212))->
												BgL_valuez00);
										}
										BgL_auxz00_3196 =
											BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
											(((BgL_atomz00_bglt) CREF(BgL_nodez00_1235))->
												BgL_valuez00), BgL_auxz00_3210);
									}
								else
									{	/* Reduce/same.scm 37 */
										BgL_auxz00_3196 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/same.scm 36 */
								BgL_auxz00_3196 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_3196);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_samez00()
	{
		AN_OBJECT;
		{	/* Reduce/same.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3605z00zzreduce_samez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3605z00zzreduce_samez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3605z00zzreduce_samez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3605z00zzreduce_samez00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3605z00zzreduce_samez00));
		}
	}

#ifdef __cplusplus
}
#endif
