/*===========================================================================*/
/*   (Object/nil.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/nil.scm)*/
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


	extern obj_t BGl_za2charza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_nilz00 = BUNSPEC;
	extern obj_t BGl_jarrayz00zzforeign_jtypez00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_nilz00();
	static obj_t BGl_bigloozd2primitivezd2typezd2nilzd2zzobject_nilz00(obj_t,
		obj_t);
	extern obj_t BGl_za2symbolza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2elongza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_nilz00();
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	extern obj_t BGl_za2bignumza2z00zztype_cachez00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_nilz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2classzd2nilz00zzobject_nilz00(BgL_tclassz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_za2keywordza2z00zztype_cachez00;
	static obj_t BGl__genzd2widezd2classzd2nilzd2zzobject_nilz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	extern obj_t BGl_za2bllongza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzobject_nilz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_za2bstringza2z00zztype_cachez00;
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_za2brealza2z00zztype_cachez00;
	extern obj_t BGl_za2epairza2z00zztype_cachez00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2widezd2classzd2nilzd2zzobject_nilz00(BgL_tclassz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static obj_t BGl_fillzd2nilzd2zzobject_nilz00(obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_za2bcharza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_za2classzd2nilzf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	static obj_t BGl_externzd2typezd2nilz00zzobject_nilz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2plainzd2classzd2nilzd2zzobject_nilz00(BgL_tclassz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__genzd2plainzd2classzd2nilzd2zzobject_nilz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_slotzd2getzd2nilz00zzobject_nilz00(obj_t);
	extern obj_t BGl_za2llongza2z00zztype_cachez00;
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__importzd2classzd2nilz00zzobject_nilz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_nilz00();
	static obj_t BGl_methodzd2initzd2zzobject_nilz00();
	static obj_t __cnst[102];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2plainzd2classzd2nilzd2envz00zzobject_nilz00,
		BgL_bgl__genza7d2plainza7d2c3171z00,
		BGl__genzd2plainzd2classzd2nilzd2zzobject_nilz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2widezd2classzd2nilzd2envz00zzobject_nilz00,
		BgL_bgl__genza7d2wideza7d2cl3172z00,
		BGl__genzd2widezd2classzd2nilzd2zzobject_nilz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2classzd2nilzd2envzd2zzobject_nilz00,
		BgL_bgl__importza7d2classza73173z00,
		BGl__importzd2classzd2nilz00zzobject_nilz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3164z00zzobject_nilz00,
		BgL_bgl_string3164za700za7za7o3174za7, "", 0);
	      DEFINE_STRING(BGl_string3165z00zzobject_nilz00,
		BgL_bgl_string3165za700za7za7o3175za7, "Illegal slot type `~a'", 22);
	      DEFINE_STRING(BGl_string3166z00zzobject_nilz00,
		BgL_bgl_string3166za700za7za7o3176za7, "0L", 2);
	      DEFINE_STRING(BGl_string3167z00zzobject_nilz00,
		BgL_bgl_string3167za700za7za7o3177za7, "object_nil", 10);
	      DEFINE_STRING(BGl_string3168z00zzobject_nilz00,
		BgL_bgl_string3168za700za7za7o3178za7,
		"free-pragma string char double float byte long int cast-null (make-f64vector 0) f64vector (make-f32vector 0) f32vector (make-u64vector 0) u64vector (make-s64vector 0) s64vector (make-u32vector 0) u32vector (make-s32vector 0) s32vector (make-u16vector 0) u16vector (make-s16vector 0) s16vector (make-u8vector 0) u8vector (make-s8vector 0) s8vector (condition-variable-nil) condvar (mutex-nil) mutex (utf8-string->ucs2-string \"\") ucs2string (char->ucs2 #\\_) bucs2 (make-server-socket) socket (opaque-nil) opaque (custom-nil) custom (process-nil) process procedure make-struct struct vector keyword symbol bstring epair pair pair-nil nil bchar breal bbool bool (string->elong \"0\") elong llong bint cell unspec (current-date) date binary-port error-port (current-output-port) output-port (current-input-port) input-port cons (quote #()) :_ (quote _) (econs #f #f #f) (cons #f #f) (quote ()) #z0 (string->llong \"0\") (make-cell #unspecified) make- quote list->tvector object-widening-set! @ class-num object-class-num-set! "
		"- set! eq? when define ! fill- %allocate- obj %the- -nil ", 1074);
	      DEFINE_REAL(BGl_real3163z00zzobject_nilz00,
		BgL_bgl_real3163za700za7za7obj3179za7, 0.0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_nilz00(long
		BgL_checksumz00_1330, char *BgL_fromz00_1331)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_nilz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_nilz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_nilz00();
					BGl_cnstzd2initzd2zzobject_nilz00();
					BGl_importedzd2moduleszd2initz00zzobject_nilz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_nilz00()
	{
		AN_OBJECT;
		{	/* Object/nil.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_nil");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "object_nil");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "object_nil");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_nil");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_nil");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "object_nil");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"object_nil");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_nilz00()
	{
		AN_OBJECT;
		{	/* Object/nil.scm 15 */
			{	/* Object/nil.scm 15 */
				obj_t BgL_cportz00_1322;

				BgL_cportz00_1322 =
					bgl_open_input_string(BGl_string3168z00zzobject_nilz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1323;

					BgL_iz00_1323 = ((long) 101);
				BgL_loopz00_1324:
					if ((BgL_iz00_1323 == ((long) -1)))
						{	/* Object/nil.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/nil.scm 15 */
							{	/* Object/nil.scm 15 */
								obj_t BgL_arg3170z00_1326;

								{	/* Object/nil.scm 15 */

									{	/* Object/nil.scm 15 */
										obj_t BgL_locationz00_1328;

										BgL_locationz00_1328 = BBOOL(((bool_t) 0));
										{	/* Object/nil.scm 15 */

											BgL_arg3170z00_1326 =
												BGl_readz00zz__readerz00(BgL_cportz00_1322,
												BgL_locationz00_1328);
										}
									}
								}
								{	/* Object/nil.scm 15 */
									int BgL_auxz00_1351;

									BgL_auxz00_1351 = (int) (BgL_iz00_1323);
									CNST_TABLE_SET(BgL_auxz00_1351, BgL_arg3170z00_1326);
							}}
							{	/* Object/nil.scm 15 */
								int BgL_auxz00_1329;

								BgL_auxz00_1329 = (int) ((BgL_iz00_1323 - ((long) 1)));
								{
									long BgL_iz00_1356;

									BgL_iz00_1356 = (long) (BgL_auxz00_1329);
									BgL_iz00_1323 = BgL_iz00_1356;
									goto BgL_loopz00_1324;
								}
							}
						}
				}
			}
		}
	}



/* import-class-nil */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2classzd2nilz00zzobject_nilz00(BgL_tclassz00_bglt
		BgL_classz00_1, obj_t BgL_srczd2defzd2_2, obj_t BgL_modulez00_3)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 44 */
			if (CBOOL(BGl_za2classzd2nilzf3za2z21zzengine_paramz00))
				{	/* Object/nil.scm 46 */
					obj_t BgL_idz00_572;

					{
						BgL_typez00_bglt BgL_auxz00_1360;

						BgL_auxz00_1360 = (BgL_typez00_bglt) (BgL_classz00_1);
						BgL_idz00_572 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1360))->BgL_idz00);
					}
					{	/* Object/nil.scm 46 */
						obj_t BgL_idzd2nilzd2_573;

						{	/* Object/nil.scm 47 */
							obj_t BgL_arg2773z00_577;

							{	/* Object/nil.scm 47 */
								obj_t BgL_arg2774z00_578;

								obj_t BgL_arg2775z00_579;

								{	/* Object/nil.scm 47 */
									obj_t BgL_res3143z00_1119;

									{	/* Object/nil.scm 47 */
										obj_t BgL_arg2063z00_1118;

										BgL_arg2063z00_1118 = SYMBOL_TO_STRING(BgL_idz00_572);
										BgL_res3143z00_1119 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1118);
									}
									BgL_arg2774z00_578 = BgL_res3143z00_1119;
								}
								{	/* Object/nil.scm 47 */
									obj_t BgL_res3144z00_1122;

									{	/* Object/nil.scm 47 */
										obj_t BgL_symbolz00_1120;

										BgL_symbolz00_1120 = CNST_TABLE_REF(((long) 0));
										{	/* Object/nil.scm 47 */
											obj_t BgL_arg2063z00_1121;

											BgL_arg2063z00_1121 =
												SYMBOL_TO_STRING(BgL_symbolz00_1120);
											BgL_res3144z00_1122 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1121);
									}}
									BgL_arg2775z00_579 = BgL_res3144z00_1122;
								}
								{	/* Object/nil.scm 47 */
									obj_t BgL_list2776z00_580;

									{	/* Object/nil.scm 47 */
										obj_t BgL_arg2777z00_581;

										BgL_arg2777z00_581 = MAKE_PAIR(BgL_arg2775z00_579, BNIL);
										BgL_list2776z00_580 =
											MAKE_PAIR(BgL_arg2774z00_578, BgL_arg2777z00_581);
									}
									BgL_arg2773z00_577 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2776z00_580);
							}}
							BgL_idzd2nilzd2_573 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2773z00_577));
						}
						{	/* Object/nil.scm 47 */
							obj_t BgL_tidzd2nilzd2_574;

							BgL_tidzd2nilzd2_574 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_idzd2nilzd2_573,
								BgL_idz00_572);
							{	/* Object/nil.scm 48 */

								{	/* Object/nil.scm 49 */
									obj_t BgL_arg2770z00_575;

									BgL_arg2770z00_575 = MAKE_PAIR(BgL_tidzd2nilzd2_574, BNIL);
									return
										BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_3,
										BgL_arg2770z00_575, BNIL);
								}
							}
						}
					}
				}
			else
				{	/* Object/nil.scm 45 */
					return BFALSE;
				}
		}
	}



/* _import-class-nil */
	obj_t BGl__importzd2classzd2nilz00zzobject_nilz00(obj_t BgL_envz00_1310,
		obj_t BgL_classz00_1311, obj_t BgL_srczd2defzd2_1312,
		obj_t BgL_modulez00_1313)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 44 */
			return
				BGl_importzd2classzd2nilz00zzobject_nilz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1311), BgL_srczd2defzd2_1312,
				BgL_modulez00_1313);
		}
	}



