/*===========================================================================*/
/*   (Cfa/cinfo3.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/cinfo3.scm)*/
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

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

	typedef struct BgL_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_getfieldz00_bglt;

	typedef struct BgL_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_setfieldz00_bglt;

	typedef struct BgL_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_argszd2typezd2;
	}             *BgL_newz00_bglt;

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2heapzd2formatz00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

	typedef struct BgL_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                 *BgL_vlengthz00_bglt;

	typedef struct BgL_isaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		struct BgL_typez00_bgl *BgL_classz00;
	}             *BgL_isaz00_bglt;

	typedef struct BgL_castzd2nullzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                     *BgL_castzd2nullzd2_bglt;

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_pragmazf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_pragmazf2cinfozf2_bglt;

	typedef struct BgL_getfieldzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_getfieldzf2cinfozf2_bglt;

	typedef struct BgL_setfieldzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_setfieldzf2cinfozf2_bglt;

	typedef struct BgL_newzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                     *BgL_newzf2cinfozf2_bglt;

	typedef struct BgL_isazf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                     *BgL_isazf2cinfozf2_bglt;

	typedef struct BgL_castzd2nullzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                             *BgL_castzd2nullzf2cinfoz20_bglt;

	typedef struct BgL_vrefzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                      *BgL_vrefzf2cinfozf2_bglt;

	typedef struct BgL_vsetz12zf2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vsetz12zf2cinfoze0_bglt;

	typedef struct BgL_vlengthzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vlengthzf2cinfozf2_bglt;

	typedef struct BgL_prezd2valloczf2cinfoz20_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                              *BgL_prezd2valloczf2cinfoz20_bglt;

	typedef struct BgL_valloczf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_valloczf2cinfozf2_bglt;

	typedef struct BgL_valloczf2cinfozb2optimz40_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		bool_t BgL_stackablezf3zf3;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                                *BgL_valloczf2cinfozb2optimz40_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_isazf2cinfozf2_bglt
		BGl_fillzd2isazf2Cinfoz12z32zzcfa_info3z00(BgL_isazf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_setfieldzf2cinfozf2_bglt
		BGl_setfieldzf2Cinfozd2nilz20zzcfa_info3z00();
	static obj_t BGl__z52allocatezd2castzd2nullzf2Cinfoza0zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_valloczf2cinfozb2optimz40_bglt
		BGl_makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_approxz00_bglt, BgL_approxz00_bglt, long, BgL_variablez00_bglt, bool_t,
		obj_t, bool_t);
	BGL_EXPORTED_DECL BgL_newz00_bglt
		BGl_z52allocatezd2newzf2Cinfoz72zzcfa_info3z00();
	static obj_t BGl__prezd2valloczf2Cinfozf3zd3zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vsetz12zf2cinfoze0_bglt
		BGl_wideningzd2vsetz12zf2Cinfoz32zzcfa_info3z00(BgL_approxz00_bglt, bool_t);
	static obj_t BGl__castzd2nullzf2Cinfozf3zd3zzcfa_info3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__wideningzd2vlengthzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vlengthzf2cinfozf2_bglt
		BGl_wideningzd2vlengthzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__vsetz12zf2Cinfozd2nilz32zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2valloczf2cinfoz20_bglt
		BGl_prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00();
	static obj_t BGl__wideningzd2setfieldzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzd2_bglt
		BGl_z52allocatezd2castzd2nullzf2Cinfoza0zzcfa_info3z00();
	static obj_t BGl_objectzd2ze3structzd2castzd24785z31zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzf2cinfoz20_bglt
		BGl_castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00();
	static obj_t BGl_objectzd2ze3structzd2prezd2v4768z31zzcfa_info3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setfieldz00_bglt
		BGl_z52allocatezd2setfieldzf2Cinfoz72zzcfa_info3z00();
	static obj_t BGl__fillzd2getfieldzf2Cinfoz12z32zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2getfieldzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__vlengthzf2Cinfozf3z01zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl__pragmazf2Cinfozd2nilz20zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl__wideningzd2vrefzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_setfieldzf2cinfozf2_bglt
		BGl_wideningzd2setfieldzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_z52allocatezd2prezd2valloczf2Cinfoza0zzcfa_info3z00();
	static obj_t BGl_cnstzd2initzd2zzcfa_info3z00();
	static obj_t BGl__getfieldzf2Cinfozd2nilz20zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_pragmazf2cinfozf2_bglt
		BGl_wideningzd2pragmazf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	static obj_t BGl_z52thezd2vsetz12zf2Cinfozd2nilzb2zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl__wideningzd2getfieldzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_newzf2cinfozf2_bglt
		BGl_makezd2newzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_approxz00_bglt);
	static obj_t BGl__setfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_newzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_z52thezd2pragmazf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_getfieldzf2cinfozf2_bglt
		BGl_getfieldzf2Cinfozd2nilz20zzcfa_info3z00();
	static obj_t BGl__valloczf2Cinfozf3z01zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_getfieldz00_bglt
		BGl_z52allocatezd2getfieldzf2Cinfoz72zzcfa_info3z00();
	static obj_t BGl__fillzd2castzd2nullzf2Cinfoz12ze0zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2isazf2Cinfoz72zzcfa_info3z00(obj_t);
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t BGl__fillzd2valloczf2Cinfoz12z32zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl__fillzd2newzf2Cinfoz12z32zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_info3z00();
	static obj_t BGl__makezd2vlengthzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_pragmazf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_vsetz12zf2Cinfoze0zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_isazf2Cinfozf3z01zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_getfieldzf2cinfozf2_bglt
		BGl_wideningzd2getfieldzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	extern BgL_vlengthz00_bglt BGl_makezd2vlengthzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	static obj_t BGl__newzf2Cinfozf3z01zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_valloczf2Cinfozf3z01zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_setfieldzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_valloczf2cinfozf2_bglt
		BGl_makezd2valloczf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_valloczf2cinfozf2_bglt
		BGl_fillzd2valloczf2Cinfoz12z32zzcfa_info3z00(BgL_valloczf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl__makezd2isazf2Cinfoz20zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vlengthzf2cinfozf2_bglt
		BGl_makezd2vlengthzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_approxz00_bglt, bool_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl__wideningzd2prezd2valloczf2Cinfozf2zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2vrefzf2Cinfoz72zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_setfieldzf2cinfozf2_bglt
		BGl_fillzd2setfieldzf2Cinfoz12z32zzcfa_info3z00
		(BgL_setfieldzf2cinfozf2_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_vrefzf2cinfozf2_bglt
		BGl_makezd2vrefzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_typez00_bglt, bool_t, BgL_approxz00_bglt, bool_t);
	static obj_t BGl_z52thezd2isazf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2setfi4798ze3zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_prezd2valloczf2cinfoz20_bglt
		BGl_wideningzd2prezd2valloczf2Cinfozf2zzcfa_info3z00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL BgL_vrefzf2cinfozf2_bglt
		BGl_vrefzf2Cinfozd2nilz20zzcfa_info3z00();
	static obj_t BGl__pragmazf2Cinfozf3z01zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl__fillzd2vlengthzf2Cinfoz12z32zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2prezd2valloczf2Cinfozd2nilz72zzcfa_info3z00 =
		BUNSPEC;
	static obj_t BGl__makezd2valloczf2Cinfoz20zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2pragmazf2Cinfoz12z32zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	static obj_t BGl__z52allocatezd2setfieldzf2Cinfoz72zzcfa_info3z00(obj_t);
	static obj_t BGl__getfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vrefzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_getfieldzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	extern BgL_vallocz00_bglt BGl_makezd2valloczd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_pragmazf2Cinfozf3z01zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzf2cinfoz20_bglt
		BGl_fillzd2castzd2nullzf2Cinfoz12ze0zzcfa_info3z00
		(BgL_castzd2nullzf2cinfoz20_bglt, BgL_approxz00_bglt);
	static obj_t BGl__z52allocatezd2vsetz12zf2Cinfoz60zzcfa_info3z00(obj_t);
	static obj_t
		BGl__z52allocatezd2valloczf2Cinfozb2optimzc0zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_pragmazf2cinfozf2_bglt
		BGl_fillzd2pragmazf2Cinfoz12z32zzcfa_info3z00(BgL_pragmazf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl__makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzf2cinfoz20_bglt
		BGl_makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_vsetz12zf2Cinfozf3z13zzcfa_info3z00(obj_t);
	static obj_t BGl__wideningzd2valloczf2Cinfozb2optimz92zzcfa_info3z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setfieldzf2cinfozf2_bglt
		BGl_makezd2setfieldzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl__valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_valloczf2cinfozf2_bglt
		BGl_valloczf2Cinfozd2nilz20zzcfa_info3z00();
	extern BgL_isaz00_bglt BGl_makezd2isazd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_valloczf2cinfozb2optimz40_bglt
		BGl_valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00();
	static obj_t BGl_structzb2objectzd2ze3objec4762z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4766z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4771z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vsetz12zf2cinfoze0_bglt
		BGl_vsetz12zf2Cinfozd2nilz32zzcfa_info3z00();
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_structzb2objectzd2ze3objec4775z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4779z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4783z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4788z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4800z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2getfi4803ze3zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_info3z00();
	static obj_t BGl_structzb2objectzd2ze3objec4792z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2isazf2C4790z11zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4796z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4806z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4810z83zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__valloczf2Cinfozb2optimzf3zb3zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2vrefzf24781z11zzcfa_info3z00(obj_t,
		obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl__z52allocatezd2newzf2Cinfoz72zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzf2cinfoz20_bglt
		BGl_wideningzd2castzd2nullzf2Cinfozf2zzcfa_info3z00(BgL_approxz00_bglt);
	static obj_t BGl__wideningzd2isazf2Cinfoz20zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2getfieldzf2Cinfoz72zzcfa_info3z00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_z52thezd2newzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2valloczf2Cinfoz72zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_getfieldzf2cinfozf2_bglt
		BGl_fillzd2getfieldzf2Cinfoz12z32zzcfa_info3z00
		(BgL_getfieldzf2cinfozf2_bglt, BgL_approxz00_bglt);
	static obj_t BGl__wideningzd2vsetz12zf2Cinfoz32zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_z52allocatezd2valloczf2Cinfoz72zzcfa_info3z00();
	extern BgL_castzd2nullzd2_bglt BGl_makezd2castzd2nullz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static obj_t BGl_genericzd2initzd2zzcfa_info3z00();
	static obj_t BGl__castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2pragm4808ze3zzcfa_info3z00(obj_t,
		obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_vrefzf2cinfozf2_bglt
		BGl_fillzd2vrefzf2Cinfoz12z32zzcfa_info3z00(BgL_vrefzf2cinfozf2_bglt,
		BgL_approxz00_bglt, bool_t);
	static obj_t BGl__isazf2Cinfozd2nilz20zzcfa_info3z00(obj_t);
	static obj_t BGl__fillzd2isazf2Cinfoz12z32zzcfa_info3z00(obj_t, obj_t, obj_t);
	extern BgL_getfieldz00_bglt BGl_makezd2getfieldzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl__wideningzd2valloczf2Cinfoz20zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl__prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_getfieldzf2cinfozf2_bglt
		BGl_makezd2getfieldzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl__makezd2newzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_isazf2cinfozf2_bglt
		BGl_wideningzd2isazf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2vallo4760ze3zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vrefzf2cinfozf2_bglt
		BGl_wideningzd2vrefzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_valloczf2cinfozb2optimz40_bglt
		BGl_wideningzd2valloczf2Cinfozb2optimz92zzcfa_info3z00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, bool_t, obj_t, bool_t);
	extern BgL_vsetz12z12_bglt BGl_makezd2vsetz12zc0zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t BGl_objectzd2ze3structzd2vallo4764ze3zzcfa_info3z00(obj_t,
		obj_t);
	extern BgL_newz00_bglt BGl_makezd2newzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__isazf2Cinfozf3z01zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_setfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_pragmazf2cinfozf2_bglt
		BGl_makezd2pragmazf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_approxz00_bglt);
	extern BgL_approxz00_bglt BGl_approxzd2nilzd2zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_valloczf2cinfozb2optimz40_bglt
		BGl_fillzd2valloczf2Cinfozb2optimz12z80zzcfa_info3z00
		(BgL_valloczf2cinfozb2optimz40_bglt, BgL_approxz00_bglt, BgL_approxz00_bglt,
		long, BgL_variablez00_bglt, bool_t, obj_t, bool_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	BGL_EXPORTED_DECL BgL_isazf2cinfozf2_bglt
		BGl_isazf2Cinfozd2nilz20zzcfa_info3z00();
	static obj_t BGl_z52thezd2setfieldzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_newzf2cinfozf2_bglt
		BGl_fillzd2newzf2Cinfoz12z32zzcfa_info3z00(BgL_newzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_vsetz12zf2cinfoze0_bglt
		BGl_fillzd2vsetz12zf2Cinfoz12z20zzcfa_info3z00(BgL_vsetz12zf2cinfoze0_bglt,
		BgL_approxz00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_vsetz12z12_bglt
		BGl_z52allocatezd2vsetz12zf2Cinfoz60zzcfa_info3z00();
	BGL_EXPORTED_DECL BgL_prezd2valloczf2cinfoz20_bglt
		BGl_makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl__z52allocatezd2prezd2valloczf2Cinfoza0zzcfa_info3z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_info3z00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_getfieldz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t BGl_vlengthzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	extern obj_t BGl_isaz00zzast_nodez00;
	static obj_t BGl__valloczf2Cinfozd2nilz20zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_isaz00_bglt
		BGl_z52allocatezd2isazf2Cinfoz72zzcfa_info3z00();
	static obj_t BGl__makezd2pragmazf2Cinfoz20zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2vlengthzf2Cinfoz72zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_vsetz12zf2cinfoze0_bglt
		BGl_makezd2vsetz12zf2Cinfoz32zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_typez00_bglt, bool_t, BgL_approxz00_bglt, bool_t);
	static obj_t BGl_objectzd2ze3structzd2vsetz124777zf1zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl__fillzd2vsetz12zf2Cinfoz12z20zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__newzf2Cinfozd2nilz20zzcfa_info3z00(obj_t);
	static obj_t BGl__vrefzf2Cinfozd2nilz20zzcfa_info3z00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2newzf2C4794z11zzcfa_info3z00(obj_t,
		obj_t);
	extern BgL_pragmaz00_bglt BGl_makezd2pragmazd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2vrefzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_vrefzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_vrefz00_bglt
		BGl_z52allocatezd2vrefzf2Cinfoz72zzcfa_info3z00();
	extern BgL_setfieldz00_bglt BGl_makezd2setfieldzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_castzd2nullzf2Cinfozf3zd3zzcfa_info3z00(obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_z52thezd2valloczf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_vlengthzf2cinfozf2_bglt
		BGl_vlengthzf2Cinfozd2nilz20zzcfa_info3z00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL BgL_valloczf2cinfozf2_bglt
		BGl_wideningzd2valloczf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	static obj_t BGl__fillzd2vrefzf2Cinfoz12z32zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_z52allocatezd2valloczf2Cinfozb2optimzc0zzcfa_info3z00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vlengthz00_bglt
		BGl_z52allocatezd2vlengthzf2Cinfoz72zzcfa_info3z00();
	BGL_EXPORTED_DECL bool_t BGl_getfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_newzf2cinfozf2_bglt
		BGl_newzf2Cinfozd2nilz20zzcfa_info3z00();
	static obj_t BGl__wideningzd2newzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t);
	extern obj_t BGl_newz00zzast_nodez00;
	static obj_t BGl_z52thezd2valloczf2Cinfozb2optimzd2nilz12zzcfa_info3z00 =
		BUNSPEC;
	static obj_t BGl_z52thezd2getfieldzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl__fillzd2prezd2valloczf2Cinfoz12ze0zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl__wideningzd2castzd2nullzf2Cinfozf2zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_pragmazf2cinfozf2_bglt
		BGl_pragmazf2Cinfozd2nilz20zzcfa_info3z00();
	BGL_EXPORTED_DECL BgL_prezd2valloczf2cinfoz20_bglt
		BGl_fillzd2prezd2valloczf2Cinfoz12ze0zzcfa_info3z00
		(BgL_prezd2valloczf2cinfoz20_bglt, BgL_variablez00_bglt);
	static obj_t BGl__fillzd2setfieldzf2Cinfoz12z32zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vlengthzf2cinfozf2_bglt
		BGl_fillzd2vlengthzf2Cinfoz12z32zzcfa_info3z00(BgL_vlengthzf2cinfozf2_bglt,
		BgL_approxz00_bglt, bool_t);
	static obj_t BGl_z52thezd2vlengthzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_z52thezd2castzd2nullzf2Cinfozd2nilz72zzcfa_info3z00 =
		BUNSPEC;
	static obj_t BGl__vsetz12zf2Cinfozf3z13zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_newzf2cinfozf2_bglt
		BGl_wideningzd2newzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_isazf2cinfozf2_bglt
		BGl_makezd2isazf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_approxz00_bglt);
	extern BgL_vrefz00_bglt BGl_makezd2vrefzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t BGl__z52allocatezd2pragmazf2Cinfoz72zzcfa_info3z00(obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	BGL_EXPORTED_DEF obj_t BGl_isazf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_valloczf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl__vlengthzf2Cinfozd2nilz20zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_pragmaz00_bglt
		BGl_z52allocatezd2pragmazf2Cinfoz72zzcfa_info3z00();
	BGL_EXPORTED_DECL bool_t BGl_prezd2valloczf2Cinfozf3zd3zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_newzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_info3z00();
	static obj_t BGl__makezd2vrefzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__wideningzd2pragmazf2Cinfoz20zzcfa_info3z00(obj_t, obj_t);
	extern BgL_variablez00_bglt BGl_variablezd2nilzd2zzast_varz00();
	static obj_t BGl__vrefzf2Cinfozf3z01zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl__setfieldzf2Cinfozd2nilz20zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vlengthzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl__makezd2setfieldzf2Cinfoz20zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_info3z00();
	static obj_t BGl_objectzd2ze3structzd2vleng4773ze3zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl__fillzd2valloczf2Cinfozb2optimz12z80zzcfa_info3z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2vsetz12zf2Cinfoz32zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_valloczf2Cinfozb2optimzf3zb3zzcfa_info3z00(obj_t);
	static obj_t __cnst[12];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozf3zd2envz01zzcfa_info3z00,
		BgL_bgl__preza7d2vallocza7f25390z00,
		BGl__prezd2valloczf2Cinfozf3zd3zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl__newza7f2cinfoza7f3za75391za7, BGl__newzf2Cinfozf3z01zzcfa_info3z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2castzd2nullzf2Cinfoz12zd2envz32zzcfa_info3z00,
		BgL_bgl__fillza7d2castza7d2n5392z00,
		BGl__fillzd2castzd2nullzf2Cinfoz12ze0zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozf3zd2envz01zzcfa_info3z00,
		BgL_bgl__castza7d2nullza7f2c5393z00,
		BGl__castzd2nullzf2Cinfozf3zd3zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2nilzd2envze0zzcfa_info3z00,
		BgL_bgl__vsetza712za7f2cinfo5394z00,
		BGl__vsetz12zf2Cinfozd2nilz32zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2newzf2Cinfoz12zd2envze0zzcfa_info3z00,
		BgL_bgl__fillza7d2newza7f2ci5395z00,
		BGl__fillzd2newzf2Cinfoz12z32zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2pragmazf2Cinfoz12zd2envze0zzcfa_info3z00,
		BgL_bgl__fillza7d2pragmaza7f5396z00,
		BGl__fillzd2pragmazf2Cinfoz12z32zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2setfieldzf2Cinfoz12zd2envze0zzcfa_info3z00,
		BgL_bgl__fillza7d2setfield5397za7,
		BGl__fillzd2setfieldzf2Cinfoz12z32zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2setfieldzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__wideningza7d2setf5398za7,
		BGl__wideningzd2setfieldzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2isazf2Cinfozd2envza0zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2i5399z00,
		BGl__z52allocatezd2isazf2Cinfoz72zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2valloczf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__wideningza7d2vall5400za7,
		BGl__wideningzd2valloczf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2valloczf2Cinfozb2optimz12zd2envz52zzcfa_info3z00,
		BgL_bgl__fillza7d2vallocza7f5401z00,
		BGl__fillzd2valloczf2Cinfozb2optimz12z80zzcfa_info3z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2nilzd2envz20zzcfa_info3z00,
		BgL_bgl__preza7d2vallocza7f25402z00,
		BGl__prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vrefzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__makeza7d2vrefza7f2c5403z00,
		BGl__makezd2vrefzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2valloczf2Cinfozd2envz72zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2p5404z00,
		BGl__z52allocatezd2prezd2valloczf2Cinfoza0zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2castzd2nullzf2Cinfozd2envz72zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2c5405z00,
		BGl__z52allocatezd2castzd2nullzf2Cinfoza0zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2nilzd2envz40zzcfa_info3z00,
		BgL_bgl__vallocza7f2cinfoza75406z00,
		BGl__valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pragmazf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl__pragmaza7f2cinfoza75407z00,
		BGl__pragmazf2Cinfozf3z01zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2valloczf2Cinfozb2optimzd2envz12zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2v5408z00,
		BGl__z52allocatezd2valloczf2Cinfozb2optimzc0zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2valloczf2Cinfozb2optimzd2envz40zzcfa_info3z00,
		BgL_bgl__makeza7d2vallocza7f5409z00,
		BGl__makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00, 0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2vlengthzf2Cinfoz12zd2envze0zzcfa_info3z00,
		BgL_bgl__fillza7d2vlengthza75410z00,
		BGl__fillzd2vlengthzf2Cinfoz12z32zzcfa_info3z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2valloczf2Cinfozb2optimzd2envz40zzcfa_info3z00,
		BgL_bgl__wideningza7d2vall5411za7,
		BGl__wideningzd2valloczf2Cinfozb2optimz92zzcfa_info3z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2vsetz12zf2Cinfoz12zd2envzf2zzcfa_info3z00,
		BgL_bgl__fillza7d2vsetza712za75412za7,
		BGl__fillzd2vsetz12zf2Cinfoz12z20zzcfa_info3z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2castzd2nullzf2Cinfozd2envz20zzcfa_info3z00,
		BgL_bgl__wideningza7d2cast5413za7,
		BGl__wideningzd2castzd2nullzf2Cinfozf2zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getfieldzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl__getfieldza7f2cinf5414za7,
		BGl__getfieldzf2Cinfozf3z01zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2vsetz12zf2Cinfozd2envzb2zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2v5415z00,
		BGl__z52allocatezd2vsetz12zf2Cinfoz60zzcfa_info3z00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isazf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl__isaza7f2cinfoza7f3za75416za7, BGl__isazf2Cinfozf3z01zzcfa_info3z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2pragmazf2Cinfozd2envza0zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2p5417z00,
		BGl__z52allocatezd2pragmazf2Cinfoz72zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2newzf2Cinfozd2envza0zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2n5418z00,
		BGl__z52allocatezd2newzf2Cinfoz72zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2getfieldzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__wideningza7d2getf5419za7,
		BGl__wideningzd2getfieldzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pragmazf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl__pragmaza7f2cinfoza75420z00,
		BGl__pragmazf2Cinfozd2nilz20zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl__newza7f2cinfoza7d2n5421z00,
		BGl__newzf2Cinfozd2nilz20zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2setfieldzf2Cinfozd2envza0zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2s5422z00,
		BGl__z52allocatezd2setfieldzf2Cinfoz72zzcfa_info3z00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2isazf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__wideningza7d2isaza75423z00,
		BGl__wideningzd2isazf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2isazf2Cinfoz12zd2envze0zzcfa_info3z00,
		BgL_bgl__fillza7d2isaza7f2ci5424z00,
		BGl__fillzd2isazf2Cinfoz12z32zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_valloczf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl__vallocza7f2cinfoza75425z00,
		BGl__valloczf2Cinfozd2nilz20zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2vrefzf2Cinfoz12zd2envze0zzcfa_info3z00,
		BgL_bgl__fillza7d2vrefza7f2c5426z00,
		BGl__fillzd2vrefzf2Cinfoz12z32zzcfa_info3z00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5336z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5427z00,
		BGl_objectzd2ze3structzd2vallo4760ze3zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5338z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75428z00,
		BGl_structzb2objectzd2ze3objec4762z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5340z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5429z00,
		BGl_objectzd2ze3structzd2vallo4764ze3zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5341z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75430z00,
		BGl_structzb2objectzd2ze3objec4766z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5342z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5431z00,
		BGl_objectzd2ze3structzd2prezd2v4768z31zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5343z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75432z00,
		BGl_structzb2objectzd2ze3objec4771z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5344z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5433z00,
		BGl_objectzd2ze3structzd2vleng4773ze3zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5345z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75434z00,
		BGl_structzb2objectzd2ze3objec4775z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5346z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5435z00,
		BGl_objectzd2ze3structzd2vsetz124777zf1zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5347z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75436z00,
		BGl_structzb2objectzd2ze3objec4779z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5348z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5437z00,
		BGl_objectzd2ze3structzd2vrefzf24781z11zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5350z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5438z00,
		BGl_objectzd2ze3structzd2castzd24785z31zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5349z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75439z00,
		BGl_structzb2objectzd2ze3objec4783z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5351z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75440z00,
		BGl_structzb2objectzd2ze3objec4788z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5352z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5441z00,
		BGl_objectzd2ze3structzd2isazf2C4790z11zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5353z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75442z00,
		BGl_structzb2objectzd2ze3objec4792z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5354z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5443z00,
		BGl_objectzd2ze3structzd2newzf2C4794z11zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5355z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75444z00,
		BGl_structzb2objectzd2ze3objec4796z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5356z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5445z00,
		BGl_objectzd2ze3structzd2setfi4798ze3zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5357z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75446z00,
		BGl_structzb2objectzd2ze3objec4800z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5358z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5447z00,
		BGl_objectzd2ze3structzd2getfi4803ze3zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5360z00zzcfa_info3z00,
		BgL_bgl_objectza7d2za7e3stru5448z00,
		BGl_objectzd2ze3structzd2pragm4808ze3zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5359z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75449z00,
		BGl_structzb2objectzd2ze3objec4806z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5361z00zzcfa_info3z00,
		BgL_bgl_structza7b2objectza75450z00,
		BGl_structzb2objectzd2ze3objec4810z83zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2valloczf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__makeza7d2vallocza7f5451z00,
		BGl__makezd2valloczf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2valloczf2Cinfoz12zd2envze0zzcfa_info3z00,
		BgL_bgl__fillza7d2vallocza7f5452z00,
		BGl__fillzd2valloczf2Cinfoz12z32zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5335z00zzcfa_info3z00,
		BgL_bgl_string5335za700za7za7c5453za7, "", 0);
	      DEFINE_STRING(BGl_string5337z00zzcfa_info3z00,
		BgL_bgl_string5337za700za7za7c5454za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5339z00zzcfa_info3z00,
		BgL_bgl_string5339za700za7za7c5455za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string5362z00zzcfa_info3z00,
		BgL_bgl_string5362za700za7za7c5456za7, "cfa_info3", 9);
	      DEFINE_STRING(BGl_string5363z00zzcfa_info3z00,
		BgL_bgl_string5363za700za7za7c5457za7,
		"valloc/Cinfo+optim valloc/Cinfo pre-valloc/Cinfo vlength/Cinfo vset!/Cinfo vref/Cinfo cast-null/Cinfo isa/Cinfo new/Cinfo setfield/Cinfo getfield/Cinfo pragma/Cinfo ",
		165);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setfieldzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl__setfieldza7f2cinf5458za7,
		BGl__setfieldzf2Cinfozf3z01zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2valloczf2Cinfozd2envz20zzcfa_info3z00,
		BgL_bgl__makeza7d2preza7d2va5459z00,
		BGl__makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl__vlengthza7f2cinfo5460za7,
		BGl__vlengthzf2Cinfozd2nilz20zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2pragmazf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__wideningza7d2prag5461za7,
		BGl__wideningzd2pragmazf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2setfieldzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__makeza7d2setfield5462za7,
		BGl__makezd2setfieldzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2getfieldzf2Cinfozd2envza0zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2g5463z00,
		BGl__z52allocatezd2getfieldzf2Cinfoz72zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2newzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__wideningza7d2newza75464z00,
		BGl__wideningzd2newzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl__setfieldza7f2cinf5465za7,
		BGl__setfieldzf2Cinfozd2nilz20zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2isazf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__makeza7d2isaza7f2ci5466z00,
		BGl__makezd2isazf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_valloczf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl__vallocza7f2cinfoza75467z00,
		BGl__valloczf2Cinfozf3z01zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vlengthzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__makeza7d2vlengthza75468z00,
		BGl__makezd2vlengthzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzf3zd2envz61zzcfa_info3z00,
		BgL_bgl__vallocza7f2cinfoza75469z00,
		BGl__valloczf2Cinfozb2optimzf3zb3zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2nilzd2envz20zzcfa_info3z00,
		BgL_bgl__castza7d2nullza7f2c5470z00,
		BGl__castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vsetz12zf2Cinfozd2envze0zzcfa_info3z00,
		BgL_bgl__makeza7d2vsetza712za75471za7,
		BGl__makezd2vsetz12zf2Cinfoz32zzcfa_info3z00, 0L, BUNSPEC, 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl__vrefza7f2cinfoza7d25472z00,
		BGl__vrefzf2Cinfozd2nilz20zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vsetz12zf2Cinfozf3zd2envzc1zzcfa_info3z00,
		BgL_bgl__vsetza712za7f2cinfo5473z00,
		BGl__vsetz12zf2Cinfozf3z13zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vlengthzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl__vlengthza7f2cinfo5474za7, BGl__vlengthzf2Cinfozf3z01zzcfa_info3z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2getfieldzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__makeza7d2getfield5475za7,
		BGl__makezd2getfieldzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2valloczf2Cinfoz12zd2envz32zzcfa_info3z00,
		BgL_bgl__fillza7d2preza7d2va5476z00,
		BGl__fillzd2prezd2valloczf2Cinfoz12ze0zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isazf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl__isaza7f2cinfoza7d2n5477z00,
		BGl__isazf2Cinfozd2nilz20zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2vsetz12zf2Cinfozd2envze0zzcfa_info3z00,
		BgL_bgl__wideningza7d2vset5478za7,
		BGl__wideningzd2vsetz12zf2Cinfoz32zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl__vrefza7f2cinfoza7f35479z00, BGl__vrefzf2Cinfozf3z01zzcfa_info3z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2vrefzf2Cinfozd2envza0zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2v5480z00,
		BGl__z52allocatezd2vrefzf2Cinfoz72zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2newzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__makeza7d2newza7f2ci5481z00,
		BGl__makezd2newzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__makeza7d2pragmaza7f5482z00,
		BGl__makezd2pragmazf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2vlengthzf2Cinfozd2envza0zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2v5483z00,
		BGl__z52allocatezd2vlengthzf2Cinfoz72zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2vrefzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__wideningza7d2vref5484za7,
		BGl__wideningzd2vrefzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2getfieldzf2Cinfoz12zd2envze0zzcfa_info3z00,
		BgL_bgl__fillza7d2getfield5485za7,
		BGl__fillzd2getfieldzf2Cinfoz12z32zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl__getfieldza7f2cinf5486za7,
		BGl__getfieldzf2Cinfozd2nilz20zzcfa_info3z00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2valloczf2Cinfozd2envz20zzcfa_info3z00,
		BgL_bgl__wideningza7d2preza75487z00,
		BGl__wideningzd2prezd2valloczf2Cinfozf2zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2castzd2nullzf2Cinfozd2envz20zzcfa_info3z00,
		BgL_bgl__makeza7d2castza7d2n5488z00,
		BGl__makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2valloczf2Cinfozd2envza0zzcfa_info3z00,
		BgL_bgl__za752allocateza7d2v5489z00,
		BGl__z52allocatezd2valloczf2Cinfoz72zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2vlengthzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl__wideningza7d2vlen5490za7,
		BGl__wideningzd2vlengthzf2Cinfoz20zzcfa_info3z00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long
		BgL_checksumz00_4067, char *BgL_fromz00_4068)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_info3z00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_info3z00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_info3z00();
					BGl_cnstzd2initzd2zzcfa_info3z00();
					BGl_importedzd2moduleszd2initz00zzcfa_info3z00();
					BGl_objectzd2initzd2zzcfa_info3z00();
					BGl_methodzd2initzd2zzcfa_info3z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_info3");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_info3");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 16 */
			{	/* Cfa/cinfo3.scm 16 */
				obj_t BgL_cportz00_3900;

				BgL_cportz00_3900 =
					bgl_open_input_string(BGl_string5363z00zzcfa_info3z00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3901;

					BgL_iz00_3901 = ((long) 11);
				BgL_loopz00_3902:
					if ((BgL_iz00_3901 == ((long) -1)))
						{	/* Cfa/cinfo3.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/cinfo3.scm 16 */
							{	/* Cfa/cinfo3.scm 16 */
								obj_t BgL_arg5365z00_3904;

								{	/* Cfa/cinfo3.scm 16 */

									{	/* Cfa/cinfo3.scm 16 */
										obj_t BgL_locationz00_3906;

										BgL_locationz00_3906 = BBOOL(((bool_t) 0));
										{	/* Cfa/cinfo3.scm 16 */

											BgL_arg5365z00_3904 =
												BGl_readz00zz__readerz00(BgL_cportz00_3900,
												BgL_locationz00_3906);
										}
									}
								}
								{	/* Cfa/cinfo3.scm 16 */
									int BgL_auxz00_4085;

									BgL_auxz00_4085 = (int) (BgL_iz00_3901);
									CNST_TABLE_SET(BgL_auxz00_4085, BgL_arg5365z00_3904);
							}}
							{	/* Cfa/cinfo3.scm 16 */
								int BgL_auxz00_3907;

								BgL_auxz00_3907 = (int) ((BgL_iz00_3901 - ((long) 1)));
								{
									long BgL_iz00_4090;

									BgL_iz00_4090 = (long) (BgL_auxz00_3907);
									BgL_iz00_3901 = BgL_iz00_4090;
									goto BgL_loopz00_3902;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 16 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 16 */
			{	/* Cfa/cinfo3.scm 25 */
				obj_t BgL_arg4811z00_1181;

				obj_t BgL_arg4812z00_1182;

				obj_t BgL_arg4815z00_1185;

				BgL_arg4811z00_1181 = CNST_TABLE_REF(((long) 0));
				BgL_arg4812z00_1182 = BGl_pragmaz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 25 */
					obj_t BgL_v4747z00_1186;

					BgL_v4747z00_1186 = create_vector((int) (((long) 0)));
					BgL_arg4815z00_1185 = BgL_v4747z00_1186;
				}
				BGl_pragmazf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4811z00_1181,
					BgL_arg4812z00_1182, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2pragmazf2Cinfozd2envza0zzcfa_info3z00,
					BGl_pragmazf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
					BGl_pragmazf2Cinfozf3zd2envzd3zzcfa_info3z00, ((long) 2744350),
					BFALSE, BFALSE, BgL_arg4815z00_1185);
			}
			{	/* Cfa/cinfo3.scm 26 */
				obj_t BgL_arg4816z00_1187;

				obj_t BgL_arg4817z00_1188;

				obj_t BgL_arg4821z00_1191;

				BgL_arg4816z00_1187 = CNST_TABLE_REF(((long) 1));
				BgL_arg4817z00_1188 = BGl_getfieldz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 26 */
					obj_t BgL_v4748z00_1192;

					BgL_v4748z00_1192 = create_vector((int) (((long) 0)));
					BgL_arg4821z00_1191 = BgL_v4748z00_1192;
				}
				BGl_getfieldzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4816z00_1187,
					BgL_arg4817z00_1188, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2getfieldzf2Cinfozd2envza0zzcfa_info3z00,
					BGl_getfieldzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
					BGl_getfieldzf2Cinfozf3zd2envzd3zzcfa_info3z00, ((long) 517263706),
					BFALSE, BFALSE, BgL_arg4821z00_1191);
			}
			{	/* Cfa/cinfo3.scm 27 */
				obj_t BgL_arg4822z00_1193;

				obj_t BgL_arg4823z00_1194;

				obj_t BgL_arg4826z00_1197;

				BgL_arg4822z00_1193 = CNST_TABLE_REF(((long) 2));
				BgL_arg4823z00_1194 = BGl_setfieldz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 27 */
					obj_t BgL_v4749z00_1198;

					BgL_v4749z00_1198 = create_vector((int) (((long) 0)));
					BgL_arg4826z00_1197 = BgL_v4749z00_1198;
				}
				BGl_setfieldzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4822z00_1193,
					BgL_arg4823z00_1194, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2setfieldzf2Cinfozd2envza0zzcfa_info3z00,
					BGl_setfieldzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
					BGl_setfieldzf2Cinfozf3zd2envzd3zzcfa_info3z00, ((long) 317378678),
					BFALSE, BFALSE, BgL_arg4826z00_1197);
			}
			{	/* Cfa/cinfo3.scm 28 */
				obj_t BgL_arg4827z00_1199;

				obj_t BgL_arg4828z00_1200;

				obj_t BgL_arg4831z00_1203;

				BgL_arg4827z00_1199 = CNST_TABLE_REF(((long) 3));
				BgL_arg4828z00_1200 = BGl_newz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 28 */
					obj_t BgL_v4750z00_1204;

					BgL_v4750z00_1204 = create_vector((int) (((long) 0)));
					BgL_arg4831z00_1203 = BgL_v4750z00_1204;
				}
				BGl_newzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4827z00_1199,
					BgL_arg4828z00_1200, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2newzf2Cinfozd2envza0zzcfa_info3z00,
					BGl_newzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
					BGl_newzf2Cinfozf3zd2envzd3zzcfa_info3z00, ((long) 284914568), BFALSE,
					BFALSE, BgL_arg4831z00_1203);
			}
			{	/* Cfa/cinfo3.scm 29 */
				obj_t BgL_arg4832z00_1205;

				obj_t BgL_arg4833z00_1206;

				obj_t BgL_arg4836z00_1209;

				BgL_arg4832z00_1205 = CNST_TABLE_REF(((long) 4));
				BgL_arg4833z00_1206 = BGl_isaz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 29 */
					obj_t BgL_v4751z00_1210;

					BgL_v4751z00_1210 = create_vector((int) (((long) 0)));
					BgL_arg4836z00_1209 = BgL_v4751z00_1210;
				}
				BGl_isazf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4832z00_1205,
					BgL_arg4833z00_1206, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2isazf2Cinfozd2envza0zzcfa_info3z00,
					BGl_isazf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
					BGl_isazf2Cinfozf3zd2envzd3zzcfa_info3z00, ((long) 460477805), BFALSE,
					BFALSE, BgL_arg4836z00_1209);
			}
			{	/* Cfa/cinfo3.scm 30 */
				obj_t BgL_arg4837z00_1211;

				obj_t BgL_arg4838z00_1212;

				obj_t BgL_arg4841z00_1215;

				BgL_arg4837z00_1211 = CNST_TABLE_REF(((long) 5));
				BgL_arg4838z00_1212 = BGl_castzd2nullzd2zzast_nodez00;
				{	/* Cfa/cinfo3.scm 30 */
					obj_t BgL_v4752z00_1216;

					BgL_v4752z00_1216 = create_vector((int) (((long) 0)));
					BgL_arg4841z00_1215 = BgL_v4752z00_1216;
				}
				BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4837z00_1211,
					BgL_arg4838z00_1212, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2castzd2nullzf2Cinfozd2envz72zzcfa_info3z00,
					BGl_castzd2nullzf2Cinfozd2nilzd2envz20zzcfa_info3z00,
					BGl_castzd2nullzf2Cinfozf3zd2envz01zzcfa_info3z00, ((long) 177562835),
					BFALSE, BFALSE, BgL_arg4841z00_1215);
			}
			{	/* Cfa/cinfo3.scm 33 */
				obj_t BgL_arg4842z00_1217;

				obj_t BgL_arg4844z00_1218;

				obj_t BgL_arg4847z00_1221;

				BgL_arg4842z00_1217 = CNST_TABLE_REF(((long) 6));
				BgL_arg4844z00_1218 = BGl_vrefz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 33 */
					obj_t BgL_v4753z00_1222;

					BgL_v4753z00_1222 = create_vector((int) (((long) 0)));
					BgL_arg4847z00_1221 = BgL_v4753z00_1222;
				}
				BGl_vrefzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4842z00_1217,
					BgL_arg4844z00_1218, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2vrefzf2Cinfozd2envza0zzcfa_info3z00,
					BGl_vrefzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
					BGl_vrefzf2Cinfozf3zd2envzd3zzcfa_info3z00, ((long) 475063444),
					BFALSE, BFALSE, BgL_arg4847z00_1221);
			}
			{	/* Cfa/cinfo3.scm 36 */
				obj_t BgL_arg4848z00_1223;

				obj_t BgL_arg4849z00_1224;

				obj_t BgL_arg4852z00_1227;

				BgL_arg4848z00_1223 = CNST_TABLE_REF(((long) 7));
				BgL_arg4849z00_1224 = BGl_vsetz12z12zzast_nodez00;
				{	/* Cfa/cinfo3.scm 36 */
					obj_t BgL_v4754z00_1228;

					BgL_v4754z00_1228 = create_vector((int) (((long) 0)));
					BgL_arg4852z00_1227 = BgL_v4754z00_1228;
				}
				BGl_vsetz12zf2Cinfoze0zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4848z00_1223,
					BgL_arg4849z00_1224, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2vsetz12zf2Cinfozd2envzb2zzcfa_info3z00,
					BGl_vsetz12zf2Cinfozd2nilzd2envze0zzcfa_info3z00,
					BGl_vsetz12zf2Cinfozf3zd2envzc1zzcfa_info3z00, ((long) 84590052),
					BFALSE, BFALSE, BgL_arg4852z00_1227);
			}
			{	/* Cfa/cinfo3.scm 39 */
				obj_t BgL_arg4853z00_1229;

				obj_t BgL_arg4854z00_1230;

				obj_t BgL_arg4857z00_1233;

				BgL_arg4853z00_1229 = CNST_TABLE_REF(((long) 8));
				BgL_arg4854z00_1230 = BGl_vlengthz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 39 */
					obj_t BgL_v4755z00_1234;

					BgL_v4755z00_1234 = create_vector((int) (((long) 0)));
					BgL_arg4857z00_1233 = BgL_v4755z00_1234;
				}
				BGl_vlengthzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4853z00_1229,
					BgL_arg4854z00_1230, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2vlengthzf2Cinfozd2envza0zzcfa_info3z00,
					BGl_vlengthzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
					BGl_vlengthzf2Cinfozf3zd2envzd3zzcfa_info3z00, ((long) 536746105),
					BFALSE, BFALSE, BgL_arg4857z00_1233);
			}
			{	/* Cfa/cinfo3.scm 44 */
				obj_t BgL_arg4858z00_1235;

				obj_t BgL_arg4859z00_1236;

				obj_t BgL_arg4862z00_1239;

				BgL_arg4858z00_1235 = CNST_TABLE_REF(((long) 9));
				BgL_arg4859z00_1236 = BGl_vallocz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 44 */
					obj_t BgL_v4756z00_1240;

					BgL_v4756z00_1240 = create_vector((int) (((long) 0)));
					BgL_arg4862z00_1239 = BgL_v4756z00_1240;
				}
				BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4858z00_1235,
					BgL_arg4859z00_1236, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2valloczf2Cinfozd2envz72zzcfa_info3z00,
					BGl_prezd2valloczf2Cinfozd2nilzd2envz20zzcfa_info3z00,
					BGl_prezd2valloczf2Cinfozf3zd2envz01zzcfa_info3z00,
					((long) 366829354), BFALSE, BFALSE, BgL_arg4862z00_1239);
			}
			{	/* Cfa/cinfo3.scm 46 */
				obj_t BgL_arg4863z00_1241;

				obj_t BgL_arg4864z00_1242;

				obj_t BgL_arg4867z00_1245;

				BgL_arg4863z00_1241 = CNST_TABLE_REF(((long) 10));
				BgL_arg4864z00_1242 = BGl_vallocz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 46 */
					obj_t BgL_v4757z00_1246;

					BgL_v4757z00_1246 = create_vector((int) (((long) 0)));
					BgL_arg4867z00_1245 = BgL_v4757z00_1246;
				}
				BGl_valloczf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4863z00_1241,
					BgL_arg4864z00_1242, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2valloczf2Cinfozd2envza0zzcfa_info3z00,
					BGl_valloczf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
					BGl_valloczf2Cinfozf3zd2envzd3zzcfa_info3z00, ((long) 357268833),
					BFALSE, BFALSE, BgL_arg4867z00_1245);
			}
			{	/* Cfa/cinfo3.scm 48 */
				obj_t BgL_arg4868z00_1247;

				obj_t BgL_arg4869z00_1248;

				obj_t BgL_arg4872z00_1251;

				BgL_arg4868z00_1247 = CNST_TABLE_REF(((long) 11));
				BgL_arg4869z00_1248 = BGl_vallocz00zzast_nodez00;
				{	/* Cfa/cinfo3.scm 48 */
					obj_t BgL_v4758z00_1252;

					BgL_v4758z00_1252 = create_vector((int) (((long) 0)));
					BgL_arg4872z00_1251 = BgL_v4758z00_1252;
				}
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4868z00_1247,
					BgL_arg4869z00_1248, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2valloczf2Cinfozb2optimzd2envz12zzcfa_info3z00,
					BGl_valloczf2Cinfozb2optimzd2nilzd2envz40zzcfa_info3z00,
					BGl_valloczf2Cinfozb2optimzf3zd2envz61zzcfa_info3z00,
					((long) 403658089), BFALSE, BFALSE, BgL_arg4872z00_1251);
			}
			BGl_z52thezd2valloczf2Cinfozb2optimzd2nilz12zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2valloczf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2prezd2valloczf2Cinfozd2nilz72zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2vlengthzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2vsetz12zf2Cinfozd2nilzb2zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2vrefzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2castzd2nullzf2Cinfozd2nilz72zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2isazf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2newzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2setfieldzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
			BGl_z52thezd2getfieldzf2Cinfozd2nilza0zzcfa_info3z00 = BUNSPEC;
			return (BGl_z52thezd2pragmazf2Cinfozd2nilza0zzcfa_info3z00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* valloc/Cinfo+optim? */
	BGL_EXPORTED_DEF bool_t BGl_valloczf2Cinfozb2optimzf3zb3zzcfa_info3z00(obj_t
		BgL_obj4709z00_1)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4709z00_1,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
		}
	}



/* _valloc/Cinfo+optim? */
	obj_t BGl__valloczf2Cinfozb2optimzf3zb3zzcfa_info3z00(obj_t BgL_envz00_3596,
		obj_t BgL_obj4709z00_3597)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4709z00_3597,
					BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00));
		}
	}



/* widening-valloc/Cinfo+optim */
	BGL_EXPORTED_DEF BgL_valloczf2cinfozb2optimz40_bglt
		BGl_wideningzd2valloczf2Cinfozb2optimz92zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4659z00_5, BgL_approxz00_bglt BgL_valuezd2approx4660zd2_6,
		long BgL_lostzd2stamp4661zd2_7, BgL_variablez00_bglt BgL_owner4662z00_8,
		bool_t BgL_stackablezf34663zf3_9, obj_t BgL_stackzd2stamp4664zd2_10,
		bool_t BgL_seenzf34665zf3_11)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				BgL_valloczf2cinfozb2optimz40_bglt BgL_new4666z00_2220;

				BgL_new4666z00_2220 =
					((BgL_valloczf2cinfozb2optimz40_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_valloczf2cinfozb2optimz40_bgl))));
				{	/* Cfa/cinfo3.scm 48 */
					BgL_valloczf2cinfozb2optimz40_bglt BgL_res5212z00_2236;

					{	/* Cfa/cinfo3.scm 48 */
						BgL_valloczf2cinfozb2optimz40_bglt BgL_new4693z00_2221;

						BgL_new4693z00_2221 = BgL_new4666z00_2220;
						{	/* Cfa/cinfo3.scm 48 */
							BgL_approxz00_bglt BgL_approx4686z00_2229;

							BgL_approxz00_bglt BgL_valuezd2approx4687zd2_2230;

							long BgL_lostzd2stamp4688zd2_2231;

							BgL_variablez00_bglt BgL_owner4689z00_2232;

							bool_t BgL_stackablezf34690zf3_2233;

							obj_t BgL_stackzd2stamp4691zd2_2234;

							bool_t BgL_seenzf34692zf3_2235;

							BgL_approx4686z00_2229 = BgL_approx4659z00_5;
							BgL_valuezd2approx4687zd2_2230 = BgL_valuezd2approx4660zd2_6;
							BgL_lostzd2stamp4688zd2_2231 = BgL_lostzd2stamp4661zd2_7;
							BgL_owner4689z00_2232 = BgL_owner4662z00_8;
							BgL_stackablezf34690zf3_2233 = BgL_stackablezf34663zf3_9;
							BgL_stackzd2stamp4691zd2_2234 = BgL_stackzd2stamp4664zd2_10;
							BgL_seenzf34692zf3_2235 = BgL_seenzf34665zf3_11;
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_2221))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4686z00_2229), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_2221))->BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt) BgL_valuezd2approx4687zd2_2230), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_2221))->BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp4688zd2_2231), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_2221))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4689z00_2232), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_2221))->BgL_stackablezf3zf3) =
								((bool_t) BgL_stackablezf34690zf3_2233), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_2221))->BgL_stackzd2stampzd2) =
								((obj_t) BgL_stackzd2stamp4691zd2_2234), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_2221))->BgL_seenzf3zf3) =
								((bool_t) BgL_seenzf34692zf3_2235), BUNSPEC);
							BgL_res5212z00_2236 = BgL_new4693z00_2221;
					}} BgL_res5212z00_2236;
				}
				return BgL_new4666z00_2220;
			}
		}
	}



/* _widening-valloc/Cinfo+optim */
	obj_t BGl__wideningzd2valloczf2Cinfozb2optimz92zzcfa_info3z00(obj_t
		BgL_envz00_3598, obj_t BgL_approx4659z00_3599,
		obj_t BgL_valuezd2approx4660zd2_3600, obj_t BgL_lostzd2stamp4661zd2_3601,
		obj_t BgL_owner4662z00_3602, obj_t BgL_stackablezf34663zf3_3603,
		obj_t BgL_stackzd2stamp4664zd2_3604, obj_t BgL_seenzf34665zf3_3605)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			return
				(obj_t) (BGl_wideningzd2valloczf2Cinfozb2optimz92zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4659z00_3599),
					(BgL_approxz00_bglt) (BgL_valuezd2approx4660zd2_3600),
					(long) CINT(BgL_lostzd2stamp4661zd2_3601),
					(BgL_variablez00_bglt) (BgL_owner4662z00_3602),
					CBOOL(BgL_stackablezf34663zf3_3603), BgL_stackzd2stamp4664zd2_3604,
					CBOOL(BgL_seenzf34665zf3_3605)));
		}
	}



/* make-valloc/Cinfo+optim */
	BGL_EXPORTED_DEF BgL_valloczf2cinfozb2optimz40_bglt
		BGl_makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00(obj_t BgL_loc4675z00_12,
		BgL_typez00_bglt BgL_type4676z00_13, obj_t BgL_sidezd2effectzf34677z21_14,
		obj_t BgL_key4678z00_15, obj_t BgL_exprza24679za2_16,
		obj_t BgL_effect4680z00_17, obj_t BgL_czd2heapzd2format4681z00_18,
		BgL_typez00_bglt BgL_ftype4682z00_19, BgL_typez00_bglt BgL_otype4683z00_20,
		BgL_approxz00_bglt BgL_approx4668z00_21,
		BgL_approxz00_bglt BgL_valuezd2approx4669zd2_22,
		long BgL_lostzd2stamp4670zd2_23, BgL_variablez00_bglt BgL_owner4671z00_24,
		bool_t BgL_stackablezf34672zf3_25, obj_t BgL_stackzd2stamp4673zd2_26,
		bool_t BgL_seenzf34674zf3_27)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				BgL_vallocz00_bglt BgL_aux4684z00_2237;

				BgL_aux4684z00_2237 =
					BGl_makezd2valloczd2zzast_nodez00(BgL_loc4675z00_12,
					BgL_type4676z00_13, BgL_sidezd2effectzf34677z21_14, BgL_key4678z00_15,
					BgL_exprza24679za2_16, BgL_effect4680z00_17,
					BgL_czd2heapzd2format4681z00_18, BgL_ftype4682z00_19,
					BgL_otype4683z00_20);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4684z00_2237),
					BGl_classzd2numzd2zz__objectz00
					(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 48 */
					BgL_valloczf2cinfozb2optimz40_bglt BgL_arg4874z00_2239;

					{	/* Cfa/cinfo3.scm 48 */
						BgL_valloczf2cinfozb2optimz40_bglt BgL_res5214z00_2267;

						{	/* Cfa/cinfo3.scm 48 */
							BgL_valloczf2cinfozb2optimz40_bglt BgL_new4666z00_2250;

							BgL_new4666z00_2250 =
								((BgL_valloczf2cinfozb2optimz40_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_valloczf2cinfozb2optimz40_bgl))));
							{	/* Cfa/cinfo3.scm 48 */
								BgL_valloczf2cinfozb2optimz40_bglt BgL_res5213z00_2266;

								{	/* Cfa/cinfo3.scm 48 */
									BgL_valloczf2cinfozb2optimz40_bglt BgL_new4693z00_2251;

									BgL_new4693z00_2251 = BgL_new4666z00_2250;
									{	/* Cfa/cinfo3.scm 48 */
										BgL_approxz00_bglt BgL_approx4686z00_2259;

										BgL_approxz00_bglt BgL_valuezd2approx4687zd2_2260;

										long BgL_lostzd2stamp4688zd2_2261;

										BgL_variablez00_bglt BgL_owner4689z00_2262;

										bool_t BgL_stackablezf34690zf3_2263;

										obj_t BgL_stackzd2stamp4691zd2_2264;

										bool_t BgL_seenzf34692zf3_2265;

										BgL_approx4686z00_2259 = BgL_approx4668z00_21;
										BgL_valuezd2approx4687zd2_2260 =
											BgL_valuezd2approx4669zd2_22;
										BgL_lostzd2stamp4688zd2_2261 = BgL_lostzd2stamp4670zd2_23;
										BgL_owner4689z00_2262 = BgL_owner4671z00_24;
										BgL_stackablezf34690zf3_2263 = BgL_stackablezf34672zf3_25;
										BgL_stackzd2stamp4691zd2_2264 = BgL_stackzd2stamp4673zd2_26;
										BgL_seenzf34692zf3_2265 = BgL_seenzf34674zf3_27;
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_new4693z00_2251))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4686z00_2259), BUNSPEC);
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_new4693z00_2251))->BgL_valuezd2approxzd2) =
											((BgL_approxz00_bglt) BgL_valuezd2approx4687zd2_2260),
											BUNSPEC);
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_new4693z00_2251))->BgL_lostzd2stampzd2) =
											((long) BgL_lostzd2stamp4688zd2_2261), BUNSPEC);
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_new4693z00_2251))->BgL_ownerz00) =
											((BgL_variablez00_bglt) BgL_owner4689z00_2262), BUNSPEC);
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_new4693z00_2251))->BgL_stackablezf3zf3) =
											((bool_t) BgL_stackablezf34690zf3_2263), BUNSPEC);
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_new4693z00_2251))->BgL_stackzd2stampzd2) =
											((obj_t) BgL_stackzd2stamp4691zd2_2264), BUNSPEC);
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_new4693z00_2251))->BgL_seenzf3zf3) =
											((bool_t) BgL_seenzf34692zf3_2265), BUNSPEC);
										BgL_res5213z00_2266 = BgL_new4693z00_2251;
								}} BgL_res5213z00_2266;
							}
							BgL_res5214z00_2267 = BgL_new4666z00_2250;
						}
						BgL_arg4874z00_2239 = BgL_res5214z00_2267;
					}
					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_auxz00_4173;

						BgL_objectz00_bglt BgL_auxz00_4171;

						BgL_auxz00_4173 = (obj_t) (BgL_arg4874z00_2239);
						BgL_auxz00_4171 = (BgL_objectz00_bglt) (BgL_aux4684z00_2237);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4171, BgL_auxz00_4173);
				}}
				return
					((BgL_valloczf2cinfozb2optimz40_bglt)
					(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_aux4684z00_2237));
			}
		}
	}



/* _make-valloc/Cinfo+optim */
	obj_t BGl__makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00(obj_t
		BgL_envz00_3606, obj_t BgL_loc4675z00_3607, obj_t BgL_type4676z00_3608,
		obj_t BgL_sidezd2effectzf34677z21_3609, obj_t BgL_key4678z00_3610,
		obj_t BgL_exprza24679za2_3611, obj_t BgL_effect4680z00_3612,
		obj_t BgL_czd2heapzd2format4681z00_3613, obj_t BgL_ftype4682z00_3614,
		obj_t BgL_otype4683z00_3615, obj_t BgL_approx4668z00_3616,
		obj_t BgL_valuezd2approx4669zd2_3617, obj_t BgL_lostzd2stamp4670zd2_3618,
		obj_t BgL_owner4671z00_3619, obj_t BgL_stackablezf34672zf3_3620,
		obj_t BgL_stackzd2stamp4673zd2_3621, obj_t BgL_seenzf34674zf3_3622)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			return
				(obj_t) (BGl_makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00
				(BgL_loc4675z00_3607, (BgL_typez00_bglt) (BgL_type4676z00_3608),
					BgL_sidezd2effectzf34677z21_3609, BgL_key4678z00_3610,
					BgL_exprza24679za2_3611, BgL_effect4680z00_3612,
					BgL_czd2heapzd2format4681z00_3613,
					(BgL_typez00_bglt) (BgL_ftype4682z00_3614),
					(BgL_typez00_bglt) (BgL_otype4683z00_3615),
					(BgL_approxz00_bglt) (BgL_approx4668z00_3616),
					(BgL_approxz00_bglt) (BgL_valuezd2approx4669zd2_3617),
					(long) CINT(BgL_lostzd2stamp4670zd2_3618),
					(BgL_variablez00_bglt) (BgL_owner4671z00_3619),
					CBOOL(BgL_stackablezf34672zf3_3620), BgL_stackzd2stamp4673zd2_3621,
					CBOOL(BgL_seenzf34674zf3_3622)));
		}
	}



/* fill-valloc/Cinfo+optim! */
	BGL_EXPORTED_DEF BgL_valloczf2cinfozb2optimz40_bglt
		BGl_fillzd2valloczf2Cinfozb2optimz12z80zzcfa_info3z00
		(BgL_valloczf2cinfozb2optimz40_bglt BgL_new4693z00_28,
		BgL_approxz00_bglt BgL_approx4686z00_29,
		BgL_approxz00_bglt BgL_valuezd2approx4687zd2_30,
		long BgL_lostzd2stamp4688zd2_31, BgL_variablez00_bglt BgL_owner4689z00_32,
		bool_t BgL_stackablezf34690zf3_33, obj_t BgL_stackzd2stamp4691zd2_34,
		bool_t BgL_seenzf34692zf3_35)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				BgL_approxz00_bglt BgL_approx4686z00_3909;

				BgL_approxz00_bglt BgL_valuezd2approx4687zd2_3910;

				long BgL_lostzd2stamp4688zd2_3911;

				BgL_variablez00_bglt BgL_owner4689z00_3912;

				bool_t BgL_stackablezf34690zf3_3913;

				obj_t BgL_stackzd2stamp4691zd2_3914;

				bool_t BgL_seenzf34692zf3_3915;

				BgL_approx4686z00_3909 = BgL_approx4686z00_29;
				BgL_valuezd2approx4687zd2_3910 = BgL_valuezd2approx4687zd2_30;
				BgL_lostzd2stamp4688zd2_3911 = BgL_lostzd2stamp4688zd2_31;
				BgL_owner4689z00_3912 = BgL_owner4689z00_32;
				BgL_stackablezf34690zf3_3913 = BgL_stackablezf34690zf3_33;
				BgL_stackzd2stamp4691zd2_3914 = BgL_stackzd2stamp4691zd2_34;
				BgL_seenzf34692zf3_3915 = BgL_seenzf34692zf3_35;
				((((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_new4693z00_28))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4686z00_3909), BUNSPEC);
				((((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_new4693z00_28))->
						BgL_valuezd2approxzd2) =
					((BgL_approxz00_bglt) BgL_valuezd2approx4687zd2_3910), BUNSPEC);
				((((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_new4693z00_28))->
						BgL_lostzd2stampzd2) =
					((long) BgL_lostzd2stamp4688zd2_3911), BUNSPEC);
				((((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_new4693z00_28))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) BgL_owner4689z00_3912), BUNSPEC);
				((((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_new4693z00_28))->
						BgL_stackablezf3zf3) =
					((bool_t) BgL_stackablezf34690zf3_3913), BUNSPEC);
				((((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_new4693z00_28))->
						BgL_stackzd2stampzd2) =
					((obj_t) BgL_stackzd2stamp4691zd2_3914), BUNSPEC);
				((((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_new4693z00_28))->
						BgL_seenzf3zf3) = ((bool_t) BgL_seenzf34692zf3_3915), BUNSPEC);
				return BgL_new4693z00_28;
			}
		}
	}



/* _fill-valloc/Cinfo+optim! */
	obj_t BGl__fillzd2valloczf2Cinfozb2optimz12z80zzcfa_info3z00(obj_t
		BgL_envz00_3623, obj_t BgL_new4693z00_3624, obj_t BgL_approx4686z00_3625,
		obj_t BgL_valuezd2approx4687zd2_3626, obj_t BgL_lostzd2stamp4688zd2_3627,
		obj_t BgL_owner4689z00_3628, obj_t BgL_stackablezf34690zf3_3629,
		obj_t BgL_stackzd2stamp4691zd2_3630, obj_t BgL_seenzf34692zf3_3631)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4196;

				{	/* Cfa/cinfo3.scm 48 */
					BgL_valloczf2cinfozb2optimz40_bglt BgL_res5366z00_3931;

					{	/* Cfa/cinfo3.scm 48 */
						BgL_valloczf2cinfozb2optimz40_bglt BgL_new4693z00_3916;

						BgL_approxz00_bglt BgL_approx4686z00_3917;

						BgL_approxz00_bglt BgL_valuezd2approx4687zd2_3918;

						long BgL_lostzd2stamp4688zd2_3919;

						BgL_variablez00_bglt BgL_owner4689z00_3920;

						bool_t BgL_stackablezf34690zf3_3921;

						bool_t BgL_seenzf34692zf3_3923;

						BgL_new4693z00_3916 =
							(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_new4693z00_3624);
						BgL_approx4686z00_3917 =
							(BgL_approxz00_bglt) (BgL_approx4686z00_3625);
						BgL_valuezd2approx4687zd2_3918 =
							(BgL_approxz00_bglt) (BgL_valuezd2approx4687zd2_3626);
						BgL_lostzd2stamp4688zd2_3919 =
							(long) CINT(BgL_lostzd2stamp4688zd2_3627);
						BgL_owner4689z00_3920 =
							(BgL_variablez00_bglt) (BgL_owner4689z00_3628);
						BgL_stackablezf34690zf3_3921 = CBOOL(BgL_stackablezf34690zf3_3629);
						BgL_seenzf34692zf3_3923 = CBOOL(BgL_seenzf34692zf3_3631);
						{	/* Cfa/cinfo3.scm 48 */
							BgL_approxz00_bglt BgL_approx4686z00_3924;

							BgL_approxz00_bglt BgL_valuezd2approx4687zd2_3925;

							long BgL_lostzd2stamp4688zd2_3926;

							BgL_variablez00_bglt BgL_owner4689z00_3927;

							bool_t BgL_stackablezf34690zf3_3928;

							obj_t BgL_stackzd2stamp4691zd2_3929;

							bool_t BgL_seenzf34692zf3_3930;

							BgL_approx4686z00_3924 = BgL_approx4686z00_3917;
							BgL_valuezd2approx4687zd2_3925 = BgL_valuezd2approx4687zd2_3918;
							BgL_lostzd2stamp4688zd2_3926 = BgL_lostzd2stamp4688zd2_3919;
							BgL_owner4689z00_3927 = BgL_owner4689z00_3920;
							BgL_stackablezf34690zf3_3928 = BgL_stackablezf34690zf3_3921;
							BgL_stackzd2stamp4691zd2_3929 = BgL_stackzd2stamp4691zd2_3630;
							BgL_seenzf34692zf3_3930 = BgL_seenzf34692zf3_3923;
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_3916))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4686z00_3924), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_3916))->BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt) BgL_valuezd2approx4687zd2_3925), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_3916))->BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp4688zd2_3926), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_3916))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4689z00_3927), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_3916))->BgL_stackablezf3zf3) =
								((bool_t) BgL_stackablezf34690zf3_3928), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_3916))->BgL_stackzd2stampzd2) =
								((obj_t) BgL_stackzd2stamp4691zd2_3929), BUNSPEC);
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_new4693z00_3916))->BgL_seenzf3zf3) =
								((bool_t) BgL_seenzf34692zf3_3930), BUNSPEC);
							BgL_res5366z00_3931 = BgL_new4693z00_3916;
					}}
					BgL_auxz00_4196 = BgL_res5366z00_3931;
				}
				return (obj_t) (BgL_auxz00_4196);
			}
		}
	}



/* %allocate-valloc/Cinfo+optim */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_z52allocatezd2valloczf2Cinfozb2optimzc0zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				BgL_vallocz00_bglt BgL_new4702z00_3932;

				BgL_new4702z00_3932 =
					((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vallocz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4702z00_3932),
					BGl_classzd2numzd2zz__objectz00
					(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 48 */
					BgL_objectz00_bglt BgL_auxz00_4216;

					BgL_auxz00_4216 = (BgL_objectz00_bglt) (BgL_new4702z00_3932);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4216, BFALSE);
				}
				return BgL_new4702z00_3932;
			}
		}
	}



/* _%allocate-valloc/Cinfo+optim */
	obj_t BGl__z52allocatezd2valloczf2Cinfozb2optimzc0zzcfa_info3z00(obj_t
		BgL_envz00_3594)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				BgL_vallocz00_bglt BgL_auxz00_4219;

				{	/* Cfa/cinfo3.scm 48 */
					BgL_vallocz00_bglt BgL_res5367z00_3936;

					{	/* Cfa/cinfo3.scm 48 */
						BgL_vallocz00_bglt BgL_new4702z00_3934;

						BgL_new4702z00_3934 =
							((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vallocz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4702z00_3934),
							BGl_classzd2numzd2zz__objectz00
							(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 48 */
							BgL_objectz00_bglt BgL_auxz00_4224;

							BgL_auxz00_4224 = (BgL_objectz00_bglt) (BgL_new4702z00_3934);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4224, BFALSE);
						}
						BgL_res5367z00_3936 = BgL_new4702z00_3934;
					}
					BgL_auxz00_4219 = BgL_res5367z00_3936;
				}
				return (obj_t) (BgL_auxz00_4219);
			}
		}
	}



/* valloc/Cinfo+optim-nil */
	BGL_EXPORTED_DEF BgL_valloczf2cinfozb2optimz40_bglt
		BGl_valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			if (
				(BGl_z52thezd2valloczf2Cinfozb2optimzd2nilz12zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 48 */
					{	/* Cfa/cinfo3.scm 48 */
						BgL_vallocz00_bglt BgL_res5215z00_2283;

						{	/* Cfa/cinfo3.scm 48 */
							BgL_vallocz00_bglt BgL_new2608z00_2279;

							BgL_new2608z00_2279 =
								((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2608z00_2279),
								BGl_classzd2numzd2zz__objectz00(BGl_vallocz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 48 */
								BgL_objectz00_bglt BgL_auxz00_4234;

								BgL_auxz00_4234 = (BgL_objectz00_bglt) (BgL_new2608z00_2279);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4234, BFALSE);
							}
							BgL_res5215z00_2283 = BgL_new2608z00_2279;
						}
						BGl_z52thezd2valloczf2Cinfozb2optimzd2nilz12zzcfa_info3z00 =
							(obj_t) (BgL_res5215z00_2283);
					}
					{	/* Cfa/cinfo3.scm 48 */
						BgL_typez00_bglt BgL_arg4877z00_1268;

						BgL_typez00_bglt BgL_arg4880z00_1271;

						BgL_typez00_bglt BgL_arg4881z00_1272;

						BgL_arg4877z00_1268 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4880z00_1271 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4881z00_1272 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 48 */
							BgL_vallocz00_bglt BgL_res5216z00_2303;

							{	/* Cfa/cinfo3.scm 48 */
								BgL_vallocz00_bglt BgL_new2597z00_2284;

								BgL_new2597z00_2284 =
									(BgL_vallocz00_bglt)
									(BGl_z52thezd2valloczf2Cinfozb2optimzd2nilz12zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 48 */
									obj_t BgL_loc2588z00_2294;

									BgL_typez00_bglt BgL_type2589z00_2295;

									obj_t BgL_sidezd2effectzf32590z21_2296;

									obj_t BgL_key2591z00_2297;

									obj_t BgL_exprza22592za2_2298;

									obj_t BgL_effect2593z00_2299;

									obj_t BgL_czd2heapzd2format2594z00_2300;

									BgL_typez00_bglt BgL_ftype2595z00_2301;

									BgL_typez00_bglt BgL_otype2596z00_2302;

									BgL_loc2588z00_2294 = BUNSPEC;
									BgL_type2589z00_2295 = BgL_arg4877z00_1268;
									BgL_sidezd2effectzf32590z21_2296 = BUNSPEC;
									BgL_key2591z00_2297 = BUNSPEC;
									BgL_exprza22592za2_2298 = BNIL;
									BgL_effect2593z00_2299 = BUNSPEC;
									BgL_czd2heapzd2format2594z00_2300 =
										BGl_string5335z00zzcfa_info3z00;
									BgL_ftype2595z00_2301 = BgL_arg4880z00_1271;
									BgL_otype2596z00_2302 = BgL_arg4881z00_1272;
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_locz00) = ((obj_t) BgL_loc2588z00_2294), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2589z00_2295), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32590z21_2296), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_keyz00) = ((obj_t) BgL_key2591z00_2297), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22592za2_2298), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_effectz00) =
										((obj_t) BgL_effect2593z00_2299), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_czd2heapzd2formatz00) =
										((obj_t) BgL_czd2heapzd2format2594z00_2300), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2595z00_2301), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2284))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2596z00_2302), BUNSPEC);
									BgL_res5216z00_2303 = BgL_new2597z00_2284;
							}} BgL_res5216z00_2303;
					}}
					{	/* Cfa/cinfo3.scm 48 */
						long BgL_arg4882z00_1273;

						BgL_arg4882z00_1273 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2valloczf2Cinfozb2optimzd2nilz12zzcfa_info3z00),
							BgL_arg4882z00_1273);
					}
					{	/* Cfa/cinfo3.scm 48 */
						BgL_valloczf2cinfozb2optimz40_bglt BgL_arg4883z00_1274;

						{	/* Cfa/cinfo3.scm 48 */
							BgL_approxz00_bglt BgL_arg4884z00_1275;

							BgL_approxz00_bglt BgL_arg4885z00_1276;

							BgL_variablez00_bglt BgL_arg4887z00_1278;

							BgL_arg4884z00_1275 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg4885z00_1276 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg4887z00_1278 = BGl_variablezd2nilzd2zzast_varz00();
							{	/* Cfa/cinfo3.scm 48 */
								BgL_valloczf2cinfozb2optimz40_bglt BgL_res5218z00_2330;

								{	/* Cfa/cinfo3.scm 48 */
									BgL_valloczf2cinfozb2optimz40_bglt BgL_new4666z00_2313;

									BgL_new4666z00_2313 =
										((BgL_valloczf2cinfozb2optimz40_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_valloczf2cinfozb2optimz40_bgl))));
									{	/* Cfa/cinfo3.scm 48 */
										BgL_valloczf2cinfozb2optimz40_bglt BgL_res5217z00_2329;

										{	/* Cfa/cinfo3.scm 48 */
											BgL_valloczf2cinfozb2optimz40_bglt BgL_new4693z00_2314;

											BgL_new4693z00_2314 = BgL_new4666z00_2313;
											{	/* Cfa/cinfo3.scm 48 */
												BgL_approxz00_bglt BgL_approx4686z00_2322;

												BgL_approxz00_bglt BgL_valuezd2approx4687zd2_2323;

												long BgL_lostzd2stamp4688zd2_2324;

												BgL_variablez00_bglt BgL_owner4689z00_2325;

												bool_t BgL_stackablezf34690zf3_2326;

												obj_t BgL_stackzd2stamp4691zd2_2327;

												bool_t BgL_seenzf34692zf3_2328;

												BgL_approx4686z00_2322 = BgL_arg4884z00_1275;
												BgL_valuezd2approx4687zd2_2323 = BgL_arg4885z00_1276;
												BgL_lostzd2stamp4688zd2_2324 = ((long) 0);
												BgL_owner4689z00_2325 = BgL_arg4887z00_1278;
												BgL_stackablezf34690zf3_2326 = ((bool_t) 0);
												BgL_stackzd2stamp4691zd2_2327 = BUNSPEC;
												BgL_seenzf34692zf3_2328 = ((bool_t) 0);
												((((BgL_valloczf2cinfozb2optimz40_bglt)
															CREF(BgL_new4693z00_2314))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4686z00_2322),
													BUNSPEC);
												((((BgL_valloczf2cinfozb2optimz40_bglt)
															CREF(BgL_new4693z00_2314))->
														BgL_valuezd2approxzd2) =
													((BgL_approxz00_bglt) BgL_valuezd2approx4687zd2_2323),
													BUNSPEC);
												((((BgL_valloczf2cinfozb2optimz40_bglt)
															CREF(BgL_new4693z00_2314))->BgL_lostzd2stampzd2) =
													((long) BgL_lostzd2stamp4688zd2_2324), BUNSPEC);
												((((BgL_valloczf2cinfozb2optimz40_bglt)
															CREF(BgL_new4693z00_2314))->BgL_ownerz00) =
													((BgL_variablez00_bglt) BgL_owner4689z00_2325),
													BUNSPEC);
												((((BgL_valloczf2cinfozb2optimz40_bglt)
															CREF(BgL_new4693z00_2314))->BgL_stackablezf3zf3) =
													((bool_t) BgL_stackablezf34690zf3_2326), BUNSPEC);
												((((BgL_valloczf2cinfozb2optimz40_bglt)
															CREF(BgL_new4693z00_2314))->
														BgL_stackzd2stampzd2) =
													((obj_t) BgL_stackzd2stamp4691zd2_2327), BUNSPEC);
												((((BgL_valloczf2cinfozb2optimz40_bglt)
															CREF(BgL_new4693z00_2314))->BgL_seenzf3zf3) =
													((bool_t) BgL_seenzf34692zf3_2328), BUNSPEC);
												BgL_res5217z00_2329 = BgL_new4693z00_2314;
										}} BgL_res5217z00_2329;
									}
									BgL_res5218z00_2330 = BgL_new4666z00_2313;
								}
								BgL_arg4883z00_1274 = BgL_res5218z00_2330;
						}}
						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL_auxz00_4267;

							BgL_objectz00_bglt BgL_auxz00_4265;

							BgL_auxz00_4267 = (obj_t) (BgL_arg4883z00_1274);
							BgL_auxz00_4265 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2valloczf2Cinfozb2optimzd2nilz12zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4265, BgL_auxz00_4267);
				}}}
			else
				{	/* Cfa/cinfo3.scm 48 */
					BFALSE;
				}
			return
				(BgL_valloczf2cinfozb2optimz40_bglt)
				(BGl_z52thezd2valloczf2Cinfozb2optimzd2nilz12zzcfa_info3z00);
		}
	}



/* _valloc/Cinfo+optim-nil */
	obj_t BGl__valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00(obj_t
		BgL_envz00_3595)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			return (obj_t) (BGl_valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00());
		}
	}



/* valloc/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_valloczf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_obj4637z00_53)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4637z00_53,
				BGl_valloczf2Cinfozf2zzcfa_info3z00);
		}
	}



/* _valloc/Cinfo? */
	obj_t BGl__valloczf2Cinfozf3z01zzcfa_info3z00(obj_t BgL_envz00_3592,
		obj_t BgL_obj4637z00_3593)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4637z00_3593,
					BGl_valloczf2Cinfozf2zzcfa_info3z00));
		}
	}



/* widening-valloc/Cinfo */
	BGL_EXPORTED_DEF BgL_valloczf2cinfozf2_bglt
		BGl_wideningzd2valloczf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4611z00_57)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				BgL_valloczf2cinfozf2_bglt BgL_new4612z00_2331;

				BgL_new4612z00_2331 =
					((BgL_valloczf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_valloczf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 46 */
					BgL_valloczf2cinfozf2_bglt BgL_res5219z00_2335;

					{	/* Cfa/cinfo3.scm 46 */
						BgL_valloczf2cinfozf2_bglt BgL_new4627z00_2332;

						BgL_new4627z00_2332 = BgL_new4612z00_2331;
						{	/* Cfa/cinfo3.scm 46 */
							BgL_approxz00_bglt BgL_approx4626z00_2334;

							BgL_approx4626z00_2334 = BgL_approx4611z00_57;
							((((BgL_valloczf2cinfozf2_bglt) CREF(BgL_new4627z00_2332))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4626z00_2334), BUNSPEC);
							BgL_res5219z00_2335 = BgL_new4627z00_2332;
					}} BgL_res5219z00_2335;
				}
				return BgL_new4612z00_2331;
			}
		}
	}



/* _widening-valloc/Cinfo */
	obj_t BGl__wideningzd2valloczf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3632,
		obj_t BgL_approx4611z00_3633)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			return
				(obj_t) (BGl_wideningzd2valloczf2Cinfoz20zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4611z00_3633)));
		}
	}



/* make-valloc/Cinfo */
	BGL_EXPORTED_DEF BgL_valloczf2cinfozf2_bglt
		BGl_makezd2valloczf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc4615z00_58,
		BgL_typez00_bglt BgL_type4616z00_59, obj_t BgL_sidezd2effectzf34617z21_60,
		obj_t BgL_key4618z00_61, obj_t BgL_exprza24619za2_62,
		obj_t BgL_effect4620z00_63, obj_t BgL_czd2heapzd2format4621z00_64,
		BgL_typez00_bglt BgL_ftype4622z00_65, BgL_typez00_bglt BgL_otype4623z00_66,
		BgL_approxz00_bglt BgL_approx4614z00_67)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				BgL_vallocz00_bglt BgL_aux4624z00_2336;

				BgL_aux4624z00_2336 =
					BGl_makezd2valloczd2zzast_nodez00(BgL_loc4615z00_58,
					BgL_type4616z00_59, BgL_sidezd2effectzf34617z21_60, BgL_key4618z00_61,
					BgL_exprza24619za2_62, BgL_effect4620z00_63,
					BgL_czd2heapzd2format4621z00_64, BgL_ftype4622z00_65,
					BgL_otype4623z00_66);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4624z00_2336),
					BGl_classzd2numzd2zz__objectz00(BGl_valloczf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 46 */
					BgL_valloczf2cinfozf2_bglt BgL_arg4889z00_2338;

					{	/* Cfa/cinfo3.scm 46 */
						BgL_valloczf2cinfozf2_bglt BgL_res5221z00_2348;

						{	/* Cfa/cinfo3.scm 46 */
							BgL_valloczf2cinfozf2_bglt BgL_new4612z00_2343;

							BgL_new4612z00_2343 =
								((BgL_valloczf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_valloczf2cinfozf2_bgl))));
							{	/* Cfa/cinfo3.scm 46 */
								BgL_valloczf2cinfozf2_bglt BgL_res5220z00_2347;

								{	/* Cfa/cinfo3.scm 46 */
									BgL_valloczf2cinfozf2_bglt BgL_new4627z00_2344;

									BgL_new4627z00_2344 = BgL_new4612z00_2343;
									{	/* Cfa/cinfo3.scm 46 */
										BgL_approxz00_bglt BgL_approx4626z00_2346;

										BgL_approx4626z00_2346 = BgL_approx4614z00_67;
										((((BgL_valloczf2cinfozf2_bglt) CREF(BgL_new4627z00_2344))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4626z00_2346), BUNSPEC);
										BgL_res5220z00_2347 = BgL_new4627z00_2344;
								}} BgL_res5220z00_2347;
							}
							BgL_res5221z00_2348 = BgL_new4612z00_2343;
						}
						BgL_arg4889z00_2338 = BgL_res5221z00_2348;
					}
					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_auxz00_4289;

						BgL_objectz00_bglt BgL_auxz00_4287;

						BgL_auxz00_4289 = (obj_t) (BgL_arg4889z00_2338);
						BgL_auxz00_4287 = (BgL_objectz00_bglt) (BgL_aux4624z00_2336);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4287, BgL_auxz00_4289);
				}}
				return
					((BgL_valloczf2cinfozf2_bglt)
					(BgL_valloczf2cinfozf2_bglt) (BgL_aux4624z00_2336));
			}
		}
	}



/* _make-valloc/Cinfo */
	obj_t BGl__makezd2valloczf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3634,
		obj_t BgL_loc4615z00_3635, obj_t BgL_type4616z00_3636,
		obj_t BgL_sidezd2effectzf34617z21_3637, obj_t BgL_key4618z00_3638,
		obj_t BgL_exprza24619za2_3639, obj_t BgL_effect4620z00_3640,
		obj_t BgL_czd2heapzd2format4621z00_3641, obj_t BgL_ftype4622z00_3642,
		obj_t BgL_otype4623z00_3643, obj_t BgL_approx4614z00_3644)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			return
				(obj_t) (BGl_makezd2valloczf2Cinfoz20zzcfa_info3z00(BgL_loc4615z00_3635,
					(BgL_typez00_bglt) (BgL_type4616z00_3636),
					BgL_sidezd2effectzf34617z21_3637, BgL_key4618z00_3638,
					BgL_exprza24619za2_3639, BgL_effect4620z00_3640,
					BgL_czd2heapzd2format4621z00_3641,
					(BgL_typez00_bglt) (BgL_ftype4622z00_3642),
					(BgL_typez00_bglt) (BgL_otype4623z00_3643),
					(BgL_approxz00_bglt) (BgL_approx4614z00_3644)));
		}
	}



/* fill-valloc/Cinfo! */
	BGL_EXPORTED_DEF BgL_valloczf2cinfozf2_bglt
		BGl_fillzd2valloczf2Cinfoz12z32zzcfa_info3z00(BgL_valloczf2cinfozf2_bglt
		BgL_new4627z00_68, BgL_approxz00_bglt BgL_approx4626z00_69)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				BgL_approxz00_bglt BgL_approx4626z00_3938;

				BgL_approx4626z00_3938 = BgL_approx4626z00_69;
				((((BgL_valloczf2cinfozf2_bglt) CREF(BgL_new4627z00_68))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4626z00_3938), BUNSPEC);
				return BgL_new4627z00_68;
			}
		}
	}



/* _fill-valloc/Cinfo! */
	obj_t BGl__fillzd2valloczf2Cinfoz12z32zzcfa_info3z00(obj_t BgL_envz00_3645,
		obj_t BgL_new4627z00_3646, obj_t BgL_approx4626z00_3647)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				BgL_valloczf2cinfozf2_bglt BgL_auxz00_4301;

				{	/* Cfa/cinfo3.scm 46 */
					BgL_valloczf2cinfozf2_bglt BgL_res5368z00_3942;

					{	/* Cfa/cinfo3.scm 46 */
						BgL_valloczf2cinfozf2_bglt BgL_new4627z00_3939;

						BgL_approxz00_bglt BgL_approx4626z00_3940;

						BgL_new4627z00_3939 =
							(BgL_valloczf2cinfozf2_bglt) (BgL_new4627z00_3646);
						BgL_approx4626z00_3940 =
							(BgL_approxz00_bglt) (BgL_approx4626z00_3647);
						{	/* Cfa/cinfo3.scm 46 */
							BgL_approxz00_bglt BgL_approx4626z00_3941;

							BgL_approx4626z00_3941 = BgL_approx4626z00_3940;
							((((BgL_valloczf2cinfozf2_bglt) CREF(BgL_new4627z00_3939))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4626z00_3941), BUNSPEC);
							BgL_res5368z00_3942 = BgL_new4627z00_3939;
						}
					}
					BgL_auxz00_4301 = BgL_res5368z00_3942;
				}
				return (obj_t) (BgL_auxz00_4301);
			}
		}
	}



/* %allocate-valloc/Cinfo */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_z52allocatezd2valloczf2Cinfoz72zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				BgL_vallocz00_bglt BgL_new4630z00_3943;

				BgL_new4630z00_3943 =
					((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vallocz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4630z00_3943),
					BGl_classzd2numzd2zz__objectz00(BGl_valloczf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 46 */
					BgL_objectz00_bglt BgL_auxz00_4310;

					BgL_auxz00_4310 = (BgL_objectz00_bglt) (BgL_new4630z00_3943);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4310, BFALSE);
				}
				return BgL_new4630z00_3943;
			}
		}
	}



/* _%allocate-valloc/Cinfo */
	obj_t BGl__z52allocatezd2valloczf2Cinfoz72zzcfa_info3z00(obj_t
		BgL_envz00_3590)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				BgL_vallocz00_bglt BgL_auxz00_4313;

				{	/* Cfa/cinfo3.scm 46 */
					BgL_vallocz00_bglt BgL_res5369z00_3947;

					{	/* Cfa/cinfo3.scm 46 */
						BgL_vallocz00_bglt BgL_new4630z00_3945;

						BgL_new4630z00_3945 =
							((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vallocz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4630z00_3945),
							BGl_classzd2numzd2zz__objectz00
							(BGl_valloczf2Cinfozf2zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 46 */
							BgL_objectz00_bglt BgL_auxz00_4318;

							BgL_auxz00_4318 = (BgL_objectz00_bglt) (BgL_new4630z00_3945);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4318, BFALSE);
						}
						BgL_res5369z00_3947 = BgL_new4630z00_3945;
					}
					BgL_auxz00_4313 = BgL_res5369z00_3947;
				}
				return (obj_t) (BgL_auxz00_4313);
			}
		}
	}



/* valloc/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_valloczf2cinfozf2_bglt
		BGl_valloczf2Cinfozd2nilz20zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			if ((BGl_z52thezd2valloczf2Cinfozd2nilza0zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 46 */
					{	/* Cfa/cinfo3.scm 46 */
						BgL_vallocz00_bglt BgL_res5222z00_2358;

						{	/* Cfa/cinfo3.scm 46 */
							BgL_vallocz00_bglt BgL_new2608z00_2354;

							BgL_new2608z00_2354 =
								((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2608z00_2354),
								BGl_classzd2numzd2zz__objectz00(BGl_vallocz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 46 */
								BgL_objectz00_bglt BgL_auxz00_4328;

								BgL_auxz00_4328 = (BgL_objectz00_bglt) (BgL_new2608z00_2354);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4328, BFALSE);
							}
							BgL_res5222z00_2358 = BgL_new2608z00_2354;
						}
						BGl_z52thezd2valloczf2Cinfozd2nilza0zzcfa_info3z00 =
							(obj_t) (BgL_res5222z00_2358);
					}
					{	/* Cfa/cinfo3.scm 46 */
						BgL_typez00_bglt BgL_arg4892z00_1288;

						BgL_typez00_bglt BgL_arg4895z00_1291;

						BgL_typez00_bglt BgL_arg4896z00_1292;

						BgL_arg4892z00_1288 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4895z00_1291 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4896z00_1292 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 46 */
							BgL_vallocz00_bglt BgL_res5223z00_2378;

							{	/* Cfa/cinfo3.scm 46 */
								BgL_vallocz00_bglt BgL_new2597z00_2359;

								BgL_new2597z00_2359 =
									(BgL_vallocz00_bglt)
									(BGl_z52thezd2valloczf2Cinfozd2nilza0zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 46 */
									obj_t BgL_loc2588z00_2369;

									BgL_typez00_bglt BgL_type2589z00_2370;

									obj_t BgL_sidezd2effectzf32590z21_2371;

									obj_t BgL_key2591z00_2372;

									obj_t BgL_exprza22592za2_2373;

									obj_t BgL_effect2593z00_2374;

									obj_t BgL_czd2heapzd2format2594z00_2375;

									BgL_typez00_bglt BgL_ftype2595z00_2376;

									BgL_typez00_bglt BgL_otype2596z00_2377;

									BgL_loc2588z00_2369 = BUNSPEC;
									BgL_type2589z00_2370 = BgL_arg4892z00_1288;
									BgL_sidezd2effectzf32590z21_2371 = BUNSPEC;
									BgL_key2591z00_2372 = BUNSPEC;
									BgL_exprza22592za2_2373 = BNIL;
									BgL_effect2593z00_2374 = BUNSPEC;
									BgL_czd2heapzd2format2594z00_2375 =
										BGl_string5335z00zzcfa_info3z00;
									BgL_ftype2595z00_2376 = BgL_arg4895z00_1291;
									BgL_otype2596z00_2377 = BgL_arg4896z00_1292;
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_locz00) = ((obj_t) BgL_loc2588z00_2369), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2589z00_2370), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32590z21_2371), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_keyz00) = ((obj_t) BgL_key2591z00_2372), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22592za2_2373), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_effectz00) =
										((obj_t) BgL_effect2593z00_2374), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_czd2heapzd2formatz00) =
										((obj_t) BgL_czd2heapzd2format2594z00_2375), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2595z00_2376), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2359))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2596z00_2377), BUNSPEC);
									BgL_res5223z00_2378 = BgL_new2597z00_2359;
							}} BgL_res5223z00_2378;
					}}
					{	/* Cfa/cinfo3.scm 46 */
						long BgL_arg4897z00_1293;

						BgL_arg4897z00_1293 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_valloczf2Cinfozf2zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2valloczf2Cinfozd2nilza0zzcfa_info3z00),
							BgL_arg4897z00_1293);
					}
					{	/* Cfa/cinfo3.scm 46 */
						BgL_valloczf2cinfozf2_bglt BgL_arg4898z00_1294;

						{	/* Cfa/cinfo3.scm 46 */
							BgL_approxz00_bglt BgL_arg4899z00_1295;

							BgL_arg4899z00_1295 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 46 */
								BgL_valloczf2cinfozf2_bglt BgL_res5225z00_2387;

								{	/* Cfa/cinfo3.scm 46 */
									BgL_valloczf2cinfozf2_bglt BgL_new4612z00_2382;

									BgL_new4612z00_2382 =
										((BgL_valloczf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_valloczf2cinfozf2_bgl))));
									{	/* Cfa/cinfo3.scm 46 */
										BgL_valloczf2cinfozf2_bglt BgL_res5224z00_2386;

										{	/* Cfa/cinfo3.scm 46 */
											BgL_valloczf2cinfozf2_bglt BgL_new4627z00_2383;

											BgL_new4627z00_2383 = BgL_new4612z00_2382;
											{	/* Cfa/cinfo3.scm 46 */
												BgL_approxz00_bglt BgL_approx4626z00_2385;

												BgL_approx4626z00_2385 = BgL_arg4899z00_1295;
												((((BgL_valloczf2cinfozf2_bglt)
															CREF(BgL_new4627z00_2383))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4626z00_2385),
													BUNSPEC);
												BgL_res5224z00_2386 = BgL_new4627z00_2383;
										}} BgL_res5224z00_2386;
									}
									BgL_res5225z00_2387 = BgL_new4612z00_2382;
								}
								BgL_arg4898z00_1294 = BgL_res5225z00_2387;
						}}
						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL_auxz00_4353;

							BgL_objectz00_bglt BgL_auxz00_4351;

							BgL_auxz00_4353 = (obj_t) (BgL_arg4898z00_1294);
							BgL_auxz00_4351 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2valloczf2Cinfozd2nilza0zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4351, BgL_auxz00_4353);
				}}}
			else
				{	/* Cfa/cinfo3.scm 46 */
					BFALSE;
				}
			return
				(BgL_valloczf2cinfozf2_bglt)
				(BGl_z52thezd2valloczf2Cinfozd2nilza0zzcfa_info3z00);
		}
	}



/* _valloc/Cinfo-nil */
	obj_t BGl__valloczf2Cinfozd2nilz20zzcfa_info3z00(obj_t BgL_envz00_3591)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			return (obj_t) (BGl_valloczf2Cinfozd2nilz20zzcfa_info3z00());
		}
	}



/* pre-valloc/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2valloczf2Cinfozf3zd3zzcfa_info3z00(obj_t
		BgL_obj4588z00_71)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4588z00_71,
				BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
		}
	}



/* _pre-valloc/Cinfo? */
	obj_t BGl__prezd2valloczf2Cinfozf3zd3zzcfa_info3z00(obj_t BgL_envz00_3588,
		obj_t BgL_obj4588z00_3589)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4588z00_3589,
					BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00));
		}
	}



/* widening-pre-valloc/Cinfo */
	BGL_EXPORTED_DEF BgL_prezd2valloczf2cinfoz20_bglt
		BGl_wideningzd2prezd2valloczf2Cinfozf2zzcfa_info3z00(BgL_variablez00_bglt
		BgL_owner4562z00_75)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			{	/* Cfa/cinfo3.scm 44 */
				BgL_prezd2valloczf2cinfoz20_bglt BgL_new4563z00_2388;

				BgL_new4563z00_2388 =
					((BgL_prezd2valloczf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2valloczf2cinfoz20_bgl))));
				{	/* Cfa/cinfo3.scm 44 */
					BgL_prezd2valloczf2cinfoz20_bglt BgL_res5226z00_2392;

					{	/* Cfa/cinfo3.scm 44 */
						BgL_prezd2valloczf2cinfoz20_bglt BgL_new4578z00_2389;

						BgL_new4578z00_2389 = BgL_new4563z00_2388;
						{	/* Cfa/cinfo3.scm 44 */
							BgL_variablez00_bglt BgL_owner4577z00_2391;

							BgL_owner4577z00_2391 = BgL_owner4562z00_75;
							((((BgL_prezd2valloczf2cinfoz20_bglt) CREF(BgL_new4578z00_2389))->
									BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4577z00_2391), BUNSPEC);
							BgL_res5226z00_2392 = BgL_new4578z00_2389;
					}} BgL_res5226z00_2392;
				}
				return BgL_new4563z00_2388;
			}
		}
	}



/* _widening-pre-valloc/Cinfo */
	obj_t BGl__wideningzd2prezd2valloczf2Cinfozf2zzcfa_info3z00(obj_t
		BgL_envz00_3648, obj_t BgL_owner4562z00_3649)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			return
				(obj_t) (BGl_wideningzd2prezd2valloczf2Cinfozf2zzcfa_info3z00(
					(BgL_variablez00_bglt) (BgL_owner4562z00_3649)));
		}
	}



/* make-pre-valloc/Cinfo */
	BGL_EXPORTED_DEF BgL_prezd2valloczf2cinfoz20_bglt
		BGl_makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00(obj_t BgL_loc4566z00_76,
		BgL_typez00_bglt BgL_type4567z00_77, obj_t BgL_sidezd2effectzf34568z21_78,
		obj_t BgL_key4569z00_79, obj_t BgL_exprza24570za2_80,
		obj_t BgL_effect4571z00_81, obj_t BgL_czd2heapzd2format4572z00_82,
		BgL_typez00_bglt BgL_ftype4573z00_83, BgL_typez00_bglt BgL_otype4574z00_84,
		BgL_variablez00_bglt BgL_owner4565z00_85)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			{	/* Cfa/cinfo3.scm 44 */
				BgL_vallocz00_bglt BgL_aux4575z00_2393;

				BgL_aux4575z00_2393 =
					BGl_makezd2valloczd2zzast_nodez00(BgL_loc4566z00_76,
					BgL_type4567z00_77, BgL_sidezd2effectzf34568z21_78, BgL_key4569z00_79,
					BgL_exprza24570za2_80, BgL_effect4571z00_81,
					BgL_czd2heapzd2format4572z00_82, BgL_ftype4573z00_83,
					BgL_otype4574z00_84);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4575z00_2393),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 44 */
					BgL_prezd2valloczf2cinfoz20_bglt BgL_arg4901z00_2395;

					{	/* Cfa/cinfo3.scm 44 */
						BgL_prezd2valloczf2cinfoz20_bglt BgL_res5228z00_2405;

						{	/* Cfa/cinfo3.scm 44 */
							BgL_prezd2valloczf2cinfoz20_bglt BgL_new4563z00_2400;

							BgL_new4563z00_2400 =
								((BgL_prezd2valloczf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_prezd2valloczf2cinfoz20_bgl))));
							{	/* Cfa/cinfo3.scm 44 */
								BgL_prezd2valloczf2cinfoz20_bglt BgL_res5227z00_2404;

								{	/* Cfa/cinfo3.scm 44 */
									BgL_prezd2valloczf2cinfoz20_bglt BgL_new4578z00_2401;

									BgL_new4578z00_2401 = BgL_new4563z00_2400;
									{	/* Cfa/cinfo3.scm 44 */
										BgL_variablez00_bglt BgL_owner4577z00_2403;

										BgL_owner4577z00_2403 = BgL_owner4565z00_85;
										((((BgL_prezd2valloczf2cinfoz20_bglt)
													CREF(BgL_new4578z00_2401))->BgL_ownerz00) =
											((BgL_variablez00_bglt) BgL_owner4577z00_2403), BUNSPEC);
										BgL_res5227z00_2404 = BgL_new4578z00_2401;
								}} BgL_res5227z00_2404;
							}
							BgL_res5228z00_2405 = BgL_new4563z00_2400;
						}
						BgL_arg4901z00_2395 = BgL_res5228z00_2405;
					}
					{	/* Cfa/cinfo3.scm 44 */
						obj_t BgL_auxz00_4375;

						BgL_objectz00_bglt BgL_auxz00_4373;

						BgL_auxz00_4375 = (obj_t) (BgL_arg4901z00_2395);
						BgL_auxz00_4373 = (BgL_objectz00_bglt) (BgL_aux4575z00_2393);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4373, BgL_auxz00_4375);
				}}
				return
					((BgL_prezd2valloczf2cinfoz20_bglt)
					(BgL_prezd2valloczf2cinfoz20_bglt) (BgL_aux4575z00_2393));
			}
		}
	}



/* _make-pre-valloc/Cinfo */
	obj_t BGl__makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00(obj_t BgL_envz00_3650,
		obj_t BgL_loc4566z00_3651, obj_t BgL_type4567z00_3652,
		obj_t BgL_sidezd2effectzf34568z21_3653, obj_t BgL_key4569z00_3654,
		obj_t BgL_exprza24570za2_3655, obj_t BgL_effect4571z00_3656,
		obj_t BgL_czd2heapzd2format4572z00_3657, obj_t BgL_ftype4573z00_3658,
		obj_t BgL_otype4574z00_3659, obj_t BgL_owner4565z00_3660)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			return
				(obj_t) (BGl_makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00
				(BgL_loc4566z00_3651, (BgL_typez00_bglt) (BgL_type4567z00_3652),
					BgL_sidezd2effectzf34568z21_3653, BgL_key4569z00_3654,
					BgL_exprza24570za2_3655, BgL_effect4571z00_3656,
					BgL_czd2heapzd2format4572z00_3657,
					(BgL_typez00_bglt) (BgL_ftype4573z00_3658),
					(BgL_typez00_bglt) (BgL_otype4574z00_3659),
					(BgL_variablez00_bglt) (BgL_owner4565z00_3660)));
		}
	}



/* fill-pre-valloc/Cinfo! */
	BGL_EXPORTED_DEF BgL_prezd2valloczf2cinfoz20_bglt
		BGl_fillzd2prezd2valloczf2Cinfoz12ze0zzcfa_info3z00
		(BgL_prezd2valloczf2cinfoz20_bglt BgL_new4578z00_86,
		BgL_variablez00_bglt BgL_owner4577z00_87)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			{	/* Cfa/cinfo3.scm 44 */
				BgL_variablez00_bglt BgL_owner4577z00_3949;

				BgL_owner4577z00_3949 = BgL_owner4577z00_87;
				((((BgL_prezd2valloczf2cinfoz20_bglt) CREF(BgL_new4578z00_86))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) BgL_owner4577z00_3949), BUNSPEC);
				return BgL_new4578z00_86;
			}
		}
	}



/* _fill-pre-valloc/Cinfo! */
	obj_t BGl__fillzd2prezd2valloczf2Cinfoz12ze0zzcfa_info3z00(obj_t
		BgL_envz00_3661, obj_t BgL_new4578z00_3662, obj_t BgL_owner4577z00_3663)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			{	/* Cfa/cinfo3.scm 44 */
				BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_4387;

				{	/* Cfa/cinfo3.scm 44 */
					BgL_prezd2valloczf2cinfoz20_bglt BgL_res5370z00_3953;

					{	/* Cfa/cinfo3.scm 44 */
						BgL_prezd2valloczf2cinfoz20_bglt BgL_new4578z00_3950;

						BgL_variablez00_bglt BgL_owner4577z00_3951;

						BgL_new4578z00_3950 =
							(BgL_prezd2valloczf2cinfoz20_bglt) (BgL_new4578z00_3662);
						BgL_owner4577z00_3951 =
							(BgL_variablez00_bglt) (BgL_owner4577z00_3663);
						{	/* Cfa/cinfo3.scm 44 */
							BgL_variablez00_bglt BgL_owner4577z00_3952;

							BgL_owner4577z00_3952 = BgL_owner4577z00_3951;
							((((BgL_prezd2valloczf2cinfoz20_bglt) CREF(BgL_new4578z00_3950))->
									BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4577z00_3952), BUNSPEC);
							BgL_res5370z00_3953 = BgL_new4578z00_3950;
						}
					}
					BgL_auxz00_4387 = BgL_res5370z00_3953;
				}
				return (obj_t) (BgL_auxz00_4387);
			}
		}
	}



/* %allocate-pre-valloc/Cinfo */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_z52allocatezd2prezd2valloczf2Cinfoza0zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			{	/* Cfa/cinfo3.scm 44 */
				BgL_vallocz00_bglt BgL_new4581z00_3954;

				BgL_new4581z00_3954 =
					((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vallocz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4581z00_3954),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 44 */
					BgL_objectz00_bglt BgL_auxz00_4396;

					BgL_auxz00_4396 = (BgL_objectz00_bglt) (BgL_new4581z00_3954);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4396, BFALSE);
				}
				return BgL_new4581z00_3954;
			}
		}
	}



/* _%allocate-pre-valloc/Cinfo */
	obj_t BGl__z52allocatezd2prezd2valloczf2Cinfoza0zzcfa_info3z00(obj_t
		BgL_envz00_3586)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			{	/* Cfa/cinfo3.scm 44 */
				BgL_vallocz00_bglt BgL_auxz00_4399;

				{	/* Cfa/cinfo3.scm 44 */
					BgL_vallocz00_bglt BgL_res5371z00_3958;

					{	/* Cfa/cinfo3.scm 44 */
						BgL_vallocz00_bglt BgL_new4581z00_3956;

						BgL_new4581z00_3956 =
							((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vallocz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4581z00_3956),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_4404;

							BgL_auxz00_4404 = (BgL_objectz00_bglt) (BgL_new4581z00_3956);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4404, BFALSE);
						}
						BgL_res5371z00_3958 = BgL_new4581z00_3956;
					}
					BgL_auxz00_4399 = BgL_res5371z00_3958;
				}
				return (obj_t) (BgL_auxz00_4399);
			}
		}
	}



/* pre-valloc/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_prezd2valloczf2cinfoz20_bglt
		BGl_prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			if ((BGl_z52thezd2prezd2valloczf2Cinfozd2nilz72zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 44 */
					{	/* Cfa/cinfo3.scm 44 */
						BgL_vallocz00_bglt BgL_res5229z00_2415;

						{	/* Cfa/cinfo3.scm 44 */
							BgL_vallocz00_bglt BgL_new2608z00_2411;

							BgL_new2608z00_2411 =
								((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2608z00_2411),
								BGl_classzd2numzd2zz__objectz00(BGl_vallocz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 44 */
								BgL_objectz00_bglt BgL_auxz00_4414;

								BgL_auxz00_4414 = (BgL_objectz00_bglt) (BgL_new2608z00_2411);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4414, BFALSE);
							}
							BgL_res5229z00_2415 = BgL_new2608z00_2411;
						}
						BGl_z52thezd2prezd2valloczf2Cinfozd2nilz72zzcfa_info3z00 =
							(obj_t) (BgL_res5229z00_2415);
					}
					{	/* Cfa/cinfo3.scm 44 */
						BgL_typez00_bglt BgL_arg4904z00_1305;

						BgL_typez00_bglt BgL_arg4907z00_1308;

						BgL_typez00_bglt BgL_arg4908z00_1309;

						BgL_arg4904z00_1305 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4907z00_1308 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4908z00_1309 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 44 */
							BgL_vallocz00_bglt BgL_res5230z00_2435;

							{	/* Cfa/cinfo3.scm 44 */
								BgL_vallocz00_bglt BgL_new2597z00_2416;

								BgL_new2597z00_2416 =
									(BgL_vallocz00_bglt)
									(BGl_z52thezd2prezd2valloczf2Cinfozd2nilz72zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 44 */
									obj_t BgL_loc2588z00_2426;

									BgL_typez00_bglt BgL_type2589z00_2427;

									obj_t BgL_sidezd2effectzf32590z21_2428;

									obj_t BgL_key2591z00_2429;

									obj_t BgL_exprza22592za2_2430;

									obj_t BgL_effect2593z00_2431;

									obj_t BgL_czd2heapzd2format2594z00_2432;

									BgL_typez00_bglt BgL_ftype2595z00_2433;

									BgL_typez00_bglt BgL_otype2596z00_2434;

									BgL_loc2588z00_2426 = BUNSPEC;
									BgL_type2589z00_2427 = BgL_arg4904z00_1305;
									BgL_sidezd2effectzf32590z21_2428 = BUNSPEC;
									BgL_key2591z00_2429 = BUNSPEC;
									BgL_exprza22592za2_2430 = BNIL;
									BgL_effect2593z00_2431 = BUNSPEC;
									BgL_czd2heapzd2format2594z00_2432 =
										BGl_string5335z00zzcfa_info3z00;
									BgL_ftype2595z00_2433 = BgL_arg4907z00_1308;
									BgL_otype2596z00_2434 = BgL_arg4908z00_1309;
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_locz00) = ((obj_t) BgL_loc2588z00_2426), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2589z00_2427), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32590z21_2428), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_keyz00) = ((obj_t) BgL_key2591z00_2429), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22592za2_2430), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_effectz00) =
										((obj_t) BgL_effect2593z00_2431), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_czd2heapzd2formatz00) =
										((obj_t) BgL_czd2heapzd2format2594z00_2432), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2595z00_2433), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2597z00_2416))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2596z00_2434), BUNSPEC);
									BgL_res5230z00_2435 = BgL_new2597z00_2416;
							}} BgL_res5230z00_2435;
					}}
					{	/* Cfa/cinfo3.scm 44 */
						long BgL_arg4909z00_1310;

						BgL_arg4909z00_1310 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2valloczf2Cinfozd2nilz72zzcfa_info3z00),
							BgL_arg4909z00_1310);
					}
					{	/* Cfa/cinfo3.scm 44 */
						BgL_prezd2valloczf2cinfoz20_bglt BgL_arg4910z00_1311;

						{	/* Cfa/cinfo3.scm 44 */
							BgL_variablez00_bglt BgL_arg4911z00_1312;

							BgL_arg4911z00_1312 = BGl_variablezd2nilzd2zzast_varz00();
							{	/* Cfa/cinfo3.scm 44 */
								BgL_prezd2valloczf2cinfoz20_bglt BgL_res5232z00_2444;

								{	/* Cfa/cinfo3.scm 44 */
									BgL_prezd2valloczf2cinfoz20_bglt BgL_new4563z00_2439;

									BgL_new4563z00_2439 =
										((BgL_prezd2valloczf2cinfoz20_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_prezd2valloczf2cinfoz20_bgl))));
									{	/* Cfa/cinfo3.scm 44 */
										BgL_prezd2valloczf2cinfoz20_bglt BgL_res5231z00_2443;

										{	/* Cfa/cinfo3.scm 44 */
											BgL_prezd2valloczf2cinfoz20_bglt BgL_new4578z00_2440;

											BgL_new4578z00_2440 = BgL_new4563z00_2439;
											{	/* Cfa/cinfo3.scm 44 */
												BgL_variablez00_bglt BgL_owner4577z00_2442;

												BgL_owner4577z00_2442 = BgL_arg4911z00_1312;
												((((BgL_prezd2valloczf2cinfoz20_bglt)
															CREF(BgL_new4578z00_2440))->BgL_ownerz00) =
													((BgL_variablez00_bglt) BgL_owner4577z00_2442),
													BUNSPEC);
												BgL_res5231z00_2443 = BgL_new4578z00_2440;
										}} BgL_res5231z00_2443;
									}
									BgL_res5232z00_2444 = BgL_new4563z00_2439;
								}
								BgL_arg4910z00_1311 = BgL_res5232z00_2444;
						}}
						{	/* Cfa/cinfo3.scm 44 */
							obj_t BgL_auxz00_4439;

							BgL_objectz00_bglt BgL_auxz00_4437;

							BgL_auxz00_4439 = (obj_t) (BgL_arg4910z00_1311);
							BgL_auxz00_4437 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2valloczf2Cinfozd2nilz72zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4437, BgL_auxz00_4439);
				}}}
			else
				{	/* Cfa/cinfo3.scm 44 */
					BFALSE;
				}
			return
				(BgL_prezd2valloczf2cinfoz20_bglt)
				(BGl_z52thezd2prezd2valloczf2Cinfozd2nilz72zzcfa_info3z00);
		}
	}



/* _pre-valloc/Cinfo-nil */
	obj_t BGl__prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00(obj_t BgL_envz00_3587)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			return (obj_t) (BGl_prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00());
		}
	}



/* vlength/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_vlengthzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_obj4538z00_89)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4538z00_89,
				BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
		}
	}



/* _vlength/Cinfo? */
	obj_t BGl__vlengthzf2Cinfozf3z01zzcfa_info3z00(obj_t BgL_envz00_3584,
		obj_t BgL_obj4538z00_3585)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4538z00_3585,
					BGl_vlengthzf2Cinfozf2zzcfa_info3z00));
		}
	}



/* widening-vlength/Cinfo */
	BGL_EXPORTED_DEF BgL_vlengthzf2cinfozf2_bglt
		BGl_wideningzd2vlengthzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4509z00_93, bool_t BgL_tvectorzf34510zf3_94)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			{	/* Cfa/cinfo3.scm 39 */
				BgL_vlengthzf2cinfozf2_bglt BgL_new4511z00_2445;

				BgL_new4511z00_2445 =
					((BgL_vlengthzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vlengthzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 39 */
					BgL_vlengthzf2cinfozf2_bglt BgL_res5233z00_2451;

					{	/* Cfa/cinfo3.scm 39 */
						BgL_vlengthzf2cinfozf2_bglt BgL_new4527z00_2446;

						BgL_new4527z00_2446 = BgL_new4511z00_2445;
						{	/* Cfa/cinfo3.scm 39 */
							BgL_approxz00_bglt BgL_approx4525z00_2449;

							bool_t BgL_tvectorzf34526zf3_2450;

							BgL_approx4525z00_2449 = BgL_approx4509z00_93;
							BgL_tvectorzf34526zf3_2450 = BgL_tvectorzf34510zf3_94;
							((((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_new4527z00_2446))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4525z00_2449), BUNSPEC);
							((((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_new4527z00_2446))->
									BgL_tvectorzf3zf3) =
								((bool_t) BgL_tvectorzf34526zf3_2450), BUNSPEC);
							BgL_res5233z00_2451 = BgL_new4527z00_2446;
					}} BgL_res5233z00_2451;
				}
				return BgL_new4511z00_2445;
			}
		}
	}



/* _widening-vlength/Cinfo */
	obj_t BGl__wideningzd2vlengthzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3664,
		obj_t BgL_approx4509z00_3665, obj_t BgL_tvectorzf34510zf3_3666)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			return
				(obj_t) (BGl_wideningzd2vlengthzf2Cinfoz20zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4509z00_3665),
					CBOOL(BgL_tvectorzf34510zf3_3666)));
		}
	}



/* make-vlength/Cinfo */
	BGL_EXPORTED_DEF BgL_vlengthzf2cinfozf2_bglt
		BGl_makezd2vlengthzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc4515z00_95,
		BgL_typez00_bglt BgL_type4516z00_96, obj_t BgL_sidezd2effectzf34517z21_97,
		obj_t BgL_key4518z00_98, obj_t BgL_exprza24519za2_99,
		obj_t BgL_effect4520z00_100, obj_t BgL_czd2format4521zd2_101,
		BgL_typez00_bglt BgL_vtype4522z00_102,
		BgL_approxz00_bglt BgL_approx4513z00_103, bool_t BgL_tvectorzf34514zf3_104)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			{	/* Cfa/cinfo3.scm 39 */
				BgL_vlengthz00_bglt BgL_aux4523z00_2452;

				BgL_aux4523z00_2452 =
					BGl_makezd2vlengthzd2zzast_nodez00(BgL_loc4515z00_95,
					BgL_type4516z00_96, BgL_sidezd2effectzf34517z21_97, BgL_key4518z00_98,
					BgL_exprza24519za2_99, BgL_effect4520z00_100,
					BgL_czd2format4521zd2_101, BgL_vtype4522z00_102);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4523z00_2452),
					BGl_classzd2numzd2zz__objectz00
					(BGl_vlengthzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 39 */
					BgL_vlengthzf2cinfozf2_bglt BgL_arg4913z00_2454;

					{	/* Cfa/cinfo3.scm 39 */
						BgL_vlengthzf2cinfozf2_bglt BgL_res5235z00_2467;

						{	/* Cfa/cinfo3.scm 39 */
							BgL_vlengthzf2cinfozf2_bglt BgL_new4511z00_2460;

							BgL_new4511z00_2460 =
								((BgL_vlengthzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vlengthzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo3.scm 39 */
								BgL_vlengthzf2cinfozf2_bglt BgL_res5234z00_2466;

								{	/* Cfa/cinfo3.scm 39 */
									BgL_vlengthzf2cinfozf2_bglt BgL_new4527z00_2461;

									BgL_new4527z00_2461 = BgL_new4511z00_2460;
									{	/* Cfa/cinfo3.scm 39 */
										BgL_approxz00_bglt BgL_approx4525z00_2464;

										bool_t BgL_tvectorzf34526zf3_2465;

										BgL_approx4525z00_2464 = BgL_approx4513z00_103;
										BgL_tvectorzf34526zf3_2465 = BgL_tvectorzf34514zf3_104;
										((((BgL_vlengthzf2cinfozf2_bglt)
													CREF(BgL_new4527z00_2461))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4525z00_2464), BUNSPEC);
										((((BgL_vlengthzf2cinfozf2_bglt)
													CREF(BgL_new4527z00_2461))->BgL_tvectorzf3zf3) =
											((bool_t) BgL_tvectorzf34526zf3_2465), BUNSPEC);
										BgL_res5234z00_2466 = BgL_new4527z00_2461;
								}} BgL_res5234z00_2466;
							}
							BgL_res5235z00_2467 = BgL_new4511z00_2460;
						}
						BgL_arg4913z00_2454 = BgL_res5235z00_2467;
					}
					{	/* Cfa/cinfo3.scm 39 */
						obj_t BgL_auxz00_4464;

						BgL_objectz00_bglt BgL_auxz00_4462;

						BgL_auxz00_4464 = (obj_t) (BgL_arg4913z00_2454);
						BgL_auxz00_4462 = (BgL_objectz00_bglt) (BgL_aux4523z00_2452);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4462, BgL_auxz00_4464);
				}}
				return
					((BgL_vlengthzf2cinfozf2_bglt)
					(BgL_vlengthzf2cinfozf2_bglt) (BgL_aux4523z00_2452));
			}
		}
	}



/* _make-vlength/Cinfo */
	obj_t BGl__makezd2vlengthzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3667,
		obj_t BgL_loc4515z00_3668, obj_t BgL_type4516z00_3669,
		obj_t BgL_sidezd2effectzf34517z21_3670, obj_t BgL_key4518z00_3671,
		obj_t BgL_exprza24519za2_3672, obj_t BgL_effect4520z00_3673,
		obj_t BgL_czd2format4521zd2_3674, obj_t BgL_vtype4522z00_3675,
		obj_t BgL_approx4513z00_3676, obj_t BgL_tvectorzf34514zf3_3677)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			return
				(obj_t) (BGl_makezd2vlengthzf2Cinfoz20zzcfa_info3z00
				(BgL_loc4515z00_3668, (BgL_typez00_bglt) (BgL_type4516z00_3669),
					BgL_sidezd2effectzf34517z21_3670, BgL_key4518z00_3671,
					BgL_exprza24519za2_3672, BgL_effect4520z00_3673,
					BgL_czd2format4521zd2_3674,
					(BgL_typez00_bglt) (BgL_vtype4522z00_3675),
					(BgL_approxz00_bglt) (BgL_approx4513z00_3676),
					CBOOL(BgL_tvectorzf34514zf3_3677)));
		}
	}



/* fill-vlength/Cinfo! */
	BGL_EXPORTED_DEF BgL_vlengthzf2cinfozf2_bglt
		BGl_fillzd2vlengthzf2Cinfoz12z32zzcfa_info3z00(BgL_vlengthzf2cinfozf2_bglt
		BgL_new4527z00_105, BgL_approxz00_bglt BgL_approx4525z00_106,
		bool_t BgL_tvectorzf34526zf3_107)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			{	/* Cfa/cinfo3.scm 39 */
				BgL_approxz00_bglt BgL_approx4525z00_3960;

				bool_t BgL_tvectorzf34526zf3_3961;

				BgL_approx4525z00_3960 = BgL_approx4525z00_106;
				BgL_tvectorzf34526zf3_3961 = BgL_tvectorzf34526zf3_107;
				((((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_new4527z00_105))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4525z00_3960), BUNSPEC);
				((((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_new4527z00_105))->
						BgL_tvectorzf3zf3) =
					((bool_t) BgL_tvectorzf34526zf3_3961), BUNSPEC);
				return BgL_new4527z00_105;
			}
		}
	}



/* _fill-vlength/Cinfo! */
	obj_t BGl__fillzd2vlengthzf2Cinfoz12z32zzcfa_info3z00(obj_t BgL_envz00_3678,
		obj_t BgL_new4527z00_3679, obj_t BgL_approx4525z00_3680,
		obj_t BgL_tvectorzf34526zf3_3681)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			{	/* Cfa/cinfo3.scm 39 */
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_4477;

				{	/* Cfa/cinfo3.scm 39 */
					BgL_vlengthzf2cinfozf2_bglt BgL_res5372z00_3967;

					{	/* Cfa/cinfo3.scm 39 */
						BgL_vlengthzf2cinfozf2_bglt BgL_new4527z00_3962;

						BgL_approxz00_bglt BgL_approx4525z00_3963;

						bool_t BgL_tvectorzf34526zf3_3964;

						BgL_new4527z00_3962 =
							(BgL_vlengthzf2cinfozf2_bglt) (BgL_new4527z00_3679);
						BgL_approx4525z00_3963 =
							(BgL_approxz00_bglt) (BgL_approx4525z00_3680);
						BgL_tvectorzf34526zf3_3964 = CBOOL(BgL_tvectorzf34526zf3_3681);
						{	/* Cfa/cinfo3.scm 39 */
							BgL_approxz00_bglt BgL_approx4525z00_3965;

							bool_t BgL_tvectorzf34526zf3_3966;

							BgL_approx4525z00_3965 = BgL_approx4525z00_3963;
							BgL_tvectorzf34526zf3_3966 = BgL_tvectorzf34526zf3_3964;
							((((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_new4527z00_3962))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4525z00_3965), BUNSPEC);
							((((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_new4527z00_3962))->
									BgL_tvectorzf3zf3) =
								((bool_t) BgL_tvectorzf34526zf3_3966), BUNSPEC);
							BgL_res5372z00_3967 = BgL_new4527z00_3962;
						}
					}
					BgL_auxz00_4477 = BgL_res5372z00_3967;
				}
				return (obj_t) (BgL_auxz00_4477);
			}
		}
	}



/* %allocate-vlength/Cinfo */
	BGL_EXPORTED_DEF BgL_vlengthz00_bglt
		BGl_z52allocatezd2vlengthzf2Cinfoz72zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			{	/* Cfa/cinfo3.scm 39 */
				BgL_vlengthz00_bglt BgL_new4531z00_3968;

				BgL_new4531z00_3968 =
					((BgL_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vlengthz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4531z00_3968),
					BGl_classzd2numzd2zz__objectz00
					(BGl_vlengthzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 39 */
					BgL_objectz00_bglt BgL_auxz00_4488;

					BgL_auxz00_4488 = (BgL_objectz00_bglt) (BgL_new4531z00_3968);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4488, BFALSE);
				}
				return BgL_new4531z00_3968;
			}
		}
	}



/* _%allocate-vlength/Cinfo */
	obj_t BGl__z52allocatezd2vlengthzf2Cinfoz72zzcfa_info3z00(obj_t
		BgL_envz00_3582)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			{	/* Cfa/cinfo3.scm 39 */
				BgL_vlengthz00_bglt BgL_auxz00_4491;

				{	/* Cfa/cinfo3.scm 39 */
					BgL_vlengthz00_bglt BgL_res5373z00_3972;

					{	/* Cfa/cinfo3.scm 39 */
						BgL_vlengthz00_bglt BgL_new4531z00_3970;

						BgL_new4531z00_3970 =
							((BgL_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vlengthz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4531z00_3970),
							BGl_classzd2numzd2zz__objectz00
							(BGl_vlengthzf2Cinfozf2zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_4496;

							BgL_auxz00_4496 = (BgL_objectz00_bglt) (BgL_new4531z00_3970);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4496, BFALSE);
						}
						BgL_res5373z00_3972 = BgL_new4531z00_3970;
					}
					BgL_auxz00_4491 = BgL_res5373z00_3972;
				}
				return (obj_t) (BgL_auxz00_4491);
			}
		}
	}



/* vlength/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_vlengthzf2cinfozf2_bglt
		BGl_vlengthzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			if ((BGl_z52thezd2vlengthzf2Cinfozd2nilza0zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 39 */
					{	/* Cfa/cinfo3.scm 39 */
						BgL_vlengthz00_bglt BgL_res5236z00_2478;

						{	/* Cfa/cinfo3.scm 39 */
							BgL_vlengthz00_bglt BgL_new2774z00_2474;

							BgL_new2774z00_2474 =
								((BgL_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vlengthz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2774z00_2474),
								BGl_classzd2numzd2zz__objectz00(BGl_vlengthz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 39 */
								BgL_objectz00_bglt BgL_auxz00_4506;

								BgL_auxz00_4506 = (BgL_objectz00_bglt) (BgL_new2774z00_2474);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4506, BFALSE);
							}
							BgL_res5236z00_2478 = BgL_new2774z00_2474;
						}
						BGl_z52thezd2vlengthzf2Cinfozd2nilza0zzcfa_info3z00 =
							(obj_t) (BgL_res5236z00_2478);
					}
					{	/* Cfa/cinfo3.scm 39 */
						BgL_typez00_bglt BgL_arg4916z00_1323;

						BgL_typez00_bglt BgL_arg4919z00_1326;

						BgL_arg4916z00_1323 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4919z00_1326 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 39 */
							BgL_vlengthz00_bglt BgL_res5237z00_2496;

							{	/* Cfa/cinfo3.scm 39 */
								BgL_vlengthz00_bglt BgL_new2764z00_2479;

								BgL_new2764z00_2479 =
									(BgL_vlengthz00_bglt)
									(BGl_z52thezd2vlengthzf2Cinfozd2nilza0zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 39 */
									obj_t BgL_loc2756z00_2488;

									BgL_typez00_bglt BgL_type2757z00_2489;

									obj_t BgL_sidezd2effectzf32758z21_2490;

									obj_t BgL_key2759z00_2491;

									obj_t BgL_exprza22760za2_2492;

									obj_t BgL_effect2761z00_2493;

									obj_t BgL_czd2format2762zd2_2494;

									BgL_typez00_bglt BgL_vtype2763z00_2495;

									BgL_loc2756z00_2488 = BUNSPEC;
									BgL_type2757z00_2489 = BgL_arg4916z00_1323;
									BgL_sidezd2effectzf32758z21_2490 = BUNSPEC;
									BgL_key2759z00_2491 = BUNSPEC;
									BgL_exprza22760za2_2492 = BNIL;
									BgL_effect2761z00_2493 = BUNSPEC;
									BgL_czd2format2762zd2_2494 = BGl_string5335z00zzcfa_info3z00;
									BgL_vtype2763z00_2495 = BgL_arg4919z00_1326;
									((((BgL_vlengthz00_bglt) CREF(BgL_new2764z00_2479))->
											BgL_locz00) = ((obj_t) BgL_loc2756z00_2488), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new2764z00_2479))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2757z00_2489), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new2764z00_2479))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32758z21_2490), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new2764z00_2479))->
											BgL_keyz00) = ((obj_t) BgL_key2759z00_2491), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new2764z00_2479))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22760za2_2492), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new2764z00_2479))->
											BgL_effectz00) =
										((obj_t) BgL_effect2761z00_2493), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new2764z00_2479))->
											BgL_czd2formatzd2) =
										((obj_t) BgL_czd2format2762zd2_2494), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new2764z00_2479))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype2763z00_2495), BUNSPEC);
									BgL_res5237z00_2496 = BgL_new2764z00_2479;
							}} BgL_res5237z00_2496;
					}}
					{	/* Cfa/cinfo3.scm 39 */
						long BgL_arg4920z00_1327;

						BgL_arg4920z00_1327 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2vlengthzf2Cinfozd2nilza0zzcfa_info3z00),
							BgL_arg4920z00_1327);
					}
					{	/* Cfa/cinfo3.scm 39 */
						BgL_vlengthzf2cinfozf2_bglt BgL_arg4921z00_1328;

						{	/* Cfa/cinfo3.scm 39 */
							BgL_approxz00_bglt BgL_arg4922z00_1329;

							BgL_arg4922z00_1329 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 39 */
								BgL_vlengthzf2cinfozf2_bglt BgL_res5239z00_2508;

								{	/* Cfa/cinfo3.scm 39 */
									BgL_vlengthzf2cinfozf2_bglt BgL_new4511z00_2501;

									BgL_new4511z00_2501 =
										((BgL_vlengthzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_vlengthzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo3.scm 39 */
										BgL_vlengthzf2cinfozf2_bglt BgL_res5238z00_2507;

										{	/* Cfa/cinfo3.scm 39 */
											BgL_vlengthzf2cinfozf2_bglt BgL_new4527z00_2502;

											BgL_new4527z00_2502 = BgL_new4511z00_2501;
											{	/* Cfa/cinfo3.scm 39 */
												BgL_approxz00_bglt BgL_approx4525z00_2505;

												bool_t BgL_tvectorzf34526zf3_2506;

												BgL_approx4525z00_2505 = BgL_arg4922z00_1329;
												BgL_tvectorzf34526zf3_2506 = ((bool_t) 0);
												((((BgL_vlengthzf2cinfozf2_bglt)
															CREF(BgL_new4527z00_2502))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4525z00_2505),
													BUNSPEC);
												((((BgL_vlengthzf2cinfozf2_bglt)
															CREF(BgL_new4527z00_2502))->BgL_tvectorzf3zf3) =
													((bool_t) BgL_tvectorzf34526zf3_2506), BUNSPEC);
												BgL_res5238z00_2507 = BgL_new4527z00_2502;
										}} BgL_res5238z00_2507;
									}
									BgL_res5239z00_2508 = BgL_new4511z00_2501;
								}
								BgL_arg4921z00_1328 = BgL_res5239z00_2508;
						}}
						{	/* Cfa/cinfo3.scm 39 */
							obj_t BgL_auxz00_4530;

							BgL_objectz00_bglt BgL_auxz00_4528;

							BgL_auxz00_4530 = (obj_t) (BgL_arg4921z00_1328);
							BgL_auxz00_4528 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2vlengthzf2Cinfozd2nilza0zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4528, BgL_auxz00_4530);
				}}}
			else
				{	/* Cfa/cinfo3.scm 39 */
					BFALSE;
				}
			return
				(BgL_vlengthzf2cinfozf2_bglt)
				(BGl_z52thezd2vlengthzf2Cinfozd2nilza0zzcfa_info3z00);
		}
	}



/* _vlength/Cinfo-nil */
	obj_t BGl__vlengthzf2Cinfozd2nilz20zzcfa_info3z00(obj_t BgL_envz00_3583)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			return (obj_t) (BGl_vlengthzf2Cinfozd2nilz20zzcfa_info3z00());
		}
	}



/* vset!/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_vsetz12zf2Cinfozf3z13zzcfa_info3z00(obj_t
		BgL_obj4479z00_112)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4479z00_112,
				BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
		}
	}



/* _vset!/Cinfo? */
	obj_t BGl__vsetz12zf2Cinfozf3z13zzcfa_info3z00(obj_t BgL_envz00_3580,
		obj_t BgL_obj4479z00_3581)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4479z00_3581,
					BGl_vsetz12zf2Cinfoze0zzcfa_info3z00));
		}
	}



/* widening-vset!/Cinfo */
	BGL_EXPORTED_DEF BgL_vsetz12zf2cinfoze0_bglt
		BGl_wideningzd2vsetz12zf2Cinfoz32zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4447z00_116, bool_t BgL_tvectorzf34448zf3_117)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			{	/* Cfa/cinfo3.scm 36 */
				BgL_vsetz12zf2cinfoze0_bglt BgL_new4449z00_2509;

				BgL_new4449z00_2509 =
					((BgL_vsetz12zf2cinfoze0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vsetz12zf2cinfoze0_bgl))));
				{	/* Cfa/cinfo3.scm 36 */
					BgL_vsetz12zf2cinfoze0_bglt BgL_res5240z00_2515;

					{	/* Cfa/cinfo3.scm 36 */
						BgL_vsetz12zf2cinfoze0_bglt BgL_new4468z00_2510;

						BgL_new4468z00_2510 = BgL_new4449z00_2509;
						{	/* Cfa/cinfo3.scm 36 */
							BgL_approxz00_bglt BgL_approx4466z00_2513;

							bool_t BgL_tvectorzf34467zf3_2514;

							BgL_approx4466z00_2513 = BgL_approx4447z00_116;
							BgL_tvectorzf34467zf3_2514 = BgL_tvectorzf34448zf3_117;
							((((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_new4468z00_2510))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4466z00_2513), BUNSPEC);
							((((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_new4468z00_2510))->
									BgL_tvectorzf3zf3) =
								((bool_t) BgL_tvectorzf34467zf3_2514), BUNSPEC);
							BgL_res5240z00_2515 = BgL_new4468z00_2510;
					}} BgL_res5240z00_2515;
				}
				return BgL_new4449z00_2509;
			}
		}
	}



/* _widening-vset!/Cinfo */
	obj_t BGl__wideningzd2vsetz12zf2Cinfoz32zzcfa_info3z00(obj_t BgL_envz00_3682,
		obj_t BgL_approx4447z00_3683, obj_t BgL_tvectorzf34448zf3_3684)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			return
				(obj_t) (BGl_wideningzd2vsetz12zf2Cinfoz32zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4447z00_3683),
					CBOOL(BgL_tvectorzf34448zf3_3684)));
		}
	}



/* make-vset!/Cinfo */
	BGL_EXPORTED_DEF BgL_vsetz12zf2cinfoze0_bglt
		BGl_makezd2vsetz12zf2Cinfoz32zzcfa_info3z00(obj_t BgL_loc4453z00_118,
		BgL_typez00_bglt BgL_type4454z00_119, obj_t BgL_sidezd2effectzf34455z21_120,
		obj_t BgL_key4456z00_121, obj_t BgL_exprza24457za2_122,
		obj_t BgL_effect4458z00_123, obj_t BgL_czd2format4459zd2_124,
		BgL_typez00_bglt BgL_ftype4460z00_125,
		BgL_typez00_bglt BgL_otype4461z00_126,
		BgL_typez00_bglt BgL_vtype4462z00_127, bool_t BgL_unsafe4463z00_128,
		BgL_approxz00_bglt BgL_approx4451z00_129, bool_t BgL_tvectorzf34452zf3_130)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			{	/* Cfa/cinfo3.scm 36 */
				BgL_vsetz12z12_bglt BgL_aux4464z00_2516;

				BgL_aux4464z00_2516 =
					BGl_makezd2vsetz12zc0zzast_nodez00(BgL_loc4453z00_118,
					BgL_type4454z00_119, BgL_sidezd2effectzf34455z21_120,
					BgL_key4456z00_121, BgL_exprza24457za2_122, BgL_effect4458z00_123,
					BgL_czd2format4459zd2_124, BgL_ftype4460z00_125, BgL_otype4461z00_126,
					BgL_vtype4462z00_127, BgL_unsafe4463z00_128);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4464z00_2516),
					BGl_classzd2numzd2zz__objectz00
					(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 36 */
					BgL_vsetz12zf2cinfoze0_bglt BgL_arg4924z00_2518;

					{	/* Cfa/cinfo3.scm 36 */
						BgL_vsetz12zf2cinfoze0_bglt BgL_res5242z00_2531;

						{	/* Cfa/cinfo3.scm 36 */
							BgL_vsetz12zf2cinfoze0_bglt BgL_new4449z00_2524;

							BgL_new4449z00_2524 =
								((BgL_vsetz12zf2cinfoze0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vsetz12zf2cinfoze0_bgl))));
							{	/* Cfa/cinfo3.scm 36 */
								BgL_vsetz12zf2cinfoze0_bglt BgL_res5241z00_2530;

								{	/* Cfa/cinfo3.scm 36 */
									BgL_vsetz12zf2cinfoze0_bglt BgL_new4468z00_2525;

									BgL_new4468z00_2525 = BgL_new4449z00_2524;
									{	/* Cfa/cinfo3.scm 36 */
										BgL_approxz00_bglt BgL_approx4466z00_2528;

										bool_t BgL_tvectorzf34467zf3_2529;

										BgL_approx4466z00_2528 = BgL_approx4451z00_129;
										BgL_tvectorzf34467zf3_2529 = BgL_tvectorzf34452zf3_130;
										((((BgL_vsetz12zf2cinfoze0_bglt)
													CREF(BgL_new4468z00_2525))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4466z00_2528), BUNSPEC);
										((((BgL_vsetz12zf2cinfoze0_bglt)
													CREF(BgL_new4468z00_2525))->BgL_tvectorzf3zf3) =
											((bool_t) BgL_tvectorzf34467zf3_2529), BUNSPEC);
										BgL_res5241z00_2530 = BgL_new4468z00_2525;
								}} BgL_res5241z00_2530;
							}
							BgL_res5242z00_2531 = BgL_new4449z00_2524;
						}
						BgL_arg4924z00_2518 = BgL_res5242z00_2531;
					}
					{	/* Cfa/cinfo3.scm 36 */
						obj_t BgL_auxz00_4555;

						BgL_objectz00_bglt BgL_auxz00_4553;

						BgL_auxz00_4555 = (obj_t) (BgL_arg4924z00_2518);
						BgL_auxz00_4553 = (BgL_objectz00_bglt) (BgL_aux4464z00_2516);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4553, BgL_auxz00_4555);
				}}
				return
					((BgL_vsetz12zf2cinfoze0_bglt)
					(BgL_vsetz12zf2cinfoze0_bglt) (BgL_aux4464z00_2516));
			}
		}
	}



/* _make-vset!/Cinfo */
	obj_t BGl__makezd2vsetz12zf2Cinfoz32zzcfa_info3z00(obj_t BgL_envz00_3685,
		obj_t BgL_loc4453z00_3686, obj_t BgL_type4454z00_3687,
		obj_t BgL_sidezd2effectzf34455z21_3688, obj_t BgL_key4456z00_3689,
		obj_t BgL_exprza24457za2_3690, obj_t BgL_effect4458z00_3691,
		obj_t BgL_czd2format4459zd2_3692, obj_t BgL_ftype4460z00_3693,
		obj_t BgL_otype4461z00_3694, obj_t BgL_vtype4462z00_3695,
		obj_t BgL_unsafe4463z00_3696, obj_t BgL_approx4451z00_3697,
		obj_t BgL_tvectorzf34452zf3_3698)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			return
				(obj_t) (BGl_makezd2vsetz12zf2Cinfoz32zzcfa_info3z00
				(BgL_loc4453z00_3686, (BgL_typez00_bglt) (BgL_type4454z00_3687),
					BgL_sidezd2effectzf34455z21_3688, BgL_key4456z00_3689,
					BgL_exprza24457za2_3690, BgL_effect4458z00_3691,
					BgL_czd2format4459zd2_3692,
					(BgL_typez00_bglt) (BgL_ftype4460z00_3693),
					(BgL_typez00_bglt) (BgL_otype4461z00_3694),
					(BgL_typez00_bglt) (BgL_vtype4462z00_3695),
					CBOOL(BgL_unsafe4463z00_3696),
					(BgL_approxz00_bglt) (BgL_approx4451z00_3697),
					CBOOL(BgL_tvectorzf34452zf3_3698)));
		}
	}



/* fill-vset!/Cinfo! */
	BGL_EXPORTED_DEF BgL_vsetz12zf2cinfoze0_bglt
		BGl_fillzd2vsetz12zf2Cinfoz12z20zzcfa_info3z00(BgL_vsetz12zf2cinfoze0_bglt
		BgL_new4468z00_131, BgL_approxz00_bglt BgL_approx4466z00_132,
		bool_t BgL_tvectorzf34467zf3_133)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			{	/* Cfa/cinfo3.scm 36 */
				BgL_approxz00_bglt BgL_approx4466z00_3974;

				bool_t BgL_tvectorzf34467zf3_3975;

				BgL_approx4466z00_3974 = BgL_approx4466z00_132;
				BgL_tvectorzf34467zf3_3975 = BgL_tvectorzf34467zf3_133;
				((((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_new4468z00_131))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4466z00_3974), BUNSPEC);
				((((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_new4468z00_131))->
						BgL_tvectorzf3zf3) =
					((bool_t) BgL_tvectorzf34467zf3_3975), BUNSPEC);
				return BgL_new4468z00_131;
			}
		}
	}



/* _fill-vset!/Cinfo! */
	obj_t BGl__fillzd2vsetz12zf2Cinfoz12z20zzcfa_info3z00(obj_t BgL_envz00_3699,
		obj_t BgL_new4468z00_3700, obj_t BgL_approx4466z00_3701,
		obj_t BgL_tvectorzf34467zf3_3702)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			{	/* Cfa/cinfo3.scm 36 */
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_4571;

				{	/* Cfa/cinfo3.scm 36 */
					BgL_vsetz12zf2cinfoze0_bglt BgL_res5374z00_3981;

					{	/* Cfa/cinfo3.scm 36 */
						BgL_vsetz12zf2cinfoze0_bglt BgL_new4468z00_3976;

						BgL_approxz00_bglt BgL_approx4466z00_3977;

						bool_t BgL_tvectorzf34467zf3_3978;

						BgL_new4468z00_3976 =
							(BgL_vsetz12zf2cinfoze0_bglt) (BgL_new4468z00_3700);
						BgL_approx4466z00_3977 =
							(BgL_approxz00_bglt) (BgL_approx4466z00_3701);
						BgL_tvectorzf34467zf3_3978 = CBOOL(BgL_tvectorzf34467zf3_3702);
						{	/* Cfa/cinfo3.scm 36 */
							BgL_approxz00_bglt BgL_approx4466z00_3979;

							bool_t BgL_tvectorzf34467zf3_3980;

							BgL_approx4466z00_3979 = BgL_approx4466z00_3977;
							BgL_tvectorzf34467zf3_3980 = BgL_tvectorzf34467zf3_3978;
							((((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_new4468z00_3976))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4466z00_3979), BUNSPEC);
							((((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_new4468z00_3976))->
									BgL_tvectorzf3zf3) =
								((bool_t) BgL_tvectorzf34467zf3_3980), BUNSPEC);
							BgL_res5374z00_3981 = BgL_new4468z00_3976;
						}
					}
					BgL_auxz00_4571 = BgL_res5374z00_3981;
				}
				return (obj_t) (BgL_auxz00_4571);
			}
		}
	}



/* %allocate-vset!/Cinfo */
	BGL_EXPORTED_DEF BgL_vsetz12z12_bglt
		BGl_z52allocatezd2vsetz12zf2Cinfoz60zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			{	/* Cfa/cinfo3.scm 36 */
				BgL_vsetz12z12_bglt BgL_new4472z00_3982;

				BgL_new4472z00_3982 =
					((BgL_vsetz12z12_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vsetz12z12_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4472z00_3982),
					BGl_classzd2numzd2zz__objectz00
					(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 36 */
					BgL_objectz00_bglt BgL_auxz00_4582;

					BgL_auxz00_4582 = (BgL_objectz00_bglt) (BgL_new4472z00_3982);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4582, BFALSE);
				}
				return BgL_new4472z00_3982;
			}
		}
	}



/* _%allocate-vset!/Cinfo */
	obj_t BGl__z52allocatezd2vsetz12zf2Cinfoz60zzcfa_info3z00(obj_t
		BgL_envz00_3578)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			{	/* Cfa/cinfo3.scm 36 */
				BgL_vsetz12z12_bglt BgL_auxz00_4585;

				{	/* Cfa/cinfo3.scm 36 */
					BgL_vsetz12z12_bglt BgL_res5375z00_3986;

					{	/* Cfa/cinfo3.scm 36 */
						BgL_vsetz12z12_bglt BgL_new4472z00_3984;

						BgL_new4472z00_3984 =
							((BgL_vsetz12z12_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vsetz12z12_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4472z00_3984),
							BGl_classzd2numzd2zz__objectz00
							(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 36 */
							BgL_objectz00_bglt BgL_auxz00_4590;

							BgL_auxz00_4590 = (BgL_objectz00_bglt) (BgL_new4472z00_3984);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4590, BFALSE);
						}
						BgL_res5375z00_3986 = BgL_new4472z00_3984;
					}
					BgL_auxz00_4585 = BgL_res5375z00_3986;
				}
				return (obj_t) (BgL_auxz00_4585);
			}
		}
	}



/* vset!/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_vsetz12zf2cinfoze0_bglt
		BGl_vsetz12zf2Cinfozd2nilz32zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			if ((BGl_z52thezd2vsetz12zf2Cinfozd2nilzb2zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 36 */
					{	/* Cfa/cinfo3.scm 36 */
						BgL_vsetz12z12_bglt BgL_res5243z00_2542;

						{	/* Cfa/cinfo3.scm 36 */
							BgL_vsetz12z12_bglt BgL_new2728z00_2538;

							BgL_new2728z00_2538 =
								((BgL_vsetz12z12_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vsetz12z12_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2728z00_2538),
								BGl_classzd2numzd2zz__objectz00(BGl_vsetz12z12zzast_nodez00));
							{	/* Cfa/cinfo3.scm 36 */
								BgL_objectz00_bglt BgL_auxz00_4600;

								BgL_auxz00_4600 = (BgL_objectz00_bglt) (BgL_new2728z00_2538);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4600, BFALSE);
							}
							BgL_res5243z00_2542 = BgL_new2728z00_2538;
						}
						BGl_z52thezd2vsetz12zf2Cinfozd2nilzb2zzcfa_info3z00 =
							(obj_t) (BgL_res5243z00_2542);
					}
					{	/* Cfa/cinfo3.scm 36 */
						BgL_typez00_bglt BgL_arg4927z00_1340;

						BgL_typez00_bglt BgL_arg4930z00_1343;

						BgL_typez00_bglt BgL_arg4931z00_1344;

						BgL_typez00_bglt BgL_arg4932z00_1345;

						BgL_arg4927z00_1340 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4930z00_1343 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4931z00_1344 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4932z00_1345 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 36 */
							BgL_vsetz12z12_bglt BgL_res5244z00_2566;

							{	/* Cfa/cinfo3.scm 36 */
								BgL_vsetz12z12_bglt BgL_new2715z00_2543;

								BgL_new2715z00_2543 =
									(BgL_vsetz12z12_bglt)
									(BGl_z52thezd2vsetz12zf2Cinfozd2nilzb2zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 36 */
									obj_t BgL_loc2704z00_2555;

									BgL_typez00_bglt BgL_type2705z00_2556;

									obj_t BgL_sidezd2effectzf32706z21_2557;

									obj_t BgL_key2707z00_2558;

									obj_t BgL_exprza22708za2_2559;

									obj_t BgL_effect2709z00_2560;

									obj_t BgL_czd2format2710zd2_2561;

									BgL_typez00_bglt BgL_ftype2711z00_2562;

									BgL_typez00_bglt BgL_otype2712z00_2563;

									BgL_typez00_bglt BgL_vtype2713z00_2564;

									bool_t BgL_unsafe2714z00_2565;

									BgL_loc2704z00_2555 = BUNSPEC;
									BgL_type2705z00_2556 = BgL_arg4927z00_1340;
									BgL_sidezd2effectzf32706z21_2557 = BUNSPEC;
									BgL_key2707z00_2558 = BUNSPEC;
									BgL_exprza22708za2_2559 = BNIL;
									BgL_effect2709z00_2560 = BUNSPEC;
									BgL_czd2format2710zd2_2561 = BGl_string5335z00zzcfa_info3z00;
									BgL_ftype2711z00_2562 = BgL_arg4930z00_1343;
									BgL_otype2712z00_2563 = BgL_arg4931z00_1344;
									BgL_vtype2713z00_2564 = BgL_arg4932z00_1345;
									BgL_unsafe2714z00_2565 = ((bool_t) 0);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_locz00) = ((obj_t) BgL_loc2704z00_2555), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2705z00_2556), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32706z21_2557), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_keyz00) = ((obj_t) BgL_key2707z00_2558), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22708za2_2559), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_effectz00) =
										((obj_t) BgL_effect2709z00_2560), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_czd2formatzd2) =
										((obj_t) BgL_czd2format2710zd2_2561), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2711z00_2562), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2712z00_2563), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype2713z00_2564), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new2715z00_2543))->
											BgL_unsafez00) =
										((bool_t) BgL_unsafe2714z00_2565), BUNSPEC);
									BgL_res5244z00_2566 = BgL_new2715z00_2543;
							}} BgL_res5244z00_2566;
					}}
					{	/* Cfa/cinfo3.scm 36 */
						long BgL_arg4933z00_1346;

						BgL_arg4933z00_1346 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2vsetz12zf2Cinfozd2nilzb2zzcfa_info3z00),
							BgL_arg4933z00_1346);
					}
					{	/* Cfa/cinfo3.scm 36 */
						BgL_vsetz12zf2cinfoze0_bglt BgL_arg4934z00_1347;

						{	/* Cfa/cinfo3.scm 36 */
							BgL_approxz00_bglt BgL_arg4935z00_1348;

							BgL_arg4935z00_1348 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 36 */
								BgL_vsetz12zf2cinfoze0_bglt BgL_res5246z00_2578;

								{	/* Cfa/cinfo3.scm 36 */
									BgL_vsetz12zf2cinfoze0_bglt BgL_new4449z00_2571;

									BgL_new4449z00_2571 =
										((BgL_vsetz12zf2cinfoze0_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_vsetz12zf2cinfoze0_bgl))));
									{	/* Cfa/cinfo3.scm 36 */
										BgL_vsetz12zf2cinfoze0_bglt BgL_res5245z00_2577;

										{	/* Cfa/cinfo3.scm 36 */
											BgL_vsetz12zf2cinfoze0_bglt BgL_new4468z00_2572;

											BgL_new4468z00_2572 = BgL_new4449z00_2571;
											{	/* Cfa/cinfo3.scm 36 */
												BgL_approxz00_bglt BgL_approx4466z00_2575;

												bool_t BgL_tvectorzf34467zf3_2576;

												BgL_approx4466z00_2575 = BgL_arg4935z00_1348;
												BgL_tvectorzf34467zf3_2576 = ((bool_t) 0);
												((((BgL_vsetz12zf2cinfoze0_bglt)
															CREF(BgL_new4468z00_2572))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4466z00_2575),
													BUNSPEC);
												((((BgL_vsetz12zf2cinfoze0_bglt)
															CREF(BgL_new4468z00_2572))->BgL_tvectorzf3zf3) =
													((bool_t) BgL_tvectorzf34467zf3_2576), BUNSPEC);
												BgL_res5245z00_2577 = BgL_new4468z00_2572;
										}} BgL_res5245z00_2577;
									}
									BgL_res5246z00_2578 = BgL_new4449z00_2571;
								}
								BgL_arg4934z00_1347 = BgL_res5246z00_2578;
						}}
						{	/* Cfa/cinfo3.scm 36 */
							obj_t BgL_auxz00_4629;

							BgL_objectz00_bglt BgL_auxz00_4627;

							BgL_auxz00_4629 = (obj_t) (BgL_arg4934z00_1347);
							BgL_auxz00_4627 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2vsetz12zf2Cinfozd2nilzb2zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4627, BgL_auxz00_4629);
				}}}
			else
				{	/* Cfa/cinfo3.scm 36 */
					BFALSE;
				}
			return
				(BgL_vsetz12zf2cinfoze0_bglt)
				(BGl_z52thezd2vsetz12zf2Cinfozd2nilzb2zzcfa_info3z00);
		}
	}



/* _vset!/Cinfo-nil */
	obj_t BGl__vsetz12zf2Cinfozd2nilz32zzcfa_info3z00(obj_t BgL_envz00_3579)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			return (obj_t) (BGl_vsetz12zf2Cinfozd2nilz32zzcfa_info3z00());
		}
	}



/* vref/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_vrefzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_obj4416z00_138)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4416z00_138,
				BGl_vrefzf2Cinfozf2zzcfa_info3z00);
		}
	}



/* _vref/Cinfo? */
	obj_t BGl__vrefzf2Cinfozf3z01zzcfa_info3z00(obj_t BgL_envz00_3576,
		obj_t BgL_obj4416z00_3577)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4416z00_3577,
					BGl_vrefzf2Cinfozf2zzcfa_info3z00));
		}
	}



/* widening-vref/Cinfo */
	BGL_EXPORTED_DEF BgL_vrefzf2cinfozf2_bglt
		BGl_wideningzd2vrefzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4384z00_142, bool_t BgL_tvectorzf34385zf3_143)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			{	/* Cfa/cinfo3.scm 33 */
				BgL_vrefzf2cinfozf2_bglt BgL_new4386z00_2579;

				BgL_new4386z00_2579 =
					((BgL_vrefzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vrefzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 33 */
					BgL_vrefzf2cinfozf2_bglt BgL_res5247z00_2585;

					{	/* Cfa/cinfo3.scm 33 */
						BgL_vrefzf2cinfozf2_bglt BgL_new4405z00_2580;

						BgL_new4405z00_2580 = BgL_new4386z00_2579;
						{	/* Cfa/cinfo3.scm 33 */
							BgL_approxz00_bglt BgL_approx4403z00_2583;

							bool_t BgL_tvectorzf34404zf3_2584;

							BgL_approx4403z00_2583 = BgL_approx4384z00_142;
							BgL_tvectorzf34404zf3_2584 = BgL_tvectorzf34385zf3_143;
							((((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_new4405z00_2580))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4403z00_2583), BUNSPEC);
							((((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_new4405z00_2580))->
									BgL_tvectorzf3zf3) =
								((bool_t) BgL_tvectorzf34404zf3_2584), BUNSPEC);
							BgL_res5247z00_2585 = BgL_new4405z00_2580;
					}} BgL_res5247z00_2585;
				}
				return BgL_new4386z00_2579;
			}
		}
	}



/* _widening-vref/Cinfo */
	obj_t BGl__wideningzd2vrefzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3703,
		obj_t BgL_approx4384z00_3704, obj_t BgL_tvectorzf34385zf3_3705)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			return
				(obj_t) (BGl_wideningzd2vrefzf2Cinfoz20zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4384z00_3704),
					CBOOL(BgL_tvectorzf34385zf3_3705)));
		}
	}



/* make-vref/Cinfo */
	BGL_EXPORTED_DEF BgL_vrefzf2cinfozf2_bglt
		BGl_makezd2vrefzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc4390z00_144,
		BgL_typez00_bglt BgL_type4391z00_145, obj_t BgL_sidezd2effectzf34392z21_146,
		obj_t BgL_key4393z00_147, obj_t BgL_exprza24394za2_148,
		obj_t BgL_effect4395z00_149, obj_t BgL_czd2format4396zd2_150,
		BgL_typez00_bglt BgL_ftype4397z00_151,
		BgL_typez00_bglt BgL_otype4398z00_152,
		BgL_typez00_bglt BgL_vtype4399z00_153, bool_t BgL_unsafe4400z00_154,
		BgL_approxz00_bglt BgL_approx4388z00_155, bool_t BgL_tvectorzf34389zf3_156)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			{	/* Cfa/cinfo3.scm 33 */
				BgL_vrefz00_bglt BgL_aux4401z00_2586;

				BgL_aux4401z00_2586 =
					BGl_makezd2vrefzd2zzast_nodez00(BgL_loc4390z00_144,
					BgL_type4391z00_145, BgL_sidezd2effectzf34392z21_146,
					BgL_key4393z00_147, BgL_exprza24394za2_148, BgL_effect4395z00_149,
					BgL_czd2format4396zd2_150, BgL_ftype4397z00_151, BgL_otype4398z00_152,
					BgL_vtype4399z00_153, BgL_unsafe4400z00_154);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4401z00_2586),
					BGl_classzd2numzd2zz__objectz00(BGl_vrefzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 33 */
					BgL_vrefzf2cinfozf2_bglt BgL_arg4937z00_2588;

					{	/* Cfa/cinfo3.scm 33 */
						BgL_vrefzf2cinfozf2_bglt BgL_res5249z00_2601;

						{	/* Cfa/cinfo3.scm 33 */
							BgL_vrefzf2cinfozf2_bglt BgL_new4386z00_2594;

							BgL_new4386z00_2594 =
								((BgL_vrefzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vrefzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo3.scm 33 */
								BgL_vrefzf2cinfozf2_bglt BgL_res5248z00_2600;

								{	/* Cfa/cinfo3.scm 33 */
									BgL_vrefzf2cinfozf2_bglt BgL_new4405z00_2595;

									BgL_new4405z00_2595 = BgL_new4386z00_2594;
									{	/* Cfa/cinfo3.scm 33 */
										BgL_approxz00_bglt BgL_approx4403z00_2598;

										bool_t BgL_tvectorzf34404zf3_2599;

										BgL_approx4403z00_2598 = BgL_approx4388z00_155;
										BgL_tvectorzf34404zf3_2599 = BgL_tvectorzf34389zf3_156;
										((((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_new4405z00_2595))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4403z00_2598), BUNSPEC);
										((((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_new4405z00_2595))->
												BgL_tvectorzf3zf3) =
											((bool_t) BgL_tvectorzf34404zf3_2599), BUNSPEC);
										BgL_res5248z00_2600 = BgL_new4405z00_2595;
								}} BgL_res5248z00_2600;
							}
							BgL_res5249z00_2601 = BgL_new4386z00_2594;
						}
						BgL_arg4937z00_2588 = BgL_res5249z00_2601;
					}
					{	/* Cfa/cinfo3.scm 33 */
						obj_t BgL_auxz00_4654;

						BgL_objectz00_bglt BgL_auxz00_4652;

						BgL_auxz00_4654 = (obj_t) (BgL_arg4937z00_2588);
						BgL_auxz00_4652 = (BgL_objectz00_bglt) (BgL_aux4401z00_2586);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4652, BgL_auxz00_4654);
				}}
				return
					((BgL_vrefzf2cinfozf2_bglt)
					(BgL_vrefzf2cinfozf2_bglt) (BgL_aux4401z00_2586));
			}
		}
	}



/* _make-vref/Cinfo */
	obj_t BGl__makezd2vrefzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3706,
		obj_t BgL_loc4390z00_3707, obj_t BgL_type4391z00_3708,
		obj_t BgL_sidezd2effectzf34392z21_3709, obj_t BgL_key4393z00_3710,
		obj_t BgL_exprza24394za2_3711, obj_t BgL_effect4395z00_3712,
		obj_t BgL_czd2format4396zd2_3713, obj_t BgL_ftype4397z00_3714,
		obj_t BgL_otype4398z00_3715, obj_t BgL_vtype4399z00_3716,
		obj_t BgL_unsafe4400z00_3717, obj_t BgL_approx4388z00_3718,
		obj_t BgL_tvectorzf34389zf3_3719)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			return
				(obj_t) (BGl_makezd2vrefzf2Cinfoz20zzcfa_info3z00(BgL_loc4390z00_3707,
					(BgL_typez00_bglt) (BgL_type4391z00_3708),
					BgL_sidezd2effectzf34392z21_3709, BgL_key4393z00_3710,
					BgL_exprza24394za2_3711, BgL_effect4395z00_3712,
					BgL_czd2format4396zd2_3713,
					(BgL_typez00_bglt) (BgL_ftype4397z00_3714),
					(BgL_typez00_bglt) (BgL_otype4398z00_3715),
					(BgL_typez00_bglt) (BgL_vtype4399z00_3716),
					CBOOL(BgL_unsafe4400z00_3717),
					(BgL_approxz00_bglt) (BgL_approx4388z00_3718),
					CBOOL(BgL_tvectorzf34389zf3_3719)));
		}
	}



/* fill-vref/Cinfo! */
	BGL_EXPORTED_DEF BgL_vrefzf2cinfozf2_bglt
		BGl_fillzd2vrefzf2Cinfoz12z32zzcfa_info3z00(BgL_vrefzf2cinfozf2_bglt
		BgL_new4405z00_157, BgL_approxz00_bglt BgL_approx4403z00_158,
		bool_t BgL_tvectorzf34404zf3_159)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			{	/* Cfa/cinfo3.scm 33 */
				BgL_approxz00_bglt BgL_approx4403z00_3988;

				bool_t BgL_tvectorzf34404zf3_3989;

				BgL_approx4403z00_3988 = BgL_approx4403z00_158;
				BgL_tvectorzf34404zf3_3989 = BgL_tvectorzf34404zf3_159;
				((((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_new4405z00_157))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4403z00_3988), BUNSPEC);
				((((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_new4405z00_157))->
						BgL_tvectorzf3zf3) =
					((bool_t) BgL_tvectorzf34404zf3_3989), BUNSPEC);
				return BgL_new4405z00_157;
			}
		}
	}



/* _fill-vref/Cinfo! */
	obj_t BGl__fillzd2vrefzf2Cinfoz12z32zzcfa_info3z00(obj_t BgL_envz00_3720,
		obj_t BgL_new4405z00_3721, obj_t BgL_approx4403z00_3722,
		obj_t BgL_tvectorzf34404zf3_3723)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			{	/* Cfa/cinfo3.scm 33 */
				BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4670;

				{	/* Cfa/cinfo3.scm 33 */
					BgL_vrefzf2cinfozf2_bglt BgL_res5376z00_3995;

					{	/* Cfa/cinfo3.scm 33 */
						BgL_vrefzf2cinfozf2_bglt BgL_new4405z00_3990;

						BgL_approxz00_bglt BgL_approx4403z00_3991;

						bool_t BgL_tvectorzf34404zf3_3992;

						BgL_new4405z00_3990 =
							(BgL_vrefzf2cinfozf2_bglt) (BgL_new4405z00_3721);
						BgL_approx4403z00_3991 =
							(BgL_approxz00_bglt) (BgL_approx4403z00_3722);
						BgL_tvectorzf34404zf3_3992 = CBOOL(BgL_tvectorzf34404zf3_3723);
						{	/* Cfa/cinfo3.scm 33 */
							BgL_approxz00_bglt BgL_approx4403z00_3993;

							bool_t BgL_tvectorzf34404zf3_3994;

							BgL_approx4403z00_3993 = BgL_approx4403z00_3991;
							BgL_tvectorzf34404zf3_3994 = BgL_tvectorzf34404zf3_3992;
							((((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_new4405z00_3990))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4403z00_3993), BUNSPEC);
							((((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_new4405z00_3990))->
									BgL_tvectorzf3zf3) =
								((bool_t) BgL_tvectorzf34404zf3_3994), BUNSPEC);
							BgL_res5376z00_3995 = BgL_new4405z00_3990;
						}
					}
					BgL_auxz00_4670 = BgL_res5376z00_3995;
				}
				return (obj_t) (BgL_auxz00_4670);
			}
		}
	}



/* %allocate-vref/Cinfo */
	BGL_EXPORTED_DEF BgL_vrefz00_bglt
		BGl_z52allocatezd2vrefzf2Cinfoz72zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			{	/* Cfa/cinfo3.scm 33 */
				BgL_vrefz00_bglt BgL_new4409z00_3996;

				BgL_new4409z00_3996 =
					((BgL_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_vrefz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4409z00_3996),
					BGl_classzd2numzd2zz__objectz00(BGl_vrefzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 33 */
					BgL_objectz00_bglt BgL_auxz00_4681;

					BgL_auxz00_4681 = (BgL_objectz00_bglt) (BgL_new4409z00_3996);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4681, BFALSE);
				}
				return BgL_new4409z00_3996;
			}
		}
	}



/* _%allocate-vref/Cinfo */
	obj_t BGl__z52allocatezd2vrefzf2Cinfoz72zzcfa_info3z00(obj_t BgL_envz00_3574)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			{	/* Cfa/cinfo3.scm 33 */
				BgL_vrefz00_bglt BgL_auxz00_4684;

				{	/* Cfa/cinfo3.scm 33 */
					BgL_vrefz00_bglt BgL_res5377z00_4000;

					{	/* Cfa/cinfo3.scm 33 */
						BgL_vrefz00_bglt BgL_new4409z00_3998;

						BgL_new4409z00_3998 =
							((BgL_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4409z00_3998),
							BGl_classzd2numzd2zz__objectz00
							(BGl_vrefzf2Cinfozf2zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 33 */
							BgL_objectz00_bglt BgL_auxz00_4689;

							BgL_auxz00_4689 = (BgL_objectz00_bglt) (BgL_new4409z00_3998);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4689, BFALSE);
						}
						BgL_res5377z00_4000 = BgL_new4409z00_3998;
					}
					BgL_auxz00_4684 = BgL_res5377z00_4000;
				}
				return (obj_t) (BgL_auxz00_4684);
			}
		}
	}



/* vref/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_vrefzf2cinfozf2_bglt
		BGl_vrefzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			if ((BGl_z52thezd2vrefzf2Cinfozd2nilza0zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 33 */
					{	/* Cfa/cinfo3.scm 33 */
						BgL_vrefz00_bglt BgL_res5250z00_2612;

						{	/* Cfa/cinfo3.scm 33 */
							BgL_vrefz00_bglt BgL_new2668z00_2608;

							BgL_new2668z00_2608 =
								((BgL_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vrefz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2668z00_2608),
								BGl_classzd2numzd2zz__objectz00(BGl_vrefz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 33 */
								BgL_objectz00_bglt BgL_auxz00_4699;

								BgL_auxz00_4699 = (BgL_objectz00_bglt) (BgL_new2668z00_2608);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4699, BFALSE);
							}
							BgL_res5250z00_2612 = BgL_new2668z00_2608;
						}
						BGl_z52thezd2vrefzf2Cinfozd2nilza0zzcfa_info3z00 =
							(obj_t) (BgL_res5250z00_2612);
					}
					{	/* Cfa/cinfo3.scm 33 */
						BgL_typez00_bglt BgL_arg4940z00_1359;

						BgL_typez00_bglt BgL_arg4943z00_1362;

						BgL_typez00_bglt BgL_arg4944z00_1363;

						BgL_typez00_bglt BgL_arg4945z00_1364;

						BgL_arg4940z00_1359 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4943z00_1362 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4944z00_1363 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4945z00_1364 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 33 */
							BgL_vrefz00_bglt BgL_res5251z00_2636;

							{	/* Cfa/cinfo3.scm 33 */
								BgL_vrefz00_bglt BgL_new2655z00_2613;

								BgL_new2655z00_2613 =
									(BgL_vrefz00_bglt)
									(BGl_z52thezd2vrefzf2Cinfozd2nilza0zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 33 */
									obj_t BgL_loc2644z00_2625;

									BgL_typez00_bglt BgL_type2645z00_2626;

									obj_t BgL_sidezd2effectzf32646z21_2627;

									obj_t BgL_key2647z00_2628;

									obj_t BgL_exprza22648za2_2629;

									obj_t BgL_effect2649z00_2630;

									obj_t BgL_czd2format2650zd2_2631;

									BgL_typez00_bglt BgL_ftype2651z00_2632;

									BgL_typez00_bglt BgL_otype2652z00_2633;

									BgL_typez00_bglt BgL_vtype2653z00_2634;

									bool_t BgL_unsafe2654z00_2635;

									BgL_loc2644z00_2625 = BUNSPEC;
									BgL_type2645z00_2626 = BgL_arg4940z00_1359;
									BgL_sidezd2effectzf32646z21_2627 = BUNSPEC;
									BgL_key2647z00_2628 = BUNSPEC;
									BgL_exprza22648za2_2629 = BNIL;
									BgL_effect2649z00_2630 = BUNSPEC;
									BgL_czd2format2650zd2_2631 = BGl_string5335z00zzcfa_info3z00;
									BgL_ftype2651z00_2632 = BgL_arg4943z00_1362;
									BgL_otype2652z00_2633 = BgL_arg4944z00_1363;
									BgL_vtype2653z00_2634 = BgL_arg4945z00_1364;
									BgL_unsafe2654z00_2635 = ((bool_t) 0);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_locz00) = ((obj_t) BgL_loc2644z00_2625), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2645z00_2626), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32646z21_2627), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_keyz00) = ((obj_t) BgL_key2647z00_2628), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22648za2_2629), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_effectz00) =
										((obj_t) BgL_effect2649z00_2630), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_czd2formatzd2) =
										((obj_t) BgL_czd2format2650zd2_2631), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2651z00_2632), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2652z00_2633), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype2653z00_2634), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new2655z00_2613))->
											BgL_unsafez00) =
										((bool_t) BgL_unsafe2654z00_2635), BUNSPEC);
									BgL_res5251z00_2636 = BgL_new2655z00_2613;
							}} BgL_res5251z00_2636;
					}}
					{	/* Cfa/cinfo3.scm 33 */
						long BgL_arg4946z00_1365;

						BgL_arg4946z00_1365 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_vrefzf2Cinfozf2zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2vrefzf2Cinfozd2nilza0zzcfa_info3z00),
							BgL_arg4946z00_1365);
					}
					{	/* Cfa/cinfo3.scm 33 */
						BgL_vrefzf2cinfozf2_bglt BgL_arg4947z00_1366;

						{	/* Cfa/cinfo3.scm 33 */
							BgL_approxz00_bglt BgL_arg4948z00_1367;

							BgL_arg4948z00_1367 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 33 */
								BgL_vrefzf2cinfozf2_bglt BgL_res5253z00_2648;

								{	/* Cfa/cinfo3.scm 33 */
									BgL_vrefzf2cinfozf2_bglt BgL_new4386z00_2641;

									BgL_new4386z00_2641 =
										((BgL_vrefzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_vrefzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo3.scm 33 */
										BgL_vrefzf2cinfozf2_bglt BgL_res5252z00_2647;

										{	/* Cfa/cinfo3.scm 33 */
											BgL_vrefzf2cinfozf2_bglt BgL_new4405z00_2642;

											BgL_new4405z00_2642 = BgL_new4386z00_2641;
											{	/* Cfa/cinfo3.scm 33 */
												BgL_approxz00_bglt BgL_approx4403z00_2645;

												bool_t BgL_tvectorzf34404zf3_2646;

												BgL_approx4403z00_2645 = BgL_arg4948z00_1367;
												BgL_tvectorzf34404zf3_2646 = ((bool_t) 0);
												((((BgL_vrefzf2cinfozf2_bglt)
															CREF(BgL_new4405z00_2642))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4403z00_2645),
													BUNSPEC);
												((((BgL_vrefzf2cinfozf2_bglt)
															CREF(BgL_new4405z00_2642))->BgL_tvectorzf3zf3) =
													((bool_t) BgL_tvectorzf34404zf3_2646), BUNSPEC);
												BgL_res5252z00_2647 = BgL_new4405z00_2642;
										}} BgL_res5252z00_2647;
									}
									BgL_res5253z00_2648 = BgL_new4386z00_2641;
								}
								BgL_arg4947z00_1366 = BgL_res5253z00_2648;
						}}
						{	/* Cfa/cinfo3.scm 33 */
							obj_t BgL_auxz00_4728;

							BgL_objectz00_bglt BgL_auxz00_4726;

							BgL_auxz00_4728 = (obj_t) (BgL_arg4947z00_1366);
							BgL_auxz00_4726 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2vrefzf2Cinfozd2nilza0zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4726, BgL_auxz00_4728);
				}}}
			else
				{	/* Cfa/cinfo3.scm 33 */
					BFALSE;
				}
			return
				(BgL_vrefzf2cinfozf2_bglt)
				(BGl_z52thezd2vrefzf2Cinfozd2nilza0zzcfa_info3z00);
		}
	}



/* _vref/Cinfo-nil */
	obj_t BGl__vrefzf2Cinfozd2nilz20zzcfa_info3z00(obj_t BgL_envz00_3575)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			return (obj_t) (BGl_vrefzf2Cinfozd2nilz20zzcfa_info3z00());
		}
	}



/* cast-null/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_castzd2nullzf2Cinfozf3zd3zzcfa_info3z00(obj_t
		BgL_obj4364z00_164)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4364z00_164,
				BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
		}
	}



/* _cast-null/Cinfo? */
	obj_t BGl__castzd2nullzf2Cinfozf3zd3zzcfa_info3z00(obj_t BgL_envz00_3572,
		obj_t BgL_obj4364z00_3573)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4364z00_3573,
					BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00));
		}
	}



/* widening-cast-null/Cinfo */
	BGL_EXPORTED_DEF BgL_castzd2nullzf2cinfoz20_bglt
		BGl_wideningzd2castzd2nullzf2Cinfozf2zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4341z00_168)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				BgL_castzd2nullzf2cinfoz20_bglt BgL_new4342z00_2649;

				BgL_new4342z00_2649 =
					((BgL_castzd2nullzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_castzd2nullzf2cinfoz20_bgl))));
				{	/* Cfa/cinfo3.scm 30 */
					BgL_castzd2nullzf2cinfoz20_bglt BgL_res5254z00_2653;

					{	/* Cfa/cinfo3.scm 30 */
						BgL_castzd2nullzf2cinfoz20_bglt BgL_new4354z00_2650;

						BgL_new4354z00_2650 = BgL_new4342z00_2649;
						{	/* Cfa/cinfo3.scm 30 */
							BgL_approxz00_bglt BgL_approx4353z00_2652;

							BgL_approx4353z00_2652 = BgL_approx4341z00_168;
							((((BgL_castzd2nullzf2cinfoz20_bglt) CREF(BgL_new4354z00_2650))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4353z00_2652), BUNSPEC);
							BgL_res5254z00_2653 = BgL_new4354z00_2650;
					}} BgL_res5254z00_2653;
				}
				return BgL_new4342z00_2649;
			}
		}
	}



/* _widening-cast-null/Cinfo */
	obj_t BGl__wideningzd2castzd2nullzf2Cinfozf2zzcfa_info3z00(obj_t
		BgL_envz00_3724, obj_t BgL_approx4341z00_3725)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			return
				(obj_t) (BGl_wideningzd2castzd2nullzf2Cinfozf2zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4341z00_3725)));
		}
	}



/* make-cast-null/Cinfo */
	BGL_EXPORTED_DEF BgL_castzd2nullzf2cinfoz20_bglt
		BGl_makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00(obj_t BgL_loc4345z00_169,
		BgL_typez00_bglt BgL_type4346z00_170, obj_t BgL_sidezd2effectzf34347z21_171,
		obj_t BgL_key4348z00_172, obj_t BgL_exprza24349za2_173,
		obj_t BgL_effect4350z00_174, BgL_approxz00_bglt BgL_approx4344z00_175)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				BgL_castzd2nullzd2_bglt BgL_aux4351z00_2654;

				BgL_aux4351z00_2654 =
					BGl_makezd2castzd2nullz00zzast_nodez00(BgL_loc4345z00_169,
					BgL_type4346z00_170, BgL_sidezd2effectzf34347z21_171,
					BgL_key4348z00_172, BgL_exprza24349za2_173, BgL_effect4350z00_174);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4351z00_2654),
					BGl_classzd2numzd2zz__objectz00
					(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 30 */
					BgL_castzd2nullzf2cinfoz20_bglt BgL_arg4950z00_2656;

					{	/* Cfa/cinfo3.scm 30 */
						BgL_castzd2nullzf2cinfoz20_bglt BgL_res5256z00_2666;

						{	/* Cfa/cinfo3.scm 30 */
							BgL_castzd2nullzf2cinfoz20_bglt BgL_new4342z00_2661;

							BgL_new4342z00_2661 =
								((BgL_castzd2nullzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_castzd2nullzf2cinfoz20_bgl))));
							{	/* Cfa/cinfo3.scm 30 */
								BgL_castzd2nullzf2cinfoz20_bglt BgL_res5255z00_2665;

								{	/* Cfa/cinfo3.scm 30 */
									BgL_castzd2nullzf2cinfoz20_bglt BgL_new4354z00_2662;

									BgL_new4354z00_2662 = BgL_new4342z00_2661;
									{	/* Cfa/cinfo3.scm 30 */
										BgL_approxz00_bglt BgL_approx4353z00_2664;

										BgL_approx4353z00_2664 = BgL_approx4344z00_175;
										((((BgL_castzd2nullzf2cinfoz20_bglt)
													CREF(BgL_new4354z00_2662))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4353z00_2664), BUNSPEC);
										BgL_res5255z00_2665 = BgL_new4354z00_2662;
								}} BgL_res5255z00_2665;
							}
							BgL_res5256z00_2666 = BgL_new4342z00_2661;
						}
						BgL_arg4950z00_2656 = BgL_res5256z00_2666;
					}
					{	/* Cfa/cinfo3.scm 30 */
						obj_t BgL_auxz00_4750;

						BgL_objectz00_bglt BgL_auxz00_4748;

						BgL_auxz00_4750 = (obj_t) (BgL_arg4950z00_2656);
						BgL_auxz00_4748 = (BgL_objectz00_bglt) (BgL_aux4351z00_2654);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4748, BgL_auxz00_4750);
				}}
				return
					((BgL_castzd2nullzf2cinfoz20_bglt)
					(BgL_castzd2nullzf2cinfoz20_bglt) (BgL_aux4351z00_2654));
			}
		}
	}



/* _make-cast-null/Cinfo */
	obj_t BGl__makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00(obj_t BgL_envz00_3726,
		obj_t BgL_loc4345z00_3727, obj_t BgL_type4346z00_3728,
		obj_t BgL_sidezd2effectzf34347z21_3729, obj_t BgL_key4348z00_3730,
		obj_t BgL_exprza24349za2_3731, obj_t BgL_effect4350z00_3732,
		obj_t BgL_approx4344z00_3733)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			return
				(obj_t) (BGl_makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00
				(BgL_loc4345z00_3727, (BgL_typez00_bglt) (BgL_type4346z00_3728),
					BgL_sidezd2effectzf34347z21_3729, BgL_key4348z00_3730,
					BgL_exprza24349za2_3731, BgL_effect4350z00_3732,
					(BgL_approxz00_bglt) (BgL_approx4344z00_3733)));
		}
	}



/* fill-cast-null/Cinfo! */
	BGL_EXPORTED_DEF BgL_castzd2nullzf2cinfoz20_bglt
		BGl_fillzd2castzd2nullzf2Cinfoz12ze0zzcfa_info3z00
		(BgL_castzd2nullzf2cinfoz20_bglt BgL_new4354z00_176,
		BgL_approxz00_bglt BgL_approx4353z00_177)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				BgL_approxz00_bglt BgL_approx4353z00_4002;

				BgL_approx4353z00_4002 = BgL_approx4353z00_177;
				((((BgL_castzd2nullzf2cinfoz20_bglt) CREF(BgL_new4354z00_176))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4353z00_4002), BUNSPEC);
				return BgL_new4354z00_176;
			}
		}
	}



/* _fill-cast-null/Cinfo! */
	obj_t BGl__fillzd2castzd2nullzf2Cinfoz12ze0zzcfa_info3z00(obj_t
		BgL_envz00_3734, obj_t BgL_new4354z00_3735, obj_t BgL_approx4353z00_3736)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_4760;

				{	/* Cfa/cinfo3.scm 30 */
					BgL_castzd2nullzf2cinfoz20_bglt BgL_res5378z00_4006;

					{	/* Cfa/cinfo3.scm 30 */
						BgL_castzd2nullzf2cinfoz20_bglt BgL_new4354z00_4003;

						BgL_approxz00_bglt BgL_approx4353z00_4004;

						BgL_new4354z00_4003 =
							(BgL_castzd2nullzf2cinfoz20_bglt) (BgL_new4354z00_3735);
						BgL_approx4353z00_4004 =
							(BgL_approxz00_bglt) (BgL_approx4353z00_3736);
						{	/* Cfa/cinfo3.scm 30 */
							BgL_approxz00_bglt BgL_approx4353z00_4005;

							BgL_approx4353z00_4005 = BgL_approx4353z00_4004;
							((((BgL_castzd2nullzf2cinfoz20_bglt) CREF(BgL_new4354z00_4003))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4353z00_4005), BUNSPEC);
							BgL_res5378z00_4006 = BgL_new4354z00_4003;
						}
					}
					BgL_auxz00_4760 = BgL_res5378z00_4006;
				}
				return (obj_t) (BgL_auxz00_4760);
			}
		}
	}



/* %allocate-cast-null/Cinfo */
	BGL_EXPORTED_DEF BgL_castzd2nullzd2_bglt
		BGl_z52allocatezd2castzd2nullzf2Cinfoza0zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				BgL_castzd2nullzd2_bglt BgL_new4357z00_4007;

				BgL_new4357z00_4007 =
					((BgL_castzd2nullzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_castzd2nullzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4357z00_4007),
					BGl_classzd2numzd2zz__objectz00
					(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 30 */
					BgL_objectz00_bglt BgL_auxz00_4769;

					BgL_auxz00_4769 = (BgL_objectz00_bglt) (BgL_new4357z00_4007);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4769, BFALSE);
				}
				return BgL_new4357z00_4007;
			}
		}
	}



/* _%allocate-cast-null/Cinfo */
	obj_t BGl__z52allocatezd2castzd2nullzf2Cinfoza0zzcfa_info3z00(obj_t
		BgL_envz00_3570)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				BgL_castzd2nullzd2_bglt BgL_auxz00_4772;

				{	/* Cfa/cinfo3.scm 30 */
					BgL_castzd2nullzd2_bglt BgL_res5379z00_4011;

					{	/* Cfa/cinfo3.scm 30 */
						BgL_castzd2nullzd2_bglt BgL_new4357z00_4009;

						BgL_new4357z00_4009 =
							((BgL_castzd2nullzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_castzd2nullzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4357z00_4009),
							BGl_classzd2numzd2zz__objectz00
							(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_4777;

							BgL_auxz00_4777 = (BgL_objectz00_bglt) (BgL_new4357z00_4009);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4777, BFALSE);
						}
						BgL_res5379z00_4011 = BgL_new4357z00_4009;
					}
					BgL_auxz00_4772 = BgL_res5379z00_4011;
				}
				return (obj_t) (BgL_auxz00_4772);
			}
		}
	}



/* cast-null/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_castzd2nullzf2cinfoz20_bglt
		BGl_castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			if ((BGl_z52thezd2castzd2nullzf2Cinfozd2nilz72zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 30 */
					{	/* Cfa/cinfo3.scm 30 */
						BgL_castzd2nullzd2_bglt BgL_res5257z00_2676;

						{	/* Cfa/cinfo3.scm 30 */
							BgL_castzd2nullzd2_bglt BgL_new2854z00_2672;

							BgL_new2854z00_2672 =
								((BgL_castzd2nullzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_castzd2nullzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2854z00_2672),
								BGl_classzd2numzd2zz__objectz00
								(BGl_castzd2nullzd2zzast_nodez00));
							{	/* Cfa/cinfo3.scm 30 */
								BgL_objectz00_bglt BgL_auxz00_4787;

								BgL_auxz00_4787 = (BgL_objectz00_bglt) (BgL_new2854z00_2672);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4787, BFALSE);
							}
							BgL_res5257z00_2676 = BgL_new2854z00_2672;
						}
						BGl_z52thezd2castzd2nullzf2Cinfozd2nilz72zzcfa_info3z00 =
							(obj_t) (BgL_res5257z00_2676);
					}
					{	/* Cfa/cinfo3.scm 30 */
						BgL_typez00_bglt BgL_arg4953z00_1377;

						BgL_arg4953z00_1377 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 30 */
							BgL_castzd2nullzd2_bglt BgL_res5258z00_2690;

							{	/* Cfa/cinfo3.scm 30 */
								BgL_castzd2nullzd2_bglt BgL_new2846z00_2677;

								BgL_new2846z00_2677 =
									(BgL_castzd2nullzd2_bglt)
									(BGl_z52thezd2castzd2nullzf2Cinfozd2nilz72zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 30 */
									obj_t BgL_loc2840z00_2684;

									BgL_typez00_bglt BgL_type2841z00_2685;

									obj_t BgL_sidezd2effectzf32842z21_2686;

									obj_t BgL_key2843z00_2687;

									obj_t BgL_exprza22844za2_2688;

									obj_t BgL_effect2845z00_2689;

									BgL_loc2840z00_2684 = BUNSPEC;
									BgL_type2841z00_2685 = BgL_arg4953z00_1377;
									BgL_sidezd2effectzf32842z21_2686 = BUNSPEC;
									BgL_key2843z00_2687 = BUNSPEC;
									BgL_exprza22844za2_2688 = BNIL;
									BgL_effect2845z00_2689 = BUNSPEC;
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new2846z00_2677))->
											BgL_locz00) = ((obj_t) BgL_loc2840z00_2684), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new2846z00_2677))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2841z00_2685), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new2846z00_2677))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32842z21_2686), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new2846z00_2677))->
											BgL_keyz00) = ((obj_t) BgL_key2843z00_2687), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new2846z00_2677))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22844za2_2688), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new2846z00_2677))->
											BgL_effectz00) =
										((obj_t) BgL_effect2845z00_2689), BUNSPEC);
									BgL_res5258z00_2690 = BgL_new2846z00_2677;
							}} BgL_res5258z00_2690;
					}}
					{	/* Cfa/cinfo3.scm 30 */
						long BgL_arg4955z00_1379;

						BgL_arg4955z00_1379 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2castzd2nullzf2Cinfozd2nilz72zzcfa_info3z00),
							BgL_arg4955z00_1379);
					}
					{	/* Cfa/cinfo3.scm 30 */
						BgL_castzd2nullzf2cinfoz20_bglt BgL_arg4956z00_1380;

						{	/* Cfa/cinfo3.scm 30 */
							BgL_approxz00_bglt BgL_arg4957z00_1381;

							BgL_arg4957z00_1381 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 30 */
								BgL_castzd2nullzf2cinfoz20_bglt BgL_res5260z00_2699;

								{	/* Cfa/cinfo3.scm 30 */
									BgL_castzd2nullzf2cinfoz20_bglt BgL_new4342z00_2694;

									BgL_new4342z00_2694 =
										((BgL_castzd2nullzf2cinfoz20_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_castzd2nullzf2cinfoz20_bgl))));
									{	/* Cfa/cinfo3.scm 30 */
										BgL_castzd2nullzf2cinfoz20_bglt BgL_res5259z00_2698;

										{	/* Cfa/cinfo3.scm 30 */
											BgL_castzd2nullzf2cinfoz20_bglt BgL_new4354z00_2695;

											BgL_new4354z00_2695 = BgL_new4342z00_2694;
											{	/* Cfa/cinfo3.scm 30 */
												BgL_approxz00_bglt BgL_approx4353z00_2697;

												BgL_approx4353z00_2697 = BgL_arg4957z00_1381;
												((((BgL_castzd2nullzf2cinfoz20_bglt)
															CREF(BgL_new4354z00_2695))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4353z00_2697),
													BUNSPEC);
												BgL_res5259z00_2698 = BgL_new4354z00_2695;
										}} BgL_res5259z00_2698;
									}
									BgL_res5260z00_2699 = BgL_new4342z00_2694;
								}
								BgL_arg4956z00_1380 = BgL_res5260z00_2699;
						}}
						{	/* Cfa/cinfo3.scm 30 */
							obj_t BgL_auxz00_4807;

							BgL_objectz00_bglt BgL_auxz00_4805;

							BgL_auxz00_4807 = (obj_t) (BgL_arg4956z00_1380);
							BgL_auxz00_4805 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2castzd2nullzf2Cinfozd2nilz72zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4805, BgL_auxz00_4807);
				}}}
			else
				{	/* Cfa/cinfo3.scm 30 */
					BFALSE;
				}
			return
				(BgL_castzd2nullzf2cinfoz20_bglt)
				(BGl_z52thezd2castzd2nullzf2Cinfozd2nilz72zzcfa_info3z00);
		}
	}



/* _cast-null/Cinfo-nil */
	obj_t BGl__castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00(obj_t BgL_envz00_3571)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			return (obj_t) (BGl_castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00());
		}
	}



/* isa/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_isazf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_obj4321z00_179)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4321z00_179,
				BGl_isazf2Cinfozf2zzcfa_info3z00);
		}
	}



/* _isa/Cinfo? */
	obj_t BGl__isazf2Cinfozf3z01zzcfa_info3z00(obj_t BgL_envz00_3568,
		obj_t BgL_obj4321z00_3569)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4321z00_3569,
					BGl_isazf2Cinfozf2zzcfa_info3z00));
		}
	}



/* widening-isa/Cinfo */
	BGL_EXPORTED_DEF BgL_isazf2cinfozf2_bglt
		BGl_wideningzd2isazf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4297z00_183)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				BgL_isazf2cinfozf2_bglt BgL_new4298z00_2700;

				BgL_new4298z00_2700 =
					((BgL_isazf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_isazf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 29 */
					BgL_isazf2cinfozf2_bglt BgL_res5261z00_2704;

					{	/* Cfa/cinfo3.scm 29 */
						BgL_isazf2cinfozf2_bglt BgL_new4311z00_2701;

						BgL_new4311z00_2701 = BgL_new4298z00_2700;
						{	/* Cfa/cinfo3.scm 29 */
							BgL_approxz00_bglt BgL_approx4310z00_2703;

							BgL_approx4310z00_2703 = BgL_approx4297z00_183;
							((((BgL_isazf2cinfozf2_bglt) CREF(BgL_new4311z00_2701))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4310z00_2703), BUNSPEC);
							BgL_res5261z00_2704 = BgL_new4311z00_2701;
					}} BgL_res5261z00_2704;
				}
				return BgL_new4298z00_2700;
			}
		}
	}



/* _widening-isa/Cinfo */
	obj_t BGl__wideningzd2isazf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3737,
		obj_t BgL_approx4297z00_3738)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			return
				(obj_t) (BGl_wideningzd2isazf2Cinfoz20zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4297z00_3738)));
		}
	}



/* make-isa/Cinfo */
	BGL_EXPORTED_DEF BgL_isazf2cinfozf2_bglt
		BGl_makezd2isazf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc4301z00_184,
		BgL_typez00_bglt BgL_type4302z00_185, obj_t BgL_sidezd2effectzf34303z21_186,
		obj_t BgL_key4304z00_187, obj_t BgL_exprza24305za2_188,
		obj_t BgL_effect4306z00_189, BgL_typez00_bglt BgL_class4307z00_190,
		BgL_approxz00_bglt BgL_approx4300z00_191)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				BgL_isaz00_bglt BgL_aux4308z00_2705;

				BgL_aux4308z00_2705 =
					BGl_makezd2isazd2zzast_nodez00(BgL_loc4301z00_184,
					BgL_type4302z00_185, BgL_sidezd2effectzf34303z21_186,
					BgL_key4304z00_187, BgL_exprza24305za2_188, BgL_effect4306z00_189,
					BgL_class4307z00_190);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4308z00_2705),
					BGl_classzd2numzd2zz__objectz00(BGl_isazf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 29 */
					BgL_isazf2cinfozf2_bglt BgL_arg4959z00_2707;

					{	/* Cfa/cinfo3.scm 29 */
						BgL_isazf2cinfozf2_bglt BgL_res5263z00_2717;

						{	/* Cfa/cinfo3.scm 29 */
							BgL_isazf2cinfozf2_bglt BgL_new4298z00_2712;

							BgL_new4298z00_2712 =
								((BgL_isazf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_isazf2cinfozf2_bgl))));
							{	/* Cfa/cinfo3.scm 29 */
								BgL_isazf2cinfozf2_bglt BgL_res5262z00_2716;

								{	/* Cfa/cinfo3.scm 29 */
									BgL_isazf2cinfozf2_bglt BgL_new4311z00_2713;

									BgL_new4311z00_2713 = BgL_new4298z00_2712;
									{	/* Cfa/cinfo3.scm 29 */
										BgL_approxz00_bglt BgL_approx4310z00_2715;

										BgL_approx4310z00_2715 = BgL_approx4300z00_191;
										((((BgL_isazf2cinfozf2_bglt) CREF(BgL_new4311z00_2713))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4310z00_2715), BUNSPEC);
										BgL_res5262z00_2716 = BgL_new4311z00_2713;
								}} BgL_res5262z00_2716;
							}
							BgL_res5263z00_2717 = BgL_new4298z00_2712;
						}
						BgL_arg4959z00_2707 = BgL_res5263z00_2717;
					}
					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_auxz00_4829;

						BgL_objectz00_bglt BgL_auxz00_4827;

						BgL_auxz00_4829 = (obj_t) (BgL_arg4959z00_2707);
						BgL_auxz00_4827 = (BgL_objectz00_bglt) (BgL_aux4308z00_2705);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4827, BgL_auxz00_4829);
				}}
				return
					((BgL_isazf2cinfozf2_bglt)
					(BgL_isazf2cinfozf2_bglt) (BgL_aux4308z00_2705));
			}
		}
	}



/* _make-isa/Cinfo */
	obj_t BGl__makezd2isazf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3739,
		obj_t BgL_loc4301z00_3740, obj_t BgL_type4302z00_3741,
		obj_t BgL_sidezd2effectzf34303z21_3742, obj_t BgL_key4304z00_3743,
		obj_t BgL_exprza24305za2_3744, obj_t BgL_effect4306z00_3745,
		obj_t BgL_class4307z00_3746, obj_t BgL_approx4300z00_3747)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			return
				(obj_t) (BGl_makezd2isazf2Cinfoz20zzcfa_info3z00(BgL_loc4301z00_3740,
					(BgL_typez00_bglt) (BgL_type4302z00_3741),
					BgL_sidezd2effectzf34303z21_3742, BgL_key4304z00_3743,
					BgL_exprza24305za2_3744, BgL_effect4306z00_3745,
					(BgL_typez00_bglt) (BgL_class4307z00_3746),
					(BgL_approxz00_bglt) (BgL_approx4300z00_3747)));
		}
	}



/* fill-isa/Cinfo! */
	BGL_EXPORTED_DEF BgL_isazf2cinfozf2_bglt
		BGl_fillzd2isazf2Cinfoz12z32zzcfa_info3z00(BgL_isazf2cinfozf2_bglt
		BgL_new4311z00_192, BgL_approxz00_bglt BgL_approx4310z00_193)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				BgL_approxz00_bglt BgL_approx4310z00_4013;

				BgL_approx4310z00_4013 = BgL_approx4310z00_193;
				((((BgL_isazf2cinfozf2_bglt) CREF(BgL_new4311z00_192))->BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4310z00_4013), BUNSPEC);
				return BgL_new4311z00_192;
			}
		}
	}



/* _fill-isa/Cinfo! */
	obj_t BGl__fillzd2isazf2Cinfoz12z32zzcfa_info3z00(obj_t BgL_envz00_3748,
		obj_t BgL_new4311z00_3749, obj_t BgL_approx4310z00_3750)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				BgL_isazf2cinfozf2_bglt BgL_auxz00_4840;

				{	/* Cfa/cinfo3.scm 29 */
					BgL_isazf2cinfozf2_bglt BgL_res5380z00_4017;

					{	/* Cfa/cinfo3.scm 29 */
						BgL_isazf2cinfozf2_bglt BgL_new4311z00_4014;

						BgL_approxz00_bglt BgL_approx4310z00_4015;

						BgL_new4311z00_4014 =
							(BgL_isazf2cinfozf2_bglt) (BgL_new4311z00_3749);
						BgL_approx4310z00_4015 =
							(BgL_approxz00_bglt) (BgL_approx4310z00_3750);
						{	/* Cfa/cinfo3.scm 29 */
							BgL_approxz00_bglt BgL_approx4310z00_4016;

							BgL_approx4310z00_4016 = BgL_approx4310z00_4015;
							((((BgL_isazf2cinfozf2_bglt) CREF(BgL_new4311z00_4014))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4310z00_4016), BUNSPEC);
							BgL_res5380z00_4017 = BgL_new4311z00_4014;
						}
					}
					BgL_auxz00_4840 = BgL_res5380z00_4017;
				}
				return (obj_t) (BgL_auxz00_4840);
			}
		}
	}



/* %allocate-isa/Cinfo */
	BGL_EXPORTED_DEF BgL_isaz00_bglt
		BGl_z52allocatezd2isazf2Cinfoz72zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				BgL_isaz00_bglt BgL_new4314z00_4018;

				BgL_new4314z00_4018 =
					((BgL_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_isaz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4314z00_4018),
					BGl_classzd2numzd2zz__objectz00(BGl_isazf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 29 */
					BgL_objectz00_bglt BgL_auxz00_4849;

					BgL_auxz00_4849 = (BgL_objectz00_bglt) (BgL_new4314z00_4018);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4849, BFALSE);
				}
				return BgL_new4314z00_4018;
			}
		}
	}



/* _%allocate-isa/Cinfo */
	obj_t BGl__z52allocatezd2isazf2Cinfoz72zzcfa_info3z00(obj_t BgL_envz00_3566)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				BgL_isaz00_bglt BgL_auxz00_4852;

				{	/* Cfa/cinfo3.scm 29 */
					BgL_isaz00_bglt BgL_res5381z00_4022;

					{	/* Cfa/cinfo3.scm 29 */
						BgL_isaz00_bglt BgL_new4314z00_4020;

						BgL_new4314z00_4020 =
							((BgL_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_isaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4314z00_4020),
							BGl_classzd2numzd2zz__objectz00
							(BGl_isazf2Cinfozf2zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 29 */
							BgL_objectz00_bglt BgL_auxz00_4857;

							BgL_auxz00_4857 = (BgL_objectz00_bglt) (BgL_new4314z00_4020);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4857, BFALSE);
						}
						BgL_res5381z00_4022 = BgL_new4314z00_4020;
					}
					BgL_auxz00_4852 = BgL_res5381z00_4022;
				}
				return (obj_t) (BgL_auxz00_4852);
			}
		}
	}



/* isa/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_isazf2cinfozf2_bglt
		BGl_isazf2Cinfozd2nilz20zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			if ((BGl_z52thezd2isazf2Cinfozd2nilza0zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 29 */
					{	/* Cfa/cinfo3.scm 29 */
						BgL_isaz00_bglt BgL_res5264z00_2727;

						{	/* Cfa/cinfo3.scm 29 */
							BgL_isaz00_bglt BgL_new2816z00_2723;

							BgL_new2816z00_2723 =
								((BgL_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_isaz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2816z00_2723),
								BGl_classzd2numzd2zz__objectz00(BGl_isaz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 29 */
								BgL_objectz00_bglt BgL_auxz00_4867;

								BgL_auxz00_4867 = (BgL_objectz00_bglt) (BgL_new2816z00_2723);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4867, BFALSE);
							}
							BgL_res5264z00_2727 = BgL_new2816z00_2723;
						}
						BGl_z52thezd2isazf2Cinfozd2nilza0zzcfa_info3z00 =
							(obj_t) (BgL_res5264z00_2727);
					}
					{	/* Cfa/cinfo3.scm 29 */
						BgL_typez00_bglt BgL_arg4962z00_1391;

						BgL_typez00_bglt BgL_arg4964z00_1393;

						BgL_arg4962z00_1391 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4964z00_1393 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 29 */
							BgL_isaz00_bglt BgL_res5265z00_2743;

							{	/* Cfa/cinfo3.scm 29 */
								BgL_isaz00_bglt BgL_new2807z00_2728;

								BgL_new2807z00_2728 =
									(BgL_isaz00_bglt)
									(BGl_z52thezd2isazf2Cinfozd2nilza0zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 29 */
									obj_t BgL_loc2800z00_2736;

									BgL_typez00_bglt BgL_type2801z00_2737;

									obj_t BgL_sidezd2effectzf32802z21_2738;

									obj_t BgL_key2803z00_2739;

									obj_t BgL_exprza22804za2_2740;

									obj_t BgL_effect2805z00_2741;

									BgL_typez00_bglt BgL_class2806z00_2742;

									BgL_loc2800z00_2736 = BUNSPEC;
									BgL_type2801z00_2737 = BgL_arg4962z00_1391;
									BgL_sidezd2effectzf32802z21_2738 = BUNSPEC;
									BgL_key2803z00_2739 = BUNSPEC;
									BgL_exprza22804za2_2740 = BNIL;
									BgL_effect2805z00_2741 = BUNSPEC;
									BgL_class2806z00_2742 = BgL_arg4964z00_1393;
									((((BgL_isaz00_bglt) CREF(BgL_new2807z00_2728))->BgL_locz00) =
										((obj_t) BgL_loc2800z00_2736), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new2807z00_2728))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2801z00_2737), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new2807z00_2728))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32802z21_2738), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new2807z00_2728))->BgL_keyz00) =
										((obj_t) BgL_key2803z00_2739), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new2807z00_2728))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22804za2_2740), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new2807z00_2728))->
											BgL_effectz00) =
										((obj_t) BgL_effect2805z00_2741), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new2807z00_2728))->
											BgL_classz00) =
										((BgL_typez00_bglt) BgL_class2806z00_2742), BUNSPEC);
									BgL_res5265z00_2743 = BgL_new2807z00_2728;
							}} BgL_res5265z00_2743;
					}}
					{	/* Cfa/cinfo3.scm 29 */
						long BgL_arg4965z00_1394;

						BgL_arg4965z00_1394 =
							BGl_classzd2numzd2zz__objectz00(BGl_isazf2Cinfozf2zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2isazf2Cinfozd2nilza0zzcfa_info3z00),
							BgL_arg4965z00_1394);
					}
					{	/* Cfa/cinfo3.scm 29 */
						BgL_isazf2cinfozf2_bglt BgL_arg4966z00_1395;

						{	/* Cfa/cinfo3.scm 29 */
							BgL_approxz00_bglt BgL_arg4967z00_1396;

							BgL_arg4967z00_1396 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 29 */
								BgL_isazf2cinfozf2_bglt BgL_res5267z00_2752;

								{	/* Cfa/cinfo3.scm 29 */
									BgL_isazf2cinfozf2_bglt BgL_new4298z00_2747;

									BgL_new4298z00_2747 =
										((BgL_isazf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_isazf2cinfozf2_bgl))));
									{	/* Cfa/cinfo3.scm 29 */
										BgL_isazf2cinfozf2_bglt BgL_res5266z00_2751;

										{	/* Cfa/cinfo3.scm 29 */
											BgL_isazf2cinfozf2_bglt BgL_new4311z00_2748;

											BgL_new4311z00_2748 = BgL_new4298z00_2747;
											{	/* Cfa/cinfo3.scm 29 */
												BgL_approxz00_bglt BgL_approx4310z00_2750;

												BgL_approx4310z00_2750 = BgL_arg4967z00_1396;
												((((BgL_isazf2cinfozf2_bglt)
															CREF(BgL_new4311z00_2748))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4310z00_2750),
													BUNSPEC);
												BgL_res5266z00_2751 = BgL_new4311z00_2748;
										}} BgL_res5266z00_2751;
									}
									BgL_res5267z00_2752 = BgL_new4298z00_2747;
								}
								BgL_arg4966z00_1395 = BgL_res5267z00_2752;
						}}
						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL_auxz00_4889;

							BgL_objectz00_bglt BgL_auxz00_4887;

							BgL_auxz00_4889 = (obj_t) (BgL_arg4966z00_1395);
							BgL_auxz00_4887 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2isazf2Cinfozd2nilza0zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4887, BgL_auxz00_4889);
				}}}
			else
				{	/* Cfa/cinfo3.scm 29 */
					BFALSE;
				}
			return
				(BgL_isazf2cinfozf2_bglt)
				(BGl_z52thezd2isazf2Cinfozd2nilza0zzcfa_info3z00);
		}
	}



/* _isa/Cinfo-nil */
	obj_t BGl__isazf2Cinfozd2nilz20zzcfa_info3z00(obj_t BgL_envz00_3567)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			return (obj_t) (BGl_isazf2Cinfozd2nilz20zzcfa_info3z00());
		}
	}



/* new/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_newzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_obj4274z00_195)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4274z00_195,
				BGl_newzf2Cinfozf2zzcfa_info3z00);
		}
	}



/* _new/Cinfo? */
	obj_t BGl__newzf2Cinfozf3z01zzcfa_info3z00(obj_t BgL_envz00_3564,
		obj_t BgL_obj4274z00_3565)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4274z00_3565,
					BGl_newzf2Cinfozf2zzcfa_info3z00));
		}
	}



/* widening-new/Cinfo */
	BGL_EXPORTED_DEF BgL_newzf2cinfozf2_bglt
		BGl_wideningzd2newzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4249z00_199)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				BgL_newzf2cinfozf2_bglt BgL_new4250z00_2753;

				BgL_new4250z00_2753 =
					((BgL_newzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_newzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 28 */
					BgL_newzf2cinfozf2_bglt BgL_res5268z00_2757;

					{	/* Cfa/cinfo3.scm 28 */
						BgL_newzf2cinfozf2_bglt BgL_new4263z00_2754;

						BgL_new4263z00_2754 = BgL_new4250z00_2753;
						{	/* Cfa/cinfo3.scm 28 */
							BgL_approxz00_bglt BgL_approx4262z00_2756;

							BgL_approx4262z00_2756 = BgL_approx4249z00_199;
							((((BgL_newzf2cinfozf2_bglt) CREF(BgL_new4263z00_2754))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4262z00_2756), BUNSPEC);
							BgL_res5268z00_2757 = BgL_new4263z00_2754;
					}} BgL_res5268z00_2757;
				}
				return BgL_new4250z00_2753;
			}
		}
	}



/* _widening-new/Cinfo */
	obj_t BGl__wideningzd2newzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3751,
		obj_t BgL_approx4249z00_3752)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			return
				(obj_t) (BGl_wideningzd2newzf2Cinfoz20zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4249z00_3752)));
		}
	}



/* make-new/Cinfo */
	BGL_EXPORTED_DEF BgL_newzf2cinfozf2_bglt
		BGl_makezd2newzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc4253z00_200,
		BgL_typez00_bglt BgL_type4254z00_201, obj_t BgL_sidezd2effectzf34255z21_202,
		obj_t BgL_key4256z00_203, obj_t BgL_exprza24257za2_204,
		obj_t BgL_effect4258z00_205, obj_t BgL_argszd2type4259zd2_206,
		BgL_approxz00_bglt BgL_approx4252z00_207)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				BgL_newz00_bglt BgL_aux4260z00_2758;

				BgL_aux4260z00_2758 =
					BGl_makezd2newzd2zzast_nodez00(BgL_loc4253z00_200,
					BgL_type4254z00_201, BgL_sidezd2effectzf34255z21_202,
					BgL_key4256z00_203, BgL_exprza24257za2_204, BgL_effect4258z00_205,
					BgL_argszd2type4259zd2_206);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4260z00_2758),
					BGl_classzd2numzd2zz__objectz00(BGl_newzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 28 */
					BgL_newzf2cinfozf2_bglt BgL_arg4969z00_2760;

					{	/* Cfa/cinfo3.scm 28 */
						BgL_newzf2cinfozf2_bglt BgL_res5270z00_2770;

						{	/* Cfa/cinfo3.scm 28 */
							BgL_newzf2cinfozf2_bglt BgL_new4250z00_2765;

							BgL_new4250z00_2765 =
								((BgL_newzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_newzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo3.scm 28 */
								BgL_newzf2cinfozf2_bglt BgL_res5269z00_2769;

								{	/* Cfa/cinfo3.scm 28 */
									BgL_newzf2cinfozf2_bglt BgL_new4263z00_2766;

									BgL_new4263z00_2766 = BgL_new4250z00_2765;
									{	/* Cfa/cinfo3.scm 28 */
										BgL_approxz00_bglt BgL_approx4262z00_2768;

										BgL_approx4262z00_2768 = BgL_approx4252z00_207;
										((((BgL_newzf2cinfozf2_bglt) CREF(BgL_new4263z00_2766))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4262z00_2768), BUNSPEC);
										BgL_res5269z00_2769 = BgL_new4263z00_2766;
								}} BgL_res5269z00_2769;
							}
							BgL_res5270z00_2770 = BgL_new4250z00_2765;
						}
						BgL_arg4969z00_2760 = BgL_res5270z00_2770;
					}
					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_auxz00_4911;

						BgL_objectz00_bglt BgL_auxz00_4909;

						BgL_auxz00_4911 = (obj_t) (BgL_arg4969z00_2760);
						BgL_auxz00_4909 = (BgL_objectz00_bglt) (BgL_aux4260z00_2758);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4909, BgL_auxz00_4911);
				}}
				return
					((BgL_newzf2cinfozf2_bglt)
					(BgL_newzf2cinfozf2_bglt) (BgL_aux4260z00_2758));
			}
		}
	}



/* _make-new/Cinfo */
	obj_t BGl__makezd2newzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3753,
		obj_t BgL_loc4253z00_3754, obj_t BgL_type4254z00_3755,
		obj_t BgL_sidezd2effectzf34255z21_3756, obj_t BgL_key4256z00_3757,
		obj_t BgL_exprza24257za2_3758, obj_t BgL_effect4258z00_3759,
		obj_t BgL_argszd2type4259zd2_3760, obj_t BgL_approx4252z00_3761)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			return
				(obj_t) (BGl_makezd2newzf2Cinfoz20zzcfa_info3z00(BgL_loc4253z00_3754,
					(BgL_typez00_bglt) (BgL_type4254z00_3755),
					BgL_sidezd2effectzf34255z21_3756, BgL_key4256z00_3757,
					BgL_exprza24257za2_3758, BgL_effect4258z00_3759,
					BgL_argszd2type4259zd2_3760,
					(BgL_approxz00_bglt) (BgL_approx4252z00_3761)));
		}
	}



/* fill-new/Cinfo! */
	BGL_EXPORTED_DEF BgL_newzf2cinfozf2_bglt
		BGl_fillzd2newzf2Cinfoz12z32zzcfa_info3z00(BgL_newzf2cinfozf2_bglt
		BgL_new4263z00_208, BgL_approxz00_bglt BgL_approx4262z00_209)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				BgL_approxz00_bglt BgL_approx4262z00_4024;

				BgL_approx4262z00_4024 = BgL_approx4262z00_209;
				((((BgL_newzf2cinfozf2_bglt) CREF(BgL_new4263z00_208))->BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4262z00_4024), BUNSPEC);
				return BgL_new4263z00_208;
			}
		}
	}



/* _fill-new/Cinfo! */
	obj_t BGl__fillzd2newzf2Cinfoz12z32zzcfa_info3z00(obj_t BgL_envz00_3762,
		obj_t BgL_new4263z00_3763, obj_t BgL_approx4262z00_3764)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				BgL_newzf2cinfozf2_bglt BgL_auxz00_4921;

				{	/* Cfa/cinfo3.scm 28 */
					BgL_newzf2cinfozf2_bglt BgL_res5382z00_4028;

					{	/* Cfa/cinfo3.scm 28 */
						BgL_newzf2cinfozf2_bglt BgL_new4263z00_4025;

						BgL_approxz00_bglt BgL_approx4262z00_4026;

						BgL_new4263z00_4025 =
							(BgL_newzf2cinfozf2_bglt) (BgL_new4263z00_3763);
						BgL_approx4262z00_4026 =
							(BgL_approxz00_bglt) (BgL_approx4262z00_3764);
						{	/* Cfa/cinfo3.scm 28 */
							BgL_approxz00_bglt BgL_approx4262z00_4027;

							BgL_approx4262z00_4027 = BgL_approx4262z00_4026;
							((((BgL_newzf2cinfozf2_bglt) CREF(BgL_new4263z00_4025))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4262z00_4027), BUNSPEC);
							BgL_res5382z00_4028 = BgL_new4263z00_4025;
						}
					}
					BgL_auxz00_4921 = BgL_res5382z00_4028;
				}
				return (obj_t) (BgL_auxz00_4921);
			}
		}
	}



/* %allocate-new/Cinfo */
	BGL_EXPORTED_DEF BgL_newz00_bglt
		BGl_z52allocatezd2newzf2Cinfoz72zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				BgL_newz00_bglt BgL_new4266z00_4029;

				BgL_new4266z00_4029 =
					((BgL_newz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_newz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4266z00_4029),
					BGl_classzd2numzd2zz__objectz00(BGl_newzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 28 */
					BgL_objectz00_bglt BgL_auxz00_4930;

					BgL_auxz00_4930 = (BgL_objectz00_bglt) (BgL_new4266z00_4029);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4930, BFALSE);
				}
				return BgL_new4266z00_4029;
			}
		}
	}



/* _%allocate-new/Cinfo */
	obj_t BGl__z52allocatezd2newzf2Cinfoz72zzcfa_info3z00(obj_t BgL_envz00_3562)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				BgL_newz00_bglt BgL_auxz00_4933;

				{	/* Cfa/cinfo3.scm 28 */
					BgL_newz00_bglt BgL_res5383z00_4033;

					{	/* Cfa/cinfo3.scm 28 */
						BgL_newz00_bglt BgL_new4266z00_4031;

						BgL_new4266z00_4031 =
							((BgL_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_newz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4266z00_4031),
							BGl_classzd2numzd2zz__objectz00
							(BGl_newzf2Cinfozf2zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 28 */
							BgL_objectz00_bglt BgL_auxz00_4938;

							BgL_auxz00_4938 = (BgL_objectz00_bglt) (BgL_new4266z00_4031);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4938, BFALSE);
						}
						BgL_res5383z00_4033 = BgL_new4266z00_4031;
					}
					BgL_auxz00_4933 = BgL_res5383z00_4033;
				}
				return (obj_t) (BgL_auxz00_4933);
			}
		}
	}



/* new/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_newzf2cinfozf2_bglt
		BGl_newzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			if ((BGl_z52thezd2newzf2Cinfozd2nilza0zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 28 */
					{	/* Cfa/cinfo3.scm 28 */
						BgL_newz00_bglt BgL_res5271z00_2780;

						{	/* Cfa/cinfo3.scm 28 */
							BgL_newz00_bglt BgL_new2558z00_2776;

							BgL_new2558z00_2776 =
								((BgL_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_newz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2558z00_2776),
								BGl_classzd2numzd2zz__objectz00(BGl_newz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 28 */
								BgL_objectz00_bglt BgL_auxz00_4948;

								BgL_auxz00_4948 = (BgL_objectz00_bglt) (BgL_new2558z00_2776);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4948, BFALSE);
							}
							BgL_res5271z00_2780 = BgL_new2558z00_2776;
						}
						BGl_z52thezd2newzf2Cinfozd2nilza0zzcfa_info3z00 =
							(obj_t) (BgL_res5271z00_2780);
					}
					{	/* Cfa/cinfo3.scm 28 */
						BgL_typez00_bglt BgL_arg4972z00_1406;

						BgL_arg4972z00_1406 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 28 */
							BgL_newz00_bglt BgL_res5272z00_2796;

							{	/* Cfa/cinfo3.scm 28 */
								BgL_newz00_bglt BgL_new2549z00_2781;

								BgL_new2549z00_2781 =
									(BgL_newz00_bglt)
									(BGl_z52thezd2newzf2Cinfozd2nilza0zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 28 */
									obj_t BgL_loc2542z00_2789;

									BgL_typez00_bglt BgL_type2543z00_2790;

									obj_t BgL_sidezd2effectzf32544z21_2791;

									obj_t BgL_key2545z00_2792;

									obj_t BgL_exprza22546za2_2793;

									obj_t BgL_effect2547z00_2794;

									obj_t BgL_argszd2type2548zd2_2795;

									BgL_loc2542z00_2789 = BUNSPEC;
									BgL_type2543z00_2790 = BgL_arg4972z00_1406;
									BgL_sidezd2effectzf32544z21_2791 = BUNSPEC;
									BgL_key2545z00_2792 = BUNSPEC;
									BgL_exprza22546za2_2793 = BNIL;
									BgL_effect2547z00_2794 = BUNSPEC;
									BgL_argszd2type2548zd2_2795 = BNIL;
									((((BgL_newz00_bglt) CREF(BgL_new2549z00_2781))->BgL_locz00) =
										((obj_t) BgL_loc2542z00_2789), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2549z00_2781))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2543z00_2790), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2549z00_2781))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32544z21_2791), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2549z00_2781))->BgL_keyz00) =
										((obj_t) BgL_key2545z00_2792), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2549z00_2781))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22546za2_2793), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2549z00_2781))->
											BgL_effectz00) =
										((obj_t) BgL_effect2547z00_2794), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2549z00_2781))->
											BgL_argszd2typezd2) =
										((obj_t) BgL_argszd2type2548zd2_2795), BUNSPEC);
									BgL_res5272z00_2796 = BgL_new2549z00_2781;
							}} BgL_res5272z00_2796;
					}}
					{	/* Cfa/cinfo3.scm 28 */
						long BgL_arg4975z00_1409;

						BgL_arg4975z00_1409 =
							BGl_classzd2numzd2zz__objectz00(BGl_newzf2Cinfozf2zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2newzf2Cinfozd2nilza0zzcfa_info3z00),
							BgL_arg4975z00_1409);
					}
					{	/* Cfa/cinfo3.scm 28 */
						BgL_newzf2cinfozf2_bglt BgL_arg4977z00_1410;

						{	/* Cfa/cinfo3.scm 28 */
							BgL_approxz00_bglt BgL_arg4978z00_1411;

							BgL_arg4978z00_1411 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 28 */
								BgL_newzf2cinfozf2_bglt BgL_res5274z00_2805;

								{	/* Cfa/cinfo3.scm 28 */
									BgL_newzf2cinfozf2_bglt BgL_new4250z00_2800;

									BgL_new4250z00_2800 =
										((BgL_newzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_newzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo3.scm 28 */
										BgL_newzf2cinfozf2_bglt BgL_res5273z00_2804;

										{	/* Cfa/cinfo3.scm 28 */
											BgL_newzf2cinfozf2_bglt BgL_new4263z00_2801;

											BgL_new4263z00_2801 = BgL_new4250z00_2800;
											{	/* Cfa/cinfo3.scm 28 */
												BgL_approxz00_bglt BgL_approx4262z00_2803;

												BgL_approx4262z00_2803 = BgL_arg4978z00_1411;
												((((BgL_newzf2cinfozf2_bglt)
															CREF(BgL_new4263z00_2801))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4262z00_2803),
													BUNSPEC);
												BgL_res5273z00_2804 = BgL_new4263z00_2801;
										}} BgL_res5273z00_2804;
									}
									BgL_res5274z00_2805 = BgL_new4250z00_2800;
								}
								BgL_arg4977z00_1410 = BgL_res5274z00_2805;
						}}
						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL_auxz00_4969;

							BgL_objectz00_bglt BgL_auxz00_4967;

							BgL_auxz00_4969 = (obj_t) (BgL_arg4977z00_1410);
							BgL_auxz00_4967 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2newzf2Cinfozd2nilza0zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4967, BgL_auxz00_4969);
				}}}
			else
				{	/* Cfa/cinfo3.scm 28 */
					BFALSE;
				}
			return
				(BgL_newzf2cinfozf2_bglt)
				(BGl_z52thezd2newzf2Cinfozd2nilza0zzcfa_info3z00);
		}
	}



/* _new/Cinfo-nil */
	obj_t BGl__newzf2Cinfozd2nilz20zzcfa_info3z00(obj_t BgL_envz00_3563)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			return (obj_t) (BGl_newzf2Cinfozd2nilz20zzcfa_info3z00());
		}
	}



/* setfield/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_setfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_obj4225z00_211)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4225z00_211,
				BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
		}
	}



/* _setfield/Cinfo? */
	obj_t BGl__setfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t BgL_envz00_3560,
		obj_t BgL_obj4225z00_3561)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4225z00_3561,
					BGl_setfieldzf2Cinfozf2zzcfa_info3z00));
		}
	}



/* widening-setfield/Cinfo */
	BGL_EXPORTED_DEF BgL_setfieldzf2cinfozf2_bglt
		BGl_wideningzd2setfieldzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4199z00_215)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				BgL_setfieldzf2cinfozf2_bglt BgL_new4200z00_2806;

				BgL_new4200z00_2806 =
					((BgL_setfieldzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_setfieldzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 27 */
					BgL_setfieldzf2cinfozf2_bglt BgL_res5275z00_2810;

					{	/* Cfa/cinfo3.scm 27 */
						BgL_setfieldzf2cinfozf2_bglt BgL_new4215z00_2807;

						BgL_new4215z00_2807 = BgL_new4200z00_2806;
						{	/* Cfa/cinfo3.scm 27 */
							BgL_approxz00_bglt BgL_approx4214z00_2809;

							BgL_approx4214z00_2809 = BgL_approx4199z00_215;
							((((BgL_setfieldzf2cinfozf2_bglt) CREF(BgL_new4215z00_2807))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4214z00_2809), BUNSPEC);
							BgL_res5275z00_2810 = BgL_new4215z00_2807;
					}} BgL_res5275z00_2810;
				}
				return BgL_new4200z00_2806;
			}
		}
	}



/* _widening-setfield/Cinfo */
	obj_t BGl__wideningzd2setfieldzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3765,
		obj_t BgL_approx4199z00_3766)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			return
				(obj_t) (BGl_wideningzd2setfieldzf2Cinfoz20zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4199z00_3766)));
		}
	}



/* make-setfield/Cinfo */
	BGL_EXPORTED_DEF BgL_setfieldzf2cinfozf2_bglt
		BGl_makezd2setfieldzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc4203z00_216,
		BgL_typez00_bglt BgL_type4204z00_217, obj_t BgL_sidezd2effectzf34205z21_218,
		obj_t BgL_key4206z00_219, obj_t BgL_exprza24207za2_220,
		obj_t BgL_effect4208z00_221, obj_t BgL_fname4209z00_222,
		BgL_typez00_bglt BgL_ftype4210z00_223,
		BgL_typez00_bglt BgL_otype4211z00_224,
		BgL_approxz00_bglt BgL_approx4202z00_225)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				BgL_setfieldz00_bglt BgL_aux4212z00_2811;

				BgL_aux4212z00_2811 =
					BGl_makezd2setfieldzd2zzast_nodez00(BgL_loc4203z00_216,
					BgL_type4204z00_217, BgL_sidezd2effectzf34205z21_218,
					BgL_key4206z00_219, BgL_exprza24207za2_220, BgL_effect4208z00_221,
					BgL_fname4209z00_222, BgL_ftype4210z00_223, BgL_otype4211z00_224);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4212z00_2811),
					BGl_classzd2numzd2zz__objectz00
					(BGl_setfieldzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 27 */
					BgL_setfieldzf2cinfozf2_bglt BgL_arg4980z00_2813;

					{	/* Cfa/cinfo3.scm 27 */
						BgL_setfieldzf2cinfozf2_bglt BgL_res5277z00_2823;

						{	/* Cfa/cinfo3.scm 27 */
							BgL_setfieldzf2cinfozf2_bglt BgL_new4200z00_2818;

							BgL_new4200z00_2818 =
								((BgL_setfieldzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_setfieldzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo3.scm 27 */
								BgL_setfieldzf2cinfozf2_bglt BgL_res5276z00_2822;

								{	/* Cfa/cinfo3.scm 27 */
									BgL_setfieldzf2cinfozf2_bglt BgL_new4215z00_2819;

									BgL_new4215z00_2819 = BgL_new4200z00_2818;
									{	/* Cfa/cinfo3.scm 27 */
										BgL_approxz00_bglt BgL_approx4214z00_2821;

										BgL_approx4214z00_2821 = BgL_approx4202z00_225;
										((((BgL_setfieldzf2cinfozf2_bglt)
													CREF(BgL_new4215z00_2819))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4214z00_2821), BUNSPEC);
										BgL_res5276z00_2822 = BgL_new4215z00_2819;
								}} BgL_res5276z00_2822;
							}
							BgL_res5277z00_2823 = BgL_new4200z00_2818;
						}
						BgL_arg4980z00_2813 = BgL_res5277z00_2823;
					}
					{	/* Cfa/cinfo3.scm 27 */
						obj_t BgL_auxz00_4991;

						BgL_objectz00_bglt BgL_auxz00_4989;

						BgL_auxz00_4991 = (obj_t) (BgL_arg4980z00_2813);
						BgL_auxz00_4989 = (BgL_objectz00_bglt) (BgL_aux4212z00_2811);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4989, BgL_auxz00_4991);
				}}
				return
					((BgL_setfieldzf2cinfozf2_bglt)
					(BgL_setfieldzf2cinfozf2_bglt) (BgL_aux4212z00_2811));
			}
		}
	}



/* _make-setfield/Cinfo */
	obj_t BGl__makezd2setfieldzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3767,
		obj_t BgL_loc4203z00_3768, obj_t BgL_type4204z00_3769,
		obj_t BgL_sidezd2effectzf34205z21_3770, obj_t BgL_key4206z00_3771,
		obj_t BgL_exprza24207za2_3772, obj_t BgL_effect4208z00_3773,
		obj_t BgL_fname4209z00_3774, obj_t BgL_ftype4210z00_3775,
		obj_t BgL_otype4211z00_3776, obj_t BgL_approx4202z00_3777)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			return
				(obj_t) (BGl_makezd2setfieldzf2Cinfoz20zzcfa_info3z00
				(BgL_loc4203z00_3768, (BgL_typez00_bglt) (BgL_type4204z00_3769),
					BgL_sidezd2effectzf34205z21_3770, BgL_key4206z00_3771,
					BgL_exprza24207za2_3772, BgL_effect4208z00_3773,
					BgL_fname4209z00_3774, (BgL_typez00_bglt) (BgL_ftype4210z00_3775),
					(BgL_typez00_bglt) (BgL_otype4211z00_3776),
					(BgL_approxz00_bglt) (BgL_approx4202z00_3777)));
		}
	}



/* fill-setfield/Cinfo! */
	BGL_EXPORTED_DEF BgL_setfieldzf2cinfozf2_bglt
		BGl_fillzd2setfieldzf2Cinfoz12z32zzcfa_info3z00(BgL_setfieldzf2cinfozf2_bglt
		BgL_new4215z00_226, BgL_approxz00_bglt BgL_approx4214z00_227)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				BgL_approxz00_bglt BgL_approx4214z00_4035;

				BgL_approx4214z00_4035 = BgL_approx4214z00_227;
				((((BgL_setfieldzf2cinfozf2_bglt) CREF(BgL_new4215z00_226))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4214z00_4035), BUNSPEC);
				return BgL_new4215z00_226;
			}
		}
	}



/* _fill-setfield/Cinfo! */
	obj_t BGl__fillzd2setfieldzf2Cinfoz12z32zzcfa_info3z00(obj_t BgL_envz00_3778,
		obj_t BgL_new4215z00_3779, obj_t BgL_approx4214z00_3780)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_5003;

				{	/* Cfa/cinfo3.scm 27 */
					BgL_setfieldzf2cinfozf2_bglt BgL_res5384z00_4039;

					{	/* Cfa/cinfo3.scm 27 */
						BgL_setfieldzf2cinfozf2_bglt BgL_new4215z00_4036;

						BgL_approxz00_bglt BgL_approx4214z00_4037;

						BgL_new4215z00_4036 =
							(BgL_setfieldzf2cinfozf2_bglt) (BgL_new4215z00_3779);
						BgL_approx4214z00_4037 =
							(BgL_approxz00_bglt) (BgL_approx4214z00_3780);
						{	/* Cfa/cinfo3.scm 27 */
							BgL_approxz00_bglt BgL_approx4214z00_4038;

							BgL_approx4214z00_4038 = BgL_approx4214z00_4037;
							((((BgL_setfieldzf2cinfozf2_bglt) CREF(BgL_new4215z00_4036))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4214z00_4038), BUNSPEC);
							BgL_res5384z00_4039 = BgL_new4215z00_4036;
						}
					}
					BgL_auxz00_5003 = BgL_res5384z00_4039;
				}
				return (obj_t) (BgL_auxz00_5003);
			}
		}
	}



/* %allocate-setfield/Cinfo */
	BGL_EXPORTED_DEF BgL_setfieldz00_bglt
		BGl_z52allocatezd2setfieldzf2Cinfoz72zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				BgL_setfieldz00_bglt BgL_new4218z00_4040;

				BgL_new4218z00_4040 =
					((BgL_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_setfieldz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4218z00_4040),
					BGl_classzd2numzd2zz__objectz00
					(BGl_setfieldzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 27 */
					BgL_objectz00_bglt BgL_auxz00_5012;

					BgL_auxz00_5012 = (BgL_objectz00_bglt) (BgL_new4218z00_4040);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5012, BFALSE);
				}
				return BgL_new4218z00_4040;
			}
		}
	}



/* _%allocate-setfield/Cinfo */
	obj_t BGl__z52allocatezd2setfieldzf2Cinfoz72zzcfa_info3z00(obj_t
		BgL_envz00_3558)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				BgL_setfieldz00_bglt BgL_auxz00_5015;

				{	/* Cfa/cinfo3.scm 27 */
					BgL_setfieldz00_bglt BgL_res5385z00_4044;

					{	/* Cfa/cinfo3.scm 27 */
						BgL_setfieldz00_bglt BgL_new4218z00_4042;

						BgL_new4218z00_4042 =
							((BgL_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4218z00_4042),
							BGl_classzd2numzd2zz__objectz00
							(BGl_setfieldzf2Cinfozf2zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_5020;

							BgL_auxz00_5020 = (BgL_objectz00_bglt) (BgL_new4218z00_4042);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5020, BFALSE);
						}
						BgL_res5385z00_4044 = BgL_new4218z00_4042;
					}
					BgL_auxz00_5015 = BgL_res5385z00_4044;
				}
				return (obj_t) (BgL_auxz00_5015);
			}
		}
	}



/* setfield/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_setfieldzf2cinfozf2_bglt
		BGl_setfieldzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			if ((BGl_z52thezd2setfieldzf2Cinfozd2nilza0zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 27 */
					{	/* Cfa/cinfo3.scm 27 */
						BgL_setfieldz00_bglt BgL_res5278z00_2833;

						{	/* Cfa/cinfo3.scm 27 */
							BgL_setfieldz00_bglt BgL_new2514z00_2829;

							BgL_new2514z00_2829 =
								((BgL_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_setfieldz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2514z00_2829),
								BGl_classzd2numzd2zz__objectz00(BGl_setfieldz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 27 */
								BgL_objectz00_bglt BgL_auxz00_5030;

								BgL_auxz00_5030 = (BgL_objectz00_bglt) (BgL_new2514z00_2829);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5030, BFALSE);
							}
							BgL_res5278z00_2833 = BgL_new2514z00_2829;
						}
						BGl_z52thezd2setfieldzf2Cinfozd2nilza0zzcfa_info3z00 =
							(obj_t) (BgL_res5278z00_2833);
					}
					{	/* Cfa/cinfo3.scm 27 */
						BgL_typez00_bglt BgL_arg4983z00_1421;

						BgL_typez00_bglt BgL_arg4986z00_1424;

						BgL_typez00_bglt BgL_arg4987z00_1425;

						BgL_arg4983z00_1421 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4986z00_1424 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4987z00_1425 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 27 */
							BgL_setfieldz00_bglt BgL_res5279z00_2853;

							{	/* Cfa/cinfo3.scm 27 */
								BgL_setfieldz00_bglt BgL_new2503z00_2834;

								BgL_new2503z00_2834 =
									(BgL_setfieldz00_bglt)
									(BGl_z52thezd2setfieldzf2Cinfozd2nilza0zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 27 */
									obj_t BgL_loc2494z00_2844;

									BgL_typez00_bglt BgL_type2495z00_2845;

									obj_t BgL_sidezd2effectzf32496z21_2846;

									obj_t BgL_key2497z00_2847;

									obj_t BgL_exprza22498za2_2848;

									obj_t BgL_effect2499z00_2849;

									obj_t BgL_fname2500z00_2850;

									BgL_typez00_bglt BgL_ftype2501z00_2851;

									BgL_typez00_bglt BgL_otype2502z00_2852;

									BgL_loc2494z00_2844 = BUNSPEC;
									BgL_type2495z00_2845 = BgL_arg4983z00_1421;
									BgL_sidezd2effectzf32496z21_2846 = BUNSPEC;
									BgL_key2497z00_2847 = BUNSPEC;
									BgL_exprza22498za2_2848 = BNIL;
									BgL_effect2499z00_2849 = BUNSPEC;
									BgL_fname2500z00_2850 = BGl_string5335z00zzcfa_info3z00;
									BgL_ftype2501z00_2851 = BgL_arg4986z00_1424;
									BgL_otype2502z00_2852 = BgL_arg4987z00_1425;
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_locz00) = ((obj_t) BgL_loc2494z00_2844), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2495z00_2845), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32496z21_2846), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_keyz00) = ((obj_t) BgL_key2497z00_2847), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22498za2_2848), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_effectz00) =
										((obj_t) BgL_effect2499z00_2849), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_fnamez00) = ((obj_t) BgL_fname2500z00_2850), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2501z00_2851), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2503z00_2834))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2502z00_2852), BUNSPEC);
									BgL_res5279z00_2853 = BgL_new2503z00_2834;
							}} BgL_res5279z00_2853;
					}}
					{	/* Cfa/cinfo3.scm 27 */
						long BgL_arg4988z00_1426;

						BgL_arg4988z00_1426 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2setfieldzf2Cinfozd2nilza0zzcfa_info3z00),
							BgL_arg4988z00_1426);
					}
					{	/* Cfa/cinfo3.scm 27 */
						BgL_setfieldzf2cinfozf2_bglt BgL_arg4989z00_1427;

						{	/* Cfa/cinfo3.scm 27 */
							BgL_approxz00_bglt BgL_arg4990z00_1428;

							BgL_arg4990z00_1428 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 27 */
								BgL_setfieldzf2cinfozf2_bglt BgL_res5281z00_2862;

								{	/* Cfa/cinfo3.scm 27 */
									BgL_setfieldzf2cinfozf2_bglt BgL_new4200z00_2857;

									BgL_new4200z00_2857 =
										((BgL_setfieldzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_setfieldzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo3.scm 27 */
										BgL_setfieldzf2cinfozf2_bglt BgL_res5280z00_2861;

										{	/* Cfa/cinfo3.scm 27 */
											BgL_setfieldzf2cinfozf2_bglt BgL_new4215z00_2858;

											BgL_new4215z00_2858 = BgL_new4200z00_2857;
											{	/* Cfa/cinfo3.scm 27 */
												BgL_approxz00_bglt BgL_approx4214z00_2860;

												BgL_approx4214z00_2860 = BgL_arg4990z00_1428;
												((((BgL_setfieldzf2cinfozf2_bglt)
															CREF(BgL_new4215z00_2858))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4214z00_2860),
													BUNSPEC);
												BgL_res5280z00_2861 = BgL_new4215z00_2858;
										}} BgL_res5280z00_2861;
									}
									BgL_res5281z00_2862 = BgL_new4200z00_2857;
								}
								BgL_arg4989z00_1427 = BgL_res5281z00_2862;
						}}
						{	/* Cfa/cinfo3.scm 27 */
							obj_t BgL_auxz00_5055;

							BgL_objectz00_bglt BgL_auxz00_5053;

							BgL_auxz00_5055 = (obj_t) (BgL_arg4989z00_1427);
							BgL_auxz00_5053 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2setfieldzf2Cinfozd2nilza0zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5053, BgL_auxz00_5055);
				}}}
			else
				{	/* Cfa/cinfo3.scm 27 */
					BFALSE;
				}
			return
				(BgL_setfieldzf2cinfozf2_bglt)
				(BGl_z52thezd2setfieldzf2Cinfozd2nilza0zzcfa_info3z00);
		}
	}



/* _setfield/Cinfo-nil */
	obj_t BGl__setfieldzf2Cinfozd2nilz20zzcfa_info3z00(obj_t BgL_envz00_3559)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			return (obj_t) (BGl_setfieldzf2Cinfozd2nilz20zzcfa_info3z00());
		}
	}



/* getfield/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_getfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_obj4176z00_229)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4176z00_229,
				BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
		}
	}



/* _getfield/Cinfo? */
	obj_t BGl__getfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t BgL_envz00_3556,
		obj_t BgL_obj4176z00_3557)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4176z00_3557,
					BGl_getfieldzf2Cinfozf2zzcfa_info3z00));
		}
	}



/* widening-getfield/Cinfo */
	BGL_EXPORTED_DEF BgL_getfieldzf2cinfozf2_bglt
		BGl_wideningzd2getfieldzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4150z00_233)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			{	/* Cfa/cinfo3.scm 26 */
				BgL_getfieldzf2cinfozf2_bglt BgL_new4151z00_2863;

				BgL_new4151z00_2863 =
					((BgL_getfieldzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_getfieldzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 26 */
					BgL_getfieldzf2cinfozf2_bglt BgL_res5282z00_2867;

					{	/* Cfa/cinfo3.scm 26 */
						BgL_getfieldzf2cinfozf2_bglt BgL_new4166z00_2864;

						BgL_new4166z00_2864 = BgL_new4151z00_2863;
						{	/* Cfa/cinfo3.scm 26 */
							BgL_approxz00_bglt BgL_approx4165z00_2866;

							BgL_approx4165z00_2866 = BgL_approx4150z00_233;
							((((BgL_getfieldzf2cinfozf2_bglt) CREF(BgL_new4166z00_2864))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4165z00_2866), BUNSPEC);
							BgL_res5282z00_2867 = BgL_new4166z00_2864;
					}} BgL_res5282z00_2867;
				}
				return BgL_new4151z00_2863;
			}
		}
	}



/* _widening-getfield/Cinfo */
	obj_t BGl__wideningzd2getfieldzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3781,
		obj_t BgL_approx4150z00_3782)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			return
				(obj_t) (BGl_wideningzd2getfieldzf2Cinfoz20zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4150z00_3782)));
		}
	}



/* make-getfield/Cinfo */
	BGL_EXPORTED_DEF BgL_getfieldzf2cinfozf2_bglt
		BGl_makezd2getfieldzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc4154z00_234,
		BgL_typez00_bglt BgL_type4155z00_235, obj_t BgL_sidezd2effectzf34156z21_236,
		obj_t BgL_key4157z00_237, obj_t BgL_exprza24158za2_238,
		obj_t BgL_effect4159z00_239, obj_t BgL_fname4160z00_240,
		BgL_typez00_bglt BgL_ftype4161z00_241,
		BgL_typez00_bglt BgL_otype4162z00_242,
		BgL_approxz00_bglt BgL_approx4153z00_243)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			{	/* Cfa/cinfo3.scm 26 */
				BgL_getfieldz00_bglt BgL_aux4163z00_2868;

				BgL_aux4163z00_2868 =
					BGl_makezd2getfieldzd2zzast_nodez00(BgL_loc4154z00_234,
					BgL_type4155z00_235, BgL_sidezd2effectzf34156z21_236,
					BgL_key4157z00_237, BgL_exprza24158za2_238, BgL_effect4159z00_239,
					BgL_fname4160z00_240, BgL_ftype4161z00_241, BgL_otype4162z00_242);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4163z00_2868),
					BGl_classzd2numzd2zz__objectz00
					(BGl_getfieldzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 26 */
					BgL_getfieldzf2cinfozf2_bglt BgL_arg4993z00_2870;

					{	/* Cfa/cinfo3.scm 26 */
						BgL_getfieldzf2cinfozf2_bglt BgL_res5284z00_2880;

						{	/* Cfa/cinfo3.scm 26 */
							BgL_getfieldzf2cinfozf2_bglt BgL_new4151z00_2875;

							BgL_new4151z00_2875 =
								((BgL_getfieldzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_getfieldzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo3.scm 26 */
								BgL_getfieldzf2cinfozf2_bglt BgL_res5283z00_2879;

								{	/* Cfa/cinfo3.scm 26 */
									BgL_getfieldzf2cinfozf2_bglt BgL_new4166z00_2876;

									BgL_new4166z00_2876 = BgL_new4151z00_2875;
									{	/* Cfa/cinfo3.scm 26 */
										BgL_approxz00_bglt BgL_approx4165z00_2878;

										BgL_approx4165z00_2878 = BgL_approx4153z00_243;
										((((BgL_getfieldzf2cinfozf2_bglt)
													CREF(BgL_new4166z00_2876))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4165z00_2878), BUNSPEC);
										BgL_res5283z00_2879 = BgL_new4166z00_2876;
								}} BgL_res5283z00_2879;
							}
							BgL_res5284z00_2880 = BgL_new4151z00_2875;
						}
						BgL_arg4993z00_2870 = BgL_res5284z00_2880;
					}
					{	/* Cfa/cinfo3.scm 26 */
						obj_t BgL_auxz00_5077;

						BgL_objectz00_bglt BgL_auxz00_5075;

						BgL_auxz00_5077 = (obj_t) (BgL_arg4993z00_2870);
						BgL_auxz00_5075 = (BgL_objectz00_bglt) (BgL_aux4163z00_2868);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5075, BgL_auxz00_5077);
				}}
				return
					((BgL_getfieldzf2cinfozf2_bglt)
					(BgL_getfieldzf2cinfozf2_bglt) (BgL_aux4163z00_2868));
			}
		}
	}



/* _make-getfield/Cinfo */
	obj_t BGl__makezd2getfieldzf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3783,
		obj_t BgL_loc4154z00_3784, obj_t BgL_type4155z00_3785,
		obj_t BgL_sidezd2effectzf34156z21_3786, obj_t BgL_key4157z00_3787,
		obj_t BgL_exprza24158za2_3788, obj_t BgL_effect4159z00_3789,
		obj_t BgL_fname4160z00_3790, obj_t BgL_ftype4161z00_3791,
		obj_t BgL_otype4162z00_3792, obj_t BgL_approx4153z00_3793)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			return
				(obj_t) (BGl_makezd2getfieldzf2Cinfoz20zzcfa_info3z00
				(BgL_loc4154z00_3784, (BgL_typez00_bglt) (BgL_type4155z00_3785),
					BgL_sidezd2effectzf34156z21_3786, BgL_key4157z00_3787,
					BgL_exprza24158za2_3788, BgL_effect4159z00_3789,
					BgL_fname4160z00_3790, (BgL_typez00_bglt) (BgL_ftype4161z00_3791),
					(BgL_typez00_bglt) (BgL_otype4162z00_3792),
					(BgL_approxz00_bglt) (BgL_approx4153z00_3793)));
		}
	}



/* fill-getfield/Cinfo! */
	BGL_EXPORTED_DEF BgL_getfieldzf2cinfozf2_bglt
		BGl_fillzd2getfieldzf2Cinfoz12z32zzcfa_info3z00(BgL_getfieldzf2cinfozf2_bglt
		BgL_new4166z00_244, BgL_approxz00_bglt BgL_approx4165z00_245)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			{	/* Cfa/cinfo3.scm 26 */
				BgL_approxz00_bglt BgL_approx4165z00_4046;

				BgL_approx4165z00_4046 = BgL_approx4165z00_245;
				((((BgL_getfieldzf2cinfozf2_bglt) CREF(BgL_new4166z00_244))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4165z00_4046), BUNSPEC);
				return BgL_new4166z00_244;
			}
		}
	}



/* _fill-getfield/Cinfo! */
	obj_t BGl__fillzd2getfieldzf2Cinfoz12z32zzcfa_info3z00(obj_t BgL_envz00_3794,
		obj_t BgL_new4166z00_3795, obj_t BgL_approx4165z00_3796)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			{	/* Cfa/cinfo3.scm 26 */
				BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_5089;

				{	/* Cfa/cinfo3.scm 26 */
					BgL_getfieldzf2cinfozf2_bglt BgL_res5386z00_4050;

					{	/* Cfa/cinfo3.scm 26 */
						BgL_getfieldzf2cinfozf2_bglt BgL_new4166z00_4047;

						BgL_approxz00_bglt BgL_approx4165z00_4048;

						BgL_new4166z00_4047 =
							(BgL_getfieldzf2cinfozf2_bglt) (BgL_new4166z00_3795);
						BgL_approx4165z00_4048 =
							(BgL_approxz00_bglt) (BgL_approx4165z00_3796);
						{	/* Cfa/cinfo3.scm 26 */
							BgL_approxz00_bglt BgL_approx4165z00_4049;

							BgL_approx4165z00_4049 = BgL_approx4165z00_4048;
							((((BgL_getfieldzf2cinfozf2_bglt) CREF(BgL_new4166z00_4047))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4165z00_4049), BUNSPEC);
							BgL_res5386z00_4050 = BgL_new4166z00_4047;
						}
					}
					BgL_auxz00_5089 = BgL_res5386z00_4050;
				}
				return (obj_t) (BgL_auxz00_5089);
			}
		}
	}



/* %allocate-getfield/Cinfo */
	BGL_EXPORTED_DEF BgL_getfieldz00_bglt
		BGl_z52allocatezd2getfieldzf2Cinfoz72zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			{	/* Cfa/cinfo3.scm 26 */
				BgL_getfieldz00_bglt BgL_new4169z00_4051;

				BgL_new4169z00_4051 =
					((BgL_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_getfieldz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4169z00_4051),
					BGl_classzd2numzd2zz__objectz00
					(BGl_getfieldzf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 26 */
					BgL_objectz00_bglt BgL_auxz00_5098;

					BgL_auxz00_5098 = (BgL_objectz00_bglt) (BgL_new4169z00_4051);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5098, BFALSE);
				}
				return BgL_new4169z00_4051;
			}
		}
	}



/* _%allocate-getfield/Cinfo */
	obj_t BGl__z52allocatezd2getfieldzf2Cinfoz72zzcfa_info3z00(obj_t
		BgL_envz00_3554)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			{	/* Cfa/cinfo3.scm 26 */
				BgL_getfieldz00_bglt BgL_auxz00_5101;

				{	/* Cfa/cinfo3.scm 26 */
					BgL_getfieldz00_bglt BgL_res5387z00_4055;

					{	/* Cfa/cinfo3.scm 26 */
						BgL_getfieldz00_bglt BgL_new4169z00_4053;

						BgL_new4169z00_4053 =
							((BgL_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_getfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4169z00_4053),
							BGl_classzd2numzd2zz__objectz00
							(BGl_getfieldzf2Cinfozf2zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 26 */
							BgL_objectz00_bglt BgL_auxz00_5106;

							BgL_auxz00_5106 = (BgL_objectz00_bglt) (BgL_new4169z00_4053);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5106, BFALSE);
						}
						BgL_res5387z00_4055 = BgL_new4169z00_4053;
					}
					BgL_auxz00_5101 = BgL_res5387z00_4055;
				}
				return (obj_t) (BgL_auxz00_5101);
			}
		}
	}



/* getfield/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_getfieldzf2cinfozf2_bglt
		BGl_getfieldzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			if ((BGl_z52thezd2getfieldzf2Cinfozd2nilza0zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 26 */
					{	/* Cfa/cinfo3.scm 26 */
						BgL_getfieldz00_bglt BgL_res5285z00_2890;

						{	/* Cfa/cinfo3.scm 26 */
							BgL_getfieldz00_bglt BgL_new2464z00_2886;

							BgL_new2464z00_2886 =
								((BgL_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_getfieldz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2464z00_2886),
								BGl_classzd2numzd2zz__objectz00(BGl_getfieldz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 26 */
								BgL_objectz00_bglt BgL_auxz00_5116;

								BgL_auxz00_5116 = (BgL_objectz00_bglt) (BgL_new2464z00_2886);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5116, BFALSE);
							}
							BgL_res5285z00_2890 = BgL_new2464z00_2886;
						}
						BGl_z52thezd2getfieldzf2Cinfozd2nilza0zzcfa_info3z00 =
							(obj_t) (BgL_res5285z00_2890);
					}
					{	/* Cfa/cinfo3.scm 26 */
						BgL_typez00_bglt BgL_arg4996z00_1438;

						BgL_typez00_bglt BgL_arg4999z00_1441;

						BgL_typez00_bglt BgL_arg5000z00_1442;

						BgL_arg4996z00_1438 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4999z00_1441 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5000z00_1442 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 26 */
							BgL_getfieldz00_bglt BgL_res5286z00_2910;

							{	/* Cfa/cinfo3.scm 26 */
								BgL_getfieldz00_bglt BgL_new2453z00_2891;

								BgL_new2453z00_2891 =
									(BgL_getfieldz00_bglt)
									(BGl_z52thezd2getfieldzf2Cinfozd2nilza0zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 26 */
									obj_t BgL_loc2444z00_2901;

									BgL_typez00_bglt BgL_type2445z00_2902;

									obj_t BgL_sidezd2effectzf32446z21_2903;

									obj_t BgL_key2447z00_2904;

									obj_t BgL_exprza22448za2_2905;

									obj_t BgL_effect2449z00_2906;

									obj_t BgL_fname2450z00_2907;

									BgL_typez00_bglt BgL_ftype2451z00_2908;

									BgL_typez00_bglt BgL_otype2452z00_2909;

									BgL_loc2444z00_2901 = BUNSPEC;
									BgL_type2445z00_2902 = BgL_arg4996z00_1438;
									BgL_sidezd2effectzf32446z21_2903 = BUNSPEC;
									BgL_key2447z00_2904 = BUNSPEC;
									BgL_exprza22448za2_2905 = BNIL;
									BgL_effect2449z00_2906 = BUNSPEC;
									BgL_fname2450z00_2907 = BGl_string5335z00zzcfa_info3z00;
									BgL_ftype2451z00_2908 = BgL_arg4999z00_1441;
									BgL_otype2452z00_2909 = BgL_arg5000z00_1442;
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_locz00) = ((obj_t) BgL_loc2444z00_2901), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2445z00_2902), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32446z21_2903), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_keyz00) = ((obj_t) BgL_key2447z00_2904), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22448za2_2905), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_effectz00) =
										((obj_t) BgL_effect2449z00_2906), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_fnamez00) = ((obj_t) BgL_fname2450z00_2907), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2451z00_2908), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2453z00_2891))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2452z00_2909), BUNSPEC);
									BgL_res5286z00_2910 = BgL_new2453z00_2891;
							}} BgL_res5286z00_2910;
					}}
					{	/* Cfa/cinfo3.scm 26 */
						long BgL_arg5001z00_1443;

						BgL_arg5001z00_1443 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2getfieldzf2Cinfozd2nilza0zzcfa_info3z00),
							BgL_arg5001z00_1443);
					}
					{	/* Cfa/cinfo3.scm 26 */
						BgL_getfieldzf2cinfozf2_bglt BgL_arg5002z00_1444;

						{	/* Cfa/cinfo3.scm 26 */
							BgL_approxz00_bglt BgL_arg5003z00_1445;

							BgL_arg5003z00_1445 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 26 */
								BgL_getfieldzf2cinfozf2_bglt BgL_res5288z00_2919;

								{	/* Cfa/cinfo3.scm 26 */
									BgL_getfieldzf2cinfozf2_bglt BgL_new4151z00_2914;

									BgL_new4151z00_2914 =
										((BgL_getfieldzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_getfieldzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo3.scm 26 */
										BgL_getfieldzf2cinfozf2_bglt BgL_res5287z00_2918;

										{	/* Cfa/cinfo3.scm 26 */
											BgL_getfieldzf2cinfozf2_bglt BgL_new4166z00_2915;

											BgL_new4166z00_2915 = BgL_new4151z00_2914;
											{	/* Cfa/cinfo3.scm 26 */
												BgL_approxz00_bglt BgL_approx4165z00_2917;

												BgL_approx4165z00_2917 = BgL_arg5003z00_1445;
												((((BgL_getfieldzf2cinfozf2_bglt)
															CREF(BgL_new4166z00_2915))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4165z00_2917),
													BUNSPEC);
												BgL_res5287z00_2918 = BgL_new4166z00_2915;
										}} BgL_res5287z00_2918;
									}
									BgL_res5288z00_2919 = BgL_new4151z00_2914;
								}
								BgL_arg5002z00_1444 = BgL_res5288z00_2919;
						}}
						{	/* Cfa/cinfo3.scm 26 */
							obj_t BgL_auxz00_5141;

							BgL_objectz00_bglt BgL_auxz00_5139;

							BgL_auxz00_5141 = (obj_t) (BgL_arg5002z00_1444);
							BgL_auxz00_5139 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2getfieldzf2Cinfozd2nilza0zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5139, BgL_auxz00_5141);
				}}}
			else
				{	/* Cfa/cinfo3.scm 26 */
					BFALSE;
				}
			return
				(BgL_getfieldzf2cinfozf2_bglt)
				(BGl_z52thezd2getfieldzf2Cinfozd2nilza0zzcfa_info3z00);
		}
	}



/* _getfield/Cinfo-nil */
	obj_t BGl__getfieldzf2Cinfozd2nilz20zzcfa_info3z00(obj_t BgL_envz00_3555)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			return (obj_t) (BGl_getfieldzf2Cinfozd2nilz20zzcfa_info3z00());
		}
	}



/* pragma/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_pragmazf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_obj4127z00_247)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4127z00_247,
				BGl_pragmazf2Cinfozf2zzcfa_info3z00);
		}
	}



/* _pragma/Cinfo? */
	obj_t BGl__pragmazf2Cinfozf3z01zzcfa_info3z00(obj_t BgL_envz00_3552,
		obj_t BgL_obj4127z00_3553)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4127z00_3553,
					BGl_pragmazf2Cinfozf2zzcfa_info3z00));
		}
	}



/* widening-pragma/Cinfo */
	BGL_EXPORTED_DEF BgL_pragmazf2cinfozf2_bglt
		BGl_wideningzd2pragmazf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt
		BgL_approx4103z00_251)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			{	/* Cfa/cinfo3.scm 25 */
				BgL_pragmazf2cinfozf2_bglt BgL_new4104z00_2920;

				BgL_new4104z00_2920 =
					((BgL_pragmazf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_pragmazf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 25 */
					BgL_pragmazf2cinfozf2_bglt BgL_res5289z00_2924;

					{	/* Cfa/cinfo3.scm 25 */
						BgL_pragmazf2cinfozf2_bglt BgL_new4117z00_2921;

						BgL_new4117z00_2921 = BgL_new4104z00_2920;
						{	/* Cfa/cinfo3.scm 25 */
							BgL_approxz00_bglt BgL_approx4116z00_2923;

							BgL_approx4116z00_2923 = BgL_approx4103z00_251;
							((((BgL_pragmazf2cinfozf2_bglt) CREF(BgL_new4117z00_2921))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4116z00_2923), BUNSPEC);
							BgL_res5289z00_2924 = BgL_new4117z00_2921;
					}} BgL_res5289z00_2924;
				}
				return BgL_new4104z00_2920;
			}
		}
	}



/* _widening-pragma/Cinfo */
	obj_t BGl__wideningzd2pragmazf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3797,
		obj_t BgL_approx4103z00_3798)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			return
				(obj_t) (BGl_wideningzd2pragmazf2Cinfoz20zzcfa_info3z00(
					(BgL_approxz00_bglt) (BgL_approx4103z00_3798)));
		}
	}



/* make-pragma/Cinfo */
	BGL_EXPORTED_DEF BgL_pragmazf2cinfozf2_bglt
		BGl_makezd2pragmazf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc4107z00_252,
		BgL_typez00_bglt BgL_type4108z00_253, obj_t BgL_sidezd2effectzf34109z21_254,
		obj_t BgL_key4110z00_255, obj_t BgL_exprza24111za2_256,
		obj_t BgL_effect4112z00_257, obj_t BgL_format4113z00_258,
		BgL_approxz00_bglt BgL_approx4106z00_259)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			{	/* Cfa/cinfo3.scm 25 */
				BgL_pragmaz00_bglt BgL_aux4114z00_2925;

				BgL_aux4114z00_2925 =
					BGl_makezd2pragmazd2zzast_nodez00(BgL_loc4107z00_252,
					BgL_type4108z00_253, BgL_sidezd2effectzf34109z21_254,
					BgL_key4110z00_255, BgL_exprza24111za2_256, BgL_effect4112z00_257,
					BgL_format4113z00_258);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4114z00_2925),
					BGl_classzd2numzd2zz__objectz00(BGl_pragmazf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 25 */
					BgL_pragmazf2cinfozf2_bglt BgL_arg5005z00_2927;

					{	/* Cfa/cinfo3.scm 25 */
						BgL_pragmazf2cinfozf2_bglt BgL_res5291z00_2937;

						{	/* Cfa/cinfo3.scm 25 */
							BgL_pragmazf2cinfozf2_bglt BgL_new4104z00_2932;

							BgL_new4104z00_2932 =
								((BgL_pragmazf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_pragmazf2cinfozf2_bgl))));
							{	/* Cfa/cinfo3.scm 25 */
								BgL_pragmazf2cinfozf2_bglt BgL_res5290z00_2936;

								{	/* Cfa/cinfo3.scm 25 */
									BgL_pragmazf2cinfozf2_bglt BgL_new4117z00_2933;

									BgL_new4117z00_2933 = BgL_new4104z00_2932;
									{	/* Cfa/cinfo3.scm 25 */
										BgL_approxz00_bglt BgL_approx4116z00_2935;

										BgL_approx4116z00_2935 = BgL_approx4106z00_259;
										((((BgL_pragmazf2cinfozf2_bglt) CREF(BgL_new4117z00_2933))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4116z00_2935), BUNSPEC);
										BgL_res5290z00_2936 = BgL_new4117z00_2933;
								}} BgL_res5290z00_2936;
							}
							BgL_res5291z00_2937 = BgL_new4104z00_2932;
						}
						BgL_arg5005z00_2927 = BgL_res5291z00_2937;
					}
					{	/* Cfa/cinfo3.scm 25 */
						obj_t BgL_auxz00_5163;

						BgL_objectz00_bglt BgL_auxz00_5161;

						BgL_auxz00_5163 = (obj_t) (BgL_arg5005z00_2927);
						BgL_auxz00_5161 = (BgL_objectz00_bglt) (BgL_aux4114z00_2925);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5161, BgL_auxz00_5163);
				}}
				return
					((BgL_pragmazf2cinfozf2_bglt)
					(BgL_pragmazf2cinfozf2_bglt) (BgL_aux4114z00_2925));
			}
		}
	}



/* _make-pragma/Cinfo */
	obj_t BGl__makezd2pragmazf2Cinfoz20zzcfa_info3z00(obj_t BgL_envz00_3799,
		obj_t BgL_loc4107z00_3800, obj_t BgL_type4108z00_3801,
		obj_t BgL_sidezd2effectzf34109z21_3802, obj_t BgL_key4110z00_3803,
		obj_t BgL_exprza24111za2_3804, obj_t BgL_effect4112z00_3805,
		obj_t BgL_format4113z00_3806, obj_t BgL_approx4106z00_3807)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			return
				(obj_t) (BGl_makezd2pragmazf2Cinfoz20zzcfa_info3z00(BgL_loc4107z00_3800,
					(BgL_typez00_bglt) (BgL_type4108z00_3801),
					BgL_sidezd2effectzf34109z21_3802, BgL_key4110z00_3803,
					BgL_exprza24111za2_3804, BgL_effect4112z00_3805,
					BgL_format4113z00_3806,
					(BgL_approxz00_bglt) (BgL_approx4106z00_3807)));
		}
	}



/* fill-pragma/Cinfo! */
	BGL_EXPORTED_DEF BgL_pragmazf2cinfozf2_bglt
		BGl_fillzd2pragmazf2Cinfoz12z32zzcfa_info3z00(BgL_pragmazf2cinfozf2_bglt
		BgL_new4117z00_260, BgL_approxz00_bglt BgL_approx4116z00_261)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			{	/* Cfa/cinfo3.scm 25 */
				BgL_approxz00_bglt BgL_approx4116z00_4057;

				BgL_approx4116z00_4057 = BgL_approx4116z00_261;
				((((BgL_pragmazf2cinfozf2_bglt) CREF(BgL_new4117z00_260))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4116z00_4057), BUNSPEC);
				return BgL_new4117z00_260;
			}
		}
	}



/* _fill-pragma/Cinfo! */
	obj_t BGl__fillzd2pragmazf2Cinfoz12z32zzcfa_info3z00(obj_t BgL_envz00_3808,
		obj_t BgL_new4117z00_3809, obj_t BgL_approx4116z00_3810)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			{	/* Cfa/cinfo3.scm 25 */
				BgL_pragmazf2cinfozf2_bglt BgL_auxz00_5173;

				{	/* Cfa/cinfo3.scm 25 */
					BgL_pragmazf2cinfozf2_bglt BgL_res5388z00_4061;

					{	/* Cfa/cinfo3.scm 25 */
						BgL_pragmazf2cinfozf2_bglt BgL_new4117z00_4058;

						BgL_approxz00_bglt BgL_approx4116z00_4059;

						BgL_new4117z00_4058 =
							(BgL_pragmazf2cinfozf2_bglt) (BgL_new4117z00_3809);
						BgL_approx4116z00_4059 =
							(BgL_approxz00_bglt) (BgL_approx4116z00_3810);
						{	/* Cfa/cinfo3.scm 25 */
							BgL_approxz00_bglt BgL_approx4116z00_4060;

							BgL_approx4116z00_4060 = BgL_approx4116z00_4059;
							((((BgL_pragmazf2cinfozf2_bglt) CREF(BgL_new4117z00_4058))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4116z00_4060), BUNSPEC);
							BgL_res5388z00_4061 = BgL_new4117z00_4058;
						}
					}
					BgL_auxz00_5173 = BgL_res5388z00_4061;
				}
				return (obj_t) (BgL_auxz00_5173);
			}
		}
	}



/* %allocate-pragma/Cinfo */
	BGL_EXPORTED_DEF BgL_pragmaz00_bglt
		BGl_z52allocatezd2pragmazf2Cinfoz72zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			{	/* Cfa/cinfo3.scm 25 */
				BgL_pragmaz00_bglt BgL_new4120z00_4062;

				BgL_new4120z00_4062 =
					((BgL_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_pragmaz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4120z00_4062),
					BGl_classzd2numzd2zz__objectz00(BGl_pragmazf2Cinfozf2zzcfa_info3z00));
				{	/* Cfa/cinfo3.scm 25 */
					BgL_objectz00_bglt BgL_auxz00_5182;

					BgL_auxz00_5182 = (BgL_objectz00_bglt) (BgL_new4120z00_4062);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5182, BFALSE);
				}
				return BgL_new4120z00_4062;
			}
		}
	}



/* _%allocate-pragma/Cinfo */
	obj_t BGl__z52allocatezd2pragmazf2Cinfoz72zzcfa_info3z00(obj_t
		BgL_envz00_3550)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			{	/* Cfa/cinfo3.scm 25 */
				BgL_pragmaz00_bglt BgL_auxz00_5185;

				{	/* Cfa/cinfo3.scm 25 */
					BgL_pragmaz00_bglt BgL_res5389z00_4066;

					{	/* Cfa/cinfo3.scm 25 */
						BgL_pragmaz00_bglt BgL_new4120z00_4064;

						BgL_new4120z00_4064 =
							((BgL_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_pragmaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4120z00_4064),
							BGl_classzd2numzd2zz__objectz00
							(BGl_pragmazf2Cinfozf2zzcfa_info3z00));
						{	/* Cfa/cinfo3.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_5190;

							BgL_auxz00_5190 = (BgL_objectz00_bglt) (BgL_new4120z00_4064);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5190, BFALSE);
						}
						BgL_res5389z00_4066 = BgL_new4120z00_4064;
					}
					BgL_auxz00_5185 = BgL_res5389z00_4066;
				}
				return (obj_t) (BgL_auxz00_5185);
			}
		}
	}



/* pragma/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_pragmazf2cinfozf2_bglt
		BGl_pragmazf2Cinfozd2nilz20zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			if ((BGl_z52thezd2pragmazf2Cinfozd2nilza0zzcfa_info3z00 == BUNSPEC))
				{	/* Cfa/cinfo3.scm 25 */
					{	/* Cfa/cinfo3.scm 25 */
						BgL_pragmaz00_bglt BgL_res5292z00_2947;

						{	/* Cfa/cinfo3.scm 25 */
							BgL_pragmaz00_bglt BgL_new2414z00_2943;

							BgL_new2414z00_2943 =
								((BgL_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_pragmaz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2414z00_2943),
								BGl_classzd2numzd2zz__objectz00(BGl_pragmaz00zzast_nodez00));
							{	/* Cfa/cinfo3.scm 25 */
								BgL_objectz00_bglt BgL_auxz00_5200;

								BgL_auxz00_5200 = (BgL_objectz00_bglt) (BgL_new2414z00_2943);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5200, BFALSE);
							}
							BgL_res5292z00_2947 = BgL_new2414z00_2943;
						}
						BGl_z52thezd2pragmazf2Cinfozd2nilza0zzcfa_info3z00 =
							(obj_t) (BgL_res5292z00_2947);
					}
					{	/* Cfa/cinfo3.scm 25 */
						BgL_typez00_bglt BgL_arg5008z00_1455;

						BgL_arg5008z00_1455 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo3.scm 25 */
							BgL_pragmaz00_bglt BgL_res5293z00_2963;

							{	/* Cfa/cinfo3.scm 25 */
								BgL_pragmaz00_bglt BgL_new2405z00_2948;

								BgL_new2405z00_2948 =
									(BgL_pragmaz00_bglt)
									(BGl_z52thezd2pragmazf2Cinfozd2nilza0zzcfa_info3z00);
								{	/* Cfa/cinfo3.scm 25 */
									obj_t BgL_loc2398z00_2956;

									BgL_typez00_bglt BgL_type2399z00_2957;

									obj_t BgL_sidezd2effectzf32400z21_2958;

									obj_t BgL_key2401z00_2959;

									obj_t BgL_exprza22402za2_2960;

									obj_t BgL_effect2403z00_2961;

									obj_t BgL_format2404z00_2962;

									BgL_loc2398z00_2956 = BUNSPEC;
									BgL_type2399z00_2957 = BgL_arg5008z00_1455;
									BgL_sidezd2effectzf32400z21_2958 = BUNSPEC;
									BgL_key2401z00_2959 = BUNSPEC;
									BgL_exprza22402za2_2960 = BNIL;
									BgL_effect2403z00_2961 = BUNSPEC;
									BgL_format2404z00_2962 = BGl_string5335z00zzcfa_info3z00;
									((((BgL_pragmaz00_bglt) CREF(BgL_new2405z00_2948))->
											BgL_locz00) = ((obj_t) BgL_loc2398z00_2956), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2405z00_2948))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2399z00_2957), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2405z00_2948))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32400z21_2958), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2405z00_2948))->
											BgL_keyz00) = ((obj_t) BgL_key2401z00_2959), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2405z00_2948))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22402za2_2960), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2405z00_2948))->
											BgL_effectz00) =
										((obj_t) BgL_effect2403z00_2961), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2405z00_2948))->
											BgL_formatz00) =
										((obj_t) BgL_format2404z00_2962), BUNSPEC);
									BgL_res5293z00_2963 = BgL_new2405z00_2948;
							}} BgL_res5293z00_2963;
					}}
					{	/* Cfa/cinfo3.scm 25 */
						long BgL_arg5011z00_1458;

						BgL_arg5011z00_1458 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_pragmazf2Cinfozf2zzcfa_info3z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2pragmazf2Cinfozd2nilza0zzcfa_info3z00),
							BgL_arg5011z00_1458);
					}
					{	/* Cfa/cinfo3.scm 25 */
						BgL_pragmazf2cinfozf2_bglt BgL_arg5012z00_1459;

						{	/* Cfa/cinfo3.scm 25 */
							BgL_approxz00_bglt BgL_arg5013z00_1460;

							BgL_arg5013z00_1460 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo3.scm 25 */
								BgL_pragmazf2cinfozf2_bglt BgL_res5295z00_2972;

								{	/* Cfa/cinfo3.scm 25 */
									BgL_pragmazf2cinfozf2_bglt BgL_new4104z00_2967;

									BgL_new4104z00_2967 =
										((BgL_pragmazf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_pragmazf2cinfozf2_bgl))));
									{	/* Cfa/cinfo3.scm 25 */
										BgL_pragmazf2cinfozf2_bglt BgL_res5294z00_2971;

										{	/* Cfa/cinfo3.scm 25 */
											BgL_pragmazf2cinfozf2_bglt BgL_new4117z00_2968;

											BgL_new4117z00_2968 = BgL_new4104z00_2967;
											{	/* Cfa/cinfo3.scm 25 */
												BgL_approxz00_bglt BgL_approx4116z00_2970;

												BgL_approx4116z00_2970 = BgL_arg5013z00_1460;
												((((BgL_pragmazf2cinfozf2_bglt)
															CREF(BgL_new4117z00_2968))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4116z00_2970),
													BUNSPEC);
												BgL_res5294z00_2971 = BgL_new4117z00_2968;
										}} BgL_res5294z00_2971;
									}
									BgL_res5295z00_2972 = BgL_new4104z00_2967;
								}
								BgL_arg5012z00_1459 = BgL_res5295z00_2972;
						}}
						{	/* Cfa/cinfo3.scm 25 */
							obj_t BgL_auxz00_5221;

							BgL_objectz00_bglt BgL_auxz00_5219;

							BgL_auxz00_5221 = (obj_t) (BgL_arg5012z00_1459);
							BgL_auxz00_5219 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2pragmazf2Cinfozd2nilza0zzcfa_info3z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5219, BgL_auxz00_5221);
				}}}
			else
				{	/* Cfa/cinfo3.scm 25 */
					BFALSE;
				}
			return
				(BgL_pragmazf2cinfozf2_bglt)
				(BGl_z52thezd2pragmazf2Cinfozd2nilza0zzcfa_info3z00);
		}
	}



/* _pragma/Cinfo-nil */
	obj_t BGl__pragmazf2Cinfozd2nilz20zzcfa_info3z00(obj_t BgL_envz00_3551)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			return (obj_t) (BGl_pragmazf2Cinfozd2nilz20zzcfa_info3z00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc5336z00zzcfa_info3z00, BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc5338z00zzcfa_info3z00, BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_valloczf2Cinfozf2zzcfa_info3z00, BGl_proc5340z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_valloczf2Cinfozf2zzcfa_info3z00, BGl_proc5341z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00,
				BGl_proc5342z00zzcfa_info3z00, BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00,
				BGl_proc5343z00zzcfa_info3z00, BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_vlengthzf2Cinfozf2zzcfa_info3z00, BGl_proc5344z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_vlengthzf2Cinfozf2zzcfa_info3z00, BGl_proc5345z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_vsetz12zf2Cinfoze0zzcfa_info3z00, BGl_proc5346z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_vsetz12zf2Cinfoze0zzcfa_info3z00, BGl_proc5347z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_vrefzf2Cinfozf2zzcfa_info3z00, BGl_proc5348z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_vrefzf2Cinfozf2zzcfa_info3z00, BGl_proc5349z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00, BGl_proc5350z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00, BGl_proc5351z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_isazf2Cinfozf2zzcfa_info3z00, BGl_proc5352z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_isazf2Cinfozf2zzcfa_info3z00, BGl_proc5353z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_newzf2Cinfozf2zzcfa_info3z00, BGl_proc5354z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_newzf2Cinfozf2zzcfa_info3z00, BGl_proc5355z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_setfieldzf2Cinfozf2zzcfa_info3z00, BGl_proc5356z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_setfieldzf2Cinfozf2zzcfa_info3z00, BGl_proc5357z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_getfieldzf2Cinfozf2zzcfa_info3z00, BGl_proc5358z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_getfieldzf2Cinfozf2zzcfa_info3z00, BGl_proc5359z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_pragmazf2Cinfozf2zzcfa_info3z00, BGl_proc5360z00zzcfa_info3z00,
				BGl_string5337z00zzcfa_info3z00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_pragmazf2Cinfozf2zzcfa_info3z00, BGl_proc5361z00zzcfa_info3z00,
				BGl_string5339z00zzcfa_info3z00);
		}
	}



/* struct+object->objec4810 */
	obj_t BGl_structzb2objectzd2ze3objec4810z83zzcfa_info3z00(obj_t
		BgL_envz00_3840, obj_t BgL_oz00_3841, obj_t BgL_sz00_3842)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			{
				BgL_pragmazf2cinfozf2_bglt BgL_oz00_2208;

				obj_t BgL_sz00_2209;

				{	/* Cfa/cinfo3.scm 25 */
					BgL_pragmazf2cinfozf2_bglt BgL_auxz00_5251;

					BgL_oz00_2208 = (BgL_pragmazf2cinfozf2_bglt) (BgL_oz00_3841);
					BgL_sz00_2209 = BgL_sz00_3842;
					{

						{	/* Cfa/cinfo3.scm 25 */
							obj_t BgL_old4124z00_2212;

							obj_t BgL_aux4125z00_2213;

							{	/* Cfa/cinfo3.scm 25 */
								obj_t BgL_nextzd2method4809zd2_2218;

								BgL_nextzd2method4809zd2_2218 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2208),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_pragmazf2Cinfozf2zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4809zd2_2218))
									{	/* Cfa/cinfo3.scm 25 */
										BgL_old4124z00_2212 =
											PROCEDURE_ENTRY(BgL_nextzd2method4809zd2_2218)
											(BgL_nextzd2method4809zd2_2218, (obj_t) (BgL_oz00_2208),
											BgL_sz00_2209, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 25 */
										BgL_old4124z00_2212 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2208), BgL_sz00_2209));
									}
							}
							BgL_aux4125z00_2213 =
								STRUCT_REF(BgL_sz00_2209, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 25 */
								BgL_pragmazf2cinfozf2_bglt BgL_new4126z00_2214;

								BgL_new4126z00_2214 =
									((BgL_pragmazf2cinfozf2_bglt) (BgL_old4124z00_2212));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4126z00_2214),
									BGl_classzd2numzd2zz__objectz00
									(BGl_pragmazf2Cinfozf2zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 25 */
									BgL_pragmazf2cinfozf2_bglt BgL_arg5209z00_2216;

									{	/* Cfa/cinfo3.scm 25 */
										obj_t BgL_arg5210z00_2217;

										BgL_arg5210z00_2217 =
											STRUCT_REF(BgL_aux4125z00_2213, (int) (((long) 0)));
										{	/* Cfa/cinfo3.scm 25 */
											BgL_pragmazf2cinfozf2_bglt BgL_res5331z00_3548;

											{	/* Cfa/cinfo3.scm 25 */
												BgL_approxz00_bglt BgL_approx4103z00_3542;

												BgL_approx4103z00_3542 =
													(BgL_approxz00_bglt) (BgL_arg5210z00_2217);
												{	/* Cfa/cinfo3.scm 25 */
													BgL_pragmazf2cinfozf2_bglt BgL_new4104z00_3543;

													BgL_new4104z00_3543 =
														((BgL_pragmazf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_pragmazf2cinfozf2_bgl))));
													{	/* Cfa/cinfo3.scm 25 */
														BgL_pragmazf2cinfozf2_bglt BgL_res5330z00_3547;

														{	/* Cfa/cinfo3.scm 25 */
															BgL_pragmazf2cinfozf2_bglt BgL_new4117z00_3544;

															BgL_new4117z00_3544 = BgL_new4104z00_3543;
															{	/* Cfa/cinfo3.scm 25 */
																BgL_approxz00_bglt BgL_approx4116z00_3546;

																BgL_approx4116z00_3546 = BgL_approx4103z00_3542;
																((((BgL_pragmazf2cinfozf2_bglt)
																			CREF(BgL_new4117z00_3544))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4116z00_3546),
																	BUNSPEC);
																BgL_res5330z00_3547 = BgL_new4117z00_3544;
														}} BgL_res5330z00_3547;
													}
													BgL_res5331z00_3548 = BgL_new4104z00_3543;
											}}
											BgL_arg5209z00_2216 = BgL_res5331z00_3548;
									}}
									{	/* Cfa/cinfo3.scm 25 */
										obj_t BgL_auxz00_5275;

										BgL_objectz00_bglt BgL_auxz00_5273;

										BgL_auxz00_5275 = (obj_t) (BgL_arg5209z00_2216);
										BgL_auxz00_5273 =
											(BgL_objectz00_bglt) (BgL_new4126z00_2214);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5273, BgL_auxz00_5275);
								}}
								BgL_auxz00_5251 = BgL_new4126z00_2214;
					}}}
					return (obj_t) (BgL_auxz00_5251);
				}
			}
		}
	}



/* object->struct-pragm4808 */
	obj_t BGl_objectzd2ze3structzd2pragm4808ze3zzcfa_info3z00(obj_t
		BgL_envz00_3843, obj_t BgL_obj4121z00_3844)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 25 */
			{
				BgL_pragmazf2cinfozf2_bglt BgL_obj4121z00_2198;

				BgL_obj4121z00_2198 =
					(BgL_pragmazf2cinfozf2_bglt) (BgL_obj4121z00_3844);
				{

					{	/* Cfa/cinfo3.scm 25 */
						obj_t BgL_res4122z00_2201;

						{	/* Cfa/cinfo3.scm 25 */
							obj_t BgL_nextzd2method4807zd2_2206;

							BgL_nextzd2method4807zd2_2206 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4121z00_2198),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_pragmazf2Cinfozf2zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4807zd2_2206))
								{	/* Cfa/cinfo3.scm 25 */
									BgL_res4122z00_2201 =
										PROCEDURE_ENTRY(BgL_nextzd2method4807zd2_2206)
										(BgL_nextzd2method4807zd2_2206,
										(obj_t) (BgL_obj4121z00_2198), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 25 */
									BgL_res4122z00_2201 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4121z00_2198));
								}
						}
						{	/* Cfa/cinfo3.scm 25 */
							obj_t BgL_aux4123z00_2202;

							{	/* Cfa/cinfo3.scm 25 */
								obj_t BgL_keyz00_3519;

								BgL_keyz00_3519 = CNST_TABLE_REF(((long) 0));
								BgL_aux4123z00_2202 =
									make_struct(BgL_keyz00_3519, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 25 */
								BgL_approxz00_bglt BgL_arg5205z00_2204;

								{
									obj_t BgL_auxz00_5292;

									{	/* Cfa/cinfo3.scm 25 */
										BgL_objectz00_bglt BgL_auxz00_5293;

										BgL_auxz00_5293 =
											(BgL_objectz00_bglt) (BgL_obj4121z00_2198);
										BgL_auxz00_5292 = BGL_OBJECT_WIDENING(BgL_auxz00_5293);
									}
									BgL_arg5205z00_2204 =
										(((BgL_pragmazf2cinfozf2_bglt) CREF(BgL_auxz00_5292))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 25 */
									obj_t BgL_auxz00_5299;

									int BgL_auxz00_5297;

									BgL_auxz00_5299 = (obj_t) (BgL_arg5205z00_2204);
									BgL_auxz00_5297 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4123z00_2202, BgL_auxz00_5297,
										BgL_auxz00_5299);
							}}
							{	/* Cfa/cinfo3.scm 25 */
								int BgL_auxz00_5302;

								BgL_auxz00_5302 = (int) (((long) 0));
								STRUCT_SET(BgL_res4122z00_2201, BgL_auxz00_5302,
									BgL_aux4123z00_2202);
							}
							{	/* Cfa/cinfo3.scm 25 */
								obj_t BgL_auxz00_5305;

								BgL_auxz00_5305 = STRUCT_KEY(BgL_res4122z00_2201);
								STRUCT_KEY_SET(BgL_aux4123z00_2202, BgL_auxz00_5305);
							}
							{	/* Cfa/cinfo3.scm 25 */
								obj_t BgL_kz00_3534;

								BgL_kz00_3534 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res4122z00_2201, BgL_kz00_3534);
							}
							return BgL_res4122z00_2201;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4806 */
	obj_t BGl_structzb2objectzd2ze3objec4806z83zzcfa_info3z00(obj_t
		BgL_envz00_3845, obj_t BgL_oz00_3846, obj_t BgL_sz00_3847)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			{
				BgL_getfieldzf2cinfozf2_bglt BgL_oz00_2186;

				obj_t BgL_sz00_2187;

				{	/* Cfa/cinfo3.scm 26 */
					BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_5311;

					BgL_oz00_2186 = (BgL_getfieldzf2cinfozf2_bglt) (BgL_oz00_3846);
					BgL_sz00_2187 = BgL_sz00_3847;
					{

						{	/* Cfa/cinfo3.scm 26 */
							obj_t BgL_old4173z00_2190;

							obj_t BgL_aux4174z00_2191;

							{	/* Cfa/cinfo3.scm 26 */
								obj_t BgL_nextzd2method4805zd2_2196;

								BgL_nextzd2method4805zd2_2196 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2186),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4805zd2_2196))
									{	/* Cfa/cinfo3.scm 26 */
										BgL_old4173z00_2190 =
											PROCEDURE_ENTRY(BgL_nextzd2method4805zd2_2196)
											(BgL_nextzd2method4805zd2_2196, (obj_t) (BgL_oz00_2186),
											BgL_sz00_2187, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 26 */
										BgL_old4173z00_2190 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2186), BgL_sz00_2187));
									}
							}
							BgL_aux4174z00_2191 =
								STRUCT_REF(BgL_sz00_2187, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 26 */
								BgL_getfieldzf2cinfozf2_bglt BgL_new4175z00_2192;

								BgL_new4175z00_2192 =
									((BgL_getfieldzf2cinfozf2_bglt) (BgL_old4173z00_2190));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4175z00_2192),
									BGl_classzd2numzd2zz__objectz00
									(BGl_getfieldzf2Cinfozf2zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 26 */
									BgL_getfieldzf2cinfozf2_bglt BgL_arg5201z00_2194;

									{	/* Cfa/cinfo3.scm 26 */
										obj_t BgL_arg5202z00_2195;

										BgL_arg5202z00_2195 =
											STRUCT_REF(BgL_aux4174z00_2191, (int) (((long) 0)));
										{	/* Cfa/cinfo3.scm 26 */
											BgL_getfieldzf2cinfozf2_bglt BgL_res5328z00_3517;

											{	/* Cfa/cinfo3.scm 26 */
												BgL_approxz00_bglt BgL_approx4150z00_3511;

												BgL_approx4150z00_3511 =
													(BgL_approxz00_bglt) (BgL_arg5202z00_2195);
												{	/* Cfa/cinfo3.scm 26 */
													BgL_getfieldzf2cinfozf2_bglt BgL_new4151z00_3512;

													BgL_new4151z00_3512 =
														((BgL_getfieldzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_getfieldzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo3.scm 26 */
														BgL_getfieldzf2cinfozf2_bglt BgL_res5327z00_3516;

														{	/* Cfa/cinfo3.scm 26 */
															BgL_getfieldzf2cinfozf2_bglt BgL_new4166z00_3513;

															BgL_new4166z00_3513 = BgL_new4151z00_3512;
															{	/* Cfa/cinfo3.scm 26 */
																BgL_approxz00_bglt BgL_approx4165z00_3515;

																BgL_approx4165z00_3515 = BgL_approx4150z00_3511;
																((((BgL_getfieldzf2cinfozf2_bglt)
																			CREF(BgL_new4166z00_3513))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4165z00_3515),
																	BUNSPEC);
																BgL_res5327z00_3516 = BgL_new4166z00_3513;
														}} BgL_res5327z00_3516;
													}
													BgL_res5328z00_3517 = BgL_new4151z00_3512;
											}}
											BgL_arg5201z00_2194 = BgL_res5328z00_3517;
									}}
									{	/* Cfa/cinfo3.scm 26 */
										obj_t BgL_auxz00_5335;

										BgL_objectz00_bglt BgL_auxz00_5333;

										BgL_auxz00_5335 = (obj_t) (BgL_arg5201z00_2194);
										BgL_auxz00_5333 =
											(BgL_objectz00_bglt) (BgL_new4175z00_2192);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5333, BgL_auxz00_5335);
								}}
								BgL_auxz00_5311 = BgL_new4175z00_2192;
					}}}
					return (obj_t) (BgL_auxz00_5311);
				}
			}
		}
	}



/* object->struct-getfi4803 */
	obj_t BGl_objectzd2ze3structzd2getfi4803ze3zzcfa_info3z00(obj_t
		BgL_envz00_3848, obj_t BgL_obj4170z00_3849)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 26 */
			{
				BgL_getfieldzf2cinfozf2_bglt BgL_obj4170z00_2176;

				BgL_obj4170z00_2176 =
					(BgL_getfieldzf2cinfozf2_bglt) (BgL_obj4170z00_3849);
				{

					{	/* Cfa/cinfo3.scm 26 */
						obj_t BgL_res4171z00_2179;

						{	/* Cfa/cinfo3.scm 26 */
							obj_t BgL_nextzd2method4802zd2_2184;

							BgL_nextzd2method4802zd2_2184 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4170z00_2176),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4802zd2_2184))
								{	/* Cfa/cinfo3.scm 26 */
									BgL_res4171z00_2179 =
										PROCEDURE_ENTRY(BgL_nextzd2method4802zd2_2184)
										(BgL_nextzd2method4802zd2_2184,
										(obj_t) (BgL_obj4170z00_2176), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 26 */
									BgL_res4171z00_2179 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4170z00_2176));
								}
						}
						{	/* Cfa/cinfo3.scm 26 */
							obj_t BgL_aux4172z00_2180;

							{	/* Cfa/cinfo3.scm 26 */
								obj_t BgL_keyz00_3488;

								BgL_keyz00_3488 = CNST_TABLE_REF(((long) 1));
								BgL_aux4172z00_2180 =
									make_struct(BgL_keyz00_3488, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 26 */
								BgL_approxz00_bglt BgL_arg5197z00_2182;

								{
									obj_t BgL_auxz00_5352;

									{	/* Cfa/cinfo3.scm 26 */
										BgL_objectz00_bglt BgL_auxz00_5353;

										BgL_auxz00_5353 =
											(BgL_objectz00_bglt) (BgL_obj4170z00_2176);
										BgL_auxz00_5352 = BGL_OBJECT_WIDENING(BgL_auxz00_5353);
									}
									BgL_arg5197z00_2182 =
										(((BgL_getfieldzf2cinfozf2_bglt) CREF(BgL_auxz00_5352))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 26 */
									obj_t BgL_auxz00_5359;

									int BgL_auxz00_5357;

									BgL_auxz00_5359 = (obj_t) (BgL_arg5197z00_2182);
									BgL_auxz00_5357 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4172z00_2180, BgL_auxz00_5357,
										BgL_auxz00_5359);
							}}
							{	/* Cfa/cinfo3.scm 26 */
								int BgL_auxz00_5362;

								BgL_auxz00_5362 = (int) (((long) 0));
								STRUCT_SET(BgL_res4171z00_2179, BgL_auxz00_5362,
									BgL_aux4172z00_2180);
							}
							{	/* Cfa/cinfo3.scm 26 */
								obj_t BgL_auxz00_5365;

								BgL_auxz00_5365 = STRUCT_KEY(BgL_res4171z00_2179);
								STRUCT_KEY_SET(BgL_aux4172z00_2180, BgL_auxz00_5365);
							}
							{	/* Cfa/cinfo3.scm 26 */
								obj_t BgL_kz00_3503;

								BgL_kz00_3503 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res4171z00_2179, BgL_kz00_3503);
							}
							return BgL_res4171z00_2179;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4800 */
	obj_t BGl_structzb2objectzd2ze3objec4800z83zzcfa_info3z00(obj_t
		BgL_envz00_3850, obj_t BgL_oz00_3851, obj_t BgL_sz00_3852)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			{
				BgL_setfieldzf2cinfozf2_bglt BgL_oz00_2164;

				obj_t BgL_sz00_2165;

				{	/* Cfa/cinfo3.scm 27 */
					BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_5371;

					BgL_oz00_2164 = (BgL_setfieldzf2cinfozf2_bglt) (BgL_oz00_3851);
					BgL_sz00_2165 = BgL_sz00_3852;
					{

						{	/* Cfa/cinfo3.scm 27 */
							obj_t BgL_old4222z00_2168;

							obj_t BgL_aux4223z00_2169;

							{	/* Cfa/cinfo3.scm 27 */
								obj_t BgL_nextzd2method4799zd2_2174;

								BgL_nextzd2method4799zd2_2174 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2164),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4799zd2_2174))
									{	/* Cfa/cinfo3.scm 27 */
										BgL_old4222z00_2168 =
											PROCEDURE_ENTRY(BgL_nextzd2method4799zd2_2174)
											(BgL_nextzd2method4799zd2_2174, (obj_t) (BgL_oz00_2164),
											BgL_sz00_2165, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 27 */
										BgL_old4222z00_2168 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2164), BgL_sz00_2165));
									}
							}
							BgL_aux4223z00_2169 =
								STRUCT_REF(BgL_sz00_2165, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 27 */
								BgL_setfieldzf2cinfozf2_bglt BgL_new4224z00_2170;

								BgL_new4224z00_2170 =
									((BgL_setfieldzf2cinfozf2_bglt) (BgL_old4222z00_2168));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4224z00_2170),
									BGl_classzd2numzd2zz__objectz00
									(BGl_setfieldzf2Cinfozf2zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 27 */
									BgL_setfieldzf2cinfozf2_bglt BgL_arg5193z00_2172;

									{	/* Cfa/cinfo3.scm 27 */
										obj_t BgL_arg5194z00_2173;

										BgL_arg5194z00_2173 =
											STRUCT_REF(BgL_aux4223z00_2169, (int) (((long) 0)));
										{	/* Cfa/cinfo3.scm 27 */
											BgL_setfieldzf2cinfozf2_bglt BgL_res5325z00_3486;

											{	/* Cfa/cinfo3.scm 27 */
												BgL_approxz00_bglt BgL_approx4199z00_3480;

												BgL_approx4199z00_3480 =
													(BgL_approxz00_bglt) (BgL_arg5194z00_2173);
												{	/* Cfa/cinfo3.scm 27 */
													BgL_setfieldzf2cinfozf2_bglt BgL_new4200z00_3481;

													BgL_new4200z00_3481 =
														((BgL_setfieldzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_setfieldzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo3.scm 27 */
														BgL_setfieldzf2cinfozf2_bglt BgL_res5324z00_3485;

														{	/* Cfa/cinfo3.scm 27 */
															BgL_setfieldzf2cinfozf2_bglt BgL_new4215z00_3482;

															BgL_new4215z00_3482 = BgL_new4200z00_3481;
															{	/* Cfa/cinfo3.scm 27 */
																BgL_approxz00_bglt BgL_approx4214z00_3484;

																BgL_approx4214z00_3484 = BgL_approx4199z00_3480;
																((((BgL_setfieldzf2cinfozf2_bglt)
																			CREF(BgL_new4215z00_3482))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4214z00_3484),
																	BUNSPEC);
																BgL_res5324z00_3485 = BgL_new4215z00_3482;
														}} BgL_res5324z00_3485;
													}
													BgL_res5325z00_3486 = BgL_new4200z00_3481;
											}}
											BgL_arg5193z00_2172 = BgL_res5325z00_3486;
									}}
									{	/* Cfa/cinfo3.scm 27 */
										obj_t BgL_auxz00_5395;

										BgL_objectz00_bglt BgL_auxz00_5393;

										BgL_auxz00_5395 = (obj_t) (BgL_arg5193z00_2172);
										BgL_auxz00_5393 =
											(BgL_objectz00_bglt) (BgL_new4224z00_2170);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5393, BgL_auxz00_5395);
								}}
								BgL_auxz00_5371 = BgL_new4224z00_2170;
					}}}
					return (obj_t) (BgL_auxz00_5371);
				}
			}
		}
	}



/* object->struct-setfi4798 */
	obj_t BGl_objectzd2ze3structzd2setfi4798ze3zzcfa_info3z00(obj_t
		BgL_envz00_3853, obj_t BgL_obj4219z00_3854)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 27 */
			{
				BgL_setfieldzf2cinfozf2_bglt BgL_obj4219z00_2154;

				BgL_obj4219z00_2154 =
					(BgL_setfieldzf2cinfozf2_bglt) (BgL_obj4219z00_3854);
				{

					{	/* Cfa/cinfo3.scm 27 */
						obj_t BgL_res4220z00_2157;

						{	/* Cfa/cinfo3.scm 27 */
							obj_t BgL_nextzd2method4797zd2_2162;

							BgL_nextzd2method4797zd2_2162 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4219z00_2154),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4797zd2_2162))
								{	/* Cfa/cinfo3.scm 27 */
									BgL_res4220z00_2157 =
										PROCEDURE_ENTRY(BgL_nextzd2method4797zd2_2162)
										(BgL_nextzd2method4797zd2_2162,
										(obj_t) (BgL_obj4219z00_2154), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 27 */
									BgL_res4220z00_2157 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4219z00_2154));
								}
						}
						{	/* Cfa/cinfo3.scm 27 */
							obj_t BgL_aux4221z00_2158;

							{	/* Cfa/cinfo3.scm 27 */
								obj_t BgL_keyz00_3457;

								BgL_keyz00_3457 = CNST_TABLE_REF(((long) 2));
								BgL_aux4221z00_2158 =
									make_struct(BgL_keyz00_3457, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 27 */
								BgL_approxz00_bglt BgL_arg5189z00_2160;

								{
									obj_t BgL_auxz00_5412;

									{	/* Cfa/cinfo3.scm 27 */
										BgL_objectz00_bglt BgL_auxz00_5413;

										BgL_auxz00_5413 =
											(BgL_objectz00_bglt) (BgL_obj4219z00_2154);
										BgL_auxz00_5412 = BGL_OBJECT_WIDENING(BgL_auxz00_5413);
									}
									BgL_arg5189z00_2160 =
										(((BgL_setfieldzf2cinfozf2_bglt) CREF(BgL_auxz00_5412))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 27 */
									obj_t BgL_auxz00_5419;

									int BgL_auxz00_5417;

									BgL_auxz00_5419 = (obj_t) (BgL_arg5189z00_2160);
									BgL_auxz00_5417 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4221z00_2158, BgL_auxz00_5417,
										BgL_auxz00_5419);
							}}
							{	/* Cfa/cinfo3.scm 27 */
								int BgL_auxz00_5422;

								BgL_auxz00_5422 = (int) (((long) 0));
								STRUCT_SET(BgL_res4220z00_2157, BgL_auxz00_5422,
									BgL_aux4221z00_2158);
							}
							{	/* Cfa/cinfo3.scm 27 */
								obj_t BgL_auxz00_5425;

								BgL_auxz00_5425 = STRUCT_KEY(BgL_res4220z00_2157);
								STRUCT_KEY_SET(BgL_aux4221z00_2158, BgL_auxz00_5425);
							}
							{	/* Cfa/cinfo3.scm 27 */
								obj_t BgL_kz00_3472;

								BgL_kz00_3472 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res4220z00_2157, BgL_kz00_3472);
							}
							return BgL_res4220z00_2157;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4796 */
	obj_t BGl_structzb2objectzd2ze3objec4796z83zzcfa_info3z00(obj_t
		BgL_envz00_3855, obj_t BgL_oz00_3856, obj_t BgL_sz00_3857)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			{
				BgL_newzf2cinfozf2_bglt BgL_oz00_2142;

				obj_t BgL_sz00_2143;

				{	/* Cfa/cinfo3.scm 28 */
					BgL_newzf2cinfozf2_bglt BgL_auxz00_5431;

					BgL_oz00_2142 = (BgL_newzf2cinfozf2_bglt) (BgL_oz00_3856);
					BgL_sz00_2143 = BgL_sz00_3857;
					{

						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL_old4270z00_2146;

							obj_t BgL_aux4271z00_2147;

							{	/* Cfa/cinfo3.scm 28 */
								obj_t BgL_nextzd2method4795zd2_2152;

								BgL_nextzd2method4795zd2_2152 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2142),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_newzf2Cinfozf2zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4795zd2_2152))
									{	/* Cfa/cinfo3.scm 28 */
										BgL_old4270z00_2146 =
											PROCEDURE_ENTRY(BgL_nextzd2method4795zd2_2152)
											(BgL_nextzd2method4795zd2_2152, (obj_t) (BgL_oz00_2142),
											BgL_sz00_2143, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 28 */
										BgL_old4270z00_2146 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2142), BgL_sz00_2143));
									}
							}
							BgL_aux4271z00_2147 =
								STRUCT_REF(BgL_sz00_2143, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 28 */
								BgL_newzf2cinfozf2_bglt BgL_new4272z00_2148;

								BgL_new4272z00_2148 =
									((BgL_newzf2cinfozf2_bglt) (BgL_old4270z00_2146));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4272z00_2148),
									BGl_classzd2numzd2zz__objectz00
									(BGl_newzf2Cinfozf2zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 28 */
									BgL_newzf2cinfozf2_bglt BgL_arg5185z00_2150;

									{	/* Cfa/cinfo3.scm 28 */
										obj_t BgL_arg5186z00_2151;

										BgL_arg5186z00_2151 =
											STRUCT_REF(BgL_aux4271z00_2147, (int) (((long) 0)));
										{	/* Cfa/cinfo3.scm 28 */
											BgL_newzf2cinfozf2_bglt BgL_res5322z00_3455;

											{	/* Cfa/cinfo3.scm 28 */
												BgL_approxz00_bglt BgL_approx4249z00_3449;

												BgL_approx4249z00_3449 =
													(BgL_approxz00_bglt) (BgL_arg5186z00_2151);
												{	/* Cfa/cinfo3.scm 28 */
													BgL_newzf2cinfozf2_bglt BgL_new4250z00_3450;

													BgL_new4250z00_3450 =
														((BgL_newzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_newzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo3.scm 28 */
														BgL_newzf2cinfozf2_bglt BgL_res5321z00_3454;

														{	/* Cfa/cinfo3.scm 28 */
															BgL_newzf2cinfozf2_bglt BgL_new4263z00_3451;

															BgL_new4263z00_3451 = BgL_new4250z00_3450;
															{	/* Cfa/cinfo3.scm 28 */
																BgL_approxz00_bglt BgL_approx4262z00_3453;

																BgL_approx4262z00_3453 = BgL_approx4249z00_3449;
																((((BgL_newzf2cinfozf2_bglt)
																			CREF(BgL_new4263z00_3451))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4262z00_3453),
																	BUNSPEC);
																BgL_res5321z00_3454 = BgL_new4263z00_3451;
														}} BgL_res5321z00_3454;
													}
													BgL_res5322z00_3455 = BgL_new4250z00_3450;
											}}
											BgL_arg5185z00_2150 = BgL_res5322z00_3455;
									}}
									{	/* Cfa/cinfo3.scm 28 */
										obj_t BgL_auxz00_5455;

										BgL_objectz00_bglt BgL_auxz00_5453;

										BgL_auxz00_5455 = (obj_t) (BgL_arg5185z00_2150);
										BgL_auxz00_5453 =
											(BgL_objectz00_bglt) (BgL_new4272z00_2148);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5453, BgL_auxz00_5455);
								}}
								BgL_auxz00_5431 = BgL_new4272z00_2148;
					}}}
					return (obj_t) (BgL_auxz00_5431);
				}
			}
		}
	}



/* object->struct-new/C4794 */
	obj_t BGl_objectzd2ze3structzd2newzf2C4794z11zzcfa_info3z00(obj_t
		BgL_envz00_3858, obj_t BgL_obj4267z00_3859)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 28 */
			{
				BgL_newzf2cinfozf2_bglt BgL_obj4267z00_2132;

				BgL_obj4267z00_2132 = (BgL_newzf2cinfozf2_bglt) (BgL_obj4267z00_3859);
				{

					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_res4268z00_2135;

						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL_nextzd2method4793zd2_2140;

							BgL_nextzd2method4793zd2_2140 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4267z00_2132),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_newzf2Cinfozf2zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4793zd2_2140))
								{	/* Cfa/cinfo3.scm 28 */
									BgL_res4268z00_2135 =
										PROCEDURE_ENTRY(BgL_nextzd2method4793zd2_2140)
										(BgL_nextzd2method4793zd2_2140,
										(obj_t) (BgL_obj4267z00_2132), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 28 */
									BgL_res4268z00_2135 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4267z00_2132));
								}
						}
						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL_aux4269z00_2136;

							{	/* Cfa/cinfo3.scm 28 */
								obj_t BgL_keyz00_3426;

								BgL_keyz00_3426 = CNST_TABLE_REF(((long) 3));
								BgL_aux4269z00_2136 =
									make_struct(BgL_keyz00_3426, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 28 */
								BgL_approxz00_bglt BgL_arg5181z00_2138;

								{
									obj_t BgL_auxz00_5472;

									{	/* Cfa/cinfo3.scm 28 */
										BgL_objectz00_bglt BgL_auxz00_5473;

										BgL_auxz00_5473 =
											(BgL_objectz00_bglt) (BgL_obj4267z00_2132);
										BgL_auxz00_5472 = BGL_OBJECT_WIDENING(BgL_auxz00_5473);
									}
									BgL_arg5181z00_2138 =
										(((BgL_newzf2cinfozf2_bglt) CREF(BgL_auxz00_5472))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 28 */
									obj_t BgL_auxz00_5479;

									int BgL_auxz00_5477;

									BgL_auxz00_5479 = (obj_t) (BgL_arg5181z00_2138);
									BgL_auxz00_5477 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4269z00_2136, BgL_auxz00_5477,
										BgL_auxz00_5479);
							}}
							{	/* Cfa/cinfo3.scm 28 */
								int BgL_auxz00_5482;

								BgL_auxz00_5482 = (int) (((long) 0));
								STRUCT_SET(BgL_res4268z00_2135, BgL_auxz00_5482,
									BgL_aux4269z00_2136);
							}
							{	/* Cfa/cinfo3.scm 28 */
								obj_t BgL_auxz00_5485;

								BgL_auxz00_5485 = STRUCT_KEY(BgL_res4268z00_2135);
								STRUCT_KEY_SET(BgL_aux4269z00_2136, BgL_auxz00_5485);
							}
							{	/* Cfa/cinfo3.scm 28 */
								obj_t BgL_kz00_3441;

								BgL_kz00_3441 = CNST_TABLE_REF(((long) 3));
								STRUCT_KEY_SET(BgL_res4268z00_2135, BgL_kz00_3441);
							}
							return BgL_res4268z00_2135;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4792 */
	obj_t BGl_structzb2objectzd2ze3objec4792z83zzcfa_info3z00(obj_t
		BgL_envz00_3860, obj_t BgL_oz00_3861, obj_t BgL_sz00_3862)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			{
				BgL_isazf2cinfozf2_bglt BgL_oz00_2120;

				obj_t BgL_sz00_2121;

				{	/* Cfa/cinfo3.scm 29 */
					BgL_isazf2cinfozf2_bglt BgL_auxz00_5491;

					BgL_oz00_2120 = (BgL_isazf2cinfozf2_bglt) (BgL_oz00_3861);
					BgL_sz00_2121 = BgL_sz00_3862;
					{

						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL_old4318z00_2124;

							obj_t BgL_aux4319z00_2125;

							{	/* Cfa/cinfo3.scm 29 */
								obj_t BgL_nextzd2method4791zd2_2130;

								BgL_nextzd2method4791zd2_2130 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2120),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_isazf2Cinfozf2zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4791zd2_2130))
									{	/* Cfa/cinfo3.scm 29 */
										BgL_old4318z00_2124 =
											PROCEDURE_ENTRY(BgL_nextzd2method4791zd2_2130)
											(BgL_nextzd2method4791zd2_2130, (obj_t) (BgL_oz00_2120),
											BgL_sz00_2121, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 29 */
										BgL_old4318z00_2124 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2120), BgL_sz00_2121));
									}
							}
							BgL_aux4319z00_2125 =
								STRUCT_REF(BgL_sz00_2121, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 29 */
								BgL_isazf2cinfozf2_bglt BgL_new4320z00_2126;

								BgL_new4320z00_2126 =
									((BgL_isazf2cinfozf2_bglt) (BgL_old4318z00_2124));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4320z00_2126),
									BGl_classzd2numzd2zz__objectz00
									(BGl_isazf2Cinfozf2zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 29 */
									BgL_isazf2cinfozf2_bglt BgL_arg5177z00_2128;

									{	/* Cfa/cinfo3.scm 29 */
										obj_t BgL_arg5178z00_2129;

										BgL_arg5178z00_2129 =
											STRUCT_REF(BgL_aux4319z00_2125, (int) (((long) 0)));
										{	/* Cfa/cinfo3.scm 29 */
											BgL_isazf2cinfozf2_bglt BgL_res5319z00_3424;

											{	/* Cfa/cinfo3.scm 29 */
												BgL_approxz00_bglt BgL_approx4297z00_3418;

												BgL_approx4297z00_3418 =
													(BgL_approxz00_bglt) (BgL_arg5178z00_2129);
												{	/* Cfa/cinfo3.scm 29 */
													BgL_isazf2cinfozf2_bglt BgL_new4298z00_3419;

													BgL_new4298z00_3419 =
														((BgL_isazf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_isazf2cinfozf2_bgl))));
													{	/* Cfa/cinfo3.scm 29 */
														BgL_isazf2cinfozf2_bglt BgL_res5318z00_3423;

														{	/* Cfa/cinfo3.scm 29 */
															BgL_isazf2cinfozf2_bglt BgL_new4311z00_3420;

															BgL_new4311z00_3420 = BgL_new4298z00_3419;
															{	/* Cfa/cinfo3.scm 29 */
																BgL_approxz00_bglt BgL_approx4310z00_3422;

																BgL_approx4310z00_3422 = BgL_approx4297z00_3418;
																((((BgL_isazf2cinfozf2_bglt)
																			CREF(BgL_new4311z00_3420))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4310z00_3422),
																	BUNSPEC);
																BgL_res5318z00_3423 = BgL_new4311z00_3420;
														}} BgL_res5318z00_3423;
													}
													BgL_res5319z00_3424 = BgL_new4298z00_3419;
											}}
											BgL_arg5177z00_2128 = BgL_res5319z00_3424;
									}}
									{	/* Cfa/cinfo3.scm 29 */
										obj_t BgL_auxz00_5515;

										BgL_objectz00_bglt BgL_auxz00_5513;

										BgL_auxz00_5515 = (obj_t) (BgL_arg5177z00_2128);
										BgL_auxz00_5513 =
											(BgL_objectz00_bglt) (BgL_new4320z00_2126);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5513, BgL_auxz00_5515);
								}}
								BgL_auxz00_5491 = BgL_new4320z00_2126;
					}}}
					return (obj_t) (BgL_auxz00_5491);
				}
			}
		}
	}



/* object->struct-isa/C4790 */
	obj_t BGl_objectzd2ze3structzd2isazf2C4790z11zzcfa_info3z00(obj_t
		BgL_envz00_3863, obj_t BgL_obj4315z00_3864)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 29 */
			{
				BgL_isazf2cinfozf2_bglt BgL_obj4315z00_2110;

				BgL_obj4315z00_2110 = (BgL_isazf2cinfozf2_bglt) (BgL_obj4315z00_3864);
				{

					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_res4316z00_2113;

						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL_nextzd2method4789zd2_2118;

							BgL_nextzd2method4789zd2_2118 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4315z00_2110),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_isazf2Cinfozf2zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4789zd2_2118))
								{	/* Cfa/cinfo3.scm 29 */
									BgL_res4316z00_2113 =
										PROCEDURE_ENTRY(BgL_nextzd2method4789zd2_2118)
										(BgL_nextzd2method4789zd2_2118,
										(obj_t) (BgL_obj4315z00_2110), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 29 */
									BgL_res4316z00_2113 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4315z00_2110));
								}
						}
						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL_aux4317z00_2114;

							{	/* Cfa/cinfo3.scm 29 */
								obj_t BgL_keyz00_3395;

								BgL_keyz00_3395 = CNST_TABLE_REF(((long) 4));
								BgL_aux4317z00_2114 =
									make_struct(BgL_keyz00_3395, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 29 */
								BgL_approxz00_bglt BgL_arg5173z00_2116;

								{
									obj_t BgL_auxz00_5532;

									{	/* Cfa/cinfo3.scm 29 */
										BgL_objectz00_bglt BgL_auxz00_5533;

										BgL_auxz00_5533 =
											(BgL_objectz00_bglt) (BgL_obj4315z00_2110);
										BgL_auxz00_5532 = BGL_OBJECT_WIDENING(BgL_auxz00_5533);
									}
									BgL_arg5173z00_2116 =
										(((BgL_isazf2cinfozf2_bglt) CREF(BgL_auxz00_5532))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 29 */
									obj_t BgL_auxz00_5539;

									int BgL_auxz00_5537;

									BgL_auxz00_5539 = (obj_t) (BgL_arg5173z00_2116);
									BgL_auxz00_5537 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4317z00_2114, BgL_auxz00_5537,
										BgL_auxz00_5539);
							}}
							{	/* Cfa/cinfo3.scm 29 */
								int BgL_auxz00_5542;

								BgL_auxz00_5542 = (int) (((long) 0));
								STRUCT_SET(BgL_res4316z00_2113, BgL_auxz00_5542,
									BgL_aux4317z00_2114);
							}
							{	/* Cfa/cinfo3.scm 29 */
								obj_t BgL_auxz00_5545;

								BgL_auxz00_5545 = STRUCT_KEY(BgL_res4316z00_2113);
								STRUCT_KEY_SET(BgL_aux4317z00_2114, BgL_auxz00_5545);
							}
							{	/* Cfa/cinfo3.scm 29 */
								obj_t BgL_kz00_3410;

								BgL_kz00_3410 = CNST_TABLE_REF(((long) 4));
								STRUCT_KEY_SET(BgL_res4316z00_2113, BgL_kz00_3410);
							}
							return BgL_res4316z00_2113;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4788 */
	obj_t BGl_structzb2objectzd2ze3objec4788z83zzcfa_info3z00(obj_t
		BgL_envz00_3865, obj_t BgL_oz00_3866, obj_t BgL_sz00_3867)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			{
				BgL_castzd2nullzf2cinfoz20_bglt BgL_oz00_2098;

				obj_t BgL_sz00_2099;

				{	/* Cfa/cinfo3.scm 30 */
					BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_5551;

					BgL_oz00_2098 = (BgL_castzd2nullzf2cinfoz20_bglt) (BgL_oz00_3866);
					BgL_sz00_2099 = BgL_sz00_3867;
					{

						{	/* Cfa/cinfo3.scm 30 */
							obj_t BgL_old4361z00_2102;

							obj_t BgL_aux4362z00_2103;

							{	/* Cfa/cinfo3.scm 30 */
								obj_t BgL_nextzd2method4787zd2_2108;

								BgL_nextzd2method4787zd2_2108 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2098),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4787zd2_2108))
									{	/* Cfa/cinfo3.scm 30 */
										BgL_old4361z00_2102 =
											PROCEDURE_ENTRY(BgL_nextzd2method4787zd2_2108)
											(BgL_nextzd2method4787zd2_2108, (obj_t) (BgL_oz00_2098),
											BgL_sz00_2099, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 30 */
										BgL_old4361z00_2102 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2098), BgL_sz00_2099));
									}
							}
							BgL_aux4362z00_2103 =
								STRUCT_REF(BgL_sz00_2099, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 30 */
								BgL_castzd2nullzf2cinfoz20_bglt BgL_new4363z00_2104;

								BgL_new4363z00_2104 =
									((BgL_castzd2nullzf2cinfoz20_bglt) (BgL_old4361z00_2102));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4363z00_2104),
									BGl_classzd2numzd2zz__objectz00
									(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 30 */
									BgL_castzd2nullzf2cinfoz20_bglt BgL_arg5169z00_2106;

									{	/* Cfa/cinfo3.scm 30 */
										obj_t BgL_arg5170z00_2107;

										BgL_arg5170z00_2107 =
											STRUCT_REF(BgL_aux4362z00_2103, (int) (((long) 0)));
										{	/* Cfa/cinfo3.scm 30 */
											BgL_castzd2nullzf2cinfoz20_bglt BgL_res5316z00_3393;

											{	/* Cfa/cinfo3.scm 30 */
												BgL_approxz00_bglt BgL_approx4341z00_3387;

												BgL_approx4341z00_3387 =
													(BgL_approxz00_bglt) (BgL_arg5170z00_2107);
												{	/* Cfa/cinfo3.scm 30 */
													BgL_castzd2nullzf2cinfoz20_bglt BgL_new4342z00_3388;

													BgL_new4342z00_3388 =
														((BgL_castzd2nullzf2cinfoz20_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_castzd2nullzf2cinfoz20_bgl))));
													{	/* Cfa/cinfo3.scm 30 */
														BgL_castzd2nullzf2cinfoz20_bglt BgL_res5315z00_3392;

														{	/* Cfa/cinfo3.scm 30 */
															BgL_castzd2nullzf2cinfoz20_bglt
																BgL_new4354z00_3389;
															BgL_new4354z00_3389 = BgL_new4342z00_3388;
															{	/* Cfa/cinfo3.scm 30 */
																BgL_approxz00_bglt BgL_approx4353z00_3391;

																BgL_approx4353z00_3391 = BgL_approx4341z00_3387;
																((((BgL_castzd2nullzf2cinfoz20_bglt)
																			CREF(BgL_new4354z00_3389))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4353z00_3391),
																	BUNSPEC);
																BgL_res5315z00_3392 = BgL_new4354z00_3389;
														}} BgL_res5315z00_3392;
													}
													BgL_res5316z00_3393 = BgL_new4342z00_3388;
											}}
											BgL_arg5169z00_2106 = BgL_res5316z00_3393;
									}}
									{	/* Cfa/cinfo3.scm 30 */
										obj_t BgL_auxz00_5575;

										BgL_objectz00_bglt BgL_auxz00_5573;

										BgL_auxz00_5575 = (obj_t) (BgL_arg5169z00_2106);
										BgL_auxz00_5573 =
											(BgL_objectz00_bglt) (BgL_new4363z00_2104);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5573, BgL_auxz00_5575);
								}}
								BgL_auxz00_5551 = BgL_new4363z00_2104;
					}}}
					return (obj_t) (BgL_auxz00_5551);
				}
			}
		}
	}



/* object->struct-cast-4785 */
	obj_t BGl_objectzd2ze3structzd2castzd24785z31zzcfa_info3z00(obj_t
		BgL_envz00_3868, obj_t BgL_obj4358z00_3869)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 30 */
			{
				BgL_castzd2nullzf2cinfoz20_bglt BgL_obj4358z00_2088;

				BgL_obj4358z00_2088 =
					(BgL_castzd2nullzf2cinfoz20_bglt) (BgL_obj4358z00_3869);
				{

					{	/* Cfa/cinfo3.scm 30 */
						obj_t BgL_res4359z00_2091;

						{	/* Cfa/cinfo3.scm 30 */
							obj_t BgL_nextzd2method4784zd2_2096;

							BgL_nextzd2method4784zd2_2096 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4358z00_2088),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4784zd2_2096))
								{	/* Cfa/cinfo3.scm 30 */
									BgL_res4359z00_2091 =
										PROCEDURE_ENTRY(BgL_nextzd2method4784zd2_2096)
										(BgL_nextzd2method4784zd2_2096,
										(obj_t) (BgL_obj4358z00_2088), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 30 */
									BgL_res4359z00_2091 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4358z00_2088));
								}
						}
						{	/* Cfa/cinfo3.scm 30 */
							obj_t BgL_aux4360z00_2092;

							{	/* Cfa/cinfo3.scm 30 */
								obj_t BgL_keyz00_3364;

								BgL_keyz00_3364 = CNST_TABLE_REF(((long) 5));
								BgL_aux4360z00_2092 =
									make_struct(BgL_keyz00_3364, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 30 */
								BgL_approxz00_bglt BgL_arg5165z00_2094;

								{
									obj_t BgL_auxz00_5592;

									{	/* Cfa/cinfo3.scm 30 */
										BgL_objectz00_bglt BgL_auxz00_5593;

										BgL_auxz00_5593 =
											(BgL_objectz00_bglt) (BgL_obj4358z00_2088);
										BgL_auxz00_5592 = BGL_OBJECT_WIDENING(BgL_auxz00_5593);
									}
									BgL_arg5165z00_2094 =
										(((BgL_castzd2nullzf2cinfoz20_bglt) CREF(BgL_auxz00_5592))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 30 */
									obj_t BgL_auxz00_5599;

									int BgL_auxz00_5597;

									BgL_auxz00_5599 = (obj_t) (BgL_arg5165z00_2094);
									BgL_auxz00_5597 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4360z00_2092, BgL_auxz00_5597,
										BgL_auxz00_5599);
							}}
							{	/* Cfa/cinfo3.scm 30 */
								int BgL_auxz00_5602;

								BgL_auxz00_5602 = (int) (((long) 0));
								STRUCT_SET(BgL_res4359z00_2091, BgL_auxz00_5602,
									BgL_aux4360z00_2092);
							}
							{	/* Cfa/cinfo3.scm 30 */
								obj_t BgL_auxz00_5605;

								BgL_auxz00_5605 = STRUCT_KEY(BgL_res4359z00_2091);
								STRUCT_KEY_SET(BgL_aux4360z00_2092, BgL_auxz00_5605);
							}
							{	/* Cfa/cinfo3.scm 30 */
								obj_t BgL_kz00_3379;

								BgL_kz00_3379 = CNST_TABLE_REF(((long) 5));
								STRUCT_KEY_SET(BgL_res4359z00_2091, BgL_kz00_3379);
							}
							return BgL_res4359z00_2091;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4783 */
	obj_t BGl_structzb2objectzd2ze3objec4783z83zzcfa_info3z00(obj_t
		BgL_envz00_3870, obj_t BgL_oz00_3871, obj_t BgL_sz00_3872)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_oz00_2075;

				obj_t BgL_sz00_2076;

				{	/* Cfa/cinfo3.scm 33 */
					BgL_vrefzf2cinfozf2_bglt BgL_auxz00_5611;

					BgL_oz00_2075 = (BgL_vrefzf2cinfozf2_bglt) (BgL_oz00_3871);
					BgL_sz00_2076 = BgL_sz00_3872;
					{

						{	/* Cfa/cinfo3.scm 33 */
							obj_t BgL_old4413z00_2079;

							obj_t BgL_aux4414z00_2080;

							{	/* Cfa/cinfo3.scm 33 */
								obj_t BgL_nextzd2method4782zd2_2086;

								BgL_nextzd2method4782zd2_2086 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2075),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_vrefzf2Cinfozf2zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4782zd2_2086))
									{	/* Cfa/cinfo3.scm 33 */
										BgL_old4413z00_2079 =
											PROCEDURE_ENTRY(BgL_nextzd2method4782zd2_2086)
											(BgL_nextzd2method4782zd2_2086, (obj_t) (BgL_oz00_2075),
											BgL_sz00_2076, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 33 */
										BgL_old4413z00_2079 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2075), BgL_sz00_2076));
									}
							}
							BgL_aux4414z00_2080 =
								STRUCT_REF(BgL_sz00_2076, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 33 */
								BgL_vrefzf2cinfozf2_bglt BgL_new4415z00_2081;

								BgL_new4415z00_2081 =
									((BgL_vrefzf2cinfozf2_bglt) (BgL_old4413z00_2079));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4415z00_2081),
									BGl_classzd2numzd2zz__objectz00
									(BGl_vrefzf2Cinfozf2zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 33 */
									BgL_vrefzf2cinfozf2_bglt BgL_arg5160z00_2083;

									{	/* Cfa/cinfo3.scm 33 */
										obj_t BgL_arg5161z00_2084;

										obj_t BgL_arg5162z00_2085;

										BgL_arg5161z00_2084 =
											STRUCT_REF(BgL_aux4414z00_2080, (int) (((long) 0)));
										BgL_arg5162z00_2085 =
											STRUCT_REF(BgL_aux4414z00_2080, (int) (((long) 1)));
										{	/* Cfa/cinfo3.scm 33 */
											BgL_vrefzf2cinfozf2_bglt BgL_res5313z00_3362;

											{	/* Cfa/cinfo3.scm 33 */
												BgL_approxz00_bglt BgL_approx4384z00_3353;

												bool_t BgL_tvectorzf34385zf3_3354;

												BgL_approx4384z00_3353 =
													(BgL_approxz00_bglt) (BgL_arg5161z00_2084);
												BgL_tvectorzf34385zf3_3354 = CBOOL(BgL_arg5162z00_2085);
												{	/* Cfa/cinfo3.scm 33 */
													BgL_vrefzf2cinfozf2_bglt BgL_new4386z00_3355;

													BgL_new4386z00_3355 =
														((BgL_vrefzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_vrefzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo3.scm 33 */
														BgL_vrefzf2cinfozf2_bglt BgL_res5312z00_3361;

														{	/* Cfa/cinfo3.scm 33 */
															BgL_vrefzf2cinfozf2_bglt BgL_new4405z00_3356;

															BgL_new4405z00_3356 = BgL_new4386z00_3355;
															{	/* Cfa/cinfo3.scm 33 */
																BgL_approxz00_bglt BgL_approx4403z00_3359;

																bool_t BgL_tvectorzf34404zf3_3360;

																BgL_approx4403z00_3359 = BgL_approx4384z00_3353;
																BgL_tvectorzf34404zf3_3360 =
																	BgL_tvectorzf34385zf3_3354;
																((((BgL_vrefzf2cinfozf2_bglt)
																			CREF(BgL_new4405z00_3356))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4403z00_3359),
																	BUNSPEC);
																((((BgL_vrefzf2cinfozf2_bglt)
																			CREF(BgL_new4405z00_3356))->
																		BgL_tvectorzf3zf3) =
																	((bool_t) BgL_tvectorzf34404zf3_3360),
																	BUNSPEC);
																BgL_res5312z00_3361 = BgL_new4405z00_3356;
														}} BgL_res5312z00_3361;
													}
													BgL_res5313z00_3362 = BgL_new4386z00_3355;
											}}
											BgL_arg5160z00_2083 = BgL_res5313z00_3362;
									}}
									{	/* Cfa/cinfo3.scm 33 */
										obj_t BgL_auxz00_5639;

										BgL_objectz00_bglt BgL_auxz00_5637;

										BgL_auxz00_5639 = (obj_t) (BgL_arg5160z00_2083);
										BgL_auxz00_5637 =
											(BgL_objectz00_bglt) (BgL_new4415z00_2081);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5637, BgL_auxz00_5639);
								}}
								BgL_auxz00_5611 = BgL_new4415z00_2081;
					}}}
					return (obj_t) (BgL_auxz00_5611);
				}
			}
		}
	}



/* object->struct-vref/4781 */
	obj_t BGl_objectzd2ze3structzd2vrefzf24781z11zzcfa_info3z00(obj_t
		BgL_envz00_3873, obj_t BgL_obj4410z00_3874)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 33 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_obj4410z00_2063;

				BgL_obj4410z00_2063 = (BgL_vrefzf2cinfozf2_bglt) (BgL_obj4410z00_3874);
				{

					{	/* Cfa/cinfo3.scm 33 */
						obj_t BgL_res4411z00_2066;

						{	/* Cfa/cinfo3.scm 33 */
							obj_t BgL_nextzd2method4780zd2_2073;

							BgL_nextzd2method4780zd2_2073 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4410z00_2063),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_vrefzf2Cinfozf2zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4780zd2_2073))
								{	/* Cfa/cinfo3.scm 33 */
									BgL_res4411z00_2066 =
										PROCEDURE_ENTRY(BgL_nextzd2method4780zd2_2073)
										(BgL_nextzd2method4780zd2_2073,
										(obj_t) (BgL_obj4410z00_2063), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 33 */
									BgL_res4411z00_2066 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4410z00_2063));
								}
						}
						{	/* Cfa/cinfo3.scm 33 */
							obj_t BgL_aux4412z00_2067;

							{	/* Cfa/cinfo3.scm 33 */
								obj_t BgL_keyz00_3324;

								BgL_keyz00_3324 = CNST_TABLE_REF(((long) 6));
								BgL_aux4412z00_2067 =
									make_struct(BgL_keyz00_3324, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 33 */
								BgL_approxz00_bglt BgL_arg5154z00_2069;

								{
									obj_t BgL_auxz00_5656;

									{	/* Cfa/cinfo3.scm 33 */
										BgL_objectz00_bglt BgL_auxz00_5657;

										BgL_auxz00_5657 =
											(BgL_objectz00_bglt) (BgL_obj4410z00_2063);
										BgL_auxz00_5656 = BGL_OBJECT_WIDENING(BgL_auxz00_5657);
									}
									BgL_arg5154z00_2069 =
										(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_5656))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 33 */
									obj_t BgL_auxz00_5663;

									int BgL_auxz00_5661;

									BgL_auxz00_5663 = (obj_t) (BgL_arg5154z00_2069);
									BgL_auxz00_5661 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4412z00_2067, BgL_auxz00_5661,
										BgL_auxz00_5663);
							}}
							{	/* Cfa/cinfo3.scm 33 */
								bool_t BgL_arg5156z00_2071;

								{
									obj_t BgL_auxz00_5666;

									{	/* Cfa/cinfo3.scm 33 */
										BgL_objectz00_bglt BgL_auxz00_5667;

										BgL_auxz00_5667 =
											(BgL_objectz00_bglt) (BgL_obj4410z00_2063);
										BgL_auxz00_5666 = BGL_OBJECT_WIDENING(BgL_auxz00_5667);
									}
									BgL_arg5156z00_2071 =
										(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_5666))->
										BgL_tvectorzf3zf3);
								}
								{	/* Cfa/cinfo3.scm 33 */
									obj_t BgL_auxz00_5673;

									int BgL_auxz00_5671;

									BgL_auxz00_5673 = BBOOL(BgL_arg5156z00_2071);
									BgL_auxz00_5671 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4412z00_2067, BgL_auxz00_5671,
										BgL_auxz00_5673);
							}}
							{	/* Cfa/cinfo3.scm 33 */
								int BgL_auxz00_5676;

								BgL_auxz00_5676 = (int) (((long) 0));
								STRUCT_SET(BgL_res4411z00_2066, BgL_auxz00_5676,
									BgL_aux4412z00_2067);
							}
							{	/* Cfa/cinfo3.scm 33 */
								obj_t BgL_auxz00_5679;

								BgL_auxz00_5679 = STRUCT_KEY(BgL_res4411z00_2066);
								STRUCT_KEY_SET(BgL_aux4412z00_2067, BgL_auxz00_5679);
							}
							{	/* Cfa/cinfo3.scm 33 */
								obj_t BgL_kz00_3343;

								BgL_kz00_3343 = CNST_TABLE_REF(((long) 6));
								STRUCT_KEY_SET(BgL_res4411z00_2066, BgL_kz00_3343);
							}
							return BgL_res4411z00_2066;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4779 */
	obj_t BGl_structzb2objectzd2ze3objec4779z83zzcfa_info3z00(obj_t
		BgL_envz00_3875, obj_t BgL_oz00_3876, obj_t BgL_sz00_3877)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_oz00_2050;

				obj_t BgL_sz00_2051;

				{	/* Cfa/cinfo3.scm 36 */
					BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_5685;

					BgL_oz00_2050 = (BgL_vsetz12zf2cinfoze0_bglt) (BgL_oz00_3876);
					BgL_sz00_2051 = BgL_sz00_3877;
					{

						{	/* Cfa/cinfo3.scm 36 */
							obj_t BgL_old4476z00_2054;

							obj_t BgL_aux4477z00_2055;

							{	/* Cfa/cinfo3.scm 36 */
								obj_t BgL_nextzd2method4778zd2_2061;

								BgL_nextzd2method4778zd2_2061 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2050),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4778zd2_2061))
									{	/* Cfa/cinfo3.scm 36 */
										BgL_old4476z00_2054 =
											PROCEDURE_ENTRY(BgL_nextzd2method4778zd2_2061)
											(BgL_nextzd2method4778zd2_2061, (obj_t) (BgL_oz00_2050),
											BgL_sz00_2051, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 36 */
										BgL_old4476z00_2054 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2050), BgL_sz00_2051));
									}
							}
							BgL_aux4477z00_2055 =
								STRUCT_REF(BgL_sz00_2051, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 36 */
								BgL_vsetz12zf2cinfoze0_bglt BgL_new4478z00_2056;

								BgL_new4478z00_2056 =
									((BgL_vsetz12zf2cinfoze0_bglt) (BgL_old4476z00_2054));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4478z00_2056),
									BGl_classzd2numzd2zz__objectz00
									(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 36 */
									BgL_vsetz12zf2cinfoze0_bglt BgL_arg5149z00_2058;

									{	/* Cfa/cinfo3.scm 36 */
										obj_t BgL_arg5150z00_2059;

										obj_t BgL_arg5151z00_2060;

										BgL_arg5150z00_2059 =
											STRUCT_REF(BgL_aux4477z00_2055, (int) (((long) 0)));
										BgL_arg5151z00_2060 =
											STRUCT_REF(BgL_aux4477z00_2055, (int) (((long) 1)));
										{	/* Cfa/cinfo3.scm 36 */
											BgL_vsetz12zf2cinfoze0_bglt BgL_res5310z00_3322;

											{	/* Cfa/cinfo3.scm 36 */
												BgL_approxz00_bglt BgL_approx4447z00_3313;

												bool_t BgL_tvectorzf34448zf3_3314;

												BgL_approx4447z00_3313 =
													(BgL_approxz00_bglt) (BgL_arg5150z00_2059);
												BgL_tvectorzf34448zf3_3314 = CBOOL(BgL_arg5151z00_2060);
												{	/* Cfa/cinfo3.scm 36 */
													BgL_vsetz12zf2cinfoze0_bglt BgL_new4449z00_3315;

													BgL_new4449z00_3315 =
														((BgL_vsetz12zf2cinfoze0_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_vsetz12zf2cinfoze0_bgl))));
													{	/* Cfa/cinfo3.scm 36 */
														BgL_vsetz12zf2cinfoze0_bglt BgL_res5309z00_3321;

														{	/* Cfa/cinfo3.scm 36 */
															BgL_vsetz12zf2cinfoze0_bglt BgL_new4468z00_3316;

															BgL_new4468z00_3316 = BgL_new4449z00_3315;
															{	/* Cfa/cinfo3.scm 36 */
																BgL_approxz00_bglt BgL_approx4466z00_3319;

																bool_t BgL_tvectorzf34467zf3_3320;

																BgL_approx4466z00_3319 = BgL_approx4447z00_3313;
																BgL_tvectorzf34467zf3_3320 =
																	BgL_tvectorzf34448zf3_3314;
																((((BgL_vsetz12zf2cinfoze0_bglt)
																			CREF(BgL_new4468z00_3316))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4466z00_3319),
																	BUNSPEC);
																((((BgL_vsetz12zf2cinfoze0_bglt)
																			CREF(BgL_new4468z00_3316))->
																		BgL_tvectorzf3zf3) =
																	((bool_t) BgL_tvectorzf34467zf3_3320),
																	BUNSPEC);
																BgL_res5309z00_3321 = BgL_new4468z00_3316;
														}} BgL_res5309z00_3321;
													}
													BgL_res5310z00_3322 = BgL_new4449z00_3315;
											}}
											BgL_arg5149z00_2058 = BgL_res5310z00_3322;
									}}
									{	/* Cfa/cinfo3.scm 36 */
										obj_t BgL_auxz00_5713;

										BgL_objectz00_bglt BgL_auxz00_5711;

										BgL_auxz00_5713 = (obj_t) (BgL_arg5149z00_2058);
										BgL_auxz00_5711 =
											(BgL_objectz00_bglt) (BgL_new4478z00_2056);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5711, BgL_auxz00_5713);
								}}
								BgL_auxz00_5685 = BgL_new4478z00_2056;
					}}}
					return (obj_t) (BgL_auxz00_5685);
				}
			}
		}
	}



/* object->struct-vset!4777 */
	obj_t BGl_objectzd2ze3structzd2vsetz124777zf1zzcfa_info3z00(obj_t
		BgL_envz00_3878, obj_t BgL_obj4473z00_3879)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 36 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_obj4473z00_2038;

				BgL_obj4473z00_2038 =
					(BgL_vsetz12zf2cinfoze0_bglt) (BgL_obj4473z00_3879);
				{

					{	/* Cfa/cinfo3.scm 36 */
						obj_t BgL_res4474z00_2041;

						{	/* Cfa/cinfo3.scm 36 */
							obj_t BgL_nextzd2method4776zd2_2048;

							BgL_nextzd2method4776zd2_2048 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4473z00_2038),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4776zd2_2048))
								{	/* Cfa/cinfo3.scm 36 */
									BgL_res4474z00_2041 =
										PROCEDURE_ENTRY(BgL_nextzd2method4776zd2_2048)
										(BgL_nextzd2method4776zd2_2048,
										(obj_t) (BgL_obj4473z00_2038), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 36 */
									BgL_res4474z00_2041 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4473z00_2038));
								}
						}
						{	/* Cfa/cinfo3.scm 36 */
							obj_t BgL_aux4475z00_2042;

							{	/* Cfa/cinfo3.scm 36 */
								obj_t BgL_keyz00_3284;

								BgL_keyz00_3284 = CNST_TABLE_REF(((long) 7));
								BgL_aux4475z00_2042 =
									make_struct(BgL_keyz00_3284, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 36 */
								BgL_approxz00_bglt BgL_arg5143z00_2044;

								{
									obj_t BgL_auxz00_5730;

									{	/* Cfa/cinfo3.scm 36 */
										BgL_objectz00_bglt BgL_auxz00_5731;

										BgL_auxz00_5731 =
											(BgL_objectz00_bglt) (BgL_obj4473z00_2038);
										BgL_auxz00_5730 = BGL_OBJECT_WIDENING(BgL_auxz00_5731);
									}
									BgL_arg5143z00_2044 =
										(((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_auxz00_5730))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 36 */
									obj_t BgL_auxz00_5737;

									int BgL_auxz00_5735;

									BgL_auxz00_5737 = (obj_t) (BgL_arg5143z00_2044);
									BgL_auxz00_5735 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4475z00_2042, BgL_auxz00_5735,
										BgL_auxz00_5737);
							}}
							{	/* Cfa/cinfo3.scm 36 */
								bool_t BgL_arg5145z00_2046;

								{
									obj_t BgL_auxz00_5740;

									{	/* Cfa/cinfo3.scm 36 */
										BgL_objectz00_bglt BgL_auxz00_5741;

										BgL_auxz00_5741 =
											(BgL_objectz00_bglt) (BgL_obj4473z00_2038);
										BgL_auxz00_5740 = BGL_OBJECT_WIDENING(BgL_auxz00_5741);
									}
									BgL_arg5145z00_2046 =
										(((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_auxz00_5740))->
										BgL_tvectorzf3zf3);
								}
								{	/* Cfa/cinfo3.scm 36 */
									obj_t BgL_auxz00_5747;

									int BgL_auxz00_5745;

									BgL_auxz00_5747 = BBOOL(BgL_arg5145z00_2046);
									BgL_auxz00_5745 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4475z00_2042, BgL_auxz00_5745,
										BgL_auxz00_5747);
							}}
							{	/* Cfa/cinfo3.scm 36 */
								int BgL_auxz00_5750;

								BgL_auxz00_5750 = (int) (((long) 0));
								STRUCT_SET(BgL_res4474z00_2041, BgL_auxz00_5750,
									BgL_aux4475z00_2042);
							}
							{	/* Cfa/cinfo3.scm 36 */
								obj_t BgL_auxz00_5753;

								BgL_auxz00_5753 = STRUCT_KEY(BgL_res4474z00_2041);
								STRUCT_KEY_SET(BgL_aux4475z00_2042, BgL_auxz00_5753);
							}
							{	/* Cfa/cinfo3.scm 36 */
								obj_t BgL_kz00_3303;

								BgL_kz00_3303 = CNST_TABLE_REF(((long) 7));
								STRUCT_KEY_SET(BgL_res4474z00_2041, BgL_kz00_3303);
							}
							return BgL_res4474z00_2041;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4775 */
	obj_t BGl_structzb2objectzd2ze3objec4775z83zzcfa_info3z00(obj_t
		BgL_envz00_3880, obj_t BgL_oz00_3881, obj_t BgL_sz00_3882)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_oz00_2025;

				obj_t BgL_sz00_2026;

				{	/* Cfa/cinfo3.scm 39 */
					BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_5759;

					BgL_oz00_2025 = (BgL_vlengthzf2cinfozf2_bglt) (BgL_oz00_3881);
					BgL_sz00_2026 = BgL_sz00_3882;
					{

						{	/* Cfa/cinfo3.scm 39 */
							obj_t BgL_old4535z00_2029;

							obj_t BgL_aux4536z00_2030;

							{	/* Cfa/cinfo3.scm 39 */
								obj_t BgL_nextzd2method4774zd2_2036;

								BgL_nextzd2method4774zd2_2036 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2025),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4774zd2_2036))
									{	/* Cfa/cinfo3.scm 39 */
										BgL_old4535z00_2029 =
											PROCEDURE_ENTRY(BgL_nextzd2method4774zd2_2036)
											(BgL_nextzd2method4774zd2_2036, (obj_t) (BgL_oz00_2025),
											BgL_sz00_2026, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 39 */
										BgL_old4535z00_2029 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2025), BgL_sz00_2026));
									}
							}
							BgL_aux4536z00_2030 =
								STRUCT_REF(BgL_sz00_2026, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 39 */
								BgL_vlengthzf2cinfozf2_bglt BgL_new4537z00_2031;

								BgL_new4537z00_2031 =
									((BgL_vlengthzf2cinfozf2_bglt) (BgL_old4535z00_2029));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4537z00_2031),
									BGl_classzd2numzd2zz__objectz00
									(BGl_vlengthzf2Cinfozf2zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 39 */
									BgL_vlengthzf2cinfozf2_bglt BgL_arg5138z00_2033;

									{	/* Cfa/cinfo3.scm 39 */
										obj_t BgL_arg5139z00_2034;

										obj_t BgL_arg5140z00_2035;

										BgL_arg5139z00_2034 =
											STRUCT_REF(BgL_aux4536z00_2030, (int) (((long) 0)));
										BgL_arg5140z00_2035 =
											STRUCT_REF(BgL_aux4536z00_2030, (int) (((long) 1)));
										{	/* Cfa/cinfo3.scm 39 */
											BgL_vlengthzf2cinfozf2_bglt BgL_res5307z00_3282;

											{	/* Cfa/cinfo3.scm 39 */
												BgL_approxz00_bglt BgL_approx4509z00_3273;

												bool_t BgL_tvectorzf34510zf3_3274;

												BgL_approx4509z00_3273 =
													(BgL_approxz00_bglt) (BgL_arg5139z00_2034);
												BgL_tvectorzf34510zf3_3274 = CBOOL(BgL_arg5140z00_2035);
												{	/* Cfa/cinfo3.scm 39 */
													BgL_vlengthzf2cinfozf2_bglt BgL_new4511z00_3275;

													BgL_new4511z00_3275 =
														((BgL_vlengthzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_vlengthzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo3.scm 39 */
														BgL_vlengthzf2cinfozf2_bglt BgL_res5306z00_3281;

														{	/* Cfa/cinfo3.scm 39 */
															BgL_vlengthzf2cinfozf2_bglt BgL_new4527z00_3276;

															BgL_new4527z00_3276 = BgL_new4511z00_3275;
															{	/* Cfa/cinfo3.scm 39 */
																BgL_approxz00_bglt BgL_approx4525z00_3279;

																bool_t BgL_tvectorzf34526zf3_3280;

																BgL_approx4525z00_3279 = BgL_approx4509z00_3273;
																BgL_tvectorzf34526zf3_3280 =
																	BgL_tvectorzf34510zf3_3274;
																((((BgL_vlengthzf2cinfozf2_bglt)
																			CREF(BgL_new4527z00_3276))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4525z00_3279),
																	BUNSPEC);
																((((BgL_vlengthzf2cinfozf2_bglt)
																			CREF(BgL_new4527z00_3276))->
																		BgL_tvectorzf3zf3) =
																	((bool_t) BgL_tvectorzf34526zf3_3280),
																	BUNSPEC);
																BgL_res5306z00_3281 = BgL_new4527z00_3276;
														}} BgL_res5306z00_3281;
													}
													BgL_res5307z00_3282 = BgL_new4511z00_3275;
											}}
											BgL_arg5138z00_2033 = BgL_res5307z00_3282;
									}}
									{	/* Cfa/cinfo3.scm 39 */
										obj_t BgL_auxz00_5787;

										BgL_objectz00_bglt BgL_auxz00_5785;

										BgL_auxz00_5787 = (obj_t) (BgL_arg5138z00_2033);
										BgL_auxz00_5785 =
											(BgL_objectz00_bglt) (BgL_new4537z00_2031);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5785, BgL_auxz00_5787);
								}}
								BgL_auxz00_5759 = BgL_new4537z00_2031;
					}}}
					return (obj_t) (BgL_auxz00_5759);
				}
			}
		}
	}



/* object->struct-vleng4773 */
	obj_t BGl_objectzd2ze3structzd2vleng4773ze3zzcfa_info3z00(obj_t
		BgL_envz00_3883, obj_t BgL_obj4532z00_3884)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 39 */
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_obj4532z00_2013;

				BgL_obj4532z00_2013 =
					(BgL_vlengthzf2cinfozf2_bglt) (BgL_obj4532z00_3884);
				{

					{	/* Cfa/cinfo3.scm 39 */
						obj_t BgL_res4533z00_2016;

						{	/* Cfa/cinfo3.scm 39 */
							obj_t BgL_nextzd2method4772zd2_2023;

							BgL_nextzd2method4772zd2_2023 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4532z00_2013),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4772zd2_2023))
								{	/* Cfa/cinfo3.scm 39 */
									BgL_res4533z00_2016 =
										PROCEDURE_ENTRY(BgL_nextzd2method4772zd2_2023)
										(BgL_nextzd2method4772zd2_2023,
										(obj_t) (BgL_obj4532z00_2013), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 39 */
									BgL_res4533z00_2016 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4532z00_2013));
								}
						}
						{	/* Cfa/cinfo3.scm 39 */
							obj_t BgL_aux4534z00_2017;

							{	/* Cfa/cinfo3.scm 39 */
								obj_t BgL_keyz00_3244;

								BgL_keyz00_3244 = CNST_TABLE_REF(((long) 8));
								BgL_aux4534z00_2017 =
									make_struct(BgL_keyz00_3244, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 39 */
								BgL_approxz00_bglt BgL_arg5132z00_2019;

								{
									obj_t BgL_auxz00_5804;

									{	/* Cfa/cinfo3.scm 39 */
										BgL_objectz00_bglt BgL_auxz00_5805;

										BgL_auxz00_5805 =
											(BgL_objectz00_bglt) (BgL_obj4532z00_2013);
										BgL_auxz00_5804 = BGL_OBJECT_WIDENING(BgL_auxz00_5805);
									}
									BgL_arg5132z00_2019 =
										(((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_auxz00_5804))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 39 */
									obj_t BgL_auxz00_5811;

									int BgL_auxz00_5809;

									BgL_auxz00_5811 = (obj_t) (BgL_arg5132z00_2019);
									BgL_auxz00_5809 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4534z00_2017, BgL_auxz00_5809,
										BgL_auxz00_5811);
							}}
							{	/* Cfa/cinfo3.scm 39 */
								bool_t BgL_arg5134z00_2021;

								{
									obj_t BgL_auxz00_5814;

									{	/* Cfa/cinfo3.scm 39 */
										BgL_objectz00_bglt BgL_auxz00_5815;

										BgL_auxz00_5815 =
											(BgL_objectz00_bglt) (BgL_obj4532z00_2013);
										BgL_auxz00_5814 = BGL_OBJECT_WIDENING(BgL_auxz00_5815);
									}
									BgL_arg5134z00_2021 =
										(((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_auxz00_5814))->
										BgL_tvectorzf3zf3);
								}
								{	/* Cfa/cinfo3.scm 39 */
									obj_t BgL_auxz00_5821;

									int BgL_auxz00_5819;

									BgL_auxz00_5821 = BBOOL(BgL_arg5134z00_2021);
									BgL_auxz00_5819 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4534z00_2017, BgL_auxz00_5819,
										BgL_auxz00_5821);
							}}
							{	/* Cfa/cinfo3.scm 39 */
								int BgL_auxz00_5824;

								BgL_auxz00_5824 = (int) (((long) 0));
								STRUCT_SET(BgL_res4533z00_2016, BgL_auxz00_5824,
									BgL_aux4534z00_2017);
							}
							{	/* Cfa/cinfo3.scm 39 */
								obj_t BgL_auxz00_5827;

								BgL_auxz00_5827 = STRUCT_KEY(BgL_res4533z00_2016);
								STRUCT_KEY_SET(BgL_aux4534z00_2017, BgL_auxz00_5827);
							}
							{	/* Cfa/cinfo3.scm 39 */
								obj_t BgL_kz00_3263;

								BgL_kz00_3263 = CNST_TABLE_REF(((long) 8));
								STRUCT_KEY_SET(BgL_res4533z00_2016, BgL_kz00_3263);
							}
							return BgL_res4533z00_2016;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4771 */
	obj_t BGl_structzb2objectzd2ze3objec4771z83zzcfa_info3z00(obj_t
		BgL_envz00_3885, obj_t BgL_oz00_3886, obj_t BgL_sz00_3887)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			{
				BgL_prezd2valloczf2cinfoz20_bglt BgL_oz00_2001;

				obj_t BgL_sz00_2002;

				{	/* Cfa/cinfo3.scm 44 */
					BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_5833;

					BgL_oz00_2001 = (BgL_prezd2valloczf2cinfoz20_bglt) (BgL_oz00_3886);
					BgL_sz00_2002 = BgL_sz00_3887;
					{

						{	/* Cfa/cinfo3.scm 44 */
							obj_t BgL_old4585z00_2005;

							obj_t BgL_aux4586z00_2006;

							{	/* Cfa/cinfo3.scm 44 */
								obj_t BgL_nextzd2method4770zd2_2011;

								BgL_nextzd2method4770zd2_2011 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2001),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4770zd2_2011))
									{	/* Cfa/cinfo3.scm 44 */
										BgL_old4585z00_2005 =
											PROCEDURE_ENTRY(BgL_nextzd2method4770zd2_2011)
											(BgL_nextzd2method4770zd2_2011, (obj_t) (BgL_oz00_2001),
											BgL_sz00_2002, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 44 */
										BgL_old4585z00_2005 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2001), BgL_sz00_2002));
									}
							}
							BgL_aux4586z00_2006 =
								STRUCT_REF(BgL_sz00_2002, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 44 */
								BgL_prezd2valloczf2cinfoz20_bglt BgL_new4587z00_2007;

								BgL_new4587z00_2007 =
									((BgL_prezd2valloczf2cinfoz20_bglt) (BgL_old4585z00_2005));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4587z00_2007),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 44 */
									BgL_prezd2valloczf2cinfoz20_bglt BgL_arg5128z00_2009;

									{	/* Cfa/cinfo3.scm 44 */
										obj_t BgL_arg5129z00_2010;

										BgL_arg5129z00_2010 =
											STRUCT_REF(BgL_aux4586z00_2006, (int) (((long) 0)));
										{	/* Cfa/cinfo3.scm 44 */
											BgL_prezd2valloczf2cinfoz20_bglt BgL_res5304z00_3242;

											{	/* Cfa/cinfo3.scm 44 */
												BgL_variablez00_bglt BgL_owner4562z00_3236;

												BgL_owner4562z00_3236 =
													(BgL_variablez00_bglt) (BgL_arg5129z00_2010);
												{	/* Cfa/cinfo3.scm 44 */
													BgL_prezd2valloczf2cinfoz20_bglt BgL_new4563z00_3237;

													BgL_new4563z00_3237 =
														((BgL_prezd2valloczf2cinfoz20_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_prezd2valloczf2cinfoz20_bgl))));
													{	/* Cfa/cinfo3.scm 44 */
														BgL_prezd2valloczf2cinfoz20_bglt
															BgL_res5303z00_3241;
														{	/* Cfa/cinfo3.scm 44 */
															BgL_prezd2valloczf2cinfoz20_bglt
																BgL_new4578z00_3238;
															BgL_new4578z00_3238 = BgL_new4563z00_3237;
															{	/* Cfa/cinfo3.scm 44 */
																BgL_variablez00_bglt BgL_owner4577z00_3240;

																BgL_owner4577z00_3240 = BgL_owner4562z00_3236;
																((((BgL_prezd2valloczf2cinfoz20_bglt)
																			CREF(BgL_new4578z00_3238))->
																		BgL_ownerz00) =
																	((BgL_variablez00_bglt)
																		BgL_owner4577z00_3240), BUNSPEC);
																BgL_res5303z00_3241 = BgL_new4578z00_3238;
														}} BgL_res5303z00_3241;
													}
													BgL_res5304z00_3242 = BgL_new4563z00_3237;
											}}
											BgL_arg5128z00_2009 = BgL_res5304z00_3242;
									}}
									{	/* Cfa/cinfo3.scm 44 */
										obj_t BgL_auxz00_5857;

										BgL_objectz00_bglt BgL_auxz00_5855;

										BgL_auxz00_5857 = (obj_t) (BgL_arg5128z00_2009);
										BgL_auxz00_5855 =
											(BgL_objectz00_bglt) (BgL_new4587z00_2007);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5855, BgL_auxz00_5857);
								}}
								BgL_auxz00_5833 = BgL_new4587z00_2007;
					}}}
					return (obj_t) (BgL_auxz00_5833);
				}
			}
		}
	}



/* object->struct-pre-v4768 */
	obj_t BGl_objectzd2ze3structzd2prezd2v4768z31zzcfa_info3z00(obj_t
		BgL_envz00_3888, obj_t BgL_obj4582z00_3889)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 44 */
			{
				BgL_prezd2valloczf2cinfoz20_bglt BgL_obj4582z00_1991;

				BgL_obj4582z00_1991 =
					(BgL_prezd2valloczf2cinfoz20_bglt) (BgL_obj4582z00_3889);
				{

					{	/* Cfa/cinfo3.scm 44 */
						obj_t BgL_res4583z00_1994;

						{	/* Cfa/cinfo3.scm 44 */
							obj_t BgL_nextzd2method4767zd2_1999;

							BgL_nextzd2method4767zd2_1999 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4582z00_1991),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4767zd2_1999))
								{	/* Cfa/cinfo3.scm 44 */
									BgL_res4583z00_1994 =
										PROCEDURE_ENTRY(BgL_nextzd2method4767zd2_1999)
										(BgL_nextzd2method4767zd2_1999,
										(obj_t) (BgL_obj4582z00_1991), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 44 */
									BgL_res4583z00_1994 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4582z00_1991));
								}
						}
						{	/* Cfa/cinfo3.scm 44 */
							obj_t BgL_aux4584z00_1995;

							{	/* Cfa/cinfo3.scm 44 */
								obj_t BgL_keyz00_3213;

								BgL_keyz00_3213 = CNST_TABLE_REF(((long) 9));
								BgL_aux4584z00_1995 =
									make_struct(BgL_keyz00_3213, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 44 */
								BgL_variablez00_bglt BgL_arg5124z00_1997;

								{
									obj_t BgL_auxz00_5874;

									{	/* Cfa/cinfo3.scm 44 */
										BgL_objectz00_bglt BgL_auxz00_5875;

										BgL_auxz00_5875 =
											(BgL_objectz00_bglt) (BgL_obj4582z00_1991);
										BgL_auxz00_5874 = BGL_OBJECT_WIDENING(BgL_auxz00_5875);
									}
									BgL_arg5124z00_1997 =
										(((BgL_prezd2valloczf2cinfoz20_bglt)
											CREF(BgL_auxz00_5874))->BgL_ownerz00);
								}
								{	/* Cfa/cinfo3.scm 44 */
									obj_t BgL_auxz00_5881;

									int BgL_auxz00_5879;

									BgL_auxz00_5881 = (obj_t) (BgL_arg5124z00_1997);
									BgL_auxz00_5879 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4584z00_1995, BgL_auxz00_5879,
										BgL_auxz00_5881);
							}}
							{	/* Cfa/cinfo3.scm 44 */
								int BgL_auxz00_5884;

								BgL_auxz00_5884 = (int) (((long) 0));
								STRUCT_SET(BgL_res4583z00_1994, BgL_auxz00_5884,
									BgL_aux4584z00_1995);
							}
							{	/* Cfa/cinfo3.scm 44 */
								obj_t BgL_auxz00_5887;

								BgL_auxz00_5887 = STRUCT_KEY(BgL_res4583z00_1994);
								STRUCT_KEY_SET(BgL_aux4584z00_1995, BgL_auxz00_5887);
							}
							{	/* Cfa/cinfo3.scm 44 */
								obj_t BgL_kz00_3228;

								BgL_kz00_3228 = CNST_TABLE_REF(((long) 9));
								STRUCT_KEY_SET(BgL_res4583z00_1994, BgL_kz00_3228);
							}
							return BgL_res4583z00_1994;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4766 */
	obj_t BGl_structzb2objectzd2ze3objec4766z83zzcfa_info3z00(obj_t
		BgL_envz00_3890, obj_t BgL_oz00_3891, obj_t BgL_sz00_3892)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			{
				BgL_valloczf2cinfozf2_bglt BgL_oz00_1979;

				obj_t BgL_sz00_1980;

				{	/* Cfa/cinfo3.scm 46 */
					BgL_valloczf2cinfozf2_bglt BgL_auxz00_5893;

					BgL_oz00_1979 = (BgL_valloczf2cinfozf2_bglt) (BgL_oz00_3891);
					BgL_sz00_1980 = BgL_sz00_3892;
					{

						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL_old4634z00_1983;

							obj_t BgL_aux4635z00_1984;

							{	/* Cfa/cinfo3.scm 46 */
								obj_t BgL_nextzd2method4765zd2_1989;

								BgL_nextzd2method4765zd2_1989 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1979),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_valloczf2Cinfozf2zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4765zd2_1989))
									{	/* Cfa/cinfo3.scm 46 */
										BgL_old4634z00_1983 =
											PROCEDURE_ENTRY(BgL_nextzd2method4765zd2_1989)
											(BgL_nextzd2method4765zd2_1989, (obj_t) (BgL_oz00_1979),
											BgL_sz00_1980, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 46 */
										BgL_old4634z00_1983 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1979), BgL_sz00_1980));
									}
							}
							BgL_aux4635z00_1984 =
								STRUCT_REF(BgL_sz00_1980, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 46 */
								BgL_valloczf2cinfozf2_bglt BgL_new4636z00_1985;

								BgL_new4636z00_1985 =
									((BgL_valloczf2cinfozf2_bglt) (BgL_old4634z00_1983));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4636z00_1985),
									BGl_classzd2numzd2zz__objectz00
									(BGl_valloczf2Cinfozf2zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 46 */
									BgL_valloczf2cinfozf2_bglt BgL_arg5120z00_1987;

									{	/* Cfa/cinfo3.scm 46 */
										obj_t BgL_arg5121z00_1988;

										BgL_arg5121z00_1988 =
											STRUCT_REF(BgL_aux4635z00_1984, (int) (((long) 0)));
										{	/* Cfa/cinfo3.scm 46 */
											BgL_valloczf2cinfozf2_bglt BgL_res5301z00_3211;

											{	/* Cfa/cinfo3.scm 46 */
												BgL_approxz00_bglt BgL_approx4611z00_3205;

												BgL_approx4611z00_3205 =
													(BgL_approxz00_bglt) (BgL_arg5121z00_1988);
												{	/* Cfa/cinfo3.scm 46 */
													BgL_valloczf2cinfozf2_bglt BgL_new4612z00_3206;

													BgL_new4612z00_3206 =
														((BgL_valloczf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_valloczf2cinfozf2_bgl))));
													{	/* Cfa/cinfo3.scm 46 */
														BgL_valloczf2cinfozf2_bglt BgL_res5300z00_3210;

														{	/* Cfa/cinfo3.scm 46 */
															BgL_valloczf2cinfozf2_bglt BgL_new4627z00_3207;

															BgL_new4627z00_3207 = BgL_new4612z00_3206;
															{	/* Cfa/cinfo3.scm 46 */
																BgL_approxz00_bglt BgL_approx4626z00_3209;

																BgL_approx4626z00_3209 = BgL_approx4611z00_3205;
																((((BgL_valloczf2cinfozf2_bglt)
																			CREF(BgL_new4627z00_3207))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4626z00_3209),
																	BUNSPEC);
																BgL_res5300z00_3210 = BgL_new4627z00_3207;
														}} BgL_res5300z00_3210;
													}
													BgL_res5301z00_3211 = BgL_new4612z00_3206;
											}}
											BgL_arg5120z00_1987 = BgL_res5301z00_3211;
									}}
									{	/* Cfa/cinfo3.scm 46 */
										obj_t BgL_auxz00_5917;

										BgL_objectz00_bglt BgL_auxz00_5915;

										BgL_auxz00_5917 = (obj_t) (BgL_arg5120z00_1987);
										BgL_auxz00_5915 =
											(BgL_objectz00_bglt) (BgL_new4636z00_1985);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5915, BgL_auxz00_5917);
								}}
								BgL_auxz00_5893 = BgL_new4636z00_1985;
					}}}
					return (obj_t) (BgL_auxz00_5893);
				}
			}
		}
	}



/* object->struct-vallo4764 */
	obj_t BGl_objectzd2ze3structzd2vallo4764ze3zzcfa_info3z00(obj_t
		BgL_envz00_3893, obj_t BgL_obj4631z00_3894)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 46 */
			{
				BgL_valloczf2cinfozf2_bglt BgL_obj4631z00_1969;

				BgL_obj4631z00_1969 =
					(BgL_valloczf2cinfozf2_bglt) (BgL_obj4631z00_3894);
				{

					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_res4632z00_1972;

						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL_nextzd2method4763zd2_1977;

							BgL_nextzd2method4763zd2_1977 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4631z00_1969),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_valloczf2Cinfozf2zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4763zd2_1977))
								{	/* Cfa/cinfo3.scm 46 */
									BgL_res4632z00_1972 =
										PROCEDURE_ENTRY(BgL_nextzd2method4763zd2_1977)
										(BgL_nextzd2method4763zd2_1977,
										(obj_t) (BgL_obj4631z00_1969), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 46 */
									BgL_res4632z00_1972 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4631z00_1969));
								}
						}
						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL_aux4633z00_1973;

							{	/* Cfa/cinfo3.scm 46 */
								obj_t BgL_keyz00_3182;

								BgL_keyz00_3182 = CNST_TABLE_REF(((long) 10));
								BgL_aux4633z00_1973 =
									make_struct(BgL_keyz00_3182, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 46 */
								BgL_approxz00_bglt BgL_arg5116z00_1975;

								{
									obj_t BgL_auxz00_5934;

									{	/* Cfa/cinfo3.scm 46 */
										BgL_objectz00_bglt BgL_auxz00_5935;

										BgL_auxz00_5935 =
											(BgL_objectz00_bglt) (BgL_obj4631z00_1969);
										BgL_auxz00_5934 = BGL_OBJECT_WIDENING(BgL_auxz00_5935);
									}
									BgL_arg5116z00_1975 =
										(((BgL_valloczf2cinfozf2_bglt) CREF(BgL_auxz00_5934))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 46 */
									obj_t BgL_auxz00_5941;

									int BgL_auxz00_5939;

									BgL_auxz00_5941 = (obj_t) (BgL_arg5116z00_1975);
									BgL_auxz00_5939 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4633z00_1973, BgL_auxz00_5939,
										BgL_auxz00_5941);
							}}
							{	/* Cfa/cinfo3.scm 46 */
								int BgL_auxz00_5944;

								BgL_auxz00_5944 = (int) (((long) 0));
								STRUCT_SET(BgL_res4632z00_1972, BgL_auxz00_5944,
									BgL_aux4633z00_1973);
							}
							{	/* Cfa/cinfo3.scm 46 */
								obj_t BgL_auxz00_5947;

								BgL_auxz00_5947 = STRUCT_KEY(BgL_res4632z00_1972);
								STRUCT_KEY_SET(BgL_aux4633z00_1973, BgL_auxz00_5947);
							}
							{	/* Cfa/cinfo3.scm 46 */
								obj_t BgL_kz00_3197;

								BgL_kz00_3197 = CNST_TABLE_REF(((long) 10));
								STRUCT_KEY_SET(BgL_res4632z00_1972, BgL_kz00_3197);
							}
							return BgL_res4632z00_1972;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4762 */
	obj_t BGl_structzb2objectzd2ze3objec4762z83zzcfa_info3z00(obj_t
		BgL_envz00_3895, obj_t BgL_oz00_3896, obj_t BgL_sz00_3897)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_oz00_1951;

				obj_t BgL_sz00_1952;

				{	/* Cfa/cinfo3.scm 48 */
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5953;

					BgL_oz00_1951 = (BgL_valloczf2cinfozb2optimz40_bglt) (BgL_oz00_3896);
					BgL_sz00_1952 = BgL_sz00_3897;
					{

						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL_old4706z00_1955;

							obj_t BgL_aux4707z00_1956;

							{	/* Cfa/cinfo3.scm 48 */
								obj_t BgL_nextzd2method4761zd2_1967;

								BgL_nextzd2method4761zd2_1967 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1951),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
								if (PROCEDUREP(BgL_nextzd2method4761zd2_1967))
									{	/* Cfa/cinfo3.scm 48 */
										BgL_old4706z00_1955 =
											PROCEDURE_ENTRY(BgL_nextzd2method4761zd2_1967)
											(BgL_nextzd2method4761zd2_1967, (obj_t) (BgL_oz00_1951),
											BgL_sz00_1952, BEOA);
									}
								else
									{	/* Cfa/cinfo3.scm 48 */
										BgL_old4706z00_1955 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1951), BgL_sz00_1952));
									}
							}
							BgL_aux4707z00_1956 =
								STRUCT_REF(BgL_sz00_1952, (int) (((long) 0)));
							{	/* Cfa/cinfo3.scm 48 */
								BgL_valloczf2cinfozb2optimz40_bglt BgL_new4708z00_1957;

								BgL_new4708z00_1957 =
									((BgL_valloczf2cinfozb2optimz40_bglt) (BgL_old4706z00_1955));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4708z00_1957),
									BGl_classzd2numzd2zz__objectz00
									(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00));
								{	/* Cfa/cinfo3.scm 48 */
									BgL_valloczf2cinfozb2optimz40_bglt BgL_arg5106z00_1959;

									{	/* Cfa/cinfo3.scm 48 */
										obj_t BgL_arg5107z00_1960;

										obj_t BgL_arg5108z00_1961;

										obj_t BgL_arg5109z00_1962;

										obj_t BgL_arg5110z00_1963;

										obj_t BgL_arg5111z00_1964;

										obj_t BgL_arg5112z00_1965;

										obj_t BgL_arg5113z00_1966;

										BgL_arg5107z00_1960 =
											STRUCT_REF(BgL_aux4707z00_1956, (int) (((long) 0)));
										BgL_arg5108z00_1961 =
											STRUCT_REF(BgL_aux4707z00_1956, (int) (((long) 1)));
										BgL_arg5109z00_1962 =
											STRUCT_REF(BgL_aux4707z00_1956, (int) (((long) 2)));
										BgL_arg5110z00_1963 =
											STRUCT_REF(BgL_aux4707z00_1956, (int) (((long) 3)));
										BgL_arg5111z00_1964 =
											STRUCT_REF(BgL_aux4707z00_1956, (int) (((long) 4)));
										BgL_arg5112z00_1965 =
											STRUCT_REF(BgL_aux4707z00_1956, (int) (((long) 5)));
										BgL_arg5113z00_1966 =
											STRUCT_REF(BgL_aux4707z00_1956, (int) (((long) 6)));
										{	/* Cfa/cinfo3.scm 48 */
											BgL_valloczf2cinfozb2optimz40_bglt BgL_res5298z00_3180;

											{	/* Cfa/cinfo3.scm 48 */
												BgL_approxz00_bglt BgL_approx4659z00_3156;

												BgL_approxz00_bglt BgL_valuezd2approx4660zd2_3157;

												long BgL_lostzd2stamp4661zd2_3158;

												BgL_variablez00_bglt BgL_owner4662z00_3159;

												bool_t BgL_stackablezf34663zf3_3160;

												bool_t BgL_seenzf34665zf3_3162;

												BgL_approx4659z00_3156 =
													(BgL_approxz00_bglt) (BgL_arg5107z00_1960);
												BgL_valuezd2approx4660zd2_3157 =
													(BgL_approxz00_bglt) (BgL_arg5108z00_1961);
												BgL_lostzd2stamp4661zd2_3158 =
													(long) CINT(BgL_arg5109z00_1962);
												BgL_owner4662z00_3159 =
													(BgL_variablez00_bglt) (BgL_arg5110z00_1963);
												BgL_stackablezf34663zf3_3160 =
													CBOOL(BgL_arg5111z00_1964);
												BgL_seenzf34665zf3_3162 = CBOOL(BgL_arg5113z00_1966);
												{	/* Cfa/cinfo3.scm 48 */
													BgL_valloczf2cinfozb2optimz40_bglt
														BgL_new4666z00_3163;
													BgL_new4666z00_3163 =
														((BgL_valloczf2cinfozb2optimz40_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_valloczf2cinfozb2optimz40_bgl))));
													{	/* Cfa/cinfo3.scm 48 */
														BgL_valloczf2cinfozb2optimz40_bglt
															BgL_res5297z00_3179;
														{	/* Cfa/cinfo3.scm 48 */
															BgL_valloczf2cinfozb2optimz40_bglt
																BgL_new4693z00_3164;
															BgL_new4693z00_3164 = BgL_new4666z00_3163;
															{	/* Cfa/cinfo3.scm 48 */
																BgL_approxz00_bglt BgL_approx4686z00_3172;

																BgL_approxz00_bglt
																	BgL_valuezd2approx4687zd2_3173;
																long BgL_lostzd2stamp4688zd2_3174;

																BgL_variablez00_bglt BgL_owner4689z00_3175;

																bool_t BgL_stackablezf34690zf3_3176;

																obj_t BgL_stackzd2stamp4691zd2_3177;

																bool_t BgL_seenzf34692zf3_3178;

																BgL_approx4686z00_3172 = BgL_approx4659z00_3156;
																BgL_valuezd2approx4687zd2_3173 =
																	BgL_valuezd2approx4660zd2_3157;
																BgL_lostzd2stamp4688zd2_3174 =
																	BgL_lostzd2stamp4661zd2_3158;
																BgL_owner4689z00_3175 = BgL_owner4662z00_3159;
																BgL_stackablezf34690zf3_3176 =
																	BgL_stackablezf34663zf3_3160;
																BgL_stackzd2stamp4691zd2_3177 =
																	BgL_arg5112z00_1965;
																BgL_seenzf34692zf3_3178 =
																	BgL_seenzf34665zf3_3162;
																((((BgL_valloczf2cinfozb2optimz40_bglt)
																			CREF(BgL_new4693z00_3164))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4686z00_3172),
																	BUNSPEC);
																((((BgL_valloczf2cinfozb2optimz40_bglt)
																			CREF(BgL_new4693z00_3164))->
																		BgL_valuezd2approxzd2) =
																	((BgL_approxz00_bglt)
																		BgL_valuezd2approx4687zd2_3173), BUNSPEC);
																((((BgL_valloczf2cinfozb2optimz40_bglt)
																			CREF(BgL_new4693z00_3164))->
																		BgL_lostzd2stampzd2) =
																	((long) BgL_lostzd2stamp4688zd2_3174),
																	BUNSPEC);
																((((BgL_valloczf2cinfozb2optimz40_bglt)
																			CREF(BgL_new4693z00_3164))->
																		BgL_ownerz00) =
																	((BgL_variablez00_bglt)
																		BgL_owner4689z00_3175), BUNSPEC);
																((((BgL_valloczf2cinfozb2optimz40_bglt)
																			CREF(BgL_new4693z00_3164))->
																		BgL_stackablezf3zf3) =
																	((bool_t) BgL_stackablezf34690zf3_3176),
																	BUNSPEC);
																((((BgL_valloczf2cinfozb2optimz40_bglt)
																			CREF(BgL_new4693z00_3164))->
																		BgL_stackzd2stampzd2) =
																	((obj_t) BgL_stackzd2stamp4691zd2_3177),
																	BUNSPEC);
																((((BgL_valloczf2cinfozb2optimz40_bglt)
																			CREF(BgL_new4693z00_3164))->
																		BgL_seenzf3zf3) =
																	((bool_t) BgL_seenzf34692zf3_3178), BUNSPEC);
																BgL_res5297z00_3179 = BgL_new4693z00_3164;
														}} BgL_res5297z00_3179;
													}
													BgL_res5298z00_3180 = BgL_new4666z00_3163;
											}}
											BgL_arg5106z00_1959 = BgL_res5298z00_3180;
									}}
									{	/* Cfa/cinfo3.scm 48 */
										obj_t BgL_auxz00_6000;

										BgL_objectz00_bglt BgL_auxz00_5998;

										BgL_auxz00_6000 = (obj_t) (BgL_arg5106z00_1959);
										BgL_auxz00_5998 =
											(BgL_objectz00_bglt) (BgL_new4708z00_1957);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5998, BgL_auxz00_6000);
								}}
								BgL_auxz00_5953 = BgL_new4708z00_1957;
					}}}
					return (obj_t) (BgL_auxz00_5953);
				}
			}
		}
	}



/* object->struct-vallo4760 */
	obj_t BGl_objectzd2ze3structzd2vallo4760ze3zzcfa_info3z00(obj_t
		BgL_envz00_3898, obj_t BgL_obj4703z00_3899)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 48 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_obj4703z00_1929;

				BgL_obj4703z00_1929 =
					(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_obj4703z00_3899);
				{

					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_res4704z00_1932;

						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL_nextzd2method4759zd2_1949;

							BgL_nextzd2method4759zd2_1949 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4703z00_1929),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
							if (PROCEDUREP(BgL_nextzd2method4759zd2_1949))
								{	/* Cfa/cinfo3.scm 48 */
									BgL_res4704z00_1932 =
										PROCEDURE_ENTRY(BgL_nextzd2method4759zd2_1949)
										(BgL_nextzd2method4759zd2_1949,
										(obj_t) (BgL_obj4703z00_1929), BEOA);
								}
							else
								{	/* Cfa/cinfo3.scm 48 */
									BgL_res4704z00_1932 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4703z00_1929));
								}
						}
						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL_aux4705z00_1933;

							{	/* Cfa/cinfo3.scm 48 */
								obj_t BgL_keyz00_3097;

								BgL_keyz00_3097 = CNST_TABLE_REF(((long) 11));
								BgL_aux4705z00_1933 =
									make_struct(BgL_keyz00_3097, (int) (((long) 7)), BUNSPEC);
							}
							{	/* Cfa/cinfo3.scm 48 */
								BgL_approxz00_bglt BgL_arg5090z00_1935;

								{
									obj_t BgL_auxz00_6017;

									{	/* Cfa/cinfo3.scm 48 */
										BgL_objectz00_bglt BgL_auxz00_6018;

										BgL_auxz00_6018 =
											(BgL_objectz00_bglt) (BgL_obj4703z00_1929);
										BgL_auxz00_6017 = BGL_OBJECT_WIDENING(BgL_auxz00_6018);
									}
									BgL_arg5090z00_1935 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_6017))->BgL_approxz00);
								}
								{	/* Cfa/cinfo3.scm 48 */
									obj_t BgL_auxz00_6024;

									int BgL_auxz00_6022;

									BgL_auxz00_6024 = (obj_t) (BgL_arg5090z00_1935);
									BgL_auxz00_6022 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4705z00_1933, BgL_auxz00_6022,
										BgL_auxz00_6024);
							}}
							{	/* Cfa/cinfo3.scm 48 */
								BgL_approxz00_bglt BgL_arg5092z00_1937;

								{
									obj_t BgL_auxz00_6027;

									{	/* Cfa/cinfo3.scm 48 */
										BgL_objectz00_bglt BgL_auxz00_6028;

										BgL_auxz00_6028 =
											(BgL_objectz00_bglt) (BgL_obj4703z00_1929);
										BgL_auxz00_6027 = BGL_OBJECT_WIDENING(BgL_auxz00_6028);
									}
									BgL_arg5092z00_1937 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_6027))->BgL_valuezd2approxzd2);
								}
								{	/* Cfa/cinfo3.scm 48 */
									obj_t BgL_auxz00_6034;

									int BgL_auxz00_6032;

									BgL_auxz00_6034 = (obj_t) (BgL_arg5092z00_1937);
									BgL_auxz00_6032 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4705z00_1933, BgL_auxz00_6032,
										BgL_auxz00_6034);
							}}
							{	/* Cfa/cinfo3.scm 48 */
								long BgL_arg5094z00_1939;

								{
									obj_t BgL_auxz00_6037;

									{	/* Cfa/cinfo3.scm 48 */
										BgL_objectz00_bglt BgL_auxz00_6038;

										BgL_auxz00_6038 =
											(BgL_objectz00_bglt) (BgL_obj4703z00_1929);
										BgL_auxz00_6037 = BGL_OBJECT_WIDENING(BgL_auxz00_6038);
									}
									BgL_arg5094z00_1939 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_6037))->BgL_lostzd2stampzd2);
								}
								{	/* Cfa/cinfo3.scm 48 */
									obj_t BgL_auxz00_6044;

									int BgL_auxz00_6042;

									BgL_auxz00_6044 = BINT(BgL_arg5094z00_1939);
									BgL_auxz00_6042 = (int) (((long) 2));
									STRUCT_SET(BgL_aux4705z00_1933, BgL_auxz00_6042,
										BgL_auxz00_6044);
							}}
							{	/* Cfa/cinfo3.scm 48 */
								BgL_variablez00_bglt BgL_arg5096z00_1941;

								{
									obj_t BgL_auxz00_6047;

									{	/* Cfa/cinfo3.scm 48 */
										BgL_objectz00_bglt BgL_auxz00_6048;

										BgL_auxz00_6048 =
											(BgL_objectz00_bglt) (BgL_obj4703z00_1929);
										BgL_auxz00_6047 = BGL_OBJECT_WIDENING(BgL_auxz00_6048);
									}
									BgL_arg5096z00_1941 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_6047))->BgL_ownerz00);
								}
								{	/* Cfa/cinfo3.scm 48 */
									obj_t BgL_auxz00_6054;

									int BgL_auxz00_6052;

									BgL_auxz00_6054 = (obj_t) (BgL_arg5096z00_1941);
									BgL_auxz00_6052 = (int) (((long) 3));
									STRUCT_SET(BgL_aux4705z00_1933, BgL_auxz00_6052,
										BgL_auxz00_6054);
							}}
							{	/* Cfa/cinfo3.scm 48 */
								bool_t BgL_arg5098z00_1943;

								{
									obj_t BgL_auxz00_6057;

									{	/* Cfa/cinfo3.scm 48 */
										BgL_objectz00_bglt BgL_auxz00_6058;

										BgL_auxz00_6058 =
											(BgL_objectz00_bglt) (BgL_obj4703z00_1929);
										BgL_auxz00_6057 = BGL_OBJECT_WIDENING(BgL_auxz00_6058);
									}
									BgL_arg5098z00_1943 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_6057))->BgL_stackablezf3zf3);
								}
								{	/* Cfa/cinfo3.scm 48 */
									obj_t BgL_auxz00_6064;

									int BgL_auxz00_6062;

									BgL_auxz00_6064 = BBOOL(BgL_arg5098z00_1943);
									BgL_auxz00_6062 = (int) (((long) 4));
									STRUCT_SET(BgL_aux4705z00_1933, BgL_auxz00_6062,
										BgL_auxz00_6064);
							}}
							{	/* Cfa/cinfo3.scm 48 */
								obj_t BgL_arg5100z00_1945;

								{
									obj_t BgL_auxz00_6067;

									{	/* Cfa/cinfo3.scm 48 */
										BgL_objectz00_bglt BgL_auxz00_6068;

										BgL_auxz00_6068 =
											(BgL_objectz00_bglt) (BgL_obj4703z00_1929);
										BgL_auxz00_6067 = BGL_OBJECT_WIDENING(BgL_auxz00_6068);
									}
									BgL_arg5100z00_1945 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_6067))->BgL_stackzd2stampzd2);
								}
								{	/* Cfa/cinfo3.scm 48 */
									int BgL_auxz00_6072;

									BgL_auxz00_6072 = (int) (((long) 5));
									STRUCT_SET(BgL_aux4705z00_1933, BgL_auxz00_6072,
										BgL_arg5100z00_1945);
							}}
							{	/* Cfa/cinfo3.scm 48 */
								bool_t BgL_arg5102z00_1947;

								{
									obj_t BgL_auxz00_6075;

									{	/* Cfa/cinfo3.scm 48 */
										BgL_objectz00_bglt BgL_auxz00_6076;

										BgL_auxz00_6076 =
											(BgL_objectz00_bglt) (BgL_obj4703z00_1929);
										BgL_auxz00_6075 = BGL_OBJECT_WIDENING(BgL_auxz00_6076);
									}
									BgL_arg5102z00_1947 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_6075))->BgL_seenzf3zf3);
								}
								{	/* Cfa/cinfo3.scm 48 */
									obj_t BgL_auxz00_6082;

									int BgL_auxz00_6080;

									BgL_auxz00_6082 = BBOOL(BgL_arg5102z00_1947);
									BgL_auxz00_6080 = (int) (((long) 6));
									STRUCT_SET(BgL_aux4705z00_1933, BgL_auxz00_6080,
										BgL_auxz00_6082);
							}}
							{	/* Cfa/cinfo3.scm 48 */
								int BgL_auxz00_6085;

								BgL_auxz00_6085 = (int) (((long) 0));
								STRUCT_SET(BgL_res4704z00_1932, BgL_auxz00_6085,
									BgL_aux4705z00_1933);
							}
							{	/* Cfa/cinfo3.scm 48 */
								obj_t BgL_auxz00_6088;

								BgL_auxz00_6088 = STRUCT_KEY(BgL_res4704z00_1932);
								STRUCT_KEY_SET(BgL_aux4705z00_1933, BgL_auxz00_6088);
							}
							{	/* Cfa/cinfo3.scm 48 */
								obj_t BgL_kz00_3136;

								BgL_kz00_3136 = CNST_TABLE_REF(((long) 11));
								STRUCT_KEY_SET(BgL_res4704z00_1932, BgL_kz00_3136);
							}
							return BgL_res4704z00_1932;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_info3z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo3.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5362z00zzcfa_info3z00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5362z00zzcfa_info3z00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5362z00zzcfa_info3z00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5362z00zzcfa_info3z00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5362z00zzcfa_info3z00));
		}
	}

#ifdef __cplusplus
}
#endif
