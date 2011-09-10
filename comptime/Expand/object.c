/*===========================================================================*/
/*   (Expand/object.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/object.scm)*/
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


	static obj_t BGl_allocz00zzexpand_objectz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_lexicalzd2stackzd2zzexpand_epsz00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2instantiatezd2zzexpand_objectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_instantiatezd2ze3fillz31zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2duplicatezd2zzexpand_objectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_makezd2virtualzd2setz00zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_tclasszd2allzd2slotsz00zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t BGl_makezd2azd2shrinkz12z12zzexpand_objectz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_objectz00();
	extern bool_t BGl_slotzd2defaultzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__expandzd2cozd2instantiatez00zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2shrinkz12zc0zzexpand_objectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_findzd2slotzd2offsetz00zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_duplicatezd2ze3makez31zzexpand_objectz00(obj_t,
		BgL_tclassz00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t
		BGl_findzd2classzd2constructorsz00zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t BGl__expandzd2withzd2accessz00zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_makezd2withzd2accesszd2bodyzd2zzexpand_objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_instantiatezd2ze3makez31zzexpand_objectz00(obj_t,
		BgL_tclassz00_bglt, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32588ze3z83zzexpand_objectz00(obj_t);
	extern obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t);
	extern obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2withzd2accessz00zzexpand_objectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cozd2instantiatezd2ze3letze3zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl__expandzd2duplicatezd2zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32887ze3z83zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_loopz00zzexpand_objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2definezd2classz00zzexpand_objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2cozd2instantiatez00zzexpand_objectz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_e1z00zzexpand_objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_objectz00();
	extern obj_t BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00();
	static obj_t BGl_zc3anonymousza32652ze3z83zzexpand_objectz00(obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl_classzd2splitzd2slotsz00zzexpand_objectz00(obj_t,
		BgL_tclassz00_bglt, obj_t);
	static obj_t BGl_objectzd2epairifyzd2zzexpand_objectz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_objectz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32950ze3z83zzexpand_objectz00(obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzexpand_objectz00();
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl__expandzd2shrinkz12zc0zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_classzd2makezd2zzobject_classz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_objectz00();
	static obj_t BGl_withzd2accesszd2expanderz00zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33095ze3z83zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_slotz00zzobject_slotsz00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t make_vector(int, obj_t);
	static obj_t BGl__expandzd2widenz12zc0zzexpand_objectz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl__expandzd2definezd2classz00zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2widenz12zc0zzexpand_objectz00(obj_t,
		obj_t);
	static obj_t BGl_makezd2wideningzd2zzexpand_objectz00(obj_t,
		BgL_tclassz00_bglt, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_objectz00();
	static obj_t BGl__expandzd2instantiatezd2zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_list_ref(obj_t, long);
	static obj_t __cnst[45];


	   
		 
		DEFINE_STRING(BGl_string3831z00zzexpand_objectz00,
		BgL_bgl_string3831za700za7za7e3866za7, "Illegal `define-class' form", 27);
	      DEFINE_STRING(BGl_string3832z00zzexpand_objectz00,
		BgL_bgl_string3832za700za7za7e3867za7,
		"Illegal `with-access' form. Illegal slot identifier `", 53);
	      DEFINE_STRING(BGl_string3833z00zzexpand_objectz00,
		BgL_bgl_string3833za700za7za7e3868za7, "'", 1);
	      DEFINE_STRING(BGl_string3834z00zzexpand_objectz00,
		BgL_bgl_string3834za700za7za7e3869za7, "Illegal `with-access' slot", 26);
	      DEFINE_STRING(BGl_string3835z00zzexpand_objectz00,
		BgL_bgl_string3835za700za7za7e3870za7, "Illegal `with-access' class", 27);
	      DEFINE_STRING(BGl_string3836z00zzexpand_objectz00,
		BgL_bgl_string3836za700za7za7e3871za7, "Illegal `with-access' form", 26);
	      DEFINE_STRING(BGl_string3837z00zzexpand_objectz00,
		BgL_bgl_string3837za700za7za7e3872za7,
		"Illegal `with-access' form. Unknown slot `", 42);
	      DEFINE_STRING(BGl_string3838z00zzexpand_objectz00,
		BgL_bgl_string3838za700za7za7e3873za7,
		"Abstract classes can't be instantiated", 38);
	      DEFINE_STRING(BGl_string3840z00zzexpand_objectz00,
		BgL_bgl_string3840za700za7za7e3874za7, "instantiate", 11);
	      DEFINE_STRING(BGl_string3839z00zzexpand_objectz00,
		BgL_bgl_string3839za700za7za7e3875za7, "Illegal `instantiate' form", 26);
	      DEFINE_STRING(BGl_string3841z00zzexpand_objectz00,
		BgL_bgl_string3841za700za7za7e3876za7,
		"Illegal `instantiate' form (missing arguments for slot ", 55);
	      DEFINE_STRING(BGl_string3842z00zzexpand_objectz00,
		BgL_bgl_string3842za700za7za7e3877za7, ")", 1);
	      DEFINE_STRING(BGl_string3843z00zzexpand_objectz00,
		BgL_bgl_string3843za700za7za7e3878za7, "Illegal `co-instantiate' form", 29);
	      DEFINE_STRING(BGl_string3844z00zzexpand_objectz00,
		BgL_bgl_string3844za700za7za7e3879za7,
		"co-instantiate:Abstract classes can't be instantiated", 53);
	      DEFINE_STRING(BGl_string3845z00zzexpand_objectz00,
		BgL_bgl_string3845za700za7za7e3880za7, "co-instantiate:Illegal class", 28);
	      DEFINE_STRING(BGl_string3846z00zzexpand_objectz00,
		BgL_bgl_string3846za700za7za7e3881za7, "co-instantiate:Illegal binding",
		30);
	      DEFINE_STRING(BGl_string3847z00zzexpand_objectz00,
		BgL_bgl_string3847za700za7za7e3882za7,
		"Abstract classes can't be duplicated", 36);
	      DEFINE_STRING(BGl_string3848z00zzexpand_objectz00,
		BgL_bgl_string3848za700za7za7e3883za7, "duplicate:Illegal class type:", 29);
	      DEFINE_STRING(BGl_string3850z00zzexpand_objectz00,
		BgL_bgl_string3850za700za7za7e3884za7, "duplicate", 9);
	      DEFINE_STRING(BGl_string3849z00zzexpand_objectz00,
		BgL_bgl_string3849za700za7za7e3885za7, "Illegal `duplicate' form", 24);
	      DEFINE_STRING(BGl_string3851z00zzexpand_objectz00,
		BgL_bgl_string3851za700za7za7e3886za7, "widen!:Illegal class type:", 26);
	      DEFINE_STRING(BGl_string3852z00zzexpand_objectz00,
		BgL_bgl_string3852za700za7za7e3887za7, "Illegal `widen!' form", 21);
	      DEFINE_STRING(BGl_string3853z00zzexpand_objectz00,
		BgL_bgl_string3853za700za7za7e3888za7, "widen!", 6);
	      DEFINE_STRING(BGl_string3854z00zzexpand_objectz00,
		BgL_bgl_string3854za700za7za7e3889za7,
		"Illegal `widening!' form (missing arguments for slot ", 53);
	      DEFINE_STRING(BGl_string3855z00zzexpand_objectz00,
		BgL_bgl_string3855za700za7za7e3890za7,
		"This object can't be widened to the wanted class", 48);
	      DEFINE_STRING(BGl_string3856z00zzexpand_objectz00,
		BgL_bgl_string3856za700za7za7e3891za7, "Illegal `shrink!' form", 22);
	      DEFINE_STRING(BGl_string3857z00zzexpand_objectz00,
		BgL_bgl_string3857za700za7za7e3892za7, "Not a wide object", 17);
	      DEFINE_STRING(BGl_string3858z00zzexpand_objectz00,
		BgL_bgl_string3858za700za7za7e3893za7, "shrink!", 7);
	      DEFINE_STRING(BGl_string3860z00zzexpand_objectz00,
		BgL_bgl_string3860za700za7za7e3894za7, "Illegal `", 9);
	      DEFINE_STRING(BGl_string3859z00zzexpand_objectz00,
		BgL_bgl_string3859za700za7za7e3895za7, "' form (read-only slot ", 23);
	      DEFINE_STRING(BGl_string3861z00zzexpand_objectz00,
		BgL_bgl_string3861za700za7za7e3896za7, "' form (unknown slot ", 21);
	      DEFINE_STRING(BGl_string3862z00zzexpand_objectz00,
		BgL_bgl_string3862za700za7za7e3897za7, "expand_object", 13);
	      DEFINE_STRING(BGl_string3863z00zzexpand_objectz00,
		BgL_bgl_string3863za700za7za7e3898za7,
		"object? o error object-class class-super eq? shrink! object-widening if class-num object-class-num-set! __object @ object-widening-set! cast obj let* make- nothing duplicated ! fill- begin %allocate- instantiate co-instantiate ok done new set! value -set! labels index -len - -ref let with-access instance define-class define-abstract-class define-final-class static class ",
		373);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2widenz12zd2envz12zzexpand_objectz00,
		BgL_bgl__expandza7d2widenza73899z00,
		BGl__expandzd2widenz12zc0zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2cozd2instantiatezd2envzd2zzexpand_objectz00,
		BgL_bgl__expandza7d2coza7d2i3900z00,
		BGl__expandzd2cozd2instantiatez00zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2shrinkz12zd2envz12zzexpand_objectz00,
		BgL_bgl__expandza7d2shrink3901za7,
		BGl__expandzd2shrinkz12zc0zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2instantiatezd2envz00zzexpand_objectz00,
		BgL_bgl__expandza7d2instan3902za7,
		BGl__expandzd2instantiatezd2zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2duplicatezd2envz00zzexpand_objectz00,
		BgL_bgl__expandza7d2duplic3903za7,
		BGl__expandzd2duplicatezd2zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2classzd2envzd2zzexpand_objectz00,
		BgL_bgl__expandza7d2define3904za7,
		BGl__expandzd2definezd2classz00zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2withzd2accesszd2envzd2zzexpand_objectz00,
		BgL_bgl__expandza7d2withza7d3905z00,
		BGl__expandzd2withzd2accessz00zzexpand_objectz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_objectz00(long
		BgL_checksumz00_2992, char *BgL_fromz00_2993)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_objectz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_objectz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_objectz00();
					BGl_cnstzd2initzd2zzexpand_objectz00();
					BGl_importedzd2moduleszd2initz00zzexpand_objectz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_objectz00()
	{
		AN_OBJECT;
		{	/* Expand/object.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_object");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"expand_object");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_objectz00()
	{
		AN_OBJECT;
		{	/* Expand/object.scm 15 */
			{	/* Expand/object.scm 15 */
				obj_t BgL_cportz00_2979;

				BgL_cportz00_2979 =
					bgl_open_input_string(BGl_string3863z00zzexpand_objectz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2980;

					BgL_iz00_2980 = ((long) 44);
				BgL_loopz00_2981:
					if ((BgL_iz00_2980 == ((long) -1)))
						{	/* Expand/object.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/object.scm 15 */
							{	/* Expand/object.scm 15 */
								obj_t BgL_arg3865z00_2983;

								{	/* Expand/object.scm 15 */

									{	/* Expand/object.scm 15 */
										obj_t BgL_locationz00_2985;

										BgL_locationz00_2985 = BBOOL(((bool_t) 0));
										{	/* Expand/object.scm 15 */

											BgL_arg3865z00_2983 =
												BGl_readz00zz__readerz00(BgL_cportz00_2979,
												BgL_locationz00_2985);
										}
									}
								}
								{	/* Expand/object.scm 15 */
									int BgL_auxz00_3016;

									BgL_auxz00_3016 = (int) (BgL_iz00_2980);
									CNST_TABLE_SET(BgL_auxz00_3016, BgL_arg3865z00_2983);
							}}
							{	/* Expand/object.scm 15 */
								int BgL_auxz00_2986;

								BgL_auxz00_2986 = (int) ((BgL_iz00_2980 - ((long) 1)));
								{
									long BgL_iz00_3021;

									BgL_iz00_3021 = (long) (BgL_auxz00_2986);
									BgL_iz00_2980 = BgL_iz00_3021;
									goto BgL_loopz00_2981;
								}
							}
						}
				}
			}
		}
	}



/* expand-define-class */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2classz00zzexpand_objectz00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 43 */
			{
				obj_t BgL_restz00_528;

				if (PAIRP(BgL_xz00_1))
					{	/* Expand/object.scm 44 */
						obj_t BgL_carzd21394zd2_533;

						obj_t BgL_cdrzd21395zd2_534;

						BgL_carzd21394zd2_533 = CAR(BgL_xz00_1);
						BgL_cdrzd21395zd2_534 = CDR(BgL_xz00_1);
						if ((BgL_carzd21394zd2_533 == CNST_TABLE_REF(((long) 4))))
							{	/* Expand/object.scm 44 */
								BgL_restz00_528 = BgL_cdrzd21395zd2_534;
							BgL_tagzd21389zd2_529:
								{	/* Expand/object.scm 46 */
									obj_t BgL_nxz00_539;

									{	/* Expand/object.scm 46 */
										obj_t BgL_arg2531z00_549;

										{	/* Expand/object.scm 46 */
											obj_t BgL_arg2536z00_550;

											obj_t BgL_arg2544z00_551;

											BgL_arg2536z00_550 = CNST_TABLE_REF(((long) 0));
											BgL_arg2544z00_551 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_restz00_528, BNIL);
											BgL_arg2531z00_549 =
												MAKE_PAIR(BgL_arg2536z00_550, BgL_arg2544z00_551);
										}
										BgL_nxz00_539 =
											BGl_evepairifyz00zz__prognz00(BgL_arg2531z00_549,
											BgL_xz00_1);
									}
									{	/* Expand/object.scm 46 */
										obj_t BgL_protoz00_540;

										BgL_protoz00_540 =
											BGl_parsezd2prototypezd2zzmodule_prototypez00
											(BgL_nxz00_539);
										{	/* Expand/object.scm 47 */

											if (CBOOL(BgL_protoz00_540))
												{	/* Expand/object.scm 48 */
													{	/* Expand/object.scm 52 */
														obj_t BgL_arg2491z00_541;

														obj_t BgL_arg2492z00_542;

														bool_t BgL_arg2493z00_543;

														bool_t BgL_arg2503z00_544;

														BgL_arg2491z00_541 = CDR(BgL_protoz00_540);
														BgL_arg2492z00_542 = CNST_TABLE_REF(((long) 1));
														BgL_arg2493z00_543 =
															(CAR(BgL_xz00_1) == CNST_TABLE_REF(((long) 2)));
														BgL_arg2503z00_544 =
															(CAR(BgL_xz00_1) == CNST_TABLE_REF(((long) 3)));
														BGl_declarezd2classz12zc0zzmodule_classz00
															(BgL_arg2491z00_541,
															BGl_za2moduleza2z00zzmodule_modulez00,
															BgL_arg2492z00_542, BgL_arg2493z00_543,
															BgL_arg2503z00_544, BgL_nxz00_539, BFALSE);
													}
													return
														BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00
														();
												}
											else
												{	/* Expand/object.scm 48 */
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string3831z00zzexpand_objectz00, BgL_xz00_1);
												}
										}
									}
								}
							}
						else
							{	/* Expand/object.scm 44 */
								if ((BgL_carzd21394zd2_533 == CNST_TABLE_REF(((long) 2))))
									{
										obj_t BgL_restz00_3051;

										BgL_restz00_3051 = BgL_cdrzd21395zd2_534;
										BgL_restz00_528 = BgL_restz00_3051;
										goto BgL_tagzd21389zd2_529;
									}
								else
									{	/* Expand/object.scm 44 */
										if ((BgL_carzd21394zd2_533 == CNST_TABLE_REF(((long) 3))))
											{
												obj_t BgL_restz00_3055;

												BgL_restz00_3055 = BgL_cdrzd21395zd2_534;
												BgL_restz00_528 = BgL_restz00_3055;
												goto BgL_tagzd21389zd2_529;
											}
										else
											{	/* Expand/object.scm 44 */
											BgL_tagzd21390zd2_530:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3831z00zzexpand_objectz00, BgL_xz00_1);
											}
									}
							}
					}
				else
					{	/* Expand/object.scm 44 */
						goto BgL_tagzd21390zd2_530;
					}
			}
		}
	}



/* _expand-define-class */
	obj_t BGl__expandzd2definezd2classz00zzexpand_objectz00(obj_t BgL_envz00_2895,
		obj_t BgL_xz00_2896, obj_t BgL_ez00_2897)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 43 */
			return
				BGl_expandzd2definezd2classz00zzexpand_objectz00(BgL_xz00_2896,
				BgL_ez00_2897);
		}
	}



/* expand-with-access */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2withzd2accessz00zzexpand_objectz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 62 */
			{
				obj_t BgL_withzd2accesszd2_552;

				obj_t BgL_instancez00_553;

				obj_t BgL_slotsz00_554;

				obj_t BgL_bodyz00_555;

				if (PAIRP(BgL_xz00_3))
					{	/* Expand/object.scm 63 */
						obj_t BgL_cdrzd21411zd2_560;

						BgL_cdrzd21411zd2_560 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_cdrzd21411zd2_560))
							{	/* Expand/object.scm 63 */
								obj_t BgL_cdrzd21417zd2_562;

								BgL_cdrzd21417zd2_562 = CDR(BgL_cdrzd21411zd2_560);
								if (PAIRP(BgL_cdrzd21417zd2_562))
									{	/* Expand/object.scm 63 */
										obj_t BgL_carzd21421zd2_564;

										obj_t BgL_cdrzd21422zd2_565;

										BgL_carzd21421zd2_564 = CAR(BgL_cdrzd21417zd2_562);
										BgL_cdrzd21422zd2_565 = CDR(BgL_cdrzd21417zd2_562);
										if (PAIRP(BgL_carzd21421zd2_564))
											{	/* Expand/object.scm 63 */
												if (PAIRP(BgL_cdrzd21422zd2_565))
													{	/* Expand/object.scm 63 */
														BgL_withzd2accesszd2_552 = CAR(BgL_xz00_3);
														BgL_instancez00_553 = CAR(BgL_cdrzd21411zd2_560);
														BgL_slotsz00_554 = BgL_carzd21421zd2_564;
														BgL_bodyz00_555 = BgL_cdrzd21422zd2_565;
														{	/* Expand/object.scm 65 */
															obj_t BgL_locz00_570;

															BgL_locz00_570 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_xz00_3);
															{	/* Expand/object.scm 65 */
																BgL_typez00_bglt BgL_classz00_571;

																BgL_classz00_571 =
																	BGl_typezd2ofzd2idz00zzast_identz00
																	(BgL_withzd2accesszd2_552, BgL_locz00_570);
																{	/* Expand/object.scm 66 */

																	{	/* Expand/object.scm 68 */
																		bool_t BgL_testz00_3074;

																		{	/* Expand/object.scm 68 */
																			obj_t BgL_obj2139z00_2242;

																			BgL_obj2139z00_2242 =
																				(obj_t) (BgL_classz00_571);
																			BgL_testz00_3074 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj2139z00_2242,
																				BGl_tclassz00zzobject_classz00);
																		}
																		if (BgL_testz00_3074)
																			{
																				obj_t BgL_sz00_575;

																				obj_t BgL_nslotsz00_576;

																				BgL_sz00_575 = BgL_slotsz00_554;
																				BgL_nslotsz00_576 = BNIL;
																			BgL_zc3anonymousza32556ze3z83_577:
																				if (NULLP(BgL_sz00_575))
																					{	/* Expand/object.scm 75 */
																						obj_t BgL_auxz00_579;

																						BgL_auxz00_579 =
																							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																							(BGl_gensymz00zz__r4_symbols_6_4z00
																							(CNST_TABLE_REF(((long) 5))));
																						{	/* Expand/object.scm 76 */
																							obj_t BgL_instancez00_581;

																							BgL_instancez00_581 =
																								PROCEDURE_ENTRY(BgL_ez00_4)
																								(BgL_ez00_4,
																								BgL_instancez00_553, BgL_ez00_4,
																								BEOA);
																							{	/* Expand/object.scm 77 */
																								obj_t BgL_classzd2idzd2_582;

																								BgL_classzd2idzd2_582 =
																									(((BgL_typez00_bglt)
																										CREF(BgL_classz00_571))->
																									BgL_idz00);
																								{	/* Expand/object.scm 78 */

																									{	/* Expand/object.scm 79 */
																										obj_t BgL_directz00_583;

																										BgL_directz00_583 =
																											BGl_classzd2splitzd2slotsz00zzexpand_objectz00
																											(BgL_xz00_3,
																											(BgL_tclassz00_bglt)
																											(BgL_classz00_571),
																											BgL_nslotsz00_576);
																										{	/* Expand/object.scm 81 */
																											obj_t BgL_indexedz00_584;

																											{	/* Expand/object.scm 81 */
																												int BgL_auxz00_3087;

																												BgL_auxz00_3087 =
																													(int) (((long) 1));
																												BgL_indexedz00_584 =
																													BGL_MVALUES_VAL
																													(BgL_auxz00_3087);
																											}
																											{	/* Expand/object.scm 83 */
																												obj_t
																													BgL_arg2558z00_585;
																												{	/* Expand/object.scm 83 */
																													obj_t
																														BgL_arg2559z00_586;
																													obj_t
																														BgL_arg2560z00_587;
																													if (NULLP
																														(BgL_nslotsz00_576))
																														{	/* Expand/object.scm 83 */
																															BgL_arg2559z00_586
																																= BNIL;
																														}
																													else
																														{	/* Expand/object.scm 83 */
																															obj_t
																																BgL_head2449z00_591;
																															BgL_head2449z00_591
																																=
																																MAKE_PAIR(CAR
																																(CAR
																																	(BgL_nslotsz00_576)),
																																BNIL);
																															{	/* Expand/object.scm 83 */
																																obj_t
																																	BgL_g2452z00_592;
																																BgL_g2452z00_592
																																	=
																																	CDR
																																	(BgL_nslotsz00_576);
																																{
																																	obj_t
																																		BgL_l2447z00_594;
																																	obj_t
																																		BgL_tail2450z00_595;
																																	BgL_l2447z00_594
																																		=
																																		BgL_g2452z00_592;
																																	BgL_tail2450z00_595
																																		=
																																		BgL_head2449z00_591;
																																BgL_zc3anonymousza32563ze3z83_596:
																																	if (NULLP
																																		(BgL_l2447z00_594))
																																		{	/* Expand/object.scm 83 */
																																			BgL_arg2559z00_586
																																				=
																																				BgL_head2449z00_591;
																																		}
																																	else
																																		{	/* Expand/object.scm 83 */
																																			obj_t
																																				BgL_newtail2451z00_598;
																																			BgL_newtail2451z00_598
																																				=
																																				MAKE_PAIR
																																				(CAR(CAR
																																					(BgL_l2447z00_594)),
																																				BNIL);
																																			SET_CDR
																																				(BgL_tail2450z00_595,
																																				BgL_newtail2451z00_598);
																																			{
																																				obj_t
																																					BgL_tail2450z00_3104;
																																				obj_t
																																					BgL_l2447z00_3102;
																																				BgL_l2447z00_3102
																																					=
																																					CDR
																																					(BgL_l2447z00_594);
																																				BgL_tail2450z00_3104
																																					=
																																					BgL_newtail2451z00_598;
																																				BgL_tail2450z00_595
																																					=
																																					BgL_tail2450z00_3104;
																																				BgL_l2447z00_594
																																					=
																																					BgL_l2447z00_3102;
																																				goto
																																					BgL_zc3anonymousza32563ze3z83_596;
																																			}
																																		}
																																}
																															}
																														}
																													BgL_arg2560z00_587 =
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_xz00_3);
																													{	/* Expand/object.scm 87 */
																														obj_t
																															BgL_zc3anonymousza32588ze3z83_2898;
																														BgL_zc3anonymousza32588ze3z83_2898
																															=
																															make_fx_procedure
																															(BGl_zc3anonymousza32588ze3z83zzexpand_objectz00,
																															(int) (((long)
																																	0)),
																															(int) (((long)
																																	8)));
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32588ze3z83_2898,
																															(int) (((long)
																																	0)),
																															BgL_ez00_4);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32588ze3z83_2898,
																															(int) (((long)
																																	1)),
																															BgL_auxz00_579);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32588ze3z83_2898,
																															(int) (((long)
																																	2)),
																															BgL_auxz00_579);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32588ze3z83_2898,
																															(int) (((long)
																																	3)),
																															BgL_classzd2idzd2_582);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32588ze3z83_2898,
																															(int) (((long)
																																	4)),
																															BgL_directz00_583);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32588ze3z83_2898,
																															(int) (((long)
																																	5)),
																															BgL_instancez00_581);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32588ze3z83_2898,
																															(int) (((long)
																																	6)),
																															BgL_indexedz00_584);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32588ze3z83_2898,
																															(int) (((long)
																																	7)),
																															BgL_bodyz00_555);
																														BgL_arg2558z00_585 =
																															BGl_withzd2lexicalzd2zzexpand_epsz00
																															(BgL_arg2559z00_586,
																															BgL_auxz00_579,
																															BgL_arg2560z00_587,
																															BgL_zc3anonymousza32588ze3z83_2898);
																												}}
																												return
																													BGl_replacez12z12zztools_miscz00
																													(BgL_xz00_3,
																													BgL_arg2558z00_585);
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				else
																					{	/* Expand/object.scm 74 */
																						if (PAIRP(BgL_sz00_575))
																							{	/* Expand/object.scm 102 */
																								bool_t BgL_testz00_3129;

																								{	/* Expand/object.scm 102 */
																									obj_t BgL_auxz00_3130;

																									BgL_auxz00_3130 =
																										CAR(BgL_sz00_575);
																									BgL_testz00_3129 =
																										SYMBOLP(BgL_auxz00_3130);
																								}
																								if (BgL_testz00_3129)
																									{	/* Expand/object.scm 103 */
																										obj_t BgL_arg2594z00_614;

																										obj_t BgL_arg2595z00_615;

																										BgL_arg2594z00_614 =
																											CDR(BgL_sz00_575);
																										{	/* Expand/object.scm 103 */
																											obj_t BgL_arg2602z00_616;

																											{	/* Expand/object.scm 103 */
																												obj_t
																													BgL_arg2608z00_617;
																												obj_t
																													BgL_arg2615z00_618;
																												BgL_arg2608z00_617 =
																													CAR(BgL_sz00_575);
																												BgL_arg2615z00_618 =
																													CAR(BgL_sz00_575);
																												{	/* Expand/object.scm 103 */
																													obj_t
																														BgL_list2616z00_619;
																													{	/* Expand/object.scm 103 */
																														obj_t
																															BgL_arg2621z00_620;
																														BgL_arg2621z00_620 =
																															MAKE_PAIR
																															(BgL_arg2615z00_618,
																															BNIL);
																														BgL_list2616z00_619
																															=
																															MAKE_PAIR
																															(BgL_arg2608z00_617,
																															BgL_arg2621z00_620);
																													}
																													BgL_arg2602z00_616 =
																														BgL_list2616z00_619;
																												}
																											}
																											BgL_arg2595z00_615 =
																												MAKE_PAIR
																												(BgL_arg2602z00_616,
																												BgL_nslotsz00_576);
																										}
																										{
																											obj_t BgL_nslotsz00_3140;

																											obj_t BgL_sz00_3139;

																											BgL_sz00_3139 =
																												BgL_arg2594z00_614;
																											BgL_nslotsz00_3140 =
																												BgL_arg2595z00_615;
																											BgL_nslotsz00_576 =
																												BgL_nslotsz00_3140;
																											BgL_sz00_575 =
																												BgL_sz00_3139;
																											goto
																												BgL_zc3anonymousza32556ze3z83_577;
																										}
																									}
																								else
																									{	/* Expand/object.scm 104 */
																										bool_t BgL_testz00_3141;

																										{	/* Expand/object.scm 104 */
																											bool_t BgL_testz00_3142;

																											{	/* Expand/object.scm 104 */
																												obj_t BgL_auxz00_3143;

																												BgL_auxz00_3143 =
																													CAR(BgL_sz00_575);
																												BgL_testz00_3142 =
																													PAIRP
																													(BgL_auxz00_3143);
																											}
																											if (BgL_testz00_3142)
																												{	/* Expand/object.scm 105 */
																													bool_t
																														BgL_testz00_3146;
																													{	/* Expand/object.scm 105 */
																														obj_t
																															BgL_auxz00_3147;
																														BgL_auxz00_3147 =
																															CAR(CAR
																															(BgL_sz00_575));
																														BgL_testz00_3146 =
																															SYMBOLP
																															(BgL_auxz00_3147);
																													}
																													if (BgL_testz00_3146)
																														{	/* Expand/object.scm 106 */
																															bool_t
																																BgL_testz00_3151;
																															{	/* Expand/object.scm 106 */
																																obj_t
																																	BgL_auxz00_3152;
																																BgL_auxz00_3152
																																	=
																																	CDR(CAR
																																	(BgL_sz00_575));
																																BgL_testz00_3151
																																	=
																																	PAIRP
																																	(BgL_auxz00_3152);
																															}
																															if (BgL_testz00_3151)
																																{	/* Expand/object.scm 107 */
																																	bool_t
																																		BgL_testz00_3156;
																																	{	/* Expand/object.scm 107 */
																																		obj_t
																																			BgL_auxz00_3157;
																																		{	/* Expand/object.scm 107 */
																																			obj_t
																																				BgL_pairz00_2277;
																																			BgL_pairz00_2277
																																				=
																																				CAR
																																				(BgL_sz00_575);
																																			BgL_auxz00_3157
																																				=
																																				CAR(CDR
																																				(BgL_pairz00_2277));
																																		}
																																		BgL_testz00_3156
																																			=
																																			SYMBOLP
																																			(BgL_auxz00_3157);
																																	}
																																	if (BgL_testz00_3156)
																																		{	/* Expand/object.scm 108 */
																																			obj_t
																																				BgL_auxz00_3162;
																																			{	/* Expand/object.scm 108 */
																																				obj_t
																																					BgL_pairz00_2283;
																																				BgL_pairz00_2283
																																					=
																																					CAR
																																					(BgL_sz00_575);
																																				BgL_auxz00_3162
																																					=
																																					CDR
																																					(CDR
																																					(BgL_pairz00_2283));
																																			}
																																			BgL_testz00_3141
																																				=
																																				NULLP
																																				(BgL_auxz00_3162);
																																		}
																																	else
																																		{	/* Expand/object.scm 107 */
																																			BgL_testz00_3141
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Expand/object.scm 106 */
																																	BgL_testz00_3141
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																													else
																														{	/* Expand/object.scm 105 */
																															BgL_testz00_3141 =
																																((bool_t) 0);
																														}
																												}
																											else
																												{	/* Expand/object.scm 104 */
																													BgL_testz00_3141 =
																														((bool_t) 0);
																												}
																										}
																										if (BgL_testz00_3141)
																											{	/* Expand/object.scm 109 */
																												obj_t
																													BgL_arg2628z00_622;
																												obj_t
																													BgL_arg2629z00_623;
																												BgL_arg2628z00_622 =
																													CDR(BgL_sz00_575);
																												BgL_arg2629z00_623 =
																													MAKE_PAIR(CAR
																													(BgL_sz00_575),
																													BgL_nslotsz00_576);
																												{
																													obj_t
																														BgL_nslotsz00_3171;
																													obj_t BgL_sz00_3170;

																													BgL_sz00_3170 =
																														BgL_arg2628z00_622;
																													BgL_nslotsz00_3171 =
																														BgL_arg2629z00_623;
																													BgL_nslotsz00_576 =
																														BgL_nslotsz00_3171;
																													BgL_sz00_575 =
																														BgL_sz00_3170;
																													goto
																														BgL_zc3anonymousza32556ze3z83_577;
																												}
																											}
																										else
																											{	/* Expand/object.scm 112 */
																												obj_t
																													BgL_arg2642z00_625;
																												{	/* Expand/object.scm 112 */
																													obj_t
																														BgL_arg2649z00_627;
																													{	/* Expand/object.scm 115 */
																														obj_t
																															BgL_zc3anonymousza32652ze3z83_2899;
																														BgL_zc3anonymousza32652ze3z83_2899
																															=
																															make_fx_procedure
																															(BGl_zc3anonymousza32652ze3z83zzexpand_objectz00,
																															(int) (((long)
																																	0)),
																															(int) (((long)
																																	1)));
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32652ze3z83_2899,
																															(int) (((long)
																																	0)),
																															BgL_sz00_575);
																														BgL_arg2649z00_627 =
																															BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
																															(BgL_zc3anonymousza32652ze3z83_2899);
																													}
																													BgL_arg2642z00_625 =
																														string_append_3
																														(BGl_string3832z00zzexpand_objectz00,
																														BgL_arg2649z00_627,
																														BGl_string3833z00zzexpand_objectz00);
																												}
																												return
																													BGl_errorz00zz__errorz00
																													(BFALSE,
																													BgL_arg2642z00_625,
																													BgL_xz00_3);
																											}
																									}
																							}
																						else
																							{	/* Expand/object.scm 100 */
																								return
																									BGl_errorz00zz__errorz00
																									(BFALSE,
																									BGl_string3834z00zzexpand_objectz00,
																									BgL_xz00_3);
																							}
																					}
																			}
																		else
																			{	/* Expand/object.scm 68 */
																				return
																					BGl_errorz00zz__errorz00(BFALSE,
																					BGl_string3835z00zzexpand_objectz00,
																					BgL_xz00_3);
																			}
																	}
																}
															}
														}
													}
												else
													{	/* Expand/object.scm 63 */
													BgL_tagzd21400zd2_557:
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string3836z00zzexpand_objectz00, BgL_xz00_3);
													}
											}
										else
											{	/* Expand/object.scm 63 */
												goto BgL_tagzd21400zd2_557;
											}
									}
								else
									{	/* Expand/object.scm 63 */
										goto BgL_tagzd21400zd2_557;
									}
							}
						else
							{	/* Expand/object.scm 63 */
								goto BgL_tagzd21400zd2_557;
							}
					}
				else
					{	/* Expand/object.scm 63 */
						goto BgL_tagzd21400zd2_557;
					}
			}
		}
	}



/* _expand-with-access */
	obj_t BGl__expandzd2withzd2accessz00zzexpand_objectz00(obj_t BgL_envz00_2900,
		obj_t BgL_xz00_2901, obj_t BgL_ez00_2902)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 62 */
			return
				BGl_expandzd2withzd2accessz00zzexpand_objectz00(BgL_xz00_2901,
				BgL_ez00_2902);
		}
	}



/* <anonymous:2588> */
	obj_t BGl_zc3anonymousza32588ze3z83zzexpand_objectz00(obj_t BgL_envz00_2903)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 86 */
			{	/* Expand/object.scm 87 */
				obj_t BgL_ez00_2904;

				obj_t BgL_markz00_2905;

				obj_t BgL_auxz00_2906;

				obj_t BgL_classzd2idzd2_2907;

				obj_t BgL_directz00_2908;

				obj_t BgL_instancez00_2909;

				obj_t BgL_indexedz00_2910;

				obj_t BgL_bodyz00_2911;

				BgL_ez00_2904 = PROCEDURE_REF(BgL_envz00_2903, (int) (((long) 0)));
				BgL_markz00_2905 = PROCEDURE_REF(BgL_envz00_2903, (int) (((long) 1)));
				BgL_auxz00_2906 = PROCEDURE_REF(BgL_envz00_2903, (int) (((long) 2)));
				BgL_classzd2idzd2_2907 =
					PROCEDURE_REF(BgL_envz00_2903, (int) (((long) 3)));
				BgL_directz00_2908 = PROCEDURE_REF(BgL_envz00_2903, (int) (((long) 4)));
				BgL_instancez00_2909 =
					PROCEDURE_REF(BgL_envz00_2903, (int) (((long) 5)));
				BgL_indexedz00_2910 =
					PROCEDURE_REF(BgL_envz00_2903, (int) (((long) 6)));
				BgL_bodyz00_2911 = PROCEDURE_REF(BgL_envz00_2903, (int) (((long) 7)));
				{

					return
						BGl_makezd2withzd2accesszd2bodyzd2zzexpand_objectz00
						(BgL_auxz00_2906, BgL_instancez00_2909, BgL_classzd2idzd2_2907,
						BgL_indexedz00_2910, BgL_bodyz00_2911,
						BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00
						(BGl_withzd2accesszd2expanderz00zzexpand_objectz00(BgL_ez00_2904,
								BgL_markz00_2905, BgL_auxz00_2906, BgL_classzd2idzd2_2907,
								BgL_directz00_2908)));
				}
			}
		}
	}



/* <anonymous:2652> */
	obj_t BGl_zc3anonymousza32652ze3z83zzexpand_objectz00(obj_t BgL_envz00_2912)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 115 */
			{	/* Expand/object.scm 115 */
				obj_t BgL_sz00_2913;

				BgL_sz00_2913 = PROCEDURE_REF(BgL_envz00_2912, (int) (((long) 0)));
				{

					{	/* Expand/object.scm 115 */
						obj_t BgL_arg2655z00_631;

						obj_t BgL_arg2656z00_632;

						BgL_arg2655z00_631 = CAR(BgL_sz00_2913);
						{	/* Expand/object.scm 115 */
							obj_t BgL_res3791z00_2292;

							{	/* Expand/object.scm 115 */
								obj_t BgL_auxz00_3208;

								BgL_auxz00_3208 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3791z00_2292 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3208);
							}
							BgL_arg2656z00_632 = BgL_res3791z00_2292;
						}
						return bgl_display_obj(BgL_arg2655z00_631, BgL_arg2656z00_632);
					}
				}
			}
		}
	}