/* gen-plain-class-nil */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2plainzd2classzd2nilzd2zzobject_nilz00(BgL_tclassz00_bglt
		BgL_classz00_4, obj_t BgL_srczd2defzd2_5, obj_t BgL_importz00_6)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 56 */
			if (CBOOL(BGl_za2classzd2nilzf3za2z21zzengine_paramz00))
				{	/* Object/nil.scm 59 */
					obj_t BgL_idz00_583;

					{
						BgL_typez00_bglt BgL_auxz00_1380;

						BgL_auxz00_1380 = (BgL_typez00_bglt) (BgL_classz00_4);
						BgL_idz00_583 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1380))->BgL_idz00);
					}
					{	/* Object/nil.scm 59 */
						obj_t BgL_idzd2nilzd2_584;

						{	/* Object/nil.scm 60 */
							obj_t BgL_arg2842z00_651;

							{	/* Object/nil.scm 60 */
								obj_t BgL_arg2843z00_652;

								obj_t BgL_arg2844z00_653;

								{	/* Object/nil.scm 60 */
									obj_t BgL_res3145z00_1127;

									{	/* Object/nil.scm 60 */
										obj_t BgL_arg2063z00_1126;

										BgL_arg2063z00_1126 = SYMBOL_TO_STRING(BgL_idz00_583);
										BgL_res3145z00_1127 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1126);
									}
									BgL_arg2843z00_652 = BgL_res3145z00_1127;
								}
								{	/* Object/nil.scm 60 */
									obj_t BgL_res3146z00_1130;

									{	/* Object/nil.scm 60 */
										obj_t BgL_symbolz00_1128;

										BgL_symbolz00_1128 = CNST_TABLE_REF(((long) 0));
										{	/* Object/nil.scm 60 */
											obj_t BgL_arg2063z00_1129;

											BgL_arg2063z00_1129 =
												SYMBOL_TO_STRING(BgL_symbolz00_1128);
											BgL_res3146z00_1130 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1129);
									}}
									BgL_arg2844z00_653 = BgL_res3146z00_1130;
								}
								{	/* Object/nil.scm 60 */
									obj_t BgL_list2845z00_654;

									{	/* Object/nil.scm 60 */
										obj_t BgL_arg2846z00_655;

										BgL_arg2846z00_655 = MAKE_PAIR(BgL_arg2844z00_653, BNIL);
										BgL_list2845z00_654 =
											MAKE_PAIR(BgL_arg2843z00_652, BgL_arg2846z00_655);
									}
									BgL_arg2842z00_651 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2845z00_654);
							}}
							BgL_idzd2nilzd2_584 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2842z00_651));
						}
						{	/* Object/nil.scm 60 */
							obj_t BgL_tidzd2nilzd2_585;

							BgL_tidzd2nilzd2_585 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_idzd2nilzd2_584,
								BgL_idz00_583);
							{	/* Object/nil.scm 61 */
								obj_t BgL_thezd2idzd2nilz00_586;

								{	/* Object/nil.scm 62 */
									obj_t BgL_arg2837z00_646;

									{	/* Object/nil.scm 62 */
										obj_t BgL_arg2838z00_647;

										obj_t BgL_arg2839z00_648;

										{	/* Object/nil.scm 62 */
											obj_t BgL_res3147z00_1134;

											{	/* Object/nil.scm 62 */
												obj_t BgL_symbolz00_1132;

												BgL_symbolz00_1132 = CNST_TABLE_REF(((long) 1));
												{	/* Object/nil.scm 62 */
													obj_t BgL_arg2063z00_1133;

													BgL_arg2063z00_1133 =
														SYMBOL_TO_STRING(BgL_symbolz00_1132);
													BgL_res3147z00_1134 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1133);
											}}
											BgL_arg2838z00_647 = BgL_res3147z00_1134;
										}
										{	/* Object/nil.scm 62 */
											obj_t BgL_res3148z00_1137;

											{	/* Object/nil.scm 62 */
												obj_t BgL_arg2063z00_1136;

												BgL_arg2063z00_1136 =
													SYMBOL_TO_STRING(BgL_idzd2nilzd2_584);
												BgL_res3148z00_1137 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1136);
											}
											BgL_arg2839z00_648 = BgL_res3148z00_1137;
										}
										{	/* Object/nil.scm 62 */
											obj_t BgL_list2840z00_649;

											{	/* Object/nil.scm 62 */
												obj_t BgL_arg2841z00_650;

												BgL_arg2841z00_650 =
													MAKE_PAIR(BgL_arg2839z00_648, BNIL);
												BgL_list2840z00_649 =
													MAKE_PAIR(BgL_arg2838z00_647, BgL_arg2841z00_650);
											}
											BgL_arg2837z00_646 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list2840z00_649);
									}}
									BgL_thezd2idzd2nilz00_586 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg2837z00_646));
								}
								{	/* Object/nil.scm 62 */
									obj_t BgL_thezd2tidzd2nilz00_587;

									BgL_thezd2tidzd2nilz00_587 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_thezd2idzd2nilz00_586, CNST_TABLE_REF(((long) 2)));
									{	/* Object/nil.scm 63 */
										obj_t BgL_allocz00_588;

										{	/* Object/nil.scm 64 */
											obj_t BgL_arg2832z00_641;

											{	/* Object/nil.scm 64 */
												obj_t BgL_arg2833z00_642;

												obj_t BgL_arg2834z00_643;

												{	/* Object/nil.scm 64 */
													obj_t BgL_res3149z00_1141;

													{	/* Object/nil.scm 64 */
														obj_t BgL_symbolz00_1139;

														BgL_symbolz00_1139 = CNST_TABLE_REF(((long) 3));
														{	/* Object/nil.scm 64 */
															obj_t BgL_arg2063z00_1140;

															BgL_arg2063z00_1140 =
																SYMBOL_TO_STRING(BgL_symbolz00_1139);
															BgL_res3149z00_1141 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1140);
													}}
													BgL_arg2833z00_642 = BgL_res3149z00_1141;
												}
												{	/* Object/nil.scm 64 */
													obj_t BgL_res3150z00_1144;

													{	/* Object/nil.scm 64 */
														obj_t BgL_arg2063z00_1143;

														BgL_arg2063z00_1143 =
															SYMBOL_TO_STRING(BgL_idz00_583);
														BgL_res3150z00_1144 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1143);
													}
													BgL_arg2834z00_643 = BgL_res3150z00_1144;
												}
												{	/* Object/nil.scm 64 */
													obj_t BgL_list2835z00_644;

													{	/* Object/nil.scm 64 */
														obj_t BgL_arg2836z00_645;

														BgL_arg2836z00_645 =
															MAKE_PAIR(BgL_arg2834z00_643, BNIL);
														BgL_list2835z00_644 =
															MAKE_PAIR(BgL_arg2833z00_642, BgL_arg2836z00_645);
													}
													BgL_arg2832z00_641 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list2835z00_644);
											}}
											BgL_allocz00_588 =
												string_to_symbol(BSTRING_TO_STRING(BgL_arg2832z00_641));
										}
										{	/* Object/nil.scm 64 */
											obj_t BgL_fillz00_589;

											{	/* Object/nil.scm 65 */
												obj_t BgL_list2828z00_637;

												{	/* Object/nil.scm 65 */
													obj_t BgL_arg2829z00_638;

													obj_t BgL_arg2830z00_639;

													BgL_arg2829z00_638 = CNST_TABLE_REF(((long) 4));
													{	/* Object/nil.scm 65 */
														obj_t BgL_arg2831z00_640;

														BgL_arg2831z00_640 =
															MAKE_PAIR(CNST_TABLE_REF(((long) 5)), BNIL);
														BgL_arg2830z00_639 =
															MAKE_PAIR(BgL_idz00_583, BgL_arg2831z00_640);
													}
													BgL_list2828z00_637 =
														MAKE_PAIR(BgL_arg2829z00_638, BgL_arg2830z00_639);
												}
												BgL_fillz00_589 =
													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
													(BgL_list2828z00_637);
											}
											{	/* Object/nil.scm 65 */

												{	/* Object/nil.scm 66 */
													obj_t BgL_arg2778z00_590;

													{	/* Object/nil.scm 66 */
														obj_t BgL_arg2779z00_591;

														{	/* Object/nil.scm 66 */
															obj_t BgL_arg2780z00_592;

															BgL_arg2780z00_592 =
																MAKE_PAIR(BgL_tidzd2nilzd2_585, BNIL);
															{	/* Object/nil.scm 66 */
																obj_t BgL_list2783z00_594;

																BgL_list2783z00_594 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2779z00_591 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2780z00_592, BgL_list2783z00_594);
														}}
														BgL_arg2778z00_590 =
															MAKE_PAIR(BgL_importz00_6, BgL_arg2779z00_591);
													}
													BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
														(BgL_arg2778z00_590);
												}
												{	/* Object/nil.scm 68 */
													obj_t BgL_arg2784z00_595;

													obj_t BgL_arg2785z00_596;

													{	/* Object/nil.scm 68 */
														obj_t BgL_arg2789z00_599;

														obj_t BgL_arg2790z00_600;

														BgL_arg2789z00_599 = CNST_TABLE_REF(((long) 6));
														{	/* Object/nil.scm 68 */
															obj_t BgL_list2791z00_601;

															{	/* Object/nil.scm 68 */
																obj_t BgL_arg2792z00_602;

																BgL_arg2792z00_602 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2791z00_601 =
																	MAKE_PAIR(BUNSPEC, BgL_arg2792z00_602);
															}
															BgL_arg2790z00_600 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_thezd2tidzd2nilz00_587,
																BgL_list2791z00_601);
														}
														BgL_arg2784z00_595 =
															MAKE_PAIR(BgL_arg2789z00_599, BgL_arg2790z00_600);
													}
													{	/* Object/nil.scm 69 */
														obj_t BgL_arg2793z00_603;

														{	/* Object/nil.scm 69 */
															obj_t BgL_arg2794z00_604;

															obj_t BgL_arg2795z00_605;

															BgL_arg2794z00_604 = CNST_TABLE_REF(((long) 6));
															{	/* Object/nil.scm 69 */
																obj_t BgL_arg2796z00_606;

																obj_t BgL_arg2797z00_607;

																BgL_arg2796z00_606 =
																	MAKE_PAIR(BgL_tidzd2nilzd2_585, BNIL);
																{	/* Object/nil.scm 70 */
																	obj_t BgL_arg2802z00_612;

																	obj_t BgL_arg2803z00_613;

																	BgL_arg2802z00_612 =
																		CNST_TABLE_REF(((long) 7));
																	{	/* Object/nil.scm 70 */
																		obj_t BgL_arg2804z00_614;

																		obj_t BgL_arg2805z00_615;

																		obj_t BgL_arg2806z00_616;

																		{	/* Object/nil.scm 70 */
																			obj_t BgL_arg2811z00_621;

																			obj_t BgL_arg2812z00_622;

																			BgL_arg2811z00_621 =
																				CNST_TABLE_REF(((long) 8));
																			{	/* Object/nil.scm 70 */
																				obj_t BgL_list2813z00_623;

																				{	/* Object/nil.scm 70 */
																					obj_t BgL_arg2814z00_624;

																					BgL_arg2814z00_624 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2813z00_623 =
																						MAKE_PAIR(BUNSPEC,
																						BgL_arg2814z00_624);
																				}
																				BgL_arg2812z00_622 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_thezd2idzd2nilz00_586,
																					BgL_list2813z00_623);
																			}
																			BgL_arg2804z00_614 =
																				MAKE_PAIR(BgL_arg2811z00_621,
																				BgL_arg2812z00_622);
																		}
																		{	/* Object/nil.scm 71 */
																			obj_t BgL_arg2815z00_625;

																			obj_t BgL_arg2816z00_626;

																			BgL_arg2815z00_625 =
																				CNST_TABLE_REF(((long) 9));
																			{	/* Object/nil.scm 71 */
																				obj_t BgL_arg2818z00_627;

																				BgL_arg2818z00_627 =
																					MAKE_PAIR(BgL_allocz00_588, BNIL);
																				{	/* Object/nil.scm 71 */
																					obj_t BgL_list2820z00_629;

																					{	/* Object/nil.scm 71 */
																						obj_t BgL_arg2821z00_630;

																						BgL_arg2821z00_630 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2820z00_629 =
																							MAKE_PAIR(BgL_arg2818z00_627,
																							BgL_arg2821z00_630);
																					}
																					BgL_arg2816z00_626 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_thezd2idzd2nilz00_586,
																						BgL_list2820z00_629);
																			}}
																			BgL_arg2805z00_615 =
																				MAKE_PAIR(BgL_arg2815z00_625,
																				BgL_arg2816z00_626);
																		}
																		{	/* Object/nil.scm 72 */
																			obj_t BgL_arg2822z00_631;

																			{	/* Object/nil.scm 72 */
																				obj_t BgL_arg2823z00_632;

																				{	/* Object/nil.scm 72 */
																					obj_t BgL_arg2825z00_634;

																					{	/* Object/nil.scm 72 */
																						obj_t BgL_arg2827z00_636;

																						{
																							obj_t BgL_auxz00_1446;

																							{	/* Object/nil.scm 72 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1447;
																								BgL_auxz00_1447 =
																									(BgL_objectz00_bglt)
																									(BgL_classz00_4);
																								BgL_auxz00_1446 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1447);
																							}
																							BgL_arg2827z00_636 =
																								(((BgL_tclassz00_bglt)
																									CREF(BgL_auxz00_1446))->
																								BgL_slotsz00);
																						}
																						BgL_arg2825z00_634 =
																							BGl_fillzd2nilzd2zzobject_nilz00
																							(BgL_arg2827z00_636);
																					}
																					BgL_arg2823z00_632 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2825z00_634, BNIL);
																				}
																				{	/* Object/nil.scm 72 */
																					obj_t BgL_list2824z00_633;

																					BgL_list2824z00_633 =
																						MAKE_PAIR(BgL_arg2823z00_632, BNIL);
																					BgL_arg2822z00_631 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_thezd2idzd2nilz00_586,
																						BgL_list2824z00_633);
																			}}
																			BgL_arg2806z00_616 =
																				MAKE_PAIR(BgL_fillz00_589,
																				BgL_arg2822z00_631);
																		}
																		{	/* Object/nil.scm 70 */
																			obj_t BgL_list2808z00_618;

																			{	/* Object/nil.scm 70 */
																				obj_t BgL_arg2809z00_619;

																				{	/* Object/nil.scm 70 */
																					obj_t BgL_arg2810z00_620;

																					BgL_arg2810z00_620 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2809z00_619 =
																						MAKE_PAIR(BgL_arg2806z00_616,
																						BgL_arg2810z00_620);
																				}
																				BgL_list2808z00_618 =
																					MAKE_PAIR(BgL_arg2805z00_615,
																					BgL_arg2809z00_619);
																			}
																			BgL_arg2803z00_613 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2804z00_614,
																				BgL_list2808z00_618);
																	}}
																	BgL_arg2797z00_607 =
																		MAKE_PAIR(BgL_arg2802z00_612,
																		BgL_arg2803z00_613);
																}
																{	/* Object/nil.scm 69 */
																	obj_t BgL_list2799z00_609;

																	{	/* Object/nil.scm 69 */
																		obj_t BgL_arg2800z00_610;

																		{	/* Object/nil.scm 69 */
																			obj_t BgL_arg2801z00_611;

																			BgL_arg2801z00_611 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2800z00_610 =
																				MAKE_PAIR(BgL_thezd2idzd2nilz00_586,
																				BgL_arg2801z00_611);
																		}
																		BgL_list2799z00_609 =
																			MAKE_PAIR(BgL_arg2797z00_607,
																			BgL_arg2800z00_610);
																	}
																	BgL_arg2795z00_605 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2796z00_606, BgL_list2799z00_609);
															}}
															BgL_arg2793z00_603 =
																MAKE_PAIR(BgL_arg2794z00_604,
																BgL_arg2795z00_605);
														}
														BgL_arg2785z00_596 =
															BGl_epairifyz00zztools_miscz00(BgL_arg2793z00_603,
															BgL_srczd2defzd2_5);
													}
													{	/* Object/nil.scm 67 */
														obj_t BgL_list2786z00_597;

														{	/* Object/nil.scm 67 */
															obj_t BgL_arg2787z00_598;

															BgL_arg2787z00_598 =
																MAKE_PAIR(BgL_arg2785z00_596, BNIL);
															BgL_list2786z00_597 =
																MAKE_PAIR(BgL_arg2784z00_595,
																BgL_arg2787z00_598);
														}
														return BgL_list2786z00_597;
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
				{	/* Object/nil.scm 57 */
					return BFALSE;
				}
		}
	}



