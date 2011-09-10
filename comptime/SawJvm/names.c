/*===========================================================================*/
/*   (SawJvm/names.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/names.scm)*/
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

	typedef struct BgL_wclassz00_bgl
	{
		obj_t BgL_itszd2classzd2;
	}                *BgL_wclassz00_bglt;

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

	typedef struct BgL_jarrayz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_jarrayz00_bglt;

	typedef struct BgL_jvmz00_bgl
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
		obj_t BgL_qnamez00;
		obj_t BgL_classesz00;
		obj_t BgL_currentzd2classzd2;
		obj_t BgL_declarationsz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_codez00;
		obj_t BgL_inlinez00;
	}             *BgL_jvmz00_bglt;

	typedef struct BgL_jvmbasicz00_bgl
	{
		char dummy;
	}                  *BgL_jvmbasicz00_bglt;


	extern obj_t
		BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_wideningzd2tveczd2zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	extern obj_t BGl_wclassz00zzobject_classz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_buildzd2typezd2namez00zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_namesz00();
	BGL_EXPORTED_DECL BgL_jvmbasicz00_bglt
		BGl_wideningzd2jvmbasiczd2zzsaw_jvm_namesz00();
	static obj_t BGl__jvmbasiczf3zf3zzsaw_jvm_namesz00(obj_t, obj_t);
	static obj_t BGl_backendzd2subtypezf3zd2jvm4209zf3zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl__makezd2jvmbasiczd2zzsaw_jvm_namesz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4213z83zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_namesz00();
	static obj_t BGl__wideningzd2jvmbasiczd2zzsaw_jvm_namesz00(obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL BgL_jvmbasicz00_bglt
		BGl_makezd2jvmbasiczd2zzsaw_jvm_namesz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int);
	extern obj_t
		BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(BgL_wclassz00_bglt);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2jvmbasiczd2nilz52zzsaw_jvm_namesz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2jvmbasicz80zzsaw_jvm_namesz00(obj_t);
	static obj_t BGl__fillzd2jvmbasicz12zc0zzsaw_jvm_namesz00(obj_t, obj_t);
	static bool_t BGl_resetzd2jvmstdzd2typez12z12zzsaw_jvm_namesz00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2jvmbasicz80zzsaw_jvm_namesz00();
	BGL_EXPORTED_DEF obj_t BGl_jvmbasicz00zzsaw_jvm_namesz00 = BUNSPEC;
	extern obj_t
		BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	BGL_EXPORTED_DECL BgL_jvmbasicz00_bglt
		BGl_jvmbasiczd2nilzd2zzsaw_jvm_namesz00();
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_namesz00();
	extern BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, int);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t
		BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(BgL_jclassz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_namesz00 = BUNSPEC;
	extern obj_t BGl_jarrayz00zzforeign_jtypez00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_namesz00();
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_namesz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_jvmz00zzbackend_jvm_classz00;
	static obj_t BGl__saw_jvmzd2setzd2typezd2namesz12zc0zzsaw_jvm_namesz00(obj_t,
		obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__nameszd2initializa7ationz75zzsaw_jvm_namesz00(obj_t, obj_t);
	static obj_t BGl__jvmbasiczd2nilzd2zzsaw_jvm_namesz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_jvmbasiczf3zf3zzsaw_jvm_namesz00(obj_t);
	extern obj_t BGl_forzd2eachzd2typez12z12zztype_envz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_namesz00();
	static obj_t BGl_objectzd2ze3structzd2jvmba4211ze3zzsaw_jvm_namesz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_namesz00();
	BGL_EXPORTED_DECL BgL_jvmbasicz00_bglt
		BGl_fillzd2jvmbasicz12zc0zzsaw_jvm_namesz00(BgL_jvmbasicz00_bglt);
	static obj_t __cnst[10];


	extern obj_t BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_saw_jvmzd2setzd2typezd2namesz12zd2envz12zzsaw_jvm_namesz00,
		BgL_bgl__saw_jvmza7d2setza7d4358z00,
		BGl__saw_jvmzd2setzd2typezd2namesz12zc0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2jvmbasiczd2envz00zzsaw_jvm_namesz00,
		BgL_bgl__wideningza7d2jvmb4359za7,
		BGl__wideningzd2jvmbasiczd2zzsaw_jvm_namesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4347z00zzsaw_jvm_namesz00,
		BgL_bgl_backendza7d2subtyp4360za7,
		BGl_backendzd2subtypezf3zd2jvm4209zf3zzsaw_jvm_namesz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4349z00zzsaw_jvm_namesz00,
		BgL_bgl_objectza7d2za7e3stru4361z00,
		BGl_objectzd2ze3structzd2jvmba4211ze3zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4351z00zzsaw_jvm_namesz00,
		BgL_bgl_structza7b2objectza74362z00,
		BGl_structzb2objectzd2ze3objec4213z83zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4346z00zzsaw_jvm_namesz00,
		BgL_bgl_string4346za700za7za7s4363za7, "Zector", 6);
	      DEFINE_STRING(BGl_string4348z00zzsaw_jvm_namesz00,
		BgL_bgl_string4348za700za7za7s4364za7, "backend-subtype?", 16);
	      DEFINE_STRING(BGl_string4350z00zzsaw_jvm_namesz00,
		BgL_bgl_string4350za700za7za7s4365za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4352z00zzsaw_jvm_namesz00,
		BgL_bgl_string4352za700za7za7s4366za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4353z00zzsaw_jvm_namesz00,
		BgL_bgl_string4353za700za7za7s4367za7, "saw_jvm_names", 13);
	      DEFINE_STRING(BGl_string4354z00zzsaw_jvm_namesz00,
		BgL_bgl_string4354za700za7za7s4368za7,
		"java.lang.Object _ jvmbasic object ((obj . obj) (magic . obj) (pair-nil . obj) (procedure-el1 . obj) (void* . obj) (tvector . obj) (output-port . output-port) (input-port . input-port) (binary-port . binary-port) (epair . extended_pair) (dynamic-env . bgldynamic) (procedure . procedure)) (char char ucs2 obj obj obj) (bstring string ucs2string vector cnst* procedure-el) (boolean byte byte byte char short int int long long long long int) (bool char byte ubyte ucs2 ushort long uchar llong ullong elong uelong ulong) (void short int float double) ",
		548);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nameszd2initializa7ationzd2envza7zzsaw_jvm_namesz00,
		BgL_bgl__namesza7d2initial4369za7,
		BGl__nameszd2initializa7ationz75zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jvmbasiczd2envz00zzsaw_jvm_namesz00,
		BgL_bgl__makeza7d2jvmbasic4370za7,
		BGl__makezd2jvmbasiczd2zzsaw_jvm_namesz00, 0L, BUNSPEC, 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2jvmbasicz12zd2envz12zzsaw_jvm_namesz00,
		BgL_bgl__fillza7d2jvmbasic4371za7,
		BGl__fillzd2jvmbasicz12zc0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_resetzd2globalz12zd2envz12zzbackend_cplibz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2jvmbasiczd2envz52zzsaw_jvm_namesz00,
		BgL_bgl__za752allocateza7d2j4372z00,
		BGl__z52allocatezd2jvmbasicz80zzsaw_jvm_namesz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczf3zd2envz21zzsaw_jvm_namesz00,
		BgL_bgl__jvmbasicza7f3za7f3za74373za7,
		BGl__jvmbasiczf3zf3zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczd2nilzd2envz00zzsaw_jvm_namesz00,
		BgL_bgl__jvmbasicza7d2nilza74374z00,
		BGl__jvmbasiczd2nilzd2zzsaw_jvm_namesz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long
		BgL_checksumz00_1816, char *BgL_fromz00_1817)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_namesz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_namesz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_namesz00();
					BGl_cnstzd2initzd2zzsaw_jvm_namesz00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_namesz00();
					BGl_objectzd2initzd2zzsaw_jvm_namesz00();
					BGl_methodzd2initzd2zzsaw_jvm_namesz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_jvm_names");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_jvm_names");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 1 */
			{	/* SawJvm/names.scm 1 */
				obj_t BgL_cportz00_1800;

				BgL_cportz00_1800 =
					bgl_open_input_string(BGl_string4354z00zzsaw_jvm_namesz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1801;

					BgL_iz00_1801 = ((long) 9);
				BgL_loopz00_1802:
					if ((BgL_iz00_1801 == ((long) -1)))
						{	/* SawJvm/names.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/names.scm 1 */
							{	/* SawJvm/names.scm 1 */
								obj_t BgL_arg4356z00_1804;

								{	/* SawJvm/names.scm 1 */

									{	/* SawJvm/names.scm 1 */
										obj_t BgL_locationz00_1806;

										BgL_locationz00_1806 = BBOOL(((bool_t) 0));
										{	/* SawJvm/names.scm 1 */

											BgL_arg4356z00_1804 =
												BGl_readz00zz__readerz00(BgL_cportz00_1800,
												BgL_locationz00_1806);
										}
									}
								}
								{	/* SawJvm/names.scm 1 */
									int BgL_auxz00_1834;

									BgL_auxz00_1834 = (int) (BgL_iz00_1801);
									CNST_TABLE_SET(BgL_auxz00_1834, BgL_arg4356z00_1804);
							}}
							{	/* SawJvm/names.scm 1 */
								int BgL_auxz00_1807;

								BgL_auxz00_1807 = (int) ((BgL_iz00_1801 - ((long) 1)));
								{
									long BgL_iz00_1839;

									BgL_iz00_1839 = (long) (BgL_auxz00_1807);
									BgL_iz00_1801 = BgL_iz00_1839;
									goto BgL_loopz00_1802;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 1 */
			return BUNSPEC;
		}
	}



/* names-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(BgL_jvmz00_bglt
		BgL_mez00_1)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 21 */
			BGl_resetzd2jvmstdzd2typez12z12zzsaw_jvm_namesz00();
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_resetzd2globalz12zd2envz12zzbackend_cplibz00, BNIL);
			return
				BGl_forzd2eachzd2typez12z12zztype_envz00
				(BGl_saw_jvmzd2setzd2typezd2namesz12zd2envz12zzsaw_jvm_namesz00);
		}
	}



