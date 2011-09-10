/*===========================================================================*/
/*   (Object/creator.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/creator.scm)*/
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

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


	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t
		BGl_makezd2classzd2slotzd2makez12zc0zzobject_creatorz00(BgL_tclassz00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t
		BGl_importzd2inlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	static obj_t
		BGl_genzd2inlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00
		(BgL_jclassz00_bglt, obj_t, obj_t);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2plainzd2classzd2creatorszd2zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t
		BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_creatorz00 = BUNSPEC;
	static obj_t
		BGl_importzd2inlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t BGl_epairifyza2za2zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_creatorz00();
	static obj_t BGl__genzd2widezd2classzd2creatorszd2zzobject_creatorz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t
		BGl_importzd2noinlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_creatorz00();
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2widezd2classzd2creatorszd2zzobject_creatorz00(BgL_tclassz00_bglt,
		obj_t, obj_t);
	static obj_t
		BGl_genzd2noinlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_creatorz00();
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_importzd2classzd2nilz00zzobject_nilz00(BgL_tclassz00_bglt,
		obj_t, obj_t);
	static bool_t BGl_inlinezd2creatorszf3z21zzobject_creatorz00();
	extern obj_t
		BGl_findzd2classzd2constructorsz00zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t
		BGl_genzd2noinlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_creatorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_nilz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_sawzd2widezd2classzd2idzd2zzobject_classz00(obj_t);
	static obj_t BGl__importzd2javazd2classzd2creatorzd2zzobject_creatorz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_genzd2classzd2allocatez12z12zzobject_creatorz00(obj_t, obj_t,
		BgL_globalz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2widezd2classzd2creatorszd2zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t
		BGl_genzd2widezd2classzd2nilzd2zzobject_nilz00(BgL_tclassz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00(obj_t);
	static obj_t BGl__genzd2plainzd2classzd2creatorszd2zzobject_creatorz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t
		BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00
		(BgL_jclassz00_bglt, obj_t, obj_t);
	static obj_t
		BGl__importzd2widezd2classzd2creatorszd2zzobject_creatorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genzd2onezd2constructorz00zzobject_creatorz00(obj_t,
		BgL_jclassz00_bglt, obj_t);
	static obj_t BGl_alloczd2wideningzd2zzobject_creatorz00(BgL_tclassz00_bglt,
		obj_t);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t
		BGl_genzd2javazd2classzd2creatorzd2zzobject_creatorz00(BgL_jclassz00_bglt,
		obj_t);
	extern obj_t BGl_za2sawza2z00zzengine_paramz00;
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t
		BGl__genzd2javazd2classzd2constructorszd2zzobject_creatorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__importzd2plainzd2classzd2creatorszd2zzobject_creatorz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t
		BGl_makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t);
	static obj_t
		BGl_genzd2inlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	static obj_t BGl_genzd2widezd2classzd2makez12zc0zzobject_creatorz00(obj_t,
		BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t
		BGl_genzd2plainzd2classzd2nilzd2zzobject_nilz00(BgL_tclassz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t
		BGl_importzd2noinlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2plainzd2classzd2creatorszd2zzobject_creatorz00(BgL_tclassz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_genzd2classzd2fillz12z12zzobject_creatorz00(obj_t, obj_t,
		BgL_tclassz00_bglt, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_creatorz00();
	static obj_t BGl_genzd2classzd2makez12z12zzobject_creatorz00(obj_t, obj_t,
		obj_t, BgL_tclassz00_bglt, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_creatorz00();
	static obj_t __cnst[39];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2javazd2classzd2creatorzd2envz00zzobject_creatorz00,
		BgL_bgl__importza7d2javaza7d3536z00,
		BGl__importzd2javazd2classzd2creatorzd2zzobject_creatorz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2widezd2classzd2creatorszd2envz00zzobject_creatorz00,
		BgL_bgl__genza7d2wideza7d2cl3537z00,
		BGl__genzd2widezd2classzd2creatorszd2zzobject_creatorz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2plainzd2classzd2creatorszd2envz00zzobject_creatorz00,
		BgL_bgl__genza7d2plainza7d2c3538z00,
		BGl__genzd2plainzd2classzd2creatorszd2zzobject_creatorz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2widezd2classzd2creatorszd2envz00zzobject_creatorz00,
		BgL_bgl__importza7d2wideza7d3539z00,
		BGl__importzd2widezd2classzd2creatorszd2zzobject_creatorz00, 0L, BUNSPEC,
		3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2javazd2classzd2constructorszd2envz00zzobject_creatorz00,
		BgL_bgl__genza7d2javaza7d2cl3540z00,
		BGl__genzd2javazd2classzd2constructorszd2zzobject_creatorz00, 0L, BUNSPEC,
		3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2plainzd2classzd2creatorszd2envz00zzobject_creatorz00,
		BgL_bgl__importza7d2plainza73541z00,
		BGl__importzd2plainzd2classzd2creatorszd2zzobject_creatorz00, 0L, BUNSPEC,
		3);
	      DEFINE_STRING(BGl_string3526z00zzobject_creatorz00,
		BgL_bgl_string3526za700za7za7o3542za7, "))))", 4);
	      DEFINE_STRING(BGl_string3527z00zzobject_creatorz00,
		BgL_bgl_string3527za700za7za7o3543za7, ")BREF( GC_MALLOC (sizeof(", 25);
	      DEFINE_STRING(BGl_string3528z00zzobject_creatorz00,
		BgL_bgl_string3528za700za7za7o3544za7, "((", 2);
	      DEFINE_STRING(BGl_string3530z00zzobject_creatorz00,
		BgL_bgl_string3530za700za7za7o3545za7, ")BREF( GC_MALLOC ( sizeof(", 26);
	      DEFINE_STRING(BGl_string3529z00zzobject_creatorz00,
		BgL_bgl_string3529za700za7za7o3546za7, ") )))", 5);
	      DEFINE_STRING(BGl_string3531z00zzobject_creatorz00,
		BgL_bgl_string3531za700za7za7o3547za7, "object_creator", 14);
	      DEFINE_STRING(BGl_string3532z00zzobject_creatorz00,
		BgL_bgl_string3532za700za7za7o3548za7,
		"cast aux object-widening-set! class-num __object @ object-class-num-set! +fx done =fx if labels loop free-pragma allocator pragma begin jvm let ::long i export quote define obj widening- o inline static new define-inline %allocate- widening - make make- ! fill- (make-heap make-add-heap) ",
		288);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_creatorz00(long
		BgL_checksumz00_2218, char *BgL_fromz00_2219)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_creatorz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_creatorz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_creatorz00();
					BGl_cnstzd2initzd2zzobject_creatorz00();
					BGl_importedzd2moduleszd2initz00zzobject_creatorz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_creatorz00()
	{
		AN_OBJECT;
		{	/* Object/creator.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"object_creator");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_creatorz00()
	{
		AN_OBJECT;
		{	/* Object/creator.scm 21 */
			{	/* Object/creator.scm 21 */
				obj_t BgL_cportz00_2210;

				BgL_cportz00_2210 =
					bgl_open_input_string(BGl_string3532z00zzobject_creatorz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2211;

					BgL_iz00_2211 = ((long) 38);
				BgL_loopz00_2212:
					if ((BgL_iz00_2211 == ((long) -1)))
						{	/* Object/creator.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/creator.scm 21 */
							{	/* Object/creator.scm 21 */
								obj_t BgL_arg3535z00_2214;

								{	/* Object/creator.scm 21 */

									{	/* Object/creator.scm 21 */
										obj_t BgL_locationz00_2216;

										BgL_locationz00_2216 = BBOOL(((bool_t) 0));
										{	/* Object/creator.scm 21 */

											BgL_arg3535z00_2214 =
												BGl_readz00zz__readerz00(BgL_cportz00_2210,
												BgL_locationz00_2216);
										}
									}
								}
								{	/* Object/creator.scm 21 */
									int BgL_auxz00_2237;

									BgL_auxz00_2237 = (int) (BgL_iz00_2211);
									CNST_TABLE_SET(BgL_auxz00_2237, BgL_arg3535z00_2214);
							}}
							{	/* Object/creator.scm 21 */
								int BgL_auxz00_2217;

								BgL_auxz00_2217 = (int) ((BgL_iz00_2211 - ((long) 1)));
								{
									long BgL_iz00_2242;

									BgL_iz00_2242 = (long) (BgL_auxz00_2217);
									BgL_iz00_2211 = BgL_iz00_2242;
									goto BgL_loopz00_2212;
								}
							}
						}
				}
			}
		}
	}



/* inline-creators? */
	bool_t BGl_inlinezd2creatorszf3z21zzobject_creatorz00()
	{
		AN_OBJECT;
		{	/* Object/creator.scm 56 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Object/creator.scm 58 */
					bool_t BgL_testz00_2247;

					{	/* Object/creator.scm 58 */
						bool_t BgL__ortest_2522z00_622;

						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
							(BGl_za2profilezd2modeza2zd2zzengine_paramz00))
							{	/* Object/creator.scm 58 */
								BgL__ortest_2522z00_622 = ((bool_t) 0);
							}
						else
							{	/* Object/creator.scm 58 */
								BgL__ortest_2522z00_622 = ((bool_t) 1);
							}
						if (BgL__ortest_2522z00_622)
							{	/* Object/creator.scm 58 */
								BgL_testz00_2247 = BgL__ortest_2522z00_622;
							}
						else
							{	/* Object/creator.scm 58 */
								BgL_testz00_2247 =
									(
									(long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00) <
									((long) 1));
					}}
					if (BgL_testz00_2247)
						{	/* Object/creator.scm 58 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BGl_za2passza2z00zzengine_paramz00,
										CNST_TABLE_REF(((long) 0)))))
								{	/* Object/creator.scm 60 */
									return ((bool_t) 0);
								}
							else
								{	/* Object/creator.scm 60 */
									return ((bool_t) 1);
								}
						}
					else
						{	/* Object/creator.scm 58 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Object/creator.scm 57 */
					return ((bool_t) 0);
				}
		}
	}



/* gen-plain-class-creators */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2plainzd2classzd2creatorszd2zzobject_creatorz00(BgL_tclassz00_bglt
		BgL_classz00_1, obj_t BgL_srczd2defzd2_2, obj_t BgL_importz00_3)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 65 */
			{	/* Object/creator.scm 66 */
				obj_t BgL_arg2586z00_624;

				obj_t BgL_arg2587z00_625;

				obj_t BgL_arg2589z00_626;

				BgL_arg2586z00_624 =
					BGl_genzd2noinlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
					(BgL_classz00_1, BgL_srczd2defzd2_2, BgL_importz00_3);
				BgL_arg2587z00_625 =
					BGl_genzd2inlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
					(BgL_classz00_1, BgL_srczd2defzd2_2, BgL_importz00_3);
				BgL_arg2589z00_626 =
					BGl_genzd2plainzd2classzd2nilzd2zzobject_nilz00(BgL_classz00_1,
					BgL_srczd2defzd2_2, BgL_importz00_3);
				{	/* Object/creator.scm 66 */
					obj_t BgL_list2590z00_627;

					{	/* Object/creator.scm 66 */
						obj_t BgL_arg2594z00_628;

						{	/* Object/creator.scm 66 */
							obj_t BgL_arg2595z00_629;

							BgL_arg2595z00_629 = MAKE_PAIR(BgL_arg2589z00_626, BNIL);
							BgL_arg2594z00_628 =
								MAKE_PAIR(BgL_arg2587z00_625, BgL_arg2595z00_629);
						}
						BgL_list2590z00_627 =
							MAKE_PAIR(BgL_arg2586z00_624, BgL_arg2594z00_628);
					}
					return
						BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2590z00_627);
				}
			}
		}
	}



/* _gen-plain-class-creators */
	obj_t BGl__genzd2plainzd2classzd2creatorszd2zzobject_creatorz00(obj_t
		BgL_envz00_2182, obj_t BgL_classz00_2183, obj_t BgL_srczd2defzd2_2184,
		obj_t BgL_importz00_2185)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 65 */
			return
				BGl_genzd2plainzd2classzd2creatorszd2zzobject_creatorz00(
				(BgL_tclassz00_bglt) (BgL_classz00_2183), BgL_srczd2defzd2_2184,
				BgL_importz00_2185);
		}
	}



/* gen-inline-plain-class-creators */
	obj_t
		BGl_genzd2inlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_4, obj_t BgL_srczd2defzd2_5,
		obj_t BgL_importz00_6)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 76 */
			{	/* Object/creator.scm 78 */
				obj_t BgL_idz00_631;

				{
					BgL_typez00_bglt BgL_auxz00_2266;

					BgL_auxz00_2266 = (BgL_typez00_bglt) (BgL_classz00_4);
					BgL_idz00_631 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_2266))->BgL_idz00);
				}
				{	/* Object/creator.scm 78 */
					BgL_globalz00_bglt BgL_holderz00_632;

					{
						obj_t BgL_auxz00_2269;

						{	/* Object/creator.scm 79 */
							BgL_objectz00_bglt BgL_auxz00_2270;

							BgL_auxz00_2270 = (BgL_objectz00_bglt) (BgL_classz00_4);
							BgL_auxz00_2269 = BGL_OBJECT_WIDENING(BgL_auxz00_2270);
						}
						BgL_holderz00_632 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2269))->BgL_holderz00);
					}
					{	/* Object/creator.scm 79 */
						obj_t BgL_fillzd2idzd2_633;

						{	/* Object/creator.scm 80 */
							obj_t BgL_list2616z00_638;

							{	/* Object/creator.scm 80 */
								obj_t BgL_arg2621z00_639;

								obj_t BgL_arg2628z00_640;

								BgL_arg2621z00_639 = CNST_TABLE_REF(((long) 1));
								{	/* Object/creator.scm 80 */
									obj_t BgL_arg2629z00_641;

									BgL_arg2629z00_641 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
									BgL_arg2628z00_640 =
										MAKE_PAIR(BgL_idz00_631, BgL_arg2629z00_641);
								}
								BgL_list2616z00_638 =
									MAKE_PAIR(BgL_arg2621z00_639, BgL_arg2628z00_640);
							}
							BgL_fillzd2idzd2_633 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list2616z00_638);
						}
						{	/* Object/creator.scm 80 */

							{	/* Object/creator.scm 81 */
								obj_t BgL_arg2602z00_634;

								obj_t BgL_arg2608z00_635;

								BgL_arg2602z00_634 =
									BGl_genzd2classzd2fillz12z12zzobject_creatorz00
									(BgL_fillzd2idzd2_633, BgL_idz00_631, BgL_classz00_4,
									BgL_srczd2defzd2_5, BgL_importz00_6);
								BgL_arg2608z00_635 =
									BGl_genzd2classzd2allocatez12z12zzobject_creatorz00
									(BgL_idz00_631, (obj_t) (BgL_classz00_4), BgL_holderz00_632,
									BgL_srczd2defzd2_5, BgL_importz00_6);
								{	/* Object/creator.scm 81 */
									obj_t BgL_list2609z00_636;

									{	/* Object/creator.scm 81 */
										obj_t BgL_arg2615z00_637;

										BgL_arg2615z00_637 = MAKE_PAIR(BgL_arg2608z00_635, BNIL);
										BgL_list2609z00_636 =
											MAKE_PAIR(BgL_arg2602z00_634, BgL_arg2615z00_637);
									}
									return BgL_list2609z00_636;
								}
							}
						}
					}
				}
			}
		}
	}



/* gen-noinline-plain-class-creators */
	obj_t
		BGl_genzd2noinlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_7, obj_t BgL_srczd2defzd2_8,
		obj_t BgL_importz00_9)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 87 */
			{	/* Object/creator.scm 89 */
				bool_t BgL_testz00_2285;

				{
					obj_t BgL_auxz00_2286;

					{	/* Object/creator.scm 89 */
						BgL_objectz00_bglt BgL_auxz00_2287;

						BgL_auxz00_2287 = (BgL_objectz00_bglt) (BgL_classz00_7);
						BgL_auxz00_2286 = BGL_OBJECT_WIDENING(BgL_auxz00_2287);
					}
					BgL_testz00_2285 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2286))->BgL_abstractzf3zf3);
				}
				if (BgL_testz00_2285)
					{	/* Object/creator.scm 89 */
						return BNIL;
					}
				else
					{	/* Object/creator.scm 91 */
						obj_t BgL_idz00_644;

						{
							BgL_typez00_bglt BgL_auxz00_2291;

							BgL_auxz00_2291 = (BgL_typez00_bglt) (BgL_classz00_7);
							BgL_idz00_644 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2291))->BgL_idz00);
						}
						{	/* Object/creator.scm 91 */
							obj_t BgL_mkzd2idzd2_645;

							{	/* Object/creator.scm 92 */
								obj_t BgL_arg2648z00_648;

								{	/* Object/creator.scm 92 */
									obj_t BgL_arg2649z00_649;

									obj_t BgL_arg2650z00_650;

									{	/* Object/creator.scm 92 */
										obj_t BgL_res3482z00_1833;

										{	/* Object/creator.scm 92 */
											obj_t BgL_symbolz00_1831;

											BgL_symbolz00_1831 = CNST_TABLE_REF(((long) 3));
											{	/* Object/creator.scm 92 */
												obj_t BgL_arg2063z00_1832;

												BgL_arg2063z00_1832 =
													SYMBOL_TO_STRING(BgL_symbolz00_1831);
												BgL_res3482z00_1833 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1832);
										}}
										BgL_arg2649z00_649 = BgL_res3482z00_1833;
									}
									{	/* Object/creator.scm 92 */
										obj_t BgL_res3483z00_1836;

										{	/* Object/creator.scm 92 */
											obj_t BgL_arg2063z00_1835;

											BgL_arg2063z00_1835 = SYMBOL_TO_STRING(BgL_idz00_644);
											BgL_res3483z00_1836 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1835);
										}
										BgL_arg2650z00_650 = BgL_res3483z00_1836;
									}
									{	/* Object/creator.scm 92 */
										obj_t BgL_list2651z00_651;

										{	/* Object/creator.scm 92 */
											obj_t BgL_arg2652z00_652;

											BgL_arg2652z00_652 = MAKE_PAIR(BgL_arg2650z00_650, BNIL);
											BgL_list2651z00_651 =
												MAKE_PAIR(BgL_arg2649z00_649, BgL_arg2652z00_652);
										}
										BgL_arg2648z00_648 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2651z00_651);
								}}
								BgL_mkzd2idzd2_645 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2648z00_648));
							}
							{	/* Object/creator.scm 92 */

								{	/* Object/creator.scm 93 */
									obj_t BgL_arg2642z00_646;

									BgL_arg2642z00_646 =
										BGl_genzd2classzd2makez12z12zzobject_creatorz00
										(CNST_TABLE_REF(((long) 4)), BgL_mkzd2idzd2_645,
										BgL_idz00_644, BgL_classz00_7, BgL_srczd2defzd2_8,
										BgL_importz00_9);
									{	/* Object/creator.scm 93 */
										obj_t BgL_list2643z00_647;

										BgL_list2643z00_647 = MAKE_PAIR(BgL_arg2642z00_646, BNIL);
										return BgL_list2643z00_647;
									}
								}
							}
						}
					}
			}
		}
	}



/* gen-wide-class-creators */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2widezd2classzd2creatorszd2zzobject_creatorz00(BgL_tclassz00_bglt
		BgL_classz00_10, obj_t BgL_srczd2defzd2_11, obj_t BgL_importz00_12)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 98 */
			{	/* Object/creator.scm 99 */
				obj_t BgL_arg2655z00_653;

				obj_t BgL_arg2656z00_654;

				obj_t BgL_arg2657z00_655;

				BgL_arg2655z00_653 =
					BGl_genzd2noinlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
					(BgL_classz00_10, BgL_srczd2defzd2_11, BgL_importz00_12);
				BgL_arg2656z00_654 =
					BGl_genzd2inlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
					(BgL_classz00_10, BgL_srczd2defzd2_11, BgL_importz00_12);
				BgL_arg2657z00_655 =
					BGl_genzd2widezd2classzd2nilzd2zzobject_nilz00(BgL_classz00_10,
					BgL_srczd2defzd2_11, BgL_importz00_12);
				{	/* Object/creator.scm 99 */
					obj_t BgL_list2658z00_656;

					{	/* Object/creator.scm 99 */
						obj_t BgL_arg2659z00_657;

						{	/* Object/creator.scm 99 */
							obj_t BgL_arg2660z00_658;

							BgL_arg2660z00_658 = MAKE_PAIR(BgL_arg2657z00_655, BNIL);
							BgL_arg2659z00_657 =
								MAKE_PAIR(BgL_arg2656z00_654, BgL_arg2660z00_658);
						}
						BgL_list2658z00_656 =
							MAKE_PAIR(BgL_arg2655z00_653, BgL_arg2659z00_657);
					}
					return
						BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2658z00_656);
				}
			}
		}
	}



/* _gen-wide-class-creators */
	obj_t BGl__genzd2widezd2classzd2creatorszd2zzobject_creatorz00(obj_t
		BgL_envz00_2186, obj_t BgL_classz00_2187, obj_t BgL_srczd2defzd2_2188,
		obj_t BgL_importz00_2189)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 98 */
			return
				BGl_genzd2widezd2classzd2creatorszd2zzobject_creatorz00(
				(BgL_tclassz00_bglt) (BgL_classz00_2187), BgL_srczd2defzd2_2188,
				BgL_importz00_2189);
		}
	}



/* gen-noinline-wide-class-creators */
	obj_t
		BGl_genzd2noinlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_13, obj_t BgL_srczd2defzd2_14,
		obj_t BgL_importz00_15)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 106 */
			{	/* Object/creator.scm 108 */
				bool_t BgL_testz00_2316;

				{
					obj_t BgL_auxz00_2317;

					{	/* Object/creator.scm 108 */
						BgL_objectz00_bglt BgL_auxz00_2318;

						BgL_auxz00_2318 = (BgL_objectz00_bglt) (BgL_classz00_13);
						BgL_auxz00_2317 = BGL_OBJECT_WIDENING(BgL_auxz00_2318);
					}
					BgL_testz00_2316 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2317))->BgL_abstractzf3zf3);
				}
				if (BgL_testz00_2316)
					{	/* Object/creator.scm 108 */
						return BNIL;
					}
				else
					{	/* Object/creator.scm 110 */
						obj_t BgL_fillzd2idzd2_661;

						obj_t BgL_wideningz00_662;

						{	/* Object/creator.scm 110 */
							obj_t BgL_arg2670z00_671;

							obj_t BgL_arg2671z00_672;

							obj_t BgL_arg2672z00_673;

							BgL_arg2670z00_671 = CNST_TABLE_REF(((long) 1));
							{
								BgL_typez00_bglt BgL_auxz00_2323;

								BgL_auxz00_2323 = (BgL_typez00_bglt) (BgL_classz00_13);
								BgL_arg2671z00_672 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2323))->BgL_idz00);
							}
							BgL_arg2672z00_673 = CNST_TABLE_REF(((long) 2));
							{	/* Object/creator.scm 110 */
								obj_t BgL_list2673z00_674;

								{	/* Object/creator.scm 110 */
									obj_t BgL_arg2674z00_675;

									{	/* Object/creator.scm 110 */
										obj_t BgL_arg2675z00_676;

										BgL_arg2675z00_676 = MAKE_PAIR(BgL_arg2672z00_673, BNIL);
										BgL_arg2674z00_675 =
											MAKE_PAIR(BgL_arg2671z00_672, BgL_arg2675z00_676);
									}
									BgL_list2673z00_674 =
										MAKE_PAIR(BgL_arg2670z00_671, BgL_arg2674z00_675);
								}
								BgL_fillzd2idzd2_661 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list2673z00_674);
						}}
						{	/* Object/creator.scm 111 */
							obj_t BgL_arg2676z00_677;

							obj_t BgL_arg2677z00_678;

							obj_t BgL_arg2678z00_679;

							{
								obj_t BgL_auxz00_2331;

								{	/* Object/creator.scm 111 */
									BgL_objectz00_bglt BgL_auxz00_2332;

									BgL_auxz00_2332 = (BgL_objectz00_bglt) (BgL_classz00_13);
									BgL_auxz00_2331 = BGL_OBJECT_WIDENING(BgL_auxz00_2332);
								}
								BgL_arg2676z00_677 =
									(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2331))->
									BgL_wideningz00);
							}
							BgL_arg2677z00_678 = CNST_TABLE_REF(((long) 5));
							{
								BgL_typez00_bglt BgL_auxz00_2337;

								BgL_auxz00_2337 = (BgL_typez00_bglt) (BgL_classz00_13);
								BgL_arg2678z00_679 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2337))->BgL_idz00);
							}
							{	/* Object/creator.scm 111 */
								obj_t BgL_list2679z00_680;

								{	/* Object/creator.scm 111 */
									obj_t BgL_arg2680z00_681;

									{	/* Object/creator.scm 111 */
										obj_t BgL_arg2681z00_682;

										BgL_arg2681z00_682 = MAKE_PAIR(BgL_arg2678z00_679, BNIL);
										BgL_arg2680z00_681 =
											MAKE_PAIR(BgL_arg2677z00_678, BgL_arg2681z00_682);
									}
									BgL_list2679z00_680 =
										MAKE_PAIR(BgL_arg2676z00_677, BgL_arg2680z00_681);
								}
								BgL_wideningz00_662 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list2679z00_680);
						}}
						{	/* Object/creator.scm 113 */
							obj_t BgL_arg2663z00_664;

							obj_t BgL_arg2664z00_665;

							{	/* Object/creator.scm 113 */
								obj_t BgL_arg2667z00_668;

								obj_t BgL_arg2668z00_669;

								BgL_arg2667z00_668 = CNST_TABLE_REF(((long) 6));
								{
									BgL_typez00_bglt BgL_auxz00_2345;

									BgL_auxz00_2345 = (BgL_typez00_bglt) (BgL_classz00_13);
									BgL_arg2668z00_669 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2345))->BgL_idz00);
								}
								BgL_arg2663z00_664 =
									BGl_genzd2classzd2makez12z12zzobject_creatorz00
									(BgL_arg2667z00_668, BgL_wideningz00_662, BgL_arg2668z00_669,
									BgL_classz00_13, BgL_srczd2defzd2_14, BgL_importz00_15);
							}
							{	/* Object/creator.scm 114 */
								obj_t BgL_arg2669z00_670;

								{
									BgL_typez00_bglt BgL_auxz00_2349;

									BgL_auxz00_2349 = (BgL_typez00_bglt) (BgL_classz00_13);
									BgL_arg2669z00_670 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2349))->BgL_idz00);
								}
								BgL_arg2664z00_665 =
									BGl_genzd2widezd2classzd2makez12zc0zzobject_creatorz00
									(BgL_arg2669z00_670, BgL_classz00_13, BgL_srczd2defzd2_14,
									BgL_importz00_15);
							}
							{	/* Object/creator.scm 113 */
								obj_t BgL_list2665z00_666;

								{	/* Object/creator.scm 113 */
									obj_t BgL_arg2666z00_667;

									BgL_arg2666z00_667 = MAKE_PAIR(BgL_arg2664z00_665, BNIL);
									BgL_list2665z00_666 =
										MAKE_PAIR(BgL_arg2663z00_664, BgL_arg2666z00_667);
								}
								return BgL_list2665z00_666;
							}
						}
					}
			}
		}
	}



