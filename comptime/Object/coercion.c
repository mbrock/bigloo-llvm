/*===========================================================================*/
/*   (Object/coercion.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/coercion.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static bool_t BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_coercionz00();
	static obj_t BGl__genzd2coercionzd2clausez12z12zzobject_coercionz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_classzf3zd2idz21zzobject_toolsz00(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2classzd2coercersz12z12zzobject_coercionz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_superzd2ze3classzd2idze3zzobject_toolsz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_coercionz00();
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_coercionz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_coercionz00();
	static obj_t BGl_czd2makezd2coercionzd2clausezd2zzobject_coercionz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_nopragmazd2makezd2coercionzd2clausezd2zzobject_coercionz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_classzd2ze3objzd2idze3zzobject_toolsz00(obj_t);
	static obj_t BGl__genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t,
		obj_t);
	extern obj_t BGl_objzd2ze3classzd2idze3zzobject_toolsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_coercionz00();
	static obj_t BGl_makezd2onezd2coercionz00zzobject_coercionz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(obj_t);
	extern obj_t BGl_classzd2ze3superzd2idze3zzobject_toolsz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__genzd2classzd2coercersz12z12zzobject_coercionz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_coercionz00();
	static obj_t __cnst[16];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2classzd2coercionsz12zd2envzc0zzobject_coercionz00,
		BgL_bgl__genza7d2classza7d2c2927z00,
		BGl__genzd2classzd2coercionsz12z12zzobject_coercionz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2920z00zzobject_coercionz00,
		BgL_bgl_string2920za700za7za7o2928za7, "obj_t", 5);
	      DEFINE_STRING(BGl_string2921z00zzobject_coercionz00,
		BgL_bgl_string2921za700za7za7o2929za7, "(", 1);
	      DEFINE_STRING(BGl_string2922z00zzobject_coercionz00,
		BgL_bgl_string2922za700za7za7o2930za7, ")", 1);
	      DEFINE_STRING(BGl_string2923z00zzobject_coercionz00,
		BgL_bgl_string2923za700za7za7o2931za7, "object_coercion", 15);
	      DEFINE_STRING(BGl_string2924z00zzobject_coercionz00,
		BgL_bgl_string2924za700za7za7o2932za7,
		"macro effect no-cfa-top side-effect-free args-safe nesting pragma -> foreign cast type lambda bool obj coerce x ",
		112);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2coercionzd2clausez12zd2envzc0zzobject_coercionz00,
		BgL_bgl__genza7d2coercionza72933z00, va_generic_entry,
		BGl__genzd2coercionzd2clausez12z12zzobject_coercionz00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2javazd2classzd2coercionsz12zd2envz12zzobject_coercionz00,
		BgL_bgl__genza7d2javaza7d2cl2934z00,
		BGl__genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2classzd2coercersz12zd2envzc0zzobject_coercionz00,
		BgL_bgl__genza7d2classza7d2c2935z00,
		BGl__genzd2classzd2coercersz12z12zzobject_coercionz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_coercionz00(long
		BgL_checksumz00_1140, char *BgL_fromz00_1141)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_coercionz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_coercionz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_coercionz00();
					BGl_cnstzd2initzd2zzobject_coercionz00();
					BGl_importedzd2moduleszd2initz00zzobject_coercionz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_coercionz00()
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_coercion");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_coercionz00()
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 21 */
			{	/* Object/coercion.scm 21 */
				obj_t BgL_cportz00_1132;

				BgL_cportz00_1132 =
					bgl_open_input_string(BGl_string2924z00zzobject_coercionz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1133;

					BgL_iz00_1133 = ((long) 15);
				BgL_loopz00_1134:
					if ((BgL_iz00_1133 == ((long) -1)))
						{	/* Object/coercion.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/coercion.scm 21 */
							{	/* Object/coercion.scm 21 */
								obj_t BgL_arg2926z00_1136;

								{	/* Object/coercion.scm 21 */

									{	/* Object/coercion.scm 21 */
										obj_t BgL_locationz00_1138;

										BgL_locationz00_1138 = BBOOL(((bool_t) 0));
										{	/* Object/coercion.scm 21 */

											BgL_arg2926z00_1136 =
												BGl_readz00zz__readerz00(BgL_cportz00_1132,
												BgL_locationz00_1138);
										}
									}
								}
								{	/* Object/coercion.scm 21 */
									int BgL_auxz00_1158;

									BgL_auxz00_1158 = (int) (BgL_iz00_1133);
									CNST_TABLE_SET(BgL_auxz00_1158, BgL_arg2926z00_1136);
							}}
							{	/* Object/coercion.scm 21 */
								int BgL_auxz00_1139;

								BgL_auxz00_1139 = (int) ((BgL_iz00_1133 - ((long) 1)));
								{
									long BgL_iz00_1163;

									BgL_iz00_1163 = (long) (BgL_auxz00_1139);
									BgL_iz00_1133 = BgL_iz00_1163;
									goto BgL_loopz00_1134;
								}
							}
						}
				}
			}
		}
	}



/* gen-class-coercions! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t BgL_classz00_1)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 49 */
			{	/* Object/coercion.scm 51 */
				obj_t BgL_arg2531z00_565;

				obj_t BgL_arg2536z00_566;

				{
					BgL_typez00_bglt BgL_auxz00_1165;

					BgL_auxz00_1165 = (BgL_typez00_bglt) (BgL_classz00_1);
					BgL_arg2531z00_565 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_1165))->BgL_idz00);
				}
				{	/* Object/coercion.scm 51 */
					BgL_tclassz00_bglt BgL_obj2229z00_1046;

					BgL_obj2229z00_1046 = (BgL_tclassz00_bglt) (BgL_classz00_1);
					{
						obj_t BgL_auxz00_1169;

						{	/* Object/coercion.scm 51 */
							BgL_objectz00_bglt BgL_auxz00_1170;

							BgL_auxz00_1170 = (BgL_objectz00_bglt) (BgL_obj2229z00_1046);
							BgL_auxz00_1169 = BGL_OBJECT_WIDENING(BgL_auxz00_1170);
						}
						BgL_arg2536z00_566 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1169))->
							BgL_itszd2superzd2);
					}
				}
				{	/* Object/coercion.scm 51 */
					obj_t BgL_arg2557z00_1050;

					{	/* Object/coercion.scm 51 */
						bool_t BgL_testz00_1174;

						{	/* Object/coercion.scm 51 */
							obj_t BgL_arg2559z00_1052;

							BgL_arg2559z00_1052 = BGl_thezd2backendzd2zzbackend_backendz00();
							{
								BgL_backendz00_bglt BgL_auxz00_1176;

								BgL_auxz00_1176 = (BgL_backendz00_bglt) (BgL_arg2559z00_1052);
								BgL_testz00_1174 =
									(((BgL_backendz00_bglt) CREF(BgL_auxz00_1176))->
									BgL_pragmazd2supportzd2);
							}
						}
						if (BgL_testz00_1174)
							{	/* Object/coercion.scm 51 */
								BgL_arg2557z00_1050 =
									BGl_czd2makezd2coercionzd2clausezd2zzobject_coercionz00
									(BgL_arg2531z00_565, BgL_arg2536z00_566, BNIL);
							}
						else
							{	/* Object/coercion.scm 51 */
								BgL_arg2557z00_1050 =
									BGl_nopragmazd2makezd2coercionzd2clausezd2zzobject_coercionz00
									(BgL_arg2531z00_565, BgL_arg2536z00_566, BNIL);
							}
					}
					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
						(BgL_arg2557z00_1050);
				}
			}
			{	/* Object/coercion.scm 52 */
				obj_t BgL_arg2544z00_568;

				{	/* Object/coercion.scm 52 */
					BgL_tclassz00_bglt BgL_obj2229z00_1054;

					BgL_obj2229z00_1054 = (BgL_tclassz00_bglt) (BgL_classz00_1);
					{
						obj_t BgL_auxz00_1183;

						{	/* Object/coercion.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_1184;

							BgL_auxz00_1184 = (BgL_objectz00_bglt) (BgL_obj2229z00_1054);
							BgL_auxz00_1183 = BGL_OBJECT_WIDENING(BgL_auxz00_1184);
						}
						BgL_arg2544z00_568 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1183))->
							BgL_itszd2superzd2);
					}
				}
				{	/* Object/coercion.scm 52 */
					bool_t BgL_testz00_1188;

					{	/* Object/coercion.scm 52 */
						obj_t BgL_arg2812z00_1058;

						BgL_arg2812z00_1058 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_1190;

							BgL_auxz00_1190 = (BgL_backendz00_bglt) (BgL_arg2812z00_1058);
							BgL_testz00_1188 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1190))->
								BgL_pragmazd2supportzd2);
						}
					}
					if (BgL_testz00_1188)
						{	/* Object/coercion.scm 52 */
							return
								BBOOL(BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00
								(BgL_classz00_1, BgL_arg2544z00_568));
						}
					else
						{	/* Object/coercion.scm 52 */
							return BFALSE;
						}
				}
			}
		}
	}



/* _gen-class-coercions! */
	obj_t BGl__genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t
		BgL_envz00_1121, obj_t BgL_classz00_1122)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 49 */
			return
				BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00
				(BgL_classz00_1122);
		}
	}