/* _names-initialization */
	obj_t BGl__nameszd2initializa7ationz75zzsaw_jvm_namesz00(obj_t
		BgL_envz00_1750, obj_t BgL_mez00_1751)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 21 */
			return
				BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(
				(BgL_jvmz00_bglt) (BgL_mez00_1751));
		}
	}



/* reset-jvmstd-type! */
	bool_t BGl_resetzd2jvmstdzd2typez12z12zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 30 */
			{	/* SawJvm/names.scm 32 */
				obj_t BgL_g4193z00_1043;

				BgL_g4193z00_1043 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_l4191z00_1045;

					BgL_l4191z00_1045 = BgL_g4193z00_1043;
				BgL_zc3anonymousza34215ze3z83_1046:
					if (PAIRP(BgL_l4191z00_1045))
						{	/* SawJvm/names.scm 33 */
							{	/* SawJvm/names.scm 32 */
								obj_t BgL_xz00_1048;

								BgL_xz00_1048 = CAR(BgL_l4191z00_1045);
								{	/* SawJvm/names.scm 32 */
									BgL_typez00_bglt BgL_arg4217z00_1049;

									{	/* SawJvm/names.scm 32 */
										BgL_typez00_bglt BgL_obj4185z00_1050;

										BgL_obj4185z00_1050 =
											((BgL_typez00_bglt)
											BGl_findzd2typezd2zztype_envz00(BgL_xz00_1048));
										{	/* SawJvm/names.scm 32 */
											BgL_jvmbasicz00_bglt BgL_arg4218z00_1051;

											BgL_arg4218z00_1051 =
												BGl_wideningzd2jvmbasiczd2zzsaw_jvm_namesz00();
											{	/* SawJvm/names.scm 32 */
												obj_t BgL_auxz00_1855;

												BgL_objectz00_bglt BgL_auxz00_1853;

												BgL_auxz00_1855 = (obj_t) (BgL_arg4218z00_1051);
												BgL_auxz00_1853 =
													(BgL_objectz00_bglt) (BgL_obj4185z00_1050);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_1853,
													BgL_auxz00_1855);
											}
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj4185z00_1050),
											BGl_classzd2numzd2zz__objectz00
											(BGl_jvmbasicz00zzsaw_jvm_namesz00));
										BgL_arg4217z00_1049 = BgL_obj4185z00_1050;
									}
									((((BgL_typez00_bglt) CREF(BgL_arg4217z00_1049))->
											BgL_namez00) = ((obj_t) BgL_xz00_1048), BUNSPEC);
								}
							}
							{
								obj_t BgL_l4191z00_1862;

								BgL_l4191z00_1862 = CDR(BgL_l4191z00_1045);
								BgL_l4191z00_1045 = BgL_l4191z00_1862;
								goto BgL_zc3anonymousza34215ze3z83_1046;
							}
						}
					else
						{	/* SawJvm/names.scm 33 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawJvm/names.scm 35 */
				obj_t BgL_g4197z00_1055;

				obj_t BgL_g4198z00_1056;

				BgL_g4197z00_1055 = CNST_TABLE_REF(((long) 1));
				BgL_g4198z00_1056 = CNST_TABLE_REF(((long) 2));
				{
					obj_t BgL_ll4194z00_1058;

					obj_t BgL_ll4195z00_1059;

					BgL_ll4194z00_1058 = BgL_g4197z00_1055;
					BgL_ll4195z00_1059 = BgL_g4198z00_1056;
				BgL_zc3anonymousza34221ze3z83_1060:
					if (NULLP(BgL_ll4194z00_1058))
						{	/* SawJvm/names.scm 36 */
							((bool_t) 1);
						}
					else
						{	/* SawJvm/names.scm 36 */
							{	/* SawJvm/names.scm 35 */
								obj_t BgL_xz00_1062;

								obj_t BgL_sz00_1063;

								BgL_xz00_1062 = CAR(BgL_ll4194z00_1058);
								BgL_sz00_1063 = CAR(BgL_ll4195z00_1059);
								{	/* SawJvm/names.scm 35 */
									BgL_typez00_bglt BgL_arg4223z00_1064;

									{	/* SawJvm/names.scm 35 */
										BgL_typez00_bglt BgL_obj4186z00_1065;

										BgL_obj4186z00_1065 =
											((BgL_typez00_bglt)
											BGl_findzd2typezd2zztype_envz00(BgL_xz00_1062));
										{	/* SawJvm/names.scm 35 */
											BgL_jvmbasicz00_bglt BgL_arg4224z00_1066;

											BgL_arg4224z00_1066 =
												BGl_wideningzd2jvmbasiczd2zzsaw_jvm_namesz00();
											{	/* SawJvm/names.scm 35 */
												obj_t BgL_auxz00_1875;

												BgL_objectz00_bglt BgL_auxz00_1873;

												BgL_auxz00_1875 = (obj_t) (BgL_arg4224z00_1066);
												BgL_auxz00_1873 =
													(BgL_objectz00_bglt) (BgL_obj4186z00_1065);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_1873,
													BgL_auxz00_1875);
											}
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj4186z00_1065),
											BGl_classzd2numzd2zz__objectz00
											(BGl_jvmbasicz00zzsaw_jvm_namesz00));
										BgL_arg4223z00_1064 = BgL_obj4186z00_1065;
									}
									((((BgL_typez00_bglt) CREF(BgL_arg4223z00_1064))->
											BgL_namez00) = ((obj_t) BgL_sz00_1063), BUNSPEC);
								}
							}
							{
								obj_t BgL_ll4195z00_1884;

								obj_t BgL_ll4194z00_1882;

								BgL_ll4194z00_1882 = CDR(BgL_ll4194z00_1058);
								BgL_ll4195z00_1884 = CDR(BgL_ll4195z00_1059);
								BgL_ll4195z00_1059 = BgL_ll4195z00_1884;
								BgL_ll4194z00_1058 = BgL_ll4194z00_1882;
								goto BgL_zc3anonymousza34221ze3z83_1060;
							}
						}
				}
			}
			{	/* SawJvm/names.scm 39 */
				obj_t BgL_g4202z00_1071;

				obj_t BgL_g4203z00_1072;

				BgL_g4202z00_1071 = CNST_TABLE_REF(((long) 3));
				BgL_g4203z00_1072 = CNST_TABLE_REF(((long) 4));
				{
					obj_t BgL_ll4199z00_1074;

					obj_t BgL_ll4200z00_1075;

					BgL_ll4199z00_1074 = BgL_g4202z00_1071;
					BgL_ll4200z00_1075 = BgL_g4203z00_1072;
				BgL_zc3anonymousza34229ze3z83_1076:
					if (NULLP(BgL_ll4199z00_1074))
						{	/* SawJvm/names.scm 41 */
							((bool_t) 1);
						}
					else
						{	/* SawJvm/names.scm 41 */
							{	/* SawJvm/names.scm 40 */
								obj_t BgL_vz00_1078;

								obj_t BgL_iz00_1079;

								BgL_vz00_1078 = CAR(BgL_ll4199z00_1074);
								BgL_iz00_1079 = CAR(BgL_ll4200z00_1075);
								{	/* SawJvm/names.scm 40 */
									BgL_typez00_bglt BgL_obj4187z00_1080;

									BgL_obj4187z00_1080 =
										((BgL_typez00_bglt)
										BGl_findzd2typezd2zztype_envz00(BgL_vz00_1078));
									{	/* SawJvm/names.scm 40 */
										obj_t BgL_auxz00_1896;

										BgL_objectz00_bglt BgL_auxz00_1894;

										BgL_auxz00_1896 =
											BGl_wideningzd2tveczd2zztvector_tvectorz00
											(BGl_findzd2typezd2zztype_envz00(BgL_iz00_1079));
										BgL_auxz00_1894 =
											(BgL_objectz00_bglt) (BgL_obj4187z00_1080);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_1894, BgL_auxz00_1896);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj4187z00_1080),
										BGl_classzd2numzd2zz__objectz00
										(BGl_tvecz00zztvector_tvectorz00));
									BgL_obj4187z00_1080;
								}
							}
							{
								obj_t BgL_ll4200z00_1905;

								obj_t BgL_ll4199z00_1903;

								BgL_ll4199z00_1903 = CDR(BgL_ll4199z00_1074);
								BgL_ll4200z00_1905 = CDR(BgL_ll4200z00_1075);
								BgL_ll4200z00_1075 = BgL_ll4200z00_1905;
								BgL_ll4199z00_1074 = BgL_ll4199z00_1903;
								goto BgL_zc3anonymousza34229ze3z83_1076;
							}
						}
				}
			}
			{	/* SawJvm/names.scm 44 */
				obj_t BgL_g4206z00_1087;

				BgL_g4206z00_1087 = CNST_TABLE_REF(((long) 5));
				{
					obj_t BgL_l4204z00_1089;

					BgL_l4204z00_1089 = BgL_g4206z00_1087;
				BgL_zc3anonymousza34236ze3z83_1090:
					if (PAIRP(BgL_l4204z00_1089))
						{	/* SawJvm/names.scm 45 */
							{	/* SawJvm/names.scm 44 */
								obj_t BgL_sz00_1092;

								BgL_sz00_1092 = CAR(BgL_l4204z00_1089);
								{
									obj_t BgL_auxz00_1914;

									BgL_typez00_bglt BgL_auxz00_1911;

									BgL_auxz00_1914 = CDR(BgL_sz00_1092);
									BgL_auxz00_1911 =
										BGl_findzd2typezd2zztype_envz00(CAR(BgL_sz00_1092));
									((((BgL_typez00_bglt) CREF(BgL_auxz00_1911))->BgL_namez00) =
										((obj_t) BgL_auxz00_1914), BUNSPEC);
								}
							}
							{
								obj_t BgL_l4204z00_1917;

								BgL_l4204z00_1917 = CDR(BgL_l4204z00_1089);
								BgL_l4204z00_1089 = BgL_l4204z00_1917;
								goto BgL_zc3anonymousza34236ze3z83_1090;
							}
						}
					else
						{	/* SawJvm/names.scm 45 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* _saw_jvm-set-type-names! */
	obj_t BGl__saw_jvmzd2setzd2typezd2namesz12zc0zzsaw_jvm_namesz00(obj_t
		BgL_envz00_1754, obj_t BgL_typez00_1755)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 63 */
			return
				BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00(
				(BgL_typez00_bglt) (BgL_typez00_1755));
		}
	}



/* get-jvmtype */
	obj_t BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_typez00_3)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 66 */
			{	/* SawJvm/names.scm 67 */
				obj_t BgL_namez00_1098;

				BgL_namez00_1098 =
					(((BgL_typez00_bglt) CREF(BgL_typez00_3))->BgL_namez00);
				if (SYMBOLP(BgL_namez00_1098))
					{	/* SawJvm/names.scm 68 */
						return BgL_namez00_1098;
					}
				else
					{	/* SawJvm/names.scm 70 */
						obj_t BgL_jtypez00_1100;

						BgL_jtypez00_1100 =
							BGl_buildzd2typezd2namez00zzsaw_jvm_namesz00(BgL_typez00_3);
						((((BgL_typez00_bglt) CREF(BgL_typez00_3))->BgL_namez00) =
							((obj_t) BgL_jtypez00_1100), BUNSPEC);
						return BgL_jtypez00_1100;
					}
			}
		}
	}



