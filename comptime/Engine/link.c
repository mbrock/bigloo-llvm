/*===========================================================================*/
/*   (Engine/link.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/link.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_findzd2srczd2filez00zzengine_linkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_linkz00 = BUNSPEC;
	static obj_t BGl__unprofzd2srczd2namez00zzengine_linkz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzengine_linkz00();
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl__findzd2librarieszd2zzengine_linkz00(obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_linkz00zzengine_linkz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzengine_linkz00();
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	extern obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	static obj_t BGl_zc3anonymousza31757ze3z83zzengine_linkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_linkz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_za2srczd2suffixza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31777ze3z83zzengine_linkz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_installz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_IMPORT obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl__findzd2filezd2forzd2linkzd2zzengine_linkz00(obj_t, obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_installzd2initialzd2expanderz00zzexpand_installz00();
	static obj_t BGl_loopz00zzengine_linkz00(obj_t, obj_t);
	extern obj_t BGl_readzd2directiveszd2zzread_includez00(obj_t);
	extern obj_t BGl_za2targetzd2languageza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl__makezd2tmpzd2mainz00zzengine_linkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_linkz00();
	static obj_t BGl__linkz00zzengine_linkz00(obj_t);
	static obj_t BGl__findzd2srczd2filez00zzengine_linkz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzengine_linkz00();
	BGL_IMPORT obj_t bgl_register_eval_srfi(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unprofzd2srczd2namez00zzengine_linkz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t,
		bool_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_linkzd2envzd2zzengine_linkz00,
		BgL_bgl__linkza700za7za7engine1817za7, BGl__linkz00zzengine_linkz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2srczd2filezd2envzd2zzengine_linkz00,
		BgL_bgl__findza7d2srcza7d2fi1818z00,
		BGl__findzd2srczd2filez00zzengine_linkz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2tmpzd2mainzd2envzd2zzengine_linkz00,
		BgL_bgl__makeza7d2tmpza7d2ma1819z00,
		BGl__makezd2tmpzd2mainz00zzengine_linkz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2filezd2forzd2linkzd2envz00zzengine_linkz00,
		BgL_bgl__findza7d2fileza7d2f1820z00,
		BGl__findzd2filezd2forzd2linkzd2zzengine_linkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1805z00zzengine_linkz00,
		BgL_bgl_za7c3anonymousza7a311821z00,
		BGl_zc3anonymousza31777ze3z83zzengine_linkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1806z00zzengine_linkz00,
		BgL_bgl_za7c3anonymousza7a311822z00,
		BGl_zc3anonymousza31757ze3z83zzengine_linkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1800z00zzengine_linkz00,
		BgL_bgl_string1800za700za7za7e1823za7, "No Bigloo module found for -- ",
		30);
	      DEFINE_STRING(BGl_string1801z00zzengine_linkz00,
		BgL_bgl_string1801za700za7za7e1824za7, "link", 4);
	      DEFINE_STRING(BGl_string1802z00zzengine_linkz00,
		BgL_bgl_string1802za700za7za7e1825za7, "'. Using file -- ", 17);
	      DEFINE_STRING(BGl_string1803z00zzengine_linkz00,
		BgL_bgl_string1803za700za7za7e1826za7,
		"Several source files found for object `", 39);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unprofzd2srczd2namezd2envzd2zzengine_linkz00,
		BgL_bgl__unprofza7d2srcza7d21827z00,
		BGl__unprofzd2srczd2namez00zzengine_linkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1804z00zzengine_linkz00,
		BgL_bgl_string1804za700za7za7e1828za7, ".", 1);
	      DEFINE_STRING(BGl_string1807z00zzengine_linkz00,
		BgL_bgl_string1807za700za7za7e1829za7, ";; ", 3);
	      DEFINE_STRING(BGl_string1808z00zzengine_linkz00,
		BgL_bgl_string1808za700za7za7e1830za7,
		";; !!! generated file, don't edit !!!", 37);
	      DEFINE_STRING(BGl_string1810z00zzengine_linkz00,
		BgL_bgl_string1810za700za7za7e1831za7, "(main *the-command-line*)", 25);
	      DEFINE_STRING(BGl_string1809z00zzengine_linkz00,
		BgL_bgl_string1809za700za7za7e1832za7,
		";; ==================================", 37);
	      DEFINE_STRING(BGl_string1811z00zzengine_linkz00,
		BgL_bgl_string1811za700za7za7e1833za7, "", 0);
	      DEFINE_STRING(BGl_string1812z00zzengine_linkz00,
		BgL_bgl_string1812za700za7za7e1834za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string1813z00zzengine_linkz00,
		BgL_bgl_string1813za700za7za7e1835za7, "engine_link", 11);
	      DEFINE_STRING(BGl_string1814z00zzengine_linkz00,
		BgL_bgl_string1814za700za7za7e1836za7,
		"import module cond-expand include eval library bigloo-compile ", 62);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2librarieszd2envz00zzengine_linkz00,
		BgL_bgl__findza7d2librarie1837za7, BGl__findzd2librarieszd2zzengine_linkz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long
		BgL_checksumz00_547, char *BgL_fromz00_548)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_linkz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_linkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzengine_linkz00();
					BGl_cnstzd2initzd2zzengine_linkz00();
					BGl_importedzd2moduleszd2initz00zzengine_linkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_linkz00()
	{
		AN_OBJECT;
		{	/* Engine/link.scm 20 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long) 0),
				"engine_link");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzengine_linkz00()
	{
		AN_OBJECT;
		{	/* Engine/link.scm 20 */
			{	/* Engine/link.scm 20 */
				obj_t BgL_cportz00_538;

				BgL_cportz00_538 =
					bgl_open_input_string(BGl_string1814z00zzengine_linkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_539;

					BgL_iz00_539 = ((long) 6);
				BgL_loopz00_540:
					if ((BgL_iz00_539 == ((long) -1)))
						{	/* Engine/link.scm 20 */
							return BUNSPEC;
						}
					else
						{	/* Engine/link.scm 20 */
							{	/* Engine/link.scm 20 */
								obj_t BgL_arg1816z00_542;

								{	/* Engine/link.scm 20 */

									{	/* Engine/link.scm 20 */
										obj_t BgL_locationz00_544;

										BgL_locationz00_544 = BBOOL(((bool_t) 0));
										{	/* Engine/link.scm 20 */

											BgL_arg1816z00_542 =
												BGl_readz00zz__readerz00(BgL_cportz00_538,
												BgL_locationz00_544);
										}
									}
								}
								{	/* Engine/link.scm 20 */
									int BgL_auxz00_571;

									BgL_auxz00_571 = (int) (BgL_iz00_539);
									CNST_TABLE_SET(BgL_auxz00_571, BgL_arg1816z00_542);
							}}
							{	/* Engine/link.scm 20 */
								int BgL_auxz00_545;

								BgL_auxz00_545 = (int) ((BgL_iz00_539 - ((long) 1)));
								{
									long BgL_iz00_576;

									BgL_iz00_576 = (long) (BgL_auxz00_545);
									BgL_iz00_539 = BgL_iz00_576;
									goto BgL_loopz00_540;
								}
							}
						}
				}
			}
		}
	}