/* _gen-plain-class-nil */
	obj_t BGl__genzd2plainzd2classzd2nilzd2zzobject_nilz00(obj_t BgL_envz00_1314,
		obj_t BgL_classz00_1315, obj_t BgL_srczd2defzd2_1316,
		obj_t BgL_importz00_1317)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 56 */
			return
				BGl_genzd2plainzd2classzd2nilzd2zzobject_nilz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1315), BgL_srczd2defzd2_1316,
				BgL_importz00_1317);
		}
	}



/* gen-wide-class-nil */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2widezd2classzd2nilzd2zzobject_nilz00(BgL_tclassz00_bglt
		BgL_classz00_7, obj_t BgL_srczd2defzd2_8, obj_t BgL_importz00_9)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 81 */
			if (CBOOL(BGl_za2classzd2nilzf3za2z21zzengine_paramz00))
				{	/* Object/nil.scm 84 */
					obj_t BgL_idz00_657;

					{
						BgL_typez00_bglt BgL_auxz00_1473;

						BgL_auxz00_1473 = (BgL_typez00_bglt) (BgL_classz00_7);
						BgL_idz00_657 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1473))->BgL_idz00);
					}
					{	/* Object/nil.scm 84 */
						obj_t BgL_superzd2idzd2_658;

						{	/* Object/nil.scm 85 */
							BgL_typez00_bglt BgL_obj1508z00_1151;

							{	/* Object/nil.scm 85 */
								obj_t BgL_auxz00_1476;

								{
									obj_t BgL_auxz00_1477;

									{	/* Object/nil.scm 85 */
										BgL_objectz00_bglt BgL_auxz00_1478;

										BgL_auxz00_1478 = (BgL_objectz00_bglt) (BgL_classz00_7);
										BgL_auxz00_1477 = BGL_OBJECT_WIDENING(BgL_auxz00_1478);
									}
									BgL_auxz00_1476 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1477))->
										BgL_itszd2superzd2);
								}
								BgL_obj1508z00_1151 = (BgL_typez00_bglt) (BgL_auxz00_1476);
							}
							BgL_superzd2idzd2_658 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1151))->BgL_idz00);
						}
						{	/* Object/nil.scm 85 */
							obj_t BgL_superzd2slotszd2_659;

							{	/* Object/nil.scm 86 */
								BgL_tclassz00_bglt BgL_obj2298z00_1153;

								{	/* Object/nil.scm 86 */
									obj_t BgL_auxz00_1484;

									{
										obj_t BgL_auxz00_1485;

										{	/* Object/nil.scm 86 */
											BgL_objectz00_bglt BgL_auxz00_1486;

											BgL_auxz00_1486 = (BgL_objectz00_bglt) (BgL_classz00_7);
											BgL_auxz00_1485 = BGL_OBJECT_WIDENING(BgL_auxz00_1486);
										}
										BgL_auxz00_1484 =
											(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1485))->
											BgL_itszd2superzd2);
									}
									BgL_obj2298z00_1153 = (BgL_tclassz00_bglt) (BgL_auxz00_1484);
								}
								{
									obj_t BgL_auxz00_1491;

									{	/* Object/nil.scm 86 */
										BgL_objectz00_bglt BgL_auxz00_1492;

										BgL_auxz00_1492 =
											(BgL_objectz00_bglt) (BgL_obj2298z00_1153);
										BgL_auxz00_1491 = BGL_OBJECT_WIDENING(BgL_auxz00_1492);
									}
									BgL_superzd2slotszd2_659 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1491))->
										BgL_slotsz00);
								}
							}
							{	/* Object/nil.scm 86 */
								obj_t BgL_idzd2nilzd2_660;

								{	/* Object/nil.scm 87 */
									obj_t BgL_arg2951z00_766;

									{	/* Object/nil.scm 87 */
										obj_t BgL_arg2952z00_767;

										obj_t BgL_arg2953z00_768;

										{	/* Object/nil.scm 87 */
											obj_t BgL_res3152z00_1156;

											{	/* Object/nil.scm 87 */
												obj_t BgL_arg2063z00_1155;

												BgL_arg2063z00_1155 = SYMBOL_TO_STRING(BgL_idz00_657);
												BgL_res3152z00_1156 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1155);
											}
											BgL_arg2952z00_767 = BgL_res3152z00_1156;
										}
										{	/* Object/nil.scm 87 */
											obj_t BgL_res3153z00_1159;

											{	/* Object/nil.scm 87 */
												obj_t BgL_symbolz00_1157;

												BgL_symbolz00_1157 = CNST_TABLE_REF(((long) 0));
												{	/* Object/nil.scm 87 */
													obj_t BgL_arg2063z00_1158;

													BgL_arg2063z00_1158 =
														SYMBOL_TO_STRING(BgL_symbolz00_1157);
													BgL_res3153z00_1159 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1158);
											}}
											BgL_arg2953z00_768 = BgL_res3153z00_1159;
										}
										{	/* Object/nil.scm 87 */
											obj_t BgL_list2954z00_769;

											{	/* Object/nil.scm 87 */
												obj_t BgL_arg2955z00_770;

												BgL_arg2955z00_770 =
													MAKE_PAIR(BgL_arg2953z00_768, BNIL);
												BgL_list2954z00_769 =
													MAKE_PAIR(BgL_arg2952z00_767, BgL_arg2955z00_770);
											}
											BgL_arg2951z00_766 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list2954z00_769);
									}}
									BgL_idzd2nilzd2_660 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg2951z00_766));
								}
								{	/* Object/nil.scm 87 */
									obj_t BgL_tidzd2nilzd2_661;

									BgL_tidzd2nilzd2_661 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_idzd2nilzd2_660, BgL_idz00_657);
									{	/* Object/nil.scm 88 */
										obj_t BgL_thezd2idzd2nilz00_662;

										{	/* Object/nil.scm 89 */
											obj_t BgL_arg2946z00_761;

											{	/* Object/nil.scm 89 */
												obj_t BgL_arg2947z00_762;

												obj_t BgL_arg2948z00_763;

												{	/* Object/nil.scm 89 */
													obj_t BgL_res3154z00_1163;

													{	/* Object/nil.scm 89 */
														obj_t BgL_symbolz00_1161;

														BgL_symbolz00_1161 = CNST_TABLE_REF(((long) 1));
														{	/* Object/nil.scm 89 */
															obj_t BgL_arg2063z00_1162;

															BgL_arg2063z00_1162 =
																SYMBOL_TO_STRING(BgL_symbolz00_1161);
															BgL_res3154z00_1163 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1162);
													}}
													BgL_arg2947z00_762 = BgL_res3154z00_1163;
												}
												{	/* Object/nil.scm 89 */
													obj_t BgL_res3155z00_1166;

													{	/* Object/nil.scm 89 */
														obj_t BgL_arg2063z00_1165;

														BgL_arg2063z00_1165 =
															SYMBOL_TO_STRING(BgL_idzd2nilzd2_660);
														BgL_res3155z00_1166 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1165);
													}
													BgL_arg2948z00_763 = BgL_res3155z00_1166;
												}
												{	/* Object/nil.scm 89 */
													obj_t BgL_list2949z00_764;

													{	/* Object/nil.scm 89 */
														obj_t BgL_arg2950z00_765;

														BgL_arg2950z00_765 =
															MAKE_PAIR(BgL_arg2948z00_763, BNIL);
														BgL_list2949z00_764 =
															MAKE_PAIR(BgL_arg2947z00_762, BgL_arg2950z00_765);
													}
													BgL_arg2946z00_761 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list2949z00_764);
											}}
											BgL_thezd2idzd2nilz00_662 =
												string_to_symbol(BSTRING_TO_STRING(BgL_arg2946z00_761));
										}
										{	/* Object/nil.scm 89 */
											obj_t BgL_thezd2tidzd2nilz00_663;

											BgL_thezd2tidzd2nilz00_663 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_thezd2idzd2nilz00_662, CNST_TABLE_REF(((long) 2)));
											{	/* Object/nil.scm 90 */
												obj_t BgL_wideningz00_664;

												{	/* Object/nil.scm 91 */
													obj_t BgL_arg2940z00_756;

													obj_t BgL_arg2942z00_757;

													{
														obj_t BgL_auxz00_1519;

														{	/* Object/nil.scm 91 */
															BgL_objectz00_bglt BgL_auxz00_1520;

															BgL_auxz00_1520 =
																(BgL_objectz00_bglt) (BgL_classz00_7);
															BgL_auxz00_1519 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1520);
														}
														BgL_arg2940z00_756 =
															(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1519))->
															BgL_wideningz00);
													}
													BgL_arg2942z00_757 = CNST_TABLE_REF(((long) 10));
													{	/* Object/nil.scm 91 */
														obj_t BgL_list2943z00_758;

														{	/* Object/nil.scm 91 */
															obj_t BgL_arg2944z00_759;

															{	/* Object/nil.scm 91 */
																obj_t BgL_arg2945z00_760;

																BgL_arg2945z00_760 =
																	MAKE_PAIR(BgL_idz00_657, BNIL);
																BgL_arg2944z00_759 =
																	MAKE_PAIR(BgL_arg2942z00_757,
																	BgL_arg2945z00_760);
															}
															BgL_list2943z00_758 =
																MAKE_PAIR(BgL_arg2940z00_756,
																BgL_arg2944z00_759);
														}
														BgL_wideningz00_664 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list2943z00_758);
												}}
												{	/* Object/nil.scm 91 */
													obj_t BgL_superzd2alloczd2_665;

													{	/* Object/nil.scm 92 */
														obj_t BgL_arg2935z00_751;

														{	/* Object/nil.scm 92 */
															obj_t BgL_arg2936z00_752;

															obj_t BgL_arg2937z00_753;

															{	/* Object/nil.scm 92 */
																obj_t BgL_res3156z00_1171;

																{	/* Object/nil.scm 92 */
																	obj_t BgL_symbolz00_1169;

																	BgL_symbolz00_1169 =
																		CNST_TABLE_REF(((long) 3));
																	{	/* Object/nil.scm 92 */
																		obj_t BgL_arg2063z00_1170;

																		BgL_arg2063z00_1170 =
																			SYMBOL_TO_STRING(BgL_symbolz00_1169);
																		BgL_res3156z00_1171 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_1170);
																}}
																BgL_arg2936z00_752 = BgL_res3156z00_1171;
															}
															{	/* Object/nil.scm 92 */
																obj_t BgL_res3157z00_1174;

																{	/* Object/nil.scm 92 */
																	obj_t BgL_arg2063z00_1173;

																	BgL_arg2063z00_1173 =
																		SYMBOL_TO_STRING(BgL_superzd2idzd2_658);
																	BgL_res3157z00_1174 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_1173);
																}
																BgL_arg2937z00_753 = BgL_res3157z00_1174;
															}
															{	/* Object/nil.scm 92 */
																obj_t BgL_list2938z00_754;

																{	/* Object/nil.scm 92 */
																	obj_t BgL_arg2939z00_755;

																	BgL_arg2939z00_755 =
																		MAKE_PAIR(BgL_arg2937z00_753, BNIL);
																	BgL_list2938z00_754 =
																		MAKE_PAIR(BgL_arg2936z00_752,
																		BgL_arg2939z00_755);
																}
																BgL_arg2935z00_751 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2938z00_754);
														}}
														BgL_superzd2alloczd2_665 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2935z00_751));
													}
													{	/* Object/nil.scm 92 */
														obj_t BgL_superzd2fillzd2_666;

														{	/* Object/nil.scm 93 */
															obj_t BgL_list2931z00_747;

															{	/* Object/nil.scm 93 */
																obj_t BgL_arg2932z00_748;

																obj_t BgL_arg2933z00_749;

																BgL_arg2932z00_748 = CNST_TABLE_REF(((long) 4));
																{	/* Object/nil.scm 93 */
																	obj_t BgL_arg2934z00_750;

																	BgL_arg2934z00_750 =
																		MAKE_PAIR(CNST_TABLE_REF(((long) 5)), BNIL);
																	BgL_arg2933z00_749 =
																		MAKE_PAIR(BgL_superzd2idzd2_658,
																		BgL_arg2934z00_750);
																}
																BgL_list2931z00_747 =
																	MAKE_PAIR(BgL_arg2932z00_748,
																	BgL_arg2933z00_749);
															}
															BgL_superzd2fillzd2_666 =
																BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																(BgL_list2931z00_747);
														}
														{	/* Object/nil.scm 93 */

															{	/* Object/nil.scm 94 */
																obj_t BgL_arg2847z00_667;

																{	/* Object/nil.scm 94 */
																	obj_t BgL_arg2848z00_668;

																	{	/* Object/nil.scm 94 */
																		obj_t BgL_arg2849z00_669;

																		BgL_arg2849z00_669 =
																			MAKE_PAIR(BgL_tidzd2nilzd2_661, BNIL);
																		{	/* Object/nil.scm 94 */
																			obj_t BgL_list2851z00_671;

																			BgL_list2851z00_671 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2848z00_668 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2849z00_669,
																				BgL_list2851z00_671);
																	}}
																	BgL_arg2847z00_667 =
																		MAKE_PAIR(BgL_importz00_9,
																		BgL_arg2848z00_668);
																}
																BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																	(BgL_arg2847z00_667);
															}
															{	/* Object/nil.scm 96 */
																obj_t BgL_arg2852z00_672;

																obj_t BgL_arg2854z00_673;

																{	/* Object/nil.scm 96 */
																	obj_t BgL_arg2857z00_676;

																	obj_t BgL_arg2858z00_677;

																	BgL_arg2857z00_676 =
																		CNST_TABLE_REF(((long) 6));
																	{	/* Object/nil.scm 96 */
																		obj_t BgL_list2859z00_678;

																		{	/* Object/nil.scm 96 */
																			obj_t BgL_arg2861z00_679;

																			BgL_arg2861z00_679 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2859z00_678 =
																				MAKE_PAIR(BUNSPEC, BgL_arg2861z00_679);
																		}
																		BgL_arg2858z00_677 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_thezd2tidzd2nilz00_663,
																			BgL_list2859z00_678);
																	}
																	BgL_arg2852z00_672 =
																		MAKE_PAIR(BgL_arg2857z00_676,
																		BgL_arg2858z00_677);
																}
																{	/* Object/nil.scm 97 */
																	obj_t BgL_arg2862z00_680;

																	{	/* Object/nil.scm 97 */
																		obj_t BgL_arg2863z00_681;

																		obj_t BgL_arg2864z00_682;

																		BgL_arg2863z00_681 =
																			CNST_TABLE_REF(((long) 6));
																		{	/* Object/nil.scm 97 */
																			obj_t BgL_arg2865z00_683;

																			obj_t BgL_arg2866z00_684;

																			BgL_arg2865z00_683 =
																				MAKE_PAIR(BgL_tidzd2nilzd2_661, BNIL);
																			{	/* Object/nil.scm 98 */
																				obj_t BgL_arg2871z00_689;

																				obj_t BgL_arg2872z00_690;

																				BgL_arg2871z00_689 =
																					CNST_TABLE_REF(((long) 7));
																				{	/* Object/nil.scm 98 */
																					obj_t BgL_arg2873z00_691;

																					obj_t BgL_arg2874z00_692;

																					obj_t BgL_arg2875z00_693;

																					obj_t BgL_arg2876z00_694;

																					obj_t BgL_arg2877z00_695;

																					{	/* Object/nil.scm 98 */
																						obj_t BgL_arg2884z00_702;

																						obj_t BgL_arg2885z00_703;

																						BgL_arg2884z00_702 =
																							CNST_TABLE_REF(((long) 8));
																						{	/* Object/nil.scm 98 */
																							obj_t BgL_list2886z00_704;

																							{	/* Object/nil.scm 98 */
																								obj_t BgL_arg2887z00_705;

																								BgL_arg2887z00_705 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2886z00_704 =
																									MAKE_PAIR(BUNSPEC,
																									BgL_arg2887z00_705);
																							}
																							BgL_arg2885z00_703 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_thezd2idzd2nilz00_662,
																								BgL_list2886z00_704);
																						}
																						BgL_arg2873z00_691 =
																							MAKE_PAIR(BgL_arg2884z00_702,
																							BgL_arg2885z00_703);
																					}
																					{	/* Object/nil.scm 100 */
																						obj_t BgL_arg2888z00_706;

																						obj_t BgL_arg2890z00_707;

																						BgL_arg2888z00_706 =
																							CNST_TABLE_REF(((long) 9));
																						{	/* Object/nil.scm 100 */
																							obj_t BgL_arg2891z00_708;

																							BgL_arg2891z00_708 =
																								MAKE_PAIR
																								(BgL_superzd2alloczd2_665,
																								BNIL);
																							{	/* Object/nil.scm 100 */
																								obj_t BgL_list2893z00_710;

																								{	/* Object/nil.scm 100 */
																									obj_t BgL_arg2894z00_711;

																									BgL_arg2894z00_711 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2893z00_710 =
																										MAKE_PAIR
																										(BgL_arg2891z00_708,
																										BgL_arg2894z00_711);
																								}
																								BgL_arg2890z00_707 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_thezd2idzd2nilz00_662,
																									BgL_list2893z00_710);
																						}}
																						BgL_arg2874z00_692 =
																							MAKE_PAIR(BgL_arg2888z00_706,
																							BgL_arg2890z00_707);
																					}
																					{	/* Object/nil.scm 103 */
																						obj_t BgL_arg2896z00_712;

																						{	/* Object/nil.scm 103 */
																							obj_t BgL_arg2897z00_713;

																							BgL_arg2897z00_713 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BGl_fillzd2nilzd2zzobject_nilz00
																								(BgL_superzd2slotszd2_659),
																								BNIL);
																							{	/* Object/nil.scm 102 */
																								obj_t BgL_list2898z00_714;

																								BgL_list2898z00_714 =
																									MAKE_PAIR(BgL_arg2897z00_713,
																									BNIL);
																								BgL_arg2896z00_712 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_thezd2idzd2nilz00_662,
																									BgL_list2898z00_714);
																						}}
																						BgL_arg2875z00_693 =
																							MAKE_PAIR(BgL_superzd2fillzd2_666,
																							BgL_arg2896z00_712);
																					}
																					{	/* Object/nil.scm 105 */
																						obj_t BgL_arg2901z00_717;

																						obj_t BgL_arg2902z00_718;

																						BgL_arg2901z00_717 =
																							CNST_TABLE_REF(((long) 11));
																						{	/* Object/nil.scm 107 */
																							obj_t BgL_arg2903z00_719;

																							{	/* Object/nil.scm 107 */
																								obj_t BgL_arg2907z00_723;

																								obj_t BgL_arg2908z00_724;

																								BgL_arg2907z00_723 =
																									CNST_TABLE_REF(((long) 12));
																								{	/* Object/nil.scm 107 */
																									obj_t BgL_arg2909z00_725;

																									{	/* Object/nil.scm 107 */
																										obj_t BgL_arg2912z00_728;

																										obj_t BgL_arg2913z00_729;

																										BgL_arg2912z00_728 =
																											CNST_TABLE_REF(((long)
																												13));
																										{	/* Object/nil.scm 107 */
																											obj_t BgL_arg2914z00_730;

																											obj_t BgL_arg2915z00_731;

																											{	/* Object/nil.scm 107 */
																												BgL_variablez00_bglt
																													BgL_obj1760z00_1177;
																												{	/* Object/nil.scm 107 */
																													BgL_globalz00_bglt
																														BgL_auxz00_1577;
																													{
																														obj_t
																															BgL_auxz00_1578;
																														{	/* Object/nil.scm 107 */
																															BgL_objectz00_bglt
																																BgL_auxz00_1579;
																															BgL_auxz00_1579 =
																																(BgL_objectz00_bglt)
																																(BgL_classz00_7);
																															BgL_auxz00_1578 =
																																BGL_OBJECT_WIDENING
																																(BgL_auxz00_1579);
																														}
																														BgL_auxz00_1577 =
																															(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1578))->BgL_holderz00);
																													}
																													BgL_obj1760z00_1177 =
																														(BgL_variablez00_bglt)
																														(BgL_auxz00_1577);
																												}
																												BgL_arg2914z00_730 =
																													(((BgL_variablez00_bglt) CREF(BgL_obj1760z00_1177))->BgL_idz00);
																											}
																											{	/* Object/nil.scm 108 */
																												BgL_globalz00_bglt
																													BgL_obj1833z00_1179;
																												{
																													obj_t BgL_auxz00_1585;

																													{	/* Object/nil.scm 108 */
																														BgL_objectz00_bglt
																															BgL_auxz00_1586;
																														BgL_auxz00_1586 =
																															(BgL_objectz00_bglt)
																															(BgL_classz00_7);
																														BgL_auxz00_1585 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_1586);
																													}
																													BgL_obj1833z00_1179 =
																														(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1585))->BgL_holderz00);
																												}
																												BgL_arg2915z00_731 =
																													(((BgL_globalz00_bglt)
																														CREF
																														(BgL_obj1833z00_1179))->
																													BgL_modulez00);
																											}
																											{	/* Object/nil.scm 107 */
																												obj_t
																													BgL_list2917z00_733;
																												{	/* Object/nil.scm 107 */
																													obj_t
																														BgL_arg2918z00_734;
																													BgL_arg2918z00_734 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2917z00_733 =
																														MAKE_PAIR
																														(BgL_arg2915z00_731,
																														BgL_arg2918z00_734);
																												}
																												BgL_arg2913z00_729 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2914z00_730,
																													BgL_list2917z00_733);
																										}}
																										BgL_arg2909z00_725 =
																											MAKE_PAIR
																											(BgL_arg2912z00_728,
																											BgL_arg2913z00_729);
																									}
																									{	/* Object/nil.scm 107 */
																										obj_t BgL_list2911z00_727;

																										BgL_list2911z00_727 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2908z00_724 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2909z00_725,
																											BgL_list2911z00_727);
																								}}
																								BgL_arg2903z00_719 =
																									MAKE_PAIR(BgL_arg2907z00_723,
																									BgL_arg2908z00_724);
																							}
																							{	/* Object/nil.scm 105 */
																								obj_t BgL_list2905z00_721;

																								{	/* Object/nil.scm 105 */
																									obj_t BgL_arg2906z00_722;

																									BgL_arg2906z00_722 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2905z00_721 =
																										MAKE_PAIR
																										(BgL_arg2903z00_719,
																										BgL_arg2906z00_722);
																								}
																								BgL_arg2902z00_718 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_thezd2idzd2nilz00_662,
																									BgL_list2905z00_721);
																						}}
																						BgL_arg2876z00_694 =
																							MAKE_PAIR(BgL_arg2901z00_717,
																							BgL_arg2902z00_718);
																					}
																					{	/* Object/nil.scm 110 */
																						obj_t BgL_arg2921z00_737;

																						obj_t BgL_arg2922z00_738;

																						BgL_arg2921z00_737 =
																							CNST_TABLE_REF(((long) 14));
																						{	/* Object/nil.scm 112 */
																							obj_t BgL_arg2923z00_739;

																							{	/* Object/nil.scm 112 */
																								obj_t BgL_arg2927z00_743;

																								{	/* Object/nil.scm 112 */
																									obj_t BgL_arg2928z00_744;

																									{	/* Object/nil.scm 112 */
																										obj_t BgL_arg2930z00_746;

																										{
																											obj_t BgL_auxz00_1603;

																											{	/* Object/nil.scm 112 */
																												BgL_objectz00_bglt
																													BgL_auxz00_1604;
																												BgL_auxz00_1604 =
																													(BgL_objectz00_bglt)
																													(BgL_classz00_7);
																												BgL_auxz00_1603 =
																													BGL_OBJECT_WIDENING
																													(BgL_auxz00_1604);
																											}
																											BgL_arg2930z00_746 =
																												(((BgL_tclassz00_bglt)
																													CREF
																													(BgL_auxz00_1603))->
																												BgL_slotsz00);
																										}
																										BgL_arg2928z00_744 =
																											BGl_fillzd2nilzd2zzobject_nilz00
																											(BgL_arg2930z00_746);
																									}
																									BgL_arg2927z00_743 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2928z00_744, BNIL);
																								}
																								BgL_arg2923z00_739 =
																									MAKE_PAIR(BgL_wideningz00_664,
																									BgL_arg2927z00_743);
																							}
																							{	/* Object/nil.scm 110 */
																								obj_t BgL_list2925z00_741;

																								{	/* Object/nil.scm 110 */
																									obj_t BgL_arg2926z00_742;

																									BgL_arg2926z00_742 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2925z00_741 =
																										MAKE_PAIR
																										(BgL_arg2923z00_739,
																										BgL_arg2926z00_742);
																								}
																								BgL_arg2922z00_738 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_thezd2idzd2nilz00_662,
																									BgL_list2925z00_741);
																						}}
																						BgL_arg2877z00_695 =
																							MAKE_PAIR(BgL_arg2921z00_737,
																							BgL_arg2922z00_738);
																					}
																					{	/* Object/nil.scm 98 */
																						obj_t BgL_list2879z00_697;

																						{	/* Object/nil.scm 98 */
																							obj_t BgL_arg2880z00_698;

																							{	/* Object/nil.scm 98 */
																								obj_t BgL_arg2881z00_699;

																								{	/* Object/nil.scm 98 */
																									obj_t BgL_arg2882z00_700;

																									{	/* Object/nil.scm 98 */
																										obj_t BgL_arg2883z00_701;

																										BgL_arg2883z00_701 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2882z00_700 =
																											MAKE_PAIR
																											(BgL_arg2877z00_695,
																											BgL_arg2883z00_701);
																									}
																									BgL_arg2881z00_699 =
																										MAKE_PAIR
																										(BgL_arg2876z00_694,
																										BgL_arg2882z00_700);
																								}
																								BgL_arg2880z00_698 =
																									MAKE_PAIR(BgL_arg2875z00_693,
																									BgL_arg2881z00_699);
																							}
																							BgL_list2879z00_697 =
																								MAKE_PAIR(BgL_arg2874z00_692,
																								BgL_arg2880z00_698);
																						}
																						BgL_arg2872z00_690 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2873z00_691,
																							BgL_list2879z00_697);
																				}}
																				BgL_arg2866z00_684 =
																					MAKE_PAIR(BgL_arg2871z00_689,
																					BgL_arg2872z00_690);
																			}
																			{	/* Object/nil.scm 97 */
																				obj_t BgL_list2868z00_686;

																				{	/* Object/nil.scm 97 */
																					obj_t BgL_arg2869z00_687;

																					{	/* Object/nil.scm 97 */
																						obj_t BgL_arg2870z00_688;

																						BgL_arg2870z00_688 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2869z00_687 =
																							MAKE_PAIR
																							(BgL_thezd2idzd2nilz00_662,
																							BgL_arg2870z00_688);
																					}
																					BgL_list2868z00_686 =
																						MAKE_PAIR(BgL_arg2866z00_684,
																						BgL_arg2869z00_687);
																				}
																				BgL_arg2864z00_682 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2865z00_683,
																					BgL_list2868z00_686);
																		}}
																		BgL_arg2862z00_680 =
																			MAKE_PAIR(BgL_arg2863z00_681,
																			BgL_arg2864z00_682);
																	}
																	BgL_arg2854z00_673 =
																		BGl_epairifyz00zztools_miscz00
																		(BgL_arg2862z00_680, BgL_srczd2defzd2_8);
																}
																{	/* Object/nil.scm 95 */
																	obj_t BgL_list2855z00_674;

																	{	/* Object/nil.scm 95 */
																		obj_t BgL_arg2856z00_675;

																		BgL_arg2856z00_675 =
																			MAKE_PAIR(BgL_arg2854z00_673, BNIL);
																		BgL_list2855z00_674 =
																			MAKE_PAIR(BgL_arg2852z00_672,
																			BgL_arg2856z00_675);
																	}
																	return BgL_list2855z00_674;
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
				{	/* Object/nil.scm 82 */
					return BFALSE;
				}
		}
	}