/* build-type-name */
	obj_t BGl_buildzd2typezd2namez00zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_typez00_4)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 74 */
			{	/* SawJvm/names.scm 76 */
				bool_t BgL_testz00_1926;

				{	/* SawJvm/names.scm 76 */
					obj_t BgL_obj3290z00_1650;

					BgL_obj3290z00_1650 = (obj_t) (BgL_typez00_4);
					BgL_testz00_1926 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj3290z00_1650,
						BGl_tclassz00zzobject_classz00);
				}
				if (BgL_testz00_1926)
					{	/* SawJvm/names.scm 76 */
						if (
							((((BgL_typez00_bglt) CREF(BgL_typez00_4))->BgL_idz00) ==
								CNST_TABLE_REF(((long) 6))))
							{	/* SawJvm/names.scm 77 */
								return CNST_TABLE_REF(((long) 6));
							}
						else
							{	/* SawJvm/names.scm 77 */
								return
									BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(
									(BgL_tclassz00_bglt) (BgL_typez00_4));
							}
					}
				else
					{	/* SawJvm/names.scm 80 */
						bool_t BgL_testz00_1936;

						{	/* SawJvm/names.scm 80 */
							obj_t BgL_obj3460z00_1652;

							BgL_obj3460z00_1652 = (obj_t) (BgL_typez00_4);
							BgL_testz00_1936 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3460z00_1652,
								BGl_wclassz00zzobject_classz00);
						}
						if (BgL_testz00_1936)
							{	/* SawJvm/names.scm 80 */
								return
									BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(
									(BgL_wclassz00_bglt) (BgL_typez00_4));
							}
						else
							{	/* SawJvm/names.scm 82 */
								bool_t BgL_testz00_1941;

								{	/* SawJvm/names.scm 82 */
									obj_t BgL_obj3385z00_1653;

									BgL_obj3385z00_1653 = (obj_t) (BgL_typez00_4);
									BgL_testz00_1941 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj3385z00_1653,
										BGl_jclassz00zzobject_classz00);
								}
								if (BgL_testz00_1941)
									{	/* SawJvm/names.scm 82 */
										return
											BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(
											(BgL_jclassz00_bglt) (BgL_typez00_4));
									}
								else
									{	/* SawJvm/names.scm 83 */
										bool_t BgL_testz00_1946;

										{	/* SawJvm/names.scm 83 */
											obj_t BgL_obj3588z00_1654;

											BgL_obj3588z00_1654 = (obj_t) (BgL_typez00_4);
											BgL_testz00_1946 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj3588z00_1654,
												BGl_tvecz00zztvector_tvectorz00);
										}
										if (BgL_testz00_1946)
											{	/* SawJvm/names.scm 83 */
												{	/* SawJvm/names.scm 84 */
													BgL_typez00_bglt BgL_arg4251z00_1108;

													{	/* SawJvm/names.scm 84 */
														BgL_tvecz00_bglt BgL_obj3589z00_1655;

														BgL_obj3589z00_1655 =
															(BgL_tvecz00_bglt) (BgL_typez00_4);
														{
															obj_t BgL_auxz00_1950;

															{	/* SawJvm/names.scm 84 */
																BgL_objectz00_bglt BgL_auxz00_1951;

																BgL_auxz00_1951 =
																	(BgL_objectz00_bglt) (BgL_obj3589z00_1655);
																BgL_auxz00_1950 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1951);
															}
															BgL_arg4251z00_1108 =
																(((BgL_tvecz00_bglt) CREF(BgL_auxz00_1950))->
																BgL_itemzd2typezd2);
														}
													}
													BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00
														(BgL_arg4251z00_1108);
												}
												return BGl_string4346z00zzsaw_jvm_namesz00;
											}
										else
											{	/* SawJvm/names.scm 86 */
												bool_t BgL_testz00_1956;

												{	/* SawJvm/names.scm 86 */
													obj_t BgL_obj3657z00_1656;

													BgL_obj3657z00_1656 = (obj_t) (BgL_typez00_4);
													BgL_testz00_1956 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj3657z00_1656,
														BGl_jarrayz00zzforeign_jtypez00);
												}
												if (BgL_testz00_1956)
													{	/* SawJvm/names.scm 86 */
														{	/* SawJvm/names.scm 87 */
															BgL_typez00_bglt BgL_arg4253z00_1110;

															{	/* SawJvm/names.scm 87 */
																BgL_jarrayz00_bglt BgL_obj3658z00_1657;

																BgL_obj3658z00_1657 =
																	(BgL_jarrayz00_bglt) (BgL_typez00_4);
																{
																	obj_t BgL_auxz00_1960;

																	{	/* SawJvm/names.scm 87 */
																		BgL_objectz00_bglt BgL_auxz00_1961;

																		BgL_auxz00_1961 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3658z00_1657);
																		BgL_auxz00_1960 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1961);
																	}
																	BgL_arg4253z00_1110 =
																		(((BgL_jarrayz00_bglt)
																			CREF(BgL_auxz00_1960))->
																		BgL_itemzd2typezd2);
																}
															}
															BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00
																(BgL_arg4253z00_1110);
														}
														return BGl_string4346z00zzsaw_jvm_namesz00;
													}
												else
													{	/* SawJvm/names.scm 86 */
														return
															BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00
															(BgL_typez00_4);
													}
											}
									}
							}
					}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 1 */
			{	/* SawJvm/names.scm 16 */
				obj_t BgL_arg4254z00_1111;

				obj_t BgL_arg4255z00_1112;

				obj_t BgL_arg4259z00_1115;

				BgL_arg4254z00_1111 = CNST_TABLE_REF(((long) 7));
				BgL_arg4255z00_1112 = BGl_typez00zztype_typez00;
				{	/* SawJvm/names.scm 16 */
					obj_t BgL_v4207z00_1116;

					BgL_v4207z00_1116 = create_vector((int) (((long) 0)));
					BgL_arg4259z00_1115 = BgL_v4207z00_1116;
				}
				BGl_jvmbasicz00zzsaw_jvm_namesz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4254z00_1111,
					BgL_arg4255z00_1112, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jvmbasiczd2envz52zzsaw_jvm_namesz00,
					BGl_jvmbasiczd2nilzd2envz00zzsaw_jvm_namesz00,
					BGl_jvmbasiczf3zd2envz21zzsaw_jvm_namesz00, ((long) 39994232), BFALSE,
					BFALSE, BgL_arg4259z00_1115);
			}
			return (BGl_z52thezd2jvmbasiczd2nilz52zzsaw_jvm_namesz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* jvmbasic? */
	BGL_EXPORTED_DEF bool_t BGl_jvmbasiczf3zf3zzsaw_jvm_namesz00(obj_t
		BgL_obj4135z00_8)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4135z00_8,
				BGl_jvmbasicz00zzsaw_jvm_namesz00);
		}
	}