/* link */
	BGL_EXPORTED_DEF obj_t BGl_linkz00zzengine_linkz00()
	{
		AN_OBJECT;
		{	/* Engine/link.scm 42 */
			bgl_register_eval_srfi(CNST_TABLE_REF(((long) 0)));
			BGl_installzd2initialzd2expanderz00zzexpand_installz00();
			BGl_setzd2backendz12zc0zzbackend_backendz00
				(BGl_za2targetzd2languageza2zd2zzengine_paramz00);
			{
				obj_t BgL_objectsz00_193;

				obj_t BgL_sourcesz00_194;

				BgL_objectsz00_193 = BGl_za2ozd2filesza2zd2zzengine_paramz00;
				BgL_sourcesz00_194 = BNIL;
			BgL_zc3anonymousza31622ze3z83_195:
				if (NULLP(BgL_objectsz00_193))
					{	/* Engine/link.scm 54 */
						obj_t BgL_arg1624z00_197;

						BgL_arg1624z00_197 = BGl_thezd2backendzd2zzbackend_backendz00();
						return
							BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(
							(BgL_backendz00_bglt) (BgL_arg1624z00_197), BgL_sourcesz00_194);
					}
				else
					{	/* Engine/link.scm 55 */
						obj_t BgL_objectz00_198;

						BgL_objectz00_198 = CAR(BgL_objectsz00_193);
						{	/* Engine/link.scm 55 */
							obj_t BgL_prefz00_199;

							BgL_prefz00_199 =
								BGl_unprofzd2srczd2namez00zzengine_linkz00
								(BGl_prefixz00zz__osz00(BgL_objectz00_198));
							{	/* Engine/link.scm 56 */
								obj_t BgL_bprefz00_200;

								BgL_bprefz00_200 = BGl_basenamez00zz__osz00(BgL_prefz00_199);
								{	/* Engine/link.scm 57 */
									obj_t BgL_scmzd2filezd2_201;

									BgL_scmzd2filezd2_201 =
										BGl_findzd2srczd2filez00zzengine_linkz00(BgL_prefz00_199,
										BgL_bprefz00_200);
									{	/* Engine/link.scm 58 */

										if (STRINGP(BgL_scmzd2filezd2_201))
											{	/* Engine/link.scm 60 */
												obj_t BgL_arg1626z00_203;

												obj_t BgL_arg1627z00_204;

												BgL_arg1626z00_203 = CDR(BgL_objectsz00_193);
												{	/* Engine/link.scm 60 */
													obj_t BgL_arg1628z00_205;

													BgL_arg1628z00_205 =
														MAKE_PAIR(BgL_scmzd2filezd2_201, BgL_objectz00_198);
													BgL_arg1627z00_204 =
														MAKE_PAIR(BgL_arg1628z00_205, BgL_sourcesz00_194);
												}
												{
													obj_t BgL_sourcesz00_598;

													obj_t BgL_objectsz00_597;

													BgL_objectsz00_597 = BgL_arg1626z00_203;
													BgL_sourcesz00_598 = BgL_arg1627z00_204;
													BgL_sourcesz00_194 = BgL_sourcesz00_598;
													BgL_objectsz00_193 = BgL_objectsz00_597;
													goto BgL_zc3anonymousza31622ze3z83_195;
												}
											}
										else
											{	/* Engine/link.scm 59 */
												{	/* Engine/link.scm 62 */
													bool_t BgL_testz00_599;

													{	/* Engine/link.scm 62 */
														int BgL_arg1637z00_213;

														BgL_arg1637z00_213 =
															BGl_bigloozd2warningzd2zz__paramz00();
														BgL_testz00_599 =
															((long) (BgL_arg1637z00_213) >= ((long) 2));
													}
													if (BgL_testz00_599)
														{	/* Engine/link.scm 63 */
															obj_t BgL_arg1632z00_209;

															BgL_arg1632z00_209 = CAR(BgL_objectsz00_193);
															{	/* Engine/link.scm 63 */
																obj_t BgL_list1633z00_210;

																{	/* Engine/link.scm 63 */
																	obj_t BgL_arg1635z00_211;

																	{	/* Engine/link.scm 63 */
																		obj_t BgL_arg1636z00_212;

																		BgL_arg1636z00_212 =
																			MAKE_PAIR(BgL_arg1632z00_209, BNIL);
																		BgL_arg1635z00_211 =
																			MAKE_PAIR
																			(BGl_string1800z00zzengine_linkz00,
																			BgL_arg1636z00_212);
																	}
																	BgL_list1633z00_210 =
																		MAKE_PAIR(BGl_string1801z00zzengine_linkz00,
																		BgL_arg1635z00_211);
																}
																BGl_warningz00zz__errorz00(BgL_list1633z00_210);
															}
														}
													else
														{	/* Engine/link.scm 62 */
															BFALSE;
														}
												}
												{
													obj_t BgL_objectsz00_608;

													BgL_objectsz00_608 = CDR(BgL_objectsz00_193);
													BgL_objectsz00_193 = BgL_objectsz00_608;
													goto BgL_zc3anonymousza31622ze3z83_195;
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



/* _link */
	obj_t BGl__linkz00zzengine_linkz00(obj_t BgL_envz00_516)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 42 */
			return BGl_linkz00zzengine_linkz00();
		}
	}



/* unprof-src-name */
	BGL_EXPORTED_DEF obj_t BGl_unprofzd2srczd2namez00zzengine_linkz00(obj_t
		BgL_namez00_1)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 71 */
			if (CBOOL(BGl_za2profilezd2modeza2zd2zzengine_paramz00))
				{	/* Engine/link.scm 74 */
					long BgL_lenz00_218;

					BgL_lenz00_218 = STRING_LENGTH(BgL_namez00_1);
					{	/* Engine/link.scm 75 */
						bool_t BgL_testz00_614;

						if ((BgL_lenz00_218 > ((long) 2)))
							{	/* Engine/link.scm 75 */
								if (
									(STRING_REF(BgL_namez00_1,
											(BgL_lenz00_218 - ((long) 1))) == ((unsigned char) 'p')))
									{	/* Engine/link.scm 76 */
										BgL_testz00_614 =
											(STRING_REF(BgL_namez00_1,
												(BgL_lenz00_218 - ((long) 2))) ==
											((unsigned char) '_'));
									}
								else
									{	/* Engine/link.scm 76 */
										BgL_testz00_614 = ((bool_t) 0);
									}
							}
						else
							{	/* Engine/link.scm 75 */
								BgL_testz00_614 = ((bool_t) 0);
							}
						if (BgL_testz00_614)
							{	/* Engine/link.scm 75 */
								return
									c_substring(BgL_namez00_1, ((long) 0),
									(BgL_lenz00_218 - ((long) 2)));
							}
						else
							{	/* Engine/link.scm 75 */
								return BgL_namez00_1;
							}
					}
				}
			else
				{	/* Engine/link.scm 72 */
					return BgL_namez00_1;
				}
		}
	}



/* _unprof-src-name */
	obj_t BGl__unprofzd2srczd2namez00zzengine_linkz00(obj_t BgL_envz00_517,
		obj_t BgL_namez00_518)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 71 */
			return BGl_unprofzd2srczd2namez00zzengine_linkz00(BgL_namez00_518);
		}
	}



/* find-file-for-link */
	BGL_EXPORTED_DEF obj_t BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00(obj_t
		BgL_filez00_2)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 84 */
			if (fexists(BSTRING_TO_STRING(BgL_filez00_2)))
				{	/* Engine/link.scm 85 */
					return BgL_filez00_2;
				}
			else
				{	/* Engine/link.scm 85 */
					return
						BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_2,
						BGl_za2loadzd2pathza2zd2zz__evalz00);
				}
		}
	}



/* _find-file-for-link */
	obj_t BGl__findzd2filezd2forzd2linkzd2zzengine_linkz00(obj_t BgL_envz00_519,
		obj_t BgL_filez00_520)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 84 */
			return BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00(BgL_filez00_520);
		}
	}