/* gen-inline-wide-class-creators */
	obj_t
		BGl_genzd2inlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_16, obj_t BgL_srczd2defzd2_17,
		obj_t BgL_importz00_18)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 119 */
			{	/* Object/creator.scm 121 */
				bool_t BgL_testz00_2355;

				{
					obj_t BgL_auxz00_2356;

					{	/* Object/creator.scm 121 */
						BgL_objectz00_bglt BgL_auxz00_2357;

						BgL_auxz00_2357 = (BgL_objectz00_bglt) (BgL_classz00_16);
						BgL_auxz00_2356 = BGL_OBJECT_WIDENING(BgL_auxz00_2357);
					}
					BgL_testz00_2355 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2356))->BgL_abstractzf3zf3);
				}
				if (BgL_testz00_2355)
					{	/* Object/creator.scm 121 */
						return BNIL;
					}
				else
					{	/* Object/creator.scm 123 */
						obj_t BgL_fillzd2idzd2_685;

						obj_t BgL_wideningz00_686;

						obj_t BgL_superz00_687;

						{	/* Object/creator.scm 123 */
							obj_t BgL_arg2690z00_695;

							obj_t BgL_arg2691z00_696;

							obj_t BgL_arg2692z00_697;

							BgL_arg2690z00_695 = CNST_TABLE_REF(((long) 1));
							{
								BgL_typez00_bglt BgL_auxz00_2362;

								BgL_auxz00_2362 = (BgL_typez00_bglt) (BgL_classz00_16);
								BgL_arg2691z00_696 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2362))->BgL_idz00);
							}
							BgL_arg2692z00_697 = CNST_TABLE_REF(((long) 2));
							{	/* Object/creator.scm 123 */
								obj_t BgL_list2693z00_698;

								{	/* Object/creator.scm 123 */
									obj_t BgL_arg2694z00_699;

									{	/* Object/creator.scm 123 */
										obj_t BgL_arg2695z00_700;

										BgL_arg2695z00_700 = MAKE_PAIR(BgL_arg2692z00_697, BNIL);
										BgL_arg2694z00_699 =
											MAKE_PAIR(BgL_arg2691z00_696, BgL_arg2695z00_700);
									}
									BgL_list2693z00_698 =
										MAKE_PAIR(BgL_arg2690z00_695, BgL_arg2694z00_699);
								}
								BgL_fillzd2idzd2_685 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list2693z00_698);
						}}
						{	/* Object/creator.scm 124 */
							obj_t BgL_arg2696z00_701;

							obj_t BgL_arg2697z00_702;

							obj_t BgL_arg2698z00_703;

							{
								obj_t BgL_auxz00_2370;

								{	/* Object/creator.scm 124 */
									BgL_objectz00_bglt BgL_auxz00_2371;

									BgL_auxz00_2371 = (BgL_objectz00_bglt) (BgL_classz00_16);
									BgL_auxz00_2370 = BGL_OBJECT_WIDENING(BgL_auxz00_2371);
								}
								BgL_arg2696z00_701 =
									(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2370))->
									BgL_wideningz00);
							}
							BgL_arg2697z00_702 = CNST_TABLE_REF(((long) 5));
							{
								BgL_typez00_bglt BgL_auxz00_2376;

								BgL_auxz00_2376 = (BgL_typez00_bglt) (BgL_classz00_16);
								BgL_arg2698z00_703 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2376))->BgL_idz00);
							}
							{	/* Object/creator.scm 124 */
								obj_t BgL_list2699z00_704;

								{	/* Object/creator.scm 124 */
									obj_t BgL_arg2700z00_705;

									{	/* Object/creator.scm 124 */
										obj_t BgL_arg2701z00_706;

										BgL_arg2701z00_706 = MAKE_PAIR(BgL_arg2698z00_703, BNIL);
										BgL_arg2700z00_705 =
											MAKE_PAIR(BgL_arg2697z00_702, BgL_arg2701z00_706);
									}
									BgL_list2699z00_704 =
										MAKE_PAIR(BgL_arg2696z00_701, BgL_arg2700z00_705);
								}
								BgL_wideningz00_686 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list2699z00_704);
						}}
						{
							obj_t BgL_auxz00_2383;

							{	/* Object/creator.scm 125 */
								BgL_objectz00_bglt BgL_auxz00_2384;

								BgL_auxz00_2384 = (BgL_objectz00_bglt) (BgL_classz00_16);
								BgL_auxz00_2383 = BGL_OBJECT_WIDENING(BgL_auxz00_2384);
							}
							BgL_superz00_687 =
								(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2383))->
								BgL_itszd2superzd2);
						}
						{	/* Object/creator.scm 126 */
							obj_t BgL_arg2683z00_688;

							obj_t BgL_arg2684z00_689;

							{	/* Object/creator.scm 126 */
								obj_t BgL_arg2687z00_692;

								{
									BgL_typez00_bglt BgL_auxz00_2388;

									BgL_auxz00_2388 = (BgL_typez00_bglt) (BgL_classz00_16);
									BgL_arg2687z00_692 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2388))->BgL_idz00);
								}
								BgL_arg2683z00_688 =
									BGl_genzd2classzd2fillz12z12zzobject_creatorz00
									(BgL_fillzd2idzd2_685, BgL_arg2687z00_692, BgL_classz00_16,
									BgL_srczd2defzd2_17, BgL_importz00_18);
							}
							{	/* Object/creator.scm 127 */
								obj_t BgL_arg2688z00_693;

								BgL_globalz00_bglt BgL_arg2689z00_694;

								{
									BgL_typez00_bglt BgL_auxz00_2392;

									BgL_auxz00_2392 = (BgL_typez00_bglt) (BgL_classz00_16);
									BgL_arg2688z00_693 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2392))->BgL_idz00);
								}
								{
									obj_t BgL_auxz00_2395;

									{	/* Object/creator.scm 127 */
										BgL_objectz00_bglt BgL_auxz00_2396;

										BgL_auxz00_2396 = (BgL_objectz00_bglt) (BgL_classz00_16);
										BgL_auxz00_2395 = BGL_OBJECT_WIDENING(BgL_auxz00_2396);
									}
									BgL_arg2689z00_694 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2395))->
										BgL_holderz00);
								}
								BgL_arg2684z00_689 =
									BGl_genzd2classzd2allocatez12z12zzobject_creatorz00
									(BgL_arg2688z00_693, BgL_superz00_687, BgL_arg2689z00_694,
									BgL_srczd2defzd2_17, BgL_importz00_18);
							}
							{	/* Object/creator.scm 126 */
								obj_t BgL_list2685z00_690;

								{	/* Object/creator.scm 126 */
									obj_t BgL_arg2686z00_691;

									BgL_arg2686z00_691 = MAKE_PAIR(BgL_arg2684z00_689, BNIL);
									BgL_list2685z00_690 =
										MAKE_PAIR(BgL_arg2683z00_688, BgL_arg2686z00_691);
								}
								return BgL_list2685z00_690;
							}
						}
					}
			}
		}
	}



/* gen-java-class-creator */
	obj_t
		BGl_genzd2javazd2classzd2creatorzd2zzobject_creatorz00(BgL_jclassz00_bglt
		BgL_classz00_19, obj_t BgL_srczd2defzd2_20)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 132 */
			{	/* Object/creator.scm 133 */
				obj_t BgL_idz00_707;

				{
					BgL_typez00_bglt BgL_auxz00_2403;

					BgL_auxz00_2403 = (BgL_typez00_bglt) (BgL_classz00_19);
					BgL_idz00_707 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_2403))->BgL_idz00);
				}
				{	/* Object/creator.scm 133 */
					obj_t BgL_alloczd2idzd2_708;

					{	/* Object/creator.scm 134 */
						obj_t BgL_arg2724z00_733;

						{	/* Object/creator.scm 134 */
							obj_t BgL_arg2725z00_734;

							obj_t BgL_arg2726z00_735;

							{	/* Object/creator.scm 134 */
								obj_t BgL_res3487z00_1862;

								{	/* Object/creator.scm 134 */
									obj_t BgL_symbolz00_1860;

									BgL_symbolz00_1860 = CNST_TABLE_REF(((long) 7));
									{	/* Object/creator.scm 134 */
										obj_t BgL_arg2063z00_1861;

										BgL_arg2063z00_1861 = SYMBOL_TO_STRING(BgL_symbolz00_1860);
										BgL_res3487z00_1862 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1861);
								}}
								BgL_arg2725z00_734 = BgL_res3487z00_1862;
							}
							{	/* Object/creator.scm 134 */
								obj_t BgL_res3488z00_1865;

								{	/* Object/creator.scm 134 */
									obj_t BgL_arg2063z00_1864;

									BgL_arg2063z00_1864 = SYMBOL_TO_STRING(BgL_idz00_707);
									BgL_res3488z00_1865 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1864);
								}
								BgL_arg2726z00_735 = BgL_res3488z00_1865;
							}
							{	/* Object/creator.scm 134 */
								obj_t BgL_list2727z00_736;

								{	/* Object/creator.scm 134 */
									obj_t BgL_arg2728z00_737;

									BgL_arg2728z00_737 = MAKE_PAIR(BgL_arg2726z00_735, BNIL);
									BgL_list2727z00_736 =
										MAKE_PAIR(BgL_arg2725z00_734, BgL_arg2728z00_737);
								}
								BgL_arg2724z00_733 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2727z00_736);
						}}
						BgL_alloczd2idzd2_708 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg2724z00_733));
					}
					{	/* Object/creator.scm 134 */

						{

							{	/* Object/creator.scm 138 */
								obj_t BgL_arg2702z00_710;

								{	/* Object/creator.scm 138 */
									obj_t BgL_arg2703z00_711;

									obj_t BgL_arg2704z00_712;

									BgL_arg2703z00_711 = CNST_TABLE_REF(((long) 10));
									{	/* Object/creator.scm 138 */
										obj_t BgL_arg2705z00_713;

										{	/* Object/creator.scm 138 */
											obj_t BgL_arg2708z00_716;

											obj_t BgL_arg2709z00_717;

											BgL_arg2708z00_716 = CNST_TABLE_REF(((long) 11));
											{	/* Object/creator.scm 138 */
												obj_t BgL_list2710z00_718;

												BgL_list2710z00_718 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2709z00_717 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_alloczd2idzd2_708, BgL_list2710z00_718);
											}
											BgL_arg2705z00_713 =
												MAKE_PAIR(BgL_arg2708z00_716, BgL_arg2709z00_717);
										}
										{	/* Object/creator.scm 138 */
											obj_t BgL_list2707z00_715;

											BgL_list2707z00_715 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2704z00_712 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2705z00_713, BgL_list2707z00_715);
									}}
									BgL_arg2702z00_710 =
										MAKE_PAIR(BgL_arg2703z00_711, BgL_arg2704z00_712);
								}
								BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
									(BgL_arg2702z00_710);
							}
							{	/* Object/creator.scm 139 */
								obj_t BgL_arg2711z00_719;

								{	/* Object/creator.scm 139 */
									obj_t BgL_arg2713z00_721;

									{	/* Object/creator.scm 136 */
										obj_t BgL_arg2716z00_724;

										obj_t BgL_arg2717z00_725;

										BgL_arg2716z00_724 = CNST_TABLE_REF(((long) 8));
										{	/* Object/creator.scm 136 */
											obj_t BgL_arg2718z00_726;

											obj_t BgL_arg2719z00_727;

											BgL_arg2718z00_726 =
												MAKE_PAIR(BgL_alloczd2idzd2_708, BNIL);
											BgL_arg2719z00_727 =
												BGl_makezd2privatezd2sexpz00zzast_privatez00
												(CNST_TABLE_REF(((long) 9)), BgL_idz00_707, BNIL);
											{	/* Object/creator.scm 136 */
												obj_t BgL_list2721z00_729;

												{	/* Object/creator.scm 136 */
													obj_t BgL_arg2722z00_730;

													BgL_arg2722z00_730 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2721z00_729 =
														MAKE_PAIR(BgL_arg2719z00_727, BgL_arg2722z00_730);
												}
												BgL_arg2717z00_725 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2718z00_726, BgL_list2721z00_729);
										}}
										BgL_arg2713z00_721 =
											MAKE_PAIR(BgL_arg2716z00_724, BgL_arg2717z00_725);
									}
									{	/* Object/creator.scm 139 */
										obj_t BgL_list2714z00_722;

										BgL_list2714z00_722 = MAKE_PAIR(BgL_srczd2defzd2_20, BNIL);
										BgL_arg2711z00_719 =
											BGl_epairifyza2za2zztools_miscz00(BgL_arg2713z00_721,
											BgL_list2714z00_722);
								}}
								{	/* Object/creator.scm 139 */
									obj_t BgL_list2712z00_720;

									BgL_list2712z00_720 = MAKE_PAIR(BgL_arg2711z00_719, BNIL);
									return BgL_list2712z00_720;
								}
							}
						}
					}
				}
			}
		}
	}



/* import-plain-class-creators */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2plainzd2classzd2creatorszd2zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_21, obj_t BgL_srczd2defzd2_22,
		obj_t BgL_modulez00_23)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 144 */
			BGl_importzd2classzd2nilz00zzobject_nilz00(BgL_classz00_21,
				BgL_srczd2defzd2_22, BgL_modulez00_23);
			{	/* Object/creator.scm 146 */
				bool_t BgL_testz00_2437;

				{
					obj_t BgL_auxz00_2438;

					{	/* Object/creator.scm 146 */
						BgL_objectz00_bglt BgL_auxz00_2439;

						BgL_auxz00_2439 = (BgL_objectz00_bglt) (BgL_classz00_21);
						BgL_auxz00_2438 = BGL_OBJECT_WIDENING(BgL_auxz00_2439);
					}
					BgL_testz00_2437 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2438))->BgL_abstractzf3zf3);
				}
				if (BgL_testz00_2437)
					{	/* Object/creator.scm 146 */
						return BNIL;
					}
				else
					{	/* Object/creator.scm 146 */
						if (BGl_inlinezd2creatorszf3z21zzobject_creatorz00())
							{	/* Object/creator.scm 148 */
								BGl_importzd2noinlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
									(BgL_classz00_21, BgL_srczd2defzd2_22, BgL_modulez00_23);
								return
									BGl_genzd2inlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
									(BgL_classz00_21, BgL_srczd2defzd2_22,
									CNST_TABLE_REF(((long) 10)));
							}
						else
							{	/* Object/creator.scm 148 */
								BGl_importzd2noinlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
									(BgL_classz00_21, BgL_srczd2defzd2_22, BgL_modulez00_23);
								return
									BGl_importzd2inlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
									(BgL_classz00_21, BgL_srczd2defzd2_22, BgL_modulez00_23);
							}
					}
			}
		}
	}



/* _import-plain-class-creators */
	obj_t BGl__importzd2plainzd2classzd2creatorszd2zzobject_creatorz00(obj_t
		BgL_envz00_2190, obj_t BgL_classz00_2191, obj_t BgL_srczd2defzd2_2192,
		obj_t BgL_modulez00_2193)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 144 */
			return
				BGl_importzd2plainzd2classzd2creatorszd2zzobject_creatorz00(
				(BgL_tclassz00_bglt) (BgL_classz00_2191), BgL_srczd2defzd2_2192,
				BgL_modulez00_2193);
		}
	}



/* import-inline-plain-class-creators */
	obj_t
		BGl_importzd2inlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_24, obj_t BgL_srczd2defzd2_25,
		obj_t BgL_modulez00_26)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 160 */
			{	/* Object/creator.scm 162 */
				obj_t BgL_mkzd2idzd2_741;

				{	/* Object/creator.scm 162 */
					obj_t BgL_arg2760z00_775;

					{	/* Object/creator.scm 162 */
						obj_t BgL_arg2761z00_776;

						obj_t BgL_arg2762z00_777;

						{	/* Object/creator.scm 162 */
							obj_t BgL_res3490z00_1872;

							{	/* Object/creator.scm 162 */
								obj_t BgL_symbolz00_1870;

								BgL_symbolz00_1870 = CNST_TABLE_REF(((long) 3));
								{	/* Object/creator.scm 162 */
									obj_t BgL_arg2063z00_1871;

									BgL_arg2063z00_1871 = SYMBOL_TO_STRING(BgL_symbolz00_1870);
									BgL_res3490z00_1872 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1871);
							}}
							BgL_arg2761z00_776 = BgL_res3490z00_1872;
						}
						{	/* Object/creator.scm 162 */
							obj_t BgL_arg2765z00_780;

							{
								BgL_typez00_bglt BgL_auxz00_2455;

								BgL_auxz00_2455 = (BgL_typez00_bglt) (BgL_classz00_24);
								BgL_arg2765z00_780 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2455))->BgL_idz00);
							}
							{	/* Object/creator.scm 162 */
								obj_t BgL_res3491z00_1876;

								{	/* Object/creator.scm 162 */
									obj_t BgL_arg2063z00_1875;

									BgL_arg2063z00_1875 = SYMBOL_TO_STRING(BgL_arg2765z00_780);
									BgL_res3491z00_1876 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1875);
								}
								BgL_arg2762z00_777 = BgL_res3491z00_1876;
						}}
						{	/* Object/creator.scm 162 */
							obj_t BgL_list2763z00_778;

							{	/* Object/creator.scm 162 */
								obj_t BgL_arg2764z00_779;

								BgL_arg2764z00_779 = MAKE_PAIR(BgL_arg2762z00_777, BNIL);
								BgL_list2763z00_778 =
									MAKE_PAIR(BgL_arg2761z00_776, BgL_arg2764z00_779);
							}
							BgL_arg2760z00_775 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2763z00_778);
					}}
					BgL_mkzd2idzd2_741 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg2760z00_775));
				}
				{	/* Object/creator.scm 162 */
					obj_t BgL_fillzd2idzd2_742;

					{	/* Object/creator.scm 163 */
						obj_t BgL_arg2753z00_769;

						obj_t BgL_arg2754z00_770;

						obj_t BgL_arg2755z00_771;

						BgL_arg2753z00_769 = CNST_TABLE_REF(((long) 1));
						{
							BgL_typez00_bglt BgL_auxz00_2466;

							BgL_auxz00_2466 = (BgL_typez00_bglt) (BgL_classz00_24);
							BgL_arg2754z00_770 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2466))->BgL_idz00);
						}
						BgL_arg2755z00_771 = CNST_TABLE_REF(((long) 2));
						{	/* Object/creator.scm 163 */
							obj_t BgL_list2756z00_772;

							{	/* Object/creator.scm 163 */
								obj_t BgL_arg2758z00_773;

								{	/* Object/creator.scm 163 */
									obj_t BgL_arg2759z00_774;

									BgL_arg2759z00_774 = MAKE_PAIR(BgL_arg2755z00_771, BNIL);
									BgL_arg2758z00_773 =
										MAKE_PAIR(BgL_arg2754z00_770, BgL_arg2759z00_774);
								}
								BgL_list2756z00_772 =
									MAKE_PAIR(BgL_arg2753z00_769, BgL_arg2758z00_773);
							}
							BgL_fillzd2idzd2_742 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list2756z00_772);
					}}
					{	/* Object/creator.scm 163 */
						obj_t BgL_mkzd2tidzd2_743;

						{	/* Object/creator.scm 164 */
							obj_t BgL_arg2752z00_768;

							{
								BgL_typez00_bglt BgL_auxz00_2474;

								BgL_auxz00_2474 = (BgL_typez00_bglt) (BgL_classz00_24);
								BgL_arg2752z00_768 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2474))->BgL_idz00);
							}
							BgL_mkzd2tidzd2_743 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_mkzd2idzd2_741,
								BgL_arg2752z00_768);
						}
						{	/* Object/creator.scm 164 */
							obj_t BgL_fzd2idszd2_744;

							{	/* Object/creator.scm 165 */
								obj_t BgL_arg2750z00_767;

								{
									obj_t BgL_auxz00_2478;

									{	/* Object/creator.scm 165 */
										BgL_objectz00_bglt BgL_auxz00_2479;

										BgL_auxz00_2479 = (BgL_objectz00_bglt) (BgL_classz00_24);
										BgL_auxz00_2478 = BGL_OBJECT_WIDENING(BgL_auxz00_2479);
									}
									BgL_arg2750z00_767 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2478))->
										BgL_slotsz00);
								}
								BgL_fzd2idszd2_744 =
									BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
									(BgL_arg2750z00_767);
							}
							{	/* Object/creator.scm 165 */
								obj_t BgL_fzd2tidszd2_745;

								{	/* Object/creator.scm 166 */
									obj_t BgL_arg2749z00_766;

									{
										obj_t BgL_auxz00_2484;

										{	/* Object/creator.scm 166 */
											BgL_objectz00_bglt BgL_auxz00_2485;

											BgL_auxz00_2485 = (BgL_objectz00_bglt) (BgL_classz00_24);
											BgL_auxz00_2484 = BGL_OBJECT_WIDENING(BgL_auxz00_2485);
										}
										BgL_arg2749z00_766 =
											(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2484))->
											BgL_slotsz00);
									}
									BgL_fzd2tidszd2_745 =
										BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
										(BgL_fzd2idszd2_744, BgL_arg2749z00_766);
								}
								{	/* Object/creator.scm 166 */
									obj_t BgL_toz00_746;

									{	/* Object/creator.scm 167 */
										obj_t BgL_arg2746z00_763;

										obj_t BgL_arg2747z00_764;

										BgL_arg2746z00_763 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
														12))));
										{
											BgL_typez00_bglt BgL_auxz00_2493;

											BgL_auxz00_2493 = (BgL_typez00_bglt) (BgL_classz00_24);
											BgL_arg2747z00_764 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2493))->BgL_idz00);
										}
										BgL_toz00_746 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg2746z00_763, BgL_arg2747z00_764);
									}
									{	/* Object/creator.scm 167 */
										obj_t BgL_alloczd2idzd2_747;

										{	/* Object/creator.scm 168 */
											obj_t BgL_arg2739z00_757;

											{	/* Object/creator.scm 168 */
												obj_t BgL_arg2740z00_758;

												obj_t BgL_arg2741z00_759;

												{	/* Object/creator.scm 168 */
													obj_t BgL_res3492z00_1885;

													{	/* Object/creator.scm 168 */
														obj_t BgL_symbolz00_1883;

														BgL_symbolz00_1883 = CNST_TABLE_REF(((long) 7));
														{	/* Object/creator.scm 168 */
															obj_t BgL_arg2063z00_1884;

															BgL_arg2063z00_1884 =
																SYMBOL_TO_STRING(BgL_symbolz00_1883);
															BgL_res3492z00_1885 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1884);
													}}
													BgL_arg2740z00_758 = BgL_res3492z00_1885;
												}
												{	/* Object/creator.scm 168 */
													obj_t BgL_arg2745z00_762;

													{
														BgL_typez00_bglt BgL_auxz00_2500;

														BgL_auxz00_2500 =
															(BgL_typez00_bglt) (BgL_classz00_24);
														BgL_arg2745z00_762 =
															(((BgL_typez00_bglt) CREF(BgL_auxz00_2500))->
															BgL_idz00);
													}
													{	/* Object/creator.scm 168 */
														obj_t BgL_res3493z00_1889;

														{	/* Object/creator.scm 168 */
															obj_t BgL_arg2063z00_1888;

															BgL_arg2063z00_1888 =
																SYMBOL_TO_STRING(BgL_arg2745z00_762);
															BgL_res3493z00_1889 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1888);
														}
														BgL_arg2741z00_759 = BgL_res3493z00_1889;
												}}
												{	/* Object/creator.scm 168 */
													obj_t BgL_list2742z00_760;

													{	/* Object/creator.scm 168 */
														obj_t BgL_arg2743z00_761;

														BgL_arg2743z00_761 =
															MAKE_PAIR(BgL_arg2741z00_759, BNIL);
														BgL_list2742z00_760 =
															MAKE_PAIR(BgL_arg2740z00_758, BgL_arg2743z00_761);
													}
													BgL_arg2739z00_757 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list2742z00_760);
											}}
											BgL_alloczd2idzd2_747 =
												string_to_symbol(BSTRING_TO_STRING(BgL_arg2739z00_757));
										}
										{	/* Object/creator.scm 168 */
											obj_t BgL_alloczd2tidzd2_748;

											{	/* Object/creator.scm 169 */
												obj_t BgL_arg2738z00_756;

												{
													BgL_typez00_bglt BgL_auxz00_2510;

													BgL_auxz00_2510 =
														(BgL_typez00_bglt) (BgL_classz00_24);
													BgL_arg2738z00_756 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_2510))->
														BgL_idz00);
												}
												BgL_alloczd2tidzd2_748 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_alloczd2idzd2_747, BgL_arg2738z00_756);
											}
											{	/* Object/creator.scm 169 */

												{	/* Object/creator.scm 171 */
													obj_t BgL_arg2731z00_749;

													BgL_arg2731z00_749 =
														MAKE_PAIR(BgL_alloczd2tidzd2_748, BNIL);
													BGl_importzd2parserzd2zzmodule_impusez00
														(BgL_modulez00_26, BgL_arg2731z00_749, BNIL);
												}
												{	/* Object/creator.scm 172 */
													obj_t BgL_arg2733z00_751;

													{	/* Object/creator.scm 172 */
														obj_t BgL_arg2735z00_753;

														{	/* Object/creator.scm 172 */
															obj_t BgL_arg2736z00_754;

															BgL_arg2736z00_754 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_fzd2tidszd2_745, BNIL);
															{	/* Object/creator.scm 172 */
																obj_t BgL_list2737z00_755;

																BgL_list2737z00_755 =
																	MAKE_PAIR(BgL_arg2736z00_754, BNIL);
																BgL_arg2735z00_753 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_toz00_746, BgL_list2737z00_755);
														}}
														BgL_arg2733z00_751 =
															MAKE_PAIR(BgL_fillzd2idzd2_742,
															BgL_arg2735z00_753);
													}
													BGl_importzd2parserzd2zzmodule_impusez00
														(BgL_modulez00_26, BgL_arg2733z00_751, BNIL);
												}
												return BNIL;
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



/* import-noinline-plain-class-creators */
	obj_t
		BGl_importzd2noinlinezd2plainzd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_27, obj_t BgL_srczd2defzd2_28,
		obj_t BgL_modulez00_29)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 179 */
			{	/* Object/creator.scm 181 */
				obj_t BgL_mkzd2idzd2_782;

				{	/* Object/creator.scm 181 */
					obj_t BgL_arg2773z00_792;

					{	/* Object/creator.scm 181 */
						obj_t BgL_arg2774z00_793;

						obj_t BgL_arg2775z00_794;

						{	/* Object/creator.scm 181 */
							obj_t BgL_res3494z00_1894;

							{	/* Object/creator.scm 181 */
								obj_t BgL_symbolz00_1892;

								BgL_symbolz00_1892 = CNST_TABLE_REF(((long) 3));
								{	/* Object/creator.scm 181 */
									obj_t BgL_arg2063z00_1893;

									BgL_arg2063z00_1893 = SYMBOL_TO_STRING(BgL_symbolz00_1892);
									BgL_res3494z00_1894 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1893);
							}}
							BgL_arg2774z00_793 = BgL_res3494z00_1894;
						}
						{	/* Object/creator.scm 181 */
							obj_t BgL_arg2778z00_797;

							{
								BgL_typez00_bglt BgL_auxz00_2524;

								BgL_auxz00_2524 = (BgL_typez00_bglt) (BgL_classz00_27);
								BgL_arg2778z00_797 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2524))->BgL_idz00);
							}
							{	/* Object/creator.scm 181 */
								obj_t BgL_res3495z00_1898;

								{	/* Object/creator.scm 181 */
									obj_t BgL_arg2063z00_1897;

									BgL_arg2063z00_1897 = SYMBOL_TO_STRING(BgL_arg2778z00_797);
									BgL_res3495z00_1898 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1897);
								}
								BgL_arg2775z00_794 = BgL_res3495z00_1898;
						}}
						{	/* Object/creator.scm 181 */
							obj_t BgL_list2776z00_795;

							{	/* Object/creator.scm 181 */
								obj_t BgL_arg2777z00_796;

								BgL_arg2777z00_796 = MAKE_PAIR(BgL_arg2775z00_794, BNIL);
								BgL_list2776z00_795 =
									MAKE_PAIR(BgL_arg2774z00_793, BgL_arg2777z00_796);
							}
							BgL_arg2773z00_792 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2776z00_795);
					}}
					BgL_mkzd2idzd2_782 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg2773z00_792));
				}
				{	/* Object/creator.scm 181 */
					obj_t BgL_mkzd2tidzd2_783;

					{	/* Object/creator.scm 182 */
						obj_t BgL_arg2771z00_791;

						{
							BgL_typez00_bglt BgL_auxz00_2534;

							BgL_auxz00_2534 = (BgL_typez00_bglt) (BgL_classz00_27);
							BgL_arg2771z00_791 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2534))->BgL_idz00);
						}
						BgL_mkzd2tidzd2_783 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_mkzd2idzd2_782,
							BgL_arg2771z00_791);
					}
					{	/* Object/creator.scm 182 */
						obj_t BgL_fzd2idszd2_784;

						{	/* Object/creator.scm 183 */
							obj_t BgL_arg2770z00_790;

							{
								obj_t BgL_auxz00_2538;

								{	/* Object/creator.scm 183 */
									BgL_objectz00_bglt BgL_auxz00_2539;

									BgL_auxz00_2539 = (BgL_objectz00_bglt) (BgL_classz00_27);
									BgL_auxz00_2538 = BGL_OBJECT_WIDENING(BgL_auxz00_2539);
								}
								BgL_arg2770z00_790 =
									(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2538))->BgL_slotsz00);
							}
							BgL_fzd2idszd2_784 =
								BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
								(BgL_arg2770z00_790);
						}
						{	/* Object/creator.scm 183 */
							obj_t BgL_fzd2tidszd2_785;

							{	/* Object/creator.scm 184 */
								obj_t BgL_arg2769z00_789;

								{
									obj_t BgL_auxz00_2544;

									{	/* Object/creator.scm 184 */
										BgL_objectz00_bglt BgL_auxz00_2545;

										BgL_auxz00_2545 = (BgL_objectz00_bglt) (BgL_classz00_27);
										BgL_auxz00_2544 = BGL_OBJECT_WIDENING(BgL_auxz00_2545);
									}
									BgL_arg2769z00_789 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2544))->
										BgL_slotsz00);
								}
								BgL_fzd2tidszd2_785 =
									BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
									(BgL_fzd2idszd2_784, BgL_arg2769z00_789);
							}
							{	/* Object/creator.scm 184 */

								{	/* Object/creator.scm 186 */
									obj_t BgL_arg2766z00_786;

									BgL_arg2766z00_786 =
										MAKE_PAIR(BgL_mkzd2tidzd2_783,
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_fzd2tidszd2_785, BNIL));
									BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_29,
										BgL_arg2766z00_786, BNIL);
								}
								return BNIL;
							}
						}
					}
				}
			}
		}
	}



