/*===========================================================================*/
/*   (Foreign/library.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/library.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_libraryz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzforeign_libraryz00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl__preparezd2foreignzd2accessz12z12zzforeign_libraryz00(obj_t);
	static obj_t
		BGl__registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_preparezd2foreignzd2accessz12z12zzforeign_libraryz00();
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_libraryz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_libraryz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzforeign_libraryz00();
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	static obj_t BGl_za2registeredzd2identza2zd2zzforeign_libraryz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_libraryz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	static obj_t BGl__makezd2protozd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_libraryz00();
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_preparezd2foreignzd2accessz12zd2envzc0zzforeign_libraryz00,
		BgL_bgl__prepareza7d2forei3325za7,
		BGl__preparezd2foreignzd2accessz12z12zzforeign_libraryz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2definezd2inlinezd2envzd2zzforeign_libraryz00,
		BgL_bgl__makeza7d2defineza7d3326z00,
		BGl__makezd2definezd2inlinez00zzforeign_libraryz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2foreignzd2accesszd2identsz12zd2envz12zzforeign_libraryz00,
		BgL_bgl__registerza7d2fore3327za7, va_generic_entry,
		BGl__registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00,
		BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2protozd2inlinezd2envzd2zzforeign_libraryz00,
		BgL_bgl__makeza7d2protoza7d23328z00,
		BGl__makezd2protozd2inlinez00zzforeign_libraryz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3317z00zzforeign_libraryz00,
		BgL_bgl_string3317za700za7za7f3329za7, "prepare-foreign-access!", 23);
	      DEFINE_STRING(BGl_string3318z00zzforeign_libraryz00,
		BgL_bgl_string3318za700za7za7f3330za7, "Can't find global", 17);
	      DEFINE_STRING(BGl_string3320z00zzforeign_libraryz00,
		BgL_bgl_string3320za700za7za7f3331za7,
		"foreign export inline define-inline ", 36);
	      DEFINE_STRING(BGl_string3319z00zzforeign_libraryz00,
		BgL_bgl_string3319za700za7za7f3332za7, "foreign_library", 15);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long
		BgL_checksumz00_1197, char *BgL_fromz00_1198)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_libraryz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_libraryz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_libraryz00();
					BGl_cnstzd2initzd2zzforeign_libraryz00();
					BGl_importedzd2moduleszd2initz00zzforeign_libraryz00();
					BGl_toplevelzd2initzd2zzforeign_libraryz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_libraryz00()
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_library");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_library");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"foreign_library");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_library");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_libraryz00()
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 15 */
			{	/* Foreign/library.scm 15 */
				obj_t BgL_cportz00_1189;

				BgL_cportz00_1189 =
					bgl_open_input_string(BGl_string3320z00zzforeign_libraryz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1190;

					BgL_iz00_1190 = ((long) 3);
				BgL_loopz00_1191:
					if ((BgL_iz00_1190 == ((long) -1)))
						{	/* Foreign/library.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/library.scm 15 */
							{	/* Foreign/library.scm 15 */
								obj_t BgL_arg3324z00_1193;

								{	/* Foreign/library.scm 15 */

									{	/* Foreign/library.scm 15 */
										obj_t BgL_locationz00_1195;

										BgL_locationz00_1195 = BBOOL(((bool_t) 0));
										{	/* Foreign/library.scm 15 */

											BgL_arg3324z00_1193 =
												BGl_readz00zz__readerz00(BgL_cportz00_1189,
												BgL_locationz00_1195);
										}
									}
								}
								{	/* Foreign/library.scm 15 */
									int BgL_auxz00_1216;

									BgL_auxz00_1216 = (int) (BgL_iz00_1190);
									CNST_TABLE_SET(BgL_auxz00_1216, BgL_arg3324z00_1193);
							}}
							{	/* Foreign/library.scm 15 */
								int BgL_auxz00_1196;

								BgL_auxz00_1196 = (int) ((BgL_iz00_1190 - ((long) 1)));
								{
									long BgL_iz00_1221;

									BgL_iz00_1221 = (long) (BgL_auxz00_1196);
									BgL_iz00_1190 = BgL_iz00_1221;
									goto BgL_loopz00_1191;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_libraryz00()
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 15 */
			return (BGl_za2registeredzd2identza2zd2zzforeign_libraryz00 =
				BNIL, BUNSPEC);
		}
	}



/* make-define-inline */
	BGL_EXPORTED_DEF obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t
		BgL_protoz00_1, obj_t BgL_bodyz00_2)
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 37 */
			{	/* Foreign/library.scm 39 */
				obj_t BgL_arg3255z00_778;

				obj_t BgL_arg3256z00_779;

				BgL_arg3255z00_778 = CNST_TABLE_REF(((long) 0));
				{	/* Foreign/library.scm 39 */
					obj_t BgL_list3257z00_780;

					{	/* Foreign/library.scm 39 */
						obj_t BgL_arg3258z00_781;

						BgL_arg3258z00_781 = MAKE_PAIR(BNIL, BNIL);
						BgL_list3257z00_780 = MAKE_PAIR(BgL_bodyz00_2, BgL_arg3258z00_781);
					}
					BgL_arg3256z00_779 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_protoz00_1,
						BgL_list3257z00_780);
				}
				return MAKE_PAIR(BgL_arg3255z00_778, BgL_arg3256z00_779);
			}
		}
	}