/* find-src-file */
	BGL_EXPORTED_DEF obj_t BGl_findzd2srczd2filez00zzengine_linkz00(obj_t
		BgL_prefixz00_3, obj_t BgL_bnamez00_4)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 92 */
			{
				obj_t BgL_suffixz00_231;

				obj_t BgL_filesz00_232;

				BgL_suffixz00_231 = BGl_za2srczd2suffixza2zd2zzengine_paramz00;
				BgL_filesz00_232 = BNIL;
			BgL_zc3anonymousza31656ze3z83_233:
				if (NULLP(BgL_suffixz00_231))
					{	/* Engine/link.scm 95 */
						if (NULLP(BgL_filesz00_232))
							{	/* Engine/link.scm 97 */
								return BFALSE;
							}
						else
							{	/* Engine/link.scm 97 */
								if (NULLP(CDR(BgL_filesz00_232)))
									{	/* Engine/link.scm 99 */
										return CAR(BgL_filesz00_232);
									}
								else
									{	/* Engine/link.scm 99 */
										{	/* Engine/link.scm 102 */
											obj_t BgL_arg1664z00_240;

											BgL_arg1664z00_240 = CAR(BgL_filesz00_232);
											{	/* Engine/link.scm 102 */
												obj_t BgL_list1665z00_241;

												{	/* Engine/link.scm 102 */
													obj_t BgL_arg1666z00_242;

													{	/* Engine/link.scm 102 */
														obj_t BgL_arg1667z00_243;

														{	/* Engine/link.scm 102 */
															obj_t BgL_arg1668z00_244;

															{	/* Engine/link.scm 102 */
																obj_t BgL_arg1669z00_245;

																BgL_arg1669z00_245 =
																	MAKE_PAIR(BgL_arg1664z00_240, BNIL);
																BgL_arg1668z00_244 =
																	MAKE_PAIR(BGl_string1802z00zzengine_linkz00,
																	BgL_arg1669z00_245);
															}
															BgL_arg1667z00_243 =
																MAKE_PAIR(BgL_bnamez00_4, BgL_arg1668z00_244);
														}
														BgL_arg1666z00_242 =
															MAKE_PAIR(BGl_string1803z00zzengine_linkz00,
															BgL_arg1667z00_243);
													}
													BgL_list1665z00_241 =
														MAKE_PAIR(BGl_string1801z00zzengine_linkz00,
														BgL_arg1666z00_242);
												}
												BGl_warningz00zz__errorz00(BgL_list1665z00_241);
											}
										}
										return CAR(BgL_filesz00_232);
									}
							}
					}
				else
					{	/* Engine/link.scm 105 */
						obj_t BgL_sufz00_247;

						BgL_sufz00_247 = CAR(BgL_suffixz00_231);
						{	/* Engine/link.scm 105 */
							obj_t BgL_fz00_248;

							BgL_fz00_248 =
								BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00(string_append_3
								(BgL_prefixz00_3, BGl_string1804z00zzengine_linkz00,
									BgL_sufz00_247));
							{	/* Engine/link.scm 106 */

								if (STRINGP(BgL_fz00_248))
									{	/* Engine/link.scm 108 */
										obj_t BgL_arg1672z00_250;

										obj_t BgL_arg1673z00_251;

										BgL_arg1672z00_250 = CDR(BgL_suffixz00_231);
										BgL_arg1673z00_251 =
											MAKE_PAIR(BgL_fz00_248, BgL_filesz00_232);
										{
											obj_t BgL_filesz00_656;

											obj_t BgL_suffixz00_655;

											BgL_suffixz00_655 = BgL_arg1672z00_250;
											BgL_filesz00_656 = BgL_arg1673z00_251;
											BgL_filesz00_232 = BgL_filesz00_656;
											BgL_suffixz00_231 = BgL_suffixz00_655;
											goto BgL_zc3anonymousza31656ze3z83_233;
										}
									}
								else
									{	/* Engine/link.scm 109 */
										obj_t BgL_fz00_252;

										BgL_fz00_252 =
											BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00
											(string_append_3(BgL_bnamez00_4,
												BGl_string1804z00zzengine_linkz00, BgL_sufz00_247));
										if (STRINGP(BgL_fz00_252))
											{	/* Engine/link.scm 111 */
												obj_t BgL_arg1675z00_254;

												obj_t BgL_arg1676z00_255;

												BgL_arg1675z00_254 = CDR(BgL_suffixz00_231);
												BgL_arg1676z00_255 =
													MAKE_PAIR(BgL_fz00_252, BgL_filesz00_232);
												{
													obj_t BgL_filesz00_664;

													obj_t BgL_suffixz00_663;

													BgL_suffixz00_663 = BgL_arg1675z00_254;
													BgL_filesz00_664 = BgL_arg1676z00_255;
													BgL_filesz00_232 = BgL_filesz00_664;
													BgL_suffixz00_231 = BgL_suffixz00_663;
													goto BgL_zc3anonymousza31656ze3z83_233;
												}
											}
										else
											{
												obj_t BgL_suffixz00_665;

												BgL_suffixz00_665 = CDR(BgL_suffixz00_231);
												BgL_suffixz00_231 = BgL_suffixz00_665;
												goto BgL_zc3anonymousza31656ze3z83_233;
											}
									}
							}
						}
					}
			}
		}
	}