/* gen-java-class-coercions! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(obj_t
		BgL_classz00_2)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 57 */
			{	/* Object/coercion.scm 59 */
				obj_t BgL_arg2550z00_570;

				obj_t BgL_arg2554z00_571;

				{
					BgL_typez00_bglt BgL_auxz00_1196;

					BgL_auxz00_1196 = (BgL_typez00_bglt) (BgL_classz00_2);
					BgL_arg2550z00_570 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_1196))->BgL_idz00);
				}
				{	/* Object/coercion.scm 59 */
					BgL_jclassz00_bglt BgL_obj2320z00_1061;

					BgL_obj2320z00_1061 = (BgL_jclassz00_bglt) (BgL_classz00_2);
					{
						obj_t BgL_auxz00_1200;

						{	/* Object/coercion.scm 59 */
							BgL_objectz00_bglt BgL_auxz00_1201;

							BgL_auxz00_1201 = (BgL_objectz00_bglt) (BgL_obj2320z00_1061);
							BgL_auxz00_1200 = BGL_OBJECT_WIDENING(BgL_auxz00_1201);
						}
						BgL_arg2554z00_571 =
							(((BgL_jclassz00_bglt) CREF(BgL_auxz00_1200))->
							BgL_itszd2superzd2);
					}
				}
				{	/* Object/coercion.scm 59 */
					obj_t BgL_arg2557z00_1065;

					{	/* Object/coercion.scm 59 */
						bool_t BgL_testz00_1205;

						{	/* Object/coercion.scm 59 */
							obj_t BgL_arg2559z00_1067;

							BgL_arg2559z00_1067 = BGl_thezd2backendzd2zzbackend_backendz00();
							{
								BgL_backendz00_bglt BgL_auxz00_1207;

								BgL_auxz00_1207 = (BgL_backendz00_bglt) (BgL_arg2559z00_1067);
								BgL_testz00_1205 =
									(((BgL_backendz00_bglt) CREF(BgL_auxz00_1207))->
									BgL_pragmazd2supportzd2);
							}
						}
						if (BgL_testz00_1205)
							{	/* Object/coercion.scm 59 */
								BgL_arg2557z00_1065 =
									BGl_czd2makezd2coercionzd2clausezd2zzobject_coercionz00
									(BgL_arg2550z00_570, BgL_arg2554z00_571, BNIL);
							}
						else
							{	/* Object/coercion.scm 59 */
								BgL_arg2557z00_1065 =
									BGl_nopragmazd2makezd2coercionzd2clausezd2zzobject_coercionz00
									(BgL_arg2550z00_570, BgL_arg2554z00_571, BNIL);
							}
					}
					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
						(BgL_arg2557z00_1065);
				}
			}
			{	/* Object/coercion.scm 60 */
				obj_t BgL_arg2556z00_573;

				{	/* Object/coercion.scm 60 */
					BgL_jclassz00_bglt BgL_obj2320z00_1069;

					BgL_obj2320z00_1069 = (BgL_jclassz00_bglt) (BgL_classz00_2);
					{
						obj_t BgL_auxz00_1214;

						{	/* Object/coercion.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_1215;

							BgL_auxz00_1215 = (BgL_objectz00_bglt) (BgL_obj2320z00_1069);
							BgL_auxz00_1214 = BGL_OBJECT_WIDENING(BgL_auxz00_1215);
						}
						BgL_arg2556z00_573 =
							(((BgL_jclassz00_bglt) CREF(BgL_auxz00_1214))->
							BgL_itszd2superzd2);
					}
				}
				{	/* Object/coercion.scm 60 */
					bool_t BgL_testz00_1219;

					{	/* Object/coercion.scm 60 */
						obj_t BgL_arg2812z00_1073;

						BgL_arg2812z00_1073 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_1221;

							BgL_auxz00_1221 = (BgL_backendz00_bglt) (BgL_arg2812z00_1073);
							BgL_testz00_1219 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1221))->
								BgL_pragmazd2supportzd2);
						}
					}
					if (BgL_testz00_1219)
						{	/* Object/coercion.scm 60 */
							return
								BBOOL(BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00
								(BgL_classz00_2, BgL_arg2556z00_573));
						}
					else
						{	/* Object/coercion.scm 60 */
							return BFALSE;
						}
				}
			}
		}
	}



/* _gen-java-class-coercions! */
	obj_t BGl__genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(obj_t
		BgL_envz00_1123, obj_t BgL_classz00_1124)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 57 */
			return
				BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00
				(BgL_classz00_1124);
		}
	}



/* gen-coercion-clause! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00(obj_t BgL_czd2idzd2_3,
		obj_t BgL_superz00_4, obj_t BgL_testingz00_5)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 73 */
			{	/* Object/coercion.scm 75 */
				obj_t BgL_arg2557z00_1075;

				{	/* Object/coercion.scm 75 */
					bool_t BgL_testz00_1227;

					{	/* Object/coercion.scm 75 */
						obj_t BgL_arg2559z00_1077;

						BgL_arg2559z00_1077 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_1229;

							BgL_auxz00_1229 = (BgL_backendz00_bglt) (BgL_arg2559z00_1077);
							BgL_testz00_1227 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1229))->
								BgL_pragmazd2supportzd2);
						}
					}
					if (BgL_testz00_1227)
						{	/* Object/coercion.scm 75 */
							BgL_arg2557z00_1075 =
								BGl_czd2makezd2coercionzd2clausezd2zzobject_coercionz00
								(BgL_czd2idzd2_3, BgL_superz00_4, BgL_testingz00_5);
						}
					else
						{	/* Object/coercion.scm 75 */
							BgL_arg2557z00_1075 =
								BGl_nopragmazd2makezd2coercionzd2clausezd2zzobject_coercionz00
								(BgL_czd2idzd2_3, BgL_superz00_4, BgL_testingz00_5);
						}
				}
				return
					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
					(BgL_arg2557z00_1075);
			}
		}
	}



/* _gen-coercion-clause! */
	obj_t BGl__genzd2coercionzd2clausez12z12zzobject_coercionz00(obj_t
		BgL_envz00_1125, obj_t BgL_czd2idzd2_1126, obj_t BgL_superz00_1127,
		obj_t BgL_testingz00_1128)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 73 */
			return
				BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00
				(BgL_czd2idzd2_1126, BgL_superz00_1127, BgL_testingz00_1128);
		}
	}



