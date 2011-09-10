/*===========================================================================*/
/*   (Jas/opcode.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/opcode.scm)*/
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
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_classez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_poolz00;
	}                *BgL_classez00_bglt;

	typedef struct BgL_fieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}               *BgL_fieldz00_bglt;

	typedef struct BgL_methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                *BgL_methodz00_bglt;

	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	extern BgL_fieldz00_bglt
		BGl_declaredzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_opcodez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzjas_opcodez00();
	static obj_t BGl_vzd2indexzd2zzjas_opcodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_resolvezd2opcodeszd2zzjas_opcodez00 = BUNSPEC;
	static obj_t BGl_initzd2copzd2valuez00zzjas_opcodez00();
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_opcodez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_opcodez00();
	static obj_t BGl_zc3anonymousza31920ze3z83zzjas_opcodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_opcodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern int
		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_opcodez00();
	static obj_t BGl_za2copzd2listza2zd2zzjas_opcodez00 = BUNSPEC;
	static bool_t BGl_slotzf3zf3zzjas_opcodez00(obj_t);
	extern BgL_typez00_bglt
		BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_resolvezd2argszd2zzjas_opcodez00(obj_t, obj_t, obj_t, obj_t);
	extern BgL_classez00_bglt
		BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_resolvezd2opcodezd2zzjas_opcodez00(obj_t, obj_t, obj_t);
	extern BgL_methodz00_bglt
		BGl_declaredzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_getzd2typezd2numz00zzjas_opcodez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_opcodez00();
	static obj_t BGl_methodzd2initzd2zzjas_opcodez00();
	BGL_IMPORT obj_t bgl_list_ref(obj_t, long);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string2522z00zzjas_opcodez00,
		BgL_bgl_string2522za700za7za7j2532za7, "Bad mnemonic", 12);
	      DEFINE_STRING(BGl_string2523z00zzjas_opcodez00,
		BgL_bgl_string2523za700za7za7j2533za7, "unknown code operation", 22);
	      DEFINE_STRING(BGl_string2524z00zzjas_opcodez00,
		BgL_bgl_string2524za700za7za7j2534za7, "Syntax error", 12);
	      DEFINE_STRING(BGl_string2525z00zzjas_opcodez00,
		BgL_bgl_string2525za700za7za7j2535za7, "Bad wide mnemonic", 17);
	      DEFINE_STRING(BGl_string2526z00zzjas_opcodez00,
		BgL_bgl_string2526za700za7za7j2536za7, "unknown variable", 16);
	      DEFINE_STRING(BGl_string2527z00zzjas_opcodez00,
		BgL_bgl_string2527za700za7za7j2537za7, "jas_opcode", 10);
	      DEFINE_STRING(BGl_string2528z00zzjas_opcodez00,
		BgL_bgl_string2528za700za7za7j2538za7,
		"((boolean . 4) (char . 5) (float . 6) (double . 7) (byte . 8) (short . 9) (int . 10) (long . 11)) as-cop-value (nop aconst_null iconst_m1 iconst_0 iconst_1 iconst_2 iconst_3 iconst_4 iconst_5 lconst_0 lconst_1 fconst_0 fconst_1 fconst_2 dconst_0 dconst_1 bipush sipush ldc ldc_w ldc2_w iload lload fload dload aload iload_0 iload_1 iload_2 iload_3 lload_0 lload_1 lload_2 lload_3 fload_0 fload_1 fload_2 fload_3 dload_0 dload_1 dload_2 dload_3 aload_0 aload_1 aload_2 aload_3 iaload laload faload daload aaload baload caload saload istore lstore fstore dstore astore istore_0 istore_1 istore_2 istore_3 lstore_0 lstore_1 lstore_2 lstore_3 fstore_0 fstore_1 fstore_2 fstore_3 dstore_0 dstore_1 dstore_2 dstore_3 astore_0 astore_1 astore_2 astore_3 iastore lastore fastore dastore aastore bastore castore sastore pop pop2 dup dup_x1 dup_x2 dup2 dup2_x1 dup2_x2 swap iadd ladd fadd dadd isub lsub fsub dsub imul lmul fmul dmul idiv ldiv fdiv ddiv irem lrem frem drem ineg lneg fneg dneg ishl lshl ishr lshr iushr lushr iand lan"
		"d ior lor ixor lxor iinc i2l i2f i2d l2i l2f l2d f2i f2l f2d d2i d2l d2f i2b i2c i2s lcmp fcmpl fcmpg dcmpl dcmpg ifeq ifne iflt ifge ifgt ifle if_icmpeq if_icmpne if_icmplt if_icmpge if_icmpgt if_icmple if_acmpeq if_acmpne goto jsr ret tableswitch lookupswitch ireturn lreturn freturn dreturn areturn return getstatic putstatic getfield putfield invokevirtual invokespecial invokestatic invokeinterface xxxunusedxxx new newarray anewarray arraylength athrow checkcast instanceof monitorenter monitorexit wide multianewarray ifnull ifnonnull goto_w jsr_w handler line comment localvar) ",
		1610);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2521z00zzjas_opcodez00,
		BgL_bgl_za7c3anonymousza7a312539z00,
		BGl_zc3anonymousza31920ze3z83zzjas_opcodez00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_opcodez00(long
		BgL_checksumz00_1192, char *BgL_fromz00_1193)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_opcodez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_opcodez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_opcodez00();
					BGl_cnstzd2initzd2zzjas_opcodez00();
					BGl_importedzd2moduleszd2initz00zzjas_opcodez00();
					BGl_toplevelzd2initzd2zzjas_opcodez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_opcodez00()
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_opcode");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_opcode");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_opcode");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_opcodez00()
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 1 */
			{	/* Jas/opcode.scm 1 */
				obj_t BgL_cportz00_1184;

				BgL_cportz00_1184 =
					bgl_open_input_string(BGl_string2528z00zzjas_opcodez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1185;

					BgL_iz00_1185 = ((long) 2);
				BgL_loopz00_1186:
					if ((BgL_iz00_1185 == ((long) -1)))
						{	/* Jas/opcode.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/opcode.scm 1 */
							{	/* Jas/opcode.scm 1 */
								obj_t BgL_arg2531z00_1188;

								{	/* Jas/opcode.scm 1 */

									{	/* Jas/opcode.scm 1 */
										obj_t BgL_locationz00_1190;

										BgL_locationz00_1190 = BBOOL(((bool_t) 0));
										{	/* Jas/opcode.scm 1 */

											BgL_arg2531z00_1188 =
												BGl_readz00zz__readerz00(BgL_cportz00_1184,
												BgL_locationz00_1190);
										}
									}
								}
								{	/* Jas/opcode.scm 1 */
									int BgL_auxz00_1210;

									BgL_auxz00_1210 = (int) (BgL_iz00_1185);
									CNST_TABLE_SET(BgL_auxz00_1210, BgL_arg2531z00_1188);
							}}
							{	/* Jas/opcode.scm 1 */
								int BgL_auxz00_1191;

								BgL_auxz00_1191 = (int) ((BgL_iz00_1185 - ((long) 1)));
								{
									long BgL_iz00_1215;

									BgL_iz00_1215 = (long) (BgL_auxz00_1191);
									BgL_iz00_1185 = BgL_iz00_1215;
									goto BgL_loopz00_1186;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_opcodez00()
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 1 */
			BGl_za2copzd2listza2zd2zzjas_opcodez00 = CNST_TABLE_REF(((long) 0));
			BGl_initzd2copzd2valuez00zzjas_opcodez00();
			return (BGl_resolvezd2opcodeszd2zzjas_opcodez00 =
				BGl_proc2521z00zzjas_opcodez00, BUNSPEC);
		}
	}



/* <anonymous:1920> */
	obj_t BGl_zc3anonymousza31920ze3z83zzjas_opcodez00(obj_t BgL_envz00_1177,
		obj_t BgL_classfilez00_1178, obj_t BgL_paramz00_1179,
		obj_t BgL_localsz00_1180, obj_t BgL_codez00_1181)
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 76 */
			{
				obj_t BgL_classfilez00_280;

				obj_t BgL_paramz00_281;

				obj_t BgL_localsz00_282;

				obj_t BgL_codez00_283;

				BgL_classfilez00_280 = BgL_classfilez00_1178;
				BgL_paramz00_281 = BgL_paramz00_1179;
				BgL_localsz00_282 = BgL_localsz00_1180;
				BgL_codez00_283 = BgL_codez00_1181;
				{	/* Jas/opcode.scm 77 */
					obj_t BgL_varsz00_285;

					BgL_varsz00_285 = bgl_append2(BgL_paramz00_281, BgL_localsz00_282);
					if (NULLP(BgL_codez00_283))
						{	/* Jas/opcode.scm 85 */
							return BNIL;
						}
					else
						{	/* Jas/opcode.scm 85 */
							obj_t BgL_head1915z00_289;

							BgL_head1915z00_289 =
								MAKE_PAIR(BGl_resolvezd2opcodezd2zzjas_opcodez00
								(BgL_varsz00_285, BgL_classfilez00_280, CAR(BgL_codez00_283)),
								BNIL);
							{	/* Jas/opcode.scm 85 */
								obj_t BgL_g1919z00_290;

								BgL_g1919z00_290 = CDR(BgL_codez00_283);
								{
									obj_t BgL_l1913z00_292;

									obj_t BgL_tail1916z00_293;

									BgL_l1913z00_292 = BgL_g1919z00_290;
									BgL_tail1916z00_293 = BgL_head1915z00_289;
								BgL_zc3anonymousza31922ze3z83_294:
									if (NULLP(BgL_l1913z00_292))
										{	/* Jas/opcode.scm 85 */
											return BgL_head1915z00_289;
										}
									else
										{	/* Jas/opcode.scm 85 */
											obj_t BgL_newtail1917z00_296;

											BgL_newtail1917z00_296 =
												MAKE_PAIR(BGl_resolvezd2opcodezd2zzjas_opcodez00
												(BgL_varsz00_285, BgL_classfilez00_280,
													CAR(BgL_l1913z00_292)), BNIL);
											SET_CDR(BgL_tail1916z00_293, BgL_newtail1917z00_296);
											{
												obj_t BgL_tail1916z00_1234;

												obj_t BgL_l1913z00_1232;

												BgL_l1913z00_1232 = CDR(BgL_l1913z00_292);
												BgL_tail1916z00_1234 = BgL_newtail1917z00_296;
												BgL_tail1916z00_293 = BgL_tail1916z00_1234;
												BgL_l1913z00_292 = BgL_l1913z00_1232;
												goto BgL_zc3anonymousza31922ze3z83_294;
											}
										}
								}
							}
						}
				}
			}
		}
	}



/* resolve-opcode */
	obj_t BGl_resolvezd2opcodezd2zzjas_opcodez00(obj_t BgL_varsz00_1183,
		obj_t BgL_classfilez00_1182, obj_t BgL_insz00_305)
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 84 */
			if (PAIRP(BgL_insz00_305))
				{	/* Jas/opcode.scm 81 */
					obj_t BgL_copz00_308;

					{	/* Jas/opcode.scm 81 */
						obj_t BgL_arg1940z00_312;

						BgL_arg1940z00_312 = CAR(BgL_insz00_305);
						if (SYMBOLP(BgL_arg1940z00_312))
							{	/* Jas/opcode.scm 81 */
								BgL_copz00_308 =
									BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg1940z00_312,
									CNST_TABLE_REF(((long) 1)));
							}
						else
							{	/* Jas/opcode.scm 81 */
								BgL_copz00_308 =
									BGl_jaszd2errorzd2zzjas_classfilez00(
									(BgL_classfilez00_bglt) (BgL_classfilez00_1182),
									BGl_string2522z00zzjas_opcodez00, BgL_arg1940z00_312);
							}
					}
					if (CBOOL(BgL_copz00_308))
						{	/* Jas/opcode.scm 82 */
							return
								BGl_resolvezd2argszd2zzjas_opcodez00(BgL_classfilez00_1182,
								BgL_varsz00_1183, BgL_copz00_308, CDR(BgL_insz00_305));
						}
					else
						{	/* Jas/opcode.scm 82 */
							return
								BGl_jaszd2errorzd2zzjas_classfilez00(
								(BgL_classfilez00_bglt) (BgL_classfilez00_1182),
								BGl_string2522z00zzjas_opcodez00, CAR(BgL_insz00_305));
						}
				}
			else
				{	/* Jas/opcode.scm 79 */
					return BgL_insz00_305;
				}
		}
	}



