/*===========================================================================*/
/*   (Object/tools.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/tools.scm)*/
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

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_indexedz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;


	static obj_t
		BGl_makezd2pragmazd2indexedzd2refzd2zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t);
	static obj_t
		BGl_czd2allocatezd2indexedzd2slotzd2zzobject_toolsz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl__superzd2ze3classzd2idze3zzobject_toolsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_toolsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_sawzd2widezd2classzd2idzd2zzobject_classz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzf3zd2idz21zzobject_toolsz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pragmazd2directzd2setz12zf2wideningz32zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl__classzd2ze3superzd2idze3zzobject_toolsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_jvmzd2allocatezd2indexedzd2slotzd2zzobject_toolsz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_makezd2pragmazd2directzd2refzd2zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl__makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_superzd2ze3classzd2idze3zzobject_toolsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_toolsz00();
	static obj_t
		BGl__makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pragmazd2directzd2refzf2wideningz20zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_toolsz00 = BUNSPEC;
	static obj_t
		BGl__makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__classzf3zd2idz21zzobject_toolsz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_toolsz00();
	static obj_t BGl__classzd2ze3objzd2idze3zzobject_toolsz00(obj_t, obj_t);
	static obj_t BGl__objzd2ze3classzd2idze3zzobject_toolsz00(obj_t, obj_t);
	static obj_t
		BGl_realzd2slotzd2classzd2ownerzd2zzobject_toolsz00(BgL_slotz00_bglt);
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2ze3objzd2idze3zzobject_toolsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_objzd2ze3classzd2idze3zzobject_toolsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_toolsz00();
	static obj_t
		BGl__makezd2pragmazd2directzd2setz12zf2wideningz32zzobject_toolsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl__makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_EXPORTED_DECL obj_t BGl_classzd2ze3superzd2idze3zzobject_toolsz00(obj_t,
		obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl__makezd2pragmazd2directzd2refzf2wideningz20zzobject_toolsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2sawza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_toolsz00();
	static obj_t __cnst[18];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzf3zd2idzd2envzf3zzobject_toolsz00,
		BgL_bgl__classza7f3za7d2idza724034za7,
		BGl__classzf3zd2idz21zzobject_toolsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4017z00zzobject_toolsz00,
		BgL_bgl_string4017za700za7za7o4035za7, ")", 1);
	      DEFINE_STRING(BGl_string4018z00zzobject_toolsz00,
		BgL_bgl_string4018za700za7za7o4036za7, ")CREF($1))->", 12);
	      DEFINE_STRING(BGl_string4020z00zzobject_toolsz00,
		BgL_bgl_string4020za700za7za7o4037za7, ")$2), BUNSPEC)", 14);
	      DEFINE_STRING(BGl_string4019z00zzobject_toolsz00,
		BgL_bgl_string4019za700za7za7o4038za7, "(((", 3);
	      DEFINE_STRING(BGl_string4021z00zzobject_toolsz00,
		BgL_bgl_string4021za700za7za7o4039za7, ") = ((", 6);
	      DEFINE_STRING(BGl_string4022z00zzobject_toolsz00,
		BgL_bgl_string4022za700za7za7o4040za7, "((((", 4);
	      DEFINE_STRING(BGl_string4023z00zzobject_toolsz00,
		BgL_bgl_string4023za700za7za7o4041za7, ")[ $2 ]", 7);
	      DEFINE_STRING(BGl_string4024z00zzobject_toolsz00,
		BgL_bgl_string4024za700za7za7o4042za7, "", 0);
	      DEFINE_STRING(BGl_string4025z00zzobject_toolsz00,
		BgL_bgl_string4025za700za7za7o4043za7, "GC_MALLOC( sizeof(", 18);
	      DEFINE_STRING(BGl_string4026z00zzobject_toolsz00,
		BgL_bgl_string4026za700za7za7o4044za7, ") * $1 )", 8);
	      DEFINE_STRING(BGl_string4027z00zzobject_toolsz00,
		BgL_bgl_string4027za700za7za7o4045za7, " *)$2), BUNSPEC)", 16);
	      DEFINE_STRING(BGl_string4028z00zzobject_toolsz00,
		BgL_bgl_string4028za700za7za7o4046za7, ")$3), BUNSPEC)", 14);
	      DEFINE_STRING(BGl_string4030z00zzobject_toolsz00,
		BgL_bgl_string4030za700za7za7o4047za7, "object_tools", 12);
	      DEFINE_STRING(BGl_string4029z00zzobject_toolsz00,
		BgL_bgl_string4029za700za7za7o4048za7, ")[ $2 ] = ((", 12);
	      DEFINE_STRING(BGl_string4031z00zzobject_toolsz00,
		BgL_bgl_string4031za700za7za7o4049za7,
		"vset-ur! pragma::obj valloc vref-ur free-pragma setfield write pragma/effect::obj object-widening getfield - read effect free-pragma/effect -> ? obj-> ->obj ",
		157);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2ze3objzd2idzd2envz31zzobject_toolsz00,
		BgL_bgl__classza7d2za7e3objza74050za7,
		BGl__classzd2ze3objzd2idze3zzobject_toolsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_objzd2ze3classzd2idzd2envz31zzobject_toolsz00,
		BgL_bgl__objza7d2za7e3classza74051za7,
		BGl__objzd2ze3classzd2idze3zzobject_toolsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2indexedzd2setz12zf2wideningzd2envze0zzobject_toolsz00,
		BgL_bgl__makeza7d2pragmaza7d4052z00,
		BGl__makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00, 0L,
		BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2directzd2refzf2wideningzd2envzf2zzobject_toolsz00,
		BgL_bgl__makeza7d2pragmaza7d4053z00,
		BGl__makezd2pragmazd2directzd2refzf2wideningz20zzobject_toolsz00, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2indexedzd2refzf2wideningzd2envzf2zzobject_toolsz00,
		BgL_bgl__makeza7d2pragmaza7d4054z00,
		BGl__makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00, 0L,
		BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2ze3superzd2idzd2envz31zzobject_toolsz00,
		BgL_bgl__classza7d2za7e3supe4055z00,
		BGl__classzd2ze3superzd2idze3zzobject_toolsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_superzd2ze3classzd2idzd2envz31zzobject_toolsz00,
		BgL_bgl__superza7d2za7e3clas4056z00,
		BGl__superzd2ze3classzd2idze3zzobject_toolsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2directzd2setz12zf2wideningzd2envze0zzobject_toolsz00,
		BgL_bgl__makeza7d2pragmaza7d4057z00,
		BGl__makezd2pragmazd2directzd2setz12zf2wideningz32zzobject_toolsz00, 0L,
		BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2indexedzd2initzd2setz12zd2envzc0zzobject_toolsz00,
		BgL_bgl__makeza7d2pragmaza7d4058z00,
		BGl__makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2indexedzd2setz12zd2envz12zzobject_toolsz00,
		BgL_bgl__makeza7d2pragmaza7d4059z00,
		BGl__makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2directzd2setz12zd2envz12zzobject_toolsz00,
		BgL_bgl__makeza7d2pragmaza7d4060z00,
		BGl__makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long
		BgL_checksumz00_1865, char *BgL_fromz00_1866)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_toolsz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_toolsz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_toolsz00();
					BGl_cnstzd2initzd2zzobject_toolsz00();
					BGl_importedzd2moduleszd2initz00zzobject_toolsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_toolsz00()
	{
		AN_OBJECT;
		{	/* Object/tools.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "object_tools");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_tools");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_tools");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_tools");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_toolsz00()
	{
		AN_OBJECT;
		{	/* Object/tools.scm 15 */
			{	/* Object/tools.scm 15 */
				obj_t BgL_cportz00_1857;

				BgL_cportz00_1857 =
					bgl_open_input_string(BGl_string4031z00zzobject_toolsz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1858;

					BgL_iz00_1858 = ((long) 17);
				BgL_loopz00_1859:
					if ((BgL_iz00_1858 == ((long) -1)))
						{	/* Object/tools.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/tools.scm 15 */
							{	/* Object/tools.scm 15 */
								obj_t BgL_arg4033z00_1861;

								{	/* Object/tools.scm 15 */

									{	/* Object/tools.scm 15 */
										obj_t BgL_locationz00_1863;

										BgL_locationz00_1863 = BBOOL(((bool_t) 0));
										{	/* Object/tools.scm 15 */

											BgL_arg4033z00_1861 =
												BGl_readz00zz__readerz00(BgL_cportz00_1857,
												BgL_locationz00_1863);
										}
									}
								}
								{	/* Object/tools.scm 15 */
									int BgL_auxz00_1883;

									BgL_auxz00_1883 = (int) (BgL_iz00_1858);
									CNST_TABLE_SET(BgL_auxz00_1883, BgL_arg4033z00_1861);
							}}
							{	/* Object/tools.scm 15 */
								int BgL_auxz00_1864;

								BgL_auxz00_1864 = (int) ((BgL_iz00_1858 - ((long) 1)));
								{
									long BgL_iz00_1888;

									BgL_iz00_1888 = (long) (BgL_auxz00_1864);
									BgL_iz00_1858 = BgL_iz00_1888;
									goto BgL_loopz00_1859;
								}
							}
						}
				}
			}
		}
	}



/* class->obj-id */
	BGL_EXPORTED_DEF obj_t BGl_classzd2ze3objzd2idze3zzobject_toolsz00(obj_t
		BgL_idz00_1)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 46 */
			{	/* Object/tools.scm 47 */
				obj_t BgL_arg3666z00_993;

				{	/* Object/tools.scm 47 */
					obj_t BgL_arg3667z00_994;

					obj_t BgL_arg3668z00_995;

					{	/* Object/tools.scm 47 */
						obj_t BgL_res4011z00_1717;

						{	/* Object/tools.scm 47 */
							obj_t BgL_arg2063z00_1716;

							BgL_arg2063z00_1716 = SYMBOL_TO_STRING(BgL_idz00_1);
							BgL_res4011z00_1717 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_1716);
						}
						BgL_arg3667z00_994 = BgL_res4011z00_1717;
					}
					{	/* Object/tools.scm 47 */
						obj_t BgL_res4012z00_1720;

						{	/* Object/tools.scm 47 */
							obj_t BgL_symbolz00_1718;

							BgL_symbolz00_1718 = CNST_TABLE_REF(((long) 0));
							{	/* Object/tools.scm 47 */
								obj_t BgL_arg2063z00_1719;

								BgL_arg2063z00_1719 = SYMBOL_TO_STRING(BgL_symbolz00_1718);
								BgL_res4012z00_1720 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1719);
						}}
						BgL_arg3668z00_995 = BgL_res4012z00_1720;
					}
					{	/* Object/tools.scm 47 */
						obj_t BgL_list3669z00_996;

						{	/* Object/tools.scm 47 */
							obj_t BgL_arg3670z00_997;

							BgL_arg3670z00_997 = MAKE_PAIR(BgL_arg3668z00_995, BNIL);
							BgL_list3669z00_996 =
								MAKE_PAIR(BgL_arg3667z00_994, BgL_arg3670z00_997);
						}
						BgL_arg3666z00_993 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3669z00_996);
				}}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg3666z00_993));
			}
		}
	}