/* import-wide-class-creators */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2widezd2classzd2creatorszd2zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_30, obj_t BgL_srczd2defzd2_31,
		obj_t BgL_modulez00_32)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 193 */
			BGl_importzd2classzd2nilz00zzobject_nilz00(BgL_classz00_30,
				BgL_srczd2defzd2_31, BgL_modulez00_32);
			{	/* Object/creator.scm 195 */
				bool_t BgL_testz00_2554;

				{
					obj_t BgL_auxz00_2555;

					{	/* Object/creator.scm 195 */
						BgL_objectz00_bglt BgL_auxz00_2556;

						BgL_auxz00_2556 = (BgL_objectz00_bglt) (BgL_classz00_30);
						BgL_auxz00_2555 = BGL_OBJECT_WIDENING(BgL_auxz00_2556);
					}
					BgL_testz00_2554 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2555))->BgL_abstractzf3zf3);
				}
				if (BgL_testz00_2554)
					{	/* Object/creator.scm 195 */
						return BNIL;
					}
				else
					{	/* Object/creator.scm 195 */
						if (BGl_inlinezd2creatorszf3z21zzobject_creatorz00())
							{	/* Object/creator.scm 197 */
								BGl_importzd2noinlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
									(BgL_classz00_30, BgL_srczd2defzd2_31, BgL_modulez00_32);
								return
									BGl_genzd2inlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
									(BgL_classz00_30, BgL_srczd2defzd2_31,
									CNST_TABLE_REF(((long) 10)));
							}
						else
							{	/* Object/creator.scm 197 */
								BGl_importzd2noinlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
									(BgL_classz00_30, BgL_srczd2defzd2_31, BgL_modulez00_32);
								return
									BGl_importzd2inlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
									(BgL_classz00_30, BgL_srczd2defzd2_31, BgL_modulez00_32);
							}
					}
			}
		}
	}



/* _import-wide-class-creators */
	obj_t BGl__importzd2widezd2classzd2creatorszd2zzobject_creatorz00(obj_t
		BgL_envz00_2194, obj_t BgL_classz00_2195, obj_t BgL_srczd2defzd2_2196,
		obj_t BgL_modulez00_2197)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 193 */
			return
				BGl_importzd2widezd2classzd2creatorszd2zzobject_creatorz00(
				(BgL_tclassz00_bglt) (BgL_classz00_2195), BgL_srczd2defzd2_2196,
				BgL_modulez00_2197);
		}
	}



/* import-inline-wide-class-creators */
	obj_t
		BGl_importzd2inlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_33, obj_t BgL_srczd2defzd2_34,
		obj_t BgL_modulez00_35)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 209 */
			{	/* Object/creator.scm 211 */
				obj_t BgL_mkzd2idzd2_801;

				{	/* Object/creator.scm 211 */
					obj_t BgL_arg2815z00_844;

					{	/* Object/creator.scm 211 */
						obj_t BgL_arg2816z00_845;

						obj_t BgL_arg2818z00_846;

						{	/* Object/creator.scm 211 */
							obj_t BgL_res3496z00_1906;

							{	/* Object/creator.scm 211 */
								obj_t BgL_symbolz00_1904;

								BgL_symbolz00_1904 = CNST_TABLE_REF(((long) 3));
								{	/* Object/creator.scm 211 */
									obj_t BgL_arg2063z00_1905;

									BgL_arg2063z00_1905 = SYMBOL_TO_STRING(BgL_symbolz00_1904);
									BgL_res3496z00_1906 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1905);
							}}
							BgL_arg2816z00_845 = BgL_res3496z00_1906;
						}
						{	/* Object/creator.scm 211 */
							obj_t BgL_arg2821z00_849;

							{
								BgL_typez00_bglt BgL_auxz00_2572;

								BgL_auxz00_2572 = (BgL_typez00_bglt) (BgL_classz00_33);
								BgL_arg2821z00_849 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2572))->BgL_idz00);
							}
							{	/* Object/creator.scm 211 */
								obj_t BgL_res3497z00_1910;

								{	/* Object/creator.scm 211 */
									obj_t BgL_arg2063z00_1909;

									BgL_arg2063z00_1909 = SYMBOL_TO_STRING(BgL_arg2821z00_849);
									BgL_res3497z00_1910 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1909);
								}
								BgL_arg2818z00_846 = BgL_res3497z00_1910;
						}}
						{	/* Object/creator.scm 211 */
							obj_t BgL_list2819z00_847;

							{	/* Object/creator.scm 211 */
								obj_t BgL_arg2820z00_848;

								BgL_arg2820z00_848 = MAKE_PAIR(BgL_arg2818z00_846, BNIL);
								BgL_list2819z00_847 =
									MAKE_PAIR(BgL_arg2816z00_845, BgL_arg2820z00_848);
							}
							BgL_arg2815z00_844 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2819z00_847);
					}}
					BgL_mkzd2idzd2_801 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg2815z00_844));
				}
				{	/* Object/creator.scm 211 */
					obj_t BgL_fillzd2idzd2_802;

					{	/* Object/creator.scm 212 */
						obj_t BgL_arg2809z00_838;

						obj_t BgL_arg2810z00_839;

						obj_t BgL_arg2811z00_840;

						BgL_arg2809z00_838 = CNST_TABLE_REF(((long) 1));
						{
							BgL_typez00_bglt BgL_auxz00_2583;

							BgL_auxz00_2583 = (BgL_typez00_bglt) (BgL_classz00_33);
							BgL_arg2810z00_839 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2583))->BgL_idz00);
						}
						BgL_arg2811z00_840 = CNST_TABLE_REF(((long) 2));
						{	/* Object/creator.scm 212 */
							obj_t BgL_list2812z00_841;

							{	/* Object/creator.scm 212 */
								obj_t BgL_arg2813z00_842;

								{	/* Object/creator.scm 212 */
									obj_t BgL_arg2814z00_843;

									BgL_arg2814z00_843 = MAKE_PAIR(BgL_arg2811z00_840, BNIL);
									BgL_arg2813z00_842 =
										MAKE_PAIR(BgL_arg2810z00_839, BgL_arg2814z00_843);
								}
								BgL_list2812z00_841 =
									MAKE_PAIR(BgL_arg2809z00_838, BgL_arg2813z00_842);
							}
							BgL_fillzd2idzd2_802 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list2812z00_841);
					}}
					{	/* Object/creator.scm 212 */
						obj_t BgL_mkzd2tidzd2_803;

						{	/* Object/creator.scm 213 */
							obj_t BgL_arg2808z00_837;

							{
								BgL_typez00_bglt BgL_auxz00_2591;

								BgL_auxz00_2591 = (BgL_typez00_bglt) (BgL_classz00_33);
								BgL_arg2808z00_837 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2591))->BgL_idz00);
							}
							BgL_mkzd2tidzd2_803 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_mkzd2idzd2_801,
								BgL_arg2808z00_837);
						}
						{	/* Object/creator.scm 213 */
							obj_t BgL_alloczd2widezd2_804;

							{	/* Object/creator.scm 214 */
								obj_t BgL_arg2802z00_831;

								{	/* Object/creator.scm 214 */
									obj_t BgL_arg2803z00_832;

									obj_t BgL_arg2804z00_833;

									{	/* Object/creator.scm 214 */
										obj_t BgL_res3498z00_1916;

										{	/* Object/creator.scm 214 */
											obj_t BgL_symbolz00_1914;

											BgL_symbolz00_1914 = CNST_TABLE_REF(((long) 13));
											{	/* Object/creator.scm 214 */
												obj_t BgL_arg2063z00_1915;

												BgL_arg2063z00_1915 =
													SYMBOL_TO_STRING(BgL_symbolz00_1914);
												BgL_res3498z00_1916 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1915);
										}}
										BgL_arg2803z00_832 = BgL_res3498z00_1916;
									}
									{	/* Object/creator.scm 214 */
										obj_t BgL_arg2807z00_836;

										{
											BgL_typez00_bglt BgL_auxz00_2598;

											BgL_auxz00_2598 = (BgL_typez00_bglt) (BgL_classz00_33);
											BgL_arg2807z00_836 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2598))->BgL_idz00);
										}
										{	/* Object/creator.scm 214 */
											obj_t BgL_res3499z00_1920;

											{	/* Object/creator.scm 214 */
												obj_t BgL_arg2063z00_1919;

												BgL_arg2063z00_1919 =
													SYMBOL_TO_STRING(BgL_arg2807z00_836);
												BgL_res3499z00_1920 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1919);
											}
											BgL_arg2804z00_833 = BgL_res3499z00_1920;
									}}
									{	/* Object/creator.scm 214 */
										obj_t BgL_list2805z00_834;

										{	/* Object/creator.scm 214 */
											obj_t BgL_arg2806z00_835;

											BgL_arg2806z00_835 = MAKE_PAIR(BgL_arg2804z00_833, BNIL);
											BgL_list2805z00_834 =
												MAKE_PAIR(BgL_arg2803z00_832, BgL_arg2806z00_835);
										}
										BgL_arg2802z00_831 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2805z00_834);
								}}
								BgL_alloczd2widezd2_804 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2802z00_831));
							}
							{	/* Object/creator.scm 214 */
								obj_t BgL_talloczd2widezd2_805;

								{	/* Object/creator.scm 215 */
									obj_t BgL_arg2801z00_830;

									{
										BgL_typez00_bglt BgL_auxz00_2608;

										BgL_auxz00_2608 = (BgL_typez00_bglt) (BgL_classz00_33);
										BgL_arg2801z00_830 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2608))->BgL_idz00);
									}
									BgL_talloczd2widezd2_805 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_alloczd2widezd2_804, BgL_arg2801z00_830);
								}
								{	/* Object/creator.scm 215 */
									obj_t BgL_fzd2idszd2_806;

									{	/* Object/creator.scm 216 */
										obj_t BgL_arg2800z00_829;

										{
											obj_t BgL_auxz00_2612;

											{	/* Object/creator.scm 216 */
												BgL_objectz00_bglt BgL_auxz00_2613;

												BgL_auxz00_2613 =
													(BgL_objectz00_bglt) (BgL_classz00_33);
												BgL_auxz00_2612 = BGL_OBJECT_WIDENING(BgL_auxz00_2613);
											}
											BgL_arg2800z00_829 =
												(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2612))->
												BgL_slotsz00);
										}
										BgL_fzd2idszd2_806 =
											BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
											(BgL_arg2800z00_829);
									}
									{	/* Object/creator.scm 216 */
										obj_t BgL_fzd2tidszd2_807;

										{	/* Object/creator.scm 217 */
											obj_t BgL_arg2799z00_828;

											{
												obj_t BgL_auxz00_2618;

												{	/* Object/creator.scm 217 */
													BgL_objectz00_bglt BgL_auxz00_2619;

													BgL_auxz00_2619 =
														(BgL_objectz00_bglt) (BgL_classz00_33);
													BgL_auxz00_2618 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2619);
												}
												BgL_arg2799z00_828 =
													(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2618))->
													BgL_slotsz00);
											}
											BgL_fzd2tidszd2_807 =
												BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
												(BgL_fzd2idszd2_806, BgL_arg2799z00_828);
										}
										{	/* Object/creator.scm 217 */
											obj_t BgL_toz00_808;

											{	/* Object/creator.scm 218 */
												obj_t BgL_arg2796z00_825;

												obj_t BgL_arg2797z00_826;

												BgL_arg2796z00_825 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 12))));
												{
													BgL_typez00_bglt BgL_auxz00_2627;

													BgL_auxz00_2627 =
														(BgL_typez00_bglt) (BgL_classz00_33);
													BgL_arg2797z00_826 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_2627))->
														BgL_idz00);
												}
												BgL_toz00_808 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg2796z00_825, BgL_arg2797z00_826);
											}
											{	/* Object/creator.scm 218 */
												obj_t BgL_alloczd2idzd2_809;

												{	/* Object/creator.scm 219 */
													obj_t BgL_arg2790z00_819;

													{	/* Object/creator.scm 219 */
														obj_t BgL_arg2791z00_820;

														obj_t BgL_arg2792z00_821;

														{	/* Object/creator.scm 219 */
															obj_t BgL_res3500z00_1928;

															{	/* Object/creator.scm 219 */
																obj_t BgL_symbolz00_1926;

																BgL_symbolz00_1926 = CNST_TABLE_REF(((long) 7));
																{	/* Object/creator.scm 219 */
																	obj_t BgL_arg2063z00_1927;

																	BgL_arg2063z00_1927 =
																		SYMBOL_TO_STRING(BgL_symbolz00_1926);
																	BgL_res3500z00_1928 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_1927);
															}}
															BgL_arg2791z00_820 = BgL_res3500z00_1928;
														}
														{	/* Object/creator.scm 219 */
															obj_t BgL_arg2795z00_824;

															{
																BgL_typez00_bglt BgL_auxz00_2634;

																BgL_auxz00_2634 =
																	(BgL_typez00_bglt) (BgL_classz00_33);
																BgL_arg2795z00_824 =
																	(((BgL_typez00_bglt) CREF(BgL_auxz00_2634))->
																	BgL_idz00);
															}
															{	/* Object/creator.scm 219 */
																obj_t BgL_res3501z00_1932;

																{	/* Object/creator.scm 219 */
																	obj_t BgL_arg2063z00_1931;

																	BgL_arg2063z00_1931 =
																		SYMBOL_TO_STRING(BgL_arg2795z00_824);
																	BgL_res3501z00_1932 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_1931);
																}
																BgL_arg2792z00_821 = BgL_res3501z00_1932;
														}}
														{	/* Object/creator.scm 219 */
															obj_t BgL_list2793z00_822;

															{	/* Object/creator.scm 219 */
																obj_t BgL_arg2794z00_823;

																BgL_arg2794z00_823 =
																	MAKE_PAIR(BgL_arg2792z00_821, BNIL);
																BgL_list2793z00_822 =
																	MAKE_PAIR(BgL_arg2791z00_820,
																	BgL_arg2794z00_823);
															}
															BgL_arg2790z00_819 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2793z00_822);
													}}
													BgL_alloczd2idzd2_809 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2790z00_819));
												}
												{	/* Object/creator.scm 219 */
													obj_t BgL_alloczd2tidzd2_810;

													{	/* Object/creator.scm 220 */
														obj_t BgL_arg2789z00_818;

														{
															BgL_typez00_bglt BgL_auxz00_2644;

															BgL_auxz00_2644 =
																(BgL_typez00_bglt) (BgL_classz00_33);
															BgL_arg2789z00_818 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_2644))->
																BgL_idz00);
														}
														BgL_alloczd2tidzd2_810 =
															BGl_makezd2typedzd2identz00zzast_identz00
															(BgL_alloczd2idzd2_809, BgL_arg2789z00_818);
													}
													{	/* Object/creator.scm 220 */

														{	/* Object/creator.scm 222 */
															obj_t BgL_arg2782z00_811;

															BgL_arg2782z00_811 =
																MAKE_PAIR(BgL_alloczd2tidzd2_810, BNIL);
															BGl_importzd2parserzd2zzmodule_impusez00
																(BgL_modulez00_35, BgL_arg2782z00_811, BNIL);
														}
														{	/* Object/creator.scm 223 */
															obj_t BgL_arg2784z00_813;

															{	/* Object/creator.scm 223 */
																obj_t BgL_arg2786z00_815;

																{	/* Object/creator.scm 223 */
																	obj_t BgL_arg2787z00_816;

																	BgL_arg2787z00_816 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_fzd2tidszd2_807, BNIL);
																	{	/* Object/creator.scm 223 */
																		obj_t BgL_list2788z00_817;

																		BgL_list2788z00_817 =
																			MAKE_PAIR(BgL_arg2787z00_816, BNIL);
																		BgL_arg2786z00_815 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_toz00_808, BgL_list2788z00_817);
																}}
																BgL_arg2784z00_813 =
																	MAKE_PAIR(BgL_fillzd2idzd2_802,
																	BgL_arg2786z00_815);
															}
															BGl_importzd2parserzd2zzmodule_impusez00
																(BgL_modulez00_35, BgL_arg2784z00_813, BNIL);
														}
														return BNIL;
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
	}



/* import-noinline-wide-class-creators */
	obj_t
		BGl_importzd2noinlinezd2widezd2classzd2creatorsz00zzobject_creatorz00
		(BgL_tclassz00_bglt BgL_classz00_36, obj_t BgL_srczd2defzd2_37,
		obj_t BgL_modulez00_38)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 230 */
			{	/* Object/creator.scm 232 */
				obj_t BgL_mkzd2idzd2_851;

				{	/* Object/creator.scm 232 */
					obj_t BgL_arg2848z00_886;

					{	/* Object/creator.scm 232 */
						obj_t BgL_arg2849z00_887;

						obj_t BgL_arg2850z00_888;

						{	/* Object/creator.scm 232 */
							obj_t BgL_res3502z00_1937;

							{	/* Object/creator.scm 232 */
								obj_t BgL_symbolz00_1935;

								BgL_symbolz00_1935 = CNST_TABLE_REF(((long) 3));
								{	/* Object/creator.scm 232 */
									obj_t BgL_arg2063z00_1936;

									BgL_arg2063z00_1936 = SYMBOL_TO_STRING(BgL_symbolz00_1935);
									BgL_res3502z00_1937 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1936);
							}}
							BgL_arg2849z00_887 = BgL_res3502z00_1937;
						}
						{	/* Object/creator.scm 232 */
							obj_t BgL_arg2854z00_891;

							{
								BgL_typez00_bglt BgL_auxz00_2658;

								BgL_auxz00_2658 = (BgL_typez00_bglt) (BgL_classz00_36);
								BgL_arg2854z00_891 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2658))->BgL_idz00);
							}
							{	/* Object/creator.scm 232 */
								obj_t BgL_res3503z00_1941;

								{	/* Object/creator.scm 232 */
									obj_t BgL_arg2063z00_1940;

									BgL_arg2063z00_1940 = SYMBOL_TO_STRING(BgL_arg2854z00_891);
									BgL_res3503z00_1941 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1940);
								}
								BgL_arg2850z00_888 = BgL_res3503z00_1941;
						}}
						{	/* Object/creator.scm 232 */
							obj_t BgL_list2851z00_889;

							{	/* Object/creator.scm 232 */
								obj_t BgL_arg2852z00_890;

								BgL_arg2852z00_890 = MAKE_PAIR(BgL_arg2850z00_888, BNIL);
								BgL_list2851z00_889 =
									MAKE_PAIR(BgL_arg2849z00_887, BgL_arg2852z00_890);
							}
							BgL_arg2848z00_886 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2851z00_889);
					}}
					BgL_mkzd2idzd2_851 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg2848z00_886));
				}
				{	/* Object/creator.scm 232 */
					obj_t BgL_fillzd2idzd2_852;

					{	/* Object/creator.scm 233 */
						obj_t BgL_arg2842z00_880;

						obj_t BgL_arg2843z00_881;

						obj_t BgL_arg2844z00_882;

						BgL_arg2842z00_880 = CNST_TABLE_REF(((long) 1));
						{
							BgL_typez00_bglt BgL_auxz00_2669;

							BgL_auxz00_2669 = (BgL_typez00_bglt) (BgL_classz00_36);
							BgL_arg2843z00_881 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2669))->BgL_idz00);
						}
						BgL_arg2844z00_882 = CNST_TABLE_REF(((long) 2));
						{	/* Object/creator.scm 233 */
							obj_t BgL_list2845z00_883;

							{	/* Object/creator.scm 233 */
								obj_t BgL_arg2846z00_884;

								{	/* Object/creator.scm 233 */
									obj_t BgL_arg2847z00_885;

									BgL_arg2847z00_885 = MAKE_PAIR(BgL_arg2844z00_882, BNIL);
									BgL_arg2846z00_884 =
										MAKE_PAIR(BgL_arg2843z00_881, BgL_arg2847z00_885);
								}
								BgL_list2845z00_883 =
									MAKE_PAIR(BgL_arg2842z00_880, BgL_arg2846z00_884);
							}
							BgL_fillzd2idzd2_852 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list2845z00_883);
					}}
					{	/* Object/creator.scm 233 */
						obj_t BgL_mkzd2tidzd2_853;

						{	/* Object/creator.scm 234 */
							obj_t BgL_arg2841z00_879;

							{
								BgL_typez00_bglt BgL_auxz00_2677;

								BgL_auxz00_2677 = (BgL_typez00_bglt) (BgL_classz00_36);
								BgL_arg2841z00_879 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2677))->BgL_idz00);
							}
							BgL_mkzd2tidzd2_853 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_mkzd2idzd2_851,
								BgL_arg2841z00_879);
						}
						{	/* Object/creator.scm 234 */
							obj_t BgL_alloczd2widezd2_854;

							{	/* Object/creator.scm 235 */
								obj_t BgL_arg2834z00_873;

								{	/* Object/creator.scm 235 */
									obj_t BgL_arg2835z00_874;

									obj_t BgL_arg2836z00_875;

									{	/* Object/creator.scm 235 */
										obj_t BgL_res3504z00_1947;

										{	/* Object/creator.scm 235 */
											obj_t BgL_symbolz00_1945;

											BgL_symbolz00_1945 = CNST_TABLE_REF(((long) 13));
											{	/* Object/creator.scm 235 */
												obj_t BgL_arg2063z00_1946;

												BgL_arg2063z00_1946 =
													SYMBOL_TO_STRING(BgL_symbolz00_1945);
												BgL_res3504z00_1947 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1946);
										}}
										BgL_arg2835z00_874 = BgL_res3504z00_1947;
									}
									{	/* Object/creator.scm 235 */
										obj_t BgL_arg2839z00_878;

										{
											BgL_typez00_bglt BgL_auxz00_2684;

											BgL_auxz00_2684 = (BgL_typez00_bglt) (BgL_classz00_36);
											BgL_arg2839z00_878 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2684))->BgL_idz00);
										}
										{	/* Object/creator.scm 235 */
											obj_t BgL_res3505z00_1951;

											{	/* Object/creator.scm 235 */
												obj_t BgL_arg2063z00_1950;

												BgL_arg2063z00_1950 =
													SYMBOL_TO_STRING(BgL_arg2839z00_878);
												BgL_res3505z00_1951 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1950);
											}
											BgL_arg2836z00_875 = BgL_res3505z00_1951;
									}}
									{	/* Object/creator.scm 235 */
										obj_t BgL_list2837z00_876;

										{	/* Object/creator.scm 235 */
											obj_t BgL_arg2838z00_877;

											BgL_arg2838z00_877 = MAKE_PAIR(BgL_arg2836z00_875, BNIL);
											BgL_list2837z00_876 =
												MAKE_PAIR(BgL_arg2835z00_874, BgL_arg2838z00_877);
										}
										BgL_arg2834z00_873 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2837z00_876);
								}}
								BgL_alloczd2widezd2_854 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2834z00_873));
							}
							{	/* Object/creator.scm 235 */
								obj_t BgL_tidz00_855;

								if (CBOOL(BGl_za2sawza2z00zzengine_paramz00))
									{	/* Object/creator.scm 240 */
										obj_t BgL_arg2833z00_872;

										{
											BgL_typez00_bglt BgL_auxz00_2696;

											BgL_auxz00_2696 = (BgL_typez00_bglt) (BgL_classz00_36);
											BgL_arg2833z00_872 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2696))->BgL_idz00);
										}
										BgL_tidz00_855 =
											BGl_sawzd2widezd2classzd2idzd2zzobject_classz00
											(BgL_arg2833z00_872);
									}
								else
									{	/* Object/creator.scm 240 */
										BgL_tidz00_855 = CNST_TABLE_REF(((long) 14));
									}
								{	/* Object/creator.scm 240 */
									obj_t BgL_talloczd2widezd2_856;

									BgL_talloczd2widezd2_856 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_alloczd2widezd2_854, BgL_tidz00_855);
									{	/* Object/creator.scm 241 */
										obj_t BgL_fzd2idszd2_857;

										{	/* Object/creator.scm 242 */
											obj_t BgL_arg2832z00_871;

											{
												obj_t BgL_auxz00_2702;

												{	/* Object/creator.scm 242 */
													BgL_objectz00_bglt BgL_auxz00_2703;

													BgL_auxz00_2703 =
														(BgL_objectz00_bglt) (BgL_classz00_36);
													BgL_auxz00_2702 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2703);
												}
												BgL_arg2832z00_871 =
													(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2702))->
													BgL_slotsz00);
											}
											BgL_fzd2idszd2_857 =
												BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
												(BgL_arg2832z00_871);
										}
										{	/* Object/creator.scm 242 */
											obj_t BgL_fzd2tidszd2_858;

											{	/* Object/creator.scm 243 */
												obj_t BgL_arg2831z00_870;

												{
													obj_t BgL_auxz00_2708;

													{	/* Object/creator.scm 243 */
														BgL_objectz00_bglt BgL_auxz00_2709;

														BgL_auxz00_2709 =
															(BgL_objectz00_bglt) (BgL_classz00_36);
														BgL_auxz00_2708 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2709);
													}
													BgL_arg2831z00_870 =
														(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2708))->
														BgL_slotsz00);
												}
												BgL_fzd2tidszd2_858 =
													BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
													(BgL_fzd2idszd2_857, BgL_arg2831z00_870);
											}
											{	/* Object/creator.scm 243 */
												obj_t BgL_sslotsz00_859;

												{	/* Object/creator.scm 244 */
													BgL_tclassz00_bglt BgL_obj2232z00_1957;

													{	/* Object/creator.scm 244 */
														obj_t BgL_auxz00_2714;

														{
															obj_t BgL_auxz00_2715;

															{	/* Object/creator.scm 244 */
																BgL_objectz00_bglt BgL_auxz00_2716;

																BgL_auxz00_2716 =
																	(BgL_objectz00_bglt) (BgL_classz00_36);
																BgL_auxz00_2715 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2716);
															}
															BgL_auxz00_2714 =
																(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2715))->
																BgL_itszd2superzd2);
														}
														BgL_obj2232z00_1957 =
															(BgL_tclassz00_bglt) (BgL_auxz00_2714);
													}
													{
														obj_t BgL_auxz00_2721;

														{	/* Object/creator.scm 244 */
															BgL_objectz00_bglt BgL_auxz00_2722;

															BgL_auxz00_2722 =
																(BgL_objectz00_bglt) (BgL_obj2232z00_1957);
															BgL_auxz00_2721 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2722);
														}
														BgL_sslotsz00_859 =
															(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2721))->
															BgL_slotsz00);
												}}
												{	/* Object/creator.scm 244 */
													obj_t BgL_szd2idszd2_860;

													BgL_szd2idszd2_860 =
														BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
														(BgL_sslotsz00_859);
													{	/* Object/creator.scm 245 */
														obj_t BgL_szd2tidszd2_861;

														BgL_szd2tidszd2_861 =
															BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
															(BgL_szd2idszd2_860, BgL_sslotsz00_859);
														{	/* Object/creator.scm 246 */

															{	/* Object/creator.scm 248 */
																obj_t BgL_arg2822z00_862;

																BgL_arg2822z00_862 =
																	MAKE_PAIR(BgL_mkzd2tidzd2_853,
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_szd2tidszd2_861,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_fzd2tidszd2_858, BNIL)));
																BGl_importzd2parserzd2zzmodule_impusez00
																	(BgL_modulez00_38, BgL_arg2822z00_862, BNIL);
															}
															{	/* Object/creator.scm 249 */
																obj_t BgL_arg2827z00_866;

																BgL_arg2827z00_866 =
																	MAKE_PAIR(BgL_talloczd2widezd2_856,
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_fzd2tidszd2_858, BNIL));
																BGl_importzd2parserzd2zzmodule_impusez00
																	(BgL_modulez00_38, BgL_arg2827z00_866, BNIL);
															}
															return BNIL;
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
		}
	}



/* import-java-class-creator */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00(BgL_jclassz00_bglt
		BgL_classz00_39, obj_t BgL_constrsz00_40, obj_t BgL_srczd2defzd2_41)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 256 */
			if (PAIRP(BgL_constrsz00_40))
				{	/* Object/creator.scm 257 */
					return
						BGl_genzd2javazd2classzd2creatorzd2zzobject_creatorz00
						(BgL_classz00_39, BgL_srczd2defzd2_41);
				}
			else
				{	/* Object/creator.scm 257 */
					return BNIL;
				}
		}
	}



/* _import-java-class-creator */
	obj_t BGl__importzd2javazd2classzd2creatorzd2zzobject_creatorz00(obj_t
		BgL_envz00_2198, obj_t BgL_classz00_2199, obj_t BgL_constrsz00_2200,
		obj_t BgL_srczd2defzd2_2201)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 256 */
			return
				BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00(
				(BgL_jclassz00_bglt) (BgL_classz00_2199), BgL_constrsz00_2200,
				BgL_srczd2defzd2_2201);
		}
	}



/* gen-java-class-constructors */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00
		(BgL_jclassz00_bglt BgL_classz00_42, obj_t BgL_constrsz00_43,
		obj_t BgL_srczd2defzd2_44)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 264 */
			if (NULLP(BgL_constrsz00_43))
				{	/* Object/creator.scm 294 */
					return BNIL;
				}
			else
				{	/* Object/creator.scm 294 */
					obj_t BgL_head2558z00_896;

					BgL_head2558z00_896 =
						MAKE_PAIR(BGl_genzd2onezd2constructorz00zzobject_creatorz00
						(BgL_constrsz00_43, BgL_classz00_42, CAR(BgL_constrsz00_43)), BNIL);
					{	/* Object/creator.scm 294 */
						obj_t BgL_g2561z00_897;

						BgL_g2561z00_897 = CDR(BgL_constrsz00_43);
						{
							obj_t BgL_l2556z00_899;

							obj_t BgL_tail2559z00_900;

							BgL_l2556z00_899 = BgL_g2561z00_897;
							BgL_tail2559z00_900 = BgL_head2558z00_896;
						BgL_zc3anonymousza32857ze3z83_901:
							if (NULLP(BgL_l2556z00_899))
								{	/* Object/creator.scm 294 */
									return BgL_head2558z00_896;
								}
							else
								{	/* Object/creator.scm 294 */
									obj_t BgL_newtail2560z00_903;

									BgL_newtail2560z00_903 =
										MAKE_PAIR(BGl_genzd2onezd2constructorz00zzobject_creatorz00
										(BgL_constrsz00_43, BgL_classz00_42, CAR(BgL_l2556z00_899)),
										BNIL);
									SET_CDR(BgL_tail2559z00_900, BgL_newtail2560z00_903);
									{
										obj_t BgL_tail2559z00_2754;

										obj_t BgL_l2556z00_2752;

										BgL_l2556z00_2752 = CDR(BgL_l2556z00_899);
										BgL_tail2559z00_2754 = BgL_newtail2560z00_903;
										BgL_tail2559z00_900 = BgL_tail2559z00_2754;
										BgL_l2556z00_899 = BgL_l2556z00_2752;
										goto BgL_zc3anonymousza32857ze3z83_901;
									}
								}
						}
					}
				}
		}
	}