/* c-make-coercion-clause */
	obj_t BGl_czd2makezd2coercionzd2clausezd2zzobject_coercionz00(obj_t
		BgL_czd2idzd2_6, obj_t BgL_superz00_7, obj_t BgL_testingz00_8)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 82 */
			{	/* Object/coercion.scm 83 */
				obj_t BgL_classzd2ze3objz31_577;

				BgL_classzd2ze3objz31_577 =
					BGl_classzd2ze3objzd2idze3zzobject_toolsz00(BgL_czd2idzd2_6);
				{	/* Object/coercion.scm 83 */
					obj_t BgL_objzd2ze3classz31_578;

					BgL_objzd2ze3classz31_578 =
						BGl_objzd2ze3classzd2idze3zzobject_toolsz00(BgL_czd2idzd2_6);
					{	/* Object/coercion.scm 84 */
						obj_t BgL_ttestz00_579;

						if (NULLP(BgL_testingz00_8))
							{	/* Object/coercion.scm 86 */
								obj_t BgL_arg2695z00_660;

								BgL_arg2695z00_660 =
									BGl_classzf3zd2idz21zzobject_toolsz00(BgL_czd2idzd2_6);
								{	/* Object/coercion.scm 86 */
									obj_t BgL_list2696z00_661;

									BgL_list2696z00_661 = MAKE_PAIR(BgL_arg2695z00_660, BNIL);
									BgL_ttestz00_579 = BgL_list2696z00_661;
								}
							}
						else
							{	/* Object/coercion.scm 85 */
								BgL_ttestz00_579 = BNIL;
							}
						{	/* Object/coercion.scm 85 */
							obj_t BgL_xz00_580;

							BgL_xz00_580 =
								BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
										0)), BgL_czd2idzd2_6);
							{	/* Object/coercion.scm 88 */

								{	/* Object/coercion.scm 89 */
									obj_t BgL_g2524z00_581;

									{	/* Object/coercion.scm 90 */
										obj_t BgL_arg2648z00_616;

										obj_t BgL_arg2649z00_617;

										obj_t BgL_arg2650z00_618;

										{	/* Object/coercion.scm 90 */
											obj_t BgL_arg2656z00_622;

											obj_t BgL_arg2657z00_623;

											BgL_arg2656z00_622 = CNST_TABLE_REF(((long) 1));
											{	/* Object/coercion.scm 90 */
												obj_t BgL_arg2658z00_624;

												obj_t BgL_arg2659z00_625;

												BgL_arg2658z00_624 = CNST_TABLE_REF(((long) 2));
												BgL_arg2659z00_625 =
													MAKE_PAIR(BgL_objzd2ze3classz31_578, BNIL);
												{	/* Object/coercion.scm 90 */
													obj_t BgL_list2661z00_627;

													{	/* Object/coercion.scm 90 */
														obj_t BgL_arg2663z00_628;

														{	/* Object/coercion.scm 90 */
															obj_t BgL_arg2664z00_629;

															{	/* Object/coercion.scm 90 */
																obj_t BgL_arg2665z00_630;

																BgL_arg2665z00_630 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2664z00_629 =
																	MAKE_PAIR(BgL_arg2659z00_625,
																	BgL_arg2665z00_630);
															}
															BgL_arg2663z00_628 =
																MAKE_PAIR(BgL_ttestz00_579, BgL_arg2664z00_629);
														}
														BgL_list2661z00_627 =
															MAKE_PAIR(BgL_czd2idzd2_6, BgL_arg2663z00_628);
													}
													BgL_arg2657z00_623 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2658z00_624, BgL_list2661z00_627);
											}}
											BgL_arg2648z00_616 =
												MAKE_PAIR(BgL_arg2656z00_622, BgL_arg2657z00_623);
										}
										{	/* Object/coercion.scm 91 */
											obj_t BgL_arg2666z00_631;

											obj_t BgL_arg2667z00_632;

											BgL_arg2666z00_631 = CNST_TABLE_REF(((long) 1));
											{	/* Object/coercion.scm 91 */
												obj_t BgL_arg2668z00_633;

												obj_t BgL_arg2670z00_635;

												BgL_arg2668z00_633 = CNST_TABLE_REF(((long) 2));
												BgL_arg2670z00_635 =
													MAKE_PAIR(BgL_classzd2ze3objz31_577, BNIL);
												{	/* Object/coercion.scm 91 */
													obj_t BgL_list2672z00_637;

													{	/* Object/coercion.scm 91 */
														obj_t BgL_arg2673z00_638;

														{	/* Object/coercion.scm 91 */
															obj_t BgL_arg2674z00_639;

															{	/* Object/coercion.scm 91 */
																obj_t BgL_arg2675z00_640;

																BgL_arg2675z00_640 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2674z00_639 =
																	MAKE_PAIR(BgL_arg2670z00_635,
																	BgL_arg2675z00_640);
															}
															BgL_arg2673z00_638 =
																MAKE_PAIR(BNIL, BgL_arg2674z00_639);
														}
														BgL_list2672z00_637 =
															MAKE_PAIR(BgL_arg2668z00_633, BgL_arg2673z00_638);
													}
													BgL_arg2667z00_632 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_czd2idzd2_6, BgL_list2672z00_637);
											}}
											BgL_arg2649z00_617 =
												MAKE_PAIR(BgL_arg2666z00_631, BgL_arg2667z00_632);
										}
										{	/* Object/coercion.scm 92 */
											obj_t BgL_arg2676z00_641;

											obj_t BgL_arg2677z00_642;

											BgL_arg2676z00_641 = CNST_TABLE_REF(((long) 1));
											{	/* Object/coercion.scm 92 */
												obj_t BgL_arg2678z00_643;

												obj_t BgL_arg2680z00_645;

												BgL_arg2678z00_643 = CNST_TABLE_REF(((long) 3));
												{	/* Object/coercion.scm 92 */
													obj_t BgL_arg2686z00_651;

													{	/* Object/coercion.scm 92 */
														obj_t BgL_arg2688z00_653;

														obj_t BgL_arg2689z00_654;

														BgL_arg2688z00_653 = CNST_TABLE_REF(((long) 4));
														{	/* Object/coercion.scm 92 */
															obj_t BgL_arg2690z00_655;

															BgL_arg2690z00_655 =
																MAKE_PAIR(BgL_xz00_580, BNIL);
															{	/* Object/coercion.scm 92 */
																obj_t BgL_list2692z00_657;

																{	/* Object/coercion.scm 92 */
																	obj_t BgL_arg2693z00_658;

																	BgL_arg2693z00_658 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2692z00_657 =
																		MAKE_PAIR(BTRUE, BgL_arg2693z00_658);
																}
																BgL_arg2689z00_654 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2690z00_655, BgL_list2692z00_657);
														}}
														BgL_arg2686z00_651 =
															MAKE_PAIR(BgL_arg2688z00_653, BgL_arg2689z00_654);
													}
													BgL_arg2680z00_645 =
														MAKE_PAIR(BgL_arg2686z00_651, BNIL);
												}
												{	/* Object/coercion.scm 92 */
													obj_t BgL_list2682z00_647;

													{	/* Object/coercion.scm 92 */
														obj_t BgL_arg2683z00_648;

														{	/* Object/coercion.scm 92 */
															obj_t BgL_arg2684z00_649;

															{	/* Object/coercion.scm 92 */
																obj_t BgL_arg2685z00_650;

																BgL_arg2685z00_650 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2684z00_649 =
																	MAKE_PAIR(BgL_arg2680z00_645,
																	BgL_arg2685z00_650);
															}
															BgL_arg2683z00_648 =
																MAKE_PAIR(BNIL, BgL_arg2684z00_649);
														}
														BgL_list2682z00_647 =
															MAKE_PAIR(BgL_arg2678z00_643, BgL_arg2683z00_648);
													}
													BgL_arg2677z00_642 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_czd2idzd2_6, BgL_list2682z00_647);
											}}
											BgL_arg2650z00_618 =
												MAKE_PAIR(BgL_arg2676z00_641, BgL_arg2677z00_642);
										}
										{	/* Object/coercion.scm 90 */
											obj_t BgL_list2651z00_619;

											{	/* Object/coercion.scm 90 */
												obj_t BgL_arg2652z00_620;

												{	/* Object/coercion.scm 90 */
													obj_t BgL_arg2655z00_621;

													BgL_arg2655z00_621 =
														MAKE_PAIR(BgL_arg2650z00_618, BNIL);
													BgL_arg2652z00_620 =
														MAKE_PAIR(BgL_arg2649z00_617, BgL_arg2655z00_621);
												}
												BgL_list2651z00_619 =
													MAKE_PAIR(BgL_arg2648z00_616, BgL_arg2652z00_620);
											}
											BgL_g2524z00_581 = BgL_list2651z00_619;
									}}
									{
										obj_t BgL_superz00_583;

										obj_t BgL_coercerz00_584;

										BgL_superz00_583 = BgL_superz00_7;
										BgL_coercerz00_584 = BgL_g2524z00_581;
									BgL_zc3anonymousza32560ze3z83_585:
										if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_583,
												BGl_tclassz00zzobject_classz00))
											{	/* Object/coercion.scm 95 */
												obj_t BgL_superzd2idzd2_587;

												{
													BgL_typez00_bglt BgL_auxz00_1282;

													BgL_auxz00_1282 =
														(BgL_typez00_bglt) (
														(BgL_tclassz00_bglt) (BgL_superz00_583));
													BgL_superzd2idzd2_587 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_1282))->
														BgL_idz00);
												}
												{	/* Object/coercion.scm 95 */
													obj_t BgL_classzd2ze3superz31_588;

													BgL_classzd2ze3superz31_588 =
														BGl_classzd2ze3superzd2idze3zzobject_toolsz00
														(BgL_czd2idzd2_6, BgL_superzd2idzd2_587);
													{	/* Object/coercion.scm 96 */
														obj_t BgL_superzd2ze3classz31_589;

														BgL_superzd2ze3classz31_589 =
															BGl_superzd2ze3classzd2idze3zzobject_toolsz00
															(BgL_superzd2idzd2_587, BgL_czd2idzd2_6);
														{	/* Object/coercion.scm 97 */

															{	/* Object/coercion.scm 98 */
																obj_t BgL_arg2562z00_590;

																obj_t BgL_arg2563z00_591;

																{	/* Object/coercion.scm 98 */
																	BgL_tclassz00_bglt BgL_obj2229z00_1086;

																	BgL_obj2229z00_1086 =
																		(BgL_tclassz00_bglt) (BgL_superz00_583);
																	{
																		obj_t BgL_auxz00_1289;

																		{	/* Object/coercion.scm 98 */
																			BgL_objectz00_bglt BgL_auxz00_1290;

																			BgL_auxz00_1290 =
																				(BgL_objectz00_bglt)
																				(BgL_obj2229z00_1086);
																			BgL_auxz00_1289 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1290);
																		}
																		BgL_arg2562z00_590 =
																			(((BgL_tclassz00_bglt)
																				CREF(BgL_auxz00_1289))->
																			BgL_itszd2superzd2);
																	}
																}
																{	/* Object/coercion.scm 99 */
																	obj_t BgL_arg2564z00_592;

																	obj_t BgL_arg2565z00_593;

																	{	/* Object/coercion.scm 99 */
																		obj_t BgL_arg2566z00_594;

																		obj_t BgL_arg2571z00_595;

																		BgL_arg2566z00_594 =
																			CNST_TABLE_REF(((long) 1));
																		{	/* Object/coercion.scm 99 */
																			obj_t BgL_arg2572z00_596;

																			BgL_arg2572z00_596 =
																				MAKE_PAIR(BgL_superzd2ze3classz31_589,
																				BNIL);
																			{	/* Object/coercion.scm 99 */
																				obj_t BgL_list2577z00_598;

																				{	/* Object/coercion.scm 99 */
																					obj_t BgL_arg2586z00_599;

																					{	/* Object/coercion.scm 99 */
																						obj_t BgL_arg2587z00_600;

																						{	/* Object/coercion.scm 99 */
																							obj_t BgL_arg2589z00_601;

																							BgL_arg2589z00_601 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2587z00_600 =
																								MAKE_PAIR(BgL_arg2572z00_596,
																								BgL_arg2589z00_601);
																						}
																						BgL_arg2586z00_599 =
																							MAKE_PAIR(BgL_ttestz00_579,
																							BgL_arg2587z00_600);
																					}
																					BgL_list2577z00_598 =
																						MAKE_PAIR(BgL_czd2idzd2_6,
																						BgL_arg2586z00_599);
																				}
																				BgL_arg2571z00_595 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_superzd2idzd2_587,
																					BgL_list2577z00_598);
																		}}
																		BgL_arg2564z00_592 =
																			MAKE_PAIR(BgL_arg2566z00_594,
																			BgL_arg2571z00_595);
																	}
																	{	/* Object/coercion.scm 100 */
																		obj_t BgL_arg2590z00_602;

																		{	/* Object/coercion.scm 100 */
																			obj_t BgL_arg2594z00_604;

																			obj_t BgL_arg2595z00_605;

																			BgL_arg2594z00_604 =
																				CNST_TABLE_REF(((long) 1));
																			{	/* Object/coercion.scm 100 */
																				obj_t BgL_arg2608z00_607;

																				BgL_arg2608z00_607 =
																					MAKE_PAIR(BgL_classzd2ze3superz31_588,
																					BNIL);
																				{	/* Object/coercion.scm 100 */
																					obj_t BgL_list2616z00_609;

																					{	/* Object/coercion.scm 100 */
																						obj_t BgL_arg2621z00_610;

																						{	/* Object/coercion.scm 100 */
																							obj_t BgL_arg2628z00_611;

																							{	/* Object/coercion.scm 100 */
																								obj_t BgL_arg2629z00_612;

																								BgL_arg2629z00_612 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2628z00_611 =
																									MAKE_PAIR(BgL_arg2608z00_607,
																									BgL_arg2629z00_612);
																							}
																							BgL_arg2621z00_610 =
																								MAKE_PAIR(BNIL,
																								BgL_arg2628z00_611);
																						}
																						BgL_list2616z00_609 =
																							MAKE_PAIR(BgL_superzd2idzd2_587,
																							BgL_arg2621z00_610);
																					}
																					BgL_arg2595z00_605 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_czd2idzd2_6,
																						BgL_list2616z00_609);
																			}}
																			BgL_arg2590z00_602 =
																				MAKE_PAIR(BgL_arg2594z00_604,
																				BgL_arg2595z00_605);
																		}
																		{	/* Object/coercion.scm 99 */
																			obj_t BgL_list2591z00_603;

																			BgL_list2591z00_603 =
																				MAKE_PAIR(BgL_coercerz00_584, BNIL);
																			BgL_arg2565z00_593 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2590z00_602,
																				BgL_list2591z00_603);
																	}}
																	BgL_arg2563z00_591 =
																		MAKE_PAIR(BgL_arg2564z00_592,
																		BgL_arg2565z00_593);
																}
																{
																	obj_t BgL_coercerz00_1314;

																	obj_t BgL_superz00_1313;

																	BgL_superz00_1313 = BgL_arg2562z00_590;
																	BgL_coercerz00_1314 = BgL_arg2563z00_591;
																	BgL_coercerz00_584 = BgL_coercerz00_1314;
																	BgL_superz00_583 = BgL_superz00_1313;
																	goto BgL_zc3anonymousza32560ze3z83_585;
																}
															}
														}
													}
												}
											}
										else
											{	/* Object/coercion.scm 94 */
												obj_t BgL_arg2630z00_613;

												obj_t BgL_arg2642z00_614;

												BgL_arg2630z00_613 = CNST_TABLE_REF(((long) 5));
												BgL_arg2642z00_614 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_coercerz00_584, BNIL);
												return MAKE_PAIR(BgL_arg2630z00_613,
													BgL_arg2642z00_614);
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



