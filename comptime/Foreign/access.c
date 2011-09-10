/*===========================================================================*/
/*   (Foreign/access.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/access.scm)*/
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


	static obj_t BGl_requirezd2initializa7ationz75zzforeign_accessz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzforeign_accessz00();
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_accessz00();
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_accessz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_cstructz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_cpointerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_cfunctionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_copaquez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_cenumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_caliasz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzforeign_accessz00();
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl__makezd2ctypezd2accessesz121600z12zzforeign_accessz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2ctypezd2accessesz12z12zzforeign_accessz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_accessz00();
	static obj_t BGl_methodzd2initzd2zzforeign_accessz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1605z00zzforeign_accessz00,
		BgL_bgl_string1605za700za7za7f1607za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string1606z00zzforeign_accessz00,
		BgL_bgl_string1606za700za7za7f1608za7, "foreign_access", 14);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_makezd2ctypezd2accessesz121600zd2envzc0zzforeign_accessz00,
		BgL_bgl__makeza7d2ctypeza7d21609z00,
		BGl__makezd2ctypezd2accessesz121600z12zzforeign_accessz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
		BgL_bgl__makeza7d2ctypeza7d21610z00,
		BGl__makezd2ctypezd2accessesz12z12zzforeign_accessz00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_accessz00(long
		BgL_checksumz00_206, char *BgL_fromz00_207)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_accessz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_accessz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_accessz00();
					BGl_importedzd2moduleszd2initz00zzforeign_accessz00();
					BGl_genericzd2initzd2zzforeign_accessz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_accessz00()
	{
		AN_OBJECT;
		{	/* Foreign/access.scm 19 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_access");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_access");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_accessz00()
	{
		AN_OBJECT;
		{	/* Foreign/access.scm 19 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_accessz00()
	{
		AN_OBJECT;
		{	/* Foreign/access.scm 19 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_makezd2ctypezd2accessesz121600zd2envzc0zzforeign_accessz00,
				BGl_typez00zztype_typez00, BGl_string1605z00zzforeign_accessz00);
		}
	}



/* make-ctype-accesses! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt
		BgL_whatz00_1, BgL_typez00_bglt BgL_whoz00_2, obj_t BgL_locz00_3)
	{
		AN_OBJECT;
		{	/* Foreign/access.scm 34 */
			{	/* Foreign/access.scm 34 */
				obj_t BgL_method1601z00_170;

				{	/* Foreign/access.scm 34 */
					BgL_objectz00_bglt BgL_objz00_171;

					BgL_objz00_171 = (BgL_objectz00_bglt) (BgL_whatz00_1);
					{	/* Foreign/access.scm 34 */
						long BgL_objzd2classzd2numz00_172;

						BgL_objzd2classzd2numz00_172 = BGL_OBJECT_CLASS_NUM(BgL_objz00_171);
						{	/* Foreign/access.scm 34 */
							obj_t BgL_arg2643z00_173;

							BgL_arg2643z00_173 =
								PROCEDURE_REF
								(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
								(int) (((long) 1)));
							{	/* Foreign/access.scm 34 */
								obj_t BgL_arrayz00_175;

								int BgL_offsetz00_176;

								BgL_arrayz00_175 = BgL_arg2643z00_173;
								BgL_offsetz00_176 = (int) (BgL_objzd2classzd2numz00_172);
								{	/* Foreign/access.scm 34 */
									long BgL_offsetz00_177;

									BgL_offsetz00_177 =
										((long) (BgL_offsetz00_176) - OBJECT_TYPE);
									{	/* Foreign/access.scm 34 */
										long BgL_modz00_178;

										{	/* Foreign/access.scm 34 */
											int BgL_arg2645z00_179;

											BgL_arg2645z00_179 = (int) (((long) 16));
											{	/* Foreign/access.scm 34 */
												long BgL_auxz00_225;

												BgL_auxz00_225 = (long) (BgL_arg2645z00_179);
												BgL_modz00_178 = (BgL_offsetz00_177 / BgL_auxz00_225);
										}}
										{	/* Foreign/access.scm 34 */
											long BgL_restz00_180;

											{	/* Foreign/access.scm 34 */
												int BgL_arg2644z00_181;

												BgL_arg2644z00_181 = (int) (((long) 16));
												{	/* Foreign/access.scm 34 */
													long BgL_auxz00_229;

													BgL_auxz00_229 = (long) (BgL_arg2644z00_181);
													BgL_restz00_180 =
														(BgL_offsetz00_177 % BgL_auxz00_229);
											}}
											{	/* Foreign/access.scm 34 */

												BgL_method1601z00_170 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_175,
														(int) (BgL_modz00_178)), (int) (BgL_restz00_180));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1601z00_170) (BgL_method1601z00_170,
					(obj_t) (BgL_whatz00_1), (obj_t) (BgL_whoz00_2), BgL_locz00_3, BEOA);
			}
		}
	}



/* _make-ctype-accesses! */
	obj_t BGl__makezd2ctypezd2accessesz12z12zzforeign_accessz00(obj_t
		BgL_envz00_195, obj_t BgL_whatz00_196, obj_t BgL_whoz00_197,
		obj_t BgL_locz00_198)
	{
		AN_OBJECT;
		{	/* Foreign/access.scm 34 */
			return
				BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(
				(BgL_typez00_bglt) (BgL_whatz00_196),
				(BgL_typez00_bglt) (BgL_whoz00_197), BgL_locz00_198);
		}
	}



/* _make-ctype-accesses!1600 */
	obj_t BGl__makezd2ctypezd2accessesz121600z12zzforeign_accessz00(obj_t
		BgL_envz00_199, obj_t BgL_whatz00_200, obj_t BgL_whoz00_201,
		obj_t BgL_locz00_202)
	{
		AN_OBJECT;
		{	/* Foreign/access.scm 19 */
			return BNIL;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_accessz00()
	{
		AN_OBJECT;
		{	/* Foreign/access.scm 19 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_accessz00()
	{
		AN_OBJECT;
		{	/* Foreign/access.scm 19 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1606z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_caliasz00(((long) 60061617),
				BSTRING_TO_STRING(BGl_string1606z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_cenumz00(((long) 327947953),
				BSTRING_TO_STRING(BGl_string1606z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_copaquez00(((long) 257700015),
				BSTRING_TO_STRING(BGl_string1606z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_cfunctionz00(((long) 432893530),
				BSTRING_TO_STRING(BGl_string1606z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_cpointerz00(((long) 104700802),
				BSTRING_TO_STRING(BGl_string1606z00zzforeign_accessz00));
			return
				BGl_modulezd2initializa7ationz75zzforeign_cstructz00(((long) 51923326),
				BSTRING_TO_STRING(BGl_string1606z00zzforeign_accessz00));
		}
	}

#ifdef __cplusplus
}
#endif
