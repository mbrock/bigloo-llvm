/*===========================================================================*/
/*   (Cnst/initialize.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/initialize.scm)*/
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

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

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;


	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_IMPORT obj_t obj_to_string(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	static obj_t BGl_cnstzd2initzd2zzcnst_initializa7eza7();
	static obj_t
		BGl_internzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcnst_initializa7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcnst_initializa7eza7();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t
		BGl_cnstzd2setzd2ze3cnstzd2stringz31zzcnst_initializa7eza7(obj_t);
	static obj_t BGl__initializa7ezd2astz75zzcnst_initializa7eza7(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_getzd2cnstzd2setz00zzcnst_allocz00();
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t
		BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00
		(BgL_backendz00_bglt, int);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_libzd2initializa7ez12z67zzcnst_initializa7eza7();
	static obj_t
		BGl_readzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7();
	static obj_t BGl_methodzd2initzd2zzcnst_initializa7eza7();
	static obj_t BGl_internzd2initializa7ez12z67zzcnst_initializa7eza7();
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_initializa7eza7 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcnst_initializa7eza7();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_za2initzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_initializa7eza7();
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	static obj_t BGl_readzd2initializa7ez12z67zzcnst_initializa7eza7();
	static obj_t
		BGl_readzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2astz75zzcnst_initializa7eza7();
	extern obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
	extern obj_t BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
	static obj_t
		BGl_internzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_initializa7eza7();
	static obj_t __cnst[29];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2astzd2envza7zzcnst_initializa7eza7,
		BgL_bgl__initializa7a7eza7d23678z00,
		BGl__initializa7ezd2astz75zzcnst_initializa7eza7, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3670z00zzcnst_initializa7eza7,
		BgL_bgl_string3670za700za7za7c3679za7, "intialize-stop!", 15);
	      DEFINE_STRING(BGl_string3671z00zzcnst_initializa7eza7,
		BgL_bgl_string3671za700za7za7c3680za7, "Illegal init-mode", 17);
	      DEFINE_STRING(BGl_string3672z00zzcnst_initializa7eza7,
		BgL_bgl_string3672za700za7za7c3681za7, "cnst-set->cnst-string", 21);
	      DEFINE_STRING(BGl_string3673z00zzcnst_initializa7eza7,
		BgL_bgl_string3673za700za7za7c3682za7, "Can't open output string port", 29);
	      DEFINE_STRING(BGl_string3674z00zzcnst_initializa7eza7,
		BgL_bgl_string3674za700za7za7c3683za7, "cnst_initialize", 15);
	      DEFINE_STRING(BGl_string3675z00zzcnst_initializa7eza7,
		BgL_bgl_string3675za700za7za7c3684za7,
		"cnst-tmp $vector-ref-ur i::int string->obj __intext cnst-tmp::vector aux c--fx aux::int cport __reader @ cnst-table-set! begin i c-=fx if i::long loop labels $open-input-string cport::input-port let unit staged cnst intern read lib ",
		232);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcnst_initializa7eza7(long
		BgL_checksumz00_1676, char *BgL_fromz00_1677)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_initializa7eza7))
				{
					BGl_requirezd2initializa7ationz75zzcnst_initializa7eza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcnst_initializa7eza7();
					BGl_cnstzd2initzd2zzcnst_initializa7eza7();
					BGl_importedzd2moduleszd2initz00zzcnst_initializa7eza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cnst_initialize");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 15 */
			{	/* Cnst/initialize.scm 15 */
				obj_t BgL_cportz00_1668;

				BgL_cportz00_1668 =
					bgl_open_input_string(BGl_string3675z00zzcnst_initializa7eza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_1669;

					BgL_iz00_1669 = ((long) 28);
				BgL_loopz00_1670:
					if ((BgL_iz00_1669 == ((long) -1)))
						{	/* Cnst/initialize.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/initialize.scm 15 */
							{	/* Cnst/initialize.scm 15 */
								obj_t BgL_arg3677z00_1672;

								{	/* Cnst/initialize.scm 15 */

									{	/* Cnst/initialize.scm 15 */
										obj_t BgL_locationz00_1674;

										BgL_locationz00_1674 = BBOOL(((bool_t) 0));
										{	/* Cnst/initialize.scm 15 */

											BgL_arg3677z00_1672 =
												BGl_readz00zz__readerz00(BgL_cportz00_1668,
												BgL_locationz00_1674);
										}
									}
								}
								{	/* Cnst/initialize.scm 15 */
									int BgL_auxz00_1696;

									BgL_auxz00_1696 = (int) (BgL_iz00_1669);
									CNST_TABLE_SET(BgL_auxz00_1696, BgL_arg3677z00_1672);
							}}
							{	/* Cnst/initialize.scm 15 */
								int BgL_auxz00_1675;

								BgL_auxz00_1675 = (int) ((BgL_iz00_1669 - ((long) 1)));
								{
									long BgL_iz00_1701;

									BgL_iz00_1701 = (long) (BgL_auxz00_1675);
									BgL_iz00_1669 = BgL_iz00_1701;
									goto BgL_loopz00_1670;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 15 */
			return BUNSPEC;
		}
	}



/* initialize-ast */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2astz75zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 41 */
			{	/* Cnst/initialize.scm 42 */
				obj_t BgL_bodyz00_891;

				{	/* Cnst/initialize.scm 42 */
					obj_t BgL_casezd2valuezd2_910;

					BgL_casezd2valuezd2_910 = BGl_za2initzd2modeza2zd2zzengine_paramz00;
					if ((BgL_casezd2valuezd2_910 == CNST_TABLE_REF(((long) 0))))
						{	/* Cnst/initialize.scm 42 */
							BgL_bodyz00_891 =
								BGl_libzd2initializa7ez12z67zzcnst_initializa7eza7();
						}
					else
						{	/* Cnst/initialize.scm 42 */
							if ((BgL_casezd2valuezd2_910 == CNST_TABLE_REF(((long) 1))))
								{	/* Cnst/initialize.scm 42 */
									BgL_bodyz00_891 =
										BGl_readzd2initializa7ez12z67zzcnst_initializa7eza7();
								}
							else
								{	/* Cnst/initialize.scm 42 */
									if ((BgL_casezd2valuezd2_910 == CNST_TABLE_REF(((long) 2))))
										{	/* Cnst/initialize.scm 42 */
											BgL_bodyz00_891 =
												BGl_internzd2initializa7ez12z67zzcnst_initializa7eza7();
										}
									else
										{	/* Cnst/initialize.scm 42 */
											BgL_bodyz00_891 =
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string3670z00zzcnst_initializa7eza7,
												BGl_string3671z00zzcnst_initializa7eza7,
												BGl_za2initzd2modeza2zd2zzengine_paramz00);
										}
								}
						}
				}
				if (PAIRP(BgL_bodyz00_891))
					{	/* Cnst/initialize.scm 54 */
						obj_t BgL_unitz00_893;

						{	/* Cnst/initialize.scm 54 */
							obj_t BgL_arg3365z00_907;

							bool_t BgL_arg3367z00_909;

							BgL_arg3365z00_907 = CNST_TABLE_REF(((long) 3));
							BgL_arg3367z00_909 =
								(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 4)));
							{	/* Cnst/initialize.scm 54 */
								obj_t BgL_sexpza2za2_1600;

								BgL_sexpza2za2_1600 = BgL_bodyz00_891;
								{	/* Cnst/initialize.scm 54 */
									obj_t BgL_newz00_1603;

									BgL_newz00_1603 =
										create_struct(CNST_TABLE_REF(((long) 5)),
										(int) (((long) 5)));
									{	/* Cnst/initialize.scm 54 */
										obj_t BgL_auxz00_1726;

										int BgL_auxz00_1724;

										BgL_auxz00_1726 = BBOOL(BgL_arg3367z00_909);
										BgL_auxz00_1724 = (int) (((long) 4));
										STRUCT_SET(BgL_newz00_1603, BgL_auxz00_1724,
											BgL_auxz00_1726);
									}
									{	/* Cnst/initialize.scm 54 */
										int BgL_auxz00_1729;

										BgL_auxz00_1729 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_1603, BgL_auxz00_1729, BTRUE);
									}
									{	/* Cnst/initialize.scm 54 */
										int BgL_auxz00_1732;

										BgL_auxz00_1732 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_1603, BgL_auxz00_1732,
											BgL_sexpza2za2_1600);
									}
									{	/* Cnst/initialize.scm 54 */
										obj_t BgL_auxz00_1737;

										int BgL_auxz00_1735;

										BgL_auxz00_1737 = BINT(((long) 8));
										BgL_auxz00_1735 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_1603, BgL_auxz00_1735,
											BgL_auxz00_1737);
									}
									{	/* Cnst/initialize.scm 54 */
										int BgL_auxz00_1740;

										BgL_auxz00_1740 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_1603, BgL_auxz00_1740,
											BgL_arg3365z00_907);
									}
									BgL_unitz00_893 = BgL_newz00_1603;
						}}}
						{	/* Cnst/initialize.scm 55 */
							obj_t BgL_astz00_894;

							{	/* Cnst/initialize.scm 55 */
								obj_t BgL_arg3363z00_905;

								{	/* Cnst/initialize.scm 55 */
									obj_t BgL_list3364z00_906;

									BgL_list3364z00_906 = MAKE_PAIR(BgL_unitz00_893, BNIL);
									BgL_arg3363z00_905 = BgL_list3364z00_906;
								}
								BgL_astz00_894 =
									BGl_buildzd2astzd2zzast_buildz00(BgL_arg3363z00_905);
							}
							{
								obj_t BgL_l3343z00_896;

								BgL_l3343z00_896 = BgL_astz00_894;
							BgL_zc3anonymousza33357ze3z83_897:
								if (PAIRP(BgL_l3343z00_896))
									{	/* Cnst/initialize.scm 56 */
										{	/* Cnst/initialize.scm 57 */
											obj_t BgL_globalz00_899;

											BgL_globalz00_899 = CAR(BgL_l3343z00_896);
											{	/* Cnst/initialize.scm 57 */
												obj_t BgL_arg3359z00_900;

												BgL_typez00_bglt BgL_arg3360z00_901;

												{	/* Cnst/initialize.scm 57 */
													BgL_sfunz00_bglt BgL_obj1973z00_1634;

													{	/* Cnst/initialize.scm 57 */
														BgL_variablez00_bglt BgL_obj1699z00_1633;

														BgL_obj1699z00_1633 =
															(BgL_variablez00_bglt) (BgL_globalz00_899);
														BgL_obj1973z00_1634 =
															(BgL_sfunz00_bglt) (
															(((BgL_variablez00_bglt)
																	CREF(BgL_obj1699z00_1633))->BgL_valuez00));
													}
													BgL_arg3359z00_900 =
														(((BgL_sfunz00_bglt) CREF(BgL_obj1973z00_1634))->
														BgL_bodyz00);
												}
												{
													BgL_variablez00_bglt BgL_auxz00_1752;

													BgL_auxz00_1752 =
														(BgL_variablez00_bglt) (BgL_globalz00_899);
													BgL_arg3360z00_901 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1752))->
														BgL_typez00);
												}
												BGl_coercez12z12zzcoerce_coercez00(
													(BgL_nodez00_bglt) (BgL_arg3359z00_900),
													BgL_globalz00_899, BgL_arg3360z00_901, ((bool_t) 0));
											}
										}
										{
											obj_t BgL_l3343z00_1757;

											BgL_l3343z00_1757 = CDR(BgL_l3343z00_896);
											BgL_l3343z00_896 = BgL_l3343z00_1757;
											goto BgL_zc3anonymousza33357ze3z83_897;
										}
									}
								else
									{	/* Cnst/initialize.scm 56 */
										((bool_t) 1);
									}
							}
							return BgL_astz00_894;
						}
					}
				else
					{	/* Cnst/initialize.scm 53 */
						return BNIL;
					}
			}
		}
	}