/* _jvmbasic? */
	obj_t BGl__jvmbasiczf3zf3zzsaw_jvm_namesz00(obj_t BgL_envz00_1758,
		obj_t BgL_obj4135z00_1759)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4135z00_1759,
					BGl_jvmbasicz00zzsaw_jvm_namesz00));
		}
	}



/* widening-jvmbasic */
	BGL_EXPORTED_DEF BgL_jvmbasicz00_bglt
		BGl_wideningzd2jvmbasiczd2zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			{	/* SawJvm/names.scm 16 */
				BgL_jvmbasicz00_bglt BgL_new4106z00_1117;

				BgL_new4106z00_1117 =
					((BgL_jvmbasicz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_jvmbasicz00_bgl))));
				return BgL_new4106z00_1117;
			}
		}
	}



/* _widening-jvmbasic */
	obj_t BGl__wideningzd2jvmbasiczd2zzsaw_jvm_namesz00(obj_t BgL_envz00_1760)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			return (obj_t) (BGl_wideningzd2jvmbasiczd2zzsaw_jvm_namesz00());
		}
	}



/* make-jvmbasic */
	BGL_EXPORTED_DEF BgL_jvmbasicz00_bglt
		BGl_makezd2jvmbasiczd2zzsaw_jvm_namesz00(obj_t BgL_id4108z00_12,
		obj_t BgL_name4109z00_13, obj_t BgL_siza7e4110za7_14,
		obj_t BgL_class4111z00_15, obj_t BgL_coercezd2to4112zd2_16,
		obj_t BgL_parents4113z00_17, bool_t BgL_initzf34114zf3_18,
		bool_t BgL_magiczf34115zf3_19, obj_t BgL_z424116z42_20,
		obj_t BgL_alias4117z00_21, obj_t BgL_pointedzd2tozd2by4118z00_22,
		obj_t BgL_tvector4119z00_23, obj_t BgL_location4120z00_24,
		obj_t BgL_importzd2location4121zd2_25, int BgL_occurrence4122z00_26)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			{	/* SawJvm/names.scm 16 */
				BgL_typez00_bglt BgL_aux4123z00_1659;

				BgL_aux4123z00_1659 =
					BGl_makezd2typezd2zztype_typez00(BgL_id4108z00_12, BgL_name4109z00_13,
					BgL_siza7e4110za7_14, BgL_class4111z00_15, BgL_coercezd2to4112zd2_16,
					BgL_parents4113z00_17, BgL_initzf34114zf3_18, BgL_magiczf34115zf3_19,
					BgL_z424116z42_20, BgL_alias4117z00_21,
					BgL_pointedzd2tozd2by4118z00_22, BgL_tvector4119z00_23,
					BgL_location4120z00_24, BgL_importzd2location4121zd2_25,
					BgL_occurrence4122z00_26);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4123z00_1659),
					BGl_classzd2numzd2zz__objectz00(BGl_jvmbasicz00zzsaw_jvm_namesz00));
				{	/* SawJvm/names.scm 16 */
					BgL_jvmbasicz00_bglt BgL_arg4261z00_1661;

					BgL_arg4261z00_1661 = BGl_wideningzd2jvmbasiczd2zzsaw_jvm_namesz00();
					{	/* SawJvm/names.scm 16 */
						obj_t BgL_auxz00_1984;

						BgL_objectz00_bglt BgL_auxz00_1982;

						BgL_auxz00_1984 = (obj_t) (BgL_arg4261z00_1661);
						BgL_auxz00_1982 = (BgL_objectz00_bglt) (BgL_aux4123z00_1659);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_1982, BgL_auxz00_1984);
				}}
				return
					((BgL_jvmbasicz00_bglt) (BgL_jvmbasicz00_bglt) (BgL_aux4123z00_1659));
			}
		}
	}