/* class-split-slots */
	obj_t BGl_classzd2splitzd2slotsz00zzexpand_objectz00(obj_t BgL_xz00_5,
		BgL_tclassz00_bglt BgL_classz00_6, obj_t BgL_slotsz00_7)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 127 */
			{	/* Expand/object.scm 128 */
				obj_t BgL_markz00_649;

				BgL_markz00_649 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 6)));
				{	/* Expand/object.scm 129 */
					obj_t BgL_g2455z00_650;

					BgL_g2455z00_650 =
						BGl_tclasszd2allzd2slotsz00zzobject_classz00(BgL_classz00_6);
					{
						obj_t BgL_l2453z00_652;

						BgL_l2453z00_652 = BgL_g2455z00_650;
					BgL_zc3anonymousza32672ze3z83_653:
						if (PAIRP(BgL_l2453z00_652))
							{	/* Expand/object.scm 132 */
								{	/* Expand/object.scm 130 */
									obj_t BgL_slotz00_655;

									BgL_slotz00_655 = CAR(BgL_l2453z00_652);
									{	/* Expand/object.scm 131 */
										obj_t BgL_arg2674z00_657;

										{
											BgL_slotz00_bglt BgL_auxz00_3218;

											BgL_auxz00_3218 = (BgL_slotz00_bglt) (BgL_slotz00_655);
											BgL_arg2674z00_657 =
												(((BgL_slotz00_bglt) CREF(BgL_auxz00_3218))->BgL_idz00);
										}
										BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg2674z00_657,
											BgL_markz00_649, BgL_slotz00_655);
									}
								}
								{
									obj_t BgL_l2453z00_3222;

									BgL_l2453z00_3222 = CDR(BgL_l2453z00_652);
									BgL_l2453z00_652 = BgL_l2453z00_3222;
									goto BgL_zc3anonymousza32672ze3z83_653;
								}
							}
						else
							{	/* Expand/object.scm 132 */
								((bool_t) 1);
							}
					}
				}
				{
					obj_t BgL_slotsz00_663;

					obj_t BgL_directz00_664;

					obj_t BgL_indexedz00_665;

					BgL_slotsz00_663 = BgL_slotsz00_7;
					BgL_directz00_664 = BNIL;
					BgL_indexedz00_665 = BNIL;
				BgL_zc3anonymousza32676ze3z83_666:
					if (NULLP(BgL_slotsz00_663))
						{	/* Expand/object.scm 136 */
							{	/* Expand/object.scm 137 */
								int BgL_auxz00_3226;

								BgL_auxz00_3226 = (int) (((long) 2));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_3226);
							}
							{	/* Expand/object.scm 137 */
								int BgL_auxz00_3229;

								BgL_auxz00_3229 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_3229, BgL_indexedz00_665);
							}
							return BgL_directz00_664;
						}
					else
						{	/* Expand/object.scm 138 */
							obj_t BgL_slotz00_670;

							{	/* Expand/object.scm 138 */
								obj_t BgL_auxz00_3232;

								{	/* Expand/object.scm 138 */
									obj_t BgL_pairz00_2302;

									BgL_pairz00_2302 = CAR(BgL_slotsz00_663);
									BgL_auxz00_3232 = CAR(CDR(BgL_pairz00_2302));
								}
								BgL_slotz00_670 =
									BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_3232,
									BgL_markz00_649);
							}
							if (BGl_iszd2azf3z21zz__objectz00(BgL_slotz00_670,
									BGl_slotz00zzobject_slotsz00))
								{	/* Expand/object.scm 146 */
									bool_t BgL_testz00_3239;

									{	/* Expand/object.scm 146 */
										BgL_slotz00_bglt BgL_obj2367z00_2307;

										BgL_obj2367z00_2307 = (BgL_slotz00_bglt) (BgL_slotz00_670);
										BgL_testz00_3239 =
											CBOOL(
											(((BgL_slotz00_bglt) CREF(BgL_obj2367z00_2307))->
												BgL_indexedz00));
									}
									if (BgL_testz00_3239)
										{	/* Expand/object.scm 147 */
											obj_t BgL_arg2680z00_673;

											obj_t BgL_arg2681z00_674;

											BgL_arg2680z00_673 = CDR(BgL_slotsz00_663);
											{	/* Expand/object.scm 149 */
												obj_t BgL_arg2682z00_675;

												{	/* Expand/object.scm 149 */
													obj_t BgL_arg2683z00_676;

													{	/* Expand/object.scm 149 */
														obj_t BgL_pairz00_2309;

														BgL_pairz00_2309 = BgL_slotsz00_663;
														BgL_arg2683z00_676 = CAR(CAR(BgL_pairz00_2309));
													}
													{	/* Expand/object.scm 149 */
														obj_t BgL_list2684z00_677;

														{	/* Expand/object.scm 149 */
															obj_t BgL_arg2685z00_678;

															BgL_arg2685z00_678 =
																MAKE_PAIR(BgL_slotz00_670, BNIL);
															BgL_list2684z00_677 =
																MAKE_PAIR(BgL_arg2683z00_676,
																BgL_arg2685z00_678);
														}
														BgL_arg2682z00_675 = BgL_list2684z00_677;
													}
												}
												BgL_arg2681z00_674 =
													MAKE_PAIR(BgL_arg2682z00_675, BgL_indexedz00_665);
											}
											{
												obj_t BgL_indexedz00_3250;

												obj_t BgL_slotsz00_3249;

												BgL_slotsz00_3249 = BgL_arg2680z00_673;
												BgL_indexedz00_3250 = BgL_arg2681z00_674;
												BgL_indexedz00_665 = BgL_indexedz00_3250;
												BgL_slotsz00_663 = BgL_slotsz00_3249;
												goto BgL_zc3anonymousza32676ze3z83_666;
											}
										}
									else
										{	/* Expand/object.scm 150 */
											obj_t BgL_arg2686z00_679;

											obj_t BgL_arg2687z00_680;

											BgL_arg2686z00_679 = CDR(BgL_slotsz00_663);
											BgL_arg2687z00_680 =
												MAKE_PAIR(CAR(BgL_slotsz00_663), BgL_directz00_664);
											{
												obj_t BgL_directz00_3255;

												obj_t BgL_slotsz00_3254;

												BgL_slotsz00_3254 = BgL_arg2686z00_679;
												BgL_directz00_3255 = BgL_arg2687z00_680;
												BgL_directz00_664 = BgL_directz00_3255;
												BgL_slotsz00_663 = BgL_slotsz00_3254;
												goto BgL_zc3anonymousza32676ze3z83_666;
											}
										}
								}
							else
								{	/* Expand/object.scm 141 */
									obj_t BgL_arg2689z00_682;

									{	/* Expand/object.scm 141 */
										obj_t BgL_arg2691z00_684;

										{	/* Expand/object.scm 143 */
											obj_t BgL_arg2693z00_686;

											{	/* Expand/object.scm 143 */
												obj_t BgL_pairz00_2317;

												BgL_pairz00_2317 = BgL_slotsz00_663;
												BgL_arg2693z00_686 = CAR(CAR(BgL_pairz00_2317));
											}
											{	/* Expand/object.scm 143 */
												obj_t BgL_res3793z00_2323;

												{	/* Expand/object.scm 143 */
													obj_t BgL_symbolz00_2321;

													BgL_symbolz00_2321 = BgL_arg2693z00_686;
													{	/* Expand/object.scm 143 */
														obj_t BgL_arg2063z00_2322;

														BgL_arg2063z00_2322 =
															SYMBOL_TO_STRING(BgL_symbolz00_2321);
														BgL_res3793z00_2323 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_2322);
													}
												}
												BgL_arg2691z00_684 = BgL_res3793z00_2323;
											}
										}
										BgL_arg2689z00_682 =
											string_append_3(BGl_string3837z00zzexpand_objectz00,
											BgL_arg2691z00_684, BGl_string3833z00zzexpand_objectz00);
									}
									return
										BGl_errorz00zz__errorz00(BFALSE, BgL_arg2689z00_682,
										BgL_xz00_5);
								}
						}
				}
			}
		}
	}



/* make-with-access-body */
	obj_t BGl_makezd2withzd2accesszd2bodyzd2zzexpand_objectz00(obj_t BgL_auxz00_8,
		obj_t BgL_instancez00_9, obj_t BgL_classzd2idzd2_10,
		obj_t BgL_indexedz00_11, obj_t BgL_bodyz00_12, obj_t BgL_ez00_13)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 157 */
			{	/* Expand/object.scm 196 */
				obj_t BgL_arg2696z00_691;

				obj_t BgL_arg2697z00_692;

				BgL_arg2696z00_691 = CNST_TABLE_REF(((long) 7));
				{	/* Expand/object.scm 196 */
					obj_t BgL_arg2698z00_693;

					obj_t BgL_arg2699z00_694;

					{	/* Expand/object.scm 196 */
						obj_t BgL_arg2703z00_698;

						{	/* Expand/object.scm 196 */
							obj_t BgL_arg2705z00_700;

							{	/* Expand/object.scm 196 */
								obj_t BgL_list2706z00_701;

								BgL_list2706z00_701 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2705z00_700 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_instancez00_9,
									BgL_list2706z00_701);
							}
							BgL_arg2703z00_698 = MAKE_PAIR(BgL_auxz00_8, BgL_arg2705z00_700);
						}
						BgL_arg2698z00_693 = MAKE_PAIR(BgL_arg2703z00_698, BNIL);
					}
					BgL_arg2699z00_694 =
						BGl_loopz00zzexpand_objectz00(BgL_bodyz00_12, BgL_ez00_13,
						BgL_auxz00_8, BgL_classzd2idzd2_10, BgL_indexedz00_11);
					{	/* Expand/object.scm 196 */
						obj_t BgL_list2701z00_696;

						{	/* Expand/object.scm 196 */
							obj_t BgL_arg2702z00_697;

							BgL_arg2702z00_697 = MAKE_PAIR(BNIL, BNIL);
							BgL_list2701z00_696 =
								MAKE_PAIR(BgL_arg2699z00_694, BgL_arg2702z00_697);
						}
						BgL_arg2697z00_692 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2698z00_693,
							BgL_list2701z00_696);
				}}
				return MAKE_PAIR(BgL_arg2696z00_691, BgL_arg2697z00_692);
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zzexpand_objectz00(obj_t BgL_bodyz00_2968,
		obj_t BgL_ez00_2967, obj_t BgL_auxz00_2966, obj_t BgL_classzd2idzd2_2965,
		obj_t BgL_indexedz00_704)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 159 */
			if (NULLP(BgL_indexedz00_704))
				{	/* Expand/object.scm 162 */
					obj_t BgL_arg2710z00_707;

					BgL_arg2710z00_707 =
						BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_2968);
					return
						PROCEDURE_ENTRY(BgL_ez00_2967) (BgL_ez00_2967, BgL_arg2710z00_707,
						BgL_ez00_2967, BEOA);
				}
			else
				{	/* Expand/object.scm 163 */
					bool_t BgL_testz00_3277;

					{	/* Expand/object.scm 163 */
						BgL_slotz00_bglt BgL_obj2356z00_2330;

						{	/* Expand/object.scm 163 */
							obj_t BgL_auxz00_3278;

							{	/* Expand/object.scm 163 */
								obj_t BgL_pairz00_2326;

								BgL_pairz00_2326 = CAR(BgL_indexedz00_704);
								BgL_auxz00_3278 = CAR(CDR(BgL_pairz00_2326));
							}
							BgL_obj2356z00_2330 = (BgL_slotz00_bglt) (BgL_auxz00_3278);
						}
						BgL_testz00_3277 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2356z00_2330))->
							BgL_readzd2onlyzf3z21);
					}
					if (BgL_testz00_3277)
						{	/* Expand/object.scm 164 */
							obj_t BgL_slotz00_709;

							{	/* Expand/object.scm 164 */
								obj_t BgL_pairz00_2332;

								BgL_pairz00_2332 = CAR(BgL_indexedz00_704);
								BgL_slotz00_709 = CAR(CDR(BgL_pairz00_2332));
							}
							{	/* Expand/object.scm 164 */
								obj_t BgL_nidz00_710;

								BgL_nidz00_710 = CAR(CAR(BgL_indexedz00_704));
								{	/* Expand/object.scm 165 */
									obj_t BgL_oidz00_711;

									{
										BgL_slotz00_bglt BgL_auxz00_3289;

										BgL_auxz00_3289 = (BgL_slotz00_bglt) (BgL_slotz00_709);
										BgL_oidz00_711 =
											(((BgL_slotz00_bglt) CREF(BgL_auxz00_3289))->BgL_idz00);
									}
									{	/* Expand/object.scm 166 */
										obj_t BgL_nsrefz00_712;

										{	/* Expand/object.scm 167 */
											obj_t BgL_arg2776z00_778;

											{	/* Expand/object.scm 167 */
												obj_t BgL_arg2777z00_779;

												obj_t BgL_arg2778z00_780;

												{	/* Expand/object.scm 167 */
													obj_t BgL_res3794z00_2341;

													{	/* Expand/object.scm 167 */
														obj_t BgL_symbolz00_2339;

														BgL_symbolz00_2339 = BgL_nidz00_710;
														{	/* Expand/object.scm 167 */
															obj_t BgL_arg2063z00_2340;

															BgL_arg2063z00_2340 =
																SYMBOL_TO_STRING(BgL_symbolz00_2339);
															BgL_res3794z00_2341 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_2340);
														}
													}
													BgL_arg2777z00_779 = BgL_res3794z00_2341;
												}
												{	/* Expand/object.scm 167 */
													obj_t BgL_res3795z00_2344;

													{	/* Expand/object.scm 167 */
														obj_t BgL_symbolz00_2342;

														BgL_symbolz00_2342 = CNST_TABLE_REF(((long) 8));
														{	/* Expand/object.scm 167 */
															obj_t BgL_arg2063z00_2343;

															BgL_arg2063z00_2343 =
																SYMBOL_TO_STRING(BgL_symbolz00_2342);
															BgL_res3795z00_2344 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_2343);
													}}
													BgL_arg2778z00_780 = BgL_res3795z00_2344;
												}
												{	/* Expand/object.scm 167 */
													obj_t BgL_list2779z00_781;

													{	/* Expand/object.scm 167 */
														obj_t BgL_arg2780z00_782;

														BgL_arg2780z00_782 =
															MAKE_PAIR(BgL_arg2778z00_780, BNIL);
														BgL_list2779z00_781 =
															MAKE_PAIR(BgL_arg2777z00_779, BgL_arg2780z00_782);
													}
													BgL_arg2776z00_778 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list2779z00_781);
											}}
											BgL_nsrefz00_712 =
												string_to_symbol(BSTRING_TO_STRING(BgL_arg2776z00_778));
										}
										{	/* Expand/object.scm 167 */
											obj_t BgL_osrefz00_713;

											{	/* Expand/object.scm 168 */
												obj_t BgL_arg2770z00_773;

												{	/* Expand/object.scm 168 */
													obj_t BgL_arg2771z00_774;

													obj_t BgL_arg2773z00_775;

													{	/* Expand/object.scm 168 */
														obj_t BgL_res3796z00_2348;

														{	/* Expand/object.scm 168 */
															obj_t BgL_arg2063z00_2347;

															BgL_arg2063z00_2347 =
																SYMBOL_TO_STRING(BgL_oidz00_711);
															BgL_res3796z00_2348 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_2347);
														}
														BgL_arg2771z00_774 = BgL_res3796z00_2348;
													}
													{	/* Expand/object.scm 168 */
														obj_t BgL_res3797z00_2351;

														{	/* Expand/object.scm 168 */
															obj_t BgL_symbolz00_2349;

															BgL_symbolz00_2349 = CNST_TABLE_REF(((long) 8));
															{	/* Expand/object.scm 168 */
																obj_t BgL_arg2063z00_2350;

																BgL_arg2063z00_2350 =
																	SYMBOL_TO_STRING(BgL_symbolz00_2349);
																BgL_res3797z00_2351 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2350);
														}}
														BgL_arg2773z00_775 = BgL_res3797z00_2351;
													}
													{	/* Expand/object.scm 168 */
														obj_t BgL_list2774z00_776;

														{	/* Expand/object.scm 168 */
															obj_t BgL_arg2775z00_777;

															BgL_arg2775z00_777 =
																MAKE_PAIR(BgL_arg2773z00_775, BNIL);
															BgL_list2774z00_776 =
																MAKE_PAIR(BgL_arg2771z00_774,
																BgL_arg2775z00_777);
														}
														BgL_arg2770z00_773 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2774z00_776);
												}}
												BgL_osrefz00_713 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2770z00_773));
											}
											{	/* Expand/object.scm 168 */
												obj_t BgL_fullzd2srefzd2_714;

												{	/* Expand/object.scm 169 */
													obj_t BgL_list2766z00_769;

													{	/* Expand/object.scm 169 */
														obj_t BgL_arg2767z00_770;

														{	/* Expand/object.scm 169 */
															obj_t BgL_arg2768z00_771;

															obj_t BgL_arg2769z00_772;

															BgL_arg2768z00_771 = CNST_TABLE_REF(((long) 9));
															BgL_arg2769z00_772 =
																MAKE_PAIR(BgL_osrefz00_713, BNIL);
															BgL_arg2767z00_770 =
																MAKE_PAIR(BgL_arg2768z00_771,
																BgL_arg2769z00_772);
														}
														BgL_list2766z00_769 =
															MAKE_PAIR(BgL_classzd2idzd2_2965,
															BgL_arg2767z00_770);
													}
													BgL_fullzd2srefzd2_714 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list2766z00_769);
												}
												{	/* Expand/object.scm 169 */
													obj_t BgL_nslenz00_715;

													{	/* Expand/object.scm 170 */
														obj_t BgL_arg2761z00_764;

														{	/* Expand/object.scm 170 */
															obj_t BgL_arg2762z00_765;

															obj_t BgL_arg2763z00_766;

															{	/* Expand/object.scm 170 */
																obj_t BgL_res3798z00_2355;

																{	/* Expand/object.scm 170 */
																	obj_t BgL_symbolz00_2353;

																	BgL_symbolz00_2353 = BgL_nidz00_710;
																	{	/* Expand/object.scm 170 */
																		obj_t BgL_arg2063z00_2354;

																		BgL_arg2063z00_2354 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2353);
																		BgL_res3798z00_2355 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2354);
																}}
																BgL_arg2762z00_765 = BgL_res3798z00_2355;
															}
															{	/* Expand/object.scm 170 */
																obj_t BgL_res3799z00_2358;

																{	/* Expand/object.scm 170 */
																	obj_t BgL_symbolz00_2356;

																	BgL_symbolz00_2356 =
																		CNST_TABLE_REF(((long) 10));
																	{	/* Expand/object.scm 170 */
																		obj_t BgL_arg2063z00_2357;

																		BgL_arg2063z00_2357 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2356);
																		BgL_res3799z00_2358 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2357);
																}}
																BgL_arg2763z00_766 = BgL_res3799z00_2358;
															}
															{	/* Expand/object.scm 170 */
																obj_t BgL_list2764z00_767;

																{	/* Expand/object.scm 170 */
																	obj_t BgL_arg2765z00_768;

																	BgL_arg2765z00_768 =
																		MAKE_PAIR(BgL_arg2763z00_766, BNIL);
																	BgL_list2764z00_767 =
																		MAKE_PAIR(BgL_arg2762z00_765,
																		BgL_arg2765z00_768);
																}
																BgL_arg2761z00_764 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2764z00_767);
														}}
														BgL_nslenz00_715 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2761z00_764));
													}
													{	/* Expand/object.scm 170 */
														obj_t BgL_oslenz00_716;

														{	/* Expand/object.scm 171 */
															obj_t BgL_arg2755z00_759;

															{	/* Expand/object.scm 171 */
																obj_t BgL_arg2756z00_760;

																obj_t BgL_arg2758z00_761;

																{	/* Expand/object.scm 171 */
																	obj_t BgL_res3800z00_2362;

																	{	/* Expand/object.scm 171 */
																		obj_t BgL_arg2063z00_2361;

																		BgL_arg2063z00_2361 =
																			SYMBOL_TO_STRING(BgL_oidz00_711);
																		BgL_res3800z00_2362 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2361);
																	}
																	BgL_arg2756z00_760 = BgL_res3800z00_2362;
																}
																{	/* Expand/object.scm 171 */
																	obj_t BgL_res3801z00_2365;

																	{	/* Expand/object.scm 171 */
																		obj_t BgL_symbolz00_2363;

																		BgL_symbolz00_2363 =
																			CNST_TABLE_REF(((long) 10));
																		{	/* Expand/object.scm 171 */
																			obj_t BgL_arg2063z00_2364;

																			BgL_arg2063z00_2364 =
																				SYMBOL_TO_STRING(BgL_symbolz00_2363);
																			BgL_res3801z00_2365 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_2364);
																	}}
																	BgL_arg2758z00_761 = BgL_res3801z00_2365;
																}
																{	/* Expand/object.scm 171 */
																	obj_t BgL_list2759z00_762;

																	{	/* Expand/object.scm 171 */
																		obj_t BgL_arg2760z00_763;

																		BgL_arg2760z00_763 =
																			MAKE_PAIR(BgL_arg2758z00_761, BNIL);
																		BgL_list2759z00_762 =
																			MAKE_PAIR(BgL_arg2756z00_760,
																			BgL_arg2760z00_763);
																	}
																	BgL_arg2755z00_759 =
																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																		(BgL_list2759z00_762);
															}}
															BgL_oslenz00_716 =
																string_to_symbol(BSTRING_TO_STRING
																(BgL_arg2755z00_759));
														}
														{	/* Expand/object.scm 171 */
															obj_t BgL_fullzd2slenzd2_717;

															{	/* Expand/object.scm 172 */
																obj_t BgL_list2751z00_755;

																{	/* Expand/object.scm 172 */
																	obj_t BgL_arg2752z00_756;

																	{	/* Expand/object.scm 172 */
																		obj_t BgL_arg2753z00_757;

																		obj_t BgL_arg2754z00_758;

																		BgL_arg2753z00_757 =
																			CNST_TABLE_REF(((long) 9));
																		BgL_arg2754z00_758 =
																			MAKE_PAIR(BgL_oslenz00_716, BNIL);
																		BgL_arg2752z00_756 =
																			MAKE_PAIR(BgL_arg2753z00_757,
																			BgL_arg2754z00_758);
																	}
																	BgL_list2751z00_755 =
																		MAKE_PAIR(BgL_classzd2idzd2_2965,
																		BgL_arg2752z00_756);
																}
																BgL_fullzd2slenzd2_717 =
																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																	(BgL_list2751z00_755);
															}
															{	/* Expand/object.scm 172 */
																obj_t BgL_iz00_718;

																BgL_iz00_718 =
																	BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																	(BGl_gensymz00zz__r4_symbols_6_4z00
																	(CNST_TABLE_REF(((long) 11))));
																{	/* Expand/object.scm 173 */

																	{	/* Expand/object.scm 174 */
																		obj_t BgL_arg2712z00_719;

																		obj_t BgL_arg2713z00_720;

																		BgL_arg2712z00_719 =
																			CNST_TABLE_REF(((long) 7));
																		{	/* Expand/object.scm 174 */
																			obj_t BgL_arg2714z00_721;

																			obj_t BgL_arg2716z00_722;

																			{	/* Expand/object.scm 174 */
																				obj_t BgL_arg2720z00_726;

																				{	/* Expand/object.scm 174 */
																					obj_t BgL_arg2722z00_728;

																					{	/* Expand/object.scm 174 */
																						obj_t BgL_arg2724z00_729;

																						{	/* Expand/object.scm 174 */
																							obj_t BgL_arg2727z00_732;

																							{	/* Expand/object.scm 174 */
																								obj_t BgL_arg2728z00_733;

																								{	/* Expand/object.scm 174 */
																									obj_t BgL_list2729z00_734;

																									BgL_list2729z00_734 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2728z00_733 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_auxz00_2966,
																										BgL_list2729z00_734);
																								}
																								BgL_arg2727z00_732 =
																									MAKE_PAIR
																									(BgL_fullzd2slenzd2_717,
																									BgL_arg2728z00_733);
																							}
																							BgL_arg2724z00_729 =
																								PROCEDURE_ENTRY(BgL_ez00_2967)
																								(BgL_ez00_2967,
																								BgL_arg2727z00_732,
																								BgL_ez00_2967, BEOA);
																						}
																						{	/* Expand/object.scm 174 */
																							obj_t BgL_list2726z00_731;

																							BgL_list2726z00_731 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2722z00_728 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2724z00_729,
																								BgL_list2726z00_731);
																					}}
																					BgL_arg2720z00_726 =
																						MAKE_PAIR(BgL_nslenz00_715,
																						BgL_arg2722z00_728);
																				}
																				BgL_arg2714z00_721 =
																					MAKE_PAIR(BgL_arg2720z00_726, BNIL);
																			}
																			{	/* Expand/object.scm 175 */
																				obj_t BgL_arg2730z00_735;

																				obj_t BgL_arg2731z00_736;

																				BgL_arg2730z00_735 =
																					CNST_TABLE_REF(((long) 12));
																				{	/* Expand/object.scm 175 */
																					obj_t BgL_arg2732z00_737;

																					obj_t BgL_arg2733z00_738;

																					{	/* Expand/object.scm 175 */
																						obj_t BgL_arg2737z00_742;

																						{	/* Expand/object.scm 175 */
																							obj_t BgL_arg2739z00_744;

																							{	/* Expand/object.scm 175 */
																								obj_t BgL_arg2740z00_745;

																								obj_t BgL_arg2741z00_746;

																								BgL_arg2740z00_745 =
																									MAKE_PAIR(BgL_iz00_718, BNIL);
																								{	/* Expand/object.scm 175 */
																									obj_t BgL_arg2746z00_750;

																									{	/* Expand/object.scm 175 */
																										obj_t BgL_list2747z00_751;

																										{	/* Expand/object.scm 175 */
																											obj_t BgL_arg2748z00_752;

																											BgL_arg2748z00_752 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2747z00_751 =
																												MAKE_PAIR(BgL_iz00_718,
																												BgL_arg2748z00_752);
																										}
																										BgL_arg2746z00_750 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_auxz00_2966,
																											BgL_list2747z00_751);
																									}
																									BgL_arg2741z00_746 =
																										MAKE_PAIR
																										(BgL_fullzd2srefzd2_714,
																										BgL_arg2746z00_750);
																								}
																								{	/* Expand/object.scm 175 */
																									obj_t BgL_list2743z00_748;

																									{	/* Expand/object.scm 175 */
																										obj_t BgL_arg2745z00_749;

																										BgL_arg2745z00_749 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2743z00_748 =
																											MAKE_PAIR
																											(BgL_arg2741z00_746,
																											BgL_arg2745z00_749);
																									}
																									BgL_arg2739z00_744 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2740z00_745,
																										BgL_list2743z00_748);
																							}}
																							BgL_arg2737z00_742 =
																								MAKE_PAIR(BgL_nsrefz00_712,
																								BgL_arg2739z00_744);
																						}
																						BgL_arg2732z00_737 =
																							MAKE_PAIR(BgL_arg2737z00_742,
																							BNIL);
																					}
																					BgL_arg2733z00_738 =
																						BGl_loopz00zzexpand_objectz00
																						(BgL_bodyz00_2968, BgL_ez00_2967,
																						BgL_auxz00_2966,
																						BgL_classzd2idzd2_2965,
																						CDR(BgL_indexedz00_704));
																					{	/* Expand/object.scm 175 */
																						obj_t BgL_list2735z00_740;

																						{	/* Expand/object.scm 175 */
																							obj_t BgL_arg2736z00_741;

																							BgL_arg2736z00_741 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2735z00_740 =
																								MAKE_PAIR(BgL_arg2733z00_738,
																								BgL_arg2736z00_741);
																						}
																						BgL_arg2731z00_736 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2732z00_737,
																							BgL_list2735z00_740);
																				}}
																				BgL_arg2716z00_722 =
																					MAKE_PAIR(BgL_arg2730z00_735,
																					BgL_arg2731z00_736);
																			}
																			{	/* Expand/object.scm 174 */
																				obj_t BgL_list2718z00_724;

																				{	/* Expand/object.scm 174 */
																					obj_t BgL_arg2719z00_725;

																					BgL_arg2719z00_725 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2718z00_724 =
																						MAKE_PAIR(BgL_arg2716z00_722,
																						BgL_arg2719z00_725);
																				}
																				BgL_arg2713z00_720 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2714z00_721,
																					BgL_list2718z00_724);
																		}}
																		return
																			MAKE_PAIR(BgL_arg2712z00_719,
																			BgL_arg2713z00_720);
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
						{	/* Expand/object.scm 178 */
							obj_t BgL_slotz00_785;

							{	/* Expand/object.scm 178 */
								obj_t BgL_pairz00_2369;

								BgL_pairz00_2369 = CAR(BgL_indexedz00_704);
								BgL_slotz00_785 = CAR(CDR(BgL_pairz00_2369));
							}
							{	/* Expand/object.scm 178 */
								obj_t BgL_nidz00_786;

								BgL_nidz00_786 = CAR(CAR(BgL_indexedz00_704));
								{	/* Expand/object.scm 179 */
									obj_t BgL_oidz00_787;

									{
										BgL_slotz00_bglt BgL_auxz00_3381;

										BgL_auxz00_3381 = (BgL_slotz00_bglt) (BgL_slotz00_785);
										BgL_oidz00_787 =
											(((BgL_slotz00_bglt) CREF(BgL_auxz00_3381))->BgL_idz00);
									}
									{	/* Expand/object.scm 180 */
										obj_t BgL_nsrefz00_788;

										{	/* Expand/object.scm 181 */
											obj_t BgL_arg2878z00_888;

											{	/* Expand/object.scm 181 */
												obj_t BgL_arg2879z00_889;

												obj_t BgL_arg2880z00_890;

												{	/* Expand/object.scm 181 */
													obj_t BgL_res3802z00_2378;

													{	/* Expand/object.scm 181 */
														obj_t BgL_symbolz00_2376;

														BgL_symbolz00_2376 = BgL_nidz00_786;
														{	/* Expand/object.scm 181 */
															obj_t BgL_arg2063z00_2377;

															BgL_arg2063z00_2377 =
																SYMBOL_TO_STRING(BgL_symbolz00_2376);
															BgL_res3802z00_2378 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_2377);
														}
													}
													BgL_arg2879z00_889 = BgL_res3802z00_2378;
												}
												{	/* Expand/object.scm 181 */
													obj_t BgL_res3803z00_2381;

													{	/* Expand/object.scm 181 */
														obj_t BgL_symbolz00_2379;

														BgL_symbolz00_2379 = CNST_TABLE_REF(((long) 8));
														{	/* Expand/object.scm 181 */
															obj_t BgL_arg2063z00_2380;

															BgL_arg2063z00_2380 =
																SYMBOL_TO_STRING(BgL_symbolz00_2379);
															BgL_res3803z00_2381 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_2380);
													}}
													BgL_arg2880z00_890 = BgL_res3803z00_2381;
												}
												{	/* Expand/object.scm 181 */
													obj_t BgL_list2881z00_891;

													{	/* Expand/object.scm 181 */
														obj_t BgL_arg2882z00_892;

														BgL_arg2882z00_892 =
															MAKE_PAIR(BgL_arg2880z00_890, BNIL);
														BgL_list2881z00_891 =
															MAKE_PAIR(BgL_arg2879z00_889, BgL_arg2882z00_892);
													}
													BgL_arg2878z00_888 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list2881z00_891);
											}}
											BgL_nsrefz00_788 =
												string_to_symbol(BSTRING_TO_STRING(BgL_arg2878z00_888));
										}
										{	/* Expand/object.scm 181 */
											obj_t BgL_osrefz00_789;

											{	/* Expand/object.scm 182 */
												obj_t BgL_arg2873z00_883;

												{	/* Expand/object.scm 182 */
													obj_t BgL_arg2874z00_884;

													obj_t BgL_arg2875z00_885;

													{	/* Expand/object.scm 182 */
														obj_t BgL_res3804z00_2385;

														{	/* Expand/object.scm 182 */
															obj_t BgL_arg2063z00_2384;

															BgL_arg2063z00_2384 =
																SYMBOL_TO_STRING(BgL_oidz00_787);
															BgL_res3804z00_2385 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_2384);
														}
														BgL_arg2874z00_884 = BgL_res3804z00_2385;
													}
													{	/* Expand/object.scm 182 */
														obj_t BgL_res3805z00_2388;

														{	/* Expand/object.scm 182 */
															obj_t BgL_symbolz00_2386;

															BgL_symbolz00_2386 = CNST_TABLE_REF(((long) 8));
															{	/* Expand/object.scm 182 */
																obj_t BgL_arg2063z00_2387;

																BgL_arg2063z00_2387 =
																	SYMBOL_TO_STRING(BgL_symbolz00_2386);
																BgL_res3805z00_2388 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2387);
														}}
														BgL_arg2875z00_885 = BgL_res3805z00_2388;
													}
													{	/* Expand/object.scm 182 */
														obj_t BgL_list2876z00_886;

														{	/* Expand/object.scm 182 */
															obj_t BgL_arg2877z00_887;

															BgL_arg2877z00_887 =
																MAKE_PAIR(BgL_arg2875z00_885, BNIL);
															BgL_list2876z00_886 =
																MAKE_PAIR(BgL_arg2874z00_884,
																BgL_arg2877z00_887);
														}
														BgL_arg2873z00_883 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2876z00_886);
												}}
												BgL_osrefz00_789 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2873z00_883));
											}
											{	/* Expand/object.scm 182 */
												obj_t BgL_fullzd2srefzd2_790;

												{	/* Expand/object.scm 183 */
													obj_t BgL_list2869z00_879;

													{	/* Expand/object.scm 183 */
														obj_t BgL_arg2870z00_880;

														{	/* Expand/object.scm 183 */
															obj_t BgL_arg2871z00_881;

															obj_t BgL_arg2872z00_882;

															BgL_arg2871z00_881 = CNST_TABLE_REF(((long) 9));
															BgL_arg2872z00_882 =
																MAKE_PAIR(BgL_osrefz00_789, BNIL);
															BgL_arg2870z00_880 =
																MAKE_PAIR(BgL_arg2871z00_881,
																BgL_arg2872z00_882);
														}
														BgL_list2869z00_879 =
															MAKE_PAIR(BgL_classzd2idzd2_2965,
															BgL_arg2870z00_880);
													}
													BgL_fullzd2srefzd2_790 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list2869z00_879);
												}
												{	/* Expand/object.scm 183 */
													obj_t BgL_nssetz00_791;

													{	/* Expand/object.scm 184 */
														obj_t BgL_arg2864z00_874;

														{	/* Expand/object.scm 184 */
															obj_t BgL_arg2865z00_875;

															obj_t BgL_arg2866z00_876;

															{	/* Expand/object.scm 184 */
																obj_t BgL_res3806z00_2392;

																{	/* Expand/object.scm 184 */
																	obj_t BgL_symbolz00_2390;

																	BgL_symbolz00_2390 = BgL_nidz00_786;
																	{	/* Expand/object.scm 184 */
																		obj_t BgL_arg2063z00_2391;

																		BgL_arg2063z00_2391 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2390);
																		BgL_res3806z00_2392 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2391);
																}}
																BgL_arg2865z00_875 = BgL_res3806z00_2392;
															}
															{	/* Expand/object.scm 184 */
																obj_t BgL_res3807z00_2395;

																{	/* Expand/object.scm 184 */
																	obj_t BgL_symbolz00_2393;

																	BgL_symbolz00_2393 =
																		CNST_TABLE_REF(((long) 13));
																	{	/* Expand/object.scm 184 */
																		obj_t BgL_arg2063z00_2394;

																		BgL_arg2063z00_2394 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2393);
																		BgL_res3807z00_2395 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2394);
																}}
																BgL_arg2866z00_876 = BgL_res3807z00_2395;
															}
															{	/* Expand/object.scm 184 */
																obj_t BgL_list2867z00_877;

																{	/* Expand/object.scm 184 */
																	obj_t BgL_arg2868z00_878;

																	BgL_arg2868z00_878 =
																		MAKE_PAIR(BgL_arg2866z00_876, BNIL);
																	BgL_list2867z00_877 =
																		MAKE_PAIR(BgL_arg2865z00_875,
																		BgL_arg2868z00_878);
																}
																BgL_arg2864z00_874 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2867z00_877);
														}}
														BgL_nssetz00_791 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2864z00_874));
													}
													{	/* Expand/object.scm 184 */
														obj_t BgL_ossetz00_792;

														{	/* Expand/object.scm 185 */
															obj_t BgL_arg2858z00_869;

															{	/* Expand/object.scm 185 */
																obj_t BgL_arg2859z00_870;

																obj_t BgL_arg2861z00_871;

																{	/* Expand/object.scm 185 */
																	obj_t BgL_res3808z00_2399;

																	{	/* Expand/object.scm 185 */
																		obj_t BgL_arg2063z00_2398;

																		BgL_arg2063z00_2398 =
																			SYMBOL_TO_STRING(BgL_oidz00_787);
																		BgL_res3808z00_2399 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2398);
																	}
																	BgL_arg2859z00_870 = BgL_res3808z00_2399;
																}
																{	/* Expand/object.scm 185 */
																	obj_t BgL_res3809z00_2402;

																	{	/* Expand/object.scm 185 */
																		obj_t BgL_symbolz00_2400;

																		BgL_symbolz00_2400 =
																			CNST_TABLE_REF(((long) 13));
																		{	/* Expand/object.scm 185 */
																			obj_t BgL_arg2063z00_2401;

																			BgL_arg2063z00_2401 =
																				SYMBOL_TO_STRING(BgL_symbolz00_2400);
																			BgL_res3809z00_2402 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_2401);
																	}}
																	BgL_arg2861z00_871 = BgL_res3809z00_2402;
																}
																{	/* Expand/object.scm 185 */
																	obj_t BgL_list2862z00_872;

																	{	/* Expand/object.scm 185 */
																		obj_t BgL_arg2863z00_873;

																		BgL_arg2863z00_873 =
																			MAKE_PAIR(BgL_arg2861z00_871, BNIL);
																		BgL_list2862z00_872 =
																			MAKE_PAIR(BgL_arg2859z00_870,
																			BgL_arg2863z00_873);
																	}
																	BgL_arg2858z00_869 =
																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																		(BgL_list2862z00_872);
															}}
															BgL_ossetz00_792 =
																string_to_symbol(BSTRING_TO_STRING
																(BgL_arg2858z00_869));
														}
														{	/* Expand/object.scm 185 */
															obj_t BgL_fullzd2ssetzd2_793;

															{	/* Expand/object.scm 186 */
																obj_t BgL_list2853z00_865;

																{	/* Expand/object.scm 186 */
																	obj_t BgL_arg2854z00_866;

																	{	/* Expand/object.scm 186 */
																		obj_t BgL_arg2856z00_867;

																		obj_t BgL_arg2857z00_868;

																		BgL_arg2856z00_867 =
																			CNST_TABLE_REF(((long) 9));
																		BgL_arg2857z00_868 =
																			MAKE_PAIR(BgL_ossetz00_792, BNIL);
																		BgL_arg2854z00_866 =
																			MAKE_PAIR(BgL_arg2856z00_867,
																			BgL_arg2857z00_868);
																	}
																	BgL_list2853z00_865 =
																		MAKE_PAIR(BgL_classzd2idzd2_2965,
																		BgL_arg2854z00_866);
																}
																BgL_fullzd2ssetzd2_793 =
																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																	(BgL_list2853z00_865);
															}
															{	/* Expand/object.scm 186 */
																obj_t BgL_nslenz00_794;

																{	/* Expand/object.scm 187 */
																	obj_t BgL_arg2848z00_860;

																	{	/* Expand/object.scm 187 */
																		obj_t BgL_arg2849z00_861;

																		obj_t BgL_arg2850z00_862;

																		{	/* Expand/object.scm 187 */
																			obj_t BgL_res3810z00_2406;

																			{	/* Expand/object.scm 187 */
																				obj_t BgL_symbolz00_2404;

																				BgL_symbolz00_2404 = BgL_nidz00_786;
																				{	/* Expand/object.scm 187 */
																					obj_t BgL_arg2063z00_2405;

																					BgL_arg2063z00_2405 =
																						SYMBOL_TO_STRING
																						(BgL_symbolz00_2404);
																					BgL_res3810z00_2406 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_2405);
																			}}
																			BgL_arg2849z00_861 = BgL_res3810z00_2406;
																		}
																		{	/* Expand/object.scm 187 */
																			obj_t BgL_res3811z00_2409;

																			{	/* Expand/object.scm 187 */
																				obj_t BgL_symbolz00_2407;

																				BgL_symbolz00_2407 =
																					CNST_TABLE_REF(((long) 10));
																				{	/* Expand/object.scm 187 */
																					obj_t BgL_arg2063z00_2408;

																					BgL_arg2063z00_2408 =
																						SYMBOL_TO_STRING
																						(BgL_symbolz00_2407);
																					BgL_res3811z00_2409 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_2408);
																			}}
																			BgL_arg2850z00_862 = BgL_res3811z00_2409;
																		}
																		{	/* Expand/object.scm 187 */
																			obj_t BgL_list2851z00_863;

																			{	/* Expand/object.scm 187 */
																				obj_t BgL_arg2852z00_864;

																				BgL_arg2852z00_864 =
																					MAKE_PAIR(BgL_arg2850z00_862, BNIL);
																				BgL_list2851z00_863 =
																					MAKE_PAIR(BgL_arg2849z00_861,
																					BgL_arg2852z00_864);
																			}
																			BgL_arg2848z00_860 =
																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																				(BgL_list2851z00_863);
																	}}
																	BgL_nslenz00_794 =
																		string_to_symbol(BSTRING_TO_STRING
																		(BgL_arg2848z00_860));
																}
																{	/* Expand/object.scm 187 */
																	obj_t BgL_oslenz00_795;

																	{	/* Expand/object.scm 188 */
																		obj_t BgL_arg2843z00_855;

																		{	/* Expand/object.scm 188 */
																			obj_t BgL_arg2844z00_856;

																			obj_t BgL_arg2845z00_857;

																			{	/* Expand/object.scm 188 */
																				obj_t BgL_res3812z00_2413;

																				{	/* Expand/object.scm 188 */
																					obj_t BgL_arg2063z00_2412;

																					BgL_arg2063z00_2412 =
																						SYMBOL_TO_STRING(BgL_oidz00_787);
																					BgL_res3812z00_2413 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_2412);
																				}
																				BgL_arg2844z00_856 =
																					BgL_res3812z00_2413;
																			}
																			{	/* Expand/object.scm 188 */
																				obj_t BgL_res3813z00_2416;

																				{	/* Expand/object.scm 188 */
																					obj_t BgL_symbolz00_2414;

																					BgL_symbolz00_2414 =
																						CNST_TABLE_REF(((long) 10));
																					{	/* Expand/object.scm 188 */
																						obj_t BgL_arg2063z00_2415;

																						BgL_arg2063z00_2415 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_2414);
																						BgL_res3813z00_2416 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg2063z00_2415);
																				}}
																				BgL_arg2845z00_857 =
																					BgL_res3813z00_2416;
																			}
																			{	/* Expand/object.scm 188 */
																				obj_t BgL_list2846z00_858;

																				{	/* Expand/object.scm 188 */
																					obj_t BgL_arg2847z00_859;

																					BgL_arg2847z00_859 =
																						MAKE_PAIR(BgL_arg2845z00_857, BNIL);
																					BgL_list2846z00_858 =
																						MAKE_PAIR(BgL_arg2844z00_856,
																						BgL_arg2847z00_859);
																				}
																				BgL_arg2843z00_855 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2846z00_858);
																		}}
																		BgL_oslenz00_795 =
																			string_to_symbol(BSTRING_TO_STRING
																			(BgL_arg2843z00_855));
																	}
																	{	/* Expand/object.scm 188 */
																		obj_t BgL_fullzd2slenzd2_796;

																		{	/* Expand/object.scm 189 */
																			obj_t BgL_list2838z00_851;

																			{	/* Expand/object.scm 189 */
																				obj_t BgL_arg2839z00_852;

																				{	/* Expand/object.scm 189 */
																					obj_t BgL_arg2841z00_853;

																					obj_t BgL_arg2842z00_854;

																					BgL_arg2841z00_853 =
																						CNST_TABLE_REF(((long) 9));
																					BgL_arg2842z00_854 =
																						MAKE_PAIR(BgL_oslenz00_795, BNIL);
																					BgL_arg2839z00_852 =
																						MAKE_PAIR(BgL_arg2841z00_853,
																						BgL_arg2842z00_854);
																				}
																				BgL_list2838z00_851 =
																					MAKE_PAIR(BgL_classzd2idzd2_2965,
																					BgL_arg2839z00_852);
																			}
																			BgL_fullzd2slenzd2_796 =
																				BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																				(BgL_list2838z00_851);
																		}
																		{	/* Expand/object.scm 189 */
																			obj_t BgL_iz00_797;

																			BgL_iz00_797 =
																				BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																				(BGl_gensymz00zz__r4_symbols_6_4z00
																				(CNST_TABLE_REF(((long) 11))));
																			{	/* Expand/object.scm 190 */
																				obj_t BgL_vz00_798;

																				BgL_vz00_798 =
																					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																					(BGl_gensymz00zz__r4_symbols_6_4z00
																					(CNST_TABLE_REF(((long) 14))));
																				{	/* Expand/object.scm 191 */

																					{	/* Expand/object.scm 192 */
																						obj_t BgL_arg2784z00_799;

																						obj_t BgL_arg2785z00_800;

																						BgL_arg2784z00_799 =
																							CNST_TABLE_REF(((long) 7));
																						{	/* Expand/object.scm 192 */
																							obj_t BgL_arg2786z00_801;

																							obj_t BgL_arg2787z00_802;

																							{	/* Expand/object.scm 192 */
																								obj_t BgL_arg2792z00_806;

																								{	/* Expand/object.scm 192 */
																									obj_t BgL_arg2794z00_808;

																									{	/* Expand/object.scm 192 */
																										obj_t BgL_arg2795z00_809;

																										{	/* Expand/object.scm 192 */
																											obj_t BgL_arg2798z00_812;

																											{	/* Expand/object.scm 192 */
																												obj_t
																													BgL_arg2799z00_813;
																												{	/* Expand/object.scm 192 */
																													obj_t
																														BgL_list2800z00_814;
																													BgL_list2800z00_814 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2799z00_813 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_auxz00_2966,
																														BgL_list2800z00_814);
																												}
																												BgL_arg2798z00_812 =
																													MAKE_PAIR
																													(BgL_fullzd2slenzd2_796,
																													BgL_arg2799z00_813);
																											}
																											BgL_arg2795z00_809 =
																												PROCEDURE_ENTRY
																												(BgL_ez00_2967)
																												(BgL_ez00_2967,
																												BgL_arg2798z00_812,
																												BgL_ez00_2967, BEOA);
																										}
																										{	/* Expand/object.scm 192 */
																											obj_t BgL_list2797z00_811;

																											BgL_list2797z00_811 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2794z00_808 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2795z00_809,
																												BgL_list2797z00_811);
																									}}
																									BgL_arg2792z00_806 =
																										MAKE_PAIR(BgL_nslenz00_794,
																										BgL_arg2794z00_808);
																								}
																								BgL_arg2786z00_801 =
																									MAKE_PAIR(BgL_arg2792z00_806,
																									BNIL);
																							}
																							{	/* Expand/object.scm 193 */
																								obj_t BgL_arg2801z00_815;

																								obj_t BgL_arg2802z00_816;

																								BgL_arg2801z00_815 =
																									CNST_TABLE_REF(((long) 12));
																								{	/* Expand/object.scm 193 */
																									obj_t BgL_arg2803z00_817;

																									obj_t BgL_arg2804z00_818;

																									{	/* Expand/object.scm 193 */
																										obj_t BgL_arg2808z00_822;

																										obj_t BgL_arg2809z00_823;

																										{	/* Expand/object.scm 193 */
																											obj_t BgL_arg2810z00_824;

																											{	/* Expand/object.scm 193 */
																												obj_t
																													BgL_arg2811z00_825;
																												obj_t
																													BgL_arg2812z00_826;
																												BgL_arg2811z00_825 =
																													MAKE_PAIR
																													(BgL_iz00_797, BNIL);
																												{	/* Expand/object.scm 193 */
																													obj_t
																														BgL_arg2816z00_830;
																													{	/* Expand/object.scm 193 */
																														obj_t
																															BgL_list2817z00_831;
																														{	/* Expand/object.scm 193 */
																															obj_t
																																BgL_arg2818z00_832;
																															BgL_arg2818z00_832
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2817z00_831
																																=
																																MAKE_PAIR
																																(BgL_iz00_797,
																																BgL_arg2818z00_832);
																														}
																														BgL_arg2816z00_830 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_auxz00_2966,
																															BgL_list2817z00_831);
																													}
																													BgL_arg2812z00_826 =
																														MAKE_PAIR
																														(BgL_fullzd2srefzd2_790,
																														BgL_arg2816z00_830);
																												}
																												{	/* Expand/object.scm 193 */
																													obj_t
																														BgL_list2814z00_828;
																													{	/* Expand/object.scm 193 */
																														obj_t
																															BgL_arg2815z00_829;
																														BgL_arg2815z00_829 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2814z00_828
																															=
																															MAKE_PAIR
																															(BgL_arg2812z00_826,
																															BgL_arg2815z00_829);
																													}
																													BgL_arg2810z00_824 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2811z00_825,
																														BgL_list2814z00_828);
																											}}
																											BgL_arg2808z00_822 =
																												MAKE_PAIR
																												(BgL_nsrefz00_788,
																												BgL_arg2810z00_824);
																										}
																										{	/* Expand/object.scm 194 */
																											obj_t BgL_arg2819z00_833;

																											{	/* Expand/object.scm 194 */
																												obj_t
																													BgL_arg2822z00_836;
																												{	/* Expand/object.scm 194 */
																													obj_t
																														BgL_arg2823z00_837;
																													obj_t
																														BgL_arg2825z00_838;
																													{	/* Expand/object.scm 194 */
																														obj_t
																															BgL_arg2829z00_842;
																														{	/* Expand/object.scm 194 */
																															obj_t
																																BgL_list2830z00_843;
																															BgL_list2830z00_843
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2829z00_842
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_vz00_798,
																																BgL_list2830z00_843);
																														}
																														BgL_arg2823z00_837 =
																															MAKE_PAIR
																															(BgL_iz00_797,
																															BgL_arg2829z00_842);
																													}
																													{	/* Expand/object.scm 194 */
																														obj_t
																															BgL_arg2831z00_844;
																														{	/* Expand/object.scm 194 */
																															obj_t
																																BgL_list2832z00_845;
																															{	/* Expand/object.scm 194 */
																																obj_t
																																	BgL_arg2833z00_846;
																																{	/* Expand/object.scm 194 */
																																	obj_t
																																		BgL_arg2834z00_847;
																																	BgL_arg2834z00_847
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2833z00_846
																																		=
																																		MAKE_PAIR
																																		(BgL_vz00_798,
																																		BgL_arg2834z00_847);
																																}
																																BgL_list2832z00_845
																																	=
																																	MAKE_PAIR
																																	(BgL_iz00_797,
																																	BgL_arg2833z00_846);
																															}
																															BgL_arg2831z00_844
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_auxz00_2966,
																																BgL_list2832z00_845);
																														}
																														BgL_arg2825z00_838 =
																															MAKE_PAIR
																															(BgL_fullzd2ssetzd2_793,
																															BgL_arg2831z00_844);
																													}
																													{	/* Expand/object.scm 194 */
																														obj_t
																															BgL_list2827z00_840;
																														{	/* Expand/object.scm 194 */
																															obj_t
																																BgL_arg2828z00_841;
																															BgL_arg2828z00_841
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2827z00_840
																																=
																																MAKE_PAIR
																																(BgL_arg2825z00_838,
																																BgL_arg2828z00_841);
																														}
																														BgL_arg2822z00_836 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2823z00_837,
																															BgL_list2827z00_840);
																												}}
																												BgL_arg2819z00_833 =
																													MAKE_PAIR
																													(BgL_nssetz00_791,
																													BgL_arg2822z00_836);
																											}
																											{	/* Expand/object.scm 193 */
																												obj_t
																													BgL_list2821z00_835;
																												BgL_list2821z00_835 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2809z00_823 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2819z00_833,
																													BgL_list2821z00_835);
																										}}
																										BgL_arg2803z00_817 =
																											MAKE_PAIR
																											(BgL_arg2808z00_822,
																											BgL_arg2809z00_823);
																									}
																									BgL_arg2804z00_818 =
																										BGl_loopz00zzexpand_objectz00
																										(BgL_bodyz00_2968,
																										BgL_ez00_2967,
																										BgL_auxz00_2966,
																										BgL_classzd2idzd2_2965,
																										CDR(BgL_indexedz00_704));
																									{	/* Expand/object.scm 193 */
																										obj_t BgL_list2806z00_820;

																										{	/* Expand/object.scm 193 */
																											obj_t BgL_arg2807z00_821;

																											BgL_arg2807z00_821 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2806z00_820 =
																												MAKE_PAIR
																												(BgL_arg2804z00_818,
																												BgL_arg2807z00_821);
																										}
																										BgL_arg2802z00_816 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2803z00_817,
																											BgL_list2806z00_820);
																								}}
																								BgL_arg2787z00_802 =
																									MAKE_PAIR(BgL_arg2801z00_815,
																									BgL_arg2802z00_816);
																							}
																							{	/* Expand/object.scm 192 */
																								obj_t BgL_list2790z00_804;

																								{	/* Expand/object.scm 192 */
																									obj_t BgL_arg2791z00_805;

																									BgL_arg2791z00_805 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2790z00_804 =
																										MAKE_PAIR
																										(BgL_arg2787z00_802,
																										BgL_arg2791z00_805);
																								}
																								BgL_arg2785z00_800 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2786z00_801,
																									BgL_list2790z00_804);
																						}}
																						return
																							MAKE_PAIR(BgL_arg2784z00_799,
																							BgL_arg2785z00_800);
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