/* _initialize-ast */
	obj_t BGl__initializa7ezd2astz75zzcnst_initializa7eza7(obj_t BgL_envz00_1666)
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 41 */
			return BGl_initializa7ezd2astz75zzcnst_initializa7eza7();
		}
	}



/* lib-initialize! */
	obj_t BGl_libzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 68 */
			{	/* Cnst/initialize.scm 69 */
				obj_t BgL_arg3371z00_914;

				obj_t BgL_arg3372z00_915;

				BgL_arg3371z00_914 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				{	/* Cnst/initialize.scm 70 */
					obj_t BgL_arg3373z00_916;

					BgL_arg3373z00_916 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_arg3372z00_915 =
						BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
						(BgL_backendz00_bglt) (BgL_arg3373z00_916), (int) (((long) 0)));
				}
				{
					BgL_variablez00_bglt BgL_auxz00_1765;

					BgL_auxz00_1765 = (BgL_variablez00_bglt) (BgL_arg3371z00_914);
					((((BgL_variablez00_bglt) CREF(BgL_auxz00_1765))->BgL_namez00) =
						((obj_t) BgL_arg3372z00_915), BUNSPEC);
			}}
			return BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
		}
	}



/* read-initialize! */
	obj_t BGl_readzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 76 */
			{	/* Cnst/initialize.scm 77 */
				bool_t BgL_testz00_1769;

				{	/* Cnst/initialize.scm 77 */
					obj_t BgL_arg3376z00_919;

					BgL_arg3376z00_919 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
					BgL_testz00_1769 = ((long) CINT(BgL_arg3376z00_919) == ((long) 0));
				}
				if (BgL_testz00_1769)
					{	/* Cnst/initialize.scm 77 */
						return
							BGl_readzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7
							();
					}
				else
					{	/* Cnst/initialize.scm 77 */
						return
							BGl_readzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7
							();
					}
			}
		}
	}