/* gen-one-constructor */
	obj_t BGl_genzd2onezd2constructorz00zzobject_creatorz00(obj_t
		BgL_constrsz00_2209, BgL_jclassz00_bglt BgL_classz00_2208,
		obj_t BgL_constrz00_912)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 293 */
			{
				obj_t BgL_identz00_914;

				obj_t BgL_argszd2typezd2_915;

				if (PAIRP(BgL_constrz00_912))
					{	/* Object/creator.scm 293 */
						BgL_identz00_914 = CAR(BgL_constrz00_912);
						BgL_argszd2typezd2_915 = CDR(BgL_constrz00_912);
						{	/* Object/creator.scm 271 */
							obj_t BgL_jidz00_921;

							{
								BgL_typez00_bglt BgL_auxz00_2757;

								BgL_auxz00_2757 = (BgL_typez00_bglt) (BgL_classz00_2208);
								BgL_jidz00_921 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2757))->BgL_idz00);
							}
							{	/* Object/creator.scm 271 */
								obj_t BgL_locz00_922;

								BgL_locz00_922 =
									BGl_findzd2locationzd2zztools_locationz00
									(BgL_constrsz00_2209);
								{	/* Object/creator.scm 272 */
									obj_t BgL_cidz00_923;

									BgL_cidz00_923 =
										BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_identz00_914,
										BgL_locz00_922);
									{	/* Object/creator.scm 273 */
										obj_t BgL_tidz00_924;

										{	/* Object/creator.scm 274 */
											obj_t BgL_arg2928z00_1016;

											{	/* Object/creator.scm 274 */
												obj_t BgL_list2929z00_1017;

												{	/* Object/creator.scm 274 */
													obj_t BgL_arg2930z00_1018;

													{	/* Object/creator.scm 274 */
														obj_t BgL_arg2931z00_1019;

														obj_t BgL_arg2932z00_1020;

														BgL_arg2931z00_1019 = CNST_TABLE_REF(((long) 5));
														BgL_arg2932z00_1020 =
															MAKE_PAIR(BgL_cidz00_923, BNIL);
														BgL_arg2930z00_1018 =
															MAKE_PAIR(BgL_arg2931z00_1019,
															BgL_arg2932z00_1020);
													}
													BgL_list2929z00_1017 =
														MAKE_PAIR(BgL_jidz00_921, BgL_arg2930z00_1018);
												}
												BgL_arg2928z00_1016 =
													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
													(BgL_list2929z00_1017);
											}
											BgL_tidz00_924 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_arg2928z00_1016, BgL_jidz00_921);
										}
										{	/* Object/creator.scm 274 */
											obj_t BgL_argszd2idzd2_925;

											if (NULLP(BgL_argszd2typezd2_915))
												{	/* Object/creator.scm 275 */
													BgL_argszd2idzd2_925 = BNIL;
												}
											else
												{	/* Object/creator.scm 275 */
													obj_t BgL_head2542z00_1002;

													BgL_head2542z00_1002 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l2540z00_1004;

														obj_t BgL_tail2543z00_1005;

														BgL_l2540z00_1004 = BgL_argszd2typezd2_915;
														BgL_tail2543z00_1005 = BgL_head2542z00_1002;
													BgL_zc3anonymousza32922ze3z83_1006:
														if (NULLP(BgL_l2540z00_1004))
															{	/* Object/creator.scm 275 */
																BgL_argszd2idzd2_925 =
																	CDR(BgL_head2542z00_1002);
															}
														else
															{	/* Object/creator.scm 275 */
																obj_t BgL_newtail2544z00_1008;

																{	/* Object/creator.scm 275 */
																	obj_t BgL_arg2925z00_1010;

																	{	/* Object/creator.scm 275 */
																		obj_t BgL_arg2927z00_1013;

																		{	/* Object/creator.scm 275 */

																			{	/* Object/creator.scm 275 */

																				BgL_arg2927z00_1013 =
																					BGl_gensymz00zz__r4_symbols_6_4z00
																					(BFALSE);
																			}
																		}
																		BgL_arg2925z00_1010 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BgL_arg2927z00_1013);
																	}
																	BgL_newtail2544z00_1008 =
																		MAKE_PAIR(BgL_arg2925z00_1010, BNIL);
																}
																SET_CDR(BgL_tail2543z00_1005,
																	BgL_newtail2544z00_1008);
																{
																	obj_t BgL_tail2543z00_2780;

																	obj_t BgL_l2540z00_2778;

																	BgL_l2540z00_2778 = CDR(BgL_l2540z00_1004);
																	BgL_tail2543z00_2780 =
																		BgL_newtail2544z00_1008;
																	BgL_tail2543z00_1005 = BgL_tail2543z00_2780;
																	BgL_l2540z00_1004 = BgL_l2540z00_2778;
																	goto BgL_zc3anonymousza32922ze3z83_1006;
																}
															}
													}
												}
											{	/* Object/creator.scm 275 */
												obj_t BgL_selfz00_926;

												{	/* Object/creator.scm 277 */
													obj_t BgL_arg2920z00_998;

													{	/* Object/creator.scm 277 */

														{	/* Object/creator.scm 277 */

															BgL_arg2920z00_998 =
																BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}
													}
													BgL_selfz00_926 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BgL_arg2920z00_998);
												}
												{	/* Object/creator.scm 277 */
													obj_t BgL_tselfz00_927;

													BgL_tselfz00_927 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_selfz00_926, BgL_jidz00_921);
													{	/* Object/creator.scm 278 */
														obj_t BgL_targsz00_928;

														if (NULLP(BgL_argszd2idzd2_925))
															{	/* Object/creator.scm 279 */
																BgL_targsz00_928 = BNIL;
															}
														else
															{	/* Object/creator.scm 279 */
																obj_t BgL_head2547z00_978;

																BgL_head2547z00_978 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_ll2545z00_980;

																	obj_t BgL_ll2546z00_981;

																	obj_t BgL_tail2548z00_982;

																	BgL_ll2545z00_980 = BgL_argszd2idzd2_925;
																	BgL_ll2546z00_981 = BgL_argszd2typezd2_915;
																	BgL_tail2548z00_982 = BgL_head2547z00_978;
																BgL_zc3anonymousza32909ze3z83_983:
																	if (NULLP(BgL_ll2545z00_980))
																		{	/* Object/creator.scm 279 */
																			BgL_targsz00_928 =
																				CDR(BgL_head2547z00_978);
																		}
																	else
																		{	/* Object/creator.scm 279 */
																			obj_t BgL_newtail2549z00_985;

																			{	/* Object/creator.scm 279 */
																				obj_t BgL_arg2913z00_988;

																				{	/* Object/creator.scm 279 */
																					obj_t BgL_idz00_990;

																					obj_t BgL_typez00_991;

																					BgL_idz00_990 =
																						CAR(BgL_ll2545z00_980);
																					BgL_typez00_991 =
																						CAR(BgL_ll2546z00_981);
																					{	/* Object/creator.scm 280 */
																						obj_t BgL_arg2915z00_992;

																						{	/* Object/creator.scm 280 */
																							obj_t BgL_arg2916z00_993;

																							obj_t BgL_arg2917z00_994;

																							{	/* Object/creator.scm 280 */
																								obj_t BgL_res3506z00_1996;

																								{	/* Object/creator.scm 280 */
																									obj_t BgL_symbolz00_1994;

																									BgL_symbolz00_1994 =
																										BgL_idz00_990;
																									{	/* Object/creator.scm 280 */
																										obj_t BgL_arg2063z00_1995;

																										BgL_arg2063z00_1995 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_1994);
																										BgL_res3506z00_1996 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_1995);
																									}
																								}
																								BgL_arg2916z00_993 =
																									BgL_res3506z00_1996;
																							}
																							{	/* Object/creator.scm 280 */
																								obj_t BgL_res3507z00_1999;

																								{	/* Object/creator.scm 280 */
																									obj_t BgL_symbolz00_1997;

																									BgL_symbolz00_1997 =
																										BgL_typez00_991;
																									{	/* Object/creator.scm 280 */
																										obj_t BgL_arg2063z00_1998;

																										BgL_arg2063z00_1998 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_1997);
																										BgL_res3507z00_1999 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_1998);
																									}
																								}
																								BgL_arg2917z00_994 =
																									BgL_res3507z00_1999;
																							}
																							{	/* Object/creator.scm 280 */
																								obj_t BgL_list2918z00_995;

																								{	/* Object/creator.scm 280 */
																									obj_t BgL_arg2919z00_996;

																									BgL_arg2919z00_996 =
																										MAKE_PAIR
																										(BgL_arg2917z00_994, BNIL);
																									BgL_list2918z00_995 =
																										MAKE_PAIR
																										(BgL_arg2916z00_993,
																										BgL_arg2919z00_996);
																								}
																								BgL_arg2915z00_992 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2918z00_995);
																							}
																						}
																						BgL_arg2913z00_988 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg2915z00_992));
																					}
																				}
																				BgL_newtail2549z00_985 =
																					MAKE_PAIR(BgL_arg2913z00_988, BNIL);
																			}
																			SET_CDR(BgL_tail2548z00_982,
																				BgL_newtail2549z00_985);
																			{
																				obj_t BgL_tail2548z00_2807;

																				obj_t BgL_ll2546z00_2805;

																				obj_t BgL_ll2545z00_2803;

																				BgL_ll2545z00_2803 =
																					CDR(BgL_ll2545z00_980);
																				BgL_ll2546z00_2805 =
																					CDR(BgL_ll2546z00_981);
																				BgL_tail2548z00_2807 =
																					BgL_newtail2549z00_985;
																				BgL_tail2548z00_982 =
																					BgL_tail2548z00_2807;
																				BgL_ll2546z00_981 = BgL_ll2546z00_2805;
																				BgL_ll2545z00_980 = BgL_ll2545z00_2803;
																				goto BgL_zc3anonymousza32909ze3z83_983;
																			}
																		}
																}
															}
														{	/* Object/creator.scm 279 */
															obj_t BgL_defz00_929;

															{	/* Object/creator.scm 282 */
																obj_t BgL_arg2878z00_939;

																obj_t BgL_arg2879z00_940;

																BgL_arg2878z00_939 =
																	CNST_TABLE_REF(((long) 15));
																{	/* Object/creator.scm 282 */
																	obj_t BgL_arg2880z00_941;

																	obj_t BgL_arg2881z00_942;

																	BgL_arg2880z00_941 =
																		MAKE_PAIR(BgL_tidz00_924,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_targsz00_928, BNIL));
																	{	/* Object/creator.scm 284 */
																		obj_t BgL_runner2907z00_974;

																		{	/* Object/creator.scm 284 */
																			obj_t BgL_arg2886z00_947;

																			obj_t BgL_arg2887z00_948;

																			BgL_arg2886z00_947 =
																				CNST_TABLE_REF(((long) 9));
																			{	/* Object/creator.scm 285 */
																				obj_t BgL_arg2892z00_952;

																				obj_t BgL_arg2893z00_953;

																				BgL_arg2892z00_952 =
																					CNST_TABLE_REF(((long) 16));
																				{	/* Object/creator.scm 285 */
																					obj_t BgL_arg2894z00_954;

																					if (NULLP(BgL_argszd2typezd2_915))
																						{	/* Object/creator.scm 285 */
																							BgL_arg2894z00_954 = BNIL;
																						}
																					else
																						{	/* Object/creator.scm 285 */
																							obj_t BgL_head2553z00_959;

																							BgL_head2553z00_959 =
																								MAKE_PAIR(BNIL, BNIL);
																							{
																								obj_t BgL_l2551z00_961;

																								obj_t BgL_tail2554z00_962;

																								BgL_l2551z00_961 =
																									BgL_argszd2typezd2_915;
																								BgL_tail2554z00_962 =
																									BgL_head2553z00_959;
																							BgL_zc3anonymousza32899ze3z83_963:
																								if (NULLP
																									(BgL_l2551z00_961))
																									{	/* Object/creator.scm 285 */
																										BgL_arg2894z00_954 =
																											CDR(BgL_head2553z00_959);
																									}
																								else
																									{	/* Object/creator.scm 285 */
																										obj_t
																											BgL_newtail2555z00_965;
																										{	/* Object/creator.scm 285 */
																											obj_t BgL_arg2902z00_967;

																											{	/* Object/creator.scm 285 */
																												obj_t BgL_az00_969;

																												BgL_az00_969 =
																													CAR(BgL_l2551z00_961);
																												{
																													BgL_typez00_bglt
																														BgL_auxz00_2820;
																													BgL_auxz00_2820 =
																														BGl_typezd2ofzd2idz00zzast_identz00
																														(BgL_az00_969,
																														BgL_locz00_922);
																													BgL_arg2902z00_967 =
																														(((BgL_typez00_bglt)
																															CREF
																															(BgL_auxz00_2820))->
																														BgL_idz00);
																												}
																											}
																											BgL_newtail2555z00_965 =
																												MAKE_PAIR
																												(BgL_arg2902z00_967,
																												BNIL);
																										}
																										SET_CDR(BgL_tail2554z00_962,
																											BgL_newtail2555z00_965);
																										{
																											obj_t
																												BgL_tail2554z00_2827;
																											obj_t BgL_l2551z00_2825;

																											BgL_l2551z00_2825 =
																												CDR(BgL_l2551z00_961);
																											BgL_tail2554z00_2827 =
																												BgL_newtail2555z00_965;
																											BgL_tail2554z00_962 =
																												BgL_tail2554z00_2827;
																											BgL_l2551z00_961 =
																												BgL_l2551z00_2825;
																											goto
																												BgL_zc3anonymousza32899ze3z83_963;
																										}
																									}
																							}
																						}
																					{	/* Object/creator.scm 285 */
																						obj_t BgL_list2897z00_956;

																						BgL_list2897z00_956 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2893z00_953 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2894z00_954,
																							BgL_list2897z00_956);
																					}
																				}
																				BgL_arg2887z00_948 =
																					MAKE_PAIR(BgL_arg2892z00_952,
																					BgL_arg2893z00_953);
																			}
																			{	/* Object/creator.scm 284 */
																				obj_t BgL_list2888z00_949;

																				{	/* Object/creator.scm 284 */
																					obj_t BgL_arg2890z00_950;

																					{	/* Object/creator.scm 284 */
																						obj_t BgL_arg2891z00_951;

																						BgL_arg2891z00_951 =
																							MAKE_PAIR(BgL_argszd2idzd2_925,
																							BNIL);
																						BgL_arg2890z00_950 =
																							MAKE_PAIR(BgL_arg2887z00_948,
																							BgL_arg2891z00_951);
																					}
																					BgL_list2888z00_949 =
																						MAKE_PAIR(BgL_jidz00_921,
																						BgL_arg2890z00_950);
																				}
																				BgL_runner2907z00_974 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2886z00_947,
																					BgL_list2888z00_949);
																			}
																		}
																		{	/* Object/creator.scm 284 */
																			obj_t BgL_aux2905z00_972;

																			BgL_aux2905z00_972 =
																				CAR(BgL_runner2907z00_974);
																			BgL_runner2907z00_974 =
																				CDR(BgL_runner2907z00_974);
																			{	/* Object/creator.scm 284 */
																				obj_t BgL_aux2906z00_973;

																				BgL_aux2906z00_973 =
																					CAR(BgL_runner2907z00_974);
																				BgL_runner2907z00_974 =
																					CDR(BgL_runner2907z00_974);
																				BgL_arg2881z00_942 =
																					BGl_makezd2privatezd2sexpz00zzast_privatez00
																					(BgL_aux2905z00_972,
																					BgL_aux2906z00_973,
																					BgL_runner2907z00_974);
																			}
																		}
																	}
																	{	/* Object/creator.scm 282 */
																		obj_t BgL_list2883z00_944;

																		{	/* Object/creator.scm 282 */
																			obj_t BgL_arg2884z00_945;

																			BgL_arg2884z00_945 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2883z00_944 =
																				MAKE_PAIR(BgL_arg2881z00_942,
																				BgL_arg2884z00_945);
																		}
																		BgL_arg2879z00_940 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2880z00_941, BgL_list2883z00_944);
																	}
																}
																BgL_defz00_929 =
																	MAKE_PAIR(BgL_arg2878z00_939,
																	BgL_arg2879z00_940);
															}
															{	/* Object/creator.scm 282 */
																obj_t BgL_scopez00_930;

																if (BGl_inlinezd2creatorszf3z21zzobject_creatorz00())
																	{	/* Object/creator.scm 290 */
																		BgL_scopez00_930 =
																			CNST_TABLE_REF(((long) 10));
																	}
																else
																	{	/* Object/creator.scm 290 */
																		BgL_scopez00_930 =
																			CNST_TABLE_REF(((long) 17));
																	}
																{	/* Object/creator.scm 290 */
																	obj_t BgL_modz00_931;

																	{	/* Object/creator.scm 291 */
																		obj_t BgL_arg2872z00_933;

																		{	/* Object/creator.scm 291 */
																			obj_t BgL_arg2873z00_934;

																			BgL_arg2873z00_934 =
																				MAKE_PAIR(BgL_tidz00_924,
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_argszd2typezd2_915, BNIL));
																			{	/* Object/creator.scm 291 */
																				obj_t BgL_list2875z00_936;

																				BgL_list2875z00_936 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2872z00_933 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2873z00_934,
																					BgL_list2875z00_936);
																		}}
																		BgL_modz00_931 =
																			MAKE_PAIR(BgL_scopez00_930,
																			BgL_arg2872z00_933);
																	}
																	{	/* Object/creator.scm 291 */

																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_modz00_931);
																		{	/* Object/creator.scm 293 */
																			obj_t BgL_list2871z00_932;

																			BgL_list2871z00_932 =
																				MAKE_PAIR(BgL_constrz00_912, BNIL);
																			return
																				BGl_epairifyza2za2zztools_miscz00
																				(BgL_defz00_929, BgL_list2871z00_932);
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
						}
					}
				else
					{	/* Object/creator.scm 293 */
						return BFALSE;
					}
			}
		}
	}



/* _gen-java-class-constructors */
	obj_t BGl__genzd2javazd2classzd2constructorszd2zzobject_creatorz00(obj_t
		BgL_envz00_2202, obj_t BgL_classz00_2203, obj_t BgL_constrsz00_2204,
		obj_t BgL_srczd2defzd2_2205)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 264 */
			return
				BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00(
				(BgL_jclassz00_bglt) (BgL_classz00_2203), BgL_constrsz00_2204,
				BgL_srczd2defzd2_2205);
		}
	}



/* gen-class-fill! */
	obj_t BGl_genzd2classzd2fillz12z12zzobject_creatorz00(obj_t
		BgL_fillzd2idzd2_45, obj_t BgL_idz00_46, BgL_tclassz00_bglt BgL_typez00_47,
		obj_t BgL_srczd2defzd2_48, obj_t BgL_importz00_49)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 302 */
			{	/* Object/creator.scm 303 */
				obj_t BgL_tidz00_1022;

				{	/* Object/creator.scm 303 */
					bool_t BgL_testz00_2860;

					if (BGl_widezd2classzf3z21zzobject_classz00((obj_t) (BgL_typez00_47)))
						{	/* Object/creator.scm 303 */
							BgL_testz00_2860 = CBOOL(BGl_za2sawza2z00zzengine_paramz00);
						}
					else
						{	/* Object/creator.scm 303 */
							BgL_testz00_2860 = ((bool_t) 0);
						}
					if (BgL_testz00_2860)
						{	/* Object/creator.scm 304 */
							obj_t BgL_arg2982z00_1096;

							{
								BgL_typez00_bglt BgL_auxz00_2865;

								BgL_auxz00_2865 = (BgL_typez00_bglt) (BgL_typez00_47);
								BgL_arg2982z00_1096 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2865))->BgL_idz00);
							}
							BgL_tidz00_1022 =
								BGl_sawzd2widezd2classzd2idzd2zzobject_classz00
								(BgL_arg2982z00_1096);
						}
					else
						{
							BgL_typez00_bglt BgL_auxz00_2869;

							BgL_auxz00_2869 = (BgL_typez00_bglt) (BgL_typez00_47);
							BgL_tidz00_1022 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2869))->BgL_idz00);
						}
				}
				{	/* Object/creator.scm 303 */
					obj_t BgL_slotsz00_1023;

					{
						obj_t BgL_auxz00_2872;

						{	/* Object/creator.scm 306 */
							BgL_objectz00_bglt BgL_auxz00_2873;

							BgL_auxz00_2873 = (BgL_objectz00_bglt) (BgL_typez00_47);
							BgL_auxz00_2872 = BGL_OBJECT_WIDENING(BgL_auxz00_2873);
						}
						BgL_slotsz00_1023 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2872))->BgL_slotsz00);
					}
					{	/* Object/creator.scm 306 */
						obj_t BgL_fillzd2tidzd2_1024;

						BgL_fillzd2tidzd2_1024 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_fillzd2idzd2_45,
							BgL_tidz00_1022);
						{	/* Object/creator.scm 307 */
							obj_t BgL_fzd2idszd2_1025;

							BgL_fzd2idszd2_1025 =
								BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
								(BgL_slotsz00_1023);
							{	/* Object/creator.scm 308 */
								obj_t BgL_fzd2tidszd2_1026;

								BgL_fzd2tidszd2_1026 =
									BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
									(BgL_fzd2idszd2_1025, BgL_slotsz00_1023);
								{	/* Object/creator.scm 309 */
									obj_t BgL_newz00_1027;

									BgL_newz00_1027 =
										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													9))));
									{	/* Object/creator.scm 310 */
										obj_t BgL_tnewz00_1028;

										{	/* Object/creator.scm 311 */
											bool_t BgL_testz00_2883;

											if (BGl_widezd2classzf3z21zzobject_classz00(
													(obj_t) (BgL_typez00_47)))
												{	/* Object/creator.scm 312 */
													obj_t BgL_arg2979z00_1093;

													BgL_arg2979z00_1093 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													{
														BgL_backendz00_bglt BgL_auxz00_2888;

														BgL_auxz00_2888 =
															(BgL_backendz00_bglt) (BgL_arg2979z00_1093);
														BgL_testz00_2883 =
															(((BgL_backendz00_bglt) CREF(BgL_auxz00_2888))->
															BgL_typedz00);
													}
												}
											else
												{	/* Object/creator.scm 311 */
													BgL_testz00_2883 = ((bool_t) 0);
												}
											if (BgL_testz00_2883)
												{	/* Object/creator.scm 311 */
													BgL_tnewz00_1028 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_newz00_1027, CNST_TABLE_REF(((long) 14)));
												}
											else
												{	/* Object/creator.scm 311 */
													BgL_tnewz00_1028 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_newz00_1027, BgL_tidz00_1022);
												}
										}
										{	/* Object/creator.scm 311 */
											obj_t BgL_ridz00_1029;

											BgL_ridz00_1029 =
												BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
												(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 18))));
											{	/* Object/creator.scm 315 */
												obj_t BgL_rtidz00_1030;

												{	/* Object/creator.scm 316 */
													obj_t BgL_arg2971z00_1085;

													{	/* Object/creator.scm 316 */
														obj_t BgL_arg2972z00_1086;

														obj_t BgL_arg2973z00_1087;

														{	/* Object/creator.scm 316 */
															obj_t BgL_res3508z00_2029;

															{	/* Object/creator.scm 316 */
																obj_t BgL_arg2063z00_2028;

																BgL_arg2063z00_2028 =
																	SYMBOL_TO_STRING(BgL_ridz00_1029);
																BgL_res3508z00_2029 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2028);
															}
															BgL_arg2972z00_1086 = BgL_res3508z00_2029;
														}
														{	/* Object/creator.scm 316 */
															obj_t BgL_res3509z00_2032;

															{	/* Object/creator.scm 316 */
																obj_t BgL_symbolz00_2030;

																BgL_symbolz00_2030 =
																	CNST_TABLE_REF(((long) 19));
																{	/* Object/creator.scm 316 */
																	obj_t BgL_arg2063z00_2031;

																	BgL_arg2063z00_2031 =
																		SYMBOL_TO_STRING(BgL_symbolz00_2030);
																	BgL_res3509z00_2032 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_2031);
															}}
															BgL_arg2973z00_1087 = BgL_res3509z00_2032;
														}
														{	/* Object/creator.scm 316 */
															obj_t BgL_list2974z00_1088;

															{	/* Object/creator.scm 316 */
																obj_t BgL_arg2975z00_1089;

																BgL_arg2975z00_1089 =
																	MAKE_PAIR(BgL_arg2973z00_1087, BNIL);
																BgL_list2974z00_1088 =
																	MAKE_PAIR(BgL_arg2972z00_1086,
																	BgL_arg2975z00_1089);
															}
															BgL_arg2971z00_1085 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2974z00_1088);
													}}
													BgL_rtidz00_1030 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2971z00_1085));
												}
												{	/* Object/creator.scm 316 */

													{

														{	/* Object/creator.scm 326 */
															obj_t BgL_protoz00_1032;

															obj_t BgL_bodyz00_1033;

															{	/* Object/creator.scm 326 */
																obj_t BgL_arg2946z00_1047;

																{	/* Object/creator.scm 326 */
																	obj_t BgL_list2947z00_1048;

																	BgL_list2947z00_1048 =
																		MAKE_PAIR(BgL_fzd2tidszd2_1026, BNIL);
																	BgL_arg2946z00_1047 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_tnewz00_1028, BgL_list2947z00_1048);
																}
																BgL_protoz00_1032 =
																	MAKE_PAIR(BgL_fillzd2tidzd2_1024,
																	BgL_arg2946z00_1047);
															}
															{	/* Object/creator.scm 319 */
																obj_t BgL_alloczd2idzd2_1051;

																{	/* Object/creator.scm 320 */
																	obj_t BgL_arg2966z00_1079;

																	{	/* Object/creator.scm 320 */
																		obj_t BgL_arg2967z00_1080;

																		obj_t BgL_arg2968z00_1081;

																		{	/* Object/creator.scm 320 */
																			obj_t BgL_res3510z00_2037;

																			{	/* Object/creator.scm 320 */
																				obj_t BgL_symbolz00_2035;

																				BgL_symbolz00_2035 =
																					CNST_TABLE_REF(((long) 7));
																				{	/* Object/creator.scm 320 */
																					obj_t BgL_arg2063z00_2036;

																					BgL_arg2063z00_2036 =
																						SYMBOL_TO_STRING
																						(BgL_symbolz00_2035);
																					BgL_res3510z00_2037 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_2036);
																			}}
																			BgL_arg2967z00_1080 = BgL_res3510z00_2037;
																		}
																		{	/* Object/creator.scm 320 */
																			obj_t BgL_res3511z00_2040;

																			{	/* Object/creator.scm 320 */
																				obj_t BgL_arg2063z00_2039;

																				BgL_arg2063z00_2039 =
																					SYMBOL_TO_STRING(BgL_idz00_46);
																				BgL_res3511z00_2040 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg2063z00_2039);
																			}
																			BgL_arg2968z00_1081 = BgL_res3511z00_2040;
																		}
																		{	/* Object/creator.scm 320 */
																			obj_t BgL_list2969z00_1082;

																			{	/* Object/creator.scm 320 */
																				obj_t BgL_arg2970z00_1083;

																				BgL_arg2970z00_1083 =
																					MAKE_PAIR(BgL_arg2968z00_1081, BNIL);
																				BgL_list2969z00_1082 =
																					MAKE_PAIR(BgL_arg2967z00_1080,
																					BgL_arg2970z00_1083);
																			}
																			BgL_arg2966z00_1079 =
																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																				(BgL_list2969z00_1082);
																	}}
																	BgL_alloczd2idzd2_1051 =
																		string_to_symbol(BSTRING_TO_STRING
																		(BgL_arg2966z00_1079));
																}
																{	/* Object/creator.scm 320 */

																	{	/* Object/creator.scm 321 */
																		obj_t BgL_arg2949z00_1052;

																		obj_t BgL_arg2950z00_1053;

																		BgL_arg2949z00_1052 =
																			CNST_TABLE_REF(((long) 20));
																		{	/* Object/creator.scm 321 */
																			obj_t BgL_arg2951z00_1054;

																			obj_t BgL_arg2952z00_1055;

																			if (NULLP(BgL_fzd2tidszd2_1026))
																				{	/* Object/creator.scm 321 */
																					BgL_arg2951z00_1054 = BNIL;
																				}
																			else
																				{	/* Object/creator.scm 321 */
																					obj_t BgL_head2564z00_1060;

																					BgL_head2564z00_1060 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_ll2562z00_1062;

																						obj_t BgL_ll2563z00_1063;

																						obj_t BgL_tail2565z00_1064;

																						BgL_ll2562z00_1062 =
																							BgL_fzd2tidszd2_1026;
																						BgL_ll2563z00_1063 =
																							BgL_fzd2idszd2_1025;
																						BgL_tail2565z00_1064 =
																							BgL_head2564z00_1060;
																					BgL_zc3anonymousza32955ze3z83_1065:
																						if (NULLP(BgL_ll2562z00_1062))
																							{	/* Object/creator.scm 321 */
																								BgL_arg2951z00_1054 =
																									CDR(BgL_head2564z00_1060);
																							}
																						else
																							{	/* Object/creator.scm 321 */
																								obj_t BgL_newtail2566z00_1067;

																								{	/* Object/creator.scm 321 */
																									obj_t BgL_arg2960z00_1070;

																									{	/* Object/creator.scm 321 */
																										obj_t BgL_ftz00_1072;

																										obj_t BgL_fz00_1073;

																										BgL_ftz00_1072 =
																											CAR(BgL_ll2562z00_1062);
																										BgL_fz00_1073 =
																											CAR(BgL_ll2563z00_1063);
																										{	/* Object/creator.scm 321 */
																											obj_t BgL_arg2962z00_1074;

																											{	/* Object/creator.scm 321 */
																												obj_t
																													BgL_list2963z00_1075;
																												BgL_list2963z00_1075 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2962z00_1074 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_fz00_1073,
																													BgL_list2963z00_1075);
																											}
																											BgL_arg2960z00_1070 =
																												MAKE_PAIR
																												(BgL_ftz00_1072,
																												BgL_arg2962z00_1074);
																										}
																									}
																									BgL_newtail2566z00_1067 =
																										MAKE_PAIR
																										(BgL_arg2960z00_1070, BNIL);
																								}
																								SET_CDR(BgL_tail2565z00_1064,
																									BgL_newtail2566z00_1067);
																								{
																									obj_t BgL_tail2565z00_2938;

																									obj_t BgL_ll2563z00_2936;

																									obj_t BgL_ll2562z00_2934;

																									BgL_ll2562z00_2934 =
																										CDR(BgL_ll2562z00_1062);
																									BgL_ll2563z00_2936 =
																										CDR(BgL_ll2563z00_1063);
																									BgL_tail2565z00_2938 =
																										BgL_newtail2566z00_1067;
																									BgL_tail2565z00_1064 =
																										BgL_tail2565z00_2938;
																									BgL_ll2563z00_1063 =
																										BgL_ll2563z00_2936;
																									BgL_ll2562z00_1062 =
																										BgL_ll2562z00_2934;
																									goto
																										BgL_zc3anonymousza32955ze3z83_1065;
																								}
																							}
																					}
																				}
																			{	/* Object/creator.scm 322 */
																				obj_t BgL_arg2964z00_1077;

																				obj_t BgL_arg2965z00_1078;

																				BgL_arg2964z00_1077 =
																					BGl_makezd2classzd2slotzd2makez12zc0zzobject_creatorz00
																					(BgL_typez00_47, BgL_newz00_1027,
																					BgL_ridz00_1029, BgL_rtidz00_1030,
																					BgL_slotsz00_1023,
																					BgL_fzd2idszd2_1025);
																				BgL_arg2965z00_1078 =
																					MAKE_PAIR(BgL_newz00_1027, BNIL);
																				BgL_arg2952z00_1055 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2964z00_1077,
																					BgL_arg2965z00_1078);
																			}
																			{	/* Object/creator.scm 321 */
																				obj_t BgL_list2953z00_1056;

																				BgL_list2953z00_1056 =
																					MAKE_PAIR(BgL_arg2952z00_1055, BNIL);
																				BgL_arg2950z00_1053 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2951z00_1054,
																					BgL_list2953z00_1056);
																			}
																		}
																		BgL_bodyz00_1033 =
																			MAKE_PAIR(BgL_arg2949z00_1052,
																			BgL_arg2950z00_1053);
																	}
																}
															}
															{	/* Object/creator.scm 329 */
																obj_t BgL_arg2933z00_1034;

																{	/* Object/creator.scm 329 */
																	obj_t BgL_arg2934z00_1035;

																	{	/* Object/creator.scm 329 */
																		obj_t BgL_arg2935z00_1036;

																		{	/* Object/creator.scm 329 */
																			obj_t BgL_arg2938z00_1039;

																			obj_t BgL_arg2939z00_1040;

																			BgL_arg2938z00_1039 =
																				CNST_TABLE_REF(((long) 11));
																			BgL_arg2939z00_1040 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_protoz00_1032, BNIL);
																			BgL_arg2935z00_1036 =
																				MAKE_PAIR(BgL_arg2938z00_1039,
																				BgL_arg2939z00_1040);
																		}
																		{	/* Object/creator.scm 329 */
																			obj_t BgL_list2937z00_1038;

																			BgL_list2937z00_1038 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2934z00_1035 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2935z00_1036,
																				BgL_list2937z00_1038);
																	}}
																	BgL_arg2933z00_1034 =
																		MAKE_PAIR(BgL_importz00_49,
																		BgL_arg2934z00_1035);
																}
																BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																	(BgL_arg2933z00_1034);
															}
															{	/* Object/creator.scm 331 */
																obj_t BgL_arg2940z00_1041;

																{	/* Object/creator.scm 331 */
																	obj_t BgL_arg2942z00_1043;

																	obj_t BgL_arg2943z00_1044;

																	BgL_arg2942z00_1043 =
																		CNST_TABLE_REF(((long) 8));
																	{	/* Object/creator.scm 331 */
																		obj_t BgL_list2944z00_1045;

																		{	/* Object/creator.scm 331 */
																			obj_t BgL_arg2945z00_1046;

																			BgL_arg2945z00_1046 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2944z00_1045 =
																				MAKE_PAIR(BgL_bodyz00_1033,
																				BgL_arg2945z00_1046);
																		}
																		BgL_arg2943z00_1044 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_protoz00_1032, BgL_list2944z00_1045);
																	}
																	BgL_arg2940z00_1041 =
																		MAKE_PAIR(BgL_arg2942z00_1043,
																		BgL_arg2943z00_1044);
																}
																{	/* Object/creator.scm 331 */
																	obj_t BgL_list2941z00_1042;

																	BgL_list2941z00_1042 =
																		MAKE_PAIR(BgL_srczd2defzd2_48, BNIL);
																	return
																		BGl_epairifyza2za2zztools_miscz00
																		(BgL_arg2940z00_1041, BgL_list2941z00_1042);
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
				}
			}
		}
	}