/* _class->obj-id */
	obj_t BGl__classzd2ze3objzd2idze3zzobject_toolsz00(obj_t BgL_envz00_1805,
		obj_t BgL_idz00_1806)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 46 */
			return BGl_classzd2ze3objzd2idze3zzobject_toolsz00(BgL_idz00_1806);
		}
	}



/* obj->class-id */
	BGL_EXPORTED_DEF obj_t BGl_objzd2ze3classzd2idze3zzobject_toolsz00(obj_t
		BgL_idz00_2)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 52 */
			{	/* Object/tools.scm 53 */
				obj_t BgL_arg3671z00_998;

				{	/* Object/tools.scm 53 */
					obj_t BgL_arg3672z00_999;

					obj_t BgL_arg3673z00_1000;

					{	/* Object/tools.scm 53 */
						obj_t BgL_res4013z00_1724;

						{	/* Object/tools.scm 53 */
							obj_t BgL_symbolz00_1722;

							BgL_symbolz00_1722 = CNST_TABLE_REF(((long) 1));
							{	/* Object/tools.scm 53 */
								obj_t BgL_arg2063z00_1723;

								BgL_arg2063z00_1723 = SYMBOL_TO_STRING(BgL_symbolz00_1722);
								BgL_res4013z00_1724 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1723);
						}}
						BgL_arg3672z00_999 = BgL_res4013z00_1724;
					}
					{	/* Object/tools.scm 53 */
						obj_t BgL_res4014z00_1727;

						{	/* Object/tools.scm 53 */
							obj_t BgL_arg2063z00_1726;

							BgL_arg2063z00_1726 = SYMBOL_TO_STRING(BgL_idz00_2);
							BgL_res4014z00_1727 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_1726);
						}
						BgL_arg3673z00_1000 = BgL_res4014z00_1727;
					}
					{	/* Object/tools.scm 53 */
						obj_t BgL_list3674z00_1001;

						{	/* Object/tools.scm 53 */
							obj_t BgL_arg3675z00_1002;

							BgL_arg3675z00_1002 = MAKE_PAIR(BgL_arg3673z00_1000, BNIL);
							BgL_list3674z00_1001 =
								MAKE_PAIR(BgL_arg3672z00_999, BgL_arg3675z00_1002);
						}
						BgL_arg3671z00_998 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3674z00_1001);
				}}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg3671z00_998));
			}
		}
	}



/* _obj->class-id */
	obj_t BGl__objzd2ze3classzd2idze3zzobject_toolsz00(obj_t BgL_envz00_1807,
		obj_t BgL_idz00_1808)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 52 */
			return BGl_objzd2ze3classzd2idze3zzobject_toolsz00(BgL_idz00_1808);
		}
	}



/* class?-id */
	BGL_EXPORTED_DEF obj_t BGl_classzf3zd2idz21zzobject_toolsz00(obj_t
		BgL_idz00_3)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 58 */
			{	/* Object/tools.scm 59 */
				obj_t BgL_arg3677z00_1003;

				{	/* Object/tools.scm 59 */
					obj_t BgL_arg3678z00_1004;

					obj_t BgL_arg3679z00_1005;

					{	/* Object/tools.scm 59 */
						obj_t BgL_res4015z00_1731;

						{	/* Object/tools.scm 59 */
							obj_t BgL_arg2063z00_1730;

							BgL_arg2063z00_1730 = SYMBOL_TO_STRING(BgL_idz00_3);
							BgL_res4015z00_1731 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_1730);
						}
						BgL_arg3678z00_1004 = BgL_res4015z00_1731;
					}
					{	/* Object/tools.scm 59 */
						obj_t BgL_res4016z00_1734;

						{	/* Object/tools.scm 59 */
							obj_t BgL_symbolz00_1732;

							BgL_symbolz00_1732 = CNST_TABLE_REF(((long) 2));
							{	/* Object/tools.scm 59 */
								obj_t BgL_arg2063z00_1733;

								BgL_arg2063z00_1733 = SYMBOL_TO_STRING(BgL_symbolz00_1732);
								BgL_res4016z00_1734 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1733);
						}}
						BgL_arg3679z00_1005 = BgL_res4016z00_1734;
					}
					{	/* Object/tools.scm 59 */
						obj_t BgL_list3680z00_1006;

						{	/* Object/tools.scm 59 */
							obj_t BgL_arg3681z00_1007;

							BgL_arg3681z00_1007 = MAKE_PAIR(BgL_arg3679z00_1005, BNIL);
							BgL_list3680z00_1006 =
								MAKE_PAIR(BgL_arg3678z00_1004, BgL_arg3681z00_1007);
						}
						BgL_arg3677z00_1003 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3680z00_1006);
				}}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg3677z00_1003));
			}
		}
	}



/* _class?-id */
	obj_t BGl__classzf3zd2idz21zzobject_toolsz00(obj_t BgL_envz00_1809,
		obj_t BgL_idz00_1810)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 58 */
			return BGl_classzf3zd2idz21zzobject_toolsz00(BgL_idz00_1810);
		}
	}



/* class->super-id */
	BGL_EXPORTED_DEF obj_t BGl_classzd2ze3superzd2idze3zzobject_toolsz00(obj_t
		BgL_classz00_4, obj_t BgL_superz00_5)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 64 */
			{	/* Object/tools.scm 65 */
				obj_t BgL_list3682z00_1008;

				{	/* Object/tools.scm 65 */
					obj_t BgL_arg3683z00_1009;

					{	/* Object/tools.scm 65 */
						obj_t BgL_arg3684z00_1010;

						obj_t BgL_arg3685z00_1011;

						BgL_arg3684z00_1010 = CNST_TABLE_REF(((long) 3));
						BgL_arg3685z00_1011 = MAKE_PAIR(BgL_superz00_5, BNIL);
						BgL_arg3683z00_1009 =
							MAKE_PAIR(BgL_arg3684z00_1010, BgL_arg3685z00_1011);
					}
					BgL_list3682z00_1008 = MAKE_PAIR(BgL_classz00_4, BgL_arg3683z00_1009);
				}
				return
					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list3682z00_1008);
			}
		}
	}



/* _class->super-id */
	obj_t BGl__classzd2ze3superzd2idze3zzobject_toolsz00(obj_t BgL_envz00_1811,
		obj_t BgL_classz00_1812, obj_t BgL_superz00_1813)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 64 */
			return
				BGl_classzd2ze3superzd2idze3zzobject_toolsz00(BgL_classz00_1812,
				BgL_superz00_1813);
		}
	}



/* super->class-id */
	BGL_EXPORTED_DEF obj_t BGl_superzd2ze3classzd2idze3zzobject_toolsz00(obj_t
		BgL_superz00_6, obj_t BgL_classz00_7)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 70 */
			{	/* Object/tools.scm 71 */
				obj_t BgL_list3686z00_1012;

				{	/* Object/tools.scm 71 */
					obj_t BgL_arg3687z00_1013;

					{	/* Object/tools.scm 71 */
						obj_t BgL_arg3688z00_1014;

						obj_t BgL_arg3689z00_1015;

						BgL_arg3688z00_1014 = CNST_TABLE_REF(((long) 3));
						BgL_arg3689z00_1015 = MAKE_PAIR(BgL_classz00_7, BNIL);
						BgL_arg3687z00_1013 =
							MAKE_PAIR(BgL_arg3688z00_1014, BgL_arg3689z00_1015);
					}
					BgL_list3686z00_1012 = MAKE_PAIR(BgL_superz00_6, BgL_arg3687z00_1013);
				}
				return
					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list3686z00_1012);
			}
		}
	}



/* _super->class-id */
	obj_t BGl__superzd2ze3classzd2idze3zzobject_toolsz00(obj_t BgL_envz00_1814,
		obj_t BgL_superz00_1815, obj_t BgL_classz00_1816)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 70 */
			return
				BGl_superzd2ze3classzd2idze3zzobject_toolsz00(BgL_superz00_1815,
				BgL_classz00_1816);
		}
	}