/* read-empty-cnst-initialize! */
	obj_t BGl_readzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 84 */
			{	/* Cnst/initialize.scm 85 */
				obj_t BgL_arg3378z00_921;

				obj_t BgL_arg3379z00_922;

				BgL_arg3378z00_921 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				{	/* Cnst/initialize.scm 86 */
					obj_t BgL_arg3380z00_923;

					BgL_arg3380z00_923 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_arg3379z00_922 =
						BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
						(BgL_backendz00_bglt) (BgL_arg3380z00_923), (int) (((long) 0)));
				}
				{
					BgL_variablez00_bglt BgL_auxz00_1780;

					BgL_auxz00_1780 = (BgL_variablez00_bglt) (BgL_arg3378z00_921);
					((((BgL_variablez00_bglt) CREF(BgL_auxz00_1780))->BgL_namez00) =
						((obj_t) BgL_arg3379z00_922), BUNSPEC);
			}}
			return BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
		}
	}



/* read-full-cnst-initialize! */
	obj_t BGl_readzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 92 */
			{
				obj_t BgL_cnstzd2stringzd2_932;

				{	/* Cnst/initialize.scm 93 */
					obj_t BgL_arg3382z00_926;

					obj_t BgL_arg3383z00_927;

					BgL_arg3382z00_926 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
					{	/* Cnst/initialize.scm 94 */
						obj_t BgL_arg3384z00_928;

						obj_t BgL_arg3385z00_929;

						BgL_arg3384z00_928 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_arg3385z00_929 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
						BgL_arg3383z00_927 =
							BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
							(BgL_backendz00_bglt) (BgL_arg3384z00_928),
							CINT(BgL_arg3385z00_929));
					}
					{
						BgL_variablez00_bglt BgL_auxz00_1790;

						BgL_auxz00_1790 = (BgL_variablez00_bglt) (BgL_arg3382z00_926);
						((((BgL_variablez00_bglt) CREF(BgL_auxz00_1790))->BgL_namez00) =
							((obj_t) BgL_arg3383z00_927), BUNSPEC);
					}
				}
				BgL_cnstzd2stringzd2_932 =
					BGl_cnstzd2setzd2ze3cnstzd2stringz31zzcnst_initializa7eza7
					(BGl_getzd2cnstzd2setz00zzcnst_allocz00());
				{	/* Cnst/initialize.scm 96 */
					BgL_nodez00_bglt BgL_varzd2stringzd2_934;

					BgL_varzd2stringzd2_934 =
						BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
						(BgL_cnstzd2stringzd2_932, BFALSE);
					{	/* Cnst/initialize.scm 96 */
						obj_t BgL_sexpz00_935;

						{	/* Cnst/initialize.scm 97 */
							obj_t BgL_arg3389z00_937;

							obj_t BgL_arg3390z00_938;

							BgL_arg3389z00_937 = CNST_TABLE_REF(((long) 6));
							{	/* Cnst/initialize.scm 97 */
								obj_t BgL_arg3391z00_939;

								obj_t BgL_arg3392z00_940;

								{	/* Cnst/initialize.scm 97 */
									obj_t BgL_arg3396z00_944;

									{	/* Cnst/initialize.scm 97 */
										obj_t BgL_arg3398z00_946;

										obj_t BgL_arg3399z00_947;

										BgL_arg3398z00_946 = CNST_TABLE_REF(((long) 7));
										{	/* Cnst/initialize.scm 98 */
											obj_t BgL_arg3400z00_948;

											{	/* Cnst/initialize.scm 98 */
												obj_t BgL_arg3403z00_951;

												obj_t BgL_arg3404z00_952;

												BgL_arg3403z00_951 = CNST_TABLE_REF(((long) 8));
												{	/* Cnst/initialize.scm 99 */
													obj_t BgL_arg3405z00_953;

													{	/* Cnst/initialize.scm 98 */
														BgL_variablez00_bglt BgL_obj1691z00_1646;

														{
															BgL_varz00_bglt BgL_auxz00_1797;

															BgL_auxz00_1797 =
																(BgL_varz00_bglt) (BgL_varzd2stringzd2_934);
															BgL_obj1691z00_1646 =
																(((BgL_varz00_bglt) CREF(BgL_auxz00_1797))->
																BgL_variablez00);
														}
														BgL_arg3405z00_953 =
															(((BgL_variablez00_bglt)
																CREF(BgL_obj1691z00_1646))->BgL_idz00);
													}
													{	/* Cnst/initialize.scm 98 */
														obj_t BgL_list3408z00_956;

														{	/* Cnst/initialize.scm 98 */
															obj_t BgL_arg3409z00_957;

															BgL_arg3409z00_957 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3408z00_956 =
																MAKE_PAIR(BINT(((long) 0)), BgL_arg3409z00_957);
														}
														BgL_arg3404z00_952 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3405z00_953, BgL_list3408z00_956);
												}}
												BgL_arg3400z00_948 =
													MAKE_PAIR(BgL_arg3403z00_951, BgL_arg3404z00_952);
											}
											{	/* Cnst/initialize.scm 97 */
												obj_t BgL_list3402z00_950;

												BgL_list3402z00_950 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3399z00_947 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3400z00_948, BgL_list3402z00_950);
										}}
										BgL_arg3396z00_944 =
											MAKE_PAIR(BgL_arg3398z00_946, BgL_arg3399z00_947);
									}
									BgL_arg3391z00_939 = MAKE_PAIR(BgL_arg3396z00_944, BNIL);
								}
								{	/* Cnst/initialize.scm 102 */
									obj_t BgL_arg3411z00_959;

									obj_t BgL_arg3412z00_960;

									BgL_arg3411z00_959 = CNST_TABLE_REF(((long) 9));
									{	/* Cnst/initialize.scm 102 */
										obj_t BgL_arg3413z00_961;

										obj_t BgL_arg3414z00_962;

										{	/* Cnst/initialize.scm 102 */
											obj_t BgL_arg3418z00_966;

											{	/* Cnst/initialize.scm 102 */
												obj_t BgL_arg3420z00_968;

												obj_t BgL_arg3421z00_969;

												BgL_arg3420z00_968 = CNST_TABLE_REF(((long) 10));
												{	/* Cnst/initialize.scm 102 */
													obj_t BgL_arg3422z00_970;

													obj_t BgL_arg3424z00_971;

													BgL_arg3422z00_970 =
														MAKE_PAIR(CNST_TABLE_REF(((long) 11)), BNIL);
													{	/* Cnst/initialize.scm 103 */
														obj_t BgL_arg3430z00_975;

														obj_t BgL_arg3431z00_976;

														BgL_arg3430z00_975 = CNST_TABLE_REF(((long) 12));
														{	/* Cnst/initialize.scm 103 */
															obj_t BgL_arg3432z00_977;

															obj_t BgL_arg3433z00_978;

															{	/* Cnst/initialize.scm 103 */
																obj_t BgL_arg3438z00_983;

																obj_t BgL_arg3439z00_984;

																BgL_arg3438z00_983 =
																	CNST_TABLE_REF(((long) 13));
																{	/* Cnst/initialize.scm 103 */
																	obj_t BgL_list3440z00_985;

																	{	/* Cnst/initialize.scm 103 */
																		obj_t BgL_arg3443z00_987;

																		BgL_arg3443z00_987 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3440z00_985 =
																			MAKE_PAIR(BINT(((long) -1)),
																			BgL_arg3443z00_987);
																	}
																	BgL_arg3439z00_984 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(CNST_TABLE_REF(((long) 14)),
																		BgL_list3440z00_985);
																}
																BgL_arg3432z00_977 =
																	MAKE_PAIR(BgL_arg3438z00_983,
																	BgL_arg3439z00_984);
															}
															{	/* Cnst/initialize.scm 105 */
																obj_t BgL_arg3444z00_988;

																obj_t BgL_arg3445z00_989;

																BgL_arg3444z00_988 =
																	CNST_TABLE_REF(((long) 15));
																{	/* Cnst/initialize.scm 106 */
																	obj_t BgL_arg3446z00_990;

																	obj_t BgL_arg3447z00_991;

																	{	/* Cnst/initialize.scm 106 */
																		obj_t BgL_arg3451z00_995;

																		obj_t BgL_arg3452z00_996;

																		BgL_arg3451z00_995 =
																			CNST_TABLE_REF(((long) 16));
																		{	/* Cnst/initialize.scm 106 */
																			obj_t BgL_arg3453z00_997;

																			obj_t BgL_arg3454z00_998;

																			BgL_arg3453z00_997 =
																				CNST_TABLE_REF(((long) 14));
																			{	/* Cnst/initialize.scm 108 */
																				obj_t BgL_arg3458z00_1002;

																				obj_t BgL_arg3459z00_1003;

																				{	/* Cnst/initialize.scm 108 */
																					obj_t BgL_arg3460z00_1004;

																					obj_t BgL_arg3461z00_1005;

																					BgL_arg3460z00_1004 =
																						CNST_TABLE_REF(((long) 17));
																					{	/* Cnst/initialize.scm 108 */
																						obj_t BgL_list3462z00_1006;

																						{	/* Cnst/initialize.scm 108 */
																							obj_t BgL_arg3463z00_1007;

																							obj_t BgL_arg3464z00_1008;

																							BgL_arg3463z00_1007 =
																								CNST_TABLE_REF(((long) 18));
																							BgL_arg3464z00_1008 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3462z00_1006 =
																								MAKE_PAIR(BgL_arg3463z00_1007,
																								BgL_arg3464z00_1008);
																						}
																						BgL_arg3461z00_1005 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 1)),
																							BgL_list3462z00_1006);
																					}
																					BgL_arg3458z00_1002 =
																						MAKE_PAIR(BgL_arg3460z00_1004,
																						BgL_arg3461z00_1005);
																				}
																				{	/* Cnst/initialize.scm 108 */
																					obj_t BgL_list3465z00_1009;

																					BgL_list3465z00_1009 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3459z00_1003 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(CNST_TABLE_REF(((long) 19)),
																						BgL_list3465z00_1009);
																				}
																				BgL_arg3454z00_998 =
																					MAKE_PAIR(BgL_arg3458z00_1002,
																					BgL_arg3459z00_1003);
																			}
																			{	/* Cnst/initialize.scm 106 */
																				obj_t BgL_list3456z00_1000;

																				{	/* Cnst/initialize.scm 106 */
																					obj_t BgL_arg3457z00_1001;

																					BgL_arg3457z00_1001 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3456z00_1000 =
																						MAKE_PAIR(BgL_arg3454z00_998,
																						BgL_arg3457z00_1001);
																				}
																				BgL_arg3452z00_996 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3453z00_997,
																					BgL_list3456z00_1000);
																		}}
																		BgL_arg3446z00_990 =
																			MAKE_PAIR(BgL_arg3451z00_995,
																			BgL_arg3452z00_996);
																	}
																	{	/* Cnst/initialize.scm 109 */
																		obj_t BgL_arg3466z00_1010;

																		obj_t BgL_arg3467z00_1011;

																		BgL_arg3466z00_1010 =
																			CNST_TABLE_REF(((long) 6));
																		{	/* Cnst/initialize.scm 109 */
																			obj_t BgL_arg3468z00_1012;

																			obj_t BgL_arg3469z00_1013;

																			{	/* Cnst/initialize.scm 109 */
																				obj_t BgL_arg3473z00_1017;

																				{	/* Cnst/initialize.scm 109 */
																					obj_t BgL_arg3475z00_1019;

																					obj_t BgL_arg3476z00_1020;

																					BgL_arg3475z00_1019 =
																						CNST_TABLE_REF(((long) 20));
																					{	/* Cnst/initialize.scm 109 */
																						obj_t BgL_arg3477z00_1021;

																						{	/* Cnst/initialize.scm 109 */
																							obj_t BgL_arg3480z00_1024;

																							obj_t BgL_arg3482z00_1025;

																							BgL_arg3480z00_1024 =
																								CNST_TABLE_REF(((long) 21));
																							{	/* Cnst/initialize.scm 109 */
																								obj_t BgL_list3483z00_1026;

																								{	/* Cnst/initialize.scm 109 */
																									obj_t BgL_arg3485z00_1028;

																									BgL_arg3485z00_1028 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3483z00_1026 =
																										MAKE_PAIR(BINT(((long) 1)),
																										BgL_arg3485z00_1028);
																								}
																								BgL_arg3482z00_1025 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 14)),
																									BgL_list3483z00_1026);
																							}
																							BgL_arg3477z00_1021 =
																								MAKE_PAIR(BgL_arg3480z00_1024,
																								BgL_arg3482z00_1025);
																						}
																						{	/* Cnst/initialize.scm 109 */
																							obj_t BgL_list3479z00_1023;

																							BgL_list3479z00_1023 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3476z00_1020 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3477z00_1021,
																								BgL_list3479z00_1023);
																					}}
																					BgL_arg3473z00_1017 =
																						MAKE_PAIR(BgL_arg3475z00_1019,
																						BgL_arg3476z00_1020);
																				}
																				BgL_arg3468z00_1012 =
																					MAKE_PAIR(BgL_arg3473z00_1017, BNIL);
																			}
																			{	/* Cnst/initialize.scm 110 */
																				obj_t BgL_arg3486z00_1029;

																				obj_t BgL_arg3487z00_1030;

																				BgL_arg3486z00_1029 =
																					CNST_TABLE_REF(((long) 10));
																				{	/* Cnst/initialize.scm 110 */
																					obj_t BgL_list3488z00_1031;

																					BgL_list3488z00_1031 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3487z00_1030 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(CNST_TABLE_REF(((long) 22)),
																						BgL_list3488z00_1031);
																				}
																				BgL_arg3469z00_1013 =
																					MAKE_PAIR(BgL_arg3486z00_1029,
																					BgL_arg3487z00_1030);
																			}
																			{	/* Cnst/initialize.scm 109 */
																				obj_t BgL_list3471z00_1015;

																				{	/* Cnst/initialize.scm 109 */
																					obj_t BgL_arg3472z00_1016;

																					BgL_arg3472z00_1016 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3471z00_1015 =
																						MAKE_PAIR(BgL_arg3469z00_1013,
																						BgL_arg3472z00_1016);
																				}
																				BgL_arg3467z00_1011 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3468z00_1012,
																					BgL_list3471z00_1015);
																		}}
																		BgL_arg3447z00_991 =
																			MAKE_PAIR(BgL_arg3466z00_1010,
																			BgL_arg3467z00_1011);
																	}
																	{	/* Cnst/initialize.scm 105 */
																		obj_t BgL_list3449z00_993;

																		{	/* Cnst/initialize.scm 105 */
																			obj_t BgL_arg3450z00_994;

																			BgL_arg3450z00_994 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3449z00_993 =
																				MAKE_PAIR(BgL_arg3447z00_991,
																				BgL_arg3450z00_994);
																		}
																		BgL_arg3445z00_989 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3446z00_990, BgL_list3449z00_993);
																}}
																BgL_arg3433z00_978 =
																	MAKE_PAIR(BgL_arg3444z00_988,
																	BgL_arg3445z00_989);
															}
															{	/* Cnst/initialize.scm 103 */
																obj_t BgL_list3435z00_980;

																{	/* Cnst/initialize.scm 103 */
																	obj_t BgL_arg3436z00_981;

																	{	/* Cnst/initialize.scm 103 */
																		obj_t BgL_arg3437z00_982;

																		BgL_arg3437z00_982 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3436z00_981 =
																			MAKE_PAIR(BgL_arg3433z00_978,
																			BgL_arg3437z00_982);
																	}
																	BgL_list3435z00_980 =
																		MAKE_PAIR(BUNSPEC, BgL_arg3436z00_981);
																}
																BgL_arg3431z00_976 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3432z00_977, BgL_list3435z00_980);
														}}
														BgL_arg3424z00_971 =
															MAKE_PAIR(BgL_arg3430z00_975, BgL_arg3431z00_976);
													}
													{	/* Cnst/initialize.scm 102 */
														obj_t BgL_list3426z00_973;

														{	/* Cnst/initialize.scm 102 */
															obj_t BgL_arg3427z00_974;

															BgL_arg3427z00_974 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3426z00_973 =
																MAKE_PAIR(BgL_arg3424z00_971,
																BgL_arg3427z00_974);
														}
														BgL_arg3421z00_969 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3422z00_970, BgL_list3426z00_973);
												}}
												BgL_arg3418z00_966 =
													MAKE_PAIR(BgL_arg3420z00_968, BgL_arg3421z00_969);
											}
											BgL_arg3413z00_961 = MAKE_PAIR(BgL_arg3418z00_966, BNIL);
										}
										{	/* Cnst/initialize.scm 111 */
											obj_t BgL_arg3489z00_1032;

											obj_t BgL_arg3490z00_1033;

											BgL_arg3489z00_1032 = CNST_TABLE_REF(((long) 10));
											{	/* Cnst/initialize.scm 111 */
												long BgL_arg3491z00_1034;

												{	/* Cnst/initialize.scm 111 */
													obj_t BgL_arg3494z00_1037;

													BgL_arg3494z00_1037 =
														BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
													BgL_arg3491z00_1034 =
														((long) CINT(BgL_arg3494z00_1037) - ((long) 1));
												}
												{	/* Cnst/initialize.scm 111 */
													obj_t BgL_list3493z00_1036;

													BgL_list3493z00_1036 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3490z00_1033 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
														(BgL_arg3491z00_1034), BgL_list3493z00_1036);
											}}
											BgL_arg3414z00_962 =
												MAKE_PAIR(BgL_arg3489z00_1032, BgL_arg3490z00_1033);
										}
										{	/* Cnst/initialize.scm 102 */
											obj_t BgL_list3416z00_964;

											{	/* Cnst/initialize.scm 102 */
												obj_t BgL_arg3417z00_965;

												BgL_arg3417z00_965 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3416z00_964 =
													MAKE_PAIR(BgL_arg3414z00_962, BgL_arg3417z00_965);
											}
											BgL_arg3412z00_960 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3413z00_961, BgL_list3416z00_964);
									}}
									BgL_arg3392z00_940 =
										MAKE_PAIR(BgL_arg3411z00_959, BgL_arg3412z00_960);
								}
								{	/* Cnst/initialize.scm 97 */
									obj_t BgL_list3394z00_942;

									{	/* Cnst/initialize.scm 97 */
										obj_t BgL_arg3395z00_943;

										BgL_arg3395z00_943 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3394z00_942 =
											MAKE_PAIR(BgL_arg3392z00_940, BgL_arg3395z00_943);
									}
									BgL_arg3390z00_938 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3391z00_939, BgL_list3394z00_942);
							}}
							BgL_sexpz00_935 =
								MAKE_PAIR(BgL_arg3389z00_937, BgL_arg3390z00_938);
						}
						{	/* Cnst/initialize.scm 97 */

							return
								MAKE_PAIR(BgL_sexpz00_935,
								BGl_getzd2cnstzd2sexpz00zzcnst_allocz00());
						}
					}
				}
			}
		}
	}