/* _make-jvmbasic */
	obj_t BGl__makezd2jvmbasiczd2zzsaw_jvm_namesz00(obj_t BgL_envz00_1761,
		obj_t BgL_id4108z00_1762, obj_t BgL_name4109z00_1763,
		obj_t BgL_siza7e4110za7_1764, obj_t BgL_class4111z00_1765,
		obj_t BgL_coercezd2to4112zd2_1766, obj_t BgL_parents4113z00_1767,
		obj_t BgL_initzf34114zf3_1768, obj_t BgL_magiczf34115zf3_1769,
		obj_t BgL_z424116z42_1770, obj_t BgL_alias4117z00_1771,
		obj_t BgL_pointedzd2tozd2by4118z00_1772, obj_t BgL_tvector4119z00_1773,
		obj_t BgL_location4120z00_1774, obj_t BgL_importzd2location4121zd2_1775,
		obj_t BgL_occurrence4122z00_1776)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			return
				(obj_t) (BGl_makezd2jvmbasiczd2zzsaw_jvm_namesz00(BgL_id4108z00_1762,
					BgL_name4109z00_1763, BgL_siza7e4110za7_1764, BgL_class4111z00_1765,
					BgL_coercezd2to4112zd2_1766, BgL_parents4113z00_1767,
					CBOOL(BgL_initzf34114zf3_1768), CBOOL(BgL_magiczf34115zf3_1769),
					BgL_z424116z42_1770, BgL_alias4117z00_1771,
					BgL_pointedzd2tozd2by4118z00_1772, BgL_tvector4119z00_1773,
					BgL_location4120z00_1774, BgL_importzd2location4121zd2_1775,
					CINT(BgL_occurrence4122z00_1776)));
		}
	}