/* nopragma-make-coercion-clause */
	obj_t BGl_nopragmazd2makezd2coercionzd2clausezd2zzobject_coercionz00(obj_t
		BgL_czd2idzd2_9, obj_t BgL_superz00_10, obj_t BgL_testingz00_11)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 106 */
			{	/* Object/coercion.scm 107 */
				obj_t BgL_classzd2ze3objz31_662;

				{	/* Object/coercion.scm 107 */
					obj_t BgL_arg2803z00_774;

					obj_t BgL_arg2804z00_775;

					BgL_arg2803z00_774 = CNST_TABLE_REF(((long) 4));
					{	/* Object/coercion.scm 107 */
						obj_t BgL_arg2805z00_776;

						obj_t BgL_arg2806z00_777;

						BgL_arg2805z00_776 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
						{	/* Object/coercion.scm 108 */
							obj_t BgL_list2810z00_781;

							BgL_list2810z00_781 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
							BgL_arg2806z00_777 =
								BGl_makezd2privatezd2sexpz00zzast_privatez00(CNST_TABLE_REF((
										(long) 6)), CNST_TABLE_REF(((long) 2)),
								BgL_list2810z00_781);
						}
						{	/* Object/coercion.scm 107 */
							obj_t BgL_list2808z00_779;

							{	/* Object/coercion.scm 107 */
								obj_t BgL_arg2809z00_780;

								BgL_arg2809z00_780 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2808z00_779 =
									MAKE_PAIR(BgL_arg2806z00_777, BgL_arg2809z00_780);
							}
							BgL_arg2804z00_775 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2805z00_776,
								BgL_list2808z00_779);
					}}
					BgL_classzd2ze3objz31_662 =
						MAKE_PAIR(BgL_arg2803z00_774, BgL_arg2804z00_775);
				}
				{	/* Object/coercion.scm 107 */
					obj_t BgL_objzd2ze3classz31_663;

					{	/* Object/coercion.scm 109 */
						obj_t BgL_arg2795z00_766;

						obj_t BgL_arg2796z00_767;

						BgL_arg2795z00_766 = CNST_TABLE_REF(((long) 4));
						{	/* Object/coercion.scm 109 */
							obj_t BgL_arg2797z00_768;

							obj_t BgL_arg2798z00_769;

							BgL_arg2797z00_768 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
							{	/* Object/coercion.scm 110 */
								obj_t BgL_list2802z00_773;

								BgL_list2802z00_773 =
									MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
								BgL_arg2798z00_769 =
									BGl_makezd2privatezd2sexpz00zzast_privatez00(CNST_TABLE_REF((
											(long) 6)), BgL_czd2idzd2_9, BgL_list2802z00_773);
							}
							{	/* Object/coercion.scm 109 */
								obj_t BgL_list2800z00_771;

								{	/* Object/coercion.scm 109 */
									obj_t BgL_arg2801z00_772;

									BgL_arg2801z00_772 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2800z00_771 =
										MAKE_PAIR(BgL_arg2798z00_769, BgL_arg2801z00_772);
								}
								BgL_arg2796z00_767 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2797z00_768, BgL_list2800z00_771);
						}}
						BgL_objzd2ze3classz31_663 =
							MAKE_PAIR(BgL_arg2795z00_766, BgL_arg2796z00_767);
					}
					{	/* Object/coercion.scm 109 */
						obj_t BgL_ttestz00_664;

						if (NULLP(BgL_testingz00_11))
							{	/* Object/coercion.scm 112 */
								obj_t BgL_arg2793z00_764;

								BgL_arg2793z00_764 =
									BGl_classzf3zd2idz21zzobject_toolsz00(BgL_czd2idzd2_9);
								{	/* Object/coercion.scm 112 */
									obj_t BgL_list2794z00_765;

									BgL_list2794z00_765 = MAKE_PAIR(BgL_arg2793z00_764, BNIL);
									BgL_ttestz00_664 = BgL_list2794z00_765;
								}
							}
						else
							{	/* Object/coercion.scm 111 */
								BgL_ttestz00_664 = BNIL;
							}
						{	/* Object/coercion.scm 111 */
							obj_t BgL_xz00_665;

							BgL_xz00_665 =
								BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
										0)), BgL_czd2idzd2_9);
							{	/* Object/coercion.scm 114 */

								{	/* Object/coercion.scm 115 */
									obj_t BgL_g2525z00_666;

									{	/* Object/coercion.scm 116 */
										obj_t BgL_arg2745z00_720;

										obj_t BgL_arg2746z00_721;

										obj_t BgL_arg2747z00_722;

										{	/* Object/coercion.scm 116 */
											obj_t BgL_arg2752z00_726;

											obj_t BgL_arg2753z00_727;

											BgL_arg2752z00_726 = CNST_TABLE_REF(((long) 1));
											{	/* Object/coercion.scm 116 */
												obj_t BgL_arg2754z00_728;

												obj_t BgL_arg2755z00_729;

												BgL_arg2754z00_728 = CNST_TABLE_REF(((long) 2));
												BgL_arg2755z00_729 =
													MAKE_PAIR(BgL_objzd2ze3classz31_663, BNIL);
												{	/* Object/coercion.scm 116 */
													obj_t BgL_list2757z00_731;

													{	/* Object/coercion.scm 116 */
														obj_t BgL_arg2758z00_732;

														{	/* Object/coercion.scm 116 */
															obj_t BgL_arg2759z00_733;

															{	/* Object/coercion.scm 116 */
																obj_t BgL_arg2760z00_734;

																BgL_arg2760z00_734 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2759z00_733 =
																	MAKE_PAIR(BgL_arg2755z00_729,
																	BgL_arg2760z00_734);
															}
															BgL_arg2758z00_732 =
																MAKE_PAIR(BgL_ttestz00_664, BgL_arg2759z00_733);
														}
														BgL_list2757z00_731 =
															MAKE_PAIR(BgL_czd2idzd2_9, BgL_arg2758z00_732);
													}
													BgL_arg2753z00_727 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2754z00_728, BgL_list2757z00_731);
											}}
											BgL_arg2745z00_720 =
												MAKE_PAIR(BgL_arg2752z00_726, BgL_arg2753z00_727);
										}
										{	/* Object/coercion.scm 117 */
											obj_t BgL_arg2761z00_735;

											obj_t BgL_arg2762z00_736;

											BgL_arg2761z00_735 = CNST_TABLE_REF(((long) 1));
											{	/* Object/coercion.scm 117 */
												obj_t BgL_arg2763z00_737;

												obj_t BgL_arg2765z00_739;

												BgL_arg2763z00_737 = CNST_TABLE_REF(((long) 2));
												BgL_arg2765z00_739 =
													MAKE_PAIR(BgL_classzd2ze3objz31_662, BNIL);
												{	/* Object/coercion.scm 117 */
													obj_t BgL_list2767z00_741;

													{	/* Object/coercion.scm 117 */
														obj_t BgL_arg2768z00_742;

														{	/* Object/coercion.scm 117 */
															obj_t BgL_arg2769z00_743;

															{	/* Object/coercion.scm 117 */
																obj_t BgL_arg2770z00_744;

																BgL_arg2770z00_744 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2769z00_743 =
																	MAKE_PAIR(BgL_arg2765z00_739,
																	BgL_arg2770z00_744);
															}
															BgL_arg2768z00_742 =
																MAKE_PAIR(BNIL, BgL_arg2769z00_743);
														}
														BgL_list2767z00_741 =
															MAKE_PAIR(BgL_arg2763z00_737, BgL_arg2768z00_742);
													}
													BgL_arg2762z00_736 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_czd2idzd2_9, BgL_list2767z00_741);
											}}
											BgL_arg2746z00_721 =
												MAKE_PAIR(BgL_arg2761z00_735, BgL_arg2762z00_736);
										}
										{	/* Object/coercion.scm 118 */
											obj_t BgL_arg2771z00_745;

											obj_t BgL_arg2773z00_746;

											BgL_arg2771z00_745 = CNST_TABLE_REF(((long) 1));
											{	/* Object/coercion.scm 118 */
												obj_t BgL_arg2774z00_747;

												obj_t BgL_arg2776z00_749;

												BgL_arg2774z00_747 = CNST_TABLE_REF(((long) 3));
												{	/* Object/coercion.scm 118 */
													obj_t BgL_arg2783z00_755;

													{	/* Object/coercion.scm 118 */
														obj_t BgL_arg2785z00_757;

														obj_t BgL_arg2786z00_758;

														BgL_arg2785z00_757 = CNST_TABLE_REF(((long) 4));
														{	/* Object/coercion.scm 118 */
															obj_t BgL_arg2787z00_759;

															BgL_arg2787z00_759 =
																MAKE_PAIR(BgL_xz00_665, BNIL);
															{	/* Object/coercion.scm 118 */
																obj_t BgL_list2790z00_761;

																{	/* Object/coercion.scm 118 */
																	obj_t BgL_arg2791z00_762;

																	BgL_arg2791z00_762 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2790z00_761 =
																		MAKE_PAIR(BTRUE, BgL_arg2791z00_762);
																}
																BgL_arg2786z00_758 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2787z00_759, BgL_list2790z00_761);
														}}
														BgL_arg2783z00_755 =
															MAKE_PAIR(BgL_arg2785z00_757, BgL_arg2786z00_758);
													}
													BgL_arg2776z00_749 =
														MAKE_PAIR(BgL_arg2783z00_755, BNIL);
												}
												{	/* Object/coercion.scm 118 */
													obj_t BgL_list2778z00_751;

													{	/* Object/coercion.scm 118 */
														obj_t BgL_arg2779z00_752;

														{	/* Object/coercion.scm 118 */
															obj_t BgL_arg2780z00_753;

															{	/* Object/coercion.scm 118 */
																obj_t BgL_arg2782z00_754;

																BgL_arg2782z00_754 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2780z00_753 =
																	MAKE_PAIR(BgL_arg2776z00_749,
																	BgL_arg2782z00_754);
															}
															BgL_arg2779z00_752 =
																MAKE_PAIR(BNIL, BgL_arg2780z00_753);
														}
														BgL_list2778z00_751 =
															MAKE_PAIR(BgL_arg2774z00_747, BgL_arg2779z00_752);
													}
													BgL_arg2773z00_746 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_czd2idzd2_9, BgL_list2778z00_751);
											}}
											BgL_arg2747z00_722 =
												MAKE_PAIR(BgL_arg2771z00_745, BgL_arg2773z00_746);
										}
										{	/* Object/coercion.scm 116 */
											obj_t BgL_list2748z00_723;

											{	/* Object/coercion.scm 116 */
												obj_t BgL_arg2749z00_724;

												{	/* Object/coercion.scm 116 */
													obj_t BgL_arg2750z00_725;

													BgL_arg2750z00_725 =
														MAKE_PAIR(BgL_arg2747z00_722, BNIL);
													BgL_arg2749z00_724 =
														MAKE_PAIR(BgL_arg2746z00_721, BgL_arg2750z00_725);
												}
												BgL_list2748z00_723 =
													MAKE_PAIR(BgL_arg2745z00_720, BgL_arg2749z00_724);
											}
											BgL_g2525z00_666 = BgL_list2748z00_723;
									}}
									{
										obj_t BgL_superz00_668;

										obj_t BgL_coercerz00_669;

										BgL_superz00_668 = BgL_superz00_10;
										BgL_coercerz00_669 = BgL_g2525z00_666;
									BgL_zc3anonymousza32697ze3z83_670:
										{	/* Object/coercion.scm 119 */
											bool_t BgL_testz00_1383;

											if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_668,
													BGl_jclassz00zzobject_classz00))
												{	/* Object/coercion.scm 119 */
													BgL_testz00_1383 = ((bool_t) 1);
												}
											else
												{	/* Object/coercion.scm 119 */
													BgL_testz00_1383 =
														BGl_iszd2azf3z21zz__objectz00(BgL_superz00_668,
														BGl_tclassz00zzobject_classz00);
												}
											if (BgL_testz00_1383)
												{	/* Object/coercion.scm 121 */
													obj_t BgL_superzd2idzd2_672;

													if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_668,
															BGl_tclassz00zzobject_classz00))
														{
															BgL_typez00_bglt BgL_auxz00_1389;

															BgL_auxz00_1389 =
																(BgL_typez00_bglt) (
																(BgL_tclassz00_bglt) (BgL_superz00_668));
															BgL_superzd2idzd2_672 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_1389))->
																BgL_idz00);
														}
													else
														{
															BgL_typez00_bglt BgL_auxz00_1393;

															BgL_auxz00_1393 =
																(BgL_typez00_bglt) (BgL_superz00_668);
															BgL_superzd2idzd2_672 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_1393))->
																BgL_idz00);
														}
													{	/* Object/coercion.scm 121 */
														obj_t BgL_classzd2ze3superz31_673;

														{	/* Object/coercion.scm 124 */
															obj_t BgL_arg2733z00_707;

															obj_t BgL_arg2734z00_708;

															BgL_arg2733z00_707 = CNST_TABLE_REF(((long) 4));
															{	/* Object/coercion.scm 124 */
																obj_t BgL_arg2735z00_709;

																obj_t BgL_arg2736z00_710;

																BgL_arg2735z00_709 =
																	MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
																{	/* Object/coercion.scm 125 */
																	obj_t BgL_list2740z00_714;

																	BgL_list2740z00_714 =
																		MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
																	BgL_arg2736z00_710 =
																		BGl_makezd2privatezd2sexpz00zzast_privatez00
																		(CNST_TABLE_REF(((long) 6)),
																		BgL_superzd2idzd2_672, BgL_list2740z00_714);
																}
																{	/* Object/coercion.scm 124 */
																	obj_t BgL_list2738z00_712;

																	{	/* Object/coercion.scm 124 */
																		obj_t BgL_arg2739z00_713;

																		BgL_arg2739z00_713 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2738z00_712 =
																			MAKE_PAIR(BgL_arg2736z00_710,
																			BgL_arg2739z00_713);
																	}
																	BgL_arg2734z00_708 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2735z00_709, BgL_list2738z00_712);
															}}
															BgL_classzd2ze3superz31_673 =
																MAKE_PAIR(BgL_arg2733z00_707,
																BgL_arg2734z00_708);
														}
														{	/* Object/coercion.scm 124 */
															obj_t BgL_superzd2ze3classz31_674;

															{	/* Object/coercion.scm 126 */
																obj_t BgL_arg2725z00_699;

																obj_t BgL_arg2726z00_700;

																BgL_arg2725z00_699 = CNST_TABLE_REF(((long) 4));
																{	/* Object/coercion.scm 126 */
																	obj_t BgL_arg2727z00_701;

																	obj_t BgL_arg2728z00_702;

																	BgL_arg2727z00_701 =
																		MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
																	{	/* Object/coercion.scm 127 */
																		obj_t BgL_list2732z00_706;

																		BgL_list2732z00_706 =
																			MAKE_PAIR(CNST_TABLE_REF(((long) 0)),
																			BNIL);
																		BgL_arg2728z00_702 =
																			BGl_makezd2privatezd2sexpz00zzast_privatez00
																			(CNST_TABLE_REF(((long) 6)),
																			BgL_czd2idzd2_9, BgL_list2732z00_706);
																	}
																	{	/* Object/coercion.scm 126 */
																		obj_t BgL_list2730z00_704;

																		{	/* Object/coercion.scm 126 */
																			obj_t BgL_arg2731z00_705;

																			BgL_arg2731z00_705 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2730z00_704 =
																				MAKE_PAIR(BgL_arg2728z00_702,
																				BgL_arg2731z00_705);
																		}
																		BgL_arg2726z00_700 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2727z00_701, BgL_list2730z00_704);
																}}
																BgL_superzd2ze3classz31_674 =
																	MAKE_PAIR(BgL_arg2725z00_699,
																	BgL_arg2726z00_700);
															}
															{	/* Object/coercion.scm 126 */

																{	/* Object/coercion.scm 128 */
																	obj_t BgL_arg2699z00_675;

																	obj_t BgL_arg2700z00_676;

																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_superz00_668,
																			BGl_tclassz00zzobject_classz00))
																		{	/* Object/coercion.scm 129 */
																			BgL_tclassz00_bglt BgL_obj2229z00_1098;

																			BgL_obj2229z00_1098 =
																				(BgL_tclassz00_bglt) (BgL_superz00_668);
																			{
																				obj_t BgL_auxz00_1421;

																				{	/* Object/coercion.scm 129 */
																					BgL_objectz00_bglt BgL_auxz00_1422;

																					BgL_auxz00_1422 =
																						(BgL_objectz00_bglt)
																						(BgL_obj2229z00_1098);
																					BgL_auxz00_1421 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_1422);
																				}
																				BgL_arg2699z00_675 =
																					(((BgL_tclassz00_bglt)
																						CREF(BgL_auxz00_1421))->
																					BgL_itszd2superzd2);
																			}
																		}
																	else
																		{	/* Object/coercion.scm 130 */
																			BgL_jclassz00_bglt BgL_obj2320z00_1099;

																			BgL_obj2320z00_1099 =
																				(BgL_jclassz00_bglt) (BgL_superz00_668);
																			{
																				obj_t BgL_auxz00_1427;

																				{	/* Object/coercion.scm 130 */
																					BgL_objectz00_bglt BgL_auxz00_1428;

																					BgL_auxz00_1428 =
																						(BgL_objectz00_bglt)
																						(BgL_obj2320z00_1099);
																					BgL_auxz00_1427 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_1428);
																				}
																				BgL_arg2699z00_675 =
																					(((BgL_jclassz00_bglt)
																						CREF(BgL_auxz00_1427))->
																					BgL_itszd2superzd2);
																			}
																		}
																	{	/* Object/coercion.scm 131 */
																		obj_t BgL_arg2702z00_678;

																		obj_t BgL_arg2703z00_679;

																		{	/* Object/coercion.scm 131 */
																			obj_t BgL_arg2704z00_680;

																			obj_t BgL_arg2705z00_681;

																			BgL_arg2704z00_680 =
																				CNST_TABLE_REF(((long) 1));
																			{	/* Object/coercion.scm 131 */
																				obj_t BgL_arg2706z00_682;

																				BgL_arg2706z00_682 =
																					MAKE_PAIR(BgL_superzd2ze3classz31_674,
																					BNIL);
																				{	/* Object/coercion.scm 131 */
																					obj_t BgL_list2708z00_684;

																					{	/* Object/coercion.scm 131 */
																						obj_t BgL_arg2709z00_685;

																						{	/* Object/coercion.scm 131 */
																							obj_t BgL_arg2710z00_686;

																							{	/* Object/coercion.scm 131 */
																								obj_t BgL_arg2711z00_687;

																								BgL_arg2711z00_687 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2710z00_686 =
																									MAKE_PAIR(BgL_arg2706z00_682,
																									BgL_arg2711z00_687);
																							}
																							BgL_arg2709z00_685 =
																								MAKE_PAIR(BgL_ttestz00_664,
																								BgL_arg2710z00_686);
																						}
																						BgL_list2708z00_684 =
																							MAKE_PAIR(BgL_czd2idzd2_9,
																							BgL_arg2709z00_685);
																					}
																					BgL_arg2705z00_681 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_superzd2idzd2_672,
																						BgL_list2708z00_684);
																			}}
																			BgL_arg2702z00_678 =
																				MAKE_PAIR(BgL_arg2704z00_680,
																				BgL_arg2705z00_681);
																		}
																		{	/* Object/coercion.scm 132 */
																			obj_t BgL_arg2712z00_688;

																			{	/* Object/coercion.scm 132 */
																				obj_t BgL_arg2714z00_690;

																				obj_t BgL_arg2716z00_691;

																				BgL_arg2714z00_690 =
																					CNST_TABLE_REF(((long) 1));
																				{	/* Object/coercion.scm 132 */
																					obj_t BgL_arg2718z00_693;

																					BgL_arg2718z00_693 =
																						MAKE_PAIR
																						(BgL_classzd2ze3superz31_673, BNIL);
																					{	/* Object/coercion.scm 132 */
																						obj_t BgL_list2720z00_695;

																						{	/* Object/coercion.scm 132 */
																							obj_t BgL_arg2721z00_696;

																							{	/* Object/coercion.scm 132 */
																								obj_t BgL_arg2722z00_697;

																								{	/* Object/coercion.scm 132 */
																									obj_t BgL_arg2724z00_698;

																									BgL_arg2724z00_698 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2722z00_697 =
																										MAKE_PAIR
																										(BgL_arg2718z00_693,
																										BgL_arg2724z00_698);
																								}
																								BgL_arg2721z00_696 =
																									MAKE_PAIR(BNIL,
																									BgL_arg2722z00_697);
																							}
																							BgL_list2720z00_695 =
																								MAKE_PAIR(BgL_superzd2idzd2_672,
																								BgL_arg2721z00_696);
																						}
																						BgL_arg2716z00_691 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_czd2idzd2_9,
																							BgL_list2720z00_695);
																				}}
																				BgL_arg2712z00_688 =
																					MAKE_PAIR(BgL_arg2714z00_690,
																					BgL_arg2716z00_691);
																			}
																			{	/* Object/coercion.scm 131 */
																				obj_t BgL_list2713z00_689;

																				BgL_list2713z00_689 =
																					MAKE_PAIR(BgL_coercerz00_669, BNIL);
																				BgL_arg2703z00_679 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2712z00_688,
																					BgL_list2713z00_689);
																		}}
																		BgL_arg2700z00_676 =
																			MAKE_PAIR(BgL_arg2702z00_678,
																			BgL_arg2703z00_679);
																	}
																	{
																		obj_t BgL_coercerz00_1452;

																		obj_t BgL_superz00_1451;

																		BgL_superz00_1451 = BgL_arg2699z00_675;
																		BgL_coercerz00_1452 = BgL_arg2700z00_676;
																		BgL_coercerz00_669 = BgL_coercerz00_1452;
																		BgL_superz00_668 = BgL_superz00_1451;
																		goto BgL_zc3anonymousza32697ze3z83_670;
																	}
																}
															}
														}
													}
												}
											else
												{	/* Object/coercion.scm 120 */
													obj_t BgL_arg2742z00_716;

													obj_t BgL_arg2743z00_717;

													BgL_arg2742z00_716 = CNST_TABLE_REF(((long) 5));
													BgL_arg2743z00_717 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_coercerz00_669, BNIL);
													return MAKE_PAIR(BgL_arg2742z00_716,
														BgL_arg2743z00_717);
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