/* _find-src-file */
	obj_t BGl__findzd2srczd2filez00zzengine_linkz00(obj_t BgL_envz00_521,
		obj_t BgL_prefixz00_522, obj_t BgL_bnamez00_523)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 92 */
			return
				BGl_findzd2srczd2filez00zzengine_linkz00(BgL_prefixz00_522,
				BgL_bnamez00_523);
		}
	}



/* find-libraries */
	BGL_EXPORTED_DEF obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t
		BgL_clausesz00_5)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 117 */
			return BGl_loopz00zzengine_linkz00(BgL_clausesz00_5, BNIL);
		}
	}



/* loop */
	obj_t BGl_loopz00zzengine_linkz00(obj_t BgL_clausesz00_262,
		obj_t BgL_librariesz00_263)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 118 */
		BGl_loopz00zzengine_linkz00:
			{
				obj_t BgL_evclausesz00_270;

				obj_t BgL_restz00_271;

				obj_t BgL_includesz00_273;

				obj_t BgL_restz00_274;

				obj_t BgL_restz00_276;

				if (NULLP(BgL_clausesz00_262))
					{	/* Engine/link.scm 118 */
						return bgl_reverse_bang(BgL_librariesz00_263);
					}
				else
					{	/* Engine/link.scm 118 */
						if (PAIRP(BgL_clausesz00_262))
							{	/* Engine/link.scm 118 */
								obj_t BgL_carzd21409zd2_282;

								BgL_carzd21409zd2_282 = CAR(BgL_clausesz00_262);
								if (PAIRP(BgL_carzd21409zd2_282))
									{	/* Engine/link.scm 118 */
										if (
											(CAR(BgL_carzd21409zd2_282) ==
												CNST_TABLE_REF(((long) 1))))
											{	/* Engine/link.scm 118 */
												obj_t BgL_arg1689z00_286;

												BgL_arg1689z00_286 = CDR(BgL_clausesz00_262);
												{	/* Engine/link.scm 118 */
													obj_t BgL_libz00_451;

													BgL_libz00_451 = BgL_carzd21409zd2_282;
													{	/* Engine/link.scm 118 */
														obj_t BgL_arg1753z00_454;

														BgL_arg1753z00_454 =
															MAKE_PAIR(BgL_libz00_451, BgL_librariesz00_263);
														{
															obj_t BgL_librariesz00_684;

															obj_t BgL_clausesz00_683;

															BgL_clausesz00_683 = BgL_arg1689z00_286;
															BgL_librariesz00_684 = BgL_arg1753z00_454;
															BgL_librariesz00_263 = BgL_librariesz00_684;
															BgL_clausesz00_262 = BgL_clausesz00_683;
															goto BGl_loopz00zzengine_linkz00;
														}
													}
												}
											}
										else
											{	/* Engine/link.scm 118 */
												if (
													(CAR(BgL_carzd21409zd2_282) ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Engine/link.scm 118 */
														BgL_evclausesz00_270 = CDR(BgL_carzd21409zd2_282);
														BgL_restz00_271 = CDR(BgL_clausesz00_262);
														{	/* Engine/link.scm 126 */
															obj_t BgL_evlibsz00_343;

															{	/* Engine/link.scm 126 */
																obj_t BgL_list1756z00_346;

																BgL_list1756z00_346 =
																	MAKE_PAIR(BgL_evclausesz00_270, BNIL);
																BgL_evlibsz00_343 =
																	BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																	(BGl_proc1806z00zzengine_linkz00,
																	BgL_list1756z00_346);
															}
															{
																obj_t BgL_librariesz00_692;

																obj_t BgL_clausesz00_691;

																BgL_clausesz00_691 = BgL_restz00_271;
																BgL_librariesz00_692 =
																	bgl_append2(BgL_evlibsz00_343,
																	BgL_librariesz00_263);
																BgL_librariesz00_263 = BgL_librariesz00_692;
																BgL_clausesz00_262 = BgL_clausesz00_691;
																goto BGl_loopz00zzengine_linkz00;
															}
														}
													}
												else
													{	/* Engine/link.scm 118 */
														obj_t BgL_carzd21436zd2_291;

														BgL_carzd21436zd2_291 = CAR(BgL_clausesz00_262);
														if (
															(CAR(BgL_carzd21436zd2_291) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Engine/link.scm 118 */
																BgL_includesz00_273 =
																	CDR(BgL_carzd21436zd2_291);
																BgL_restz00_274 = CDR(BgL_clausesz00_262);
																{	/* Engine/link.scm 133 */
																	obj_t BgL_directivesz00_362;

																	{	/* Engine/link.scm 133 */
																		obj_t BgL_list1776z00_365;

																		BgL_list1776z00_365 =
																			MAKE_PAIR(BgL_includesz00_273, BNIL);
																		BgL_directivesz00_362 =
																			BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
																			(BGl_proc1805z00zzengine_linkz00,
																			BgL_list1776z00_365);
																	}
																	{
																		obj_t BgL_clausesz00_703;

																		BgL_clausesz00_703 =
																			bgl_append2(BgL_directivesz00_362,
																			BgL_restz00_274);
																		BgL_clausesz00_262 = BgL_clausesz00_703;
																		goto BGl_loopz00zzengine_linkz00;
																	}
																}
															}
														else
															{	/* Engine/link.scm 118 */
																if (
																	(CAR(BgL_carzd21436zd2_291) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Engine/link.scm 118 */
																		BgL_restz00_276 = CDR(BgL_clausesz00_262);
																		{	/* Engine/link.scm 138 */
																			obj_t BgL_arg1778z00_369;

																			obj_t BgL_arg1779z00_370;

																			{	/* Engine/link.scm 138 */
																				obj_t BgL_arg1782z00_371;

																				BgL_arg1782z00_371 =
																					BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
																					(CAR(BgL_clausesz00_262));
																				{	/* Engine/link.scm 138 */
																					obj_t BgL_list1783z00_372;

																					BgL_list1783z00_372 =
																						MAKE_PAIR(BgL_arg1782z00_371, BNIL);
																					BgL_arg1778z00_369 =
																						BgL_list1783z00_372;
																			}}
																			BgL_arg1779z00_370 =
																				BGl_loopz00zzengine_linkz00
																				(BgL_restz00_276, BgL_librariesz00_263);
																			{
																				obj_t BgL_librariesz00_716;

																				obj_t BgL_clausesz00_715;

																				BgL_clausesz00_715 = BgL_arg1778z00_369;
																				BgL_librariesz00_716 =
																					BgL_arg1779z00_370;
																				BgL_librariesz00_263 =
																					BgL_librariesz00_716;
																				BgL_clausesz00_262 = BgL_clausesz00_715;
																				goto BGl_loopz00zzengine_linkz00;
																			}
																		}
																	}
																else
																	{	/* Engine/link.scm 118 */
																	BgL_tagzd21394zd2_278:
																		{
																			obj_t BgL_clausesz00_718;

																			BgL_clausesz00_718 =
																				CDR(BgL_clausesz00_262);
																			BgL_clausesz00_262 = BgL_clausesz00_718;
																			goto BGl_loopz00zzengine_linkz00;
																		}
																	}
															}
													}
											}
									}
								else
									{	/* Engine/link.scm 118 */
										goto BgL_tagzd21394zd2_278;
									}
							}
						else
							{	/* Engine/link.scm 118 */
								goto BgL_tagzd21394zd2_278;
							}
					}
			}
		}
	}



/* _find-libraries */
	obj_t BGl__findzd2librarieszd2zzengine_linkz00(obj_t BgL_envz00_526,
		obj_t BgL_clausesz00_527)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 117 */
			return BGl_findzd2librarieszd2zzengine_linkz00(BgL_clausesz00_527);
		}
	}



