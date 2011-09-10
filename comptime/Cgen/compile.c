/*===========================================================================*/
/*   (Cgen/compile.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/compile.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_globalz00_bgl
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
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		obj_t BgL_libraryz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
	}                *BgL_globalz00_bglt;

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

	typedef struct BgL_cgenz00_bgl
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
	}              *BgL_cgenz00_bglt;


	static obj_t BGl_backendzd2compilezd2func4671z00zzcgen_compilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcgen_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_initz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcgen_compilez00();
	extern obj_t BGl_cgenzd2functionzd2zzcgen_cgenz00(BgL_globalz00_bglt);
	static obj_t BGl_methodzd2initzd2zzcgen_compilez00();
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_compilez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcgen_compilez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_compilez00();
	extern obj_t BGl_cgenz00zzbackend_cvmz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_compilez00();
	static obj_t *__cnst;


	extern obj_t BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4763z00zzcgen_compilez00,
		BgL_bgl_backendza7d2compil4766za7,
		BGl_backendzd2compilezd2func4671z00zzcgen_compilez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4764z00zzcgen_compilez00,
		BgL_bgl_string4764za700za7za7c4767za7, "backend-compile-functions", 25);
	      DEFINE_STRING(BGl_string4765z00zzcgen_compilez00,
		BgL_bgl_string4765za700za7za7c4768za7, "cgen_compile", 12);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcgen_compilez00(long
		BgL_checksumz00_1821, char *BgL_fromz00_1822)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_compilez00))
				{
					BGl_requirezd2initializa7ationz75zzcgen_compilez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcgen_compilez00();
					BGl_importedzd2moduleszd2initz00zzcgen_compilez00();
					BGl_methodzd2initzd2zzcgen_compilez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_compilez00()
	{
		AN_OBJECT;
		{	/* Cgen/compile.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cgen_compile");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cgen_compile");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_compilez00()
	{
		AN_OBJECT;
		{	/* Cgen/compile.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_compilez00()
	{
		AN_OBJECT;
		{	/* Cgen/compile.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_compilez00()
	{
		AN_OBJECT;
		{	/* Cgen/compile.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
				BGl_cgenz00zzbackend_cvmz00, BGl_proc4763z00zzcgen_compilez00,
				BGl_string4764z00zzcgen_compilez00);
		}
	}



/* backend-compile-func4671 */
	obj_t BGl_backendzd2compilezd2func4671z00zzcgen_compilez00(obj_t
		BgL_envz00_1817, obj_t BgL_mez00_1818)
	{
		AN_OBJECT;
		{	/* Cgen/compile.scm 44 */
			{
				BgL_cgenz00_bglt BgL_mez00_1799;

				{	/* Cgen/compile.scm 45 */
					bool_t BgL_auxz00_1832;

					BgL_mez00_1799 = (BgL_cgenz00_bglt) (BgL_mez00_1818);
					{	/* Cgen/compile.scm 45 */
						obj_t BgL_g4669z00_1802;

						{
							BgL_backendz00_bglt BgL_auxz00_1833;

							BgL_auxz00_1833 = (BgL_backendz00_bglt) (BgL_mez00_1799);
							BgL_g4669z00_1802 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1833))->
								BgL_functionsz00);
						}
						{
							obj_t BgL_l4667z00_1804;

							BgL_l4667z00_1804 = BgL_g4669z00_1802;
						BgL_zc3anonymousza34756ze3z83_1805:
							if (PAIRP(BgL_l4667z00_1804))
								{	/* Cgen/compile.scm 45 */
									{	/* Cgen/compile.scm 45 */
										obj_t BgL_arg4758z00_1807;

										BgL_arg4758z00_1807 = CAR(BgL_l4667z00_1804);
										BGl_cgenzd2functionzd2zzcgen_cgenz00(
											(BgL_globalz00_bglt) (BgL_arg4758z00_1807));
									}
									{
										obj_t BgL_l4667z00_1841;

										BgL_l4667z00_1841 = CDR(BgL_l4667z00_1804);
										BgL_l4667z00_1804 = BgL_l4667z00_1841;
										goto BgL_zc3anonymousza34756ze3z83_1805;
									}
								}
							else
								{	/* Cgen/compile.scm 45 */
									BgL_auxz00_1832 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_1832);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_compilez00()
	{
		AN_OBJECT;
		{	/* Cgen/compile.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 79490170),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 241571075),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzcgen_cgenz00(((long) 515633288),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_initz00(((long) 312007337),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_cvmz00(((long) 52967726),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 179083793),
				BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					254412896), BSTRING_TO_STRING(BGl_string4765z00zzcgen_compilez00));
		}
	}

#ifdef __cplusplus
}
#endif