/* gen-class-coercers! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2classzd2coercersz12z12zzobject_coercionz00(obj_t BgL_classz00_12,
		obj_t BgL_superz00_13)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 149 */
			{	/* Object/coercion.scm 150 */
				bool_t BgL_testz00_1456;

				{	/* Object/coercion.scm 150 */
					obj_t BgL_arg2812z00_1101;

					BgL_arg2812z00_1101 = BGl_thezd2backendzd2zzbackend_backendz00();
					{
						BgL_backendz00_bglt BgL_auxz00_1458;

						BgL_auxz00_1458 = (BgL_backendz00_bglt) (BgL_arg2812z00_1101);
						BgL_testz00_1456 =
							(((BgL_backendz00_bglt) CREF(BgL_auxz00_1458))->
							BgL_pragmazd2supportzd2);
					}
				}
				if (BgL_testz00_1456)
					{	/* Object/coercion.scm 150 */
						return
							BBOOL(BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00
							(BgL_classz00_12, BgL_superz00_13));
					}
				else
					{	/* Object/coercion.scm 150 */
						return BFALSE;
					}
			}
		}
	}



/* _gen-class-coercers! */
	obj_t BGl__genzd2classzd2coercersz12z12zzobject_coercionz00(obj_t
		BgL_envz00_1129, obj_t BgL_classz00_1130, obj_t BgL_superz00_1131)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 149 */
			return
				BGl_genzd2classzd2coercersz12z12zzobject_coercionz00(BgL_classz00_1130,
				BgL_superz00_1131);
		}
	}



