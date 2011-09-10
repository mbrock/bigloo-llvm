/*===========================================================================*/
/*   (Expand/initial.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/initial.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34962ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34965ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34129ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34132ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2symzd2zzast_letz00();
	static obj_t BGl_callzd2checkzd2zzexpand_installz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_labelszd2symzd2zzast_labelsz00();
	static obj_t BGl_zc3anonymousza34984ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_initializa7ezd2Oenvz12z67zzexpand_expanderz00();
	static obj_t BGl_zc3anonymousza33767ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33770ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_mapzd2checkzd2nonzd2nullzd2zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_zc3anonymousza33773ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_installz00();
	static obj_t BGl_zc3anonymousza33776ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34444ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33779ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33498ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33782ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34733ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33785ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33788ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_zc3anonymousza33800ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33791ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33794ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33804ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33797ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33807ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_mapzd2checkzd2zzexpand_installz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_installz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_labelsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzexpand_multiplezd2valueszd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_assertz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_mapz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_casez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_farithmetiquez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_iarithmetiquez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_garithmetiquez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_exitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_definez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_ifz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__pregexpz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_zc3anonymousza33529ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzexpand_installz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_zc3anonymousza34481ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33825ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_dispz00zzexpand_installz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_ifzd2symzd2zzast_sexpz00();
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2initialzd2expanderz00zzexpand_installz00();
	static bool_t BGl_installedpz00zzexpand_installz00;
	static obj_t BGl_loopz00zzexpand_installz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33560ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_installzd2compilerzd2expanderz00zz__macroz00(obj_t,
		obj_t);
	static obj_t BGl_loopz72z72zzexpand_installz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34233ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33851ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_errzf2loczf2zzexpand_installz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34236ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2unsafezd2rangeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_zc3anonymousza34796ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34524ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	extern obj_t BGl_initializa7ezd2Genvz12z67zzexpand_expanderz00();
	static obj_t BGl_methodzd2initzd2zzexpand_installz00();
	extern obj_t BGl_za2genericityza2z00zzengine_paramz00;
	static obj_t BGl_zc3anonymousza34821ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33590ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl_zc3anonymousza34824ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34827ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza34267ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_installz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza33890ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evsetz12z12zzexpand_installz00(obj_t, obj_t, obj_t);
	static obj_t BGl_evrefz00zzexpand_installz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_installz00();
	static obj_t BGl_zc3anonymousza33621ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t
		BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34564ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34008ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_zc3anonymousza33635ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34302ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__installzd2initialzd2expanderz00zzexpand_installz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_installz00();
	static obj_t BGl_zc3anonymousza33653ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33656ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33659ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33662ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34884ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_boundzd2checkzd2zzexpand_installz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33665ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34615ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34334ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33668ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	extern obj_t
		BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33672ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl_zc3anonymousza33675ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33679ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	static obj_t BGl_zc3anonymousza33970ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_pregexpzd2expanderzd2zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_installzd2expanderszd2zzexpand_installz00();
	static obj_t BGl_zc3anonymousza34364ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_pregexpz00zz__pregexpz00(obj_t);
	static obj_t BGl_zc3anonymousza34087ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33434ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34940ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34666ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33728ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34385ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_installz00();
	static obj_t BGl_zc3anonymousza34402ze3z83zzexpand_installz00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[194];


	extern obj_t BGl_expandzd2letzd2envz00zzexpand_letz00;
	extern obj_t BGl_expandzd2setzd2exitzd2envzd2zzexpand_exitz00;
	extern obj_t BGl_expandzd2minfxzd2envz00zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2Ozd2valueszd2envzd2zzexpand_multiplezd2valueszd2;
	extern obj_t BGl_expandzd2izb2zd2envzb2zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2gzd3zd2envzd3zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2ifzd2envz00zzexpand_ifz00;
	extern obj_t BGl_expandzd2letreczd2envz00zzexpand_letz00;
	extern obj_t BGl_expandzd2letza2zd2envza2zzexpand_letz00;
	extern obj_t BGl_expandzd2fminzd2envz00zzexpand_farithmetiquez00;
	extern obj_t BGl_expandzd2izc3zd3zd2envz10zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2genericzd2envz00zzexpand_definez00;
	extern obj_t BGl_expandzd2gzc3zd3zd2envz10zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2forzd2eachzd2envzd2zzexpand_mapz00;
	extern obj_t BGl_expandzd2gza2zd2envza2zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2widenz12zd2envz12zzexpand_objectz00;
	extern obj_t BGl_expandzd2everyzf3zd2envzf3zzexpand_mapz00;
	extern obj_t BGl_expandzd2anyzf3zd2envzf3zzexpand_mapz00;
	extern obj_t BGl_expandzd2definezd2envz00zzexpand_definez00;
	extern obj_t BGl_expandzd2gzf2zd2envzf2zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2structzd2envz00zzexpand_structz00;
	extern obj_t BGl_expandzd2notzd2envz00zzexpand_ifz00;
	extern obj_t BGl_expandzd2gze3zd2envze3zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2mapzd2envz00zzexpand_mapz00;
	extern obj_t BGl_expandzd2setz12zd2envz12zzexpand_definez00;
	extern obj_t BGl_expandzd2lambdazd2envz00zzexpand_lambdaz00;
	extern obj_t BGl_expandzd2reducezd2envz00zzexpand_mapz00;
	extern obj_t BGl_expandzd2labelszd2envz00zzexpand_letz00;
	extern obj_t BGl_expandzd2jumpzd2exitzd2envzd2zzexpand_exitz00;
	extern obj_t BGl_expandzd2gzb2zd2envzb2zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2casezd2envz00zzexpand_casez00;
	extern obj_t BGl_expandzd2cozd2instantiatezd2envzd2zzexpand_objectz00;
	extern obj_t BGl_expandzd2maxfxzd2envz00zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2izd2zd2envzd2zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2assertzd2envz00zzexpand_assertz00;
	extern obj_t BGl_expandzd2fmaxzd2envz00zzexpand_farithmetiquez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2initialzd2expanderzd2envzd2zzexpand_installz00,
		BgL_bgl__installza7d2initi5657za7,
		BGl__installzd2initialzd2expanderz00zzexpand_installz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_expandzd2orzd2envz00zzexpand_ifz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5553z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335658z00,
		BGl_zc3anonymousza33434ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5554z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335659z00,
		BGl_zc3anonymousza33498ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5555z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335660z00,
		BGl_zc3anonymousza33529ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5556z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335661z00,
		BGl_zc3anonymousza33560ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5557z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335662z00,
		BGl_zc3anonymousza33590ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5558z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335663z00,
		BGl_zc3anonymousza33621ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5560z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335664z00,
		BGl_zc3anonymousza33653ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5559z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335665z00,
		BGl_zc3anonymousza33635ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5561z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335666z00,
		BGl_zc3anonymousza33656ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5562z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335667z00,
		BGl_zc3anonymousza33659ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5563z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335668z00,
		BGl_zc3anonymousza33662ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5564z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335669z00,
		BGl_zc3anonymousza33665ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5565z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335670z00,
		BGl_zc3anonymousza33668ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5566z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335671z00,
		BGl_zc3anonymousza33672ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5567z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335672z00,
		BGl_zc3anonymousza33675ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5568z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335673z00,
		BGl_zc3anonymousza33679ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5570z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335674z00,
		BGl_zc3anonymousza33767ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5569z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335675z00,
		BGl_zc3anonymousza33728ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5571z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335676z00,
		BGl_zc3anonymousza33770ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5572z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335677z00,
		BGl_zc3anonymousza33773ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5573z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335678z00,
		BGl_zc3anonymousza33776ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_expandzd2izc3zd2envzc3zzexpand_iarithmetiquez00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5574z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335679z00,
		BGl_zc3anonymousza33779ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5575z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335680z00,
		BGl_zc3anonymousza33782ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5576z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335681z00,
		BGl_zc3anonymousza33785ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5577z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335682z00,
		BGl_zc3anonymousza33788ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5578z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335683z00,
		BGl_zc3anonymousza33791ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5580z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335684z00,
		BGl_zc3anonymousza33797ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5579z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335685z00,
		BGl_zc3anonymousza33794ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5581z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335686z00,
		BGl_zc3anonymousza33800ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5582z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335687z00,
		BGl_zc3anonymousza33804ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5583z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335688z00,
		BGl_zc3anonymousza33807ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5584z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335689z00,
		BGl_zc3anonymousza33825ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5585z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335690z00,
		BGl_zc3anonymousza33851ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5586z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335691z00,
		BGl_zc3anonymousza33890ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5587z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a335692z00,
		BGl_zc3anonymousza33970ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5588z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345693z00,
		BGl_zc3anonymousza34008ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5600z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345694z00,
		BGl_zc3anonymousza34385ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5590z00zzexpand_installz00,
		BgL_bgl_evrefza700za7za7expand5695za7, BGl_evrefz00zzexpand_installz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5589z00zzexpand_installz00,
		BgL_bgl_evsetza712za712za7za7exp5696z00, BGl_evsetz12z12zzexpand_installz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5601z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345697z00,
		BGl_zc3anonymousza34402ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5591z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345698z00,
		BGl_zc3anonymousza34087ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5602z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345699z00,
		BGl_zc3anonymousza34444ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5592z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345700z00,
		BGl_zc3anonymousza34129ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5603z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345701z00,
		BGl_zc3anonymousza34481ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5593z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345702z00,
		BGl_zc3anonymousza34132ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5604z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345703z00,
		BGl_zc3anonymousza34524ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5594z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345704z00,
		BGl_zc3anonymousza34233ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5605z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345705z00,
		BGl_zc3anonymousza34564ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5595z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345706z00,
		BGl_zc3anonymousza34236ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5606z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345707z00,
		BGl_zc3anonymousza34615ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5596z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345708z00,
		BGl_zc3anonymousza34267ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5607z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345709z00,
		BGl_zc3anonymousza34666ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5597z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345710z00,
		BGl_zc3anonymousza34302ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5608z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345711z00,
		BGl_zc3anonymousza34733ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5598z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345712z00,
		BGl_zc3anonymousza34334ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5610z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345713z00,
		BGl_zc3anonymousza34821ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5609z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345714z00,
		BGl_zc3anonymousza34796ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5599z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345715z00,
		BGl_zc3anonymousza34364ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5611z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345716z00,
		BGl_zc3anonymousza34824ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5612z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345717z00,
		BGl_zc3anonymousza34827ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5613z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345718z00,
		BGl_zc3anonymousza34884ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5614z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345719z00,
		BGl_zc3anonymousza34940ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5615z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345720z00,
		BGl_zc3anonymousza34962ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5616z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345721z00,
		BGl_zc3anonymousza34965ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5617z00zzexpand_installz00,
		BgL_bgl_za7c3anonymousza7a345722z00,
		BGl_zc3anonymousza34984ze3z83zzexpand_installz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5618z00zzexpand_installz00,
		BgL_bgl_pregexpza7d2expand5723za7,
		BGl_pregexpzd2expanderzd2zzexpand_installz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_expandzd2zd2fxzd2envzd2zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2gminzd2envz00zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2zb2fxzd2envzb2zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2shrinkz12zd2envz12zzexpand_objectz00;
	   
		 
		DEFINE_STRING(BGl_string5620z00zzexpand_installz00,
		BgL_bgl_string5620za700za7za7e5724za7, "Illegal `mmap-ref' form", 23);
	      DEFINE_STRING(BGl_string5619z00zzexpand_installz00,
		BgL_bgl_string5619za700za7za7e5725za7, "Illegal `pregexp' form", 22);
	      DEFINE_STRING(BGl_string5621z00zzexpand_installz00,
		BgL_bgl_string5621za700za7za7e5726za7, "Illegal `mmap-set!' form", 24);
	      DEFINE_STRING(BGl_string5622z00zzexpand_installz00,
		BgL_bgl_string5622za700za7za7e5727za7, "profile", 7);
	      DEFINE_STRING(BGl_string5623z00zzexpand_installz00,
		BgL_bgl_string5623za700za7za7e5728za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string5624z00zzexpand_installz00,
		BgL_bgl_string5624za700za7za7e5729za7, "number", 6);
	      DEFINE_STRING(BGl_string5625z00zzexpand_installz00,
		BgL_bgl_string5625za700za7za7e5730za7, "Illegal `apply' form", 20);
	      DEFINE_STRING(BGl_string5626z00zzexpand_installz00,
		BgL_bgl_string5626za700za7za7e5731za7, "Illegal `integer->char' call", 28);
	      DEFINE_STRING(BGl_string5627z00zzexpand_installz00,
		BgL_bgl_string5627za700za7za7e5732za7, "Illegal `blit-string!' form", 27);
	      DEFINE_STRING(BGl_string5628z00zzexpand_installz00,
		BgL_bgl_string5628za700za7za7e5733za7, "Illegal `substring-ci-at?' form",
		31);
	      DEFINE_STRING(BGl_string5630z00zzexpand_installz00,
		BgL_bgl_string5630za700za7za7e5734za7, "symbol", 6);
	      DEFINE_STRING(BGl_string5629z00zzexpand_installz00,
		BgL_bgl_string5629za700za7za7e5735za7, "Illegal `substrint-at?' form", 28);
	      DEFINE_STRING(BGl_string5631z00zzexpand_installz00,
		BgL_bgl_string5631za700za7za7e5736za7, "string", 6);
	      DEFINE_STRING(BGl_string5632z00zzexpand_installz00,
		BgL_bgl_string5632za700za7za7e5737za7, "Illegal `vector-set!' form", 26);
	      DEFINE_STRING(BGl_string5633z00zzexpand_installz00,
		BgL_bgl_string5633za700za7za7e5738za7, "Illegal `vector-ref' form", 25);
	      DEFINE_STRING(BGl_string5634z00zzexpand_installz00,
		BgL_bgl_string5634za700za7za7e5739za7, "Illegal `read/rp' form", 22);
	      DEFINE_STRING(BGl_string5635z00zzexpand_installz00,
		BgL_bgl_string5635za700za7za7e5740za7, "Grammar arity mismatch", 22);
	      DEFINE_STRING(BGl_string5636z00zzexpand_installz00,
		BgL_bgl_string5636za700za7za7e5741za7, "Illegal `read' form", 19);
	      DEFINE_STRING(BGl_string5637z00zzexpand_installz00,
		BgL_bgl_string5637za700za7za7e5742za7, "Illegal `atan-2fl' call", 23);
	      DEFINE_STRING(BGl_string5638z00zzexpand_installz00,
		BgL_bgl_string5638za700za7za7e5743za7, "Illegal `sqrtfl' call", 21);
	      DEFINE_STRING(BGl_string5640z00zzexpand_installz00,
		BgL_bgl_string5640za700za7za7e5744za7, "Illegal `equal?' form", 21);
	      DEFINE_STRING(BGl_string5639z00zzexpand_installz00,
		BgL_bgl_string5639za700za7za7e5745za7, "Illegal `eqv?' form", 19);
	      DEFINE_STRING(BGl_string5641z00zzexpand_installz00,
		BgL_bgl_string5641za700za7za7e5746za7, "Illegal `cons' form", 19);
	extern obj_t BGl_expandzd2instantiatezd2envz00zzexpand_objectz00;
	   
		 
		DEFINE_STRING(BGl_string5642z00zzexpand_installz00,
		BgL_bgl_string5642za700za7za7e5747za7, "Illegal 'string-length' form", 28);
	      DEFINE_STRING(BGl_string5643z00zzexpand_installz00,
		BgL_bgl_string5643za700za7za7e5748za7, "Illegal `eappend' form", 22);
	      DEFINE_STRING(BGl_string5644z00zzexpand_installz00,
		BgL_bgl_string5644za700za7za7e5749za7, "Illegal `append!' form", 22);
	      DEFINE_STRING(BGl_string5645z00zzexpand_installz00,
		BgL_bgl_string5645za700za7za7e5750za7, "Illegal `append' form", 21);
	      DEFINE_STRING(BGl_string5646z00zzexpand_installz00,
		BgL_bgl_string5646za700za7za7e5751za7, ": argument not a ", 17);
	      DEFINE_STRING(BGl_string5647z00zzexpand_installz00,
		BgL_bgl_string5647za700za7za7e5752za7, "index out of bound", 18);
	      DEFINE_STRING(BGl_string5648z00zzexpand_installz00,
		BgL_bgl_string5648za700za7za7e5753za7, "Illegal expression", 18);
	      DEFINE_STRING(BGl_string5650z00zzexpand_installz00,
		BgL_bgl_string5650za700za7za7e5754za7, ": argument not a list", 21);
	      DEFINE_STRING(BGl_string5649z00zzexpand_installz00,
		BgL_bgl_string5649za700za7za7e5755za7, "used with only two arguments", 28);
	      DEFINE_STRING(BGl_string5651z00zzexpand_installz00,
		BgL_bgl_string5651za700za7za7e5756za7, "Incorrect function arity", 24);
	      DEFINE_STRING(BGl_string5652z00zzexpand_installz00,
		BgL_bgl_string5652za700za7za7e5757za7, "Various list length", 19);
	      DEFINE_STRING(BGl_string5653z00zzexpand_installz00,
		BgL_bgl_string5653za700za7za7e5758za7, "expand_install", 14);
	      DEFINE_STRING(BGl_string5654z00zzexpand_installz00,
		BgL_bgl_string5654za700za7za7e5759za7,
		"(@ display-2 __r4_output_6_10_3) (@ write-char-2 __r4_output_6_10_3) (@ display-flonum __r4_output_6_10_3) (@ display-fixnum __r4_output_6_10_3) (@ display-symbol __r4_output_6_10_3) (@ display-string __r4_output_6_10_3) error/location __error list? list length error/c-location begin warning/c-location location append-2 append-2! eappend-2 (quote ()) sqrtfl-ur atan-2fl-ur current-input-port correct-arity? vector-set-ur! $create-vector v (unspecified) $make-vector $ $string-append $string-append-3 string? symbol->string string->symbol symbol? substring-ur $prefix-at? $substring-at? $prefix-ci-at? $substring-ci-at? blit-string-ur! integer->char-ur c-cons __r4_pairs_and_lists_6_3 write-char-2 write-byte-2 current-output-port __r4_ports_6_10_1 newline-1 __r4_output_6_10_3 @ port read-string file->string number? GC-profile-push GC-profile-pop GC-collect-profile-push value mmap-set-ur! mmap-ref-ur $mmap-bound-check? mmap-length quote tree-copy pregexp-split pregexp-replace* pregexp-replace pregexp-match pregexp-mat"
		"ch-positions mmap-ref mmap-set! profile/gc profile cond-expand shrink! widen! duplicate co-instantiate instantiate with-access define-abstract-class define-final-class define-class assert call-with-values values exact->inexact inexact->exact with-input-from-file fprint print write-byte write-char display newline apply cons* char->integer integer->char blit-string! substring-ci-at? substring-at? substring symbol-append string-append f64vector-set! f64vector-ref f32vector-set! f32vector-ref u64vector-set! u64vector-ref s64vector-set! s64vector-ref u32vector-set! u32vector-ref s32vector-set! s32vector-ref u16vector-set! u16vector-ref s16vector-set! s16vector-ref u8vector-set! u8vector-ref s8vector-set! s8vector-ref make-vector vector read/rp read case labels letrec* letrec let let* atan-2fl sqrtfl atanfl minfl maxfl minfx maxfx -fx +fx eq? sin cos min max >= <= > < = - / * + eqv? equal? reduce every any every? any? filter! filter for-each map cons string-length eappend append! append warning error multiple-value"
		"-bind with-handler unwind-protect bind-exit jump-exit set-exit set! define-struct define-method define-generic define-inline define lambda not and or if ",
		2201);
	extern obj_t BGl_expandzd2eqzf3zd2envzf3zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2izd3zd2envzd3zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2duplicatezd2envz00zzexpand_objectz00;
	extern obj_t BGl_expandzd2andzd2envz00zzexpand_ifz00;
	extern obj_t BGl_expandzd2inlinezd2envz00zzexpand_definez00;
	extern obj_t BGl_expandzd2definezd2classzd2envzd2zzexpand_objectz00;
	extern obj_t BGl_expandzd2withzd2handlerzd2envzd2zzexpand_exitz00;
	extern obj_t BGl_expandzd2ize3zd3zd2envz30zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2gzd2zd2envzd2zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2gze3zd3zd2envz30zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2mvaluezd2bindzd2envzd2zzexpand_multiplezd2valueszd2;
	extern obj_t
		BGl_expandzd2Ozd2callzd2withzd2valueszd2envzd2zzexpand_multiplezd2valueszd2;
	extern obj_t BGl_expandzd2iza2zd2envza2zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2gzc3zd2envzc3zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2methodzd2envz00zzexpand_definez00;
	extern obj_t BGl_expandzd2izf2zd2envzf2zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2bindzd2exitzd2envzd2zzexpand_exitz00;
	BGL_IMPORT obj_t
		BGl_expandzd2compilezd2condzd2expandzd2envz00zz__expander_srfi0z00;
	extern obj_t BGl_expandzd2withzd2accesszd2envzd2zzexpand_objectz00;
	extern obj_t BGl_expandzd2unwindzd2protectzd2envzd2zzexpand_exitz00;
	extern obj_t BGl_expandzd2ize3zd2envze3zzexpand_iarithmetiquez00;
	extern obj_t BGl_expandzd2gmaxzd2envz00zzexpand_garithmetiquez00;
	extern obj_t BGl_expandzd2fatanzd2envz00zzexpand_farithmetiquez00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_installz00(long
		BgL_checksumz00_5630, char *BgL_fromz00_5631)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_installz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_installz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_installz00();
					BGl_cnstzd2initzd2zzexpand_installz00();
					BGl_importedzd2moduleszd2initz00zzexpand_installz00();
					BGl_toplevelzd2initzd2zzexpand_installz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_installz00()
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__pregexpz00(((long) 0),
				"expand_install");
			BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long) 0),
				"expand_install");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_installz00()
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 15 */
			{	/* Expand/initial.scm 15 */
				obj_t BgL_cportz00_5610;

				BgL_cportz00_5610 =
					bgl_open_input_string(BGl_string5654z00zzexpand_installz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_5611;

					BgL_iz00_5611 = ((long) 193);
				BgL_loopz00_5612:
					if ((BgL_iz00_5611 == ((long) -1)))
						{	/* Expand/initial.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/initial.scm 15 */
							{	/* Expand/initial.scm 15 */
								obj_t BgL_arg5656z00_5614;

								{	/* Expand/initial.scm 15 */

									{	/* Expand/initial.scm 15 */
										obj_t BgL_locationz00_5616;

										BgL_locationz00_5616 = BBOOL(((bool_t) 0));
										{	/* Expand/initial.scm 15 */

											BgL_arg5656z00_5614 =
												BGl_readz00zz__readerz00(BgL_cportz00_5610,
												BgL_locationz00_5616);
										}
									}
								}
								{	/* Expand/initial.scm 15 */
									int BgL_auxz00_5656;

									BgL_auxz00_5656 = (int) (BgL_iz00_5611);
									CNST_TABLE_SET(BgL_auxz00_5656, BgL_arg5656z00_5614);
							}}
							{	/* Expand/initial.scm 15 */
								int BgL_auxz00_5617;

								BgL_auxz00_5617 = (int) ((BgL_iz00_5611 - ((long) 1)));
								{
									long BgL_iz00_5661;

									BgL_iz00_5661 = (long) (BgL_auxz00_5617);
									BgL_iz00_5611 = BgL_iz00_5661;
									goto BgL_loopz00_5612;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_installz00()
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 15 */
			return (BGl_installedpz00zzexpand_installz00 = ((bool_t) 0), BUNSPEC);
		}
	}



/* install-initial-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2initialzd2expanderz00zzexpand_installz00()
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 54 */
			if (BGl_installedpz00zzexpand_installz00)
				{	/* Expand/initial.scm 55 */
					return BFALSE;
				}
			else
				{	/* Expand/initial.scm 55 */
					BGl_installedpz00zzexpand_installz00 = ((bool_t) 1);
					return BGl_installzd2expanderszd2zzexpand_installz00();
				}
		}
	}



/* _install-initial-expander */
	obj_t BGl__installzd2initialzd2expanderz00zzexpand_installz00(obj_t
		BgL_envz00_5134)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 54 */
			return BGl_installzd2initialzd2expanderz00zzexpand_installz00();
		}
	}



/* install-expanders */
	obj_t BGl_installzd2expanderszd2zzexpand_installz00()
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 62 */
			BGl_initializa7ezd2Oenvz12z67zzexpand_expanderz00();
			BGl_initializa7ezd2Genvz12z67zzexpand_expanderz00();
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						0)), BGl_expandzd2ifzd2envz00zzexpand_ifz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						1)), BGl_expandzd2orzd2envz00zzexpand_ifz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						2)), BGl_expandzd2andzd2envz00zzexpand_ifz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						3)), BGl_expandzd2notzd2envz00zzexpand_ifz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						4)), BGl_expandzd2lambdazd2envz00zzexpand_lambdaz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						5)), BGl_expandzd2definezd2envz00zzexpand_definez00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						6)), BGl_expandzd2inlinezd2envz00zzexpand_definez00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						7)), BGl_expandzd2genericzd2envz00zzexpand_definez00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						8)), BGl_expandzd2methodzd2envz00zzexpand_definez00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						9)), BGl_expandzd2structzd2envz00zzexpand_structz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						10)), BGl_expandzd2setz12zd2envz12zzexpand_definez00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						11)), BGl_expandzd2setzd2exitzd2envzd2zzexpand_exitz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						12)), BGl_expandzd2jumpzd2exitzd2envzd2zzexpand_exitz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						13)), BGl_expandzd2bindzd2exitzd2envzd2zzexpand_exitz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						14)), BGl_expandzd2unwindzd2protectzd2envzd2zzexpand_exitz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						15)), BGl_expandzd2withzd2handlerzd2envzd2zzexpand_exitz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						16)),
				BGl_expandzd2mvaluezd2bindzd2envzd2zzexpand_multiplezd2valueszd2);
			{	/* Expand/initial.scm 121 */
				obj_t BgL_arg3432z00_815;

				BgL_arg3432z00_815 = CNST_TABLE_REF(((long) 17));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3432z00_815, BGl_proc5553z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 140 */
				obj_t BgL_arg3496z00_908;

				BgL_arg3496z00_908 = CNST_TABLE_REF(((long) 18));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3496z00_908, BGl_proc5554z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 152 */
				obj_t BgL_arg3527z00_958;

				BgL_arg3527z00_958 = CNST_TABLE_REF(((long) 19));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3527z00_958, BGl_proc5555z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 165 */
				obj_t BgL_arg3558z00_1008;

				BgL_arg3558z00_1008 = CNST_TABLE_REF(((long) 20));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3558z00_1008, BGl_proc5556z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 178 */
				obj_t BgL_arg3588z00_1058;

				BgL_arg3588z00_1058 = CNST_TABLE_REF(((long) 21));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3588z00_1058, BGl_proc5557z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 190 */
				obj_t BgL_arg3619z00_1108;

				BgL_arg3619z00_1108 = CNST_TABLE_REF(((long) 22));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3619z00_1108, BGl_proc5558z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 202 */
				obj_t BgL_arg3633z00_1130;

				BgL_arg3633z00_1130 = CNST_TABLE_REF(((long) 23));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3633z00_1130, BGl_proc5559z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 24)), BGl_expandzd2mapzd2envz00zzexpand_mapz00);
			{	/* Expand/initial.scm 212 */
				obj_t BgL_arg3651z00_1159;

				BgL_arg3651z00_1159 = CNST_TABLE_REF(((long) 24));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3651z00_1159, BGl_proc5560z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 25)),
				BGl_expandzd2forzd2eachzd2envzd2zzexpand_mapz00);
			{	/* Expand/initial.scm 218 */
				obj_t BgL_arg3654z00_1165;

				BgL_arg3654z00_1165 = CNST_TABLE_REF(((long) 25));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3654z00_1165, BGl_proc5561z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 223 */
				obj_t BgL_arg3657z00_1171;

				BgL_arg3657z00_1171 = CNST_TABLE_REF(((long) 26));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3657z00_1171, BGl_proc5562z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 226 */
				obj_t BgL_arg3660z00_1177;

				BgL_arg3660z00_1177 = CNST_TABLE_REF(((long) 27));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3660z00_1177, BGl_proc5563z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 28)),
				BGl_expandzd2anyzf3zd2envzf3zzexpand_mapz00);
			{	/* Expand/initial.scm 232 */
				obj_t BgL_arg3663z00_1183;

				BgL_arg3663z00_1183 = CNST_TABLE_REF(((long) 28));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3663z00_1183, BGl_proc5564z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 29)),
				BGl_expandzd2everyzf3zd2envzf3zzexpand_mapz00);
			{	/* Expand/initial.scm 236 */
				obj_t BgL_arg3666z00_1189;

				BgL_arg3666z00_1189 = CNST_TABLE_REF(((long) 29));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3666z00_1189, BGl_proc5565z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 241 */
				obj_t BgL_arg3670z00_1195;

				BgL_arg3670z00_1195 = CNST_TABLE_REF(((long) 30));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3670z00_1195, BGl_proc5566z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 244 */
				obj_t BgL_arg3673z00_1201;

				BgL_arg3673z00_1201 = CNST_TABLE_REF(((long) 31));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3673z00_1201, BGl_proc5567z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 32)),
				BGl_expandzd2reducezd2envz00zzexpand_mapz00);
			{	/* Expand/initial.scm 253 */
				obj_t BgL_arg3677z00_1207;

				BgL_arg3677z00_1207 = CNST_TABLE_REF(((long) 33));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3677z00_1207, BGl_proc5568z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 284 */
				obj_t BgL_arg3726z00_1274;

				BgL_arg3726z00_1274 = CNST_TABLE_REF(((long) 34));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3726z00_1274, BGl_proc5569z00zzexpand_installz00);
			}
			if (CBOOL(BGl_za2genericityza2z00zzengine_paramz00))
				{	/* Expand/initial.scm 312 */
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 35)),
						BGl_expandzd2gzb2zd2envzb2zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 36)),
						BGl_expandzd2gza2zd2envza2zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 37)),
						BGl_expandzd2gzf2zd2envzf2zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 38)),
						BGl_expandzd2gzd2zd2envzd2zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 39)),
						BGl_expandzd2gzd3zd2envzd3zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 40)),
						BGl_expandzd2gzc3zd2envzc3zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 41)),
						BGl_expandzd2gze3zd2envze3zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 42)),
						BGl_expandzd2gzc3zd3zd2envz10zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 43)),
						BGl_expandzd2gze3zd3zd2envz30zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 44)),
						BGl_expandzd2gmaxzd2envz00zzexpand_garithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 45)),
						BGl_expandzd2gminzd2envz00zzexpand_garithmetiquez00);
				}
			else
				{	/* Expand/initial.scm 312 */
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 35)),
						BGl_expandzd2izb2zd2envzb2zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 36)),
						BGl_expandzd2iza2zd2envza2zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 37)),
						BGl_expandzd2izf2zd2envzf2zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 38)),
						BGl_expandzd2izd2zd2envzd2zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 39)),
						BGl_expandzd2izd3zd2envzd3zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 40)),
						BGl_expandzd2izc3zd2envzc3zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 41)),
						BGl_expandzd2ize3zd2envze3zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 42)),
						BGl_expandzd2izc3zd3zd2envz10zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 43)),
						BGl_expandzd2ize3zd3zd2envz30zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 44)),
						BGl_expandzd2maxfxzd2envz00zzexpand_iarithmetiquez00);
					BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
						(CNST_TABLE_REF(((long) 45)),
						BGl_expandzd2minfxzd2envz00zzexpand_iarithmetiquez00);
				}
			{	/* Expand/initial.scm 360 */
				obj_t BgL_arg3765z00_1329;

				BgL_arg3765z00_1329 = CNST_TABLE_REF(((long) 35));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3765z00_1329, BGl_proc5570z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 362 */
				obj_t BgL_arg3768z00_1335;

				BgL_arg3768z00_1335 = CNST_TABLE_REF(((long) 36));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3768z00_1335, BGl_proc5571z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 364 */
				obj_t BgL_arg3771z00_1341;

				BgL_arg3771z00_1341 = CNST_TABLE_REF(((long) 37));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3771z00_1341, BGl_proc5572z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 366 */
				obj_t BgL_arg3774z00_1347;

				BgL_arg3774z00_1347 = CNST_TABLE_REF(((long) 38));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3774z00_1347, BGl_proc5573z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 368 */
				obj_t BgL_arg3777z00_1353;

				BgL_arg3777z00_1353 = CNST_TABLE_REF(((long) 39));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3777z00_1353, BGl_proc5574z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 370 */
				obj_t BgL_arg3780z00_1359;

				BgL_arg3780z00_1359 = CNST_TABLE_REF(((long) 41));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3780z00_1359, BGl_proc5575z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 372 */
				obj_t BgL_arg3783z00_1365;

				BgL_arg3783z00_1365 = CNST_TABLE_REF(((long) 40));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3783z00_1365, BGl_proc5576z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 374 */
				obj_t BgL_arg3786z00_1371;

				BgL_arg3786z00_1371 = CNST_TABLE_REF(((long) 43));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3786z00_1371, BGl_proc5577z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 376 */
				obj_t BgL_arg3789z00_1377;

				BgL_arg3789z00_1377 = CNST_TABLE_REF(((long) 42));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3789z00_1377, BGl_proc5578z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 378 */
				obj_t BgL_arg3792z00_1383;

				BgL_arg3792z00_1383 = CNST_TABLE_REF(((long) 46));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3792z00_1383, BGl_proc5579z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 380 */
				obj_t BgL_arg3795z00_1389;

				BgL_arg3795z00_1389 = CNST_TABLE_REF(((long) 47));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3795z00_1389, BGl_proc5580z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 382 */
				obj_t BgL_arg3798z00_1395;

				BgL_arg3798z00_1395 = CNST_TABLE_REF(((long) 45));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3798z00_1395, BGl_proc5581z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 384 */
				obj_t BgL_arg3801z00_1401;

				BgL_arg3801z00_1401 = CNST_TABLE_REF(((long) 44));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3801z00_1401, BGl_proc5582z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 48)),
				BGl_expandzd2eqzf3zd2envzf3zzexpand_iarithmetiquez00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 49)),
				BGl_expandzd2zb2fxzd2envzb2zzexpand_iarithmetiquez00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 50)),
				BGl_expandzd2zd2fxzd2envzd2zzexpand_iarithmetiquez00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 51)),
				BGl_expandzd2maxfxzd2envz00zzexpand_iarithmetiquez00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 52)),
				BGl_expandzd2minfxzd2envz00zzexpand_iarithmetiquez00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 53)),
				BGl_expandzd2fmaxzd2envz00zzexpand_farithmetiquez00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 54)),
				BGl_expandzd2fminzd2envz00zzexpand_farithmetiquez00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 55)),
				BGl_expandzd2fatanzd2envz00zzexpand_farithmetiquez00);
			{	/* Expand/initial.scm 413 */
				obj_t BgL_arg3805z00_1407;

				BgL_arg3805z00_1407 = CNST_TABLE_REF(((long) 56));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3805z00_1407, BGl_proc5583z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 424 */
				obj_t BgL_arg3823z00_1433;

				BgL_arg3823z00_1433 = CNST_TABLE_REF(((long) 57));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3823z00_1433, BGl_proc5584z00zzexpand_installz00);
			}
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						58)), BGl_expandzd2letza2zd2envza2zzexpand_letz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						59)), BGl_expandzd2letzd2envz00zzexpand_letz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00
				(BGl_letzd2symzd2zzast_letz00(),
				BGl_expandzd2letzd2envz00zzexpand_letz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						60)), BGl_expandzd2letreczd2envz00zzexpand_letz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						61)), BGl_expandzd2letreczd2envz00zzexpand_letz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						62)), BGl_expandzd2labelszd2envz00zzexpand_letz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00
				(BGl_labelszd2symzd2zzast_labelsz00(),
				BGl_expandzd2labelszd2envz00zzexpand_letz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						63)), BGl_expandzd2casezd2envz00zzexpand_casez00);
			{	/* Expand/initial.scm 455 */
				obj_t BgL_arg3849z00_1469;

				BgL_arg3849z00_1469 = CNST_TABLE_REF(((long) 64));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3849z00_1469, BGl_proc5585z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 469 */
				obj_t BgL_arg3888z00_1522;

				BgL_arg3888z00_1522 = CNST_TABLE_REF(((long) 65));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3888z00_1522, BGl_proc5586z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 485 */
				obj_t BgL_arg3968z00_1629;

				BgL_arg3968z00_1629 = CNST_TABLE_REF(((long) 66));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg3968z00_1629, BGl_proc5587z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 507 */
				obj_t BgL_arg4006z00_1677;

				BgL_arg4006z00_1677 = CNST_TABLE_REF(((long) 67));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4006z00_1677, BGl_proc5588z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 68)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 69)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 70)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 71)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 72)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 73)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 74)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 75)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 76)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 77)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 78)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 79)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 80)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 81)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 82)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 83)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 84)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 85)), BGl_proc5589z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 86)), BGl_proc5590z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 87)), BGl_proc5589z00zzexpand_installz00);
			{	/* Expand/initial.scm 562 */
				obj_t BgL_arg4085z00_1808;

				BgL_arg4085z00_1808 = CNST_TABLE_REF(((long) 88));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4085z00_1808, BGl_proc5591z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 574 */
				obj_t BgL_arg4127z00_1877;

				BgL_arg4127z00_1877 = CNST_TABLE_REF(((long) 88));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4127z00_1877, BGl_proc5592z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 580 */
				obj_t BgL_arg4130z00_1883;

				BgL_arg4130z00_1883 = CNST_TABLE_REF(((long) 89));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4130z00_1883, BGl_proc5593z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 594 */
				obj_t BgL_arg4231z00_2025;

				BgL_arg4231z00_2025 = CNST_TABLE_REF(((long) 89));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4231z00_2025, BGl_proc5594z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 600 */
				obj_t BgL_arg4234z00_2031;

				BgL_arg4234z00_2031 = CNST_TABLE_REF(((long) 90));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4234z00_2031, BGl_proc5595z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 615 */
				obj_t BgL_arg4265z00_2082;

				BgL_arg4265z00_2082 = CNST_TABLE_REF(((long) 91));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4265z00_2082, BGl_proc5596z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 627 */
				obj_t BgL_arg4300z00_2135;

				BgL_arg4300z00_2135 = CNST_TABLE_REF(((long) 92));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4300z00_2135, BGl_proc5597z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 639 */
				obj_t BgL_arg4332z00_2188;

				BgL_arg4332z00_2188 = CNST_TABLE_REF(((long) 93));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4332z00_2188, BGl_proc5598z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 656 */
				obj_t BgL_arg4362z00_2239;

				BgL_arg4362z00_2239 = CNST_TABLE_REF(((long) 94));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4362z00_2239, BGl_proc5599z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 670 */
				obj_t BgL_arg4383z00_2272;

				BgL_arg4383z00_2272 = CNST_TABLE_REF(((long) 95));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4383z00_2272, BGl_proc5600z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 682 */
				obj_t BgL_arg4400z00_2300;

				BgL_arg4400z00_2300 = CNST_TABLE_REF(((long) 96));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4400z00_2300, BGl_proc5601z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 700 */
				obj_t BgL_arg4442z00_2369;

				BgL_arg4442z00_2369 = CNST_TABLE_REF(((long) 97));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4442z00_2369, BGl_proc5602z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 721 */
				obj_t BgL_arg4479z00_2421;

				BgL_arg4479z00_2421 = CNST_TABLE_REF(((long) 98));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4479z00_2421, BGl_proc5603z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 736 */
				obj_t BgL_arg4522z00_2481;

				BgL_arg4522z00_2481 = CNST_TABLE_REF(((long) 99));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4522z00_2481, BGl_proc5604z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 748 */
				obj_t BgL_arg4562z00_2542;

				BgL_arg4562z00_2542 = CNST_TABLE_REF(((long) 100));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4562z00_2542, BGl_proc5605z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 762 */
				obj_t BgL_arg4613z00_2613;

				BgL_arg4613z00_2613 = CNST_TABLE_REF(((long) 101));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4613z00_2613, BGl_proc5606z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 776 */
				obj_t BgL_arg4664z00_2684;

				BgL_arg4664z00_2684 = CNST_TABLE_REF(((long) 102));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4664z00_2684, BGl_proc5607z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 794 */
				obj_t BgL_arg4731z00_2767;

				BgL_arg4731z00_2767 = CNST_TABLE_REF(((long) 103));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4731z00_2767, BGl_proc5608z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 814 */
				obj_t BgL_arg4794z00_2855;

				BgL_arg4794z00_2855 = CNST_TABLE_REF(((long) 104));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4794z00_2855, BGl_proc5609z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 824 */
				obj_t BgL_arg4819z00_2894;

				BgL_arg4819z00_2894 = CNST_TABLE_REF(((long) 105));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4819z00_2894, BGl_proc5610z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 830 */
				obj_t BgL_arg4822z00_2900;

				BgL_arg4822z00_2900 = CNST_TABLE_REF(((long) 106));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4822z00_2900, BGl_proc5611z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 107)),
				BGl_expandzd2Ozd2valueszd2envzd2zzexpand_multiplezd2valueszd2);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 108)),
				BGl_expandzd2Ozd2callzd2withzd2valueszd2envzd2zzexpand_multiplezd2valueszd2);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						109)), BGl_expandzd2assertzd2envz00zzexpand_assertz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						110)), BGl_expandzd2definezd2classzd2envzd2zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						111)), BGl_expandzd2definezd2classzd2envzd2zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						112)), BGl_expandzd2definezd2classzd2envzd2zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						113)), BGl_expandzd2withzd2accesszd2envzd2zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						114)), BGl_expandzd2instantiatezd2envz00zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						115)), BGl_expandzd2cozd2instantiatezd2envzd2zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						116)), BGl_expandzd2duplicatezd2envz00zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						117)), BGl_expandzd2widenz12zd2envz12zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						118)), BGl_expandzd2shrinkz12zd2envz12zzexpand_objectz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00(CNST_TABLE_REF(((long)
						119)),
				BGl_expandzd2compilezd2condzd2expandzd2envz00zz__expander_srfi0z00);
			{	/* Expand/initial.scm 871 */
				obj_t BgL_arg4825z00_2906;

				BgL_arg4825z00_2906 = CNST_TABLE_REF(((long) 120));
				BGl_installzd2compilerzd2expanderz00zz__macroz00(BgL_arg4825z00_2906,
					BGl_proc5612z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 899 */
				obj_t BgL_arg4882z00_2978;

				BgL_arg4882z00_2978 = CNST_TABLE_REF(((long) 121));
				BGl_installzd2compilerzd2expanderz00zz__macroz00(BgL_arg4882z00_2978,
					BGl_proc5613z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 928 */
				obj_t BgL_arg4938z00_3050;

				BgL_arg4938z00_3050 = CNST_TABLE_REF(((long) 122));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4938z00_3050, BGl_proc5614z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 941 */
				obj_t BgL_arg4960z00_3087;

				BgL_arg4960z00_3087 = CNST_TABLE_REF(((long) 122));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4960z00_3087, BGl_proc5615z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 947 */
				obj_t BgL_arg4963z00_3093;

				BgL_arg4963z00_3093 = CNST_TABLE_REF(((long) 123));
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4963z00_3093, BGl_proc5616z00zzexpand_installz00);
			}
			{	/* Expand/initial.scm 959 */
				obj_t BgL_arg4982z00_3123;

				BgL_arg4982z00_3123 = CNST_TABLE_REF(((long) 123));
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
					(BgL_arg4982z00_3123, BGl_proc5617z00zzexpand_installz00);
			}
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 124)), BGl_proc5618z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 125)), BGl_proc5618z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 126)), BGl_proc5618z00zzexpand_installz00);
			BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 127)), BGl_proc5618z00zzexpand_installz00);
			return
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(CNST_TABLE_REF(((long) 128)), BGl_proc5618z00zzexpand_installz00);
		}
	}



/* pregexp-expander */
	obj_t BGl_pregexpzd2expanderzd2zzexpand_installz00(obj_t BgL_envz00_5201,
		obj_t BgL_xz00_5202, obj_t BgL_ez00_5203)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 964 */
			{
				obj_t BgL_xz00_3130;

				obj_t BgL_ez00_3131;

				BgL_xz00_3130 = BgL_xz00_5202;
				BgL_ez00_3131 = BgL_ez00_5203;
				{
					obj_t BgL_kz00_3133;

					obj_t BgL_regexpz00_3134;

					obj_t BgL_restz00_3135;

					obj_t BgL_kz00_3137;

					obj_t BgL_restz00_3138;

					if (PAIRP(BgL_xz00_3130))
						{	/* Expand/initial.scm 964 */
							obj_t BgL_cdrzd22857zd2_3143;

							BgL_cdrzd22857zd2_3143 = CDR(BgL_xz00_3130);
							if (PAIRP(BgL_cdrzd22857zd2_3143))
								{	/* Expand/initial.scm 964 */
									obj_t BgL_carzd22861zd2_3145;

									BgL_carzd22861zd2_3145 = CAR(BgL_cdrzd22857zd2_3143);
									if (STRINGP(BgL_carzd22861zd2_3145))
										{	/* Expand/initial.scm 964 */
											BgL_kz00_3133 = CAR(BgL_xz00_3130);
											BgL_regexpz00_3134 = BgL_carzd22861zd2_3145;
											BgL_restz00_3135 = CDR(BgL_cdrzd22857zd2_3143);
											{	/* Expand/initial.scm 971 */
												obj_t BgL_arg4999z00_3153;

												{	/* Expand/initial.scm 971 */
													obj_t BgL_arg5000z00_3154;

													obj_t BgL_arg5001z00_3155;

													{	/* Expand/initial.scm 971 */
														obj_t BgL_arg5003z00_3157;

														obj_t BgL_arg5004z00_3158;

														BgL_arg5003z00_3157 = CNST_TABLE_REF(((long) 129));
														{	/* Expand/initial.scm 971 */
															obj_t BgL_arg5005z00_3159;

															{	/* Expand/initial.scm 971 */
																obj_t BgL_arg5008z00_3162;

																obj_t BgL_arg5009z00_3163;

																BgL_arg5008z00_3162 =
																	CNST_TABLE_REF(((long) 130));
																{	/* Expand/initial.scm 971 */
																	obj_t BgL_arg5010z00_3164;

																	BgL_arg5010z00_3164 =
																		BGl_pregexpz00zz__pregexpz00
																		(BgL_regexpz00_3134);
																	{	/* Expand/initial.scm 971 */
																		obj_t BgL_list5012z00_3166;

																		BgL_list5012z00_3166 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg5009z00_3163 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg5010z00_3164,
																			BgL_list5012z00_3166);
																}}
																BgL_arg5005z00_3159 =
																	MAKE_PAIR(BgL_arg5008z00_3162,
																	BgL_arg5009z00_3163);
															}
															{	/* Expand/initial.scm 971 */
																obj_t BgL_list5007z00_3161;

																BgL_list5007z00_3161 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg5004z00_3158 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg5005z00_3159, BgL_list5007z00_3161);
														}}
														BgL_arg5000z00_3154 =
															MAKE_PAIR(BgL_arg5003z00_3157,
															BgL_arg5004z00_3158);
													}
													{	/* Expand/initial.scm 972 */
														obj_t BgL_arg5013z00_3167;

														if (NULLP(BgL_restz00_3135))
															{	/* Expand/initial.scm 972 */
																BgL_arg5013z00_3167 = BNIL;
															}
														else
															{	/* Expand/initial.scm 972 */
																obj_t BgL_head3374z00_3171;

																BgL_head3374z00_3171 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_l3372z00_3173;

																	obj_t BgL_tail3375z00_3174;

																	BgL_l3372z00_3173 = BgL_restz00_3135;
																	BgL_tail3375z00_3174 = BgL_head3374z00_3171;
																BgL_zc3anonymousza35016ze3z83_3175:
																	if (NULLP(BgL_l3372z00_3173))
																		{	/* Expand/initial.scm 972 */
																			BgL_arg5013z00_3167 =
																				CDR(BgL_head3374z00_3171);
																		}
																	else
																		{	/* Expand/initial.scm 972 */
																			obj_t BgL_newtail3376z00_3177;

																			{	/* Expand/initial.scm 972 */
																				obj_t BgL_arg5019z00_3179;

																				{	/* Expand/initial.scm 972 */
																					obj_t BgL_xz00_3181;

																					BgL_xz00_3181 =
																						CAR(BgL_l3372z00_3173);
																					BgL_arg5019z00_3179 =
																						PROCEDURE_ENTRY(BgL_ez00_3131)
																						(BgL_ez00_3131, BgL_xz00_3181,
																						BgL_ez00_3131, BEOA);
																				}
																				BgL_newtail3376z00_3177 =
																					MAKE_PAIR(BgL_arg5019z00_3179, BNIL);
																			}
																			SET_CDR(BgL_tail3375z00_3174,
																				BgL_newtail3376z00_3177);
																			{
																				obj_t BgL_tail3375z00_6022;

																				obj_t BgL_l3372z00_6020;

																				BgL_l3372z00_6020 =
																					CDR(BgL_l3372z00_3173);
																				BgL_tail3375z00_6022 =
																					BgL_newtail3376z00_3177;
																				BgL_tail3375z00_3174 =
																					BgL_tail3375z00_6022;
																				BgL_l3372z00_3173 = BgL_l3372z00_6020;
																				goto BgL_zc3anonymousza35016ze3z83_3175;
																			}
																		}
																}
															}
														BgL_arg5001z00_3155 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg5013z00_3167, BNIL);
													}
													{	/* Expand/initial.scm 971 */
														obj_t BgL_list5002z00_3156;

														BgL_list5002z00_3156 =
															MAKE_PAIR(BgL_arg5001z00_3155, BNIL);
														BgL_arg4999z00_3153 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg5000z00_3154, BgL_list5002z00_3156);
													}
												}
												return MAKE_PAIR(BgL_kz00_3133, BgL_arg4999z00_3153);
											}
										}
									else
										{	/* Expand/initial.scm 964 */
											BgL_kz00_3137 = CAR(BgL_xz00_3130);
											BgL_restz00_3138 = BgL_cdrzd22857zd2_3143;
										BgL_tagzd22847zd2_3139:
											{	/* Expand/initial.scm 974 */
												obj_t BgL_arg5021z00_3183;

												{	/* Expand/initial.scm 974 */
													obj_t BgL_arg5022z00_3184;

													if (NULLP(BgL_restz00_3138))
														{	/* Expand/initial.scm 974 */
															BgL_arg5022z00_3184 = BNIL;
														}
													else
														{	/* Expand/initial.scm 974 */
															obj_t BgL_head3379z00_3188;

															BgL_head3379z00_3188 = MAKE_PAIR(BNIL, BNIL);
															{
																obj_t BgL_l3377z00_3190;

																obj_t BgL_tail3380z00_3191;

																BgL_l3377z00_3190 = BgL_restz00_3138;
																BgL_tail3380z00_3191 = BgL_head3379z00_3188;
															BgL_zc3anonymousza35025ze3z83_3192:
																if (NULLP(BgL_l3377z00_3190))
																	{	/* Expand/initial.scm 974 */
																		BgL_arg5022z00_3184 =
																			CDR(BgL_head3379z00_3188);
																	}
																else
																	{	/* Expand/initial.scm 974 */
																		obj_t BgL_newtail3381z00_3194;

																		{	/* Expand/initial.scm 974 */
																			obj_t BgL_arg5028z00_3196;

																			{	/* Expand/initial.scm 974 */
																				obj_t BgL_xz00_3198;

																				BgL_xz00_3198 = CAR(BgL_l3377z00_3190);
																				BgL_arg5028z00_3196 =
																					PROCEDURE_ENTRY(BgL_ez00_3131)
																					(BgL_ez00_3131, BgL_xz00_3198,
																					BgL_ez00_3131, BEOA);
																			}
																			BgL_newtail3381z00_3194 =
																				MAKE_PAIR(BgL_arg5028z00_3196, BNIL);
																		}
																		SET_CDR(BgL_tail3380z00_3191,
																			BgL_newtail3381z00_3194);
																		{
																			obj_t BgL_tail3380z00_6042;

																			obj_t BgL_l3377z00_6040;

																			BgL_l3377z00_6040 =
																				CDR(BgL_l3377z00_3190);
																			BgL_tail3380z00_6042 =
																				BgL_newtail3381z00_3194;
																			BgL_tail3380z00_3191 =
																				BgL_tail3380z00_6042;
																			BgL_l3377z00_3190 = BgL_l3377z00_6040;
																			goto BgL_zc3anonymousza35025ze3z83_3192;
																		}
																	}
															}
														}
													BgL_arg5021z00_3183 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg5022z00_3184, BNIL);
												}
												return MAKE_PAIR(BgL_kz00_3137, BgL_arg5021z00_3183);
											}
										}
								}
							else
								{
									obj_t BgL_restz00_6048;

									obj_t BgL_kz00_6046;

									BgL_kz00_6046 = CAR(BgL_xz00_3130);
									BgL_restz00_6048 = BgL_cdrzd22857zd2_3143;
									BgL_restz00_3138 = BgL_restz00_6048;
									BgL_kz00_3137 = BgL_kz00_6046;
									goto BgL_tagzd22847zd2_3139;
								}
						}
					else
						{	/* Expand/initial.scm 964 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string5619z00zzexpand_installz00, BgL_xz00_3130);
						}
				}
			}
		}
	}



/* <anonymous:4984> */
	obj_t BGl_zc3anonymousza34984ze3z83zzexpand_installz00(obj_t BgL_envz00_5204,
		obj_t BgL_xz00_5205, obj_t BgL_ez00_5206)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 960 */
			{
				obj_t BgL_xz00_3125;

				obj_t BgL_ez00_3126;

				BgL_xz00_3125 = BgL_xz00_5205;
				BgL_ez00_3126 = BgL_ez00_5206;
				return
					BGl_boundzd2checkzd2zzexpand_installz00(BgL_xz00_3125,
					CNST_TABLE_REF(((long) 131)),
					CNST_TABLE_REF(((long) 132)), BgL_ez00_3126);
		}}
	}



/* <anonymous:4965> */
	obj_t BGl_zc3anonymousza34965ze3z83zzexpand_installz00(obj_t BgL_envz00_5207,
		obj_t BgL_xz00_5208, obj_t BgL_ez00_5209)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 948 */
			{
				obj_t BgL_xz00_3095;

				obj_t BgL_ez00_3096;

				BgL_xz00_3095 = BgL_xz00_5208;
				BgL_ez00_3096 = BgL_ez00_5209;
				{
					obj_t BgL_vecz00_3098;

					obj_t BgL_kz00_3099;

					if (PAIRP(BgL_xz00_3095))
						{	/* Expand/initial.scm 948 */
							obj_t BgL_cdrzd22836zd2_3104;

							BgL_cdrzd22836zd2_3104 = CDR(BgL_xz00_3095);
							if (PAIRP(BgL_cdrzd22836zd2_3104))
								{	/* Expand/initial.scm 948 */
									obj_t BgL_cdrzd22840zd2_3106;

									BgL_cdrzd22840zd2_3106 = CDR(BgL_cdrzd22836zd2_3104);
									if (PAIRP(BgL_cdrzd22840zd2_3106))
										{	/* Expand/initial.scm 948 */
											if (NULLP(CDR(BgL_cdrzd22840zd2_3106)))
												{	/* Expand/initial.scm 948 */
													BgL_vecz00_3098 = CAR(BgL_cdrzd22836zd2_3104);
													BgL_kz00_3099 = CAR(BgL_cdrzd22840zd2_3106);
													{	/* Expand/initial.scm 951 */
														obj_t BgL_evecz00_3112;

														obj_t BgL_ekz00_3113;

														BgL_evecz00_3112 =
															PROCEDURE_ENTRY(BgL_ez00_3096) (BgL_ez00_3096,
															BgL_vecz00_3098, BgL_ez00_3096, BEOA);
														BgL_ekz00_3113 =
															PROCEDURE_ENTRY(BgL_ez00_3096) (BgL_ez00_3096,
															BgL_kz00_3099, BgL_ez00_3096, BEOA);
														if (CBOOL
															(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
															{	/* Expand/initial.scm 954 */
																obj_t BgL_arg4973z00_3114;

																obj_t BgL_arg4974z00_3115;

																BgL_arg4973z00_3114 =
																	CNST_TABLE_REF(((long) 133));
																{	/* Expand/initial.scm 954 */
																	obj_t BgL_list4975z00_3116;

																	{	/* Expand/initial.scm 954 */
																		obj_t BgL_arg4977z00_3117;

																		BgL_arg4977z00_3117 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list4975z00_3116 =
																			MAKE_PAIR(BgL_ekz00_3113,
																			BgL_arg4977z00_3117);
																	}
																	BgL_arg4974z00_3115 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_evecz00_3112, BgL_list4975z00_3116);
																}
																return
																	MAKE_PAIR(BgL_arg4973z00_3114,
																	BgL_arg4974z00_3115);
															}
														else
															{	/* Expand/initial.scm 955 */
																obj_t BgL_arg4978z00_3118;

																obj_t BgL_arg4979z00_3119;

																BgL_arg4978z00_3118 =
																	CNST_TABLE_REF(((long) 123));
																{	/* Expand/initial.scm 955 */
																	obj_t BgL_list4980z00_3120;

																	{	/* Expand/initial.scm 955 */
																		obj_t BgL_arg4981z00_3121;

																		BgL_arg4981z00_3121 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list4980z00_3120 =
																			MAKE_PAIR(BgL_ekz00_3113,
																			BgL_arg4981z00_3121);
																	}
																	BgL_arg4979z00_3119 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_evecz00_3112, BgL_list4980z00_3120);
																}
																return
																	MAKE_PAIR(BgL_arg4978z00_3118,
																	BgL_arg4979z00_3119);
															}
													}
												}
											else
												{	/* Expand/initial.scm 948 */
												BgL_tagzd22829zd2_3101:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string5620z00zzexpand_installz00,
														BgL_xz00_3095);
												}
										}
									else
										{	/* Expand/initial.scm 948 */
											goto BgL_tagzd22829zd2_3101;
										}
								}
							else
								{	/* Expand/initial.scm 948 */
									goto BgL_tagzd22829zd2_3101;
								}
						}
					else
						{	/* Expand/initial.scm 948 */
							goto BgL_tagzd22829zd2_3101;
						}
				}
			}
		}
	}



/* <anonymous:4962> */
	obj_t BGl_zc3anonymousza34962ze3z83zzexpand_installz00(obj_t BgL_envz00_5210,
		obj_t BgL_xz00_5211, obj_t BgL_ez00_5212)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 942 */
			{
				obj_t BgL_xz00_3089;

				obj_t BgL_ez00_3090;

				BgL_xz00_3089 = BgL_xz00_5211;
				BgL_ez00_3090 = BgL_ez00_5212;
				return
					BGl_boundzd2checkzd2zzexpand_installz00(BgL_xz00_3089,
					CNST_TABLE_REF(((long) 131)),
					CNST_TABLE_REF(((long) 132)), BgL_ez00_3090);
		}}
	}



/* <anonymous:4940> */
	obj_t BGl_zc3anonymousza34940ze3z83zzexpand_installz00(obj_t BgL_envz00_5213,
		obj_t BgL_xz00_5214, obj_t BgL_ez00_5215)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 929 */
			{
				obj_t BgL_xz00_3052;

				obj_t BgL_ez00_3053;

				BgL_xz00_3052 = BgL_xz00_5214;
				BgL_ez00_3053 = BgL_ez00_5215;
				{
					obj_t BgL_vecz00_3055;

					obj_t BgL_kz00_3056;

					obj_t BgL_objz00_3057;

					if (PAIRP(BgL_xz00_3052))
						{	/* Expand/initial.scm 929 */
							obj_t BgL_cdrzd22812zd2_3062;

							BgL_cdrzd22812zd2_3062 = CDR(BgL_xz00_3052);
							if (PAIRP(BgL_cdrzd22812zd2_3062))
								{	/* Expand/initial.scm 929 */
									obj_t BgL_cdrzd22817zd2_3064;

									BgL_cdrzd22817zd2_3064 = CDR(BgL_cdrzd22812zd2_3062);
									if (PAIRP(BgL_cdrzd22817zd2_3064))
										{	/* Expand/initial.scm 929 */
											obj_t BgL_cdrzd22822zd2_3066;

											BgL_cdrzd22822zd2_3066 = CDR(BgL_cdrzd22817zd2_3064);
											if (PAIRP(BgL_cdrzd22822zd2_3066))
												{	/* Expand/initial.scm 929 */
													if (NULLP(CDR(BgL_cdrzd22822zd2_3066)))
														{	/* Expand/initial.scm 929 */
															BgL_vecz00_3055 = CAR(BgL_cdrzd22812zd2_3062);
															BgL_kz00_3056 = CAR(BgL_cdrzd22817zd2_3064);
															BgL_objz00_3057 = CAR(BgL_cdrzd22822zd2_3066);
															{	/* Expand/initial.scm 932 */
																obj_t BgL_evecz00_3073;

																obj_t BgL_ekz00_3074;

																obj_t BgL_eobjz00_3075;

																BgL_evecz00_3073 =
																	PROCEDURE_ENTRY(BgL_ez00_3053) (BgL_ez00_3053,
																	BgL_vecz00_3055, BgL_ez00_3053, BEOA);
																BgL_ekz00_3074 =
																	PROCEDURE_ENTRY(BgL_ez00_3053) (BgL_ez00_3053,
																	BgL_kz00_3056, BgL_ez00_3053, BEOA);
																BgL_eobjz00_3075 =
																	PROCEDURE_ENTRY(BgL_ez00_3053) (BgL_ez00_3053,
																	BgL_objz00_3057, BgL_ez00_3053, BEOA);
																if (CBOOL
																	(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
																	{	/* Expand/initial.scm 936 */
																		obj_t BgL_arg4950z00_3076;

																		obj_t BgL_arg4951z00_3077;

																		BgL_arg4950z00_3076 =
																			CNST_TABLE_REF(((long) 134));
																		{	/* Expand/initial.scm 936 */
																			obj_t BgL_list4952z00_3078;

																			{	/* Expand/initial.scm 936 */
																				obj_t BgL_arg4953z00_3079;

																				{	/* Expand/initial.scm 936 */
																					obj_t BgL_arg4954z00_3080;

																					BgL_arg4954z00_3080 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4953z00_3079 =
																						MAKE_PAIR(BgL_eobjz00_3075,
																						BgL_arg4954z00_3080);
																				}
																				BgL_list4952z00_3078 =
																					MAKE_PAIR(BgL_ekz00_3074,
																					BgL_arg4953z00_3079);
																			}
																			BgL_arg4951z00_3077 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_evecz00_3073,
																				BgL_list4952z00_3078);
																		}
																		return
																			MAKE_PAIR(BgL_arg4950z00_3076,
																			BgL_arg4951z00_3077);
																	}
																else
																	{	/* Expand/initial.scm 937 */
																		obj_t BgL_arg4955z00_3081;

																		obj_t BgL_arg4956z00_3082;

																		BgL_arg4955z00_3081 =
																			CNST_TABLE_REF(((long) 122));
																		{	/* Expand/initial.scm 937 */
																			obj_t BgL_list4957z00_3083;

																			{	/* Expand/initial.scm 937 */
																				obj_t BgL_arg4958z00_3084;

																				{	/* Expand/initial.scm 937 */
																					obj_t BgL_arg4959z00_3085;

																					BgL_arg4959z00_3085 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4958z00_3084 =
																						MAKE_PAIR(BgL_eobjz00_3075,
																						BgL_arg4959z00_3085);
																				}
																				BgL_list4957z00_3083 =
																					MAKE_PAIR(BgL_ekz00_3074,
																					BgL_arg4958z00_3084);
																			}
																			BgL_arg4956z00_3082 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_evecz00_3073,
																				BgL_list4957z00_3083);
																		}
																		return
																			MAKE_PAIR(BgL_arg4955z00_3081,
																			BgL_arg4956z00_3082);
																	}
															}
														}
													else
														{	/* Expand/initial.scm 929 */
														BgL_tagzd22803zd2_3059:
															return
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string5621z00zzexpand_installz00,
																BgL_xz00_3052);
														}
												}
											else
												{	/* Expand/initial.scm 929 */
													goto BgL_tagzd22803zd2_3059;
												}
										}
									else
										{	/* Expand/initial.scm 929 */
											goto BgL_tagzd22803zd2_3059;
										}
								}
							else
								{	/* Expand/initial.scm 929 */
									goto BgL_tagzd22803zd2_3059;
								}
						}
					else
						{	/* Expand/initial.scm 929 */
							goto BgL_tagzd22803zd2_3059;
						}
				}
			}
		}
	}



/* <anonymous:4884> */
	obj_t BGl_zc3anonymousza34884ze3z83zzexpand_installz00(obj_t BgL_envz00_5216,
		obj_t BgL_xz00_5217, obj_t BgL_ez00_5218)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 900 */
			{
				obj_t BgL_xz00_2980;

				obj_t BgL_ez00_2981;

				BgL_xz00_2980 = BgL_xz00_5217;
				BgL_ez00_2981 = BgL_ez00_5218;
				{
					obj_t BgL_lblz00_2983;

					obj_t BgL_exprsz00_2984;

					if (PAIRP(BgL_xz00_2980))
						{	/* Expand/initial.scm 900 */
							obj_t BgL_cdrzd22793zd2_2989;

							BgL_cdrzd22793zd2_2989 = CDR(BgL_xz00_2980);
							if (PAIRP(BgL_cdrzd22793zd2_2989))
								{	/* Expand/initial.scm 900 */
									obj_t BgL_carzd22796zd2_2991;

									BgL_carzd22796zd2_2991 = CAR(BgL_cdrzd22793zd2_2989);
									if (SYMBOLP(BgL_carzd22796zd2_2991))
										{	/* Expand/initial.scm 900 */
											BgL_lblz00_2983 = BgL_carzd22796zd2_2991;
											BgL_exprsz00_2984 = CDR(BgL_cdrzd22793zd2_2989);
											{	/* Expand/initial.scm 903 */
												bool_t BgL_testz00_6132;

												if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
													(BGl_za2profilezd2modeza2zd2zzengine_paramz00))
													{	/* Expand/initial.scm 903 */
														BgL_testz00_6132 =
															BGl_2zd3zd3zz__r4_numbers_6_5z00
															(BGl_za2profilezd2modeza2zd2zzengine_paramz00,
															BINT(((long) 0)));
													}
												else
													{	/* Expand/initial.scm 903 */
														BgL_testz00_6132 = ((bool_t) 1);
													}
												if (BgL_testz00_6132)
													{	/* Expand/initial.scm 904 */
														obj_t BgL_arg4890z00_2995;

														BgL_arg4890z00_2995 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_exprsz00_2984);
														return
															PROCEDURE_ENTRY(BgL_ez00_2981) (BgL_ez00_2981,
															BgL_arg4890z00_2995, BgL_ez00_2981, BEOA);
													}
												else
													{	/* Expand/initial.scm 905 */
														obj_t BgL_laz00_2996;

														{	/* Expand/initial.scm 905 */
															obj_t BgL_arg4932z00_3043;

															obj_t BgL_arg4933z00_3044;

															BgL_arg4932z00_3043 = CNST_TABLE_REF(((long) 4));
															{	/* Expand/initial.scm 905 */
																obj_t BgL_arg4935z00_3046;

																BgL_arg4935z00_3046 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_exprsz00_2984, BNIL);
																{	/* Expand/initial.scm 905 */
																	obj_t BgL_list4936z00_3047;

																	BgL_list4936z00_3047 =
																		MAKE_PAIR(BgL_arg4935z00_3046, BNIL);
																	BgL_arg4933z00_3044 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BNIL, BgL_list4936z00_3047);
															}}
															BgL_laz00_2996 =
																MAKE_PAIR(BgL_arg4932z00_3043,
																BgL_arg4933z00_3044);
														}
														{	/* Expand/initial.scm 905 */
															obj_t BgL_lamz00_2997;

															if (EXTENDED_PAIRP(BgL_xz00_2980))
																{	/* Expand/initial.scm 907 */
																	obj_t BgL_arg4929z00_3040;

																	obj_t BgL_arg4930z00_3041;

																	obj_t BgL_arg4931z00_3042;

																	BgL_arg4929z00_3040 = CAR(BgL_laz00_2996);
																	BgL_arg4930z00_3041 = CDR(BgL_laz00_2996);
																	BgL_arg4931z00_3042 = CER(BgL_xz00_2980);
																	{	/* Expand/initial.scm 907 */
																		obj_t BgL_res5413z00_4919;

																		BgL_res5413z00_4919 =
																			MAKE_EXTENDED_PAIR(BgL_arg4929z00_3040,
																			BgL_arg4930z00_3041, BgL_arg4931z00_3042);
																		BgL_lamz00_2997 = BgL_res5413z00_4919;
																	}
																}
															else
																{	/* Expand/initial.scm 906 */
																	BgL_lamz00_2997 = BgL_laz00_2996;
																}
															{	/* Expand/initial.scm 906 */
																obj_t BgL_valz00_2998;

																{	/* Expand/initial.scm 909 */
																	obj_t BgL_symz00_3038;

																	BgL_symz00_3038 =
																		BGl_gensymz00zz__r4_symbols_6_4z00
																		(CNST_TABLE_REF(((long) 135)));
																	BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																		(BgL_symz00_3038);
																	BgL_valz00_2998 = BgL_symz00_3038;
																}
																{	/* Expand/initial.scm 909 */
																	obj_t BgL_auxz00_2999;

																	{	/* Expand/initial.scm 912 */
																		obj_t BgL_arg4895z00_3005;

																		obj_t BgL_arg4896z00_3006;

																		BgL_arg4895z00_3005 =
																			BGl_letzd2symzd2zzast_letz00();
																		{	/* Expand/initial.scm 913 */
																			obj_t BgL_arg4897z00_3007;

																			obj_t BgL_arg4898z00_3008;

																			obj_t BgL_arg4899z00_3009;

																			{	/* Expand/initial.scm 913 */
																				obj_t BgL_arg4904z00_3014;

																				{	/* Expand/initial.scm 913 */
																					obj_t BgL_arg4906z00_3016;

																					{	/* Expand/initial.scm 913 */
																						obj_t BgL_list4907z00_3017;

																						BgL_list4907z00_3017 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4906z00_3016 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_lamz00_2997,
																							BgL_list4907z00_3017);
																					}
																					BgL_arg4904z00_3014 =
																						MAKE_PAIR(BgL_lblz00_2983,
																						BgL_arg4906z00_3016);
																				}
																				BgL_arg4897z00_3007 =
																					MAKE_PAIR(BgL_arg4904z00_3014, BNIL);
																			}
																			{	/* Expand/initial.scm 914 */
																				obj_t BgL_arg4908z00_3018;

																				obj_t BgL_arg4909z00_3019;

																				BgL_arg4908z00_3018 =
																					CNST_TABLE_REF(((long) 136));
																				{	/* Expand/initial.scm 914 */
																					obj_t BgL_arg4910z00_3020;

																					{	/* Expand/initial.scm 914 */
																						obj_t BgL_res5414z00_4922;

																						{	/* Expand/initial.scm 914 */
																							obj_t BgL_arg2063z00_4921;

																							BgL_arg2063z00_4921 =
																								SYMBOL_TO_STRING
																								(BgL_lblz00_2983);
																							BgL_res5414z00_4922 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg2063z00_4921);
																						}
																						BgL_arg4910z00_3020 =
																							BgL_res5414z00_4922;
																					}
																					{	/* Expand/initial.scm 914 */
																						obj_t BgL_list4912z00_3022;

																						{	/* Expand/initial.scm 914 */
																							obj_t BgL_arg4913z00_3023;

																							BgL_arg4913z00_3023 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list4912z00_3022 =
																								MAKE_PAIR(BgL_lblz00_2983,
																								BgL_arg4913z00_3023);
																						}
																						BgL_arg4909z00_3019 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4910z00_3020,
																							BgL_list4912z00_3022);
																				}}
																				BgL_arg4898z00_3008 =
																					MAKE_PAIR(BgL_arg4908z00_3018,
																					BgL_arg4909z00_3019);
																			}
																			{	/* Expand/initial.scm 916 */
																				obj_t BgL_arg4914z00_3024;

																				obj_t BgL_arg4915z00_3025;

																				BgL_arg4914z00_3024 =
																					CNST_TABLE_REF(((long) 59));
																				{	/* Expand/initial.scm 916 */
																					obj_t BgL_arg4916z00_3026;

																					obj_t BgL_arg4917z00_3027;

																					{	/* Expand/initial.scm 916 */
																						obj_t BgL_arg4922z00_3032;

																						{	/* Expand/initial.scm 916 */
																							obj_t BgL_arg4924z00_3034;

																							{	/* Expand/initial.scm 916 */
																								obj_t BgL_arg4925z00_3035;

																								BgL_arg4925z00_3035 =
																									MAKE_PAIR(BgL_lblz00_2983,
																									BNIL);
																								{	/* Expand/initial.scm 916 */
																									obj_t BgL_list4927z00_3037;

																									BgL_list4927z00_3037 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4924z00_3034 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4925z00_3035,
																										BgL_list4927z00_3037);
																							}}
																							BgL_arg4922z00_3032 =
																								MAKE_PAIR(BgL_valz00_2998,
																								BgL_arg4924z00_3034);
																						}
																						BgL_arg4916z00_3026 =
																							MAKE_PAIR(BgL_arg4922z00_3032,
																							BNIL);
																					}
																					BgL_arg4917z00_3027 =
																						MAKE_PAIR(CNST_TABLE_REF(((long)
																								137)), BNIL);
																					{	/* Expand/initial.scm 916 */
																						obj_t BgL_list4919z00_3029;

																						{	/* Expand/initial.scm 916 */
																							obj_t BgL_arg4920z00_3030;

																							{	/* Expand/initial.scm 916 */
																								obj_t BgL_arg4921z00_3031;

																								BgL_arg4921z00_3031 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4920z00_3030 =
																									MAKE_PAIR(BgL_valz00_2998,
																									BgL_arg4921z00_3031);
																							}
																							BgL_list4919z00_3029 =
																								MAKE_PAIR(BgL_arg4917z00_3027,
																								BgL_arg4920z00_3030);
																						}
																						BgL_arg4915z00_3025 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4916z00_3026,
																							BgL_list4919z00_3029);
																				}}
																				BgL_arg4899z00_3009 =
																					MAKE_PAIR(BgL_arg4914z00_3024,
																					BgL_arg4915z00_3025);
																			}
																			{	/* Expand/initial.scm 912 */
																				obj_t BgL_list4901z00_3011;

																				{	/* Expand/initial.scm 912 */
																					obj_t BgL_arg4902z00_3012;

																					{	/* Expand/initial.scm 912 */
																						obj_t BgL_arg4903z00_3013;

																						BgL_arg4903z00_3013 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4902z00_3012 =
																							MAKE_PAIR(BgL_arg4899z00_3009,
																							BgL_arg4903z00_3013);
																					}
																					BgL_list4901z00_3011 =
																						MAKE_PAIR(BgL_arg4898z00_3008,
																						BgL_arg4902z00_3012);
																				}
																				BgL_arg4896z00_3006 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4897z00_3007,
																					BgL_list4901z00_3011);
																		}}
																		BgL_auxz00_2999 =
																			MAKE_PAIR(BgL_arg4895z00_3005,
																			BgL_arg4896z00_3006);
																	}
																	{	/* Expand/initial.scm 912 */
																		obj_t BgL_resz00_3000;

																		if (EXTENDED_PAIRP(BgL_xz00_2980))
																			{	/* Expand/initial.scm 920 */
																				obj_t BgL_arg4892z00_3002;

																				obj_t BgL_arg4893z00_3003;

																				obj_t BgL_arg4894z00_3004;

																				BgL_arg4892z00_3002 =
																					CAR(BgL_auxz00_2999);
																				BgL_arg4893z00_3003 =
																					CDR(BgL_auxz00_2999);
																				BgL_arg4894z00_3004 =
																					CER(BgL_xz00_2980);
																				{	/* Expand/initial.scm 920 */
																					obj_t BgL_res5415z00_4930;

																					BgL_res5415z00_4930 =
																						MAKE_EXTENDED_PAIR
																						(BgL_arg4892z00_3002,
																						BgL_arg4893z00_3003,
																						BgL_arg4894z00_3004);
																					BgL_resz00_3000 = BgL_res5415z00_4930;
																				}
																			}
																		else
																			{	/* Expand/initial.scm 919 */
																				BgL_resz00_3000 = BgL_auxz00_2999;
																			}
																		{	/* Expand/initial.scm 919 */

																			return
																				PROCEDURE_ENTRY(BgL_ez00_2981)
																				(BgL_ez00_2981, BgL_auxz00_2999,
																				BgL_ez00_2981, BEOA);
																		}
																	}
																}
															}
														}
													}
											}
										}
									else
										{	/* Expand/initial.scm 900 */
										BgL_tagzd22786zd2_2986:
											return
												BGl_errorz00zz__errorz00
												(BGl_string5622z00zzexpand_installz00,
												BGl_string5623z00zzexpand_installz00, BgL_xz00_2980);
										}
								}
							else
								{	/* Expand/initial.scm 900 */
									goto BgL_tagzd22786zd2_2986;
								}
						}
					else
						{	/* Expand/initial.scm 900 */
							goto BgL_tagzd22786zd2_2986;
						}
				}
			}
		}
	}



/* <anonymous:4827> */
	obj_t BGl_zc3anonymousza34827ze3z83zzexpand_installz00(obj_t BgL_envz00_5219,
		obj_t BgL_xz00_5220, obj_t BgL_ez00_5221)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 872 */
			{
				obj_t BgL_xz00_2908;

				obj_t BgL_ez00_2909;

				BgL_xz00_2908 = BgL_xz00_5220;
				BgL_ez00_2909 = BgL_ez00_5221;
				{
					obj_t BgL_lblz00_2911;

					obj_t BgL_exprsz00_2912;

					if (PAIRP(BgL_xz00_2908))
						{	/* Expand/initial.scm 872 */
							obj_t BgL_cdrzd22776zd2_2917;

							BgL_cdrzd22776zd2_2917 = CDR(BgL_xz00_2908);
							if (PAIRP(BgL_cdrzd22776zd2_2917))
								{	/* Expand/initial.scm 872 */
									obj_t BgL_carzd22779zd2_2919;

									BgL_carzd22779zd2_2919 = CAR(BgL_cdrzd22776zd2_2917);
									if (SYMBOLP(BgL_carzd22779zd2_2919))
										{	/* Expand/initial.scm 872 */
											BgL_lblz00_2911 = BgL_carzd22779zd2_2919;
											BgL_exprsz00_2912 = CDR(BgL_cdrzd22776zd2_2917);
											{	/* Expand/initial.scm 875 */
												bool_t BgL_testz00_6202;

												if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
													(BGl_za2profilezd2modeza2zd2zzengine_paramz00))
													{	/* Expand/initial.scm 875 */
														BgL_testz00_6202 =
															BGl_2zd3zd3zz__r4_numbers_6_5z00
															(BGl_za2profilezd2modeza2zd2zzengine_paramz00,
															BINT(((long) 0)));
													}
												else
													{	/* Expand/initial.scm 875 */
														BgL_testz00_6202 = ((bool_t) 1);
													}
												if (BgL_testz00_6202)
													{	/* Expand/initial.scm 876 */
														obj_t BgL_arg4833z00_2923;

														BgL_arg4833z00_2923 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_exprsz00_2912);
														return
															PROCEDURE_ENTRY(BgL_ez00_2909) (BgL_ez00_2909,
															BgL_arg4833z00_2923, BgL_ez00_2909, BEOA);
													}
												else
													{	/* Expand/initial.scm 877 */
														obj_t BgL_laz00_2924;

														{	/* Expand/initial.scm 877 */
															obj_t BgL_arg4876z00_2971;

															obj_t BgL_arg4877z00_2972;

															BgL_arg4876z00_2971 = CNST_TABLE_REF(((long) 4));
															{	/* Expand/initial.scm 877 */
																obj_t BgL_arg4879z00_2974;

																BgL_arg4879z00_2974 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_exprsz00_2912, BNIL);
																{	/* Expand/initial.scm 877 */
																	obj_t BgL_list4880z00_2975;

																	BgL_list4880z00_2975 =
																		MAKE_PAIR(BgL_arg4879z00_2974, BNIL);
																	BgL_arg4877z00_2972 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BNIL, BgL_list4880z00_2975);
															}}
															BgL_laz00_2924 =
																MAKE_PAIR(BgL_arg4876z00_2971,
																BgL_arg4877z00_2972);
														}
														{	/* Expand/initial.scm 877 */
															obj_t BgL_lamz00_2925;

															if (EXTENDED_PAIRP(BgL_xz00_2908))
																{	/* Expand/initial.scm 879 */
																	obj_t BgL_arg4873z00_2968;

																	obj_t BgL_arg4874z00_2969;

																	obj_t BgL_arg4875z00_2970;

																	BgL_arg4873z00_2968 = CAR(BgL_laz00_2924);
																	BgL_arg4874z00_2969 = CDR(BgL_laz00_2924);
																	BgL_arg4875z00_2970 = CER(BgL_xz00_2908);
																	{	/* Expand/initial.scm 879 */
																		obj_t BgL_res5410z00_4894;

																		BgL_res5410z00_4894 =
																			MAKE_EXTENDED_PAIR(BgL_arg4873z00_2968,
																			BgL_arg4874z00_2969, BgL_arg4875z00_2970);
																		BgL_lamz00_2925 = BgL_res5410z00_4894;
																	}
																}
															else
																{	/* Expand/initial.scm 878 */
																	BgL_lamz00_2925 = BgL_laz00_2924;
																}
															{	/* Expand/initial.scm 878 */
																obj_t BgL_valz00_2926;

																{	/* Expand/initial.scm 881 */
																	obj_t BgL_symz00_2966;

																	BgL_symz00_2966 =
																		BGl_gensymz00zz__r4_symbols_6_4z00
																		(CNST_TABLE_REF(((long) 135)));
																	BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																		(BgL_symz00_2966);
																	BgL_valz00_2926 = BgL_symz00_2966;
																}
																{	/* Expand/initial.scm 881 */
																	obj_t BgL_auxz00_2927;

																	{	/* Expand/initial.scm 884 */
																		obj_t BgL_arg4838z00_2933;

																		obj_t BgL_arg4839z00_2934;

																		BgL_arg4838z00_2933 =
																			BGl_letzd2symzd2zzast_letz00();
																		{	/* Expand/initial.scm 885 */
																			obj_t BgL_arg4840z00_2935;

																			obj_t BgL_arg4841z00_2936;

																			obj_t BgL_arg4842z00_2937;

																			{	/* Expand/initial.scm 885 */
																				obj_t BgL_arg4848z00_2942;

																				{	/* Expand/initial.scm 885 */
																					obj_t BgL_arg4850z00_2944;

																					{	/* Expand/initial.scm 885 */
																						obj_t BgL_list4851z00_2945;

																						BgL_list4851z00_2945 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4850z00_2944 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_lamz00_2925,
																							BgL_list4851z00_2945);
																					}
																					BgL_arg4848z00_2942 =
																						MAKE_PAIR(BgL_lblz00_2911,
																						BgL_arg4850z00_2944);
																				}
																				BgL_arg4840z00_2935 =
																					MAKE_PAIR(BgL_arg4848z00_2942, BNIL);
																			}
																			{	/* Expand/initial.scm 886 */
																				obj_t BgL_arg4852z00_2946;

																				obj_t BgL_arg4853z00_2947;

																				BgL_arg4852z00_2946 =
																					CNST_TABLE_REF(((long) 138));
																				{	/* Expand/initial.scm 886 */
																					obj_t BgL_arg4854z00_2948;

																					{	/* Expand/initial.scm 886 */
																						obj_t BgL_res5411z00_4897;

																						{	/* Expand/initial.scm 886 */
																							obj_t BgL_arg2063z00_4896;

																							BgL_arg2063z00_4896 =
																								SYMBOL_TO_STRING
																								(BgL_lblz00_2911);
																							BgL_res5411z00_4897 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg2063z00_4896);
																						}
																						BgL_arg4854z00_2948 =
																							BgL_res5411z00_4897;
																					}
																					{	/* Expand/initial.scm 886 */
																						obj_t BgL_list4856z00_2950;

																						{	/* Expand/initial.scm 886 */
																							obj_t BgL_arg4857z00_2951;

																							BgL_arg4857z00_2951 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list4856z00_2950 =
																								MAKE_PAIR(BgL_lblz00_2911,
																								BgL_arg4857z00_2951);
																						}
																						BgL_arg4853z00_2947 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4854z00_2948,
																							BgL_list4856z00_2950);
																				}}
																				BgL_arg4841z00_2936 =
																					MAKE_PAIR(BgL_arg4852z00_2946,
																					BgL_arg4853z00_2947);
																			}
																			{	/* Expand/initial.scm 887 */
																				obj_t BgL_arg4858z00_2952;

																				obj_t BgL_arg4859z00_2953;

																				BgL_arg4858z00_2952 =
																					CNST_TABLE_REF(((long) 59));
																				{	/* Expand/initial.scm 887 */
																					obj_t BgL_arg4860z00_2954;

																					obj_t BgL_arg4861z00_2955;

																					{	/* Expand/initial.scm 887 */
																						obj_t BgL_arg4866z00_2960;

																						{	/* Expand/initial.scm 887 */
																							obj_t BgL_arg4868z00_2962;

																							{	/* Expand/initial.scm 887 */
																								obj_t BgL_arg4869z00_2963;

																								BgL_arg4869z00_2963 =
																									MAKE_PAIR(BgL_lblz00_2911,
																									BNIL);
																								{	/* Expand/initial.scm 887 */
																									obj_t BgL_list4871z00_2965;

																									BgL_list4871z00_2965 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4868z00_2962 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4869z00_2963,
																										BgL_list4871z00_2965);
																							}}
																							BgL_arg4866z00_2960 =
																								MAKE_PAIR(BgL_valz00_2926,
																								BgL_arg4868z00_2962);
																						}
																						BgL_arg4860z00_2954 =
																							MAKE_PAIR(BgL_arg4866z00_2960,
																							BNIL);
																					}
																					BgL_arg4861z00_2955 =
																						MAKE_PAIR(CNST_TABLE_REF(((long)
																								137)), BNIL);
																					{	/* Expand/initial.scm 887 */
																						obj_t BgL_list4863z00_2957;

																						{	/* Expand/initial.scm 887 */
																							obj_t BgL_arg4864z00_2958;

																							{	/* Expand/initial.scm 887 */
																								obj_t BgL_arg4865z00_2959;

																								BgL_arg4865z00_2959 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4864z00_2958 =
																									MAKE_PAIR(BgL_valz00_2926,
																									BgL_arg4865z00_2959);
																							}
																							BgL_list4863z00_2957 =
																								MAKE_PAIR(BgL_arg4861z00_2955,
																								BgL_arg4864z00_2958);
																						}
																						BgL_arg4859z00_2953 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4860z00_2954,
																							BgL_list4863z00_2957);
																				}}
																				BgL_arg4842z00_2937 =
																					MAKE_PAIR(BgL_arg4858z00_2952,
																					BgL_arg4859z00_2953);
																			}
																			{	/* Expand/initial.scm 884 */
																				obj_t BgL_list4845z00_2939;

																				{	/* Expand/initial.scm 884 */
																					obj_t BgL_arg4846z00_2940;

																					{	/* Expand/initial.scm 884 */
																						obj_t BgL_arg4847z00_2941;

																						BgL_arg4847z00_2941 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4846z00_2940 =
																							MAKE_PAIR(BgL_arg4842z00_2937,
																							BgL_arg4847z00_2941);
																					}
																					BgL_list4845z00_2939 =
																						MAKE_PAIR(BgL_arg4841z00_2936,
																						BgL_arg4846z00_2940);
																				}
																				BgL_arg4839z00_2934 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4840z00_2935,
																					BgL_list4845z00_2939);
																		}}
																		BgL_auxz00_2927 =
																			MAKE_PAIR(BgL_arg4838z00_2933,
																			BgL_arg4839z00_2934);
																	}
																	{	/* Expand/initial.scm 884 */
																		obj_t BgL_resz00_2928;

																		if (EXTENDED_PAIRP(BgL_xz00_2908))
																			{	/* Expand/initial.scm 891 */
																				obj_t BgL_arg4835z00_2930;

																				obj_t BgL_arg4836z00_2931;

																				obj_t BgL_arg4837z00_2932;

																				BgL_arg4835z00_2930 =
																					CAR(BgL_auxz00_2927);
																				BgL_arg4836z00_2931 =
																					CDR(BgL_auxz00_2927);
																				BgL_arg4837z00_2932 =
																					CER(BgL_xz00_2908);
																				{	/* Expand/initial.scm 891 */
																					obj_t BgL_res5412z00_4905;

																					BgL_res5412z00_4905 =
																						MAKE_EXTENDED_PAIR
																						(BgL_arg4835z00_2930,
																						BgL_arg4836z00_2931,
																						BgL_arg4837z00_2932);
																					BgL_resz00_2928 = BgL_res5412z00_4905;
																				}
																			}
																		else
																			{	/* Expand/initial.scm 890 */
																				BgL_resz00_2928 = BgL_auxz00_2927;
																			}
																		{	/* Expand/initial.scm 890 */

																			return
																				PROCEDURE_ENTRY(BgL_ez00_2909)
																				(BgL_ez00_2909, BgL_auxz00_2927,
																				BgL_ez00_2909, BEOA);
																		}
																	}
																}
															}
														}
													}
											}
										}
									else
										{	/* Expand/initial.scm 872 */
										BgL_tagzd22769zd2_2914:
											return
												BGl_errorz00zz__errorz00
												(BGl_string5622z00zzexpand_installz00,
												BGl_string5623z00zzexpand_installz00, BgL_xz00_2908);
										}
								}
							else
								{	/* Expand/initial.scm 872 */
									goto BgL_tagzd22769zd2_2914;
								}
						}
					else
						{	/* Expand/initial.scm 872 */
							goto BgL_tagzd22769zd2_2914;
						}
				}
			}
		}
	}



/* <anonymous:4824> */
	obj_t BGl_zc3anonymousza34824ze3z83zzexpand_installz00(obj_t BgL_envz00_5222,
		obj_t BgL_xz00_5223, obj_t BgL_ez00_5224)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 831 */
			{
				obj_t BgL_xz00_2902;

				obj_t BgL_ez00_2903;

				BgL_xz00_2902 = BgL_xz00_5223;
				BgL_ez00_2903 = BgL_ez00_5224;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_2902,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_2903);
		}}
	}



/* <anonymous:4821> */
	obj_t BGl_zc3anonymousza34821ze3z83zzexpand_installz00(obj_t BgL_envz00_5225,
		obj_t BgL_xz00_5226, obj_t BgL_ez00_5227)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 825 */
			{
				obj_t BgL_xz00_2896;

				obj_t BgL_ez00_2897;

				BgL_xz00_2896 = BgL_xz00_5226;
				BgL_ez00_2897 = BgL_ez00_5227;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_2896,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_2897);
		}}
	}



/* <anonymous:4796> */
	obj_t BGl_zc3anonymousza34796ze3z83zzexpand_installz00(obj_t BgL_envz00_5228,
		obj_t BgL_xz00_5229, obj_t BgL_ez00_5230)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 815 */
			{
				obj_t BgL_xz00_2857;

				obj_t BgL_ez00_2858;

				BgL_xz00_2857 = BgL_xz00_5229;
				BgL_ez00_2858 = BgL_ez00_5230;
				{
					obj_t BgL_exprz00_2860;

					if (PAIRP(BgL_xz00_2857))
						{	/* Expand/initial.scm 815 */
							obj_t BgL_cdrzd22761zd2_2865;

							BgL_cdrzd22761zd2_2865 = CDR(BgL_xz00_2857);
							if (PAIRP(BgL_cdrzd22761zd2_2865))
								{	/* Expand/initial.scm 815 */
									obj_t BgL_cdrzd22764zd2_2867;

									BgL_cdrzd22764zd2_2867 = CDR(BgL_cdrzd22761zd2_2865);
									if (PAIRP(BgL_cdrzd22764zd2_2867))
										{	/* Expand/initial.scm 815 */
											if (
												(CAR(BgL_cdrzd22764zd2_2867) ==
													CNST_TABLE_REF(((long) 141))))
												{	/* Expand/initial.scm 815 */
													if (NULLP(CDR(BgL_cdrzd22764zd2_2867)))
														{	/* Expand/initial.scm 815 */
															BgL_exprz00_2860 = CAR(BgL_cdrzd22761zd2_2865);
															{	/* Expand/initial.scm 818 */
																obj_t BgL_arg4807z00_2875;

																{	/* Expand/initial.scm 818 */
																	obj_t BgL_arg4808z00_2876;

																	obj_t BgL_arg4810z00_2877;

																	BgL_arg4808z00_2876 =
																		CNST_TABLE_REF(((long) 140));
																	{	/* Expand/initial.scm 818 */
																		obj_t BgL_list4811z00_2878;

																		BgL_list4811z00_2878 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4810z00_2877 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_exprz00_2860, BgL_list4811z00_2878);
																	}
																	BgL_arg4807z00_2875 =
																		MAKE_PAIR(BgL_arg4808z00_2876,
																		BgL_arg4810z00_2877);
																}
																return
																	PROCEDURE_ENTRY(BgL_ez00_2858) (BgL_ez00_2858,
																	BgL_arg4807z00_2875, BgL_ez00_2858, BEOA);
															}
														}
													else
														{	/* Expand/initial.scm 815 */
														BgL_tagzd22756zd2_2862:
															if (NULLP(BgL_xz00_2857))
																{	/* Expand/initial.scm 820 */
																	return BNIL;
																}
															else
																{	/* Expand/initial.scm 820 */
																	obj_t BgL_head3369z00_2881;

																	BgL_head3369z00_2881 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3367z00_2883;

																		obj_t BgL_tail3370z00_2884;

																		BgL_l3367z00_2883 = BgL_xz00_2857;
																		BgL_tail3370z00_2884 = BgL_head3369z00_2881;
																	BgL_zc3anonymousza34813ze3z83_2885:
																		if (NULLP(BgL_l3367z00_2883))
																			{	/* Expand/initial.scm 820 */
																				return CDR(BgL_head3369z00_2881);
																			}
																		else
																			{	/* Expand/initial.scm 820 */
																				obj_t BgL_newtail3371z00_2887;

																				{	/* Expand/initial.scm 820 */
																					obj_t BgL_arg4816z00_2889;

																					{	/* Expand/initial.scm 820 */
																						obj_t BgL_xz00_2891;

																						BgL_xz00_2891 =
																							CAR(BgL_l3367z00_2883);
																						BgL_arg4816z00_2889 =
																							PROCEDURE_ENTRY(BgL_ez00_2858)
																							(BgL_ez00_2858, BgL_xz00_2891,
																							BgL_ez00_2858, BEOA);
																					}
																					BgL_newtail3371z00_2887 =
																						MAKE_PAIR(BgL_arg4816z00_2889,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3370z00_2884,
																					BgL_newtail3371z00_2887);
																				{
																					obj_t BgL_tail3370z00_6303;

																					obj_t BgL_l3367z00_6301;

																					BgL_l3367z00_6301 =
																						CDR(BgL_l3367z00_2883);
																					BgL_tail3370z00_6303 =
																						BgL_newtail3371z00_2887;
																					BgL_tail3370z00_2884 =
																						BgL_tail3370z00_6303;
																					BgL_l3367z00_2883 = BgL_l3367z00_6301;
																					goto
																						BgL_zc3anonymousza34813ze3z83_2885;
																				}
																			}
																	}
																}
														}
												}
											else
												{	/* Expand/initial.scm 815 */
													goto BgL_tagzd22756zd2_2862;
												}
										}
									else
										{	/* Expand/initial.scm 815 */
											goto BgL_tagzd22756zd2_2862;
										}
								}
							else
								{	/* Expand/initial.scm 815 */
									goto BgL_tagzd22756zd2_2862;
								}
						}
					else
						{	/* Expand/initial.scm 815 */
							goto BgL_tagzd22756zd2_2862;
						}
				}
			}
		}
	}



/* <anonymous:4733> */
	obj_t BGl_zc3anonymousza34733ze3z83zzexpand_installz00(obj_t BgL_envz00_5231,
		obj_t BgL_xz00_5232, obj_t BgL_ez00_5233)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 795 */
			{
				obj_t BgL_xz00_2769;

				obj_t BgL_ez00_2770;

				BgL_xz00_2769 = BgL_xz00_5232;
				BgL_ez00_2770 = BgL_ez00_5233;
				{
					obj_t BgL_portz00_2772;

					obj_t BgL_portz00_2774;

					obj_t BgL_objz00_2775;

					if (PAIRP(BgL_xz00_2769))
						{	/* Expand/initial.scm 795 */
							obj_t BgL_cdrzd22727zd2_2780;

							BgL_cdrzd22727zd2_2780 = CDR(BgL_xz00_2769);
							if (PAIRP(BgL_cdrzd22727zd2_2780))
								{	/* Expand/initial.scm 795 */
									if (NULLP(CDR(BgL_cdrzd22727zd2_2780)))
										{	/* Expand/initial.scm 795 */
											BgL_portz00_2772 = CAR(BgL_cdrzd22727zd2_2780);
											{	/* Expand/initial.scm 798 */
												obj_t BgL_arg4742z00_2788;

												{	/* Expand/initial.scm 798 */
													obj_t BgL_arg4743z00_2789;

													obj_t BgL_arg4744z00_2790;

													{	/* Expand/initial.scm 798 */
														obj_t BgL_arg4745z00_2791;

														obj_t BgL_arg4746z00_2792;

														BgL_arg4745z00_2791 = CNST_TABLE_REF(((long) 143));
														{	/* Expand/initial.scm 798 */
															obj_t BgL_list4747z00_2793;

															{	/* Expand/initial.scm 798 */
																obj_t BgL_arg4748z00_2794;

																obj_t BgL_arg4749z00_2795;

																BgL_arg4748z00_2794 =
																	CNST_TABLE_REF(((long) 144));
																BgL_arg4749z00_2795 = MAKE_PAIR(BNIL, BNIL);
																BgL_list4747z00_2793 =
																	MAKE_PAIR(BgL_arg4748z00_2794,
																	BgL_arg4749z00_2795);
															}
															BgL_arg4746z00_2792 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(CNST_TABLE_REF(((long) 145)),
																BgL_list4747z00_2793);
														}
														BgL_arg4743z00_2789 =
															MAKE_PAIR(BgL_arg4745z00_2791,
															BgL_arg4746z00_2792);
													}
													{	/* Expand/initial.scm 798 */
														obj_t BgL_list4750z00_2796;

														BgL_list4750z00_2796 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4744z00_2790 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_portz00_2772, BgL_list4750z00_2796);
													}
													BgL_arg4742z00_2788 =
														MAKE_PAIR(BgL_arg4743z00_2789, BgL_arg4744z00_2790);
												}
												return
													PROCEDURE_ENTRY(BgL_ez00_2770) (BgL_ez00_2770,
													BgL_arg4742z00_2788, BgL_ez00_2770, BEOA);
											}
										}
									else
										{	/* Expand/initial.scm 795 */
											BgL_portz00_2774 = CAR(BgL_cdrzd22727zd2_2780);
											BgL_objz00_2775 = CDR(BgL_cdrzd22727zd2_2780);
											{	/* Expand/initial.scm 801 */
												obj_t BgL_auxz00_2797;

												BgL_auxz00_2797 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 142))));
												{	/* Expand/initial.scm 802 */
													obj_t BgL_arg4751z00_2798;

													{	/* Expand/initial.scm 802 */
														obj_t BgL_arg4752z00_2799;

														obj_t BgL_arg4753z00_2800;

														BgL_arg4752z00_2799 =
															BGl_letzd2symzd2zzast_letz00();
														{	/* Expand/initial.scm 803 */
															obj_t BgL_arg4754z00_2801;

															obj_t BgL_arg4755z00_2802;

															{	/* Expand/initial.scm 803 */
																obj_t BgL_arg4757z00_2804;

																{	/* Expand/initial.scm 803 */
																	obj_t BgL_arg4760z00_2806;

																	{	/* Expand/initial.scm 803 */
																		obj_t BgL_list4761z00_2807;

																		BgL_list4761z00_2807 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4760z00_2806 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_portz00_2774, BgL_list4761z00_2807);
																	}
																	BgL_arg4757z00_2804 =
																		MAKE_PAIR(BgL_auxz00_2797,
																		BgL_arg4760z00_2806);
																}
																BgL_arg4754z00_2801 =
																	MAKE_PAIR(BgL_arg4757z00_2804, BNIL);
															}
															{	/* Expand/initial.scm 804 */
																obj_t BgL_arg4762z00_2808;

																obj_t BgL_arg4763z00_2809;

																if (NULLP(BgL_objz00_2775))
																	{	/* Expand/initial.scm 804 */
																		BgL_arg4762z00_2808 = BNIL;
																	}
																else
																	{	/* Expand/initial.scm 804 */
																		obj_t BgL_head3359z00_2812;

																		BgL_head3359z00_2812 =
																			MAKE_PAIR(BNIL, BNIL);
																		{
																			obj_t BgL_l3357z00_2814;

																			obj_t BgL_tail3360z00_2815;

																			BgL_l3357z00_2814 = BgL_objz00_2775;
																			BgL_tail3360z00_2815 =
																				BgL_head3359z00_2812;
																		BgL_zc3anonymousza34765ze3z83_2816:
																			if (NULLP(BgL_l3357z00_2814))
																				{	/* Expand/initial.scm 804 */
																					BgL_arg4762z00_2808 =
																						CDR(BgL_head3359z00_2812);
																				}
																			else
																				{	/* Expand/initial.scm 804 */
																					obj_t BgL_newtail3361z00_2818;

																					{	/* Expand/initial.scm 804 */
																						obj_t BgL_arg4768z00_2820;

																						{	/* Expand/initial.scm 804 */
																							obj_t BgL_yz00_2822;

																							BgL_yz00_2822 =
																								CAR(BgL_l3357z00_2814);
																							{	/* Expand/initial.scm 805 */
																								obj_t BgL_arg4770z00_2823;

																								{	/* Expand/initial.scm 805 */
																									obj_t BgL_arg4771z00_2824;

																									obj_t BgL_arg4772z00_2825;

																									BgL_arg4771z00_2824 =
																										BGl_dispz00zzexpand_installz00
																										(BgL_yz00_2822);
																									{	/* Expand/initial.scm 805 */
																										obj_t BgL_list4773z00_2826;

																										{	/* Expand/initial.scm 805 */
																											obj_t BgL_arg4774z00_2827;

																											BgL_arg4774z00_2827 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list4773z00_2826 =
																												MAKE_PAIR
																												(BgL_auxz00_2797,
																												BgL_arg4774z00_2827);
																										}
																										BgL_arg4772z00_2825 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_yz00_2822,
																											BgL_list4773z00_2826);
																									}
																									BgL_arg4770z00_2823 =
																										MAKE_PAIR
																										(BgL_arg4771z00_2824,
																										BgL_arg4772z00_2825);
																								}
																								BgL_arg4768z00_2820 =
																									BGl_epairifyz00zztools_miscz00
																									(BgL_arg4770z00_2823,
																									BgL_xz00_2769);
																							}
																						}
																						BgL_newtail3361z00_2818 =
																							MAKE_PAIR(BgL_arg4768z00_2820,
																							BNIL);
																					}
																					SET_CDR(BgL_tail3360z00_2815,
																						BgL_newtail3361z00_2818);
																					{
																						obj_t BgL_tail3360z00_6350;

																						obj_t BgL_l3357z00_6348;

																						BgL_l3357z00_6348 =
																							CDR(BgL_l3357z00_2814);
																						BgL_tail3360z00_6350 =
																							BgL_newtail3361z00_2818;
																						BgL_tail3360z00_2815 =
																							BgL_tail3360z00_6350;
																						BgL_l3357z00_2814 =
																							BgL_l3357z00_6348;
																						goto
																							BgL_zc3anonymousza34765ze3z83_2816;
																					}
																				}
																		}
																	}
																{	/* Expand/initial.scm 807 */
																	obj_t BgL_arg4775z00_2829;

																	{	/* Expand/initial.scm 807 */
																		obj_t BgL_arg4777z00_2831;

																		obj_t BgL_arg4778z00_2832;

																		{	/* Expand/initial.scm 807 */
																			obj_t BgL_arg4780z00_2833;

																			obj_t BgL_arg4782z00_2834;

																			BgL_arg4780z00_2833 =
																				CNST_TABLE_REF(((long) 143));
																			{	/* Expand/initial.scm 807 */
																				obj_t BgL_list4783z00_2835;

																				{	/* Expand/initial.scm 807 */
																					obj_t BgL_arg4784z00_2836;

																					obj_t BgL_arg4785z00_2837;

																					BgL_arg4784z00_2836 =
																						CNST_TABLE_REF(((long) 144));
																					BgL_arg4785z00_2837 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4783z00_2835 =
																						MAKE_PAIR(BgL_arg4784z00_2836,
																						BgL_arg4785z00_2837);
																				}
																				BgL_arg4782z00_2834 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 145)),
																					BgL_list4783z00_2835);
																			}
																			BgL_arg4777z00_2831 =
																				MAKE_PAIR(BgL_arg4780z00_2833,
																				BgL_arg4782z00_2834);
																		}
																		{	/* Expand/initial.scm 807 */
																			obj_t BgL_list4786z00_2838;

																			BgL_list4786z00_2838 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg4778z00_2832 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_auxz00_2797, BgL_list4786z00_2838);
																		}
																		BgL_arg4775z00_2829 =
																			MAKE_PAIR(BgL_arg4777z00_2831,
																			BgL_arg4778z00_2832);
																	}
																	BgL_arg4763z00_2809 =
																		MAKE_PAIR(BgL_arg4775z00_2829, BNIL);
																}
																BgL_arg4755z00_2802 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4762z00_2808, BgL_arg4763z00_2809);
															}
															{	/* Expand/initial.scm 802 */
																obj_t BgL_list4756z00_2803;

																BgL_list4756z00_2803 =
																	MAKE_PAIR(BgL_arg4755z00_2802, BNIL);
																BgL_arg4753z00_2800 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4754z00_2801, BgL_list4756z00_2803);
														}}
														BgL_arg4751z00_2798 =
															MAKE_PAIR(BgL_arg4752z00_2799,
															BgL_arg4753z00_2800);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_2770) (BgL_ez00_2770,
														BgL_arg4751z00_2798, BgL_ez00_2770, BEOA);
												}
											}
										}
								}
							else
								{	/* Expand/initial.scm 795 */
								BgL_tagzd22721zd2_2777:
									if (NULLP(BgL_xz00_2769))
										{	/* Expand/initial.scm 810 */
											return BNIL;
										}
									else
										{	/* Expand/initial.scm 810 */
											obj_t BgL_head3364z00_2842;

											BgL_head3364z00_2842 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l3362z00_2844;

												obj_t BgL_tail3365z00_2845;

												BgL_l3362z00_2844 = BgL_xz00_2769;
												BgL_tail3365z00_2845 = BgL_head3364z00_2842;
											BgL_zc3anonymousza34789ze3z83_2846:
												if (NULLP(BgL_l3362z00_2844))
													{	/* Expand/initial.scm 810 */
														return CDR(BgL_head3364z00_2842);
													}
												else
													{	/* Expand/initial.scm 810 */
														obj_t BgL_newtail3366z00_2848;

														{	/* Expand/initial.scm 810 */
															obj_t BgL_arg4792z00_2850;

															{	/* Expand/initial.scm 810 */
																obj_t BgL_xz00_2852;

																BgL_xz00_2852 = CAR(BgL_l3362z00_2844);
																BgL_arg4792z00_2850 =
																	PROCEDURE_ENTRY(BgL_ez00_2770) (BgL_ez00_2770,
																	BgL_xz00_2852, BgL_ez00_2770, BEOA);
															}
															BgL_newtail3366z00_2848 =
																MAKE_PAIR(BgL_arg4792z00_2850, BNIL);
														}
														SET_CDR(BgL_tail3365z00_2845,
															BgL_newtail3366z00_2848);
														{
															obj_t BgL_tail3365z00_6383;

															obj_t BgL_l3362z00_6381;

															BgL_l3362z00_6381 = CDR(BgL_l3362z00_2844);
															BgL_tail3365z00_6383 = BgL_newtail3366z00_2848;
															BgL_tail3365z00_2845 = BgL_tail3365z00_6383;
															BgL_l3362z00_2844 = BgL_l3362z00_6381;
															goto BgL_zc3anonymousza34789ze3z83_2846;
														}
													}
											}
										}
								}
						}
					else
						{	/* Expand/initial.scm 795 */
							goto BgL_tagzd22721zd2_2777;
						}
				}
			}
		}
	}



/* <anonymous:4666> */
	obj_t BGl_zc3anonymousza34666ze3z83zzexpand_installz00(obj_t BgL_envz00_5234,
		obj_t BgL_xz00_5235, obj_t BgL_ez00_5236)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 777 */
			{
				obj_t BgL_xz00_2686;

				obj_t BgL_ez00_2687;

				BgL_xz00_2686 = BgL_xz00_5235;
				BgL_ez00_2687 = BgL_ez00_5236;
				{
					obj_t BgL_objz00_2690;

					if (PAIRP(BgL_xz00_2686))
						{	/* Expand/initial.scm 777 */
							if (NULLP(CDR(BgL_xz00_2686)))
								{	/* Expand/initial.scm 777 */
									{	/* Expand/initial.scm 780 */
										obj_t BgL_arg4671z00_2697;

										obj_t BgL_arg4672z00_2698;

										{	/* Expand/initial.scm 780 */
											obj_t BgL_arg4673z00_2699;

											obj_t BgL_arg4674z00_2700;

											BgL_arg4673z00_2699 = CNST_TABLE_REF(((long) 143));
											{	/* Expand/initial.scm 780 */
												obj_t BgL_list4675z00_2701;

												{	/* Expand/initial.scm 780 */
													obj_t BgL_arg4676z00_2702;

													obj_t BgL_arg4677z00_2703;

													BgL_arg4676z00_2702 = CNST_TABLE_REF(((long) 144));
													BgL_arg4677z00_2703 = MAKE_PAIR(BNIL, BNIL);
													BgL_list4675z00_2701 =
														MAKE_PAIR(BgL_arg4676z00_2702, BgL_arg4677z00_2703);
												}
												BgL_arg4674z00_2700 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 145)), BgL_list4675z00_2701);
											}
											BgL_arg4671z00_2697 =
												MAKE_PAIR(BgL_arg4673z00_2699, BgL_arg4674z00_2700);
										}
										{	/* Expand/initial.scm 781 */
											obj_t BgL_arg4678z00_2704;

											{	/* Expand/initial.scm 781 */
												obj_t BgL_arg4681z00_2707;

												{	/* Expand/initial.scm 781 */
													obj_t BgL_arg4683z00_2709;

													obj_t BgL_arg4684z00_2710;

													BgL_arg4683z00_2709 = CNST_TABLE_REF(((long) 143));
													{	/* Expand/initial.scm 781 */
														obj_t BgL_list4685z00_2711;

														{	/* Expand/initial.scm 781 */
															obj_t BgL_arg4686z00_2712;

															obj_t BgL_arg4687z00_2713;

															BgL_arg4686z00_2712 =
																CNST_TABLE_REF(((long) 146));
															BgL_arg4687z00_2713 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4685z00_2711 =
																MAKE_PAIR(BgL_arg4686z00_2712,
																BgL_arg4687z00_2713);
														}
														BgL_arg4684z00_2710 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 147)),
															BgL_list4685z00_2711);
													}
													BgL_arg4681z00_2707 =
														MAKE_PAIR(BgL_arg4683z00_2709, BgL_arg4684z00_2710);
												}
												BgL_arg4678z00_2704 =
													MAKE_PAIR(BgL_arg4681z00_2707, BNIL);
											}
											{	/* Expand/initial.scm 780 */
												obj_t BgL_list4680z00_2706;

												BgL_list4680z00_2706 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg4672z00_2698 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4678z00_2704, BgL_list4680z00_2706);
										}}
										return MAKE_PAIR(BgL_arg4671z00_2697, BgL_arg4672z00_2698);
									}
								}
							else
								{	/* Expand/initial.scm 777 */
									BgL_objz00_2690 = CDR(BgL_xz00_2686);
									{	/* Expand/initial.scm 783 */
										obj_t BgL_pz00_2714;

										BgL_pz00_2714 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
														142))));
										{	/* Expand/initial.scm 784 */
											obj_t BgL_arg4688z00_2715;

											{	/* Expand/initial.scm 784 */
												obj_t BgL_arg4689z00_2716;

												obj_t BgL_arg4690z00_2717;

												BgL_arg4689z00_2716 = BGl_letzd2symzd2zzast_letz00();
												{	/* Expand/initial.scm 785 */
													obj_t BgL_arg4691z00_2718;

													obj_t BgL_arg4692z00_2719;

													{	/* Expand/initial.scm 785 */
														obj_t BgL_arg4694z00_2721;

														{	/* Expand/initial.scm 785 */
															obj_t BgL_arg4696z00_2723;

															{	/* Expand/initial.scm 785 */
																obj_t BgL_arg4697z00_2724;

																{	/* Expand/initial.scm 785 */
																	obj_t BgL_arg4700z00_2727;

																	{	/* Expand/initial.scm 785 */
																		obj_t BgL_arg4702z00_2729;

																		obj_t BgL_arg4703z00_2730;

																		BgL_arg4702z00_2729 =
																			CNST_TABLE_REF(((long) 143));
																		{	/* Expand/initial.scm 785 */
																			obj_t BgL_list4704z00_2731;

																			{	/* Expand/initial.scm 785 */
																				obj_t BgL_arg4705z00_2732;

																				obj_t BgL_arg4706z00_2733;

																				BgL_arg4705z00_2732 =
																					CNST_TABLE_REF(((long) 146));
																				BgL_arg4706z00_2733 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list4704z00_2731 =
																					MAKE_PAIR(BgL_arg4705z00_2732,
																					BgL_arg4706z00_2733);
																			}
																			BgL_arg4703z00_2730 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(CNST_TABLE_REF(((long) 147)),
																				BgL_list4704z00_2731);
																		}
																		BgL_arg4700z00_2727 =
																			MAKE_PAIR(BgL_arg4702z00_2729,
																			BgL_arg4703z00_2730);
																	}
																	BgL_arg4697z00_2724 =
																		MAKE_PAIR(BgL_arg4700z00_2727, BNIL);
																}
																{	/* Expand/initial.scm 785 */
																	obj_t BgL_list4699z00_2726;

																	BgL_list4699z00_2726 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4696z00_2723 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg4697z00_2724, BgL_list4699z00_2726);
															}}
															BgL_arg4694z00_2721 =
																MAKE_PAIR(BgL_pz00_2714, BgL_arg4696z00_2723);
														}
														BgL_arg4691z00_2718 =
															MAKE_PAIR(BgL_arg4694z00_2721, BNIL);
													}
													{	/* Expand/initial.scm 786 */
														obj_t BgL_arg4707z00_2734;

														obj_t BgL_arg4708z00_2735;

														if (NULLP(BgL_objz00_2690))
															{	/* Expand/initial.scm 786 */
																BgL_arg4707z00_2734 = BNIL;
															}
														else
															{	/* Expand/initial.scm 786 */
																obj_t BgL_head3354z00_2738;

																BgL_head3354z00_2738 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_l3352z00_2740;

																	obj_t BgL_tail3355z00_2741;

																	BgL_l3352z00_2740 = BgL_objz00_2690;
																	BgL_tail3355z00_2741 = BgL_head3354z00_2738;
																BgL_zc3anonymousza34710ze3z83_2742:
																	if (NULLP(BgL_l3352z00_2740))
																		{	/* Expand/initial.scm 786 */
																			BgL_arg4707z00_2734 =
																				CDR(BgL_head3354z00_2738);
																		}
																	else
																		{	/* Expand/initial.scm 786 */
																			obj_t BgL_newtail3356z00_2744;

																			{	/* Expand/initial.scm 786 */
																				obj_t BgL_arg4713z00_2746;

																				{	/* Expand/initial.scm 786 */
																					obj_t BgL_yz00_2748;

																					BgL_yz00_2748 =
																						CAR(BgL_l3352z00_2740);
																					{	/* Expand/initial.scm 787 */
																						obj_t BgL_arg4715z00_2749;

																						{	/* Expand/initial.scm 787 */
																							obj_t BgL_arg4716z00_2750;

																							obj_t BgL_arg4717z00_2751;

																							BgL_arg4716z00_2750 =
																								BGl_dispz00zzexpand_installz00
																								(BgL_yz00_2748);
																							{	/* Expand/initial.scm 787 */
																								obj_t BgL_list4718z00_2752;

																								{	/* Expand/initial.scm 787 */
																									obj_t BgL_arg4719z00_2753;

																									BgL_arg4719z00_2753 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list4718z00_2752 =
																										MAKE_PAIR(BgL_pz00_2714,
																										BgL_arg4719z00_2753);
																								}
																								BgL_arg4717z00_2751 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_yz00_2748,
																									BgL_list4718z00_2752);
																							}
																							BgL_arg4715z00_2749 =
																								MAKE_PAIR(BgL_arg4716z00_2750,
																								BgL_arg4717z00_2751);
																						}
																						BgL_arg4713z00_2746 =
																							BGl_epairifyz00zztools_miscz00
																							(BgL_arg4715z00_2749,
																							BgL_xz00_2686);
																					}
																				}
																				BgL_newtail3356z00_2744 =
																					MAKE_PAIR(BgL_arg4713z00_2746, BNIL);
																			}
																			SET_CDR(BgL_tail3355z00_2741,
																				BgL_newtail3356z00_2744);
																			{
																				obj_t BgL_tail3355z00_6440;

																				obj_t BgL_l3352z00_6438;

																				BgL_l3352z00_6438 =
																					CDR(BgL_l3352z00_2740);
																				BgL_tail3355z00_6440 =
																					BgL_newtail3356z00_2744;
																				BgL_tail3355z00_2741 =
																					BgL_tail3355z00_6440;
																				BgL_l3352z00_2740 = BgL_l3352z00_6438;
																				goto BgL_zc3anonymousza34710ze3z83_2742;
																			}
																		}
																}
															}
														{	/* Expand/initial.scm 789 */
															obj_t BgL_arg4720z00_2755;

															{	/* Expand/initial.scm 789 */
																obj_t BgL_arg4722z00_2757;

																obj_t BgL_arg4723z00_2758;

																{	/* Expand/initial.scm 789 */
																	obj_t BgL_arg4724z00_2759;

																	obj_t BgL_arg4725z00_2760;

																	BgL_arg4724z00_2759 =
																		CNST_TABLE_REF(((long) 143));
																	{	/* Expand/initial.scm 789 */
																		obj_t BgL_list4726z00_2761;

																		{	/* Expand/initial.scm 789 */
																			obj_t BgL_arg4727z00_2762;

																			obj_t BgL_arg4728z00_2763;

																			BgL_arg4727z00_2762 =
																				CNST_TABLE_REF(((long) 144));
																			BgL_arg4728z00_2763 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4726z00_2761 =
																				MAKE_PAIR(BgL_arg4727z00_2762,
																				BgL_arg4728z00_2763);
																		}
																		BgL_arg4725z00_2760 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(CNST_TABLE_REF(((long) 145)),
																			BgL_list4726z00_2761);
																	}
																	BgL_arg4722z00_2757 =
																		MAKE_PAIR(BgL_arg4724z00_2759,
																		BgL_arg4725z00_2760);
																}
																{	/* Expand/initial.scm 789 */
																	obj_t BgL_list4729z00_2764;

																	BgL_list4729z00_2764 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4723z00_2758 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_pz00_2714, BgL_list4729z00_2764);
																}
																BgL_arg4720z00_2755 =
																	MAKE_PAIR(BgL_arg4722z00_2757,
																	BgL_arg4723z00_2758);
															}
															BgL_arg4708z00_2735 =
																MAKE_PAIR(BgL_arg4720z00_2755, BNIL);
														}
														BgL_arg4692z00_2719 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4707z00_2734, BgL_arg4708z00_2735);
													}
													{	/* Expand/initial.scm 784 */
														obj_t BgL_list4693z00_2720;

														BgL_list4693z00_2720 =
															MAKE_PAIR(BgL_arg4692z00_2719, BNIL);
														BgL_arg4690z00_2717 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4691z00_2718, BgL_list4693z00_2720);
												}}
												BgL_arg4688z00_2715 =
													MAKE_PAIR(BgL_arg4689z00_2716, BgL_arg4690z00_2717);
											}
											return
												PROCEDURE_ENTRY(BgL_ez00_2687) (BgL_ez00_2687,
												BgL_arg4688z00_2715, BgL_ez00_2687, BEOA);
										}
									}
								}
						}
					else
						{	/* Expand/initial.scm 777 */
							return BFALSE;
						}
				}
			}
		}
	}



/* <anonymous:4615> */
	obj_t BGl_zc3anonymousza34615ze3z83zzexpand_installz00(obj_t BgL_envz00_5237,
		obj_t BgL_xz00_5238, obj_t BgL_ez00_5239)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 763 */
			{
				obj_t BgL_xz00_2615;

				obj_t BgL_ez00_2616;

				BgL_xz00_2615 = BgL_xz00_5238;
				BgL_ez00_2616 = BgL_ez00_5239;
				{
					obj_t BgL_objz00_2618;

					obj_t BgL_objz00_2620;

					obj_t BgL_portz00_2621;

					if (PAIRP(BgL_xz00_2615))
						{	/* Expand/initial.scm 763 */
							obj_t BgL_cdrzd22675zd2_2626;

							BgL_cdrzd22675zd2_2626 = CDR(BgL_xz00_2615);
							if (PAIRP(BgL_cdrzd22675zd2_2626))
								{	/* Expand/initial.scm 763 */
									if (NULLP(CDR(BgL_cdrzd22675zd2_2626)))
										{	/* Expand/initial.scm 763 */
											BgL_objz00_2618 = CAR(BgL_cdrzd22675zd2_2626);
											{	/* Expand/initial.scm 766 */
												obj_t BgL_arg4626z00_2638;

												obj_t BgL_arg4627z00_2639;

												{	/* Expand/initial.scm 766 */
													obj_t BgL_arg4628z00_2640;

													obj_t BgL_arg4629z00_2641;

													BgL_arg4628z00_2640 = CNST_TABLE_REF(((long) 143));
													{	/* Expand/initial.scm 766 */
														obj_t BgL_list4630z00_2642;

														{	/* Expand/initial.scm 766 */
															obj_t BgL_arg4631z00_2643;

															obj_t BgL_arg4632z00_2644;

															BgL_arg4631z00_2643 =
																CNST_TABLE_REF(((long) 144));
															BgL_arg4632z00_2644 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4630z00_2642 =
																MAKE_PAIR(BgL_arg4631z00_2643,
																BgL_arg4632z00_2644);
														}
														BgL_arg4629z00_2641 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 148)),
															BgL_list4630z00_2642);
													}
													BgL_arg4626z00_2638 =
														MAKE_PAIR(BgL_arg4628z00_2640, BgL_arg4629z00_2641);
												}
												{	/* Expand/initial.scm 767 */
													obj_t BgL_arg4633z00_2645;

													obj_t BgL_arg4634z00_2646;

													BgL_arg4633z00_2645 =
														PROCEDURE_ENTRY(BgL_ez00_2616) (BgL_ez00_2616,
														BgL_objz00_2618, BgL_ez00_2616, BEOA);
													{	/* Expand/initial.scm 768 */
														obj_t BgL_arg4638z00_2650;

														{	/* Expand/initial.scm 768 */
															obj_t BgL_arg4640z00_2652;

															obj_t BgL_arg4641z00_2653;

															BgL_arg4640z00_2652 =
																CNST_TABLE_REF(((long) 143));
															{	/* Expand/initial.scm 768 */
																obj_t BgL_list4642z00_2654;

																{	/* Expand/initial.scm 768 */
																	obj_t BgL_arg4643z00_2655;

																	obj_t BgL_arg4644z00_2656;

																	BgL_arg4643z00_2655 =
																		CNST_TABLE_REF(((long) 146));
																	BgL_arg4644z00_2656 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4642z00_2654 =
																		MAKE_PAIR(BgL_arg4643z00_2655,
																		BgL_arg4644z00_2656);
																}
																BgL_arg4641z00_2653 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 147)),
																	BgL_list4642z00_2654);
															}
															BgL_arg4638z00_2650 =
																MAKE_PAIR(BgL_arg4640z00_2652,
																BgL_arg4641z00_2653);
														}
														BgL_arg4634z00_2646 =
															MAKE_PAIR(BgL_arg4638z00_2650, BNIL);
													}
													{	/* Expand/initial.scm 766 */
														obj_t BgL_list4636z00_2648;

														{	/* Expand/initial.scm 766 */
															obj_t BgL_arg4637z00_2649;

															BgL_arg4637z00_2649 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4636z00_2648 =
																MAKE_PAIR(BgL_arg4634z00_2646,
																BgL_arg4637z00_2649);
														}
														BgL_arg4627z00_2639 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4633z00_2645, BgL_list4636z00_2648);
												}}
												return
													MAKE_PAIR(BgL_arg4626z00_2638, BgL_arg4627z00_2639);
											}
										}
									else
										{	/* Expand/initial.scm 763 */
											obj_t BgL_cdrzd22691zd2_2631;

											BgL_cdrzd22691zd2_2631 = CDR(BgL_cdrzd22675zd2_2626);
											if (PAIRP(BgL_cdrzd22691zd2_2631))
												{	/* Expand/initial.scm 763 */
													if (NULLP(CDR(BgL_cdrzd22691zd2_2631)))
														{	/* Expand/initial.scm 763 */
															BgL_objz00_2620 = CAR(BgL_cdrzd22675zd2_2626);
															BgL_portz00_2621 = CAR(BgL_cdrzd22691zd2_2631);
															{	/* Expand/initial.scm 770 */
																obj_t BgL_arg4645z00_2657;

																obj_t BgL_arg4646z00_2658;

																{	/* Expand/initial.scm 770 */
																	obj_t BgL_arg4648z00_2659;

																	obj_t BgL_arg4649z00_2660;

																	BgL_arg4648z00_2659 =
																		CNST_TABLE_REF(((long) 143));
																	{	/* Expand/initial.scm 770 */
																		obj_t BgL_list4650z00_2661;

																		{	/* Expand/initial.scm 770 */
																			obj_t BgL_arg4651z00_2662;

																			obj_t BgL_arg4652z00_2663;

																			BgL_arg4651z00_2662 =
																				CNST_TABLE_REF(((long) 144));
																			BgL_arg4652z00_2663 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4650z00_2661 =
																				MAKE_PAIR(BgL_arg4651z00_2662,
																				BgL_arg4652z00_2663);
																		}
																		BgL_arg4649z00_2660 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(CNST_TABLE_REF(((long) 148)),
																			BgL_list4650z00_2661);
																	}
																	BgL_arg4645z00_2657 =
																		MAKE_PAIR(BgL_arg4648z00_2659,
																		BgL_arg4649z00_2660);
																}
																{	/* Expand/initial.scm 770 */
																	obj_t BgL_arg4653z00_2664;

																	obj_t BgL_arg4654z00_2665;

																	BgL_arg4653z00_2664 =
																		PROCEDURE_ENTRY(BgL_ez00_2616)
																		(BgL_ez00_2616, BgL_objz00_2620,
																		BgL_ez00_2616, BEOA);
																	BgL_arg4654z00_2665 =
																		PROCEDURE_ENTRY(BgL_ez00_2616)
																		(BgL_ez00_2616, BgL_portz00_2621,
																		BgL_ez00_2616, BEOA);
																	{	/* Expand/initial.scm 770 */
																		obj_t BgL_list4656z00_2667;

																		{	/* Expand/initial.scm 770 */
																			obj_t BgL_arg4657z00_2668;

																			BgL_arg4657z00_2668 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4656z00_2667 =
																				MAKE_PAIR(BgL_arg4654z00_2665,
																				BgL_arg4657z00_2668);
																		}
																		BgL_arg4646z00_2658 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4653z00_2664,
																			BgL_list4656z00_2667);
																}}
																return
																	MAKE_PAIR(BgL_arg4645z00_2657,
																	BgL_arg4646z00_2658);
															}
														}
													else
														{	/* Expand/initial.scm 763 */
														BgL_tagzd22669zd2_2623:
															if (NULLP(BgL_xz00_2615))
																{	/* Expand/initial.scm 772 */
																	return BNIL;
																}
															else
																{	/* Expand/initial.scm 772 */
																	obj_t BgL_head3349z00_2671;

																	BgL_head3349z00_2671 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3347z00_2673;

																		obj_t BgL_tail3350z00_2674;

																		BgL_l3347z00_2673 = BgL_xz00_2615;
																		BgL_tail3350z00_2674 = BgL_head3349z00_2671;
																	BgL_zc3anonymousza34659ze3z83_2675:
																		if (NULLP(BgL_l3347z00_2673))
																			{	/* Expand/initial.scm 772 */
																				return CDR(BgL_head3349z00_2671);
																			}
																		else
																			{	/* Expand/initial.scm 772 */
																				obj_t BgL_newtail3351z00_2677;

																				{	/* Expand/initial.scm 772 */
																					obj_t BgL_arg4662z00_2679;

																					{	/* Expand/initial.scm 772 */
																						obj_t BgL_xz00_2681;

																						BgL_xz00_2681 =
																							CAR(BgL_l3347z00_2673);
																						BgL_arg4662z00_2679 =
																							PROCEDURE_ENTRY(BgL_ez00_2616)
																							(BgL_ez00_2616, BgL_xz00_2681,
																							BgL_ez00_2616, BEOA);
																					}
																					BgL_newtail3351z00_2677 =
																						MAKE_PAIR(BgL_arg4662z00_2679,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3350z00_2674,
																					BgL_newtail3351z00_2677);
																				{
																					obj_t BgL_tail3350z00_6525;

																					obj_t BgL_l3347z00_6523;

																					BgL_l3347z00_6523 =
																						CDR(BgL_l3347z00_2673);
																					BgL_tail3350z00_6525 =
																						BgL_newtail3351z00_2677;
																					BgL_tail3350z00_2674 =
																						BgL_tail3350z00_6525;
																					BgL_l3347z00_2673 = BgL_l3347z00_6523;
																					goto
																						BgL_zc3anonymousza34659ze3z83_2675;
																				}
																			}
																	}
																}
														}
												}
											else
												{	/* Expand/initial.scm 763 */
													goto BgL_tagzd22669zd2_2623;
												}
										}
								}
							else
								{	/* Expand/initial.scm 763 */
									goto BgL_tagzd22669zd2_2623;
								}
						}
					else
						{	/* Expand/initial.scm 763 */
							goto BgL_tagzd22669zd2_2623;
						}
				}
			}
		}
	}



/* <anonymous:4564> */
	obj_t BGl_zc3anonymousza34564ze3z83zzexpand_installz00(obj_t BgL_envz00_5240,
		obj_t BgL_xz00_5241, obj_t BgL_ez00_5242)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 749 */
			{
				obj_t BgL_xz00_2544;

				obj_t BgL_ez00_2545;

				BgL_xz00_2544 = BgL_xz00_5241;
				BgL_ez00_2545 = BgL_ez00_5242;
				{
					obj_t BgL_objz00_2547;

					obj_t BgL_objz00_2549;

					obj_t BgL_portz00_2550;

					if (PAIRP(BgL_xz00_2544))
						{	/* Expand/initial.scm 749 */
							obj_t BgL_cdrzd22636zd2_2555;

							BgL_cdrzd22636zd2_2555 = CDR(BgL_xz00_2544);
							if (PAIRP(BgL_cdrzd22636zd2_2555))
								{	/* Expand/initial.scm 749 */
									if (NULLP(CDR(BgL_cdrzd22636zd2_2555)))
										{	/* Expand/initial.scm 749 */
											BgL_objz00_2547 = CAR(BgL_cdrzd22636zd2_2555);
											{	/* Expand/initial.scm 752 */
												obj_t BgL_arg4576z00_2567;

												obj_t BgL_arg4577z00_2568;

												{	/* Expand/initial.scm 752 */
													obj_t BgL_arg4578z00_2569;

													obj_t BgL_arg4579z00_2570;

													BgL_arg4578z00_2569 = CNST_TABLE_REF(((long) 143));
													{	/* Expand/initial.scm 752 */
														obj_t BgL_list4580z00_2571;

														{	/* Expand/initial.scm 752 */
															obj_t BgL_arg4581z00_2572;

															obj_t BgL_arg4582z00_2573;

															BgL_arg4581z00_2572 =
																CNST_TABLE_REF(((long) 144));
															BgL_arg4582z00_2573 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4580z00_2571 =
																MAKE_PAIR(BgL_arg4581z00_2572,
																BgL_arg4582z00_2573);
														}
														BgL_arg4579z00_2570 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 149)),
															BgL_list4580z00_2571);
													}
													BgL_arg4576z00_2567 =
														MAKE_PAIR(BgL_arg4578z00_2569, BgL_arg4579z00_2570);
												}
												{	/* Expand/initial.scm 753 */
													obj_t BgL_arg4583z00_2574;

													obj_t BgL_arg4584z00_2575;

													BgL_arg4583z00_2574 =
														PROCEDURE_ENTRY(BgL_ez00_2545) (BgL_ez00_2545,
														BgL_objz00_2547, BgL_ez00_2545, BEOA);
													{	/* Expand/initial.scm 754 */
														obj_t BgL_arg4588z00_2579;

														{	/* Expand/initial.scm 754 */
															obj_t BgL_arg4590z00_2581;

															obj_t BgL_arg4591z00_2582;

															BgL_arg4590z00_2581 =
																CNST_TABLE_REF(((long) 143));
															{	/* Expand/initial.scm 754 */
																obj_t BgL_list4592z00_2583;

																{	/* Expand/initial.scm 754 */
																	obj_t BgL_arg4593z00_2584;

																	obj_t BgL_arg4594z00_2585;

																	BgL_arg4593z00_2584 =
																		CNST_TABLE_REF(((long) 146));
																	BgL_arg4594z00_2585 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4592z00_2583 =
																		MAKE_PAIR(BgL_arg4593z00_2584,
																		BgL_arg4594z00_2585);
																}
																BgL_arg4591z00_2582 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 147)),
																	BgL_list4592z00_2583);
															}
															BgL_arg4588z00_2579 =
																MAKE_PAIR(BgL_arg4590z00_2581,
																BgL_arg4591z00_2582);
														}
														BgL_arg4584z00_2575 =
															MAKE_PAIR(BgL_arg4588z00_2579, BNIL);
													}
													{	/* Expand/initial.scm 752 */
														obj_t BgL_list4586z00_2577;

														{	/* Expand/initial.scm 752 */
															obj_t BgL_arg4587z00_2578;

															BgL_arg4587z00_2578 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4586z00_2577 =
																MAKE_PAIR(BgL_arg4584z00_2575,
																BgL_arg4587z00_2578);
														}
														BgL_arg4577z00_2568 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4583z00_2574, BgL_list4586z00_2577);
												}}
												return
													MAKE_PAIR(BgL_arg4576z00_2567, BgL_arg4577z00_2568);
											}
										}
									else
										{	/* Expand/initial.scm 749 */
											obj_t BgL_cdrzd22652zd2_2560;

											BgL_cdrzd22652zd2_2560 = CDR(BgL_cdrzd22636zd2_2555);
											if (PAIRP(BgL_cdrzd22652zd2_2560))
												{	/* Expand/initial.scm 749 */
													if (NULLP(CDR(BgL_cdrzd22652zd2_2560)))
														{	/* Expand/initial.scm 749 */
															BgL_objz00_2549 = CAR(BgL_cdrzd22636zd2_2555);
															BgL_portz00_2550 = CAR(BgL_cdrzd22652zd2_2560);
															{	/* Expand/initial.scm 756 */
																obj_t BgL_arg4595z00_2586;

																obj_t BgL_arg4596z00_2587;

																{	/* Expand/initial.scm 756 */
																	obj_t BgL_arg4597z00_2588;

																	obj_t BgL_arg4598z00_2589;

																	BgL_arg4597z00_2588 =
																		CNST_TABLE_REF(((long) 143));
																	{	/* Expand/initial.scm 756 */
																		obj_t BgL_list4599z00_2590;

																		{	/* Expand/initial.scm 756 */
																			obj_t BgL_arg4600z00_2591;

																			obj_t BgL_arg4601z00_2592;

																			BgL_arg4600z00_2591 =
																				CNST_TABLE_REF(((long) 144));
																			BgL_arg4601z00_2592 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4599z00_2590 =
																				MAKE_PAIR(BgL_arg4600z00_2591,
																				BgL_arg4601z00_2592);
																		}
																		BgL_arg4598z00_2589 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(CNST_TABLE_REF(((long) 149)),
																			BgL_list4599z00_2590);
																	}
																	BgL_arg4595z00_2586 =
																		MAKE_PAIR(BgL_arg4597z00_2588,
																		BgL_arg4598z00_2589);
																}
																{	/* Expand/initial.scm 756 */
																	obj_t BgL_arg4602z00_2593;

																	obj_t BgL_arg4603z00_2594;

																	BgL_arg4602z00_2593 =
																		PROCEDURE_ENTRY(BgL_ez00_2545)
																		(BgL_ez00_2545, BgL_objz00_2549,
																		BgL_ez00_2545, BEOA);
																	BgL_arg4603z00_2594 =
																		PROCEDURE_ENTRY(BgL_ez00_2545)
																		(BgL_ez00_2545, BgL_portz00_2550,
																		BgL_ez00_2545, BEOA);
																	{	/* Expand/initial.scm 756 */
																		obj_t BgL_list4605z00_2596;

																		{	/* Expand/initial.scm 756 */
																			obj_t BgL_arg4606z00_2597;

																			BgL_arg4606z00_2597 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4605z00_2596 =
																				MAKE_PAIR(BgL_arg4603z00_2594,
																				BgL_arg4606z00_2597);
																		}
																		BgL_arg4596z00_2587 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4602z00_2593,
																			BgL_list4605z00_2596);
																}}
																return
																	MAKE_PAIR(BgL_arg4595z00_2586,
																	BgL_arg4596z00_2587);
															}
														}
													else
														{	/* Expand/initial.scm 749 */
														BgL_tagzd22630zd2_2552:
															if (NULLP(BgL_xz00_2544))
																{	/* Expand/initial.scm 758 */
																	return BNIL;
																}
															else
																{	/* Expand/initial.scm 758 */
																	obj_t BgL_head3344z00_2600;

																	BgL_head3344z00_2600 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3342z00_2602;

																		obj_t BgL_tail3345z00_2603;

																		BgL_l3342z00_2602 = BgL_xz00_2544;
																		BgL_tail3345z00_2603 = BgL_head3344z00_2600;
																	BgL_zc3anonymousza34608ze3z83_2604:
																		if (NULLP(BgL_l3342z00_2602))
																			{	/* Expand/initial.scm 758 */
																				return CDR(BgL_head3344z00_2600);
																			}
																		else
																			{	/* Expand/initial.scm 758 */
																				obj_t BgL_newtail3346z00_2606;

																				{	/* Expand/initial.scm 758 */
																					obj_t BgL_arg4611z00_2608;

																					{	/* Expand/initial.scm 758 */
																						obj_t BgL_xz00_2610;

																						BgL_xz00_2610 =
																							CAR(BgL_l3342z00_2602);
																						BgL_arg4611z00_2608 =
																							PROCEDURE_ENTRY(BgL_ez00_2545)
																							(BgL_ez00_2545, BgL_xz00_2610,
																							BgL_ez00_2545, BEOA);
																					}
																					BgL_newtail3346z00_2606 =
																						MAKE_PAIR(BgL_arg4611z00_2608,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3345z00_2603,
																					BgL_newtail3346z00_2606);
																				{
																					obj_t BgL_tail3345z00_6592;

																					obj_t BgL_l3342z00_6590;

																					BgL_l3342z00_6590 =
																						CDR(BgL_l3342z00_2602);
																					BgL_tail3345z00_6592 =
																						BgL_newtail3346z00_2606;
																					BgL_tail3345z00_2603 =
																						BgL_tail3345z00_6592;
																					BgL_l3342z00_2602 = BgL_l3342z00_6590;
																					goto
																						BgL_zc3anonymousza34608ze3z83_2604;
																				}
																			}
																	}
																}
														}
												}
											else
												{	/* Expand/initial.scm 749 */
													goto BgL_tagzd22630zd2_2552;
												}
										}
								}
							else
								{	/* Expand/initial.scm 749 */
									goto BgL_tagzd22630zd2_2552;
								}
						}
					else
						{	/* Expand/initial.scm 749 */
							goto BgL_tagzd22630zd2_2552;
						}
				}
			}
		}
	}



/* <anonymous:4524> */
	obj_t BGl_zc3anonymousza34524ze3z83zzexpand_installz00(obj_t BgL_envz00_5243,
		obj_t BgL_xz00_5244, obj_t BgL_ez00_5245)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 737 */
			{
				obj_t BgL_xz00_2483;

				obj_t BgL_ez00_2484;

				BgL_xz00_2483 = BgL_xz00_5244;
				BgL_ez00_2484 = BgL_ez00_5245;
				{
					obj_t BgL_oz00_2486;

					obj_t BgL_oz00_2488;

					obj_t BgL_portz00_2489;

					if (PAIRP(BgL_xz00_2483))
						{	/* Expand/initial.scm 737 */
							obj_t BgL_cdrzd22597zd2_2494;

							BgL_cdrzd22597zd2_2494 = CDR(BgL_xz00_2483);
							if (PAIRP(BgL_cdrzd22597zd2_2494))
								{	/* Expand/initial.scm 737 */
									if (NULLP(CDR(BgL_cdrzd22597zd2_2494)))
										{	/* Expand/initial.scm 737 */
											BgL_oz00_2486 = CAR(BgL_cdrzd22597zd2_2494);
											{	/* Expand/initial.scm 740 */
												obj_t BgL_arg4535z00_2506;

												obj_t BgL_arg4536z00_2507;

												BgL_arg4535z00_2506 =
													BGl_dispz00zzexpand_installz00(BgL_oz00_2486);
												{	/* Expand/initial.scm 740 */
													obj_t BgL_arg4537z00_2508;

													obj_t BgL_arg4538z00_2509;

													BgL_arg4537z00_2508 =
														PROCEDURE_ENTRY(BgL_ez00_2484) (BgL_ez00_2484,
														BgL_oz00_2486, BgL_ez00_2484, BEOA);
													{	/* Expand/initial.scm 740 */
														obj_t BgL_arg4542z00_2513;

														{	/* Expand/initial.scm 740 */
															obj_t BgL_arg4544z00_2515;

															obj_t BgL_arg4545z00_2516;

															BgL_arg4544z00_2515 =
																CNST_TABLE_REF(((long) 143));
															{	/* Expand/initial.scm 740 */
																obj_t BgL_list4546z00_2517;

																{	/* Expand/initial.scm 740 */
																	obj_t BgL_arg4547z00_2518;

																	obj_t BgL_arg4548z00_2519;

																	BgL_arg4547z00_2518 =
																		CNST_TABLE_REF(((long) 146));
																	BgL_arg4548z00_2519 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4546z00_2517 =
																		MAKE_PAIR(BgL_arg4547z00_2518,
																		BgL_arg4548z00_2519);
																}
																BgL_arg4545z00_2516 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 147)),
																	BgL_list4546z00_2517);
															}
															BgL_arg4542z00_2513 =
																MAKE_PAIR(BgL_arg4544z00_2515,
																BgL_arg4545z00_2516);
														}
														BgL_arg4538z00_2509 =
															MAKE_PAIR(BgL_arg4542z00_2513, BNIL);
													}
													{	/* Expand/initial.scm 740 */
														obj_t BgL_list4540z00_2511;

														{	/* Expand/initial.scm 740 */
															obj_t BgL_arg4541z00_2512;

															BgL_arg4541z00_2512 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4540z00_2511 =
																MAKE_PAIR(BgL_arg4538z00_2509,
																BgL_arg4541z00_2512);
														}
														BgL_arg4536z00_2507 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4537z00_2508, BgL_list4540z00_2511);
												}}
												return
													MAKE_PAIR(BgL_arg4535z00_2506, BgL_arg4536z00_2507);
											}
										}
									else
										{	/* Expand/initial.scm 737 */
											obj_t BgL_cdrzd22613zd2_2499;

											BgL_cdrzd22613zd2_2499 = CDR(BgL_cdrzd22597zd2_2494);
											if (PAIRP(BgL_cdrzd22613zd2_2499))
												{	/* Expand/initial.scm 737 */
													if (NULLP(CDR(BgL_cdrzd22613zd2_2499)))
														{	/* Expand/initial.scm 737 */
															BgL_oz00_2488 = CAR(BgL_cdrzd22597zd2_2494);
															BgL_portz00_2489 = CAR(BgL_cdrzd22613zd2_2499);
															{	/* Expand/initial.scm 742 */
																obj_t BgL_arg4549z00_2520;

																obj_t BgL_arg4550z00_2521;

																BgL_arg4549z00_2520 =
																	BGl_dispz00zzexpand_installz00(BgL_oz00_2488);
																{	/* Expand/initial.scm 742 */
																	obj_t BgL_arg4551z00_2522;

																	obj_t BgL_arg4552z00_2523;

																	BgL_arg4551z00_2522 =
																		PROCEDURE_ENTRY(BgL_ez00_2484)
																		(BgL_ez00_2484, BgL_oz00_2488,
																		BgL_ez00_2484, BEOA);
																	BgL_arg4552z00_2523 =
																		PROCEDURE_ENTRY(BgL_ez00_2484)
																		(BgL_ez00_2484, BgL_portz00_2489,
																		BgL_ez00_2484, BEOA);
																	{	/* Expand/initial.scm 742 */
																		obj_t BgL_list4554z00_2525;

																		{	/* Expand/initial.scm 742 */
																			obj_t BgL_arg4555z00_2526;

																			BgL_arg4555z00_2526 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4554z00_2525 =
																				MAKE_PAIR(BgL_arg4552z00_2523,
																				BgL_arg4555z00_2526);
																		}
																		BgL_arg4550z00_2521 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4551z00_2522,
																			BgL_list4554z00_2525);
																	}
																}
																return
																	MAKE_PAIR(BgL_arg4549z00_2520,
																	BgL_arg4550z00_2521);
															}
														}
													else
														{	/* Expand/initial.scm 737 */
														BgL_tagzd22591zd2_2491:
															if (NULLP(BgL_xz00_2483))
																{	/* Expand/initial.scm 744 */
																	return BNIL;
																}
															else
																{	/* Expand/initial.scm 744 */
																	obj_t BgL_head3339z00_2529;

																	BgL_head3339z00_2529 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3337z00_2531;

																		obj_t BgL_tail3340z00_2532;

																		BgL_l3337z00_2531 = BgL_xz00_2483;
																		BgL_tail3340z00_2532 = BgL_head3339z00_2529;
																	BgL_zc3anonymousza34557ze3z83_2533:
																		if (NULLP(BgL_l3337z00_2531))
																			{	/* Expand/initial.scm 744 */
																				return CDR(BgL_head3339z00_2529);
																			}
																		else
																			{	/* Expand/initial.scm 744 */
																				obj_t BgL_newtail3341z00_2535;

																				{	/* Expand/initial.scm 744 */
																					obj_t BgL_arg4560z00_2537;

																					{	/* Expand/initial.scm 744 */
																						obj_t BgL_xz00_2539;

																						BgL_xz00_2539 =
																							CAR(BgL_l3337z00_2531);
																						BgL_arg4560z00_2537 =
																							PROCEDURE_ENTRY(BgL_ez00_2484)
																							(BgL_ez00_2484, BgL_xz00_2539,
																							BgL_ez00_2484, BEOA);
																					}
																					BgL_newtail3341z00_2535 =
																						MAKE_PAIR(BgL_arg4560z00_2537,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3340z00_2532,
																					BgL_newtail3341z00_2535);
																				{
																					obj_t BgL_tail3340z00_6647;

																					obj_t BgL_l3337z00_6645;

																					BgL_l3337z00_6645 =
																						CDR(BgL_l3337z00_2531);
																					BgL_tail3340z00_6647 =
																						BgL_newtail3341z00_2535;
																					BgL_tail3340z00_2532 =
																						BgL_tail3340z00_6647;
																					BgL_l3337z00_2531 = BgL_l3337z00_6645;
																					goto
																						BgL_zc3anonymousza34557ze3z83_2533;
																				}
																			}
																	}
																}
														}
												}
											else
												{	/* Expand/initial.scm 737 */
													goto BgL_tagzd22591zd2_2491;
												}
										}
								}
							else
								{	/* Expand/initial.scm 737 */
									goto BgL_tagzd22591zd2_2491;
								}
						}
					else
						{	/* Expand/initial.scm 737 */
							goto BgL_tagzd22591zd2_2491;
						}
				}
			}
		}
	}



/* <anonymous:4481> */
	obj_t BGl_zc3anonymousza34481ze3z83zzexpand_installz00(obj_t BgL_envz00_5246,
		obj_t BgL_xz00_5247, obj_t BgL_ez00_5248)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 722 */
			{
				obj_t BgL_xz00_2423;

				obj_t BgL_ez00_2424;

				BgL_xz00_2423 = BgL_xz00_5247;
				BgL_ez00_2424 = BgL_ez00_5248;
				{
					obj_t BgL_portz00_2427;

					if (PAIRP(BgL_xz00_2423))
						{	/* Expand/initial.scm 722 */
							if (NULLP(CDR(BgL_xz00_2423)))
								{	/* Expand/initial.scm 722 */
									{	/* Expand/initial.scm 725 */
										obj_t BgL_arg4489z00_2439;

										obj_t BgL_arg4490z00_2440;

										{	/* Expand/initial.scm 725 */
											obj_t BgL_arg4491z00_2441;

											obj_t BgL_arg4492z00_2442;

											BgL_arg4491z00_2441 = CNST_TABLE_REF(((long) 143));
											{	/* Expand/initial.scm 725 */
												obj_t BgL_list4493z00_2443;

												{	/* Expand/initial.scm 725 */
													obj_t BgL_arg4494z00_2444;

													obj_t BgL_arg4495z00_2445;

													BgL_arg4494z00_2444 = CNST_TABLE_REF(((long) 144));
													BgL_arg4495z00_2445 = MAKE_PAIR(BNIL, BNIL);
													BgL_list4493z00_2443 =
														MAKE_PAIR(BgL_arg4494z00_2444, BgL_arg4495z00_2445);
												}
												BgL_arg4492z00_2442 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 145)), BgL_list4493z00_2443);
											}
											BgL_arg4489z00_2439 =
												MAKE_PAIR(BgL_arg4491z00_2441, BgL_arg4492z00_2442);
										}
										{	/* Expand/initial.scm 726 */
											obj_t BgL_arg4496z00_2446;

											{	/* Expand/initial.scm 726 */
												obj_t BgL_arg4499z00_2449;

												{	/* Expand/initial.scm 726 */
													obj_t BgL_arg4501z00_2451;

													obj_t BgL_arg4502z00_2452;

													BgL_arg4501z00_2451 = CNST_TABLE_REF(((long) 143));
													{	/* Expand/initial.scm 726 */
														obj_t BgL_list4503z00_2453;

														{	/* Expand/initial.scm 726 */
															obj_t BgL_arg4504z00_2454;

															obj_t BgL_arg4505z00_2455;

															BgL_arg4504z00_2454 =
																CNST_TABLE_REF(((long) 146));
															BgL_arg4505z00_2455 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4503z00_2453 =
																MAKE_PAIR(BgL_arg4504z00_2454,
																BgL_arg4505z00_2455);
														}
														BgL_arg4502z00_2452 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 147)),
															BgL_list4503z00_2453);
													}
													BgL_arg4499z00_2449 =
														MAKE_PAIR(BgL_arg4501z00_2451, BgL_arg4502z00_2452);
												}
												BgL_arg4496z00_2446 =
													MAKE_PAIR(BgL_arg4499z00_2449, BNIL);
											}
											{	/* Expand/initial.scm 725 */
												obj_t BgL_list4498z00_2448;

												BgL_list4498z00_2448 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg4490z00_2440 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4496z00_2446, BgL_list4498z00_2448);
										}}
										return MAKE_PAIR(BgL_arg4489z00_2439, BgL_arg4490z00_2440);
									}
								}
							else
								{	/* Expand/initial.scm 722 */
									obj_t BgL_cdrzd22582zd2_2433;

									BgL_cdrzd22582zd2_2433 = CDR(BgL_xz00_2423);
									if (PAIRP(BgL_cdrzd22582zd2_2433))
										{	/* Expand/initial.scm 722 */
											if (NULLP(CDR(BgL_cdrzd22582zd2_2433)))
												{	/* Expand/initial.scm 722 */
													BgL_portz00_2427 = CAR(BgL_cdrzd22582zd2_2433);
													{	/* Expand/initial.scm 729 */
														obj_t BgL_arg4506z00_2456;

														obj_t BgL_arg4507z00_2457;

														{	/* Expand/initial.scm 729 */
															obj_t BgL_arg4508z00_2458;

															obj_t BgL_arg4509z00_2459;

															BgL_arg4508z00_2458 =
																CNST_TABLE_REF(((long) 143));
															{	/* Expand/initial.scm 729 */
																obj_t BgL_list4510z00_2460;

																{	/* Expand/initial.scm 729 */
																	obj_t BgL_arg4511z00_2461;

																	obj_t BgL_arg4512z00_2462;

																	BgL_arg4511z00_2461 =
																		CNST_TABLE_REF(((long) 144));
																	BgL_arg4512z00_2462 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4510z00_2460 =
																		MAKE_PAIR(BgL_arg4511z00_2461,
																		BgL_arg4512z00_2462);
																}
																BgL_arg4509z00_2459 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 145)),
																	BgL_list4510z00_2460);
															}
															BgL_arg4506z00_2456 =
																MAKE_PAIR(BgL_arg4508z00_2458,
																BgL_arg4509z00_2459);
														}
														{	/* Expand/initial.scm 730 */
															obj_t BgL_arg4513z00_2463;

															BgL_arg4513z00_2463 =
																PROCEDURE_ENTRY(BgL_ez00_2424) (BgL_ez00_2424,
																BgL_portz00_2427, BgL_ez00_2424, BEOA);
															{	/* Expand/initial.scm 729 */
																obj_t BgL_list4515z00_2465;

																BgL_list4515z00_2465 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg4507z00_2457 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4513z00_2463, BgL_list4515z00_2465);
														}}
														return
															MAKE_PAIR(BgL_arg4506z00_2456,
															BgL_arg4507z00_2457);
													}
												}
											else
												{	/* Expand/initial.scm 722 */
												BgL_tagzd22574zd2_2429:
													if (NULLP(BgL_xz00_2423))
														{	/* Expand/initial.scm 732 */
															return BNIL;
														}
													else
														{	/* Expand/initial.scm 732 */
															obj_t BgL_head3334z00_2468;

															BgL_head3334z00_2468 = MAKE_PAIR(BNIL, BNIL);
															{
																obj_t BgL_l3332z00_2470;

																obj_t BgL_tail3335z00_2471;

																BgL_l3332z00_2470 = BgL_xz00_2423;
																BgL_tail3335z00_2471 = BgL_head3334z00_2468;
															BgL_zc3anonymousza34517ze3z83_2472:
																if (NULLP(BgL_l3332z00_2470))
																	{	/* Expand/initial.scm 732 */
																		return CDR(BgL_head3334z00_2468);
																	}
																else
																	{	/* Expand/initial.scm 732 */
																		obj_t BgL_newtail3336z00_2474;

																		{	/* Expand/initial.scm 732 */
																			obj_t BgL_arg4520z00_2476;

																			{	/* Expand/initial.scm 732 */
																				obj_t BgL_xz00_2478;

																				BgL_xz00_2478 = CAR(BgL_l3332z00_2470);
																				BgL_arg4520z00_2476 =
																					PROCEDURE_ENTRY(BgL_ez00_2424)
																					(BgL_ez00_2424, BgL_xz00_2478,
																					BgL_ez00_2424, BEOA);
																			}
																			BgL_newtail3336z00_2474 =
																				MAKE_PAIR(BgL_arg4520z00_2476, BNIL);
																		}
																		SET_CDR(BgL_tail3335z00_2471,
																			BgL_newtail3336z00_2474);
																		{
																			obj_t BgL_tail3335z00_6703;

																			obj_t BgL_l3332z00_6701;

																			BgL_l3332z00_6701 =
																				CDR(BgL_l3332z00_2470);
																			BgL_tail3335z00_6703 =
																				BgL_newtail3336z00_2474;
																			BgL_tail3335z00_2471 =
																				BgL_tail3335z00_6703;
																			BgL_l3332z00_2470 = BgL_l3332z00_6701;
																			goto BgL_zc3anonymousza34517ze3z83_2472;
																		}
																	}
															}
														}
												}
										}
									else
										{	/* Expand/initial.scm 722 */
											goto BgL_tagzd22574zd2_2429;
										}
								}
						}
					else
						{	/* Expand/initial.scm 722 */
							goto BgL_tagzd22574zd2_2429;
						}
				}
			}
		}
	}



/* <anonymous:4444> */
	obj_t BGl_zc3anonymousza34444ze3z83zzexpand_installz00(obj_t BgL_envz00_5249,
		obj_t BgL_xz00_5250, obj_t BgL_ez00_5251)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 701 */
			{
				obj_t BgL_xz00_2371;

				obj_t BgL_ez00_2372;

				BgL_xz00_2371 = BgL_xz00_5250;
				BgL_ez00_2372 = BgL_ez00_5251;
				{
					obj_t BgL_functionz00_2374;

					obj_t BgL_onezd2argzd2_2375;

					obj_t BgL_functionz00_2377;

					obj_t BgL_argsz00_2378;

					if (PAIRP(BgL_xz00_2371))
						{	/* Expand/initial.scm 701 */
							obj_t BgL_cdrzd22524zd2_2383;

							BgL_cdrzd22524zd2_2383 = CDR(BgL_xz00_2371);
							if (PAIRP(BgL_cdrzd22524zd2_2383))
								{	/* Expand/initial.scm 701 */
									obj_t BgL_cdrzd22528zd2_2385;

									BgL_cdrzd22528zd2_2385 = CDR(BgL_cdrzd22524zd2_2383);
									if (PAIRP(BgL_cdrzd22528zd2_2385))
										{	/* Expand/initial.scm 701 */
											if (NULLP(CDR(BgL_cdrzd22528zd2_2385)))
												{	/* Expand/initial.scm 701 */
													BgL_functionz00_2374 = CAR(BgL_cdrzd22524zd2_2383);
													BgL_onezd2argzd2_2375 = CAR(BgL_cdrzd22528zd2_2385);
													{	/* Expand/initial.scm 704 */
														obj_t BgL_arg4456z00_2397;

														obj_t BgL_arg4457z00_2398;

														BgL_arg4456z00_2397 = CNST_TABLE_REF(((long) 97));
														{	/* Expand/initial.scm 704 */
															obj_t BgL_arg4458z00_2399;

															obj_t BgL_arg4459z00_2400;

															BgL_arg4458z00_2399 =
																PROCEDURE_ENTRY(BgL_ez00_2372) (BgL_ez00_2372,
																BgL_functionz00_2374, BgL_ez00_2372, BEOA);
															BgL_arg4459z00_2400 =
																PROCEDURE_ENTRY(BgL_ez00_2372) (BgL_ez00_2372,
																BgL_onezd2argzd2_2375, BgL_ez00_2372, BEOA);
															{	/* Expand/initial.scm 704 */
																obj_t BgL_list4461z00_2402;

																{	/* Expand/initial.scm 704 */
																	obj_t BgL_arg4462z00_2403;

																	BgL_arg4462z00_2403 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4461z00_2402 =
																		MAKE_PAIR(BgL_arg4459z00_2400,
																		BgL_arg4462z00_2403);
																}
																BgL_arg4457z00_2398 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4458z00_2399, BgL_list4461z00_2402);
														}}
														return
															MAKE_PAIR(BgL_arg4456z00_2397,
															BgL_arg4457z00_2398);
													}
												}
											else
												{	/* Expand/initial.scm 701 */
													BgL_functionz00_2377 = CAR(BgL_cdrzd22524zd2_2383);
													BgL_argsz00_2378 = CDR(BgL_cdrzd22524zd2_2383);
												BgL_tagzd22515zd2_2379:
													{	/* Expand/initial.scm 707 */
														obj_t BgL_arg4463z00_2404;

														obj_t BgL_arg4464z00_2405;

														BgL_arg4463z00_2404 = CNST_TABLE_REF(((long) 97));
														{	/* Expand/initial.scm 707 */
															obj_t BgL_arg4465z00_2406;

															obj_t BgL_arg4466z00_2407;

															BgL_arg4465z00_2406 =
																PROCEDURE_ENTRY(BgL_ez00_2372) (BgL_ez00_2372,
																BgL_functionz00_2377, BgL_ez00_2372, BEOA);
															{	/* Expand/initial.scm 709 */
																obj_t BgL_arg4470z00_2411;

																{	/* Expand/initial.scm 709 */
																	obj_t BgL_arg4471z00_2412;

																	{	/* Expand/initial.scm 709 */
																		obj_t BgL_arg4472z00_2413;

																		obj_t BgL_arg4473z00_2414;

																		{	/* Expand/initial.scm 709 */
																			obj_t BgL_arg4474z00_2415;

																			obj_t BgL_arg4475z00_2416;

																			BgL_arg4474z00_2415 =
																				CNST_TABLE_REF(((long) 143));
																			{	/* Expand/initial.scm 709 */
																				obj_t BgL_list4476z00_2417;

																				{	/* Expand/initial.scm 709 */
																					obj_t BgL_arg4477z00_2418;

																					obj_t BgL_arg4478z00_2419;

																					BgL_arg4477z00_2418 =
																						CNST_TABLE_REF(((long) 150));
																					BgL_arg4478z00_2419 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4476z00_2417 =
																						MAKE_PAIR(BgL_arg4477z00_2418,
																						BgL_arg4478z00_2419);
																				}
																				BgL_arg4475z00_2416 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 96)),
																					BgL_list4476z00_2417);
																			}
																			BgL_arg4472z00_2413 =
																				MAKE_PAIR(BgL_arg4474z00_2415,
																				BgL_arg4475z00_2416);
																		}
																		BgL_arg4473z00_2414 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_argsz00_2378, BNIL);
																		BgL_arg4471z00_2412 =
																			MAKE_PAIR(BgL_arg4472z00_2413,
																			BgL_arg4473z00_2414);
																	}
																	BgL_arg4470z00_2411 =
																		BGl_epairifyz00zztools_miscz00
																		(BgL_arg4471z00_2412, BgL_xz00_2371);
																}
																BgL_arg4466z00_2407 =
																	PROCEDURE_ENTRY(BgL_ez00_2372) (BgL_ez00_2372,
																	BgL_arg4470z00_2411, BgL_ez00_2372, BEOA);
															}
															{	/* Expand/initial.scm 707 */
																obj_t BgL_list4468z00_2409;

																{	/* Expand/initial.scm 707 */
																	obj_t BgL_arg4469z00_2410;

																	BgL_arg4469z00_2410 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4468z00_2409 =
																		MAKE_PAIR(BgL_arg4466z00_2407,
																		BgL_arg4469z00_2410);
																}
																BgL_arg4464z00_2405 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4465z00_2406, BgL_list4468z00_2409);
														}}
														return
															MAKE_PAIR(BgL_arg4463z00_2404,
															BgL_arg4464z00_2405);
													}
												}
										}
									else
										{
											obj_t BgL_argsz00_6749;

											obj_t BgL_functionz00_6747;

											BgL_functionz00_6747 = CAR(BgL_cdrzd22524zd2_2383);
											BgL_argsz00_6749 = CDR(BgL_cdrzd22524zd2_2383);
											BgL_argsz00_2378 = BgL_argsz00_6749;
											BgL_functionz00_2377 = BgL_functionz00_6747;
											goto BgL_tagzd22515zd2_2379;
										}
								}
							else
								{	/* Expand/initial.scm 701 */
								BgL_tagzd22516zd2_2380:
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string5625z00zzexpand_installz00, BgL_xz00_2371);
								}
						}
					else
						{	/* Expand/initial.scm 701 */
							goto BgL_tagzd22516zd2_2380;
						}
				}
			}
		}
	}



/* <anonymous:4402> */
	obj_t BGl_zc3anonymousza34402ze3z83zzexpand_installz00(obj_t BgL_envz00_5252,
		obj_t BgL_xz00_5253, obj_t BgL_ez00_5254)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 683 */
			{
				obj_t BgL_xz00_2302;

				obj_t BgL_ez00_2303;

				BgL_xz00_2302 = BgL_xz00_5253;
				BgL_ez00_2303 = BgL_ez00_5254;
				{
					obj_t BgL_x1z00_2307;

					obj_t BgL_x2z00_2308;

					obj_t BgL_x1z00_2310;

					obj_t BgL_x2z00_2311;

					obj_t BgL_restz00_2312;

					if (PAIRP(BgL_xz00_2302))
						{	/* Expand/initial.scm 683 */
							obj_t BgL_cdrzd22434zd2_2317;

							BgL_cdrzd22434zd2_2317 = CDR(BgL_xz00_2302);
							if (PAIRP(BgL_cdrzd22434zd2_2317))
								{	/* Expand/initial.scm 683 */
									if (NULLP(CDR(BgL_cdrzd22434zd2_2317)))
										{	/* Expand/initial.scm 683 */
											obj_t BgL_arg4406z00_2320;

											BgL_arg4406z00_2320 = CAR(BgL_cdrzd22434zd2_2317);
											return
												PROCEDURE_ENTRY(BgL_ez00_2303) (BgL_ez00_2303,
												BgL_arg4406z00_2320, BgL_ez00_2303, BEOA);
										}
									else
										{	/* Expand/initial.scm 683 */
											obj_t BgL_cdrzd22451zd2_2322;

											BgL_cdrzd22451zd2_2322 = CDR(BgL_cdrzd22434zd2_2317);
											if (PAIRP(BgL_cdrzd22451zd2_2322))
												{	/* Expand/initial.scm 683 */
													if (NULLP(CDR(BgL_cdrzd22451zd2_2322)))
														{	/* Expand/initial.scm 683 */
															BgL_x1z00_2307 = CAR(BgL_cdrzd22434zd2_2317);
															BgL_x2z00_2308 = CAR(BgL_cdrzd22451zd2_2322);
															{	/* Expand/initial.scm 688 */
																obj_t BgL_arg4416z00_2334;

																obj_t BgL_arg4417z00_2335;

																BgL_arg4416z00_2334 =
																	CNST_TABLE_REF(((long) 151));
																{	/* Expand/initial.scm 688 */
																	obj_t BgL_arg4418z00_2336;

																	obj_t BgL_arg4419z00_2337;

																	BgL_arg4418z00_2336 =
																		PROCEDURE_ENTRY(BgL_ez00_2303)
																		(BgL_ez00_2303, BgL_x1z00_2307,
																		BgL_ez00_2303, BEOA);
																	BgL_arg4419z00_2337 =
																		PROCEDURE_ENTRY(BgL_ez00_2303)
																		(BgL_ez00_2303, BgL_x2z00_2308,
																		BgL_ez00_2303, BEOA);
																	{	/* Expand/initial.scm 688 */
																		obj_t BgL_list4421z00_2339;

																		{	/* Expand/initial.scm 688 */
																			obj_t BgL_arg4422z00_2340;

																			BgL_arg4422z00_2340 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4421z00_2339 =
																				MAKE_PAIR(BgL_arg4419z00_2337,
																				BgL_arg4422z00_2340);
																		}
																		BgL_arg4417z00_2335 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4418z00_2336,
																			BgL_list4421z00_2339);
																}}
																return
																	MAKE_PAIR(BgL_arg4416z00_2334,
																	BgL_arg4417z00_2335);
															}
														}
													else
														{	/* Expand/initial.scm 683 */
															obj_t BgL_cdrzd22474zd2_2328;

															BgL_cdrzd22474zd2_2328 =
																CDR(BgL_cdrzd22434zd2_2317);
															BgL_x1z00_2310 = CAR(BgL_cdrzd22434zd2_2317);
															BgL_x2z00_2311 = CAR(BgL_cdrzd22474zd2_2328);
															BgL_restz00_2312 = CDR(BgL_cdrzd22474zd2_2328);
															{	/* Expand/initial.scm 690 */
																obj_t BgL_arg4423z00_2341;

																obj_t BgL_arg4424z00_2342;

																BgL_arg4423z00_2341 =
																	CNST_TABLE_REF(((long) 151));
																{	/* Expand/initial.scm 690 */
																	obj_t BgL_arg4425z00_2343;

																	obj_t BgL_arg4426z00_2344;

																	BgL_arg4425z00_2343 =
																		PROCEDURE_ENTRY(BgL_ez00_2303)
																		(BgL_ez00_2303, BgL_x1z00_2310,
																		BgL_ez00_2303, BEOA);
																	{	/* Expand/initial.scm 692 */
																		obj_t BgL_arg4430z00_2348;

																		{	/* Expand/initial.scm 692 */
																			obj_t BgL_arg4431z00_2349;

																			{	/* Expand/initial.scm 692 */
																				obj_t BgL_arg4432z00_2350;

																				obj_t BgL_arg4433z00_2351;

																				BgL_arg4432z00_2350 =
																					CNST_TABLE_REF(((long) 96));
																				{	/* Expand/initial.scm 692 */
																					obj_t BgL_arg4434z00_2352;

																					BgL_arg4434z00_2352 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_restz00_2312, BNIL);
																					{	/* Expand/initial.scm 692 */
																						obj_t BgL_list4435z00_2353;

																						BgL_list4435z00_2353 =
																							MAKE_PAIR(BgL_arg4434z00_2352,
																							BNIL);
																						BgL_arg4433z00_2351 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_x2z00_2311,
																							BgL_list4435z00_2353);
																				}}
																				BgL_arg4431z00_2349 =
																					MAKE_PAIR(BgL_arg4432z00_2350,
																					BgL_arg4433z00_2351);
																			}
																			BgL_arg4430z00_2348 =
																				BGl_epairifyz00zztools_miscz00
																				(BgL_arg4431z00_2349, BgL_xz00_2302);
																		}
																		BgL_arg4426z00_2344 =
																			PROCEDURE_ENTRY(BgL_ez00_2303)
																			(BgL_ez00_2303, BgL_arg4430z00_2348,
																			BgL_ez00_2303, BEOA);
																	}
																	{	/* Expand/initial.scm 690 */
																		obj_t BgL_list4428z00_2346;

																		{	/* Expand/initial.scm 690 */
																			obj_t BgL_arg4429z00_2347;

																			BgL_arg4429z00_2347 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4428z00_2346 =
																				MAKE_PAIR(BgL_arg4426z00_2344,
																				BgL_arg4429z00_2347);
																		}
																		BgL_arg4424z00_2342 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4425z00_2343,
																			BgL_list4428z00_2346);
																}}
																return
																	MAKE_PAIR(BgL_arg4423z00_2341,
																	BgL_arg4424z00_2342);
															}
														}
												}
											else
												{	/* Expand/initial.scm 683 */
												BgL_tagzd22427zd2_2314:
													if (NULLP(BgL_xz00_2302))
														{	/* Expand/initial.scm 696 */
															return BNIL;
														}
													else
														{	/* Expand/initial.scm 696 */
															obj_t BgL_head3329z00_2356;

															BgL_head3329z00_2356 = MAKE_PAIR(BNIL, BNIL);
															{
																obj_t BgL_l3327z00_2358;

																obj_t BgL_tail3330z00_2359;

																BgL_l3327z00_2358 = BgL_xz00_2302;
																BgL_tail3330z00_2359 = BgL_head3329z00_2356;
															BgL_zc3anonymousza34437ze3z83_2360:
																if (NULLP(BgL_l3327z00_2358))
																	{	/* Expand/initial.scm 696 */
																		return CDR(BgL_head3329z00_2356);
																	}
																else
																	{	/* Expand/initial.scm 696 */
																		obj_t BgL_newtail3331z00_2362;

																		{	/* Expand/initial.scm 696 */
																			obj_t BgL_arg4440z00_2364;

																			{	/* Expand/initial.scm 696 */
																				obj_t BgL_xz00_2366;

																				BgL_xz00_2366 = CAR(BgL_l3327z00_2358);
																				BgL_arg4440z00_2364 =
																					PROCEDURE_ENTRY(BgL_ez00_2303)
																					(BgL_ez00_2303, BgL_xz00_2366,
																					BgL_ez00_2303, BEOA);
																			}
																			BgL_newtail3331z00_2362 =
																				MAKE_PAIR(BgL_arg4440z00_2364, BNIL);
																		}
																		SET_CDR(BgL_tail3330z00_2359,
																			BgL_newtail3331z00_2362);
																		{
																			obj_t BgL_tail3330z00_6812;

																			obj_t BgL_l3327z00_6810;

																			BgL_l3327z00_6810 =
																				CDR(BgL_l3327z00_2358);
																			BgL_tail3330z00_6812 =
																				BgL_newtail3331z00_2362;
																			BgL_tail3330z00_2359 =
																				BgL_tail3330z00_6812;
																			BgL_l3327z00_2358 = BgL_l3327z00_6810;
																			goto BgL_zc3anonymousza34437ze3z83_2360;
																		}
																	}
															}
														}
												}
										}
								}
							else
								{	/* Expand/initial.scm 683 */
									goto BgL_tagzd22427zd2_2314;
								}
						}
					else
						{	/* Expand/initial.scm 683 */
							goto BgL_tagzd22427zd2_2314;
						}
				}
			}
		}
	}



/* <anonymous:4385> */
	obj_t BGl_zc3anonymousza34385ze3z83zzexpand_installz00(obj_t BgL_envz00_5255,
		obj_t BgL_xz00_5256, obj_t BgL_ez00_5257)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 671 */
			{
				obj_t BgL_xz00_2274;

				obj_t BgL_ez00_2275;

				BgL_xz00_2274 = BgL_xz00_5256;
				BgL_ez00_2275 = BgL_ez00_5257;
				{
					obj_t BgL_nz00_2279;

					if (PAIRP(BgL_xz00_2274))
						{	/* Expand/initial.scm 671 */
							obj_t BgL_cdrzd22402zd2_2284;

							BgL_cdrzd22402zd2_2284 = CDR(BgL_xz00_2274);
							if (PAIRP(BgL_cdrzd22402zd2_2284))
								{	/* Expand/initial.scm 671 */
									obj_t BgL_carzd22404zd2_2286;

									BgL_carzd22404zd2_2286 = CAR(BgL_cdrzd22402zd2_2284);
									if (CHARP(BgL_carzd22404zd2_2286))
										{	/* Expand/initial.scm 671 */
											if (NULLP(CDR(BgL_cdrzd22402zd2_2284)))
												{	/* Expand/initial.scm 671 */
													return BINT((CCHAR(BgL_carzd22404zd2_2286)));
												}
											else
												{	/* Expand/initial.scm 671 */
												BgL_tagzd22397zd2_2281:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string5626z00zzexpand_installz00,
														BgL_xz00_2274);
												}
										}
									else
										{	/* Expand/initial.scm 671 */
											if (NULLP(CDR(BgL_cdrzd22402zd2_2284)))
												{	/* Expand/initial.scm 671 */
													BgL_nz00_2279 = CAR(BgL_cdrzd22402zd2_2284);
													{	/* Expand/initial.scm 676 */
														obj_t BgL_arg4394z00_2294;

														obj_t BgL_arg4395z00_2295;

														BgL_arg4394z00_2294 = CNST_TABLE_REF(((long) 95));
														{	/* Expand/initial.scm 676 */
															obj_t BgL_arg4396z00_2296;

															BgL_arg4396z00_2296 =
																PROCEDURE_ENTRY(BgL_ez00_2275) (BgL_ez00_2275,
																BgL_nz00_2279, BgL_ez00_2275, BEOA);
															{	/* Expand/initial.scm 676 */
																obj_t BgL_list4399z00_2298;

																BgL_list4399z00_2298 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg4395z00_2295 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4396z00_2296, BgL_list4399z00_2298);
														}}
														return
															MAKE_PAIR(BgL_arg4394z00_2294,
															BgL_arg4395z00_2295);
													}
												}
											else
												{	/* Expand/initial.scm 671 */
													goto BgL_tagzd22397zd2_2281;
												}
										}
								}
							else
								{	/* Expand/initial.scm 671 */
									goto BgL_tagzd22397zd2_2281;
								}
						}
					else
						{	/* Expand/initial.scm 671 */
							goto BgL_tagzd22397zd2_2281;
						}
				}
			}
		}
	}



/* <anonymous:4364> */
	obj_t BGl_zc3anonymousza34364ze3z83zzexpand_installz00(obj_t BgL_envz00_5258,
		obj_t BgL_xz00_5259, obj_t BgL_ez00_5260)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 657 */
			{
				obj_t BgL_xz00_2241;

				obj_t BgL_ez00_2242;

				BgL_xz00_2241 = BgL_xz00_5259;
				BgL_ez00_2242 = BgL_ez00_5260;
				{
					obj_t BgL_nz00_2246;

					if (PAIRP(BgL_xz00_2241))
						{	/* Expand/initial.scm 657 */
							obj_t BgL_cdrzd22373zd2_2251;

							BgL_cdrzd22373zd2_2251 = CDR(BgL_xz00_2241);
							if (PAIRP(BgL_cdrzd22373zd2_2251))
								{	/* Expand/initial.scm 657 */
									obj_t BgL_carzd22375zd2_2253;

									BgL_carzd22375zd2_2253 = CAR(BgL_cdrzd22373zd2_2251);
									if (INTEGERP(BgL_carzd22375zd2_2253))
										{	/* Expand/initial.scm 657 */
											if (NULLP(CDR(BgL_cdrzd22373zd2_2251)))
												{	/* Expand/initial.scm 657 */
													return BCHAR(((long) CINT(BgL_carzd22375zd2_2253)));
												}
											else
												{	/* Expand/initial.scm 657 */
												BgL_tagzd22368zd2_2248:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string5626z00zzexpand_installz00,
														BgL_xz00_2241);
												}
										}
									else
										{	/* Expand/initial.scm 657 */
											if (NULLP(CDR(BgL_cdrzd22373zd2_2251)))
												{	/* Expand/initial.scm 657 */
													BgL_nz00_2246 = CAR(BgL_cdrzd22373zd2_2251);
													if (CBOOL
														(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
														{	/* Expand/initial.scm 663 */
															obj_t BgL_arg4373z00_2261;

															obj_t BgL_arg4374z00_2262;

															BgL_arg4373z00_2261 =
																CNST_TABLE_REF(((long) 152));
															{	/* Expand/initial.scm 663 */
																obj_t BgL_arg4375z00_2263;

																BgL_arg4375z00_2263 =
																	PROCEDURE_ENTRY(BgL_ez00_2242) (BgL_ez00_2242,
																	BgL_nz00_2246, BgL_ez00_2242, BEOA);
																{	/* Expand/initial.scm 663 */
																	obj_t BgL_list4377z00_2265;

																	BgL_list4377z00_2265 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4374z00_2262 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg4375z00_2263, BgL_list4377z00_2265);
															}}
															return
																MAKE_PAIR(BgL_arg4373z00_2261,
																BgL_arg4374z00_2262);
														}
													else
														{	/* Expand/initial.scm 664 */
															obj_t BgL_arg4378z00_2266;

															obj_t BgL_arg4379z00_2267;

															BgL_arg4378z00_2266 = CNST_TABLE_REF(((long) 94));
															{	/* Expand/initial.scm 664 */
																obj_t BgL_arg4380z00_2268;

																BgL_arg4380z00_2268 =
																	PROCEDURE_ENTRY(BgL_ez00_2242) (BgL_ez00_2242,
																	BgL_nz00_2246, BgL_ez00_2242, BEOA);
																{	/* Expand/initial.scm 664 */
																	obj_t BgL_list4382z00_2270;

																	BgL_list4382z00_2270 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4379z00_2267 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg4380z00_2268, BgL_list4382z00_2270);
															}}
															return
																MAKE_PAIR(BgL_arg4378z00_2266,
																BgL_arg4379z00_2267);
														}
												}
											else
												{	/* Expand/initial.scm 657 */
													goto BgL_tagzd22368zd2_2248;
												}
										}
								}
							else
								{	/* Expand/initial.scm 657 */
									goto BgL_tagzd22368zd2_2248;
								}
						}
					else
						{	/* Expand/initial.scm 657 */
							goto BgL_tagzd22368zd2_2248;
						}
				}
			}
		}
	}



/* <anonymous:4334> */
	obj_t BGl_zc3anonymousza34334ze3z83zzexpand_installz00(obj_t BgL_envz00_5261,
		obj_t BgL_xz00_5262, obj_t BgL_ez00_5263)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 640 */
			{
				obj_t BgL_xz00_2190;

				obj_t BgL_ez00_2191;

				BgL_xz00_2190 = BgL_xz00_5262;
				BgL_ez00_2191 = BgL_ez00_5263;
				{
					obj_t BgL_s1z00_2193;

					obj_t BgL_o1z00_2194;

					obj_t BgL_s2z00_2195;

					obj_t BgL_o2z00_2196;

					obj_t BgL_lz00_2197;

					if (PAIRP(BgL_xz00_2190))
						{	/* Expand/initial.scm 640 */
							obj_t BgL_cdrzd22335zd2_2202;

							BgL_cdrzd22335zd2_2202 = CDR(BgL_xz00_2190);
							if (PAIRP(BgL_cdrzd22335zd2_2202))
								{	/* Expand/initial.scm 640 */
									obj_t BgL_cdrzd22342zd2_2204;

									BgL_cdrzd22342zd2_2204 = CDR(BgL_cdrzd22335zd2_2202);
									if (PAIRP(BgL_cdrzd22342zd2_2204))
										{	/* Expand/initial.scm 640 */
											obj_t BgL_cdrzd22349zd2_2206;

											BgL_cdrzd22349zd2_2206 = CDR(BgL_cdrzd22342zd2_2204);
											if (PAIRP(BgL_cdrzd22349zd2_2206))
												{	/* Expand/initial.scm 640 */
													obj_t BgL_cdrzd22355zd2_2208;

													BgL_cdrzd22355zd2_2208 = CDR(BgL_cdrzd22349zd2_2206);
													if (PAIRP(BgL_cdrzd22355zd2_2208))
														{	/* Expand/initial.scm 640 */
															obj_t BgL_cdrzd22360zd2_2210;

															BgL_cdrzd22360zd2_2210 =
																CDR(BgL_cdrzd22355zd2_2208);
															if (PAIRP(BgL_cdrzd22360zd2_2210))
																{	/* Expand/initial.scm 640 */
																	if (NULLP(CDR(BgL_cdrzd22360zd2_2210)))
																		{	/* Expand/initial.scm 640 */
																			BgL_s1z00_2193 =
																				CAR(BgL_cdrzd22335zd2_2202);
																			BgL_o1z00_2194 =
																				CAR(BgL_cdrzd22342zd2_2204);
																			BgL_s2z00_2195 =
																				CAR(BgL_cdrzd22349zd2_2206);
																			BgL_o2z00_2196 =
																				CAR(BgL_cdrzd22355zd2_2208);
																			BgL_lz00_2197 =
																				CAR(BgL_cdrzd22360zd2_2210);
																			{	/* Expand/initial.scm 643 */
																				obj_t BgL_s1z00_2219;

																				obj_t BgL_o1z00_2220;

																				obj_t BgL_s2z00_2221;

																				obj_t BgL_o2z00_2222;

																				obj_t BgL_lz00_2223;

																				BgL_s1z00_2219 =
																					PROCEDURE_ENTRY(BgL_ez00_2191)
																					(BgL_ez00_2191, BgL_s1z00_2193,
																					BgL_ez00_2191, BEOA);
																				BgL_o1z00_2220 =
																					PROCEDURE_ENTRY(BgL_ez00_2191)
																					(BgL_ez00_2191, BgL_o1z00_2194,
																					BgL_ez00_2191, BEOA);
																				BgL_s2z00_2221 =
																					PROCEDURE_ENTRY(BgL_ez00_2191)
																					(BgL_ez00_2191, BgL_s2z00_2195,
																					BgL_ez00_2191, BEOA);
																				BgL_o2z00_2222 =
																					PROCEDURE_ENTRY(BgL_ez00_2191)
																					(BgL_ez00_2191, BgL_o2z00_2196,
																					BgL_ez00_2191, BEOA);
																				BgL_lz00_2223 =
																					PROCEDURE_ENTRY(BgL_ez00_2191)
																					(BgL_ez00_2191, BgL_lz00_2197,
																					BgL_ez00_2191, BEOA);
																				if (CBOOL
																					(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
																					{	/* Expand/initial.scm 649 */
																						obj_t BgL_arg4348z00_2224;

																						obj_t BgL_arg4349z00_2225;

																						BgL_arg4348z00_2224 =
																							CNST_TABLE_REF(((long) 153));
																						{	/* Expand/initial.scm 649 */
																							obj_t BgL_list4350z00_2226;

																							{	/* Expand/initial.scm 649 */
																								obj_t BgL_arg4351z00_2227;

																								{	/* Expand/initial.scm 649 */
																									obj_t BgL_arg4352z00_2228;

																									{	/* Expand/initial.scm 649 */
																										obj_t BgL_arg4353z00_2229;

																										{	/* Expand/initial.scm 649 */
																											obj_t BgL_arg4354z00_2230;

																											BgL_arg4354z00_2230 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4353z00_2229 =
																												MAKE_PAIR(BgL_lz00_2223,
																												BgL_arg4354z00_2230);
																										}
																										BgL_arg4352z00_2228 =
																											MAKE_PAIR(BgL_o2z00_2222,
																											BgL_arg4353z00_2229);
																									}
																									BgL_arg4351z00_2227 =
																										MAKE_PAIR(BgL_s2z00_2221,
																										BgL_arg4352z00_2228);
																								}
																								BgL_list4350z00_2226 =
																									MAKE_PAIR(BgL_o1z00_2220,
																									BgL_arg4351z00_2227);
																							}
																							BgL_arg4349z00_2225 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_s1z00_2219,
																								BgL_list4350z00_2226);
																						}
																						return
																							MAKE_PAIR(BgL_arg4348z00_2224,
																							BgL_arg4349z00_2225);
																					}
																				else
																					{	/* Expand/initial.scm 650 */
																						obj_t BgL_arg4355z00_2231;

																						obj_t BgL_arg4356z00_2232;

																						BgL_arg4355z00_2231 =
																							CNST_TABLE_REF(((long) 93));
																						{	/* Expand/initial.scm 650 */
																							obj_t BgL_list4357z00_2233;

																							{	/* Expand/initial.scm 650 */
																								obj_t BgL_arg4358z00_2234;

																								{	/* Expand/initial.scm 650 */
																									obj_t BgL_arg4359z00_2235;

																									{	/* Expand/initial.scm 650 */
																										obj_t BgL_arg4360z00_2236;

																										{	/* Expand/initial.scm 650 */
																											obj_t BgL_arg4361z00_2237;

																											BgL_arg4361z00_2237 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4360z00_2236 =
																												MAKE_PAIR(BgL_lz00_2223,
																												BgL_arg4361z00_2237);
																										}
																										BgL_arg4359z00_2235 =
																											MAKE_PAIR(BgL_o2z00_2222,
																											BgL_arg4360z00_2236);
																									}
																									BgL_arg4358z00_2234 =
																										MAKE_PAIR(BgL_s2z00_2221,
																										BgL_arg4359z00_2235);
																								}
																								BgL_list4357z00_2233 =
																									MAKE_PAIR(BgL_o1z00_2220,
																									BgL_arg4358z00_2234);
																							}
																							BgL_arg4356z00_2232 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_s1z00_2219,
																								BgL_list4357z00_2233);
																						}
																						return
																							MAKE_PAIR(BgL_arg4355z00_2231,
																							BgL_arg4356z00_2232);
																					}
																			}
																		}
																	else
																		{	/* Expand/initial.scm 640 */
																		BgL_tagzd22322zd2_2199:
																			return
																				BGl_errorz00zz__errorz00(BFALSE,
																				BGl_string5627z00zzexpand_installz00,
																				BgL_xz00_2190);
																		}
																}
															else
																{	/* Expand/initial.scm 640 */
																	goto BgL_tagzd22322zd2_2199;
																}
														}
													else
														{	/* Expand/initial.scm 640 */
															goto BgL_tagzd22322zd2_2199;
														}
												}
											else
												{	/* Expand/initial.scm 640 */
													goto BgL_tagzd22322zd2_2199;
												}
										}
									else
										{	/* Expand/initial.scm 640 */
											goto BgL_tagzd22322zd2_2199;
										}
								}
							else
								{	/* Expand/initial.scm 640 */
									goto BgL_tagzd22322zd2_2199;
								}
						}
					else
						{	/* Expand/initial.scm 640 */
							goto BgL_tagzd22322zd2_2199;
						}
				}
			}
		}
	}



/* <anonymous:4302> */
	obj_t BGl_zc3anonymousza34302ze3z83zzexpand_installz00(obj_t BgL_envz00_5264,
		obj_t BgL_xz00_5265, obj_t BgL_ez00_5266)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 628 */
			{
				obj_t BgL_xz00_2137;

				obj_t BgL_ez00_2138;

				BgL_xz00_2137 = BgL_xz00_5265;
				BgL_ez00_2138 = BgL_ez00_5266;
				{
					obj_t BgL_s1z00_2140;

					obj_t BgL_s2z00_2141;

					obj_t BgL_oz00_2142;

					obj_t BgL_s1z00_2144;

					obj_t BgL_s2z00_2145;

					obj_t BgL_oz00_2146;

					obj_t BgL_lz00_2147;

					if (PAIRP(BgL_xz00_2137))
						{	/* Expand/initial.scm 628 */
							obj_t BgL_cdrzd22226zd2_2152;

							BgL_cdrzd22226zd2_2152 = CDR(BgL_xz00_2137);
							if (PAIRP(BgL_cdrzd22226zd2_2152))
								{	/* Expand/initial.scm 628 */
									obj_t BgL_cdrzd22231zd2_2154;

									BgL_cdrzd22231zd2_2154 = CDR(BgL_cdrzd22226zd2_2152);
									if (PAIRP(BgL_cdrzd22231zd2_2154))
										{	/* Expand/initial.scm 628 */
											obj_t BgL_cdrzd22236zd2_2156;

											BgL_cdrzd22236zd2_2156 = CDR(BgL_cdrzd22231zd2_2154);
											if (PAIRP(BgL_cdrzd22236zd2_2156))
												{	/* Expand/initial.scm 628 */
													if (NULLP(CDR(BgL_cdrzd22236zd2_2156)))
														{	/* Expand/initial.scm 628 */
															BgL_s1z00_2140 = CAR(BgL_cdrzd22226zd2_2152);
															BgL_s2z00_2141 = CAR(BgL_cdrzd22231zd2_2154);
															BgL_oz00_2142 = CAR(BgL_cdrzd22236zd2_2156);
															{	/* Expand/initial.scm 631 */
																obj_t BgL_arg4319z00_2174;

																{	/* Expand/initial.scm 631 */
																	obj_t BgL_arg4320z00_2175;

																	obj_t BgL_arg4321z00_2176;

																	BgL_arg4320z00_2175 =
																		CNST_TABLE_REF(((long) 155));
																	{	/* Expand/initial.scm 631 */
																		obj_t BgL_list4322z00_2177;

																		{	/* Expand/initial.scm 631 */
																			obj_t BgL_arg4323z00_2178;

																			{	/* Expand/initial.scm 631 */
																				obj_t BgL_arg4324z00_2179;

																				BgL_arg4324z00_2179 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg4323z00_2178 =
																					MAKE_PAIR(BgL_oz00_2142,
																					BgL_arg4324z00_2179);
																			}
																			BgL_list4322z00_2177 =
																				MAKE_PAIR(BgL_s2z00_2141,
																				BgL_arg4323z00_2178);
																		}
																		BgL_arg4321z00_2176 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_s1z00_2140, BgL_list4322z00_2177);
																	}
																	BgL_arg4319z00_2174 =
																		MAKE_PAIR(BgL_arg4320z00_2175,
																		BgL_arg4321z00_2176);
																}
																return
																	PROCEDURE_ENTRY(BgL_ez00_2138) (BgL_ez00_2138,
																	BgL_arg4319z00_2174, BgL_ez00_2138, BEOA);
															}
														}
													else
														{	/* Expand/initial.scm 628 */
															obj_t BgL_cdrzd22263zd2_2163;

															BgL_cdrzd22263zd2_2163 =
																CDR(BgL_cdrzd22226zd2_2152);
															{	/* Expand/initial.scm 628 */
																obj_t BgL_cdrzd22272zd2_2164;

																BgL_cdrzd22272zd2_2164 =
																	CDR(BgL_cdrzd22263zd2_2163);
																{	/* Expand/initial.scm 628 */
																	obj_t BgL_cdrzd22279zd2_2165;

																	BgL_cdrzd22279zd2_2165 =
																		CDR(BgL_cdrzd22272zd2_2164);
																	if (PAIRP(BgL_cdrzd22279zd2_2165))
																		{	/* Expand/initial.scm 628 */
																			if (NULLP(CDR(BgL_cdrzd22279zd2_2165)))
																				{	/* Expand/initial.scm 628 */
																					BgL_s1z00_2144 =
																						CAR(BgL_cdrzd22226zd2_2152);
																					BgL_s2z00_2145 =
																						CAR(BgL_cdrzd22263zd2_2163);
																					BgL_oz00_2146 =
																						CAR(BgL_cdrzd22272zd2_2164);
																					BgL_lz00_2147 =
																						CAR(BgL_cdrzd22279zd2_2165);
																					{	/* Expand/initial.scm 633 */
																						obj_t BgL_arg4325z00_2180;

																						{	/* Expand/initial.scm 633 */
																							obj_t BgL_arg4326z00_2181;

																							obj_t BgL_arg4327z00_2182;

																							BgL_arg4326z00_2181 =
																								CNST_TABLE_REF(((long) 154));
																							{	/* Expand/initial.scm 633 */
																								obj_t BgL_list4328z00_2183;

																								{	/* Expand/initial.scm 633 */
																									obj_t BgL_arg4329z00_2184;

																									{	/* Expand/initial.scm 633 */
																										obj_t BgL_arg4330z00_2185;

																										{	/* Expand/initial.scm 633 */
																											obj_t BgL_arg4331z00_2186;

																											BgL_arg4331z00_2186 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4330z00_2185 =
																												MAKE_PAIR(BgL_lz00_2147,
																												BgL_arg4331z00_2186);
																										}
																										BgL_arg4329z00_2184 =
																											MAKE_PAIR(BgL_oz00_2146,
																											BgL_arg4330z00_2185);
																									}
																									BgL_list4328z00_2183 =
																										MAKE_PAIR(BgL_s2z00_2145,
																										BgL_arg4329z00_2184);
																								}
																								BgL_arg4327z00_2182 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_s1z00_2144,
																									BgL_list4328z00_2183);
																							}
																							BgL_arg4325z00_2180 =
																								MAKE_PAIR(BgL_arg4326z00_2181,
																								BgL_arg4327z00_2182);
																						}
																						return
																							PROCEDURE_ENTRY(BgL_ez00_2138)
																							(BgL_ez00_2138,
																							BgL_arg4325z00_2180,
																							BgL_ez00_2138, BEOA);
																					}
																				}
																			else
																				{	/* Expand/initial.scm 628 */
																				BgL_tagzd22216zd2_2149:
																					return
																						BGl_errorz00zz__errorz00(BFALSE,
																						BGl_string5628z00zzexpand_installz00,
																						BgL_xz00_2137);
																				}
																		}
																	else
																		{	/* Expand/initial.scm 628 */
																			goto BgL_tagzd22216zd2_2149;
																		}
																}
															}
														}
												}
											else
												{	/* Expand/initial.scm 628 */
													goto BgL_tagzd22216zd2_2149;
												}
										}
									else
										{	/* Expand/initial.scm 628 */
											goto BgL_tagzd22216zd2_2149;
										}
								}
							else
								{	/* Expand/initial.scm 628 */
									goto BgL_tagzd22216zd2_2149;
								}
						}
					else
						{	/* Expand/initial.scm 628 */
							goto BgL_tagzd22216zd2_2149;
						}
				}
			}
		}
	}



/* <anonymous:4267> */
	obj_t BGl_zc3anonymousza34267ze3z83zzexpand_installz00(obj_t BgL_envz00_5267,
		obj_t BgL_xz00_5268, obj_t BgL_ez00_5269)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 616 */
			{
				obj_t BgL_xz00_2084;

				obj_t BgL_ez00_2085;

				BgL_xz00_2084 = BgL_xz00_5268;
				BgL_ez00_2085 = BgL_ez00_5269;
				{
					obj_t BgL_s1z00_2087;

					obj_t BgL_s2z00_2088;

					obj_t BgL_oz00_2089;

					obj_t BgL_s1z00_2091;

					obj_t BgL_s2z00_2092;

					obj_t BgL_oz00_2093;

					obj_t BgL_lz00_2094;

					if (PAIRP(BgL_xz00_2084))
						{	/* Expand/initial.scm 616 */
							obj_t BgL_cdrzd22119zd2_2099;

							BgL_cdrzd22119zd2_2099 = CDR(BgL_xz00_2084);
							if (PAIRP(BgL_cdrzd22119zd2_2099))
								{	/* Expand/initial.scm 616 */
									obj_t BgL_cdrzd22124zd2_2101;

									BgL_cdrzd22124zd2_2101 = CDR(BgL_cdrzd22119zd2_2099);
									if (PAIRP(BgL_cdrzd22124zd2_2101))
										{	/* Expand/initial.scm 616 */
											obj_t BgL_cdrzd22129zd2_2103;

											BgL_cdrzd22129zd2_2103 = CDR(BgL_cdrzd22124zd2_2101);
											if (PAIRP(BgL_cdrzd22129zd2_2103))
												{	/* Expand/initial.scm 616 */
													if (NULLP(CDR(BgL_cdrzd22129zd2_2103)))
														{	/* Expand/initial.scm 616 */
															BgL_s1z00_2087 = CAR(BgL_cdrzd22119zd2_2099);
															BgL_s2z00_2088 = CAR(BgL_cdrzd22124zd2_2101);
															BgL_oz00_2089 = CAR(BgL_cdrzd22129zd2_2103);
															{	/* Expand/initial.scm 619 */
																obj_t BgL_arg4286z00_2121;

																{	/* Expand/initial.scm 619 */
																	obj_t BgL_arg4287z00_2122;

																	obj_t BgL_arg4288z00_2123;

																	BgL_arg4287z00_2122 =
																		CNST_TABLE_REF(((long) 157));
																	{	/* Expand/initial.scm 619 */
																		obj_t BgL_list4289z00_2124;

																		{	/* Expand/initial.scm 619 */
																			obj_t BgL_arg4291z00_2125;

																			{	/* Expand/initial.scm 619 */
																				obj_t BgL_arg4292z00_2126;

																				BgL_arg4292z00_2126 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg4291z00_2125 =
																					MAKE_PAIR(BgL_oz00_2089,
																					BgL_arg4292z00_2126);
																			}
																			BgL_list4289z00_2124 =
																				MAKE_PAIR(BgL_s2z00_2088,
																				BgL_arg4291z00_2125);
																		}
																		BgL_arg4288z00_2123 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_s1z00_2087, BgL_list4289z00_2124);
																	}
																	BgL_arg4286z00_2121 =
																		MAKE_PAIR(BgL_arg4287z00_2122,
																		BgL_arg4288z00_2123);
																}
																return
																	PROCEDURE_ENTRY(BgL_ez00_2085) (BgL_ez00_2085,
																	BgL_arg4286z00_2121, BgL_ez00_2085, BEOA);
															}
														}
													else
														{	/* Expand/initial.scm 616 */
															obj_t BgL_cdrzd22156zd2_2110;

															BgL_cdrzd22156zd2_2110 =
																CDR(BgL_cdrzd22119zd2_2099);
															{	/* Expand/initial.scm 616 */
																obj_t BgL_cdrzd22165zd2_2111;

																BgL_cdrzd22165zd2_2111 =
																	CDR(BgL_cdrzd22156zd2_2110);
																{	/* Expand/initial.scm 616 */
																	obj_t BgL_cdrzd22172zd2_2112;

																	BgL_cdrzd22172zd2_2112 =
																		CDR(BgL_cdrzd22165zd2_2111);
																	if (PAIRP(BgL_cdrzd22172zd2_2112))
																		{	/* Expand/initial.scm 616 */
																			if (NULLP(CDR(BgL_cdrzd22172zd2_2112)))
																				{	/* Expand/initial.scm 616 */
																					BgL_s1z00_2091 =
																						CAR(BgL_cdrzd22119zd2_2099);
																					BgL_s2z00_2092 =
																						CAR(BgL_cdrzd22156zd2_2110);
																					BgL_oz00_2093 =
																						CAR(BgL_cdrzd22165zd2_2111);
																					BgL_lz00_2094 =
																						CAR(BgL_cdrzd22172zd2_2112);
																					{	/* Expand/initial.scm 621 */
																						obj_t BgL_arg4293z00_2127;

																						{	/* Expand/initial.scm 621 */
																							obj_t BgL_arg4294z00_2128;

																							obj_t BgL_arg4295z00_2129;

																							BgL_arg4294z00_2128 =
																								CNST_TABLE_REF(((long) 156));
																							{	/* Expand/initial.scm 621 */
																								obj_t BgL_list4296z00_2130;

																								{	/* Expand/initial.scm 621 */
																									obj_t BgL_arg4297z00_2131;

																									{	/* Expand/initial.scm 621 */
																										obj_t BgL_arg4298z00_2132;

																										{	/* Expand/initial.scm 621 */
																											obj_t BgL_arg4299z00_2133;

																											BgL_arg4299z00_2133 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4298z00_2132 =
																												MAKE_PAIR(BgL_lz00_2094,
																												BgL_arg4299z00_2133);
																										}
																										BgL_arg4297z00_2131 =
																											MAKE_PAIR(BgL_oz00_2093,
																											BgL_arg4298z00_2132);
																									}
																									BgL_list4296z00_2130 =
																										MAKE_PAIR(BgL_s2z00_2092,
																										BgL_arg4297z00_2131);
																								}
																								BgL_arg4295z00_2129 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_s1z00_2091,
																									BgL_list4296z00_2130);
																							}
																							BgL_arg4293z00_2127 =
																								MAKE_PAIR(BgL_arg4294z00_2128,
																								BgL_arg4295z00_2129);
																						}
																						return
																							PROCEDURE_ENTRY(BgL_ez00_2085)
																							(BgL_ez00_2085,
																							BgL_arg4293z00_2127,
																							BgL_ez00_2085, BEOA);
																					}
																				}
																			else
																				{	/* Expand/initial.scm 616 */
																				BgL_tagzd22109zd2_2096:
																					return
																						BGl_errorz00zz__errorz00(BFALSE,
																						BGl_string5629z00zzexpand_installz00,
																						BgL_xz00_2084);
																				}
																		}
																	else
																		{	/* Expand/initial.scm 616 */
																			goto BgL_tagzd22109zd2_2096;
																		}
																}
															}
														}
												}
											else
												{	/* Expand/initial.scm 616 */
													goto BgL_tagzd22109zd2_2096;
												}
										}
									else
										{	/* Expand/initial.scm 616 */
											goto BgL_tagzd22109zd2_2096;
										}
								}
							else
								{	/* Expand/initial.scm 616 */
									goto BgL_tagzd22109zd2_2096;
								}
						}
					else
						{	/* Expand/initial.scm 616 */
							goto BgL_tagzd22109zd2_2096;
						}
				}
			}
		}
	}



/* <anonymous:4236> */
	obj_t BGl_zc3anonymousza34236ze3z83zzexpand_installz00(obj_t BgL_envz00_5270,
		obj_t BgL_xz00_5271, obj_t BgL_ez00_5272)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 601 */
			{
				obj_t BgL_xz00_2033;

				obj_t BgL_ez00_2034;

				BgL_xz00_2033 = BgL_xz00_5271;
				BgL_ez00_2034 = BgL_ez00_5272;
				{
					obj_t BgL_sz00_2036;

					obj_t BgL_minz00_2037;

					obj_t BgL_maxz00_2038;

					if (PAIRP(BgL_xz00_2033))
						{	/* Expand/initial.scm 601 */
							obj_t BgL_cdrzd22091zd2_2043;

							BgL_cdrzd22091zd2_2043 = CDR(BgL_xz00_2033);
							if (PAIRP(BgL_cdrzd22091zd2_2043))
								{	/* Expand/initial.scm 601 */
									obj_t BgL_cdrzd22096zd2_2045;

									BgL_cdrzd22096zd2_2045 = CDR(BgL_cdrzd22091zd2_2043);
									if (PAIRP(BgL_cdrzd22096zd2_2045))
										{	/* Expand/initial.scm 601 */
											obj_t BgL_cdrzd22101zd2_2047;

											BgL_cdrzd22101zd2_2047 = CDR(BgL_cdrzd22096zd2_2045);
											if (PAIRP(BgL_cdrzd22101zd2_2047))
												{	/* Expand/initial.scm 601 */
													if (NULLP(CDR(BgL_cdrzd22101zd2_2047)))
														{	/* Expand/initial.scm 601 */
															BgL_sz00_2036 = CAR(BgL_cdrzd22091zd2_2043);
															BgL_minz00_2037 = CAR(BgL_cdrzd22096zd2_2045);
															BgL_maxz00_2038 = CAR(BgL_cdrzd22101zd2_2047);
															{	/* Expand/initial.scm 604 */
																obj_t BgL_sz00_2054;

																obj_t BgL_minz00_2055;

																obj_t BgL_maxz00_2056;

																BgL_sz00_2054 =
																	PROCEDURE_ENTRY(BgL_ez00_2034) (BgL_ez00_2034,
																	BgL_sz00_2036, BgL_ez00_2034, BEOA);
																BgL_minz00_2055 =
																	PROCEDURE_ENTRY(BgL_ez00_2034) (BgL_ez00_2034,
																	BgL_minz00_2037, BgL_ez00_2034, BEOA);
																BgL_maxz00_2056 =
																	PROCEDURE_ENTRY(BgL_ez00_2034) (BgL_ez00_2034,
																	BgL_maxz00_2038, BgL_ez00_2034, BEOA);
																if (CBOOL
																	(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
																	{	/* Expand/initial.scm 608 */
																		obj_t BgL_arg4246z00_2057;

																		obj_t BgL_arg4247z00_2058;

																		BgL_arg4246z00_2057 =
																			CNST_TABLE_REF(((long) 158));
																		{	/* Expand/initial.scm 608 */
																			obj_t BgL_list4248z00_2059;

																			{	/* Expand/initial.scm 608 */
																				obj_t BgL_arg4249z00_2060;

																				{	/* Expand/initial.scm 608 */
																					obj_t BgL_arg4251z00_2061;

																					BgL_arg4251z00_2061 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4249z00_2060 =
																						MAKE_PAIR(BgL_maxz00_2056,
																						BgL_arg4251z00_2061);
																				}
																				BgL_list4248z00_2059 =
																					MAKE_PAIR(BgL_minz00_2055,
																					BgL_arg4249z00_2060);
																			}
																			BgL_arg4247z00_2058 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_sz00_2054, BgL_list4248z00_2059);
																		}
																		return
																			MAKE_PAIR(BgL_arg4246z00_2057,
																			BgL_arg4247z00_2058);
																	}
																else
																	{	/* Expand/initial.scm 609 */
																		obj_t BgL_arg4252z00_2062;

																		obj_t BgL_arg4253z00_2063;

																		BgL_arg4252z00_2062 =
																			CNST_TABLE_REF(((long) 90));
																		{	/* Expand/initial.scm 609 */
																			obj_t BgL_list4254z00_2064;

																			{	/* Expand/initial.scm 609 */
																				obj_t BgL_arg4255z00_2065;

																				{	/* Expand/initial.scm 609 */
																					obj_t BgL_arg4257z00_2066;

																					BgL_arg4257z00_2066 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4255z00_2065 =
																						MAKE_PAIR(BgL_maxz00_2056,
																						BgL_arg4257z00_2066);
																				}
																				BgL_list4254z00_2064 =
																					MAKE_PAIR(BgL_minz00_2055,
																					BgL_arg4255z00_2065);
																			}
																			BgL_arg4253z00_2063 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_sz00_2054, BgL_list4254z00_2064);
																		}
																		return
																			MAKE_PAIR(BgL_arg4252z00_2062,
																			BgL_arg4253z00_2063);
																	}
															}
														}
													else
														{	/* Expand/initial.scm 601 */
														BgL_tagzd22082zd2_2040:
															if (NULLP(BgL_xz00_2033))
																{	/* Expand/initial.scm 611 */
																	return BNIL;
																}
															else
																{	/* Expand/initial.scm 611 */
																	obj_t BgL_head3324z00_2069;

																	BgL_head3324z00_2069 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3322z00_2071;

																		obj_t BgL_tail3325z00_2072;

																		BgL_l3322z00_2071 = BgL_xz00_2033;
																		BgL_tail3325z00_2072 = BgL_head3324z00_2069;
																	BgL_zc3anonymousza34259ze3z83_2073:
																		if (NULLP(BgL_l3322z00_2071))
																			{	/* Expand/initial.scm 611 */
																				return CDR(BgL_head3324z00_2069);
																			}
																		else
																			{	/* Expand/initial.scm 611 */
																				obj_t BgL_newtail3326z00_2075;

																				{	/* Expand/initial.scm 611 */
																					obj_t BgL_arg4262z00_2077;

																					{	/* Expand/initial.scm 611 */
																						obj_t BgL_xz00_2079;

																						BgL_xz00_2079 =
																							CAR(BgL_l3322z00_2071);
																						BgL_arg4262z00_2077 =
																							PROCEDURE_ENTRY(BgL_ez00_2034)
																							(BgL_ez00_2034, BgL_xz00_2079,
																							BgL_ez00_2034, BEOA);
																					}
																					BgL_newtail3326z00_2075 =
																						MAKE_PAIR(BgL_arg4262z00_2077,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3325z00_2072,
																					BgL_newtail3326z00_2075);
																				{
																					obj_t BgL_tail3325z00_7069;

																					obj_t BgL_l3322z00_7067;

																					BgL_l3322z00_7067 =
																						CDR(BgL_l3322z00_2071);
																					BgL_tail3325z00_7069 =
																						BgL_newtail3326z00_2075;
																					BgL_tail3325z00_2072 =
																						BgL_tail3325z00_7069;
																					BgL_l3322z00_2071 = BgL_l3322z00_7067;
																					goto
																						BgL_zc3anonymousza34259ze3z83_2073;
																				}
																			}
																	}
																}
														}
												}
											else
												{	/* Expand/initial.scm 601 */
													goto BgL_tagzd22082zd2_2040;
												}
										}
									else
										{	/* Expand/initial.scm 601 */
											goto BgL_tagzd22082zd2_2040;
										}
								}
							else
								{	/* Expand/initial.scm 601 */
									goto BgL_tagzd22082zd2_2040;
								}
						}
					else
						{	/* Expand/initial.scm 601 */
							goto BgL_tagzd22082zd2_2040;
						}
				}
			}
		}
	}



/* <anonymous:4233> */
	obj_t BGl_zc3anonymousza34233ze3z83zzexpand_installz00(obj_t BgL_envz00_5273,
		obj_t BgL_xz00_5274, obj_t BgL_ez00_5275)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 595 */
			{
				obj_t BgL_xz00_2027;

				obj_t BgL_ez00_2028;

				BgL_xz00_2027 = BgL_xz00_5274;
				BgL_ez00_2028 = BgL_ez00_5275;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_2027,
					CNST_TABLE_REF(((long) 159)), BGl_string5630z00zzexpand_installz00,
					BgL_ez00_2028);
		}}
	}



/* <anonymous:4132> */
	obj_t BGl_zc3anonymousza34132ze3z83zzexpand_installz00(obj_t BgL_envz00_5276,
		obj_t BgL_xz00_5277, obj_t BgL_ez00_5278)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 581 */
			{
				obj_t BgL_xz00_1885;

				obj_t BgL_ez00_1886;

				BgL_xz00_1885 = BgL_xz00_5277;
				BgL_ez00_1886 = BgL_ez00_5278;
				{
					obj_t BgL_sym1z00_1890;

					obj_t BgL_sym2z00_1891;

					obj_t BgL_sym1z00_1893;

					obj_t BgL_sym2z00_1894;

					if (PAIRP(BgL_xz00_1885))
						{	/* Expand/initial.scm 581 */
							obj_t BgL_cdrzd21902zd2_1899;

							BgL_cdrzd21902zd2_1899 = CDR(BgL_xz00_1885);
							if (PAIRP(BgL_cdrzd21902zd2_1899))
								{	/* Expand/initial.scm 581 */
									if (NULLP(CDR(BgL_cdrzd21902zd2_1899)))
										{	/* Expand/initial.scm 581 */
											obj_t BgL_arg4136z00_1902;

											BgL_arg4136z00_1902 = CAR(BgL_cdrzd21902zd2_1899);
											return
												PROCEDURE_ENTRY(BgL_ez00_1886) (BgL_ez00_1886,
												BgL_arg4136z00_1902, BgL_ez00_1886, BEOA);
										}
									else
										{	/* Expand/initial.scm 581 */
											obj_t BgL_carzd21915zd2_1904;

											obj_t BgL_cdrzd21916zd2_1905;

											BgL_carzd21915zd2_1904 = CAR(BgL_cdrzd21902zd2_1899);
											BgL_cdrzd21916zd2_1905 = CDR(BgL_cdrzd21902zd2_1899);
											if (PAIRP(BgL_carzd21915zd2_1904))
												{	/* Expand/initial.scm 581 */
													obj_t BgL_cdrzd21919zd2_1907;

													BgL_cdrzd21919zd2_1907 = CDR(BgL_carzd21915zd2_1904);
													if (
														(CAR(BgL_carzd21915zd2_1904) ==
															CNST_TABLE_REF(((long) 130))))
														{	/* Expand/initial.scm 581 */
															if (PAIRP(BgL_cdrzd21919zd2_1907))
																{	/* Expand/initial.scm 581 */
																	if (NULLP(CDR(BgL_cdrzd21919zd2_1907)))
																		{	/* Expand/initial.scm 581 */
																			if (PAIRP(BgL_cdrzd21916zd2_1905))
																				{	/* Expand/initial.scm 581 */
																					obj_t BgL_carzd21925zd2_1912;

																					BgL_carzd21925zd2_1912 =
																						CAR(BgL_cdrzd21916zd2_1905);
																					if (PAIRP(BgL_carzd21925zd2_1912))
																						{	/* Expand/initial.scm 581 */
																							obj_t BgL_cdrzd21929zd2_1914;

																							BgL_cdrzd21929zd2_1914 =
																								CDR(BgL_carzd21925zd2_1912);
																							if (
																								(CAR(BgL_carzd21925zd2_1912) ==
																									CNST_TABLE_REF(((long) 130))))
																								{	/* Expand/initial.scm 581 */
																									if (PAIRP
																										(BgL_cdrzd21929zd2_1914))
																										{	/* Expand/initial.scm 581 */
																											if (NULLP(CDR
																													(BgL_cdrzd21929zd2_1914)))
																												{	/* Expand/initial.scm 581 */
																													if (NULLP(CDR
																															(BgL_cdrzd21916zd2_1905)))
																														{	/* Expand/initial.scm 581 */
																															BgL_sym1z00_1890 =
																																CAR
																																(BgL_cdrzd21919zd2_1907);
																															BgL_sym2z00_1891 =
																																CAR
																																(BgL_cdrzd21929zd2_1914);
																															{	/* Expand/initial.scm 586 */
																																obj_t
																																	BgL_arg4195z00_1981;
																																obj_t
																																	BgL_arg4196z00_1982;
																																BgL_arg4195z00_1981
																																	=
																																	CNST_TABLE_REF
																																	(((long)
																																		130));
																																{	/* Expand/initial.scm 586 */
																																	obj_t
																																		BgL_arg4197z00_1983;
																																	{	/* Expand/initial.scm 586 */
																																		obj_t
																																			BgL_arg4200z00_1986;
																																		{	/* Expand/initial.scm 586 */
																																			obj_t
																																				BgL_arg4201z00_1987;
																																			obj_t
																																				BgL_arg4202z00_1988;
																																			{	/* Expand/initial.scm 586 */
																																				obj_t
																																					BgL_res5408z00_4548;
																																				{	/* Expand/initial.scm 586 */
																																					obj_t
																																						BgL_symbolz00_4546;
																																					BgL_symbolz00_4546
																																						=
																																						BgL_sym1z00_1890;
																																					{	/* Expand/initial.scm 586 */
																																						obj_t
																																							BgL_arg2063z00_4547;
																																						BgL_arg2063z00_4547
																																							=
																																							SYMBOL_TO_STRING
																																							(BgL_symbolz00_4546);
																																						BgL_res5408z00_4548
																																							=
																																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																							(BgL_arg2063z00_4547);
																																				}}
																																				BgL_arg4201z00_1987
																																					=
																																					BgL_res5408z00_4548;
																																			}
																																			{	/* Expand/initial.scm 586 */
																																				obj_t
																																					BgL_res5409z00_4551;
																																				{	/* Expand/initial.scm 586 */
																																					obj_t
																																						BgL_symbolz00_4549;
																																					BgL_symbolz00_4549
																																						=
																																						BgL_sym2z00_1891;
																																					{	/* Expand/initial.scm 586 */
																																						obj_t
																																							BgL_arg2063z00_4550;
																																						BgL_arg2063z00_4550
																																							=
																																							SYMBOL_TO_STRING
																																							(BgL_symbolz00_4549);
																																						BgL_res5409z00_4551
																																							=
																																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																							(BgL_arg2063z00_4550);
																																				}}
																																				BgL_arg4202z00_1988
																																					=
																																					BgL_res5409z00_4551;
																																			}
																																			{	/* Expand/initial.scm 586 */
																																				obj_t
																																					BgL_list4203z00_1989;
																																				{	/* Expand/initial.scm 586 */
																																					obj_t
																																						BgL_arg4204z00_1990;
																																					BgL_arg4204z00_1990
																																						=
																																						MAKE_PAIR
																																						(BgL_arg4202z00_1988,
																																						BNIL);
																																					BgL_list4203z00_1989
																																						=
																																						MAKE_PAIR
																																						(BgL_arg4201z00_1987,
																																						BgL_arg4204z00_1990);
																																				}
																																				BgL_arg4200z00_1986
																																					=
																																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																					(BgL_list4203z00_1989);
																																		}}
																																		BgL_arg4197z00_1983
																																			=
																																			string_to_symbol
																																			(BSTRING_TO_STRING
																																			(BgL_arg4200z00_1986));
																																	}
																																	{	/* Expand/initial.scm 586 */
																																		obj_t
																																			BgL_list4199z00_1985;
																																		BgL_list4199z00_1985
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg4196z00_1982
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg4197z00_1983,
																																			BgL_list4199z00_1985);
																																}}
																																return
																																	MAKE_PAIR
																																	(BgL_arg4195z00_1981,
																																	BgL_arg4196z00_1982);
																															}
																														}
																													else
																														{	/* Expand/initial.scm 581 */
																														BgL_tagzd21896zd2_1896:
																															if (NULLP
																																(BgL_xz00_1885))
																																{	/* Expand/initial.scm 592 */
																																	return BNIL;
																																}
																															else
																																{	/* Expand/initial.scm 592 */
																																	obj_t
																																		BgL_head3319z00_2012;
																																	BgL_head3319z00_2012
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	{
																																		obj_t
																																			BgL_l3317z00_2014;
																																		obj_t
																																			BgL_tail3320z00_2015;
																																		BgL_l3317z00_2014
																																			=
																																			BgL_xz00_1885;
																																		BgL_tail3320z00_2015
																																			=
																																			BgL_head3319z00_2012;
																																	BgL_zc3anonymousza34225ze3z83_2016:
																																		if (NULLP
																																			(BgL_l3317z00_2014))
																																			{	/* Expand/initial.scm 592 */
																																				return
																																					CDR
																																					(BgL_head3319z00_2012);
																																			}
																																		else
																																			{	/* Expand/initial.scm 592 */
																																				obj_t
																																					BgL_newtail3321z00_2018;
																																				{	/* Expand/initial.scm 592 */
																																					obj_t
																																						BgL_arg4229z00_2020;
																																					{	/* Expand/initial.scm 592 */
																																						obj_t
																																							BgL_xz00_2022;
																																						BgL_xz00_2022
																																							=
																																							CAR
																																							(BgL_l3317z00_2014);
																																						BgL_arg4229z00_2020
																																							=
																																							PROCEDURE_ENTRY
																																							(BgL_ez00_1886)
																																							(BgL_ez00_1886,
																																							BgL_xz00_2022,
																																							BgL_ez00_1886,
																																							BEOA);
																																					}
																																					BgL_newtail3321z00_2018
																																						=
																																						MAKE_PAIR
																																						(BgL_arg4229z00_2020,
																																						BNIL);
																																				}
																																				SET_CDR
																																					(BgL_tail3320z00_2015,
																																					BgL_newtail3321z00_2018);
																																				{
																																					obj_t
																																						BgL_tail3320z00_7143;
																																					obj_t
																																						BgL_l3317z00_7141;
																																					BgL_l3317z00_7141
																																						=
																																						CDR
																																						(BgL_l3317z00_2014);
																																					BgL_tail3320z00_7143
																																						=
																																						BgL_newtail3321z00_2018;
																																					BgL_tail3320z00_2015
																																						=
																																						BgL_tail3320z00_7143;
																																					BgL_l3317z00_2014
																																						=
																																						BgL_l3317z00_7141;
																																					goto
																																						BgL_zc3anonymousza34225ze3z83_2016;
																																				}
																																			}
																																	}
																																}
																														}
																												}
																											else
																												{	/* Expand/initial.scm 581 */
																													obj_t
																														BgL_cdrzd21943zd2_1922;
																													BgL_cdrzd21943zd2_1922
																														=
																														CDR(BgL_xz00_1885);
																													{	/* Expand/initial.scm 581 */
																														obj_t
																															BgL_cdrzd21947zd2_1923;
																														BgL_cdrzd21947zd2_1923
																															=
																															CDR
																															(BgL_cdrzd21943zd2_1922);
																														if (NULLP(CDR
																																(BgL_cdrzd21947zd2_1923)))
																															{	/* Expand/initial.scm 581 */
																																BgL_sym1z00_1893
																																	=
																																	CAR
																																	(BgL_cdrzd21943zd2_1922);
																																BgL_sym2z00_1894
																																	=
																																	CAR
																																	(BgL_cdrzd21947zd2_1923);
																															BgL_tagzd21895zd2_1895:
																																{	/* Expand/initial.scm 588 */
																																	obj_t
																																		BgL_arg4205z00_1991;
																																	{	/* Expand/initial.scm 588 */
																																		obj_t
																																			BgL_arg4206z00_1992;
																																		obj_t
																																			BgL_arg4207z00_1993;
																																		BgL_arg4206z00_1992
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				160));
																																		{	/* Expand/initial.scm 589 */
																																			obj_t
																																				BgL_arg4208z00_1994;
																																			{	/* Expand/initial.scm 589 */
																																				obj_t
																																					BgL_arg4211z00_1997;
																																				obj_t
																																					BgL_arg4212z00_1998;
																																				BgL_arg4211z00_1997
																																					=
																																					CNST_TABLE_REF
																																					(((long) 88));
																																				{	/* Expand/initial.scm 589 */
																																					obj_t
																																						BgL_arg4213z00_1999;
																																					obj_t
																																						BgL_arg4214z00_2000;
																																					{	/* Expand/initial.scm 589 */
																																						obj_t
																																							BgL_arg4218z00_2004;
																																						obj_t
																																							BgL_arg4219z00_2005;
																																						BgL_arg4218z00_2004
																																							=
																																							CNST_TABLE_REF
																																							(((long) 161));
																																						{	/* Expand/initial.scm 589 */
																																							obj_t
																																								BgL_list4220z00_2006;
																																							BgL_list4220z00_2006
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_arg4219z00_2005
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_sym1z00_1893,
																																								BgL_list4220z00_2006);
																																						}
																																						BgL_arg4213z00_1999
																																							=
																																							MAKE_PAIR
																																							(BgL_arg4218z00_2004,
																																							BgL_arg4219z00_2005);
																																					}
																																					{	/* Expand/initial.scm 589 */
																																						obj_t
																																							BgL_arg4221z00_2007;
																																						obj_t
																																							BgL_arg4222z00_2008;
																																						BgL_arg4221z00_2007
																																							=
																																							CNST_TABLE_REF
																																							(((long) 161));
																																						{	/* Expand/initial.scm 589 */
																																							obj_t
																																								BgL_list4223z00_2009;
																																							BgL_list4223z00_2009
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_arg4222z00_2008
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_sym2z00_1894,
																																								BgL_list4223z00_2009);
																																						}
																																						BgL_arg4214z00_2000
																																							=
																																							MAKE_PAIR
																																							(BgL_arg4221z00_2007,
																																							BgL_arg4222z00_2008);
																																					}
																																					{	/* Expand/initial.scm 589 */
																																						obj_t
																																							BgL_list4216z00_2002;
																																						{	/* Expand/initial.scm 589 */
																																							obj_t
																																								BgL_arg4217z00_2003;
																																							BgL_arg4217z00_2003
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_list4216z00_2002
																																								=
																																								MAKE_PAIR
																																								(BgL_arg4214z00_2000,
																																								BgL_arg4217z00_2003);
																																						}
																																						BgL_arg4212z00_1998
																																							=
																																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_arg4213z00_1999,
																																							BgL_list4216z00_2002);
																																				}}
																																				BgL_arg4208z00_1994
																																					=
																																					MAKE_PAIR
																																					(BgL_arg4211z00_1997,
																																					BgL_arg4212z00_1998);
																																			}
																																			{	/* Expand/initial.scm 588 */
																																				obj_t
																																					BgL_list4210z00_1996;
																																				BgL_list4210z00_1996
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_arg4207z00_1993
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg4208z00_1994,
																																					BgL_list4210z00_1996);
																																		}}
																																		BgL_arg4205z00_1991
																																			=
																																			MAKE_PAIR
																																			(BgL_arg4206z00_1992,
																																			BgL_arg4207z00_1993);
																																	}
																																	return
																																		PROCEDURE_ENTRY
																																		(BgL_ez00_1886)
																																		(BgL_ez00_1886,
																																		BgL_arg4205z00_1991,
																																		BgL_ez00_1886,
																																		BEOA);
																																}
																															}
																														else
																															{	/* Expand/initial.scm 581 */
																																goto
																																	BgL_tagzd21896zd2_1896;
																															}
																													}
																												}
																										}
																									else
																										{	/* Expand/initial.scm 581 */
																											obj_t
																												BgL_cdrzd21958zd2_1929;
																											BgL_cdrzd21958zd2_1929 =
																												CDR(BgL_xz00_1885);
																											{	/* Expand/initial.scm 581 */
																												obj_t
																													BgL_cdrzd21962zd2_1930;
																												BgL_cdrzd21962zd2_1930 =
																													CDR
																													(BgL_cdrzd21958zd2_1929);
																												if (NULLP(CDR
																														(BgL_cdrzd21962zd2_1930)))
																													{
																														obj_t
																															BgL_sym2z00_7177;
																														obj_t
																															BgL_sym1z00_7175;
																														BgL_sym1z00_7175 =
																															CAR
																															(BgL_cdrzd21958zd2_1929);
																														BgL_sym2z00_7177 =
																															CAR
																															(BgL_cdrzd21962zd2_1930);
																														BgL_sym2z00_1894 =
																															BgL_sym2z00_7177;
																														BgL_sym1z00_1893 =
																															BgL_sym1z00_7175;
																														goto
																															BgL_tagzd21895zd2_1895;
																													}
																												else
																													{	/* Expand/initial.scm 581 */
																														goto
																															BgL_tagzd21896zd2_1896;
																													}
																											}
																										}
																								}
																							else
																								{	/* Expand/initial.scm 581 */
																									obj_t BgL_cdrzd21973zd2_1935;

																									BgL_cdrzd21973zd2_1935 =
																										CDR(BgL_xz00_1885);
																									{	/* Expand/initial.scm 581 */
																										obj_t
																											BgL_cdrzd21977zd2_1936;
																										BgL_cdrzd21977zd2_1936 =
																											CDR
																											(BgL_cdrzd21973zd2_1935);
																										if (NULLP(CDR
																												(BgL_cdrzd21977zd2_1936)))
																											{
																												obj_t BgL_sym2z00_7186;

																												obj_t BgL_sym1z00_7184;

																												BgL_sym1z00_7184 =
																													CAR
																													(BgL_cdrzd21973zd2_1935);
																												BgL_sym2z00_7186 =
																													CAR
																													(BgL_cdrzd21977zd2_1936);
																												BgL_sym2z00_1894 =
																													BgL_sym2z00_7186;
																												BgL_sym1z00_1893 =
																													BgL_sym1z00_7184;
																												goto
																													BgL_tagzd21895zd2_1895;
																											}
																										else
																											{	/* Expand/initial.scm 581 */
																												goto
																													BgL_tagzd21896zd2_1896;
																											}
																									}
																								}
																						}
																					else
																						{	/* Expand/initial.scm 581 */
																							obj_t BgL_cdrzd21988zd2_1943;

																							BgL_cdrzd21988zd2_1943 =
																								CDR(BgL_xz00_1885);
																							{	/* Expand/initial.scm 581 */
																								obj_t BgL_cdrzd21992zd2_1944;

																								BgL_cdrzd21992zd2_1944 =
																									CDR(BgL_cdrzd21988zd2_1943);
																								if (NULLP(CDR
																										(BgL_cdrzd21992zd2_1944)))
																									{
																										obj_t BgL_sym2z00_7195;

																										obj_t BgL_sym1z00_7193;

																										BgL_sym1z00_7193 =
																											CAR
																											(BgL_cdrzd21988zd2_1943);
																										BgL_sym2z00_7195 =
																											CAR
																											(BgL_cdrzd21992zd2_1944);
																										BgL_sym2z00_1894 =
																											BgL_sym2z00_7195;
																										BgL_sym1z00_1893 =
																											BgL_sym1z00_7193;
																										goto BgL_tagzd21895zd2_1895;
																									}
																								else
																									{	/* Expand/initial.scm 581 */
																										goto BgL_tagzd21896zd2_1896;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/initial.scm 581 */
																					goto BgL_tagzd21896zd2_1896;
																				}
																		}
																	else
																		{	/* Expand/initial.scm 581 */
																			obj_t BgL_cdrzd22007zd2_1949;

																			BgL_cdrzd22007zd2_1949 =
																				CDR(BgL_xz00_1885);
																			{	/* Expand/initial.scm 581 */
																				obj_t BgL_cdrzd22011zd2_1950;

																				BgL_cdrzd22011zd2_1950 =
																					CDR(BgL_cdrzd22007zd2_1949);
																				if (PAIRP(BgL_cdrzd22011zd2_1950))
																					{	/* Expand/initial.scm 581 */
																						if (NULLP(CDR
																								(BgL_cdrzd22011zd2_1950)))
																							{
																								obj_t BgL_sym2z00_7206;

																								obj_t BgL_sym1z00_7204;

																								BgL_sym1z00_7204 =
																									CAR(BgL_cdrzd22007zd2_1949);
																								BgL_sym2z00_7206 =
																									CAR(BgL_cdrzd22011zd2_1950);
																								BgL_sym2z00_1894 =
																									BgL_sym2z00_7206;
																								BgL_sym1z00_1893 =
																									BgL_sym1z00_7204;
																								goto BgL_tagzd21895zd2_1895;
																							}
																						else
																							{	/* Expand/initial.scm 581 */
																								goto BgL_tagzd21896zd2_1896;
																							}
																					}
																				else
																					{	/* Expand/initial.scm 581 */
																						goto BgL_tagzd21896zd2_1896;
																					}
																			}
																		}
																}
															else
																{	/* Expand/initial.scm 581 */
																	obj_t BgL_cdrzd22022zd2_1957;

																	BgL_cdrzd22022zd2_1957 = CDR(BgL_xz00_1885);
																	{	/* Expand/initial.scm 581 */
																		obj_t BgL_cdrzd22026zd2_1958;

																		BgL_cdrzd22026zd2_1958 =
																			CDR(BgL_cdrzd22022zd2_1957);
																		if (PAIRP(BgL_cdrzd22026zd2_1958))
																			{	/* Expand/initial.scm 581 */
																				if (NULLP(CDR(BgL_cdrzd22026zd2_1958)))
																					{
																						obj_t BgL_sym2z00_7217;

																						obj_t BgL_sym1z00_7215;

																						BgL_sym1z00_7215 =
																							CAR(BgL_cdrzd22022zd2_1957);
																						BgL_sym2z00_7217 =
																							CAR(BgL_cdrzd22026zd2_1958);
																						BgL_sym2z00_1894 = BgL_sym2z00_7217;
																						BgL_sym1z00_1893 = BgL_sym1z00_7215;
																						goto BgL_tagzd21895zd2_1895;
																					}
																				else
																					{	/* Expand/initial.scm 581 */
																						goto BgL_tagzd21896zd2_1896;
																					}
																			}
																		else
																			{	/* Expand/initial.scm 581 */
																				goto BgL_tagzd21896zd2_1896;
																			}
																	}
																}
														}
													else
														{	/* Expand/initial.scm 581 */
															obj_t BgL_cdrzd22037zd2_1964;

															BgL_cdrzd22037zd2_1964 = CDR(BgL_xz00_1885);
															{	/* Expand/initial.scm 581 */
																obj_t BgL_cdrzd22041zd2_1965;

																BgL_cdrzd22041zd2_1965 =
																	CDR(BgL_cdrzd22037zd2_1964);
																if (PAIRP(BgL_cdrzd22041zd2_1965))
																	{	/* Expand/initial.scm 581 */
																		if (NULLP(CDR(BgL_cdrzd22041zd2_1965)))
																			{
																				obj_t BgL_sym2z00_7228;

																				obj_t BgL_sym1z00_7226;

																				BgL_sym1z00_7226 =
																					CAR(BgL_cdrzd22037zd2_1964);
																				BgL_sym2z00_7228 =
																					CAR(BgL_cdrzd22041zd2_1965);
																				BgL_sym2z00_1894 = BgL_sym2z00_7228;
																				BgL_sym1z00_1893 = BgL_sym1z00_7226;
																				goto BgL_tagzd21895zd2_1895;
																			}
																		else
																			{	/* Expand/initial.scm 581 */
																				goto BgL_tagzd21896zd2_1896;
																			}
																	}
																else
																	{	/* Expand/initial.scm 581 */
																		goto BgL_tagzd21896zd2_1896;
																	}
															}
														}
												}
											else
												{	/* Expand/initial.scm 581 */
													obj_t BgL_cdrzd22058zd2_1974;

													BgL_cdrzd22058zd2_1974 = CDR(BgL_cdrzd21902zd2_1899);
													if (PAIRP(BgL_cdrzd22058zd2_1974))
														{	/* Expand/initial.scm 581 */
															if (NULLP(CDR(BgL_cdrzd22058zd2_1974)))
																{
																	obj_t BgL_sym2z00_7238;

																	obj_t BgL_sym1z00_7236;

																	BgL_sym1z00_7236 =
																		CAR(BgL_cdrzd21902zd2_1899);
																	BgL_sym2z00_7238 =
																		CAR(BgL_cdrzd22058zd2_1974);
																	BgL_sym2z00_1894 = BgL_sym2z00_7238;
																	BgL_sym1z00_1893 = BgL_sym1z00_7236;
																	goto BgL_tagzd21895zd2_1895;
																}
															else
																{	/* Expand/initial.scm 581 */
																	goto BgL_tagzd21896zd2_1896;
																}
														}
													else
														{	/* Expand/initial.scm 581 */
															goto BgL_tagzd21896zd2_1896;
														}
												}
										}
								}
							else
								{	/* Expand/initial.scm 581 */
									goto BgL_tagzd21896zd2_1896;
								}
						}
					else
						{	/* Expand/initial.scm 581 */
							goto BgL_tagzd21896zd2_1896;
						}
				}
			}
		}
	}



/* <anonymous:4129> */
	obj_t BGl_zc3anonymousza34129ze3z83zzexpand_installz00(obj_t BgL_envz00_5279,
		obj_t BgL_xz00_5280, obj_t BgL_ez00_5281)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 575 */
			{
				obj_t BgL_xz00_1879;

				obj_t BgL_ez00_1880;

				BgL_xz00_1879 = BgL_xz00_5280;
				BgL_ez00_1880 = BgL_ez00_5281;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1879,
					CNST_TABLE_REF(((long) 162)), BGl_string5631z00zzexpand_installz00,
					BgL_ez00_1880);
		}}
	}



/* <anonymous:4087> */
	obj_t BGl_zc3anonymousza34087ze3z83zzexpand_installz00(obj_t BgL_envz00_5282,
		obj_t BgL_xz00_5283, obj_t BgL_ez00_5284)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 563 */
			{
				obj_t BgL_xz00_1810;

				obj_t BgL_ez00_1811;

				BgL_xz00_1810 = BgL_xz00_5283;
				BgL_ez00_1811 = BgL_ez00_5284;
				{
					obj_t BgL_str1z00_1815;

					obj_t BgL_str2z00_1816;

					obj_t BgL_str1z00_1818;

					obj_t BgL_str2z00_1819;

					obj_t BgL_str3z00_1820;

					if (PAIRP(BgL_xz00_1810))
						{	/* Expand/initial.scm 563 */
							obj_t BgL_cdrzd21810zd2_1825;

							BgL_cdrzd21810zd2_1825 = CDR(BgL_xz00_1810);
							if (PAIRP(BgL_cdrzd21810zd2_1825))
								{	/* Expand/initial.scm 563 */
									if (NULLP(CDR(BgL_cdrzd21810zd2_1825)))
										{	/* Expand/initial.scm 563 */
											obj_t BgL_arg4091z00_1828;

											BgL_arg4091z00_1828 = CAR(BgL_cdrzd21810zd2_1825);
											return
												PROCEDURE_ENTRY(BgL_ez00_1811) (BgL_ez00_1811,
												BgL_arg4091z00_1828, BgL_ez00_1811, BEOA);
										}
									else
										{	/* Expand/initial.scm 563 */
											obj_t BgL_cdrzd21827zd2_1830;

											BgL_cdrzd21827zd2_1830 = CDR(BgL_cdrzd21810zd2_1825);
											if (PAIRP(BgL_cdrzd21827zd2_1830))
												{	/* Expand/initial.scm 563 */
													if (NULLP(CDR(BgL_cdrzd21827zd2_1830)))
														{	/* Expand/initial.scm 563 */
															BgL_str1z00_1815 = CAR(BgL_cdrzd21810zd2_1825);
															BgL_str2z00_1816 = CAR(BgL_cdrzd21827zd2_1830);
															{	/* Expand/initial.scm 568 */
																obj_t BgL_arg4105z00_1846;

																obj_t BgL_arg4106z00_1847;

																BgL_arg4105z00_1846 =
																	CNST_TABLE_REF(((long) 164));
																{	/* Expand/initial.scm 568 */
																	obj_t BgL_arg4107z00_1848;

																	obj_t BgL_arg4108z00_1849;

																	BgL_arg4107z00_1848 =
																		PROCEDURE_ENTRY(BgL_ez00_1811)
																		(BgL_ez00_1811, BgL_str1z00_1815,
																		BgL_ez00_1811, BEOA);
																	BgL_arg4108z00_1849 =
																		PROCEDURE_ENTRY(BgL_ez00_1811)
																		(BgL_ez00_1811, BgL_str2z00_1816,
																		BgL_ez00_1811, BEOA);
																	{	/* Expand/initial.scm 568 */
																		obj_t BgL_list4110z00_1851;

																		{	/* Expand/initial.scm 568 */
																			obj_t BgL_arg4111z00_1852;

																			BgL_arg4111z00_1852 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4110z00_1851 =
																				MAKE_PAIR(BgL_arg4108z00_1849,
																				BgL_arg4111z00_1852);
																		}
																		BgL_arg4106z00_1847 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4107z00_1848,
																			BgL_list4110z00_1851);
																}}
																return
																	MAKE_PAIR(BgL_arg4105z00_1846,
																	BgL_arg4106z00_1847);
															}
														}
													else
														{	/* Expand/initial.scm 563 */
															obj_t BgL_cdrzd21850zd2_1836;

															BgL_cdrzd21850zd2_1836 =
																CDR(BgL_cdrzd21810zd2_1825);
															{	/* Expand/initial.scm 563 */
																obj_t BgL_cdrzd21857zd2_1837;

																BgL_cdrzd21857zd2_1837 =
																	CDR(BgL_cdrzd21850zd2_1836);
																if (PAIRP(BgL_cdrzd21857zd2_1837))
																	{	/* Expand/initial.scm 563 */
																		if (NULLP(CDR(BgL_cdrzd21857zd2_1837)))
																			{	/* Expand/initial.scm 563 */
																				BgL_str1z00_1818 =
																					CAR(BgL_cdrzd21810zd2_1825);
																				BgL_str2z00_1819 =
																					CAR(BgL_cdrzd21850zd2_1836);
																				BgL_str3z00_1820 =
																					CAR(BgL_cdrzd21857zd2_1837);
																				{	/* Expand/initial.scm 570 */
																					obj_t BgL_arg4112z00_1853;

																					obj_t BgL_arg4113z00_1854;

																					BgL_arg4112z00_1853 =
																						CNST_TABLE_REF(((long) 163));
																					{	/* Expand/initial.scm 570 */
																						obj_t BgL_arg4114z00_1855;

																						obj_t BgL_arg4115z00_1856;

																						obj_t BgL_arg4116z00_1857;

																						BgL_arg4114z00_1855 =
																							PROCEDURE_ENTRY(BgL_ez00_1811)
																							(BgL_ez00_1811, BgL_str1z00_1818,
																							BgL_ez00_1811, BEOA);
																						BgL_arg4115z00_1856 =
																							PROCEDURE_ENTRY(BgL_ez00_1811)
																							(BgL_ez00_1811, BgL_str2z00_1819,
																							BgL_ez00_1811, BEOA);
																						BgL_arg4116z00_1857 =
																							PROCEDURE_ENTRY(BgL_ez00_1811)
																							(BgL_ez00_1811, BgL_str3z00_1820,
																							BgL_ez00_1811, BEOA);
																						{	/* Expand/initial.scm 570 */
																							obj_t BgL_list4118z00_1859;

																							{	/* Expand/initial.scm 570 */
																								obj_t BgL_arg4119z00_1860;

																								{	/* Expand/initial.scm 570 */
																									obj_t BgL_arg4120z00_1861;

																									BgL_arg4120z00_1861 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4119z00_1860 =
																										MAKE_PAIR
																										(BgL_arg4116z00_1857,
																										BgL_arg4120z00_1861);
																								}
																								BgL_list4118z00_1859 =
																									MAKE_PAIR(BgL_arg4115z00_1856,
																									BgL_arg4119z00_1860);
																							}
																							BgL_arg4113z00_1854 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4114z00_1855,
																								BgL_list4118z00_1859);
																					}}
																					return
																						MAKE_PAIR(BgL_arg4112z00_1853,
																						BgL_arg4113z00_1854);
																				}
																			}
																		else
																			{	/* Expand/initial.scm 563 */
																			BgL_tagzd21803zd2_1822:
																				if (NULLP(BgL_xz00_1810))
																					{	/* Expand/initial.scm 572 */
																						return BNIL;
																					}
																				else
																					{	/* Expand/initial.scm 572 */
																						obj_t BgL_head3314z00_1864;

																						BgL_head3314z00_1864 =
																							MAKE_PAIR(BNIL, BNIL);
																						{
																							obj_t BgL_l3312z00_1866;

																							obj_t BgL_tail3315z00_1867;

																							BgL_l3312z00_1866 = BgL_xz00_1810;
																							BgL_tail3315z00_1867 =
																								BgL_head3314z00_1864;
																						BgL_zc3anonymousza34122ze3z83_1868:
																							if (NULLP(BgL_l3312z00_1866))
																								{	/* Expand/initial.scm 572 */
																									return
																										CDR(BgL_head3314z00_1864);
																								}
																							else
																								{	/* Expand/initial.scm 572 */
																									obj_t BgL_newtail3316z00_1870;

																									{	/* Expand/initial.scm 572 */
																										obj_t BgL_arg4125z00_1872;

																										{	/* Expand/initial.scm 572 */
																											obj_t BgL_xz00_1874;

																											BgL_xz00_1874 =
																												CAR(BgL_l3312z00_1866);
																											BgL_arg4125z00_1872 =
																												PROCEDURE_ENTRY
																												(BgL_ez00_1811)
																												(BgL_ez00_1811,
																												BgL_xz00_1874,
																												BgL_ez00_1811, BEOA);
																										}
																										BgL_newtail3316z00_1870 =
																											MAKE_PAIR
																											(BgL_arg4125z00_1872,
																											BNIL);
																									}
																									SET_CDR(BgL_tail3315z00_1867,
																										BgL_newtail3316z00_1870);
																									{
																										obj_t BgL_tail3315z00_7305;

																										obj_t BgL_l3312z00_7303;

																										BgL_l3312z00_7303 =
																											CDR(BgL_l3312z00_1866);
																										BgL_tail3315z00_7305 =
																											BgL_newtail3316z00_1870;
																										BgL_tail3315z00_1867 =
																											BgL_tail3315z00_7305;
																										BgL_l3312z00_1866 =
																											BgL_l3312z00_7303;
																										goto
																											BgL_zc3anonymousza34122ze3z83_1868;
																									}
																								}
																						}
																					}
																			}
																	}
																else
																	{	/* Expand/initial.scm 563 */
																		goto BgL_tagzd21803zd2_1822;
																	}
															}
														}
												}
											else
												{	/* Expand/initial.scm 563 */
													goto BgL_tagzd21803zd2_1822;
												}
										}
								}
							else
								{	/* Expand/initial.scm 563 */
									goto BgL_tagzd21803zd2_1822;
								}
						}
					else
						{	/* Expand/initial.scm 563 */
							goto BgL_tagzd21803zd2_1822;
						}
				}
			}
		}
	}



/* evset! */
	obj_t BGl_evsetz12z12zzexpand_installz00(obj_t BgL_envz00_5285,
		obj_t BgL_xz00_5286, obj_t BgL_ez00_5287)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 528 */
			{
				obj_t BgL_xz00_1766;

				obj_t BgL_ez00_1767;

				BgL_xz00_1766 = BgL_xz00_5286;
				BgL_ez00_1767 = BgL_ez00_5287;
				{
					obj_t BgL_opz00_1769;

					obj_t BgL_vecz00_1770;

					obj_t BgL_kz00_1771;

					obj_t BgL_objz00_1772;

					if (PAIRP(BgL_xz00_1766))
						{	/* Expand/initial.scm 528 */
							obj_t BgL_cdrzd21783zd2_1777;

							BgL_cdrzd21783zd2_1777 = CDR(BgL_xz00_1766);
							if (PAIRP(BgL_cdrzd21783zd2_1777))
								{	/* Expand/initial.scm 528 */
									obj_t BgL_cdrzd21789zd2_1779;

									BgL_cdrzd21789zd2_1779 = CDR(BgL_cdrzd21783zd2_1777);
									if (PAIRP(BgL_cdrzd21789zd2_1779))
										{	/* Expand/initial.scm 528 */
											obj_t BgL_cdrzd21794zd2_1781;

											BgL_cdrzd21794zd2_1781 = CDR(BgL_cdrzd21789zd2_1779);
											if (PAIRP(BgL_cdrzd21794zd2_1781))
												{	/* Expand/initial.scm 528 */
													if (NULLP(CDR(BgL_cdrzd21794zd2_1781)))
														{	/* Expand/initial.scm 528 */
															BgL_opz00_1769 = CAR(BgL_xz00_1766);
															BgL_vecz00_1770 = CAR(BgL_cdrzd21783zd2_1777);
															BgL_kz00_1771 = CAR(BgL_cdrzd21789zd2_1779);
															BgL_objz00_1772 = CAR(BgL_cdrzd21794zd2_1781);
															{	/* Expand/initial.scm 531 */
																obj_t BgL_evecz00_1789;

																obj_t BgL_ekz00_1790;

																obj_t BgL_eobjz00_1791;

																BgL_evecz00_1789 =
																	PROCEDURE_ENTRY(BgL_ez00_1767) (BgL_ez00_1767,
																	BgL_vecz00_1770, BgL_ez00_1767, BEOA);
																BgL_ekz00_1790 =
																	PROCEDURE_ENTRY(BgL_ez00_1767) (BgL_ez00_1767,
																	BgL_kz00_1771, BgL_ez00_1767, BEOA);
																BgL_eobjz00_1791 =
																	PROCEDURE_ENTRY(BgL_ez00_1767) (BgL_ez00_1767,
																	BgL_objz00_1772, BgL_ez00_1767, BEOA);
																if (CBOOL
																	(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
																	{	/* Expand/initial.scm 535 */
																		obj_t BgL_arg4071z00_1792;

																		obj_t BgL_arg4072z00_1793;

																		{	/* Expand/initial.scm 535 */
																			obj_t BgL_arg4073z00_1794;

																			{	/* Expand/initial.scm 535 */
																				obj_t BgL_arg4074z00_1795;

																				obj_t BgL_arg4075z00_1796;

																				{	/* Expand/initial.scm 535 */
																					obj_t BgL_res5406z00_4427;

																					{	/* Expand/initial.scm 535 */
																						obj_t BgL_symbolz00_4425;

																						BgL_symbolz00_4425 =
																							CNST_TABLE_REF(((long) 165));
																						{	/* Expand/initial.scm 535 */
																							obj_t BgL_arg2063z00_4426;

																							BgL_arg2063z00_4426 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_4425);
																							BgL_res5406z00_4427 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg2063z00_4426);
																					}}
																					BgL_arg4074z00_1795 =
																						BgL_res5406z00_4427;
																				}
																				{	/* Expand/initial.scm 535 */
																					obj_t BgL_res5407z00_4430;

																					{	/* Expand/initial.scm 535 */
																						obj_t BgL_symbolz00_4428;

																						BgL_symbolz00_4428 = BgL_opz00_1769;
																						{	/* Expand/initial.scm 535 */
																							obj_t BgL_arg2063z00_4429;

																							BgL_arg2063z00_4429 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_4428);
																							BgL_res5407z00_4430 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg2063z00_4429);
																					}}
																					BgL_arg4075z00_1796 =
																						BgL_res5407z00_4430;
																				}
																				{	/* Expand/initial.scm 535 */
																					obj_t BgL_list4076z00_1797;

																					{	/* Expand/initial.scm 535 */
																						obj_t BgL_arg4077z00_1798;

																						BgL_arg4077z00_1798 =
																							MAKE_PAIR(BgL_arg4075z00_1796,
																							BNIL);
																						BgL_list4076z00_1797 =
																							MAKE_PAIR(BgL_arg4074z00_1795,
																							BgL_arg4077z00_1798);
																					}
																					BgL_arg4073z00_1794 =
																						BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																						(BgL_list4076z00_1797);
																			}}
																			BgL_arg4071z00_1792 =
																				string_to_symbol(BSTRING_TO_STRING
																				(BgL_arg4073z00_1794));
																		}
																		{	/* Expand/initial.scm 535 */
																			obj_t BgL_list4078z00_1799;

																			{	/* Expand/initial.scm 535 */
																				obj_t BgL_arg4079z00_1800;

																				{	/* Expand/initial.scm 535 */
																					obj_t BgL_arg4080z00_1801;

																					BgL_arg4080z00_1801 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4079z00_1800 =
																						MAKE_PAIR(BgL_eobjz00_1791,
																						BgL_arg4080z00_1801);
																				}
																				BgL_list4078z00_1799 =
																					MAKE_PAIR(BgL_ekz00_1790,
																					BgL_arg4079z00_1800);
																			}
																			BgL_arg4072z00_1793 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_evecz00_1789,
																				BgL_list4078z00_1799);
																		}
																		return
																			MAKE_PAIR(BgL_arg4071z00_1792,
																			BgL_arg4072z00_1793);
																	}
																else
																	{	/* Expand/initial.scm 536 */
																		obj_t BgL_arg4081z00_1802;

																		{	/* Expand/initial.scm 536 */
																			obj_t BgL_list4082z00_1803;

																			{	/* Expand/initial.scm 536 */
																				obj_t BgL_arg4083z00_1804;

																				{	/* Expand/initial.scm 536 */
																					obj_t BgL_arg4084z00_1805;

																					BgL_arg4084z00_1805 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4083z00_1804 =
																						MAKE_PAIR(BgL_eobjz00_1791,
																						BgL_arg4084z00_1805);
																				}
																				BgL_list4082z00_1803 =
																					MAKE_PAIR(BgL_ekz00_1790,
																					BgL_arg4083z00_1804);
																			}
																			BgL_arg4081z00_1802 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_evecz00_1789,
																				BgL_list4082z00_1803);
																		}
																		return
																			MAKE_PAIR(BgL_opz00_1769,
																			BgL_arg4081z00_1802);
																	}
															}
														}
													else
														{	/* Expand/initial.scm 528 */
														BgL_tagzd21772zd2_1774:
															return
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string5632z00zzexpand_installz00,
																BgL_xz00_1766);
														}
												}
											else
												{	/* Expand/initial.scm 528 */
													goto BgL_tagzd21772zd2_1774;
												}
										}
									else
										{	/* Expand/initial.scm 528 */
											goto BgL_tagzd21772zd2_1774;
										}
								}
							else
								{	/* Expand/initial.scm 528 */
									goto BgL_tagzd21772zd2_1774;
								}
						}
					else
						{	/* Expand/initial.scm 528 */
							goto BgL_tagzd21772zd2_1774;
						}
				}
			}
		}
	}



/* evref */
	obj_t BGl_evrefz00zzexpand_installz00(obj_t BgL_envz00_5288,
		obj_t BgL_xz00_5289, obj_t BgL_ez00_5290)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 518 */
			{
				obj_t BgL_xz00_1733;

				obj_t BgL_ez00_1734;

				BgL_xz00_1733 = BgL_xz00_5289;
				BgL_ez00_1734 = BgL_ez00_5290;
				{
					obj_t BgL_opz00_1736;

					obj_t BgL_vecz00_1737;

					obj_t BgL_kz00_1738;

					if (PAIRP(BgL_xz00_1733))
						{	/* Expand/initial.scm 518 */
							obj_t BgL_cdrzd21760zd2_1743;

							BgL_cdrzd21760zd2_1743 = CDR(BgL_xz00_1733);
							if (PAIRP(BgL_cdrzd21760zd2_1743))
								{	/* Expand/initial.scm 518 */
									obj_t BgL_cdrzd21765zd2_1745;

									BgL_cdrzd21765zd2_1745 = CDR(BgL_cdrzd21760zd2_1743);
									if (PAIRP(BgL_cdrzd21765zd2_1745))
										{	/* Expand/initial.scm 518 */
											if (NULLP(CDR(BgL_cdrzd21765zd2_1745)))
												{	/* Expand/initial.scm 518 */
													BgL_opz00_1736 = CAR(BgL_xz00_1733);
													BgL_vecz00_1737 = CAR(BgL_cdrzd21760zd2_1743);
													BgL_kz00_1738 = CAR(BgL_cdrzd21765zd2_1745);
													{	/* Expand/initial.scm 521 */
														obj_t BgL_evecz00_1752;

														obj_t BgL_ekz00_1753;

														BgL_evecz00_1752 =
															PROCEDURE_ENTRY(BgL_ez00_1734) (BgL_ez00_1734,
															BgL_vecz00_1737, BgL_ez00_1734, BEOA);
														BgL_ekz00_1753 =
															PROCEDURE_ENTRY(BgL_ez00_1734) (BgL_ez00_1734,
															BgL_kz00_1738, BgL_ez00_1734, BEOA);
														if (CBOOL
															(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
															{	/* Expand/initial.scm 524 */
																obj_t BgL_arg4048z00_1754;

																obj_t BgL_arg4049z00_1755;

																{	/* Expand/initial.scm 524 */
																	obj_t BgL_arg4050z00_1756;

																	{	/* Expand/initial.scm 524 */
																		obj_t BgL_arg4051z00_1757;

																		obj_t BgL_arg4052z00_1758;

																		{	/* Expand/initial.scm 524 */
																			obj_t BgL_res5404z00_4407;

																			{	/* Expand/initial.scm 524 */
																				obj_t BgL_symbolz00_4405;

																				BgL_symbolz00_4405 =
																					CNST_TABLE_REF(((long) 165));
																				{	/* Expand/initial.scm 524 */
																					obj_t BgL_arg2063z00_4406;

																					BgL_arg2063z00_4406 =
																						SYMBOL_TO_STRING
																						(BgL_symbolz00_4405);
																					BgL_res5404z00_4407 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_4406);
																			}}
																			BgL_arg4051z00_1757 = BgL_res5404z00_4407;
																		}
																		{	/* Expand/initial.scm 524 */
																			obj_t BgL_res5405z00_4410;

																			{	/* Expand/initial.scm 524 */
																				obj_t BgL_symbolz00_4408;

																				BgL_symbolz00_4408 = BgL_opz00_1736;
																				{	/* Expand/initial.scm 524 */
																					obj_t BgL_arg2063z00_4409;

																					BgL_arg2063z00_4409 =
																						SYMBOL_TO_STRING
																						(BgL_symbolz00_4408);
																					BgL_res5405z00_4410 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_4409);
																			}}
																			BgL_arg4052z00_1758 = BgL_res5405z00_4410;
																		}
																		{	/* Expand/initial.scm 524 */
																			obj_t BgL_list4053z00_1759;

																			{	/* Expand/initial.scm 524 */
																				obj_t BgL_arg4054z00_1760;

																				BgL_arg4054z00_1760 =
																					MAKE_PAIR(BgL_arg4052z00_1758, BNIL);
																				BgL_list4053z00_1759 =
																					MAKE_PAIR(BgL_arg4051z00_1757,
																					BgL_arg4054z00_1760);
																			}
																			BgL_arg4050z00_1756 =
																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																				(BgL_list4053z00_1759);
																	}}
																	BgL_arg4048z00_1754 =
																		string_to_symbol(BSTRING_TO_STRING
																		(BgL_arg4050z00_1756));
																}
																{	/* Expand/initial.scm 524 */
																	obj_t BgL_list4055z00_1761;

																	{	/* Expand/initial.scm 524 */
																		obj_t BgL_arg4056z00_1762;

																		BgL_arg4056z00_1762 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list4055z00_1761 =
																			MAKE_PAIR(BgL_ekz00_1753,
																			BgL_arg4056z00_1762);
																	}
																	BgL_arg4049z00_1755 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_evecz00_1752, BgL_list4055z00_1761);
																}
																return
																	MAKE_PAIR(BgL_arg4048z00_1754,
																	BgL_arg4049z00_1755);
															}
														else
															{	/* Expand/initial.scm 525 */
																obj_t BgL_arg4057z00_1763;

																{	/* Expand/initial.scm 525 */
																	obj_t BgL_list4058z00_1764;

																	{	/* Expand/initial.scm 525 */
																		obj_t BgL_arg4059z00_1765;

																		BgL_arg4059z00_1765 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list4058z00_1764 =
																			MAKE_PAIR(BgL_ekz00_1753,
																			BgL_arg4059z00_1765);
																	}
																	BgL_arg4057z00_1763 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_evecz00_1752, BgL_list4058z00_1764);
																}
																return
																	MAKE_PAIR(BgL_opz00_1736,
																	BgL_arg4057z00_1763);
															}
													}
												}
											else
												{	/* Expand/initial.scm 518 */
												BgL_tagzd21751zd2_1740:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string5633z00zzexpand_installz00,
														BgL_xz00_1733);
												}
										}
									else
										{	/* Expand/initial.scm 518 */
											goto BgL_tagzd21751zd2_1740;
										}
								}
							else
								{	/* Expand/initial.scm 518 */
									goto BgL_tagzd21751zd2_1740;
								}
						}
					else
						{	/* Expand/initial.scm 518 */
							goto BgL_tagzd21751zd2_1740;
						}
				}
			}
		}
	}



/* <anonymous:4008> */
	obj_t BGl_zc3anonymousza34008ze3z83zzexpand_installz00(obj_t BgL_envz00_5291,
		obj_t BgL_xz00_5292, obj_t BgL_ez00_5293)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 508 */
			{
				obj_t BgL_xz00_1679;

				obj_t BgL_ez00_1680;

				BgL_xz00_1679 = BgL_xz00_5292;
				BgL_ez00_1680 = BgL_ez00_5293;
				{
					obj_t BgL_nz00_1682;

					obj_t BgL_nz00_1684;

					obj_t BgL_initz00_1685;

					if (PAIRP(BgL_xz00_1679))
						{	/* Expand/initial.scm 508 */
							obj_t BgL_cdrzd21719zd2_1690;

							BgL_cdrzd21719zd2_1690 = CDR(BgL_xz00_1679);
							if (PAIRP(BgL_cdrzd21719zd2_1690))
								{	/* Expand/initial.scm 508 */
									if (NULLP(CDR(BgL_cdrzd21719zd2_1690)))
										{	/* Expand/initial.scm 508 */
											BgL_nz00_1682 = CAR(BgL_cdrzd21719zd2_1690);
											{	/* Expand/initial.scm 511 */
												obj_t BgL_arg4019z00_1702;

												obj_t BgL_arg4020z00_1703;

												BgL_arg4019z00_1702 = CNST_TABLE_REF(((long) 166));
												{	/* Expand/initial.scm 511 */
													obj_t BgL_arg4021z00_1704;

													obj_t BgL_arg4022z00_1705;

													BgL_arg4021z00_1704 =
														PROCEDURE_ENTRY(BgL_ez00_1680) (BgL_ez00_1680,
														BgL_nz00_1682, BgL_ez00_1680, BEOA);
													BgL_arg4022z00_1705 =
														PROCEDURE_ENTRY(BgL_ez00_1680) (BgL_ez00_1680,
														CNST_TABLE_REF(((long) 167)), BgL_ez00_1680, BEOA);
													{	/* Expand/initial.scm 511 */
														obj_t BgL_list4024z00_1707;

														{	/* Expand/initial.scm 511 */
															obj_t BgL_arg4025z00_1708;

															BgL_arg4025z00_1708 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4024z00_1707 =
																MAKE_PAIR(BgL_arg4022z00_1705,
																BgL_arg4025z00_1708);
														}
														BgL_arg4020z00_1703 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4021z00_1704, BgL_list4024z00_1707);
												}}
												return
													MAKE_PAIR(BgL_arg4019z00_1702, BgL_arg4020z00_1703);
											}
										}
									else
										{	/* Expand/initial.scm 508 */
											obj_t BgL_cdrzd21735zd2_1695;

											BgL_cdrzd21735zd2_1695 = CDR(BgL_cdrzd21719zd2_1690);
											if (PAIRP(BgL_cdrzd21735zd2_1695))
												{	/* Expand/initial.scm 508 */
													if (NULLP(CDR(BgL_cdrzd21735zd2_1695)))
														{	/* Expand/initial.scm 508 */
															BgL_nz00_1684 = CAR(BgL_cdrzd21719zd2_1690);
															BgL_initz00_1685 = CAR(BgL_cdrzd21735zd2_1695);
															{	/* Expand/initial.scm 513 */
																obj_t BgL_arg4026z00_1709;

																obj_t BgL_arg4027z00_1710;

																BgL_arg4026z00_1709 =
																	CNST_TABLE_REF(((long) 166));
																{	/* Expand/initial.scm 513 */
																	obj_t BgL_arg4028z00_1711;

																	obj_t BgL_arg4029z00_1712;

																	BgL_arg4028z00_1711 =
																		PROCEDURE_ENTRY(BgL_ez00_1680)
																		(BgL_ez00_1680, BgL_nz00_1684,
																		BgL_ez00_1680, BEOA);
																	BgL_arg4029z00_1712 =
																		PROCEDURE_ENTRY(BgL_ez00_1680)
																		(BgL_ez00_1680, BgL_initz00_1685,
																		BgL_ez00_1680, BEOA);
																	{	/* Expand/initial.scm 513 */
																		obj_t BgL_list4031z00_1714;

																		{	/* Expand/initial.scm 513 */
																			obj_t BgL_arg4032z00_1715;

																			BgL_arg4032z00_1715 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4031z00_1714 =
																				MAKE_PAIR(BgL_arg4029z00_1712,
																				BgL_arg4032z00_1715);
																		}
																		BgL_arg4027z00_1710 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4028z00_1711,
																			BgL_list4031z00_1714);
																}}
																return
																	MAKE_PAIR(BgL_arg4026z00_1709,
																	BgL_arg4027z00_1710);
															}
														}
													else
														{	/* Expand/initial.scm 508 */
														BgL_tagzd21713zd2_1687:
															if (NULLP(BgL_xz00_1679))
																{	/* Expand/initial.scm 515 */
																	return BNIL;
																}
															else
																{	/* Expand/initial.scm 515 */
																	obj_t BgL_head3309z00_1718;

																	BgL_head3309z00_1718 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3307z00_1720;

																		obj_t BgL_tail3310z00_1721;

																		BgL_l3307z00_1720 = BgL_xz00_1679;
																		BgL_tail3310z00_1721 = BgL_head3309z00_1718;
																	BgL_zc3anonymousza34034ze3z83_1722:
																		if (NULLP(BgL_l3307z00_1720))
																			{	/* Expand/initial.scm 515 */
																				return CDR(BgL_head3309z00_1718);
																			}
																		else
																			{	/* Expand/initial.scm 515 */
																				obj_t BgL_newtail3311z00_1724;

																				{	/* Expand/initial.scm 515 */
																					obj_t BgL_arg4037z00_1726;

																					{	/* Expand/initial.scm 515 */
																						obj_t BgL_xz00_1728;

																						BgL_xz00_1728 =
																							CAR(BgL_l3307z00_1720);
																						BgL_arg4037z00_1726 =
																							PROCEDURE_ENTRY(BgL_ez00_1680)
																							(BgL_ez00_1680, BgL_xz00_1728,
																							BgL_ez00_1680, BEOA);
																					}
																					BgL_newtail3311z00_1724 =
																						MAKE_PAIR(BgL_arg4037z00_1726,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3310z00_1721,
																					BgL_newtail3311z00_1724);
																				{
																					obj_t BgL_tail3310z00_7441;

																					obj_t BgL_l3307z00_7439;

																					BgL_l3307z00_7439 =
																						CDR(BgL_l3307z00_1720);
																					BgL_tail3310z00_7441 =
																						BgL_newtail3311z00_1724;
																					BgL_tail3310z00_1721 =
																						BgL_tail3310z00_7441;
																					BgL_l3307z00_1720 = BgL_l3307z00_7439;
																					goto
																						BgL_zc3anonymousza34034ze3z83_1722;
																				}
																			}
																	}
																}
														}
												}
											else
												{	/* Expand/initial.scm 508 */
													goto BgL_tagzd21713zd2_1687;
												}
										}
								}
							else
								{	/* Expand/initial.scm 508 */
									goto BgL_tagzd21713zd2_1687;
								}
						}
					else
						{	/* Expand/initial.scm 508 */
							goto BgL_tagzd21713zd2_1687;
						}
				}
			}
		}
	}



/* <anonymous:3970> */
	obj_t BGl_zc3anonymousza33970ze3z83zzexpand_installz00(obj_t BgL_envz00_5294,
		obj_t BgL_xz00_5295, obj_t BgL_ez00_5296)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 486 */
			{
				obj_t BgL_xz00_1631;

				obj_t BgL_ez00_1632;

				BgL_xz00_1631 = BgL_xz00_5295;
				BgL_ez00_1632 = BgL_ez00_5296;
				{	/* Expand/initial.scm 487 */
					obj_t BgL_argsz00_1634;

					obj_t BgL_vz00_1635;

					BgL_argsz00_1634 = CDR(BgL_xz00_1631);
					BgL_vz00_1635 =
						BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
						(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 168))));
					{	/* Expand/initial.scm 490 */
						obj_t BgL_arg3972z00_1636;

						{	/* Expand/initial.scm 490 */
							obj_t BgL_arg3973z00_1637;

							obj_t BgL_arg3974z00_1638;

							BgL_arg3973z00_1637 = CNST_TABLE_REF(((long) 59));
							{	/* Expand/initial.scm 490 */
								obj_t BgL_arg3975z00_1639;

								obj_t BgL_arg3976z00_1640;

								{	/* Expand/initial.scm 490 */
									obj_t BgL_arg3978z00_1642;

									{	/* Expand/initial.scm 490 */
										obj_t BgL_arg3980z00_1644;

										{	/* Expand/initial.scm 490 */
											obj_t BgL_arg3981z00_1645;

											{	/* Expand/initial.scm 490 */
												obj_t BgL_arg3984z00_1648;

												obj_t BgL_arg3985z00_1649;

												BgL_arg3984z00_1648 = CNST_TABLE_REF(((long) 169));
												{	/* Expand/initial.scm 490 */
													long BgL_arg3986z00_1650;

													BgL_arg3986z00_1650 =
														bgl_list_length(BgL_argsz00_1634);
													{	/* Expand/initial.scm 490 */
														obj_t BgL_list3988z00_1652;

														BgL_list3988z00_1652 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3985z00_1649 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
															(BgL_arg3986z00_1650), BgL_list3988z00_1652);
												}}
												BgL_arg3981z00_1645 =
													MAKE_PAIR(BgL_arg3984z00_1648, BgL_arg3985z00_1649);
											}
											{	/* Expand/initial.scm 490 */
												obj_t BgL_list3983z00_1647;

												BgL_list3983z00_1647 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3980z00_1644 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3981z00_1645, BgL_list3983z00_1647);
										}}
										BgL_arg3978z00_1642 =
											MAKE_PAIR(BgL_vz00_1635, BgL_arg3980z00_1644);
									}
									BgL_arg3975z00_1639 = MAKE_PAIR(BgL_arg3978z00_1642, BNIL);
								}
								{	/* Expand/initial.scm 491 */
									obj_t BgL_arg3989z00_1653;

									obj_t BgL_arg3990z00_1654;

									{
										long BgL_iz00_1657;

										obj_t BgL_argsz00_1658;

										obj_t BgL_resz00_1659;

										BgL_iz00_1657 = ((long) 0);
										BgL_argsz00_1658 = BgL_argsz00_1634;
										BgL_resz00_1659 = BNIL;
									BgL_zc3anonymousza33991ze3z83_1660:
										if (NULLP(BgL_argsz00_1658))
											{	/* Expand/initial.scm 494 */
												BgL_arg3989z00_1653 = BgL_resz00_1659;
											}
										else
											{	/* Expand/initial.scm 496 */
												long BgL_arg3993z00_1662;

												obj_t BgL_arg3994z00_1663;

												obj_t BgL_arg3995z00_1664;

												BgL_arg3993z00_1662 = (BgL_iz00_1657 + ((long) 1));
												BgL_arg3994z00_1663 = CDR(BgL_argsz00_1658);
												{	/* Expand/initial.scm 500 */
													obj_t BgL_arg3996z00_1665;

													{	/* Expand/initial.scm 500 */
														obj_t BgL_arg3997z00_1666;

														{	/* Expand/initial.scm 500 */
															obj_t BgL_arg3998z00_1667;

															obj_t BgL_arg3999z00_1668;

															BgL_arg3998z00_1667 =
																CNST_TABLE_REF(((long) 170));
															{	/* Expand/initial.scm 500 */
																obj_t BgL_arg4000z00_1669;

																BgL_arg4000z00_1669 = CAR(BgL_argsz00_1658);
																{	/* Expand/initial.scm 500 */
																	obj_t BgL_list4002z00_1671;

																	{	/* Expand/initial.scm 500 */
																		obj_t BgL_arg4003z00_1672;

																		{	/* Expand/initial.scm 500 */
																			obj_t BgL_arg4004z00_1673;

																			BgL_arg4004z00_1673 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg4003z00_1672 =
																				MAKE_PAIR(BgL_arg4000z00_1669,
																				BgL_arg4004z00_1673);
																		}
																		BgL_list4002z00_1671 =
																			MAKE_PAIR(BINT(BgL_iz00_1657),
																			BgL_arg4003z00_1672);
																	}
																	BgL_arg3999z00_1668 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_vz00_1635, BgL_list4002z00_1671);
															}}
															BgL_arg3997z00_1666 =
																MAKE_PAIR(BgL_arg3998z00_1667,
																BgL_arg3999z00_1668);
														}
														BgL_arg3996z00_1665 =
															BGl_epairifyz00zztools_miscz00
															(BgL_arg3997z00_1666, BgL_xz00_1631);
													}
													BgL_arg3995z00_1664 =
														MAKE_PAIR(BgL_arg3996z00_1665, BgL_resz00_1659);
												}
												{
													obj_t BgL_resz00_7473;

													obj_t BgL_argsz00_7472;

													long BgL_iz00_7471;

													BgL_iz00_7471 = BgL_arg3993z00_1662;
													BgL_argsz00_7472 = BgL_arg3994z00_1663;
													BgL_resz00_7473 = BgL_arg3995z00_1664;
													BgL_resz00_1659 = BgL_resz00_7473;
													BgL_argsz00_1658 = BgL_argsz00_7472;
													BgL_iz00_1657 = BgL_iz00_7471;
													goto BgL_zc3anonymousza33991ze3z83_1660;
												}
											}
									}
									BgL_arg3990z00_1654 = MAKE_PAIR(BgL_vz00_1635, BNIL);
									BgL_arg3976z00_1640 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3989z00_1653, BgL_arg3990z00_1654);
								}
								{	/* Expand/initial.scm 490 */
									obj_t BgL_list3977z00_1641;

									BgL_list3977z00_1641 = MAKE_PAIR(BgL_arg3976z00_1640, BNIL);
									BgL_arg3974z00_1638 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3975z00_1639, BgL_list3977z00_1641);
								}
							}
							BgL_arg3972z00_1636 =
								MAKE_PAIR(BgL_arg3973z00_1637, BgL_arg3974z00_1638);
						}
						return
							PROCEDURE_ENTRY(BgL_ez00_1632) (BgL_ez00_1632,
							BgL_arg3972z00_1636, BgL_ez00_1632, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:3890> */
	obj_t BGl_zc3anonymousza33890ze3z83zzexpand_installz00(obj_t BgL_envz00_5297,
		obj_t BgL_xz00_5298, obj_t BgL_ez00_5299)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 470 */
			{
				obj_t BgL_xz00_1524;

				obj_t BgL_ez00_1525;

				BgL_xz00_1524 = BgL_xz00_5298;
				BgL_ez00_1525 = BgL_ez00_5299;
				{
					obj_t BgL_gz00_1527;

					obj_t BgL_portz00_1528;

					obj_t BgL_optsz00_1529;

					if (PAIRP(BgL_xz00_1524))
						{	/* Expand/initial.scm 470 */
							obj_t BgL_cdrzd21698zd2_1534;

							BgL_cdrzd21698zd2_1534 = CDR(BgL_xz00_1524);
							if (PAIRP(BgL_cdrzd21698zd2_1534))
								{	/* Expand/initial.scm 470 */
									obj_t BgL_cdrzd21703zd2_1536;

									BgL_cdrzd21703zd2_1536 = CDR(BgL_cdrzd21698zd2_1534);
									if (PAIRP(BgL_cdrzd21703zd2_1536))
										{	/* Expand/initial.scm 470 */
											BgL_gz00_1527 = CAR(BgL_cdrzd21698zd2_1534);
											BgL_portz00_1528 = CAR(BgL_cdrzd21703zd2_1536);
											BgL_optsz00_1529 = CDR(BgL_cdrzd21703zd2_1536);
											{	/* Expand/initial.scm 473 */
												bool_t BgL_testz00_7489;

												{	/* Expand/initial.scm 473 */
													int BgL_arg3966z00_1626;

													BgL_arg3966z00_1626 =
														BGl_bigloozd2compilerzd2debugz00zz__paramz00();
													BgL_testz00_7489 =
														((long) (BgL_arg3966z00_1626) >= ((long) 2));
												}
												if (BgL_testz00_7489)
													{	/* Expand/initial.scm 474 */
														obj_t BgL_grz00_1542;

														{	/* Expand/initial.scm 474 */

															{	/* Expand/initial.scm 474 */

																BgL_grz00_1542 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}
														}
														{	/* Expand/initial.scm 475 */
															obj_t BgL_arg3898z00_1543;

															obj_t BgL_arg3899z00_1544;

															BgL_arg3898z00_1543 = CNST_TABLE_REF(((long) 59));
															{	/* Expand/initial.scm 475 */
																obj_t BgL_arg3900z00_1545;

																obj_t BgL_arg3901z00_1546;

																{	/* Expand/initial.scm 475 */
																	obj_t BgL_arg3905z00_1550;

																	{	/* Expand/initial.scm 475 */
																		obj_t BgL_arg3908z00_1552;

																		{	/* Expand/initial.scm 475 */
																			obj_t BgL_arg3909z00_1553;

																			BgL_arg3909z00_1553 =
																				PROCEDURE_ENTRY(BgL_ez00_1525)
																				(BgL_ez00_1525, BgL_gz00_1527,
																				BgL_ez00_1525, BEOA);
																			{	/* Expand/initial.scm 475 */
																				obj_t BgL_list3911z00_1555;

																				BgL_list3911z00_1555 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3908z00_1552 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3909z00_1553,
																					BgL_list3911z00_1555);
																		}}
																		BgL_arg3905z00_1550 =
																			MAKE_PAIR(BgL_grz00_1542,
																			BgL_arg3908z00_1552);
																	}
																	BgL_arg3900z00_1545 =
																		MAKE_PAIR(BgL_arg3905z00_1550, BNIL);
																}
																{	/* Expand/initial.scm 476 */
																	obj_t BgL_arg3912z00_1556;

																	obj_t BgL_arg3913z00_1557;

																	BgL_arg3912z00_1556 =
																		CNST_TABLE_REF(((long) 0));
																	{	/* Expand/initial.scm 476 */
																		obj_t BgL_arg3914z00_1558;

																		obj_t BgL_arg3915z00_1559;

																		obj_t BgL_arg3916z00_1560;

																		{	/* Expand/initial.scm 476 */
																			obj_t BgL_arg3922z00_1565;

																			obj_t BgL_arg3923z00_1566;

																			BgL_arg3922z00_1565 =
																				CNST_TABLE_REF(((long) 171));
																			{	/* Expand/initial.scm 476 */
																				long BgL_arg3924z00_1567;

																				BgL_arg3924z00_1567 =
																					(((long) 1) +
																					bgl_list_length(BgL_optsz00_1529));
																				{	/* Expand/initial.scm 476 */
																					obj_t BgL_list3926z00_1569;

																					{	/* Expand/initial.scm 476 */
																						obj_t BgL_arg3927z00_1570;

																						BgL_arg3927z00_1570 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3926z00_1569 =
																							MAKE_PAIR(BINT
																							(BgL_arg3924z00_1567),
																							BgL_arg3927z00_1570);
																					}
																					BgL_arg3923z00_1566 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_grz00_1542,
																						BgL_list3926z00_1569);
																			}}
																			BgL_arg3914z00_1558 =
																				MAKE_PAIR(BgL_arg3922z00_1565,
																				BgL_arg3923z00_1566);
																		}
																		{	/* Expand/initial.scm 477 */
																			obj_t BgL_arg3930z00_1573;

																			{	/* Expand/initial.scm 477 */
																				obj_t BgL_arg3931z00_1574;

																				obj_t BgL_arg3932z00_1575;

																				BgL_arg3931z00_1574 =
																					PROCEDURE_ENTRY(BgL_ez00_1525)
																					(BgL_ez00_1525, BgL_portz00_1528,
																					BgL_ez00_1525, BEOA);
																				{	/* Expand/initial.scm 477 */
																					obj_t BgL_arg3934z00_1577;

																					if (NULLP(BgL_optsz00_1529))
																						{	/* Expand/initial.scm 477 */
																							BgL_arg3934z00_1577 = BNIL;
																						}
																					else
																						{	/* Expand/initial.scm 477 */
																							obj_t BgL_head3299z00_1581;

																							BgL_head3299z00_1581 =
																								MAKE_PAIR(BNIL, BNIL);
																							{
																								obj_t BgL_l3297z00_1583;

																								obj_t BgL_tail3300z00_1584;

																								BgL_l3297z00_1583 =
																									BgL_optsz00_1529;
																								BgL_tail3300z00_1584 =
																									BgL_head3299z00_1581;
																							BgL_zc3anonymousza33937ze3z83_1585:
																								if (NULLP
																									(BgL_l3297z00_1583))
																									{	/* Expand/initial.scm 477 */
																										BgL_arg3934z00_1577 =
																											CDR(BgL_head3299z00_1581);
																									}
																								else
																									{	/* Expand/initial.scm 477 */
																										obj_t
																											BgL_newtail3301z00_1587;
																										{	/* Expand/initial.scm 477 */
																											obj_t BgL_arg3940z00_1589;

																											{	/* Expand/initial.scm 477 */
																												obj_t BgL_xz00_1591;

																												BgL_xz00_1591 =
																													CAR
																													(BgL_l3297z00_1583);
																												BgL_arg3940z00_1589 =
																													PROCEDURE_ENTRY
																													(BgL_ez00_1525)
																													(BgL_ez00_1525,
																													BgL_xz00_1591,
																													BgL_ez00_1525, BEOA);
																											}
																											BgL_newtail3301z00_1587 =
																												MAKE_PAIR
																												(BgL_arg3940z00_1589,
																												BNIL);
																										}
																										SET_CDR
																											(BgL_tail3300z00_1584,
																											BgL_newtail3301z00_1587);
																										{
																											obj_t
																												BgL_tail3300z00_7525;
																											obj_t BgL_l3297z00_7523;

																											BgL_l3297z00_7523 =
																												CDR(BgL_l3297z00_1583);
																											BgL_tail3300z00_7525 =
																												BgL_newtail3301z00_1587;
																											BgL_tail3300z00_1584 =
																												BgL_tail3300z00_7525;
																											BgL_l3297z00_1583 =
																												BgL_l3297z00_7523;
																											goto
																												BgL_zc3anonymousza33937ze3z83_1585;
																										}
																									}
																							}
																						}
																					BgL_arg3932z00_1575 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3934z00_1577, BNIL);
																				}
																				{	/* Expand/initial.scm 477 */
																					obj_t BgL_list3933z00_1576;

																					BgL_list3933z00_1576 =
																						MAKE_PAIR(BgL_arg3932z00_1575,
																						BNIL);
																					BgL_arg3930z00_1573 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3931z00_1574,
																						BgL_list3933z00_1576);
																				}
																			}
																			BgL_arg3915z00_1559 =
																				MAKE_PAIR(BgL_grz00_1542,
																				BgL_arg3930z00_1573);
																		}
																		{	/* Expand/initial.scm 478 */
																			obj_t BgL_arg3942z00_1593;

																			obj_t BgL_arg3943z00_1594;

																			BgL_arg3942z00_1593 =
																				CNST_TABLE_REF(((long) 17));
																			{	/* Expand/initial.scm 478 */
																				obj_t BgL_arg3944z00_1595;

																				{	/* Expand/initial.scm 478 */
																					obj_t BgL_arg3950z00_1601;

																					obj_t BgL_arg3951z00_1602;

																					BgL_arg3950z00_1601 =
																						CNST_TABLE_REF(((long) 130));
																					{	/* Expand/initial.scm 478 */
																						obj_t BgL_list3952z00_1603;

																						BgL_list3952z00_1603 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3951z00_1602 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 65)),
																							BgL_list3952z00_1603);
																					}
																					BgL_arg3944z00_1595 =
																						MAKE_PAIR(BgL_arg3950z00_1601,
																						BgL_arg3951z00_1602);
																				}
																				{	/* Expand/initial.scm 478 */
																					obj_t BgL_list3947z00_1598;

																					{	/* Expand/initial.scm 478 */
																						obj_t BgL_arg3948z00_1599;

																						{	/* Expand/initial.scm 478 */
																							obj_t BgL_arg3949z00_1600;

																							BgL_arg3949z00_1600 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3948z00_1599 =
																								MAKE_PAIR(BgL_grz00_1542,
																								BgL_arg3949z00_1600);
																						}
																						BgL_list3947z00_1598 =
																							MAKE_PAIR
																							(BGl_string5635z00zzexpand_installz00,
																							BgL_arg3948z00_1599);
																					}
																					BgL_arg3943z00_1594 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3944z00_1595,
																						BgL_list3947z00_1598);
																			}}
																			BgL_arg3916z00_1560 =
																				MAKE_PAIR(BgL_arg3942z00_1593,
																				BgL_arg3943z00_1594);
																		}
																		{	/* Expand/initial.scm 476 */
																			obj_t BgL_list3918z00_1562;

																			{	/* Expand/initial.scm 476 */
																				obj_t BgL_arg3919z00_1563;

																				{	/* Expand/initial.scm 476 */
																					obj_t BgL_arg3920z00_1564;

																					BgL_arg3920z00_1564 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3919z00_1563 =
																						MAKE_PAIR(BgL_arg3916z00_1560,
																						BgL_arg3920z00_1564);
																				}
																				BgL_list3918z00_1562 =
																					MAKE_PAIR(BgL_arg3915z00_1559,
																					BgL_arg3919z00_1563);
																			}
																			BgL_arg3913z00_1557 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3914z00_1558,
																				BgL_list3918z00_1562);
																	}}
																	BgL_arg3901z00_1546 =
																		MAKE_PAIR(BgL_arg3912z00_1556,
																		BgL_arg3913z00_1557);
																}
																{	/* Expand/initial.scm 475 */
																	obj_t BgL_list3903z00_1548;

																	{	/* Expand/initial.scm 475 */
																		obj_t BgL_arg3904z00_1549;

																		BgL_arg3904z00_1549 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3903z00_1548 =
																			MAKE_PAIR(BgL_arg3901z00_1546,
																			BgL_arg3904z00_1549);
																	}
																	BgL_arg3899z00_1544 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3900z00_1545, BgL_list3903z00_1548);
															}}
															return
																MAKE_PAIR(BgL_arg3898z00_1543,
																BgL_arg3899z00_1544);
														}
													}
												else
													{	/* Expand/initial.scm 479 */
														obj_t BgL_arg3953z00_1605;

														obj_t BgL_arg3954z00_1606;

														BgL_arg3953z00_1605 =
															PROCEDURE_ENTRY(BgL_ez00_1525) (BgL_ez00_1525,
															BgL_gz00_1527, BgL_ez00_1525, BEOA);
														{	/* Expand/initial.scm 479 */
															obj_t BgL_arg3955z00_1607;

															obj_t BgL_arg3956z00_1608;

															BgL_arg3955z00_1607 =
																PROCEDURE_ENTRY(BgL_ez00_1525) (BgL_ez00_1525,
																BgL_portz00_1528, BgL_ez00_1525, BEOA);
															{	/* Expand/initial.scm 479 */
																obj_t BgL_arg3958z00_1610;

																if (NULLP(BgL_optsz00_1529))
																	{	/* Expand/initial.scm 479 */
																		BgL_arg3958z00_1610 = BNIL;
																	}
																else
																	{	/* Expand/initial.scm 479 */
																		obj_t BgL_head3304z00_1614;

																		BgL_head3304z00_1614 =
																			MAKE_PAIR(BNIL, BNIL);
																		{
																			obj_t BgL_l3302z00_1616;

																			obj_t BgL_tail3305z00_1617;

																			BgL_l3302z00_1616 = BgL_optsz00_1529;
																			BgL_tail3305z00_1617 =
																				BgL_head3304z00_1614;
																		BgL_zc3anonymousza33961ze3z83_1618:
																			if (NULLP(BgL_l3302z00_1616))
																				{	/* Expand/initial.scm 479 */
																					BgL_arg3958z00_1610 =
																						CDR(BgL_head3304z00_1614);
																				}
																			else
																				{	/* Expand/initial.scm 479 */
																					obj_t BgL_newtail3306z00_1620;

																					{	/* Expand/initial.scm 479 */
																						obj_t BgL_arg3964z00_1622;

																						{	/* Expand/initial.scm 479 */
																							obj_t BgL_xz00_1624;

																							BgL_xz00_1624 =
																								CAR(BgL_l3302z00_1616);
																							BgL_arg3964z00_1622 =
																								PROCEDURE_ENTRY(BgL_ez00_1525)
																								(BgL_ez00_1525, BgL_xz00_1624,
																								BgL_ez00_1525, BEOA);
																						}
																						BgL_newtail3306z00_1620 =
																							MAKE_PAIR(BgL_arg3964z00_1622,
																							BNIL);
																					}
																					SET_CDR(BgL_tail3305z00_1617,
																						BgL_newtail3306z00_1620);
																					{
																						obj_t BgL_tail3305z00_7567;

																						obj_t BgL_l3302z00_7565;

																						BgL_l3302z00_7565 =
																							CDR(BgL_l3302z00_1616);
																						BgL_tail3305z00_7567 =
																							BgL_newtail3306z00_1620;
																						BgL_tail3305z00_1617 =
																							BgL_tail3305z00_7567;
																						BgL_l3302z00_1616 =
																							BgL_l3302z00_7565;
																						goto
																							BgL_zc3anonymousza33961ze3z83_1618;
																					}
																				}
																		}
																	}
																BgL_arg3956z00_1608 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3958z00_1610, BNIL);
															}
															{	/* Expand/initial.scm 479 */
																obj_t BgL_list3957z00_1609;

																BgL_list3957z00_1609 =
																	MAKE_PAIR(BgL_arg3956z00_1608, BNIL);
																BgL_arg3954z00_1606 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3955z00_1607, BgL_list3957z00_1609);
															}
														}
														return
															MAKE_PAIR(BgL_arg3953z00_1605,
															BgL_arg3954z00_1606);
													}
											}
										}
									else
										{	/* Expand/initial.scm 470 */
										BgL_tagzd21689zd2_1531:
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string5634z00zzexpand_installz00, BgL_xz00_1524);
										}
								}
							else
								{	/* Expand/initial.scm 470 */
									goto BgL_tagzd21689zd2_1531;
								}
						}
					else
						{	/* Expand/initial.scm 470 */
							goto BgL_tagzd21689zd2_1531;
						}
				}
			}
		}
	}



/* <anonymous:3851> */
	obj_t BGl_zc3anonymousza33851ze3z83zzexpand_installz00(obj_t BgL_envz00_5300,
		obj_t BgL_xz00_5301, obj_t BgL_ez00_5302)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 456 */
			{
				obj_t BgL_xz00_1471;

				obj_t BgL_ez00_1472;

				BgL_xz00_1471 = BgL_xz00_5301;
				BgL_ez00_1472 = BgL_ez00_5302;
				{
					obj_t BgL_portz00_1474;

					obj_t BgL_portz00_1476;

					obj_t BgL_valuez00_1477;

					if (PAIRP(BgL_xz00_1471))
						{	/* Expand/initial.scm 456 */
							obj_t BgL_cdrzd21655zd2_1483;

							BgL_cdrzd21655zd2_1483 = CDR(BgL_xz00_1471);
							if (PAIRP(BgL_cdrzd21655zd2_1483))
								{	/* Expand/initial.scm 456 */
									if (NULLP(CDR(BgL_cdrzd21655zd2_1483)))
										{	/* Expand/initial.scm 456 */
											BgL_portz00_1474 = CAR(BgL_cdrzd21655zd2_1483);
											{	/* Expand/initial.scm 459 */
												obj_t BgL_arg3864z00_1497;

												obj_t BgL_arg3865z00_1498;

												BgL_arg3864z00_1497 = CNST_TABLE_REF(((long) 64));
												{	/* Expand/initial.scm 459 */
													obj_t BgL_arg3866z00_1499;

													BgL_arg3866z00_1499 =
														PROCEDURE_ENTRY(BgL_ez00_1472) (BgL_ez00_1472,
														BgL_portz00_1474, BgL_ez00_1472, BEOA);
													{	/* Expand/initial.scm 459 */
														obj_t BgL_list3868z00_1501;

														BgL_list3868z00_1501 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3865z00_1498 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3866z00_1499, BgL_list3868z00_1501);
												}}
												return
													MAKE_PAIR(BgL_arg3864z00_1497, BgL_arg3865z00_1498);
											}
										}
									else
										{	/* Expand/initial.scm 456 */
											obj_t BgL_cdrzd21671zd2_1488;

											BgL_cdrzd21671zd2_1488 = CDR(BgL_cdrzd21655zd2_1483);
											if (PAIRP(BgL_cdrzd21671zd2_1488))
												{	/* Expand/initial.scm 456 */
													if (NULLP(CDR(BgL_cdrzd21671zd2_1488)))
														{	/* Expand/initial.scm 456 */
															BgL_portz00_1476 = CAR(BgL_cdrzd21655zd2_1483);
															BgL_valuez00_1477 = CAR(BgL_cdrzd21671zd2_1488);
															{	/* Expand/initial.scm 461 */
																obj_t BgL_arg3869z00_1502;

																obj_t BgL_arg3870z00_1503;

																BgL_arg3869z00_1502 =
																	CNST_TABLE_REF(((long) 64));
																{	/* Expand/initial.scm 461 */
																	obj_t BgL_arg3871z00_1504;

																	obj_t BgL_arg3872z00_1505;

																	BgL_arg3871z00_1504 =
																		PROCEDURE_ENTRY(BgL_ez00_1472)
																		(BgL_ez00_1472, BgL_portz00_1476,
																		BgL_ez00_1472, BEOA);
																	BgL_arg3872z00_1505 =
																		PROCEDURE_ENTRY(BgL_ez00_1472)
																		(BgL_ez00_1472, BgL_valuez00_1477,
																		BgL_ez00_1472, BEOA);
																	{	/* Expand/initial.scm 461 */
																		obj_t BgL_list3874z00_1507;

																		{	/* Expand/initial.scm 461 */
																			obj_t BgL_arg3875z00_1508;

																			BgL_arg3875z00_1508 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3874z00_1507 =
																				MAKE_PAIR(BgL_arg3872z00_1505,
																				BgL_arg3875z00_1508);
																		}
																		BgL_arg3870z00_1503 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3871z00_1504,
																			BgL_list3874z00_1507);
																}}
																return
																	MAKE_PAIR(BgL_arg3869z00_1502,
																	BgL_arg3870z00_1503);
															}
														}
													else
														{	/* Expand/initial.scm 456 */
														BgL_tagzd21649zd2_1480:
															return
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string5636z00zzexpand_installz00,
																BgL_xz00_1471);
														}
												}
											else
												{	/* Expand/initial.scm 456 */
													goto BgL_tagzd21649zd2_1480;
												}
										}
								}
							else
								{	/* Expand/initial.scm 456 */
									if (NULLP(BgL_cdrzd21655zd2_1483))
										{	/* Expand/initial.scm 456 */
											{	/* Expand/initial.scm 463 */
												obj_t BgL_arg3876z00_1509;

												obj_t BgL_arg3877z00_1510;

												BgL_arg3876z00_1509 = CNST_TABLE_REF(((long) 64));
												{	/* Expand/initial.scm 463 */
													obj_t BgL_arg3878z00_1511;

													{	/* Expand/initial.scm 463 */
														obj_t BgL_arg3881z00_1514;

														{	/* Expand/initial.scm 463 */
															obj_t BgL_arg3883z00_1516;

															obj_t BgL_arg3884z00_1517;

															BgL_arg3883z00_1516 =
																CNST_TABLE_REF(((long) 143));
															{	/* Expand/initial.scm 463 */
																obj_t BgL_list3885z00_1518;

																{	/* Expand/initial.scm 463 */
																	obj_t BgL_arg3886z00_1519;

																	obj_t BgL_arg3887z00_1520;

																	BgL_arg3886z00_1519 =
																		CNST_TABLE_REF(((long) 146));
																	BgL_arg3887z00_1520 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3885z00_1518 =
																		MAKE_PAIR(BgL_arg3886z00_1519,
																		BgL_arg3887z00_1520);
																}
																BgL_arg3884z00_1517 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 172)),
																	BgL_list3885z00_1518);
															}
															BgL_arg3881z00_1514 =
																MAKE_PAIR(BgL_arg3883z00_1516,
																BgL_arg3884z00_1517);
														}
														BgL_arg3878z00_1511 =
															MAKE_PAIR(BgL_arg3881z00_1514, BNIL);
													}
													{	/* Expand/initial.scm 463 */
														obj_t BgL_list3880z00_1513;

														BgL_list3880z00_1513 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3877z00_1510 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3878z00_1511, BgL_list3880z00_1513);
												}}
												return
													MAKE_PAIR(BgL_arg3876z00_1509, BgL_arg3877z00_1510);
											}
										}
									else
										{	/* Expand/initial.scm 456 */
											goto BgL_tagzd21649zd2_1480;
										}
								}
						}
					else
						{	/* Expand/initial.scm 456 */
							goto BgL_tagzd21649zd2_1480;
						}
				}
			}
		}
	}



/* <anonymous:3825> */
	obj_t BGl_zc3anonymousza33825ze3z83zzexpand_installz00(obj_t BgL_envz00_5303,
		obj_t BgL_xz00_5304, obj_t BgL_ez00_5305)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 425 */
			{
				obj_t BgL_xz00_1435;

				obj_t BgL_ez00_1436;

				BgL_xz00_1435 = BgL_xz00_5304;
				BgL_ez00_1436 = BgL_ez00_5305;
				{
					obj_t BgL_nz00_1438;

					obj_t BgL_mz00_1439;

					if (PAIRP(BgL_xz00_1435))
						{	/* Expand/initial.scm 425 */
							obj_t BgL_cdrzd21636zd2_1444;

							BgL_cdrzd21636zd2_1444 = CDR(BgL_xz00_1435);
							if (PAIRP(BgL_cdrzd21636zd2_1444))
								{	/* Expand/initial.scm 425 */
									obj_t BgL_cdrzd21640zd2_1446;

									BgL_cdrzd21640zd2_1446 = CDR(BgL_cdrzd21636zd2_1444);
									if (PAIRP(BgL_cdrzd21640zd2_1446))
										{	/* Expand/initial.scm 425 */
											if (NULLP(CDR(BgL_cdrzd21640zd2_1446)))
												{	/* Expand/initial.scm 425 */
													BgL_nz00_1438 = CAR(BgL_cdrzd21636zd2_1444);
													BgL_mz00_1439 = CAR(BgL_cdrzd21640zd2_1446);
													if (CBOOL
														(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
														{	/* Expand/initial.scm 429 */
															obj_t BgL_arg3833z00_1452;

															obj_t BgL_arg3834z00_1453;

															BgL_arg3833z00_1452 =
																CNST_TABLE_REF(((long) 173));
															{	/* Expand/initial.scm 429 */
																obj_t BgL_arg3835z00_1454;

																obj_t BgL_arg3836z00_1455;

																BgL_arg3835z00_1454 =
																	PROCEDURE_ENTRY(BgL_ez00_1436) (BgL_ez00_1436,
																	BgL_nz00_1438, BgL_ez00_1436, BEOA);
																BgL_arg3836z00_1455 =
																	PROCEDURE_ENTRY(BgL_ez00_1436) (BgL_ez00_1436,
																	BgL_mz00_1439, BgL_ez00_1436, BEOA);
																{	/* Expand/initial.scm 429 */
																	obj_t BgL_list3838z00_1457;

																	{	/* Expand/initial.scm 429 */
																		obj_t BgL_arg3839z00_1458;

																		BgL_arg3839z00_1458 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3838z00_1457 =
																			MAKE_PAIR(BgL_arg3836z00_1455,
																			BgL_arg3839z00_1458);
																	}
																	BgL_arg3834z00_1453 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3835z00_1454, BgL_list3838z00_1457);
															}}
															return
																MAKE_PAIR(BgL_arg3833z00_1452,
																BgL_arg3834z00_1453);
														}
													else
														{	/* Expand/initial.scm 430 */
															obj_t BgL_arg3840z00_1459;

															obj_t BgL_arg3841z00_1460;

															BgL_arg3840z00_1459 = CNST_TABLE_REF(((long) 57));
															{	/* Expand/initial.scm 430 */
																obj_t BgL_arg3842z00_1461;

																obj_t BgL_arg3843z00_1462;

																BgL_arg3842z00_1461 =
																	PROCEDURE_ENTRY(BgL_ez00_1436) (BgL_ez00_1436,
																	BgL_nz00_1438, BgL_ez00_1436, BEOA);
																BgL_arg3843z00_1462 =
																	PROCEDURE_ENTRY(BgL_ez00_1436) (BgL_ez00_1436,
																	BgL_mz00_1439, BgL_ez00_1436, BEOA);
																{	/* Expand/initial.scm 430 */
																	obj_t BgL_list3845z00_1464;

																	{	/* Expand/initial.scm 430 */
																		obj_t BgL_arg3846z00_1465;

																		BgL_arg3846z00_1465 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3845z00_1464 =
																			MAKE_PAIR(BgL_arg3843z00_1462,
																			BgL_arg3846z00_1465);
																	}
																	BgL_arg3841z00_1460 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3842z00_1461, BgL_list3845z00_1464);
															}}
															return
																MAKE_PAIR(BgL_arg3840z00_1459,
																BgL_arg3841z00_1460);
														}
												}
											else
												{	/* Expand/initial.scm 425 */
												BgL_tagzd21629zd2_1441:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string5637z00zzexpand_installz00,
														BgL_xz00_1435);
												}
										}
									else
										{	/* Expand/initial.scm 425 */
											goto BgL_tagzd21629zd2_1441;
										}
								}
							else
								{	/* Expand/initial.scm 425 */
									goto BgL_tagzd21629zd2_1441;
								}
						}
					else
						{	/* Expand/initial.scm 425 */
							goto BgL_tagzd21629zd2_1441;
						}
				}
			}
		}
	}



/* <anonymous:3807> */
	obj_t BGl_zc3anonymousza33807ze3z83zzexpand_installz00(obj_t BgL_envz00_5306,
		obj_t BgL_xz00_5307, obj_t BgL_ez00_5308)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 414 */
			{
				obj_t BgL_xz00_1409;

				obj_t BgL_ez00_1410;

				BgL_xz00_1409 = BgL_xz00_5307;
				BgL_ez00_1410 = BgL_ez00_5308;
				{
					obj_t BgL_nz00_1412;

					if (PAIRP(BgL_xz00_1409))
						{	/* Expand/initial.scm 414 */
							obj_t BgL_cdrzd21623zd2_1417;

							BgL_cdrzd21623zd2_1417 = CDR(BgL_xz00_1409);
							if (PAIRP(BgL_cdrzd21623zd2_1417))
								{	/* Expand/initial.scm 414 */
									if (NULLP(CDR(BgL_cdrzd21623zd2_1417)))
										{	/* Expand/initial.scm 414 */
											BgL_nz00_1412 = CAR(BgL_cdrzd21623zd2_1417);
											if (CBOOL(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
												{	/* Expand/initial.scm 418 */
													obj_t BgL_arg3813z00_1422;

													obj_t BgL_arg3814z00_1423;

													BgL_arg3813z00_1422 = CNST_TABLE_REF(((long) 174));
													{	/* Expand/initial.scm 418 */
														obj_t BgL_arg3815z00_1424;

														BgL_arg3815z00_1424 =
															PROCEDURE_ENTRY(BgL_ez00_1410) (BgL_ez00_1410,
															BgL_nz00_1412, BgL_ez00_1410, BEOA);
														{	/* Expand/initial.scm 418 */
															obj_t BgL_list3817z00_1426;

															BgL_list3817z00_1426 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3814z00_1423 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3815z00_1424, BgL_list3817z00_1426);
													}}
													return
														MAKE_PAIR(BgL_arg3813z00_1422, BgL_arg3814z00_1423);
												}
											else
												{	/* Expand/initial.scm 419 */
													obj_t BgL_arg3818z00_1427;

													obj_t BgL_arg3819z00_1428;

													BgL_arg3818z00_1427 = CNST_TABLE_REF(((long) 56));
													{	/* Expand/initial.scm 419 */
														obj_t BgL_arg3820z00_1429;

														BgL_arg3820z00_1429 =
															PROCEDURE_ENTRY(BgL_ez00_1410) (BgL_ez00_1410,
															BgL_nz00_1412, BgL_ez00_1410, BEOA);
														{	/* Expand/initial.scm 419 */
															obj_t BgL_list3822z00_1431;

															BgL_list3822z00_1431 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3819z00_1428 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3820z00_1429, BgL_list3822z00_1431);
													}}
													return
														MAKE_PAIR(BgL_arg3818z00_1427, BgL_arg3819z00_1428);
												}
										}
									else
										{	/* Expand/initial.scm 414 */
										BgL_tagzd21618zd2_1414:
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string5638z00zzexpand_installz00, BgL_xz00_1409);
										}
								}
							else
								{	/* Expand/initial.scm 414 */
									goto BgL_tagzd21618zd2_1414;
								}
						}
					else
						{	/* Expand/initial.scm 414 */
							goto BgL_tagzd21618zd2_1414;
						}
				}
			}
		}
	}



/* <anonymous:3804> */
	obj_t BGl_zc3anonymousza33804ze3z83zzexpand_installz00(obj_t BgL_envz00_5309,
		obj_t BgL_xz00_5310, obj_t BgL_ez00_5311)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 384 */
			{
				obj_t BgL_xz00_1403;

				obj_t BgL_ez00_1404;

				BgL_xz00_1403 = BgL_xz00_5310;
				BgL_ez00_1404 = BgL_ez00_5311;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1403,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1404);
		}}
	}



/* <anonymous:3800> */
	obj_t BGl_zc3anonymousza33800ze3z83zzexpand_installz00(obj_t BgL_envz00_5312,
		obj_t BgL_xz00_5313, obj_t BgL_ez00_5314)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 382 */
			{
				obj_t BgL_xz00_1397;

				obj_t BgL_ez00_1398;

				BgL_xz00_1397 = BgL_xz00_5313;
				BgL_ez00_1398 = BgL_ez00_5314;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1397,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1398);
		}}
	}



/* <anonymous:3797> */
	obj_t BGl_zc3anonymousza33797ze3z83zzexpand_installz00(obj_t BgL_envz00_5315,
		obj_t BgL_xz00_5316, obj_t BgL_ez00_5317)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 380 */
			{
				obj_t BgL_xz00_1391;

				obj_t BgL_ez00_1392;

				BgL_xz00_1391 = BgL_xz00_5316;
				BgL_ez00_1392 = BgL_ez00_5317;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1391,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1392);
		}}
	}



/* <anonymous:3794> */
	obj_t BGl_zc3anonymousza33794ze3z83zzexpand_installz00(obj_t BgL_envz00_5318,
		obj_t BgL_xz00_5319, obj_t BgL_ez00_5320)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 378 */
			{
				obj_t BgL_xz00_1385;

				obj_t BgL_ez00_1386;

				BgL_xz00_1385 = BgL_xz00_5319;
				BgL_ez00_1386 = BgL_ez00_5320;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1385,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1386);
		}}
	}



/* <anonymous:3791> */
	obj_t BGl_zc3anonymousza33791ze3z83zzexpand_installz00(obj_t BgL_envz00_5321,
		obj_t BgL_xz00_5322, obj_t BgL_ez00_5323)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 376 */
			{
				obj_t BgL_xz00_1379;

				obj_t BgL_ez00_1380;

				BgL_xz00_1379 = BgL_xz00_5322;
				BgL_ez00_1380 = BgL_ez00_5323;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1379,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1380);
		}}
	}



/* <anonymous:3788> */
	obj_t BGl_zc3anonymousza33788ze3z83zzexpand_installz00(obj_t BgL_envz00_5324,
		obj_t BgL_xz00_5325, obj_t BgL_ez00_5326)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 374 */
			{
				obj_t BgL_xz00_1373;

				obj_t BgL_ez00_1374;

				BgL_xz00_1373 = BgL_xz00_5325;
				BgL_ez00_1374 = BgL_ez00_5326;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1373,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1374);
		}}
	}



/* <anonymous:3785> */
	obj_t BGl_zc3anonymousza33785ze3z83zzexpand_installz00(obj_t BgL_envz00_5327,
		obj_t BgL_xz00_5328, obj_t BgL_ez00_5329)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 372 */
			{
				obj_t BgL_xz00_1367;

				obj_t BgL_ez00_1368;

				BgL_xz00_1367 = BgL_xz00_5328;
				BgL_ez00_1368 = BgL_ez00_5329;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1367,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1368);
		}}
	}



/* <anonymous:3782> */
	obj_t BGl_zc3anonymousza33782ze3z83zzexpand_installz00(obj_t BgL_envz00_5330,
		obj_t BgL_xz00_5331, obj_t BgL_ez00_5332)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 370 */
			{
				obj_t BgL_xz00_1361;

				obj_t BgL_ez00_1362;

				BgL_xz00_1361 = BgL_xz00_5331;
				BgL_ez00_1362 = BgL_ez00_5332;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1361,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1362);
		}}
	}



/* <anonymous:3779> */
	obj_t BGl_zc3anonymousza33779ze3z83zzexpand_installz00(obj_t BgL_envz00_5333,
		obj_t BgL_xz00_5334, obj_t BgL_ez00_5335)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 368 */
			{
				obj_t BgL_xz00_1355;

				obj_t BgL_ez00_1356;

				BgL_xz00_1355 = BgL_xz00_5334;
				BgL_ez00_1356 = BgL_ez00_5335;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1355,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1356);
		}}
	}



/* <anonymous:3776> */
	obj_t BGl_zc3anonymousza33776ze3z83zzexpand_installz00(obj_t BgL_envz00_5336,
		obj_t BgL_xz00_5337, obj_t BgL_ez00_5338)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 366 */
			{
				obj_t BgL_xz00_1349;

				obj_t BgL_ez00_1350;

				BgL_xz00_1349 = BgL_xz00_5337;
				BgL_ez00_1350 = BgL_ez00_5338;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1349,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1350);
		}}
	}



/* <anonymous:3773> */
	obj_t BGl_zc3anonymousza33773ze3z83zzexpand_installz00(obj_t BgL_envz00_5339,
		obj_t BgL_xz00_5340, obj_t BgL_ez00_5341)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 364 */
			{
				obj_t BgL_xz00_1343;

				obj_t BgL_ez00_1344;

				BgL_xz00_1343 = BgL_xz00_5340;
				BgL_ez00_1344 = BgL_ez00_5341;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1343,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1344);
		}}
	}



/* <anonymous:3770> */
	obj_t BGl_zc3anonymousza33770ze3z83zzexpand_installz00(obj_t BgL_envz00_5342,
		obj_t BgL_xz00_5343, obj_t BgL_ez00_5344)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 362 */
			{
				obj_t BgL_xz00_1337;

				obj_t BgL_ez00_1338;

				BgL_xz00_1337 = BgL_xz00_5343;
				BgL_ez00_1338 = BgL_ez00_5344;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1337,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1338);
		}}
	}



/* <anonymous:3767> */
	obj_t BGl_zc3anonymousza33767ze3z83zzexpand_installz00(obj_t BgL_envz00_5345,
		obj_t BgL_xz00_5346, obj_t BgL_ez00_5347)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 360 */
			{
				obj_t BgL_xz00_1331;

				obj_t BgL_ez00_1332;

				BgL_xz00_1331 = BgL_xz00_5346;
				BgL_ez00_1332 = BgL_ez00_5347;
				return
					BGl_callzd2checkzd2zzexpand_installz00(BgL_xz00_1331,
					CNST_TABLE_REF(((long) 139)), BGl_string5624z00zzexpand_installz00,
					BgL_ez00_1332);
		}}
	}



/* <anonymous:3728> */
	obj_t BGl_zc3anonymousza33728ze3z83zzexpand_installz00(obj_t BgL_envz00_5348,
		obj_t BgL_xz00_5349, obj_t BgL_ez00_5350)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 285 */
			{
				obj_t BgL_xz00_1276;

				obj_t BgL_ez00_1277;

				BgL_xz00_1276 = BgL_xz00_5349;
				BgL_ez00_1277 = BgL_ez00_5350;
				{
					obj_t BgL_a1z00_1279;

					obj_t BgL_a2z00_1280;

					if (PAIRP(BgL_xz00_1276))
						{	/* Expand/initial.scm 285 */
							obj_t BgL_cdrzd21607zd2_1285;

							BgL_cdrzd21607zd2_1285 = CDR(BgL_xz00_1276);
							if (PAIRP(BgL_cdrzd21607zd2_1285))
								{	/* Expand/initial.scm 285 */
									obj_t BgL_cdrzd21611zd2_1287;

									BgL_cdrzd21611zd2_1287 = CDR(BgL_cdrzd21607zd2_1285);
									if (PAIRP(BgL_cdrzd21611zd2_1287))
										{	/* Expand/initial.scm 285 */
											if (NULLP(CDR(BgL_cdrzd21611zd2_1287)))
												{	/* Expand/initial.scm 285 */
													BgL_a1z00_1279 = CAR(BgL_cdrzd21607zd2_1285);
													BgL_a2z00_1280 = CAR(BgL_cdrzd21611zd2_1287);
													{	/* Expand/initial.scm 288 */
														bool_t BgL_testz00_7718;

														if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
															(BgL_a1z00_1279))
															{	/* Expand/initial.scm 288 */
																BgL_testz00_7718 =
																	BGl_numberzf3zf3zz__r4_numbers_6_5z00
																	(BgL_a2z00_1280);
															}
														else
															{	/* Expand/initial.scm 288 */
																BgL_testz00_7718 = ((bool_t) 0);
															}
														if (BgL_testz00_7718)
															{	/* Expand/initial.scm 288 */
																return
																	BBOOL(BGl_2zd3zd3zz__r4_numbers_6_5z00
																	(BgL_a1z00_1279, BgL_a2z00_1280));
															}
														else
															{	/* Expand/initial.scm 290 */
																obj_t BgL_arg3737z00_1294;

																obj_t BgL_arg3738z00_1295;

																{	/* Expand/initial.scm 290 */
																	bool_t BgL_testz00_7724;

																	if (CHARP(BgL_a1z00_1279))
																		{	/* Expand/initial.scm 290 */
																			BgL_testz00_7724 = ((bool_t) 1);
																		}
																	else
																		{	/* Expand/initial.scm 290 */
																			if (CHARP(BgL_a2z00_1280))
																				{	/* Expand/initial.scm 291 */
																					BgL_testz00_7724 = ((bool_t) 1);
																				}
																			else
																				{	/* Expand/initial.scm 292 */
																					bool_t BgL_testz00_7729;

																					if (PAIRP(BgL_a1z00_1279))
																						{	/* Expand/initial.scm 292 */
																							if (
																								(CAR(BgL_a1z00_1279) ==
																									CNST_TABLE_REF(((long) 130))))
																								{	/* Expand/initial.scm 294 */
																									bool_t
																										BgL__ortest_3253z00_1313;
																									BgL__ortest_3253z00_1313 =
																										INTEGERP(CAR(CDR
																											(BgL_a1z00_1279)));
																									if (BgL__ortest_3253z00_1313)
																										{	/* Expand/initial.scm 294 */
																											BgL_testz00_7729 =
																												BgL__ortest_3253z00_1313;
																										}
																									else
																										{	/* Expand/initial.scm 295 */
																											bool_t
																												BgL__ortest_3254z00_1314;
																											{	/* Expand/initial.scm 295 */
																												obj_t BgL_auxz00_7740;

																												BgL_auxz00_7740 =
																													CAR(CDR
																													(BgL_a1z00_1279));
																												BgL__ortest_3254z00_1314
																													=
																													CHARP
																													(BgL_auxz00_7740);
																											}
																											if (BgL__ortest_3254z00_1314)
																												{	/* Expand/initial.scm 295 */
																													BgL_testz00_7729 =
																														BgL__ortest_3254z00_1314;
																												}
																											else
																												{	/* Expand/initial.scm 296 */
																													bool_t
																														BgL__ortest_3255z00_1315;
																													{	/* Expand/initial.scm 296 */
																														obj_t
																															BgL_auxz00_7745;
																														BgL_auxz00_7745 =
																															CAR(CDR
																															(BgL_a1z00_1279));
																														BgL__ortest_3255z00_1315
																															=
																															SYMBOLP
																															(BgL_auxz00_7745);
																													}
																													if (BgL__ortest_3255z00_1315)
																														{	/* Expand/initial.scm 296 */
																															BgL_testz00_7729 =
																																BgL__ortest_3255z00_1315;
																														}
																													else
																														{	/* Expand/initial.scm 297 */
																															obj_t
																																BgL_auxz00_7750;
																															BgL_auxz00_7750 =
																																CAR(CDR
																																(BgL_a1z00_1279));
																															BgL_testz00_7729 =
																																KEYWORDP
																																(BgL_auxz00_7750);
																														}
																												}
																										}
																								}
																							else
																								{	/* Expand/initial.scm 293 */
																									BgL_testz00_7729 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Expand/initial.scm 292 */
																							BgL_testz00_7729 = ((bool_t) 0);
																						}
																					if (BgL_testz00_7729)
																						{	/* Expand/initial.scm 292 */
																							BgL_testz00_7724 = ((bool_t) 1);
																						}
																					else
																						{	/* Expand/initial.scm 292 */
																							if (PAIRP(BgL_a2z00_1280))
																								{	/* Expand/initial.scm 298 */
																									if (
																										(CAR(BgL_a2z00_1280) ==
																											CNST_TABLE_REF(((long)
																													130))))
																										{	/* Expand/initial.scm 300 */
																											bool_t
																												BgL__ortest_3258z00_1302;
																											BgL__ortest_3258z00_1302 =
																												INTEGERP(CAR(CDR
																													(BgL_a2z00_1280)));
																											if (BgL__ortest_3258z00_1302)
																												{	/* Expand/initial.scm 300 */
																													BgL_testz00_7724 =
																														BgL__ortest_3258z00_1302;
																												}
																											else
																												{	/* Expand/initial.scm 301 */
																													bool_t
																														BgL__ortest_3259z00_1303;
																													{	/* Expand/initial.scm 301 */
																														obj_t
																															BgL_auxz00_7764;
																														BgL_auxz00_7764 =
																															CAR(CDR
																															(BgL_a2z00_1280));
																														BgL__ortest_3259z00_1303
																															=
																															CHARP
																															(BgL_auxz00_7764);
																													}
																													if (BgL__ortest_3259z00_1303)
																														{	/* Expand/initial.scm 301 */
																															BgL_testz00_7724 =
																																BgL__ortest_3259z00_1303;
																														}
																													else
																														{	/* Expand/initial.scm 302 */
																															bool_t
																																BgL__ortest_3260z00_1304;
																															{	/* Expand/initial.scm 302 */
																																obj_t
																																	BgL_auxz00_7769;
																																BgL_auxz00_7769
																																	=
																																	CAR(CDR
																																	(BgL_a2z00_1280));
																																BgL__ortest_3260z00_1304
																																	=
																																	SYMBOLP
																																	(BgL_auxz00_7769);
																															}
																															if (BgL__ortest_3260z00_1304)
																																{	/* Expand/initial.scm 302 */
																																	BgL_testz00_7724
																																		=
																																		BgL__ortest_3260z00_1304;
																																}
																															else
																																{	/* Expand/initial.scm 303 */
																																	obj_t
																																		BgL_auxz00_7774;
																																	BgL_auxz00_7774
																																		=
																																		CAR(CDR
																																		(BgL_a2z00_1280));
																																	BgL_testz00_7724
																																		=
																																		KEYWORDP
																																		(BgL_auxz00_7774);
																																}
																														}
																												}
																										}
																									else
																										{	/* Expand/initial.scm 299 */
																											BgL_testz00_7724 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Expand/initial.scm 298 */
																									BgL_testz00_7724 =
																										((bool_t) 0);
																								}
																						}
																				}
																		}
																	if (BgL_testz00_7724)
																		{	/* Expand/initial.scm 290 */
																			BgL_arg3737z00_1294 =
																				CNST_TABLE_REF(((long) 48));
																		}
																	else
																		{	/* Expand/initial.scm 290 */
																			BgL_arg3737z00_1294 =
																				CNST_TABLE_REF(((long) 34));
																}}
																{	/* Expand/initial.scm 306 */
																	obj_t BgL_arg3759z00_1322;

																	obj_t BgL_arg3760z00_1323;

																	BgL_arg3759z00_1322 =
																		PROCEDURE_ENTRY(BgL_ez00_1277)
																		(BgL_ez00_1277, BgL_a1z00_1279,
																		BgL_ez00_1277, BEOA);
																	BgL_arg3760z00_1323 =
																		PROCEDURE_ENTRY(BgL_ez00_1277)
																		(BgL_ez00_1277, BgL_a2z00_1280,
																		BgL_ez00_1277, BEOA);
																	{	/* Expand/initial.scm 290 */
																		obj_t BgL_list3762z00_1325;

																		{	/* Expand/initial.scm 290 */
																			obj_t BgL_arg3763z00_1326;

																			BgL_arg3763z00_1326 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3762z00_1325 =
																				MAKE_PAIR(BgL_arg3760z00_1323,
																				BgL_arg3763z00_1326);
																		}
																		BgL_arg3738z00_1295 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3759z00_1322,
																			BgL_list3762z00_1325);
																}}
																return
																	MAKE_PAIR(BgL_arg3737z00_1294,
																	BgL_arg3738z00_1295);
															}
													}
												}
											else
												{	/* Expand/initial.scm 285 */
												BgL_tagzd21600zd2_1282:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string5639z00zzexpand_installz00,
														BgL_xz00_1276);
												}
										}
									else
										{	/* Expand/initial.scm 285 */
											goto BgL_tagzd21600zd2_1282;
										}
								}
							else
								{	/* Expand/initial.scm 285 */
									goto BgL_tagzd21600zd2_1282;
								}
						}
					else
						{	/* Expand/initial.scm 285 */
							goto BgL_tagzd21600zd2_1282;
						}
				}
			}
		}
	}



/* <anonymous:3679> */
	obj_t BGl_zc3anonymousza33679ze3z83zzexpand_installz00(obj_t BgL_envz00_5351,
		obj_t BgL_xz00_5352, obj_t BgL_ez00_5353)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 254 */
			{
				obj_t BgL_xz00_1209;

				obj_t BgL_ez00_1210;

				BgL_xz00_1209 = BgL_xz00_5352;
				BgL_ez00_1210 = BgL_ez00_5353;
				{
					obj_t BgL_a1z00_1212;

					obj_t BgL_a2z00_1213;

					if (PAIRP(BgL_xz00_1209))
						{	/* Expand/initial.scm 254 */
							obj_t BgL_cdrzd21589zd2_1218;

							BgL_cdrzd21589zd2_1218 = CDR(BgL_xz00_1209);
							if (PAIRP(BgL_cdrzd21589zd2_1218))
								{	/* Expand/initial.scm 254 */
									obj_t BgL_cdrzd21593zd2_1220;

									BgL_cdrzd21593zd2_1220 = CDR(BgL_cdrzd21589zd2_1218);
									if (PAIRP(BgL_cdrzd21593zd2_1220))
										{	/* Expand/initial.scm 254 */
											if (NULLP(CDR(BgL_cdrzd21593zd2_1220)))
												{	/* Expand/initial.scm 254 */
													BgL_a1z00_1212 = CAR(BgL_cdrzd21589zd2_1218);
													BgL_a2z00_1213 = CAR(BgL_cdrzd21593zd2_1220);
													{	/* Expand/initial.scm 258 */
														bool_t BgL_testz00_7802;

														if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
															(BgL_a1z00_1212))
															{	/* Expand/initial.scm 258 */
																BgL_testz00_7802 =
																	BGl_numberzf3zf3zz__r4_numbers_6_5z00
																	(BgL_a2z00_1213);
															}
														else
															{	/* Expand/initial.scm 258 */
																BgL_testz00_7802 = ((bool_t) 0);
															}
														if (BgL_testz00_7802)
															{	/* Expand/initial.scm 258 */
																return
																	BBOOL(BGl_2zd3zd3zz__r4_numbers_6_5z00
																	(BgL_a1z00_1212, BgL_a2z00_1213));
															}
														else
															{	/* Expand/initial.scm 260 */
																bool_t BgL_testz00_7808;

																if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
																	(BgL_a1z00_1212))
																	{	/* Expand/initial.scm 260 */
																		BgL_testz00_7808 = ((bool_t) 1);
																	}
																else
																	{	/* Expand/initial.scm 260 */
																		BgL_testz00_7808 =
																			BGl_numberzf3zf3zz__r4_numbers_6_5z00
																			(BgL_a2z00_1213);
																	}
																if (BgL_testz00_7808)
																	{	/* Expand/initial.scm 261 */
																		obj_t BgL_arg3689z00_1228;

																		{	/* Expand/initial.scm 261 */
																			obj_t BgL_arg3690z00_1229;

																			obj_t BgL_arg3691z00_1230;

																			BgL_arg3690z00_1229 =
																				CNST_TABLE_REF(((long) 34));
																			{	/* Expand/initial.scm 261 */
																				obj_t BgL_list3692z00_1231;

																				{	/* Expand/initial.scm 261 */
																					obj_t BgL_arg3693z00_1232;

																					BgL_arg3693z00_1232 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3692z00_1231 =
																						MAKE_PAIR(BgL_a2z00_1213,
																						BgL_arg3693z00_1232);
																				}
																				BgL_arg3691z00_1230 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_a1z00_1212,
																					BgL_list3692z00_1231);
																			}
																			BgL_arg3689z00_1228 =
																				MAKE_PAIR(BgL_arg3690z00_1229,
																				BgL_arg3691z00_1230);
																		}
																		return
																			PROCEDURE_ENTRY(BgL_ez00_1210)
																			(BgL_ez00_1210, BgL_arg3689z00_1228,
																			BgL_ez00_1210, BEOA);
																	}
																else
																	{	/* Expand/initial.scm 262 */
																		bool_t BgL_testz00_7819;

																		if (CHARP(BgL_a1z00_1212))
																			{	/* Expand/initial.scm 262 */
																				BgL_testz00_7819 = ((bool_t) 1);
																			}
																		else
																			{	/* Expand/initial.scm 262 */
																				if (CHARP(BgL_a2z00_1213))
																					{	/* Expand/initial.scm 263 */
																						BgL_testz00_7819 = ((bool_t) 1);
																					}
																				else
																					{	/* Expand/initial.scm 264 */
																						bool_t BgL_testz00_7824;

																						if (PAIRP(BgL_a1z00_1212))
																							{	/* Expand/initial.scm 264 */
																								if (
																									(CAR(BgL_a1z00_1212) ==
																										CNST_TABLE_REF(((long)
																												130))))
																									{	/* Expand/initial.scm 266 */
																										bool_t
																											BgL__ortest_3245z00_1262;
																										BgL__ortest_3245z00_1262 =
																											INTEGERP(CAR(CDR
																												(BgL_a1z00_1212)));
																										if (BgL__ortest_3245z00_1262)
																											{	/* Expand/initial.scm 266 */
																												BgL_testz00_7824 =
																													BgL__ortest_3245z00_1262;
																											}
																										else
																											{	/* Expand/initial.scm 267 */
																												bool_t
																													BgL__ortest_3246z00_1263;
																												{	/* Expand/initial.scm 267 */
																													obj_t BgL_auxz00_7835;

																													BgL_auxz00_7835 =
																														CAR(CDR
																														(BgL_a1z00_1212));
																													BgL__ortest_3246z00_1263
																														=
																														CHARP
																														(BgL_auxz00_7835);
																												}
																												if (BgL__ortest_3246z00_1263)
																													{	/* Expand/initial.scm 267 */
																														BgL_testz00_7824 =
																															BgL__ortest_3246z00_1263;
																													}
																												else
																													{	/* Expand/initial.scm 268 */
																														bool_t
																															BgL__ortest_3247z00_1264;
																														{	/* Expand/initial.scm 268 */
																															obj_t
																																BgL_auxz00_7840;
																															BgL_auxz00_7840 =
																																CAR(CDR
																																(BgL_a1z00_1212));
																															BgL__ortest_3247z00_1264
																																=
																																SYMBOLP
																																(BgL_auxz00_7840);
																														}
																														if (BgL__ortest_3247z00_1264)
																															{	/* Expand/initial.scm 268 */
																																BgL_testz00_7824
																																	=
																																	BgL__ortest_3247z00_1264;
																															}
																														else
																															{	/* Expand/initial.scm 269 */
																																obj_t
																																	BgL_auxz00_7845;
																																BgL_auxz00_7845
																																	=
																																	CAR(CDR
																																	(BgL_a1z00_1212));
																																BgL_testz00_7824
																																	=
																																	KEYWORDP
																																	(BgL_auxz00_7845);
																															}
																													}
																											}
																									}
																								else
																									{	/* Expand/initial.scm 265 */
																										BgL_testz00_7824 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Expand/initial.scm 264 */
																								BgL_testz00_7824 = ((bool_t) 0);
																							}
																						if (BgL_testz00_7824)
																							{	/* Expand/initial.scm 264 */
																								BgL_testz00_7819 = ((bool_t) 1);
																							}
																						else
																							{	/* Expand/initial.scm 264 */
																								if (PAIRP(BgL_a2z00_1213))
																									{	/* Expand/initial.scm 270 */
																										if (
																											(CAR(BgL_a2z00_1213) ==
																												CNST_TABLE_REF(((long)
																														130))))
																											{	/* Expand/initial.scm 272 */
																												bool_t
																													BgL__ortest_3250z00_1251;
																												BgL__ortest_3250z00_1251
																													=
																													INTEGERP(CAR(CDR
																														(BgL_a2z00_1213)));
																												if (BgL__ortest_3250z00_1251)
																													{	/* Expand/initial.scm 272 */
																														BgL_testz00_7819 =
																															BgL__ortest_3250z00_1251;
																													}
																												else
																													{	/* Expand/initial.scm 273 */
																														bool_t
																															BgL__ortest_3251z00_1252;
																														{	/* Expand/initial.scm 273 */
																															obj_t
																																BgL_auxz00_7859;
																															BgL_auxz00_7859 =
																																CAR(CDR
																																(BgL_a2z00_1213));
																															BgL__ortest_3251z00_1252
																																=
																																CHARP
																																(BgL_auxz00_7859);
																														}
																														if (BgL__ortest_3251z00_1252)
																															{	/* Expand/initial.scm 273 */
																																BgL_testz00_7819
																																	=
																																	BgL__ortest_3251z00_1252;
																															}
																														else
																															{	/* Expand/initial.scm 274 */
																																bool_t
																																	BgL__ortest_3252z00_1253;
																																{	/* Expand/initial.scm 274 */
																																	obj_t
																																		BgL_auxz00_7864;
																																	BgL_auxz00_7864
																																		=
																																		CAR(CDR
																																		(BgL_a2z00_1213));
																																	BgL__ortest_3252z00_1253
																																		=
																																		SYMBOLP
																																		(BgL_auxz00_7864);
																																}
																																if (BgL__ortest_3252z00_1253)
																																	{	/* Expand/initial.scm 274 */
																																		BgL_testz00_7819
																																			=
																																			BgL__ortest_3252z00_1253;
																																	}
																																else
																																	{	/* Expand/initial.scm 275 */
																																		obj_t
																																			BgL_auxz00_7869;
																																		BgL_auxz00_7869
																																			=
																																			CAR(CDR
																																			(BgL_a2z00_1213));
																																		BgL_testz00_7819
																																			=
																																			KEYWORDP
																																			(BgL_auxz00_7869);
																																	}
																															}
																													}
																											}
																										else
																											{	/* Expand/initial.scm 271 */
																												BgL_testz00_7819 =
																													((bool_t) 0);
																											}
																									}
																								else
																									{	/* Expand/initial.scm 270 */
																										BgL_testz00_7819 =
																											((bool_t) 0);
																									}
																							}
																					}
																			}
																		if (BgL_testz00_7819)
																			{	/* Expand/initial.scm 276 */
																				obj_t BgL_arg3695z00_1234;

																				{	/* Expand/initial.scm 276 */
																					obj_t BgL_arg3696z00_1235;

																					obj_t BgL_arg3697z00_1236;

																					BgL_arg3696z00_1235 =
																						CNST_TABLE_REF(((long) 48));
																					{	/* Expand/initial.scm 276 */
																						obj_t BgL_list3698z00_1237;

																						{	/* Expand/initial.scm 276 */
																							obj_t BgL_arg3699z00_1238;

																							BgL_arg3699z00_1238 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3698z00_1237 =
																								MAKE_PAIR(BgL_a2z00_1213,
																								BgL_arg3699z00_1238);
																						}
																						BgL_arg3697z00_1236 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_a1z00_1212,
																							BgL_list3698z00_1237);
																					}
																					BgL_arg3695z00_1234 =
																						MAKE_PAIR(BgL_arg3696z00_1235,
																						BgL_arg3697z00_1236);
																				}
																				return
																					PROCEDURE_ENTRY(BgL_ez00_1210)
																					(BgL_ez00_1210, BgL_arg3695z00_1234,
																					BgL_ez00_1210, BEOA);
																			}
																		else
																			{	/* Expand/initial.scm 278 */
																				obj_t BgL_arg3700z00_1239;

																				obj_t BgL_arg3701z00_1240;

																				BgL_arg3700z00_1239 =
																					CNST_TABLE_REF(((long) 33));
																				{	/* Expand/initial.scm 278 */
																					obj_t BgL_arg3702z00_1241;

																					obj_t BgL_arg3703z00_1242;

																					BgL_arg3702z00_1241 =
																						PROCEDURE_ENTRY(BgL_ez00_1210)
																						(BgL_ez00_1210, BgL_a1z00_1212,
																						BgL_ez00_1210, BEOA);
																					BgL_arg3703z00_1242 =
																						PROCEDURE_ENTRY(BgL_ez00_1210)
																						(BgL_ez00_1210, BgL_a2z00_1213,
																						BgL_ez00_1210, BEOA);
																					{	/* Expand/initial.scm 278 */
																						obj_t BgL_list3705z00_1244;

																						{	/* Expand/initial.scm 278 */
																							obj_t BgL_arg3706z00_1245;

																							BgL_arg3706z00_1245 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3705z00_1244 =
																								MAKE_PAIR(BgL_arg3703z00_1242,
																								BgL_arg3706z00_1245);
																						}
																						BgL_arg3701z00_1240 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3702z00_1241,
																							BgL_list3705z00_1244);
																				}}
																				return
																					MAKE_PAIR(BgL_arg3700z00_1239,
																					BgL_arg3701z00_1240);
																			}
																	}
															}
													}
												}
											else
												{	/* Expand/initial.scm 254 */
												BgL_tagzd21582zd2_1215:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string5640z00zzexpand_installz00,
														BgL_xz00_1209);
												}
										}
									else
										{	/* Expand/initial.scm 254 */
											goto BgL_tagzd21582zd2_1215;
										}
								}
							else
								{	/* Expand/initial.scm 254 */
									goto BgL_tagzd21582zd2_1215;
								}
						}
					else
						{	/* Expand/initial.scm 254 */
							goto BgL_tagzd21582zd2_1215;
						}
				}
			}
		}
	}



/* <anonymous:3675> */
	obj_t BGl_zc3anonymousza33675ze3z83zzexpand_installz00(obj_t BgL_envz00_5354,
		obj_t BgL_xz00_5355, obj_t BgL_ez00_5356)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 245 */
			return
				BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_5355, BgL_ez00_5356);
		}
	}



/* <anonymous:3672> */
	obj_t BGl_zc3anonymousza33672ze3z83zzexpand_installz00(obj_t BgL_envz00_5357,
		obj_t BgL_xz00_5358, obj_t BgL_ez00_5359)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 242 */
			return
				BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_5358, BgL_ez00_5359);
		}
	}



/* <anonymous:3668> */
	obj_t BGl_zc3anonymousza33668ze3z83zzexpand_installz00(obj_t BgL_envz00_5360,
		obj_t BgL_xz00_5361, obj_t BgL_ez00_5362)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 237 */
			return
				BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_5361, BgL_ez00_5362);
		}
	}



/* <anonymous:3665> */
	obj_t BGl_zc3anonymousza33665ze3z83zzexpand_installz00(obj_t BgL_envz00_5363,
		obj_t BgL_xz00_5364, obj_t BgL_ez00_5365)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 233 */
			return
				BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_5364, BgL_ez00_5365);
		}
	}



/* <anonymous:3662> */
	obj_t BGl_zc3anonymousza33662ze3z83zzexpand_installz00(obj_t BgL_envz00_5366,
		obj_t BgL_xz00_5367, obj_t BgL_ez00_5368)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 227 */
			return
				BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_5367, BgL_ez00_5368);
		}
	}



/* <anonymous:3659> */
	obj_t BGl_zc3anonymousza33659ze3z83zzexpand_installz00(obj_t BgL_envz00_5369,
		obj_t BgL_xz00_5370, obj_t BgL_ez00_5371)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 224 */
			return
				BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_5370, BgL_ez00_5371);
		}
	}



/* <anonymous:3656> */
	obj_t BGl_zc3anonymousza33656ze3z83zzexpand_installz00(obj_t BgL_envz00_5372,
		obj_t BgL_xz00_5373, obj_t BgL_ez00_5374)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 219 */
			{
				obj_t BgL_xz00_1167;

				obj_t BgL_ez00_1168;

				BgL_xz00_1167 = BgL_xz00_5373;
				BgL_ez00_1168 = BgL_ez00_5374;
				return
					BGl_mapzd2checkzd2nonzd2nullzd2zzexpand_installz00(BgL_xz00_1167,
					BgL_ez00_1168, BUNSPEC);
			}
		}
	}



/* <anonymous:3653> */
	obj_t BGl_zc3anonymousza33653ze3z83zzexpand_installz00(obj_t BgL_envz00_5375,
		obj_t BgL_xz00_5376, obj_t BgL_ez00_5377)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 213 */
			{
				obj_t BgL_xz00_1161;

				obj_t BgL_ez00_1162;

				BgL_xz00_1161 = BgL_xz00_5376;
				BgL_ez00_1162 = BgL_ez00_5377;
				return
					BGl_mapzd2checkzd2nonzd2nullzd2zzexpand_installz00(BgL_xz00_1161,
					BgL_ez00_1162, CNST_TABLE_REF(((long) 175)));
		}}
	}



/* <anonymous:3635> */
	obj_t BGl_zc3anonymousza33635ze3z83zzexpand_installz00(obj_t BgL_envz00_5378,
		obj_t BgL_xz00_5379, obj_t BgL_ez00_5380)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 203 */
			{
				obj_t BgL_xz00_1132;

				obj_t BgL_ez00_1133;

				BgL_xz00_1132 = BgL_xz00_5379;
				BgL_ez00_1133 = BgL_ez00_5380;
				{
					obj_t BgL_funz00_1135;

					obj_t BgL_az00_1136;

					obj_t BgL_dz00_1137;

					if (PAIRP(BgL_xz00_1132))
						{	/* Expand/initial.scm 203 */
							obj_t BgL_cdrzd21570zd2_1142;

							BgL_cdrzd21570zd2_1142 = CDR(BgL_xz00_1132);
							if (PAIRP(BgL_cdrzd21570zd2_1142))
								{	/* Expand/initial.scm 203 */
									obj_t BgL_cdrzd21575zd2_1144;

									BgL_cdrzd21575zd2_1144 = CDR(BgL_cdrzd21570zd2_1142);
									if (PAIRP(BgL_cdrzd21575zd2_1144))
										{	/* Expand/initial.scm 203 */
											if (NULLP(CDR(BgL_cdrzd21575zd2_1144)))
												{	/* Expand/initial.scm 203 */
													BgL_funz00_1135 = CAR(BgL_xz00_1132);
													BgL_az00_1136 = CAR(BgL_cdrzd21570zd2_1142);
													BgL_dz00_1137 = CAR(BgL_cdrzd21575zd2_1144);
													{	/* Expand/initial.scm 206 */
														obj_t BgL_arg3644z00_1151;

														obj_t BgL_arg3645z00_1152;

														BgL_arg3644z00_1151 = CNST_TABLE_REF(((long) 151));
														{	/* Expand/initial.scm 206 */
															obj_t BgL_arg3646z00_1153;

															obj_t BgL_arg3647z00_1154;

															BgL_arg3646z00_1153 =
																PROCEDURE_ENTRY(BgL_ez00_1133) (BgL_ez00_1133,
																BgL_az00_1136, BgL_ez00_1133, BEOA);
															BgL_arg3647z00_1154 =
																PROCEDURE_ENTRY(BgL_ez00_1133) (BgL_ez00_1133,
																BgL_dz00_1137, BgL_ez00_1133, BEOA);
															{	/* Expand/initial.scm 206 */
																obj_t BgL_list3649z00_1156;

																{	/* Expand/initial.scm 206 */
																	obj_t BgL_arg3650z00_1157;

																	BgL_arg3650z00_1157 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3649z00_1156 =
																		MAKE_PAIR(BgL_arg3647z00_1154,
																		BgL_arg3650z00_1157);
																}
																BgL_arg3645z00_1152 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3646z00_1153, BgL_list3649z00_1156);
														}}
														return
															MAKE_PAIR(BgL_arg3644z00_1151,
															BgL_arg3645z00_1152);
													}
												}
											else
												{	/* Expand/initial.scm 203 */
												BgL_tagzd21561zd2_1139:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string5641z00zzexpand_installz00,
														BgL_xz00_1132);
												}
										}
									else
										{	/* Expand/initial.scm 203 */
											goto BgL_tagzd21561zd2_1139;
										}
								}
							else
								{	/* Expand/initial.scm 203 */
									goto BgL_tagzd21561zd2_1139;
								}
						}
					else
						{	/* Expand/initial.scm 203 */
							goto BgL_tagzd21561zd2_1139;
						}
				}
			}
		}
	}



/* <anonymous:3621> */
	obj_t BGl_zc3anonymousza33621ze3z83zzexpand_installz00(obj_t BgL_envz00_5381,
		obj_t BgL_xz00_5382, obj_t BgL_ez00_5383)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 191 */
			{
				obj_t BgL_xz00_1110;

				obj_t BgL_ez00_1111;

				BgL_xz00_1110 = BgL_xz00_5382;
				BgL_ez00_1111 = BgL_ez00_5383;
				{
					obj_t BgL_sz00_1113;

					if (PAIRP(BgL_xz00_1110))
						{	/* Expand/initial.scm 191 */
							obj_t BgL_cdrzd21555zd2_1118;

							BgL_cdrzd21555zd2_1118 = CDR(BgL_xz00_1110);
							if (PAIRP(BgL_cdrzd21555zd2_1118))
								{	/* Expand/initial.scm 191 */
									if (NULLP(CDR(BgL_cdrzd21555zd2_1118)))
										{	/* Expand/initial.scm 191 */
											BgL_sz00_1113 = CAR(BgL_cdrzd21555zd2_1118);
											if (STRINGP(BgL_sz00_1113))
												{	/* Expand/initial.scm 194 */
													return BINT(STRING_LENGTH(BgL_sz00_1113));
												}
											else
												{	/* Expand/initial.scm 196 */
													obj_t BgL_arg3628z00_1124;

													obj_t BgL_arg3629z00_1125;

													BgL_arg3628z00_1124 = CNST_TABLE_REF(((long) 22));
													{	/* Expand/initial.scm 196 */
														obj_t BgL_arg3630z00_1126;

														BgL_arg3630z00_1126 =
															PROCEDURE_ENTRY(BgL_ez00_1111) (BgL_ez00_1111,
															BgL_sz00_1113, BgL_ez00_1111, BEOA);
														{	/* Expand/initial.scm 196 */
															obj_t BgL_list3632z00_1128;

															BgL_list3632z00_1128 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3629z00_1125 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3630z00_1126, BgL_list3632z00_1128);
													}}
													return
														MAKE_PAIR(BgL_arg3628z00_1124, BgL_arg3629z00_1125);
												}
										}
									else
										{	/* Expand/initial.scm 191 */
										BgL_tagzd21550zd2_1115:
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string5642z00zzexpand_installz00, BgL_xz00_1110);
										}
								}
							else
								{	/* Expand/initial.scm 191 */
									goto BgL_tagzd21550zd2_1115;
								}
						}
					else
						{	/* Expand/initial.scm 191 */
							goto BgL_tagzd21550zd2_1115;
						}
				}
			}
		}
	}



/* <anonymous:3590> */
	obj_t BGl_zc3anonymousza33590ze3z83zzexpand_installz00(obj_t BgL_envz00_5384,
		obj_t BgL_xz00_5385, obj_t BgL_ez00_5386)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 179 */
			{
				obj_t BgL_xz00_1060;

				obj_t BgL_ez00_1061;

				BgL_xz00_1060 = BgL_xz00_5385;
				BgL_ez00_1061 = BgL_ez00_5386;
				{
					obj_t BgL_l1z00_1063;

					obj_t BgL_l2z00_1064;

					obj_t BgL_listsz00_1066;

					if (PAIRP(BgL_xz00_1060))
						{	/* Expand/initial.scm 179 */
							obj_t BgL_cdrzd21522zd2_1071;

							BgL_cdrzd21522zd2_1071 = CDR(BgL_xz00_1060);
							if (PAIRP(BgL_cdrzd21522zd2_1071))
								{	/* Expand/initial.scm 179 */
									obj_t BgL_cdrzd21526zd2_1073;

									BgL_cdrzd21526zd2_1073 = CDR(BgL_cdrzd21522zd2_1071);
									if (PAIRP(BgL_cdrzd21526zd2_1073))
										{	/* Expand/initial.scm 179 */
											if (NULLP(CDR(BgL_cdrzd21526zd2_1073)))
												{	/* Expand/initial.scm 179 */
													BgL_l1z00_1063 = CAR(BgL_cdrzd21522zd2_1071);
													BgL_l2z00_1064 = CAR(BgL_cdrzd21526zd2_1073);
													{	/* Expand/initial.scm 182 */
														obj_t BgL_arg3601z00_1082;

														obj_t BgL_arg3602z00_1083;

														BgL_arg3601z00_1082 = CNST_TABLE_REF(((long) 176));
														{	/* Expand/initial.scm 182 */
															obj_t BgL_arg3603z00_1084;

															obj_t BgL_arg3604z00_1085;

															BgL_arg3603z00_1084 =
																PROCEDURE_ENTRY(BgL_ez00_1061) (BgL_ez00_1061,
																BgL_l1z00_1063, BgL_ez00_1061, BEOA);
															BgL_arg3604z00_1085 =
																PROCEDURE_ENTRY(BgL_ez00_1061) (BgL_ez00_1061,
																BgL_l2z00_1064, BgL_ez00_1061, BEOA);
															{	/* Expand/initial.scm 182 */
																obj_t BgL_list3606z00_1087;

																{	/* Expand/initial.scm 182 */
																	obj_t BgL_arg3607z00_1088;

																	BgL_arg3607z00_1088 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3606z00_1087 =
																		MAKE_PAIR(BgL_arg3604z00_1085,
																		BgL_arg3607z00_1088);
																}
																BgL_arg3602z00_1083 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3603z00_1084, BgL_list3606z00_1087);
														}}
														return
															MAKE_PAIR(BgL_arg3601z00_1082,
															BgL_arg3602z00_1083);
													}
												}
											else
												{	/* Expand/initial.scm 179 */
													BgL_listsz00_1066 = BgL_cdrzd21522zd2_1071;
												BgL_tagzd21513zd2_1067:
													{	/* Expand/initial.scm 184 */
														obj_t BgL_arg3608z00_1089;

														obj_t BgL_arg3609z00_1090;

														BgL_arg3608z00_1089 = CNST_TABLE_REF(((long) 21));
														{	/* Expand/initial.scm 184 */
															obj_t BgL_arg3610z00_1091;

															if (NULLP(BgL_listsz00_1066))
																{	/* Expand/initial.scm 184 */
																	BgL_arg3610z00_1091 = BNIL;
																}
															else
																{	/* Expand/initial.scm 184 */
																	obj_t BgL_head3294z00_1095;

																	BgL_head3294z00_1095 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3292z00_1097;

																		obj_t BgL_tail3295z00_1098;

																		BgL_l3292z00_1097 = BgL_listsz00_1066;
																		BgL_tail3295z00_1098 = BgL_head3294z00_1095;
																	BgL_zc3anonymousza33614ze3z83_1099:
																		if (NULLP(BgL_l3292z00_1097))
																			{	/* Expand/initial.scm 184 */
																				BgL_arg3610z00_1091 =
																					CDR(BgL_head3294z00_1095);
																			}
																		else
																			{	/* Expand/initial.scm 184 */
																				obj_t BgL_newtail3296z00_1101;

																				{	/* Expand/initial.scm 184 */
																					obj_t BgL_arg3617z00_1103;

																					{	/* Expand/initial.scm 184 */
																						obj_t BgL_lz00_1105;

																						BgL_lz00_1105 =
																							CAR(BgL_l3292z00_1097);
																						BgL_arg3617z00_1103 =
																							PROCEDURE_ENTRY(BgL_ez00_1061)
																							(BgL_ez00_1061, BgL_lz00_1105,
																							BgL_ez00_1061, BEOA);
																					}
																					BgL_newtail3296z00_1101 =
																						MAKE_PAIR(BgL_arg3617z00_1103,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3295z00_1098,
																					BgL_newtail3296z00_1101);
																				{
																					obj_t BgL_tail3295z00_7981;

																					obj_t BgL_l3292z00_7979;

																					BgL_l3292z00_7979 =
																						CDR(BgL_l3292z00_1097);
																					BgL_tail3295z00_7981 =
																						BgL_newtail3296z00_1101;
																					BgL_tail3295z00_1098 =
																						BgL_tail3295z00_7981;
																					BgL_l3292z00_1097 = BgL_l3292z00_7979;
																					goto
																						BgL_zc3anonymousza33614ze3z83_1099;
																				}
																			}
																	}
																}
															BgL_arg3609z00_1090 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3610z00_1091, BNIL);
														}
														return
															MAKE_PAIR(BgL_arg3608z00_1089,
															BgL_arg3609z00_1090);
													}
												}
										}
									else
										{
											obj_t BgL_listsz00_7984;

											BgL_listsz00_7984 = BgL_cdrzd21522zd2_1071;
											BgL_listsz00_1066 = BgL_listsz00_7984;
											goto BgL_tagzd21513zd2_1067;
										}
								}
							else
								{
									obj_t BgL_listsz00_7985;

									BgL_listsz00_7985 = BgL_cdrzd21522zd2_1071;
									BgL_listsz00_1066 = BgL_listsz00_7985;
									goto BgL_tagzd21513zd2_1067;
								}
						}
					else
						{	/* Expand/initial.scm 179 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string5643z00zzexpand_installz00, BgL_xz00_1060);
						}
				}
			}
		}
	}



/* <anonymous:3560> */
	obj_t BGl_zc3anonymousza33560ze3z83zzexpand_installz00(obj_t BgL_envz00_5387,
		obj_t BgL_xz00_5388, obj_t BgL_ez00_5389)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 166 */
			{
				obj_t BgL_xz00_1010;

				obj_t BgL_ez00_1011;

				BgL_xz00_1010 = BgL_xz00_5388;
				BgL_ez00_1011 = BgL_ez00_5389;
				{
					obj_t BgL_l1z00_1013;

					obj_t BgL_l2z00_1014;

					obj_t BgL_listsz00_1016;

					if (PAIRP(BgL_xz00_1010))
						{	/* Expand/initial.scm 166 */
							obj_t BgL_cdrzd21485zd2_1021;

							BgL_cdrzd21485zd2_1021 = CDR(BgL_xz00_1010);
							if (PAIRP(BgL_cdrzd21485zd2_1021))
								{	/* Expand/initial.scm 166 */
									obj_t BgL_cdrzd21489zd2_1023;

									BgL_cdrzd21489zd2_1023 = CDR(BgL_cdrzd21485zd2_1021);
									if (PAIRP(BgL_cdrzd21489zd2_1023))
										{	/* Expand/initial.scm 166 */
											if (NULLP(CDR(BgL_cdrzd21489zd2_1023)))
												{	/* Expand/initial.scm 166 */
													BgL_l1z00_1013 = CAR(BgL_cdrzd21485zd2_1021);
													BgL_l2z00_1014 = CAR(BgL_cdrzd21489zd2_1023);
													{	/* Expand/initial.scm 169 */
														obj_t BgL_arg3571z00_1032;

														obj_t BgL_arg3572z00_1033;

														BgL_arg3571z00_1032 = CNST_TABLE_REF(((long) 177));
														{	/* Expand/initial.scm 169 */
															obj_t BgL_arg3573z00_1034;

															obj_t BgL_arg3574z00_1035;

															BgL_arg3573z00_1034 =
																PROCEDURE_ENTRY(BgL_ez00_1011) (BgL_ez00_1011,
																BgL_l1z00_1013, BgL_ez00_1011, BEOA);
															BgL_arg3574z00_1035 =
																PROCEDURE_ENTRY(BgL_ez00_1011) (BgL_ez00_1011,
																BgL_l2z00_1014, BgL_ez00_1011, BEOA);
															{	/* Expand/initial.scm 169 */
																obj_t BgL_list3576z00_1037;

																{	/* Expand/initial.scm 169 */
																	obj_t BgL_arg3577z00_1038;

																	BgL_arg3577z00_1038 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3576z00_1037 =
																		MAKE_PAIR(BgL_arg3574z00_1035,
																		BgL_arg3577z00_1038);
																}
																BgL_arg3572z00_1033 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3573z00_1034, BgL_list3576z00_1037);
														}}
														return
															MAKE_PAIR(BgL_arg3571z00_1032,
															BgL_arg3572z00_1033);
													}
												}
											else
												{	/* Expand/initial.scm 166 */
													BgL_listsz00_1016 = BgL_cdrzd21485zd2_1021;
												BgL_tagzd21476zd2_1017:
													{	/* Expand/initial.scm 171 */
														obj_t BgL_arg3578z00_1039;

														obj_t BgL_arg3579z00_1040;

														BgL_arg3578z00_1039 = CNST_TABLE_REF(((long) 20));
														{	/* Expand/initial.scm 172 */
															obj_t BgL_arg3580z00_1041;

															if (NULLP(BgL_listsz00_1016))
																{	/* Expand/initial.scm 172 */
																	BgL_arg3580z00_1041 = BNIL;
																}
															else
																{	/* Expand/initial.scm 172 */
																	obj_t BgL_head3289z00_1045;

																	BgL_head3289z00_1045 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3287z00_1047;

																		obj_t BgL_tail3290z00_1048;

																		BgL_l3287z00_1047 = BgL_listsz00_1016;
																		BgL_tail3290z00_1048 = BgL_head3289z00_1045;
																	BgL_zc3anonymousza33583ze3z83_1049:
																		if (NULLP(BgL_l3287z00_1047))
																			{	/* Expand/initial.scm 172 */
																				BgL_arg3580z00_1041 =
																					CDR(BgL_head3289z00_1045);
																			}
																		else
																			{	/* Expand/initial.scm 172 */
																				obj_t BgL_newtail3291z00_1051;

																				{	/* Expand/initial.scm 172 */
																					obj_t BgL_arg3586z00_1053;

																					{	/* Expand/initial.scm 172 */
																						obj_t BgL_lz00_1055;

																						BgL_lz00_1055 =
																							CAR(BgL_l3287z00_1047);
																						BgL_arg3586z00_1053 =
																							PROCEDURE_ENTRY(BgL_ez00_1011)
																							(BgL_ez00_1011, BgL_lz00_1055,
																							BgL_ez00_1011, BEOA);
																					}
																					BgL_newtail3291z00_1051 =
																						MAKE_PAIR(BgL_arg3586z00_1053,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3290z00_1048,
																					BgL_newtail3291z00_1051);
																				{
																					obj_t BgL_tail3290z00_8023;

																					obj_t BgL_l3287z00_8021;

																					BgL_l3287z00_8021 =
																						CDR(BgL_l3287z00_1047);
																					BgL_tail3290z00_8023 =
																						BgL_newtail3291z00_1051;
																					BgL_tail3290z00_1048 =
																						BgL_tail3290z00_8023;
																					BgL_l3287z00_1047 = BgL_l3287z00_8021;
																					goto
																						BgL_zc3anonymousza33583ze3z83_1049;
																				}
																			}
																	}
																}
															BgL_arg3579z00_1040 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3580z00_1041, BNIL);
														}
														return
															MAKE_PAIR(BgL_arg3578z00_1039,
															BgL_arg3579z00_1040);
													}
												}
										}
									else
										{
											obj_t BgL_listsz00_8026;

											BgL_listsz00_8026 = BgL_cdrzd21485zd2_1021;
											BgL_listsz00_1016 = BgL_listsz00_8026;
											goto BgL_tagzd21476zd2_1017;
										}
								}
							else
								{
									obj_t BgL_listsz00_8027;

									BgL_listsz00_8027 = BgL_cdrzd21485zd2_1021;
									BgL_listsz00_1016 = BgL_listsz00_8027;
									goto BgL_tagzd21476zd2_1017;
								}
						}
					else
						{	/* Expand/initial.scm 166 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string5644z00zzexpand_installz00, BgL_xz00_1010);
						}
				}
			}
		}
	}



/* <anonymous:3529> */
	obj_t BGl_zc3anonymousza33529ze3z83zzexpand_installz00(obj_t BgL_envz00_5390,
		obj_t BgL_xz00_5391, obj_t BgL_ez00_5392)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 153 */
			{
				obj_t BgL_xz00_960;

				obj_t BgL_ez00_961;

				BgL_xz00_960 = BgL_xz00_5391;
				BgL_ez00_961 = BgL_ez00_5392;
				{
					obj_t BgL_l1z00_963;

					obj_t BgL_l2z00_964;

					obj_t BgL_listsz00_966;

					if (PAIRP(BgL_xz00_960))
						{	/* Expand/initial.scm 153 */
							obj_t BgL_cdrzd21448zd2_971;

							BgL_cdrzd21448zd2_971 = CDR(BgL_xz00_960);
							if (PAIRP(BgL_cdrzd21448zd2_971))
								{	/* Expand/initial.scm 153 */
									obj_t BgL_cdrzd21452zd2_973;

									BgL_cdrzd21452zd2_973 = CDR(BgL_cdrzd21448zd2_971);
									if (PAIRP(BgL_cdrzd21452zd2_973))
										{	/* Expand/initial.scm 153 */
											if (NULLP(CDR(BgL_cdrzd21452zd2_973)))
												{	/* Expand/initial.scm 153 */
													BgL_l1z00_963 = CAR(BgL_cdrzd21448zd2_971);
													BgL_l2z00_964 = CAR(BgL_cdrzd21452zd2_973);
													{	/* Expand/initial.scm 156 */
														obj_t BgL_arg3541z00_982;

														obj_t BgL_arg3542z00_983;

														BgL_arg3541z00_982 = CNST_TABLE_REF(((long) 178));
														{	/* Expand/initial.scm 156 */
															obj_t BgL_arg3543z00_984;

															obj_t BgL_arg3544z00_985;

															BgL_arg3543z00_984 =
																PROCEDURE_ENTRY(BgL_ez00_961) (BgL_ez00_961,
																BgL_l1z00_963, BgL_ez00_961, BEOA);
															BgL_arg3544z00_985 =
																PROCEDURE_ENTRY(BgL_ez00_961) (BgL_ez00_961,
																BgL_l2z00_964, BgL_ez00_961, BEOA);
															{	/* Expand/initial.scm 156 */
																obj_t BgL_list3546z00_987;

																{	/* Expand/initial.scm 156 */
																	obj_t BgL_arg3547z00_988;

																	BgL_arg3547z00_988 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3546z00_987 =
																		MAKE_PAIR(BgL_arg3544z00_985,
																		BgL_arg3547z00_988);
																}
																BgL_arg3542z00_983 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3543z00_984, BgL_list3546z00_987);
														}}
														return
															MAKE_PAIR(BgL_arg3541z00_982, BgL_arg3542z00_983);
													}
												}
											else
												{	/* Expand/initial.scm 153 */
													BgL_listsz00_966 = BgL_cdrzd21448zd2_971;
												BgL_tagzd21439zd2_967:
													{	/* Expand/initial.scm 158 */
														obj_t BgL_arg3548z00_989;

														obj_t BgL_arg3549z00_990;

														BgL_arg3548z00_989 = CNST_TABLE_REF(((long) 19));
														{	/* Expand/initial.scm 159 */
															obj_t BgL_arg3550z00_991;

															if (NULLP(BgL_listsz00_966))
																{	/* Expand/initial.scm 159 */
																	BgL_arg3550z00_991 = BNIL;
																}
															else
																{	/* Expand/initial.scm 159 */
																	obj_t BgL_head3284z00_995;

																	BgL_head3284z00_995 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3282z00_997;

																		obj_t BgL_tail3285z00_998;

																		BgL_l3282z00_997 = BgL_listsz00_966;
																		BgL_tail3285z00_998 = BgL_head3284z00_995;
																	BgL_zc3anonymousza33553ze3z83_999:
																		if (NULLP(BgL_l3282z00_997))
																			{	/* Expand/initial.scm 159 */
																				BgL_arg3550z00_991 =
																					CDR(BgL_head3284z00_995);
																			}
																		else
																			{	/* Expand/initial.scm 159 */
																				obj_t BgL_newtail3286z00_1001;

																				{	/* Expand/initial.scm 159 */
																					obj_t BgL_arg3556z00_1003;

																					{	/* Expand/initial.scm 159 */
																						obj_t BgL_lz00_1005;

																						BgL_lz00_1005 =
																							CAR(BgL_l3282z00_997);
																						BgL_arg3556z00_1003 =
																							PROCEDURE_ENTRY(BgL_ez00_961)
																							(BgL_ez00_961, BgL_lz00_1005,
																							BgL_ez00_961, BEOA);
																					}
																					BgL_newtail3286z00_1001 =
																						MAKE_PAIR(BgL_arg3556z00_1003,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3285z00_998,
																					BgL_newtail3286z00_1001);
																				{
																					obj_t BgL_tail3285z00_8065;

																					obj_t BgL_l3282z00_8063;

																					BgL_l3282z00_8063 =
																						CDR(BgL_l3282z00_997);
																					BgL_tail3285z00_8065 =
																						BgL_newtail3286z00_1001;
																					BgL_tail3285z00_998 =
																						BgL_tail3285z00_8065;
																					BgL_l3282z00_997 = BgL_l3282z00_8063;
																					goto
																						BgL_zc3anonymousza33553ze3z83_999;
																				}
																			}
																	}
																}
															BgL_arg3549z00_990 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3550z00_991, BNIL);
														}
														return
															MAKE_PAIR(BgL_arg3548z00_989, BgL_arg3549z00_990);
													}
												}
										}
									else
										{
											obj_t BgL_listsz00_8068;

											BgL_listsz00_8068 = BgL_cdrzd21448zd2_971;
											BgL_listsz00_966 = BgL_listsz00_8068;
											goto BgL_tagzd21439zd2_967;
										}
								}
							else
								{
									obj_t BgL_listsz00_8069;

									BgL_listsz00_8069 = BgL_cdrzd21448zd2_971;
									BgL_listsz00_966 = BgL_listsz00_8069;
									goto BgL_tagzd21439zd2_967;
								}
						}
					else
						{	/* Expand/initial.scm 153 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string5645z00zzexpand_installz00, BgL_xz00_960);
						}
				}
			}
		}
	}



/* <anonymous:3498> */
	obj_t BGl_zc3anonymousza33498ze3z83zzexpand_installz00(obj_t BgL_envz00_5393,
		obj_t BgL_xz00_5394, obj_t BgL_ez00_5395)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 141 */
			{
				obj_t BgL_xz00_910;

				obj_t BgL_ez00_911;

				BgL_xz00_910 = BgL_xz00_5394;
				BgL_ez00_911 = BgL_ez00_5395;
				{	/* Expand/initial.scm 142 */
					obj_t BgL_locz00_913;

					BgL_locz00_913 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_910);
					{	/* Expand/initial.scm 143 */
						bool_t BgL_testz00_8072;

						{	/* Expand/initial.scm 143 */
							bool_t BgL_testz00_8073;

							if (STRUCTP(BgL_locz00_913))
								{	/* Expand/initial.scm 143 */
									BgL_testz00_8073 =
										(STRUCT_KEY(BgL_locz00_913) ==
										CNST_TABLE_REF(((long) 179)));
								}
							else
								{	/* Expand/initial.scm 143 */
									BgL_testz00_8073 = ((bool_t) 0);
								}
							if (BgL_testz00_8073)
								{	/* Expand/initial.scm 143 */
									BgL_testz00_8072 =
										CBOOL(BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00);
								}
							else
								{	/* Expand/initial.scm 143 */
									BgL_testz00_8072 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_8072)
							{	/* Expand/initial.scm 144 */
								obj_t BgL_arg3500z00_915;

								obj_t BgL_arg3501z00_916;

								BgL_arg3500z00_915 = CNST_TABLE_REF(((long) 180));
								{	/* Expand/initial.scm 144 */
									obj_t BgL_arg3502z00_917;

									obj_t BgL_arg3503z00_918;

									obj_t BgL_arg3504z00_919;

									BgL_arg3502z00_917 =
										BGl_locationzd2fullzd2fnamez00zztools_locationz00
										(BgL_locz00_913);
									BgL_arg3503z00_918 =
										STRUCT_REF(BgL_locz00_913, (int) (((long) 1)));
									{	/* Expand/initial.scm 146 */
										obj_t BgL_arg3507z00_922;

										{	/* Expand/initial.scm 146 */
											obj_t BgL_l3272z00_924;

											BgL_l3272z00_924 = CDR(BgL_xz00_910);
											if (NULLP(BgL_l3272z00_924))
												{	/* Expand/initial.scm 146 */
													BgL_arg3507z00_922 = BNIL;
												}
											else
												{	/* Expand/initial.scm 146 */
													obj_t BgL_head3274z00_926;

													BgL_head3274z00_926 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l3272z00_928;

														obj_t BgL_tail3275z00_929;

														BgL_l3272z00_928 = BgL_l3272z00_924;
														BgL_tail3275z00_929 = BgL_head3274z00_926;
													BgL_zc3anonymousza33510ze3z83_930:
														if (NULLP(BgL_l3272z00_928))
															{	/* Expand/initial.scm 146 */
																BgL_arg3507z00_922 = CDR(BgL_head3274z00_926);
															}
														else
															{	/* Expand/initial.scm 146 */
																obj_t BgL_newtail3276z00_932;

																{	/* Expand/initial.scm 146 */
																	obj_t BgL_arg3513z00_934;

																	{	/* Expand/initial.scm 146 */
																		obj_t BgL_lz00_936;

																		BgL_lz00_936 = CAR(BgL_l3272z00_928);
																		BgL_arg3513z00_934 =
																			PROCEDURE_ENTRY(BgL_ez00_911)
																			(BgL_ez00_911, BgL_lz00_936, BgL_ez00_911,
																			BEOA);
																	}
																	BgL_newtail3276z00_932 =
																		MAKE_PAIR(BgL_arg3513z00_934, BNIL);
																}
																SET_CDR(BgL_tail3275z00_929,
																	BgL_newtail3276z00_932);
																{
																	obj_t BgL_tail3275z00_8098;

																	obj_t BgL_l3272z00_8096;

																	BgL_l3272z00_8096 = CDR(BgL_l3272z00_928);
																	BgL_tail3275z00_8098 = BgL_newtail3276z00_932;
																	BgL_tail3275z00_929 = BgL_tail3275z00_8098;
																	BgL_l3272z00_928 = BgL_l3272z00_8096;
																	goto BgL_zc3anonymousza33510ze3z83_930;
																}
															}
													}
												}
										}
										BgL_arg3504z00_919 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3507z00_922, BNIL);
									}
									{	/* Expand/initial.scm 144 */
										obj_t BgL_list3505z00_920;

										{	/* Expand/initial.scm 144 */
											obj_t BgL_arg3506z00_921;

											BgL_arg3506z00_921 = MAKE_PAIR(BgL_arg3504z00_919, BNIL);
											BgL_list3505z00_920 =
												MAKE_PAIR(BgL_arg3503z00_918, BgL_arg3506z00_921);
										}
										BgL_arg3501z00_916 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3502z00_917, BgL_list3505z00_920);
									}
								}
								return MAKE_PAIR(BgL_arg3500z00_915, BgL_arg3501z00_916);
							}
						else
							{	/* Expand/initial.scm 148 */
								obj_t BgL_arg3515z00_938;

								obj_t BgL_arg3517z00_939;

								BgL_arg3515z00_938 = CNST_TABLE_REF(((long) 18));
								{	/* Expand/initial.scm 148 */
									obj_t BgL_arg3518z00_940;

									{	/* Expand/initial.scm 148 */
										obj_t BgL_l3277z00_942;

										BgL_l3277z00_942 = CDR(BgL_xz00_910);
										if (NULLP(BgL_l3277z00_942))
											{	/* Expand/initial.scm 148 */
												BgL_arg3518z00_940 = BNIL;
											}
										else
											{	/* Expand/initial.scm 148 */
												obj_t BgL_head3279z00_944;

												BgL_head3279z00_944 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_l3277z00_946;

													obj_t BgL_tail3280z00_947;

													BgL_l3277z00_946 = BgL_l3277z00_942;
													BgL_tail3280z00_947 = BgL_head3279z00_944;
												BgL_zc3anonymousza33521ze3z83_948:
													if (NULLP(BgL_l3277z00_946))
														{	/* Expand/initial.scm 148 */
															BgL_arg3518z00_940 = CDR(BgL_head3279z00_944);
														}
													else
														{	/* Expand/initial.scm 148 */
															obj_t BgL_newtail3281z00_950;

															{	/* Expand/initial.scm 148 */
																obj_t BgL_arg3524z00_952;

																{	/* Expand/initial.scm 148 */
																	obj_t BgL_lz00_954;

																	BgL_lz00_954 = CAR(BgL_l3277z00_946);
																	BgL_arg3524z00_952 =
																		PROCEDURE_ENTRY(BgL_ez00_911) (BgL_ez00_911,
																		BgL_lz00_954, BgL_ez00_911, BEOA);
																}
																BgL_newtail3281z00_950 =
																	MAKE_PAIR(BgL_arg3524z00_952, BNIL);
															}
															SET_CDR(BgL_tail3280z00_947,
																BgL_newtail3281z00_950);
															{
																obj_t BgL_tail3280z00_8119;

																obj_t BgL_l3277z00_8117;

																BgL_l3277z00_8117 = CDR(BgL_l3277z00_946);
																BgL_tail3280z00_8119 = BgL_newtail3281z00_950;
																BgL_tail3280z00_947 = BgL_tail3280z00_8119;
																BgL_l3277z00_946 = BgL_l3277z00_8117;
																goto BgL_zc3anonymousza33521ze3z83_948;
															}
														}
												}
											}
									}
									BgL_arg3517z00_939 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3518z00_940, BNIL);
								}
								return MAKE_PAIR(BgL_arg3515z00_938, BgL_arg3517z00_939);
							}
					}
				}
			}
		}
	}



/* <anonymous:3434> */
	obj_t BGl_zc3anonymousza33434ze3z83zzexpand_installz00(obj_t BgL_envz00_5396,
		obj_t BgL_xz00_5397, obj_t BgL_ez00_5398)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 122 */
			{
				obj_t BgL_xz00_817;

				obj_t BgL_ez00_818;

				BgL_xz00_817 = BgL_xz00_5397;
				BgL_ez00_818 = BgL_ez00_5398;
				{	/* Expand/initial.scm 123 */
					obj_t BgL_locz00_820;

					BgL_locz00_820 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_817);
					{	/* Expand/initial.scm 124 */
						bool_t BgL_testz00_8123;

						{	/* Expand/initial.scm 124 */
							bool_t BgL_testz00_8124;

							if (STRUCTP(BgL_locz00_820))
								{	/* Expand/initial.scm 124 */
									BgL_testz00_8124 =
										(STRUCT_KEY(BgL_locz00_820) ==
										CNST_TABLE_REF(((long) 179)));
								}
							else
								{	/* Expand/initial.scm 124 */
									BgL_testz00_8124 = ((bool_t) 0);
								}
							if (BgL_testz00_8124)
								{	/* Expand/initial.scm 124 */
									BgL_testz00_8123 =
										CBOOL(BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00);
								}
							else
								{	/* Expand/initial.scm 124 */
									BgL_testz00_8123 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_8123)
							{
								obj_t BgL_l1z00_822;

								obj_t BgL_l2z00_823;

								obj_t BgL_l3z00_824;

								obj_t BgL_listz00_826;

								if (PAIRP(BgL_xz00_817))
									{	/* Expand/initial.scm 125 */
										obj_t BgL_cdrzd21400zd2_830;

										BgL_cdrzd21400zd2_830 = CDR(BgL_xz00_817);
										if (PAIRP(BgL_cdrzd21400zd2_830))
											{	/* Expand/initial.scm 125 */
												obj_t BgL_cdrzd21405zd2_832;

												BgL_cdrzd21405zd2_832 = CDR(BgL_cdrzd21400zd2_830);
												if (PAIRP(BgL_cdrzd21405zd2_832))
													{	/* Expand/initial.scm 125 */
														obj_t BgL_cdrzd21410zd2_834;

														BgL_cdrzd21410zd2_834 = CDR(BgL_cdrzd21405zd2_832);
														if (PAIRP(BgL_cdrzd21410zd2_834))
															{	/* Expand/initial.scm 125 */
																if (NULLP(CDR(BgL_cdrzd21410zd2_834)))
																	{	/* Expand/initial.scm 125 */
																		BgL_l1z00_822 = CAR(BgL_cdrzd21400zd2_830);
																		BgL_l2z00_823 = CAR(BgL_cdrzd21405zd2_832);
																		BgL_l3z00_824 = CAR(BgL_cdrzd21410zd2_834);
																		{	/* Expand/initial.scm 127 */
																			obj_t BgL_arg3450z00_845;

																			obj_t BgL_arg3451z00_846;

																			BgL_arg3450z00_845 =
																				CNST_TABLE_REF(((long) 181));
																			{	/* Expand/initial.scm 128 */
																				obj_t BgL_arg3452z00_847;

																				obj_t BgL_arg3453z00_848;

																				{	/* Expand/initial.scm 128 */
																					obj_t BgL_arg3457z00_852;

																					obj_t BgL_arg3458z00_853;

																					BgL_arg3457z00_852 =
																						CNST_TABLE_REF(((long) 182));
																					{	/* Expand/initial.scm 128 */
																						obj_t BgL_arg3459z00_854;

																						obj_t BgL_arg3460z00_855;

																						obj_t BgL_arg3461z00_856;

																						obj_t BgL_arg3462z00_857;

																						obj_t BgL_arg3463z00_858;

																						BgL_arg3459z00_854 =
																							PROCEDURE_ENTRY(BgL_ez00_818)
																							(BgL_ez00_818, BgL_l1z00_822,
																							BgL_ez00_818, BEOA);
																						BgL_arg3460z00_855 =
																							PROCEDURE_ENTRY(BgL_ez00_818)
																							(BgL_ez00_818, BgL_l2z00_823,
																							BgL_ez00_818, BEOA);
																						BgL_arg3461z00_856 =
																							PROCEDURE_ENTRY(BgL_ez00_818)
																							(BgL_ez00_818, BgL_l3z00_824,
																							BgL_ez00_818, BEOA);
																						BgL_arg3462z00_857 =
																							BGl_locationzd2fullzd2fnamez00zztools_locationz00
																							(BgL_locz00_820);
																						BgL_arg3463z00_858 =
																							STRUCT_REF(BgL_locz00_820,
																							(int) (((long) 1)));
																						{	/* Expand/initial.scm 128 */
																							obj_t BgL_list3465z00_860;

																							{	/* Expand/initial.scm 128 */
																								obj_t BgL_arg3466z00_861;

																								{	/* Expand/initial.scm 128 */
																									obj_t BgL_arg3467z00_862;

																									{	/* Expand/initial.scm 128 */
																										obj_t BgL_arg3468z00_863;

																										{	/* Expand/initial.scm 128 */
																											obj_t BgL_arg3469z00_864;

																											BgL_arg3469z00_864 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg3468z00_863 =
																												MAKE_PAIR
																												(BgL_arg3463z00_858,
																												BgL_arg3469z00_864);
																										}
																										BgL_arg3467z00_862 =
																											MAKE_PAIR
																											(BgL_arg3462z00_857,
																											BgL_arg3468z00_863);
																									}
																									BgL_arg3466z00_861 =
																										MAKE_PAIR
																										(BgL_arg3461z00_856,
																										BgL_arg3467z00_862);
																								}
																								BgL_list3465z00_860 =
																									MAKE_PAIR(BgL_arg3460z00_855,
																									BgL_arg3466z00_861);
																							}
																							BgL_arg3458z00_853 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3459z00_854,
																								BgL_list3465z00_860);
																					}}
																					BgL_arg3452z00_847 =
																						MAKE_PAIR(BgL_arg3457z00_852,
																						BgL_arg3458z00_853);
																				}
																				{	/* Expand/initial.scm 133 */
																					obj_t BgL_arg3470z00_865;

																					obj_t BgL_arg3471z00_866;

																					BgL_arg3470z00_865 =
																						CNST_TABLE_REF(((long) 17));
																					{	/* Expand/initial.scm 133 */
																						obj_t BgL_list3472z00_867;

																						{	/* Expand/initial.scm 133 */
																							obj_t BgL_arg3473z00_868;

																							{	/* Expand/initial.scm 133 */
																								obj_t BgL_arg3474z00_869;

																								BgL_arg3474z00_869 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3473z00_868 =
																									MAKE_PAIR(BFALSE,
																									BgL_arg3474z00_869);
																							}
																							BgL_list3472z00_867 =
																								MAKE_PAIR(BFALSE,
																								BgL_arg3473z00_868);
																						}
																						BgL_arg3471z00_866 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BFALSE, BgL_list3472z00_867);
																					}
																					BgL_arg3453z00_848 =
																						MAKE_PAIR(BgL_arg3470z00_865,
																						BgL_arg3471z00_866);
																				}
																				{	/* Expand/initial.scm 127 */
																					obj_t BgL_list3455z00_850;

																					{	/* Expand/initial.scm 127 */
																						obj_t BgL_arg3456z00_851;

																						BgL_arg3456z00_851 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3455z00_850 =
																							MAKE_PAIR(BgL_arg3453z00_848,
																							BgL_arg3456z00_851);
																					}
																					BgL_arg3451z00_846 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3452z00_847,
																						BgL_list3455z00_850);
																			}}
																			return
																				MAKE_PAIR(BgL_arg3450z00_845,
																				BgL_arg3451z00_846);
																		}
																	}
																else
																	{	/* Expand/initial.scm 125 */
																		BgL_listz00_826 = BgL_cdrzd21400zd2_830;
																	BgL_tagzd21390zd2_827:
																		{	/* Expand/initial.scm 135 */
																			obj_t BgL_arg3475z00_870;

																			obj_t BgL_arg3476z00_871;

																			BgL_arg3475z00_870 =
																				CNST_TABLE_REF(((long) 17));
																			{	/* Expand/initial.scm 135 */
																				obj_t BgL_arg3477z00_872;

																				if (NULLP(BgL_listz00_826))
																					{	/* Expand/initial.scm 135 */
																						BgL_arg3477z00_872 = BNIL;
																					}
																				else
																					{	/* Expand/initial.scm 135 */
																						obj_t BgL_head3264z00_876;

																						BgL_head3264z00_876 =
																							MAKE_PAIR(BNIL, BNIL);
																						{
																							obj_t BgL_l3262z00_878;

																							obj_t BgL_tail3265z00_879;

																							BgL_l3262z00_878 =
																								BgL_listz00_826;
																							BgL_tail3265z00_879 =
																								BgL_head3264z00_876;
																						BgL_zc3anonymousza33480ze3z83_880:
																							if (NULLP(BgL_l3262z00_878))
																								{	/* Expand/initial.scm 135 */
																									BgL_arg3477z00_872 =
																										CDR(BgL_head3264z00_876);
																								}
																							else
																								{	/* Expand/initial.scm 135 */
																									obj_t BgL_newtail3266z00_882;

																									{	/* Expand/initial.scm 135 */
																										obj_t BgL_arg3483z00_884;

																										{	/* Expand/initial.scm 135 */
																											obj_t BgL_lz00_886;

																											BgL_lz00_886 =
																												CAR(BgL_l3262z00_878);
																											BgL_arg3483z00_884 =
																												PROCEDURE_ENTRY
																												(BgL_ez00_818)
																												(BgL_ez00_818,
																												BgL_lz00_886,
																												BgL_ez00_818, BEOA);
																										}
																										BgL_newtail3266z00_882 =
																											MAKE_PAIR
																											(BgL_arg3483z00_884,
																											BNIL);
																									}
																									SET_CDR(BgL_tail3265z00_879,
																										BgL_newtail3266z00_882);
																									{
																										obj_t BgL_tail3265z00_8190;

																										obj_t BgL_l3262z00_8188;

																										BgL_l3262z00_8188 =
																											CDR(BgL_l3262z00_878);
																										BgL_tail3265z00_8190 =
																											BgL_newtail3266z00_882;
																										BgL_tail3265z00_879 =
																											BgL_tail3265z00_8190;
																										BgL_l3262z00_878 =
																											BgL_l3262z00_8188;
																										goto
																											BgL_zc3anonymousza33480ze3z83_880;
																									}
																								}
																						}
																					}
																				BgL_arg3476z00_871 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3477z00_872, BNIL);
																			}
																			return
																				MAKE_PAIR(BgL_arg3475z00_870,
																				BgL_arg3476z00_871);
																		}
																	}
															}
														else
															{
																obj_t BgL_listz00_8193;

																BgL_listz00_8193 = BgL_cdrzd21400zd2_830;
																BgL_listz00_826 = BgL_listz00_8193;
																goto BgL_tagzd21390zd2_827;
															}
													}
												else
													{
														obj_t BgL_listz00_8194;

														BgL_listz00_8194 = BgL_cdrzd21400zd2_830;
														BgL_listz00_826 = BgL_listz00_8194;
														goto BgL_tagzd21390zd2_827;
													}
											}
										else
											{
												obj_t BgL_listz00_8195;

												BgL_listz00_8195 = BgL_cdrzd21400zd2_830;
												BgL_listz00_826 = BgL_listz00_8195;
												goto BgL_tagzd21390zd2_827;
											}
									}
								else
									{	/* Expand/initial.scm 125 */
										return BFALSE;
									}
							}
						else
							{	/* Expand/initial.scm 136 */
								obj_t BgL_arg3485z00_888;

								obj_t BgL_arg3486z00_889;

								BgL_arg3485z00_888 = CNST_TABLE_REF(((long) 17));
								{	/* Expand/initial.scm 136 */
									obj_t BgL_arg3487z00_890;

									{	/* Expand/initial.scm 136 */
										obj_t BgL_l3267z00_892;

										BgL_l3267z00_892 = CDR(BgL_xz00_817);
										if (NULLP(BgL_l3267z00_892))
											{	/* Expand/initial.scm 136 */
												BgL_arg3487z00_890 = BNIL;
											}
										else
											{	/* Expand/initial.scm 136 */
												obj_t BgL_head3269z00_894;

												BgL_head3269z00_894 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_l3267z00_896;

													obj_t BgL_tail3270z00_897;

													BgL_l3267z00_896 = BgL_l3267z00_892;
													BgL_tail3270z00_897 = BgL_head3269z00_894;
												BgL_zc3anonymousza33490ze3z83_898:
													if (NULLP(BgL_l3267z00_896))
														{	/* Expand/initial.scm 136 */
															BgL_arg3487z00_890 = CDR(BgL_head3269z00_894);
														}
													else
														{	/* Expand/initial.scm 136 */
															obj_t BgL_newtail3271z00_900;

															{	/* Expand/initial.scm 136 */
																obj_t BgL_arg3493z00_902;

																{	/* Expand/initial.scm 136 */
																	obj_t BgL_lz00_904;

																	BgL_lz00_904 = CAR(BgL_l3267z00_896);
																	BgL_arg3493z00_902 =
																		PROCEDURE_ENTRY(BgL_ez00_818) (BgL_ez00_818,
																		BgL_lz00_904, BgL_ez00_818, BEOA);
																}
																BgL_newtail3271z00_900 =
																	MAKE_PAIR(BgL_arg3493z00_902, BNIL);
															}
															SET_CDR(BgL_tail3270z00_897,
																BgL_newtail3271z00_900);
															{
																obj_t BgL_tail3270z00_8211;

																obj_t BgL_l3267z00_8209;

																BgL_l3267z00_8209 = CDR(BgL_l3267z00_896);
																BgL_tail3270z00_8211 = BgL_newtail3271z00_900;
																BgL_tail3270z00_897 = BgL_tail3270z00_8211;
																BgL_l3267z00_896 = BgL_l3267z00_8209;
																goto BgL_zc3anonymousza33490ze3z83_898;
															}
														}
												}
											}
									}
									BgL_arg3486z00_889 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3487z00_890, BNIL);
								}
								return MAKE_PAIR(BgL_arg3485z00_888, BgL_arg3486z00_889);
							}
					}
				}
			}
		}
	}



/* call-check */
	obj_t BGl_callzd2checkzd2zzexpand_installz00(obj_t BgL_xz00_15,
		obj_t BgL_predz00_16, obj_t BgL_tnamez00_17, obj_t BgL_ez00_18)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 986 */
			{	/* Expand/initial.scm 987 */
				obj_t BgL_funz00_3201;

				BgL_funz00_3201 = CAR(BgL_xz00_15);
				{	/* Expand/initial.scm 987 */
					obj_t BgL_actualsz00_3202;

					BgL_actualsz00_3202 = CDR(BgL_xz00_15);
					{	/* Expand/initial.scm 988 */
						obj_t BgL_formalsz00_3203;

						if (NULLP(BgL_actualsz00_3202))
							{	/* Expand/initial.scm 989 */
								BgL_formalsz00_3203 = BNIL;
							}
						else
							{	/* Expand/initial.scm 989 */
								obj_t BgL_head3384z00_3269;

								BgL_head3384z00_3269 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3382z00_3271;

									obj_t BgL_tail3385z00_3272;

									BgL_l3382z00_3271 = BgL_actualsz00_3202;
									BgL_tail3385z00_3272 = BgL_head3384z00_3269;
								BgL_zc3anonymousza35077ze3z83_3273:
									if (NULLP(BgL_l3382z00_3271))
										{	/* Expand/initial.scm 989 */
											BgL_formalsz00_3203 = CDR(BgL_head3384z00_3269);
										}
									else
										{	/* Expand/initial.scm 989 */
											obj_t BgL_newtail3386z00_3275;

											{	/* Expand/initial.scm 989 */
												obj_t BgL_arg5080z00_3277;

												{	/* Expand/initial.scm 989 */
													obj_t BgL_arg5082z00_3280;

													{	/* Expand/initial.scm 989 */

														{	/* Expand/initial.scm 989 */

															BgL_arg5082z00_3280 =
																BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}
													}
													BgL_arg5080z00_3277 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BgL_arg5082z00_3280);
												}
												BgL_newtail3386z00_3275 =
													MAKE_PAIR(BgL_arg5080z00_3277, BNIL);
											}
											SET_CDR(BgL_tail3385z00_3272, BgL_newtail3386z00_3275);
											{
												obj_t BgL_tail3385z00_8228;

												obj_t BgL_l3382z00_8226;

												BgL_l3382z00_8226 = CDR(BgL_l3382z00_3271);
												BgL_tail3385z00_8228 = BgL_newtail3386z00_3275;
												BgL_tail3385z00_3272 = BgL_tail3385z00_8228;
												BgL_l3382z00_3271 = BgL_l3382z00_8226;
												goto BgL_zc3anonymousza35077ze3z83_3273;
											}
										}
								}
							}
						{	/* Expand/initial.scm 989 */
							obj_t BgL_msgz00_3204;

							{	/* Expand/initial.scm 990 */
								obj_t BgL_arg5075z00_3265;

								{	/* Expand/initial.scm 990 */

									{	/* Expand/initial.scm 990 */

										BgL_arg5075z00_3265 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}
								}
								BgL_msgz00_3204 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BgL_arg5075z00_3265);
							}
							{	/* Expand/initial.scm 990 */
								obj_t BgL_locz00_3205;

								BgL_locz00_3205 =
									BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_15);
								{	/* Expand/initial.scm 991 */

									{	/* Expand/initial.scm 993 */
										obj_t BgL_arg5030z00_3206;

										{	/* Expand/initial.scm 993 */
											obj_t BgL_arg5031z00_3207;

											obj_t BgL_arg5032z00_3208;

											BgL_arg5031z00_3207 = BGl_letzd2symzd2zzast_letz00();
											{	/* Expand/initial.scm 993 */
												obj_t BgL_arg5033z00_3209;

												obj_t BgL_arg5034z00_3210;

												{	/* Expand/initial.scm 993 */
													obj_t BgL_arg5038z00_3214;

													obj_t BgL_arg5039z00_3215;

													if (NULLP(BgL_formalsz00_3203))
														{	/* Expand/initial.scm 993 */
															BgL_arg5038z00_3214 = BNIL;
														}
													else
														{	/* Expand/initial.scm 993 */
															obj_t BgL_head3389z00_3219;

															BgL_head3389z00_3219 = MAKE_PAIR(BNIL, BNIL);
															{
																obj_t BgL_ll3387z00_3221;

																obj_t BgL_ll3388z00_3222;

																obj_t BgL_tail3390z00_3223;

																BgL_ll3387z00_3221 = BgL_formalsz00_3203;
																BgL_ll3388z00_3222 = BgL_actualsz00_3202;
																BgL_tail3390z00_3223 = BgL_head3389z00_3219;
															BgL_zc3anonymousza35041ze3z83_3224:
																if (NULLP(BgL_ll3387z00_3221))
																	{	/* Expand/initial.scm 993 */
																		BgL_arg5038z00_3214 =
																			CDR(BgL_head3389z00_3219);
																	}
																else
																	{	/* Expand/initial.scm 993 */
																		obj_t BgL_newtail3391z00_3226;

																		{	/* Expand/initial.scm 993 */
																			obj_t BgL_arg5045z00_3229;

																			{	/* Expand/initial.scm 993 */
																				obj_t BgL_fz00_3231;

																				obj_t BgL_vz00_3232;

																				BgL_fz00_3231 = CAR(BgL_ll3387z00_3221);
																				BgL_vz00_3232 = CAR(BgL_ll3388z00_3222);
																				{	/* Expand/initial.scm 993 */
																					obj_t BgL_arg5047z00_3233;

																					BgL_arg5047z00_3233 =
																						PROCEDURE_ENTRY(BgL_ez00_18)
																						(BgL_ez00_18, BgL_vz00_3232,
																						BgL_ez00_18, BEOA);
																					{	/* Expand/initial.scm 993 */
																						obj_t BgL_list5048z00_3234;

																						{	/* Expand/initial.scm 993 */
																							obj_t BgL_arg5049z00_3235;

																							BgL_arg5049z00_3235 =
																								MAKE_PAIR(BgL_arg5047z00_3233,
																								BNIL);
																							BgL_list5048z00_3234 =
																								MAKE_PAIR(BgL_fz00_3231,
																								BgL_arg5049z00_3235);
																						}
																						BgL_arg5045z00_3229 =
																							BgL_list5048z00_3234;
																					}
																				}
																			}
																			BgL_newtail3391z00_3226 =
																				MAKE_PAIR(BgL_arg5045z00_3229, BNIL);
																		}
																		SET_CDR(BgL_tail3390z00_3223,
																			BgL_newtail3391z00_3226);
																		{
																			obj_t BgL_tail3390z00_8251;

																			obj_t BgL_ll3388z00_8249;

																			obj_t BgL_ll3387z00_8247;

																			BgL_ll3387z00_8247 =
																				CDR(BgL_ll3387z00_3221);
																			BgL_ll3388z00_8249 =
																				CDR(BgL_ll3388z00_3222);
																			BgL_tail3390z00_8251 =
																				BgL_newtail3391z00_3226;
																			BgL_tail3390z00_3223 =
																				BgL_tail3390z00_8251;
																			BgL_ll3388z00_3222 = BgL_ll3388z00_8249;
																			BgL_ll3387z00_3221 = BgL_ll3387z00_8247;
																			goto BgL_zc3anonymousza35041ze3z83_3224;
																		}
																	}
															}
														}
													{	/* Expand/initial.scm 994 */
														obj_t BgL_arg5050z00_3237;

														{	/* Expand/initial.scm 994 */
															obj_t BgL_arg5052z00_3239;

															{	/* Expand/initial.scm 994 */
																obj_t BgL_arg5053z00_3240;

																{	/* Expand/initial.scm 994 */
																	obj_t BgL_arg5056z00_3243;

																	{	/* Expand/initial.scm 994 */
																		obj_t BgL_res5417z00_5015;

																		{	/* Expand/initial.scm 994 */
																			obj_t BgL_symbolz00_5013;

																			BgL_symbolz00_5013 = BgL_funz00_3201;
																			{	/* Expand/initial.scm 994 */
																				obj_t BgL_arg2063z00_5014;

																				BgL_arg2063z00_5014 =
																					SYMBOL_TO_STRING(BgL_symbolz00_5013);
																				BgL_res5417z00_5015 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg2063z00_5014);
																			}
																		}
																		BgL_arg5056z00_3243 = BgL_res5417z00_5015;
																	}
																	BgL_arg5053z00_3240 =
																		string_append_3(BgL_arg5056z00_3243,
																		BGl_string5646z00zzexpand_installz00,
																		BgL_tnamez00_17);
																}
																{	/* Expand/initial.scm 994 */
																	obj_t BgL_list5055z00_3242;

																	BgL_list5055z00_3242 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg5052z00_3239 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg5053z00_3240, BgL_list5055z00_3242);
																}
															}
															BgL_arg5050z00_3237 =
																MAKE_PAIR(BgL_msgz00_3204, BgL_arg5052z00_3239);
														}
														BgL_arg5039z00_3215 =
															MAKE_PAIR(BgL_arg5050z00_3237, BNIL);
													}
													BgL_arg5033z00_3209 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg5038z00_3214, BgL_arg5039z00_3215);
												}
												BgL_arg5034z00_3210 =
													BGl_loopz72z72zzexpand_installz00(BgL_formalsz00_3203,
													BgL_msgz00_3204, BgL_funz00_3201, BgL_locz00_3205,
													BgL_predz00_16, BgL_formalsz00_3203);
												{	/* Expand/initial.scm 993 */
													obj_t BgL_list5036z00_3212;

													{	/* Expand/initial.scm 993 */
														obj_t BgL_arg5037z00_3213;

														BgL_arg5037z00_3213 = MAKE_PAIR(BNIL, BNIL);
														BgL_list5036z00_3212 =
															MAKE_PAIR(BgL_arg5034z00_3210,
															BgL_arg5037z00_3213);
													}
													BgL_arg5032z00_3208 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg5033z00_3209, BgL_list5036z00_3212);
												}
											}
											BgL_arg5030z00_3206 =
												MAKE_PAIR(BgL_arg5031z00_3207, BgL_arg5032z00_3208);
										}
										return
											BGl_epairifyzd2reczd2zztools_miscz00(BgL_arg5030z00_3206,
											BgL_xz00_15);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zzexpand_installz00(obj_t BgL_formalsz00_5608,
		obj_t BgL_msgz00_5607, obj_t BgL_funz00_5606, obj_t BgL_locz00_5605,
		obj_t BgL_predz00_5604, obj_t BgL_argsz00_3246)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 996 */
			if (NULLP(BgL_argsz00_3246))
				{	/* Expand/initial.scm 997 */
					return MAKE_PAIR(BgL_funz00_5606, BgL_formalsz00_5608);
				}
			else
				{	/* Expand/initial.scm 999 */
					obj_t BgL_arg5060z00_3249;

					obj_t BgL_arg5061z00_3250;

					BgL_arg5060z00_3249 = BGl_ifzd2symzd2zzast_sexpz00();
					{	/* Expand/initial.scm 999 */
						obj_t BgL_arg5062z00_3251;

						obj_t BgL_arg5063z00_3252;

						obj_t BgL_arg5064z00_3253;

						{	/* Expand/initial.scm 999 */
							obj_t BgL_arg5069z00_3258;

							{	/* Expand/initial.scm 999 */
								obj_t BgL_arg5070z00_3259;

								BgL_arg5070z00_3259 = CAR(BgL_argsz00_3246);
								{	/* Expand/initial.scm 999 */
									obj_t BgL_list5072z00_3261;

									BgL_list5072z00_3261 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg5069z00_3258 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg5070z00_3259, BgL_list5072z00_3261);
								}
							}
							BgL_arg5062z00_3251 =
								MAKE_PAIR(BgL_predz00_5604, BgL_arg5069z00_3258);
						}
						BgL_arg5063z00_3252 =
							BGl_loopz72z72zzexpand_installz00(BgL_formalsz00_5608,
							BgL_msgz00_5607, BgL_funz00_5606, BgL_locz00_5605,
							BgL_predz00_5604, CDR(BgL_argsz00_3246));
						BgL_arg5064z00_3253 =
							BGl_errzf2loczf2zzexpand_installz00(BgL_locz00_5605,
							BgL_funz00_5606, BgL_msgz00_5607, CAR(BgL_argsz00_3246));
						{	/* Expand/initial.scm 999 */
							obj_t BgL_list5066z00_3255;

							{	/* Expand/initial.scm 999 */
								obj_t BgL_arg5067z00_3256;

								{	/* Expand/initial.scm 999 */
									obj_t BgL_arg5068z00_3257;

									BgL_arg5068z00_3257 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg5067z00_3256 =
										MAKE_PAIR(BgL_arg5064z00_3253, BgL_arg5068z00_3257);
								}
								BgL_list5066z00_3255 =
									MAKE_PAIR(BgL_arg5063z00_3252, BgL_arg5067z00_3256);
							}
							BgL_arg5061z00_3250 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg5062z00_3251,
								BgL_list5066z00_3255);
						}
					}
					return MAKE_PAIR(BgL_arg5060z00_3249, BgL_arg5061z00_3250);
				}
		}
	}



/* bound-check */
	obj_t BGl_boundzd2checkzd2zzexpand_installz00(obj_t BgL_xz00_19,
		obj_t BgL_flenz00_20, obj_t BgL_predz00_21, obj_t BgL_ez00_22)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 1007 */
			{
				obj_t BgL_funz00_3283;

				obj_t BgL_aobjz00_3284;

				obj_t BgL_aoffz00_3285;

				obj_t BgL_restz00_3286;

				if (PAIRP(BgL_xz00_19))
					{	/* Expand/initial.scm 1008 */
						obj_t BgL_cdrzd22903zd2_3291;

						BgL_cdrzd22903zd2_3291 = CDR(BgL_xz00_19);
						if (PAIRP(BgL_cdrzd22903zd2_3291))
							{	/* Expand/initial.scm 1008 */
								obj_t BgL_cdrzd22909zd2_3293;

								BgL_cdrzd22909zd2_3293 = CDR(BgL_cdrzd22903zd2_3291);
								if (PAIRP(BgL_cdrzd22909zd2_3293))
									{	/* Expand/initial.scm 1008 */
										BgL_funz00_3283 = CAR(BgL_xz00_19);
										BgL_aobjz00_3284 = CAR(BgL_cdrzd22903zd2_3291);
										BgL_aoffz00_3285 = CAR(BgL_cdrzd22909zd2_3293);
										BgL_restz00_3286 = CDR(BgL_cdrzd22909zd2_3293);
										{	/* Expand/initial.scm 1010 */
											obj_t BgL_fobjz00_3299;

											obj_t BgL_foffz00_3300;

											obj_t BgL_lenz00_3301;

											obj_t BgL_locz00_3302;

											{	/* Expand/initial.scm 1010 */
												obj_t BgL_arg5150z00_3371;

												{	/* Expand/initial.scm 1010 */

													{	/* Expand/initial.scm 1010 */

														BgL_arg5150z00_3371 =
															BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
													}
												}
												BgL_fobjz00_3299 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BgL_arg5150z00_3371);
											}
											{	/* Expand/initial.scm 1011 */
												obj_t BgL_arg5151z00_3373;

												{	/* Expand/initial.scm 1011 */

													{	/* Expand/initial.scm 1011 */

														BgL_arg5151z00_3373 =
															BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
													}
												}
												BgL_foffz00_3300 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BgL_arg5151z00_3373);
											}
											{	/* Expand/initial.scm 1012 */
												obj_t BgL_arg5152z00_3375;

												{	/* Expand/initial.scm 1012 */

													{	/* Expand/initial.scm 1012 */

														BgL_arg5152z00_3375 =
															BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
													}
												}
												BgL_lenz00_3301 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BgL_arg5152z00_3375);
											}
											BgL_locz00_3302 =
												BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_19);
											{	/* Expand/initial.scm 1015 */
												obj_t BgL_arg5090z00_3303;

												{	/* Expand/initial.scm 1015 */
													obj_t BgL_arg5091z00_3304;

													obj_t BgL_arg5092z00_3305;

													BgL_arg5091z00_3304 = BGl_letzd2symzd2zzast_letz00();
													{	/* Expand/initial.scm 1015 */
														obj_t BgL_arg5093z00_3306;

														obj_t BgL_arg5094z00_3307;

														{	/* Expand/initial.scm 1015 */
															obj_t BgL_arg5098z00_3311;

															obj_t BgL_arg5099z00_3312;

															{	/* Expand/initial.scm 1015 */
																obj_t BgL_arg5100z00_3313;

																{	/* Expand/initial.scm 1015 */
																	obj_t BgL_arg5101z00_3314;

																	BgL_arg5101z00_3314 =
																		PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22,
																		BgL_aobjz00_3284, BgL_ez00_22, BEOA);
																	{	/* Expand/initial.scm 1015 */
																		obj_t BgL_list5103z00_3316;

																		BgL_list5103z00_3316 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg5100z00_3313 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg5101z00_3314,
																			BgL_list5103z00_3316);
																	}
																}
																BgL_arg5098z00_3311 =
																	MAKE_PAIR(BgL_fobjz00_3299,
																	BgL_arg5100z00_3313);
															}
															{	/* Expand/initial.scm 1016 */
																obj_t BgL_arg5104z00_3317;

																{	/* Expand/initial.scm 1016 */
																	obj_t BgL_arg5107z00_3320;

																	{	/* Expand/initial.scm 1016 */
																		obj_t BgL_arg5108z00_3321;

																		BgL_arg5108z00_3321 =
																			PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22,
																			BgL_aoffz00_3285, BgL_ez00_22, BEOA);
																		{	/* Expand/initial.scm 1016 */
																			obj_t BgL_list5110z00_3323;

																			BgL_list5110z00_3323 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg5107z00_3320 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg5108z00_3321,
																				BgL_list5110z00_3323);
																		}
																	}
																	BgL_arg5104z00_3317 =
																		MAKE_PAIR(BgL_foffz00_3300,
																		BgL_arg5107z00_3320);
																}
																{	/* Expand/initial.scm 1015 */
																	obj_t BgL_list5106z00_3319;

																	BgL_list5106z00_3319 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg5099z00_3312 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg5104z00_3317, BgL_list5106z00_3319);
																}
															}
															BgL_arg5093z00_3306 =
																MAKE_PAIR(BgL_arg5098z00_3311,
																BgL_arg5099z00_3312);
														}
														{	/* Expand/initial.scm 1017 */
															obj_t BgL_arg5111z00_3324;

															obj_t BgL_arg5112z00_3325;

															BgL_arg5111z00_3324 =
																BGl_letzd2symzd2zzast_letz00();
															{	/* Expand/initial.scm 1018 */
																obj_t BgL_arg5113z00_3326;

																obj_t BgL_arg5114z00_3327;

																{	/* Expand/initial.scm 1018 */
																	obj_t BgL_arg5118z00_3331;

																	{	/* Expand/initial.scm 1018 */
																		obj_t BgL_arg5120z00_3333;

																		{	/* Expand/initial.scm 1018 */
																			obj_t BgL_arg5121z00_3334;

																			{	/* Expand/initial.scm 1018 */
																				obj_t BgL_arg5124z00_3337;

																				{	/* Expand/initial.scm 1018 */
																					obj_t BgL_list5125z00_3338;

																					BgL_list5125z00_3338 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg5124z00_3337 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_fobjz00_3299,
																						BgL_list5125z00_3338);
																				}
																				BgL_arg5121z00_3334 =
																					MAKE_PAIR(BgL_flenz00_20,
																					BgL_arg5124z00_3337);
																			}
																			{	/* Expand/initial.scm 1018 */
																				obj_t BgL_list5123z00_3336;

																				BgL_list5123z00_3336 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg5120z00_3333 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg5121z00_3334,
																					BgL_list5123z00_3336);
																			}
																		}
																		BgL_arg5118z00_3331 =
																			MAKE_PAIR(BgL_lenz00_3301,
																			BgL_arg5120z00_3333);
																	}
																	BgL_arg5113z00_3326 =
																		MAKE_PAIR(BgL_arg5118z00_3331, BNIL);
																}
																{	/* Expand/initial.scm 1019 */
																	obj_t BgL_arg5126z00_3339;

																	obj_t BgL_arg5127z00_3340;

																	BgL_arg5126z00_3339 =
																		BGl_ifzd2symzd2zzast_sexpz00();
																	{	/* Expand/initial.scm 1019 */
																		obj_t BgL_arg5128z00_3341;

																		obj_t BgL_arg5129z00_3342;

																		obj_t BgL_arg5130z00_3343;

																		{	/* Expand/initial.scm 1019 */
																			obj_t BgL_arg5135z00_3348;

																			{	/* Expand/initial.scm 1019 */
																				obj_t BgL_list5136z00_3349;

																				{	/* Expand/initial.scm 1019 */
																					obj_t BgL_arg5137z00_3350;

																					BgL_arg5137z00_3350 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list5136z00_3349 =
																						MAKE_PAIR(BgL_lenz00_3301,
																						BgL_arg5137z00_3350);
																				}
																				BgL_arg5135z00_3348 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_foffz00_3300,
																					BgL_list5136z00_3349);
																			}
																			BgL_arg5128z00_3341 =
																				MAKE_PAIR(BgL_predz00_21,
																				BgL_arg5135z00_3348);
																		}
																		{	/* Expand/initial.scm 1020 */
																			obj_t BgL_arg5138z00_3351;

																			{	/* Expand/initial.scm 1020 */
																				obj_t BgL_arg5139z00_3352;

																				{	/* Expand/initial.scm 1020 */
																					obj_t BgL_arg5142z00_3355;

																					if (NULLP(BgL_restz00_3286))
																						{	/* Expand/initial.scm 1020 */
																							BgL_arg5142z00_3355 = BNIL;
																						}
																					else
																						{	/* Expand/initial.scm 1020 */
																							obj_t BgL_head3395z00_3359;

																							BgL_head3395z00_3359 =
																								MAKE_PAIR(BNIL, BNIL);
																							{
																								obj_t BgL_l3393z00_3361;

																								obj_t BgL_tail3396z00_3362;

																								BgL_l3393z00_3361 =
																									BgL_restz00_3286;
																								BgL_tail3396z00_3362 =
																									BgL_head3395z00_3359;
																							BgL_zc3anonymousza35145ze3z83_3363:
																								if (NULLP
																									(BgL_l3393z00_3361))
																									{	/* Expand/initial.scm 1020 */
																										BgL_arg5142z00_3355 =
																											CDR(BgL_head3395z00_3359);
																									}
																								else
																									{	/* Expand/initial.scm 1020 */
																										obj_t
																											BgL_newtail3397z00_3365;
																										{	/* Expand/initial.scm 1020 */
																											obj_t BgL_arg5148z00_3367;

																											{	/* Expand/initial.scm 1020 */
																												obj_t BgL_xz00_3369;

																												BgL_xz00_3369 =
																													CAR
																													(BgL_l3393z00_3361);
																												BgL_arg5148z00_3367 =
																													PROCEDURE_ENTRY
																													(BgL_ez00_22)
																													(BgL_ez00_22,
																													BgL_xz00_3369,
																													BgL_ez00_22, BEOA);
																											}
																											BgL_newtail3397z00_3365 =
																												MAKE_PAIR
																												(BgL_arg5148z00_3367,
																												BNIL);
																										}
																										SET_CDR
																											(BgL_tail3396z00_3362,
																											BgL_newtail3397z00_3365);
																										{
																											obj_t
																												BgL_tail3396z00_8338;
																											obj_t BgL_l3393z00_8336;

																											BgL_l3393z00_8336 =
																												CDR(BgL_l3393z00_3361);
																											BgL_tail3396z00_8338 =
																												BgL_newtail3397z00_3365;
																											BgL_tail3396z00_3362 =
																												BgL_tail3396z00_8338;
																											BgL_l3393z00_3361 =
																												BgL_l3393z00_8336;
																											goto
																												BgL_zc3anonymousza35145ze3z83_3363;
																										}
																									}
																							}
																						}
																					BgL_arg5139z00_3352 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg5142z00_3355, BNIL);
																				}
																				{	/* Expand/initial.scm 1020 */
																					obj_t BgL_list5140z00_3353;

																					{	/* Expand/initial.scm 1020 */
																						obj_t BgL_arg5141z00_3354;

																						BgL_arg5141z00_3354 =
																							MAKE_PAIR(BgL_arg5139z00_3352,
																							BNIL);
																						BgL_list5140z00_3353 =
																							MAKE_PAIR(BgL_foffz00_3300,
																							BgL_arg5141z00_3354);
																					}
																					BgL_arg5138z00_3351 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_fobjz00_3299,
																						BgL_list5140z00_3353);
																				}
																			}
																			BgL_arg5129z00_3342 =
																				MAKE_PAIR(BgL_funz00_3283,
																				BgL_arg5138z00_3351);
																		}
																		BgL_arg5130z00_3343 =
																			BGl_errzf2loczf2zzexpand_installz00
																			(BgL_locz00_3302, BgL_funz00_3283,
																			BGl_string5647z00zzexpand_installz00,
																			BgL_foffz00_3300);
																		{	/* Expand/initial.scm 1019 */
																			obj_t BgL_list5132z00_3345;

																			{	/* Expand/initial.scm 1019 */
																				obj_t BgL_arg5133z00_3346;

																				{	/* Expand/initial.scm 1019 */
																					obj_t BgL_arg5134z00_3347;

																					BgL_arg5134z00_3347 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg5133z00_3346 =
																						MAKE_PAIR(BgL_arg5130z00_3343,
																						BgL_arg5134z00_3347);
																				}
																				BgL_list5132z00_3345 =
																					MAKE_PAIR(BgL_arg5129z00_3342,
																					BgL_arg5133z00_3346);
																			}
																			BgL_arg5127z00_3340 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg5128z00_3341,
																				BgL_list5132z00_3345);
																		}
																	}
																	BgL_arg5114z00_3327 =
																		MAKE_PAIR(BgL_arg5126z00_3339,
																		BgL_arg5127z00_3340);
																}
																{	/* Expand/initial.scm 1017 */
																	obj_t BgL_list5116z00_3329;

																	{	/* Expand/initial.scm 1017 */
																		obj_t BgL_arg5117z00_3330;

																		BgL_arg5117z00_3330 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list5116z00_3329 =
																			MAKE_PAIR(BgL_arg5114z00_3327,
																			BgL_arg5117z00_3330);
																	}
																	BgL_arg5112z00_3325 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg5113z00_3326, BgL_list5116z00_3329);
																}
															}
															BgL_arg5094z00_3307 =
																MAKE_PAIR(BgL_arg5111z00_3324,
																BgL_arg5112z00_3325);
														}
														{	/* Expand/initial.scm 1015 */
															obj_t BgL_list5096z00_3309;

															{	/* Expand/initial.scm 1015 */
																obj_t BgL_arg5097z00_3310;

																BgL_arg5097z00_3310 = MAKE_PAIR(BNIL, BNIL);
																BgL_list5096z00_3309 =
																	MAKE_PAIR(BgL_arg5094z00_3307,
																	BgL_arg5097z00_3310);
															}
															BgL_arg5092z00_3305 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg5093z00_3306, BgL_list5096z00_3309);
														}
													}
													BgL_arg5090z00_3303 =
														MAKE_PAIR(BgL_arg5091z00_3304, BgL_arg5092z00_3305);
												}
												return
													BGl_epairifyzd2reczd2zztools_miscz00
													(BgL_arg5090z00_3303, BgL_xz00_19);
											}
										}
									}
								else
									{	/* Expand/initial.scm 1008 */
									BgL_tagzd22892zd2_3288:
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string5648z00zzexpand_installz00, BgL_xz00_19);
									}
							}
						else
							{	/* Expand/initial.scm 1008 */
								goto BgL_tagzd22892zd2_3288;
							}
					}
				else
					{	/* Expand/initial.scm 1008 */
						goto BgL_tagzd22892zd2_3288;
					}
			}
		}
	}



/* map-check-non-null */
	obj_t BGl_mapzd2checkzd2nonzd2nullzd2zzexpand_installz00(obj_t BgL_xz00_23,
		obj_t BgL_ez00_24, obj_t BgL_nullzd2valzd2_25)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 1029 */
			if (PAIRP(BgL_xz00_23))
				{	/* Expand/initial.scm 1030 */
					obj_t BgL_cdrzd22923zd2_3382;

					BgL_cdrzd22923zd2_3382 = CDR(BgL_xz00_23);
					if (PAIRP(BgL_cdrzd22923zd2_3382))
						{	/* Expand/initial.scm 1030 */
							if (NULLP(CDR(BgL_cdrzd22923zd2_3382)))
								{	/* Expand/initial.scm 1030 */
									obj_t BgL_arg5156z00_3385;

									BgL_arg5156z00_3385 = CAR(BgL_xz00_23);
									BGl_userzd2warningzd2zztools_errorz00(BgL_arg5156z00_3385,
										BGl_string5649z00zzexpand_installz00, BgL_xz00_23);
									return BgL_nullzd2valzd2_25;
								}
							else
								{	/* Expand/initial.scm 1030 */
									return
										BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_23,
										BgL_ez00_24);
								}
						}
					else
						{	/* Expand/initial.scm 1030 */
							return
								BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_23, BgL_ez00_24);
						}
				}
			else
				{	/* Expand/initial.scm 1030 */
					return
						BGl_mapzd2checkzd2zzexpand_installz00(BgL_xz00_23, BgL_ez00_24);
				}
		}
	}



/* map-check */
	obj_t BGl_mapzd2checkzd2zzexpand_installz00(obj_t BgL_xz00_26,
		obj_t BgL_ez00_27)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 1040 */
			{
				obj_t BgL_opz00_3387;

				obj_t BgL_funz00_3388;

				obj_t BgL_actualsz00_3389;

				if (PAIRP(BgL_xz00_26))
					{	/* Expand/initial.scm 1041 */
						obj_t BgL_cdrzd22937zd2_3394;

						BgL_cdrzd22937zd2_3394 = CDR(BgL_xz00_26);
						if (PAIRP(BgL_cdrzd22937zd2_3394))
							{	/* Expand/initial.scm 1041 */
								BgL_opz00_3387 = CAR(BgL_xz00_26);
								BgL_funz00_3388 = CAR(BgL_cdrzd22937zd2_3394);
								BgL_actualsz00_3389 = CDR(BgL_cdrzd22937zd2_3394);
								{	/* Expand/initial.scm 1043 */
									obj_t BgL_formalsz00_3399;

									obj_t BgL_lformalsz00_3400;

									obj_t BgL_ufunz00_3401;

									obj_t BgL_msgzd2listzd2_3402;

									obj_t BgL_locz00_3403;

									if (NULLP(BgL_actualsz00_3389))
										{	/* Expand/initial.scm 1043 */
											BgL_formalsz00_3399 = BNIL;
										}
									else
										{	/* Expand/initial.scm 1043 */
											obj_t BgL_head3400z00_3557;

											BgL_head3400z00_3557 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l3398z00_3559;

												obj_t BgL_tail3401z00_3560;

												BgL_l3398z00_3559 = BgL_actualsz00_3389;
												BgL_tail3401z00_3560 = BgL_head3400z00_3557;
											BgL_zc3anonymousza35290ze3z83_3561:
												if (NULLP(BgL_l3398z00_3559))
													{	/* Expand/initial.scm 1043 */
														BgL_formalsz00_3399 = CDR(BgL_head3400z00_3557);
													}
												else
													{	/* Expand/initial.scm 1043 */
														obj_t BgL_newtail3402z00_3563;

														{	/* Expand/initial.scm 1043 */
															obj_t BgL_arg5293z00_3565;

															{	/* Expand/initial.scm 1043 */
																obj_t BgL_arg5295z00_3568;

																{	/* Expand/initial.scm 1043 */

																	{	/* Expand/initial.scm 1043 */

																		BgL_arg5295z00_3568 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																BgL_arg5293z00_3565 =
																	BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																	(BgL_arg5295z00_3568);
															}
															BgL_newtail3402z00_3563 =
																MAKE_PAIR(BgL_arg5293z00_3565, BNIL);
														}
														SET_CDR(BgL_tail3401z00_3560,
															BgL_newtail3402z00_3563);
														{
															obj_t BgL_tail3401z00_8394;

															obj_t BgL_l3398z00_8392;

															BgL_l3398z00_8392 = CDR(BgL_l3398z00_3559);
															BgL_tail3401z00_8394 = BgL_newtail3402z00_3563;
															BgL_tail3401z00_3560 = BgL_tail3401z00_8394;
															BgL_l3398z00_3559 = BgL_l3398z00_8392;
															goto BgL_zc3anonymousza35290ze3z83_3561;
														}
													}
											}
										}
									if (NULLP(BgL_actualsz00_3389))
										{	/* Expand/initial.scm 1045 */
											BgL_lformalsz00_3400 = BNIL;
										}
									else
										{	/* Expand/initial.scm 1045 */
											obj_t BgL_head3405z00_3573;

											BgL_head3405z00_3573 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l3403z00_3575;

												obj_t BgL_tail3406z00_3576;

												BgL_l3403z00_3575 = BgL_actualsz00_3389;
												BgL_tail3406z00_3576 = BgL_head3405z00_3573;
											BgL_zc3anonymousza35297ze3z83_3577:
												if (NULLP(BgL_l3403z00_3575))
													{	/* Expand/initial.scm 1045 */
														BgL_lformalsz00_3400 = CDR(BgL_head3405z00_3573);
													}
												else
													{	/* Expand/initial.scm 1045 */
														obj_t BgL_newtail3407z00_3579;

														{	/* Expand/initial.scm 1045 */
															obj_t BgL_arg5300z00_3581;

															{	/* Expand/initial.scm 1045 */
																obj_t BgL_arg5302z00_3584;

																{	/* Expand/initial.scm 1045 */

																	{	/* Expand/initial.scm 1045 */

																		BgL_arg5302z00_3584 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																BgL_arg5300z00_3581 =
																	BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																	(BgL_arg5302z00_3584);
															}
															BgL_newtail3407z00_3579 =
																MAKE_PAIR(BgL_arg5300z00_3581, BNIL);
														}
														SET_CDR(BgL_tail3406z00_3576,
															BgL_newtail3407z00_3579);
														{
															obj_t BgL_tail3406z00_8407;

															obj_t BgL_l3403z00_8405;

															BgL_l3403z00_8405 = CDR(BgL_l3403z00_3575);
															BgL_tail3406z00_8407 = BgL_newtail3407z00_3579;
															BgL_tail3406z00_3576 = BgL_tail3406z00_8407;
															BgL_l3403z00_3575 = BgL_l3403z00_8405;
															goto BgL_zc3anonymousza35297ze3z83_3577;
														}
													}
											}
										}
									{	/* Expand/initial.scm 1047 */
										obj_t BgL_arg5303z00_3587;

										{	/* Expand/initial.scm 1047 */

											{	/* Expand/initial.scm 1047 */

												BgL_arg5303z00_3587 =
													BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
											}
										}
										BgL_ufunz00_3401 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BgL_arg5303z00_3587);
									}
									{	/* Expand/initial.scm 1048 */
										obj_t BgL_arg5304z00_3589;

										{	/* Expand/initial.scm 1048 */

											{	/* Expand/initial.scm 1048 */

												BgL_arg5304z00_3589 =
													BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
											}
										}
										BgL_msgzd2listzd2_3402 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BgL_arg5304z00_3589);
									}
									BgL_locz00_3403 =
										BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_26);
									{	/* Expand/initial.scm 1051 */
										obj_t BgL_arg5163z00_3404;

										{	/* Expand/initial.scm 1051 */
											obj_t BgL_arg5164z00_3405;

											obj_t BgL_arg5165z00_3406;

											BgL_arg5164z00_3405 = BGl_letzd2symzd2zzast_letz00();
											{	/* Expand/initial.scm 1051 */
												obj_t BgL_arg5166z00_3407;

												obj_t BgL_arg5167z00_3408;

												{	/* Expand/initial.scm 1051 */
													obj_t BgL_arg5171z00_3412;

													obj_t BgL_arg5172z00_3413;

													if (NULLP(BgL_formalsz00_3399))
														{	/* Expand/initial.scm 1051 */
															BgL_arg5171z00_3412 = BNIL;
														}
													else
														{	/* Expand/initial.scm 1051 */
															obj_t BgL_head3410z00_3417;

															BgL_head3410z00_3417 = MAKE_PAIR(BNIL, BNIL);
															{
																obj_t BgL_ll3408z00_3419;

																obj_t BgL_ll3409z00_3420;

																obj_t BgL_tail3411z00_3421;

																BgL_ll3408z00_3419 = BgL_formalsz00_3399;
																BgL_ll3409z00_3420 = BgL_actualsz00_3389;
																BgL_tail3411z00_3421 = BgL_head3410z00_3417;
															BgL_zc3anonymousza35174ze3z83_3422:
																if (NULLP(BgL_ll3408z00_3419))
																	{	/* Expand/initial.scm 1051 */
																		BgL_arg5171z00_3412 =
																			CDR(BgL_head3410z00_3417);
																	}
																else
																	{	/* Expand/initial.scm 1051 */
																		obj_t BgL_newtail3412z00_3424;

																		{	/* Expand/initial.scm 1051 */
																			obj_t BgL_arg5178z00_3427;

																			{	/* Expand/initial.scm 1051 */
																				obj_t BgL_fz00_3429;

																				obj_t BgL_vz00_3430;

																				BgL_fz00_3429 = CAR(BgL_ll3408z00_3419);
																				BgL_vz00_3430 = CAR(BgL_ll3409z00_3420);
																				{	/* Expand/initial.scm 1051 */
																					obj_t BgL_arg5180z00_3431;

																					BgL_arg5180z00_3431 =
																						PROCEDURE_ENTRY(BgL_ez00_27)
																						(BgL_ez00_27, BgL_vz00_3430,
																						BgL_ez00_27, BEOA);
																					{	/* Expand/initial.scm 1051 */
																						obj_t BgL_list5181z00_3432;

																						{	/* Expand/initial.scm 1051 */
																							obj_t BgL_arg5182z00_3433;

																							BgL_arg5182z00_3433 =
																								MAKE_PAIR(BgL_arg5180z00_3431,
																								BNIL);
																							BgL_list5181z00_3432 =
																								MAKE_PAIR(BgL_fz00_3429,
																								BgL_arg5182z00_3433);
																						}
																						BgL_arg5178z00_3427 =
																							BgL_list5181z00_3432;
																					}
																				}
																			}
																			BgL_newtail3412z00_3424 =
																				MAKE_PAIR(BgL_arg5178z00_3427, BNIL);
																		}
																		SET_CDR(BgL_tail3411z00_3421,
																			BgL_newtail3412z00_3424);
																		{
																			obj_t BgL_tail3411z00_8432;

																			obj_t BgL_ll3409z00_8430;

																			obj_t BgL_ll3408z00_8428;

																			BgL_ll3408z00_8428 =
																				CDR(BgL_ll3408z00_3419);
																			BgL_ll3409z00_8430 =
																				CDR(BgL_ll3409z00_3420);
																			BgL_tail3411z00_8432 =
																				BgL_newtail3412z00_3424;
																			BgL_tail3411z00_3421 =
																				BgL_tail3411z00_8432;
																			BgL_ll3409z00_3420 = BgL_ll3409z00_8430;
																			BgL_ll3408z00_3419 = BgL_ll3408z00_8428;
																			goto BgL_zc3anonymousza35174ze3z83_3422;
																		}
																	}
															}
														}
													{	/* Expand/initial.scm 1052 */
														obj_t BgL_arg5183z00_3435;

														obj_t BgL_arg5184z00_3436;

														{	/* Expand/initial.scm 1052 */
															obj_t BgL_arg5185z00_3437;

															{	/* Expand/initial.scm 1052 */
																obj_t BgL_arg5186z00_3438;

																BgL_arg5186z00_3438 =
																	PROCEDURE_ENTRY(BgL_ez00_27) (BgL_ez00_27,
																	BgL_funz00_3388, BgL_ez00_27, BEOA);
																{	/* Expand/initial.scm 1052 */
																	obj_t BgL_list5188z00_3440;

																	BgL_list5188z00_3440 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg5185z00_3437 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg5186z00_3438, BgL_list5188z00_3440);
																}
															}
															BgL_arg5183z00_3435 =
																MAKE_PAIR(BgL_ufunz00_3401,
																BgL_arg5185z00_3437);
														}
														{	/* Expand/initial.scm 1053 */
															obj_t BgL_arg5189z00_3441;

															{	/* Expand/initial.scm 1053 */
																obj_t BgL_arg5192z00_3444;

																{	/* Expand/initial.scm 1053 */
																	obj_t BgL_arg5193z00_3445;

																	{	/* Expand/initial.scm 1053 */
																		obj_t BgL_arg5196z00_3448;

																		{	/* Expand/initial.scm 1053 */
																			obj_t BgL_res5419z00_5092;

																			{	/* Expand/initial.scm 1053 */
																				obj_t BgL_symbolz00_5090;

																				BgL_symbolz00_5090 = BgL_opz00_3387;
																				{	/* Expand/initial.scm 1053 */
																					obj_t BgL_arg2063z00_5091;

																					BgL_arg2063z00_5091 =
																						SYMBOL_TO_STRING
																						(BgL_symbolz00_5090);
																					BgL_res5419z00_5092 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_5091);
																				}
																			}
																			BgL_arg5196z00_3448 = BgL_res5419z00_5092;
																		}
																		BgL_arg5193z00_3445 =
																			string_append(BgL_arg5196z00_3448,
																			BGl_string5650z00zzexpand_installz00);
																	}
																	{	/* Expand/initial.scm 1053 */
																		obj_t BgL_list5195z00_3447;

																		BgL_list5195z00_3447 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg5192z00_3444 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg5193z00_3445,
																			BgL_list5195z00_3447);
																	}
																}
																BgL_arg5189z00_3441 =
																	MAKE_PAIR(BgL_msgzd2listzd2_3402,
																	BgL_arg5192z00_3444);
															}
															{	/* Expand/initial.scm 1051 */
																obj_t BgL_list5191z00_3443;

																BgL_list5191z00_3443 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg5184z00_3436 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg5189z00_3441, BgL_list5191z00_3443);
															}
														}
														BgL_arg5172z00_3413 =
															MAKE_PAIR(BgL_arg5183z00_3435,
															BgL_arg5184z00_3436);
													}
													BgL_arg5166z00_3407 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg5171z00_3412, BgL_arg5172z00_3413);
												}
												{	/* Expand/initial.scm 1055 */
													obj_t BgL_arg5198z00_3450;

													obj_t BgL_arg5199z00_3451;

													BgL_arg5198z00_3450 = CNST_TABLE_REF(((long) 0));
													{	/* Expand/initial.scm 1055 */
														obj_t BgL_arg5200z00_3452;

														obj_t BgL_arg5201z00_3453;

														obj_t BgL_arg5202z00_3454;

														{	/* Expand/initial.scm 1055 */
															obj_t BgL_arg5207z00_3459;

															obj_t BgL_arg5208z00_3460;

															BgL_arg5207z00_3459 =
																CNST_TABLE_REF(((long) 171));
															{	/* Expand/initial.scm 1055 */
																long BgL_arg5209z00_3461;

																BgL_arg5209z00_3461 =
																	bgl_list_length(BgL_actualsz00_3389);
																{	/* Expand/initial.scm 1055 */
																	obj_t BgL_list5211z00_3463;

																	{	/* Expand/initial.scm 1055 */
																		obj_t BgL_arg5212z00_3464;

																		BgL_arg5212z00_3464 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list5211z00_3463 =
																			MAKE_PAIR(BINT(BgL_arg5209z00_3461),
																			BgL_arg5212z00_3464);
																	}
																	BgL_arg5208z00_3460 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_ufunz00_3401, BgL_list5211z00_3463);
															}}
															BgL_arg5200z00_3452 =
																MAKE_PAIR(BgL_arg5207z00_3459,
																BgL_arg5208z00_3460);
														}
														BgL_arg5201z00_3453 =
															BGl_loopz00zzexpand_installz00
															(BgL_actualsz00_3389, BgL_locz00_3403,
															BgL_lformalsz00_3400, BgL_opz00_3387,
															BgL_ufunz00_3401, BgL_formalsz00_3399,
															BgL_msgzd2listzd2_3402, BgL_formalsz00_3399);
														{	/* Expand/initial.scm 1073 */
															long BgL_arg5288z00_3554;

															BgL_arg5288z00_3554 =
																bgl_list_length(BgL_actualsz00_3389);
															BgL_arg5202z00_3454 =
																BGl_errzf2loczf2zzexpand_installz00
																(BgL_locz00_3403, BgL_opz00_3387,
																BGl_string5651z00zzexpand_installz00,
																BINT(BgL_arg5288z00_3554));
														}
														{	/* Expand/initial.scm 1055 */
															obj_t BgL_list5204z00_3456;

															{	/* Expand/initial.scm 1055 */
																obj_t BgL_arg5205z00_3457;

																{	/* Expand/initial.scm 1055 */
																	obj_t BgL_arg5206z00_3458;

																	BgL_arg5206z00_3458 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg5205z00_3457 =
																		MAKE_PAIR(BgL_arg5202z00_3454,
																		BgL_arg5206z00_3458);
																}
																BgL_list5204z00_3456 =
																	MAKE_PAIR(BgL_arg5201z00_3453,
																	BgL_arg5205z00_3457);
															}
															BgL_arg5199z00_3451 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg5200z00_3452, BgL_list5204z00_3456);
													}}
													BgL_arg5167z00_3408 =
														MAKE_PAIR(BgL_arg5198z00_3450, BgL_arg5199z00_3451);
												}
												{	/* Expand/initial.scm 1051 */
													obj_t BgL_list5169z00_3410;

													{	/* Expand/initial.scm 1051 */
														obj_t BgL_arg5170z00_3411;

														BgL_arg5170z00_3411 = MAKE_PAIR(BNIL, BNIL);
														BgL_list5169z00_3410 =
															MAKE_PAIR(BgL_arg5167z00_3408,
															BgL_arg5170z00_3411);
													}
													BgL_arg5165z00_3406 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg5166z00_3407, BgL_list5169z00_3410);
											}}
											BgL_arg5163z00_3404 =
												MAKE_PAIR(BgL_arg5164z00_3405, BgL_arg5165z00_3406);
										}
										return
											BGl_epairifyzd2reczd2zztools_miscz00(BgL_arg5163z00_3404,
											BgL_xz00_26);
									}
								}
							}
						else
							{	/* Expand/initial.scm 1041 */
							BgL_tagzd22928zd2_3391:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									CAR(BgL_xz00_26), BGl_string5623z00zzexpand_installz00);
							}
					}
				else
					{	/* Expand/initial.scm 1041 */
						goto BgL_tagzd22928zd2_3391;
					}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zzexpand_installz00(obj_t BgL_actualsz00_5603,
		obj_t BgL_locz00_5602, obj_t BgL_lformalsz00_5601, obj_t BgL_opz00_5600,
		obj_t BgL_ufunz00_5599, obj_t BgL_formalsz00_5598,
		obj_t BgL_msgzd2listzd2_5597, obj_t BgL_argsz00_3466)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 1056 */
			if (NULLP(BgL_argsz00_3466))
				{	/* Expand/initial.scm 1057 */
					if ((bgl_list_length(BgL_actualsz00_5603) > ((long) 1)))
						{	/* Expand/initial.scm 1059 */
							obj_t BgL_arg5216z00_3470;

							obj_t BgL_arg5217z00_3471;

							BgL_arg5216z00_3470 = BGl_letzd2symzd2zzast_letz00();
							{	/* Expand/initial.scm 1060 */
								obj_t BgL_arg5218z00_3472;

								obj_t BgL_arg5219z00_3473;

								if (NULLP(BgL_lformalsz00_5601))
									{	/* Expand/initial.scm 1060 */
										BgL_arg5218z00_3472 = BNIL;
									}
								else
									{	/* Expand/initial.scm 1060 */
										obj_t BgL_head3416z00_3480;

										BgL_head3416z00_3480 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_ll3414z00_3482;

											obj_t BgL_ll3415z00_3483;

											obj_t BgL_tail3417z00_3484;

											BgL_ll3414z00_3482 = BgL_lformalsz00_5601;
											BgL_ll3415z00_3483 = BgL_formalsz00_5598;
											BgL_tail3417z00_3484 = BgL_head3416z00_3480;
										BgL_zc3anonymousza35224ze3z83_3485:
											if (NULLP(BgL_ll3414z00_3482))
												{	/* Expand/initial.scm 1060 */
													BgL_arg5218z00_3472 = CDR(BgL_head3416z00_3480);
												}
											else
												{	/* Expand/initial.scm 1060 */
													obj_t BgL_newtail3418z00_3487;

													{	/* Expand/initial.scm 1060 */
														obj_t BgL_arg5228z00_3490;

														{	/* Expand/initial.scm 1060 */
															obj_t BgL_lfz00_3492;

															obj_t BgL_fz00_3493;

															BgL_lfz00_3492 = CAR(BgL_ll3414z00_3482);
															BgL_fz00_3493 = CAR(BgL_ll3415z00_3483);
															{	/* Expand/initial.scm 1061 */
																obj_t BgL_arg5230z00_3494;

																{	/* Expand/initial.scm 1061 */
																	obj_t BgL_arg5231z00_3495;

																	{	/* Expand/initial.scm 1061 */
																		obj_t BgL_arg5234z00_3498;

																		obj_t BgL_arg5235z00_3499;

																		BgL_arg5234z00_3498 =
																			CNST_TABLE_REF(((long) 183));
																		{	/* Expand/initial.scm 1061 */
																			obj_t BgL_list5236z00_3500;

																			BgL_list5236z00_3500 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg5235z00_3499 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_fz00_3493, BgL_list5236z00_3500);
																		}
																		BgL_arg5231z00_3495 =
																			MAKE_PAIR(BgL_arg5234z00_3498,
																			BgL_arg5235z00_3499);
																	}
																	{	/* Expand/initial.scm 1061 */
																		obj_t BgL_list5233z00_3497;

																		BgL_list5233z00_3497 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg5230z00_3494 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg5231z00_3495,
																			BgL_list5233z00_3497);
																}}
																BgL_arg5228z00_3490 =
																	MAKE_PAIR(BgL_lfz00_3492,
																	BgL_arg5230z00_3494);
														}}
														BgL_newtail3418z00_3487 =
															MAKE_PAIR(BgL_arg5228z00_3490, BNIL);
													}
													SET_CDR(BgL_tail3417z00_3484,
														BgL_newtail3418z00_3487);
													{
														obj_t BgL_tail3417z00_8502;

														obj_t BgL_ll3415z00_8500;

														obj_t BgL_ll3414z00_8498;

														BgL_ll3414z00_8498 = CDR(BgL_ll3414z00_3482);
														BgL_ll3415z00_8500 = CDR(BgL_ll3415z00_3483);
														BgL_tail3417z00_8502 = BgL_newtail3418z00_3487;
														BgL_tail3417z00_3484 = BgL_tail3417z00_8502;
														BgL_ll3415z00_3483 = BgL_ll3415z00_8500;
														BgL_ll3414z00_3482 = BgL_ll3414z00_8498;
														goto BgL_zc3anonymousza35224ze3z83_3485;
													}
												}
										}
									}
								{	/* Expand/initial.scm 1063 */
									obj_t BgL_arg5237z00_3502;

									obj_t BgL_arg5238z00_3503;

									BgL_arg5237z00_3502 = BGl_ifzd2symzd2zzast_sexpz00();
									{	/* Expand/initial.scm 1063 */
										obj_t BgL_arg5239z00_3504;

										obj_t BgL_arg5240z00_3505;

										obj_t BgL_arg5241z00_3506;

										{	/* Expand/initial.scm 1063 */
											obj_t BgL_arg5246z00_3511;

											obj_t BgL_arg5247z00_3512;

											BgL_arg5246z00_3511 = CNST_TABLE_REF(((long) 39));
											BgL_arg5247z00_3512 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_lformalsz00_5601, BNIL);
											BgL_arg5239z00_3504 =
												MAKE_PAIR(BgL_arg5246z00_3511, BgL_arg5247z00_3512);
										}
										{	/* Expand/initial.scm 1064 */
											obj_t BgL_arg5248z00_3513;

											{	/* Expand/initial.scm 1064 */
												obj_t BgL_arg5249z00_3514;

												BgL_arg5249z00_3514 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_formalsz00_5598, BNIL);
												{	/* Expand/initial.scm 1064 */
													obj_t BgL_list5250z00_3515;

													BgL_list5250z00_3515 =
														MAKE_PAIR(BgL_arg5249z00_3514, BNIL);
													BgL_arg5248z00_3513 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_ufunz00_5599, BgL_list5250z00_3515);
											}}
											BgL_arg5240z00_3505 =
												MAKE_PAIR(BgL_opz00_5600, BgL_arg5248z00_3513);
										}
										{	/* Expand/initial.scm 1065 */
											obj_t BgL_arg5252z00_3517;

											{	/* Expand/initial.scm 1068 */
												obj_t BgL_arg5253z00_3518;

												obj_t BgL_arg5254z00_3519;

												BgL_arg5253z00_3518 = CNST_TABLE_REF(((long) 184));
												BgL_arg5254z00_3519 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_lformalsz00_5601, BNIL);
												BgL_arg5252z00_3517 =
													MAKE_PAIR(BgL_arg5253z00_3518, BgL_arg5254z00_3519);
											}
											BgL_arg5241z00_3506 =
												BGl_errzf2loczf2zzexpand_installz00(BgL_locz00_5602,
												BgL_opz00_5600, BGl_string5652z00zzexpand_installz00,
												BgL_arg5252z00_3517);
										}
										{	/* Expand/initial.scm 1063 */
											obj_t BgL_list5243z00_3508;

											{	/* Expand/initial.scm 1063 */
												obj_t BgL_arg5244z00_3509;

												{	/* Expand/initial.scm 1063 */
													obj_t BgL_arg5245z00_3510;

													BgL_arg5245z00_3510 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg5244z00_3509 =
														MAKE_PAIR(BgL_arg5241z00_3506, BgL_arg5245z00_3510);
												}
												BgL_list5243z00_3508 =
													MAKE_PAIR(BgL_arg5240z00_3505, BgL_arg5244z00_3509);
											}
											BgL_arg5238z00_3503 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg5239z00_3504, BgL_list5243z00_3508);
									}}
									BgL_arg5219z00_3473 =
										MAKE_PAIR(BgL_arg5237z00_3502, BgL_arg5238z00_3503);
								}
								{	/* Expand/initial.scm 1059 */
									obj_t BgL_list5221z00_3475;

									{	/* Expand/initial.scm 1059 */
										obj_t BgL_arg5222z00_3476;

										BgL_arg5222z00_3476 = MAKE_PAIR(BNIL, BNIL);
										BgL_list5221z00_3475 =
											MAKE_PAIR(BgL_arg5219z00_3473, BgL_arg5222z00_3476);
									}
									BgL_arg5217z00_3471 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg5218z00_3472, BgL_list5221z00_3475);
							}}
							return MAKE_PAIR(BgL_arg5216z00_3470, BgL_arg5217z00_3471);
						}
					else
						{	/* Expand/initial.scm 1069 */
							obj_t BgL_arg5255z00_3520;

							{	/* Expand/initial.scm 1069 */
								obj_t BgL_arg5256z00_3521;

								BgL_arg5256z00_3521 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_formalsz00_5598, BNIL);
								{	/* Expand/initial.scm 1069 */
									obj_t BgL_list5257z00_3522;

									BgL_list5257z00_3522 = MAKE_PAIR(BgL_arg5256z00_3521, BNIL);
									BgL_arg5255z00_3520 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_ufunz00_5599, BgL_list5257z00_3522);
								}
							}
							return MAKE_PAIR(BgL_opz00_5600, BgL_arg5255z00_3520);
						}
				}
			else
				{	/* Expand/initial.scm 1070 */
					obj_t BgL_arg5260z00_3525;

					obj_t BgL_arg5261z00_3526;

					BgL_arg5260z00_3525 = BGl_ifzd2symzd2zzast_sexpz00();
					{	/* Expand/initial.scm 1070 */
						obj_t BgL_arg5262z00_3527;

						obj_t BgL_arg5263z00_3528;

						obj_t BgL_arg5264z00_3529;

						{	/* Expand/initial.scm 1070 */
							obj_t BgL_arg5269z00_3534;

							obj_t BgL_arg5270z00_3535;

							BgL_arg5269z00_3534 = CNST_TABLE_REF(((long) 185));
							{	/* Expand/initial.scm 1070 */
								obj_t BgL_arg5271z00_3536;

								BgL_arg5271z00_3536 = CAR(BgL_argsz00_3466);
								{	/* Expand/initial.scm 1070 */
									obj_t BgL_list5273z00_3538;

									BgL_list5273z00_3538 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg5270z00_3535 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg5271z00_3536, BgL_list5273z00_3538);
							}}
							BgL_arg5262z00_3527 =
								MAKE_PAIR(BgL_arg5269z00_3534, BgL_arg5270z00_3535);
						}
						BgL_arg5263z00_3528 =
							BGl_loopz00zzexpand_installz00(BgL_actualsz00_5603,
							BgL_locz00_5602, BgL_lformalsz00_5601, BgL_opz00_5600,
							BgL_ufunz00_5599, BgL_formalsz00_5598, BgL_msgzd2listzd2_5597,
							CDR(BgL_argsz00_3466));
						{	/* Expand/initial.scm 1072 */
							obj_t BgL_arg5275z00_3540;

							obj_t BgL_arg5276z00_3541;

							{	/* Expand/initial.scm 1072 */
								obj_t BgL_arg5277z00_3542;

								obj_t BgL_arg5278z00_3543;

								BgL_arg5277z00_3542 = CNST_TABLE_REF(((long) 143));
								{	/* Expand/initial.scm 1072 */
									obj_t BgL_list5279z00_3544;

									{	/* Expand/initial.scm 1072 */
										obj_t BgL_arg5280z00_3545;

										obj_t BgL_arg5281z00_3546;

										BgL_arg5280z00_3545 = CNST_TABLE_REF(((long) 186));
										BgL_arg5281z00_3546 = MAKE_PAIR(BNIL, BNIL);
										BgL_list5279z00_3544 =
											MAKE_PAIR(BgL_arg5280z00_3545, BgL_arg5281z00_3546);
									}
									BgL_arg5278z00_3543 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
												(long) 17)), BgL_list5279z00_3544);
								}
								BgL_arg5275z00_3540 =
									MAKE_PAIR(BgL_arg5277z00_3542, BgL_arg5278z00_3543);
							}
							{	/* Expand/initial.scm 1072 */
								obj_t BgL_arg5282z00_3547;

								BgL_arg5282z00_3547 = CAR(BgL_argsz00_3466);
								{	/* Expand/initial.scm 1072 */
									obj_t BgL_list5284z00_3549;

									{	/* Expand/initial.scm 1072 */
										obj_t BgL_arg5285z00_3550;

										{	/* Expand/initial.scm 1072 */
											obj_t BgL_arg5286z00_3551;

											BgL_arg5286z00_3551 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg5285z00_3550 =
												MAKE_PAIR(BgL_arg5282z00_3547, BgL_arg5286z00_3551);
										}
										BgL_list5284z00_3549 =
											MAKE_PAIR(BgL_msgzd2listzd2_5597, BgL_arg5285z00_3550);
									}
									BgL_arg5276z00_3541 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BFALSE,
										BgL_list5284z00_3549);
							}}
							BgL_arg5264z00_3529 =
								MAKE_PAIR(BgL_arg5275z00_3540, BgL_arg5276z00_3541);
						}
						{	/* Expand/initial.scm 1070 */
							obj_t BgL_list5266z00_3531;

							{	/* Expand/initial.scm 1070 */
								obj_t BgL_arg5267z00_3532;

								{	/* Expand/initial.scm 1070 */
									obj_t BgL_arg5268z00_3533;

									BgL_arg5268z00_3533 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg5267z00_3532 =
										MAKE_PAIR(BgL_arg5264z00_3529, BgL_arg5268z00_3533);
								}
								BgL_list5266z00_3531 =
									MAKE_PAIR(BgL_arg5263z00_3528, BgL_arg5267z00_3532);
							}
							BgL_arg5261z00_3526 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg5262z00_3527,
								BgL_list5266z00_3531);
					}}
					return MAKE_PAIR(BgL_arg5260z00_3525, BgL_arg5261z00_3526);
				}
		}
	}



/* err/loc */
	obj_t BGl_errzf2loczf2zzexpand_installz00(obj_t BgL_locz00_28,
		obj_t BgL_procz00_29, obj_t BgL_msgz00_30, obj_t BgL_objz00_31)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 1084 */
			{	/* Expand/initial.scm 1085 */
				bool_t BgL_testz00_8554;

				if (STRUCTP(BgL_locz00_28))
					{	/* Expand/initial.scm 1085 */
						BgL_testz00_8554 =
							(STRUCT_KEY(BgL_locz00_28) == CNST_TABLE_REF(((long) 179)));
					}
				else
					{	/* Expand/initial.scm 1085 */
						BgL_testz00_8554 = ((bool_t) 0);
					}
				if (BgL_testz00_8554)
					{	/* Expand/initial.scm 1086 */
						obj_t BgL_arg5308z00_3594;

						obj_t BgL_arg5309z00_3595;

						{	/* Expand/initial.scm 1086 */
							obj_t BgL_arg5310z00_3596;

							obj_t BgL_arg5311z00_3597;

							BgL_arg5310z00_3596 = CNST_TABLE_REF(((long) 143));
							{	/* Expand/initial.scm 1086 */
								obj_t BgL_list5312z00_3598;

								{	/* Expand/initial.scm 1086 */
									obj_t BgL_arg5313z00_3599;

									obj_t BgL_arg5314z00_3600;

									BgL_arg5313z00_3599 = CNST_TABLE_REF(((long) 186));
									BgL_arg5314z00_3600 = MAKE_PAIR(BNIL, BNIL);
									BgL_list5312z00_3598 =
										MAKE_PAIR(BgL_arg5313z00_3599, BgL_arg5314z00_3600);
								}
								BgL_arg5311z00_3597 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
											(long) 187)), BgL_list5312z00_3598);
							}
							BgL_arg5308z00_3594 =
								MAKE_PAIR(BgL_arg5310z00_3596, BgL_arg5311z00_3597);
						}
						{	/* Expand/initial.scm 1086 */
							obj_t BgL_arg5315z00_3601;

							obj_t BgL_arg5316z00_3602;

							obj_t BgL_arg5317z00_3603;

							{	/* Expand/initial.scm 1086 */
								obj_t BgL_arg5324z00_3610;

								obj_t BgL_arg5325z00_3611;

								BgL_arg5324z00_3610 = CNST_TABLE_REF(((long) 130));
								{	/* Expand/initial.scm 1086 */
									obj_t BgL_list5326z00_3612;

									BgL_list5326z00_3612 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg5325z00_3611 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_procz00_29,
										BgL_list5326z00_3612);
								}
								BgL_arg5315z00_3601 =
									MAKE_PAIR(BgL_arg5324z00_3610, BgL_arg5325z00_3611);
							}
							BgL_arg5316z00_3602 =
								BGl_locationzd2fullzd2fnamez00zztools_locationz00
								(BgL_locz00_28);
							BgL_arg5317z00_3603 =
								STRUCT_REF(BgL_locz00_28, (int) (((long) 1)));
							{	/* Expand/initial.scm 1086 */
								obj_t BgL_list5319z00_3605;

								{	/* Expand/initial.scm 1086 */
									obj_t BgL_arg5320z00_3606;

									{	/* Expand/initial.scm 1086 */
										obj_t BgL_arg5321z00_3607;

										{	/* Expand/initial.scm 1086 */
											obj_t BgL_arg5322z00_3608;

											{	/* Expand/initial.scm 1086 */
												obj_t BgL_arg5323z00_3609;

												BgL_arg5323z00_3609 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg5322z00_3608 =
													MAKE_PAIR(BgL_arg5317z00_3603, BgL_arg5323z00_3609);
											}
											BgL_arg5321z00_3607 =
												MAKE_PAIR(BgL_arg5316z00_3602, BgL_arg5322z00_3608);
										}
										BgL_arg5320z00_3606 =
											MAKE_PAIR(BgL_objz00_31, BgL_arg5321z00_3607);
									}
									BgL_list5319z00_3605 =
										MAKE_PAIR(BgL_msgz00_30, BgL_arg5320z00_3606);
								}
								BgL_arg5309z00_3595 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg5315z00_3601, BgL_list5319z00_3605);
						}}
						return MAKE_PAIR(BgL_arg5308z00_3594, BgL_arg5309z00_3595);
					}
				else
					{	/* Expand/initial.scm 1091 */
						obj_t BgL_arg5327z00_3613;

						obj_t BgL_arg5328z00_3614;

						{	/* Expand/initial.scm 1091 */
							obj_t BgL_arg5329z00_3615;

							obj_t BgL_arg5330z00_3616;

							BgL_arg5329z00_3615 = CNST_TABLE_REF(((long) 143));
							{	/* Expand/initial.scm 1091 */
								obj_t BgL_list5331z00_3617;

								{	/* Expand/initial.scm 1091 */
									obj_t BgL_arg5332z00_3618;

									obj_t BgL_arg5333z00_3619;

									BgL_arg5332z00_3618 = CNST_TABLE_REF(((long) 186));
									BgL_arg5333z00_3619 = MAKE_PAIR(BNIL, BNIL);
									BgL_list5331z00_3617 =
										MAKE_PAIR(BgL_arg5332z00_3618, BgL_arg5333z00_3619);
								}
								BgL_arg5330z00_3616 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
											(long) 17)), BgL_list5331z00_3617);
							}
							BgL_arg5327z00_3613 =
								MAKE_PAIR(BgL_arg5329z00_3615, BgL_arg5330z00_3616);
						}
						{	/* Expand/initial.scm 1091 */
							obj_t BgL_arg5334z00_3620;

							{	/* Expand/initial.scm 1091 */
								obj_t BgL_arg5339z00_3625;

								obj_t BgL_arg5340z00_3626;

								BgL_arg5339z00_3625 = CNST_TABLE_REF(((long) 130));
								{	/* Expand/initial.scm 1091 */
									obj_t BgL_list5341z00_3627;

									BgL_list5341z00_3627 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg5340z00_3626 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_procz00_29,
										BgL_list5341z00_3627);
								}
								BgL_arg5334z00_3620 =
									MAKE_PAIR(BgL_arg5339z00_3625, BgL_arg5340z00_3626);
							}
							{	/* Expand/initial.scm 1091 */
								obj_t BgL_list5336z00_3622;

								{	/* Expand/initial.scm 1091 */
									obj_t BgL_arg5337z00_3623;

									{	/* Expand/initial.scm 1091 */
										obj_t BgL_arg5338z00_3624;

										BgL_arg5338z00_3624 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg5337z00_3623 =
											MAKE_PAIR(BgL_objz00_31, BgL_arg5338z00_3624);
									}
									BgL_list5336z00_3622 =
										MAKE_PAIR(BgL_msgz00_30, BgL_arg5337z00_3623);
								}
								BgL_arg5328z00_3614 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg5334z00_3620, BgL_list5336z00_3622);
						}}
						return MAKE_PAIR(BgL_arg5327z00_3613, BgL_arg5328z00_3614);
					}
			}
		}
	}



/* disp */
	obj_t BGl_dispz00zzexpand_installz00(obj_t BgL_objz00_32)
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 1096 */
			if (STRINGP(BgL_objz00_32))
				{	/* Expand/initial.scm 1098 */
					return CNST_TABLE_REF(((long) 188));
				}
			else
				{	/* Expand/initial.scm 1100 */
					bool_t BgL_testz00_8600;

					if (PAIRP(BgL_objz00_32))
						{	/* Expand/initial.scm 1100 */
							if ((CAR(BgL_objz00_32) == CNST_TABLE_REF(((long) 130))))
								{	/* Expand/initial.scm 1102 */
									obj_t BgL_auxz00_8607;

									BgL_auxz00_8607 = CAR(CDR(BgL_objz00_32));
									BgL_testz00_8600 = SYMBOLP(BgL_auxz00_8607);
								}
							else
								{	/* Expand/initial.scm 1101 */
									BgL_testz00_8600 = ((bool_t) 0);
								}
						}
					else
						{	/* Expand/initial.scm 1100 */
							BgL_testz00_8600 = ((bool_t) 0);
						}
					if (BgL_testz00_8600)
						{	/* Expand/initial.scm 1100 */
							return CNST_TABLE_REF(((long) 189));
						}
					else
						{	/* Expand/initial.scm 1100 */
							if (INTEGERP(BgL_objz00_32))
								{	/* Expand/initial.scm 1104 */
									return CNST_TABLE_REF(((long) 190));
								}
							else
								{	/* Expand/initial.scm 1104 */
									if (REALP(BgL_objz00_32))
										{	/* Expand/initial.scm 1106 */
											return CNST_TABLE_REF(((long) 191));
										}
									else
										{	/* Expand/initial.scm 1106 */
											if (CHARP(BgL_objz00_32))
												{	/* Expand/initial.scm 1108 */
													return CNST_TABLE_REF(((long) 192));
												}
											else
												{	/* Expand/initial.scm 1108 */
													return CNST_TABLE_REF(((long) 193));
		}}}}}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_installz00()
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_installz00()
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_installz00()
	{
		AN_OBJECT;
		{	/* Expand/initial.scm 15 */
			BGl_modulezd2initializa7ationz75zzexpand_ifz00(((long) 87198077),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 245373811),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_definez00(((long) 275459259),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 112686943),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_exitz00(((long) 483385827),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_garithmetiquez00(((long)
					131441800), BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_iarithmetiquez00(((long)
					189140200), BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_farithmetiquez00(((long)
					495260710), BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_letz00(((long) 170326215),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_casez00(((long) 260297037),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_structz00(((long) 22824826),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_mapz00(((long) 89214606),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_assertz00(((long) 29191778),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_objectz00(((long) 119379568),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzexpand_multiplezd2valueszd2(((long)
					95995008), BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 352861756),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzast_labelsz00(((long) 365507801),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
			return BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string5653z00zzexpand_installz00));
		}
	}

#ifdef __cplusplus
}
#endif