/* with-access-expander */
	obj_t BGl_withzd2accesszd2expanderz00zzexpand_objectz00(obj_t BgL_oldez00_14,
		obj_t BgL_markz00_15, obj_t BgL_instancez00_16, obj_t BgL_classz00_17,
		obj_t BgL_slotsz00_18)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 202 */
			{	/* Expand/object.scm 204 */
				obj_t BgL_idsz00_900;

				if (NULLP(BgL_slotsz00_18))
					{	/* Expand/object.scm 204 */
						BgL_idsz00_900 = BNIL;
					}
				else
					{	/* Expand/object.scm 204 */
						obj_t BgL_head2460z00_963;

						BgL_head2460z00_963 = MAKE_PAIR(CAR(CAR(BgL_slotsz00_18)), BNIL);
						{	/* Expand/object.scm 204 */
							obj_t BgL_g2463z00_964;

							BgL_g2463z00_964 = CDR(BgL_slotsz00_18);
							{
								obj_t BgL_l2458z00_966;

								obj_t BgL_tail2461z00_967;

								BgL_l2458z00_966 = BgL_g2463z00_964;
								BgL_tail2461z00_967 = BgL_head2460z00_963;
							BgL_zc3anonymousza32932ze3z83_968:
								if (NULLP(BgL_l2458z00_966))
									{	/* Expand/object.scm 204 */
										BgL_idsz00_900 = BgL_head2460z00_963;
									}
								else
									{	/* Expand/object.scm 204 */
										obj_t BgL_newtail2462z00_970;

										BgL_newtail2462z00_970 =
											MAKE_PAIR(CAR(CAR(BgL_l2458z00_966)), BNIL);
										SET_CDR(BgL_tail2461z00_967, BgL_newtail2462z00_970);
										{
											obj_t BgL_tail2461z00_3524;

											obj_t BgL_l2458z00_3522;

											BgL_l2458z00_3522 = CDR(BgL_l2458z00_966);
											BgL_tail2461z00_3524 = BgL_newtail2462z00_970;
											BgL_tail2461z00_967 = BgL_tail2461z00_3524;
											BgL_l2458z00_966 = BgL_l2458z00_3522;
											goto BgL_zc3anonymousza32932ze3z83_968;
										}
									}
							}
						}
					}
				{	/* Expand/object.scm 205 */
					obj_t BgL_zc3anonymousza32887ze3z83_2914;

					BgL_zc3anonymousza32887ze3z83_2914 =
						make_fx_procedure(BGl_zc3anonymousza32887ze3z83zzexpand_objectz00,
						(int) (((long) 2)), (int) (((long) 6)));
					PROCEDURE_SET(BgL_zc3anonymousza32887ze3z83_2914,
						(int) (((long) 0)), BgL_oldez00_14);
					PROCEDURE_SET(BgL_zc3anonymousza32887ze3z83_2914,
						(int) (((long) 1)), BgL_slotsz00_18);
					PROCEDURE_SET(BgL_zc3anonymousza32887ze3z83_2914,
						(int) (((long) 2)), BgL_classz00_17);
					PROCEDURE_SET(BgL_zc3anonymousza32887ze3z83_2914,
						(int) (((long) 3)), BgL_instancez00_16);
					PROCEDURE_SET(BgL_zc3anonymousza32887ze3z83_2914,
						(int) (((long) 4)), BgL_markz00_15);
					PROCEDURE_SET(BgL_zc3anonymousza32887ze3z83_2914,
						(int) (((long) 5)), BgL_idsz00_900);
					return BgL_zc3anonymousza32887ze3z83_2914;
				}
			}
		}
	}



/* <anonymous:2887> */
	obj_t BGl_zc3anonymousza32887ze3z83zzexpand_objectz00(obj_t BgL_envz00_2915,
		obj_t BgL_xz00_2922, obj_t BgL_ez00_2923)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 205 */
			{	/* Expand/object.scm 205 */
				obj_t BgL_oldez00_2916;

				obj_t BgL_slotsz00_2917;

				obj_t BgL_classz00_2918;

				obj_t BgL_instancez00_2919;

				obj_t BgL_markz00_2920;

				obj_t BgL_idsz00_2921;

				BgL_oldez00_2916 = PROCEDURE_REF(BgL_envz00_2915, (int) (((long) 0)));
				BgL_slotsz00_2917 = PROCEDURE_REF(BgL_envz00_2915, (int) (((long) 1)));
				BgL_classz00_2918 = PROCEDURE_REF(BgL_envz00_2915, (int) (((long) 2)));
				BgL_instancez00_2919 =
					PROCEDURE_REF(BgL_envz00_2915, (int) (((long) 3)));
				BgL_markz00_2920 = PROCEDURE_REF(BgL_envz00_2915, (int) (((long) 4)));
				BgL_idsz00_2921 = PROCEDURE_REF(BgL_envz00_2915, (int) (((long) 5)));
				{
					obj_t BgL_xz00_901;

					obj_t BgL_ez00_902;

					BgL_xz00_901 = BgL_xz00_2922;
					BgL_ez00_902 = BgL_ez00_2923;
					{
						obj_t BgL_varz00_904;

						obj_t BgL_varz00_906;

						obj_t BgL_valz00_907;

						if (SYMBOLP(BgL_xz00_901))
							{	/* Expand/object.scm 205 */
								BgL_varz00_904 = BgL_xz00_901;
								{	/* Expand/object.scm 208 */
									bool_t BgL_testz00_3554;

									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_varz00_904, BgL_idsz00_2921)))
										{	/* Expand/object.scm 209 */
											obj_t BgL_cellz00_936;

											BgL_cellz00_936 =
												BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_904,
												BGl_lexicalzd2stackzd2zzexpand_epsz00());
											if (PAIRP(BgL_cellz00_936))
												{	/* Expand/object.scm 210 */
													BgL_testz00_3554 =
														(CDR(BgL_cellz00_936) == BgL_markz00_2920);
												}
											else
												{	/* Expand/object.scm 210 */
													BgL_testz00_3554 = ((bool_t) 0);
												}
										}
									else
										{	/* Expand/object.scm 208 */
											BgL_testz00_3554 = ((bool_t) 0);
										}
									if (BgL_testz00_3554)
										{	/* Expand/object.scm 211 */
											obj_t BgL_arg2901z00_926;

											{	/* Expand/object.scm 211 */
												obj_t BgL_arg2902z00_927;

												obj_t BgL_arg2903z00_928;

												{	/* Expand/object.scm 211 */
													obj_t BgL_arg2904z00_929;

													obj_t BgL_arg2905z00_930;

													BgL_arg2904z00_929 = CNST_TABLE_REF(((long) 9));
													{	/* Expand/object.scm 211 */
														obj_t BgL_pairz00_2449;

														BgL_pairz00_2449 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_varz00_904, BgL_slotsz00_2917);
														BgL_arg2905z00_930 = CAR(CDR(BgL_pairz00_2449));
													}
													{	/* Expand/object.scm 211 */
														obj_t BgL_list2906z00_931;

														{	/* Expand/object.scm 211 */
															obj_t BgL_arg2907z00_932;

															{	/* Expand/object.scm 211 */
																obj_t BgL_arg2908z00_933;

																BgL_arg2908z00_933 =
																	MAKE_PAIR(BgL_arg2905z00_930, BNIL);
																BgL_arg2907z00_932 =
																	MAKE_PAIR(BgL_arg2904z00_929,
																	BgL_arg2908z00_933);
															}
															BgL_list2906z00_931 =
																MAKE_PAIR(BgL_classz00_2918,
																BgL_arg2907z00_932);
														}
														BgL_arg2902z00_927 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list2906z00_931);
												}}
												{	/* Expand/object.scm 211 */
													obj_t BgL_list2909z00_934;

													BgL_list2909z00_934 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2903z00_928 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_instancez00_2919, BgL_list2909z00_934);
												}
												BgL_arg2901z00_926 =
													MAKE_PAIR(BgL_arg2902z00_927, BgL_arg2903z00_928);
											}
											return
												PROCEDURE_ENTRY(BgL_oldez00_2916) (BgL_oldez00_2916,
												BgL_arg2901z00_926, BgL_oldez00_2916, BEOA);
										}
									else
										{	/* Expand/object.scm 208 */
											return
												PROCEDURE_ENTRY(BgL_oldez00_2916) (BgL_oldez00_2916,
												BgL_varz00_904, BgL_oldez00_2916, BEOA);
										}
								}
							}
						else
							{	/* Expand/object.scm 205 */
								if (PAIRP(BgL_xz00_901))
									{	/* Expand/object.scm 205 */
										obj_t BgL_cdrzd21442zd2_913;

										BgL_cdrzd21442zd2_913 = CDR(BgL_xz00_901);
										if ((CAR(BgL_xz00_901) == CNST_TABLE_REF(((long) 15))))
											{	/* Expand/object.scm 205 */
												if (PAIRP(BgL_cdrzd21442zd2_913))
													{	/* Expand/object.scm 205 */
														obj_t BgL_carzd21445zd2_916;

														obj_t BgL_cdrzd21446zd2_917;

														BgL_carzd21445zd2_916 = CAR(BgL_cdrzd21442zd2_913);
														BgL_cdrzd21446zd2_917 = CDR(BgL_cdrzd21442zd2_913);
														if (SYMBOLP(BgL_carzd21445zd2_916))
															{	/* Expand/object.scm 205 */
																if (PAIRP(BgL_cdrzd21446zd2_917))
																	{	/* Expand/object.scm 205 */
																		if (NULLP(CDR(BgL_cdrzd21446zd2_917)))
																			{	/* Expand/object.scm 205 */
																				BgL_varz00_906 = BgL_carzd21445zd2_916;
																				BgL_valz00_907 =
																					CAR(BgL_cdrzd21446zd2_917);
																				{	/* Expand/object.scm 214 */
																					obj_t BgL_valz00_940;

																					BgL_valz00_940 =
																						PROCEDURE_ENTRY(BgL_ez00_902)
																						(BgL_ez00_902, BgL_valz00_907,
																						BgL_ez00_902, BEOA);
																					{	/* Expand/object.scm 215 */
																						bool_t BgL_testz00_3599;

																						if (CBOOL
																							(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_varz00_906,
																									BgL_idsz00_2921)))
																							{	/* Expand/object.scm 216 */
																								obj_t BgL_cellz00_957;

																								BgL_cellz00_957 =
																									BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																									(BgL_varz00_906,
																									BGl_lexicalzd2stackzd2zzexpand_epsz00
																									());
																								if (PAIRP(BgL_cellz00_957))
																									{	/* Expand/object.scm 217 */
																										BgL_testz00_3599 =
																											(CDR(BgL_cellz00_957) ==
																											BgL_markz00_2920);
																									}
																								else
																									{	/* Expand/object.scm 217 */
																										BgL_testz00_3599 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Expand/object.scm 215 */
																								BgL_testz00_3599 = ((bool_t) 0);
																							}
																						if (BgL_testz00_3599)
																							{	/* Expand/object.scm 219 */
																								obj_t BgL_arg2914z00_942;

																								{	/* Expand/object.scm 219 */
																									obj_t BgL_arg2915z00_943;

																									{	/* Expand/object.scm 219 */
																										obj_t BgL_arg2916z00_944;

																										obj_t BgL_arg2917z00_945;

																										{	/* Expand/object.scm 219 */
																											obj_t BgL_arg2918z00_946;

																											obj_t BgL_arg2919z00_947;

																											obj_t BgL_arg2920z00_948;

																											BgL_arg2918z00_946 =
																												CNST_TABLE_REF(((long)
																													9));
																											{	/* Expand/object.scm 219 */
																												obj_t BgL_pairz00_2457;

																												BgL_pairz00_2457 =
																													BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_varz00_906,
																													BgL_slotsz00_2917);
																												BgL_arg2919z00_947 =
																													CAR(CDR
																													(BgL_pairz00_2457));
																											}
																											BgL_arg2920z00_948 =
																												CNST_TABLE_REF(((long)
																													13));
																											{	/* Expand/object.scm 219 */
																												obj_t
																													BgL_list2921z00_949;
																												{	/* Expand/object.scm 219 */
																													obj_t
																														BgL_arg2922z00_950;
																													{	/* Expand/object.scm 219 */
																														obj_t
																															BgL_arg2923z00_951;
																														{	/* Expand/object.scm 219 */
																															obj_t
																																BgL_arg2924z00_952;
																															BgL_arg2924z00_952
																																=
																																MAKE_PAIR
																																(BgL_arg2920z00_948,
																																BNIL);
																															BgL_arg2923z00_951
																																=
																																MAKE_PAIR
																																(BgL_arg2919z00_947,
																																BgL_arg2924z00_952);
																														}
																														BgL_arg2922z00_950 =
																															MAKE_PAIR
																															(BgL_arg2918z00_946,
																															BgL_arg2923z00_951);
																													}
																													BgL_list2921z00_949 =
																														MAKE_PAIR
																														(BgL_classz00_2918,
																														BgL_arg2922z00_950);
																												}
																												BgL_arg2916z00_944 =
																													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																													(BgL_list2921z00_949);
																										}}
																										{	/* Expand/object.scm 219 */
																											obj_t BgL_list2925z00_953;

																											{	/* Expand/object.scm 219 */
																												obj_t
																													BgL_arg2926z00_954;
																												BgL_arg2926z00_954 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list2925z00_953 =
																													MAKE_PAIR
																													(BgL_valz00_940,
																													BgL_arg2926z00_954);
																											}
																											BgL_arg2917z00_945 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_instancez00_2919,
																												BgL_list2925z00_953);
																										}
																										BgL_arg2915z00_943 =
																											MAKE_PAIR
																											(BgL_arg2916z00_944,
																											BgL_arg2917z00_945);
																									}
																									BgL_arg2914z00_942 =
																										PROCEDURE_ENTRY
																										(BgL_oldez00_2916)
																										(BgL_oldez00_2916,
																										BgL_arg2915z00_943,
																										BgL_oldez00_2916, BEOA);
																								}
																								return
																									BGl_objectzd2epairifyzd2zzexpand_objectz00
																									(BgL_arg2914z00_942,
																									BgL_xz00_901);
																							}
																						else
																							{	/* Expand/object.scm 215 */
																								{	/* Expand/object.scm 224 */
																									obj_t BgL_arg2927z00_955;

																									{	/* Expand/object.scm 224 */
																										obj_t BgL_pairz00_2461;

																										BgL_pairz00_2461 =
																											BgL_xz00_901;
																										BgL_arg2927z00_955 =
																											CDR(CDR
																											(BgL_pairz00_2461));
																									}
																									SET_CAR(BgL_arg2927z00_955,
																										BgL_valz00_940);
																								}
																								return
																									PROCEDURE_ENTRY
																									(BgL_oldez00_2916)
																									(BgL_oldez00_2916,
																									BgL_xz00_901,
																									BgL_oldez00_2916, BEOA);
																							}
																					}
																				}
																			}
																		else
																			{	/* Expand/object.scm 205 */
																			BgL_tagzd21431zd2_909:
																				return
																					PROCEDURE_ENTRY(BgL_oldez00_2916)
																					(BgL_oldez00_2916, BgL_xz00_901,
																					BgL_ez00_902, BEOA);
																			}
																	}
																else
																	{	/* Expand/object.scm 205 */
																		goto BgL_tagzd21431zd2_909;
																	}
															}
														else
															{	/* Expand/object.scm 205 */
																goto BgL_tagzd21431zd2_909;
															}
													}
												else
													{	/* Expand/object.scm 205 */
														goto BgL_tagzd21431zd2_909;
													}
											}
										else
											{	/* Expand/object.scm 205 */
												goto BgL_tagzd21431zd2_909;
											}
									}
								else
									{	/* Expand/object.scm 205 */
										goto BgL_tagzd21431zd2_909;
									}
							}
					}
				}
			}
		}
	}



/* expand-instantiate */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2instantiatezd2zzexpand_objectz00(obj_t
		BgL_xz00_19, obj_t BgL_ez00_20)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 232 */
			{
				obj_t BgL_instantiatez00_983;

				if (PAIRP(BgL_xz00_19))
					{	/* Expand/object.scm 233 */
						BgL_instantiatez00_983 = CAR(BgL_xz00_19);
						{	/* Expand/object.scm 235 */
							BgL_typez00_bglt BgL_classz00_989;

							BgL_classz00_989 =
								BGl_typezd2ofzd2idz00zzast_identz00(BgL_instantiatez00_983,
								BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_19));
							{	/* Expand/object.scm 237 */
								bool_t BgL_testz00_3638;

								{	/* Expand/object.scm 237 */
									obj_t BgL_obj2139z00_2474;

									BgL_obj2139z00_2474 = (obj_t) (BgL_classz00_989);
									BgL_testz00_3638 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2139z00_2474,
										BGl_tclassz00zzobject_classz00);
								}
								if (BgL_testz00_3638)
									{	/* Expand/object.scm 239 */
										bool_t BgL_testz00_3641;

										{	/* Expand/object.scm 239 */
											BgL_tclassz00_bglt BgL_obj2157z00_2475;

											BgL_obj2157z00_2475 =
												(BgL_tclassz00_bglt) (BgL_classz00_989);
											{
												obj_t BgL_auxz00_3643;

												{	/* Expand/object.scm 239 */
													BgL_objectz00_bglt BgL_auxz00_3644;

													BgL_auxz00_3644 =
														(BgL_objectz00_bglt) (BgL_obj2157z00_2475);
													BgL_auxz00_3643 =
														BGL_OBJECT_WIDENING(BgL_auxz00_3644);
												}
												BgL_testz00_3641 =
													(((BgL_tclassz00_bglt) CREF(BgL_auxz00_3643))->
													BgL_abstractzf3zf3);
											}
										}
										if (BgL_testz00_3641)
											{	/* Expand/object.scm 239 */
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3838z00zzexpand_objectz00, BgL_xz00_19);
											}
										else
											{	/* Expand/object.scm 239 */
												return
													BGl_replacez12z12zztools_miscz00(BgL_xz00_19,
													BGl_instantiatezd2ze3makez31zzexpand_objectz00
													(BgL_xz00_19, (BgL_tclassz00_bglt) (BgL_classz00_989),
														BgL_ez00_20));
											}
									}
								else
									{	/* Expand/object.scm 237 */
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string3839z00zzexpand_objectz00, BgL_xz00_19);
									}
							}
						}
					}
				else
					{	/* Expand/object.scm 233 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string3839z00zzexpand_objectz00, BgL_xz00_19);
					}
			}
		}
	}



/* _expand-instantiate */
	obj_t BGl__expandzd2instantiatezd2zzexpand_objectz00(obj_t BgL_envz00_2924,
		obj_t BgL_xz00_2925, obj_t BgL_ez00_2926)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 232 */
			return
				BGl_expandzd2instantiatezd2zzexpand_objectz00(BgL_xz00_2925,
				BgL_ez00_2926);
		}
	}



/* instantiate->make */
	obj_t BGl_instantiatezd2ze3makez31zzexpand_objectz00(obj_t BgL_formz00_21,
		BgL_tclassz00_bglt BgL_classz00_22, obj_t BgL_ez00_23)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 249 */
			{	/* Expand/object.scm 250 */
				obj_t BgL_makezd2namezd2_994;

				BgL_makezd2namezd2_994 =
					BGl_classzd2makezd2zzobject_classz00(BgL_classz00_22);
				{	/* Expand/object.scm 254 */
					obj_t BgL_zc3anonymousza32950ze3z83_2927;

					{
						int BgL_auxz00_3657;

						BgL_auxz00_3657 = (int) (((long) 2));
						BgL_zc3anonymousza32950ze3z83_2927 =
							MAKE_L_PROCEDURE(BGl_zc3anonymousza32950ze3z83zzexpand_objectz00,
							BgL_auxz00_3657);
					}
					PROCEDURE_L_SET(BgL_zc3anonymousza32950ze3z83_2927,
						(int) (((long) 0)), BgL_makezd2namezd2_994);
					PROCEDURE_L_SET(BgL_zc3anonymousza32950ze3z83_2927,
						(int) (((long) 1)), BgL_formz00_21);
					return
						BGl_instantiatezd2ze3fillz31zzexpand_objectz00(BgL_formz00_21,
						(obj_t) (BgL_classz00_22), BgL_zc3anonymousza32950ze3z83_2927,
						BgL_ez00_23);
				}
			}
		}
	}



/* <anonymous:2950> */
	obj_t BGl_zc3anonymousza32950ze3z83zzexpand_objectz00(obj_t BgL_envz00_2928,
		obj_t BgL_largsz00_2931)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 253 */
			{	/* Expand/object.scm 254 */
				obj_t BgL_makezd2namezd2_2929;

				obj_t BgL_formz00_2930;

				BgL_makezd2namezd2_2929 =
					PROCEDURE_L_REF(BgL_envz00_2928, (int) (((long) 0)));
				BgL_formz00_2930 = PROCEDURE_L_REF(BgL_envz00_2928, (int) (((long) 1)));
				{
					obj_t BgL_largsz00_996;

					BgL_largsz00_996 = BgL_largsz00_2931;
					if (EXTENDED_PAIRP(BgL_formz00_2930))
						{	/* Expand/object.scm 255 */
							obj_t BgL_arg2952z00_999;

							BgL_arg2952z00_999 = CER(BgL_formz00_2930);
							{	/* Expand/object.scm 255 */
								obj_t BgL_res3814z00_2481;

								BgL_res3814z00_2481 =
									MAKE_EXTENDED_PAIR(BgL_makezd2namezd2_2929, BgL_largsz00_996,
									BgL_arg2952z00_999);
								return BgL_res3814z00_2481;
							}
						}
					else
						{	/* Expand/object.scm 254 */
							return MAKE_PAIR(BgL_makezd2namezd2_2929, BgL_largsz00_996);
						}
				}
			}
		}
	}