/* make-pragma-direct-ref */
	obj_t BGl_makezd2pragmazd2directzd2refzd2zzobject_toolsz00(BgL_typez00_bglt
		BgL_typez00_8, BgL_slotz00_bglt BgL_slotz00_9, obj_t BgL_objz00_10)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 76 */
			{	/* Object/tools.scm 77 */
				bool_t BgL_testz00_1935;

				{	/* Object/tools.scm 77 */
					obj_t BgL_arg3739z00_1065;

					BgL_arg3739z00_1065 = BGl_thezd2backendzd2zzbackend_backendz00();
					{
						BgL_backendz00_bglt BgL_auxz00_1937;

						BgL_auxz00_1937 = (BgL_backendz00_bglt) (BgL_arg3739z00_1065);
						BgL_testz00_1935 =
							(((BgL_backendz00_bglt) CREF(BgL_auxz00_1937))->
							BgL_pragmazd2supportzd2);
					}
				}
				if (BgL_testz00_1935)
					{	/* Object/tools.scm 82 */
						obj_t BgL_arg3691z00_1017;

						obj_t BgL_arg3692z00_1018;

						{	/* Object/tools.scm 82 */
							obj_t BgL_arg3693z00_1019;

							obj_t BgL_arg3694z00_1020;

							BgL_arg3693z00_1019 = CNST_TABLE_REF(((long) 4));
							{	/* Object/tools.scm 82 */
								BgL_typez00_bglt BgL_obj1594z00_1738;

								BgL_obj1594z00_1738 =
									(BgL_typez00_bglt) (
									(((BgL_slotz00_bglt) CREF(BgL_slotz00_9))->BgL_typez00));
								BgL_arg3694z00_1020 =
									(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1738))->BgL_idz00);
							}
							BgL_arg3691z00_1017 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_arg3693z00_1019,
								BgL_arg3694z00_1020);
						}
						{	/* Object/tools.scm 83 */
							obj_t BgL_arg3696z00_1022;

							obj_t BgL_arg3697z00_1023;

							{	/* Object/tools.scm 83 */
								obj_t BgL_arg3702z00_1028;

								obj_t BgL_arg3703z00_1029;

								BgL_arg3702z00_1028 = CNST_TABLE_REF(((long) 5));
								{	/* Object/tools.scm 83 */
									obj_t BgL_arg3704z00_1030;

									{	/* Object/tools.scm 83 */
										obj_t BgL_arg3707z00_1033;

										obj_t BgL_arg3708z00_1034;

										BgL_arg3707z00_1033 = CNST_TABLE_REF(((long) 6));
										{	/* Object/tools.scm 83 */
											obj_t BgL_arg3709z00_1035;

											{	/* Object/tools.scm 83 */
												obj_t BgL_arg3712z00_1038;

												{	/* Object/tools.scm 83 */
													obj_t BgL_arg3714z00_1040;

													obj_t BgL_arg3715z00_1041;

													obj_t BgL_arg3716z00_1042;

													BgL_arg3714z00_1040 =
														(((BgL_typez00_bglt) CREF(BgL_typez00_8))->
														BgL_idz00);
													BgL_arg3715z00_1041 = CNST_TABLE_REF(((long) 7));
													BgL_arg3716z00_1042 =
														(((BgL_slotz00_bglt) CREF(BgL_slotz00_9))->
														BgL_idz00);
													{	/* Object/tools.scm 83 */
														obj_t BgL_list3717z00_1043;

														{	/* Object/tools.scm 83 */
															obj_t BgL_arg3718z00_1044;

															{	/* Object/tools.scm 83 */
																obj_t BgL_arg3719z00_1045;

																BgL_arg3719z00_1045 =
																	MAKE_PAIR(BgL_arg3716z00_1042, BNIL);
																BgL_arg3718z00_1044 =
																	MAKE_PAIR(BgL_arg3715z00_1041,
																	BgL_arg3719z00_1045);
															}
															BgL_list3717z00_1043 =
																MAKE_PAIR(BgL_arg3714z00_1040,
																BgL_arg3718z00_1044);
														}
														BgL_arg3712z00_1038 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list3717z00_1043);
												}}
												BgL_arg3709z00_1035 =
													MAKE_PAIR(BgL_arg3712z00_1038, BNIL);
											}
											{	/* Object/tools.scm 83 */
												obj_t BgL_list3711z00_1037;

												BgL_list3711z00_1037 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3708z00_1034 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3709z00_1035, BgL_list3711z00_1037);
										}}
										BgL_arg3704z00_1030 =
											MAKE_PAIR(BgL_arg3707z00_1033, BgL_arg3708z00_1034);
									}
									{	/* Object/tools.scm 83 */
										obj_t BgL_list3706z00_1032;

										BgL_list3706z00_1032 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3703z00_1029 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3704z00_1030, BgL_list3706z00_1032);
								}}
								BgL_arg3696z00_1022 =
									MAKE_PAIR(BgL_arg3702z00_1028, BgL_arg3703z00_1029);
							}
							{	/* Object/tools.scm 84 */
								obj_t BgL_arg3721z00_1047;

								obj_t BgL_arg3723z00_1049;

								BgL_arg3721z00_1047 =
									BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_8);
								BgL_arg3723z00_1049 =
									(((BgL_slotz00_bglt) CREF(BgL_slotz00_9))->BgL_namez00);
								{	/* Object/tools.scm 84 */
									obj_t BgL_list3725z00_1051;

									{	/* Object/tools.scm 84 */
										obj_t BgL_arg3726z00_1052;

										{	/* Object/tools.scm 84 */
											obj_t BgL_arg3727z00_1053;

											{	/* Object/tools.scm 84 */
												obj_t BgL_arg3728z00_1054;

												{	/* Object/tools.scm 84 */
													obj_t BgL_arg3729z00_1055;

													BgL_arg3729z00_1055 =
														MAKE_PAIR(BGl_string4017z00zzobject_toolsz00, BNIL);
													BgL_arg3728z00_1054 =
														MAKE_PAIR(BgL_arg3723z00_1049, BgL_arg3729z00_1055);
												}
												BgL_arg3727z00_1053 =
													MAKE_PAIR(BGl_string4018z00zzobject_toolsz00,
													BgL_arg3728z00_1054);
											}
											BgL_arg3726z00_1052 =
												MAKE_PAIR(BgL_arg3721z00_1047, BgL_arg3727z00_1053);
										}
										BgL_list3725z00_1051 =
											MAKE_PAIR(BGl_string4019z00zzobject_toolsz00,
											BgL_arg3726z00_1052);
									}
									BgL_arg3697z00_1023 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3725z00_1051);
							}}
							{	/* Object/tools.scm 82 */
								obj_t BgL_list3699z00_1025;

								{	/* Object/tools.scm 82 */
									obj_t BgL_arg3700z00_1026;

									{	/* Object/tools.scm 82 */
										obj_t BgL_arg3701z00_1027;

										BgL_arg3701z00_1027 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3700z00_1026 =
											MAKE_PAIR(BgL_objz00_10, BgL_arg3701z00_1027);
									}
									BgL_list3699z00_1025 =
										MAKE_PAIR(BgL_arg3697z00_1023, BgL_arg3700z00_1026);
								}
								BgL_arg3692z00_1018 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3696z00_1022, BgL_list3699z00_1025);
						}}
						return MAKE_PAIR(BgL_arg3691z00_1017, BgL_arg3692z00_1018);
					}
				else
					{	/* Object/tools.scm 78 */
						obj_t BgL_arg3730z00_1056;

						obj_t BgL_arg3731z00_1057;

						obj_t BgL_arg3732z00_1058;

						obj_t BgL_arg3733z00_1059;

						BgL_arg3730z00_1056 = CNST_TABLE_REF(((long) 8));
						{	/* Object/tools.scm 79 */
							BgL_typez00_bglt BgL_obj1594z00_1743;

							BgL_obj1594z00_1743 =
								(BgL_typez00_bglt) (
								(((BgL_slotz00_bglt) CREF(BgL_slotz00_9))->BgL_typez00));
							BgL_arg3731z00_1057 =
								(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1743))->BgL_idz00);
						}
						{	/* Object/tools.scm 80 */
							obj_t BgL_arg3738z00_1064;

							BgL_arg3738z00_1064 =
								BGl_realzd2slotzd2classzd2ownerzd2zzobject_toolsz00
								(BgL_slotz00_9);
							{
								BgL_typez00_bglt BgL_auxz00_1979;

								BgL_auxz00_1979 = (BgL_typez00_bglt) (BgL_arg3738z00_1064);
								BgL_arg3732z00_1058 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_1979))->BgL_idz00);
						}}
						BgL_arg3733z00_1059 =
							(((BgL_slotz00_bglt) CREF(BgL_slotz00_9))->BgL_namez00);
						{	/* Object/tools.scm 78 */
							obj_t BgL_list3734z00_1060;

							{	/* Object/tools.scm 78 */
								obj_t BgL_arg3735z00_1061;

								{	/* Object/tools.scm 78 */
									obj_t BgL_arg3736z00_1062;

									BgL_arg3736z00_1062 = MAKE_PAIR(BgL_objz00_10, BNIL);
									BgL_arg3735z00_1061 =
										MAKE_PAIR(BgL_arg3733z00_1059, BgL_arg3736z00_1062);
								}
								BgL_list3734z00_1060 =
									MAKE_PAIR(BgL_arg3732z00_1058, BgL_arg3735z00_1061);
							}
							return
								BGl_makezd2privatezd2sexpz00zzast_privatez00
								(BgL_arg3730z00_1056, BgL_arg3731z00_1057,
								BgL_list3734z00_1060);
						}
					}
			}
		}
	}



/* make-pragma-direct-ref/widening */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pragmazd2directzd2refzf2wideningz20zzobject_toolsz00
		(BgL_typez00_bglt BgL_typez00_11, BgL_slotz00_bglt BgL_slotz00_12,
		obj_t BgL_objz00_13, obj_t BgL_wideningz00_14)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 91 */
			if (CBOOL(BgL_wideningz00_14))
				{	/* Object/tools.scm 94 */
					obj_t BgL_arg3740z00_1066;

					{	/* Object/tools.scm 94 */
						obj_t BgL_arg3741z00_1067;

						obj_t BgL_arg3742z00_1068;

						BgL_arg3741z00_1067 = CNST_TABLE_REF(((long) 9));
						{	/* Object/tools.scm 94 */
							obj_t BgL_list3743z00_1069;

							BgL_list3743z00_1069 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg3742z00_1068 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_objz00_13,
								BgL_list3743z00_1069);
						}
						BgL_arg3740z00_1066 =
							MAKE_PAIR(BgL_arg3741z00_1067, BgL_arg3742z00_1068);
					}
					return
						BGl_makezd2pragmazd2directzd2refzd2zzobject_toolsz00(BgL_typez00_11,
						BgL_slotz00_12, BgL_arg3740z00_1066);
				}
			else
				{	/* Object/tools.scm 92 */
					return
						BGl_makezd2pragmazd2directzd2refzd2zzobject_toolsz00(BgL_typez00_11,
						BgL_slotz00_12, BgL_objz00_13);
				}
		}
	}



/* _make-pragma-direct-ref/widening */
	obj_t BGl__makezd2pragmazd2directzd2refzf2wideningz20zzobject_toolsz00(obj_t
		BgL_envz00_1817, obj_t BgL_typez00_1818, obj_t BgL_slotz00_1819,
		obj_t BgL_objz00_1820, obj_t BgL_wideningz00_1821)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 91 */
			return
				BGl_makezd2pragmazd2directzd2refzf2wideningz20zzobject_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_1818),
				(BgL_slotz00_bglt) (BgL_slotz00_1819), BgL_objz00_1820,
				BgL_wideningz00_1821);
		}
	}