/* gen-class-make! */
	obj_t BGl_genzd2classzd2makez12z12zzobject_creatorz00(obj_t
		BgL_wideningz00_50, obj_t BgL_mkzd2idzd2_51, obj_t BgL_idz00_52,
		BgL_tclassz00_bglt BgL_typez00_53, obj_t BgL_srczd2defzd2_54,
		obj_t BgL_importz00_55)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 338 */
			{	/* Object/creator.scm 339 */
				obj_t BgL_tidz00_1098;

				{	/* Object/creator.scm 339 */
					bool_t BgL_testz00_2959;

					if ((BgL_wideningz00_50 == CNST_TABLE_REF(((long) 6))))
						{	/* Object/creator.scm 339 */
							if (BGl_widezd2classzf3z21zzobject_classz00(
									(obj_t) (BgL_typez00_53)))
								{	/* Object/creator.scm 340 */
									BgL_testz00_2959 = CBOOL(BGl_za2sawza2z00zzengine_paramz00);
								}
							else
								{	/* Object/creator.scm 340 */
									BgL_testz00_2959 = ((bool_t) 0);
								}
						}
					else
						{	/* Object/creator.scm 339 */
							BgL_testz00_2959 = ((bool_t) 0);
						}
					if (BgL_testz00_2959)
						{	/* Object/creator.scm 342 */
							obj_t BgL_arg3128z00_1285;

							{
								BgL_typez00_bglt BgL_auxz00_2967;

								BgL_auxz00_2967 = (BgL_typez00_bglt) (BgL_typez00_53);
								BgL_arg3128z00_1285 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2967))->BgL_idz00);
							}
							BgL_tidz00_1098 =
								BGl_sawzd2widezd2classzd2idzd2zzobject_classz00
								(BgL_arg3128z00_1285);
						}
					else
						{
							BgL_typez00_bglt BgL_auxz00_2971;

							BgL_auxz00_2971 = (BgL_typez00_bglt) (BgL_typez00_53);
							BgL_tidz00_1098 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2971))->BgL_idz00);
						}
				}
				{	/* Object/creator.scm 339 */
					obj_t BgL_slotsz00_1099;

					{
						obj_t BgL_auxz00_2974;

						{	/* Object/creator.scm 344 */
							BgL_objectz00_bglt BgL_auxz00_2975;

							BgL_auxz00_2975 = (BgL_objectz00_bglt) (BgL_typez00_53);
							BgL_auxz00_2974 = BGL_OBJECT_WIDENING(BgL_auxz00_2975);
						}
						BgL_slotsz00_1099 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2974))->BgL_slotsz00);
					}
					{	/* Object/creator.scm 345 */
						obj_t BgL_constrsz00_1101;

						BgL_constrsz00_1101 =
							BGl_findzd2classzd2constructorsz00zzobject_classz00
							(BgL_typez00_53);
						{	/* Object/creator.scm 346 */
							obj_t BgL_mkzd2tidzd2_1102;

							BgL_mkzd2tidzd2_1102 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_mkzd2idzd2_51,
								BgL_tidz00_1098);
							{	/* Object/creator.scm 349 */
								obj_t BgL_fillzd2idzd2_1103;

								{	/* Object/creator.scm 350 */
									obj_t BgL_list3123z00_1280;

									{	/* Object/creator.scm 350 */
										obj_t BgL_arg3124z00_1281;

										obj_t BgL_arg3125z00_1282;

										BgL_arg3124z00_1281 = CNST_TABLE_REF(((long) 1));
										{	/* Object/creator.scm 350 */
											obj_t BgL_arg3126z00_1283;

											BgL_arg3126z00_1283 =
												MAKE_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
											BgL_arg3125z00_1282 =
												MAKE_PAIR(BgL_idz00_52, BgL_arg3126z00_1283);
										}
										BgL_list3123z00_1280 =
											MAKE_PAIR(BgL_arg3124z00_1281, BgL_arg3125z00_1282);
									}
									BgL_fillzd2idzd2_1103 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list3123z00_1280);
								}
								{	/* Object/creator.scm 350 */
									obj_t BgL_fzd2idszd2_1104;

									BgL_fzd2idszd2_1104 =
										BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
										(BgL_slotsz00_1099);
									{	/* Object/creator.scm 351 */
										obj_t BgL_fzd2tidszd2_1105;

										BgL_fzd2tidszd2_1105 =
											BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
											(BgL_fzd2idszd2_1104, BgL_slotsz00_1099);
										{	/* Object/creator.scm 352 */
											obj_t BgL_newz00_1106;

											BgL_newz00_1106 =
												BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
												(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 9))));
											{	/* Object/creator.scm 353 */
												obj_t BgL_ridz00_1107;

												BgL_ridz00_1107 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 18))));
												{	/* Object/creator.scm 354 */
													obj_t BgL_rtidz00_1108;

													{	/* Object/creator.scm 355 */
														obj_t BgL_arg3116z00_1273;

														{	/* Object/creator.scm 355 */
															obj_t BgL_arg3117z00_1274;

															obj_t BgL_arg3118z00_1275;

															{	/* Object/creator.scm 355 */
																obj_t BgL_res3512z00_2061;

																{	/* Object/creator.scm 355 */
																	obj_t BgL_arg2063z00_2060;

																	BgL_arg2063z00_2060 =
																		SYMBOL_TO_STRING(BgL_ridz00_1107);
																	BgL_res3512z00_2061 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_2060);
																}
																BgL_arg3117z00_1274 = BgL_res3512z00_2061;
															}
															{	/* Object/creator.scm 355 */
																obj_t BgL_res3513z00_2064;

																{	/* Object/creator.scm 355 */
																	obj_t BgL_symbolz00_2062;

																	BgL_symbolz00_2062 =
																		CNST_TABLE_REF(((long) 19));
																	{	/* Object/creator.scm 355 */
																		obj_t BgL_arg2063z00_2063;

																		BgL_arg2063z00_2063 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2062);
																		BgL_res3513z00_2064 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2063);
																}}
																BgL_arg3118z00_1275 = BgL_res3513z00_2064;
															}
															{	/* Object/creator.scm 355 */
																obj_t BgL_list3119z00_1276;

																{	/* Object/creator.scm 355 */
																	obj_t BgL_arg3120z00_1277;

																	BgL_arg3120z00_1277 =
																		MAKE_PAIR(BgL_arg3118z00_1275, BNIL);
																	BgL_list3119z00_1276 =
																		MAKE_PAIR(BgL_arg3117z00_1274,
																		BgL_arg3120z00_1277);
																}
																BgL_arg3116z00_1273 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list3119z00_1276);
														}}
														BgL_rtidz00_1108 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg3116z00_1273));
													}
													{	/* Object/creator.scm 355 */

														{

															{	/* Object/creator.scm 403 */
																obj_t BgL_arg2984z00_1113;

																{	/* Object/creator.scm 403 */
																	obj_t BgL_arg2985z00_1114;

																	{	/* Object/creator.scm 403 */
																		obj_t BgL_arg2986z00_1115;

																		BgL_arg2986z00_1115 =
																			MAKE_PAIR(BgL_mkzd2tidzd2_1102,
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_fzd2tidszd2_1105, BNIL));
																		{	/* Object/creator.scm 403 */
																			obj_t BgL_list2988z00_1117;

																			BgL_list2988z00_1117 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2985z00_1114 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2986z00_1115,
																				BgL_list2988z00_1117);
																	}}
																	BgL_arg2984z00_1113 =
																		MAKE_PAIR(BgL_importz00_55,
																		BgL_arg2985z00_1114);
																}
																BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																	(BgL_arg2984z00_1113);
															}
															{	/* Object/creator.scm 404 */
																obj_t BgL_arg2990z00_1119;

																{	/* Object/creator.scm 404 */
																	obj_t BgL_arg2991z00_1120;

																	obj_t BgL_arg2992z00_1121;

																	BgL_arg2991z00_1120 =
																		CNST_TABLE_REF(((long) 23));
																	{	/* Object/creator.scm 404 */
																		obj_t BgL_arg2993z00_1122;

																		{	/* Object/creator.scm 404 */
																			obj_t BgL_arg2996z00_1125;

																			{	/* Object/creator.scm 404 */
																				obj_t BgL_list2997z00_1126;

																				BgL_list2997z00_1126 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2996z00_1125 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 24)),
																					BgL_list2997z00_1126);
																			}
																			BgL_arg2993z00_1122 =
																				MAKE_PAIR(BgL_mkzd2idzd2_51,
																				BgL_arg2996z00_1125);
																		}
																		{	/* Object/creator.scm 404 */
																			obj_t BgL_list2995z00_1124;

																			BgL_list2995z00_1124 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2992z00_1121 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2993z00_1122,
																				BgL_list2995z00_1124);
																	}}
																	BgL_arg2990z00_1119 =
																		MAKE_PAIR(BgL_arg2991z00_1120,
																		BgL_arg2992z00_1121);
																}
																BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																	(BgL_arg2990z00_1119);
															}
															{	/* Object/creator.scm 406 */
																obj_t BgL_protoz00_1127;

																obj_t BgL_bodyz00_1128;

																BgL_protoz00_1127 =
																	MAKE_PAIR(BgL_mkzd2tidzd2_1102,
																	BgL_fzd2tidszd2_1105);
																{	/* Object/creator.scm 399 */
																	bool_t BgL_testz00_3021;

																	{	/* Object/creator.scm 399 */
																		obj_t BgL_arg3113z00_1266;

																		obj_t BgL_arg3114z00_1267;

																		{	/* Object/creator.scm 399 */
																			obj_t BgL_arg3115z00_1268;

																			BgL_arg3115z00_1268 =
																				BGl_thezd2backendzd2zzbackend_backendz00
																				();
																			{
																				BgL_backendz00_bglt BgL_auxz00_3023;

																				BgL_auxz00_3023 =
																					(BgL_backendz00_bglt)
																					(BgL_arg3115z00_1268);
																				BgL_arg3113z00_1266 =
																					(((BgL_backendz00_bglt)
																						CREF(BgL_auxz00_3023))->
																					BgL_languagez00);
																		}}
																		BgL_arg3114z00_1267 =
																			CNST_TABLE_REF(((long) 21));
																		BgL_testz00_3021 =
																			(BgL_arg3113z00_1266 ==
																			BgL_arg3114z00_1267);
																	}
																	if (BgL_testz00_3021)
																		{	/* Object/creator.scm 399 */
																			{	/* Object/creator.scm 371 */
																				obj_t BgL_alloczd2idzd2_1163;

																				{	/* Object/creator.scm 371 */
																					obj_t BgL_arg3063z00_1208;

																					{	/* Object/creator.scm 371 */
																						obj_t BgL_arg3064z00_1209;

																						obj_t BgL_arg3065z00_1210;

																						{	/* Object/creator.scm 371 */
																							obj_t BgL_res3514z00_2074;

																							{	/* Object/creator.scm 371 */
																								obj_t BgL_symbolz00_2072;

																								BgL_symbolz00_2072 =
																									CNST_TABLE_REF(((long) 7));
																								{	/* Object/creator.scm 371 */
																									obj_t BgL_arg2063z00_2073;

																									BgL_arg2063z00_2073 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_2072);
																									BgL_res3514z00_2074 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_2073);
																							}}
																							BgL_arg3064z00_1209 =
																								BgL_res3514z00_2074;
																						}
																						{	/* Object/creator.scm 371 */
																							obj_t BgL_res3515z00_2077;

																							{	/* Object/creator.scm 371 */
																								obj_t BgL_arg2063z00_2076;

																								BgL_arg2063z00_2076 =
																									SYMBOL_TO_STRING
																									(BgL_idz00_52);
																								BgL_res3515z00_2077 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_2076);
																							}
																							BgL_arg3065z00_1210 =
																								BgL_res3515z00_2077;
																						}
																						{	/* Object/creator.scm 371 */
																							obj_t BgL_list3066z00_1211;

																							{	/* Object/creator.scm 371 */
																								obj_t BgL_arg3067z00_1212;

																								BgL_arg3067z00_1212 =
																									MAKE_PAIR(BgL_arg3065z00_1210,
																									BNIL);
																								BgL_list3066z00_1211 =
																									MAKE_PAIR(BgL_arg3064z00_1209,
																									BgL_arg3067z00_1212);
																							}
																							BgL_arg3063z00_1208 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list3066z00_1211);
																					}}
																					BgL_alloczd2idzd2_1163 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg3063z00_1208));
																				}
																				{	/* Object/creator.scm 371 */

																					{	/* Object/creator.scm 372 */
																						obj_t BgL_arg3026z00_1164;

																						obj_t BgL_arg3027z00_1165;

																						BgL_arg3026z00_1164 =
																							CNST_TABLE_REF(((long) 20));
																						{	/* Object/creator.scm 372 */
																							obj_t BgL_arg3028z00_1166;

																							obj_t BgL_arg3029z00_1167;

																							{	/* Object/creator.scm 372 */
																								obj_t BgL_arg3033z00_1171;

																								{	/* Object/creator.scm 372 */
																									obj_t BgL_arg3035z00_1173;

																									obj_t BgL_arg3036z00_1174;

																									BgL_arg3035z00_1173 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(BgL_newz00_1106,
																										BgL_tidz00_1098);
																									{	/* Object/creator.scm 373 */
																										obj_t BgL_arg3037z00_1175;

																										if (
																											(BgL_wideningz00_50 ==
																												CNST_TABLE_REF(((long)
																														6))))
																											{	/* Object/creator.scm 373 */
																												BgL_arg3037z00_1175 =
																													BGl_alloczd2wideningzd2zzobject_creatorz00
																													(BgL_typez00_53,
																													BgL_tidz00_1098);
																											}
																										else
																											{	/* Object/creator.scm 373 */
																												BgL_arg3037z00_1175 =
																													MAKE_PAIR
																													(BgL_alloczd2idzd2_1163,
																													BNIL);
																											}
																										{	/* Object/creator.scm 372 */
																											obj_t
																												BgL_list3039z00_1177;
																											BgL_list3039z00_1177 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg3036z00_1174 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3037z00_1175,
																												BgL_list3039z00_1177);
																										}
																									}
																									BgL_arg3033z00_1171 =
																										MAKE_PAIR
																										(BgL_arg3035z00_1173,
																										BgL_arg3036z00_1174);
																								}
																								BgL_arg3028z00_1166 =
																									MAKE_PAIR(BgL_arg3033z00_1171,
																									BNIL);
																							}
																							{	/* Object/creator.scm 376 */
																								obj_t BgL_arg3041z00_1179;

																								obj_t BgL_arg3042z00_1180;

																								BgL_arg3041z00_1179 =
																									CNST_TABLE_REF(((long) 22));
																								{	/* Object/creator.scm 378 */
																									obj_t BgL_arg3043z00_1181;

																									obj_t BgL_arg3044z00_1182;

																									{	/* Object/creator.scm 378 */
																										obj_t BgL_arg3046z00_1184;

																										{	/* Object/creator.scm 378 */
																											obj_t BgL_arg3047z00_1185;

																											BgL_arg3047z00_1185 =
																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_fzd2idszd2_1104,
																												BNIL);
																											{	/* Object/creator.scm 378 */
																												obj_t
																													BgL_list3048z00_1186;
																												BgL_list3048z00_1186 =
																													MAKE_PAIR
																													(BgL_arg3047z00_1185,
																													BNIL);
																												BgL_arg3046z00_1184 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_newz00_1106,
																													BgL_list3048z00_1186);
																										}}
																										BgL_arg3043z00_1181 =
																											MAKE_PAIR
																											(BgL_fillzd2idzd2_1103,
																											BgL_arg3046z00_1184);
																									}
																									{	/* Object/creator.scm 380 */
																										obj_t BgL_arg3049z00_1187;

																										obj_t BgL_arg3050z00_1188;

																										{	/* Object/creator.scm 380 */
																											bool_t BgL_testz00_3054;

																											if (PAIRP
																												(BgL_constrsz00_1101))
																												{	/* Object/creator.scm 380 */
																													if (
																														(BgL_wideningz00_50
																															==
																															CNST_TABLE_REF((
																																	(long) 6))))
																														{	/* Object/creator.scm 380 */
																															BgL_testz00_3054 =
																																((bool_t) 0);
																														}
																													else
																														{	/* Object/creator.scm 380 */
																															BgL_testz00_3054 =
																																((bool_t) 1);
																														}
																												}
																											else
																												{	/* Object/creator.scm 380 */
																													BgL_testz00_3054 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_3054)
																												{	/* Object/creator.scm 381 */
																													obj_t
																														BgL_l2568z00_1190;
																													BgL_l2568z00_1190 =
																														BgL_constrsz00_1101;
																													{	/* Object/creator.scm 381 */
																														obj_t
																															BgL_head2570z00_1192;
																														BgL_head2570z00_1192
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														{
																															obj_t
																																BgL_l2568z00_1194;
																															obj_t
																																BgL_tail2571z00_1195;
																															BgL_l2568z00_1194
																																=
																																BgL_l2568z00_1190;
																															BgL_tail2571z00_1195
																																=
																																BgL_head2570z00_1192;
																														BgL_zc3anonymousza33053ze3z83_1196:
																															if (NULLP
																																(BgL_l2568z00_1194))
																																{	/* Object/creator.scm 381 */
																																	BgL_arg3049z00_1187
																																		=
																																		CDR
																																		(BgL_head2570z00_1192);
																																}
																															else
																																{	/* Object/creator.scm 381 */
																																	obj_t
																																		BgL_newtail2572z00_1198;
																																	{	/* Object/creator.scm 381 */
																																		obj_t
																																			BgL_arg3056z00_1200;
																																		{	/* Object/creator.scm 381 */
																																			obj_t
																																				BgL_constrz00_1202;
																																			BgL_constrz00_1202
																																				=
																																				CAR
																																				(BgL_l2568z00_1194);
																																			{	/* Object/creator.scm 381 */
																																				obj_t
																																					BgL_arg3058z00_1203;
																																				{	/* Object/creator.scm 381 */
																																					obj_t
																																						BgL_list3059z00_1204;
																																					BgL_list3059z00_1204
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_arg3058z00_1203
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_newz00_1106,
																																						BgL_list3059z00_1204);
																																				}
																																				BgL_arg3056z00_1200
																																					=
																																					MAKE_PAIR
																																					(BgL_constrz00_1202,
																																					BgL_arg3058z00_1203);
																																			}
																																		}
																																		BgL_newtail2572z00_1198
																																			=
																																			MAKE_PAIR
																																			(BgL_arg3056z00_1200,
																																			BNIL);
																																	}
																																	SET_CDR
																																		(BgL_tail2571z00_1195,
																																		BgL_newtail2572z00_1198);
																																	{
																																		obj_t
																																			BgL_tail2571z00_3072;
																																		obj_t
																																			BgL_l2568z00_3070;
																																		BgL_l2568z00_3070
																																			=
																																			CDR
																																			(BgL_l2568z00_1194);
																																		BgL_tail2571z00_3072
																																			=
																																			BgL_newtail2572z00_1198;
																																		BgL_tail2571z00_1195
																																			=
																																			BgL_tail2571z00_3072;
																																		BgL_l2568z00_1194
																																			=
																																			BgL_l2568z00_3070;
																																		goto
																																			BgL_zc3anonymousza33053ze3z83_1196;
																																	}
																																}
																														}
																													}
																												}
																											else
																												{	/* Object/creator.scm 380 */
																													BgL_arg3049z00_1187 =
																														BNIL;
																												}
																										}
																										BgL_arg3050z00_1188 =
																											MAKE_PAIR(BgL_newz00_1106,
																											BNIL);
																										BgL_arg3044z00_1182 =
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg3049z00_1187,
																											BgL_arg3050z00_1188);
																									}
																									{	/* Object/creator.scm 376 */
																										obj_t BgL_list3045z00_1183;

																										BgL_list3045z00_1183 =
																											MAKE_PAIR
																											(BgL_arg3044z00_1182,
																											BNIL);
																										BgL_arg3042z00_1180 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg3043z00_1181,
																											BgL_list3045z00_1183);
																									}
																								}
																								BgL_arg3029z00_1167 =
																									MAKE_PAIR(BgL_arg3041z00_1179,
																									BgL_arg3042z00_1180);
																							}
																							{	/* Object/creator.scm 372 */
																								obj_t BgL_list3031z00_1169;

																								{	/* Object/creator.scm 372 */
																									obj_t BgL_arg3032z00_1170;

																									BgL_arg3032z00_1170 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3031z00_1169 =
																										MAKE_PAIR
																										(BgL_arg3029z00_1167,
																										BgL_arg3032z00_1170);
																								}
																								BgL_arg3027z00_1165 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3028z00_1166,
																									BgL_list3031z00_1169);
																							}
																						}
																						BgL_bodyz00_1128 =
																							MAKE_PAIR(BgL_arg3026z00_1164,
																							BgL_arg3027z00_1165);
																					}
																				}
																			}
																		}
																	else
																		{	/* Object/creator.scm 399 */
																			{	/* Object/creator.scm 385 */
																				obj_t BgL_alloczd2idzd2_1214;

																				{	/* Object/creator.scm 385 */
																					obj_t BgL_arg3106z00_1259;

																					{	/* Object/creator.scm 385 */
																						obj_t BgL_arg3107z00_1260;

																						obj_t BgL_arg3108z00_1261;

																						{	/* Object/creator.scm 385 */
																							obj_t BgL_res3516z00_2093;

																							{	/* Object/creator.scm 385 */
																								obj_t BgL_symbolz00_2091;

																								BgL_symbolz00_2091 =
																									CNST_TABLE_REF(((long) 7));
																								{	/* Object/creator.scm 385 */
																									obj_t BgL_arg2063z00_2092;

																									BgL_arg2063z00_2092 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_2091);
																									BgL_res3516z00_2093 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_2092);
																							}}
																							BgL_arg3107z00_1260 =
																								BgL_res3516z00_2093;
																						}
																						{	/* Object/creator.scm 385 */
																							obj_t BgL_res3517z00_2096;

																							{	/* Object/creator.scm 385 */
																								obj_t BgL_arg2063z00_2095;

																								BgL_arg2063z00_2095 =
																									SYMBOL_TO_STRING
																									(BgL_idz00_52);
																								BgL_res3517z00_2096 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_2095);
																							}
																							BgL_arg3108z00_1261 =
																								BgL_res3517z00_2096;
																						}
																						{	/* Object/creator.scm 385 */
																							obj_t BgL_list3109z00_1262;

																							{	/* Object/creator.scm 385 */
																								obj_t BgL_arg3110z00_1263;

																								BgL_arg3110z00_1263 =
																									MAKE_PAIR(BgL_arg3108z00_1261,
																									BNIL);
																								BgL_list3109z00_1262 =
																									MAKE_PAIR(BgL_arg3107z00_1260,
																									BgL_arg3110z00_1263);
																							}
																							BgL_arg3106z00_1259 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list3109z00_1262);
																					}}
																					BgL_alloczd2idzd2_1214 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg3106z00_1259));
																				}
																				{	/* Object/creator.scm 385 */

																					{	/* Object/creator.scm 386 */
																						obj_t BgL_arg3069z00_1215;

																						obj_t BgL_arg3070z00_1216;

																						BgL_arg3069z00_1215 =
																							CNST_TABLE_REF(((long) 20));
																						{	/* Object/creator.scm 386 */
																							obj_t BgL_arg3071z00_1217;

																							obj_t BgL_arg3072z00_1218;

																							{	/* Object/creator.scm 386 */
																								obj_t BgL_arg3076z00_1222;

																								{	/* Object/creator.scm 386 */
																									obj_t BgL_arg3078z00_1224;

																									obj_t BgL_arg3079z00_1225;

																									BgL_arg3078z00_1224 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(BgL_newz00_1106,
																										BgL_tidz00_1098);
																									{	/* Object/creator.scm 387 */
																										obj_t BgL_arg3081z00_1226;

																										if (
																											(BgL_wideningz00_50 ==
																												CNST_TABLE_REF(((long)
																														6))))
																											{	/* Object/creator.scm 387 */
																												BgL_arg3081z00_1226 =
																													BGl_alloczd2wideningzd2zzobject_creatorz00
																													(BgL_typez00_53,
																													BgL_tidz00_1098);
																											}
																										else
																											{	/* Object/creator.scm 387 */
																												BgL_arg3081z00_1226 =
																													MAKE_PAIR
																													(BgL_alloczd2idzd2_1214,
																													BNIL);
																											}
																										{	/* Object/creator.scm 386 */
																											obj_t
																												BgL_list3083z00_1228;
																											BgL_list3083z00_1228 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg3079z00_1225 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3081z00_1226,
																												BgL_list3083z00_1228);
																										}
																									}
																									BgL_arg3076z00_1222 =
																										MAKE_PAIR
																										(BgL_arg3078z00_1224,
																										BgL_arg3079z00_1225);
																								}
																								BgL_arg3071z00_1217 =
																									MAKE_PAIR(BgL_arg3076z00_1222,
																									BNIL);
																							}
																							{	/* Object/creator.scm 390 */
																								obj_t BgL_arg3085z00_1230;

																								obj_t BgL_arg3086z00_1231;

																								BgL_arg3085z00_1230 =
																									CNST_TABLE_REF(((long) 22));
																								{	/* Object/creator.scm 392 */
																									obj_t BgL_arg3087z00_1232;

																									obj_t BgL_arg3088z00_1233;

																									{	/* Object/creator.scm 392 */
																										obj_t BgL_arg3090z00_1235;

																										{	/* Object/creator.scm 392 */
																											obj_t BgL_arg3091z00_1236;

																											BgL_arg3091z00_1236 =
																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_fzd2idszd2_1104,
																												BNIL);
																											{	/* Object/creator.scm 392 */
																												obj_t
																													BgL_list3092z00_1237;
																												BgL_list3092z00_1237 =
																													MAKE_PAIR
																													(BgL_arg3091z00_1236,
																													BNIL);
																												BgL_arg3090z00_1235 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_newz00_1106,
																													BgL_list3092z00_1237);
																										}}
																										BgL_arg3087z00_1232 =
																											MAKE_PAIR
																											(BgL_fillzd2idzd2_1103,
																											BgL_arg3090z00_1235);
																									}
																									{	/* Object/creator.scm 394 */
																										obj_t BgL_arg3093z00_1238;

																										obj_t BgL_arg3094z00_1239;

																										{	/* Object/creator.scm 394 */
																											bool_t BgL_testz00_3108;

																											if (PAIRP
																												(BgL_constrsz00_1101))
																												{	/* Object/creator.scm 394 */
																													if (
																														(BgL_wideningz00_50
																															==
																															CNST_TABLE_REF((
																																	(long) 6))))
																														{	/* Object/creator.scm 394 */
																															BgL_testz00_3108 =
																																((bool_t) 0);
																														}
																													else
																														{	/* Object/creator.scm 394 */
																															BgL_testz00_3108 =
																																((bool_t) 1);
																														}
																												}
																											else
																												{	/* Object/creator.scm 394 */
																													BgL_testz00_3108 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_3108)
																												{	/* Object/creator.scm 395 */
																													obj_t
																														BgL_l2573z00_1241;
																													BgL_l2573z00_1241 =
																														BgL_constrsz00_1101;
																													{	/* Object/creator.scm 395 */
																														obj_t
																															BgL_head2575z00_1243;
																														BgL_head2575z00_1243
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														{
																															obj_t
																																BgL_l2573z00_1245;
																															obj_t
																																BgL_tail2576z00_1246;
																															BgL_l2573z00_1245
																																=
																																BgL_l2573z00_1241;
																															BgL_tail2576z00_1246
																																=
																																BgL_head2575z00_1243;
																														BgL_zc3anonymousza33097ze3z83_1247:
																															if (NULLP
																																(BgL_l2573z00_1245))
																																{	/* Object/creator.scm 395 */
																																	BgL_arg3093z00_1238
																																		=
																																		CDR
																																		(BgL_head2575z00_1243);
																																}
																															else
																																{	/* Object/creator.scm 395 */
																																	obj_t
																																		BgL_newtail2577z00_1249;
																																	{	/* Object/creator.scm 395 */
																																		obj_t
																																			BgL_arg3100z00_1251;
																																		{	/* Object/creator.scm 395 */
																																			obj_t
																																				BgL_constrz00_1253;
																																			BgL_constrz00_1253
																																				=
																																				CAR
																																				(BgL_l2573z00_1245);
																																			{	/* Object/creator.scm 395 */
																																				obj_t
																																					BgL_arg3102z00_1254;
																																				{	/* Object/creator.scm 395 */
																																					obj_t
																																						BgL_list3103z00_1255;
																																					BgL_list3103z00_1255
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_arg3102z00_1254
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_newz00_1106,
																																						BgL_list3103z00_1255);
																																				}
																																				BgL_arg3100z00_1251
																																					=
																																					MAKE_PAIR
																																					(BgL_constrz00_1253,
																																					BgL_arg3102z00_1254);
																																			}
																																		}
																																		BgL_newtail2577z00_1249
																																			=
																																			MAKE_PAIR
																																			(BgL_arg3100z00_1251,
																																			BNIL);
																																	}
																																	SET_CDR
																																		(BgL_tail2576z00_1246,
																																		BgL_newtail2577z00_1249);
																																	{
																																		obj_t
																																			BgL_tail2576z00_3126;
																																		obj_t
																																			BgL_l2573z00_3124;
																																		BgL_l2573z00_3124
																																			=
																																			CDR
																																			(BgL_l2573z00_1245);
																																		BgL_tail2576z00_3126
																																			=
																																			BgL_newtail2577z00_1249;
																																		BgL_tail2576z00_1246
																																			=
																																			BgL_tail2576z00_3126;
																																		BgL_l2573z00_1245
																																			=
																																			BgL_l2573z00_3124;
																																		goto
																																			BgL_zc3anonymousza33097ze3z83_1247;
																																	}
																																}
																														}
																													}
																												}
																											else
																												{	/* Object/creator.scm 394 */
																													BgL_arg3093z00_1238 =
																														BNIL;
																												}
																										}
																										BgL_arg3094z00_1239 =
																											MAKE_PAIR(BgL_newz00_1106,
																											BNIL);
																										BgL_arg3088z00_1233 =
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg3093z00_1238,
																											BgL_arg3094z00_1239);
																									}
																									{	/* Object/creator.scm 390 */
																										obj_t BgL_list3089z00_1234;

																										BgL_list3089z00_1234 =
																											MAKE_PAIR
																											(BgL_arg3088z00_1233,
																											BNIL);
																										BgL_arg3086z00_1231 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg3087z00_1232,
																											BgL_list3089z00_1234);
																									}
																								}
																								BgL_arg3072z00_1218 =
																									MAKE_PAIR(BgL_arg3085z00_1230,
																									BgL_arg3086z00_1231);
																							}
																							{	/* Object/creator.scm 386 */
																								obj_t BgL_list3074z00_1220;

																								{	/* Object/creator.scm 386 */
																									obj_t BgL_arg3075z00_1221;

																									BgL_arg3075z00_1221 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3074z00_1220 =
																										MAKE_PAIR
																										(BgL_arg3072z00_1218,
																										BgL_arg3075z00_1221);
																								}
																								BgL_arg3070z00_1216 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3071z00_1217,
																									BgL_list3074z00_1220);
																							}
																						}
																						BgL_bodyz00_1128 =
																							MAKE_PAIR(BgL_arg3069z00_1215,
																							BgL_arg3070z00_1216);
																					}
																				}
																			}
																		}
																}
																{	/* Object/creator.scm 408 */
																	obj_t BgL_arg2998z00_1129;

																	{	/* Object/creator.scm 408 */
																		obj_t BgL_arg3000z00_1131;

																		obj_t BgL_arg3001z00_1132;

																		BgL_arg3000z00_1131 =
																			CNST_TABLE_REF(((long) 15));
																		{	/* Object/creator.scm 408 */
																			obj_t BgL_list3002z00_1133;

																			{	/* Object/creator.scm 408 */
																				obj_t BgL_arg3003z00_1134;

																				BgL_arg3003z00_1134 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3002z00_1133 =
																					MAKE_PAIR(BgL_bodyz00_1128,
																					BgL_arg3003z00_1134);
																			}
																			BgL_arg3001z00_1132 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_protoz00_1127,
																				BgL_list3002z00_1133);
																		}
																		BgL_arg2998z00_1129 =
																			MAKE_PAIR(BgL_arg3000z00_1131,
																			BgL_arg3001z00_1132);
																	}
																	{	/* Object/creator.scm 408 */
																		obj_t BgL_list2999z00_1130;

																		BgL_list2999z00_1130 =
																			MAKE_PAIR(BgL_srczd2defzd2_54, BNIL);
																		return
																			BGl_epairifyza2za2zztools_miscz00
																			(BgL_arg2998z00_1129,
																			BgL_list2999z00_1130);
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
					}
				}
			}
		}
	}