/* cnst-set->cnst-string */
	obj_t BGl_cnstzd2setzd2ze3cnstzd2stringz31zzcnst_initializa7eza7(obj_t
		BgL_setz00_23)
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 122 */
			{	/* Cnst/initialize.scm 123 */
				obj_t BgL_portz00_1040;

				{	/* Cnst/initialize.scm 123 */

					{	/* Cnst/initialize.scm 123 */

						BgL_portz00_1040 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}
				}
				if (OUTPUT_PORTP(BgL_portz00_1040))
					{	/* Cnst/initialize.scm 124 */
						{
							obj_t BgL_l3345z00_1043;

							BgL_l3345z00_1043 = BgL_setz00_23;
						BgL_zc3anonymousza33497ze3z83_1044:
							if (PAIRP(BgL_l3345z00_1043))
								{	/* Cnst/initialize.scm 129 */
									{	/* Cnst/initialize.scm 131 */
										obj_t BgL_cnstz00_1046;

										BgL_cnstz00_1046 = CAR(BgL_l3345z00_1043);
										{	/* Cnst/initialize.scm 130 */
											obj_t BgL_list3499z00_1047;

											BgL_list3499z00_1047 = MAKE_PAIR(BgL_portz00_1040, BNIL);
											BGl_writez00zz__r4_output_6_10_3z00(BgL_cnstz00_1046,
												BgL_list3499z00_1047);
										}
										bgl_display_char(((unsigned char) ' '), BgL_portz00_1040);
									}
									{
										obj_t BgL_l3345z00_1905;

										BgL_l3345z00_1905 = CDR(BgL_l3345z00_1043);
										BgL_l3345z00_1043 = BgL_l3345z00_1905;
										goto BgL_zc3anonymousza33497ze3z83_1044;
									}
								}
							else
								{	/* Cnst/initialize.scm 129 */
									((bool_t) 1);
								}
						}
						return bgl_close_output_port(BgL_portz00_1040);
					}
				else
					{	/* Cnst/initialize.scm 124 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string3672z00zzcnst_initializa7eza7,
							BGl_string3673z00zzcnst_initializa7eza7, BgL_portz00_1040);
					}
			}
		}
	}



/* intern-initialize! */
	obj_t BGl_internzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 138 */
			{	/* Cnst/initialize.scm 139 */
				bool_t BgL_testz00_1909;

				{	/* Cnst/initialize.scm 139 */
					obj_t BgL_arg3502z00_1052;

					BgL_arg3502z00_1052 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
					BgL_testz00_1909 = ((long) CINT(BgL_arg3502z00_1052) == ((long) 0));
				}
				if (BgL_testz00_1909)
					{	/* Cnst/initialize.scm 139 */
						return
							BGl_internzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7
							();
					}
				else
					{	/* Cnst/initialize.scm 139 */
						return
							BGl_internzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7
							();
					}
			}
		}
	}