/* make-pragma-direct-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00(BgL_typez00_bglt
		BgL_typez00_15, BgL_slotz00_bglt BgL_slotz00_16, obj_t BgL_objz00_17,
		obj_t BgL_valz00_18)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 99 */
			{	/* Object/tools.scm 100 */
				bool_t BgL_testz00_1998;

				{	/* Object/tools.scm 100 */
					obj_t BgL_arg3797z00_1123;

					BgL_arg3797z00_1123 = BGl_thezd2backendzd2zzbackend_backendz00();
					{
						BgL_backendz00_bglt BgL_auxz00_2000;

						BgL_auxz00_2000 = (BgL_backendz00_bglt) (BgL_arg3797z00_1123);
						BgL_testz00_1998 =
							(((BgL_backendz00_bglt) CREF(BgL_auxz00_2000))->
							BgL_pragmazd2supportzd2);
					}
				}
				if (BgL_testz00_1998)
					{	/* Object/tools.scm 105 */
						obj_t BgL_arg3745z00_1071;

						obj_t BgL_arg3746z00_1072;

						BgL_arg3745z00_1071 = CNST_TABLE_REF(((long) 10));
						{	/* Object/tools.scm 106 */
							obj_t BgL_arg3747z00_1073;

							obj_t BgL_arg3748z00_1074;

							{	/* Object/tools.scm 106 */
								obj_t BgL_arg3754z00_1080;

								obj_t BgL_arg3755z00_1081;

								BgL_arg3754z00_1080 = CNST_TABLE_REF(((long) 5));
								{	/* Object/tools.scm 106 */
									obj_t BgL_arg3756z00_1082;

									{	/* Object/tools.scm 106 */
										obj_t BgL_arg3759z00_1085;

										obj_t BgL_arg3760z00_1086;

										BgL_arg3759z00_1085 = CNST_TABLE_REF(((long) 11));
										{	/* Object/tools.scm 106 */
											obj_t BgL_arg3761z00_1087;

											{	/* Object/tools.scm 106 */
												obj_t BgL_arg3764z00_1090;

												{	/* Object/tools.scm 106 */
													obj_t BgL_arg3766z00_1092;

													obj_t BgL_arg3767z00_1093;

													obj_t BgL_arg3768z00_1094;

													BgL_arg3766z00_1092 =
														(((BgL_typez00_bglt) CREF(BgL_typez00_15))->
														BgL_idz00);
													BgL_arg3767z00_1093 = CNST_TABLE_REF(((long) 7));
													BgL_arg3768z00_1094 =
														(((BgL_slotz00_bglt) CREF(BgL_slotz00_16))->
														BgL_idz00);
													{	/* Object/tools.scm 106 */
														obj_t BgL_list3769z00_1095;

														{	/* Object/tools.scm 106 */
															obj_t BgL_arg3770z00_1096;

															{	/* Object/tools.scm 106 */
																obj_t BgL_arg3771z00_1097;

																BgL_arg3771z00_1097 =
																	MAKE_PAIR(BgL_arg3768z00_1094, BNIL);
																BgL_arg3770z00_1096 =
																	MAKE_PAIR(BgL_arg3767z00_1093,
																	BgL_arg3771z00_1097);
															}
															BgL_list3769z00_1095 =
																MAKE_PAIR(BgL_arg3766z00_1092,
																BgL_arg3770z00_1096);
														}
														BgL_arg3764z00_1090 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list3769z00_1095);
												}}
												BgL_arg3761z00_1087 =
													MAKE_PAIR(BgL_arg3764z00_1090, BNIL);
											}
											{	/* Object/tools.scm 106 */
												obj_t BgL_list3763z00_1089;

												BgL_list3763z00_1089 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3760z00_1086 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3761z00_1087, BgL_list3763z00_1089);
										}}
										BgL_arg3756z00_1082 =
											MAKE_PAIR(BgL_arg3759z00_1085, BgL_arg3760z00_1086);
									}
									{	/* Object/tools.scm 106 */
										obj_t BgL_list3758z00_1084;

										BgL_list3758z00_1084 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3755z00_1081 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3756z00_1082, BgL_list3758z00_1084);
								}}
								BgL_arg3747z00_1073 =
									MAKE_PAIR(BgL_arg3754z00_1080, BgL_arg3755z00_1081);
							}
							{	/* Object/tools.scm 107 */
								obj_t BgL_arg3773z00_1099;

								obj_t BgL_arg3775z00_1101;

								obj_t BgL_arg3777z00_1103;

								BgL_arg3773z00_1099 =
									BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_15);
								BgL_arg3775z00_1101 =
									(((BgL_slotz00_bglt) CREF(BgL_slotz00_16))->BgL_namez00);
								{	/* Object/tools.scm 108 */
									obj_t BgL_arg3786z00_1112;

									BgL_arg3786z00_1112 =
										(((BgL_slotz00_bglt) CREF(BgL_slotz00_16))->BgL_typez00);
									BgL_arg3777z00_1103 =
										BGl_typezd2classzd2namez00zzobject_classz00(
										(BgL_typez00_bglt) (BgL_arg3786z00_1112));
								}
								{	/* Object/tools.scm 107 */
									obj_t BgL_list3779z00_1105;

									{	/* Object/tools.scm 107 */
										obj_t BgL_arg3780z00_1106;

										{	/* Object/tools.scm 107 */
											obj_t BgL_arg3781z00_1107;

											{	/* Object/tools.scm 107 */
												obj_t BgL_arg3782z00_1108;

												{	/* Object/tools.scm 107 */
													obj_t BgL_arg3783z00_1109;

													{	/* Object/tools.scm 107 */
														obj_t BgL_arg3784z00_1110;

														{	/* Object/tools.scm 107 */
															obj_t BgL_arg3785z00_1111;

															BgL_arg3785z00_1111 =
																MAKE_PAIR(BGl_string4020z00zzobject_toolsz00,
																BNIL);
															BgL_arg3784z00_1110 =
																MAKE_PAIR(BgL_arg3777z00_1103,
																BgL_arg3785z00_1111);
														}
														BgL_arg3783z00_1109 =
															MAKE_PAIR(BGl_string4021z00zzobject_toolsz00,
															BgL_arg3784z00_1110);
													}
													BgL_arg3782z00_1108 =
														MAKE_PAIR(BgL_arg3775z00_1101, BgL_arg3783z00_1109);
												}
												BgL_arg3781z00_1107 =
													MAKE_PAIR(BGl_string4018z00zzobject_toolsz00,
													BgL_arg3782z00_1108);
											}
											BgL_arg3780z00_1106 =
												MAKE_PAIR(BgL_arg3773z00_1099, BgL_arg3781z00_1107);
										}
										BgL_list3779z00_1105 =
											MAKE_PAIR(BGl_string4022z00zzobject_toolsz00,
											BgL_arg3780z00_1106);
									}
									BgL_arg3748z00_1074 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3779z00_1105);
							}}
							{	/* Object/tools.scm 105 */
								obj_t BgL_list3750z00_1076;

								{	/* Object/tools.scm 105 */
									obj_t BgL_arg3751z00_1077;

									{	/* Object/tools.scm 105 */
										obj_t BgL_arg3752z00_1078;

										{	/* Object/tools.scm 105 */
											obj_t BgL_arg3753z00_1079;

											BgL_arg3753z00_1079 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3752z00_1078 =
												MAKE_PAIR(BgL_valz00_18, BgL_arg3753z00_1079);
										}
										BgL_arg3751z00_1077 =
											MAKE_PAIR(BgL_objz00_17, BgL_arg3752z00_1078);
									}
									BgL_list3750z00_1076 =
										MAKE_PAIR(BgL_arg3748z00_1074, BgL_arg3751z00_1077);
								}
								BgL_arg3746z00_1072 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3747z00_1073, BgL_list3750z00_1076);
						}}
						return MAKE_PAIR(BgL_arg3745z00_1071, BgL_arg3746z00_1072);
					}
				else
					{	/* Object/tools.scm 101 */
						obj_t BgL_arg3787z00_1113;

						obj_t BgL_arg3788z00_1114;

						obj_t BgL_arg3789z00_1115;

						obj_t BgL_arg3790z00_1116;

						BgL_arg3787z00_1113 = CNST_TABLE_REF(((long) 12));
						{	/* Object/tools.scm 102 */
							BgL_typez00_bglt BgL_obj1594z00_1752;

							BgL_obj1594z00_1752 =
								(BgL_typez00_bglt) (
								(((BgL_slotz00_bglt) CREF(BgL_slotz00_16))->BgL_typez00));
							BgL_arg3788z00_1114 =
								(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1752))->BgL_idz00);
						}
						{	/* Object/tools.scm 103 */
							obj_t BgL_arg3796z00_1122;

							BgL_arg3796z00_1122 =
								BGl_realzd2slotzd2classzd2ownerzd2zzobject_toolsz00
								(BgL_slotz00_16);
							{
								BgL_typez00_bglt BgL_auxz00_2044;

								BgL_auxz00_2044 = (BgL_typez00_bglt) (BgL_arg3796z00_1122);
								BgL_arg3789z00_1115 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2044))->BgL_idz00);
						}}
						BgL_arg3790z00_1116 =
							(((BgL_slotz00_bglt) CREF(BgL_slotz00_16))->BgL_namez00);
						{	/* Object/tools.scm 101 */
							obj_t BgL_list3791z00_1117;

							{	/* Object/tools.scm 101 */
								obj_t BgL_arg3792z00_1118;

								{	/* Object/tools.scm 101 */
									obj_t BgL_arg3793z00_1119;

									{	/* Object/tools.scm 101 */
										obj_t BgL_arg3794z00_1120;

										BgL_arg3794z00_1120 = MAKE_PAIR(BgL_valz00_18, BNIL);
										BgL_arg3793z00_1119 =
											MAKE_PAIR(BgL_objz00_17, BgL_arg3794z00_1120);
									}
									BgL_arg3792z00_1118 =
										MAKE_PAIR(BgL_arg3790z00_1116, BgL_arg3793z00_1119);
								}
								BgL_list3791z00_1117 =
									MAKE_PAIR(BgL_arg3789z00_1115, BgL_arg3792z00_1118);
							}
							return
								BGl_makezd2privatezd2sexpz00zzast_privatez00
								(BgL_arg3787z00_1113, BgL_arg3788z00_1114,
								BgL_list3791z00_1117);
						}
					}
			}
		}
	}



/* _make-pragma-direct-set! */
	obj_t BGl__makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00(obj_t
		BgL_envz00_1822, obj_t BgL_typez00_1823, obj_t BgL_slotz00_1824,
		obj_t BgL_objz00_1825, obj_t BgL_valz00_1826)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 99 */
			return
				BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_1823),
				(BgL_slotz00_bglt) (BgL_slotz00_1824), BgL_objz00_1825,
				BgL_valz00_1826);
		}
	}