/* _gen-wide-class-nil */
	obj_t BGl__genzd2widezd2classzd2nilzd2zzobject_nilz00(obj_t BgL_envz00_1318,
		obj_t BgL_classz00_1319, obj_t BgL_srczd2defzd2_1320,
		obj_t BgL_importz00_1321)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 81 */
			return
				BGl_genzd2widezd2classzd2nilzd2zzobject_nilz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1319), BgL_srczd2defzd2_1320,
				BgL_importz00_1321);
		}
	}



/* fill-nil */
	obj_t BGl_fillzd2nilzd2zzobject_nilz00(obj_t BgL_slotsz00_10)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 119 */
			{
				obj_t BgL_slotsz00_775;

				obj_t BgL_initsz00_776;

				BgL_slotsz00_775 = BgL_slotsz00_10;
				BgL_initsz00_776 = BNIL;
			BgL_zc3anonymousza32959ze3z83_777:
				if (NULLP(BgL_slotsz00_775))
					{	/* Object/nil.scm 122 */
						return bgl_reverse_bang(BgL_initsz00_776);
					}
				else
					{	/* Object/nil.scm 124 */
						obj_t BgL_slotz00_779;

						BgL_slotz00_779 = CAR(BgL_slotsz00_775);
						{	/* Object/nil.scm 126 */
							bool_t BgL_testz00_1636;

							{	/* Object/nil.scm 126 */
								BgL_slotz00_bglt BgL_obj2522z00_1185;

								BgL_obj2522z00_1185 = (BgL_slotz00_bglt) (BgL_slotz00_779);
								BgL_testz00_1636 =
									CBOOL(
									(((BgL_slotz00_bglt) CREF(BgL_obj2522z00_1185))->
										BgL_indexedz00));
							}
							if (BgL_testz00_1636)
								{	/* Object/nil.scm 127 */
									obj_t BgL_arg2962z00_781;

									obj_t BgL_arg2963z00_782;

									BgL_arg2962z00_781 = CDR(BgL_slotsz00_775);
									BgL_arg2963z00_782 =
										MAKE_PAIR(BGl_slotzd2getzd2nilz00zzobject_nilz00
										(BgL_slotz00_779), BgL_initsz00_776);
									{
										obj_t BgL_initsz00_1644;

										obj_t BgL_slotsz00_1643;

										BgL_slotsz00_1643 = BgL_arg2962z00_781;
										BgL_initsz00_1644 = BgL_arg2963z00_782;
										BgL_initsz00_776 = BgL_initsz00_1644;
										BgL_slotsz00_775 = BgL_slotsz00_1643;
										goto BgL_zc3anonymousza32959ze3z83_777;
									}
								}
							else
								{	/* Object/nil.scm 126 */
									if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
											(BgL_slotz00_bglt) (BgL_slotz00_779)))
										{
											obj_t BgL_slotsz00_1648;

											BgL_slotsz00_1648 = CDR(BgL_slotsz00_775);
											BgL_slotsz00_775 = BgL_slotsz00_1648;
											goto BgL_zc3anonymousza32959ze3z83_777;
										}
									else
										{	/* Object/nil.scm 132 */
											obj_t BgL_arg2967z00_786;

											obj_t BgL_arg2968z00_787;

											BgL_arg2967z00_786 = CDR(BgL_slotsz00_775);
											BgL_arg2968z00_787 =
												MAKE_PAIR(BGl_slotzd2getzd2nilz00zzobject_nilz00
												(BgL_slotz00_779), BgL_initsz00_776);
											{
												obj_t BgL_initsz00_1654;

												obj_t BgL_slotsz00_1653;

												BgL_slotsz00_1653 = BgL_arg2967z00_786;
												BgL_initsz00_1654 = BgL_arg2968z00_787;
												BgL_initsz00_776 = BgL_initsz00_1654;
												BgL_slotsz00_775 = BgL_slotsz00_1653;
												goto BgL_zc3anonymousza32959ze3z83_777;
											}
										}
								}
						}
					}
			}
		}
	}