/* instantiate->fill */
	obj_t BGl_instantiatezd2ze3fillz31zzexpand_objectz00(obj_t BgL_formz00_24,
		obj_t BgL_classz00_25, obj_t BgL_allocz00_26, obj_t BgL_ez00_27)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 262 */
			{	/* Expand/object.scm 263 */
				obj_t BgL_slotsz00_1001;

				BgL_slotsz00_1001 =
					BGl_tclasszd2allzd2slotsz00zzobject_classz00(
					(BgL_tclassz00_bglt) (BgL_classz00_25));
				{	/* Expand/object.scm 263 */
					long BgL_lenz00_1002;

					BgL_lenz00_1002 = bgl_list_length(BgL_slotsz00_1001);
					{	/* Expand/object.scm 264 */
						obj_t BgL_vargsz00_1003;

						BgL_vargsz00_1003 = make_vector((int) (BgL_lenz00_1002), BUNSPEC);
						{	/* Expand/object.scm 265 */
							obj_t BgL_newz00_1004;

							BgL_newz00_1004 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 16)));
							{	/* Expand/object.scm 266 */
								obj_t BgL_providedz00_1005;

								BgL_providedz00_1005 = CDR(BgL_formz00_24);
								{	/* Expand/object.scm 267 */

									{
										long BgL_iz00_1007;

										obj_t BgL_slotsz00_1008;

										BgL_iz00_1007 = ((long) 0);
										BgL_slotsz00_1008 = BgL_slotsz00_1001;
									BgL_zc3anonymousza32953ze3z83_1009:
										if (NULLP(BgL_slotsz00_1008))
											{	/* Expand/object.scm 271 */
												CNST_TABLE_REF(((long) 17));
											}
										else
											{	/* Expand/object.scm 273 */
												obj_t BgL_sz00_1011;

												BgL_sz00_1011 = CAR(BgL_slotsz00_1008);
												if (BGl_slotzd2defaultzf3z21zzobject_slotsz00(
														(BgL_slotz00_bglt) (BgL_sz00_1011)))
													{	/* Expand/object.scm 276 */
														obj_t BgL_arg2956z00_1013;

														{	/* Expand/object.scm 276 */
															obj_t BgL_arg2958z00_1014;

															{
																BgL_slotz00_bglt BgL_auxz00_3690;

																BgL_auxz00_3690 =
																	(BgL_slotz00_bglt) (BgL_sz00_1011);
																BgL_arg2958z00_1014 =
																	(((BgL_slotz00_bglt) CREF(BgL_auxz00_3690))->
																	BgL_defaultzd2valuezd2);
															}
															BgL_arg2956z00_1013 =
																MAKE_PAIR(BTRUE, BgL_arg2958z00_1014);
														}
														VECTOR_SET(BgL_vargsz00_1003,
															(int) (BgL_iz00_1007), BgL_arg2956z00_1013);
													}
												else
													{	/* Expand/object.scm 278 */
														obj_t BgL_arg2959z00_1015;

														BgL_arg2959z00_1015 = MAKE_PAIR(BFALSE, BUNSPEC);
														VECTOR_SET(BgL_vargsz00_1003,
															(int) (BgL_iz00_1007), BgL_arg2959z00_1015);
													}
												{
													obj_t BgL_slotsz00_3701;

													long BgL_iz00_3699;

													BgL_iz00_3699 = (BgL_iz00_1007 + ((long) 1));
													BgL_slotsz00_3701 = CDR(BgL_slotsz00_1008);
													BgL_slotsz00_1008 = BgL_slotsz00_3701;
													BgL_iz00_1007 = BgL_iz00_3699;
													goto BgL_zc3anonymousza32953ze3z83_1009;
												}
											}
									}
									{
										obj_t BgL_providedz00_1020;

										BgL_providedz00_1020 = BgL_providedz00_1005;
									BgL_zc3anonymousza32962ze3z83_1021:
										if (NULLP(BgL_providedz00_1020))
											{	/* Expand/object.scm 283 */
												CNST_TABLE_REF(((long) 17));
											}
										else
											{	/* Expand/object.scm 285 */
												obj_t BgL_pz00_1023;

												BgL_pz00_1023 = CAR(BgL_providedz00_1020);
												{
													obj_t BgL_szd2namezd2_1027;

													obj_t BgL_lenz00_1028;

													obj_t BgL_valuez00_1029;

													obj_t BgL_szd2namezd2_1024;

													obj_t BgL_valuez00_1025;

													if (PAIRP(BgL_pz00_1023))
														{	/* Expand/object.scm 286 */
															obj_t BgL_carzd21471zd2_1034;

															obj_t BgL_cdrzd21472zd2_1035;

															BgL_carzd21471zd2_1034 = CAR(BgL_pz00_1023);
															BgL_cdrzd21472zd2_1035 = CDR(BgL_pz00_1023);
															if (SYMBOLP(BgL_carzd21471zd2_1034))
																{	/* Expand/object.scm 286 */
																	if (PAIRP(BgL_cdrzd21472zd2_1035))
																		{	/* Expand/object.scm 286 */
																			if (NULLP(CDR(BgL_cdrzd21472zd2_1035)))
																				{	/* Expand/object.scm 286 */
																					BgL_szd2namezd2_1024 =
																						BgL_carzd21471zd2_1034;
																					BgL_valuez00_1025 =
																						CAR(BgL_cdrzd21472zd2_1035);
																					{	/* Expand/object.scm 289 */
																						obj_t BgL_pvalz00_1060;

																						{	/* Expand/object.scm 290 */
																							obj_t BgL_arg2984z00_1062;

																							BgL_arg2984z00_1062 =
																								BGl_findzd2slotzd2offsetz00zzexpand_objectz00
																								(BgL_slotsz00_1001,
																								BgL_szd2namezd2_1024,
																								BGl_string3840z00zzexpand_objectz00,
																								BgL_pz00_1023);
																							BgL_pvalz00_1060 =
																								VECTOR_REF(BgL_vargsz00_1003,
																								CINT(BgL_arg2984z00_1062));
																						}
																						SET_CAR(BgL_pvalz00_1060, BTRUE);
																						{	/* Expand/object.scm 295 */
																							obj_t BgL_auxz00_3722;

																							BgL_auxz00_3722 =
																								BGl_objectzd2epairifyzd2zzexpand_objectz00
																								(BgL_valuez00_1025,
																								BgL_pz00_1023);
																							SET_CDR(BgL_pvalz00_1060,
																								BgL_auxz00_3722);
																						}
																					}
																				}
																			else
																				{	/* Expand/object.scm 286 */
																					obj_t BgL_cdrzd21499zd2_1043;

																					BgL_cdrzd21499zd2_1043 =
																						CDR(BgL_cdrzd21472zd2_1035);
																					if (PAIRP(BgL_cdrzd21499zd2_1043))
																						{	/* Expand/object.scm 286 */
																							if (NULLP(CDR
																									(BgL_cdrzd21499zd2_1043)))
																								{	/* Expand/object.scm 286 */
																									BgL_szd2namezd2_1027 =
																										BgL_carzd21471zd2_1034;
																									BgL_lenz00_1028 =
																										CAR(BgL_cdrzd21472zd2_1035);
																									BgL_valuez00_1029 =
																										CAR(BgL_cdrzd21499zd2_1043);
																									{	/* Expand/object.scm 298 */
																										obj_t BgL_snumz00_1063;

																										BgL_snumz00_1063 =
																											BGl_findzd2slotzd2offsetz00zzexpand_objectz00
																											(BgL_slotsz00_1001,
																											BgL_szd2namezd2_1027,
																											BGl_string3840z00zzexpand_objectz00,
																											BgL_pz00_1023);
																										{	/* Expand/object.scm 298 */
																											obj_t BgL_slotz00_1064;

																											BgL_slotz00_1064 =
																												bgl_list_ref
																												(BgL_slotsz00_1001,
																												(long)
																												CINT(BgL_snumz00_1063));
																											{	/* Expand/object.scm 302 */

																												{	/* Expand/object.scm 303 */
																													bool_t
																														BgL_testz00_3735;
																													{	/* Expand/object.scm 303 */
																														BgL_slotz00_bglt
																															BgL_obj2367z00_2531;
																														BgL_obj2367z00_2531
																															=
																															(BgL_slotz00_bglt)
																															(BgL_slotz00_1064);
																														BgL_testz00_3735 =
																															CBOOL(((
																																	(BgL_slotz00_bglt)
																																	CREF
																																	(BgL_obj2367z00_2531))->
																																BgL_indexedz00));
																													}
																													if (BgL_testz00_3735)
																														{	/* Expand/object.scm 305 */
																															obj_t
																																BgL_pvalz00_1066;
																															BgL_pvalz00_1066 =
																																VECTOR_REF
																																(BgL_vargsz00_1003,
																																CINT
																																(BgL_snumz00_1063));
																															{	/* Expand/object.scm 305 */
																																obj_t
																																	BgL_plenz00_1067;
																																{	/* Expand/object.scm 306 */
																																	long
																																		BgL_arg2987z00_1069;
																																	BgL_arg2987z00_1069
																																		=
																																		((long)
																																		CINT
																																		(BgL_snumz00_1063)
																																		-
																																		((long) 1));
																																	BgL_plenz00_1067
																																		=
																																		VECTOR_REF
																																		(BgL_vargsz00_1003,
																																		(int)
																																		(BgL_arg2987z00_1069));
																																}
																																{	/* Expand/object.scm 306 */

																																	SET_CAR
																																		(BgL_pvalz00_1066,
																																		BTRUE);
																																	{	/* Expand/object.scm 308 */
																																		obj_t
																																			BgL_auxz00_3746;
																																		BgL_auxz00_3746
																																			=
																																			BGl_objectzd2epairifyzd2zzexpand_objectz00
																																			(BgL_valuez00_1029,
																																			BgL_pz00_1023);
																																		SET_CDR
																																			(BgL_pvalz00_1066,
																																			BgL_auxz00_3746);
																																	}
																																	SET_CAR
																																		(BgL_plenz00_1067,
																																		BTRUE);
																																	SET_CDR
																																		(BgL_plenz00_1067,
																																		BgL_lenz00_1028);
																														}}}
																													else
																														{	/* Expand/object.scm 303 */
																															BGl_errorz00zz__errorz00
																																(BFALSE,
																																BGl_string3839z00zzexpand_objectz00,
																																BgL_formz00_24);
																														}
																												}
																											}
																										}
																									}
																								}
																							else
																								{	/* Expand/object.scm 286 */
																								BgL_tagzd21464zd2_1031:
																									BGl_errorz00zz__errorz00
																										(BFALSE,
																										BGl_string3839z00zzexpand_objectz00,
																										BgL_formz00_24);
																								}
																						}
																					else
																						{	/* Expand/object.scm 286 */
																							goto BgL_tagzd21464zd2_1031;
																						}
																				}
																		}
																	else
																		{	/* Expand/object.scm 286 */
																			goto BgL_tagzd21464zd2_1031;
																		}
																}
															else
																{	/* Expand/object.scm 286 */
																	goto BgL_tagzd21464zd2_1031;
																}
														}
													else
														{	/* Expand/object.scm 286 */
															goto BgL_tagzd21464zd2_1031;
														}
												}
												{
													obj_t BgL_providedz00_3755;

													BgL_providedz00_3755 = CDR(BgL_providedz00_1020);
													BgL_providedz00_1020 = BgL_providedz00_3755;
													goto BgL_zc3anonymousza32962ze3z83_1021;
												}
											}
									}
									{
										long BgL_iz00_1073;

										obj_t BgL_sz00_1074;

										BgL_iz00_1073 = ((long) 0);
										BgL_sz00_1074 = BgL_slotsz00_1001;
									BgL_zc3anonymousza32989ze3z83_1075:
										if ((BgL_iz00_1073 == BgL_lenz00_1002))
											{	/* Expand/object.scm 318 */
												CNST_TABLE_REF(((long) 18));
											}
										else
											{	/* Expand/object.scm 320 */
												bool_t BgL_testz00_3760;

												{	/* Expand/object.scm 320 */
													bool_t BgL_testz00_3761;

													{	/* Expand/object.scm 320 */
														obj_t BgL_arg3004z00_1089;

														BgL_arg3004z00_1089 =
															VECTOR_REF(BgL_vargsz00_1003,
															(int) (BgL_iz00_1073));
														{	/* Expand/object.scm 320 */
															obj_t BgL_pairz00_2551;

															BgL_pairz00_2551 = BgL_arg3004z00_1089;
															BgL_testz00_3761 = CBOOL(CAR(BgL_pairz00_2551));
													}}
													if (BgL_testz00_3761)
														{	/* Expand/object.scm 320 */
															BgL_testz00_3760 = ((bool_t) 0);
														}
													else
														{	/* Expand/object.scm 321 */
															bool_t BgL_testz00_3766;

															{	/* Expand/object.scm 321 */
																obj_t BgL_arg3003z00_1088;

																BgL_arg3003z00_1088 = CAR(BgL_sz00_1074);
																BgL_testz00_3766 =
																	BGl_slotzd2virtualzf3z21zzobject_slotsz00(
																	(BgL_slotz00_bglt) (BgL_arg3003z00_1088));
															}
															if (BgL_testz00_3766)
																{	/* Expand/object.scm 321 */
																	BgL_testz00_3760 = ((bool_t) 0);
																}
															else
																{	/* Expand/object.scm 321 */
																	BgL_testz00_3760 = ((bool_t) 1);
																}
														}
												}
												if (BgL_testz00_3760)
													{	/* Expand/object.scm 324 */
														obj_t BgL_arg2992z00_1078;

														{	/* Expand/object.scm 324 */
															obj_t BgL_arg2994z00_1080;

															{	/* Expand/object.scm 326 */
																obj_t BgL_arg2996z00_1082;

																{	/* Expand/object.scm 326 */
																	BgL_slotz00_bglt BgL_obj2351z00_2554;

																	{	/* Expand/object.scm 326 */
																		obj_t BgL_pairz00_2553;

																		BgL_pairz00_2553 = BgL_sz00_1074;
																		BgL_obj2351z00_2554 =
																			(BgL_slotz00_bglt) (CAR
																			(BgL_pairz00_2553));
																	}
																	BgL_arg2996z00_1082 =
																		(((BgL_slotz00_bglt)
																			CREF(BgL_obj2351z00_2554))->BgL_idz00);
																}
																{	/* Expand/object.scm 326 */
																	obj_t BgL_res3816z00_2557;

																	{	/* Expand/object.scm 326 */
																		obj_t BgL_arg2063z00_2556;

																		BgL_arg2063z00_2556 =
																			SYMBOL_TO_STRING(BgL_arg2996z00_1082);
																		BgL_res3816z00_2557 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2556);
																	}
																	BgL_arg2994z00_1080 = BgL_res3816z00_2557;
																}
															}
															BgL_arg2992z00_1078 =
																string_append_3
																(BGl_string3841z00zzexpand_objectz00,
																BgL_arg2994z00_1080,
																BGl_string3842z00zzexpand_objectz00);
														}
														BGl_errorz00zz__errorz00(BFALSE,
															BgL_arg2992z00_1078, BgL_formz00_24);
													}
												else
													{
														obj_t BgL_sz00_3779;

														long BgL_iz00_3777;

														BgL_iz00_3777 = (BgL_iz00_1073 + ((long) 1));
														BgL_sz00_3779 = CDR(BgL_sz00_1074);
														BgL_sz00_1074 = BgL_sz00_3779;
														BgL_iz00_1073 = BgL_iz00_3777;
														goto BgL_zc3anonymousza32989ze3z83_1075;
													}
											}
									}
									{
										long BgL_iz00_1094;

										obj_t BgL_slotsz00_1095;

										obj_t BgL_largsz00_1096;

										obj_t BgL_virtualsz00_1097;

										BgL_iz00_1094 = ((long) 0);
										BgL_slotsz00_1095 = BgL_slotsz00_1001;
										BgL_largsz00_1096 = BNIL;
										BgL_virtualsz00_1097 = BNIL;
									BgL_zc3anonymousza33005ze3z83_1098:
										if ((BgL_iz00_1094 == BgL_lenz00_1002))
											{	/* Expand/object.scm 336 */
												if (NULLP(BgL_virtualsz00_1097))
													{	/* Expand/object.scm 338 */
														obj_t BgL_arg3008z00_1101;

														BgL_arg3008z00_1101 =
															bgl_reverse_bang(BgL_largsz00_1096);
														return
															PROCEDURE_L_ENTRY(BgL_allocz00_26)
															(BgL_allocz00_26, BgL_arg3008z00_1101);
													}
												else
													{	/* Expand/object.scm 339 */
														obj_t BgL_arg3009z00_1102;

														obj_t BgL_arg3010z00_1103;

														BgL_arg3009z00_1102 = CNST_TABLE_REF(((long) 7));
														{	/* Expand/object.scm 339 */
															obj_t BgL_arg3011z00_1104;

															obj_t BgL_arg3012z00_1105;

															{	/* Expand/object.scm 339 */
																obj_t BgL_arg3014z00_1107;

																{	/* Expand/object.scm 339 */
																	obj_t BgL_arg3016z00_1109;

																	{	/* Expand/object.scm 339 */
																		obj_t BgL_arg3017z00_1110;

																		{	/* Expand/object.scm 339 */
																			obj_t BgL_arg3020z00_1113;

																			BgL_arg3020z00_1113 =
																				bgl_reverse_bang(BgL_largsz00_1096);
																			BgL_arg3017z00_1110 =
																				PROCEDURE_L_ENTRY(BgL_allocz00_26)
																				(BgL_allocz00_26, BgL_arg3020z00_1113);
																		}
																		{	/* Expand/object.scm 339 */
																			obj_t BgL_list3019z00_1112;

																			BgL_list3019z00_1112 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3016z00_1109 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3017z00_1110,
																				BgL_list3019z00_1112);
																	}}
																	BgL_arg3014z00_1107 =
																		MAKE_PAIR(BgL_newz00_1004,
																		BgL_arg3016z00_1109);
																}
																BgL_arg3011z00_1104 =
																	MAKE_PAIR(BgL_arg3014z00_1107, BNIL);
															}
															{	/* Expand/object.scm 340 */
																obj_t BgL_arg3021z00_1114;

																obj_t BgL_arg3022z00_1115;

																BgL_arg3021z00_1114 =
																	bgl_reverse_bang(BgL_virtualsz00_1097);
																BgL_arg3022z00_1115 =
																	MAKE_PAIR(BgL_newz00_1004, BNIL);
																BgL_arg3012z00_1105 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3021z00_1114, BgL_arg3022z00_1115);
															}
															{	/* Expand/object.scm 339 */
																obj_t BgL_list3013z00_1106;

																BgL_list3013z00_1106 =
																	MAKE_PAIR(BgL_arg3012z00_1105, BNIL);
																BgL_arg3010z00_1103 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3011z00_1104, BgL_list3013z00_1106);
														}}
														return
															MAKE_PAIR(BgL_arg3009z00_1102,
															BgL_arg3010z00_1103);
													}
											}
										else
											{	/* Expand/object.scm 342 */
												obj_t BgL_valuez00_1116;

												{	/* Expand/object.scm 342 */
													obj_t BgL_arg3042z00_1136;

													BgL_arg3042z00_1136 =
														CDR(VECTOR_REF(BgL_vargsz00_1003,
															(int) (BgL_iz00_1094)));
													BgL_valuez00_1116 =
														PROCEDURE_ENTRY(BgL_ez00_27) (BgL_ez00_27,
														BgL_arg3042z00_1136, BgL_ez00_27, BEOA);
												}
												{	/* Expand/object.scm 344 */
													bool_t BgL_testz00_3807;

													{	/* Expand/object.scm 344 */
														obj_t BgL_arg3041z00_1135;

														BgL_arg3041z00_1135 = CAR(BgL_slotsz00_1095);
														BgL_testz00_3807 =
															BGl_slotzd2virtualzf3z21zzobject_slotsz00(
															(BgL_slotz00_bglt) (BgL_arg3041z00_1135));
													}
													if (BgL_testz00_3807)
														{	/* Expand/object.scm 345 */
															long BgL_arg3024z00_1118;

															obj_t BgL_arg3025z00_1119;

															obj_t BgL_arg3026z00_1120;

															BgL_arg3024z00_1118 =
																(BgL_iz00_1094 + ((long) 1));
															BgL_arg3025z00_1119 = CDR(BgL_slotsz00_1095);
															if ((BgL_valuez00_1116 == BUNSPEC))
																{	/* Expand/object.scm 348 */
																	BgL_arg3026z00_1120 = BgL_virtualsz00_1097;
																}
															else
																{	/* Expand/object.scm 348 */
																	if (EXTENDED_PAIRP(BgL_valuez00_1116))
																		{	/* Expand/object.scm 351 */
																			obj_t BgL_arg3029z00_1123;

																			obj_t BgL_arg3030z00_1124;

																			BgL_arg3029z00_1123 =
																				BGl_makezd2virtualzd2setz00zzexpand_objectz00
																				(CAR(BgL_slotsz00_1095),
																				BgL_valuez00_1116, BgL_newz00_1004,
																				BgL_classz00_25, BgL_formz00_24,
																				BgL_ez00_27,
																				BGl_string3840z00zzexpand_objectz00);
																			BgL_arg3030z00_1124 =
																				CER(BgL_valuez00_1116);
																			{	/* Expand/object.scm 351 */
																				obj_t BgL_res3817z00_2577;

																				BgL_res3817z00_2577 =
																					MAKE_EXTENDED_PAIR
																					(BgL_arg3029z00_1123,
																					BgL_virtualsz00_1097,
																					BgL_arg3030z00_1124);
																				BgL_arg3026z00_1120 =
																					BgL_res3817z00_2577;
																			}
																		}
																	else
																		{	/* Expand/object.scm 350 */
																			BgL_arg3026z00_1120 =
																				MAKE_PAIR
																				(BGl_makezd2virtualzd2setz00zzexpand_objectz00
																				(CAR(BgL_slotsz00_1095),
																					BgL_valuez00_1116, BgL_newz00_1004,
																					BgL_classz00_25, BgL_formz00_24,
																					BgL_ez00_27,
																					BGl_string3840z00zzexpand_objectz00),
																				BgL_virtualsz00_1097);
																		}
																}
															{
																obj_t BgL_virtualsz00_3826;

																obj_t BgL_slotsz00_3825;

																long BgL_iz00_3824;

																BgL_iz00_3824 = BgL_arg3024z00_1118;
																BgL_slotsz00_3825 = BgL_arg3025z00_1119;
																BgL_virtualsz00_3826 = BgL_arg3026z00_1120;
																BgL_virtualsz00_1097 = BgL_virtualsz00_3826;
																BgL_slotsz00_1095 = BgL_slotsz00_3825;
																BgL_iz00_1094 = BgL_iz00_3824;
																goto BgL_zc3anonymousza33005ze3z83_1098;
															}
														}
													else
														{	/* Expand/object.scm 369 */
															long BgL_arg3036z00_1130;

															obj_t BgL_arg3037z00_1131;

															obj_t BgL_arg3038z00_1132;

															BgL_arg3036z00_1130 =
																(BgL_iz00_1094 + ((long) 1));
															BgL_arg3037z00_1131 = CDR(BgL_slotsz00_1095);
															if (EXTENDED_PAIRP(BgL_valuez00_1116))
																{	/* Expand/object.scm 372 */
																	obj_t BgL_arg3040z00_1134;

																	BgL_arg3040z00_1134 = CER(BgL_valuez00_1116);
																	{	/* Expand/object.scm 372 */
																		obj_t BgL_res3818z00_2587;

																		BgL_res3818z00_2587 =
																			MAKE_EXTENDED_PAIR(BgL_valuez00_1116,
																			BgL_largsz00_1096, BgL_arg3040z00_1134);
																		BgL_arg3038z00_1132 = BgL_res3818z00_2587;
																	}
																}
															else
																{	/* Expand/object.scm 371 */
																	BgL_arg3038z00_1132 =
																		MAKE_PAIR(BgL_valuez00_1116,
																		BgL_largsz00_1096);
																}
															{
																obj_t BgL_largsz00_3836;

																obj_t BgL_slotsz00_3835;

																long BgL_iz00_3834;

																BgL_iz00_3834 = BgL_arg3036z00_1130;
																BgL_slotsz00_3835 = BgL_arg3037z00_1131;
																BgL_largsz00_3836 = BgL_arg3038z00_1132;
																BgL_largsz00_1096 = BgL_largsz00_3836;
																BgL_slotsz00_1095 = BgL_slotsz00_3835;
																BgL_iz00_1094 = BgL_iz00_3834;
																goto BgL_zc3anonymousza33005ze3z83_1098;
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



/* expand-co-instantiate */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2cozd2instantiatez00zzexpand_objectz00(obj_t BgL_xz00_28,
		obj_t BgL_ez00_29)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 379 */
			{

				if (PAIRP(BgL_xz00_28))
					{	/* Expand/object.scm 380 */
						obj_t BgL_cdrzd21547zd2_1147;

						BgL_cdrzd21547zd2_1147 = CDR(BgL_xz00_28);
						if ((CAR(BgL_xz00_28) == CNST_TABLE_REF(((long) 19))))
							{	/* Expand/object.scm 380 */
								if (PAIRP(BgL_cdrzd21547zd2_1147))
									{	/* Expand/object.scm 380 */
										obj_t BgL_arg3049z00_1150;

										obj_t BgL_arg3050z00_1151;

										BgL_arg3049z00_1150 = CAR(BgL_cdrzd21547zd2_1147);
										BgL_arg3050z00_1151 = CDR(BgL_cdrzd21547zd2_1147);
										return
											BGl_replacez12z12zztools_miscz00(BgL_xz00_28,
											BGl_cozd2instantiatezd2ze3letze3zzexpand_objectz00
											(BgL_arg3049z00_1150, BgL_arg3050z00_1151, BgL_xz00_28,
												BgL_ez00_29));
									}
								else
									{	/* Expand/object.scm 380 */
									BgL_tagzd21540zd2_1144:
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string3843z00zzexpand_objectz00, BgL_xz00_28);
									}
							}
						else
							{	/* Expand/object.scm 380 */
								goto BgL_tagzd21540zd2_1144;
							}
					}
				else
					{	/* Expand/object.scm 380 */
						goto BgL_tagzd21540zd2_1144;
					}
			}
		}
	}



/* _expand-co-instantiate */
	obj_t BGl__expandzd2cozd2instantiatez00zzexpand_objectz00(obj_t
		BgL_envz00_2932, obj_t BgL_xz00_2933, obj_t BgL_ez00_2934)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 379 */
			return
				BGl_expandzd2cozd2instantiatez00zzexpand_objectz00(BgL_xz00_2933,
				BgL_ez00_2934);
		}
	}