/* make-pragma-direct-set!/widening */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pragmazd2directzd2setz12zf2wideningz32zzobject_toolsz00
		(BgL_typez00_bglt BgL_typez00_19, BgL_slotz00_bglt BgL_slotz00_20,
		obj_t BgL_objz00_21, obj_t BgL_valz00_22, obj_t BgL_wideningz00_23)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 115 */
			if (CBOOL(BgL_wideningz00_23))
				{	/* Object/tools.scm 118 */
					obj_t BgL_arg3798z00_1755;

					{	/* Object/tools.scm 118 */
						obj_t BgL_arg3799z00_1756;

						obj_t BgL_arg3800z00_1757;

						BgL_arg3799z00_1756 = CNST_TABLE_REF(((long) 9));
						{	/* Object/tools.scm 118 */
							obj_t BgL_list3801z00_1758;

							BgL_list3801z00_1758 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg3800z00_1757 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_objz00_21,
								BgL_list3801z00_1758);
						}
						BgL_arg3798z00_1755 =
							MAKE_PAIR(BgL_arg3799z00_1756, BgL_arg3800z00_1757);
					}
					return
						BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00
						(BgL_typez00_19, BgL_slotz00_20, BgL_arg3798z00_1755,
						BgL_valz00_22);
				}
			else
				{	/* Object/tools.scm 116 */
					return
						BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00
						(BgL_typez00_19, BgL_slotz00_20, BgL_objz00_21, BgL_valz00_22);
				}
		}
	}



/* _make-pragma-direct-set!/widening */
	obj_t
		BGl__makezd2pragmazd2directzd2setz12zf2wideningz32zzobject_toolsz00(obj_t
		BgL_envz00_1827, obj_t BgL_typez00_1828, obj_t BgL_slotz00_1829,
		obj_t BgL_objz00_1830, obj_t BgL_valz00_1831, obj_t BgL_wideningz00_1832)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 115 */
			return
				BGl_makezd2pragmazd2directzd2setz12zf2wideningz32zzobject_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_1828),
				(BgL_slotz00_bglt) (BgL_slotz00_1829), BgL_objz00_1830, BgL_valz00_1831,
				BgL_wideningz00_1832);
		}
	}



/* make-pragma-indexed-ref */
	obj_t BGl_makezd2pragmazd2indexedzd2refzd2zzobject_toolsz00(BgL_typez00_bglt
		BgL_typez00_24, BgL_slotz00_bglt BgL_slotz00_25, obj_t BgL_objz00_26,
		obj_t BgL_indexz00_27)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 123 */
			{

				{	/* Object/tools.scm 146 */
					bool_t BgL_testz00_2067;

					{	/* Object/tools.scm 146 */
						obj_t BgL_arg3803z00_1131;

						BgL_arg3803z00_1131 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_2069;

							BgL_auxz00_2069 = (BgL_backendz00_bglt) (BgL_arg3803z00_1131);
							BgL_testz00_2067 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2069))->
								BgL_pragmazd2supportzd2);
						}
					}
					if (BgL_testz00_2067)
						{	/* Object/tools.scm 146 */
							{	/* Object/tools.scm 125 */
								obj_t BgL_arg3805z00_1133;

								obj_t BgL_arg3806z00_1134;

								{	/* Object/tools.scm 125 */
									obj_t BgL_arg3807z00_1135;

									obj_t BgL_arg3808z00_1136;

									BgL_arg3807z00_1135 = CNST_TABLE_REF(((long) 13));
									{	/* Object/tools.scm 125 */
										BgL_typez00_bglt BgL_obj1594z00_1761;

										BgL_obj1594z00_1761 =
											(BgL_typez00_bglt) (
											(((BgL_slotz00_bglt) CREF(BgL_slotz00_25))->BgL_typez00));
										BgL_arg3808z00_1136 =
											(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1761))->
											BgL_idz00);
									}
									BgL_arg3805z00_1133 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_arg3807z00_1135, BgL_arg3808z00_1136);
								}
								{	/* Object/tools.scm 126 */
									obj_t BgL_arg3810z00_1138;

									{	/* Object/tools.scm 126 */
										obj_t BgL_arg3816z00_1144;

										obj_t BgL_arg3818z00_1146;

										BgL_arg3816z00_1144 =
											BGl_typezd2classzd2namez00zzobject_classz00
											(BgL_typez00_24);
										BgL_arg3818z00_1146 =
											(((BgL_slotz00_bglt) CREF(BgL_slotz00_25))->BgL_namez00);
										{	/* Object/tools.scm 126 */
											obj_t BgL_list3820z00_1148;

											{	/* Object/tools.scm 126 */
												obj_t BgL_arg3821z00_1149;

												{	/* Object/tools.scm 126 */
													obj_t BgL_arg3822z00_1150;

													{	/* Object/tools.scm 126 */
														obj_t BgL_arg3823z00_1151;

														{	/* Object/tools.scm 126 */
															obj_t BgL_arg3824z00_1152;

															BgL_arg3824z00_1152 =
																MAKE_PAIR(BGl_string4023z00zzobject_toolsz00,
																BNIL);
															BgL_arg3823z00_1151 =
																MAKE_PAIR(BgL_arg3818z00_1146,
																BgL_arg3824z00_1152);
														}
														BgL_arg3822z00_1150 =
															MAKE_PAIR(BGl_string4018z00zzobject_toolsz00,
															BgL_arg3823z00_1151);
													}
													BgL_arg3821z00_1149 =
														MAKE_PAIR(BgL_arg3816z00_1144, BgL_arg3822z00_1150);
												}
												BgL_list3820z00_1148 =
													MAKE_PAIR(BGl_string4019z00zzobject_toolsz00,
													BgL_arg3821z00_1149);
											}
											BgL_arg3810z00_1138 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3820z00_1148);
									}}
									{	/* Object/tools.scm 125 */
										obj_t BgL_list3812z00_1140;

										{	/* Object/tools.scm 125 */
											obj_t BgL_arg3813z00_1141;

											{	/* Object/tools.scm 125 */
												obj_t BgL_arg3814z00_1142;

												BgL_arg3814z00_1142 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3813z00_1141 =
													MAKE_PAIR(BgL_indexz00_27, BgL_arg3814z00_1142);
											}
											BgL_list3812z00_1140 =
												MAKE_PAIR(BgL_objz00_26, BgL_arg3813z00_1141);
										}
										BgL_arg3806z00_1134 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3810z00_1138, BgL_list3812z00_1140);
								}}
								return MAKE_PAIR(BgL_arg3805z00_1133, BgL_arg3806z00_1134);
							}
						}
					else
						{	/* Object/tools.scm 146 */
							{	/* Object/tools.scm 133 */
								obj_t BgL_ftypezd2idzd2_1155;

								{	/* Object/tools.scm 133 */
									BgL_typez00_bglt BgL_obj1594z00_1764;

									BgL_obj1594z00_1764 =
										(BgL_typez00_bglt) (
										(((BgL_slotz00_bglt) CREF(BgL_slotz00_25))->
											BgL_indexedz00));
									BgL_ftypezd2idzd2_1155 =
										(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1764))->BgL_idz00);
								}
								{	/* Object/tools.scm 133 */
									obj_t BgL_fieldz00_1156;

									{	/* Object/tools.scm 134 */
										obj_t BgL_arg3836z00_1167;

										obj_t BgL_arg3837z00_1168;

										obj_t BgL_arg3838z00_1169;

										BgL_arg3836z00_1167 = CNST_TABLE_REF(((long) 8));
										{	/* Object/tools.scm 136 */
											BgL_typez00_bglt BgL_obj1594z00_1766;

											BgL_obj1594z00_1766 =
												(BgL_typez00_bglt) (
												(((BgL_slotz00_bglt) CREF(BgL_slotz00_25))->
													BgL_classzd2ownerzd2));
											BgL_arg3837z00_1168 =
												(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1766))->
												BgL_idz00);
										}
										BgL_arg3838z00_1169 =
											(((BgL_slotz00_bglt) CREF(BgL_slotz00_25))->BgL_namez00);
										{	/* Object/tools.scm 134 */
											obj_t BgL_list3839z00_1170;

											{	/* Object/tools.scm 134 */
												obj_t BgL_arg3840z00_1171;

												{	/* Object/tools.scm 134 */
													obj_t BgL_arg3841z00_1172;

													BgL_arg3841z00_1172 = MAKE_PAIR(BgL_objz00_26, BNIL);
													BgL_arg3840z00_1171 =
														MAKE_PAIR(BgL_arg3838z00_1169, BgL_arg3841z00_1172);
												}
												BgL_list3839z00_1170 =
													MAKE_PAIR(BgL_arg3837z00_1168, BgL_arg3840z00_1171);
											}
											BgL_fieldz00_1156 =
												BGl_makezd2privatezd2sexpz00zzast_privatez00
												(BgL_arg3836z00_1167, BgL_ftypezd2idzd2_1155,
												BgL_list3839z00_1170);
									}}
									{	/* Object/tools.scm 134 */

										{	/* Object/tools.scm 139 */
											obj_t BgL_arg3826z00_1157;

											obj_t BgL_arg3827z00_1158;

											obj_t BgL_arg3828z00_1159;

											BgL_arg3826z00_1157 = CNST_TABLE_REF(((long) 14));
											{	/* Object/tools.scm 141 */
												BgL_typez00_bglt BgL_obj1594z00_1769;

												BgL_obj1594z00_1769 =
													(BgL_typez00_bglt) (
													(((BgL_slotz00_bglt) CREF(BgL_slotz00_25))->
														BgL_typez00));
												BgL_arg3827z00_1158 =
													(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1769))->
													BgL_idz00);
											}
											{
												BgL_typez00_bglt BgL_auxz00_2106;

												BgL_auxz00_2106 =
													(BgL_typez00_bglt) (BGl_za2intza2z00zztype_cachez00);
												BgL_arg3828z00_1159 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_2106))->
													BgL_idz00);
											}
											{	/* Object/tools.scm 139 */
												obj_t BgL_list3830z00_1161;

												{	/* Object/tools.scm 139 */
													obj_t BgL_arg3831z00_1162;

													{	/* Object/tools.scm 139 */
														obj_t BgL_arg3832z00_1163;

														{	/* Object/tools.scm 139 */
															obj_t BgL_arg3833z00_1164;

															{	/* Object/tools.scm 139 */
																obj_t BgL_arg3834z00_1165;

																BgL_arg3834z00_1165 =
																	MAKE_PAIR(BgL_indexz00_27, BNIL);
																BgL_arg3833z00_1164 =
																	MAKE_PAIR(BgL_fieldz00_1156,
																	BgL_arg3834z00_1165);
															}
															BgL_arg3832z00_1163 =
																MAKE_PAIR(BGl_string4024z00zzobject_toolsz00,
																BgL_arg3833z00_1164);
														}
														BgL_arg3831z00_1162 =
															MAKE_PAIR(BgL_arg3828z00_1159,
															BgL_arg3832z00_1163);
													}
													BgL_list3830z00_1161 =
														MAKE_PAIR(BgL_arg3827z00_1158, BgL_arg3831z00_1162);
												}
												return
													BGl_makezd2privatezd2sexpz00zzast_privatez00
													(BgL_arg3826z00_1157, BgL_ftypezd2idzd2_1155,
													BgL_list3830z00_1161);
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



/* make-pragma-indexed-ref/widening */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00
		(BgL_typez00_bglt BgL_typez00_28, BgL_slotz00_bglt BgL_slotz00_29,
		obj_t BgL_objz00_30, obj_t BgL_indexz00_31, obj_t BgL_wideningz00_32)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 153 */
			if (CBOOL(BgL_wideningz00_32))
				{	/* Object/tools.scm 156 */
					obj_t BgL_arg3844z00_1771;

					{	/* Object/tools.scm 156 */
						obj_t BgL_arg3845z00_1772;

						obj_t BgL_arg3846z00_1773;

						BgL_arg3845z00_1772 = CNST_TABLE_REF(((long) 9));
						{	/* Object/tools.scm 156 */
							obj_t BgL_list3847z00_1774;

							BgL_list3847z00_1774 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg3846z00_1773 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_objz00_30,
								BgL_list3847z00_1774);
						}
						BgL_arg3844z00_1771 =
							MAKE_PAIR(BgL_arg3845z00_1772, BgL_arg3846z00_1773);
					}
					return
						BGl_makezd2pragmazd2indexedzd2refzd2zzobject_toolsz00
						(BgL_typez00_28, BgL_slotz00_29, BgL_arg3844z00_1771,
						BgL_indexz00_31);
				}
			else
				{	/* Object/tools.scm 154 */
					return
						BGl_makezd2pragmazd2indexedzd2refzd2zzobject_toolsz00
						(BgL_typez00_28, BgL_slotz00_29, BgL_objz00_30, BgL_indexz00_31);
				}
		}
	}