/* intern-empty-cnst-initialize! */
	obj_t BGl_internzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 146 */
			{	/* Cnst/initialize.scm 147 */
				obj_t BgL_arg3504z00_1054;

				obj_t BgL_arg3505z00_1055;

				BgL_arg3504z00_1054 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				{	/* Cnst/initialize.scm 148 */
					obj_t BgL_arg3506z00_1056;

					BgL_arg3506z00_1056 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_arg3505z00_1055 =
						BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
						(BgL_backendz00_bglt) (BgL_arg3506z00_1056), (int) (((long) 0)));
				}
				{
					BgL_variablez00_bglt BgL_auxz00_1920;

					BgL_auxz00_1920 = (BgL_variablez00_bglt) (BgL_arg3504z00_1054);
					((((BgL_variablez00_bglt) CREF(BgL_auxz00_1920))->BgL_namez00) =
						((obj_t) BgL_arg3505z00_1055), BUNSPEC);
			}}
			return BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
		}
	}



/* intern-full-cnst-initialize! */
	obj_t BGl_internzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 154 */
			{
				obj_t BgL_cnstzd2stringzd2_1067;

				{	/* Cnst/initialize.scm 155 */
					obj_t BgL_arg3508z00_1059;

					obj_t BgL_arg3509z00_1060;

					BgL_arg3508z00_1059 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
					{	/* Cnst/initialize.scm 156 */
						obj_t BgL_arg3510z00_1061;

						obj_t BgL_arg3511z00_1062;

						BgL_arg3510z00_1061 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_arg3511z00_1062 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
						BgL_arg3509z00_1060 =
							BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
							(BgL_backendz00_bglt) (BgL_arg3510z00_1061),
							CINT(BgL_arg3511z00_1062));
					}
					{
						BgL_variablez00_bglt BgL_auxz00_1930;

						BgL_auxz00_1930 = (BgL_variablez00_bglt) (BgL_arg3508z00_1059);
						((((BgL_variablez00_bglt) CREF(BgL_auxz00_1930))->BgL_namez00) =
							((obj_t) BgL_arg3509z00_1060), BUNSPEC);
					}
				}
				{	/* Cnst/initialize.scm 175 */
					obj_t BgL_cnstzd2stringzd2_1063;

					BgL_cnstzd2stringzd2_1063 =
						obj_to_string(BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
						(bgl_reverse_bang(BGl_getzd2cnstzd2setz00zzcnst_allocz00())));
					{	/* Cnst/initialize.scm 175 */

						BgL_cnstzd2stringzd2_1067 = BgL_cnstzd2stringzd2_1063;
						{	/* Cnst/initialize.scm 158 */
							BgL_nodez00_bglt BgL_varzd2stringzd2_1069;

							BgL_varzd2stringzd2_1069 =
								BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
								(BgL_cnstzd2stringzd2_1067, BFALSE);
							{	/* Cnst/initialize.scm 158 */
								obj_t BgL_sexpz00_1070;

								{	/* Cnst/initialize.scm 159 */
									obj_t BgL_arg3518z00_1072;

									obj_t BgL_arg3519z00_1073;

									BgL_arg3518z00_1072 = CNST_TABLE_REF(((long) 6));
									{	/* Cnst/initialize.scm 159 */
										obj_t BgL_arg3520z00_1074;

										obj_t BgL_arg3521z00_1075;

										{	/* Cnst/initialize.scm 159 */
											obj_t BgL_arg3525z00_1079;

											{	/* Cnst/initialize.scm 159 */
												obj_t BgL_arg3527z00_1081;

												obj_t BgL_arg3528z00_1082;

												BgL_arg3527z00_1081 = CNST_TABLE_REF(((long) 23));
												{	/* Cnst/initialize.scm 160 */
													obj_t BgL_arg3529z00_1083;

													{	/* Cnst/initialize.scm 160 */
														obj_t BgL_arg3532z00_1086;

														obj_t BgL_arg3533z00_1087;

														{	/* Cnst/initialize.scm 160 */
															obj_t BgL_arg3535z00_1088;

															obj_t BgL_arg3536z00_1089;

															BgL_arg3535z00_1088 = CNST_TABLE_REF(((long) 17));
															{	/* Cnst/initialize.scm 160 */
																obj_t BgL_list3537z00_1090;

																{	/* Cnst/initialize.scm 160 */
																	obj_t BgL_arg3538z00_1091;

																	obj_t BgL_arg3539z00_1092;

																	BgL_arg3538z00_1091 =
																		CNST_TABLE_REF(((long) 24));
																	BgL_arg3539z00_1092 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3537z00_1090 =
																		MAKE_PAIR(BgL_arg3538z00_1091,
																		BgL_arg3539z00_1092);
																}
																BgL_arg3536z00_1089 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 25)),
																	BgL_list3537z00_1090);
															}
															BgL_arg3532z00_1086 =
																MAKE_PAIR(BgL_arg3535z00_1088,
																BgL_arg3536z00_1089);
														}
														{	/* Cnst/initialize.scm 162 */
															obj_t BgL_arg3540z00_1093;

															{	/* Cnst/initialize.scm 161 */
																BgL_variablez00_bglt BgL_obj1691z00_1663;

																{
																	BgL_varz00_bglt BgL_auxz00_1947;

																	BgL_auxz00_1947 =
																		(BgL_varz00_bglt)
																		(BgL_varzd2stringzd2_1069);
																	BgL_obj1691z00_1663 =
																		(((BgL_varz00_bglt) CREF(BgL_auxz00_1947))->
																		BgL_variablez00);
																}
																BgL_arg3540z00_1093 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_obj1691z00_1663))->BgL_idz00);
															}
															{	/* Cnst/initialize.scm 160 */
																obj_t BgL_list3542z00_1095;

																BgL_list3542z00_1095 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3533z00_1087 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3540z00_1093, BgL_list3542z00_1095);
														}}
														BgL_arg3529z00_1083 =
															MAKE_PAIR(BgL_arg3532z00_1086,
															BgL_arg3533z00_1087);
													}
													{	/* Cnst/initialize.scm 159 */
														obj_t BgL_list3531z00_1085;

														BgL_list3531z00_1085 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3528z00_1082 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3529z00_1083, BgL_list3531z00_1085);
												}}
												BgL_arg3525z00_1079 =
													MAKE_PAIR(BgL_arg3527z00_1081, BgL_arg3528z00_1082);
											}
											BgL_arg3520z00_1074 =
												MAKE_PAIR(BgL_arg3525z00_1079, BNIL);
										}
										{	/* Cnst/initialize.scm 163 */
											obj_t BgL_arg3544z00_1097;

											obj_t BgL_arg3545z00_1098;

											BgL_arg3544z00_1097 = CNST_TABLE_REF(((long) 9));
											{	/* Cnst/initialize.scm 163 */
												obj_t BgL_arg3546z00_1099;

												obj_t BgL_arg3547z00_1100;

												{	/* Cnst/initialize.scm 163 */
													obj_t BgL_arg3551z00_1104;

													{	/* Cnst/initialize.scm 163 */
														obj_t BgL_arg3553z00_1106;

														obj_t BgL_arg3554z00_1107;

														BgL_arg3553z00_1106 = CNST_TABLE_REF(((long) 10));
														{	/* Cnst/initialize.scm 163 */
															obj_t BgL_arg3555z00_1108;

															obj_t BgL_arg3556z00_1109;

															BgL_arg3555z00_1108 =
																MAKE_PAIR(CNST_TABLE_REF(((long) 26)), BNIL);
															{	/* Cnst/initialize.scm 164 */
																obj_t BgL_arg3560z00_1113;

																obj_t BgL_arg3561z00_1114;

																BgL_arg3560z00_1113 =
																	CNST_TABLE_REF(((long) 12));
																{	/* Cnst/initialize.scm 164 */
																	obj_t BgL_arg3562z00_1115;

																	obj_t BgL_arg3563z00_1116;

																	{	/* Cnst/initialize.scm 164 */
																		obj_t BgL_arg3568z00_1121;

																		obj_t BgL_arg3569z00_1122;

																		BgL_arg3568z00_1121 =
																			CNST_TABLE_REF(((long) 13));
																		{	/* Cnst/initialize.scm 164 */
																			obj_t BgL_list3570z00_1123;

																			{	/* Cnst/initialize.scm 164 */
																				obj_t BgL_arg3572z00_1125;

																				BgL_arg3572z00_1125 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3570z00_1123 =
																					MAKE_PAIR(BINT(((long) -1)),
																					BgL_arg3572z00_1125);
																			}
																			BgL_arg3569z00_1122 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(CNST_TABLE_REF(((long) 14)),
																				BgL_list3570z00_1123);
																		}
																		BgL_arg3562z00_1115 =
																			MAKE_PAIR(BgL_arg3568z00_1121,
																			BgL_arg3569z00_1122);
																	}
																	{	/* Cnst/initialize.scm 166 */
																		obj_t BgL_arg3573z00_1126;

																		obj_t BgL_arg3574z00_1127;

																		BgL_arg3573z00_1126 =
																			CNST_TABLE_REF(((long) 15));
																		{	/* Cnst/initialize.scm 167 */
																			obj_t BgL_arg3575z00_1128;

																			obj_t BgL_arg3576z00_1129;

																			{	/* Cnst/initialize.scm 167 */
																				obj_t BgL_arg3580z00_1133;

																				obj_t BgL_arg3581z00_1134;

																				BgL_arg3580z00_1133 =
																					CNST_TABLE_REF(((long) 16));
																				{	/* Cnst/initialize.scm 167 */
																					obj_t BgL_arg3582z00_1135;

																					obj_t BgL_arg3583z00_1136;

																					BgL_arg3582z00_1135 =
																						CNST_TABLE_REF(((long) 14));
																					{	/* Cnst/initialize.scm 168 */
																						obj_t BgL_arg3587z00_1140;

																						obj_t BgL_arg3588z00_1141;

																						BgL_arg3587z00_1140 =
																							CNST_TABLE_REF(((long) 27));
																						{	/* Cnst/initialize.scm 168 */
																							obj_t BgL_list3589z00_1142;

																							{	/* Cnst/initialize.scm 168 */
																								obj_t BgL_arg3590z00_1143;

																								obj_t BgL_arg3591z00_1144;

																								BgL_arg3590z00_1143 =
																									CNST_TABLE_REF(((long) 14));
																								BgL_arg3591z00_1144 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list3589z00_1142 =
																									MAKE_PAIR(BgL_arg3590z00_1143,
																									BgL_arg3591z00_1144);
																							}
																							BgL_arg3588z00_1141 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(CNST_TABLE_REF(((long) 28)),
																								BgL_list3589z00_1142);
																						}
																						BgL_arg3583z00_1136 =
																							MAKE_PAIR(BgL_arg3587z00_1140,
																							BgL_arg3588z00_1141);
																					}
																					{	/* Cnst/initialize.scm 167 */
																						obj_t BgL_list3585z00_1138;

																						{	/* Cnst/initialize.scm 167 */
																							obj_t BgL_arg3586z00_1139;

																							BgL_arg3586z00_1139 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3585z00_1138 =
																								MAKE_PAIR(BgL_arg3583z00_1136,
																								BgL_arg3586z00_1139);
																						}
																						BgL_arg3581z00_1134 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3582z00_1135,
																							BgL_list3585z00_1138);
																				}}
																				BgL_arg3575z00_1128 =
																					MAKE_PAIR(BgL_arg3580z00_1133,
																					BgL_arg3581z00_1134);
																			}
																			{	/* Cnst/initialize.scm 171 */
																				obj_t BgL_arg3592z00_1145;

																				obj_t BgL_arg3593z00_1146;

																				BgL_arg3592z00_1145 =
																					CNST_TABLE_REF(((long) 6));
																				{	/* Cnst/initialize.scm 171 */
																					obj_t BgL_arg3594z00_1147;

																					obj_t BgL_arg3595z00_1148;

																					{	/* Cnst/initialize.scm 171 */
																						obj_t BgL_arg3599z00_1152;

																						{	/* Cnst/initialize.scm 171 */
																							obj_t BgL_arg3601z00_1154;

																							obj_t BgL_arg3602z00_1155;

																							BgL_arg3601z00_1154 =
																								CNST_TABLE_REF(((long) 20));
																							{	/* Cnst/initialize.scm 171 */
																								obj_t BgL_arg3603z00_1156;

																								{	/* Cnst/initialize.scm 171 */
																									obj_t BgL_arg3606z00_1159;

																									obj_t BgL_arg3607z00_1160;

																									BgL_arg3606z00_1159 =
																										CNST_TABLE_REF(((long) 21));
																									{	/* Cnst/initialize.scm 171 */
																										obj_t BgL_list3608z00_1161;

																										{	/* Cnst/initialize.scm 171 */
																											obj_t BgL_arg3610z00_1163;

																											BgL_arg3610z00_1163 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list3608z00_1161 =
																												MAKE_PAIR(BINT(((long)
																														1)),
																												BgL_arg3610z00_1163);
																										}
																										BgL_arg3607z00_1160 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(CNST_TABLE_REF(((long)
																													14)),
																											BgL_list3608z00_1161);
																									}
																									BgL_arg3603z00_1156 =
																										MAKE_PAIR
																										(BgL_arg3606z00_1159,
																										BgL_arg3607z00_1160);
																								}
																								{	/* Cnst/initialize.scm 171 */
																									obj_t BgL_list3605z00_1158;

																									BgL_list3605z00_1158 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3602z00_1155 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3603z00_1156,
																										BgL_list3605z00_1158);
																							}}
																							BgL_arg3599z00_1152 =
																								MAKE_PAIR(BgL_arg3601z00_1154,
																								BgL_arg3602z00_1155);
																						}
																						BgL_arg3594z00_1147 =
																							MAKE_PAIR(BgL_arg3599z00_1152,
																							BNIL);
																					}
																					{	/* Cnst/initialize.scm 172 */
																						obj_t BgL_arg3612z00_1164;

																						obj_t BgL_arg3613z00_1165;

																						BgL_arg3612z00_1164 =
																							CNST_TABLE_REF(((long) 10));
																						{	/* Cnst/initialize.scm 172 */
																							obj_t BgL_list3614z00_1166;

																							BgL_list3614z00_1166 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3613z00_1165 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(CNST_TABLE_REF(((long) 22)),
																								BgL_list3614z00_1166);
																						}
																						BgL_arg3595z00_1148 =
																							MAKE_PAIR(BgL_arg3612z00_1164,
																							BgL_arg3613z00_1165);
																					}
																					{	/* Cnst/initialize.scm 171 */
																						obj_t BgL_list3597z00_1150;

																						{	/* Cnst/initialize.scm 171 */
																							obj_t BgL_arg3598z00_1151;

																							BgL_arg3598z00_1151 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3597z00_1150 =
																								MAKE_PAIR(BgL_arg3595z00_1148,
																								BgL_arg3598z00_1151);
																						}
																						BgL_arg3593z00_1146 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3594z00_1147,
																							BgL_list3597z00_1150);
																				}}
																				BgL_arg3576z00_1129 =
																					MAKE_PAIR(BgL_arg3592z00_1145,
																					BgL_arg3593z00_1146);
																			}
																			{	/* Cnst/initialize.scm 166 */
																				obj_t BgL_list3578z00_1131;

																				{	/* Cnst/initialize.scm 166 */
																					obj_t BgL_arg3579z00_1132;

																					BgL_arg3579z00_1132 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3578z00_1131 =
																						MAKE_PAIR(BgL_arg3576z00_1129,
																						BgL_arg3579z00_1132);
																				}
																				BgL_arg3574z00_1127 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3575z00_1128,
																					BgL_list3578z00_1131);
																		}}
																		BgL_arg3563z00_1116 =
																			MAKE_PAIR(BgL_arg3573z00_1126,
																			BgL_arg3574z00_1127);
																	}
																	{	/* Cnst/initialize.scm 164 */
																		obj_t BgL_list3565z00_1118;

																		{	/* Cnst/initialize.scm 164 */
																			obj_t BgL_arg3566z00_1119;

																			{	/* Cnst/initialize.scm 164 */
																				obj_t BgL_arg3567z00_1120;

																				BgL_arg3567z00_1120 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3566z00_1119 =
																					MAKE_PAIR(BgL_arg3563z00_1116,
																					BgL_arg3567z00_1120);
																			}
																			BgL_list3565z00_1118 =
																				MAKE_PAIR(BUNSPEC, BgL_arg3566z00_1119);
																		}
																		BgL_arg3561z00_1114 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3562z00_1115,
																			BgL_list3565z00_1118);
																}}
																BgL_arg3556z00_1109 =
																	MAKE_PAIR(BgL_arg3560z00_1113,
																	BgL_arg3561z00_1114);
															}
															{	/* Cnst/initialize.scm 163 */
																obj_t BgL_list3558z00_1111;

																{	/* Cnst/initialize.scm 163 */
																	obj_t BgL_arg3559z00_1112;

																	BgL_arg3559z00_1112 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3558z00_1111 =
																		MAKE_PAIR(BgL_arg3556z00_1109,
																		BgL_arg3559z00_1112);
																}
																BgL_arg3554z00_1107 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3555z00_1108, BgL_list3558z00_1111);
														}}
														BgL_arg3551z00_1104 =
															MAKE_PAIR(BgL_arg3553z00_1106,
															BgL_arg3554z00_1107);
													}
													BgL_arg3546z00_1099 =
														MAKE_PAIR(BgL_arg3551z00_1104, BNIL);
												}
												{	/* Cnst/initialize.scm 173 */
													obj_t BgL_arg3615z00_1167;

													obj_t BgL_arg3616z00_1168;

													BgL_arg3615z00_1167 = CNST_TABLE_REF(((long) 10));
													{	/* Cnst/initialize.scm 173 */
														long BgL_arg3617z00_1169;

														{	/* Cnst/initialize.scm 173 */
															obj_t BgL_arg3620z00_1172;

															BgL_arg3620z00_1172 =
																BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
															BgL_arg3617z00_1169 =
																((long) CINT(BgL_arg3620z00_1172) - ((long) 1));
														}
														{	/* Cnst/initialize.scm 173 */
															obj_t BgL_list3619z00_1171;

															BgL_list3619z00_1171 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3616z00_1168 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
																(BgL_arg3617z00_1169), BgL_list3619z00_1171);
													}}
													BgL_arg3547z00_1100 =
														MAKE_PAIR(BgL_arg3615z00_1167, BgL_arg3616z00_1168);
												}
												{	/* Cnst/initialize.scm 163 */
													obj_t BgL_list3549z00_1102;

													{	/* Cnst/initialize.scm 163 */
														obj_t BgL_arg3550z00_1103;

														BgL_arg3550z00_1103 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3549z00_1102 =
															MAKE_PAIR(BgL_arg3547z00_1100,
															BgL_arg3550z00_1103);
													}
													BgL_arg3545z00_1098 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3546z00_1099, BgL_list3549z00_1102);
											}}
											BgL_arg3521z00_1075 =
												MAKE_PAIR(BgL_arg3544z00_1097, BgL_arg3545z00_1098);
										}
										{	/* Cnst/initialize.scm 159 */
											obj_t BgL_list3523z00_1077;

											{	/* Cnst/initialize.scm 159 */
												obj_t BgL_arg3524z00_1078;

												BgL_arg3524z00_1078 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3523z00_1077 =
													MAKE_PAIR(BgL_arg3521z00_1075, BgL_arg3524z00_1078);
											}
											BgL_arg3519z00_1073 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3520z00_1074, BgL_list3523z00_1077);
									}}
									BgL_sexpz00_1070 =
										MAKE_PAIR(BgL_arg3518z00_1072, BgL_arg3519z00_1073);
								}
								{	/* Cnst/initialize.scm 159 */

									return
										MAKE_PAIR(BgL_sexpz00_1070,
										BGl_getzd2cnstzd2sexpz00zzcnst_allocz00());
								}
							}
						}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_initializa7eza7()
	{
		AN_OBJECT;
		{	/* Cnst/initialize.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 46924743),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
			return
				BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string3674z00zzcnst_initializa7eza7));
		}
	}

#ifdef __cplusplus
}
#endif
