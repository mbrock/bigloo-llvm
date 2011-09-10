/*===========================================================================*/
/*   (Foreign/calias.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/calias.scm)*/
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

	typedef struct BgL_caliasz00_bgl
	{
		bool_t BgL_arrayzf3zf3;
	}                *BgL_caliasz00_bglt;


	static obj_t BGl_requirezd2initializa7ationz75zzforeign_caliasz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzforeign_caliasz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_caliasz00();
	static obj_t BGl_makezd2ctypezd2accessesz122116z12zzforeign_caliasz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_caliasz00zzforeign_ctypez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_caliasz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzforeign_caliasz00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_caliasz00();
	static obj_t BGl_methodzd2initzd2zzforeign_caliasz00();
	static obj_t *__cnst;


	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2157z00zzforeign_caliasz00,
		BgL_bgl_makeza7d2ctypeza7d2a2160z00,
		BGl_makezd2ctypezd2accessesz122116z12zzforeign_caliasz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2158z00zzforeign_caliasz00,
		BgL_bgl_string2158za700za7za7f2161za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string2159z00zzforeign_caliasz00,
		BgL_bgl_string2159za700za7za7f2162za7, "foreign_calias", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_caliasz00(long
		BgL_checksumz00_265, char *BgL_fromz00_266)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_caliasz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_caliasz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_caliasz00();
					BGl_importedzd2moduleszd2initz00zzforeign_caliasz00();
					BGl_methodzd2initzd2zzforeign_caliasz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_caliasz00()
	{
		AN_OBJECT;
		{	/* Foreign/calias.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_calias");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_calias");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_caliasz00()
	{
		AN_OBJECT;
		{	/* Foreign/calias.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_caliasz00()
	{
		AN_OBJECT;
		{	/* Foreign/calias.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_caliasz00()
	{
		AN_OBJECT;
		{	/* Foreign/calias.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_caliasz00zzforeign_ctypez00, BGl_proc2157z00zzforeign_caliasz00,
				BGl_string2158z00zzforeign_caliasz00);
		}
	}



/* make-ctype-accesses!2116 */
	obj_t BGl_makezd2ctypezd2accessesz122116z12zzforeign_caliasz00(obj_t
		BgL_envz00_257, obj_t BgL_whatz00_258, obj_t BgL_whoz00_259,
		obj_t BgL_locz00_260)
	{
		AN_OBJECT;
		{	/* Foreign/calias.scm 26 */
			{
				BgL_caliasz00_bglt BgL_whatz00_246;

				BgL_typez00_bglt BgL_whoz00_247;

				obj_t BgL_locz00_248;

				BgL_whatz00_246 = (BgL_caliasz00_bglt) (BgL_whatz00_258);
				BgL_whoz00_247 = (BgL_typez00_bglt) (BgL_whoz00_259);
				BgL_locz00_248 = BgL_locz00_260;
				{	/* Foreign/calias.scm 30 */
					obj_t BgL_arg2151z00_254;

					{
						BgL_typez00_bglt BgL_auxz00_276;

						BgL_auxz00_276 = (BgL_typez00_bglt) (BgL_whatz00_246);
						BgL_arg2151z00_254 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_276))->BgL_aliasz00);
					}
					return
						BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(
						(BgL_typez00_bglt) (BgL_arg2151z00_254), BgL_whoz00_247,
						BgL_locz00_248);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_caliasz00()
	{
		AN_OBJECT;
		{	/* Foreign/calias.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2159z00zzforeign_caliasz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2159z00zzforeign_caliasz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2159z00zzforeign_caliasz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2159z00zzforeign_caliasz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string2159z00zzforeign_caliasz00));
			return
				BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string2159z00zzforeign_caliasz00));
		}
	}

#ifdef __cplusplus
}
#endif