/* <anonymous:1777> */
	obj_t BGl_zc3anonymousza31777ze3z83zzengine_linkz00(obj_t BgL_envz00_528,
		obj_t BgL_includez00_529)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 133 */
			return BGl_readzd2directiveszd2zzread_includez00(BgL_includez00_529);
		}
	}



/* <anonymous:1757> */
	obj_t BGl_zc3anonymousza31757ze3z83zzengine_linkz00(obj_t BgL_envz00_530,
		obj_t BgL_clausesz00_531)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 126 */
			{
				obj_t BgL_clausesz00_347;

				BgL_clausesz00_347 = BgL_clausesz00_531;
				{
					obj_t BgL_libsz00_349;

					if (PAIRP(BgL_clausesz00_347))
						{	/* Engine/link.scm 126 */
							if ((CAR(BgL_clausesz00_347) == CNST_TABLE_REF(((long) 1))))
								{	/* Engine/link.scm 126 */
									BgL_libsz00_349 = CDR(BgL_clausesz00_347);
									{	/* Engine/link.scm 128 */
										obj_t BgL_arg1769z00_358;

										obj_t BgL_arg1770z00_359;

										BgL_arg1769z00_358 = CNST_TABLE_REF(((long) 2));
										{	/* Engine/link.scm 128 */
											obj_t BgL_list1771z00_360;

											BgL_list1771z00_360 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1770z00_359 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_clausesz00_347, BgL_list1771z00_360);
										}
										return MAKE_PAIR(BgL_arg1769z00_358, BgL_arg1770z00_359);
									}
								}
							else
								{	/* Engine/link.scm 126 */
									return BFALSE;
								}
						}
					else
						{	/* Engine/link.scm 126 */
							return BFALSE;
						}
				}
			}
		}
	}