/* co-instantiate->let */
	obj_t BGl_cozd2instantiatezd2ze3letze3zzexpand_objectz00(obj_t
		BgL_bindingsz00_30, obj_t BgL_bodyz00_31, obj_t BgL_xz00_32,
		obj_t BgL_ez00_33)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 389 */
			{
				obj_t BgL_exprz00_1311;

				obj_t BgL_bdgz00_1312;

				obj_t BgL_locz00_1313;

				{	/* Expand/object.scm 415 */
					obj_t BgL_locz00_1156;

					BgL_locz00_1156 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_32);
					{
						obj_t BgL_bindingsz00_1163;

						obj_t BgL_userzd2variableszd2_1164;

						obj_t BgL_privatezd2variableszd2_1165;

						obj_t BgL_rewritezd2bindingszd2_1166;

						obj_t BgL_classesz00_1167;

						obj_t BgL_instantiatesz00_1168;

						BgL_bindingsz00_1163 = BgL_bindingsz00_30;
						BgL_userzd2variableszd2_1164 = BNIL;
						BgL_privatezd2variableszd2_1165 = BNIL;
						BgL_rewritezd2bindingszd2_1166 = BNIL;
						BgL_classesz00_1167 = BNIL;
						BgL_instantiatesz00_1168 = BNIL;
					BgL_zc3anonymousza33054ze3z83_1169:
						if (NULLP(BgL_bindingsz00_1163))
							{	/* Expand/object.scm 424 */
								obj_t BgL_e1z00_2935;

								BgL_e1z00_2935 =
									make_fx_procedure(BGl_e1z00zzexpand_objectz00,
									(int) (((long) 2)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_e1z00_2935, (int) (((long) 0)), BgL_ez00_33);
								PROCEDURE_SET(BgL_e1z00_2935,
									(int) (((long) 1)), BgL_rewritezd2bindingszd2_1166);
								{	/* Expand/object.scm 430 */
									obj_t BgL_arg3056z00_1172;

									obj_t BgL_arg3057z00_1173;

									BgL_arg3056z00_1172 = CNST_TABLE_REF(((long) 7));
									{	/* Expand/object.scm 430 */
										obj_t BgL_arg3058z00_1174;

										obj_t BgL_arg3059z00_1175;

										if (NULLP(BgL_privatezd2variableszd2_1165))
											{	/* Expand/object.scm 430 */
												BgL_arg3058z00_1174 = BNIL;
											}
										else
											{	/* Expand/object.scm 430 */
												obj_t BgL_head2466z00_1182;

												BgL_head2466z00_1182 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_ll2464z00_1184;

													obj_t BgL_ll2465z00_1185;

													obj_t BgL_tail2467z00_1186;

													BgL_ll2464z00_1184 = BgL_privatezd2variableszd2_1165;
													BgL_ll2465z00_1185 = BgL_classesz00_1167;
													BgL_tail2467z00_1186 = BgL_head2466z00_1182;
												BgL_zc3anonymousza33065ze3z83_1187:
													if (NULLP(BgL_ll2464z00_1184))
														{	/* Expand/object.scm 430 */
															BgL_arg3058z00_1174 = CDR(BgL_head2466z00_1182);
														}
													else
														{	/* Expand/object.scm 430 */
															obj_t BgL_newtail2468z00_1189;

															{	/* Expand/object.scm 430 */
																obj_t BgL_arg3069z00_1192;

																{	/* Expand/object.scm 430 */
																	obj_t BgL_idz00_1194;

																	obj_t BgL_classz00_1195;

																	BgL_idz00_1194 = CAR(BgL_ll2464z00_1184);
																	BgL_classz00_1195 = CAR(BgL_ll2465z00_1185);
																	{	/* Expand/object.scm 431 */
																		obj_t BgL_cidz00_1196;

																		{
																			BgL_typez00_bglt BgL_auxz00_3871;

																			BgL_auxz00_3871 =
																				(BgL_typez00_bglt) (BgL_classz00_1195);
																			BgL_cidz00_1196 =
																				(((BgL_typez00_bglt)
																					CREF(BgL_auxz00_3871))->BgL_idz00);
																		}
																		{	/* Expand/object.scm 431 */
																			obj_t BgL_tvz00_1197;

																			BgL_tvz00_1197 =
																				BGl_makezd2typedzd2identz00zzast_identz00
																				(BgL_idz00_1194, BgL_cidz00_1196);
																			{	/* Expand/object.scm 432 */

																				{	/* Expand/object.scm 433 */
																					obj_t BgL_arg3071z00_1198;

																					{	/* Expand/object.scm 433 */
																						obj_t BgL_arg3072z00_1199;

																						{	/* Expand/object.scm 433 */
																							obj_t BgL_arg3075z00_1202;

																							{	/* Expand/object.scm 433 */
																								obj_t BgL_arg3077z00_1204;

																								{	/* Expand/object.scm 433 */
																									obj_t BgL_arg3078z00_1205;

																									obj_t BgL_arg3079z00_1206;

																									{	/* Expand/object.scm 433 */
																										obj_t BgL_res3819z00_2609;

																										{	/* Expand/object.scm 433 */
																											obj_t BgL_symbolz00_2607;

																											BgL_symbolz00_2607 =
																												CNST_TABLE_REF(((long)
																													21));
																											{	/* Expand/object.scm 433 */
																												obj_t
																													BgL_arg2063z00_2608;
																												BgL_arg2063z00_2608 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_2607);
																												BgL_res3819z00_2609 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_2608);
																										}}
																										BgL_arg3078z00_1205 =
																											BgL_res3819z00_2609;
																									}
																									{	/* Expand/object.scm 433 */
																										obj_t BgL_res3820z00_2612;

																										{	/* Expand/object.scm 433 */
																											obj_t BgL_arg2063z00_2611;

																											BgL_arg2063z00_2611 =
																												SYMBOL_TO_STRING
																												(BgL_cidz00_1196);
																											BgL_res3820z00_2612 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_2611);
																										}
																										BgL_arg3079z00_1206 =
																											BgL_res3820z00_2612;
																									}
																									{	/* Expand/object.scm 433 */
																										obj_t BgL_list3080z00_1207;

																										{	/* Expand/object.scm 433 */
																											obj_t BgL_arg3081z00_1208;

																											BgL_arg3081z00_1208 =
																												MAKE_PAIR
																												(BgL_arg3079z00_1206,
																												BNIL);
																											BgL_list3080z00_1207 =
																												MAKE_PAIR
																												(BgL_arg3078z00_1205,
																												BgL_arg3081z00_1208);
																										}
																										BgL_arg3077z00_1204 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list3080z00_1207);
																								}}
																								BgL_arg3075z00_1202 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg3077z00_1204));
																							}
																							BgL_arg3072z00_1199 =
																								MAKE_PAIR(BgL_arg3075z00_1202,
																								BNIL);
																						}
																						{	/* Expand/object.scm 433 */
																							obj_t BgL_list3074z00_1201;

																							BgL_list3074z00_1201 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3071z00_1198 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3072z00_1199,
																								BgL_list3074z00_1201);
																					}}
																					BgL_arg3069z00_1192 =
																						MAKE_PAIR(BgL_tvz00_1197,
																						BgL_arg3071z00_1198);
																}}}}}
																BgL_newtail2468z00_1189 =
																	MAKE_PAIR(BgL_arg3069z00_1192, BNIL);
															}
															SET_CDR(BgL_tail2467z00_1186,
																BgL_newtail2468z00_1189);
															{
																obj_t BgL_tail2467z00_3895;

																obj_t BgL_ll2465z00_3893;

																obj_t BgL_ll2464z00_3891;

																BgL_ll2464z00_3891 = CDR(BgL_ll2464z00_1184);
																BgL_ll2465z00_3893 = CDR(BgL_ll2465z00_1185);
																BgL_tail2467z00_3895 = BgL_newtail2468z00_1189;
																BgL_tail2467z00_1186 = BgL_tail2467z00_3895;
																BgL_ll2465z00_1185 = BgL_ll2465z00_3893;
																BgL_ll2464z00_1184 = BgL_ll2464z00_3891;
																goto BgL_zc3anonymousza33065ze3z83_1187;
															}
														}
												}
											}
										{	/* Expand/object.scm 436 */
											obj_t BgL_arg3082z00_1210;

											obj_t BgL_arg3083z00_1211;

											BgL_arg3082z00_1210 = CNST_TABLE_REF(((long) 7));
											{	/* Expand/object.scm 438 */
												obj_t BgL_arg3084z00_1212;

												obj_t BgL_arg3085z00_1213;

												{	/* Expand/object.scm 438 */
													obj_t BgL_arg3089z00_1217;

													{	/* Expand/object.scm 438 */
														obj_t BgL_zc3anonymousza33095ze3z83_2937;

														BgL_zc3anonymousza33095ze3z83_2937 =
															make_fx_procedure
															(BGl_zc3anonymousza33095ze3z83zzexpand_objectz00,
															(int) (((long) 4)), (int) (((long) 3)));
														PROCEDURE_SET(BgL_zc3anonymousza33095ze3z83_2937,
															(int) (((long) 0)), BgL_ez00_33);
														PROCEDURE_SET(BgL_zc3anonymousza33095ze3z83_2937,
															(int) (((long) 1)),
															BgL_rewritezd2bindingszd2_1166);
														PROCEDURE_SET(BgL_zc3anonymousza33095ze3z83_2937,
															(int) (((long) 2)), BgL_e1z00_2935);
														{	/* Expand/object.scm 437 */
															obj_t BgL_list3091z00_1219;

															{	/* Expand/object.scm 437 */
																obj_t BgL_arg3092z00_1220;

																{	/* Expand/object.scm 437 */
																	obj_t BgL_arg3093z00_1221;

																	{	/* Expand/object.scm 437 */
																		obj_t BgL_arg3094z00_1222;

																		BgL_arg3094z00_1222 =
																			MAKE_PAIR(BgL_instantiatesz00_1168, BNIL);
																		BgL_arg3093z00_1221 =
																			MAKE_PAIR(BgL_classesz00_1167,
																			BgL_arg3094z00_1222);
																	}
																	BgL_arg3092z00_1220 =
																		MAKE_PAIR(BgL_privatezd2variableszd2_1165,
																		BgL_arg3093z00_1221);
																}
																BgL_list3091z00_1219 =
																	MAKE_PAIR(BgL_userzd2variableszd2_1164,
																	BgL_arg3092z00_1220);
															}
															BgL_arg3089z00_1217 =
																BGl_mapz00zz__r4_control_features_6_9z00
																(BgL_zc3anonymousza33095ze3z83_2937,
																BgL_list3091z00_1219);
													}}
													BgL_arg3084z00_1212 =
														bgl_reverse_bang(BgL_arg3089z00_1217);
												}
												{	/* Expand/object.scm 456 */
													obj_t BgL_arg3123z00_1270;

													{	/* Expand/object.scm 456 */
														obj_t BgL_arg3124z00_1271;

														obj_t BgL_arg3125z00_1272;

														BgL_arg3124z00_1271 = CNST_TABLE_REF(((long) 22));
														BgL_arg3125z00_1272 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_bodyz00_31, BNIL);
														BgL_arg3123z00_1270 =
															MAKE_PAIR(BgL_arg3124z00_1271,
															BgL_arg3125z00_1272);
													}
													BgL_arg3085z00_1213 =
														PROCEDURE_ENTRY(BgL_ez00_33) (BgL_ez00_33,
														BgL_arg3123z00_1270, BgL_ez00_33, BEOA);
												}
												{	/* Expand/object.scm 436 */
													obj_t BgL_list3087z00_1215;

													{	/* Expand/object.scm 436 */
														obj_t BgL_arg3088z00_1216;

														BgL_arg3088z00_1216 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3087z00_1215 =
															MAKE_PAIR(BgL_arg3085z00_1213,
															BgL_arg3088z00_1216);
													}
													BgL_arg3083z00_1211 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3084z00_1212, BgL_list3087z00_1215);
											}}
											BgL_arg3059z00_1175 =
												MAKE_PAIR(BgL_arg3082z00_1210, BgL_arg3083z00_1211);
										}
										{	/* Expand/object.scm 430 */
											obj_t BgL_list3061z00_1177;

											{	/* Expand/object.scm 430 */
												obj_t BgL_arg3063z00_1178;

												BgL_arg3063z00_1178 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3061z00_1177 =
													MAKE_PAIR(BgL_arg3059z00_1175, BgL_arg3063z00_1178);
											}
											BgL_arg3057z00_1173 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3058z00_1174, BgL_list3061z00_1177);
									}}
									return MAKE_PAIR(BgL_arg3056z00_1172, BgL_arg3057z00_1173);
								}
							}
						else
							{
								obj_t BgL_varz00_1280;

								obj_t BgL_exprz00_1281;

								{	/* Expand/object.scm 457 */
									obj_t BgL_ezd21567zd2_1284;

									BgL_ezd21567zd2_1284 = CAR(BgL_bindingsz00_1163);
									if (PAIRP(BgL_ezd21567zd2_1284))
										{	/* Expand/object.scm 457 */
											obj_t BgL_carzd21572zd2_1286;

											obj_t BgL_cdrzd21573zd2_1287;

											BgL_carzd21572zd2_1286 = CAR(BgL_ezd21567zd2_1284);
											BgL_cdrzd21573zd2_1287 = CDR(BgL_ezd21567zd2_1284);
											if (SYMBOLP(BgL_carzd21572zd2_1286))
												{	/* Expand/object.scm 457 */
													if (PAIRP(BgL_cdrzd21573zd2_1287))
														{	/* Expand/object.scm 457 */
															if (NULLP(CDR(BgL_cdrzd21573zd2_1287)))
																{	/* Expand/object.scm 457 */
																	BgL_varz00_1280 = BgL_carzd21572zd2_1286;
																	BgL_exprz00_1281 =
																		CAR(BgL_cdrzd21573zd2_1287);
																	{	/* Expand/object.scm 459 */
																		obj_t BgL_bdgz00_1293;

																		BgL_bdgz00_1293 = CAR(BgL_bindingsz00_1163);
																		{	/* Expand/object.scm 459 */
																			obj_t BgL_locz00_1294;

																			BgL_locz00_1294 =
																				BGl_findzd2locationzf2locz20zztools_locationz00
																				(BgL_bdgz00_1293, BgL_xz00_32);
																			{	/* Expand/object.scm 460 */
																				obj_t BgL_idze2typeze2_1295;

																				BgL_idze2typeze2_1295 =
																					BGl_parsezd2idzd2zzast_identz00
																					(BgL_varz00_1280, BgL_locz00_1294);
																				{	/* Expand/object.scm 461 */
																					obj_t BgL_idz00_1296;

																					BgL_idz00_1296 =
																						CAR(BgL_idze2typeze2_1295);
																					{	/* Expand/object.scm 463 */
																						obj_t BgL_privz00_1298;

																						{	/* Expand/object.scm 464 */

																							{	/* Expand/object.scm 464 */

																								BgL_privz00_1298 =
																									BGl_gensymz00zz__r4_symbols_6_4z00
																									(BFALSE);
																							}
																						}
																						{	/* Expand/object.scm 464 */
																							obj_t BgL_kclassz00_1299;

																							BgL_exprz00_1311 =
																								BgL_exprz00_1281;
																							BgL_bdgz00_1312 = BgL_bdgz00_1293;
																							BgL_locz00_1313 = BgL_locz00_1294;
																							{
																								obj_t BgL_instantiatez00_1315;

																								obj_t BgL_bodyz00_1316;

																								if (PAIRP(BgL_exprz00_1311))
																									{	/* Expand/object.scm 414 */
																										BgL_instantiatez00_1315 =
																											CAR(BgL_exprz00_1311);
																										BgL_bodyz00_1316 =
																											CDR(BgL_exprz00_1311);
																										{	/* Expand/object.scm 393 */
																											obj_t BgL_locz00_1323;

																											BgL_locz00_1323 =
																												BGl_findzd2locationzf2locz20zztools_locationz00
																												(BgL_bodyz00_1316,
																												BgL_locz00_1313);
																											{	/* Expand/object.scm 393 */
																												obj_t
																													BgL_idze2typeze2_1324;
																												BgL_idze2typeze2_1324 =
																													BGl_parsezd2idzd2zzast_identz00
																													(BgL_instantiatez00_1315,
																													BgL_locz00_1323);
																												{	/* Expand/object.scm 394 */
																													obj_t
																														BgL_kclassz00_1325;
																													BgL_kclassz00_1325 =
																														CDR
																														(BgL_idze2typeze2_1324);
																													{	/* Expand/object.scm 395 */

																														if (
																															(CAR
																																(BgL_idze2typeze2_1324)
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		20))))
																															{	/* Expand/object.scm 397 */
																																if (BGl_iszd2azf3z21zz__objectz00(BgL_kclassz00_1325, BGl_tclassz00zzobject_classz00))
																																	{	/* Expand/object.scm 405 */
																																		bool_t
																																			BgL_testz00_3953;
																																		{	/* Expand/object.scm 405 */
																																			BgL_tclassz00_bglt
																																				BgL_obj2157z00_2655;
																																			BgL_obj2157z00_2655
																																				=
																																				(BgL_tclassz00_bglt)
																																				(BgL_kclassz00_1325);
																																			{
																																				obj_t
																																					BgL_auxz00_3955;
																																				{	/* Expand/object.scm 405 */
																																					BgL_objectz00_bglt
																																						BgL_auxz00_3956;
																																					BgL_auxz00_3956
																																						=
																																						(BgL_objectz00_bglt)
																																						(BgL_obj2157z00_2655);
																																					BgL_auxz00_3955
																																						=
																																						BGL_OBJECT_WIDENING
																																						(BgL_auxz00_3956);
																																				}
																																				BgL_testz00_3953
																																					=
																																					(((BgL_tclassz00_bglt) CREF(BgL_auxz00_3955))->BgL_abstractzf3zf3);
																																			}
																																		}
																																		if (BgL_testz00_3953)
																																			{	/* Expand/object.scm 405 */
																																				BgL_kclassz00_1299
																																					=
																																					BGl_errorz00zz__errorz00
																																					(BFALSE,
																																					BGl_string3844z00zzexpand_objectz00,
																																					BgL_bdgz00_1312);
																																			}
																																		else
																																			{	/* Expand/object.scm 405 */
																																				BgL_kclassz00_1299
																																					=
																																					BgL_kclassz00_1325;
																																			}
																																	}
																																else
																																	{	/* Expand/object.scm 401 */
																																		BgL_kclassz00_1299
																																			=
																																			BGl_errorz00zz__errorz00
																																			(BFALSE,
																																			BGl_string3845z00zzexpand_objectz00,
																																			BgL_bdgz00_1312);
																																	}
																															}
																														else
																															{	/* Expand/object.scm 397 */
																																BgL_kclassz00_1299
																																	=
																																	BGl_errorz00zz__errorz00
																																	(BFALSE,
																																	BGl_string3846z00zzexpand_objectz00,
																																	BgL_bdgz00_1312);
																															}
																													}
																												}
																											}
																										}
																									}
																								else
																									{	/* Expand/object.scm 414 */
																										BgL_kclassz00_1299 =
																											BGl_errorz00zz__errorz00
																											(BFALSE,
																											BGl_string3846z00zzexpand_objectz00,
																											BgL_bdgz00_1312);
																									}
																							}
																							{	/* Expand/object.scm 465 */

																								{	/* Expand/object.scm 466 */
																									obj_t BgL_arg3135z00_1300;

																									obj_t BgL_arg3136z00_1301;

																									obj_t BgL_arg3137z00_1302;

																									obj_t BgL_arg3138z00_1303;

																									obj_t BgL_arg3139z00_1304;

																									obj_t BgL_arg3140z00_1305;

																									BgL_arg3135z00_1300 =
																										CDR(BgL_bindingsz00_1163);
																									BgL_arg3136z00_1301 =
																										MAKE_PAIR(BgL_varz00_1280,
																										BgL_userzd2variableszd2_1164);
																									BgL_arg3137z00_1302 =
																										MAKE_PAIR(BgL_privz00_1298,
																										BgL_privatezd2variableszd2_1165);
																									{	/* Expand/object.scm 469 */
																										obj_t BgL_arg3141z00_1306;

																										BgL_arg3141z00_1306 =
																											MAKE_PAIR(BgL_idz00_1296,
																											BgL_privz00_1298);
																										BgL_arg3138z00_1303 =
																											MAKE_PAIR
																											(BgL_arg3141z00_1306,
																											BgL_rewritezd2bindingszd2_1166);
																									}
																									BgL_arg3139z00_1304 =
																										MAKE_PAIR
																										(BgL_kclassz00_1299,
																										BgL_classesz00_1167);
																									BgL_arg3140z00_1305 =
																										MAKE_PAIR(BgL_exprz00_1281,
																										BgL_instantiatesz00_1168);
																									{
																										obj_t
																											BgL_instantiatesz00_3978;
																										obj_t BgL_classesz00_3977;

																										obj_t
																											BgL_rewritezd2bindingszd2_3976;
																										obj_t
																											BgL_privatezd2variableszd2_3975;
																										obj_t
																											BgL_userzd2variableszd2_3974;
																										obj_t BgL_bindingsz00_3973;

																										BgL_bindingsz00_3973 =
																											BgL_arg3135z00_1300;
																										BgL_userzd2variableszd2_3974
																											= BgL_arg3136z00_1301;
																										BgL_privatezd2variableszd2_3975
																											= BgL_arg3137z00_1302;
																										BgL_rewritezd2bindingszd2_3976
																											= BgL_arg3138z00_1303;
																										BgL_classesz00_3977 =
																											BgL_arg3139z00_1304;
																										BgL_instantiatesz00_3978 =
																											BgL_arg3140z00_1305;
																										BgL_instantiatesz00_1168 =
																											BgL_instantiatesz00_3978;
																										BgL_classesz00_1167 =
																											BgL_classesz00_3977;
																										BgL_rewritezd2bindingszd2_1166
																											=
																											BgL_rewritezd2bindingszd2_3976;
																										BgL_privatezd2variableszd2_1165
																											=
																											BgL_privatezd2variableszd2_3975;
																										BgL_userzd2variableszd2_1164
																											=
																											BgL_userzd2variableszd2_3974;
																										BgL_bindingsz00_1163 =
																											BgL_bindingsz00_3973;
																										goto
																											BgL_zc3anonymousza33054ze3z83_1169;
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
																{	/* Expand/object.scm 457 */
																BgL_tagzd21566zd2_1283:
																	return
																		BGl_errorz00zz__errorz00(BFALSE,
																		BGl_string3846z00zzexpand_objectz00,
																		CAR(BgL_bindingsz00_1163));
																}
														}
													else
														{	/* Expand/object.scm 457 */
															goto BgL_tagzd21566zd2_1283;
														}
												}
											else
												{	/* Expand/object.scm 457 */
													goto BgL_tagzd21566zd2_1283;
												}
										}
									else
										{	/* Expand/object.scm 457 */
											goto BgL_tagzd21566zd2_1283;
										}
								}
							}
					}
				}
			}
		}
	}



/* <anonymous:3095> */
	obj_t BGl_zc3anonymousza33095ze3z83zzexpand_objectz00(obj_t BgL_envz00_2938,
		obj_t BgL_userz00_2942, obj_t BgL_privatez00_2943, obj_t BgL_classz00_2944,
		obj_t BgL_instantiatez00_2945)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 437 */
			{	/* Expand/object.scm 438 */
				obj_t BgL_e1z00_2941;

				BgL_e1z00_2941 = PROCEDURE_REF(BgL_envz00_2938, (int) (((long) 2)));
				{
					obj_t BgL_userz00_1223;

					obj_t BgL_privatez00_1224;

					obj_t BgL_classz00_1225;

					obj_t BgL_instantiatez00_1226;

					BgL_userz00_1223 = BgL_userz00_2942;
					BgL_privatez00_1224 = BgL_privatez00_2943;
					BgL_classz00_1225 = BgL_classz00_2944;
					BgL_instantiatez00_1226 = BgL_instantiatez00_2945;
					{	/* Expand/object.scm 438 */
						obj_t BgL_cidz00_1228;

						{
							BgL_typez00_bglt BgL_auxz00_3984;

							BgL_auxz00_3984 = (BgL_typez00_bglt) (BgL_classz00_1225);
							BgL_cidz00_1228 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_3984))->BgL_idz00);
						}
						{	/* Expand/object.scm 438 */
							obj_t BgL_fillz00_1229;

							{	/* Expand/object.scm 439 */
								obj_t BgL_list3119z00_1265;

								{	/* Expand/object.scm 439 */
									obj_t BgL_arg3120z00_1266;

									obj_t BgL_arg3121z00_1267;

									BgL_arg3120z00_1266 = CNST_TABLE_REF(((long) 23));
									{	/* Expand/object.scm 439 */
										obj_t BgL_arg3122z00_1268;

										BgL_arg3122z00_1268 =
											MAKE_PAIR(CNST_TABLE_REF(((long) 24)), BNIL);
										BgL_arg3121z00_1267 =
											MAKE_PAIR(BgL_cidz00_1228, BgL_arg3122z00_1268);
									}
									BgL_list3119z00_1265 =
										MAKE_PAIR(BgL_arg3120z00_1266, BgL_arg3121z00_1267);
								}
								BgL_fillz00_1229 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list3119z00_1265);
							}
							{	/* Expand/object.scm 439 */
								obj_t BgL_constrsz00_1230;

								BgL_constrsz00_1230 =
									BGl_findzd2classzd2constructorsz00zzobject_classz00(
									(BgL_tclassz00_bglt) (BgL_classz00_1225));
								{	/* Expand/object.scm 442 */
									obj_t BgL_allocz00_2936;

									{
										int BgL_auxz00_3995;

										BgL_auxz00_3995 = (int) (((long) 3));
										BgL_allocz00_2936 =
											MAKE_L_PROCEDURE(BGl_allocz00zzexpand_objectz00,
											BgL_auxz00_3995);
									}
									PROCEDURE_L_SET(BgL_allocz00_2936,
										(int) (((long) 0)), BgL_privatez00_1224);
									PROCEDURE_L_SET(BgL_allocz00_2936,
										(int) (((long) 1)), BgL_fillz00_1229);
									PROCEDURE_L_SET(BgL_allocz00_2936,
										(int) (((long) 2)), BgL_constrsz00_1230);
									{	/* Expand/object.scm 441 */

										{	/* Expand/object.scm 448 */
											obj_t BgL_arg3096z00_1232;

											{	/* Expand/object.scm 448 */
												obj_t BgL_arg3097z00_1233;

												BgL_arg3097z00_1233 =
													BGl_instantiatezd2ze3fillz31zzexpand_objectz00
													(BgL_instantiatez00_1226, BgL_classz00_1225,
													BgL_allocz00_2936, BgL_e1z00_2941);
												{	/* Expand/object.scm 448 */
													obj_t BgL_list3099z00_1235;

													BgL_list3099z00_1235 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3096z00_1232 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3097z00_1233, BgL_list3099z00_1235);
											}}
											return MAKE_PAIR(BgL_userz00_1223, BgL_arg3096z00_1232);
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



/* e1 */
	obj_t BGl_e1z00zzexpand_objectz00(obj_t BgL_envz00_2946, obj_t BgL_xz00_2949,
		obj_t BgL_nez00_2950)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 423 */
			{	/* Expand/object.scm 424 */
				obj_t BgL_ez00_2947;

				obj_t BgL_rewritezd2bindingszd2_2948;

				BgL_ez00_2947 = PROCEDURE_REF(BgL_envz00_2946, (int) (((long) 0)));
				BgL_rewritezd2bindingszd2_2948 =
					PROCEDURE_REF(BgL_envz00_2946, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1273;

					obj_t BgL_nez00_1274;

					BgL_xz00_1273 = BgL_xz00_2949;
					BgL_nez00_1274 = BgL_nez00_2950;
					if (SYMBOLP(BgL_xz00_1273))
						{	/* Expand/object.scm 425 */
							obj_t BgL_cellz00_1277;

							BgL_cellz00_1277 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_xz00_1273,
								BgL_rewritezd2bindingszd2_2948);
							if (PAIRP(BgL_cellz00_1277))
								{	/* Expand/object.scm 426 */
									return CDR(BgL_cellz00_1277);
								}
							else
								{	/* Expand/object.scm 426 */
									return BgL_xz00_1273;
								}
						}
					else
						{	/* Expand/object.scm 424 */
							return
								PROCEDURE_ENTRY(BgL_ez00_2947) (BgL_ez00_2947, BgL_xz00_1273,
								BgL_nez00_1274, BEOA);
						}
				}
			}
		}
	}



/* alloc */
	obj_t BGl_allocz00zzexpand_objectz00(obj_t BgL_envz00_2951,
		obj_t BgL_argsz00_2955)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 441 */
			{	/* Expand/object.scm 442 */
				obj_t BgL_privatez00_2952;

				obj_t BgL_fillz00_2953;

				obj_t BgL_constrsz00_2954;

				BgL_privatez00_2952 =
					PROCEDURE_L_REF(BgL_envz00_2951, (int) (((long) 0)));
				BgL_fillz00_2953 = PROCEDURE_L_REF(BgL_envz00_2951, (int) (((long) 1)));
				BgL_constrsz00_2954 =
					PROCEDURE_L_REF(BgL_envz00_2951, (int) (((long) 2)));
				{
					obj_t BgL_argsz00_1236;

					BgL_argsz00_1236 = BgL_argsz00_2955;
					{	/* Expand/object.scm 442 */
						obj_t BgL_arg3101z00_1238;

						obj_t BgL_arg3102z00_1239;

						BgL_arg3101z00_1238 = CNST_TABLE_REF(((long) 22));
						{	/* Expand/object.scm 443 */
							obj_t BgL_arg3103z00_1240;

							obj_t BgL_arg3104z00_1241;

							{	/* Expand/object.scm 443 */
								obj_t BgL_arg3106z00_1243;

								{	/* Expand/object.scm 443 */
									obj_t BgL_arg3107z00_1244;

									BgL_arg3107z00_1244 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_argsz00_1236, BNIL);
									{	/* Expand/object.scm 443 */
										obj_t BgL_list3108z00_1245;

										BgL_list3108z00_1245 = MAKE_PAIR(BgL_arg3107z00_1244, BNIL);
										BgL_arg3106z00_1243 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_privatez00_2952, BgL_list3108z00_1245);
								}}
								BgL_arg3103z00_1240 =
									MAKE_PAIR(BgL_fillz00_2953, BgL_arg3106z00_1243);
							}
							{	/* Expand/object.scm 444 */
								obj_t BgL_arg3109z00_1246;

								obj_t BgL_arg3110z00_1247;

								if (NULLP(BgL_constrsz00_2954))
									{	/* Expand/object.scm 444 */
										BgL_arg3109z00_1246 = BNIL;
									}
								else
									{	/* Expand/object.scm 444 */
										obj_t BgL_head2472z00_1250;

										BgL_head2472z00_1250 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l2470z00_1252;

											obj_t BgL_tail2473z00_1253;

											BgL_l2470z00_1252 = BgL_constrsz00_2954;
											BgL_tail2473z00_1253 = BgL_head2472z00_1250;
										BgL_zc3anonymousza33112ze3z83_1254:
											if (NULLP(BgL_l2470z00_1252))
												{	/* Expand/object.scm 444 */
													BgL_arg3109z00_1246 = CDR(BgL_head2472z00_1250);
												}
											else
												{	/* Expand/object.scm 444 */
													obj_t BgL_newtail2474z00_1256;

													{	/* Expand/object.scm 444 */
														obj_t BgL_arg3115z00_1258;

														{	/* Expand/object.scm 444 */
															obj_t BgL_cz00_1260;

															BgL_cz00_1260 = CAR(BgL_l2470z00_1252);
															{	/* Expand/object.scm 445 */
																obj_t BgL_arg3117z00_1261;

																{	/* Expand/object.scm 445 */
																	obj_t BgL_list3118z00_1262;

																	BgL_list3118z00_1262 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3117z00_1261 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_privatez00_2952, BgL_list3118z00_1262);
																}
																BgL_arg3115z00_1258 =
																	MAKE_PAIR(BgL_cz00_1260, BgL_arg3117z00_1261);
															}
														}
														BgL_newtail2474z00_1256 =
															MAKE_PAIR(BgL_arg3115z00_1258, BNIL);
													}
													SET_CDR(BgL_tail2473z00_1253,
														BgL_newtail2474z00_1256);
													{
														obj_t BgL_tail2473z00_4045;

														obj_t BgL_l2470z00_4043;

														BgL_l2470z00_4043 = CDR(BgL_l2470z00_1252);
														BgL_tail2473z00_4045 = BgL_newtail2474z00_1256;
														BgL_tail2473z00_1253 = BgL_tail2473z00_4045;
														BgL_l2470z00_1252 = BgL_l2470z00_4043;
														goto BgL_zc3anonymousza33112ze3z83_1254;
													}
												}
										}
									}
								BgL_arg3110z00_1247 = MAKE_PAIR(BgL_privatez00_2952, BNIL);
								BgL_arg3104z00_1241 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3109z00_1246, BgL_arg3110z00_1247);
							}
							{	/* Expand/object.scm 442 */
								obj_t BgL_list3105z00_1242;

								BgL_list3105z00_1242 = MAKE_PAIR(BgL_arg3104z00_1241, BNIL);
								BgL_arg3102z00_1239 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3103z00_1240, BgL_list3105z00_1242);
							}
						}
						return MAKE_PAIR(BgL_arg3101z00_1238, BgL_arg3102z00_1239);
					}
				}
			}
		}
	}



/* expand-duplicate */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2duplicatezd2zzexpand_objectz00(obj_t
		BgL_xz00_34, obj_t BgL_ez00_35)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 480 */
			{
				obj_t BgL_duplicatez00_1332;

				obj_t BgL_dupz00_1333;

				obj_t BgL_provz00_1334;

				if (PAIRP(BgL_xz00_34))
					{	/* Expand/object.scm 481 */
						obj_t BgL_cdrzd21590zd2_1339;

						BgL_cdrzd21590zd2_1339 = CDR(BgL_xz00_34);
						if (PAIRP(BgL_cdrzd21590zd2_1339))
							{	/* Expand/object.scm 481 */
								BgL_duplicatez00_1332 = CAR(BgL_xz00_34);
								BgL_dupz00_1333 = CAR(BgL_cdrzd21590zd2_1339);
								BgL_provz00_1334 = CDR(BgL_cdrzd21590zd2_1339);
								{	/* Expand/object.scm 483 */
									obj_t BgL_idze2typeze2_1344;

									BgL_idze2typeze2_1344 =
										BGl_parsezd2idzd2zzast_identz00(BgL_duplicatez00_1332,
										BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_34));
									{	/* Expand/object.scm 483 */
										obj_t BgL_idz00_1345;

										BgL_idz00_1345 = CAR(BgL_idze2typeze2_1344);
										{	/* Expand/object.scm 484 */
											obj_t BgL_classz00_1346;

											BgL_classz00_1346 = CDR(BgL_idze2typeze2_1344);
											{	/* Expand/object.scm 485 */

												if (BGl_iszd2azf3z21zz__objectz00(BgL_classz00_1346,
														BGl_tclassz00zzobject_classz00))
													{	/* Expand/object.scm 492 */
														bool_t BgL_testz00_4062;

														{	/* Expand/object.scm 492 */
															BgL_tclassz00_bglt BgL_obj2157z00_2665;

															BgL_obj2157z00_2665 =
																(BgL_tclassz00_bglt) (BgL_classz00_1346);
															{
																obj_t BgL_auxz00_4064;

																{	/* Expand/object.scm 492 */
																	BgL_objectz00_bglt BgL_auxz00_4065;

																	BgL_auxz00_4065 =
																		(BgL_objectz00_bglt) (BgL_obj2157z00_2665);
																	BgL_auxz00_4064 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_4065);
																}
																BgL_testz00_4062 =
																	(((BgL_tclassz00_bglt)
																		CREF(BgL_auxz00_4064))->BgL_abstractzf3zf3);
															}
														}
														if (BgL_testz00_4062)
															{	/* Expand/object.scm 492 */
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string3847z00zzexpand_objectz00,
																	BgL_xz00_34);
															}
														else
															{	/* Expand/object.scm 495 */
																obj_t BgL_arg3161z00_1349;

																{	/* Expand/object.scm 495 */
																	obj_t BgL_arg3162z00_1350;

																	BgL_arg3162z00_1350 =
																		BGl_duplicatezd2ze3makez31zzexpand_objectz00
																		(BgL_xz00_34,
																		(BgL_tclassz00_bglt) (BgL_classz00_1346),
																		BgL_dupz00_1333, BgL_provz00_1334,
																		BgL_ez00_35);
																	BgL_arg3161z00_1349 =
																		PROCEDURE_ENTRY(BgL_ez00_35) (BgL_ez00_35,
																		BgL_arg3162z00_1350, BgL_ez00_35, BEOA);
																}
																return
																	BGl_replacez12z12zztools_miscz00(BgL_xz00_34,
																	BgL_arg3161z00_1349);
															}
													}
												else
													{	/* Expand/object.scm 489 */
														obj_t BgL_arg3163z00_1351;

														{	/* Expand/object.scm 489 */
															obj_t BgL_arg3167z00_1353;

															{	/* Expand/object.scm 490 */
																obj_t BgL_res3821z00_2668;

																{	/* Expand/object.scm 490 */
																	obj_t BgL_symbolz00_2666;

																	BgL_symbolz00_2666 = BgL_idz00_1345;
																	{	/* Expand/object.scm 490 */
																		obj_t BgL_arg2063z00_2667;

																		BgL_arg2063z00_2667 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2666);
																		BgL_res3821z00_2668 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2667);
																	}
																}
																BgL_arg3167z00_1353 = BgL_res3821z00_2668;
															}
															BgL_arg3163z00_1351 =
																string_append
																(BGl_string3848z00zzexpand_objectz00,
																BgL_arg3167z00_1353);
														}
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BgL_arg3163z00_1351, BgL_xz00_34);
													}
											}
										}
									}
								}
							}
						else
							{	/* Expand/object.scm 481 */
							BgL_tagzd21581zd2_1336:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string3849z00zzexpand_objectz00, BgL_xz00_34);
							}
					}
				else
					{	/* Expand/object.scm 481 */
						goto BgL_tagzd21581zd2_1336;
					}
			}
		}
	}



/* _expand-duplicate */
	obj_t BGl__expandzd2duplicatezd2zzexpand_objectz00(obj_t BgL_envz00_2956,
		obj_t BgL_xz00_2957, obj_t BgL_ez00_2958)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 480 */
			return
				BGl_expandzd2duplicatezd2zzexpand_objectz00(BgL_xz00_2957,
				BgL_ez00_2958);
		}
	}