/* alloc-widening */
	obj_t BGl_alloczd2wideningzd2zzobject_creatorz00(BgL_tclassz00_bglt
		BgL_typez00_2207, obj_t BgL_tidz00_2206)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 364 */
			{

				{	/* Object/creator.scm 367 */
					bool_t BgL_testz00_3143;

					{	/* Object/creator.scm 367 */
						obj_t BgL_arg3006z00_1139;

						BgL_arg3006z00_1139 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_3145;

							BgL_auxz00_3145 = (BgL_backendz00_bglt) (BgL_arg3006z00_1139);
							BgL_testz00_3143 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3145))->
								BgL_pragmazd2supportzd2);
						}
					}
					if (BgL_testz00_3143)
						{	/* Object/creator.scm 367 */
							{	/* Object/creator.scm 358 */
								obj_t BgL_tnamez00_1141;

								obj_t BgL_siza7eofza7_1142;

								{	/* Object/creator.scm 358 */
									obj_t BgL_arg3020z00_1155;

									{
										BgL_typez00_bglt BgL_auxz00_3148;

										BgL_auxz00_3148 = (BgL_typez00_bglt) (BgL_typez00_2207);
										BgL_arg3020z00_1155 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_3148))->BgL_namez00);
									}
									BgL_tnamez00_1141 =
										BGl_stringzd2sanszd2z42z42zztype_toolsz00
										(BgL_arg3020z00_1155);
								}
								{	/* Object/creator.scm 359 */
									bool_t BgL_testz00_3152;

									{	/* Object/creator.scm 359 */
										obj_t BgL_auxz00_3153;

										{
											BgL_typez00_bglt BgL_auxz00_3154;

											BgL_auxz00_3154 = (BgL_typez00_bglt) (BgL_typez00_2207);
											BgL_auxz00_3153 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_3154))->
												BgL_siza7eza7);
										}
										BgL_testz00_3152 = STRINGP(BgL_auxz00_3153);
									}
									if (BgL_testz00_3152)
										{
											BgL_typez00_bglt BgL_auxz00_3158;

											BgL_auxz00_3158 = (BgL_typez00_bglt) (BgL_typez00_2207);
											BgL_siza7eofza7_1142 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_3158))->
												BgL_siza7eza7);
										}
									else
										{
											BgL_typez00_bglt BgL_auxz00_3161;

											BgL_auxz00_3161 = (BgL_typez00_bglt) (BgL_typez00_2207);
											BgL_siza7eofza7_1142 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_3161))->
												BgL_namez00);
										}
								}
								{	/* Object/creator.scm 362 */
									obj_t BgL_arg3008z00_1143;

									obj_t BgL_arg3009z00_1144;

									BgL_arg3008z00_1143 =
										BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF((
												(long) 25)), BgL_tidz00_2206);
									{	/* Object/creator.scm 363 */
										obj_t BgL_arg3010z00_1145;

										{	/* Object/creator.scm 363 */
											obj_t BgL_list3013z00_1148;

											{	/* Object/creator.scm 363 */
												obj_t BgL_arg3015z00_1150;

												{	/* Object/creator.scm 363 */
													obj_t BgL_arg3016z00_1151;

													{	/* Object/creator.scm 363 */
														obj_t BgL_arg3018z00_1153;

														{	/* Object/creator.scm 363 */
															obj_t BgL_arg3019z00_1154;

															BgL_arg3019z00_1154 =
																MAKE_PAIR(BGl_string3526z00zzobject_creatorz00,
																BNIL);
															BgL_arg3018z00_1153 =
																MAKE_PAIR(BgL_siza7eofza7_1142,
																BgL_arg3019z00_1154);
														}
														BgL_arg3016z00_1151 =
															MAKE_PAIR(BGl_string3527z00zzobject_creatorz00,
															BgL_arg3018z00_1153);
													}
													BgL_arg3015z00_1150 =
														MAKE_PAIR(BgL_tnamez00_1141, BgL_arg3016z00_1151);
												}
												BgL_list3013z00_1148 =
													MAKE_PAIR(BGl_string3528z00zzobject_creatorz00,
													BgL_arg3015z00_1150);
											}
											BgL_arg3010z00_1145 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3013z00_1148);
										}
										{	/* Object/creator.scm 362 */
											obj_t BgL_list3012z00_1147;

											BgL_list3012z00_1147 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3009z00_1144 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3010z00_1145, BgL_list3012z00_1147);
									}}
									return MAKE_PAIR(BgL_arg3008z00_1143, BgL_arg3009z00_1144);
								}
							}
						}
					else
						{	/* Object/creator.scm 367 */
							return
								BGl_makezd2privatezd2sexpz00zzast_privatez00(CNST_TABLE_REF((
										(long) 9)), BgL_tidz00_2206, BNIL);
		}}}}
	}



/* make-class-slot-make! */
	obj_t
		BGl_makezd2classzd2slotzd2makez12zc0zzobject_creatorz00(BgL_tclassz00_bglt
		BgL_typez00_56, obj_t BgL_newz00_57, obj_t BgL_ridz00_58,
		obj_t BgL_rtidz00_59, obj_t BgL_slotsz00_60, obj_t BgL_fzd2idszd2_61)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 413 */
			{
				obj_t BgL_slotz00_1308;

				obj_t BgL_formalz00_1309;

				obj_t BgL_flenz00_1310;

				{
					obj_t BgL_slotsz00_1291;

					obj_t BgL_fzd2idszd2_1292;

					obj_t BgL_resz00_1293;

					obj_t BgL_lenzd2idzd2_1294;

					BgL_slotsz00_1291 = BgL_slotsz00_60;
					BgL_fzd2idszd2_1292 = BgL_fzd2idszd2_61;
					BgL_resz00_1293 = BNIL;
					BgL_lenzd2idzd2_1294 = BUNSPEC;
				BgL_zc3anonymousza33131ze3z83_1295:
					if (NULLP(BgL_slotsz00_1291))
						{	/* Object/creator.scm 443 */
							return bgl_reverse_bang(BgL_resz00_1293);
						}
					else
						{	/* Object/creator.scm 445 */
							bool_t BgL_testz00_3180;

							{	/* Object/creator.scm 445 */
								obj_t BgL_arg3142z00_1306;

								BgL_arg3142z00_1306 = CAR(BgL_slotsz00_1291);
								BgL_testz00_3180 =
									BGl_slotzd2virtualzf3z21zzobject_slotsz00(
									(BgL_slotz00_bglt) (BgL_arg3142z00_1306));
							}
							if (BgL_testz00_3180)
								{
									obj_t BgL_slotsz00_3184;

									BgL_slotsz00_3184 = CDR(BgL_slotsz00_1291);
									BgL_slotsz00_1291 = BgL_slotsz00_3184;
									goto BgL_zc3anonymousza33131ze3z83_1295;
								}
							else
								{	/* Object/creator.scm 448 */
									obj_t BgL_arg3135z00_1299;

									obj_t BgL_arg3136z00_1300;

									obj_t BgL_arg3137z00_1301;

									obj_t BgL_arg3138z00_1302;

									BgL_arg3135z00_1299 = CDR(BgL_slotsz00_1291);
									BgL_arg3136z00_1300 = CDR(BgL_fzd2idszd2_1292);
									{	/* Object/creator.scm 450 */
										obj_t BgL_auxz00_3188;

										BgL_slotz00_1308 = CAR(BgL_slotsz00_1291);
										BgL_formalz00_1309 = CAR(BgL_fzd2idszd2_1292);
										BgL_flenz00_1310 = BgL_lenzd2idzd2_1294;
										{	/* Object/creator.scm 415 */
											obj_t BgL_loopz00_1312;

											BgL_loopz00_1312 =
												BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
												(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 26))));
											{	/* Object/creator.scm 417 */
												bool_t BgL_testz00_3192;

												{	/* Object/creator.scm 417 */
													BgL_slotz00_bglt BgL_obj2454z00_2119;

													BgL_obj2454z00_2119 =
														(BgL_slotz00_bglt) (BgL_slotz00_1308);
													BgL_testz00_3192 =
														CBOOL(
														(((BgL_slotz00_bglt) CREF(BgL_obj2454z00_2119))->
															BgL_indexedz00));
												}
												if (BgL_testz00_3192)
													{	/* Object/creator.scm 420 */
														obj_t BgL_arg3145z00_1314;

														obj_t BgL_arg3146z00_1315;

														BgL_arg3145z00_1314 = CNST_TABLE_REF(((long) 22));
														{	/* Object/creator.scm 421 */
															obj_t BgL_arg3147z00_1316;

															obj_t BgL_arg3148z00_1317;

															BgL_arg3147z00_1316 =
																BGl_makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00
																((BgL_typez00_bglt) (BgL_typez00_56),
																(BgL_slotz00_bglt) (BgL_slotz00_1308),
																BgL_newz00_57, BgL_flenz00_1310);
															{	/* Object/creator.scm 423 */
																obj_t BgL_arg3152z00_1321;

																obj_t BgL_arg3153z00_1322;

																BgL_arg3152z00_1321 =
																	CNST_TABLE_REF(((long) 27));
																{	/* Object/creator.scm 423 */
																	obj_t BgL_arg3154z00_1323;

																	obj_t BgL_arg3155z00_1324;

																	{	/* Object/creator.scm 423 */
																		obj_t BgL_arg3160z00_1328;

																		{	/* Object/creator.scm 423 */
																			obj_t BgL_arg3162z00_1330;

																			{	/* Object/creator.scm 423 */
																				obj_t BgL_arg3163z00_1331;

																				obj_t BgL_arg3165z00_1332;

																				BgL_arg3163z00_1331 =
																					MAKE_PAIR(BgL_rtidz00_59, BNIL);
																				{	/* Object/creator.scm 424 */
																					obj_t BgL_arg3170z00_1336;

																					obj_t BgL_arg3171z00_1337;

																					BgL_arg3170z00_1336 =
																						CNST_TABLE_REF(((long) 28));
																					{	/* Object/creator.scm 424 */
																						obj_t BgL_arg3172z00_1338;

																						obj_t BgL_arg3173z00_1339;

																						obj_t BgL_arg3174z00_1340;

																						{	/* Object/creator.scm 424 */
																							obj_t BgL_arg3179z00_1345;

																							obj_t BgL_arg3180z00_1346;

																							BgL_arg3179z00_1345 =
																								CNST_TABLE_REF(((long) 29));
																							{	/* Object/creator.scm 424 */
																								obj_t BgL_list3181z00_1347;

																								{	/* Object/creator.scm 424 */
																									obj_t BgL_arg3182z00_1348;

																									BgL_arg3182z00_1348 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3181z00_1347 =
																										MAKE_PAIR(BgL_flenz00_1310,
																										BgL_arg3182z00_1348);
																								}
																								BgL_arg3180z00_1346 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_ridz00_58,
																									BgL_list3181z00_1347);
																							}
																							BgL_arg3172z00_1338 =
																								MAKE_PAIR(BgL_arg3179z00_1345,
																								BgL_arg3180z00_1346);
																						}
																						{	/* Object/creator.scm 425 */
																							obj_t BgL_arg3183z00_1349;

																							obj_t BgL_arg3184z00_1350;

																							BgL_arg3183z00_1349 =
																								CNST_TABLE_REF(((long) 16));
																							{	/* Object/creator.scm 425 */
																								obj_t BgL_list3185z00_1351;

																								BgL_list3185z00_1351 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3184z00_1350 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 30)),
																									BgL_list3185z00_1351);
																							}
																							BgL_arg3173z00_1339 =
																								MAKE_PAIR(BgL_arg3183z00_1349,
																								BgL_arg3184z00_1350);
																						}
																						{	/* Object/creator.scm 426 */
																							obj_t BgL_arg3186z00_1352;

																							obj_t BgL_arg3187z00_1353;

																							BgL_arg3186z00_1352 =
																								CNST_TABLE_REF(((long) 22));
																							{	/* Object/creator.scm 427 */
																								obj_t BgL_arg3189z00_1354;

																								obj_t BgL_arg3190z00_1355;

																								BgL_arg3189z00_1354 =
																									BGl_makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00
																									((BgL_typez00_bglt)
																									(BgL_typez00_56),
																									(BgL_slotz00_bglt)
																									(BgL_slotz00_1308),
																									BgL_newz00_57,
																									BgL_formalz00_1309,
																									BgL_ridz00_58, BFALSE);
																								{	/* Object/creator.scm 434 */
																									obj_t BgL_arg3194z00_1359;

																									{	/* Object/creator.scm 434 */
																										obj_t BgL_arg3195z00_1360;

																										{	/* Object/creator.scm 434 */
																											obj_t BgL_arg3198z00_1363;

																											obj_t BgL_arg3199z00_1364;

																											BgL_arg3198z00_1363 =
																												CNST_TABLE_REF(((long)
																													31));
																											{	/* Object/creator.scm 434 */
																												obj_t
																													BgL_list3200z00_1365;
																												{	/* Object/creator.scm 434 */
																													obj_t
																														BgL_arg3202z00_1367;
																													BgL_arg3202z00_1367 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list3200z00_1365 =
																														MAKE_PAIR(BINT((
																																(long) 1)),
																														BgL_arg3202z00_1367);
																												}
																												BgL_arg3199z00_1364 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_ridz00_58,
																													BgL_list3200z00_1365);
																											}
																											BgL_arg3195z00_1360 =
																												MAKE_PAIR
																												(BgL_arg3198z00_1363,
																												BgL_arg3199z00_1364);
																										}
																										{	/* Object/creator.scm 434 */
																											obj_t
																												BgL_list3197z00_1362;
																											BgL_list3197z00_1362 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg3194z00_1359 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3195z00_1360,
																												BgL_list3197z00_1362);
																									}}
																									BgL_arg3190z00_1355 =
																										MAKE_PAIR(BgL_loopz00_1312,
																										BgL_arg3194z00_1359);
																								}
																								{	/* Object/creator.scm 426 */
																									obj_t BgL_list3192z00_1357;

																									{	/* Object/creator.scm 426 */
																										obj_t BgL_arg3193z00_1358;

																										BgL_arg3193z00_1358 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3192z00_1357 =
																											MAKE_PAIR
																											(BgL_arg3190z00_1355,
																											BgL_arg3193z00_1358);
																									}
																									BgL_arg3187z00_1353 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3189z00_1354,
																										BgL_list3192z00_1357);
																							}}
																							BgL_arg3174z00_1340 =
																								MAKE_PAIR(BgL_arg3186z00_1352,
																								BgL_arg3187z00_1353);
																						}
																						{	/* Object/creator.scm 424 */
																							obj_t BgL_list3176z00_1342;

																							{	/* Object/creator.scm 424 */
																								obj_t BgL_arg3177z00_1343;

																								{	/* Object/creator.scm 424 */
																									obj_t BgL_arg3178z00_1344;

																									BgL_arg3178z00_1344 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3177z00_1343 =
																										MAKE_PAIR
																										(BgL_arg3174z00_1340,
																										BgL_arg3178z00_1344);
																								}
																								BgL_list3176z00_1342 =
																									MAKE_PAIR(BgL_arg3173z00_1339,
																									BgL_arg3177z00_1343);
																							}
																							BgL_arg3171z00_1337 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3172z00_1338,
																								BgL_list3176z00_1342);
																					}}
																					BgL_arg3165z00_1332 =
																						MAKE_PAIR(BgL_arg3170z00_1336,
																						BgL_arg3171z00_1337);
																				}
																				{	/* Object/creator.scm 423 */
																					obj_t BgL_list3168z00_1334;

																					{	/* Object/creator.scm 423 */
																						obj_t BgL_arg3169z00_1335;

																						BgL_arg3169z00_1335 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3168z00_1334 =
																							MAKE_PAIR(BgL_arg3165z00_1332,
																							BgL_arg3169z00_1335);
																					}
																					BgL_arg3162z00_1330 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3163z00_1331,
																						BgL_list3168z00_1334);
																			}}
																			BgL_arg3160z00_1328 =
																				MAKE_PAIR(BgL_loopz00_1312,
																				BgL_arg3162z00_1330);
																		}
																		BgL_arg3154z00_1323 =
																			MAKE_PAIR(BgL_arg3160z00_1328, BNIL);
																	}
																	{	/* Object/creator.scm 435 */
																		obj_t BgL_arg3203z00_1368;

																		{	/* Object/creator.scm 435 */
																			obj_t BgL_list3204z00_1369;

																			BgL_list3204z00_1369 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3203z00_1368 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BINT(((long) 0)),
																				BgL_list3204z00_1369);
																		}
																		BgL_arg3155z00_1324 =
																			MAKE_PAIR(BgL_loopz00_1312,
																			BgL_arg3203z00_1368);
																	}
																	{	/* Object/creator.scm 423 */
																		obj_t BgL_list3158z00_1326;

																		{	/* Object/creator.scm 423 */
																			obj_t BgL_arg3159z00_1327;

																			BgL_arg3159z00_1327 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3158z00_1326 =
																				MAKE_PAIR(BgL_arg3155z00_1324,
																				BgL_arg3159z00_1327);
																		}
																		BgL_arg3153z00_1322 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3154z00_1323,
																			BgL_list3158z00_1326);
																}}
																BgL_arg3148z00_1317 =
																	MAKE_PAIR(BgL_arg3152z00_1321,
																	BgL_arg3153z00_1322);
															}
															{	/* Object/creator.scm 420 */
																obj_t BgL_list3150z00_1319;

																{	/* Object/creator.scm 420 */
																	obj_t BgL_arg3151z00_1320;

																	BgL_arg3151z00_1320 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3150z00_1319 =
																		MAKE_PAIR(BgL_arg3148z00_1317,
																		BgL_arg3151z00_1320);
																}
																BgL_arg3146z00_1315 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3147z00_1316, BgL_list3150z00_1319);
														}}
														BgL_auxz00_3188 =
															MAKE_PAIR(BgL_arg3145z00_1314,
															BgL_arg3146z00_1315);
													}
												else
													{	/* Object/creator.scm 417 */
														BgL_auxz00_3188 =
															BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00
															((BgL_typez00_bglt) (BgL_typez00_56),
															(BgL_slotz00_bglt) (BgL_slotz00_1308),
															BgL_newz00_57, BgL_formalz00_1309);
													}
											}
										}
										BgL_arg3137z00_1301 =
											MAKE_PAIR(BgL_auxz00_3188, BgL_resz00_1293);
									}
									BgL_arg3138z00_1302 = CAR(BgL_fzd2idszd2_1292);
									{
										obj_t BgL_lenzd2idzd2_3262;

										obj_t BgL_resz00_3261;

										obj_t BgL_fzd2idszd2_3260;

										obj_t BgL_slotsz00_3259;

										BgL_slotsz00_3259 = BgL_arg3135z00_1299;
										BgL_fzd2idszd2_3260 = BgL_arg3136z00_1300;
										BgL_resz00_3261 = BgL_arg3137z00_1301;
										BgL_lenzd2idzd2_3262 = BgL_arg3138z00_1302;
										BgL_lenzd2idzd2_1294 = BgL_lenzd2idzd2_3262;
										BgL_resz00_1293 = BgL_resz00_3261;
										BgL_fzd2idszd2_1292 = BgL_fzd2idszd2_3260;
										BgL_slotsz00_1291 = BgL_slotsz00_3259;
										goto BgL_zc3anonymousza33131ze3z83_1295;
									}
								}
						}
				}
			}
		}
	}