/* _make-pragma-indexed-ref/widening */
	obj_t BGl__makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00(obj_t
		BgL_envz00_1833, obj_t BgL_typez00_1834, obj_t BgL_slotz00_1835,
		obj_t BgL_objz00_1836, obj_t BgL_indexz00_1837, obj_t BgL_wideningz00_1838)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 153 */
			return
				BGl_makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_1834),
				(BgL_slotz00_bglt) (BgL_slotz00_1835), BgL_objz00_1836,
				BgL_indexz00_1837, BgL_wideningz00_1838);
		}
	}



/* c-allocate-indexed-slot */
	obj_t BGl_czd2allocatezd2indexedzd2slotzd2zzobject_toolsz00(BgL_typez00_bglt
		BgL_typez00_33, obj_t BgL_lenz00_34)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 161 */
			{	/* Object/tools.scm 162 */
				obj_t BgL_tidz00_1181;

				obj_t BgL_tnamez00_1182;

				obj_t BgL_siza7eofza7_1183;

				BgL_tidz00_1181 =
					(((BgL_typez00_bglt) CREF(BgL_typez00_33))->BgL_idz00);
				BgL_tnamez00_1182 =
					BGl_stringzd2sanszd2z42z42zztype_toolsz00
					(BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_33));
				{	/* Object/tools.scm 164 */
					bool_t BgL_testz00_2129;

					{	/* Object/tools.scm 164 */
						obj_t BgL_auxz00_2130;

						BgL_auxz00_2130 =
							(((BgL_typez00_bglt) CREF(BgL_typez00_33))->BgL_siza7eza7);
						BgL_testz00_2129 = STRINGP(BgL_auxz00_2130);
					}
					if (BgL_testz00_2129)
						{	/* Object/tools.scm 164 */
							BgL_siza7eofza7_1183 =
								(((BgL_typez00_bglt) CREF(BgL_typez00_33))->BgL_siza7eza7);
						}
					else
						{	/* Object/tools.scm 164 */
							BgL_siza7eofza7_1183 =
								BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_33);
						}
				}
				{	/* Object/tools.scm 167 */
					obj_t BgL_arg3848z00_1184;

					obj_t BgL_arg3849z00_1185;

					BgL_arg3848z00_1184 =
						BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
								13)), BgL_tidz00_1181);
					{	/* Object/tools.scm 168 */
						obj_t BgL_arg3850z00_1186;

						BgL_arg3850z00_1186 =
							string_append_3(BGl_string4025z00zzobject_toolsz00,
							BgL_siza7eofza7_1183, BGl_string4026z00zzobject_toolsz00);
						{	/* Object/tools.scm 167 */
							obj_t BgL_list3852z00_1188;

							{	/* Object/tools.scm 167 */
								obj_t BgL_arg3853z00_1189;

								BgL_arg3853z00_1189 = MAKE_PAIR(BNIL, BNIL);
								BgL_list3852z00_1188 =
									MAKE_PAIR(BgL_lenz00_34, BgL_arg3853z00_1189);
							}
							BgL_arg3849z00_1185 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3850z00_1186,
								BgL_list3852z00_1188);
					}}
					return MAKE_PAIR(BgL_arg3848z00_1184, BgL_arg3849z00_1185);
				}
			}
		}
	}



/* jvm-allocate-indexed-slot */
	obj_t BGl_jvmzd2allocatezd2indexedzd2slotzd2zzobject_toolsz00(obj_t
		BgL_vtypezd2idzd2_35, obj_t BgL_ftypezd2idzd2_36, obj_t BgL_lenz00_37)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 173 */
			{	/* Object/tools.scm 174 */
				obj_t BgL_arg3857z00_1193;

				obj_t BgL_arg3858z00_1194;

				BgL_arg3857z00_1193 = CNST_TABLE_REF(((long) 15));
				{
					BgL_typez00_bglt BgL_auxz00_2143;

					BgL_auxz00_2143 =
						(BgL_typez00_bglt) (BGl_za2intza2z00zztype_cachez00);
					BgL_arg3858z00_1194 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_2143))->BgL_idz00);
				}
				{	/* Object/tools.scm 174 */
					obj_t BgL_list3861z00_1197;

					{	/* Object/tools.scm 174 */
						obj_t BgL_arg3862z00_1198;

						{	/* Object/tools.scm 174 */
							obj_t BgL_arg3863z00_1199;

							{	/* Object/tools.scm 174 */
								obj_t BgL_arg3864z00_1200;

								{	/* Object/tools.scm 174 */
									obj_t BgL_arg3865z00_1201;

									{	/* Object/tools.scm 174 */
										obj_t BgL_arg3866z00_1202;

										BgL_arg3866z00_1202 = MAKE_PAIR(BgL_lenz00_37, BNIL);
										BgL_arg3865z00_1201 =
											MAKE_PAIR(BFALSE, BgL_arg3866z00_1202);
									}
									BgL_arg3864z00_1200 =
										MAKE_PAIR(BGl_string4024z00zzobject_toolsz00,
										BgL_arg3865z00_1201);
								}
								BgL_arg3863z00_1199 =
									MAKE_PAIR(BGl_string4024z00zzobject_toolsz00,
									BgL_arg3864z00_1200);
							}
							BgL_arg3862z00_1198 =
								MAKE_PAIR(BgL_arg3858z00_1194, BgL_arg3863z00_1199);
						}
						BgL_list3861z00_1197 =
							MAKE_PAIR(BgL_ftypezd2idzd2_36, BgL_arg3862z00_1198);
					}
					return
						BGl_makezd2privatezd2sexpz00zzast_privatez00(BgL_arg3857z00_1193,
						BgL_vtypezd2idzd2_35, BgL_list3861z00_1197);
				}
			}
		}
	}