/* init-cop-value */
	obj_t BGl_initzd2copzd2valuez00zzjas_opcodez00()
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 55 */
			{
				obj_t BgL_lz00_315;

				long BgL_nz00_316;

				BgL_lz00_315 = BGl_za2copzd2listza2zd2zzjas_opcodez00;
				BgL_nz00_316 = ((long) 0);
			BgL_zc3anonymousza31941ze3z83_317:
				if (NULLP(BgL_lz00_315))
					{	/* Jas/opcode.scm 57 */
						return BgL_lz00_315;
					}
				else
					{	/* Jas/opcode.scm 57 */
						{	/* Jas/opcode.scm 58 */
							obj_t BgL_arg1943z00_319;

							obj_t BgL_arg1944z00_320;

							BgL_arg1943z00_319 = CAR(BgL_lz00_315);
							BgL_arg1944z00_320 = CNST_TABLE_REF(((long) 1));
							BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg1943z00_319,
								BgL_arg1944z00_320, BINT(BgL_nz00_316));
						}
						{
							long BgL_nz00_1259;

							obj_t BgL_lz00_1257;

							BgL_lz00_1257 = CDR(BgL_lz00_315);
							BgL_nz00_1259 = (BgL_nz00_316 + ((long) 1));
							BgL_nz00_316 = BgL_nz00_1259;
							BgL_lz00_315 = BgL_lz00_1257;
							goto BgL_zc3anonymousza31941ze3z83_317;
						}
					}
			}
		}
	}