/* slot-get-nil */
	obj_t BGl_slotzd2getzd2nilz00zzobject_nilz00(obj_t BgL_slotz00_11)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 138 */
			{	/* Object/nil.scm 141 */
				bool_t BgL_testz00_1655;

				{	/* Object/nil.scm 141 */
					obj_t BgL_arg3015z00_835;

					{
						BgL_slotz00_bglt BgL_auxz00_1656;

						BgL_auxz00_1656 = (BgL_slotz00_bglt) (BgL_slotz00_11);
						BgL_arg3015z00_835 =
							(((BgL_slotz00_bglt) CREF(BgL_auxz00_1656))->BgL_typez00);
					}
					BgL_testz00_1655 =
						BGl_iszd2azf3z21zz__objectz00(BgL_arg3015z00_835,
						BGl_tclassz00zzobject_classz00);
				}
				if (BgL_testz00_1655)
					{	/* Object/nil.scm 142 */
						obj_t BgL_arg2971z00_792;

						{	/* Object/nil.scm 142 */
							obj_t BgL_arg2973z00_794;

							{	/* Object/nil.scm 142 */
								obj_t BgL_arg2974z00_795;

								obj_t BgL_arg2975z00_796;

								{	/* Object/nil.scm 142 */
									obj_t BgL_arg2978z00_799;

									{	/* Object/nil.scm 142 */
										BgL_typez00_bglt BgL_obj1508z00_1192;

										{	/* Object/nil.scm 142 */
											BgL_slotz00_bglt BgL_obj2510z00_1191;

											BgL_obj2510z00_1191 = (BgL_slotz00_bglt) (BgL_slotz00_11);
											BgL_obj1508z00_1192 =
												(BgL_typez00_bglt) (
												(((BgL_slotz00_bglt) CREF(BgL_obj2510z00_1191))->
													BgL_typez00));
										}
										BgL_arg2978z00_799 =
											(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1192))->
											BgL_idz00);
									}
									{	/* Object/nil.scm 142 */
										obj_t BgL_res3159z00_1195;

										{	/* Object/nil.scm 142 */
											obj_t BgL_arg2063z00_1194;

											BgL_arg2063z00_1194 =
												SYMBOL_TO_STRING(BgL_arg2978z00_799);
											BgL_res3159z00_1195 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1194);
										}
										BgL_arg2974z00_795 = BgL_res3159z00_1195;
									}
								}
								{	/* Object/nil.scm 142 */
									obj_t BgL_res3160z00_1198;

									{	/* Object/nil.scm 142 */
										obj_t BgL_symbolz00_1196;

										BgL_symbolz00_1196 = CNST_TABLE_REF(((long) 0));
										{	/* Object/nil.scm 142 */
											obj_t BgL_arg2063z00_1197;

											BgL_arg2063z00_1197 =
												SYMBOL_TO_STRING(BgL_symbolz00_1196);
											BgL_res3160z00_1198 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1197);
									}}
									BgL_arg2975z00_796 = BgL_res3160z00_1198;
								}
								{	/* Object/nil.scm 142 */
									obj_t BgL_list2976z00_797;

									{	/* Object/nil.scm 142 */
										obj_t BgL_arg2977z00_798;

										BgL_arg2977z00_798 = MAKE_PAIR(BgL_arg2975z00_796, BNIL);
										BgL_list2976z00_797 =
											MAKE_PAIR(BgL_arg2974z00_795, BgL_arg2977z00_798);
									}
									BgL_arg2973z00_794 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2976z00_797);
							}}
							BgL_arg2971z00_792 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2973z00_794));
						}
						return MAKE_PAIR(BgL_arg2971z00_792, BNIL);
					}
				else
					{	/* Object/nil.scm 143 */
						bool_t BgL_testz00_1675;

						{	/* Object/nil.scm 143 */
							obj_t BgL_arg3014z00_834;

							{
								BgL_slotz00_bglt BgL_auxz00_1676;

								BgL_auxz00_1676 = (BgL_slotz00_bglt) (BgL_slotz00_11);
								BgL_arg3014z00_834 =
									(((BgL_slotz00_bglt) CREF(BgL_auxz00_1676))->BgL_typez00);
							}
							BgL_testz00_1675 =
								BGl_iszd2azf3z21zz__objectz00(BgL_arg3014z00_834,
								BGl_tvecz00zztvector_tvectorz00);
						}
						if (BgL_testz00_1675)
							{	/* Object/nil.scm 144 */
								obj_t BgL_arg2981z00_802;

								obj_t BgL_arg2982z00_803;

								BgL_arg2981z00_802 = CNST_TABLE_REF(((long) 15));
								{	/* Object/nil.scm 144 */
									obj_t BgL_arg2983z00_804;

									obj_t BgL_arg2984z00_805;

									{	/* Object/nil.scm 144 */
										obj_t BgL_arg2988z00_809;

										obj_t BgL_arg2989z00_810;

										BgL_arg2988z00_809 = CNST_TABLE_REF(((long) 16));
										{	/* Object/nil.scm 144 */
											obj_t BgL_arg2990z00_811;

											{	/* Object/nil.scm 144 */
												BgL_typez00_bglt BgL_obj1508z00_1203;

												{	/* Object/nil.scm 144 */
													BgL_slotz00_bglt BgL_obj2510z00_1202;

													BgL_obj2510z00_1202 =
														(BgL_slotz00_bglt) (BgL_slotz00_11);
													BgL_obj1508z00_1203 =
														(BgL_typez00_bglt) (
														(((BgL_slotz00_bglt) CREF(BgL_obj2510z00_1202))->
															BgL_typez00));
												}
												BgL_arg2990z00_811 =
													(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1203))->
													BgL_idz00);
											}
											{	/* Object/nil.scm 144 */
												obj_t BgL_list2992z00_813;

												BgL_list2992z00_813 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2989z00_810 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2990z00_811, BgL_list2992z00_813);
										}}
										BgL_arg2983z00_804 =
											MAKE_PAIR(BgL_arg2988z00_809, BgL_arg2989z00_810);
									}
									{	/* Object/nil.scm 144 */
										obj_t BgL_arg2994z00_815;

										obj_t BgL_arg2995z00_816;

										BgL_arg2994z00_815 = CNST_TABLE_REF(((long) 16));
										{	/* Object/nil.scm 144 */
											obj_t BgL_list2996z00_817;

											BgL_list2996z00_817 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2995z00_816 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BNIL,
												BgL_list2996z00_817);
										}
										BgL_arg2984z00_805 =
											MAKE_PAIR(BgL_arg2994z00_815, BgL_arg2995z00_816);
									}
									{	/* Object/nil.scm 144 */
										obj_t BgL_list2986z00_807;

										{	/* Object/nil.scm 144 */
											obj_t BgL_arg2987z00_808;

											BgL_arg2987z00_808 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2986z00_807 =
												MAKE_PAIR(BgL_arg2984z00_805, BgL_arg2987z00_808);
										}
										BgL_arg2982z00_803 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2983z00_804, BgL_list2986z00_807);
								}}
								return MAKE_PAIR(BgL_arg2981z00_802, BgL_arg2982z00_803);
							}
						else
							{	/* Object/nil.scm 145 */
								bool_t BgL_testz00_1697;

								{	/* Object/nil.scm 145 */
									obj_t BgL_arg3013z00_833;

									{
										BgL_slotz00_bglt BgL_auxz00_1698;

										BgL_auxz00_1698 = (BgL_slotz00_bglt) (BgL_slotz00_11);
										BgL_arg3013z00_833 =
											(((BgL_slotz00_bglt) CREF(BgL_auxz00_1698))->BgL_typez00);
									}
									BgL_testz00_1697 =
										BGl_iszd2azf3z21zz__objectz00(BgL_arg3013z00_833,
										BGl_jarrayz00zzforeign_jtypez00);
								}
								if (BgL_testz00_1697)
									{	/* Object/nil.scm 146 */
										obj_t BgL_arg2998z00_819;

										obj_t BgL_arg3000z00_820;

										{	/* Object/nil.scm 146 */
											obj_t BgL_arg3001z00_821;

											{	/* Object/nil.scm 146 */
												obj_t BgL_arg3002z00_822;

												obj_t BgL_arg3003z00_823;

												{	/* Object/nil.scm 146 */
													obj_t BgL_res3161z00_1208;

													{	/* Object/nil.scm 146 */
														obj_t BgL_symbolz00_1206;

														BgL_symbolz00_1206 = CNST_TABLE_REF(((long) 17));
														{	/* Object/nil.scm 146 */
															obj_t BgL_arg2063z00_1207;

															BgL_arg2063z00_1207 =
																SYMBOL_TO_STRING(BgL_symbolz00_1206);
															BgL_res3161z00_1208 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1207);
													}}
													BgL_arg3002z00_822 = BgL_res3161z00_1208;
												}
												{	/* Object/nil.scm 146 */
													obj_t BgL_arg3006z00_826;

													{	/* Object/nil.scm 146 */
														BgL_typez00_bglt BgL_obj1508z00_1210;

														{	/* Object/nil.scm 146 */
															BgL_slotz00_bglt BgL_obj2510z00_1209;

															BgL_obj2510z00_1209 =
																(BgL_slotz00_bglt) (BgL_slotz00_11);
															BgL_obj1508z00_1210 =
																(BgL_typez00_bglt) (
																(((BgL_slotz00_bglt)
																		CREF(BgL_obj2510z00_1209))->BgL_typez00));
														}
														BgL_arg3006z00_826 =
															(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1210))->
															BgL_idz00);
													}
													{	/* Object/nil.scm 146 */
														obj_t BgL_res3162z00_1213;

														{	/* Object/nil.scm 146 */
															obj_t BgL_arg2063z00_1212;

															BgL_arg2063z00_1212 =
																SYMBOL_TO_STRING(BgL_arg3006z00_826);
															BgL_res3162z00_1213 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1212);
														}
														BgL_arg3003z00_823 = BgL_res3162z00_1213;
												}}
												{	/* Object/nil.scm 146 */
													obj_t BgL_list3004z00_824;

													{	/* Object/nil.scm 146 */
														obj_t BgL_arg3005z00_825;

														BgL_arg3005z00_825 =
															MAKE_PAIR(BgL_arg3003z00_823, BNIL);
														BgL_list3004z00_824 =
															MAKE_PAIR(BgL_arg3002z00_822, BgL_arg3005z00_825);
													}
													BgL_arg3001z00_821 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list3004z00_824);
											}}
											BgL_arg2998z00_819 =
												string_to_symbol(BSTRING_TO_STRING(BgL_arg3001z00_821));
										}
										{	/* Object/nil.scm 146 */
											obj_t BgL_list3008z00_828;

											BgL_list3008z00_828 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3000z00_820 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long)
														0)), BgL_list3008z00_828);
										}
										return MAKE_PAIR(BgL_arg2998z00_819, BgL_arg3000z00_820);
									}
								else
									{	/* Object/nil.scm 147 */
										bool_t BgL_testz00_1720;

										{	/* Object/nil.scm 147 */
											obj_t BgL_arg3012z00_832;

											{
												BgL_slotz00_bglt BgL_auxz00_1721;

												BgL_auxz00_1721 = (BgL_slotz00_bglt) (BgL_slotz00_11);
												BgL_arg3012z00_832 =
													(((BgL_slotz00_bglt) CREF(BgL_auxz00_1721))->
													BgL_typez00);
											}
											BgL_testz00_1720 =
												BGl_bigloozd2typezf3z21zztype_typez00(
												(BgL_typez00_bglt) (BgL_arg3012z00_832));
										}
										if (BgL_testz00_1720)
											{	/* Object/nil.scm 148 */
												obj_t BgL_arg3010z00_830;

												{
													BgL_slotz00_bglt BgL_auxz00_1726;

													BgL_auxz00_1726 = (BgL_slotz00_bglt) (BgL_slotz00_11);
													BgL_arg3010z00_830 =
														(((BgL_slotz00_bglt) CREF(BgL_auxz00_1726))->
														BgL_typez00);
												}
												return
													BGl_bigloozd2primitivezd2typezd2nilzd2zzobject_nilz00
													(BgL_arg3010z00_830, BgL_slotz00_11);
											}
										else
											{	/* Object/nil.scm 150 */
												obj_t BgL_arg3011z00_831;

												{
													BgL_slotz00_bglt BgL_auxz00_1730;

													BgL_auxz00_1730 = (BgL_slotz00_bglt) (BgL_slotz00_11);
													BgL_arg3011z00_831 =
														(((BgL_slotz00_bglt) CREF(BgL_auxz00_1730))->
														BgL_typez00);
												}
												return
													BGl_externzd2typezd2nilz00zzobject_nilz00
													(BgL_arg3011z00_831, BgL_slotz00_11);
											}
									}
							}
					}
			}
		}
	}