/* make-pragma-indexed-init-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00
		(BgL_typez00_bglt BgL_typez00_38, BgL_slotz00_bglt BgL_slotz00_39,
		obj_t BgL_objz00_40, obj_t BgL_lenz00_41)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 179 */
			{

				{	/* Object/tools.scm 200 */
					bool_t BgL_testz00_2153;

					{	/* Object/tools.scm 200 */
						obj_t BgL_arg3868z00_1206;

						BgL_arg3868z00_1206 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_2155;

							BgL_auxz00_2155 = (BgL_backendz00_bglt) (BgL_arg3868z00_1206);
							BgL_testz00_2153 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2155))->
								BgL_pragmazd2supportzd2);
						}
					}
					if (BgL_testz00_2153)
						{	/* Object/tools.scm 200 */
							{	/* Object/tools.scm 181 */
								obj_t BgL_arg3870z00_1208;

								obj_t BgL_arg3871z00_1209;

								BgL_arg3870z00_1208 = CNST_TABLE_REF(((long) 16));
								{	/* Object/tools.scm 182 */
									obj_t BgL_arg3872z00_1210;

									obj_t BgL_arg3873z00_1211;

									{	/* Object/tools.scm 182 */
										obj_t BgL_arg3879z00_1217;

										obj_t BgL_arg3881z00_1219;

										obj_t BgL_arg3883z00_1221;

										BgL_arg3879z00_1217 =
											BGl_typezd2classzd2namez00zzobject_classz00
											(BgL_typez00_38);
										BgL_arg3881z00_1219 =
											(((BgL_slotz00_bglt) CREF(BgL_slotz00_39))->BgL_namez00);
										{	/* Object/tools.scm 184 */
											obj_t BgL_arg3892z00_1230;

											BgL_arg3892z00_1230 =
												(((BgL_slotz00_bglt) CREF(BgL_slotz00_39))->
												BgL_typez00);
											BgL_arg3883z00_1221 =
												BGl_typezd2classzd2namez00zzobject_classz00(
												(BgL_typez00_bglt) (BgL_arg3892z00_1230));
										}
										{	/* Object/tools.scm 182 */
											obj_t BgL_list3885z00_1223;

											{	/* Object/tools.scm 182 */
												obj_t BgL_arg3886z00_1224;

												{	/* Object/tools.scm 182 */
													obj_t BgL_arg3887z00_1225;

													{	/* Object/tools.scm 182 */
														obj_t BgL_arg3888z00_1226;

														{	/* Object/tools.scm 182 */
															obj_t BgL_arg3889z00_1227;

															{	/* Object/tools.scm 182 */
																obj_t BgL_arg3890z00_1228;

																{	/* Object/tools.scm 182 */
																	obj_t BgL_arg3891z00_1229;

																	BgL_arg3891z00_1229 =
																		MAKE_PAIR
																		(BGl_string4027z00zzobject_toolsz00, BNIL);
																	BgL_arg3890z00_1228 =
																		MAKE_PAIR(BgL_arg3883z00_1221,
																		BgL_arg3891z00_1229);
																}
																BgL_arg3889z00_1227 =
																	MAKE_PAIR(BGl_string4021z00zzobject_toolsz00,
																	BgL_arg3890z00_1228);
															}
															BgL_arg3888z00_1226 =
																MAKE_PAIR(BgL_arg3881z00_1219,
																BgL_arg3889z00_1227);
														}
														BgL_arg3887z00_1225 =
															MAKE_PAIR(BGl_string4018z00zzobject_toolsz00,
															BgL_arg3888z00_1226);
													}
													BgL_arg3886z00_1224 =
														MAKE_PAIR(BgL_arg3879z00_1217, BgL_arg3887z00_1225);
												}
												BgL_list3885z00_1223 =
													MAKE_PAIR(BGl_string4022z00zzobject_toolsz00,
													BgL_arg3886z00_1224);
											}
											BgL_arg3872z00_1210 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3885z00_1223);
									}}
									BgL_arg3873z00_1211 =
										BGl_czd2allocatezd2indexedzd2slotzd2zzobject_toolsz00
										(BgL_typez00_38, BgL_lenz00_41);
									{	/* Object/tools.scm 181 */
										obj_t BgL_list3875z00_1213;

										{	/* Object/tools.scm 181 */
											obj_t BgL_arg3876z00_1214;

											{	/* Object/tools.scm 181 */
												obj_t BgL_arg3877z00_1215;

												BgL_arg3877z00_1215 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3876z00_1214 =
													MAKE_PAIR(BgL_arg3873z00_1211, BgL_arg3877z00_1215);
											}
											BgL_list3875z00_1213 =
												MAKE_PAIR(BgL_objz00_40, BgL_arg3876z00_1214);
										}
										BgL_arg3871z00_1209 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3872z00_1210, BgL_list3875z00_1213);
								}}
								return MAKE_PAIR(BgL_arg3870z00_1208, BgL_arg3871z00_1209);
							}
						}
					else
						{	/* Object/tools.scm 200 */
							{	/* Object/tools.scm 189 */
								obj_t BgL_ftypez00_1232;

								obj_t BgL_otypez00_1233;

								obj_t BgL_namez00_1234;

								{	/* Object/tools.scm 189 */
									BgL_typez00_bglt BgL_obj1594z00_1784;

									BgL_obj1594z00_1784 =
										(BgL_typez00_bglt) (
										(((BgL_slotz00_bglt) CREF(BgL_slotz00_39))->
											BgL_indexedz00));
									BgL_ftypez00_1232 =
										(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1784))->BgL_idz00);
								}
								BgL_otypez00_1233 =
									(((BgL_slotz00_bglt) CREF(BgL_slotz00_39))->BgL_typez00);
								BgL_namez00_1234 =
									(((BgL_slotz00_bglt) CREF(BgL_slotz00_39))->BgL_namez00);
								{	/* Object/tools.scm 192 */
									obj_t BgL_arg3894z00_1235;

									obj_t BgL_arg3895z00_1236;

									obj_t BgL_arg3896z00_1237;

									BgL_arg3894z00_1235 = CNST_TABLE_REF(((long) 12));
									{	/* Object/tools.scm 194 */
										obj_t BgL_arg3901z00_1242;

										BgL_arg3901z00_1242 =
											BGl_realzd2slotzd2classzd2ownerzd2zzobject_toolsz00
											(BgL_slotz00_39);
										{
											BgL_typez00_bglt BgL_auxz00_2185;

											BgL_auxz00_2185 =
												(BgL_typez00_bglt) (BgL_arg3901z00_1242);
											BgL_arg3895z00_1236 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2185))->BgL_idz00);
									}}
									{	/* Object/tools.scm 198 */
										obj_t BgL_arg3902z00_1243;

										{
											BgL_typez00_bglt BgL_auxz00_2188;

											BgL_auxz00_2188 = (BgL_typez00_bglt) (BgL_otypez00_1233);
											BgL_arg3902z00_1243 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2188))->BgL_idz00);
										}
										BgL_arg3896z00_1237 =
											BGl_jvmzd2allocatezd2indexedzd2slotzd2zzobject_toolsz00
											(BgL_ftypez00_1232, BgL_arg3902z00_1243, BgL_lenz00_41);
									}
									{	/* Object/tools.scm 192 */
										obj_t BgL_list3897z00_1238;

										{	/* Object/tools.scm 192 */
											obj_t BgL_arg3898z00_1239;

											{	/* Object/tools.scm 192 */
												obj_t BgL_arg3899z00_1240;

												{	/* Object/tools.scm 192 */
													obj_t BgL_arg3900z00_1241;

													BgL_arg3900z00_1241 =
														MAKE_PAIR(BgL_arg3896z00_1237, BNIL);
													BgL_arg3899z00_1240 =
														MAKE_PAIR(BgL_objz00_40, BgL_arg3900z00_1241);
												}
												BgL_arg3898z00_1239 =
													MAKE_PAIR(BgL_namez00_1234, BgL_arg3899z00_1240);
											}
											BgL_list3897z00_1238 =
												MAKE_PAIR(BgL_arg3895z00_1236, BgL_arg3898z00_1239);
										}
										return
											BGl_makezd2privatezd2sexpz00zzast_privatez00
											(BgL_arg3894z00_1235, BgL_ftypez00_1232,
											BgL_list3897z00_1238);
									}
								}
							}
						}
				}
			}
		}
	}



/* _make-pragma-indexed-init-set! */
	obj_t BGl__makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00(obj_t
		BgL_envz00_1839, obj_t BgL_typez00_1840, obj_t BgL_slotz00_1841,
		obj_t BgL_objz00_1842, obj_t BgL_lenz00_1843)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 179 */
			return
				BGl_makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_1840),
				(BgL_slotz00_bglt) (BgL_slotz00_1841), BgL_objz00_1842,
				BgL_lenz00_1843);
		}
	}