/* make-tmp-main */
	BGL_EXPORTED_DEF obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t
		BgL_filez00_6, bool_t BgL_mainz00_7, obj_t BgL_modulez00_8,
		obj_t BgL_clausesz00_9, obj_t BgL_librariesz00_10)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 146 */
			{	/* Engine/link.scm 147 */
				obj_t BgL_poutz00_376;

				{	/* Engine/link.scm 147 */

					BgL_poutz00_376 =
						BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(BgL_filez00_6,
						BTRUE);
				}
				if (OUTPUT_PORTP(BgL_poutz00_376))
					{	/* Engine/link.scm 148 */
						{	/* Engine/link.scm 151 */
							obj_t BgL_port1617z00_378;

							BgL_port1617z00_378 = BgL_poutz00_376;
							bgl_display_string(BGl_string1807z00zzengine_linkz00,
								BgL_port1617z00_378);
							bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
								BgL_port1617z00_378);
							bgl_display_char(((unsigned char) '\n'), BgL_port1617z00_378);
						}
						{	/* Engine/link.scm 152 */
							obj_t BgL_port1618z00_379;

							BgL_port1618z00_379 = BgL_poutz00_376;
							bgl_display_string(BGl_string1808z00zzengine_linkz00,
								BgL_port1618z00_379);
							bgl_display_char(((unsigned char) '\n'), BgL_port1618z00_379);
						}
						{	/* Engine/link.scm 153 */
							obj_t BgL_port1619z00_380;

							BgL_port1619z00_380 = BgL_poutz00_376;
							bgl_display_string(BGl_string1809z00zzengine_linkz00,
								BgL_port1619z00_380);
							bgl_display_char(((unsigned char) '\n'), BgL_port1619z00_380);
						}
						bgl_display_char(((unsigned char) '\n'), BgL_poutz00_376);
						{	/* Engine/link.scm 155 */
							obj_t BgL_modz00_381;

							{	/* Engine/link.scm 155 */
								obj_t BgL_arg1787z00_383;

								obj_t BgL_arg1789z00_384;

								BgL_arg1787z00_383 = CNST_TABLE_REF(((long) 5));
								{	/* Engine/link.scm 156 */
									obj_t BgL_arg1790z00_385;

									obj_t BgL_arg1791z00_386;

									{	/* Engine/link.scm 156 */
										obj_t BgL_arg1794z00_389;

										obj_t BgL_arg1795z00_390;

										BgL_arg1794z00_389 = CNST_TABLE_REF(((long) 6));
										BgL_arg1795z00_390 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(bgl_reverse(BgL_clausesz00_9), BNIL);
										BgL_arg1790z00_385 =
											MAKE_PAIR(BgL_arg1794z00_389, BgL_arg1795z00_390);
									}
									BgL_arg1791z00_386 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_librariesz00_10, BNIL);
									{	/* Engine/link.scm 155 */
										obj_t BgL_list1792z00_387;

										{	/* Engine/link.scm 155 */
											obj_t BgL_arg1793z00_388;

											BgL_arg1793z00_388 = MAKE_PAIR(BgL_arg1791z00_386, BNIL);
											BgL_list1792z00_387 =
												MAKE_PAIR(BgL_arg1790z00_385, BgL_arg1793z00_388);
										}
										BgL_arg1789z00_384 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_modulez00_8, BgL_list1792z00_387);
								}}
								BgL_modz00_381 =
									MAKE_PAIR(BgL_arg1787z00_383, BgL_arg1789z00_384);
							}
							{	/* Engine/link.scm 158 */
								obj_t BgL_port1620z00_382;

								BgL_port1620z00_382 = BgL_poutz00_376;
								bgl_display_obj(BgL_modz00_381, BgL_port1620z00_382);
								bgl_display_char(((unsigned char) '\n'), BgL_port1620z00_382);
							}
							bgl_display_char(((unsigned char) '\n'), BgL_poutz00_376);
						}
						if (BgL_mainz00_7)
							{	/* Engine/link.scm 160 */
								{	/* Engine/link.scm 161 */
									obj_t BgL_port1621z00_393;

									BgL_port1621z00_393 = BgL_poutz00_376;
									bgl_display_string(BGl_string1810z00zzengine_linkz00,
										BgL_port1621z00_393);
									bgl_display_char(((unsigned char) '\n'), BgL_port1621z00_393);
								}
								bgl_display_char(((unsigned char) '\n'), BgL_poutz00_376);
							}
						else
							{	/* Engine/link.scm 160 */
								BFALSE;
							}
						return bgl_close_output_port(BgL_poutz00_376);
					}
				else
					{	/* Engine/link.scm 148 */
						return
							BGl_errorz00zz__errorz00(BGl_string1811z00zzengine_linkz00,
							BGl_string1812z00zzengine_linkz00, BgL_filez00_6);
					}
			}
		}
	}