/* duplicate->make */
	obj_t BGl_duplicatezd2ze3makez31zzexpand_objectz00(obj_t BgL_formz00_36,
		BgL_tclassz00_bglt BgL_classz00_37, obj_t BgL_duplicatedz00_38,
		obj_t BgL_providedz00_39, obj_t BgL_ez00_40)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 508 */
			{	/* Expand/object.scm 509 */
				obj_t BgL_slotsz00_1355;

				BgL_slotsz00_1355 =
					BGl_tclasszd2allzd2slotsz00zzobject_classz00(BgL_classz00_37);
				{	/* Expand/object.scm 509 */
					long BgL_lenz00_1356;

					BgL_lenz00_1356 = bgl_list_length(BgL_slotsz00_1355);
					{	/* Expand/object.scm 510 */
						obj_t BgL_dupzd2varzd2_1357;

						BgL_dupzd2varzd2_1357 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 25))));
						{	/* Expand/object.scm 511 */
							obj_t BgL_dupzd2varzd2typedz00_1358;

							{	/* Expand/object.scm 512 */
								obj_t BgL_arg3272z00_1504;

								{
									BgL_typez00_bglt BgL_auxz00_4089;

									BgL_auxz00_4089 = (BgL_typez00_bglt) (BgL_classz00_37);
									BgL_arg3272z00_1504 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_4089))->BgL_idz00);
								}
								BgL_dupzd2varzd2typedz00_1358 =
									BGl_makezd2typedzd2identz00zzast_identz00
									(BgL_dupzd2varzd2_1357, BgL_arg3272z00_1504);
							}
							{	/* Expand/object.scm 512 */
								obj_t BgL_newz00_1359;

								BgL_newz00_1359 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											16)));
								{	/* Expand/object.scm 513 */
									obj_t BgL_vargsz00_1360;

									{	/* Expand/object.scm 514 */
										long BgL_arg3270z00_1502;

										BgL_arg3270z00_1502 = bgl_list_length(BgL_slotsz00_1355);
										BgL_vargsz00_1360 =
											make_vector((int) (BgL_arg3270z00_1502), BUNSPEC);
									}
									{	/* Expand/object.scm 514 */

										{
											obj_t BgL_providedz00_1362;

											BgL_providedz00_1362 = BgL_providedz00_39;
										BgL_zc3anonymousza33169ze3z83_1363:
											if (NULLP(BgL_providedz00_1362))
												{	/* Expand/object.scm 517 */
													CNST_TABLE_REF(((long) 17));
												}
											else
												{	/* Expand/object.scm 519 */
													obj_t BgL_pz00_1365;

													BgL_pz00_1365 = CAR(BgL_providedz00_1362);
													{
														obj_t BgL_szd2namezd2_1369;

														obj_t BgL_lenz00_1370;

														obj_t BgL_valuez00_1371;

														obj_t BgL_szd2namezd2_1366;

														obj_t BgL_valuez00_1367;

														if (PAIRP(BgL_pz00_1365))
															{	/* Expand/object.scm 520 */
																obj_t BgL_carzd21607zd2_1376;

																obj_t BgL_cdrzd21608zd2_1377;

																BgL_carzd21607zd2_1376 = CAR(BgL_pz00_1365);
																BgL_cdrzd21608zd2_1377 = CDR(BgL_pz00_1365);
																if (SYMBOLP(BgL_carzd21607zd2_1376))
																	{	/* Expand/object.scm 520 */
																		if (PAIRP(BgL_cdrzd21608zd2_1377))
																			{	/* Expand/object.scm 520 */
																				if (NULLP(CDR(BgL_cdrzd21608zd2_1377)))
																					{	/* Expand/object.scm 520 */
																						BgL_szd2namezd2_1366 =
																							BgL_carzd21607zd2_1376;
																						BgL_valuez00_1367 =
																							CAR(BgL_cdrzd21608zd2_1377);
																						{	/* Expand/object.scm 524 */
																							obj_t BgL_arg3191z00_1402;

																							obj_t BgL_arg3192z00_1403;

																							BgL_arg3191z00_1402 =
																								BGl_findzd2slotzd2offsetz00zzexpand_objectz00
																								(BgL_slotsz00_1355,
																								BgL_szd2namezd2_1366,
																								BGl_string3850z00zzexpand_objectz00,
																								BgL_pz00_1365);
																							BgL_arg3192z00_1403 =
																								MAKE_PAIR(BTRUE,
																								BGl_objectzd2epairifyzd2zzexpand_objectz00
																								(BgL_valuez00_1367,
																									BgL_pz00_1365));
																							{	/* Expand/object.scm 523 */
																								int BgL_kz00_2701;

																								BgL_kz00_2701 =
																									CINT(BgL_arg3191z00_1402);
																								{	/* Expand/object.scm 523 */
																									obj_t BgL_xz00_2976;

																									BgL_xz00_2976 =
																										VECTOR_SET
																										(BgL_vargsz00_1360,
																										BgL_kz00_2701,
																										BgL_arg3192z00_1403);
																									BUNSPEC;
																					}}}}
																				else
																					{	/* Expand/object.scm 520 */
																						obj_t BgL_cdrzd21635zd2_1385;

																						BgL_cdrzd21635zd2_1385 =
																							CDR(BgL_cdrzd21608zd2_1377);
																						if (PAIRP(BgL_cdrzd21635zd2_1385))
																							{	/* Expand/object.scm 520 */
																								if (NULLP(CDR
																										(BgL_cdrzd21635zd2_1385)))
																									{	/* Expand/object.scm 520 */
																										BgL_szd2namezd2_1369 =
																											BgL_carzd21607zd2_1376;
																										BgL_lenz00_1370 =
																											CAR
																											(BgL_cdrzd21608zd2_1377);
																										BgL_valuez00_1371 =
																											CAR
																											(BgL_cdrzd21635zd2_1385);
																										{	/* Expand/object.scm 531 */
																											obj_t BgL_snumz00_1405;

																											BgL_snumz00_1405 =
																												BGl_findzd2slotzd2offsetz00zzexpand_objectz00
																												(BgL_slotsz00_1355,
																												BgL_szd2namezd2_1369,
																												BGl_string3850z00zzexpand_objectz00,
																												BgL_pz00_1365);
																											{	/* Expand/object.scm 531 */
																												obj_t BgL_slotz00_1406;

																												BgL_slotz00_1406 =
																													bgl_list_ref
																													(BgL_slotsz00_1355,
																													(long)
																													CINT
																													(BgL_snumz00_1405));
																												{	/* Expand/object.scm 535 */

																													{	/* Expand/object.scm 536 */
																														bool_t
																															BgL_testz00_4128;
																														{	/* Expand/object.scm 536 */
																															BgL_slotz00_bglt
																																BgL_obj2367z00_2703;
																															BgL_obj2367z00_2703
																																=
																																(BgL_slotz00_bglt)
																																(BgL_slotz00_1406);
																															BgL_testz00_4128 =
																																CBOOL(((
																																		(BgL_slotz00_bglt)
																																		CREF
																																		(BgL_obj2367z00_2703))->
																																	BgL_indexedz00));
																														}
																														if (BgL_testz00_4128)
																															{	/* Expand/object.scm 536 */
																																{	/* Expand/object.scm 541 */
																																	obj_t
																																		BgL_arg3195z00_1408;
																																	BgL_arg3195z00_1408
																																		=
																																		MAKE_PAIR
																																		(BTRUE,
																																		BGl_objectzd2epairifyzd2zzexpand_objectz00
																																		(BgL_valuez00_1371,
																																			BgL_pz00_1365));
																																	VECTOR_SET
																																		(BgL_vargsz00_1360,
																																		CINT
																																		(BgL_snumz00_1405),
																																		BgL_arg3195z00_1408);
																																}
																																{	/* Expand/object.scm 542 */
																																	long
																																		BgL_arg3197z00_1410;
																																	obj_t
																																		BgL_arg3198z00_1411;
																																	BgL_arg3197z00_1410
																																		=
																																		((long)
																																		CINT
																																		(BgL_snumz00_1405)
																																		-
																																		((long) 1));
																																	BgL_arg3198z00_1411
																																		=
																																		MAKE_PAIR
																																		(BFALSE,
																																		BgL_lenz00_1370);
																																	VECTOR_SET
																																		(BgL_vargsz00_1360,
																																		(int)
																																		(BgL_arg3197z00_1410),
																																		BgL_arg3198z00_1411);
																															}}
																														else
																															{	/* Expand/object.scm 536 */
																																BGl_errorz00zz__errorz00
																																	(BFALSE,
																																	BGl_string3849z00zzexpand_objectz00,
																																	BgL_formz00_36);
																															}
																													}
																												}
																											}
																										}
																									}
																								else
																									{	/* Expand/object.scm 520 */
																									BgL_tagzd21600zd2_1373:
																										BGl_errorz00zz__errorz00
																											(BFALSE,
																											BGl_string3849z00zzexpand_objectz00,
																											BgL_formz00_36);
																									}
																							}
																						else
																							{	/* Expand/object.scm 520 */
																								goto BgL_tagzd21600zd2_1373;
																							}
																					}
																			}
																		else
																			{	/* Expand/object.scm 520 */
																				goto BgL_tagzd21600zd2_1373;
																			}
																	}
																else
																	{	/* Expand/object.scm 520 */
																		goto BgL_tagzd21600zd2_1373;
																	}
															}
														else
															{	/* Expand/object.scm 520 */
																goto BgL_tagzd21600zd2_1373;
															}
													}
													{
														obj_t BgL_providedz00_4145;

														BgL_providedz00_4145 = CDR(BgL_providedz00_1362);
														BgL_providedz00_1362 = BgL_providedz00_4145;
														goto BgL_zc3anonymousza33169ze3z83_1363;
													}
												}
										}
										{
											long BgL_iz00_1415;

											obj_t BgL_slotsz00_1416;

											BgL_iz00_1415 = ((long) 0);
											BgL_slotsz00_1416 = BgL_slotsz00_1355;
										BgL_zc3anonymousza33200ze3z83_1417:
											if (NULLP(BgL_slotsz00_1416))
												{	/* Expand/object.scm 550 */
													CNST_TABLE_REF(((long) 17));
												}
											else
												{	/* Expand/object.scm 552 */
													obj_t BgL_valuez00_1419;

													BgL_valuez00_1419 =
														VECTOR_REF(BgL_vargsz00_1360,
														(int) (BgL_iz00_1415));
													if (PAIRP(BgL_valuez00_1419))
														{	/* Expand/object.scm 553 */
															CNST_TABLE_REF(((long) 26));
														}
													else
														{	/* Expand/object.scm 556 */
															obj_t BgL_slotz00_1421;

															BgL_slotz00_1421 = CAR(BgL_slotsz00_1416);
															{	/* Expand/object.scm 557 */
																bool_t BgL_testz00_4156;

																{	/* Expand/object.scm 557 */
																	BgL_slotz00_bglt BgL_obj2367z00_2718;

																	BgL_obj2367z00_2718 =
																		(BgL_slotz00_bglt) (BgL_slotz00_1421);
																	BgL_testz00_4156 =
																		CBOOL(
																		(((BgL_slotz00_bglt)
																				CREF(BgL_obj2367z00_2718))->
																			BgL_indexedz00));
																}
																if (BgL_testz00_4156)
																	{	/* Expand/object.scm 560 */
																		obj_t BgL_azd2namezd2_1423;

																		{	/* Expand/object.scm 560 */
																			obj_t BgL_arg3210z00_1430;

																			obj_t BgL_arg3211z00_1431;

																			obj_t BgL_arg3212z00_1432;

																			obj_t BgL_arg3213z00_1433;

																			{
																				BgL_typez00_bglt BgL_auxz00_4160;

																				BgL_auxz00_4160 =
																					(BgL_typez00_bglt) (BgL_classz00_37);
																				BgL_arg3210z00_1430 =
																					(((BgL_typez00_bglt)
																						CREF(BgL_auxz00_4160))->BgL_idz00);
																			}
																			BgL_arg3211z00_1431 =
																				CNST_TABLE_REF(((long) 9));
																			{
																				BgL_slotz00_bglt BgL_auxz00_4164;

																				BgL_auxz00_4164 =
																					(BgL_slotz00_bglt) (BgL_slotz00_1421);
																				BgL_arg3212z00_1432 =
																					(((BgL_slotz00_bglt)
																						CREF(BgL_auxz00_4164))->BgL_idz00);
																			}
																			BgL_arg3213z00_1433 =
																				CNST_TABLE_REF(((long) 8));
																			{	/* Expand/object.scm 560 */
																				obj_t BgL_list3214z00_1434;

																				{	/* Expand/object.scm 560 */
																					obj_t BgL_arg3215z00_1435;

																					{	/* Expand/object.scm 560 */
																						obj_t BgL_arg3216z00_1436;

																						{	/* Expand/object.scm 560 */
																							obj_t BgL_arg3217z00_1437;

																							BgL_arg3217z00_1437 =
																								MAKE_PAIR(BgL_arg3213z00_1433,
																								BNIL);
																							BgL_arg3216z00_1436 =
																								MAKE_PAIR(BgL_arg3212z00_1432,
																								BgL_arg3217z00_1437);
																						}
																						BgL_arg3215z00_1435 =
																							MAKE_PAIR(BgL_arg3211z00_1431,
																							BgL_arg3216z00_1436);
																					}
																					BgL_list3214z00_1434 =
																						MAKE_PAIR(BgL_arg3210z00_1430,
																						BgL_arg3215z00_1435);
																				}
																				BgL_azd2namezd2_1423 =
																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																					(BgL_list3214z00_1434);
																		}}
																		{	/* Expand/object.scm 566 */
																			obj_t BgL_arg3204z00_1424;

																			{	/* Expand/object.scm 566 */
																				obj_t BgL_arg3205z00_1425;

																				{	/* Expand/object.scm 566 */
																					obj_t BgL_arg3206z00_1426;

																					{	/* Expand/object.scm 566 */
																						obj_t BgL_list3207z00_1427;

																						{	/* Expand/object.scm 566 */
																							obj_t BgL_arg3209z00_1429;

																							BgL_arg3209z00_1429 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3207z00_1427 =
																								MAKE_PAIR(BINT(((long) 0)),
																								BgL_arg3209z00_1429);
																						}
																						BgL_arg3206z00_1426 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_dupzd2varzd2_1357,
																							BgL_list3207z00_1427);
																					}
																					BgL_arg3205z00_1425 =
																						MAKE_PAIR(BgL_azd2namezd2_1423,
																						BgL_arg3206z00_1426);
																				}
																				BgL_arg3204z00_1424 =
																					MAKE_PAIR(BTRUE, BgL_arg3205z00_1425);
																			}
																			VECTOR_SET(BgL_vargsz00_1360,
																				(int) (BgL_iz00_1415),
																				BgL_arg3204z00_1424);
																	}}
																else
																	{	/* Expand/object.scm 569 */
																		obj_t BgL_azd2namezd2_1438;

																		{	/* Expand/object.scm 569 */
																			obj_t BgL_arg3222z00_1443;

																			obj_t BgL_arg3223z00_1444;

																			obj_t BgL_arg3224z00_1445;

																			{
																				BgL_typez00_bglt BgL_auxz00_4181;

																				BgL_auxz00_4181 =
																					(BgL_typez00_bglt) (BgL_classz00_37);
																				BgL_arg3222z00_1443 =
																					(((BgL_typez00_bglt)
																						CREF(BgL_auxz00_4181))->BgL_idz00);
																			}
																			BgL_arg3223z00_1444 =
																				CNST_TABLE_REF(((long) 9));
																			{
																				BgL_slotz00_bglt BgL_auxz00_4185;

																				BgL_auxz00_4185 =
																					(BgL_slotz00_bglt) (BgL_slotz00_1421);
																				BgL_arg3224z00_1445 =
																					(((BgL_slotz00_bglt)
																						CREF(BgL_auxz00_4185))->BgL_idz00);
																			}
																			{	/* Expand/object.scm 569 */
																				obj_t BgL_list3225z00_1446;

																				{	/* Expand/object.scm 569 */
																					obj_t BgL_arg3227z00_1447;

																					{	/* Expand/object.scm 569 */
																						obj_t BgL_arg3228z00_1448;

																						BgL_arg3228z00_1448 =
																							MAKE_PAIR(BgL_arg3224z00_1445,
																							BNIL);
																						BgL_arg3227z00_1447 =
																							MAKE_PAIR(BgL_arg3223z00_1444,
																							BgL_arg3228z00_1448);
																					}
																					BgL_list3225z00_1446 =
																						MAKE_PAIR(BgL_arg3222z00_1443,
																						BgL_arg3227z00_1447);
																				}
																				BgL_azd2namezd2_1438 =
																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																					(BgL_list3225z00_1446);
																		}}
																		{	/* Expand/object.scm 574 */
																			obj_t BgL_arg3218z00_1439;

																			{	/* Expand/object.scm 574 */
																				obj_t BgL_arg3219z00_1440;

																				{	/* Expand/object.scm 574 */
																					obj_t BgL_arg3220z00_1441;

																					{	/* Expand/object.scm 574 */
																						obj_t BgL_list3221z00_1442;

																						BgL_list3221z00_1442 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3220z00_1441 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_dupzd2varzd2_1357,
																							BgL_list3221z00_1442);
																					}
																					BgL_arg3219z00_1440 =
																						MAKE_PAIR(BgL_azd2namezd2_1438,
																						BgL_arg3220z00_1441);
																				}
																				BgL_arg3218z00_1439 =
																					MAKE_PAIR(BTRUE, BgL_arg3219z00_1440);
																			}
																			VECTOR_SET(BgL_vargsz00_1360,
																				(int) (BgL_iz00_1415),
																				BgL_arg3218z00_1439);
														}}}}
													{
														obj_t BgL_slotsz00_4200;

														long BgL_iz00_4198;

														BgL_iz00_4198 = (BgL_iz00_1415 + ((long) 1));
														BgL_slotsz00_4200 = CDR(BgL_slotsz00_1416);
														BgL_slotsz00_1416 = BgL_slotsz00_4200;
														BgL_iz00_1415 = BgL_iz00_4198;
														goto BgL_zc3anonymousza33200ze3z83_1417;
													}
												}
										}
										{
											long BgL_iz00_1455;

											obj_t BgL_slotsz00_1456;

											obj_t BgL_largsz00_1457;

											obj_t BgL_virtualsz00_1458;

											BgL_iz00_1455 = ((long) 0);
											BgL_slotsz00_1456 = BgL_slotsz00_1355;
											BgL_largsz00_1457 = BNIL;
											BgL_virtualsz00_1458 = BNIL;
										BgL_zc3anonymousza33231ze3z83_1459:
											if ((BgL_iz00_1455 == BgL_lenz00_1356))
												{	/* Expand/object.scm 583 */
													obj_t BgL_makezd2namezd2_1461;

													{	/* Expand/object.scm 583 */
														obj_t BgL_arg3252z00_1482;

														{	/* Expand/object.scm 583 */
															obj_t BgL_arg3253z00_1483;

															obj_t BgL_arg3254z00_1484;

															{	/* Expand/object.scm 583 */
																obj_t BgL_res3823z00_2736;

																{	/* Expand/object.scm 583 */
																	obj_t BgL_symbolz00_2734;

																	BgL_symbolz00_2734 =
																		CNST_TABLE_REF(((long) 27));
																	{	/* Expand/object.scm 583 */
																		obj_t BgL_arg2063z00_2735;

																		BgL_arg2063z00_2735 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2734);
																		BgL_res3823z00_2736 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2735);
																}}
																BgL_arg3253z00_1483 = BgL_res3823z00_2736;
															}
															{	/* Expand/object.scm 583 */
																obj_t BgL_arg3257z00_1487;

																{
																	BgL_typez00_bglt BgL_auxz00_4207;

																	BgL_auxz00_4207 =
																		(BgL_typez00_bglt) (BgL_classz00_37);
																	BgL_arg3257z00_1487 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_auxz00_4207))->BgL_idz00);
																}
																{	/* Expand/object.scm 583 */
																	obj_t BgL_res3824z00_2740;

																	{	/* Expand/object.scm 583 */
																		obj_t BgL_arg2063z00_2739;

																		BgL_arg2063z00_2739 =
																			SYMBOL_TO_STRING(BgL_arg3257z00_1487);
																		BgL_res3824z00_2740 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_2739);
																	}
																	BgL_arg3254z00_1484 = BgL_res3824z00_2740;
															}}
															{	/* Expand/object.scm 583 */
																obj_t BgL_list3255z00_1485;

																{	/* Expand/object.scm 583 */
																	obj_t BgL_arg3256z00_1486;

																	BgL_arg3256z00_1486 =
																		MAKE_PAIR(BgL_arg3254z00_1484, BNIL);
																	BgL_list3255z00_1485 =
																		MAKE_PAIR(BgL_arg3253z00_1483,
																		BgL_arg3256z00_1486);
																}
																BgL_arg3252z00_1482 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list3255z00_1485);
														}}
														BgL_makezd2namezd2_1461 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg3252z00_1482));
													}
													{	/* Expand/object.scm 583 */
														obj_t BgL_allocz00_1462;

														BgL_allocz00_1462 =
															MAKE_PAIR(BgL_makezd2namezd2_1461,
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(bgl_reverse_bang(BgL_largsz00_1457), BNIL));
														{	/* Expand/object.scm 584 */

															{	/* Expand/object.scm 585 */
																obj_t BgL_arg3233z00_1463;

																obj_t BgL_arg3234z00_1464;

																BgL_arg3233z00_1463 =
																	CNST_TABLE_REF(((long) 28));
																{	/* Expand/object.scm 585 */
																	obj_t BgL_arg3235z00_1465;

																	obj_t BgL_arg3236z00_1466;

																	{	/* Expand/object.scm 585 */
																		obj_t BgL_arg3238z00_1468;

																		obj_t BgL_arg3239z00_1469;

																		{	/* Expand/object.scm 585 */
																			obj_t BgL_arg3240z00_1470;

																			{	/* Expand/object.scm 585 */
																				obj_t BgL_list3241z00_1471;

																				BgL_list3241z00_1471 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3240z00_1470 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_duplicatedz00_38,
																					BgL_list3241z00_1471);
																			}
																			BgL_arg3238z00_1468 =
																				MAKE_PAIR(BgL_dupzd2varzd2typedz00_1358,
																				BgL_arg3240z00_1470);
																		}
																		{	/* Expand/object.scm 586 */
																			obj_t BgL_arg3242z00_1472;

																			{	/* Expand/object.scm 586 */
																				obj_t BgL_arg3245z00_1475;

																				{	/* Expand/object.scm 586 */
																					obj_t BgL_list3246z00_1476;

																					BgL_list3246z00_1476 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3245z00_1475 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_allocz00_1462,
																						BgL_list3246z00_1476);
																				}
																				BgL_arg3242z00_1472 =
																					MAKE_PAIR(BgL_newz00_1359,
																					BgL_arg3245z00_1475);
																			}
																			{	/* Expand/object.scm 585 */
																				obj_t BgL_list3244z00_1474;

																				BgL_list3244z00_1474 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3239z00_1469 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3242z00_1472,
																					BgL_list3244z00_1474);
																		}}
																		BgL_arg3235z00_1465 =
																			MAKE_PAIR(BgL_arg3238z00_1468,
																			BgL_arg3239z00_1469);
																	}
																	{	/* Expand/object.scm 587 */
																		obj_t BgL_arg3247z00_1477;

																		obj_t BgL_arg3248z00_1478;

																		BgL_arg3247z00_1477 =
																			bgl_reverse_bang(BgL_virtualsz00_1458);
																		BgL_arg3248z00_1478 =
																			MAKE_PAIR(BgL_newz00_1359, BNIL);
																		BgL_arg3236z00_1466 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3247z00_1477,
																			BgL_arg3248z00_1478);
																	}
																	{	/* Expand/object.scm 585 */
																		obj_t BgL_list3237z00_1467;

																		BgL_list3237z00_1467 =
																			MAKE_PAIR(BgL_arg3236z00_1466, BNIL);
																		BgL_arg3234z00_1464 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3235z00_1465,
																			BgL_list3237z00_1467);
																}}
																return
																	MAKE_PAIR(BgL_arg3233z00_1463,
																	BgL_arg3234z00_1464);
															}
														}
													}
												}
											else
												{	/* Expand/object.scm 589 */
													obj_t BgL_valuez00_1488;

													BgL_valuez00_1488 =
														CDR(VECTOR_REF(BgL_vargsz00_1360,
															(int) (BgL_iz00_1455)));
													{	/* Expand/object.scm 591 */
														bool_t BgL_testz00_4239;

														{	/* Expand/object.scm 591 */
															obj_t BgL_arg3268z00_1499;

															BgL_arg3268z00_1499 = CAR(BgL_slotsz00_1456);
															BgL_testz00_4239 =
																BGl_slotzd2virtualzf3z21zzobject_slotsz00(
																(BgL_slotz00_bglt) (BgL_arg3268z00_1499));
														}
														if (BgL_testz00_4239)
															{	/* Expand/object.scm 592 */
																long BgL_arg3259z00_1490;

																obj_t BgL_arg3260z00_1491;

																obj_t BgL_arg3261z00_1492;

																BgL_arg3259z00_1490 =
																	(BgL_iz00_1455 + ((long) 1));
																BgL_arg3260z00_1491 = CDR(BgL_slotsz00_1456);
																BgL_arg3261z00_1492 =
																	MAKE_PAIR
																	(BGl_makezd2virtualzd2setz00zzexpand_objectz00
																	(CAR(BgL_slotsz00_1456), BgL_valuez00_1488,
																		BgL_newz00_1359, (obj_t) (BgL_classz00_37),
																		BgL_formz00_36, BgL_ez00_40,
																		BGl_string3850z00zzexpand_objectz00),
																	BgL_virtualsz00_1458);
																{
																	obj_t BgL_virtualsz00_4251;

																	obj_t BgL_slotsz00_4250;

																	long BgL_iz00_4249;

																	BgL_iz00_4249 = BgL_arg3259z00_1490;
																	BgL_slotsz00_4250 = BgL_arg3260z00_1491;
																	BgL_virtualsz00_4251 = BgL_arg3261z00_1492;
																	BgL_virtualsz00_1458 = BgL_virtualsz00_4251;
																	BgL_slotsz00_1456 = BgL_slotsz00_4250;
																	BgL_iz00_1455 = BgL_iz00_4249;
																	goto BgL_zc3anonymousza33231ze3z83_1459;
																}
															}
														else
															{	/* Expand/object.scm 604 */
																long BgL_arg3265z00_1496;

																obj_t BgL_arg3266z00_1497;

																obj_t BgL_arg3267z00_1498;

																BgL_arg3265z00_1496 =
																	(BgL_iz00_1455 + ((long) 1));
																BgL_arg3266z00_1497 = CDR(BgL_slotsz00_1456);
																BgL_arg3267z00_1498 =
																	MAKE_PAIR(BgL_valuez00_1488,
																	BgL_largsz00_1457);
																{
																	obj_t BgL_largsz00_4257;

																	obj_t BgL_slotsz00_4256;

																	long BgL_iz00_4255;

																	BgL_iz00_4255 = BgL_arg3265z00_1496;
																	BgL_slotsz00_4256 = BgL_arg3266z00_1497;
																	BgL_largsz00_4257 = BgL_arg3267z00_1498;
																	BgL_largsz00_1457 = BgL_largsz00_4257;
																	BgL_slotsz00_1456 = BgL_slotsz00_4256;
																	BgL_iz00_1455 = BgL_iz00_4255;
																	goto BgL_zc3anonymousza33231ze3z83_1459;
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



/* expand-widen! */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2widenz12zc0zzexpand_objectz00(obj_t
		BgL_xz00_41, obj_t BgL_ez00_42)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 612 */
			{
				obj_t BgL_widenz12z12_1506;

				obj_t BgL_objz00_1507;

				obj_t BgL_providedz00_1508;

				if (PAIRP(BgL_xz00_41))
					{	/* Expand/object.scm 613 */
						obj_t BgL_cdrzd21685zd2_1513;

						BgL_cdrzd21685zd2_1513 = CDR(BgL_xz00_41);
						if (PAIRP(BgL_cdrzd21685zd2_1513))
							{	/* Expand/object.scm 613 */
								BgL_widenz12z12_1506 = CAR(BgL_xz00_41);
								BgL_objz00_1507 = CAR(BgL_cdrzd21685zd2_1513);
								BgL_providedz00_1508 = CDR(BgL_cdrzd21685zd2_1513);
								{	/* Expand/object.scm 615 */
									BgL_typez00_bglt BgL_classz00_1518;

									BgL_classz00_1518 =
										BGl_typezd2ofzd2idz00zzast_identz00(BgL_widenz12z12_1506,
										BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_41));
									{	/* Expand/object.scm 616 */
										bool_t BgL_testz00_4265;

										{	/* Expand/object.scm 616 */
											bool_t BgL_testz00_4266;

											{	/* Expand/object.scm 616 */
												obj_t BgL_obj2139z00_2759;

												BgL_obj2139z00_2759 = (obj_t) (BgL_classz00_1518);
												BgL_testz00_4266 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2139z00_2759,
													BGl_tclassz00zzobject_classz00);
											}
											if (BgL_testz00_4266)
												{	/* Expand/object.scm 616 */
													BgL_tclassz00_bglt BgL_obj2147z00_2760;

													BgL_obj2147z00_2760 =
														(BgL_tclassz00_bglt) (BgL_classz00_1518);
													{	/* Expand/object.scm 616 */
														obj_t BgL_auxz00_4270;

														{
															obj_t BgL_auxz00_4271;

															{	/* Expand/object.scm 616 */
																BgL_objectz00_bglt BgL_auxz00_4272;

																BgL_auxz00_4272 =
																	(BgL_objectz00_bglt) (BgL_obj2147z00_2760);
																BgL_auxz00_4271 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_4272);
															}
															BgL_auxz00_4270 =
																(((BgL_tclassz00_bglt) CREF(BgL_auxz00_4271))->
																BgL_wideningz00);
														}
														BgL_testz00_4265 = CBOOL(BgL_auxz00_4270);
													}
												}
											else
												{	/* Expand/object.scm 616 */
													BgL_testz00_4265 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_4265)
											{	/* Expand/object.scm 617 */
												obj_t BgL_arg3280z00_1520;

												{	/* Expand/object.scm 617 */
													obj_t BgL_arg3281z00_1521;

													BgL_arg3281z00_1521 =
														BGl_makezd2wideningzd2zzexpand_objectz00
														(BgL_xz00_41,
														(BgL_tclassz00_bglt) (BgL_classz00_1518),
														BgL_objz00_1507, BgL_providedz00_1508, BgL_ez00_42);
													BgL_arg3280z00_1520 =
														PROCEDURE_ENTRY(BgL_ez00_42) (BgL_ez00_42,
														BgL_arg3281z00_1521, BgL_ez00_42, BEOA);
												}
												return
													BGl_replacez12z12zztools_miscz00(BgL_xz00_41,
													BgL_arg3280z00_1520);
											}
										else
											{	/* Expand/object.scm 619 */
												obj_t BgL_arg3282z00_1522;

												{	/* Expand/object.scm 619 */
													obj_t BgL_arg3284z00_1524;

													{	/* Expand/object.scm 620 */
														obj_t BgL_arg3285z00_1525;

														BgL_arg3285z00_1525 =
															(((BgL_typez00_bglt) CREF(BgL_classz00_1518))->
															BgL_idz00);
														{	/* Expand/object.scm 620 */
															obj_t BgL_res3825z00_2764;

															{	/* Expand/object.scm 620 */
																obj_t BgL_arg2063z00_2763;

																BgL_arg2063z00_2763 =
																	SYMBOL_TO_STRING(BgL_arg3285z00_1525);
																BgL_res3825z00_2764 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2763);
															}
															BgL_arg3284z00_1524 = BgL_res3825z00_2764;
														}
													}
													BgL_arg3282z00_1522 =
														string_append(BGl_string3851z00zzexpand_objectz00,
														BgL_arg3284z00_1524);
												}
												return
													BGl_errorz00zz__errorz00(BFALSE, BgL_arg3282z00_1522,
													BgL_xz00_41);
											}
									}
								}
							}
						else
							{	/* Expand/object.scm 613 */
							BgL_tagzd21676zd2_1510:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string3852z00zzexpand_objectz00, BgL_xz00_41);
							}
					}
				else
					{	/* Expand/object.scm 613 */
						goto BgL_tagzd21676zd2_1510;
					}
			}
		}
	}



/* _expand-widen! */
	obj_t BGl__expandzd2widenz12zc0zzexpand_objectz00(obj_t BgL_envz00_2959,
		obj_t BgL_xz00_2960, obj_t BgL_ez00_2961)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 612 */
			return
				BGl_expandzd2widenz12zc0zzexpand_objectz00(BgL_xz00_2960,
				BgL_ez00_2961);
		}
	}



