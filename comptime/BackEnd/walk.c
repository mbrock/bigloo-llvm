/*===========================================================================*/
/*   (BackEnd/walk.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/walk.scm)*/
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


	extern obj_t
		BGl_backendzd2compilezd2zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_backendzd2walkzd2zzbackend_walkz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbackend_walkz00();
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_walkz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	extern obj_t BGl_backendzd2linkzd2zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl__backendzd2walkzd2zzbackend_walkz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_walkz00();
	static obj_t BGl_methodzd2initzd2zzbackend_walkz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_backendzd2walkzd2envz00zzbackend_walkz00,
		BgL_bgl__backendza7d2walkza72247z00,
		BGl__backendzd2walkzd2zzbackend_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2246z00zzbackend_walkz00,
		BgL_bgl_string2246za700za7za7b2248za7, "backend_walk", 12);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_walkz00(long
		BgL_checksumz00_612, char *BgL_fromz00_613)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_walkz00();
					BGl_importedzd2moduleszd2initz00zzbackend_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_walkz00()
	{
		AN_OBJECT;
		{	/* BackEnd/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_walk");
			return BUNSPEC;
		}
	}



/* backend-walk */
	BGL_EXPORTED_DEF obj_t BGl_backendzd2walkzd2zzbackend_walkz00(obj_t
		BgL_functionsz00_1)
	{
		AN_OBJECT;
		{	/* BackEnd/walk.scm 28 */
			{	/* BackEnd/walk.scm 29 */
				obj_t BgL_backendz00_470;

				BgL_backendz00_470 = BGl_thezd2backendzd2zzbackend_backendz00();
				{
					obj_t BgL_auxz00_623;

					BgL_backendz00_bglt BgL_auxz00_621;

					BgL_auxz00_623 =
						BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
						(BGl_za2moduleza2z00zzmodule_modulez00);
					BgL_auxz00_621 = (BgL_backendz00_bglt) (BgL_backendz00_470);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_621))->BgL_namez00) =
						((obj_t) BgL_auxz00_623), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_626;

					BgL_auxz00_626 = (BgL_backendz00_bglt) (BgL_backendz00_470);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_626))->BgL_functionsz00) =
						((obj_t) BgL_functionsz00_1), BUNSPEC);
				}
				BGl_backendzd2linkzd2zzbackend_backendz00(
					(BgL_backendz00_bglt) (BgL_backendz00_470),
					BGl_backendzd2compilezd2zzbackend_backendz00(
						(BgL_backendz00_bglt) (BgL_backendz00_470)));
				return BgL_backendz00_470;
			}
		}
	}



/* _backend-walk */
	obj_t BGl__backendzd2walkzd2zzbackend_walkz00(obj_t BgL_envz00_610,
		obj_t BgL_functionsz00_611)
	{
		AN_OBJECT;
		{	/* BackEnd/walk.scm 28 */
			return BGl_backendzd2walkzd2zzbackend_walkz00(BgL_functionsz00_611);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_walkz00()
	{
		AN_OBJECT;
		{	/* BackEnd/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_walkz00()
	{
		AN_OBJECT;
		{	/* BackEnd/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_walkz00()
	{
		AN_OBJECT;
		{	/* BackEnd/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2246z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2246z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2246z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string2246z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2246z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2246z00zzbackend_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2246z00zzbackend_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