/* make-pragma-indexed-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00(BgL_typez00_bglt
		BgL_typez00_42, BgL_slotz00_bglt BgL_slotz00_43, obj_t BgL_objz00_44,
		obj_t BgL_valz00_45, obj_t BgL_indexz00_46)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 207 */
			{

				{	/* Object/tools.scm 232 */
					bool_t BgL_testz00_2200;

					{	/* Object/tools.scm 232 */
						obj_t BgL_arg3905z00_1250;

						BgL_arg3905z00_1250 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_2202;

							BgL_auxz00_2202 = (BgL_backendz00_bglt) (BgL_arg3905z00_1250);
							BgL_testz00_2200 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2202))->
								BgL_pragmazd2supportzd2);
						}
					}
					if (BgL_testz00_2200)
						{	/* Object/tools.scm 232 */
							{	/* Object/tools.scm 209 */
								obj_t BgL_arg3908z00_1252;

								obj_t BgL_arg3909z00_1253;

								BgL_arg3908z00_1252 = CNST_TABLE_REF(((long) 16));
								{	/* Object/tools.scm 210 */
									obj_t BgL_arg3910z00_1254;

									{	/* Object/tools.scm 210 */
										obj_t BgL_arg3917z00_1261;

										obj_t BgL_arg3919z00_1263;

										obj_t BgL_arg3922z00_1265;

										BgL_arg3917z00_1261 =
											BGl_typezd2classzd2namez00zzobject_classz00
											(BgL_typez00_42);
										BgL_arg3919z00_1263 =
											(((BgL_slotz00_bglt) CREF(BgL_slotz00_43))->BgL_namez00);
										{	/* Object/tools.scm 212 */
											obj_t BgL_arg3931z00_1274;

											BgL_arg3931z00_1274 =
												(((BgL_slotz00_bglt) CREF(BgL_slotz00_43))->
												BgL_typez00);
											BgL_arg3922z00_1265 =
												BGl_typezd2classzd2namez00zzobject_classz00(
												(BgL_typez00_bglt) (BgL_arg3931z00_1274));
										}
										{	/* Object/tools.scm 210 */
											obj_t BgL_list3924z00_1267;

											{	/* Object/tools.scm 210 */
												obj_t BgL_arg3925z00_1268;

												{	/* Object/tools.scm 210 */
													obj_t BgL_arg3926z00_1269;

													{	/* Object/tools.scm 210 */
														obj_t BgL_arg3927z00_1270;

														{	/* Object/tools.scm 210 */
															obj_t BgL_arg3928z00_1271;

															{	/* Object/tools.scm 210 */
																obj_t BgL_arg3929z00_1272;

																{	/* Object/tools.scm 210 */
																	obj_t BgL_arg3930z00_1273;

																	BgL_arg3930z00_1273 =
																		MAKE_PAIR
																		(BGl_string4028z00zzobject_toolsz00, BNIL);
																	BgL_arg3929z00_1272 =
																		MAKE_PAIR(BgL_arg3922z00_1265,
																		BgL_arg3930z00_1273);
																}
																BgL_arg3928z00_1271 =
																	MAKE_PAIR(BGl_string4029z00zzobject_toolsz00,
																	BgL_arg3929z00_1272);
															}
															BgL_arg3927z00_1270 =
																MAKE_PAIR(BgL_arg3919z00_1263,
																BgL_arg3928z00_1271);
														}
														BgL_arg3926z00_1269 =
															MAKE_PAIR(BGl_string4018z00zzobject_toolsz00,
															BgL_arg3927z00_1270);
													}
													BgL_arg3925z00_1268 =
														MAKE_PAIR(BgL_arg3917z00_1261, BgL_arg3926z00_1269);
												}
												BgL_list3924z00_1267 =
													MAKE_PAIR(BGl_string4022z00zzobject_toolsz00,
													BgL_arg3925z00_1268);
											}
											BgL_arg3910z00_1254 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3924z00_1267);
									}}
									{	/* Object/tools.scm 209 */
										obj_t BgL_list3912z00_1256;

										{	/* Object/tools.scm 209 */
											obj_t BgL_arg3913z00_1257;

											{	/* Object/tools.scm 209 */
												obj_t BgL_arg3914z00_1258;

												{	/* Object/tools.scm 209 */
													obj_t BgL_arg3915z00_1259;

													BgL_arg3915z00_1259 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3914z00_1258 =
														MAKE_PAIR(BgL_valz00_45, BgL_arg3915z00_1259);
												}
												BgL_arg3913z00_1257 =
													MAKE_PAIR(BgL_indexz00_46, BgL_arg3914z00_1258);
											}
											BgL_list3912z00_1256 =
												MAKE_PAIR(BgL_objz00_44, BgL_arg3913z00_1257);
										}
										BgL_arg3909z00_1253 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3910z00_1254, BgL_list3912z00_1256);
								}}
								return MAKE_PAIR(BgL_arg3908z00_1252, BgL_arg3909z00_1253);
							}
						}
					else
						{	/* Object/tools.scm 232 */
							{	/* Object/tools.scm 218 */
								obj_t BgL_ftypezd2idzd2_1276;

								{	/* Object/tools.scm 218 */
									BgL_typez00_bglt BgL_obj1594z00_1793;

									BgL_obj1594z00_1793 =
										(BgL_typez00_bglt) (
										(((BgL_slotz00_bglt) CREF(BgL_slotz00_43))->
											BgL_indexedz00));
									BgL_ftypezd2idzd2_1276 =
										(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1793))->BgL_idz00);
								}
								{	/* Object/tools.scm 218 */
									obj_t BgL_gfieldz00_1277;

									{	/* Object/tools.scm 219 */
										obj_t BgL_arg3944z00_1289;

										obj_t BgL_arg3945z00_1290;

										obj_t BgL_arg3946z00_1291;

										BgL_arg3944z00_1289 = CNST_TABLE_REF(((long) 8));
										{	/* Object/tools.scm 221 */
											obj_t BgL_arg3950z00_1295;

											BgL_arg3950z00_1295 =
												BGl_realzd2slotzd2classzd2ownerzd2zzobject_toolsz00
												(BgL_slotz00_43);
											{
												BgL_typez00_bglt BgL_auxz00_2230;

												BgL_auxz00_2230 =
													(BgL_typez00_bglt) (BgL_arg3950z00_1295);
												BgL_arg3945z00_1290 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_2230))->
													BgL_idz00);
										}}
										BgL_arg3946z00_1291 =
											(((BgL_slotz00_bglt) CREF(BgL_slotz00_43))->BgL_namez00);
										{	/* Object/tools.scm 219 */
											obj_t BgL_list3947z00_1292;

											{	/* Object/tools.scm 219 */
												obj_t BgL_arg3948z00_1293;

												{	/* Object/tools.scm 219 */
													obj_t BgL_arg3949z00_1294;

													BgL_arg3949z00_1294 = MAKE_PAIR(BgL_objz00_44, BNIL);
													BgL_arg3948z00_1293 =
														MAKE_PAIR(BgL_arg3946z00_1291, BgL_arg3949z00_1294);
												}
												BgL_list3947z00_1292 =
													MAKE_PAIR(BgL_arg3945z00_1290, BgL_arg3948z00_1293);
											}
											BgL_gfieldz00_1277 =
												BGl_makezd2privatezd2sexpz00zzast_privatez00
												(BgL_arg3944z00_1289, BgL_ftypezd2idzd2_1276,
												BgL_list3947z00_1292);
									}}
									{	/* Object/tools.scm 219 */

										{	/* Object/tools.scm 224 */
											obj_t BgL_arg3933z00_1278;

											obj_t BgL_arg3934z00_1279;

											obj_t BgL_arg3935z00_1280;

											BgL_arg3933z00_1278 = CNST_TABLE_REF(((long) 17));
											{	/* Object/tools.scm 226 */
												BgL_typez00_bglt BgL_obj1594z00_1797;

												BgL_obj1594z00_1797 =
													(BgL_typez00_bglt) (
													(((BgL_slotz00_bglt) CREF(BgL_slotz00_43))->
														BgL_typez00));
												BgL_arg3934z00_1279 =
													(((BgL_typez00_bglt) CREF(BgL_obj1594z00_1797))->
													BgL_idz00);
											}
											{
												BgL_typez00_bglt BgL_auxz00_2242;

												BgL_auxz00_2242 =
													(BgL_typez00_bglt) (BGl_za2intza2z00zztype_cachez00);
												BgL_arg3935z00_1280 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_2242))->
													BgL_idz00);
											}
											{	/* Object/tools.scm 224 */
												obj_t BgL_list3937z00_1282;

												{	/* Object/tools.scm 224 */
													obj_t BgL_arg3938z00_1283;

													{	/* Object/tools.scm 224 */
														obj_t BgL_arg3939z00_1284;

														{	/* Object/tools.scm 224 */
															obj_t BgL_arg3940z00_1285;

															{	/* Object/tools.scm 224 */
																obj_t BgL_arg3941z00_1286;

																{	/* Object/tools.scm 224 */
																	obj_t BgL_arg3942z00_1287;

																	BgL_arg3942z00_1287 =
																		MAKE_PAIR(BgL_valz00_45, BNIL);
																	BgL_arg3941z00_1286 =
																		MAKE_PAIR(BgL_indexz00_46,
																		BgL_arg3942z00_1287);
																}
																BgL_arg3940z00_1285 =
																	MAKE_PAIR(BgL_gfieldz00_1277,
																	BgL_arg3941z00_1286);
															}
															BgL_arg3939z00_1284 =
																MAKE_PAIR(BGl_string4024z00zzobject_toolsz00,
																BgL_arg3940z00_1285);
														}
														BgL_arg3938z00_1283 =
															MAKE_PAIR(BgL_arg3935z00_1280,
															BgL_arg3939z00_1284);
													}
													BgL_list3937z00_1282 =
														MAKE_PAIR(BgL_arg3934z00_1279, BgL_arg3938z00_1283);
												}
												return
													BGl_makezd2privatezd2sexpz00zzast_privatez00
													(BgL_arg3933z00_1278, BgL_ftypezd2idzd2_1276,
													BgL_list3937z00_1282);
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



/* _make-pragma-indexed-set! */
	obj_t BGl__makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00(obj_t
		BgL_envz00_1844, obj_t BgL_typez00_1845, obj_t BgL_slotz00_1846,
		obj_t BgL_objz00_1847, obj_t BgL_valz00_1848, obj_t BgL_indexz00_1849)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 207 */
			return
				BGl_makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_1845),
				(BgL_slotz00_bglt) (BgL_slotz00_1846), BgL_objz00_1847, BgL_valz00_1848,
				BgL_indexz00_1849);
		}
	}



/* real-slot-class-owner */
	obj_t BGl_realzd2slotzd2classzd2ownerzd2zzobject_toolsz00(BgL_slotz00_bglt
		BgL_slotz00_47)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 239 */
			{	/* Object/tools.scm 240 */
				obj_t BgL_tz00_1299;

				BgL_tz00_1299 =
					(((BgL_slotz00_bglt) CREF(BgL_slotz00_47))->BgL_classzd2ownerzd2);
				{	/* Object/tools.scm 241 */
					bool_t BgL_testz00_2256;

					if (CBOOL(BGl_za2sawza2z00zzengine_paramz00))
						{	/* Object/tools.scm 241 */
							BgL_testz00_2256 =
								BGl_widezd2classzf3z21zzobject_classz00(BgL_tz00_1299);
						}
					else
						{	/* Object/tools.scm 241 */
							BgL_testz00_2256 = ((bool_t) 0);
						}
					if (BgL_testz00_2256)
						{	/* Object/tools.scm 242 */
							obj_t BgL_arg3953z00_1301;

							{	/* Object/tools.scm 242 */
								obj_t BgL_arg3954z00_1302;

								{
									BgL_typez00_bglt BgL_auxz00_2260;

									BgL_auxz00_2260 = (BgL_typez00_bglt) (BgL_tz00_1299);
									BgL_arg3954z00_1302 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2260))->BgL_idz00);
								}
								BgL_arg3953z00_1301 =
									BGl_sawzd2widezd2classzd2idzd2zzobject_classz00
									(BgL_arg3954z00_1302);
							}
							return
								(obj_t) (BGl_findzd2typezd2zztype_envz00(BgL_arg3953z00_1301));
						}
					else
						{	/* Object/tools.scm 241 */
							return BgL_tz00_1299;
						}
				}
			}
		}
	}



/* make-pragma-indexed-set!/widening */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00
		(BgL_typez00_bglt BgL_typez00_48, BgL_slotz00_bglt BgL_slotz00_49,
		obj_t BgL_objz00_50, obj_t BgL_valz00_51, obj_t BgL_indexz00_52,
		obj_t BgL_wideningz00_53)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 248 */
			if (CBOOL(BgL_wideningz00_53))
				{	/* Object/tools.scm 251 */
					obj_t BgL_arg3955z00_1801;

					{	/* Object/tools.scm 251 */
						obj_t BgL_arg3956z00_1802;

						obj_t BgL_arg3958z00_1803;

						BgL_arg3956z00_1802 = CNST_TABLE_REF(((long) 9));
						{	/* Object/tools.scm 251 */
							obj_t BgL_list3959z00_1804;

							BgL_list3959z00_1804 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg3958z00_1803 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_objz00_50,
								BgL_list3959z00_1804);
						}
						BgL_arg3955z00_1801 =
							MAKE_PAIR(BgL_arg3956z00_1802, BgL_arg3958z00_1803);
					}
					return
						BGl_makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00
						(BgL_typez00_48, BgL_slotz00_49, BgL_arg3955z00_1801, BgL_valz00_51,
						BgL_indexz00_52);
				}
			else
				{	/* Object/tools.scm 249 */
					return
						BGl_makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00
						(BgL_typez00_48, BgL_slotz00_49, BgL_objz00_50, BgL_valz00_51,
						BgL_indexz00_52);
				}
		}
	}



/* _make-pragma-indexed-set!/widening */
	obj_t
		BGl__makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00(obj_t
		BgL_envz00_1850, obj_t BgL_typez00_1851, obj_t BgL_slotz00_1852,
		obj_t BgL_objz00_1853, obj_t BgL_valz00_1854, obj_t BgL_indexz00_1855,
		obj_t BgL_wideningz00_1856)
	{
		AN_OBJECT;
		{	/* Object/tools.scm 248 */
			return
				BGl_makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00(
				(BgL_typez00_bglt) (BgL_typez00_1851),
				(BgL_slotz00_bglt) (BgL_slotz00_1852), BgL_objz00_1853, BgL_valz00_1854,
				BgL_indexz00_1855, BgL_wideningz00_1856);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_toolsz00()
	{
		AN_OBJECT;
		{	/* Object/tools.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_toolsz00()
	{
		AN_OBJECT;
		{	/* Object/tools.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_toolsz00()
	{
		AN_OBJECT;
		{	/* Object/tools.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4030z00zzobject_toolsz00));
		}
	}

#ifdef __cplusplus
}
#endif