/* make-widening */
	obj_t BGl_makezd2wideningzd2zzexpand_objectz00(obj_t BgL_formz00_43,
		BgL_tclassz00_bglt BgL_classz00_44, obj_t BgL_objz00_45,
		obj_t BgL_providedz00_46, obj_t BgL_ez00_47)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 628 */
			{	/* Expand/object.scm 629 */
				obj_t BgL_slotsz00_1528;

				{
					obj_t BgL_auxz00_4292;

					{	/* Expand/object.scm 629 */
						BgL_objectz00_bglt BgL_auxz00_4293;

						BgL_auxz00_4293 = (BgL_objectz00_bglt) (BgL_classz00_44);
						BgL_auxz00_4292 = BGL_OBJECT_WIDENING(BgL_auxz00_4293);
					}
					BgL_slotsz00_1528 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_4292))->BgL_slotsz00);
				}
				{	/* Expand/object.scm 629 */
					BgL_globalz00_bglt BgL_holderz00_1529;

					{
						obj_t BgL_auxz00_4297;

						{	/* Expand/object.scm 630 */
							BgL_objectz00_bglt BgL_auxz00_4298;

							BgL_auxz00_4298 = (BgL_objectz00_bglt) (BgL_classz00_44);
							BgL_auxz00_4297 = BGL_OBJECT_WIDENING(BgL_auxz00_4298);
						}
						BgL_holderz00_1529 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_4297))->BgL_holderz00);
					}
					{	/* Expand/object.scm 630 */
						long BgL_lenz00_1530;

						BgL_lenz00_1530 = bgl_list_length(BgL_slotsz00_1528);
						{	/* Expand/object.scm 631 */
							obj_t BgL_vargsz00_1531;

							BgL_vargsz00_1531 = make_vector((int) (BgL_lenz00_1530), BUNSPEC);
							{	/* Expand/object.scm 632 */
								obj_t BgL_dupzd2varzd2_1532;

								BgL_dupzd2varzd2_1532 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												29))));
								{	/* Expand/object.scm 634 */
									obj_t BgL_tsidz00_1534;

									{	/* Expand/object.scm 635 */
										BgL_typez00_bglt BgL_obj1508z00_2770;

										{	/* Expand/object.scm 635 */
											obj_t BgL_auxz00_4308;

											{
												obj_t BgL_auxz00_4309;

												{	/* Expand/object.scm 635 */
													BgL_objectz00_bglt BgL_auxz00_4310;

													BgL_auxz00_4310 =
														(BgL_objectz00_bglt) (BgL_classz00_44);
													BgL_auxz00_4309 =
														BGL_OBJECT_WIDENING(BgL_auxz00_4310);
												}
												BgL_auxz00_4308 =
													(((BgL_tclassz00_bglt) CREF(BgL_auxz00_4309))->
													BgL_itszd2superzd2);
											}
											BgL_obj1508z00_2770 =
												(BgL_typez00_bglt) (BgL_auxz00_4308);
										}
										BgL_tsidz00_1534 =
											(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2770))->
											BgL_idz00);
									}
									{	/* Expand/object.scm 635 */
										obj_t BgL_dupzd2varzd2typedz00_1535;

										BgL_dupzd2varzd2typedz00_1535 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_dupzd2varzd2_1532, BgL_tsidz00_1534);
										{	/* Expand/object.scm 636 */
											obj_t BgL_castz00_1536;

											{	/* Expand/object.scm 637 */
												obj_t BgL_list3542z00_1824;

												BgL_list3542z00_1824 = MAKE_PAIR(BgL_objz00_45, BNIL);
												BgL_castz00_1536 =
													BGl_makezd2privatezd2sexpz00zzast_privatez00
													(CNST_TABLE_REF(((long) 30)), BgL_tsidz00_1534,
													BgL_list3542z00_1824);
											}
											{	/* Expand/object.scm 637 */

												{
													long BgL_iz00_1538;

													obj_t BgL_slotsz00_1539;

													BgL_iz00_1538 = ((long) 0);
													BgL_slotsz00_1539 = BgL_slotsz00_1528;
												BgL_zc3anonymousza33288ze3z83_1540:
													if (NULLP(BgL_slotsz00_1539))
														{	/* Expand/object.scm 641 */
															CNST_TABLE_REF(((long) 17));
														}
													else
														{	/* Expand/object.scm 643 */
															obj_t BgL_sz00_1542;

															BgL_sz00_1542 = CAR(BgL_slotsz00_1539);
															if (BGl_slotzd2defaultzf3z21zzobject_slotsz00(
																	(BgL_slotz00_bglt) (BgL_sz00_1542)))
																{	/* Expand/object.scm 645 */
																	obj_t BgL_arg3291z00_1544;

																	{	/* Expand/object.scm 645 */
																		obj_t BgL_arg3292z00_1545;

																		{
																			BgL_slotz00_bglt BgL_auxz00_4327;

																			BgL_auxz00_4327 =
																				(BgL_slotz00_bglt) (BgL_sz00_1542);
																			BgL_arg3292z00_1545 =
																				(((BgL_slotz00_bglt)
																					CREF(BgL_auxz00_4327))->
																				BgL_defaultzd2valuezd2);
																		}
																		BgL_arg3291z00_1544 =
																			MAKE_PAIR(BTRUE, BgL_arg3292z00_1545);
																	}
																	VECTOR_SET(BgL_vargsz00_1531,
																		(int) (BgL_iz00_1538), BgL_arg3291z00_1544);
																}
															else
																{	/* Expand/object.scm 646 */
																	obj_t BgL_arg3293z00_1546;

																	BgL_arg3293z00_1546 =
																		MAKE_PAIR(BFALSE, BUNSPEC);
																	VECTOR_SET(BgL_vargsz00_1531,
																		(int) (BgL_iz00_1538), BgL_arg3293z00_1546);
																}
															{
																obj_t BgL_slotsz00_4338;

																long BgL_iz00_4336;

																BgL_iz00_4336 = (BgL_iz00_1538 + ((long) 1));
																BgL_slotsz00_4338 = CDR(BgL_slotsz00_1539);
																BgL_slotsz00_1539 = BgL_slotsz00_4338;
																BgL_iz00_1538 = BgL_iz00_4336;
																goto BgL_zc3anonymousza33288ze3z83_1540;
															}
														}
												}
												{
													obj_t BgL_providedz00_1551;

													BgL_providedz00_1551 = BgL_providedz00_46;
												BgL_zc3anonymousza33296ze3z83_1552:
													if (NULLP(BgL_providedz00_1551))
														{	/* Expand/object.scm 651 */
															CNST_TABLE_REF(((long) 17));
														}
													else
														{	/* Expand/object.scm 653 */
															obj_t BgL_pz00_1554;

															BgL_pz00_1554 = CAR(BgL_providedz00_1551);
															{
																obj_t BgL_szd2namezd2_1558;

																obj_t BgL_lenz00_1559;

																obj_t BgL_valuez00_1560;

																obj_t BgL_szd2namezd2_1555;

																obj_t BgL_valuez00_1556;

																if (PAIRP(BgL_pz00_1554))
																	{	/* Expand/object.scm 654 */
																		obj_t BgL_carzd21702zd2_1565;

																		obj_t BgL_cdrzd21703zd2_1566;

																		BgL_carzd21702zd2_1565 = CAR(BgL_pz00_1554);
																		BgL_cdrzd21703zd2_1566 = CDR(BgL_pz00_1554);
																		if (SYMBOLP(BgL_carzd21702zd2_1565))
																			{	/* Expand/object.scm 654 */
																				if (PAIRP(BgL_cdrzd21703zd2_1566))
																					{	/* Expand/object.scm 654 */
																						if (NULLP(CDR
																								(BgL_cdrzd21703zd2_1566)))
																							{	/* Expand/object.scm 654 */
																								BgL_szd2namezd2_1555 =
																									BgL_carzd21702zd2_1565;
																								BgL_valuez00_1556 =
																									CAR(BgL_cdrzd21703zd2_1566);
																								{	/* Expand/object.scm 657 */
																									obj_t BgL_arg3317z00_1591;

																									obj_t BgL_arg3318z00_1592;

																									BgL_arg3317z00_1591 =
																										BGl_findzd2slotzd2offsetz00zzexpand_objectz00
																										(BgL_slotsz00_1528,
																										BgL_szd2namezd2_1555,
																										BGl_string3853z00zzexpand_objectz00,
																										BgL_pz00_1554);
																									BgL_arg3318z00_1592 =
																										MAKE_PAIR(BTRUE,
																										BGl_objectzd2epairifyzd2zzexpand_objectz00
																										(BgL_valuez00_1556,
																											BgL_pz00_1554));
																									{	/* Expand/object.scm 656 */
																										int BgL_kz00_2813;

																										BgL_kz00_2813 =
																											CINT(BgL_arg3317z00_1591);
																										{	/* Expand/object.scm 656 */
																											obj_t BgL_xz00_2978;

																											BgL_xz00_2978 =
																												VECTOR_SET
																												(BgL_vargsz00_1531,
																												BgL_kz00_2813,
																												BgL_arg3318z00_1592);
																											BUNSPEC;
																							}}}}
																						else
																							{	/* Expand/object.scm 654 */
																								obj_t BgL_cdrzd21730zd2_1574;

																								BgL_cdrzd21730zd2_1574 =
																									CDR(BgL_cdrzd21703zd2_1566);
																								if (PAIRP
																									(BgL_cdrzd21730zd2_1574))
																									{	/* Expand/object.scm 654 */
																										if (NULLP(CDR
																												(BgL_cdrzd21730zd2_1574)))
																											{	/* Expand/object.scm 654 */
																												BgL_szd2namezd2_1558 =
																													BgL_carzd21702zd2_1565;
																												BgL_lenz00_1559 =
																													CAR
																													(BgL_cdrzd21703zd2_1566);
																												BgL_valuez00_1560 =
																													CAR
																													(BgL_cdrzd21730zd2_1574);
																												{	/* Expand/object.scm 663 */
																													obj_t
																														BgL_snumz00_1594;
																													BgL_snumz00_1594 =
																														BGl_findzd2slotzd2offsetz00zzexpand_objectz00
																														(BgL_slotsz00_1528,
																														BgL_szd2namezd2_1558,
																														BGl_string3853z00zzexpand_objectz00,
																														BgL_pz00_1554);
																													{	/* Expand/object.scm 663 */
																														obj_t
																															BgL_slotz00_1595;
																														BgL_slotz00_1595 =
																															bgl_list_ref
																															(BgL_slotsz00_1528,
																															(long)
																															CINT
																															(BgL_snumz00_1594));
																														{	/* Expand/object.scm 667 */

																															{	/* Expand/object.scm 668 */
																																bool_t
																																	BgL_testz00_4370;
																																{	/* Expand/object.scm 668 */
																																	BgL_slotz00_bglt
																																		BgL_obj2367z00_2815;
																																	BgL_obj2367z00_2815
																																		=
																																		(BgL_slotz00_bglt)
																																		(BgL_slotz00_1595);
																																	BgL_testz00_4370
																																		=
																																		CBOOL(((
																																				(BgL_slotz00_bglt)
																																				CREF
																																				(BgL_obj2367z00_2815))->
																																			BgL_indexedz00));
																																}
																																if (BgL_testz00_4370)
																																	{	/* Expand/object.scm 668 */
																																		{	/* Expand/object.scm 673 */
																																			obj_t
																																				BgL_arg3321z00_1597;
																																			BgL_arg3321z00_1597
																																				=
																																				MAKE_PAIR
																																				(BTRUE,
																																				BGl_objectzd2epairifyzd2zzexpand_objectz00
																																				(BgL_valuez00_1560,
																																					BgL_pz00_1554));
																																			VECTOR_SET
																																				(BgL_vargsz00_1531,
																																				CINT
																																				(BgL_snumz00_1594),
																																				BgL_arg3321z00_1597);
																																		}
																																		{	/* Expand/object.scm 674 */
																																			long
																																				BgL_arg3325z00_1599;
																																			obj_t
																																				BgL_arg3326z00_1600;
																																			BgL_arg3325z00_1599
																																				=
																																				((long)
																																				CINT
																																				(BgL_snumz00_1594)
																																				-
																																				((long)
																																					1));
																																			BgL_arg3326z00_1600
																																				=
																																				MAKE_PAIR
																																				(BFALSE,
																																				BgL_lenz00_1559);
																																			VECTOR_SET
																																				(BgL_vargsz00_1531,
																																				(int)
																																				(BgL_arg3325z00_1599),
																																				BgL_arg3326z00_1600);
																																	}}
																																else
																																	{	/* Expand/object.scm 668 */
																																		BGl_errorz00zz__errorz00
																																			(BFALSE,
																																			BGl_string3852z00zzexpand_objectz00,
																																			BgL_formz00_43);
																																	}
																															}
																														}
																													}
																												}
																											}
																										else
																											{	/* Expand/object.scm 654 */
																											BgL_tagzd21695zd2_1562:
																												BGl_errorz00zz__errorz00
																													(BFALSE,
																													BGl_string3852z00zzexpand_objectz00,
																													BgL_formz00_43);
																											}
																									}
																								else
																									{	/* Expand/object.scm 654 */
																										goto BgL_tagzd21695zd2_1562;
																									}
																							}
																					}
																				else
																					{	/* Expand/object.scm 654 */
																						goto BgL_tagzd21695zd2_1562;
																					}
																			}
																		else
																			{	/* Expand/object.scm 654 */
																				goto BgL_tagzd21695zd2_1562;
																			}
																	}
																else
																	{	/* Expand/object.scm 654 */
																		goto BgL_tagzd21695zd2_1562;
																	}
															}
															{
																obj_t BgL_providedz00_4387;

																BgL_providedz00_4387 =
																	CDR(BgL_providedz00_1551);
																BgL_providedz00_1551 = BgL_providedz00_4387;
																goto BgL_zc3anonymousza33296ze3z83_1552;
															}
														}
												}
												{
													long BgL_iz00_1604;

													obj_t BgL_sz00_1605;

													BgL_iz00_1604 = ((long) 0);
													BgL_sz00_1605 = BgL_slotsz00_1528;
												BgL_zc3anonymousza33328ze3z83_1606:
													if ((BgL_iz00_1604 == BgL_lenz00_1530))
														{	/* Expand/object.scm 683 */
															CNST_TABLE_REF(((long) 18));
														}
													else
														{	/* Expand/object.scm 685 */
															bool_t BgL_testz00_4392;

															{	/* Expand/object.scm 685 */
																bool_t BgL_testz00_4393;

																{	/* Expand/object.scm 685 */
																	obj_t BgL_arg3342z00_1620;

																	BgL_arg3342z00_1620 =
																		VECTOR_REF(BgL_vargsz00_1531,
																		(int) (BgL_iz00_1604));
																	{	/* Expand/object.scm 685 */
																		obj_t BgL_pairz00_2829;

																		BgL_pairz00_2829 = BgL_arg3342z00_1620;
																		BgL_testz00_4393 =
																			CBOOL(CAR(BgL_pairz00_2829));
																}}
																if (BgL_testz00_4393)
																	{	/* Expand/object.scm 685 */
																		BgL_testz00_4392 = ((bool_t) 0);
																	}
																else
																	{	/* Expand/object.scm 686 */
																		bool_t BgL_testz00_4398;

																		{	/* Expand/object.scm 686 */
																			obj_t BgL_arg3341z00_1619;

																			BgL_arg3341z00_1619 = CAR(BgL_sz00_1605);
																			BgL_testz00_4398 =
																				BGl_slotzd2virtualzf3z21zzobject_slotsz00
																				((BgL_slotz00_bglt)
																				(BgL_arg3341z00_1619));
																		}
																		if (BgL_testz00_4398)
																			{	/* Expand/object.scm 686 */
																				BgL_testz00_4392 = ((bool_t) 0);
																			}
																		else
																			{	/* Expand/object.scm 686 */
																				BgL_testz00_4392 = ((bool_t) 1);
																			}
																	}
															}
															if (BgL_testz00_4392)
																{	/* Expand/object.scm 689 */
																	obj_t BgL_arg3331z00_1609;

																	{	/* Expand/object.scm 689 */
																		obj_t BgL_arg3333z00_1611;

																		{	/* Expand/object.scm 691 */
																			obj_t BgL_arg3335z00_1613;

																			{	/* Expand/object.scm 691 */
																				BgL_slotz00_bglt BgL_obj2351z00_2832;

																				{	/* Expand/object.scm 691 */
																					obj_t BgL_pairz00_2831;

																					BgL_pairz00_2831 = BgL_sz00_1605;
																					BgL_obj2351z00_2832 =
																						(BgL_slotz00_bglt) (CAR
																						(BgL_pairz00_2831));
																				}
																				BgL_arg3335z00_1613 =
																					(((BgL_slotz00_bglt)
																						CREF(BgL_obj2351z00_2832))->
																					BgL_idz00);
																			}
																			{	/* Expand/object.scm 691 */
																				obj_t BgL_res3827z00_2835;

																				{	/* Expand/object.scm 691 */
																					obj_t BgL_arg2063z00_2834;

																					BgL_arg2063z00_2834 =
																						SYMBOL_TO_STRING
																						(BgL_arg3335z00_1613);
																					BgL_res3827z00_2835 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_2834);
																				}
																				BgL_arg3333z00_1611 =
																					BgL_res3827z00_2835;
																			}
																		}
																		BgL_arg3331z00_1609 =
																			string_append_3
																			(BGl_string3854z00zzexpand_objectz00,
																			BgL_arg3333z00_1611,
																			BGl_string3842z00zzexpand_objectz00);
																	}
																	BGl_errorz00zz__errorz00(BFALSE,
																		BgL_arg3331z00_1609, BgL_formz00_43);
																}
															else
																{
																	obj_t BgL_sz00_4411;

																	long BgL_iz00_4409;

																	BgL_iz00_4409 = (BgL_iz00_1604 + ((long) 1));
																	BgL_sz00_4411 = CDR(BgL_sz00_1605);
																	BgL_sz00_1605 = BgL_sz00_4411;
																	BgL_iz00_1604 = BgL_iz00_4409;
																	goto BgL_zc3anonymousza33328ze3z83_1606;
																}
														}
												}
												{
													long BgL_iz00_1625;

													obj_t BgL_slotsz00_1626;

													obj_t BgL_largsz00_1627;

													obj_t BgL_virtualsz00_1628;

													BgL_iz00_1625 = ((long) 0);
													BgL_slotsz00_1626 = BgL_slotsz00_1528;
													BgL_largsz00_1627 = BNIL;
													BgL_virtualsz00_1628 = BNIL;
												BgL_zc3anonymousza33343ze3z83_1629:
													if ((BgL_iz00_1625 == BgL_lenz00_1530))
														{	/* Expand/object.scm 702 */
															obj_t BgL_wideningz00_1631;

															{	/* Expand/object.scm 702 */
																obj_t BgL_arg3522z00_1803;

																obj_t BgL_arg3523z00_1804;

																obj_t BgL_arg3524z00_1805;

																{
																	obj_t BgL_auxz00_4415;

																	{	/* Expand/object.scm 702 */
																		BgL_objectz00_bglt BgL_auxz00_4416;

																		BgL_auxz00_4416 =
																			(BgL_objectz00_bglt) (BgL_classz00_44);
																		BgL_auxz00_4415 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_4416);
																	}
																	BgL_arg3522z00_1803 =
																		(((BgL_tclassz00_bglt)
																			CREF(BgL_auxz00_4415))->BgL_wideningz00);
																}
																BgL_arg3523z00_1804 =
																	CNST_TABLE_REF(((long) 9));
																{
																	BgL_typez00_bglt BgL_auxz00_4421;

																	BgL_auxz00_4421 =
																		(BgL_typez00_bglt) (BgL_classz00_44);
																	BgL_arg3524z00_1805 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_auxz00_4421))->BgL_idz00);
																}
																{	/* Expand/object.scm 702 */
																	obj_t BgL_list3525z00_1806;

																	{	/* Expand/object.scm 702 */
																		obj_t BgL_arg3526z00_1807;

																		{	/* Expand/object.scm 702 */
																			obj_t BgL_arg3527z00_1808;

																			BgL_arg3527z00_1808 =
																				MAKE_PAIR(BgL_arg3524z00_1805, BNIL);
																			BgL_arg3526z00_1807 =
																				MAKE_PAIR(BgL_arg3523z00_1804,
																				BgL_arg3527z00_1808);
																		}
																		BgL_list3525z00_1806 =
																			MAKE_PAIR(BgL_arg3522z00_1803,
																			BgL_arg3526z00_1807);
																	}
																	BgL_wideningz00_1631 =
																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																		(BgL_list3525z00_1806);
															}}
															if (CBOOL
																(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
																{	/* Expand/object.scm 706 */
																	obj_t BgL_arg3345z00_1632;

																	obj_t BgL_arg3346z00_1633;

																	BgL_arg3345z00_1632 =
																		CNST_TABLE_REF(((long) 7));
																	{	/* Expand/object.scm 706 */
																		obj_t BgL_arg3347z00_1634;

																		obj_t BgL_arg3348z00_1635;

																		obj_t BgL_arg3349z00_1636;

																		obj_t BgL_arg3350z00_1637;

																		{	/* Expand/object.scm 706 */
																			obj_t BgL_arg3354z00_1641;

																			{	/* Expand/object.scm 706 */
																				obj_t BgL_arg3356z00_1643;

																				{	/* Expand/object.scm 706 */
																					obj_t BgL_list3357z00_1644;

																					BgL_list3357z00_1644 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3356z00_1643 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_castz00_1536,
																						BgL_list3357z00_1644);
																				}
																				BgL_arg3354z00_1641 =
																					MAKE_PAIR
																					(BgL_dupzd2varzd2typedz00_1535,
																					BgL_arg3356z00_1643);
																			}
																			BgL_arg3347z00_1634 =
																				MAKE_PAIR(BgL_arg3354z00_1641, BNIL);
																		}
																		{	/* Expand/object.scm 707 */
																			obj_t BgL_arg3358z00_1645;

																			obj_t BgL_arg3359z00_1646;

																			BgL_arg3358z00_1645 =
																				CNST_TABLE_REF(((long) 31));
																			{	/* Expand/object.scm 709 */
																				obj_t BgL_arg3360z00_1647;

																				BgL_arg3360z00_1647 =
																					MAKE_PAIR(BgL_wideningz00_1631,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(bgl_reverse_bang(BgL_largsz00_1627),
																						BNIL));
																				{	/* Expand/object.scm 707 */
																					obj_t BgL_list3362z00_1649;

																					{	/* Expand/object.scm 707 */
																						obj_t BgL_arg3363z00_1650;

																						BgL_arg3363z00_1650 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3362z00_1649 =
																							MAKE_PAIR(BgL_arg3360z00_1647,
																							BgL_arg3363z00_1650);
																					}
																					BgL_arg3359z00_1646 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_dupzd2varzd2_1532,
																						BgL_list3362z00_1649);
																			}}
																			BgL_arg3348z00_1635 =
																				MAKE_PAIR(BgL_arg3358z00_1645,
																				BgL_arg3359z00_1646);
																		}
																		{	/* Expand/object.scm 712 */
																			obj_t BgL_arg3367z00_1654;

																			obj_t BgL_arg3368z00_1655;

																			{	/* Expand/object.scm 712 */
																				obj_t BgL_arg3369z00_1656;

																				obj_t BgL_arg3371z00_1657;

																				BgL_arg3369z00_1656 =
																					CNST_TABLE_REF(((long) 32));
																				{	/* Expand/object.scm 712 */
																					obj_t BgL_list3372z00_1658;

																					{	/* Expand/object.scm 712 */
																						obj_t BgL_arg3373z00_1659;

																						obj_t BgL_arg3374z00_1660;

																						BgL_arg3373z00_1659 =
																							CNST_TABLE_REF(((long) 33));
																						BgL_arg3374z00_1660 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3372z00_1658 =
																							MAKE_PAIR(BgL_arg3373z00_1659,
																							BgL_arg3374z00_1660);
																					}
																					BgL_arg3371z00_1657 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(CNST_TABLE_REF(((long) 34)),
																						BgL_list3372z00_1658);
																				}
																				BgL_arg3367z00_1654 =
																					MAKE_PAIR(BgL_arg3369z00_1656,
																					BgL_arg3371z00_1657);
																			}
																			{	/* Expand/object.scm 714 */
																				obj_t BgL_arg3375z00_1661;

																				{	/* Expand/object.scm 714 */
																					obj_t BgL_arg3379z00_1665;

																					obj_t BgL_arg3380z00_1666;

																					{	/* Expand/object.scm 714 */
																						obj_t BgL_arg3381z00_1667;

																						obj_t BgL_arg3382z00_1668;

																						BgL_arg3381z00_1667 =
																							CNST_TABLE_REF(((long) 32));
																						{	/* Expand/object.scm 714 */
																							obj_t BgL_list3383z00_1669;

																							{	/* Expand/object.scm 714 */
																								obj_t BgL_arg3384z00_1670;

																								obj_t BgL_arg3385z00_1671;

																								BgL_arg3384z00_1670 =
																									CNST_TABLE_REF(((long) 33));
																								BgL_arg3385z00_1671 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list3383z00_1669 =
																									MAKE_PAIR(BgL_arg3384z00_1670,
																									BgL_arg3385z00_1671);
																							}
																							BgL_arg3382z00_1668 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(CNST_TABLE_REF(((long) 35)),
																								BgL_list3383z00_1669);
																						}
																						BgL_arg3379z00_1665 =
																							MAKE_PAIR(BgL_arg3381z00_1667,
																							BgL_arg3382z00_1668);
																					}
																					{	/* Expand/object.scm 715 */
																						obj_t BgL_arg3386z00_1672;

																						{	/* Expand/object.scm 715 */
																							obj_t BgL_arg3389z00_1675;

																							obj_t BgL_arg3390z00_1676;

																							BgL_arg3389z00_1675 =
																								CNST_TABLE_REF(((long) 32));
																							{	/* Expand/object.scm 715 */
																								obj_t BgL_arg3391z00_1677;

																								obj_t BgL_arg3392z00_1678;

																								{
																									BgL_variablez00_bglt
																										BgL_auxz00_4458;
																									BgL_auxz00_4458 =
																										(BgL_variablez00_bglt)
																										(BgL_holderz00_1529);
																									BgL_arg3391z00_1677 =
																										(((BgL_variablez00_bglt)
																											CREF(BgL_auxz00_4458))->
																										BgL_idz00);
																								}
																								BgL_arg3392z00_1678 =
																									(((BgL_globalz00_bglt)
																										CREF(BgL_holderz00_1529))->
																									BgL_modulez00);
																								{	/* Expand/object.scm 715 */
																									obj_t BgL_list3394z00_1680;

																									{	/* Expand/object.scm 715 */
																										obj_t BgL_arg3395z00_1681;

																										BgL_arg3395z00_1681 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3394z00_1680 =
																											MAKE_PAIR
																											(BgL_arg3392z00_1678,
																											BgL_arg3395z00_1681);
																									}
																									BgL_arg3390z00_1676 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3391z00_1677,
																										BgL_list3394z00_1680);
																							}}
																							BgL_arg3386z00_1672 =
																								MAKE_PAIR(BgL_arg3389z00_1675,
																								BgL_arg3390z00_1676);
																						}
																						{	/* Expand/object.scm 714 */
																							obj_t BgL_list3388z00_1674;

																							BgL_list3388z00_1674 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3380z00_1666 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3386z00_1672,
																								BgL_list3388z00_1674);
																					}}
																					BgL_arg3375z00_1661 =
																						MAKE_PAIR(BgL_arg3379z00_1665,
																						BgL_arg3380z00_1666);
																				}
																				{	/* Expand/object.scm 712 */
																					obj_t BgL_list3377z00_1663;

																					{	/* Expand/object.scm 712 */
																						obj_t BgL_arg3378z00_1664;

																						BgL_arg3378z00_1664 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3377z00_1663 =
																							MAKE_PAIR(BgL_arg3375z00_1661,
																							BgL_arg3378z00_1664);
																					}
																					BgL_arg3368z00_1655 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_dupzd2varzd2_1532,
																						BgL_list3377z00_1663);
																			}}
																			BgL_arg3349z00_1636 =
																				MAKE_PAIR(BgL_arg3367z00_1654,
																				BgL_arg3368z00_1655);
																		}
																		{	/* Expand/object.scm 716 */
																			obj_t BgL_arg3396z00_1682;

																			obj_t BgL_arg3397z00_1683;

																			BgL_arg3396z00_1682 =
																				bgl_reverse_bang(BgL_virtualsz00_1628);
																			BgL_arg3397z00_1683 =
																				MAKE_PAIR(BgL_dupzd2varzd2_1532, BNIL);
																			BgL_arg3350z00_1637 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3396z00_1682,
																				BgL_arg3397z00_1683);
																		}
																		{	/* Expand/object.scm 706 */
																			obj_t BgL_list3351z00_1638;

																			{	/* Expand/object.scm 706 */
																				obj_t BgL_arg3352z00_1639;

																				{	/* Expand/object.scm 706 */
																					obj_t BgL_arg3353z00_1640;

																					BgL_arg3353z00_1640 =
																						MAKE_PAIR(BgL_arg3350z00_1637,
																						BNIL);
																					BgL_arg3352z00_1639 =
																						MAKE_PAIR(BgL_arg3349z00_1636,
																						BgL_arg3353z00_1640);
																				}
																				BgL_list3351z00_1638 =
																					MAKE_PAIR(BgL_arg3348z00_1635,
																					BgL_arg3352z00_1639);
																			}
																			BgL_arg3346z00_1633 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3347z00_1634,
																				BgL_list3351z00_1638);
																	}}
																	return
																		MAKE_PAIR(BgL_arg3345z00_1632,
																		BgL_arg3346z00_1633);
																}
															else
																{	/* Expand/object.scm 718 */
																	obj_t BgL_arg3398z00_1684;

																	obj_t BgL_arg3399z00_1685;

																	BgL_arg3398z00_1684 =
																		CNST_TABLE_REF(((long) 7));
																	{	/* Expand/object.scm 718 */
																		obj_t BgL_arg3400z00_1686;

																		obj_t BgL_arg3401z00_1687;

																		obj_t BgL_arg3402z00_1688;

																		{	/* Expand/object.scm 718 */
																			obj_t BgL_arg3407z00_1693;

																			{	/* Expand/object.scm 718 */
																				obj_t BgL_arg3409z00_1695;

																				{	/* Expand/object.scm 718 */
																					obj_t BgL_list3410z00_1696;

																					BgL_list3410z00_1696 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3409z00_1695 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_castz00_1536,
																						BgL_list3410z00_1696);
																				}
																				BgL_arg3407z00_1693 =
																					MAKE_PAIR
																					(BgL_dupzd2varzd2typedz00_1535,
																					BgL_arg3409z00_1695);
																			}
																			BgL_arg3400z00_1686 =
																				MAKE_PAIR(BgL_arg3407z00_1693, BNIL);
																		}
																		{	/* Expand/object.scm 719 */
																			obj_t BgL_arg3411z00_1697;

																			obj_t BgL_arg3412z00_1698;

																			BgL_arg3411z00_1697 =
																				CNST_TABLE_REF(((long) 36));
																			{	/* Expand/object.scm 719 */
																				obj_t BgL_arg3413z00_1699;

																				obj_t BgL_arg3414z00_1700;

																				{	/* Expand/object.scm 719 */
																					obj_t BgL_arg3418z00_1704;

																					obj_t BgL_arg3419z00_1705;

																					BgL_arg3418z00_1704 =
																						CNST_TABLE_REF(((long) 37));
																					{	/* Expand/object.scm 719 */
																						obj_t BgL_list3420z00_1706;

																						BgL_list3420z00_1706 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3419z00_1705 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_dupzd2varzd2_1532,
																							BgL_list3420z00_1706);
																					}
																					BgL_arg3413z00_1699 =
																						MAKE_PAIR(BgL_arg3418z00_1704,
																						BgL_arg3419z00_1705);
																				}
																				{	/* Expand/object.scm 720 */
																					obj_t BgL_arg3421z00_1707;

																					obj_t BgL_arg3422z00_1708;

																					BgL_arg3421z00_1707 =
																						CNST_TABLE_REF(((long) 38));
																					{	/* Expand/object.scm 720 */
																						obj_t BgL_list3423z00_1709;

																						BgL_list3423z00_1709 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3422z00_1708 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_dupzd2varzd2_1532,
																							BgL_list3423z00_1709);
																					}
																					BgL_arg3414z00_1700 =
																						MAKE_PAIR(BgL_arg3421z00_1707,
																						BgL_arg3422z00_1708);
																				}
																				{	/* Expand/object.scm 719 */
																					obj_t BgL_list3416z00_1702;

																					{	/* Expand/object.scm 719 */
																						obj_t BgL_arg3417z00_1703;

																						BgL_arg3417z00_1703 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3416z00_1702 =
																							MAKE_PAIR(BgL_arg3414z00_1700,
																							BgL_arg3417z00_1703);
																					}
																					BgL_arg3412z00_1698 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3413z00_1699,
																						BgL_list3416z00_1702);
																			}}
																			BgL_arg3401z00_1687 =
																				MAKE_PAIR(BgL_arg3411z00_1697,
																				BgL_arg3412z00_1698);
																		}
																		{	/* Expand/object.scm 721 */
																			obj_t BgL_arg3424z00_1710;

																			obj_t BgL_arg3425z00_1711;

																			BgL_arg3424z00_1710 =
																				CNST_TABLE_REF(((long) 36));
																			{	/* Expand/object.scm 721 */
																				obj_t BgL_arg3426z00_1712;

																				obj_t BgL_arg3427z00_1713;

																				obj_t BgL_arg3430z00_1714;

																				{	/* Expand/object.scm 721 */
																					obj_t BgL_arg3435z00_1719;

																					obj_t BgL_arg3436z00_1720;

																					BgL_arg3435z00_1719 =
																						CNST_TABLE_REF(((long) 39));
																					{	/* Expand/object.scm 721 */
																						obj_t BgL_arg3437z00_1721;

																						obj_t BgL_arg3438z00_1722;

																						{	/* Expand/object.scm 721 */
																							obj_t BgL_arg3443z00_1726;

																							obj_t BgL_arg3444z00_1727;

																							{	/* Expand/object.scm 721 */
																								obj_t BgL_arg3445z00_1728;

																								obj_t BgL_arg3446z00_1729;

																								BgL_arg3445z00_1728 =
																									CNST_TABLE_REF(((long) 32));
																								{	/* Expand/object.scm 721 */
																									obj_t BgL_list3447z00_1730;

																									{	/* Expand/object.scm 721 */
																										obj_t BgL_arg3448z00_1731;

																										obj_t BgL_arg3449z00_1732;

																										BgL_arg3448z00_1731 =
																											CNST_TABLE_REF(((long)
																												33));
																										BgL_arg3449z00_1732 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3447z00_1730 =
																											MAKE_PAIR
																											(BgL_arg3448z00_1731,
																											BgL_arg3449z00_1732);
																									}
																									BgL_arg3446z00_1729 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												40)),
																										BgL_list3447z00_1730);
																								}
																								BgL_arg3443z00_1726 =
																									MAKE_PAIR(BgL_arg3445z00_1728,
																									BgL_arg3446z00_1729);
																							}
																							{	/* Expand/object.scm 722 */
																								obj_t BgL_arg3450z00_1733;

																								{	/* Expand/object.scm 722 */
																									obj_t BgL_arg3453z00_1736;

																									obj_t BgL_arg3454z00_1737;

																									BgL_arg3453z00_1736 =
																										CNST_TABLE_REF(((long) 32));
																									{	/* Expand/object.scm 722 */
																										obj_t BgL_arg3455z00_1738;

																										obj_t BgL_arg3456z00_1739;

																										{
																											BgL_variablez00_bglt
																												BgL_auxz00_4509;
																											BgL_auxz00_4509 =
																												(BgL_variablez00_bglt)
																												(BgL_holderz00_1529);
																											BgL_arg3455z00_1738 =
																												(((BgL_variablez00_bglt)
																													CREF
																													(BgL_auxz00_4509))->
																												BgL_idz00);
																										}
																										BgL_arg3456z00_1739 =
																											(((BgL_globalz00_bglt)
																												CREF
																												(BgL_holderz00_1529))->
																											BgL_modulez00);
																										{	/* Expand/object.scm 722 */
																											obj_t
																												BgL_list3458z00_1741;
																											{	/* Expand/object.scm 722 */
																												obj_t
																													BgL_arg3459z00_1742;
																												BgL_arg3459z00_1742 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list3458z00_1741 =
																													MAKE_PAIR
																													(BgL_arg3456z00_1739,
																													BgL_arg3459z00_1742);
																											}
																											BgL_arg3454z00_1737 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3455z00_1738,
																												BgL_list3458z00_1741);
																									}}
																									BgL_arg3450z00_1733 =
																										MAKE_PAIR
																										(BgL_arg3453z00_1736,
																										BgL_arg3454z00_1737);
																								}
																								{	/* Expand/object.scm 721 */
																									obj_t BgL_list3452z00_1735;

																									BgL_list3452z00_1735 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3444z00_1727 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3450z00_1733,
																										BgL_list3452z00_1735);
																							}}
																							BgL_arg3437z00_1721 =
																								MAKE_PAIR(BgL_arg3443z00_1726,
																								BgL_arg3444z00_1727);
																						}
																						{	/* Expand/object.scm 724 */
																							obj_t BgL_arg3460z00_1743;

																							obj_t BgL_arg3461z00_1744;

																							{	/* Expand/object.scm 724 */
																								obj_t BgL_arg3462z00_1745;

																								obj_t BgL_arg3463z00_1746;

																								BgL_arg3462z00_1745 =
																									CNST_TABLE_REF(((long) 32));
																								{	/* Expand/object.scm 724 */
																									obj_t BgL_list3464z00_1747;

																									{	/* Expand/object.scm 724 */
																										obj_t BgL_arg3465z00_1748;

																										obj_t BgL_arg3466z00_1749;

																										BgL_arg3465z00_1748 =
																											CNST_TABLE_REF(((long)
																												33));
																										BgL_arg3466z00_1749 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3464z00_1747 =
																											MAKE_PAIR
																											(BgL_arg3465z00_1748,
																											BgL_arg3466z00_1749);
																									}
																									BgL_arg3463z00_1746 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												41)),
																										BgL_list3464z00_1747);
																								}
																								BgL_arg3460z00_1743 =
																									MAKE_PAIR(BgL_arg3462z00_1745,
																									BgL_arg3463z00_1746);
																							}
																							{	/* Expand/object.scm 724 */
																								obj_t BgL_list3467z00_1750;

																								BgL_list3467z00_1750 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3461z00_1744 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_dupzd2varzd2_1532,
																									BgL_list3467z00_1750);
																							}
																							BgL_arg3438z00_1722 =
																								MAKE_PAIR(BgL_arg3460z00_1743,
																								BgL_arg3461z00_1744);
																						}
																						{	/* Expand/object.scm 721 */
																							obj_t BgL_list3440z00_1724;

																							{	/* Expand/object.scm 721 */
																								obj_t BgL_arg3441z00_1725;

																								BgL_arg3441z00_1725 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list3440z00_1724 =
																									MAKE_PAIR(BgL_arg3438z00_1722,
																									BgL_arg3441z00_1725);
																							}
																							BgL_arg3436z00_1720 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3437z00_1721,
																								BgL_list3440z00_1724);
																					}}
																					BgL_arg3426z00_1712 =
																						MAKE_PAIR(BgL_arg3435z00_1719,
																						BgL_arg3436z00_1720);
																				}
																				{	/* Expand/object.scm 725 */
																					obj_t BgL_arg3468z00_1751;

																					obj_t BgL_arg3469z00_1752;

																					BgL_arg3468z00_1751 =
																						CNST_TABLE_REF(((long) 22));
																					{	/* Expand/object.scm 726 */
																						obj_t BgL_arg3470z00_1753;

																						obj_t BgL_arg3471z00_1754;

																						obj_t BgL_arg3472z00_1755;

																						{	/* Expand/object.scm 726 */
																							obj_t BgL_arg3475z00_1758;

																							obj_t BgL_arg3476z00_1759;

																							BgL_arg3475z00_1758 =
																								CNST_TABLE_REF(((long) 31));
																							{	/* Expand/object.scm 728 */
																								obj_t BgL_arg3477z00_1760;

																								BgL_arg3477z00_1760 =
																									MAKE_PAIR
																									(BgL_wideningz00_1631,
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(bgl_reverse_bang
																										(BgL_largsz00_1627), BNIL));
																								{	/* Expand/object.scm 726 */
																									obj_t BgL_list3479z00_1762;

																									{	/* Expand/object.scm 726 */
																										obj_t BgL_arg3480z00_1763;

																										BgL_arg3480z00_1763 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3479z00_1762 =
																											MAKE_PAIR
																											(BgL_arg3477z00_1760,
																											BgL_arg3480z00_1763);
																									}
																									BgL_arg3476z00_1759 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_dupzd2varzd2_1532,
																										BgL_list3479z00_1762);
																							}}
																							BgL_arg3470z00_1753 =
																								MAKE_PAIR(BgL_arg3475z00_1758,
																								BgL_arg3476z00_1759);
																						}
																						{	/* Expand/object.scm 730 */
																							obj_t BgL_arg3485z00_1767;

																							obj_t BgL_arg3486z00_1768;

																							{	/* Expand/object.scm 730 */
																								obj_t BgL_arg3487z00_1769;

																								obj_t BgL_arg3488z00_1770;

																								BgL_arg3487z00_1769 =
																									CNST_TABLE_REF(((long) 32));
																								{	/* Expand/object.scm 730 */
																									obj_t BgL_list3489z00_1771;

																									{	/* Expand/object.scm 730 */
																										obj_t BgL_arg3490z00_1772;

																										obj_t BgL_arg3491z00_1773;

																										BgL_arg3490z00_1772 =
																											CNST_TABLE_REF(((long)
																												33));
																										BgL_arg3491z00_1773 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3489z00_1771 =
																											MAKE_PAIR
																											(BgL_arg3490z00_1772,
																											BgL_arg3491z00_1773);
																									}
																									BgL_arg3488z00_1770 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												34)),
																										BgL_list3489z00_1771);
																								}
																								BgL_arg3485z00_1767 =
																									MAKE_PAIR(BgL_arg3487z00_1769,
																									BgL_arg3488z00_1770);
																							}
																							{	/* Expand/object.scm 732 */
																								obj_t BgL_arg3492z00_1774;

																								{	/* Expand/object.scm 732 */
																									obj_t BgL_arg3496z00_1778;

																									obj_t BgL_arg3497z00_1779;

																									{	/* Expand/object.scm 732 */
																										obj_t BgL_arg3498z00_1780;

																										obj_t BgL_arg3499z00_1781;

																										BgL_arg3498z00_1780 =
																											CNST_TABLE_REF(((long)
																												32));
																										{	/* Expand/object.scm 732 */
																											obj_t
																												BgL_list3500z00_1782;
																											{	/* Expand/object.scm 732 */
																												obj_t
																													BgL_arg3501z00_1783;
																												obj_t
																													BgL_arg3502z00_1784;
																												BgL_arg3501z00_1783 =
																													CNST_TABLE_REF(((long)
																														33));
																												BgL_arg3502z00_1784 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list3500z00_1782 =
																													MAKE_PAIR
																													(BgL_arg3501z00_1783,
																													BgL_arg3502z00_1784);
																											}
																											BgL_arg3499z00_1781 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														35)),
																												BgL_list3500z00_1782);
																										}
																										BgL_arg3496z00_1778 =
																											MAKE_PAIR
																											(BgL_arg3498z00_1780,
																											BgL_arg3499z00_1781);
																									}
																									{	/* Expand/object.scm 733 */
																										obj_t BgL_arg3503z00_1785;

																										{	/* Expand/object.scm 733 */
																											obj_t BgL_arg3506z00_1788;

																											obj_t BgL_arg3507z00_1789;

																											BgL_arg3506z00_1788 =
																												CNST_TABLE_REF(((long)
																													32));
																											{	/* Expand/object.scm 733 */
																												obj_t
																													BgL_arg3508z00_1790;
																												obj_t
																													BgL_arg3509z00_1791;
																												{
																													BgL_variablez00_bglt
																														BgL_auxz00_4558;
																													BgL_auxz00_4558 =
																														(BgL_variablez00_bglt)
																														(BgL_holderz00_1529);
																													BgL_arg3508z00_1790 =
																														(((BgL_variablez00_bglt) CREF(BgL_auxz00_4558))->BgL_idz00);
																												}
																												BgL_arg3509z00_1791 =
																													(((BgL_globalz00_bglt)
																														CREF
																														(BgL_holderz00_1529))->
																													BgL_modulez00);
																												{	/* Expand/object.scm 733 */
																													obj_t
																														BgL_list3511z00_1793;
																													{	/* Expand/object.scm 733 */
																														obj_t
																															BgL_arg3512z00_1794;
																														BgL_arg3512z00_1794
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list3511z00_1793
																															=
																															MAKE_PAIR
																															(BgL_arg3509z00_1791,
																															BgL_arg3512z00_1794);
																													}
																													BgL_arg3507z00_1789 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg3508z00_1790,
																														BgL_list3511z00_1793);
																											}}
																											BgL_arg3503z00_1785 =
																												MAKE_PAIR
																												(BgL_arg3506z00_1788,
																												BgL_arg3507z00_1789);
																										}
																										{	/* Expand/object.scm 732 */
																											obj_t
																												BgL_list3505z00_1787;
																											BgL_list3505z00_1787 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg3497z00_1779 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3503z00_1785,
																												BgL_list3505z00_1787);
																									}}
																									BgL_arg3492z00_1774 =
																										MAKE_PAIR
																										(BgL_arg3496z00_1778,
																										BgL_arg3497z00_1779);
																								}
																								{	/* Expand/object.scm 730 */
																									obj_t BgL_list3494z00_1776;

																									{	/* Expand/object.scm 730 */
																										obj_t BgL_arg3495z00_1777;

																										BgL_arg3495z00_1777 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3494z00_1776 =
																											MAKE_PAIR
																											(BgL_arg3492z00_1774,
																											BgL_arg3495z00_1777);
																									}
																									BgL_arg3486z00_1768 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_dupzd2varzd2_1532,
																										BgL_list3494z00_1776);
																							}}
																							BgL_arg3471z00_1754 =
																								MAKE_PAIR(BgL_arg3485z00_1767,
																								BgL_arg3486z00_1768);
																						}
																						{	/* Expand/object.scm 735 */
																							obj_t BgL_arg3513z00_1795;

																							obj_t BgL_arg3514z00_1796;

																							BgL_arg3513z00_1795 =
																								bgl_reverse_bang
																								(BgL_virtualsz00_1628);
																							BgL_arg3514z00_1796 =
																								MAKE_PAIR(BgL_dupzd2varzd2_1532,
																								BNIL);
																							BgL_arg3472z00_1755 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3513z00_1795,
																								BgL_arg3514z00_1796);
																						}
																						{	/* Expand/object.scm 725 */
																							obj_t BgL_list3473z00_1756;

																							{	/* Expand/object.scm 725 */
																								obj_t BgL_arg3474z00_1757;

																								BgL_arg3474z00_1757 =
																									MAKE_PAIR(BgL_arg3472z00_1755,
																									BNIL);
																								BgL_list3473z00_1756 =
																									MAKE_PAIR(BgL_arg3471z00_1754,
																									BgL_arg3474z00_1757);
																							}
																							BgL_arg3469z00_1752 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3470z00_1753,
																								BgL_list3473z00_1756);
																					}}
																					BgL_arg3427z00_1713 =
																						MAKE_PAIR(BgL_arg3468z00_1751,
																						BgL_arg3469z00_1752);
																				}
																				{	/* Expand/object.scm 737 */
																					obj_t BgL_arg3515z00_1797;

																					obj_t BgL_arg3517z00_1798;

																					BgL_arg3515z00_1797 =
																						CNST_TABLE_REF(((long) 42));
																					{	/* Expand/object.scm 737 */
																						obj_t BgL_list3518z00_1799;

																						{	/* Expand/object.scm 737 */
																							obj_t BgL_arg3520z00_1801;

																							{	/* Expand/object.scm 737 */
																								obj_t BgL_arg3521z00_1802;

																								BgL_arg3521z00_1802 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3520z00_1801 =
																									MAKE_PAIR
																									(BgL_dupzd2varzd2_1532,
																									BgL_arg3521z00_1802);
																							}
																							BgL_list3518z00_1799 =
																								MAKE_PAIR
																								(BGl_string3855z00zzexpand_objectz00,
																								BgL_arg3520z00_1801);
																						}
																						BgL_arg3517z00_1798 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_string3853z00zzexpand_objectz00,
																							BgL_list3518z00_1799);
																					}
																					BgL_arg3430z00_1714 =
																						MAKE_PAIR(BgL_arg3515z00_1797,
																						BgL_arg3517z00_1798);
																				}
																				{	/* Expand/object.scm 721 */
																					obj_t BgL_list3432z00_1716;

																					{	/* Expand/object.scm 721 */
																						obj_t BgL_arg3433z00_1717;

																						{	/* Expand/object.scm 721 */
																							obj_t BgL_arg3434z00_1718;

																							BgL_arg3434z00_1718 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3433z00_1717 =
																								MAKE_PAIR(BgL_arg3430z00_1714,
																								BgL_arg3434z00_1718);
																						}
																						BgL_list3432z00_1716 =
																							MAKE_PAIR(BgL_arg3427z00_1713,
																							BgL_arg3433z00_1717);
																					}
																					BgL_arg3425z00_1711 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3426z00_1712,
																						BgL_list3432z00_1716);
																			}}
																			BgL_arg3402z00_1688 =
																				MAKE_PAIR(BgL_arg3424z00_1710,
																				BgL_arg3425z00_1711);
																		}
																		{	/* Expand/object.scm 718 */
																			obj_t BgL_list3404z00_1690;

																			{	/* Expand/object.scm 718 */
																				obj_t BgL_arg3405z00_1691;

																				{	/* Expand/object.scm 718 */
																					obj_t BgL_arg3406z00_1692;

																					BgL_arg3406z00_1692 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3405z00_1691 =
																						MAKE_PAIR(BgL_arg3402z00_1688,
																						BgL_arg3406z00_1692);
																				}
																				BgL_list3404z00_1690 =
																					MAKE_PAIR(BgL_arg3401z00_1687,
																					BgL_arg3405z00_1691);
																			}
																			BgL_arg3399z00_1685 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3400z00_1686,
																				BgL_list3404z00_1690);
																	}}
																	return
																		MAKE_PAIR(BgL_arg3398z00_1684,
																		BgL_arg3399z00_1685);
																}
														}
													else
														{	/* Expand/object.scm 741 */
															obj_t BgL_valuez00_1809;

															BgL_valuez00_1809 =
																CDR(VECTOR_REF(BgL_vargsz00_1531,
																	(int) (BgL_iz00_1625)));
															{	/* Expand/object.scm 743 */
																bool_t BgL_testz00_4599;

																{	/* Expand/object.scm 743 */
																	obj_t BgL_arg3540z00_1821;

																	BgL_arg3540z00_1821 = CAR(BgL_slotsz00_1626);
																	BgL_testz00_4599 =
																		BGl_slotzd2virtualzf3z21zzobject_slotsz00(
																		(BgL_slotz00_bglt) (BgL_arg3540z00_1821));
																}
																if (BgL_testz00_4599)
																	{	/* Expand/object.scm 744 */
																		long BgL_arg3529z00_1811;

																		obj_t BgL_arg3530z00_1812;

																		obj_t BgL_arg3531z00_1813;

																		BgL_arg3529z00_1811 =
																			(BgL_iz00_1625 + ((long) 1));
																		BgL_arg3530z00_1812 =
																			CDR(BgL_slotsz00_1626);
																		if ((BgL_valuez00_1809 == BUNSPEC))
																			{	/* Expand/object.scm 747 */
																				BgL_arg3531z00_1813 =
																					BgL_virtualsz00_1628;
																			}
																		else
																			{	/* Expand/object.scm 747 */
																				BgL_arg3531z00_1813 =
																					MAKE_PAIR
																					(BGl_makezd2virtualzd2setz00zzexpand_objectz00
																					(CAR(BgL_slotsz00_1626),
																						BgL_valuez00_1809,
																						BgL_dupzd2varzd2_1532,
																						(obj_t) (BgL_classz00_44),
																						BgL_formz00_43, BgL_ez00_47,
																						BGl_string3853z00zzexpand_objectz00),
																					BgL_virtualsz00_1628);
																			}
																		{
																			obj_t BgL_virtualsz00_4613;

																			obj_t BgL_slotsz00_4612;

																			long BgL_iz00_4611;

																			BgL_iz00_4611 = BgL_arg3529z00_1811;
																			BgL_slotsz00_4612 = BgL_arg3530z00_1812;
																			BgL_virtualsz00_4613 =
																				BgL_arg3531z00_1813;
																			BgL_virtualsz00_1628 =
																				BgL_virtualsz00_4613;
																			BgL_slotsz00_1626 = BgL_slotsz00_4612;
																			BgL_iz00_1625 = BgL_iz00_4611;
																			goto BgL_zc3anonymousza33343ze3z83_1629;
																		}
																	}
																else
																	{	/* Expand/object.scm 758 */
																		long BgL_arg3537z00_1818;

																		obj_t BgL_arg3538z00_1819;

																		obj_t BgL_arg3539z00_1820;

																		BgL_arg3537z00_1818 =
																			(BgL_iz00_1625 + ((long) 1));
																		BgL_arg3538z00_1819 =
																			CDR(BgL_slotsz00_1626);
																		BgL_arg3539z00_1820 =
																			MAKE_PAIR(BgL_valuez00_1809,
																			BgL_largsz00_1627);
																		{
																			obj_t BgL_largsz00_4619;

																			obj_t BgL_slotsz00_4618;

																			long BgL_iz00_4617;

																			BgL_iz00_4617 = BgL_arg3537z00_1818;
																			BgL_slotsz00_4618 = BgL_arg3538z00_1819;
																			BgL_largsz00_4619 = BgL_arg3539z00_1820;
																			BgL_largsz00_1627 = BgL_largsz00_4619;
																			BgL_slotsz00_1626 = BgL_slotsz00_4618;
																			BgL_iz00_1625 = BgL_iz00_4617;
																			goto BgL_zc3anonymousza33343ze3z83_1629;
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



/* expand-shrink! */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2shrinkz12zc0zzexpand_objectz00(obj_t
		BgL_xz00_48, obj_t BgL_ez00_49)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 766 */
			{

				if (PAIRP(BgL_xz00_48))
					{	/* Expand/object.scm 767 */
						obj_t BgL_cdrzd21776zd2_1834;

						BgL_cdrzd21776zd2_1834 = CDR(BgL_xz00_48);
						if ((CAR(BgL_xz00_48) == CNST_TABLE_REF(((long) 38))))
							{	/* Expand/object.scm 767 */
								if (PAIRP(BgL_cdrzd21776zd2_1834))
									{	/* Expand/object.scm 767 */
										if (NULLP(CDR(BgL_cdrzd21776zd2_1834)))
											{	/* Expand/object.scm 767 */
												obj_t BgL_arg3551z00_1838;

												BgL_arg3551z00_1838 = CAR(BgL_cdrzd21776zd2_1834);
												return
													BGl_replacez12z12zztools_miscz00(BgL_xz00_48,
													BGl_makezd2azd2shrinkz12z12zzexpand_objectz00
													(BgL_ez00_49, BgL_arg3551z00_1838));
											}
										else
											{	/* Expand/object.scm 767 */
											BgL_tagzd21771zd2_1831:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3856z00zzexpand_objectz00, BgL_xz00_48);
											}
									}
								else
									{	/* Expand/object.scm 767 */
										goto BgL_tagzd21771zd2_1831;
									}
							}
						else
							{	/* Expand/object.scm 767 */
								goto BgL_tagzd21771zd2_1831;
							}
					}
				else
					{	/* Expand/object.scm 767 */
						goto BgL_tagzd21771zd2_1831;
					}
			}
		}
	}



/* _expand-shrink! */
	obj_t BGl__expandzd2shrinkz12zc0zzexpand_objectz00(obj_t BgL_envz00_2962,
		obj_t BgL_xz00_2963, obj_t BgL_ez00_2964)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 766 */
			return
				BGl_expandzd2shrinkz12zc0zzexpand_objectz00(BgL_xz00_2963,
				BgL_ez00_2964);
		}
	}