/* _make-tmp-main */
	obj_t BGl__makezd2tmpzd2mainz00zzengine_linkz00(obj_t BgL_envz00_532,
		obj_t BgL_filez00_533, obj_t BgL_mainz00_534, obj_t BgL_modulez00_535,
		obj_t BgL_clausesz00_536, obj_t BgL_librariesz00_537)
	{
		AN_OBJECT;
		{	/* Engine/link.scm 146 */
			return
				BGl_makezd2tmpzd2mainz00zzengine_linkz00(BgL_filez00_533,
				CBOOL(BgL_mainz00_534), BgL_modulez00_535, BgL_clausesz00_536,
				BgL_librariesz00_537);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_linkz00()
	{
		AN_OBJECT;
		{	/* Engine/link.scm 20 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_linkz00()
	{
		AN_OBJECT;
		{	/* Engine/link.scm 20 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_linkz00()
	{
		AN_OBJECT;
		{	/* Engine/link.scm 20 */
			BGl_modulezd2initializa7ationz75zzcc_ldz00(((long) 663636),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 182269387),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 385369337),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzexpand_installz00(((long) 17495966),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
			return
				BGl_modulezd2initializa7ationz75zzread_includez00(((long) 273692333),
				BSTRING_TO_STRING(BGl_string1813z00zzengine_linkz00));
		}
	}

#ifdef __cplusplus
}
#endif