/* gen-class-allocate! */
	obj_t BGl_genzd2classzd2allocatez12z12zzobject_creatorz00(obj_t BgL_idz00_62,
		obj_t BgL_typez00_63, BgL_globalz00_bglt BgL_holderz00_64,
		obj_t BgL_srczd2defzd2_65, obj_t BgL_importz00_66)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 456 */
			{	/* Object/creator.scm 457 */
				obj_t BgL_tidz00_1372;

				{
					BgL_typez00_bglt BgL_auxz00_3263;

					BgL_auxz00_3263 = (BgL_typez00_bglt) (BgL_typez00_63);
					BgL_tidz00_1372 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_3263))->BgL_idz00);
				}
				{	/* Object/creator.scm 457 */
					obj_t BgL_alloczd2idzd2_1373;

					{	/* Object/creator.scm 458 */
						obj_t BgL_arg3343z00_1520;

						{	/* Object/creator.scm 458 */
							obj_t BgL_arg3345z00_1521;

							obj_t BgL_arg3346z00_1522;

							{	/* Object/creator.scm 458 */
								obj_t BgL_res3518z00_2123;

								{	/* Object/creator.scm 458 */
									obj_t BgL_symbolz00_2121;

									BgL_symbolz00_2121 = CNST_TABLE_REF(((long) 7));
									{	/* Object/creator.scm 458 */
										obj_t BgL_arg2063z00_2122;

										BgL_arg2063z00_2122 = SYMBOL_TO_STRING(BgL_symbolz00_2121);
										BgL_res3518z00_2123 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_2122);
								}}
								BgL_arg3345z00_1521 = BgL_res3518z00_2123;
							}
							{	/* Object/creator.scm 458 */
								obj_t BgL_res3519z00_2126;

								{	/* Object/creator.scm 458 */
									obj_t BgL_arg2063z00_2125;

									BgL_arg2063z00_2125 = SYMBOL_TO_STRING(BgL_idz00_62);
									BgL_res3519z00_2126 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_2125);
								}
								BgL_arg3346z00_1522 = BgL_res3519z00_2126;
							}
							{	/* Object/creator.scm 458 */
								obj_t BgL_list3347z00_1523;

								{	/* Object/creator.scm 458 */
									obj_t BgL_arg3348z00_1524;

									BgL_arg3348z00_1524 = MAKE_PAIR(BgL_arg3346z00_1522, BNIL);
									BgL_list3347z00_1523 =
										MAKE_PAIR(BgL_arg3345z00_1521, BgL_arg3348z00_1524);
								}
								BgL_arg3343z00_1520 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3347z00_1523);
						}}
						BgL_alloczd2idzd2_1373 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg3343z00_1520));
					}
					{	/* Object/creator.scm 458 */
						obj_t BgL_alloczd2tidzd2_1374;

						BgL_alloczd2tidzd2_1374 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_alloczd2idzd2_1373,
							BgL_tidz00_1372);
						{	/* Object/creator.scm 459 */
							obj_t BgL_newz00_1375;

							BgL_newz00_1375 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											9))));
							{	/* Object/creator.scm 460 */

								{
									obj_t BgL_typez00_1391;

									{	/* Object/creator.scm 490 */
										obj_t BgL_arg3206z00_1379;

										{	/* Object/creator.scm 490 */
											obj_t BgL_arg3207z00_1380;

											{	/* Object/creator.scm 490 */
												obj_t BgL_arg3208z00_1381;

												{	/* Object/creator.scm 490 */
													obj_t BgL_arg3211z00_1384;

													obj_t BgL_arg3212z00_1385;

													BgL_arg3211z00_1384 = CNST_TABLE_REF(((long) 11));
													{	/* Object/creator.scm 490 */
														obj_t BgL_list3213z00_1386;

														BgL_list3213z00_1386 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3212z00_1385 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_alloczd2tidzd2_1374, BgL_list3213z00_1386);
													}
													BgL_arg3208z00_1381 =
														MAKE_PAIR(BgL_arg3211z00_1384, BgL_arg3212z00_1385);
												}
												{	/* Object/creator.scm 490 */
													obj_t BgL_list3210z00_1383;

													BgL_list3210z00_1383 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3207z00_1380 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3208z00_1381, BgL_list3210z00_1383);
											}}
											BgL_arg3206z00_1379 =
												MAKE_PAIR(BgL_importz00_66, BgL_arg3207z00_1380);
										}
										BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
											(BgL_arg3206z00_1379);
									}
									{	/* Object/creator.scm 491 */
										obj_t BgL_arg3214z00_1387;

										{	/* Object/creator.scm 491 */
											bool_t BgL_testz00_3288;

											{	/* Object/creator.scm 491 */
												obj_t BgL_arg3217z00_1390;

												BgL_arg3217z00_1390 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{
													BgL_backendz00_bglt BgL_auxz00_3290;

													BgL_auxz00_3290 =
														(BgL_backendz00_bglt) (BgL_arg3217z00_1390);
													BgL_testz00_3288 =
														(((BgL_backendz00_bglt) CREF(BgL_auxz00_3290))->
														BgL_pragmazd2supportzd2);
											}}
											if (BgL_testz00_3288)
												{	/* Object/creator.scm 491 */
													{	/* Object/creator.scm 471 */
														obj_t BgL_arg3236z00_1412;

														obj_t BgL_arg3237z00_1413;

														BgL_arg3236z00_1412 = CNST_TABLE_REF(((long) 8));
														{	/* Object/creator.scm 471 */
															obj_t BgL_arg3238z00_1414;

															obj_t BgL_arg3239z00_1415;

															BgL_arg3238z00_1414 =
																MAKE_PAIR(BgL_alloczd2tidzd2_1374, BNIL);
															{	/* Object/creator.scm 472 */
																obj_t BgL_arg3243z00_1419;

																obj_t BgL_arg3244z00_1420;

																BgL_arg3243z00_1419 =
																	CNST_TABLE_REF(((long) 20));
																{	/* Object/creator.scm 472 */
																	obj_t BgL_arg3245z00_1421;

																	obj_t BgL_arg3246z00_1422;

																	obj_t BgL_arg3247z00_1423;

																	{	/* Object/creator.scm 472 */
																		obj_t BgL_arg3253z00_1429;

																		{	/* Object/creator.scm 472 */
																			obj_t BgL_arg3255z00_1431;

																			obj_t BgL_arg3256z00_1432;

																			BgL_arg3255z00_1431 =
																				BGl_makezd2typedzd2identz00zzast_identz00
																				(BgL_newz00_1375, BgL_tidz00_1372);
																			{	/* Object/creator.scm 472 */
																				obj_t BgL_arg3257z00_1433;

																				BgL_typez00_1391 = BgL_typez00_63;
																				{	/* Object/creator.scm 462 */
																					obj_t BgL_tidz00_1393;

																					obj_t BgL_tnamez00_1394;

																					obj_t BgL_siza7eofza7_1395;

																					{
																						BgL_typez00_bglt BgL_auxz00_3297;

																						BgL_auxz00_3297 =
																							(BgL_typez00_bglt)
																							(BgL_typez00_1391);
																						BgL_tidz00_1393 =
																							(((BgL_typez00_bglt)
																								CREF(BgL_auxz00_3297))->
																							BgL_idz00);
																					}
																					{	/* Object/creator.scm 463 */
																						obj_t BgL_arg3232z00_1408;

																						{
																							BgL_typez00_bglt BgL_auxz00_3300;

																							BgL_auxz00_3300 =
																								(BgL_typez00_bglt)
																								(BgL_typez00_1391);
																							BgL_arg3232z00_1408 =
																								(((BgL_typez00_bglt)
																									CREF(BgL_auxz00_3300))->
																								BgL_namez00);
																						}
																						BgL_tnamez00_1394 =
																							BGl_stringzd2sanszd2z42z42zztype_toolsz00
																							(BgL_arg3232z00_1408);
																					}
																					{	/* Object/creator.scm 464 */
																						bool_t BgL_testz00_3304;

																						{	/* Object/creator.scm 464 */
																							obj_t BgL_auxz00_3305;

																							{
																								BgL_typez00_bglt
																									BgL_auxz00_3306;
																								BgL_auxz00_3306 =
																									(BgL_typez00_bglt)
																									(BgL_typez00_1391);
																								BgL_auxz00_3305 =
																									(((BgL_typez00_bglt)
																										CREF(BgL_auxz00_3306))->
																									BgL_siza7eza7);
																							}
																							BgL_testz00_3304 =
																								STRINGP(BgL_auxz00_3305);
																						}
																						if (BgL_testz00_3304)
																							{
																								BgL_typez00_bglt
																									BgL_auxz00_3310;
																								BgL_auxz00_3310 =
																									(BgL_typez00_bglt)
																									(BgL_typez00_1391);
																								BgL_siza7eofza7_1395 =
																									(((BgL_typez00_bglt)
																										CREF(BgL_auxz00_3310))->
																									BgL_siza7eza7);
																							}
																						else
																							{
																								BgL_typez00_bglt
																									BgL_auxz00_3313;
																								BgL_auxz00_3313 =
																									(BgL_typez00_bglt)
																									(BgL_typez00_1391);
																								BgL_siza7eofza7_1395 =
																									(((BgL_typez00_bglt)
																										CREF(BgL_auxz00_3313))->
																									BgL_namez00);
																							}
																					}
																					{	/* Object/creator.scm 467 */
																						obj_t BgL_arg3219z00_1396;

																						obj_t BgL_arg3220z00_1397;

																						BgL_arg3219z00_1396 =
																							BGl_makezd2typedzd2identz00zzast_identz00
																							(CNST_TABLE_REF(((long) 25)),
																							BgL_tidz00_1393);
																						{	/* Object/creator.scm 468 */
																							obj_t BgL_arg3221z00_1398;

																							{	/* Object/creator.scm 468 */
																								obj_t BgL_list3224z00_1401;

																								{	/* Object/creator.scm 468 */
																									obj_t BgL_arg3227z00_1403;

																									{	/* Object/creator.scm 468 */
																										obj_t BgL_arg3228z00_1404;

																										{	/* Object/creator.scm 468 */
																											obj_t BgL_arg3230z00_1406;

																											{	/* Object/creator.scm 468 */
																												obj_t
																													BgL_arg3231z00_1407;
																												BgL_arg3231z00_1407 =
																													MAKE_PAIR
																													(BGl_string3529z00zzobject_creatorz00,
																													BNIL);
																												BgL_arg3230z00_1406 =
																													MAKE_PAIR
																													(BgL_siza7eofza7_1395,
																													BgL_arg3231z00_1407);
																											}
																											BgL_arg3228z00_1404 =
																												MAKE_PAIR
																												(BGl_string3530z00zzobject_creatorz00,
																												BgL_arg3230z00_1406);
																										}
																										BgL_arg3227z00_1403 =
																											MAKE_PAIR
																											(BgL_tnamez00_1394,
																											BgL_arg3228z00_1404);
																									}
																									BgL_list3224z00_1401 =
																										MAKE_PAIR
																										(BGl_string3528z00zzobject_creatorz00,
																										BgL_arg3227z00_1403);
																								}
																								BgL_arg3221z00_1398 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list3224z00_1401);
																							}
																							{	/* Object/creator.scm 467 */
																								obj_t BgL_list3223z00_1400;

																								BgL_list3223z00_1400 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3220z00_1397 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3221z00_1398,
																									BgL_list3223z00_1400);
																						}}
																						BgL_arg3257z00_1433 =
																							MAKE_PAIR(BgL_arg3219z00_1396,
																							BgL_arg3220z00_1397);
																				}}
																				{	/* Object/creator.scm 472 */
																					obj_t BgL_list3259z00_1435;

																					BgL_list3259z00_1435 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3256z00_1432 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3257z00_1433,
																						BgL_list3259z00_1435);
																			}}
																			BgL_arg3253z00_1429 =
																				MAKE_PAIR(BgL_arg3255z00_1431,
																				BgL_arg3256z00_1432);
																		}
																		BgL_arg3245z00_1421 =
																			MAKE_PAIR(BgL_arg3253z00_1429, BNIL);
																	}
																	{	/* Object/creator.scm 473 */
																		obj_t BgL_arg3260z00_1436;

																		obj_t BgL_arg3261z00_1437;

																		BgL_arg3260z00_1436 =
																			CNST_TABLE_REF(((long) 32));
																		{	/* Object/creator.scm 474 */
																			obj_t BgL_arg3262z00_1438;

																			{	/* Object/creator.scm 474 */
																				obj_t BgL_arg3266z00_1442;

																				obj_t BgL_arg3267z00_1443;

																				{	/* Object/creator.scm 474 */
																					obj_t BgL_arg3268z00_1444;

																					obj_t BgL_arg3269z00_1445;

																					BgL_arg3268z00_1444 =
																						CNST_TABLE_REF(((long) 33));
																					{	/* Object/creator.scm 474 */
																						obj_t BgL_list3270z00_1446;

																						{	/* Object/creator.scm 474 */
																							obj_t BgL_arg3271z00_1447;

																							obj_t BgL_arg3272z00_1448;

																							BgL_arg3271z00_1447 =
																								CNST_TABLE_REF(((long) 34));
																							BgL_arg3272z00_1448 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3270z00_1446 =
																								MAKE_PAIR(BgL_arg3271z00_1447,
																								BgL_arg3272z00_1448);
																						}
																						BgL_arg3269z00_1445 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 35)),
																							BgL_list3270z00_1446);
																					}
																					BgL_arg3266z00_1442 =
																						MAKE_PAIR(BgL_arg3268z00_1444,
																						BgL_arg3269z00_1445);
																				}
																				{	/* Object/creator.scm 475 */
																					obj_t BgL_arg3273z00_1449;

																					{	/* Object/creator.scm 475 */
																						obj_t BgL_arg3276z00_1452;

																						obj_t BgL_arg3277z00_1453;

																						BgL_arg3276z00_1452 =
																							CNST_TABLE_REF(((long) 33));
																						{	/* Object/creator.scm 475 */
																							obj_t BgL_arg3278z00_1454;

																							obj_t BgL_arg3279z00_1455;

																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_3340;
																								BgL_auxz00_3340 =
																									(BgL_variablez00_bglt)
																									(BgL_holderz00_64);
																								BgL_arg3278z00_1454 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_3340))->
																									BgL_idz00);
																							}
																							BgL_arg3279z00_1455 =
																								(((BgL_globalz00_bglt)
																									CREF(BgL_holderz00_64))->
																								BgL_modulez00);
																							{	/* Object/creator.scm 475 */
																								obj_t BgL_list3281z00_1457;

																								{	/* Object/creator.scm 475 */
																									obj_t BgL_arg3282z00_1458;

																									BgL_arg3282z00_1458 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3281z00_1457 =
																										MAKE_PAIR
																										(BgL_arg3279z00_1455,
																										BgL_arg3282z00_1458);
																								}
																								BgL_arg3277z00_1453 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3278z00_1454,
																									BgL_list3281z00_1457);
																						}}
																						BgL_arg3273z00_1449 =
																							MAKE_PAIR(BgL_arg3276z00_1452,
																							BgL_arg3277z00_1453);
																					}
																					{	/* Object/creator.scm 474 */
																						obj_t BgL_list3275z00_1451;

																						BgL_list3275z00_1451 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3267z00_1443 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3273z00_1449,
																							BgL_list3275z00_1451);
																				}}
																				BgL_arg3262z00_1438 =
																					MAKE_PAIR(BgL_arg3266z00_1442,
																					BgL_arg3267z00_1443);
																			}
																			{	/* Object/creator.scm 473 */
																				obj_t BgL_list3264z00_1440;

																				{	/* Object/creator.scm 473 */
																					obj_t BgL_arg3265z00_1441;

																					BgL_arg3265z00_1441 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3264z00_1440 =
																						MAKE_PAIR(BgL_arg3262z00_1438,
																						BgL_arg3265z00_1441);
																				}
																				BgL_arg3261z00_1437 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_newz00_1375,
																					BgL_list3264z00_1440);
																		}}
																		BgL_arg3246z00_1422 =
																			MAKE_PAIR(BgL_arg3260z00_1436,
																			BgL_arg3261z00_1437);
																	}
																	{	/* Object/creator.scm 477 */
																		obj_t BgL_arg3283z00_1459;

																		obj_t BgL_arg3284z00_1460;

																		BgL_arg3283z00_1459 =
																			CNST_TABLE_REF(((long) 36));
																		{	/* Object/creator.scm 477 */
																			obj_t BgL_list3285z00_1461;

																			{	/* Object/creator.scm 477 */
																				obj_t BgL_arg3286z00_1462;

																				BgL_arg3286z00_1462 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3285z00_1461 =
																					MAKE_PAIR(BFALSE,
																					BgL_arg3286z00_1462);
																			}
																			BgL_arg3284z00_1460 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_newz00_1375, BgL_list3285z00_1461);
																		}
																		BgL_arg3247z00_1423 =
																			MAKE_PAIR(BgL_arg3283z00_1459,
																			BgL_arg3284z00_1460);
																	}
																	{	/* Object/creator.scm 472 */
																		obj_t BgL_list3249z00_1425;

																		{	/* Object/creator.scm 472 */
																			obj_t BgL_arg3250z00_1426;

																			{	/* Object/creator.scm 472 */
																				obj_t BgL_arg3251z00_1427;

																				{	/* Object/creator.scm 472 */
																					obj_t BgL_arg3252z00_1428;

																					BgL_arg3252z00_1428 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3251z00_1427 =
																						MAKE_PAIR(BgL_newz00_1375,
																						BgL_arg3252z00_1428);
																				}
																				BgL_arg3250z00_1426 =
																					MAKE_PAIR(BgL_arg3247z00_1423,
																					BgL_arg3251z00_1427);
																			}
																			BgL_list3249z00_1425 =
																				MAKE_PAIR(BgL_arg3246z00_1422,
																				BgL_arg3250z00_1426);
																		}
																		BgL_arg3244z00_1420 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3245z00_1421,
																			BgL_list3249z00_1425);
																}}
																BgL_arg3239z00_1415 =
																	MAKE_PAIR(BgL_arg3243z00_1419,
																	BgL_arg3244z00_1420);
															}
															{	/* Object/creator.scm 471 */
																obj_t BgL_list3241z00_1417;

																{	/* Object/creator.scm 471 */
																	obj_t BgL_arg3242z00_1418;

																	BgL_arg3242z00_1418 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3241z00_1417 =
																		MAKE_PAIR(BgL_arg3239z00_1415,
																		BgL_arg3242z00_1418);
																}
																BgL_arg3237z00_1413 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3238z00_1414, BgL_list3241z00_1417);
														}}
														BgL_arg3214z00_1387 =
															MAKE_PAIR(BgL_arg3236z00_1412,
															BgL_arg3237z00_1413);
												}}
											else
												{	/* Object/creator.scm 491 */
													{	/* Object/creator.scm 480 */
														obj_t BgL_arg3288z00_1464;

														obj_t BgL_arg3289z00_1465;

														BgL_arg3288z00_1464 = CNST_TABLE_REF(((long) 8));
														{	/* Object/creator.scm 480 */
															obj_t BgL_arg3290z00_1466;

															obj_t BgL_arg3291z00_1467;

															BgL_arg3290z00_1466 =
																MAKE_PAIR(BgL_alloczd2tidzd2_1374, BNIL);
															{	/* Object/creator.scm 481 */
																obj_t BgL_arg3295z00_1471;

																obj_t BgL_arg3296z00_1472;

																BgL_arg3295z00_1471 =
																	CNST_TABLE_REF(((long) 20));
																{	/* Object/creator.scm 481 */
																	obj_t BgL_arg3297z00_1473;

																	obj_t BgL_arg3298z00_1474;

																	obj_t BgL_arg3299z00_1475;

																	{	/* Object/creator.scm 481 */
																		obj_t BgL_arg3305z00_1481;

																		{	/* Object/creator.scm 481 */
																			obj_t BgL_arg3307z00_1483;

																			obj_t BgL_arg3308z00_1484;

																			BgL_arg3307z00_1483 =
																				BGl_makezd2typedzd2identz00zzast_identz00
																				(BgL_newz00_1375, BgL_tidz00_1372);
																			{	/* Object/creator.scm 482 */
																				obj_t BgL_arg3309z00_1485;

																				BgL_arg3309z00_1485 =
																					BGl_makezd2privatezd2sexpz00zzast_privatez00
																					(CNST_TABLE_REF(((long) 9)),
																					BgL_tidz00_1372, BNIL);
																				{	/* Object/creator.scm 481 */
																					obj_t BgL_list3311z00_1487;

																					BgL_list3311z00_1487 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3308z00_1484 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3309z00_1485,
																						BgL_list3311z00_1487);
																			}}
																			BgL_arg3305z00_1481 =
																				MAKE_PAIR(BgL_arg3307z00_1483,
																				BgL_arg3308z00_1484);
																		}
																		BgL_arg3297z00_1473 =
																			MAKE_PAIR(BgL_arg3305z00_1481, BNIL);
																	}
																	{	/* Object/creator.scm 483 */
																		obj_t BgL_arg3313z00_1489;

																		obj_t BgL_arg3314z00_1490;

																		BgL_arg3313z00_1489 =
																			CNST_TABLE_REF(((long) 32));
																		{	/* Object/creator.scm 484 */
																			obj_t BgL_arg3315z00_1491;

																			{	/* Object/creator.scm 484 */
																				obj_t BgL_arg3319z00_1495;

																				obj_t BgL_arg3320z00_1496;

																				{	/* Object/creator.scm 484 */
																					obj_t BgL_arg3321z00_1497;

																					obj_t BgL_arg3324z00_1498;

																					BgL_arg3321z00_1497 =
																						CNST_TABLE_REF(((long) 33));
																					{	/* Object/creator.scm 484 */
																						obj_t BgL_list3325z00_1499;

																						{	/* Object/creator.scm 484 */
																							obj_t BgL_arg3326z00_1500;

																							obj_t BgL_arg3327z00_1501;

																							BgL_arg3326z00_1500 =
																								CNST_TABLE_REF(((long) 34));
																							BgL_arg3327z00_1501 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3325z00_1499 =
																								MAKE_PAIR(BgL_arg3326z00_1500,
																								BgL_arg3327z00_1501);
																						}
																						BgL_arg3324z00_1498 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 35)),
																							BgL_list3325z00_1499);
																					}
																					BgL_arg3319z00_1495 =
																						MAKE_PAIR(BgL_arg3321z00_1497,
																						BgL_arg3324z00_1498);
																				}
																				{	/* Object/creator.scm 485 */
																					obj_t BgL_arg3328z00_1502;

																					{	/* Object/creator.scm 485 */
																						obj_t BgL_arg3331z00_1505;

																						obj_t BgL_arg3332z00_1506;

																						BgL_arg3331z00_1505 =
																							CNST_TABLE_REF(((long) 33));
																						{	/* Object/creator.scm 485 */
																							obj_t BgL_arg3333z00_1507;

																							obj_t BgL_arg3334z00_1508;

																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_3389;
																								BgL_auxz00_3389 =
																									(BgL_variablez00_bglt)
																									(BgL_holderz00_64);
																								BgL_arg3333z00_1507 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_3389))->
																									BgL_idz00);
																							}
																							BgL_arg3334z00_1508 =
																								(((BgL_globalz00_bglt)
																									CREF(BgL_holderz00_64))->
																								BgL_modulez00);
																							{	/* Object/creator.scm 485 */
																								obj_t BgL_list3336z00_1510;

																								{	/* Object/creator.scm 485 */
																									obj_t BgL_arg3337z00_1511;

																									BgL_arg3337z00_1511 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3336z00_1510 =
																										MAKE_PAIR
																										(BgL_arg3334z00_1508,
																										BgL_arg3337z00_1511);
																								}
																								BgL_arg3332z00_1506 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3333z00_1507,
																									BgL_list3336z00_1510);
																						}}
																						BgL_arg3328z00_1502 =
																							MAKE_PAIR(BgL_arg3331z00_1505,
																							BgL_arg3332z00_1506);
																					}
																					{	/* Object/creator.scm 484 */
																						obj_t BgL_list3330z00_1504;

																						BgL_list3330z00_1504 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3320z00_1496 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3328z00_1502,
																							BgL_list3330z00_1504);
																				}}
																				BgL_arg3315z00_1491 =
																					MAKE_PAIR(BgL_arg3319z00_1495,
																					BgL_arg3320z00_1496);
																			}
																			{	/* Object/creator.scm 483 */
																				obj_t BgL_list3317z00_1493;

																				{	/* Object/creator.scm 483 */
																					obj_t BgL_arg3318z00_1494;

																					BgL_arg3318z00_1494 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3317z00_1493 =
																						MAKE_PAIR(BgL_arg3315z00_1491,
																						BgL_arg3318z00_1494);
																				}
																				BgL_arg3314z00_1490 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_newz00_1375,
																					BgL_list3317z00_1493);
																		}}
																		BgL_arg3298z00_1474 =
																			MAKE_PAIR(BgL_arg3313z00_1489,
																			BgL_arg3314z00_1490);
																	}
																	{	/* Object/creator.scm 487 */
																		obj_t BgL_arg3338z00_1512;

																		obj_t BgL_arg3339z00_1513;

																		BgL_arg3338z00_1512 =
																			CNST_TABLE_REF(((long) 36));
																		{	/* Object/creator.scm 487 */
																			obj_t BgL_list3340z00_1514;

																			{	/* Object/creator.scm 487 */
																				obj_t BgL_arg3341z00_1515;

																				BgL_arg3341z00_1515 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3340z00_1514 =
																					MAKE_PAIR(BFALSE,
																					BgL_arg3341z00_1515);
																			}
																			BgL_arg3339z00_1513 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_newz00_1375, BgL_list3340z00_1514);
																		}
																		BgL_arg3299z00_1475 =
																			MAKE_PAIR(BgL_arg3338z00_1512,
																			BgL_arg3339z00_1513);
																	}
																	{	/* Object/creator.scm 481 */
																		obj_t BgL_list3301z00_1477;

																		{	/* Object/creator.scm 481 */
																			obj_t BgL_arg3302z00_1478;

																			{	/* Object/creator.scm 481 */
																				obj_t BgL_arg3303z00_1479;

																				{	/* Object/creator.scm 481 */
																					obj_t BgL_arg3304z00_1480;

																					BgL_arg3304z00_1480 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3303z00_1479 =
																						MAKE_PAIR(BgL_newz00_1375,
																						BgL_arg3304z00_1480);
																				}
																				BgL_arg3302z00_1478 =
																					MAKE_PAIR(BgL_arg3299z00_1475,
																					BgL_arg3303z00_1479);
																			}
																			BgL_list3301z00_1477 =
																				MAKE_PAIR(BgL_arg3298z00_1474,
																				BgL_arg3302z00_1478);
																		}
																		BgL_arg3296z00_1472 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3297z00_1473,
																			BgL_list3301z00_1477);
																}}
																BgL_arg3291z00_1467 =
																	MAKE_PAIR(BgL_arg3295z00_1471,
																	BgL_arg3296z00_1472);
															}
															{	/* Object/creator.scm 480 */
																obj_t BgL_list3293z00_1469;

																{	/* Object/creator.scm 480 */
																	obj_t BgL_arg3294z00_1470;

																	BgL_arg3294z00_1470 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3293z00_1469 =
																		MAKE_PAIR(BgL_arg3291z00_1467,
																		BgL_arg3294z00_1470);
																}
																BgL_arg3289z00_1465 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3290z00_1466, BgL_list3293z00_1469);
														}}
														BgL_arg3214z00_1387 =
															MAKE_PAIR(BgL_arg3288z00_1464,
															BgL_arg3289z00_1465);
										}}}
										{	/* Object/creator.scm 491 */
											obj_t BgL_list3215z00_1388;

											BgL_list3215z00_1388 =
												MAKE_PAIR(BgL_srczd2defzd2_65, BNIL);
											return
												BGl_epairifyza2za2zztools_miscz00(BgL_arg3214z00_1387,
												BgL_list3215z00_1388);
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



/* gen-wide-class-make! */
	obj_t BGl_genzd2widezd2classzd2makez12zc0zzobject_creatorz00(obj_t
		BgL_idz00_67, BgL_tclassz00_bglt BgL_typez00_68, obj_t BgL_srczd2defzd2_69,
		obj_t BgL_importz00_70)
	{
		AN_OBJECT;
		{	/* Object/creator.scm 499 */
			{	/* Object/creator.scm 500 */
				obj_t BgL_mkzd2heapzd2idz00_1525;

				{	/* Object/creator.scm 500 */
					obj_t BgL_arg3458z00_1657;

					{	/* Object/creator.scm 500 */
						obj_t BgL_arg3459z00_1658;

						obj_t BgL_arg3460z00_1659;

						{	/* Object/creator.scm 500 */
							obj_t BgL_res3520z00_2141;

							{	/* Object/creator.scm 500 */
								obj_t BgL_symbolz00_2139;

								BgL_symbolz00_2139 = CNST_TABLE_REF(((long) 3));
								{	/* Object/creator.scm 500 */
									obj_t BgL_arg2063z00_2140;

									BgL_arg2063z00_2140 = SYMBOL_TO_STRING(BgL_symbolz00_2139);
									BgL_res3520z00_2141 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_2140);
							}}
							BgL_arg3459z00_1658 = BgL_res3520z00_2141;
						}
						{	/* Object/creator.scm 500 */
							obj_t BgL_res3521z00_2144;

							{	/* Object/creator.scm 500 */
								obj_t BgL_arg2063z00_2143;

								BgL_arg2063z00_2143 = SYMBOL_TO_STRING(BgL_idz00_67);
								BgL_res3521z00_2144 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_2143);
							}
							BgL_arg3460z00_1659 = BgL_res3521z00_2144;
						}
						{	/* Object/creator.scm 500 */
							obj_t BgL_list3461z00_1660;

							{	/* Object/creator.scm 500 */
								obj_t BgL_arg3462z00_1661;

								BgL_arg3462z00_1661 = MAKE_PAIR(BgL_arg3460z00_1659, BNIL);
								BgL_list3461z00_1660 =
									MAKE_PAIR(BgL_arg3459z00_1658, BgL_arg3462z00_1661);
							}
							BgL_arg3458z00_1657 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list3461z00_1660);
					}}
					BgL_mkzd2heapzd2idz00_1525 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg3458z00_1657));
				}
				{	/* Object/creator.scm 500 */
					obj_t BgL_superz00_1526;

					{
						obj_t BgL_auxz00_3431;

						{	/* Object/creator.scm 501 */
							BgL_objectz00_bglt BgL_auxz00_3432;

							BgL_auxz00_3432 = (BgL_objectz00_bglt) (BgL_typez00_68);
							BgL_auxz00_3431 = BGL_OBJECT_WIDENING(BgL_auxz00_3432);
						}
						BgL_superz00_1526 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_3431))->
							BgL_itszd2superzd2);
					}
					{	/* Object/creator.scm 501 */
						obj_t BgL_slotsz00_1527;

						{
							obj_t BgL_auxz00_3436;

							{	/* Object/creator.scm 502 */
								BgL_objectz00_bglt BgL_auxz00_3437;

								BgL_auxz00_3437 = (BgL_objectz00_bglt) (BgL_typez00_68);
								BgL_auxz00_3436 = BGL_OBJECT_WIDENING(BgL_auxz00_3437);
							}
							BgL_slotsz00_1527 =
								(((BgL_tclassz00_bglt) CREF(BgL_auxz00_3436))->BgL_slotsz00);
						}
						{	/* Object/creator.scm 502 */
							obj_t BgL_sslotsz00_1528;

							{	/* Object/creator.scm 503 */
								BgL_tclassz00_bglt BgL_obj2232z00_2148;

								BgL_obj2232z00_2148 = (BgL_tclassz00_bglt) (BgL_superz00_1526);
								{
									obj_t BgL_auxz00_3442;

									{	/* Object/creator.scm 503 */
										BgL_objectz00_bglt BgL_auxz00_3443;

										BgL_auxz00_3443 =
											(BgL_objectz00_bglt) (BgL_obj2232z00_2148);
										BgL_auxz00_3442 = BGL_OBJECT_WIDENING(BgL_auxz00_3443);
									}
									BgL_sslotsz00_1528 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_3442))->
										BgL_slotsz00);
							}}
							{	/* Object/creator.scm 503 */
								BgL_globalz00_bglt BgL_holderz00_1529;

								{
									obj_t BgL_auxz00_3447;

									{	/* Object/creator.scm 504 */
										BgL_objectz00_bglt BgL_auxz00_3448;

										BgL_auxz00_3448 = (BgL_objectz00_bglt) (BgL_typez00_68);
										BgL_auxz00_3447 = BGL_OBJECT_WIDENING(BgL_auxz00_3448);
									}
									BgL_holderz00_1529 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_3447))->
										BgL_holderz00);
								}
								{	/* Object/creator.scm 504 */
									obj_t BgL_constrsz00_1530;

									BgL_constrsz00_1530 =
										BGl_findzd2classzd2constructorsz00zzobject_classz00
										(BgL_typez00_68);
									{	/* Object/creator.scm 505 */
										obj_t BgL_tidz00_1531;

										{
											BgL_typez00_bglt BgL_auxz00_3453;

											BgL_auxz00_3453 = (BgL_typez00_bglt) (BgL_typez00_68);
											BgL_tidz00_1531 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_3453))->BgL_idz00);
										}
										{	/* Object/creator.scm 506 */
											obj_t BgL_stidz00_1532;

											{
												BgL_typez00_bglt BgL_auxz00_3456;

												BgL_auxz00_3456 =
													(BgL_typez00_bglt) (BgL_superz00_1526);
												BgL_stidz00_1532 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_3456))->
													BgL_idz00);
											}
											{	/* Object/creator.scm 507 */
												obj_t BgL_mkzd2tidzd2_1533;

												{	/* Object/creator.scm 508 */
													obj_t BgL_arg3452z00_1651;

													{	/* Object/creator.scm 508 */
														obj_t BgL_arg3453z00_1652;

														{	/* Object/creator.scm 508 */
															obj_t BgL_arg3454z00_1653;

															obj_t BgL_arg3455z00_1654;

															{	/* Object/creator.scm 508 */
																obj_t BgL_res3522z00_2154;

																{	/* Object/creator.scm 508 */
																	obj_t BgL_symbolz00_2152;

																	BgL_symbolz00_2152 =
																		CNST_TABLE_REF(((long) 3));
																	{	/* Object/creator.scm 508 */
																		obj_t BgL_arg2063z00_2153;

																		BgL_arg2063z00_2153 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2152);
																		BgL_res3522z00_2154 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2153);
																}}
																BgL_arg3454z00_1653 = BgL_res3522z00_2154;
															}
															{	/* Object/creator.scm 508 */
																obj_t BgL_res3523z00_2157;

																{	/* Object/creator.scm 508 */
																	obj_t BgL_arg2063z00_2156;

																	BgL_arg2063z00_2156 =
																		SYMBOL_TO_STRING(BgL_idz00_67);
																	BgL_res3523z00_2157 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_2156);
																}
																BgL_arg3455z00_1654 = BgL_res3523z00_2157;
															}
															{	/* Object/creator.scm 508 */
																obj_t BgL_list3456z00_1655;

																{	/* Object/creator.scm 508 */
																	obj_t BgL_arg3457z00_1656;

																	BgL_arg3457z00_1656 =
																		MAKE_PAIR(BgL_arg3455z00_1654, BNIL);
																	BgL_list3456z00_1655 =
																		MAKE_PAIR(BgL_arg3454z00_1653,
																		BgL_arg3457z00_1656);
																}
																BgL_arg3453z00_1652 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list3456z00_1655);
														}}
														BgL_arg3452z00_1651 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg3453z00_1652));
													}
													BgL_mkzd2tidzd2_1533 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_arg3452z00_1651, BgL_tidz00_1531);
												}
												{	/* Object/creator.scm 508 */
													obj_t BgL_fzd2idszd2_1534;

													BgL_fzd2idszd2_1534 =
														BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
														(BgL_slotsz00_1527);
													{	/* Object/creator.scm 509 */
														obj_t BgL_sfzd2idszd2_1535;

														BgL_sfzd2idszd2_1535 =
															BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
															(BgL_sslotsz00_1528);
														{	/* Object/creator.scm 510 */
															obj_t BgL_fzd2tidszd2_1536;

															BgL_fzd2tidszd2_1536 =
																BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
																(BgL_fzd2idszd2_1534, BgL_slotsz00_1527);
															{	/* Object/creator.scm 511 */
																obj_t BgL_sfzd2tidszd2_1537;

																BgL_sfzd2tidszd2_1537 =
																	BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
																	(BgL_sfzd2idszd2_1535, BgL_sslotsz00_1528);
																{	/* Object/creator.scm 512 */
																	obj_t BgL_wideningz00_1538;

																	{	/* Object/creator.scm 514 */
																		obj_t BgL_arg3446z00_1645;

																		obj_t BgL_arg3447z00_1646;

																		obj_t BgL_arg3448z00_1647;

																		{
																			obj_t BgL_auxz00_3474;

																			{	/* Object/creator.scm 514 */
																				BgL_objectz00_bglt BgL_auxz00_3475;

																				BgL_auxz00_3475 =
																					(BgL_objectz00_bglt) (BgL_typez00_68);
																				BgL_auxz00_3474 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_3475);
																			}
																			BgL_arg3446z00_1645 =
																				(((BgL_tclassz00_bglt)
																					CREF(BgL_auxz00_3474))->
																				BgL_wideningz00);
																		}
																		BgL_arg3447z00_1646 =
																			CNST_TABLE_REF(((long) 5));
																		{
																			BgL_typez00_bglt BgL_auxz00_3480;

																			BgL_auxz00_3480 =
																				(BgL_typez00_bglt) (BgL_typez00_68);
																			BgL_arg3448z00_1647 =
																				(((BgL_typez00_bglt)
																					CREF(BgL_auxz00_3480))->BgL_idz00);
																		}
																		{	/* Object/creator.scm 513 */
																			obj_t BgL_list3449z00_1648;

																			{	/* Object/creator.scm 513 */
																				obj_t BgL_arg3450z00_1649;

																				{	/* Object/creator.scm 513 */
																					obj_t BgL_arg3451z00_1650;

																					BgL_arg3451z00_1650 =
																						MAKE_PAIR(BgL_arg3448z00_1647,
																						BNIL);
																					BgL_arg3450z00_1649 =
																						MAKE_PAIR(BgL_arg3447z00_1646,
																						BgL_arg3451z00_1650);
																				}
																				BgL_list3449z00_1648 =
																					MAKE_PAIR(BgL_arg3446z00_1645,
																					BgL_arg3450z00_1649);
																			}
																			BgL_wideningz00_1538 =
																				BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																				(BgL_list3449z00_1648);
																	}}
																	{	/* Object/creator.scm 513 */
																		obj_t BgL_auxz00_1539;

																		BgL_auxz00_1539 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BGl_gensymz00zz__r4_symbols_6_4z00
																			(CNST_TABLE_REF(((long) 37))));
																		{	/* Object/creator.scm 515 */
																			obj_t BgL_newz00_1540;

																			BgL_newz00_1540 =
																				BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																				(BGl_gensymz00zz__r4_symbols_6_4z00
																				(CNST_TABLE_REF(((long) 9))));
																			{	/* Object/creator.scm 516 */
																				obj_t BgL_mkzd2classzd2idz00_1541;

																				{	/* Object/creator.scm 517 */
																					obj_t BgL_arg3438z00_1638;

																					{	/* Object/creator.scm 517 */
																						obj_t BgL_arg3439z00_1639;

																						obj_t BgL_arg3440z00_1640;

																						{	/* Object/creator.scm 517 */
																							obj_t BgL_res3524z00_2163;

																							{	/* Object/creator.scm 517 */
																								obj_t BgL_symbolz00_2161;

																								BgL_symbolz00_2161 =
																									CNST_TABLE_REF(((long) 3));
																								{	/* Object/creator.scm 517 */
																									obj_t BgL_arg2063z00_2162;

																									BgL_arg2063z00_2162 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_2161);
																									BgL_res3524z00_2163 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_2162);
																							}}
																							BgL_arg3439z00_1639 =
																								BgL_res3524z00_2163;
																						}
																						{	/* Object/creator.scm 517 */
																							obj_t BgL_res3525z00_2166;

																							{	/* Object/creator.scm 517 */
																								obj_t BgL_arg2063z00_2165;

																								BgL_arg2063z00_2165 =
																									SYMBOL_TO_STRING
																									(BgL_stidz00_1532);
																								BgL_res3525z00_2166 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_2165);
																							}
																							BgL_arg3440z00_1640 =
																								BgL_res3525z00_2166;
																						}
																						{	/* Object/creator.scm 517 */
																							obj_t BgL_list3441z00_1641;

																							{	/* Object/creator.scm 517 */
																								obj_t BgL_arg3443z00_1642;

																								BgL_arg3443z00_1642 =
																									MAKE_PAIR(BgL_arg3440z00_1640,
																									BNIL);
																								BgL_list3441z00_1641 =
																									MAKE_PAIR(BgL_arg3439z00_1639,
																									BgL_arg3443z00_1642);
																							}
																							BgL_arg3438z00_1638 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list3441z00_1641);
																					}}
																					BgL_mkzd2classzd2idz00_1541 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg3438z00_1638));
																				}
																				{	/* Object/creator.scm 517 */

																					{	/* Object/creator.scm 519 */
																						obj_t BgL_arg3349z00_1542;

																						{	/* Object/creator.scm 519 */
																							obj_t BgL_arg3350z00_1543;

																							{	/* Object/creator.scm 519 */
																								obj_t BgL_arg3351z00_1544;

																								BgL_arg3351z00_1544 =
																									MAKE_PAIR
																									(BgL_mkzd2tidzd2_1533,
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_sfzd2tidszd2_1537,
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_fzd2tidszd2_1536,
																											BNIL)));
																								{	/* Object/creator.scm 519 */
																									obj_t BgL_list3353z00_1546;

																									BgL_list3353z00_1546 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3350z00_1543 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3351z00_1544,
																										BgL_list3353z00_1546);
																							}}
																							BgL_arg3349z00_1542 =
																								MAKE_PAIR(BgL_importz00_70,
																								BgL_arg3350z00_1543);
																						}
																						BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																							(BgL_arg3349z00_1542);
																					}
																					{	/* Object/creator.scm 521 */
																						obj_t BgL_arg3356z00_1549;

																						{	/* Object/creator.scm 521 */
																							obj_t BgL_arg3358z00_1551;

																							obj_t BgL_arg3359z00_1552;

																							BgL_arg3358z00_1551 =
																								CNST_TABLE_REF(((long) 15));
																							{	/* Object/creator.scm 521 */
																								obj_t BgL_arg3360z00_1553;

																								obj_t BgL_arg3361z00_1554;

																								BgL_arg3360z00_1553 =
																									MAKE_PAIR
																									(BgL_mkzd2tidzd2_1533,
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_sfzd2tidszd2_1537,
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_fzd2tidszd2_1536,
																											BNIL)));
																								{	/* Object/creator.scm 524 */
																									obj_t BgL_arg3367z00_1560;

																									obj_t BgL_arg3368z00_1561;

																									BgL_arg3367z00_1560 =
																										CNST_TABLE_REF(((long) 20));
																									{	/* Object/creator.scm 524 */
																										obj_t BgL_arg3369z00_1562;

																										obj_t BgL_arg3371z00_1563;

																										obj_t BgL_arg3372z00_1564;

																										obj_t BgL_arg3373z00_1565;

																										{	/* Object/creator.scm 524 */
																											obj_t BgL_arg3379z00_1571;

																											{	/* Object/creator.scm 524 */
																												obj_t
																													BgL_arg3381z00_1573;
																												obj_t
																													BgL_arg3382z00_1574;
																												BgL_arg3381z00_1573 =
																													BGl_makezd2typedzd2identz00zzast_identz00
																													(BgL_auxz00_1539,
																													BgL_stidz00_1532);
																												{	/* Object/creator.scm 525 */
																													obj_t
																														BgL_arg3383z00_1575;
																													BgL_arg3383z00_1575 =
																														MAKE_PAIR
																														(BgL_mkzd2classzd2idz00_1541,
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BgL_sfzd2idszd2_1535,
																															BNIL));
																													{	/* Object/creator.scm 524 */
																														obj_t
																															BgL_list3385z00_1577;
																														BgL_list3385z00_1577
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg3382z00_1574
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg3383z00_1575,
																															BgL_list3385z00_1577);
																												}}
																												BgL_arg3379z00_1571 =
																													MAKE_PAIR
																													(BgL_arg3381z00_1573,
																													BgL_arg3382z00_1574);
																											}
																											BgL_arg3369z00_1562 =
																												MAKE_PAIR
																												(BgL_arg3379z00_1571,
																												BNIL);
																										}
																										{	/* Object/creator.scm 529 */
																											obj_t BgL_arg3387z00_1579;

																											obj_t BgL_arg3388z00_1580;

																											BgL_arg3387z00_1579 =
																												CNST_TABLE_REF(((long)
																													32));
																											{	/* Object/creator.scm 531 */
																												obj_t
																													BgL_arg3389z00_1581;
																												{	/* Object/creator.scm 531 */
																													obj_t
																														BgL_arg3393z00_1585;
																													obj_t
																														BgL_arg3394z00_1586;
																													BgL_arg3393z00_1585 =
																														CNST_TABLE_REF((
																															(long) 35));
																													{	/* Object/creator.scm 531 */
																														obj_t
																															BgL_arg3395z00_1587;
																														{	/* Object/creator.scm 531 */
																															obj_t
																																BgL_arg3398z00_1590;
																															obj_t
																																BgL_arg3399z00_1591;
																															BgL_arg3398z00_1590
																																=
																																CNST_TABLE_REF((
																																	(long) 33));
																															{	/* Object/creator.scm 531 */
																																obj_t
																																	BgL_arg3400z00_1592;
																																obj_t
																																	BgL_arg3401z00_1593;
																																{
																																	BgL_variablez00_bglt
																																		BgL_auxz00_3525;
																																	BgL_auxz00_3525
																																		=
																																		(BgL_variablez00_bglt)
																																		(BgL_holderz00_1529);
																																	BgL_arg3400z00_1592
																																		=
																																		(((BgL_variablez00_bglt) CREF(BgL_auxz00_3525))->BgL_idz00);
																																}
																																BgL_arg3401z00_1593
																																	=
																																	(((BgL_globalz00_bglt) CREF(BgL_holderz00_1529))->BgL_modulez00);
																																{	/* Object/creator.scm 531 */
																																	obj_t
																																		BgL_list3403z00_1595;
																																	{	/* Object/creator.scm 531 */
																																		obj_t
																																			BgL_arg3404z00_1596;
																																		BgL_arg3404z00_1596
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list3403z00_1595
																																			=
																																			MAKE_PAIR
																																			(BgL_arg3401z00_1593,
																																			BgL_arg3404z00_1596);
																																	}
																																	BgL_arg3399z00_1591
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg3400z00_1592,
																																		BgL_list3403z00_1595);
																															}}
																															BgL_arg3395z00_1587
																																=
																																MAKE_PAIR
																																(BgL_arg3398z00_1590,
																																BgL_arg3399z00_1591);
																														}
																														{	/* Object/creator.scm 531 */
																															obj_t
																																BgL_list3397z00_1589;
																															BgL_list3397z00_1589
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg3394z00_1586
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg3395z00_1587,
																																BgL_list3397z00_1589);
																													}}
																													BgL_arg3389z00_1581 =
																														MAKE_PAIR
																														(BgL_arg3393z00_1585,
																														BgL_arg3394z00_1586);
																												}
																												{	/* Object/creator.scm 529 */
																													obj_t
																														BgL_list3391z00_1583;
																													{	/* Object/creator.scm 529 */
																														obj_t
																															BgL_arg3392z00_1584;
																														BgL_arg3392z00_1584
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list3391z00_1583
																															=
																															MAKE_PAIR
																															(BgL_arg3389z00_1581,
																															BgL_arg3392z00_1584);
																													}
																													BgL_arg3388z00_1580 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_auxz00_1539,
																														BgL_list3391z00_1583);
																											}}
																											BgL_arg3371z00_1563 =
																												MAKE_PAIR
																												(BgL_arg3387z00_1579,
																												BgL_arg3388z00_1580);
																										}
																										{	/* Object/creator.scm 534 */
																											obj_t BgL_arg3405z00_1597;

																											obj_t BgL_arg3406z00_1598;

																											BgL_arg3405z00_1597 =
																												CNST_TABLE_REF(((long)
																													36));
																											{	/* Object/creator.scm 534 */
																												obj_t
																													BgL_arg3407z00_1599;
																												BgL_arg3407z00_1599 =
																													MAKE_PAIR
																													(BgL_wideningz00_1538,
																													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																													(BgL_fzd2idszd2_1534,
																														BNIL));
																												{	/* Object/creator.scm 534 */
																													obj_t
																														BgL_list3409z00_1601;
																													{	/* Object/creator.scm 534 */
																														obj_t
																															BgL_arg3410z00_1602;
																														BgL_arg3410z00_1602
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list3409z00_1601
																															=
																															MAKE_PAIR
																															(BgL_arg3407z00_1599,
																															BgL_arg3410z00_1602);
																													}
																													BgL_arg3406z00_1598 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_auxz00_1539,
																														BgL_list3409z00_1601);
																											}}
																											BgL_arg3372z00_1564 =
																												MAKE_PAIR
																												(BgL_arg3405z00_1597,
																												BgL_arg3406z00_1598);
																										}
																										{	/* Object/creator.scm 536 */
																											obj_t BgL_arg3412z00_1604;

																											obj_t BgL_arg3413z00_1605;

																											BgL_arg3412z00_1604 =
																												CNST_TABLE_REF(((long)
																													20));
																											{	/* Object/creator.scm 536 */
																												obj_t
																													BgL_arg3414z00_1606;
																												obj_t
																													BgL_arg3415z00_1607;
																												{	/* Object/creator.scm 536 */
																													obj_t
																														BgL_arg3417z00_1609;
																													{	/* Object/creator.scm 536 */
																														obj_t
																															BgL_arg3419z00_1611;
																														obj_t
																															BgL_arg3420z00_1612;
																														BgL_arg3419z00_1611
																															=
																															BGl_makezd2typedzd2identz00zzast_identz00
																															(BgL_newz00_1540,
																															BgL_tidz00_1531);
																														{	/* Object/creator.scm 537 */
																															obj_t
																																BgL_arg3421z00_1613;
																															{	/* Object/creator.scm 537 */
																																obj_t
																																	BgL_list3424z00_1616;
																																BgL_list3424z00_1616
																																	=
																																	MAKE_PAIR
																																	(BgL_auxz00_1539,
																																	BNIL);
																																BgL_arg3421z00_1613
																																	=
																																	BGl_makezd2privatezd2sexpz00zzast_privatez00
																																	(CNST_TABLE_REF
																																	(((long) 38)),
																																	BgL_tidz00_1531,
																																	BgL_list3424z00_1616);
																															}
																															{	/* Object/creator.scm 536 */
																																obj_t
																																	BgL_list3423z00_1615;
																																BgL_list3423z00_1615
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg3420z00_1612
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg3421z00_1613,
																																	BgL_list3423z00_1615);
																														}}
																														BgL_arg3417z00_1609
																															=
																															MAKE_PAIR
																															(BgL_arg3419z00_1611,
																															BgL_arg3420z00_1612);
																													}
																													BgL_arg3414z00_1606 =
																														MAKE_PAIR
																														(BgL_arg3417z00_1609,
																														BNIL);
																												}
																												{	/* Object/creator.scm 540 */
																													obj_t
																														BgL_arg3425z00_1617;
																													obj_t
																														BgL_arg3426z00_1618;
																													{	/* Object/creator.scm 540 */
																														bool_t
																															BgL_testz00_3556;
																														if (PAIRP
																															(BgL_constrsz00_1530))
																															{	/* Object/creator.scm 540 */
																																if (
																																	(BgL_wideningz00_1538
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				6))))
																																	{	/* Object/creator.scm 541 */
																																		BgL_testz00_3556
																																			=
																																			((bool_t)
																																			0);
																																	}
																																else
																																	{	/* Object/creator.scm 541 */
																																		BgL_testz00_3556
																																			=
																																			((bool_t)
																																			1);
																																	}
																															}
																														else
																															{	/* Object/creator.scm 540 */
																																BgL_testz00_3556
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_3556)
																															{	/* Object/creator.scm 542 */
																																obj_t
																																	BgL_l2578z00_1620;
																																BgL_l2578z00_1620
																																	=
																																	BgL_constrsz00_1530;
																																{	/* Object/creator.scm 542 */
																																	obj_t
																																		BgL_head2580z00_1622;
																																	BgL_head2580z00_1622
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	{
																																		obj_t
																																			BgL_l2578z00_1624;
																																		obj_t
																																			BgL_tail2581z00_1625;
																																		BgL_l2578z00_1624
																																			=
																																			BgL_l2578z00_1620;
																																		BgL_tail2581z00_1625
																																			=
																																			BgL_head2580z00_1622;
																																	BgL_zc3anonymousza33429ze3z83_1626:
																																		if (NULLP
																																			(BgL_l2578z00_1624))
																																			{	/* Object/creator.scm 542 */
																																				BgL_arg3425z00_1617
																																					=
																																					CDR
																																					(BgL_head2580z00_1622);
																																			}
																																		else
																																			{	/* Object/creator.scm 542 */
																																				obj_t
																																					BgL_newtail2582z00_1628;
																																				{	/* Object/creator.scm 542 */
																																					obj_t
																																						BgL_arg3432z00_1630;
																																					{	/* Object/creator.scm 542 */
																																						obj_t
																																							BgL_constrz00_1632;
																																						BgL_constrz00_1632
																																							=
																																							CAR
																																							(BgL_l2578z00_1624);
																																						{	/* Object/creator.scm 542 */
																																							obj_t
																																								BgL_arg3434z00_1633;
																																							{	/* Object/creator.scm 542 */
																																								obj_t
																																									BgL_list3435z00_1634;
																																								BgL_list3435z00_1634
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								BgL_arg3434z00_1633
																																									=
																																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																									(BgL_newz00_1540,
																																									BgL_list3435z00_1634);
																																							}
																																							BgL_arg3432z00_1630
																																								=
																																								MAKE_PAIR
																																								(BgL_constrz00_1632,
																																								BgL_arg3434z00_1633);
																																						}
																																					}
																																					BgL_newtail2582z00_1628
																																						=
																																						MAKE_PAIR
																																						(BgL_arg3432z00_1630,
																																						BNIL);
																																				}
																																				SET_CDR
																																					(BgL_tail2581z00_1625,
																																					BgL_newtail2582z00_1628);
																																				{
																																					obj_t
																																						BgL_tail2581z00_3574;
																																					obj_t
																																						BgL_l2578z00_3572;
																																					BgL_l2578z00_3572
																																						=
																																						CDR
																																						(BgL_l2578z00_1624);
																																					BgL_tail2581z00_3574
																																						=
																																						BgL_newtail2582z00_1628;
																																					BgL_tail2581z00_1625
																																						=
																																						BgL_tail2581z00_3574;
																																					BgL_l2578z00_1624
																																						=
																																						BgL_l2578z00_3572;
																																					goto
																																						BgL_zc3anonymousza33429ze3z83_1626;
																																				}
																																			}
																																	}
																																}
																															}
																														else
																															{	/* Object/creator.scm 540 */
																																BgL_arg3425z00_1617
																																	= BNIL;
																															}
																													}
																													BgL_arg3426z00_1618 =
																														MAKE_PAIR
																														(BgL_newz00_1540,
																														BNIL);
																													BgL_arg3415z00_1607 =
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg3425z00_1617,
																														BgL_arg3426z00_1618);
																												}
																												{	/* Object/creator.scm 536 */
																													obj_t
																														BgL_list3416z00_1608;
																													BgL_list3416z00_1608 =
																														MAKE_PAIR
																														(BgL_arg3415z00_1607,
																														BNIL);
																													BgL_arg3413z00_1605 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg3414z00_1606,
																														BgL_list3416z00_1608);
																												}
																											}
																											BgL_arg3373z00_1565 =
																												MAKE_PAIR
																												(BgL_arg3412z00_1604,
																												BgL_arg3413z00_1605);
																										}
																										{	/* Object/creator.scm 524 */
																											obj_t
																												BgL_list3375z00_1567;
																											{	/* Object/creator.scm 524 */
																												obj_t
																													BgL_arg3376z00_1568;
																												{	/* Object/creator.scm 524 */
																													obj_t
																														BgL_arg3377z00_1569;
																													{	/* Object/creator.scm 524 */
																														obj_t
																															BgL_arg3378z00_1570;
																														BgL_arg3378z00_1570
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg3377z00_1569
																															=
																															MAKE_PAIR
																															(BgL_arg3373z00_1565,
																															BgL_arg3378z00_1570);
																													}
																													BgL_arg3376z00_1568 =
																														MAKE_PAIR
																														(BgL_arg3372z00_1564,
																														BgL_arg3377z00_1569);
																												}
																												BgL_list3375z00_1567 =
																													MAKE_PAIR
																													(BgL_arg3371z00_1563,
																													BgL_arg3376z00_1568);
																											}
																											BgL_arg3368z00_1561 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3369z00_1562,
																												BgL_list3375z00_1567);
																										}
																									}
																									BgL_arg3361z00_1554 =
																										MAKE_PAIR
																										(BgL_arg3367z00_1560,
																										BgL_arg3368z00_1561);
																								}
																								{	/* Object/creator.scm 521 */
																									obj_t BgL_list3363z00_1556;

																									{	/* Object/creator.scm 521 */
																										obj_t BgL_arg3364z00_1557;

																										BgL_arg3364z00_1557 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3363z00_1556 =
																											MAKE_PAIR
																											(BgL_arg3361z00_1554,
																											BgL_arg3364z00_1557);
																									}
																									BgL_arg3359z00_1552 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3360z00_1553,
																										BgL_list3363z00_1556);
																								}
																							}
																							BgL_arg3356z00_1549 =
																								MAKE_PAIR(BgL_arg3358z00_1551,
																								BgL_arg3359z00_1552);
																						}
																						{	/* Object/creator.scm 521 */
																							obj_t BgL_list3357z00_1550;

																							BgL_list3357z00_1550 =
																								MAKE_PAIR(BgL_srczd2defzd2_69,
																								BNIL);
																							return
																								BGl_epairifyza2za2zztools_miscz00
																								(BgL_arg3356z00_1549,
																								BgL_list3357z00_1550);
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_creatorz00()
	{
		AN_OBJECT;
		{	/* Object/creator.scm 21 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_creatorz00()
	{
		AN_OBJECT;
		{	/* Object/creator.scm 21 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_creatorz00()
	{
		AN_OBJECT;
		{	/* Object/creator.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_structz00(((long) 112894054),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_nilz00(((long) 169673641),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string3531z00zzobject_creatorz00));
		}
	}

#ifdef __cplusplus
}
#endif