/* bigloo-primitive-type-nil */
	obj_t BGl_bigloozd2primitivezd2typezd2nilzd2zzobject_nilz00(obj_t
		BgL_typez00_12, obj_t BgL_slotz00_13)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 155 */
			{	/* Object/nil.scm 157 */
				bool_t BgL_testz00_1734;

				if ((BgL_typez00_12 == BGl_za2objza2z00zztype_cachez00))
					{	/* Object/nil.scm 157 */
						BgL_testz00_1734 = ((bool_t) 1);
					}
				else
					{	/* Object/nil.scm 157 */
						BgL_testz00_1734 =
							(BgL_typez00_12 == BGl_za2unspecza2z00zztype_cachez00);
					}
				if (BgL_testz00_1734)
					{	/* Object/nil.scm 157 */
						return BUNSPEC;
					}
				else
					{	/* Object/nil.scm 157 */
						if ((BgL_typez00_12 == BGl_za2cellza2z00zztype_cachez00))
							{	/* Object/nil.scm 158 */
								return CNST_TABLE_REF(((long) 18));
							}
						else
							{	/* Object/nil.scm 158 */
								if ((BgL_typez00_12 == BGl_za2bintza2z00zztype_cachez00))
									{	/* Object/nil.scm 159 */
										return BINT(((long) 0));
									}
								else
									{	/* Object/nil.scm 159 */
										if ((BgL_typez00_12 == BGl_za2bllongza2z00zztype_cachez00))
											{	/* Object/nil.scm 160 */
												return CNST_TABLE_REF(((long) 19));
											}
										else
											{	/* Object/nil.scm 160 */
												if (
													(BgL_typez00_12 ==
														BGl_za2bignumza2z00zztype_cachez00))
													{	/* Object/nil.scm 161 */
														return CNST_TABLE_REF(((long) 20));
													}
												else
													{	/* Object/nil.scm 161 */
														if (
															(BgL_typez00_12 ==
																BGl_za2boolza2z00zztype_cachez00))
															{	/* Object/nil.scm 162 */
																return BFALSE;
															}
														else
															{	/* Object/nil.scm 162 */
																if (
																	(BgL_typez00_12 ==
																		BGl_za2brealza2z00zztype_cachez00))
																	{	/* Object/nil.scm 163 */
																		return BGl_real3163z00zzobject_nilz00;
																	}
																else
																	{	/* Object/nil.scm 163 */
																		if (
																			(BgL_typez00_12 ==
																				BGl_za2bcharza2z00zztype_cachez00))
																			{	/* Object/nil.scm 164 */
																				return BCHAR(((unsigned char) '_'));
																			}
																		else
																			{	/* Object/nil.scm 165 */
																				bool_t BgL_testz00_1757;

																				if (
																					(BgL_typez00_12 ==
																						BGl_za2bnilza2z00zztype_cachez00))
																					{	/* Object/nil.scm 165 */
																						BgL_testz00_1757 = ((bool_t) 1);
																					}
																				else
																					{	/* Object/nil.scm 165 */
																						BgL_testz00_1757 =
																							(BgL_typez00_12 ==
																							BGl_za2pairzd2nilza2zd2zztype_cachez00);
																					}
																				if (BgL_testz00_1757)
																					{	/* Object/nil.scm 165 */
																						return CNST_TABLE_REF(((long) 21));
																					}
																				else
																					{	/* Object/nil.scm 165 */
																						if (
																							(BgL_typez00_12 ==
																								BGl_za2pairza2z00zztype_cachez00))
																							{	/* Object/nil.scm 166 */
																								return
																									CNST_TABLE_REF(((long) 22));
																							}
																						else
																							{	/* Object/nil.scm 166 */
																								if (
																									(BgL_typez00_12 ==
																										BGl_za2epairza2z00zztype_cachez00))
																									{	/* Object/nil.scm 167 */
																										return
																											CNST_TABLE_REF(((long)
																												23));
																									}
																								else
																									{	/* Object/nil.scm 167 */
																										if (
																											(BgL_typez00_12 ==
																												BGl_za2bstringza2z00zztype_cachez00))
																											{	/* Object/nil.scm 168 */
																												return
																													BGl_string3164z00zzobject_nilz00;
																											}
																										else
																											{	/* Object/nil.scm 168 */
																												if (
																													(BgL_typez00_12 ==
																														BGl_za2symbolza2z00zztype_cachez00))
																													{	/* Object/nil.scm 169 */
																														return
																															CNST_TABLE_REF((
																																(long) 24));
																													}
																												else
																													{	/* Object/nil.scm 169 */
																														if (
																															(BgL_typez00_12 ==
																																BGl_za2keywordza2z00zztype_cachez00))
																															{	/* Object/nil.scm 170 */
																																return
																																	CNST_TABLE_REF
																																	(((long) 25));
																															}
																														else
																															{	/* Object/nil.scm 170 */
																																if (
																																	(BgL_typez00_12
																																		==
																																		BGl_za2vectorza2z00zztype_cachez00))
																																	{	/* Object/nil.scm 171 */
																																		return
																																			CNST_TABLE_REF
																																			(((long)
																																				26));
																																	}
																																else
																																	{	/* Object/nil.scm 171 */
																																		if (
																																			(BgL_typez00_12
																																				==
																																				BGl_za2procedureza2z00zztype_cachez00))
																																			{	/* Object/nil.scm 172 */
																																				return
																																					CNST_TABLE_REF
																																					(((long) 27));
																																			}
																																		else
																																			{	/* Object/nil.scm 174 */
																																				obj_t
																																					BgL_casezd2valuezd2_852;
																																				{
																																					BgL_typez00_bglt
																																						BgL_auxz00_1782;
																																					BgL_auxz00_1782
																																						=
																																						(BgL_typez00_bglt)
																																						(BgL_typez00_12);
																																					BgL_casezd2valuezd2_852
																																						=
																																						(((BgL_typez00_bglt) CREF(BgL_auxz00_1782))->BgL_idz00);
																																				}
																																				if (
																																					(BgL_casezd2valuezd2_852
																																						==
																																						CNST_TABLE_REF
																																						(((long) 28))))
																																					{	/* Object/nil.scm 174 */
																																						return
																																							CNST_TABLE_REF
																																							(((long) 29));
																																					}
																																				else
																																					{	/* Object/nil.scm 174 */
																																						if (
																																							(BgL_casezd2valuezd2_852
																																								==
																																								CNST_TABLE_REF
																																								(((long) 30))))
																																							{	/* Object/nil.scm 174 */
																																								return
																																									CNST_TABLE_REF
																																									(
																																									((long) 31));
																																							}
																																						else
																																							{	/* Object/nil.scm 174 */
																																								if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 32))))
																																									{	/* Object/nil.scm 174 */
																																										return
																																											CNST_TABLE_REF
																																											(
																																											((long) 31));
																																									}
																																								else
																																									{	/* Object/nil.scm 174 */
																																										if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 33))))
																																											{	/* Object/nil.scm 174 */
																																												return
																																													CNST_TABLE_REF
																																													(
																																													((long) 31));
																																											}
																																										else
																																											{	/* Object/nil.scm 174 */
																																												if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 34))))
																																													{	/* Object/nil.scm 174 */
																																														return
																																															CNST_TABLE_REF
																																															(
																																															((long) 35));
																																													}
																																												else
																																													{	/* Object/nil.scm 174 */
																																														bool_t
																																															BgL_testz00_1805;
																																														{	/* Object/nil.scm 174 */
																																															bool_t
																																																BgL__ortest_2764z00_916;
																																															BgL__ortest_2764z00_916
																																																=
																																																(BgL_casezd2valuezd2_852
																																																==
																																																CNST_TABLE_REF
																																																(((long) 2)));
																																															if (BgL__ortest_2764z00_916)
																																																{	/* Object/nil.scm 174 */
																																																	BgL_testz00_1805
																																																		=
																																																		BgL__ortest_2764z00_916;
																																																}
																																															else
																																																{	/* Object/nil.scm 174 */
																																																	BgL_testz00_1805
																																																		=
																																																		(BgL_casezd2valuezd2_852
																																																		==
																																																		CNST_TABLE_REF
																																																		(((long) 36)));
																																														}}
																																														if (BgL_testz00_1805)
																																															{	/* Object/nil.scm 174 */
																																																return
																																																	BUNSPEC;
																																															}
																																														else
																																															{	/* Object/nil.scm 174 */
																																																if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 37))))
																																																	{	/* Object/nil.scm 174 */
																																																		return
																																																			CNST_TABLE_REF
																																																			(
																																																			((long) 18));
																																																	}
																																																else
																																																	{	/* Object/nil.scm 174 */
																																																		if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 38))))
																																																			{	/* Object/nil.scm 174 */
																																																				return
																																																					BINT
																																																					(
																																																					((long) 0));
																																																			}
																																																		else
																																																			{	/* Object/nil.scm 174 */
																																																				if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 39))))
																																																					{	/* Object/nil.scm 174 */
																																																						return
																																																							CNST_TABLE_REF
																																																							(
																																																							((long) 19));
																																																					}
																																																				else
																																																					{	/* Object/nil.scm 174 */
																																																						if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 40))))
																																																							{	/* Object/nil.scm 174 */
																																																								return
																																																									CNST_TABLE_REF
																																																									(
																																																									((long) 41));
																																																							}
																																																						else
																																																							{	/* Object/nil.scm 174 */
																																																								bool_t
																																																									BgL_testz00_1827;
																																																								{	/* Object/nil.scm 174 */
																																																									bool_t
																																																										BgL__ortest_2765z00_915;
																																																									BgL__ortest_2765z00_915
																																																										=
																																																										(BgL_casezd2valuezd2_852
																																																										==
																																																										CNST_TABLE_REF
																																																										(((long) 42)));
																																																									if (BgL__ortest_2765z00_915)
																																																										{	/* Object/nil.scm 174 */
																																																											BgL_testz00_1827
																																																												=
																																																												BgL__ortest_2765z00_915;
																																																										}
																																																									else
																																																										{	/* Object/nil.scm 174 */
																																																											BgL_testz00_1827
																																																												=
																																																												(BgL_casezd2valuezd2_852
																																																												==
																																																												CNST_TABLE_REF
																																																												(((long) 43)));
																																																								}}
																																																								if (BgL_testz00_1827)
																																																									{	/* Object/nil.scm 174 */
																																																										return
																																																											BFALSE;
																																																									}
																																																								else
																																																									{	/* Object/nil.scm 174 */
																																																										if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 44))))
																																																											{	/* Object/nil.scm 174 */
																																																												return
																																																													BGl_real3163z00zzobject_nilz00;
																																																											}
																																																										else
																																																											{	/* Object/nil.scm 174 */
																																																												if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 45))))
																																																													{	/* Object/nil.scm 174 */
																																																														return
																																																															BCHAR
																																																															(
																																																															((unsigned char) '_'));
																																																													}
																																																												else
																																																													{	/* Object/nil.scm 174 */
																																																														bool_t
																																																															BgL_testz00_1840;
																																																														{	/* Object/nil.scm 174 */
																																																															bool_t
																																																																BgL__ortest_2766z00_914;
																																																															BgL__ortest_2766z00_914
																																																																=
																																																																(BgL_casezd2valuezd2_852
																																																																==
																																																																CNST_TABLE_REF
																																																																(((long) 46)));
																																																															if (BgL__ortest_2766z00_914)
																																																																{	/* Object/nil.scm 174 */
																																																																	BgL_testz00_1840
																																																																		=
																																																																		BgL__ortest_2766z00_914;
																																																																}
																																																															else
																																																																{	/* Object/nil.scm 174 */
																																																																	BgL_testz00_1840
																																																																		=
																																																																		(BgL_casezd2valuezd2_852
																																																																		==
																																																																		CNST_TABLE_REF
																																																																		(((long) 47)));
																																																														}}
																																																														if (BgL_testz00_1840)
																																																															{	/* Object/nil.scm 174 */
																																																																return
																																																																	CNST_TABLE_REF
																																																																	(
																																																																	((long) 21));
																																																															}
																																																														else
																																																															{	/* Object/nil.scm 174 */
																																																																if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 48))))
																																																																	{	/* Object/nil.scm 174 */
																																																																		return
																																																																			CNST_TABLE_REF
																																																																			(
																																																																			((long) 22));
																																																																	}
																																																																else
																																																																	{	/* Object/nil.scm 174 */
																																																																		if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 49))))
																																																																			{	/* Object/nil.scm 174 */
																																																																				return
																																																																					CNST_TABLE_REF
																																																																					(
																																																																					((long) 23));
																																																																			}
																																																																		else
																																																																			{	/* Object/nil.scm 174 */
																																																																				if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 50))))
																																																																					{	/* Object/nil.scm 174 */
																																																																						return
																																																																							BGl_string3164z00zzobject_nilz00;
																																																																					}
																																																																				else
																																																																					{	/* Object/nil.scm 174 */
																																																																						if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 51))))
																																																																							{	/* Object/nil.scm 174 */
																																																																								return
																																																																									CNST_TABLE_REF
																																																																									(
																																																																									((long) 24));
																																																																							}
																																																																						else
																																																																							{	/* Object/nil.scm 174 */
																																																																								if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 52))))
																																																																									{	/* Object/nil.scm 174 */
																																																																										return
																																																																											CNST_TABLE_REF
																																																																											(
																																																																											((long) 25));
																																																																									}
																																																																								else
																																																																									{	/* Object/nil.scm 174 */
																																																																										if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 53))))
																																																																											{	/* Object/nil.scm 174 */
																																																																												return
																																																																													CNST_TABLE_REF
																																																																													(
																																																																													((long) 26));
																																																																											}
																																																																										else
																																																																											{	/* Object/nil.scm 174 */
																																																																												if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 54))))
																																																																													{	/* Object/nil.scm 195 */
																																																																														obj_t
																																																																															BgL_arg3053z00_874;
																																																																														obj_t
																																																																															BgL_arg3054z00_875;
																																																																														BgL_arg3053z00_874
																																																																															=
																																																																															CNST_TABLE_REF
																																																																															(
																																																																															((long) 55));
																																																																														{	/* Object/nil.scm 195 */
																																																																															obj_t
																																																																																BgL_arg3055z00_876;
																																																																															{	/* Object/nil.scm 195 */
																																																																																obj_t
																																																																																	BgL_arg3061z00_882;
																																																																																obj_t
																																																																																	BgL_arg3063z00_883;
																																																																																BgL_arg3061z00_882
																																																																																	=
																																																																																	CNST_TABLE_REF
																																																																																	(
																																																																																	((long) 16));
																																																																																{	/* Object/nil.scm 195 */
																																																																																	obj_t
																																																																																		BgL_arg3064z00_884;
																																																																																	{	/* Object/nil.scm 195 */

																																																																																		{	/* Object/nil.scm 195 */

																																																																																			BgL_arg3064z00_884
																																																																																				=
																																																																																				BGl_gensymz00zz__r4_symbols_6_4z00
																																																																																				(BFALSE);
																																																																																	}}
																																																																																	{	/* Object/nil.scm 195 */
																																																																																		obj_t
																																																																																			BgL_list3066z00_886;
																																																																																		BgL_list3066z00_886
																																																																																			=
																																																																																			MAKE_PAIR
																																																																																			(BNIL,
																																																																																			BNIL);
																																																																																		BgL_arg3063z00_883
																																																																																			=
																																																																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																																																			(BgL_arg3064z00_884,
																																																																																			BgL_list3066z00_886);
																																																																																}}
																																																																																BgL_arg3055z00_876
																																																																																	=
																																																																																	MAKE_PAIR
																																																																																	(BgL_arg3061z00_882,
																																																																																	BgL_arg3063z00_883);
																																																																															}
																																																																															{	/* Object/nil.scm 195 */
																																																																																obj_t
																																																																																	BgL_list3058z00_879;
																																																																																{	/* Object/nil.scm 195 */
																																																																																	obj_t
																																																																																		BgL_arg3059z00_880;
																																																																																	{	/* Object/nil.scm 195 */
																																																																																		obj_t
																																																																																			BgL_arg3060z00_881;
																																																																																		BgL_arg3060z00_881
																																																																																			=
																																																																																			MAKE_PAIR
																																																																																			(BNIL,
																																																																																			BNIL);
																																																																																		BgL_arg3059z00_880
																																																																																			=
																																																																																			MAKE_PAIR
																																																																																			(BFALSE,
																																																																																			BgL_arg3060z00_881);
																																																																																	}
																																																																																	BgL_list3058z00_879
																																																																																		=
																																																																																		MAKE_PAIR
																																																																																		(BINT
																																																																																		(((long) 0)), BgL_arg3059z00_880);
																																																																																}
																																																																																BgL_arg3054z00_875
																																																																																	=
																																																																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																																																	(BgL_arg3055z00_876,
																																																																																	BgL_list3058z00_879);
																																																																														}}
																																																																														return
																																																																															MAKE_PAIR
																																																																															(BgL_arg3053z00_874,
																																																																															BgL_arg3054z00_875);
																																																																													}
																																																																												else
																																																																													{	/* Object/nil.scm 174 */
																																																																														if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 56))))
																																																																															{	/* Object/nil.scm 174 */
																																																																																return
																																																																																	CNST_TABLE_REF
																																																																																	(
																																																																																	((long) 27));
																																																																															}
																																																																														else
																																																																															{	/* Object/nil.scm 174 */
																																																																																if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 57))))
																																																																																	{	/* Object/nil.scm 174 */
																																																																																		return
																																																																																			CNST_TABLE_REF
																																																																																			(
																																																																																			((long) 58));
																																																																																	}
																																																																																else
																																																																																	{	/* Object/nil.scm 174 */
																																																																																		if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 59))))
																																																																																			{	/* Object/nil.scm 174 */
																																																																																				return
																																																																																					CNST_TABLE_REF
																																																																																					(
																																																																																					((long) 60));
																																																																																			}
																																																																																		else
																																																																																			{	/* Object/nil.scm 174 */
																																																																																				if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 61))))
																																																																																					{	/* Object/nil.scm 174 */
																																																																																						return
																																																																																							CNST_TABLE_REF
																																																																																							(
																																																																																							((long) 62));
																																																																																					}
																																																																																				else
																																																																																					{	/* Object/nil.scm 174 */
																																																																																						if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 63))))
																																																																																							{	/* Object/nil.scm 174 */
																																																																																								return
																																																																																									CNST_TABLE_REF
																																																																																									(
																																																																																									((long) 64));
																																																																																							}
																																																																																						else
																																																																																							{	/* Object/nil.scm 174 */
																																																																																								if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 65))))
																																																																																									{	/* Object/nil.scm 174 */
																																																																																										return
																																																																																											CNST_TABLE_REF
																																																																																											(
																																																																																											((long) 66));
																																																																																									}
																																																																																								else
																																																																																									{	/* Object/nil.scm 174 */
																																																																																										if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 67))))
																																																																																											{	/* Object/nil.scm 174 */
																																																																																												return
																																																																																													CNST_TABLE_REF
																																																																																													(
																																																																																													((long) 68));
																																																																																											}
																																																																																										else
																																																																																											{	/* Object/nil.scm 174 */
																																																																																												if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 69))))
																																																																																													{	/* Object/nil.scm 174 */
																																																																																														return
																																																																																															CNST_TABLE_REF
																																																																																															(
																																																																																															((long) 70));
																																																																																													}
																																																																																												else
																																																																																													{	/* Object/nil.scm 174 */
																																																																																														if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 71))))
																																																																																															{	/* Object/nil.scm 174 */
																																																																																																return
																																																																																																	CNST_TABLE_REF
																																																																																																	(
																																																																																																	((long) 72));
																																																																																															}
																																																																																														else
																																																																																															{	/* Object/nil.scm 174 */
																																																																																																if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 73))))
																																																																																																	{	/* Object/nil.scm 174 */
																																																																																																		return
																																																																																																			CNST_TABLE_REF
																																																																																																			(
																																																																																																			((long) 74));
																																																																																																	}
																																																																																																else
																																																																																																	{	/* Object/nil.scm 174 */
																																																																																																		if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 75))))
																																																																																																			{	/* Object/nil.scm 174 */
																																																																																																				return
																																																																																																					CNST_TABLE_REF
																																																																																																					(
																																																																																																					((long) 76));
																																																																																																			}
																																																																																																		else
																																																																																																			{	/* Object/nil.scm 174 */
																																																																																																				if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 77))))
																																																																																																					{	/* Object/nil.scm 174 */
																																																																																																						return
																																																																																																							CNST_TABLE_REF
																																																																																																							(
																																																																																																							((long) 78));
																																																																																																					}
																																																																																																				else
																																																																																																					{	/* Object/nil.scm 174 */
																																																																																																						if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 79))))
																																																																																																							{	/* Object/nil.scm 174 */
																																																																																																								return
																																																																																																									CNST_TABLE_REF
																																																																																																									(
																																																																																																									((long) 80));
																																																																																																							}
																																																																																																						else
																																																																																																							{	/* Object/nil.scm 174 */
																																																																																																								if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 81))))
																																																																																																									{	/* Object/nil.scm 174 */
																																																																																																										return
																																																																																																											CNST_TABLE_REF
																																																																																																											(
																																																																																																											((long) 82));
																																																																																																									}
																																																																																																								else
																																																																																																									{	/* Object/nil.scm 174 */
																																																																																																										if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 83))))
																																																																																																											{	/* Object/nil.scm 174 */
																																																																																																												return
																																																																																																													CNST_TABLE_REF
																																																																																																													(
																																																																																																													((long) 84));
																																																																																																											}
																																																																																																										else
																																																																																																											{	/* Object/nil.scm 174 */
																																																																																																												if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 85))))
																																																																																																													{	/* Object/nil.scm 174 */
																																																																																																														return
																																																																																																															CNST_TABLE_REF
																																																																																																															(
																																																																																																															((long) 86));
																																																																																																													}
																																																																																																												else
																																																																																																													{	/* Object/nil.scm 174 */
																																																																																																														if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 87))))
																																																																																																															{	/* Object/nil.scm 174 */
																																																																																																																return
																																																																																																																	CNST_TABLE_REF
																																																																																																																	(
																																																																																																																	((long) 88));
																																																																																																															}
																																																																																																														else
																																																																																																															{	/* Object/nil.scm 174 */
																																																																																																																if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 89))))
																																																																																																																	{	/* Object/nil.scm 174 */
																																																																																																																		return
																																																																																																																			CNST_TABLE_REF
																																																																																																																			(
																																																																																																																			((long) 90));
																																																																																																																	}
																																																																																																																else
																																																																																																																	{	/* Object/nil.scm 174 */
																																																																																																																		if ((BgL_casezd2valuezd2_852 == CNST_TABLE_REF(((long) 91))))
																																																																																																																			{	/* Object/nil.scm 174 */
																																																																																																																				return
																																																																																																																					CNST_TABLE_REF
																																																																																																																					(
																																																																																																																					((long) 92));
																																																																																																																			}
																																																																																																																		else
																																																																																																																			{	/* Object/nil.scm 215 */
																																																																																																																				obj_t
																																																																																																																					BgL_arg3086z00_907;
																																																																																																																				obj_t
																																																																																																																					BgL_arg3087z00_908;
																																																																																																																				obj_t
																																																																																																																					BgL_arg3088z00_909;
																																																																																																																				{	/* Object/nil.scm 215 */
																																																																																																																					BgL_typez00_bglt
																																																																																																																						BgL_obj1508z00_1294;
																																																																																																																					{	/* Object/nil.scm 215 */
																																																																																																																						BgL_slotz00_bglt
																																																																																																																							BgL_obj2509z00_1293;
																																																																																																																						BgL_obj2509z00_1293
																																																																																																																							=
																																																																																																																							(BgL_slotz00_bglt)
																																																																																																																							(BgL_slotz00_13);
																																																																																																																						BgL_obj1508z00_1294
																																																																																																																							=
																																																																																																																							(BgL_typez00_bglt)
																																																																																																																							(
																																																																																																																							(((BgL_slotz00_bglt) CREF(BgL_obj2509z00_1293))->BgL_classzd2ownerzd2));
																																																																																																																					}
																																																																																																																					BgL_arg3086z00_907
																																																																																																																						=
																																																																																																																						(
																																																																																																																						((BgL_typez00_bglt) CREF(BgL_obj1508z00_1294))->BgL_idz00);
																																																																																																																				}
																																																																																																																				{	/* Object/nil.scm 216 */
																																																																																																																					obj_t
																																																																																																																						BgL_list3092z00_913;
																																																																																																																					BgL_list3092z00_913
																																																																																																																						=
																																																																																																																						MAKE_PAIR
																																																																																																																						(BgL_casezd2valuezd2_852,
																																																																																																																						BNIL);
																																																																																																																					BgL_arg3087z00_908
																																																																																																																						=
																																																																																																																						BGl_formatz00zz__r4_output_6_10_3z00
																																																																																																																						(BGl_string3165z00zzobject_nilz00,
																																																																																																																						BgL_list3092z00_913);
																																																																																																																				}
																																																																																																																				{
																																																																																																																					BgL_slotz00_bglt
																																																																																																																						BgL_auxz00_1967;
																																																																																																																					BgL_auxz00_1967
																																																																																																																						=
																																																																																																																						(BgL_slotz00_bglt)
																																																																																																																						(BgL_slotz00_13);
																																																																																																																					BgL_arg3088z00_909
																																																																																																																						=
																																																																																																																						(
																																																																																																																						((BgL_slotz00_bglt) CREF(BgL_auxz00_1967))->BgL_idz00);
																																																																																																																				}
																																																																																																																				return
																																																																																																																					BGl_errorz00zz__errorz00
																																																																																																																					(BgL_arg3086z00_907,
																																																																																																																					BgL_arg3087z00_908,
																																																																																																																					BgL_arg3088z00_909);
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



/* extern-type-nil */
	obj_t BGl_externzd2typezd2nilz00zzobject_nilz00(obj_t BgL_typez00_14,
		obj_t BgL_slotz00_15)
	{
		AN_OBJECT;
		{	/* Object/nil.scm 222 */
			{	/* Object/nil.scm 224 */
				bool_t BgL_testz00_1971;

				if ((BgL_typez00_14 == BGl_za2intza2z00zztype_cachez00))
					{	/* Object/nil.scm 224 */
						BgL_testz00_1971 = ((bool_t) 1);
					}
				else
					{	/* Object/nil.scm 224 */
						BgL_testz00_1971 =
							(BgL_typez00_14 == BGl_za2longza2z00zztype_cachez00);
					}
				if (BgL_testz00_1971)
					{	/* Object/nil.scm 224 */
						return BINT(((long) 0));
					}
				else
					{	/* Object/nil.scm 224 */
						if ((BgL_typez00_14 == BGl_za2boolza2z00zztype_cachez00))
							{	/* Object/nil.scm 225 */
								return BFALSE;
							}
						else
							{	/* Object/nil.scm 225 */
								if ((BgL_typez00_14 == BGl_za2realza2z00zztype_cachez00))
									{	/* Object/nil.scm 226 */
										return BGl_real3163z00zzobject_nilz00;
									}
								else
									{	/* Object/nil.scm 226 */
										if ((BgL_typez00_14 == BGl_za2elongza2z00zztype_cachez00))
											{	/* Object/nil.scm 227 */
												return CNST_TABLE_REF(((long) 41));
											}
										else
											{	/* Object/nil.scm 227 */
												if (
													(BgL_typez00_14 == BGl_za2llongza2z00zztype_cachez00))
													{	/* Object/nil.scm 228 */
														return CNST_TABLE_REF(((long) 19));
													}
												else
													{	/* Object/nil.scm 228 */
														if (
															(BgL_typez00_14 ==
																BGl_za2charza2z00zztype_cachez00))
															{	/* Object/nil.scm 229 */
																return BCHAR(((unsigned char) '_'));
															}
														else
															{	/* Object/nil.scm 229 */
																if (
																	(BgL_typez00_14 ==
																		BGl_za2stringza2z00zztype_cachez00))
																	{	/* Object/nil.scm 230 */
																		return BGl_string3164z00zzobject_nilz00;
																	}
																else
																	{	/* Object/nil.scm 231 */
																		bool_t BgL_testz00_1991;

																		if (BGl_iszd2azf3z21zz__objectz00
																			(BgL_typez00_14,
																				BGl_jclassz00zzobject_classz00))
																			{	/* Object/nil.scm 231 */
																				BgL_testz00_1991 = ((bool_t) 1);
																			}
																		else
																			{	/* Object/nil.scm 231 */
																				BgL_testz00_1991 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_typez00_14,
																					BGl_jarrayz00zzforeign_jtypez00);
																			}
																		if (BgL_testz00_1991)
																			{	/* Object/nil.scm 232 */
																				obj_t BgL_arg3103z00_927;

																				obj_t BgL_arg3104z00_928;

																				BgL_arg3103z00_927 =
																					CNST_TABLE_REF(((long) 93));
																				{
																					BgL_typez00_bglt BgL_auxz00_1996;

																					BgL_auxz00_1996 =
																						(BgL_typez00_bglt) (BgL_typez00_14);
																					BgL_arg3104z00_928 =
																						(((BgL_typez00_bglt)
																							CREF(BgL_auxz00_1996))->
																						BgL_idz00);
																				}
																				return
																					BGl_makezd2privatezd2sexpz00zzast_privatez00
																					(BgL_arg3103z00_927,
																					BgL_arg3104z00_928, BNIL);
																			}
																		else
																			{	/* Object/nil.scm 234 */
																				obj_t BgL_casezd2valuezd2_930;

																				{
																					BgL_typez00_bglt BgL_auxz00_2000;

																					BgL_auxz00_2000 =
																						(BgL_typez00_bglt) (BgL_typez00_14);
																					BgL_casezd2valuezd2_930 =
																						(((BgL_typez00_bglt)
																							CREF(BgL_auxz00_2000))->
																						BgL_idz00);
																				}
																				{	/* Object/nil.scm 234 */
																					bool_t BgL_testz00_2003;

																					{	/* Object/nil.scm 234 */
																						bool_t BgL__ortest_2767z00_947;

																						BgL__ortest_2767z00_947 =
																							(BgL_casezd2valuezd2_930 ==
																							CNST_TABLE_REF(((long) 94)));
																						if (BgL__ortest_2767z00_947)
																							{	/* Object/nil.scm 234 */
																								BgL_testz00_2003 =
																									BgL__ortest_2767z00_947;
																							}
																						else
																							{	/* Object/nil.scm 234 */
																								bool_t BgL__ortest_2768z00_948;

																								BgL__ortest_2768z00_948 =
																									(BgL_casezd2valuezd2_930 ==
																									CNST_TABLE_REF(((long) 95)));
																								if (BgL__ortest_2768z00_948)
																									{	/* Object/nil.scm 234 */
																										BgL_testz00_2003 =
																											BgL__ortest_2768z00_948;
																									}
																								else
																									{	/* Object/nil.scm 234 */
																										BgL_testz00_2003 =
																											(BgL_casezd2valuezd2_930
																											==
																											CNST_TABLE_REF(((long)
																													96)));
																					}}}
																					if (BgL_testz00_2003)
																						{	/* Object/nil.scm 234 */
																							return BINT(((long) 0));
																						}
																					else
																						{	/* Object/nil.scm 234 */
																							if (
																								(BgL_casezd2valuezd2_930 ==
																									CNST_TABLE_REF(((long) 42))))
																								{	/* Object/nil.scm 234 */
																									return BFALSE;
																								}
																							else
																								{	/* Object/nil.scm 234 */
																									bool_t BgL_testz00_2016;

																									{	/* Object/nil.scm 234 */
																										bool_t
																											BgL__ortest_2769z00_946;
																										BgL__ortest_2769z00_946 =
																											(BgL_casezd2valuezd2_930
																											==
																											CNST_TABLE_REF(((long)
																													97)));
																										if (BgL__ortest_2769z00_946)
																											{	/* Object/nil.scm 234 */
																												BgL_testz00_2016 =
																													BgL__ortest_2769z00_946;
																											}
																										else
																											{	/* Object/nil.scm 234 */
																												BgL_testz00_2016 =
																													(BgL_casezd2valuezd2_930
																													==
																													CNST_TABLE_REF(((long)
																															98)));
																									}}
																									if (BgL_testz00_2016)
																										{	/* Object/nil.scm 234 */
																											return
																												BGl_real3163z00zzobject_nilz00;
																										}
																									else
																										{	/* Object/nil.scm 234 */
																											if (
																												(BgL_casezd2valuezd2_930
																													==
																													CNST_TABLE_REF(((long)
																															99))))
																												{	/* Object/nil.scm 234 */
																													return
																														BCHAR(((unsigned
																																char) '_'));
																												}
																											else
																												{	/* Object/nil.scm 234 */
																													if (
																														(BgL_casezd2valuezd2_930
																															==
																															CNST_TABLE_REF((
																																	(long) 100))))
																														{	/* Object/nil.scm 234 */
																															return
																																BGl_string3164z00zzobject_nilz00;
																														}
																													else
																														{	/* Object/nil.scm 241 */
																															bool_t
																																BgL_testz00_2029;
																															{	/* Object/nil.scm 241 */
																																obj_t
																																	BgL_arg3120z00_945;
																																BgL_arg3120z00_945
																																	=
																																	BGl_thezd2backendzd2zzbackend_backendz00
																																	();
																																{
																																	BgL_backendz00_bglt
																																		BgL_auxz00_2031;
																																	BgL_auxz00_2031
																																		=
																																		(BgL_backendz00_bglt)
																																		(BgL_arg3120z00_945);
																																	BgL_testz00_2029
																																		=
																																		(((BgL_backendz00_bglt) CREF(BgL_auxz00_2031))->BgL_pragmazd2supportzd2);
																																}
																															}
																															if (BgL_testz00_2029)
																																{	/* Object/nil.scm 242 */
																																	obj_t
																																		BgL_arg3112z00_937;
																																	obj_t
																																		BgL_arg3113z00_938;
																																	{	/* Object/nil.scm 242 */
																																		obj_t
																																			BgL_arg3114z00_939;
																																		obj_t
																																			BgL_arg3115z00_940;
																																		BgL_arg3114z00_939
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				101));
																																		{
																																			BgL_typez00_bglt
																																				BgL_auxz00_2035;
																																			BgL_auxz00_2035
																																				=
																																				(BgL_typez00_bglt)
																																				(BgL_typez00_14);
																																			BgL_arg3115z00_940
																																				=
																																				(((BgL_typez00_bglt) CREF(BgL_auxz00_2035))->BgL_idz00);
																																		}
																																		BgL_arg3112z00_937
																																			=
																																			BGl_makezd2typedzd2identz00zzast_identz00
																																			(BgL_arg3114z00_939,
																																			BgL_arg3115z00_940);
																																	}
																																	{	/* Object/nil.scm 242 */
																																		obj_t
																																			BgL_list3116z00_941;
																																		BgL_list3116z00_941
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg3113z00_938
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BGl_string3166z00zzobject_nilz00,
																																			BgL_list3116z00_941);
																																	}
																																	return
																																		MAKE_PAIR
																																		(BgL_arg3112z00_937,
																																		BgL_arg3113z00_938);
																																}
																															else
																																{	/* Object/nil.scm 243 */
																																	obj_t
																																		BgL_arg3117z00_942;
																																	obj_t
																																		BgL_arg3118z00_943;
																																	BgL_arg3117z00_942
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			93));
																																	{
																																		BgL_typez00_bglt
																																			BgL_auxz00_2043;
																																		BgL_auxz00_2043
																																			=
																																			(BgL_typez00_bglt)
																																			(BgL_typez00_14);
																																		BgL_arg3118z00_943
																																			=
																																			(((BgL_typez00_bglt) CREF(BgL_auxz00_2043))->BgL_idz00);
																																	}
																																	return
																																		BGl_makezd2privatezd2sexpz00zzast_privatez00
																																		(BgL_arg3117z00_942,
																																		BgL_arg3118z00_943,
																																		BNIL);
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
	obj_t BGl_genericzd2initzd2zzobject_nilz00()
	{
		AN_OBJECT;
		{	/* Object/nil.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_nilz00()
	{
		AN_OBJECT;
		{	/* Object/nil.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_nilz00()
	{
		AN_OBJECT;
		{	/* Object/nil.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzobject_structz00(((long) 112894054),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
			return
				BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 302809955),
				BSTRING_TO_STRING(BGl_string3167z00zzobject_nilz00));
		}
	}

#ifdef __cplusplus
}
#endif