/* fill-jvmbasic! */
	BGL_EXPORTED_DEF BgL_jvmbasicz00_bglt
		BGl_fillzd2jvmbasicz12zc0zzsaw_jvm_namesz00(BgL_jvmbasicz00_bglt
		BgL_new4125z00_27)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			{	/* SawJvm/names.scm 16 */

				return BgL_new4125z00_27;
			}
		}
	}



/* _fill-jvmbasic! */
	obj_t BGl__fillzd2jvmbasicz12zc0zzsaw_jvm_namesz00(obj_t BgL_envz00_1777,
		obj_t BgL_new4125z00_1778)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			{	/* SawJvm/names.scm 16 */
				BgL_jvmbasicz00_bglt BgL_auxz00_1994;

				{	/* SawJvm/names.scm 16 */

					BgL_auxz00_1994 = (BgL_jvmbasicz00_bglt) (BgL_new4125z00_1778);
				}
				return (obj_t) (BgL_auxz00_1994);
			}
		}
	}



/* %allocate-jvmbasic */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2jvmbasicz80zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			{	/* SawJvm/names.scm 16 */
				BgL_typez00_bglt BgL_new4127z00_1811;

				BgL_new4127z00_1811 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4127z00_1811),
					BGl_classzd2numzd2zz__objectz00(BGl_jvmbasicz00zzsaw_jvm_namesz00));
				{	/* SawJvm/names.scm 16 */
					BgL_objectz00_bglt BgL_auxz00_2001;

					BgL_auxz00_2001 = (BgL_objectz00_bglt) (BgL_new4127z00_1811);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2001, BFALSE);
				}
				return BgL_new4127z00_1811;
			}
		}
	}



/* _%allocate-jvmbasic */
	obj_t BGl__z52allocatezd2jvmbasicz80zzsaw_jvm_namesz00(obj_t BgL_envz00_1756)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			{	/* SawJvm/names.scm 16 */
				BgL_typez00_bglt BgL_auxz00_2004;

				{	/* SawJvm/names.scm 16 */
					BgL_typez00_bglt BgL_res4357z00_1815;

					{	/* SawJvm/names.scm 16 */
						BgL_typez00_bglt BgL_new4127z00_1813;

						BgL_new4127z00_1813 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4127z00_1813),
							BGl_classzd2numzd2zz__objectz00
							(BGl_jvmbasicz00zzsaw_jvm_namesz00));
						{	/* SawJvm/names.scm 16 */
							BgL_objectz00_bglt BgL_auxz00_2009;

							BgL_auxz00_2009 = (BgL_objectz00_bglt) (BgL_new4127z00_1813);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2009, BFALSE);
						}
						BgL_res4357z00_1815 = BgL_new4127z00_1813;
					}
					BgL_auxz00_2004 = BgL_res4357z00_1815;
				}
				return (obj_t) (BgL_auxz00_2004);
			}
		}
	}