/* c-gen-class-coercers! */
	bool_t BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00(obj_t
		BgL_classz00_14, obj_t BgL_superz00_15)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 156 */
			{	/* Object/coercion.scm 166 */
				obj_t BgL_tidz00_785;

				obj_t BgL_tnamez00_786;

				{
					BgL_typez00_bglt BgL_auxz00_1464;

					BgL_auxz00_1464 = (BgL_typez00_bglt) (BgL_classz00_14);
					BgL_tidz00_785 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_1464))->BgL_idz00);
				}
				{
					BgL_typez00_bglt BgL_auxz00_1467;

					BgL_auxz00_1467 = (BgL_typez00_bglt) (BgL_classz00_14);
					BgL_tnamez00_786 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_1467))->BgL_namez00);
				}
				{	/* Object/coercion.scm 168 */
					obj_t BgL_pragz00_787;

					BgL_pragz00_787 =
						BGl_makezd2onezd2coercionz00zzobject_coercionz00(BgL_tidz00_785,
						BgL_tnamez00_786, CNST_TABLE_REF(((long) 2)),
						BGl_string2920z00zzobject_coercionz00);
					{	/* Object/coercion.scm 170 */
						obj_t BgL_coercersz00_788;

						{	/* Object/coercion.scm 170 */
							int BgL_auxz00_1472;

							BgL_auxz00_1472 = (int) (((long) 1));
							BgL_coercersz00_788 = BGL_MVALUES_VAL(BgL_auxz00_1472);
						}
						{	/* Object/coercion.scm 170 */
							obj_t BgL_g2526z00_789;

							{	/* Object/coercion.scm 172 */
								obj_t BgL_list2827z00_814;

								BgL_list2827z00_814 = MAKE_PAIR(BgL_pragz00_787, BNIL);
								BgL_g2526z00_789 = BgL_list2827z00_814;
							}
							{
								obj_t BgL_superz00_791;

								obj_t BgL_coercersz00_792;

								obj_t BgL_pragmasz00_793;

								BgL_superz00_791 = BgL_superz00_15;
								BgL_coercersz00_792 = BgL_coercersz00_788;
								BgL_pragmasz00_793 = BgL_g2526z00_789;
							BgL_zc3anonymousza32813ze3z83_794:
								if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_791,
										BGl_tclassz00zzobject_classz00))
									{	/* Object/coercion.scm 177 */
										obj_t BgL_sidz00_796;

										obj_t BgL_snamez00_797;

										{
											BgL_typez00_bglt BgL_auxz00_1478;

											BgL_auxz00_1478 =
												(BgL_typez00_bglt) (
												(BgL_tclassz00_bglt) (BgL_superz00_791));
											BgL_sidz00_796 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_1478))->BgL_idz00);
										}
										{
											BgL_typez00_bglt BgL_auxz00_1482;

											BgL_auxz00_1482 =
												(BgL_typez00_bglt) (
												(BgL_tclassz00_bglt) (BgL_superz00_791));
											BgL_snamez00_797 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_1482))->
												BgL_namez00);
										}
										{	/* Object/coercion.scm 179 */
											obj_t BgL_pragz00_798;

											BgL_pragz00_798 =
												BGl_makezd2onezd2coercionz00zzobject_coercionz00
												(BgL_tidz00_785, BgL_tnamez00_786, BgL_sidz00_796,
												BgL_snamez00_797);
											{	/* Object/coercion.scm 181 */
												obj_t BgL_coercsz00_799;

												{	/* Object/coercion.scm 181 */
													int BgL_auxz00_1487;

													BgL_auxz00_1487 = (int) (((long) 1));
													BgL_coercsz00_799 = BGL_MVALUES_VAL(BgL_auxz00_1487);
												}
												{	/* Object/coercion.scm 181 */
													obj_t BgL_arg2815z00_800;

													obj_t BgL_arg2816z00_801;

													obj_t BgL_arg2818z00_802;

													{	/* Object/coercion.scm 181 */
														BgL_tclassz00_bglt BgL_obj2229z00_1112;

														BgL_obj2229z00_1112 =
															(BgL_tclassz00_bglt) (BgL_superz00_791);
														{
															obj_t BgL_auxz00_1491;

															{	/* Object/coercion.scm 181 */
																BgL_objectz00_bglt BgL_auxz00_1492;

																BgL_auxz00_1492 =
																	(BgL_objectz00_bglt) (BgL_obj2229z00_1112);
																BgL_auxz00_1491 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1492);
															}
															BgL_arg2815z00_800 =
																(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1491))->
																BgL_itszd2superzd2);
													}}
													BgL_arg2816z00_801 =
														bgl_append2(BgL_coercsz00_799, BgL_coercersz00_792);
													BgL_arg2818z00_802 =
														MAKE_PAIR(BgL_pragz00_798, BgL_pragmasz00_793);
													{
														obj_t BgL_pragmasz00_1500;

														obj_t BgL_coercersz00_1499;

														obj_t BgL_superz00_1498;

														BgL_superz00_1498 = BgL_arg2815z00_800;
														BgL_coercersz00_1499 = BgL_arg2816z00_801;
														BgL_pragmasz00_1500 = BgL_arg2818z00_802;
														BgL_pragmasz00_793 = BgL_pragmasz00_1500;
														BgL_coercersz00_792 = BgL_coercersz00_1499;
														BgL_superz00_791 = BgL_superz00_1498;
														goto BgL_zc3anonymousza32813ze3z83_794;
													}
												}
											}
										}
									}
								else
									{	/* Object/coercion.scm 173 */
										{	/* Object/coercion.scm 175 */
											obj_t BgL_arg2819z00_803;

											{	/* Object/coercion.scm 175 */
												obj_t BgL_arg2820z00_804;

												obj_t BgL_arg2821z00_805;

												BgL_arg2820z00_804 = CNST_TABLE_REF(((long) 7));
												BgL_arg2821z00_805 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_coercersz00_792, BNIL);
												BgL_arg2819z00_803 =
													MAKE_PAIR(BgL_arg2820z00_804, BgL_arg2821z00_805);
											}
											BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
												(BgL_arg2819z00_803);
										}
										{
											obj_t BgL_l2529z00_807;

											BgL_l2529z00_807 = BgL_pragmasz00_793;
										BgL_zc3anonymousza32822ze3z83_808:
											if (PAIRP(BgL_l2529z00_807))
												{	/* Object/coercion.scm 176 */
													BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
														(CAR(BgL_l2529z00_807));
													{
														obj_t BgL_l2529z00_1509;

														BgL_l2529z00_1509 = CDR(BgL_l2529z00_807);
														BgL_l2529z00_807 = BgL_l2529z00_1509;
														goto BgL_zc3anonymousza32822ze3z83_808;
													}
												}
											else
												{	/* Object/coercion.scm 176 */
													return ((bool_t) 1);
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



/* make-one-coercion */
	obj_t BGl_makezd2onezd2coercionz00zzobject_coercionz00(obj_t
		BgL_fromzd2idzd2_815, obj_t BgL_fromzd2namezd2_816,
		obj_t BgL_tozd2idzd2_817, obj_t BgL_tozd2namezd2_818)
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 165 */
			{	/* Object/coercion.scm 158 */
				obj_t BgL_tzd2ze3fz31_820;

				obj_t BgL_fzd2ze3tz31_821;

				{	/* Object/coercion.scm 158 */
					obj_t BgL_list2886z00_877;

					{	/* Object/coercion.scm 158 */
						obj_t BgL_arg2887z00_878;

						{	/* Object/coercion.scm 158 */
							obj_t BgL_arg2888z00_879;

							obj_t BgL_arg2890z00_880;

							BgL_arg2888z00_879 = CNST_TABLE_REF(((long) 8));
							BgL_arg2890z00_880 = MAKE_PAIR(BgL_fromzd2idzd2_815, BNIL);
							BgL_arg2887z00_878 =
								MAKE_PAIR(BgL_arg2888z00_879, BgL_arg2890z00_880);
						}
						BgL_list2886z00_877 =
							MAKE_PAIR(BgL_tozd2idzd2_817, BgL_arg2887z00_878);
					}
					BgL_tzd2ze3fz31_820 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list2886z00_877);
				}
				{	/* Object/coercion.scm 159 */
					obj_t BgL_list2891z00_881;

					{	/* Object/coercion.scm 159 */
						obj_t BgL_arg2892z00_882;

						{	/* Object/coercion.scm 159 */
							obj_t BgL_arg2893z00_883;

							obj_t BgL_arg2894z00_884;

							BgL_arg2893z00_883 = CNST_TABLE_REF(((long) 8));
							BgL_arg2894z00_884 = MAKE_PAIR(BgL_tozd2idzd2_817, BNIL);
							BgL_arg2892z00_882 =
								MAKE_PAIR(BgL_arg2893z00_883, BgL_arg2894z00_884);
						}
						BgL_list2891z00_881 =
							MAKE_PAIR(BgL_fromzd2idzd2_815, BgL_arg2892z00_882);
					}
					BgL_fzd2ze3tz31_821 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list2891z00_881);
				}
				{	/* Object/coercion.scm 160 */
					obj_t BgL_val0_2527z00_822;

					obj_t BgL_val1_2528z00_823;

					{	/* Object/coercion.scm 160 */
						obj_t BgL_arg2829z00_824;

						obj_t BgL_arg2830z00_825;

						BgL_arg2829z00_824 = CNST_TABLE_REF(((long) 9));
						{	/* Object/coercion.scm 160 */
							obj_t BgL_arg2831z00_826;

							obj_t BgL_arg2832z00_827;

							{	/* Object/coercion.scm 160 */
								obj_t BgL_arg2836z00_831;

								{	/* Object/coercion.scm 160 */
									obj_t BgL_arg2837z00_832;

									obj_t BgL_arg2838z00_833;

									obj_t BgL_arg2839z00_834;

									obj_t BgL_arg2841z00_835;

									obj_t BgL_arg2842z00_836;

									BgL_arg2837z00_832 = CNST_TABLE_REF(((long) 10));
									BgL_arg2838z00_833 = CNST_TABLE_REF(((long) 11));
									BgL_arg2839z00_834 = CNST_TABLE_REF(((long) 12));
									BgL_arg2841z00_835 = CNST_TABLE_REF(((long) 13));
									BgL_arg2842z00_836 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 14)), BNIL);
									{	/* Object/coercion.scm 160 */
										obj_t BgL_list2844z00_838;

										{	/* Object/coercion.scm 160 */
											obj_t BgL_arg2845z00_839;

											{	/* Object/coercion.scm 160 */
												obj_t BgL_arg2846z00_840;

												{	/* Object/coercion.scm 160 */
													obj_t BgL_arg2847z00_841;

													{	/* Object/coercion.scm 160 */
														obj_t BgL_arg2848z00_842;

														BgL_arg2848z00_842 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2847z00_841 =
															MAKE_PAIR(BgL_arg2842z00_836, BgL_arg2848z00_842);
													}
													BgL_arg2846z00_840 =
														MAKE_PAIR(BgL_arg2841z00_835, BgL_arg2847z00_841);
												}
												BgL_arg2845z00_839 =
													MAKE_PAIR(BgL_arg2839z00_834, BgL_arg2846z00_840);
											}
											BgL_list2844z00_838 =
												MAKE_PAIR(BgL_arg2838z00_833, BgL_arg2845z00_839);
										}
										BgL_arg2836z00_831 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2837z00_832, BgL_list2844z00_838);
								}}
								BgL_arg2831z00_826 =
									MAKE_PAIR(BgL_tzd2ze3fz31_820, BgL_arg2836z00_831);
							}
							{	/* Object/coercion.scm 161 */
								obj_t BgL_arg2849z00_843;

								{	/* Object/coercion.scm 161 */
									obj_t BgL_arg2850z00_844;

									obj_t BgL_arg2851z00_845;

									obj_t BgL_arg2852z00_846;

									obj_t BgL_arg2854z00_847;

									obj_t BgL_arg2856z00_848;

									BgL_arg2850z00_844 = CNST_TABLE_REF(((long) 10));
									BgL_arg2851z00_845 = CNST_TABLE_REF(((long) 11));
									BgL_arg2852z00_846 = CNST_TABLE_REF(((long) 12));
									BgL_arg2854z00_847 = CNST_TABLE_REF(((long) 13));
									BgL_arg2856z00_848 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 14)), BNIL);
									{	/* Object/coercion.scm 161 */
										obj_t BgL_list2858z00_850;

										{	/* Object/coercion.scm 161 */
											obj_t BgL_arg2859z00_851;

											{	/* Object/coercion.scm 161 */
												obj_t BgL_arg2861z00_852;

												{	/* Object/coercion.scm 161 */
													obj_t BgL_arg2862z00_853;

													{	/* Object/coercion.scm 161 */
														obj_t BgL_arg2863z00_854;

														BgL_arg2863z00_854 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2862z00_853 =
															MAKE_PAIR(BgL_arg2856z00_848, BgL_arg2863z00_854);
													}
													BgL_arg2861z00_852 =
														MAKE_PAIR(BgL_arg2854z00_847, BgL_arg2862z00_853);
												}
												BgL_arg2859z00_851 =
													MAKE_PAIR(BgL_arg2852z00_846, BgL_arg2861z00_852);
											}
											BgL_list2858z00_850 =
												MAKE_PAIR(BgL_arg2851z00_845, BgL_arg2859z00_851);
										}
										BgL_arg2849z00_843 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2850z00_844, BgL_list2858z00_850);
								}}
								BgL_arg2832z00_827 =
									MAKE_PAIR(BgL_fzd2ze3tz31_821, BgL_arg2849z00_843);
							}
							{	/* Object/coercion.scm 160 */
								obj_t BgL_list2834z00_829;

								{	/* Object/coercion.scm 160 */
									obj_t BgL_arg2835z00_830;

									BgL_arg2835z00_830 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2834z00_829 =
										MAKE_PAIR(BgL_arg2832z00_827, BgL_arg2835z00_830);
								}
								BgL_arg2830z00_825 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2831z00_826, BgL_list2834z00_829);
						}}
						BgL_val0_2527z00_822 =
							MAKE_PAIR(BgL_arg2829z00_824, BgL_arg2830z00_825);
					}
					{	/* Object/coercion.scm 162 */
						obj_t BgL_arg2864z00_855;

						obj_t BgL_arg2865z00_856;

						{	/* Object/coercion.scm 162 */
							obj_t BgL_arg2868z00_859;

							obj_t BgL_arg2869z00_860;

							BgL_arg2868z00_859 = CNST_TABLE_REF(((long) 15));
							{	/* Object/coercion.scm 162 */
								obj_t BgL_arg2870z00_861;

								obj_t BgL_arg2871z00_862;

								BgL_arg2870z00_861 = MAKE_PAIR(BgL_tozd2idzd2_817, BNIL);
								BgL_arg2871z00_862 =
									string_append_3(BGl_string2921z00zzobject_coercionz00,
									BgL_fromzd2namezd2_816,
									BGl_string2922z00zzobject_coercionz00);
								{	/* Object/coercion.scm 162 */
									obj_t BgL_list2873z00_864;

									{	/* Object/coercion.scm 162 */
										obj_t BgL_arg2874z00_865;

										{	/* Object/coercion.scm 162 */
											obj_t BgL_arg2875z00_866;

											{	/* Object/coercion.scm 162 */
												obj_t BgL_arg2876z00_867;

												BgL_arg2876z00_867 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2875z00_866 =
													MAKE_PAIR(BgL_arg2871z00_862, BgL_arg2876z00_867);
											}
											BgL_arg2874z00_865 =
												MAKE_PAIR(BgL_arg2870z00_861, BgL_arg2875z00_866);
										}
										BgL_list2873z00_864 =
											MAKE_PAIR(BgL_tzd2ze3fz31_820, BgL_arg2874z00_865);
									}
									BgL_arg2869z00_860 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_fromzd2idzd2_815, BgL_list2873z00_864);
							}}
							BgL_arg2864z00_855 =
								MAKE_PAIR(BgL_arg2868z00_859, BgL_arg2869z00_860);
						}
						{	/* Object/coercion.scm 164 */
							obj_t BgL_arg2877z00_868;

							obj_t BgL_arg2878z00_869;

							BgL_arg2877z00_868 = CNST_TABLE_REF(((long) 15));
							{	/* Object/coercion.scm 164 */
								obj_t BgL_arg2879z00_870;

								obj_t BgL_arg2880z00_871;

								BgL_arg2879z00_870 = MAKE_PAIR(BgL_fromzd2idzd2_815, BNIL);
								BgL_arg2880z00_871 =
									string_append_3(BGl_string2921z00zzobject_coercionz00,
									BgL_tozd2namezd2_818, BGl_string2922z00zzobject_coercionz00);
								{	/* Object/coercion.scm 164 */
									obj_t BgL_list2882z00_873;

									{	/* Object/coercion.scm 164 */
										obj_t BgL_arg2883z00_874;

										{	/* Object/coercion.scm 164 */
											obj_t BgL_arg2884z00_875;

											{	/* Object/coercion.scm 164 */
												obj_t BgL_arg2885z00_876;

												BgL_arg2885z00_876 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2884z00_875 =
													MAKE_PAIR(BgL_arg2880z00_871, BgL_arg2885z00_876);
											}
											BgL_arg2883z00_874 =
												MAKE_PAIR(BgL_arg2879z00_870, BgL_arg2884z00_875);
										}
										BgL_list2882z00_873 =
											MAKE_PAIR(BgL_fzd2ze3tz31_821, BgL_arg2883z00_874);
									}
									BgL_arg2878z00_869 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_tozd2idzd2_817, BgL_list2882z00_873);
							}}
							BgL_arg2865z00_856 =
								MAKE_PAIR(BgL_arg2877z00_868, BgL_arg2878z00_869);
						}
						{	/* Object/coercion.scm 162 */
							obj_t BgL_list2866z00_857;

							{	/* Object/coercion.scm 162 */
								obj_t BgL_arg2867z00_858;

								BgL_arg2867z00_858 = MAKE_PAIR(BgL_arg2865z00_856, BNIL);
								BgL_list2866z00_857 =
									MAKE_PAIR(BgL_arg2864z00_855, BgL_arg2867z00_858);
							}
							BgL_val1_2528z00_823 = BgL_list2866z00_857;
					}}
					{	/* Object/coercion.scm 160 */
						int BgL_auxz00_1572;

						BgL_auxz00_1572 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_1572);
					}
					{	/* Object/coercion.scm 160 */
						int BgL_auxz00_1575;

						BgL_auxz00_1575 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_1575, BgL_val1_2528z00_823);
					}
					return BgL_val0_2527z00_822;
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_coercionz00()
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 21 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_coercionz00()
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 21 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_coercionz00()
	{
		AN_OBJECT;
		{	/* Object/coercion.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzobject_structz00(((long) 112894054),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
			return
				BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string2923z00zzobject_coercionz00));
		}
	}

#ifdef __cplusplus
}
#endif