/* make-a-shrink! */
	obj_t BGl_makezd2azd2shrinkz12z12zzexpand_objectz00(obj_t BgL_ez00_50,
		obj_t BgL_oz00_51)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 776 */
			{	/* Expand/object.scm 777 */
				obj_t BgL_newoz00_1843;

				BgL_newoz00_1843 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 43))));
				if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
					{	/* Expand/object.scm 779 */
						obj_t BgL_arg3556z00_1844;

						obj_t BgL_arg3557z00_1845;

						BgL_arg3556z00_1844 = CNST_TABLE_REF(((long) 7));
						{	/* Expand/object.scm 779 */
							obj_t BgL_arg3558z00_1846;

							obj_t BgL_arg3559z00_1847;

							obj_t BgL_arg3560z00_1848;

							{	/* Expand/object.scm 779 */
								obj_t BgL_arg3566z00_1854;

								{	/* Expand/object.scm 779 */
									obj_t BgL_arg3568z00_1856;

									{	/* Expand/object.scm 779 */
										obj_t BgL_arg3569z00_1857;

										BgL_arg3569z00_1857 =
											PROCEDURE_ENTRY(BgL_ez00_50) (BgL_ez00_50, BgL_oz00_51,
											BgL_ez00_50, BEOA);
										{	/* Expand/object.scm 779 */
											obj_t BgL_list3571z00_1859;

											BgL_list3571z00_1859 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3568z00_1856 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3569z00_1857, BgL_list3571z00_1859);
									}}
									BgL_arg3566z00_1854 =
										MAKE_PAIR(BgL_newoz00_1843, BgL_arg3568z00_1856);
								}
								BgL_arg3558z00_1846 = MAKE_PAIR(BgL_arg3566z00_1854, BNIL);
							}
							{	/* Expand/object.scm 780 */
								obj_t BgL_arg3572z00_1860;

								obj_t BgL_arg3573z00_1861;

								{	/* Expand/object.scm 780 */
									obj_t BgL_arg3574z00_1862;

									obj_t BgL_arg3575z00_1863;

									BgL_arg3574z00_1862 = CNST_TABLE_REF(((long) 32));
									{	/* Expand/object.scm 780 */
										obj_t BgL_list3576z00_1864;

										{	/* Expand/object.scm 780 */
											obj_t BgL_arg3577z00_1865;

											obj_t BgL_arg3578z00_1866;

											BgL_arg3577z00_1865 = CNST_TABLE_REF(((long) 33));
											BgL_arg3578z00_1866 = MAKE_PAIR(BNIL, BNIL);
											BgL_list3576z00_1864 =
												MAKE_PAIR(BgL_arg3577z00_1865, BgL_arg3578z00_1866);
										}
										BgL_arg3575z00_1863 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF
											(((long) 34)), BgL_list3576z00_1864);
									}
									BgL_arg3572z00_1860 =
										MAKE_PAIR(BgL_arg3574z00_1862, BgL_arg3575z00_1863);
								}
								{	/* Expand/object.scm 782 */
									obj_t BgL_arg3579z00_1867;

									{	/* Expand/object.scm 782 */
										obj_t BgL_arg3583z00_1871;

										obj_t BgL_arg3584z00_1872;

										{	/* Expand/object.scm 782 */
											obj_t BgL_arg3585z00_1873;

											obj_t BgL_arg3586z00_1874;

											BgL_arg3585z00_1873 = CNST_TABLE_REF(((long) 32));
											{	/* Expand/object.scm 782 */
												obj_t BgL_list3587z00_1875;

												{	/* Expand/object.scm 782 */
													obj_t BgL_arg3588z00_1876;

													obj_t BgL_arg3589z00_1877;

													BgL_arg3588z00_1876 = CNST_TABLE_REF(((long) 33));
													BgL_arg3589z00_1877 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3587z00_1875 =
														MAKE_PAIR(BgL_arg3588z00_1876, BgL_arg3589z00_1877);
												}
												BgL_arg3586z00_1874 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 35)), BgL_list3587z00_1875);
											}
											BgL_arg3583z00_1871 =
												MAKE_PAIR(BgL_arg3585z00_1873, BgL_arg3586z00_1874);
										}
										{	/* Expand/object.scm 783 */
											obj_t BgL_arg3590z00_1878;

											{	/* Expand/object.scm 783 */
												obj_t BgL_arg3593z00_1881;

												obj_t BgL_arg3594z00_1882;

												{	/* Expand/object.scm 783 */
													obj_t BgL_arg3595z00_1883;

													obj_t BgL_arg3596z00_1884;

													BgL_arg3595z00_1883 = CNST_TABLE_REF(((long) 32));
													{	/* Expand/object.scm 783 */
														obj_t BgL_list3597z00_1885;

														{	/* Expand/object.scm 783 */
															obj_t BgL_arg3598z00_1886;

															obj_t BgL_arg3599z00_1887;

															BgL_arg3598z00_1886 = CNST_TABLE_REF(((long) 33));
															BgL_arg3599z00_1887 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3597z00_1885 =
																MAKE_PAIR(BgL_arg3598z00_1886,
																BgL_arg3599z00_1887);
														}
														BgL_arg3596z00_1884 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 40)),
															BgL_list3597z00_1885);
													}
													BgL_arg3593z00_1881 =
														MAKE_PAIR(BgL_arg3595z00_1883, BgL_arg3596z00_1884);
												}
												{	/* Expand/object.scm 784 */
													obj_t BgL_arg3600z00_1888;

													{	/* Expand/object.scm 784 */
														obj_t BgL_arg3603z00_1891;

														obj_t BgL_arg3604z00_1892;

														{	/* Expand/object.scm 784 */
															obj_t BgL_arg3605z00_1893;

															obj_t BgL_arg3606z00_1894;

															BgL_arg3605z00_1893 = CNST_TABLE_REF(((long) 32));
															{	/* Expand/object.scm 784 */
																obj_t BgL_list3607z00_1895;

																{	/* Expand/object.scm 784 */
																	obj_t BgL_arg3608z00_1896;

																	obj_t BgL_arg3609z00_1897;

																	BgL_arg3608z00_1896 =
																		CNST_TABLE_REF(((long) 33));
																	BgL_arg3609z00_1897 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3607z00_1895 =
																		MAKE_PAIR(BgL_arg3608z00_1896,
																		BgL_arg3609z00_1897);
																}
																BgL_arg3606z00_1894 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 41)),
																	BgL_list3607z00_1895);
															}
															BgL_arg3603z00_1891 =
																MAKE_PAIR(BgL_arg3605z00_1893,
																BgL_arg3606z00_1894);
														}
														{	/* Expand/object.scm 784 */
															obj_t BgL_list3610z00_1898;

															BgL_list3610z00_1898 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3604z00_1892 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_newoz00_1843, BgL_list3610z00_1898);
														}
														BgL_arg3600z00_1888 =
															MAKE_PAIR(BgL_arg3603z00_1891,
															BgL_arg3604z00_1892);
													}
													{	/* Expand/object.scm 783 */
														obj_t BgL_list3602z00_1890;

														BgL_list3602z00_1890 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3594z00_1882 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3600z00_1888, BgL_list3602z00_1890);
												}}
												BgL_arg3590z00_1878 =
													MAKE_PAIR(BgL_arg3593z00_1881, BgL_arg3594z00_1882);
											}
											{	/* Expand/object.scm 782 */
												obj_t BgL_list3592z00_1880;

												BgL_list3592z00_1880 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3584z00_1872 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3590z00_1878, BgL_list3592z00_1880);
										}}
										BgL_arg3579z00_1867 =
											MAKE_PAIR(BgL_arg3583z00_1871, BgL_arg3584z00_1872);
									}
									{	/* Expand/object.scm 780 */
										obj_t BgL_list3581z00_1869;

										{	/* Expand/object.scm 780 */
											obj_t BgL_arg3582z00_1870;

											BgL_arg3582z00_1870 = MAKE_PAIR(BNIL, BNIL);
											BgL_list3581z00_1869 =
												MAKE_PAIR(BgL_arg3579z00_1867, BgL_arg3582z00_1870);
										}
										BgL_arg3573z00_1861 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_newoz00_1843, BgL_list3581z00_1869);
								}}
								BgL_arg3559z00_1847 =
									MAKE_PAIR(BgL_arg3572z00_1860, BgL_arg3573z00_1861);
							}
							{	/* Expand/object.scm 785 */
								obj_t BgL_arg3612z00_1899;

								obj_t BgL_arg3613z00_1900;

								BgL_arg3612z00_1899 = CNST_TABLE_REF(((long) 31));
								{	/* Expand/object.scm 785 */
									obj_t BgL_list3614z00_1901;

									{	/* Expand/object.scm 785 */
										obj_t BgL_arg3615z00_1902;

										BgL_arg3615z00_1902 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3614z00_1901 =
											MAKE_PAIR(BFALSE, BgL_arg3615z00_1902);
									}
									BgL_arg3613z00_1900 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_newoz00_1843, BgL_list3614z00_1901);
								}
								BgL_arg3560z00_1848 =
									MAKE_PAIR(BgL_arg3612z00_1899, BgL_arg3613z00_1900);
							}
							{	/* Expand/object.scm 779 */
								obj_t BgL_list3562z00_1850;

								{	/* Expand/object.scm 779 */
									obj_t BgL_arg3563z00_1851;

									{	/* Expand/object.scm 779 */
										obj_t BgL_arg3564z00_1852;

										{	/* Expand/object.scm 779 */
											obj_t BgL_arg3565z00_1853;

											BgL_arg3565z00_1853 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3564z00_1852 =
												MAKE_PAIR(BgL_newoz00_1843, BgL_arg3565z00_1853);
										}
										BgL_arg3563z00_1851 =
											MAKE_PAIR(BgL_arg3560z00_1848, BgL_arg3564z00_1852);
									}
									BgL_list3562z00_1850 =
										MAKE_PAIR(BgL_arg3559z00_1847, BgL_arg3563z00_1851);
								}
								BgL_arg3557z00_1845 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3558z00_1846, BgL_list3562z00_1850);
						}}
						return MAKE_PAIR(BgL_arg3556z00_1844, BgL_arg3557z00_1845);
					}
				else
					{	/* Expand/object.scm 787 */
						obj_t BgL_arg3616z00_1903;

						obj_t BgL_arg3617z00_1904;

						BgL_arg3616z00_1903 = CNST_TABLE_REF(((long) 7));
						{	/* Expand/object.scm 787 */
							obj_t BgL_arg3618z00_1905;

							obj_t BgL_arg3619z00_1906;

							{	/* Expand/object.scm 787 */
								obj_t BgL_arg3623z00_1910;

								{	/* Expand/object.scm 787 */
									obj_t BgL_arg3625z00_1912;

									{	/* Expand/object.scm 787 */
										obj_t BgL_arg3626z00_1913;

										BgL_arg3626z00_1913 =
											PROCEDURE_ENTRY(BgL_ez00_50) (BgL_ez00_50, BgL_oz00_51,
											BgL_ez00_50, BEOA);
										{	/* Expand/object.scm 787 */
											obj_t BgL_list3628z00_1915;

											BgL_list3628z00_1915 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3625z00_1912 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3626z00_1913, BgL_list3628z00_1915);
									}}
									BgL_arg3623z00_1910 =
										MAKE_PAIR(BgL_newoz00_1843, BgL_arg3625z00_1912);
								}
								BgL_arg3618z00_1905 = MAKE_PAIR(BgL_arg3623z00_1910, BNIL);
							}
							{	/* Expand/object.scm 788 */
								obj_t BgL_arg3629z00_1916;

								obj_t BgL_arg3630z00_1917;

								BgL_arg3629z00_1916 = CNST_TABLE_REF(((long) 36));
								{	/* Expand/object.scm 788 */
									obj_t BgL_arg3631z00_1918;

									obj_t BgL_arg3632z00_1919;

									obj_t BgL_arg3633z00_1920;

									{	/* Expand/object.scm 788 */
										obj_t BgL_arg3638z00_1925;

										obj_t BgL_arg3639z00_1926;

										BgL_arg3638z00_1925 = CNST_TABLE_REF(((long) 44));
										{	/* Expand/object.scm 788 */
											obj_t BgL_list3640z00_1927;

											BgL_list3640z00_1927 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3639z00_1926 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_newoz00_1843, BgL_list3640z00_1927);
										}
										BgL_arg3631z00_1918 =
											MAKE_PAIR(BgL_arg3638z00_1925, BgL_arg3639z00_1926);
									}
									{	/* Expand/object.scm 789 */
										obj_t BgL_arg3641z00_1928;

										obj_t BgL_arg3642z00_1929;

										BgL_arg3641z00_1928 = CNST_TABLE_REF(((long) 36));
										{	/* Expand/object.scm 789 */
											obj_t BgL_arg3643z00_1930;

											obj_t BgL_arg3644z00_1931;

											obj_t BgL_arg3645z00_1932;

											{	/* Expand/object.scm 789 */
												obj_t BgL_arg3650z00_1937;

												obj_t BgL_arg3651z00_1938;

												BgL_arg3650z00_1937 = CNST_TABLE_REF(((long) 37));
												{	/* Expand/object.scm 789 */
													obj_t BgL_list3652z00_1939;

													BgL_list3652z00_1939 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3651z00_1938 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_newoz00_1843, BgL_list3652z00_1939);
												}
												BgL_arg3643z00_1930 =
													MAKE_PAIR(BgL_arg3650z00_1937, BgL_arg3651z00_1938);
											}
											{	/* Expand/object.scm 790 */
												obj_t BgL_arg3653z00_1940;

												obj_t BgL_arg3654z00_1941;

												BgL_arg3653z00_1940 = CNST_TABLE_REF(((long) 22));
												{	/* Expand/object.scm 791 */
													obj_t BgL_arg3655z00_1942;

													obj_t BgL_arg3656z00_1943;

													{	/* Expand/object.scm 791 */
														obj_t BgL_arg3661z00_1948;

														obj_t BgL_arg3662z00_1949;

														{	/* Expand/object.scm 791 */
															obj_t BgL_arg3663z00_1950;

															obj_t BgL_arg3664z00_1951;

															BgL_arg3663z00_1950 = CNST_TABLE_REF(((long) 32));
															{	/* Expand/object.scm 791 */
																obj_t BgL_list3665z00_1952;

																{	/* Expand/object.scm 791 */
																	obj_t BgL_arg3666z00_1953;

																	obj_t BgL_arg3667z00_1954;

																	BgL_arg3666z00_1953 =
																		CNST_TABLE_REF(((long) 33));
																	BgL_arg3667z00_1954 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3665z00_1952 =
																		MAKE_PAIR(BgL_arg3666z00_1953,
																		BgL_arg3667z00_1954);
																}
																BgL_arg3664z00_1951 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 34)),
																	BgL_list3665z00_1952);
															}
															BgL_arg3661z00_1948 =
																MAKE_PAIR(BgL_arg3663z00_1950,
																BgL_arg3664z00_1951);
														}
														{	/* Expand/object.scm 793 */
															obj_t BgL_arg3668z00_1955;

															{	/* Expand/object.scm 793 */
																obj_t BgL_arg3673z00_1959;

																obj_t BgL_arg3674z00_1960;

																{	/* Expand/object.scm 793 */
																	obj_t BgL_arg3675z00_1961;

																	obj_t BgL_arg3677z00_1962;

																	BgL_arg3675z00_1961 =
																		CNST_TABLE_REF(((long) 32));
																	{	/* Expand/object.scm 793 */
																		obj_t BgL_list3678z00_1963;

																		{	/* Expand/object.scm 793 */
																			obj_t BgL_arg3679z00_1964;

																			obj_t BgL_arg3680z00_1965;

																			BgL_arg3679z00_1964 =
																				CNST_TABLE_REF(((long) 33));
																			BgL_arg3680z00_1965 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3678z00_1963 =
																				MAKE_PAIR(BgL_arg3679z00_1964,
																				BgL_arg3680z00_1965);
																		}
																		BgL_arg3677z00_1962 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(CNST_TABLE_REF(((long) 35)),
																			BgL_list3678z00_1963);
																	}
																	BgL_arg3673z00_1959 =
																		MAKE_PAIR(BgL_arg3675z00_1961,
																		BgL_arg3677z00_1962);
																}
																{	/* Expand/object.scm 794 */
																	obj_t BgL_arg3681z00_1966;

																	{	/* Expand/object.scm 794 */
																		obj_t BgL_arg3684z00_1969;

																		obj_t BgL_arg3685z00_1970;

																		{	/* Expand/object.scm 794 */
																			obj_t BgL_arg3686z00_1971;

																			obj_t BgL_arg3687z00_1972;

																			BgL_arg3686z00_1971 =
																				CNST_TABLE_REF(((long) 32));
																			{	/* Expand/object.scm 794 */
																				obj_t BgL_list3688z00_1973;

																				{	/* Expand/object.scm 794 */
																					obj_t BgL_arg3689z00_1974;

																					obj_t BgL_arg3690z00_1975;

																					BgL_arg3689z00_1974 =
																						CNST_TABLE_REF(((long) 33));
																					BgL_arg3690z00_1975 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3688z00_1973 =
																						MAKE_PAIR(BgL_arg3689z00_1974,
																						BgL_arg3690z00_1975);
																				}
																				BgL_arg3687z00_1972 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 40)),
																					BgL_list3688z00_1973);
																			}
																			BgL_arg3684z00_1969 =
																				MAKE_PAIR(BgL_arg3686z00_1971,
																				BgL_arg3687z00_1972);
																		}
																		{	/* Expand/object.scm 795 */
																			obj_t BgL_arg3691z00_1976;

																			{	/* Expand/object.scm 795 */
																				obj_t BgL_arg3694z00_1979;

																				obj_t BgL_arg3695z00_1980;

																				{	/* Expand/object.scm 795 */
																					obj_t BgL_arg3696z00_1981;

																					obj_t BgL_arg3697z00_1982;

																					BgL_arg3696z00_1981 =
																						CNST_TABLE_REF(((long) 32));
																					{	/* Expand/object.scm 795 */
																						obj_t BgL_list3698z00_1983;

																						{	/* Expand/object.scm 795 */
																							obj_t BgL_arg3699z00_1984;

																							obj_t BgL_arg3700z00_1985;

																							BgL_arg3699z00_1984 =
																								CNST_TABLE_REF(((long) 33));
																							BgL_arg3700z00_1985 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3698z00_1983 =
																								MAKE_PAIR(BgL_arg3699z00_1984,
																								BgL_arg3700z00_1985);
																						}
																						BgL_arg3697z00_1982 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 41)),
																							BgL_list3698z00_1983);
																					}
																					BgL_arg3694z00_1979 =
																						MAKE_PAIR(BgL_arg3696z00_1981,
																						BgL_arg3697z00_1982);
																				}
																				{	/* Expand/object.scm 795 */
																					obj_t BgL_list3701z00_1986;

																					BgL_list3701z00_1986 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3695z00_1980 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_newoz00_1843,
																						BgL_list3701z00_1986);
																				}
																				BgL_arg3691z00_1976 =
																					MAKE_PAIR(BgL_arg3694z00_1979,
																					BgL_arg3695z00_1980);
																			}
																			{	/* Expand/object.scm 794 */
																				obj_t BgL_list3693z00_1978;

																				BgL_list3693z00_1978 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3685z00_1970 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3691z00_1976,
																					BgL_list3693z00_1978);
																		}}
																		BgL_arg3681z00_1966 =
																			MAKE_PAIR(BgL_arg3684z00_1969,
																			BgL_arg3685z00_1970);
																	}
																	{	/* Expand/object.scm 793 */
																		obj_t BgL_list3683z00_1968;

																		BgL_list3683z00_1968 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3674z00_1960 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3681z00_1966,
																			BgL_list3683z00_1968);
																}}
																BgL_arg3668z00_1955 =
																	MAKE_PAIR(BgL_arg3673z00_1959,
																	BgL_arg3674z00_1960);
															}
															{	/* Expand/object.scm 791 */
																obj_t BgL_list3671z00_1957;

																{	/* Expand/object.scm 791 */
																	obj_t BgL_arg3672z00_1958;

																	BgL_arg3672z00_1958 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3671z00_1957 =
																		MAKE_PAIR(BgL_arg3668z00_1955,
																		BgL_arg3672z00_1958);
																}
																BgL_arg3662z00_1949 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_newoz00_1843, BgL_list3671z00_1957);
														}}
														BgL_arg3655z00_1942 =
															MAKE_PAIR(BgL_arg3661z00_1948,
															BgL_arg3662z00_1949);
													}
													{	/* Expand/object.scm 796 */
														obj_t BgL_arg3702z00_1987;

														obj_t BgL_arg3703z00_1988;

														BgL_arg3702z00_1987 = CNST_TABLE_REF(((long) 31));
														{	/* Expand/object.scm 796 */
															obj_t BgL_list3704z00_1989;

															{	/* Expand/object.scm 796 */
																obj_t BgL_arg3705z00_1990;

																BgL_arg3705z00_1990 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3704z00_1989 =
																	MAKE_PAIR(BFALSE, BgL_arg3705z00_1990);
															}
															BgL_arg3703z00_1988 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_newoz00_1843, BgL_list3704z00_1989);
														}
														BgL_arg3656z00_1943 =
															MAKE_PAIR(BgL_arg3702z00_1987,
															BgL_arg3703z00_1988);
													}
													{	/* Expand/object.scm 790 */
														obj_t BgL_list3658z00_1945;

														{	/* Expand/object.scm 790 */
															obj_t BgL_arg3659z00_1946;

															{	/* Expand/object.scm 790 */
																obj_t BgL_arg3660z00_1947;

																BgL_arg3660z00_1947 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3659z00_1946 =
																	MAKE_PAIR(BgL_newoz00_1843,
																	BgL_arg3660z00_1947);
															}
															BgL_list3658z00_1945 =
																MAKE_PAIR(BgL_arg3656z00_1943,
																BgL_arg3659z00_1946);
														}
														BgL_arg3654z00_1941 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3655z00_1942, BgL_list3658z00_1945);
												}}
												BgL_arg3644z00_1931 =
													MAKE_PAIR(BgL_arg3653z00_1940, BgL_arg3654z00_1941);
											}
											{	/* Expand/object.scm 798 */
												obj_t BgL_arg3706z00_1991;

												obj_t BgL_arg3707z00_1992;

												BgL_arg3706z00_1991 = CNST_TABLE_REF(((long) 42));
												{	/* Expand/object.scm 798 */
													obj_t BgL_list3708z00_1993;

													{	/* Expand/object.scm 798 */
														obj_t BgL_arg3710z00_1995;

														{	/* Expand/object.scm 798 */
															obj_t BgL_arg3711z00_1996;

															BgL_arg3711z00_1996 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3710z00_1995 =
																MAKE_PAIR(BgL_newoz00_1843,
																BgL_arg3711z00_1996);
														}
														BgL_list3708z00_1993 =
															MAKE_PAIR(BGl_string3857z00zzexpand_objectz00,
															BgL_arg3710z00_1995);
													}
													BgL_arg3707z00_1992 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BGl_string3858z00zzexpand_objectz00,
														BgL_list3708z00_1993);
												}
												BgL_arg3645z00_1932 =
													MAKE_PAIR(BgL_arg3706z00_1991, BgL_arg3707z00_1992);
											}
											{	/* Expand/object.scm 789 */
												obj_t BgL_list3647z00_1934;

												{	/* Expand/object.scm 789 */
													obj_t BgL_arg3648z00_1935;

													{	/* Expand/object.scm 789 */
														obj_t BgL_arg3649z00_1936;

														BgL_arg3649z00_1936 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3648z00_1935 =
															MAKE_PAIR(BgL_arg3645z00_1932,
															BgL_arg3649z00_1936);
													}
													BgL_list3647z00_1934 =
														MAKE_PAIR(BgL_arg3644z00_1931, BgL_arg3648z00_1935);
												}
												BgL_arg3642z00_1929 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3643z00_1930, BgL_list3647z00_1934);
										}}
										BgL_arg3632z00_1919 =
											MAKE_PAIR(BgL_arg3641z00_1928, BgL_arg3642z00_1929);
									}
									{	/* Expand/object.scm 799 */
										obj_t BgL_arg3712z00_1997;

										obj_t BgL_arg3713z00_1998;

										BgL_arg3712z00_1997 = CNST_TABLE_REF(((long) 42));
										{	/* Expand/object.scm 799 */
											obj_t BgL_list3714z00_1999;

											{	/* Expand/object.scm 799 */
												obj_t BgL_arg3716z00_2001;

												{	/* Expand/object.scm 799 */
													obj_t BgL_arg3717z00_2002;

													BgL_arg3717z00_2002 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3716z00_2001 =
														MAKE_PAIR(BgL_newoz00_1843, BgL_arg3717z00_2002);
												}
												BgL_list3714z00_1999 =
													MAKE_PAIR(BGl_string3857z00zzexpand_objectz00,
													BgL_arg3716z00_2001);
											}
											BgL_arg3713z00_1998 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BGl_string3858z00zzexpand_objectz00,
												BgL_list3714z00_1999);
										}
										BgL_arg3633z00_1920 =
											MAKE_PAIR(BgL_arg3712z00_1997, BgL_arg3713z00_1998);
									}
									{	/* Expand/object.scm 788 */
										obj_t BgL_list3635z00_1922;

										{	/* Expand/object.scm 788 */
											obj_t BgL_arg3636z00_1923;

											{	/* Expand/object.scm 788 */
												obj_t BgL_arg3637z00_1924;

												BgL_arg3637z00_1924 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3636z00_1923 =
													MAKE_PAIR(BgL_arg3633z00_1920, BgL_arg3637z00_1924);
											}
											BgL_list3635z00_1922 =
												MAKE_PAIR(BgL_arg3632z00_1919, BgL_arg3636z00_1923);
										}
										BgL_arg3630z00_1917 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3631z00_1918, BgL_list3635z00_1922);
								}}
								BgL_arg3619z00_1906 =
									MAKE_PAIR(BgL_arg3629z00_1916, BgL_arg3630z00_1917);
							}
							{	/* Expand/object.scm 787 */
								obj_t BgL_list3621z00_1908;

								{	/* Expand/object.scm 787 */
									obj_t BgL_arg3622z00_1909;

									BgL_arg3622z00_1909 = MAKE_PAIR(BNIL, BNIL);
									BgL_list3621z00_1908 =
										MAKE_PAIR(BgL_arg3619z00_1906, BgL_arg3622z00_1909);
								}
								BgL_arg3617z00_1904 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3618z00_1905, BgL_list3621z00_1908);
						}}
						return MAKE_PAIR(BgL_arg3616z00_1903, BgL_arg3617z00_1904);
					}
			}
		}
	}



/* make-virtual-set */
	obj_t BGl_makezd2virtualzd2setz00zzexpand_objectz00(obj_t BgL_slotz00_52,
		obj_t BgL_valuez00_53, obj_t BgL_varz00_54, obj_t BgL_classz00_55,
		obj_t BgL_formz00_56, obj_t BgL_ez00_57, obj_t BgL_alloczd2kindzd2_58)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 804 */
			{	/* Expand/object.scm 805 */
				bool_t BgL_testz00_4796;

				{
					BgL_slotz00_bglt BgL_auxz00_4797;

					BgL_auxz00_4797 = (BgL_slotz00_bglt) (BgL_slotz00_52);
					BgL_testz00_4796 =
						(((BgL_slotz00_bglt) CREF(BgL_auxz00_4797))->BgL_readzd2onlyzf3z21);
				}
				if (BgL_testz00_4796)
					{	/* Expand/object.scm 807 */
						obj_t BgL_arg3720z00_2005;

						{	/* Expand/object.scm 807 */
							obj_t BgL_arg3723z00_2008;

							{	/* Expand/object.scm 808 */
								obj_t BgL_arg3730z00_2015;

								{
									BgL_slotz00_bglt BgL_auxz00_4800;

									BgL_auxz00_4800 = (BgL_slotz00_bglt) (BgL_slotz00_52);
									BgL_arg3730z00_2015 =
										(((BgL_slotz00_bglt) CREF(BgL_auxz00_4800))->BgL_idz00);
								}
								{	/* Expand/object.scm 808 */
									obj_t BgL_res3828z00_2874;

									{	/* Expand/object.scm 808 */
										obj_t BgL_arg2063z00_2873;

										BgL_arg2063z00_2873 = SYMBOL_TO_STRING(BgL_arg3730z00_2015);
										BgL_res3828z00_2874 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_2873);
									}
									BgL_arg3723z00_2008 = BgL_res3828z00_2874;
								}
							}
							{	/* Expand/object.scm 807 */
								obj_t BgL_list3725z00_2010;

								{	/* Expand/object.scm 807 */
									obj_t BgL_arg3726z00_2011;

									{	/* Expand/object.scm 807 */
										obj_t BgL_arg3727z00_2012;

										{	/* Expand/object.scm 807 */
											obj_t BgL_arg3728z00_2013;

											{	/* Expand/object.scm 807 */
												obj_t BgL_arg3729z00_2014;

												BgL_arg3729z00_2014 =
													MAKE_PAIR(BGl_string3842z00zzexpand_objectz00, BNIL);
												BgL_arg3728z00_2013 =
													MAKE_PAIR(BgL_arg3723z00_2008, BgL_arg3729z00_2014);
											}
											BgL_arg3727z00_2012 =
												MAKE_PAIR(BGl_string3859z00zzexpand_objectz00,
												BgL_arg3728z00_2013);
										}
										BgL_arg3726z00_2011 =
											MAKE_PAIR(BgL_alloczd2kindzd2_58, BgL_arg3727z00_2012);
									}
									BgL_list3725z00_2010 =
										MAKE_PAIR(BGl_string3860z00zzexpand_objectz00,
										BgL_arg3726z00_2011);
								}
								BgL_arg3720z00_2005 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3725z00_2010);
							}
						}
						return
							BGl_errorz00zz__errorz00(BFALSE, BgL_arg3720z00_2005,
							BgL_formz00_56);
					}
				else
					{	/* Expand/object.scm 812 */
						obj_t BgL_arg3731z00_2016;

						{	/* Expand/object.scm 812 */
							obj_t BgL_arg3732z00_2017;

							{	/* Expand/object.scm 812 */
								obj_t BgL_arg3733z00_2018;

								obj_t BgL_arg3734z00_2019;

								{	/* Expand/object.scm 812 */
									obj_t BgL_arg3735z00_2020;

									obj_t BgL_arg3736z00_2021;

									obj_t BgL_arg3737z00_2022;

									obj_t BgL_arg3738z00_2023;

									{
										BgL_typez00_bglt BgL_auxz00_4812;

										BgL_auxz00_4812 = (BgL_typez00_bglt) (BgL_classz00_55);
										BgL_arg3735z00_2020 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_4812))->BgL_idz00);
									}
									BgL_arg3736z00_2021 = CNST_TABLE_REF(((long) 9));
									{
										BgL_slotz00_bglt BgL_auxz00_4816;

										BgL_auxz00_4816 = (BgL_slotz00_bglt) (BgL_slotz00_52);
										BgL_arg3737z00_2022 =
											(((BgL_slotz00_bglt) CREF(BgL_auxz00_4816))->BgL_idz00);
									}
									BgL_arg3738z00_2023 = CNST_TABLE_REF(((long) 13));
									{	/* Expand/object.scm 812 */
										obj_t BgL_list3739z00_2024;

										{	/* Expand/object.scm 812 */
											obj_t BgL_arg3740z00_2025;

											{	/* Expand/object.scm 812 */
												obj_t BgL_arg3741z00_2026;

												{	/* Expand/object.scm 812 */
													obj_t BgL_arg3742z00_2027;

													BgL_arg3742z00_2027 =
														MAKE_PAIR(BgL_arg3738z00_2023, BNIL);
													BgL_arg3741z00_2026 =
														MAKE_PAIR(BgL_arg3737z00_2022, BgL_arg3742z00_2027);
												}
												BgL_arg3740z00_2025 =
													MAKE_PAIR(BgL_arg3736z00_2021, BgL_arg3741z00_2026);
											}
											BgL_list3739z00_2024 =
												MAKE_PAIR(BgL_arg3735z00_2020, BgL_arg3740z00_2025);
										}
										BgL_arg3733z00_2018 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list3739z00_2024);
								}}
								{	/* Expand/object.scm 812 */
									obj_t BgL_list3743z00_2028;

									{	/* Expand/object.scm 812 */
										obj_t BgL_arg3745z00_2029;

										BgL_arg3745z00_2029 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3743z00_2028 =
											MAKE_PAIR(BgL_valuez00_53, BgL_arg3745z00_2029);
									}
									BgL_arg3734z00_2019 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_varz00_54,
										BgL_list3743z00_2028);
								}
								BgL_arg3732z00_2017 =
									MAKE_PAIR(BgL_arg3733z00_2018, BgL_arg3734z00_2019);
							}
							BgL_arg3731z00_2016 =
								PROCEDURE_ENTRY(BgL_ez00_57) (BgL_ez00_57, BgL_arg3732z00_2017,
								BgL_ez00_57, BEOA);
						}
						return
							BGl_objectzd2epairifyzd2zzexpand_objectz00(BgL_arg3731z00_2016,
							BgL_valuez00_53);
					}
			}
		}
	}



/* object-epairify */
	obj_t BGl_objectzd2epairifyzd2zzexpand_objectz00(obj_t BgL_objz00_59,
		obj_t BgL_epairz00_60)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 821 */
		BGl_objectzd2epairifyzd2zzexpand_objectz00:
			if (EXTENDED_PAIRP(BgL_epairz00_60))
				{	/* Expand/object.scm 822 */
					if (PAIRP(BgL_objz00_59))
						{	/* Expand/object.scm 824 */
							obj_t BgL_arg3748z00_2032;

							obj_t BgL_arg3749z00_2033;

							obj_t BgL_arg3750z00_2034;

							BgL_arg3748z00_2032 = CAR(BgL_objz00_59);
							BgL_arg3749z00_2033 = CDR(BgL_objz00_59);
							BgL_arg3750z00_2034 = CER(BgL_epairz00_60);
							{	/* Expand/object.scm 824 */
								obj_t BgL_res3829z00_2885;

								BgL_res3829z00_2885 =
									MAKE_EXTENDED_PAIR(BgL_arg3748z00_2032, BgL_arg3749z00_2033,
									BgL_arg3750z00_2034);
								return BgL_res3829z00_2885;
							}
						}
					else
						{	/* Expand/object.scm 825 */
							obj_t BgL_arg3751z00_2035;

							{	/* Expand/object.scm 825 */
								obj_t BgL_arg3752z00_2036;

								obj_t BgL_arg3753z00_2037;

								BgL_arg3752z00_2036 = CNST_TABLE_REF(((long) 22));
								{	/* Expand/object.scm 825 */
									obj_t BgL_list3754z00_2038;

									BgL_list3754z00_2038 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3753z00_2037 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_objz00_59,
										BgL_list3754z00_2038);
								}
								BgL_arg3751z00_2035 =
									MAKE_PAIR(BgL_arg3752z00_2036, BgL_arg3753z00_2037);
							}
							{
								obj_t BgL_objz00_4844;

								BgL_objz00_4844 = BgL_arg3751z00_2035;
								BgL_objz00_59 = BgL_objz00_4844;
								goto BGl_objectzd2epairifyzd2zzexpand_objectz00;
							}
						}
				}
			else
				{	/* Expand/object.scm 822 */
					return BgL_objz00_59;
				}
		}
	}



/* find-slot-offset */
	obj_t BGl_findzd2slotzd2offsetz00zzexpand_objectz00(obj_t BgL_slotsz00_61,
		obj_t BgL_namez00_62, obj_t BgL_formz00_63, obj_t BgL_sexpz00_64)
	{
		AN_OBJECT;
		{	/* Expand/object.scm 831 */
			{
				obj_t BgL_slotsz00_2040;

				long BgL_iz00_2041;

				BgL_slotsz00_2040 = BgL_slotsz00_61;
				BgL_iz00_2041 = ((long) 0);
			BgL_zc3anonymousza33755ze3z83_2042:
				if (NULLP(BgL_slotsz00_2040))
					{	/* Expand/object.scm 837 */
						obj_t BgL_arg3757z00_2044;

						{	/* Expand/object.scm 837 */
							obj_t BgL_arg3760z00_2047;

							{	/* Expand/object.scm 838 */
								obj_t BgL_res3830z00_2889;

								{	/* Expand/object.scm 838 */
									obj_t BgL_arg2063z00_2888;

									BgL_arg2063z00_2888 = SYMBOL_TO_STRING(BgL_namez00_62);
									BgL_res3830z00_2889 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_2888);
								}
								BgL_arg3760z00_2047 = BgL_res3830z00_2889;
							}
							{	/* Expand/object.scm 837 */
								obj_t BgL_list3762z00_2049;

								{	/* Expand/object.scm 837 */
									obj_t BgL_arg3763z00_2050;

									{	/* Expand/object.scm 837 */
										obj_t BgL_arg3764z00_2051;

										{	/* Expand/object.scm 837 */
											obj_t BgL_arg3765z00_2052;

											{	/* Expand/object.scm 837 */
												obj_t BgL_arg3766z00_2053;

												BgL_arg3766z00_2053 =
													MAKE_PAIR(BGl_string3842z00zzexpand_objectz00, BNIL);
												BgL_arg3765z00_2052 =
													MAKE_PAIR(BgL_arg3760z00_2047, BgL_arg3766z00_2053);
											}
											BgL_arg3764z00_2051 =
												MAKE_PAIR(BGl_string3861z00zzexpand_objectz00,
												BgL_arg3765z00_2052);
										}
										BgL_arg3763z00_2050 =
											MAKE_PAIR(BgL_formz00_63, BgL_arg3764z00_2051);
									}
									BgL_list3762z00_2049 =
										MAKE_PAIR(BGl_string3860z00zzexpand_objectz00,
										BgL_arg3763z00_2050);
								}
								BgL_arg3757z00_2044 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3762z00_2049);
							}
						}
						return
							BGl_errorz00zz__errorz00(BFALSE, BgL_arg3757z00_2044,
							BgL_sexpz00_64);
					}
				else
					{	/* Expand/object.scm 841 */
						bool_t BgL_testz00_4856;

						{	/* Expand/object.scm 841 */
							obj_t BgL_auxz00_4857;

							{	/* Expand/object.scm 841 */
								BgL_slotz00_bglt BgL_obj2351z00_2891;

								{	/* Expand/object.scm 841 */
									obj_t BgL_pairz00_2890;

									BgL_pairz00_2890 = BgL_slotsz00_2040;
									BgL_obj2351z00_2891 =
										(BgL_slotz00_bglt) (CAR(BgL_pairz00_2890));
								}
								BgL_auxz00_4857 =
									(((BgL_slotz00_bglt) CREF(BgL_obj2351z00_2891))->BgL_idz00);
							}
							BgL_testz00_4856 = (BgL_auxz00_4857 == BgL_namez00_62);
						}
						if (BgL_testz00_4856)
							{	/* Expand/object.scm 841 */
								return BINT(BgL_iz00_2041);
							}
						else
							{
								long BgL_iz00_4865;

								obj_t BgL_slotsz00_4863;

								BgL_slotsz00_4863 = CDR(BgL_slotsz00_2040);
								BgL_iz00_4865 = (BgL_iz00_2041 + ((long) 1));
								BgL_iz00_2041 = BgL_iz00_4865;
								BgL_slotsz00_2040 = BgL_slotsz00_4863;
								goto BgL_zc3anonymousza33755ze3z83_2042;
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_objectz00()
	{
		AN_OBJECT;
		{	/* Expand/object.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_objectz00()
	{
		AN_OBJECT;
		{	/* Expand/object.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_objectz00()
	{
		AN_OBJECT;
		{	/* Expand/object.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 245373811),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzmodule_prototypez00(((long) 280176011),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 315716763),
				BSTRING_TO_STRING(BGl_string3862z00zzexpand_objectz00));
		}
	}

#ifdef __cplusplus
}
#endif