/* jvmbasic-nil */
	BGL_EXPORTED_DEF BgL_jvmbasicz00_bglt
		BGl_jvmbasiczd2nilzd2zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			if ((BGl_z52thezd2jvmbasiczd2nilz52zzsaw_jvm_namesz00 == BUNSPEC))
				{	/* SawJvm/names.scm 16 */
					{	/* SawJvm/names.scm 16 */
						BgL_typez00_bglt BgL_res4336z00_1673;

						{	/* SawJvm/names.scm 16 */
							BgL_typez00_bglt BgL_new1598z00_1669;

							BgL_new1598z00_1669 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1669),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* SawJvm/names.scm 16 */
								BgL_objectz00_bglt BgL_auxz00_2019;

								BgL_auxz00_2019 = (BgL_objectz00_bglt) (BgL_new1598z00_1669);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2019, BFALSE);
							}
							BgL_res4336z00_1673 = BgL_new1598z00_1669;
						}
						BGl_z52thezd2jvmbasiczd2nilz52zzsaw_jvm_namesz00 =
							(obj_t) (BgL_res4336z00_1673);
					}
					{	/* SawJvm/names.scm 16 */
						BgL_typez00_bglt BgL_res4337z00_1705;

						{	/* SawJvm/names.scm 16 */
							BgL_typez00_bglt BgL_new1581z00_1674;

							obj_t BgL_id1566z00_1675;

							int BgL_occurrence1580z00_1689;

							BgL_new1581z00_1674 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2jvmbasiczd2nilz52zzsaw_jvm_namesz00);
							BgL_id1566z00_1675 = CNST_TABLE_REF(((long) 8));
							BgL_occurrence1580z00_1689 = (int) (((long) 0));
							{	/* SawJvm/names.scm 16 */
								obj_t BgL_id1566z00_1690;

								obj_t BgL_name1567z00_1691;

								obj_t BgL_siza7e1568za7_1692;

								obj_t BgL_class1569z00_1693;

								obj_t BgL_coercezd2to1570zd2_1694;

								obj_t BgL_parents1571z00_1695;

								bool_t BgL_initzf31572zf3_1696;

								bool_t BgL_magiczf31573zf3_1697;

								obj_t BgL_z421574z42_1698;

								obj_t BgL_alias1575z00_1699;

								obj_t BgL_pointedzd2tozd2by1576z00_1700;

								obj_t BgL_tvector1577z00_1701;

								obj_t BgL_location1578z00_1702;

								obj_t BgL_importzd2location1579zd2_1703;

								int BgL_occurrence1580z00_1704;

								BgL_id1566z00_1690 = BgL_id1566z00_1675;
								BgL_name1567z00_1691 = BUNSPEC;
								BgL_siza7e1568za7_1692 = BUNSPEC;
								BgL_class1569z00_1693 = BUNSPEC;
								BgL_coercezd2to1570zd2_1694 = BUNSPEC;
								BgL_parents1571z00_1695 = BUNSPEC;
								BgL_initzf31572zf3_1696 = ((bool_t) 0);
								BgL_magiczf31573zf3_1697 = ((bool_t) 0);
								BgL_z421574z42_1698 = BUNSPEC;
								BgL_alias1575z00_1699 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1700 = BUNSPEC;
								BgL_tvector1577z00_1701 = BUNSPEC;
								BgL_location1578z00_1702 = BUNSPEC;
								BgL_importzd2location1579zd2_1703 = BUNSPEC;
								BgL_occurrence1580z00_1704 = BgL_occurrence1580z00_1689;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1690), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1691), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1692), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1693), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1694), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1695), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1696), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1697), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1698), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1699), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1700), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1701), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1702), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1703), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1674))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1704), BUNSPEC);
								BgL_res4337z00_1705 = BgL_new1581z00_1674;
						}} BgL_res4337z00_1705;
					}
					{	/* SawJvm/names.scm 16 */
						long BgL_arg4265z00_1125;

						BgL_arg4265z00_1125 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_jvmbasicz00zzsaw_jvm_namesz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2jvmbasiczd2nilz52zzsaw_jvm_namesz00),
							BgL_arg4265z00_1125);
					}
					{	/* SawJvm/names.scm 16 */
						BgL_jvmbasicz00_bglt BgL_arg4266z00_1126;

						BgL_arg4266z00_1126 =
							BGl_wideningzd2jvmbasiczd2zzsaw_jvm_namesz00();
						{	/* SawJvm/names.scm 16 */
							obj_t BgL_auxz00_2047;

							BgL_objectz00_bglt BgL_auxz00_2045;

							BgL_auxz00_2047 = (obj_t) (BgL_arg4266z00_1126);
							BgL_auxz00_2045 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2jvmbasiczd2nilz52zzsaw_jvm_namesz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2045, BgL_auxz00_2047);
				}}}
			else
				{	/* SawJvm/names.scm 16 */
					BFALSE;
				}
			return
				(BgL_jvmbasicz00_bglt)
				(BGl_z52thezd2jvmbasiczd2nilz52zzsaw_jvm_namesz00);
		}
	}



/* _jvmbasic-nil */
	obj_t BGl__jvmbasiczd2nilzd2zzsaw_jvm_namesz00(obj_t BgL_envz00_1757)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			return (obj_t) (BGl_jvmbasiczd2nilzd2zzsaw_jvm_namesz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc4347z00zzsaw_jvm_namesz00,
				BGl_string4348z00zzsaw_jvm_namesz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jvmbasicz00zzsaw_jvm_namesz00, BGl_proc4349z00zzsaw_jvm_namesz00,
				BGl_string4350z00zzsaw_jvm_namesz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jvmbasicz00zzsaw_jvm_namesz00, BGl_proc4351z00zzsaw_jvm_namesz00,
				BGl_string4352z00zzsaw_jvm_namesz00);
		}
	}



/* struct+object->objec4213 */
	obj_t BGl_structzb2objectzd2ze3objec4213z83zzsaw_jvm_namesz00(obj_t
		BgL_envz00_1787, obj_t BgL_oz00_1788, obj_t BgL_sz00_1789)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			{
				BgL_jvmbasicz00_bglt BgL_oz00_1604;

				obj_t BgL_sz00_1605;

				{	/* SawJvm/names.scm 16 */
					BgL_jvmbasicz00_bglt BgL_auxz00_2056;

					BgL_oz00_1604 = (BgL_jvmbasicz00_bglt) (BgL_oz00_1788);
					BgL_sz00_1605 = BgL_sz00_1789;
					{

						{	/* SawJvm/names.scm 16 */
							obj_t BgL_old4131z00_1608;

							{	/* SawJvm/names.scm 16 */
								obj_t BgL_nextzd2method4212zd2_1613;

								BgL_nextzd2method4212zd2_1613 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1604),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_jvmbasicz00zzsaw_jvm_namesz00);
								if (PROCEDUREP(BgL_nextzd2method4212zd2_1613))
									{	/* SawJvm/names.scm 16 */
										BgL_old4131z00_1608 =
											PROCEDURE_ENTRY(BgL_nextzd2method4212zd2_1613)
											(BgL_nextzd2method4212zd2_1613, (obj_t) (BgL_oz00_1604),
											BgL_sz00_1605, BEOA);
									}
								else
									{	/* SawJvm/names.scm 16 */
										BgL_old4131z00_1608 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1604), BgL_sz00_1605));
									}
							}
							{	/* SawJvm/names.scm 16 */
								BgL_jvmbasicz00_bglt BgL_new4133z00_1610;

								BgL_new4133z00_1610 =
									((BgL_jvmbasicz00_bglt) (BgL_old4131z00_1608));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4133z00_1610),
									BGl_classzd2numzd2zz__objectz00
									(BGl_jvmbasicz00zzsaw_jvm_namesz00));
								{	/* SawJvm/names.scm 16 */
									BgL_jvmbasicz00_bglt BgL_arg4334z00_1612;

									BgL_arg4334z00_1612 =
										BGl_wideningzd2jvmbasiczd2zzsaw_jvm_namesz00();
									{	/* SawJvm/names.scm 16 */
										obj_t BgL_auxz00_2074;

										BgL_objectz00_bglt BgL_auxz00_2072;

										BgL_auxz00_2074 = (obj_t) (BgL_arg4334z00_1612);
										BgL_auxz00_2072 =
											(BgL_objectz00_bglt) (BgL_new4133z00_1610);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2072, BgL_auxz00_2074);
									}
								}
								BgL_auxz00_2056 = BgL_new4133z00_1610;
							}
						}
					}
					return (obj_t) (BgL_auxz00_2056);
				}
			}
		}
	}