/* resolve-args */
	obj_t BGl_resolvezd2argszd2zzjas_opcodez00(obj_t BgL_classfilez00_4,
		obj_t BgL_localsz00_5, obj_t BgL_copz00_6, obj_t BgL_argsz00_7)
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 87 */
		BGl_resolvezd2argszd2zzjas_opcodez00:
			{

				if (INTEGERP(BgL_copz00_6))
					{	/* Jas/opcode.scm 88 */
						switch ((long) CINT(BgL_copz00_6))
							{
							case ((long) 0):
							case ((long) 1):
							case ((long) 2):
							case ((long) 3):
							case ((long) 4):
							case ((long) 5):
							case ((long) 6):
							case ((long) 7):
							case ((long) 8):
							case ((long) 9):
							case ((long) 10):
							case ((long) 11):
							case ((long) 12):
							case ((long) 13):
							case ((long) 14):
							case ((long) 15):
							case ((long) 46):
							case ((long) 47):
							case ((long) 48):
							case ((long) 49):
							case ((long) 50):
							case ((long) 51):
							case ((long) 52):
							case ((long) 53):
							case ((long) 79):
							case ((long) 80):
							case ((long) 81):
							case ((long) 82):
							case ((long) 83):
							case ((long) 84):
							case ((long) 85):
							case ((long) 86):
							case ((long) 87):
							case ((long) 88):
							case ((long) 89):
							case ((long) 90):
							case ((long) 91):
							case ((long) 92):
							case ((long) 93):
							case ((long) 94):
							case ((long) 95):
							case ((long) 96):
							case ((long) 97):
							case ((long) 98):
							case ((long) 99):
							case ((long) 100):
							case ((long) 101):
							case ((long) 102):
							case ((long) 103):
							case ((long) 104):
							case ((long) 105):
							case ((long) 106):
							case ((long) 107):
							case ((long) 108):
							case ((long) 109):
							case ((long) 110):
							case ((long) 111):
							case ((long) 112):
							case ((long) 113):
							case ((long) 114):
							case ((long) 115):
							case ((long) 116):
							case ((long) 117):
							case ((long) 118):
							case ((long) 119):
							case ((long) 120):
							case ((long) 121):
							case ((long) 122):
							case ((long) 123):
							case ((long) 124):
							case ((long) 125):
							case ((long) 126):
							case ((long) 127):
							case ((long) 128):
							case ((long) 129):
							case ((long) 130):
							case ((long) 131):
							case ((long) 133):
							case ((long) 134):
							case ((long) 135):
							case ((long) 136):
							case ((long) 137):
							case ((long) 138):
							case ((long) 139):
							case ((long) 140):
							case ((long) 141):
							case ((long) 142):
							case ((long) 143):
							case ((long) 144):
							case ((long) 145):
							case ((long) 146):
							case ((long) 147):
							case ((long) 148):
							case ((long) 149):
							case ((long) 150):
							case ((long) 151):
							case ((long) 152):
							case ((long) 172):
							case ((long) 173):
							case ((long) 174):
							case ((long) 175):
							case ((long) 176):
							case ((long) 177):
							case ((long) 190):
							case ((long) 191):
							case ((long) 194):
							case ((long) 195):

								{

									if (NULLP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											return MAKE_PAIR(BgL_copz00_6, BNIL);
										}
									else
										{	/* Jas/opcode.scm 88 */
											{	/* Jas/opcode.scm 101 */
												obj_t BgL_arg2445z00_800;

												BgL_arg2445z00_800 =
													MAKE_PAIR(bgl_list_ref
													(BGl_za2copzd2listza2zd2zzjas_opcodez00,
														(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
												return
													BGl_jaszd2errorzd2zzjas_classfilez00(
													(BgL_classfilez00_bglt) (BgL_classfilez00_4),
													BGl_string2524z00zzjas_opcodez00, BgL_arg2445z00_800);
											}
										}
								}
								break;
							case ((long) 16):
							case ((long) 17):

								{

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											if (INTEGERP(CAR(BgL_argsz00_7)))
												{	/* Jas/opcode.scm 88 */
													if (NULLP(CDR(BgL_argsz00_7)))
														{	/* Jas/opcode.scm 88 */
															return MAKE_PAIR(BgL_copz00_6, BgL_argsz00_7);
														}
													else
														{	/* Jas/opcode.scm 88 */
														BgL_tagzd21394zd2_341:
															{	/* Jas/opcode.scm 106 */
																obj_t BgL_arg2445z00_821;

																BgL_arg2445z00_821 =
																	MAKE_PAIR(bgl_list_ref
																	(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																		(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BGl_string2524z00zzjas_opcodez00,
																	BgL_arg2445z00_821);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													bool_t BgL_testz00_1285;

													{	/* Jas/opcode.scm 88 */
														obj_t BgL_auxz00_1286;

														BgL_auxz00_1286 = CAR(BgL_argsz00_7);
														BgL_testz00_1285 = ELONGP(BgL_auxz00_1286);
													}
													if (BgL_testz00_1285)
														{	/* Jas/opcode.scm 88 */
															if (NULLP(CDR(BgL_argsz00_7)))
																{	/* Jas/opcode.scm 88 */
																	{	/* Jas/opcode.scm 105 */
																		long BgL_arg1968z00_352;

																		{	/* Jas/opcode.scm 105 */
																			obj_t BgL_arg1971z00_355;

																			BgL_arg1971z00_355 = CAR(BgL_argsz00_7);
																			{	/* Jas/opcode.scm 105 */
																				long BgL_res2505z00_814;

																				{	/* Jas/opcode.scm 105 */
																					long BgL_xz00_813;

																					BgL_xz00_813 =
																						BELONG_TO_LONG(BgL_arg1971z00_355);
																					{	/* Jas/opcode.scm 105 */
																						long BgL_auxz00_1294;

																						{	/* Jas/opcode.scm 105 */
																							long BgL_auxz00_1295;

																							BgL_auxz00_1295 =
																								ELONG_TO_LONG(BgL_xz00_813);
																							BgL_auxz00_1294 =
																								ELONG_TO_LONG(BgL_auxz00_1295);
																						}
																						BgL_res2505z00_814 =
																							ELONG_TO_LONG(BgL_auxz00_1294);
																				}}
																				BgL_arg1968z00_352 = BgL_res2505z00_814;
																		}}
																		{	/* Jas/opcode.scm 105 */
																			obj_t BgL_list1969z00_353;

																			{	/* Jas/opcode.scm 105 */
																				obj_t BgL_arg1970z00_354;

																				BgL_arg1970z00_354 =
																					MAKE_PAIR(BINT(BgL_arg1968z00_352),
																					BNIL);
																				BgL_list1969z00_353 =
																					MAKE_PAIR(BgL_copz00_6,
																					BgL_arg1970z00_354);
																			}
																			return BgL_list1969z00_353;
																		}
																	}
																}
															else
																{	/* Jas/opcode.scm 88 */
																	goto BgL_tagzd21394zd2_341;
																}
														}
													else
														{	/* Jas/opcode.scm 88 */
															goto BgL_tagzd21394zd2_341;
														}
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21394zd2_341;
										}
								}
								break;
							case ((long) 18):
							case ((long) 19):

								{

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21403zd2_360;

											BgL_carzd21403zd2_360 = CAR(BgL_argsz00_7);
											{

												if (INTEGERP(BgL_carzd21403zd2_360))
													{	/* Jas/opcode.scm 88 */
													BgL_kapzd21405zd2_361:
														if (NULLP(CDR(BgL_argsz00_7)))
															{	/* Jas/opcode.scm 88 */
																return
																	MAKE_PAIR(BINT(((long) 18)), BgL_argsz00_7);
															}
														else
															{	/* Jas/opcode.scm 88 */
															BgL_tagzd21401zd2_357:
																{	/* Jas/opcode.scm 110 */
																	obj_t BgL_arg2445z00_835;

																	BgL_arg2445z00_835 =
																		MAKE_PAIR(bgl_list_ref
																		(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																			(long) CINT(BgL_copz00_6)),
																		BgL_argsz00_7);
																	return
																		BGl_jaszd2errorzd2zzjas_classfilez00(
																		(BgL_classfilez00_bglt)
																		(BgL_classfilez00_4),
																		BGl_string2524z00zzjas_opcodez00,
																		BgL_arg2445z00_835);
																}
															}
													}
												else
													{	/* Jas/opcode.scm 88 */
														if (REALP(BgL_carzd21403zd2_360))
															{	/* Jas/opcode.scm 88 */
																goto BgL_kapzd21405zd2_361;
															}
														else
															{	/* Jas/opcode.scm 88 */
																if (STRINGP(BgL_carzd21403zd2_360))
																	{	/* Jas/opcode.scm 88 */
																		goto BgL_kapzd21405zd2_361;
																	}
																else
																	{	/* Jas/opcode.scm 88 */
																		goto BgL_tagzd21401zd2_357;
																	}
															}
													}
											}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21401zd2_357;
										}
								}
								break;
							case ((long) 20):

								{

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21410zd2_371;

											BgL_carzd21410zd2_371 = CAR(BgL_argsz00_7);
											{

												if (INTEGERP(BgL_carzd21410zd2_371))
													{	/* Jas/opcode.scm 88 */
													BgL_kapzd21412zd2_372:
														if (NULLP(CDR(BgL_argsz00_7)))
															{	/* Jas/opcode.scm 88 */
																return
																	MAKE_PAIR(BINT(((long) 20)), BgL_argsz00_7);
															}
														else
															{	/* Jas/opcode.scm 88 */
															BgL_tagzd21408zd2_368:
																{	/* Jas/opcode.scm 114 */
																	obj_t BgL_arg2445z00_850;

																	BgL_arg2445z00_850 =
																		MAKE_PAIR(bgl_list_ref
																		(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																			(long) CINT(BgL_copz00_6)),
																		BgL_argsz00_7);
																	return
																		BGl_jaszd2errorzd2zzjas_classfilez00(
																		(BgL_classfilez00_bglt)
																		(BgL_classfilez00_4),
																		BGl_string2524z00zzjas_opcodez00,
																		BgL_arg2445z00_850);
																}
															}
													}
												else
													{	/* Jas/opcode.scm 88 */
														if (REALP(BgL_carzd21410zd2_371))
															{	/* Jas/opcode.scm 88 */
																goto BgL_kapzd21412zd2_372;
															}
														else
															{	/* Jas/opcode.scm 88 */
																if (ELONGP(BgL_carzd21410zd2_371))
																	{	/* Jas/opcode.scm 88 */
																		goto BgL_kapzd21412zd2_372;
																	}
																else
																	{	/* Jas/opcode.scm 88 */
																		if (LLONGP(BgL_carzd21410zd2_371))
																			{	/* Jas/opcode.scm 88 */
																				goto BgL_kapzd21412zd2_372;
																			}
																		else
																			{	/* Jas/opcode.scm 88 */
																				goto BgL_tagzd21408zd2_368;
																			}
																	}
															}
													}
											}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21408zd2_368;
										}
								}
								break;
							case ((long) 21):
							case ((long) 22):
							case ((long) 23):
							case ((long) 24):
							case ((long) 25):
							case ((long) 54):
							case ((long) 55):
							case ((long) 56):
							case ((long) 57):
							case ((long) 58):
							case ((long) 169):

								{
									obj_t BgL_varz00_379;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21420zd2_384;

											BgL_carzd21420zd2_384 = CAR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21420zd2_384))
												{	/* Jas/opcode.scm 88 */
													if (NULLP(CDR(BgL_argsz00_7)))
														{	/* Jas/opcode.scm 88 */
															BgL_varz00_379 = BgL_carzd21420zd2_384;
															{	/* Jas/opcode.scm 117 */
																obj_t BgL_arg1996z00_388;

																BgL_arg1996z00_388 =
																	BGl_vzd2indexzd2zzjas_opcodez00
																	(BgL_classfilez00_4, BgL_varz00_379,
																	BgL_localsz00_5);
																{	/* Jas/opcode.scm 117 */
																	obj_t BgL_list1997z00_389;

																	{	/* Jas/opcode.scm 117 */
																		obj_t BgL_arg1998z00_390;

																		BgL_arg1998z00_390 =
																			MAKE_PAIR(BgL_arg1996z00_388, BNIL);
																		BgL_list1997z00_389 =
																			MAKE_PAIR(BgL_copz00_6,
																			BgL_arg1998z00_390);
																	}
																	return BgL_list1997z00_389;
																}
															}
														}
													else
														{	/* Jas/opcode.scm 88 */
														BgL_tagzd21416zd2_381:
															{	/* Jas/opcode.scm 118 */
																obj_t BgL_arg2445z00_864;

																BgL_arg2445z00_864 =
																	MAKE_PAIR(bgl_list_ref
																	(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																		(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BGl_string2524z00zzjas_opcodez00,
																	BgL_arg2445z00_864);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21416zd2_381;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21416zd2_381;
										}
								}
								break;
							case ((long) 26):
							case ((long) 27):
							case ((long) 28):
							case ((long) 29):
							case ((long) 30):
							case ((long) 31):
							case ((long) 32):
							case ((long) 33):
							case ((long) 34):
							case ((long) 35):
							case ((long) 36):
							case ((long) 37):
							case ((long) 38):
							case ((long) 39):
							case ((long) 40):
							case ((long) 41):
							case ((long) 42):
							case ((long) 43):
							case ((long) 44):
							case ((long) 45):

								{

									if (NULLP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											{	/* Jas/opcode.scm 121 */
												long BgL_dz00_395;

												BgL_dz00_395 =
													((long) CINT(BgL_copz00_6) - ((long) 26));
												{	/* Jas/opcode.scm 122 */
													long BgL_arg2000z00_396;

													long BgL_arg2001z00_397;

													BgL_arg2000z00_396 =
														(((long) 21) + (BgL_dz00_395 / ((long) 4)));
													BgL_arg2001z00_397 = (BgL_dz00_395 % ((long) 4));
													{	/* Jas/opcode.scm 122 */
														obj_t BgL_list2002z00_398;

														{	/* Jas/opcode.scm 122 */
															obj_t BgL_arg2003z00_399;

															BgL_arg2003z00_399 =
																MAKE_PAIR(BINT(BgL_arg2001z00_397), BNIL);
															BgL_list2002z00_398 =
																MAKE_PAIR(BINT(BgL_arg2000z00_396),
																BgL_arg2003z00_399);
														}
														return BgL_list2002z00_398;
													}
												}
											}
										}
									else
										{	/* Jas/opcode.scm 88 */
											{	/* Jas/opcode.scm 123 */
												obj_t BgL_arg2445z00_882;

												BgL_arg2445z00_882 =
													MAKE_PAIR(bgl_list_ref
													(BGl_za2copzd2listza2zd2zzjas_opcodez00,
														(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
												return
													BGl_jaszd2errorzd2zzjas_classfilez00(
													(BgL_classfilez00_bglt) (BgL_classfilez00_4),
													BGl_string2524z00zzjas_opcodez00, BgL_arg2445z00_882);
											}
										}
								}
								break;
							case ((long) 59):
							case ((long) 60):
							case ((long) 61):
							case ((long) 62):
							case ((long) 63):
							case ((long) 64):
							case ((long) 65):
							case ((long) 66):
							case ((long) 67):
							case ((long) 68):
							case ((long) 69):
							case ((long) 70):
							case ((long) 71):
							case ((long) 72):
							case ((long) 73):
							case ((long) 74):
							case ((long) 75):
							case ((long) 76):
							case ((long) 77):
							case ((long) 78):

								{

									if (NULLP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											{	/* Jas/opcode.scm 126 */
												long BgL_dz00_406;

												BgL_dz00_406 =
													((long) CINT(BgL_copz00_6) - ((long) 59));
												{	/* Jas/opcode.scm 127 */
													long BgL_arg2012z00_407;

													long BgL_arg2021z00_408;

													BgL_arg2012z00_407 =
														(((long) 54) + (BgL_dz00_406 / ((long) 4)));
													BgL_arg2021z00_408 = (BgL_dz00_406 % ((long) 4));
													{	/* Jas/opcode.scm 127 */
														obj_t BgL_list2022z00_409;

														{	/* Jas/opcode.scm 127 */
															obj_t BgL_arg2023z00_410;

															BgL_arg2023z00_410 =
																MAKE_PAIR(BINT(BgL_arg2021z00_408), BNIL);
															BgL_list2022z00_409 =
																MAKE_PAIR(BINT(BgL_arg2012z00_407),
																BgL_arg2023z00_410);
														}
														return BgL_list2022z00_409;
													}
												}
											}
										}
									else
										{	/* Jas/opcode.scm 88 */
											{	/* Jas/opcode.scm 128 */
												obj_t BgL_arg2445z00_900;

												BgL_arg2445z00_900 =
													MAKE_PAIR(bgl_list_ref
													(BGl_za2copzd2listza2zd2zzjas_opcodez00,
														(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
												return
													BGl_jaszd2errorzd2zzjas_classfilez00(
													(BgL_classfilez00_bglt) (BgL_classfilez00_4),
													BGl_string2524z00zzjas_opcodez00, BgL_arg2445z00_900);
											}
										}
								}
								break;
							case ((long) 132):

								{
									obj_t BgL_varz00_413;

									obj_t BgL_nz00_414;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21437zd2_419;

											obj_t BgL_cdrzd21438zd2_420;

											BgL_carzd21437zd2_419 = CAR(BgL_argsz00_7);
											BgL_cdrzd21438zd2_420 = CDR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21437zd2_419))
												{	/* Jas/opcode.scm 88 */
													if (PAIRP(BgL_cdrzd21438zd2_420))
														{	/* Jas/opcode.scm 88 */
															obj_t BgL_carzd21442zd2_423;

															BgL_carzd21442zd2_423 =
																CAR(BgL_cdrzd21438zd2_420);
															if (INTEGERP(BgL_carzd21442zd2_423))
																{	/* Jas/opcode.scm 88 */
																	if (NULLP(CDR(BgL_cdrzd21438zd2_420)))
																		{	/* Jas/opcode.scm 88 */
																			BgL_varz00_413 = BgL_carzd21437zd2_419;
																			BgL_nz00_414 = BgL_carzd21442zd2_423;
																			{	/* Jas/opcode.scm 132 */
																				obj_t BgL_arg2048z00_427;

																				BgL_arg2048z00_427 =
																					BGl_vzd2indexzd2zzjas_opcodez00
																					(BgL_classfilez00_4, BgL_varz00_413,
																					BgL_localsz00_5);
																				{	/* Jas/opcode.scm 132 */
																					obj_t BgL_list2049z00_428;

																					{	/* Jas/opcode.scm 132 */
																						obj_t BgL_arg2051z00_429;

																						{	/* Jas/opcode.scm 132 */
																							obj_t BgL_arg2052z00_430;

																							BgL_arg2052z00_430 =
																								MAKE_PAIR(BgL_nz00_414, BNIL);
																							BgL_arg2051z00_429 =
																								MAKE_PAIR(BgL_arg2048z00_427,
																								BgL_arg2052z00_430);
																						}
																						BgL_list2049z00_428 =
																							MAKE_PAIR(BgL_copz00_6,
																							BgL_arg2051z00_429);
																					}
																					return BgL_list2049z00_428;
																				}
																			}
																		}
																	else
																		{	/* Jas/opcode.scm 88 */
																		BgL_tagzd21431zd2_416:
																			{	/* Jas/opcode.scm 133 */
																				obj_t BgL_arg2445z00_918;

																				BgL_arg2445z00_918 =
																					MAKE_PAIR(bgl_list_ref
																					(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																						(long) CINT(BgL_copz00_6)),
																					BgL_argsz00_7);
																				return
																					BGl_jaszd2errorzd2zzjas_classfilez00(
																					(BgL_classfilez00_bglt)
																					(BgL_classfilez00_4),
																					BGl_string2524z00zzjas_opcodez00,
																					BgL_arg2445z00_918);
																			}
																		}
																}
															else
																{	/* Jas/opcode.scm 88 */
																	goto BgL_tagzd21431zd2_416;
																}
														}
													else
														{	/* Jas/opcode.scm 88 */
															goto BgL_tagzd21431zd2_416;
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21431zd2_416;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21431zd2_416;
										}
								}
								break;
							case ((long) 153):
							case ((long) 154):
							case ((long) 155):
							case ((long) 156):
							case ((long) 157):
							case ((long) 158):
							case ((long) 159):
							case ((long) 160):
							case ((long) 161):
							case ((long) 162):
							case ((long) 163):
							case ((long) 164):
							case ((long) 165):
							case ((long) 166):
							case ((long) 167):
							case ((long) 168):
							case ((long) 198):
							case ((long) 199):
							case ((long) 200):
							case ((long) 201):

								{
									obj_t BgL_labz00_431;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21451zd2_436;

											BgL_carzd21451zd2_436 = CAR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21451zd2_436))
												{	/* Jas/opcode.scm 88 */
													if (NULLP(CDR(BgL_argsz00_7)))
														{	/* Jas/opcode.scm 88 */
															BgL_labz00_431 = BgL_carzd21451zd2_436;
															{	/* Jas/opcode.scm 137 */
																obj_t BgL_list2071z00_440;

																{	/* Jas/opcode.scm 137 */
																	obj_t BgL_arg2118z00_441;

																	BgL_arg2118z00_441 =
																		MAKE_PAIR(BgL_labz00_431, BNIL);
																	BgL_list2071z00_440 =
																		MAKE_PAIR(BgL_copz00_6, BgL_arg2118z00_441);
																}
																return BgL_list2071z00_440;
															}
														}
													else
														{	/* Jas/opcode.scm 88 */
														BgL_tagzd21447zd2_433:
															{	/* Jas/opcode.scm 138 */
																obj_t BgL_arg2445z00_932;

																BgL_arg2445z00_932 =
																	MAKE_PAIR(bgl_list_ref
																	(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																		(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BGl_string2524z00zzjas_opcodez00,
																	BgL_arg2445z00_932);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21447zd2_433;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21447zd2_433;
										}
								}
								break;
							case ((long) 170):

								{

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21466zd2_449;

											obj_t BgL_cdrzd21467zd2_450;

											BgL_carzd21466zd2_449 = CAR(BgL_argsz00_7);
											BgL_cdrzd21467zd2_450 = CDR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21466zd2_449))
												{	/* Jas/opcode.scm 88 */
													if (PAIRP(BgL_cdrzd21467zd2_450))
														{	/* Jas/opcode.scm 88 */
															obj_t BgL_carzd21472zd2_454;

															obj_t BgL_cdrzd21473zd2_455;

															BgL_carzd21472zd2_454 =
																CAR(BgL_cdrzd21467zd2_450);
															BgL_cdrzd21473zd2_455 =
																CDR(BgL_cdrzd21467zd2_450);
															if (INTEGERP(BgL_carzd21472zd2_454))
																{
																	obj_t BgL_gzd21482zd2_468;

																	obj_t BgL_gzd21478zd2_461;

																	BgL_gzd21478zd2_461 = BgL_cdrzd21473zd2_455;
																	if (NULLP(BgL_gzd21478zd2_461))
																		{	/* Jas/opcode.scm 88 */
																			return
																				MAKE_PAIR(BgL_copz00_6, BgL_argsz00_7);
																		}
																	else
																		{	/* Jas/opcode.scm 88 */
																			if (PAIRP(BgL_gzd21478zd2_461))
																				{	/* Jas/opcode.scm 88 */
																					bool_t BgL_testz00_1445;

																					{	/* Jas/opcode.scm 88 */
																						obj_t BgL_auxz00_1446;

																						BgL_auxz00_1446 =
																							CAR(BgL_gzd21478zd2_461);
																						BgL_testz00_1445 =
																							SYMBOLP(BgL_auxz00_1446);
																					}
																					if (BgL_testz00_1445)
																						{	/* Jas/opcode.scm 88 */
																							BgL_gzd21482zd2_468 =
																								CDR(BgL_gzd21478zd2_461);
																						BgL_zc3anonymousza32140ze3z83_469:
																							if (NULLP(BgL_gzd21482zd2_468))
																								{	/* Jas/opcode.scm 88 */
																									return
																										MAKE_PAIR(BgL_copz00_6,
																										BgL_argsz00_7);
																								}
																							else
																								{	/* Jas/opcode.scm 88 */
																									if (PAIRP
																										(BgL_gzd21482zd2_468))
																										{	/* Jas/opcode.scm 88 */
																											bool_t BgL_testz00_1454;

																											{	/* Jas/opcode.scm 88 */
																												obj_t BgL_auxz00_1455;

																												BgL_auxz00_1455 =
																													CAR
																													(BgL_gzd21482zd2_468);
																												BgL_testz00_1454 =
																													SYMBOLP
																													(BgL_auxz00_1455);
																											}
																											if (BgL_testz00_1454)
																												{
																													obj_t
																														BgL_gzd21482zd2_1458;
																													BgL_gzd21482zd2_1458 =
																														CDR
																														(BgL_gzd21482zd2_468);
																													BgL_gzd21482zd2_468 =
																														BgL_gzd21482zd2_1458;
																													goto
																														BgL_zc3anonymousza32140ze3z83_469;
																												}
																											else
																												{	/* Jas/opcode.scm 88 */
																												BgL_tagzd21456zd2_446:
																													{	/* Jas/opcode.scm 144 */
																														obj_t
																															BgL_arg2445z00_963;
																														BgL_arg2445z00_963 =
																															MAKE_PAIR
																															(bgl_list_ref
																															(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																																(long)
																																CINT
																																(BgL_copz00_6)),
																															BgL_argsz00_7);
																														return
																															BGl_jaszd2errorzd2zzjas_classfilez00
																															(
																															(BgL_classfilez00_bglt)
																															(BgL_classfilez00_4),
																															BGl_string2524z00zzjas_opcodez00,
																															BgL_arg2445z00_963);
																													}
																												}
																										}
																									else
																										{	/* Jas/opcode.scm 88 */
																											goto
																												BgL_tagzd21456zd2_446;
																										}
																								}
																						}
																					else
																						{	/* Jas/opcode.scm 88 */
																							goto BgL_tagzd21456zd2_446;
																						}
																				}
																			else
																				{	/* Jas/opcode.scm 88 */
																					goto BgL_tagzd21456zd2_446;
																				}
																		}
																}
															else
																{	/* Jas/opcode.scm 88 */
																	goto BgL_tagzd21456zd2_446;
																}
														}
													else
														{	/* Jas/opcode.scm 88 */
															goto BgL_tagzd21456zd2_446;
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21456zd2_446;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21456zd2_446;
										}
								}
								break;
							case ((long) 171):

								{

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21495zd2_483;

											obj_t BgL_cdrzd21496zd2_484;

											BgL_carzd21495zd2_483 = CAR(BgL_argsz00_7);
											BgL_cdrzd21496zd2_484 = CDR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21495zd2_483))
												{
													obj_t BgL_gzd21505zd2_497;

													obj_t BgL_gzd21501zd2_490;

													BgL_gzd21501zd2_490 = BgL_cdrzd21496zd2_484;
													if (NULLP(BgL_gzd21501zd2_490))
														{	/* Jas/opcode.scm 88 */
															return MAKE_PAIR(BgL_copz00_6, BgL_argsz00_7);
														}
													else
														{	/* Jas/opcode.scm 88 */
															if (PAIRP(BgL_gzd21501zd2_490))
																{	/* Jas/opcode.scm 88 */
																	if (BGl_slotzf3zf3zzjas_opcodez00(CAR
																			(BgL_gzd21501zd2_490)))
																		{	/* Jas/opcode.scm 88 */
																			BgL_gzd21505zd2_497 =
																				CDR(BgL_gzd21501zd2_490);
																		BgL_zc3anonymousza32173ze3z83_498:
																			if (NULLP(BgL_gzd21505zd2_497))
																				{	/* Jas/opcode.scm 88 */
																					return
																						MAKE_PAIR(BgL_copz00_6,
																						BgL_argsz00_7);
																				}
																			else
																				{	/* Jas/opcode.scm 88 */
																					if (PAIRP(BgL_gzd21505zd2_497))
																						{	/* Jas/opcode.scm 88 */
																							if (BGl_slotzf3zf3zzjas_opcodez00
																								(CAR(BgL_gzd21505zd2_497)))
																								{
																									obj_t BgL_gzd21505zd2_1488;

																									BgL_gzd21505zd2_1488 =
																										CDR(BgL_gzd21505zd2_497);
																									BgL_gzd21505zd2_497 =
																										BgL_gzd21505zd2_1488;
																									goto
																										BgL_zc3anonymousza32173ze3z83_498;
																								}
																							else
																								{	/* Jas/opcode.scm 88 */
																								BgL_tagzd21487zd2_480:
																									{	/* Jas/opcode.scm 149 */
																										obj_t BgL_arg2445z00_986;

																										BgL_arg2445z00_986 =
																											MAKE_PAIR(bgl_list_ref
																											(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																												(long)
																												CINT(BgL_copz00_6)),
																											BgL_argsz00_7);
																										return
																											BGl_jaszd2errorzd2zzjas_classfilez00
																											((BgL_classfilez00_bglt)
																											(BgL_classfilez00_4),
																											BGl_string2524z00zzjas_opcodez00,
																											BgL_arg2445z00_986);
																									}
																								}
																						}
																					else
																						{	/* Jas/opcode.scm 88 */
																							goto BgL_tagzd21487zd2_480;
																						}
																				}
																		}
																	else
																		{	/* Jas/opcode.scm 88 */
																			goto BgL_tagzd21487zd2_480;
																		}
																}
															else
																{	/* Jas/opcode.scm 88 */
																	goto BgL_tagzd21487zd2_480;
																}
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21487zd2_480;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21487zd2_480;
										}
								}
								break;
							case ((long) 178):
							case ((long) 179):
							case ((long) 180):
							case ((long) 181):

								{
									obj_t BgL_varz00_506;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21514zd2_511;

											BgL_carzd21514zd2_511 = CAR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21514zd2_511))
												{	/* Jas/opcode.scm 88 */
													if (NULLP(CDR(BgL_argsz00_7)))
														{	/* Jas/opcode.scm 88 */
															BgL_varz00_506 = BgL_carzd21514zd2_511;
															{	/* Jas/opcode.scm 152 */
																BgL_fieldz00_bglt BgL_arg2198z00_515;

																BgL_arg2198z00_515 =
																	BGl_declaredzd2fieldzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BgL_varz00_506);
																{	/* Jas/opcode.scm 152 */
																	obj_t BgL_list2199z00_516;

																	{	/* Jas/opcode.scm 152 */
																		obj_t BgL_arg2200z00_517;

																		BgL_arg2200z00_517 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg2198z00_515), BNIL);
																		BgL_list2199z00_516 =
																			MAKE_PAIR(BgL_copz00_6,
																			BgL_arg2200z00_517);
																	}
																	return BgL_list2199z00_516;
																}
															}
														}
													else
														{	/* Jas/opcode.scm 88 */
														BgL_tagzd21510zd2_508:
															{	/* Jas/opcode.scm 153 */
																obj_t BgL_arg2445z00_1000;

																BgL_arg2445z00_1000 =
																	MAKE_PAIR(bgl_list_ref
																	(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																		(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BGl_string2524z00zzjas_opcodez00,
																	BgL_arg2445z00_1000);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21510zd2_508;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21510zd2_508;
										}
								}
								break;
							case ((long) 182):
							case ((long) 183):
							case ((long) 184):
							case ((long) 185):

								{
									obj_t BgL_varz00_518;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21523zd2_523;

											BgL_carzd21523zd2_523 = CAR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21523zd2_523))
												{	/* Jas/opcode.scm 88 */
													if (NULLP(CDR(BgL_argsz00_7)))
														{	/* Jas/opcode.scm 88 */
															BgL_varz00_518 = BgL_carzd21523zd2_523;
															{	/* Jas/opcode.scm 156 */
																BgL_methodz00_bglt BgL_arg2213z00_527;

																BgL_arg2213z00_527 =
																	BGl_declaredzd2methodzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BgL_varz00_518);
																{	/* Jas/opcode.scm 156 */
																	obj_t BgL_list2214z00_528;

																	{	/* Jas/opcode.scm 156 */
																		obj_t BgL_arg2216z00_529;

																		BgL_arg2216z00_529 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg2213z00_527), BNIL);
																		BgL_list2214z00_528 =
																			MAKE_PAIR(BgL_copz00_6,
																			BgL_arg2216z00_529);
																	}
																	return BgL_list2214z00_528;
																}
															}
														}
													else
														{	/* Jas/opcode.scm 88 */
														BgL_tagzd21519zd2_520:
															{	/* Jas/opcode.scm 157 */
																obj_t BgL_arg2445z00_1014;

																BgL_arg2445z00_1014 =
																	MAKE_PAIR(bgl_list_ref
																	(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																		(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BGl_string2524z00zzjas_opcodez00,
																	BgL_arg2445z00_1014);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21519zd2_520;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21519zd2_520;
										}
								}
								break;
							case ((long) 187):

								{
									obj_t BgL_varz00_530;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21532zd2_535;

											BgL_carzd21532zd2_535 = CAR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21532zd2_535))
												{	/* Jas/opcode.scm 88 */
													if (NULLP(CDR(BgL_argsz00_7)))
														{	/* Jas/opcode.scm 88 */
															BgL_varz00_530 = BgL_carzd21532zd2_535;
															{	/* Jas/opcode.scm 160 */
																BgL_classez00_bglt BgL_arg2226z00_539;

																BgL_arg2226z00_539 =
																	BGl_declaredzd2classzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BgL_varz00_530);
																{	/* Jas/opcode.scm 160 */
																	obj_t BgL_list2227z00_540;

																	{	/* Jas/opcode.scm 160 */
																		obj_t BgL_arg2233z00_541;

																		BgL_arg2233z00_541 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg2226z00_539), BNIL);
																		BgL_list2227z00_540 =
																			MAKE_PAIR(BgL_copz00_6,
																			BgL_arg2233z00_541);
																	}
																	return BgL_list2227z00_540;
																}
															}
														}
													else
														{	/* Jas/opcode.scm 88 */
														BgL_tagzd21528zd2_532:
															{	/* Jas/opcode.scm 161 */
																obj_t BgL_arg2445z00_1028;

																BgL_arg2445z00_1028 =
																	MAKE_PAIR(bgl_list_ref
																	(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																		(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BGl_string2524z00zzjas_opcodez00,
																	BgL_arg2445z00_1028);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21528zd2_532;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21528zd2_532;
										}
								}
								break;
							case ((long) 188):

								{
									obj_t BgL_typez00_542;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											if (NULLP(CDR(BgL_argsz00_7)))
												{	/* Jas/opcode.scm 88 */
													BgL_typez00_542 = CAR(BgL_argsz00_7);
													{	/* Jas/opcode.scm 164 */
														obj_t BgL_arg2240z00_550;

														BgL_arg2240z00_550 =
															BGl_getzd2typezd2numz00zzjas_opcodez00
															(BgL_classfilez00_4, BgL_typez00_542);
														{	/* Jas/opcode.scm 164 */
															obj_t BgL_list2241z00_551;

															{	/* Jas/opcode.scm 164 */
																obj_t BgL_arg2242z00_552;

																BgL_arg2242z00_552 =
																	MAKE_PAIR(BgL_arg2240z00_550, BNIL);
																BgL_list2241z00_551 =
																	MAKE_PAIR(BgL_copz00_6, BgL_arg2242z00_552);
															}
															return BgL_list2241z00_551;
														}
													}
												}
											else
												{	/* Jas/opcode.scm 88 */
												BgL_tagzd21537zd2_544:
													{	/* Jas/opcode.scm 165 */
														obj_t BgL_arg2445z00_1041;

														BgL_arg2445z00_1041 =
															MAKE_PAIR(bgl_list_ref
															(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
														return
															BGl_jaszd2errorzd2zzjas_classfilez00(
															(BgL_classfilez00_bglt) (BgL_classfilez00_4),
															BGl_string2524z00zzjas_opcodez00,
															BgL_arg2445z00_1041);
													}
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21537zd2_544;
										}
								}
								break;
							case ((long) 189):
							case ((long) 192):
							case ((long) 193):

								{
									obj_t BgL_typez00_553;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											if (NULLP(CDR(BgL_argsz00_7)))
												{	/* Jas/opcode.scm 88 */
													BgL_typez00_553 = CAR(BgL_argsz00_7);
													{	/* Jas/opcode.scm 168 */
														BgL_typez00_bglt BgL_arg2255z00_561;

														BgL_arg2255z00_561 =
															BGl_aszd2typezd2zzjas_classfilez00(
															(BgL_classfilez00_bglt) (BgL_classfilez00_4),
															BgL_typez00_553);
														{	/* Jas/opcode.scm 168 */
															obj_t BgL_list2256z00_562;

															{	/* Jas/opcode.scm 168 */
																obj_t BgL_arg2259z00_563;

																BgL_arg2259z00_563 =
																	MAKE_PAIR((obj_t) (BgL_arg2255z00_561), BNIL);
																BgL_list2256z00_562 =
																	MAKE_PAIR(BgL_copz00_6, BgL_arg2259z00_563);
															}
															return BgL_list2256z00_562;
														}
													}
												}
											else
												{	/* Jas/opcode.scm 88 */
												BgL_tagzd21545zd2_555:
													{	/* Jas/opcode.scm 169 */
														obj_t BgL_arg2445z00_1054;

														BgL_arg2445z00_1054 =
															MAKE_PAIR(bgl_list_ref
															(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
														return
															BGl_jaszd2errorzd2zzjas_classfilez00(
															(BgL_classfilez00_bglt) (BgL_classfilez00_4),
															BGl_string2524z00zzjas_opcodez00,
															BgL_arg2445z00_1054);
													}
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21545zd2_555;
										}
								}
								break;
							case ((long) 196):

								{
									obj_t BgL_wcopz00_564;

									obj_t BgL_wargsz00_565;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21559zd2_570;

											BgL_carzd21559zd2_570 = CAR(BgL_argsz00_7);
											if (PAIRP(BgL_carzd21559zd2_570))
												{	/* Jas/opcode.scm 88 */
													if (NULLP(CDR(BgL_argsz00_7)))
														{	/* Jas/opcode.scm 88 */
															BgL_wcopz00_564 = CAR(BgL_carzd21559zd2_570);
															BgL_wargsz00_565 = CDR(BgL_carzd21559zd2_570);
															{	/* Jas/opcode.scm 173 */
																obj_t BgL_ncopz00_576;

																if (SYMBOLP(BgL_wcopz00_564))
																	{	/* Jas/opcode.scm 173 */
																		BgL_ncopz00_576 =
																			BGl_getpropz00zz__r4_symbols_6_4z00
																			(BgL_wcopz00_564,
																			CNST_TABLE_REF(((long) 1)));
																	}
																else
																	{	/* Jas/opcode.scm 173 */
																		BgL_ncopz00_576 =
																			BGl_jaszd2errorzd2zzjas_classfilez00(
																			(BgL_classfilez00_bglt)
																			(BgL_classfilez00_4),
																			BGl_string2522z00zzjas_opcodez00,
																			BgL_wcopz00_564);
																	}
																if (CBOOL(BgL_ncopz00_576))
																	{
																		obj_t BgL_argsz00_1597;

																		obj_t BgL_copz00_1596;

																		BgL_copz00_1596 = BgL_ncopz00_576;
																		BgL_argsz00_1597 = BgL_wargsz00_565;
																		BgL_argsz00_7 = BgL_argsz00_1597;
																		BgL_copz00_6 = BgL_copz00_1596;
																		goto BGl_resolvezd2argszd2zzjas_opcodez00;
																	}
																else
																	{	/* Jas/opcode.scm 174 */
																		return
																			BGl_jaszd2errorzd2zzjas_classfilez00(
																			(BgL_classfilez00_bglt)
																			(BgL_classfilez00_4),
																			BGl_string2525z00zzjas_opcodez00,
																			BgL_wcopz00_564);
																	}
															}
														}
													else
														{	/* Jas/opcode.scm 88 */
														BgL_tagzd21553zd2_567:
															{	/* Jas/opcode.scm 177 */
																obj_t BgL_arg2445z00_1072;

																BgL_arg2445z00_1072 =
																	MAKE_PAIR(bgl_list_ref
																	(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																		(long) CINT(BgL_copz00_6)), BgL_argsz00_7);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00(
																	(BgL_classfilez00_bglt) (BgL_classfilez00_4),
																	BGl_string2524z00zzjas_opcodez00,
																	BgL_arg2445z00_1072);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21553zd2_567;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21553zd2_567;
										}
								}
								break;
							case ((long) 197):

								{
									obj_t BgL_typez00_577;

									obj_t BgL_nz00_578;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_cdrzd21575zd2_583;

											BgL_cdrzd21575zd2_583 = CDR(BgL_argsz00_7);
											if (PAIRP(BgL_cdrzd21575zd2_583))
												{	/* Jas/opcode.scm 88 */
													obj_t BgL_carzd21578zd2_585;

													BgL_carzd21578zd2_585 = CAR(BgL_cdrzd21575zd2_583);
													if (INTEGERP(BgL_carzd21578zd2_585))
														{	/* Jas/opcode.scm 88 */
															if (NULLP(CDR(BgL_cdrzd21575zd2_583)))
																{	/* Jas/opcode.scm 88 */
																	BgL_typez00_577 = CAR(BgL_argsz00_7);
																	BgL_nz00_578 = BgL_carzd21578zd2_585;
																	{	/* Jas/opcode.scm 180 */
																		BgL_typez00_bglt BgL_arg2286z00_590;

																		BgL_arg2286z00_590 =
																			BGl_aszd2typezd2zzjas_classfilez00(
																			(BgL_classfilez00_bglt)
																			(BgL_classfilez00_4), BgL_typez00_577);
																		{	/* Jas/opcode.scm 180 */
																			obj_t BgL_list2287z00_591;

																			{	/* Jas/opcode.scm 180 */
																				obj_t BgL_arg2290z00_592;

																				{	/* Jas/opcode.scm 180 */
																					obj_t BgL_arg2295z00_593;

																					BgL_arg2295z00_593 =
																						MAKE_PAIR(BgL_nz00_578, BNIL);
																					BgL_arg2290z00_592 =
																						MAKE_PAIR(
																						(obj_t) (BgL_arg2286z00_590),
																						BgL_arg2295z00_593);
																				}
																				BgL_list2287z00_591 =
																					MAKE_PAIR(BgL_copz00_6,
																					BgL_arg2290z00_592);
																			}
																			return BgL_list2287z00_591;
																		}
																	}
																}
															else
																{	/* Jas/opcode.scm 88 */
																BgL_tagzd21568zd2_580:
																	{	/* Jas/opcode.scm 181 */
																		obj_t BgL_arg2445z00_1089;

																		BgL_arg2445z00_1089 =
																			MAKE_PAIR(bgl_list_ref
																			(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																				(long) CINT(BgL_copz00_6)),
																			BgL_argsz00_7);
																		return
																			BGl_jaszd2errorzd2zzjas_classfilez00(
																			(BgL_classfilez00_bglt)
																			(BgL_classfilez00_4),
																			BGl_string2524z00zzjas_opcodez00,
																			BgL_arg2445z00_1089);
																	}
																}
														}
													else
														{	/* Jas/opcode.scm 88 */
															goto BgL_tagzd21568zd2_580;
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21568zd2_580;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21568zd2_580;
										}
								}
								break;
							case ((long) 202):

								{
									obj_t BgL_begz00_594;

									obj_t BgL_endz00_595;

									obj_t BgL_labz00_596;

									obj_t BgL_typez00_597;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_cdrzd21593zd2_601;

											BgL_cdrzd21593zd2_601 = CDR(BgL_argsz00_7);
											if (PAIRP(BgL_cdrzd21593zd2_601))
												{	/* Jas/opcode.scm 88 */
													obj_t BgL_cdrzd21599zd2_603;

													BgL_cdrzd21599zd2_603 = CDR(BgL_cdrzd21593zd2_601);
													if (PAIRP(BgL_cdrzd21599zd2_603))
														{	/* Jas/opcode.scm 88 */
															obj_t BgL_cdrzd21604zd2_605;

															BgL_cdrzd21604zd2_605 =
																CDR(BgL_cdrzd21599zd2_603);
															if (PAIRP(BgL_cdrzd21604zd2_605))
																{	/* Jas/opcode.scm 88 */
																	if (NULLP(CDR(BgL_cdrzd21604zd2_605)))
																		{	/* Jas/opcode.scm 88 */
																			BgL_begz00_594 = CAR(BgL_argsz00_7);
																			BgL_endz00_595 =
																				CAR(BgL_cdrzd21593zd2_601);
																			BgL_labz00_596 =
																				CAR(BgL_cdrzd21599zd2_603);
																			BgL_typez00_597 =
																				CAR(BgL_cdrzd21604zd2_605);
																			{	/* Jas/opcode.scm 186 */
																				long BgL_arg2338z00_613;

																				if (
																					(BgL_typez00_597 == BINT(((long) 0))))
																					{	/* Jas/opcode.scm 186 */
																						BgL_arg2338z00_613 = ((long) 0);
																					}
																				else
																					{	/* Jas/opcode.scm 186 */
																						BgL_arg2338z00_613 =
																							(long)
																							(BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00
																							((BgL_classfilez00_bglt)
																								(BgL_classfilez00_4),
																								BgL_typez00_597));
																					}
																				{	/* Jas/opcode.scm 185 */
																					obj_t BgL_list2339z00_614;

																					{	/* Jas/opcode.scm 185 */
																						obj_t BgL_arg2344z00_615;

																						{	/* Jas/opcode.scm 185 */
																							obj_t BgL_arg2351z00_616;

																							{	/* Jas/opcode.scm 185 */
																								obj_t BgL_arg2357z00_617;

																								{	/* Jas/opcode.scm 185 */
																									obj_t BgL_arg2364z00_618;

																									BgL_arg2364z00_618 =
																										MAKE_PAIR(BINT
																										(BgL_arg2338z00_613), BNIL);
																									BgL_arg2357z00_617 =
																										MAKE_PAIR(BgL_labz00_596,
																										BgL_arg2364z00_618);
																								}
																								BgL_arg2351z00_616 =
																									MAKE_PAIR(BgL_endz00_595,
																									BgL_arg2357z00_617);
																							}
																							BgL_arg2344z00_615 =
																								MAKE_PAIR(BgL_begz00_594,
																								BgL_arg2351z00_616);
																						}
																						BgL_list2339z00_614 =
																							MAKE_PAIR(BgL_copz00_6,
																							BgL_arg2344z00_615);
																					}
																					return BgL_list2339z00_614;
																				}
																			}
																		}
																	else
																		{	/* Jas/opcode.scm 88 */
																			return BFALSE;
																		}
																}
															else
																{	/* Jas/opcode.scm 88 */
																	return BFALSE;
																}
														}
													else
														{	/* Jas/opcode.scm 88 */
															return BFALSE;
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													return BFALSE;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											return BFALSE;
										}
								}
								break;
							case ((long) 203):

								{

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_cdrzd21614zd2_624;

											BgL_cdrzd21614zd2_624 = CDR(BgL_argsz00_7);
											if (INTEGERP(CAR(BgL_argsz00_7)))
												{	/* Jas/opcode.scm 88 */
													if (PAIRP(BgL_cdrzd21614zd2_624))
														{	/* Jas/opcode.scm 88 */
															if (INTEGERP(CAR(BgL_cdrzd21614zd2_624)))
																{	/* Jas/opcode.scm 88 */
																	if (NULLP(CDR(BgL_cdrzd21614zd2_624)))
																		{	/* Jas/opcode.scm 88 */
																			return
																				MAKE_PAIR(BgL_copz00_6, BgL_argsz00_7);
																		}
																	else
																		{	/* Jas/opcode.scm 88 */
																		BgL_tagzd21611zd2_621:
																			{	/* Jas/opcode.scm 190 */
																				obj_t BgL_arg2445z00_1120;

																				BgL_arg2445z00_1120 =
																					MAKE_PAIR(bgl_list_ref
																					(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																						(long) CINT(BgL_copz00_6)),
																					BgL_argsz00_7);
																				return
																					BGl_jaszd2errorzd2zzjas_classfilez00(
																					(BgL_classfilez00_bglt)
																					(BgL_classfilez00_4),
																					BGl_string2524z00zzjas_opcodez00,
																					BgL_arg2445z00_1120);
																			}
																		}
																}
															else
																{	/* Jas/opcode.scm 88 */
																	goto BgL_tagzd21611zd2_621;
																}
														}
													else
														{	/* Jas/opcode.scm 88 */
															goto BgL_tagzd21611zd2_621;
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21611zd2_621;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21611zd2_621;
										}
								}
								break;
							case ((long) 204):

								return MAKE_PAIR(BgL_copz00_6, BgL_argsz00_7);
								break;
							case ((long) 205):

								{
									obj_t BgL_begz00_632;

									obj_t BgL_endz00_633;

									obj_t BgL_namez00_634;

									obj_t BgL_typez00_635;

									obj_t BgL_varz00_636;

									if (PAIRP(BgL_argsz00_7))
										{	/* Jas/opcode.scm 88 */
											obj_t BgL_carzd21630zd2_641;

											obj_t BgL_cdrzd21631zd2_642;

											BgL_carzd21630zd2_641 = CAR(BgL_argsz00_7);
											BgL_cdrzd21631zd2_642 = CDR(BgL_argsz00_7);
											if (SYMBOLP(BgL_carzd21630zd2_641))
												{	/* Jas/opcode.scm 88 */
													if (PAIRP(BgL_cdrzd21631zd2_642))
														{	/* Jas/opcode.scm 88 */
															obj_t BgL_carzd21638zd2_645;

															obj_t BgL_cdrzd21639zd2_646;

															BgL_carzd21638zd2_645 =
																CAR(BgL_cdrzd21631zd2_642);
															BgL_cdrzd21639zd2_646 =
																CDR(BgL_cdrzd21631zd2_642);
															if (SYMBOLP(BgL_carzd21638zd2_645))
																{	/* Jas/opcode.scm 88 */
																	if (PAIRP(BgL_cdrzd21639zd2_646))
																		{	/* Jas/opcode.scm 88 */
																			obj_t BgL_carzd21645zd2_649;

																			obj_t BgL_cdrzd21646zd2_650;

																			BgL_carzd21645zd2_649 =
																				CAR(BgL_cdrzd21639zd2_646);
																			BgL_cdrzd21646zd2_650 =
																				CDR(BgL_cdrzd21639zd2_646);
																			if (STRINGP(BgL_carzd21645zd2_649))
																				{	/* Jas/opcode.scm 88 */
																					if (PAIRP(BgL_cdrzd21646zd2_650))
																						{	/* Jas/opcode.scm 88 */
																							obj_t BgL_cdrzd21652zd2_653;

																							BgL_cdrzd21652zd2_653 =
																								CDR(BgL_cdrzd21646zd2_650);
																							if (PAIRP(BgL_cdrzd21652zd2_653))
																								{	/* Jas/opcode.scm 88 */
																									obj_t BgL_carzd21655zd2_655;

																									BgL_carzd21655zd2_655 =
																										CAR(BgL_cdrzd21652zd2_653);
																									if (SYMBOLP
																										(BgL_carzd21655zd2_655))
																										{	/* Jas/opcode.scm 88 */
																											if (NULLP(CDR
																													(BgL_cdrzd21652zd2_653)))
																												{	/* Jas/opcode.scm 88 */
																													BgL_begz00_632 =
																														BgL_carzd21630zd2_641;
																													BgL_endz00_633 =
																														BgL_carzd21638zd2_645;
																													BgL_namez00_634 =
																														BgL_carzd21645zd2_649;
																													BgL_typez00_635 =
																														CAR
																														(BgL_cdrzd21646zd2_650);
																													BgL_varz00_636 =
																														BgL_carzd21655zd2_655;
																													{	/* Jas/opcode.scm 201 */
																														BgL_typez00_bglt
																															BgL_arg2416z00_660;
																														obj_t
																															BgL_arg2422z00_661;
																														BgL_arg2416z00_660 =
																															BGl_aszd2typezd2zzjas_classfilez00
																															(
																															(BgL_classfilez00_bglt)
																															(BgL_classfilez00_4),
																															BgL_typez00_635);
																														BgL_arg2422z00_661 =
																															BGl_vzd2indexzd2zzjas_opcodez00
																															(BgL_classfilez00_4,
																															BgL_varz00_636,
																															BgL_localsz00_5);
																														{	/* Jas/opcode.scm 200 */
																															obj_t
																																BgL_list2423z00_662;
																															{	/* Jas/opcode.scm 200 */
																																obj_t
																																	BgL_arg2429z00_663;
																																{	/* Jas/opcode.scm 200 */
																																	obj_t
																																		BgL_arg2430z00_664;
																																	{	/* Jas/opcode.scm 200 */
																																		obj_t
																																			BgL_arg2431z00_665;
																																		{	/* Jas/opcode.scm 200 */
																																			obj_t
																																				BgL_arg2437z00_666;
																																			{	/* Jas/opcode.scm 200 */
																																				obj_t
																																					BgL_arg2438z00_667;
																																				BgL_arg2438z00_667
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2422z00_661,
																																					BNIL);
																																				BgL_arg2437z00_666
																																					=
																																					MAKE_PAIR
																																					(
																																					(obj_t)
																																					(BgL_arg2416z00_660),
																																					BgL_arg2438z00_667);
																																			}
																																			BgL_arg2431z00_665
																																				=
																																				MAKE_PAIR
																																				(BgL_namez00_634,
																																				BgL_arg2437z00_666);
																																		}
																																		BgL_arg2430z00_664
																																			=
																																			MAKE_PAIR
																																			(BgL_endz00_633,
																																			BgL_arg2431z00_665);
																																	}
																																	BgL_arg2429z00_663
																																		=
																																		MAKE_PAIR
																																		(BgL_begz00_632,
																																		BgL_arg2430z00_664);
																																}
																																BgL_list2423z00_662
																																	=
																																	MAKE_PAIR
																																	(BgL_copz00_6,
																																	BgL_arg2429z00_663);
																															}
																															return
																																BgL_list2423z00_662;
																														}
																													}
																												}
																											else
																												{	/* Jas/opcode.scm 88 */
																												BgL_tagzd21618zd2_638:
																													{	/* Jas/opcode.scm 203 */
																														obj_t
																															BgL_arg2445z00_1149;
																														BgL_arg2445z00_1149
																															=
																															MAKE_PAIR
																															(bgl_list_ref
																															(BGl_za2copzd2listza2zd2zzjas_opcodez00,
																																(long)
																																CINT
																																(BgL_copz00_6)),
																															BgL_argsz00_7);
																														return
																															BGl_jaszd2errorzd2zzjas_classfilez00
																															(
																															(BgL_classfilez00_bglt)
																															(BgL_classfilez00_4),
																															BGl_string2524z00zzjas_opcodez00,
																															BgL_arg2445z00_1149);
																													}
																												}
																										}
																									else
																										{	/* Jas/opcode.scm 88 */
																											goto
																												BgL_tagzd21618zd2_638;
																										}
																								}
																							else
																								{	/* Jas/opcode.scm 88 */
																									goto BgL_tagzd21618zd2_638;
																								}
																						}
																					else
																						{	/* Jas/opcode.scm 88 */
																							goto BgL_tagzd21618zd2_638;
																						}
																				}
																			else
																				{	/* Jas/opcode.scm 88 */
																					goto BgL_tagzd21618zd2_638;
																				}
																		}
																	else
																		{	/* Jas/opcode.scm 88 */
																			goto BgL_tagzd21618zd2_638;
																		}
																}
															else
																{	/* Jas/opcode.scm 88 */
																	goto BgL_tagzd21618zd2_638;
																}
														}
													else
														{	/* Jas/opcode.scm 88 */
															goto BgL_tagzd21618zd2_638;
														}
												}
											else
												{	/* Jas/opcode.scm 88 */
													goto BgL_tagzd21618zd2_638;
												}
										}
									else
										{	/* Jas/opcode.scm 88 */
											goto BgL_tagzd21618zd2_638;
										}
								}
								break;
							default:
							BgL_case_else1907z00_332:
								return
									BGl_jaszd2errorzd2zzjas_classfilez00(
									(BgL_classfilez00_bglt) (BgL_classfilez00_4),
									BGl_string2523z00zzjas_opcodez00, BgL_copz00_6);
							}
					}
				else
					{	/* Jas/opcode.scm 88 */
						goto BgL_case_else1907z00_332;
					}
			}
		}
	}



/* slot? */
	bool_t BGl_slotzf3zf3zzjas_opcodez00(obj_t BgL_slotz00_11)
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 211 */
			if (PAIRP(BgL_slotz00_11))
				{	/* Jas/opcode.scm 212 */
					if (INTEGERP(CAR(BgL_slotz00_11)))
						{	/* Jas/opcode.scm 212 */
							obj_t BgL_auxz00_1735;

							BgL_auxz00_1735 = CDR(BgL_slotz00_11);
							return SYMBOLP(BgL_auxz00_1735);
						}
					else
						{	/* Jas/opcode.scm 212 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Jas/opcode.scm 212 */
					return ((bool_t) 0);
				}
		}
	}



/* get-type-num */
	obj_t BGl_getzd2typezd2numz00zzjas_opcodez00(obj_t BgL_classfilez00_12,
		obj_t BgL_typez00_13)
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 215 */
			{	/* Jas/opcode.scm 216 */
				obj_t BgL_slotz00_675;

				BgL_slotz00_675 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_13,
					CNST_TABLE_REF(((long) 2)));
				if (CBOOL(BgL_slotz00_675))
					{	/* Jas/opcode.scm 219 */
						return CDR(BgL_slotz00_675);
					}
				else
					{	/* Jas/opcode.scm 221 */
						obj_t BgL_arg2454z00_677;

						{	/* Jas/opcode.scm 221 */
							obj_t BgL_list2455z00_678;

							BgL_list2455z00_678 = MAKE_PAIR(BgL_typez00_13, BNIL);
							BgL_arg2454z00_677 = BgL_list2455z00_678;
						}
						{	/* Jas/opcode.scm 221 */
							obj_t BgL_arg2445z00_1168;

							BgL_arg2445z00_1168 =
								MAKE_PAIR(bgl_list_ref(BGl_za2copzd2listza2zd2zzjas_opcodez00,
									((long) 188)), BgL_arg2454z00_677);
							return
								BGl_jaszd2errorzd2zzjas_classfilez00((BgL_classfilez00_bglt)
								(BgL_classfilez00_12), BGl_string2524z00zzjas_opcodez00,
								BgL_arg2445z00_1168);
						}
					}
			}
		}
	}



/* v-index */
	obj_t BGl_vzd2indexzd2zzjas_opcodez00(obj_t BgL_classfilez00_14,
		obj_t BgL_varz00_15, obj_t BgL_localsz00_16)
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 224 */
			{
				obj_t BgL_lz00_680;

				long BgL_nz00_681;

				BgL_lz00_680 = BgL_localsz00_16;
				BgL_nz00_681 = ((long) 0);
			BgL_zc3anonymousza32456ze3z83_682:
				if (NULLP(BgL_lz00_680))
					{	/* Jas/opcode.scm 227 */
						return
							BGl_jaszd2errorzd2zzjas_classfilez00(
							(BgL_classfilez00_bglt) (BgL_classfilez00_14),
							BGl_string2526z00zzjas_opcodez00, BgL_varz00_15);
					}
				else
					{	/* Jas/opcode.scm 227 */
						if ((CAR(BgL_lz00_680) == BgL_varz00_15))
							{	/* Jas/opcode.scm 228 */
								return BINT(BgL_nz00_681);
							}
						else
							{
								long BgL_nz00_1758;

								obj_t BgL_lz00_1756;

								BgL_lz00_1756 = CDR(BgL_lz00_680);
								BgL_nz00_1758 = (BgL_nz00_681 + ((long) 1));
								BgL_nz00_681 = BgL_nz00_1758;
								BgL_lz00_680 = BgL_lz00_1756;
								goto BgL_zc3anonymousza32456ze3z83_682;
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_opcodez00()
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_opcodez00()
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_opcodez00()
	{
		AN_OBJECT;
		{	/* Jas/opcode.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 125143848),
				BSTRING_TO_STRING(BGl_string2527z00zzjas_opcodez00));
			return
				BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 324206891),
				BSTRING_TO_STRING(BGl_string2527z00zzjas_opcodez00));
		}
	}

#ifdef __cplusplus
}
#endif