/* _make-define-inline */
	obj_t BGl__makezd2definezd2inlinez00zzforeign_libraryz00(obj_t
		BgL_envz00_1181, obj_t BgL_protoz00_1182, obj_t BgL_bodyz00_1183)
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 37 */
			return
				BGl_makezd2definezd2inlinez00zzforeign_libraryz00(BgL_protoz00_1182,
				BgL_bodyz00_1183);
		}
	}



/* make-proto-inline */
	BGL_EXPORTED_DEF obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t
		BgL_protoz00_3)
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 45 */
			{	/* Foreign/library.scm 47 */
				obj_t BgL_arg3264z00_787;

				obj_t BgL_arg3265z00_788;

				BgL_arg3264z00_787 = CNST_TABLE_REF(((long) 1));
				BgL_arg3265z00_788 =
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_protoz00_3, BNIL);
				return MAKE_PAIR(BgL_arg3264z00_787, BgL_arg3265z00_788);
			}
		}
	}



/* _make-proto-inline */
	obj_t BGl__makezd2protozd2inlinez00zzforeign_libraryz00(obj_t BgL_envz00_1184,
		obj_t BgL_protoz00_1185)
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 45 */
			return
				BGl_makezd2protozd2inlinez00zzforeign_libraryz00(BgL_protoz00_1185);
		}
	}



/* register-foreign-access-idents! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t
		BgL_idsz00_4)
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 58 */
			return (BGl_za2registeredzd2identza2zd2zzforeign_libraryz00 =
				bgl_append2(BgL_idsz00_4,
					BGl_za2registeredzd2identza2zd2zzforeign_libraryz00), BUNSPEC);
		}
	}



/* _register-foreign-access-idents! */
	obj_t
		BGl__registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t
		BgL_envz00_1186, obj_t BgL_idsz00_1187)
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 58 */
			return
				BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
				(BgL_idsz00_1187);
		}
	}



/* prepare-foreign-access! */
	BGL_EXPORTED_DEF obj_t
		BGl_preparezd2foreignzd2accessz12z12zzforeign_libraryz00()
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 75 */
			{
				obj_t BgL_l3252z00_790;

				BgL_l3252z00_790 = BGl_za2registeredzd2identza2zd2zzforeign_libraryz00;
			BgL_zc3anonymousza33266ze3z83_791:
				if (PAIRP(BgL_l3252z00_790))
					{	/* Foreign/library.scm 76 */
						{	/* Foreign/library.scm 77 */
							obj_t BgL_idz00_793;

							BgL_idz00_793 = CAR(BgL_l3252z00_790);
							{	/* Foreign/library.scm 77 */
								obj_t BgL_gz00_794;

								BgL_gz00_794 =
									BGl_findzd2globalzd2zzast_envz00(BgL_idz00_793, BNIL);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_794,
										BGl_globalz00zzast_varz00))
									{	/* Foreign/library.scm 78 */
										{	/* Foreign/library.scm 80 */
											BgL_globalz00_bglt BgL_obj2753z00_1176;

											obj_t BgL_val2752z00_1177;

											BgL_obj2753z00_1176 = (BgL_globalz00_bglt) (BgL_gz00_794);
											BgL_val2752z00_1177 = CNST_TABLE_REF(((long) 2));
											((((BgL_globalz00_bglt) CREF(BgL_obj2753z00_1176))->
													BgL_importz00) =
												((obj_t) BgL_val2752z00_1177), BUNSPEC);
										}
										{	/* Foreign/library.scm 82 */
											BgL_globalz00_bglt BgL_obj2750z00_1178;

											obj_t BgL_val2749z00_1179;

											BgL_obj2750z00_1178 = (BgL_globalz00_bglt) (BgL_gz00_794);
											BgL_val2749z00_1179 = CNST_TABLE_REF(((long) 3));
											((((BgL_globalz00_bglt) CREF(BgL_obj2750z00_1178))->
													BgL_modulez00) =
												((obj_t) BgL_val2749z00_1179), BUNSPEC);
									}}
								else
									{	/* Foreign/library.scm 78 */
										BGl_errorz00zz__errorz00
											(BGl_string3317z00zzforeign_libraryz00,
											BGl_string3318z00zzforeign_libraryz00, BgL_idz00_793);
									}
							}
						}
						{
							obj_t BgL_l3252z00_1248;

							BgL_l3252z00_1248 = CDR(BgL_l3252z00_790);
							BgL_l3252z00_790 = BgL_l3252z00_1248;
							goto BgL_zc3anonymousza33266ze3z83_791;
						}
					}
				else
					{	/* Foreign/library.scm 76 */
						((bool_t) 1);
					}
			}
			return (BGl_za2registeredzd2identza2zd2zzforeign_libraryz00 =
				BNIL, BUNSPEC);
		}
	}



/* _prepare-foreign-access! */
	obj_t BGl__preparezd2foreignzd2accessz12z12zzforeign_libraryz00(obj_t
		BgL_envz00_1188)
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 75 */
			return BGl_preparezd2foreignzd2accessz12z12zzforeign_libraryz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_libraryz00()
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_libraryz00()
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_libraryz00()
	{
		AN_OBJECT;
		{	/* Foreign/library.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3319z00zzforeign_libraryz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3319z00zzforeign_libraryz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3319z00zzforeign_libraryz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3319z00zzforeign_libraryz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3319z00zzforeign_libraryz00));
		}
	}

#ifdef __cplusplus
}
#endif