/* object->struct-jvmba4211 */
	obj_t BGl_objectzd2ze3structzd2jvmba4211ze3zzsaw_jvm_namesz00(obj_t
		BgL_envz00_1790, obj_t BgL_obj4128z00_1791)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 16 */
			{
				BgL_jvmbasicz00_bglt BgL_obj4128z00_1596;

				BgL_obj4128z00_1596 = (BgL_jvmbasicz00_bglt) (BgL_obj4128z00_1791);
				{

					{	/* SawJvm/names.scm 16 */
						obj_t BgL_res4129z00_1599;

						{	/* SawJvm/names.scm 16 */
							obj_t BgL_nextzd2method4210zd2_1602;

							BgL_nextzd2method4210zd2_1602 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4128z00_1596),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_jvmbasicz00zzsaw_jvm_namesz00);
							if (PROCEDUREP(BgL_nextzd2method4210zd2_1602))
								{	/* SawJvm/names.scm 16 */
									BgL_res4129z00_1599 =
										PROCEDURE_ENTRY(BgL_nextzd2method4210zd2_1602)
										(BgL_nextzd2method4210zd2_1602,
										(obj_t) (BgL_obj4128z00_1596), BEOA);
								}
							else
								{	/* SawJvm/names.scm 16 */
									BgL_res4129z00_1599 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4128z00_1596));
								}
						}
						{	/* SawJvm/names.scm 16 */
							obj_t BgL_aux4130z00_1600;

							{	/* SawJvm/names.scm 16 */
								obj_t BgL_keyz00_1732;

								BgL_keyz00_1732 = CNST_TABLE_REF(((long) 7));
								BgL_aux4130z00_1600 =
									make_struct(BgL_keyz00_1732, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawJvm/names.scm 16 */
								int BgL_auxz00_2091;

								BgL_auxz00_2091 = (int) (((long) 0));
								STRUCT_SET(BgL_res4129z00_1599, BgL_auxz00_2091,
									BgL_aux4130z00_1600);
							}
							{	/* SawJvm/names.scm 16 */
								obj_t BgL_auxz00_2094;

								BgL_auxz00_2094 = STRUCT_KEY(BgL_res4129z00_1599);
								STRUCT_KEY_SET(BgL_aux4130z00_1600, BgL_auxz00_2094);
							}
							{	/* SawJvm/names.scm 16 */
								obj_t BgL_kz00_1743;

								BgL_kz00_1743 = CNST_TABLE_REF(((long) 7));
								STRUCT_KEY_SET(BgL_res4129z00_1599, BgL_kz00_1743);
							}
							return BgL_res4129z00_1599;
						}
					}
				}
			}
		}
	}



/* backend-subtype?-jvm4209 */
	obj_t BGl_backendzd2subtypezf3zd2jvm4209zf3zzsaw_jvm_namesz00(obj_t
		BgL_envz00_1792, obj_t BgL_bz00_1793, obj_t BgL_t1z00_1794,
		obj_t BgL_t2z00_1795)
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 94 */
			{
				BgL_jvmz00_bglt BgL_bz00_1580;

				obj_t BgL_t1z00_1581;

				obj_t BgL_t2z00_1582;

				{	/* SawJvm/names.scm 95 */
					bool_t BgL_auxz00_2100;

					BgL_bz00_1580 = (BgL_jvmz00_bglt) (BgL_bz00_1793);
					BgL_t1z00_1581 = BgL_t1z00_1794;
					BgL_t2z00_1582 = BgL_t2z00_1795;
					{	/* SawJvm/names.scm 95 */
						bool_t BgL__ortest_4188z00_1585;

						BgL__ortest_4188z00_1585 = (BgL_t1z00_1581 == BgL_t2z00_1582);
						if (BgL__ortest_4188z00_1585)
							{	/* SawJvm/names.scm 95 */
								BgL_auxz00_2100 = BgL__ortest_4188z00_1585;
							}
						else
							{	/* SawJvm/names.scm 96 */
								bool_t BgL__ortest_4189z00_1586;

								{	/* SawJvm/names.scm 96 */
									obj_t BgL_auxz00_2107;

									obj_t BgL_auxz00_2103;

									{
										BgL_typez00_bglt BgL_auxz00_2108;

										BgL_auxz00_2108 = (BgL_typez00_bglt) (BgL_t2z00_1582);
										BgL_auxz00_2107 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2108))->BgL_idz00);
									}
									{
										BgL_typez00_bglt BgL_auxz00_2104;

										BgL_auxz00_2104 = (BgL_typez00_bglt) (BgL_t1z00_1581);
										BgL_auxz00_2103 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2104))->BgL_idz00);
									}
									BgL__ortest_4189z00_1586 =
										(BgL_auxz00_2103 == BgL_auxz00_2107);
								}
								if (BgL__ortest_4189z00_1586)
									{	/* SawJvm/names.scm 96 */
										BgL_auxz00_2100 = BgL__ortest_4189z00_1586;
									}
								else
									{	/* SawJvm/names.scm 97 */
										bool_t BgL__ortest_4190z00_1587;

										{	/* SawJvm/names.scm 97 */
											obj_t BgL_auxz00_2113;

											{
												BgL_typez00_bglt BgL_auxz00_2114;

												BgL_auxz00_2114 = (BgL_typez00_bglt) (BgL_t2z00_1582);
												BgL_auxz00_2113 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_2114))->
													BgL_namez00);
											}
											BgL__ortest_4190z00_1587 =
												(BgL_auxz00_2113 == CNST_TABLE_REF(((long) 9)));
										}
										if (BgL__ortest_4190z00_1587)
											{	/* SawJvm/names.scm 97 */
												BgL_auxz00_2100 = BgL__ortest_4190z00_1587;
											}
										else
											{	/* SawJvm/names.scm 98 */
												obj_t BgL_auxz00_2124;

												obj_t BgL_auxz00_2120;

												{
													BgL_typez00_bglt BgL_auxz00_2125;

													BgL_auxz00_2125 = (BgL_typez00_bglt) (BgL_t2z00_1582);
													BgL_auxz00_2124 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_2125))->
														BgL_namez00);
												}
												{
													BgL_typez00_bglt BgL_auxz00_2121;

													BgL_auxz00_2121 = (BgL_typez00_bglt) (BgL_t1z00_1581);
													BgL_auxz00_2120 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_2121))->
														BgL_namez00);
												}
												BgL_auxz00_2100 = (BgL_auxz00_2120 == BgL_auxz00_2124);
											}
									}
							}
					}
					return BBOOL(BgL_auxz00_2100);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_namesz00()
	{
		AN_OBJECT;
		{	/* SawJvm/names.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 302809955),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string4353z00zzsaw_jvm_namesz00));
		}
	}

#ifdef __cplusplus
}
#endif
