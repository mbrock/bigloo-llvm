/*===========================================================================*/
/*   (Llib/tvector.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/tvector.scm -indent -o objs/obj_u/Llib/tvector.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__tvectorzd2ze3vectorz31zz__tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t);
	static obj_t BGl__listzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_declarezd2tvectorz12zc0zz__tvectorz00(char *,
		obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__tvectorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__tvectorz00();
	static obj_t BGl__tvectorzf3zf3zz__tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl__tvectorzd2lengthzd2zz__tvectorz00(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__tvectorzd2idzd2zz__tvectorz00(obj_t, obj_t);
	static obj_t BGl__vectorzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__tvectorz00();
	static obj_t BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = BUNSPEC;
	static obj_t BGl__tvectorzd2refzd2zz__tvectorz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__tvectorz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2204z00zz__tvectorz00 = BUNSPEC;
	static obj_t BGl_symbol2206z00zz__tvectorz00 = BUNSPEC;
	static obj_t BGl_symbol2208z00zz__tvectorz00 = BUNSPEC;
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__getzd2tvectorzd2descriptorz00zz__tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t get_tvector_descriptor(obj_t);
	BGL_EXPORTED_DECL int BGl_tvectorzd2lengthzd2zz__tvectorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__tvectorz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl__declarezd2tvectorz12zc0zz__tvectorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t string_to_symbol(char *);
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
	extern obj_t string_to_bstring(char *);
	extern obj_t BGl_bigloozd2casezd2sensitivityz00zz__readerz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_tvectorzf3zf3zz__tvectorz00(obj_t);
	extern obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__tvectorz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2tvectorzd2descriptorzd2envzd2zz__tvectorz00,
		BgL_bgl__getza7d2tvectorza7d2226z00,
		BGl__getzd2tvectorzd2descriptorz00zz__tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3tvectorzd2envze3zz__tvectorz00,
		BgL_bgl__listza7d2za7e3tvect2227z00,
		BGl__listzd2ze3tvectorz31zz__tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2ze3tvectorzd2envze3zz__tvectorz00,
		BgL_bgl__vectorza7d2za7e3tve2228z00,
		BGl__vectorzd2ze3tvectorz31zz__tvectorz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzd2refzd2envz00zz__tvectorz00,
		BgL_bgl__tvectorza7d2refza7d2229z00, BGl__tvectorzd2refzd2zz__tvectorz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzd2idzd2envz00zz__tvectorz00,
		BgL_bgl__tvectorza7d2idza7d22230z00, BGl__tvectorzd2idzd2zz__tvectorz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzf3zd2envz21zz__tvectorz00,
		BgL_bgl__tvectorza7f3za7f3za7za72231z00, BGl__tvectorzf3zf3zz__tvectorz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2tvectorz12zd2envz12zz__tvectorz00,
		BgL_bgl__declareza7d2tvect2232za7,
		BGl__declarezd2tvectorz12zc0zz__tvectorz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzd2ze3vectorzd2envze3zz__tvectorz00,
		BgL_bgl__tvectorza7d2za7e3ve2233z00,
		BGl__tvectorzd2ze3vectorz31zz__tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzd2lengthzd2envz00zz__tvectorz00,
		BgL_bgl__tvectorza7d2lengt2234za7, BGl__tvectorzd2lengthzd2zz__tvectorz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2200z00zz__tvectorz00,
		BgL_bgl_string2200za700za7za7_2235za7, "tvector", 7);
	      DEFINE_STRING(BGl_string2201z00zz__tvectorz00,
		BgL_bgl_string2201za700za7za7_2236za7, "_tvector-id", 11);
	      DEFINE_STRING(BGl_string2202z00zz__tvectorz00,
		BgL_bgl_string2202za700za7za7_2237za7, "_get-tvector-descriptor", 23);
	      DEFINE_STRING(BGl_string2203z00zz__tvectorz00,
		BgL_bgl_string2203za700za7za7_2238za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2205z00zz__tvectorz00,
		BgL_bgl_string2205za700za7za7_2239za7, "upcase", 6);
	      DEFINE_STRING(BGl_string2207z00zz__tvectorz00,
		BgL_bgl_string2207za700za7za7_2240za7, "downcase", 8);
	      DEFINE_STRING(BGl_string2198z00zz__tvectorz00,
		BgL_bgl_string2198za700za7za7_2241za7,
		"/tmp/bigloo/runtime/Llib/tvector.scm", 36);
	      DEFINE_STRING(BGl_string2210z00zz__tvectorz00,
		BgL_bgl_string2210za700za7za7_2242za7, "_declare-tvector!", 17);
	      DEFINE_STRING(BGl_string2209z00zz__tvectorz00,
		BgL_bgl_string2209za700za7za7_2243za7, "tvect-descr", 11);
	      DEFINE_STRING(BGl_string2199z00zz__tvectorz00,
		BgL_bgl_string2199za700za7za7_2244za7, "_tvector-length", 15);
	      DEFINE_STRING(BGl_string2211z00zz__tvectorz00,
		BgL_bgl_string2211za700za7za7_2245za7, "string", 6);
	      DEFINE_STRING(BGl_string2212z00zz__tvectorz00,
		BgL_bgl_string2212za700za7za7_2246za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2213z00zz__tvectorz00,
		BgL_bgl_string2213za700za7za7_2247za7, "_tvector-ref", 12);
	      DEFINE_STRING(BGl_string2214z00zz__tvectorz00,
		BgL_bgl_string2214za700za7za7_2248za7, "list->tvector", 13);
	      DEFINE_STRING(BGl_string2215z00zz__tvectorz00,
		BgL_bgl_string2215za700za7za7_2249za7, "Unable to convert to such tvector",
		33);
	      DEFINE_STRING(BGl_string2216z00zz__tvectorz00,
		BgL_bgl_string2216za700za7za7_2250za7, "Undeclared tvector", 18);
	      DEFINE_STRING(BGl_string2217z00zz__tvectorz00,
		BgL_bgl_string2217za700za7za7_2251za7, "_list->tvector", 14);
	      DEFINE_STRING(BGl_string2218z00zz__tvectorz00,
		BgL_bgl_string2218za700za7za7_2252za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2220z00zz__tvectorz00,
		BgL_bgl_string2220za700za7za7_2253za7, "_vector->tvector", 16);
	      DEFINE_STRING(BGl_string2219z00zz__tvectorz00,
		BgL_bgl_string2219za700za7za7_2254za7, "vector->tvector", 15);
	      DEFINE_STRING(BGl_string2221z00zz__tvectorz00,
		BgL_bgl_string2221za700za7za7_2255za7, "vector", 6);
	      DEFINE_STRING(BGl_string2222z00zz__tvectorz00,
		BgL_bgl_string2222za700za7za7_2256za7, "tvector->vector", 15);
	      DEFINE_STRING(BGl_string2223z00zz__tvectorz00,
		BgL_bgl_string2223za700za7za7_2257za7, "_tvector->vector", 16);
	      DEFINE_STRING(BGl_string2224z00zz__tvectorz00,
		BgL_bgl_string2224za700za7za7_2258za7, "__tvector", 9);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long
		BgL_checksumz00_1685, char *BgL_fromz00_1686)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__tvectorz00))
				{
					BGl_requirezd2initializa7ationz75zz__tvectorz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__tvectorz00();
					BGl_importedzd2moduleszd2initz00zz__tvectorz00();
					BGl_toplevelzd2initzd2zz__tvectorz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__tvectorz00()
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 14 */
			BGl_symbol2204z00zz__tvectorz00 =
				bstring_to_symbol(BGl_string2205z00zz__tvectorz00);
			BGl_symbol2206z00zz__tvectorz00 =
				bstring_to_symbol(BGl_string2207z00zz__tvectorz00);
			return (BGl_symbol2208z00zz__tvectorz00 =
				bstring_to_symbol(BGl_string2209z00zz__tvectorz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__tvectorz00()
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 14 */
			return (BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = BNIL, BUNSPEC);
		}
	}



/* tvector? */
	BGL_EXPORTED_DEF bool_t BGl_tvectorzf3zf3zz__tvectorz00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 90 */
			return TVECTORP(BgL_objz00_1);
		}
	}



/* _tvector? */
	obj_t BGl__tvectorzf3zf3zz__tvectorz00(obj_t BgL_envz00_1632,
		obj_t BgL_objz00_1633)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 90 */
			return BBOOL(TVECTORP(BgL_objz00_1633));
		}
	}



/* tvector-length */
	BGL_EXPORTED_DEF int BGl_tvectorzd2lengthzd2zz__tvectorz00(obj_t BgL_objz00_2)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 96 */
			return TVECTOR_LENGTH(BgL_objz00_2);
		}
	}



/* _tvector-length */
	obj_t BGl__tvectorzd2lengthzd2zz__tvectorz00(obj_t BgL_envz00_1634,
		obj_t BgL_objz00_1635)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 96 */
			{	/* Llib/tvector.scm 97 */
				int BgL_auxz00_1700;

				{	/* Llib/tvector.scm 97 */
					obj_t BgL_objz00_1679;

					if (TVECTORP(BgL_objz00_1635))
						{	/* Llib/tvector.scm 97 */
							BgL_objz00_1679 = BgL_objz00_1635;
						}
					else
						{
							obj_t BgL_auxz00_1703;

							BgL_auxz00_1703 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
								BINT(((long) 3513)), BGl_string2199z00zz__tvectorz00,
								BGl_string2200z00zz__tvectorz00, BgL_objz00_1635);
							FAILURE(BgL_auxz00_1703, BFALSE, BFALSE);
						}
					BgL_auxz00_1700 = TVECTOR_LENGTH(BgL_objz00_1679);
				}
				return BINT(BgL_auxz00_1700);
			}
		}
	}



/* tvector-id */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t BgL_tvectz00_3)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 102 */
			return STRUCT_REF(TVECTOR_DESCR(BgL_tvectz00_3), (int) (((long) 0)));
		}
	}



/* _tvector-id */
	obj_t BGl__tvectorzd2idzd2zz__tvectorz00(obj_t BgL_envz00_1636,
		obj_t BgL_tvectz00_1637)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 102 */
			{	/* Llib/tvector.scm 103 */
				obj_t BgL_auxz00_1712;

				if (TVECTORP(BgL_tvectz00_1637))
					{	/* Llib/tvector.scm 103 */
						BgL_auxz00_1712 = BgL_tvectz00_1637;
					}
				else
					{
						obj_t BgL_auxz00_1715;

						BgL_auxz00_1715 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
							BINT(((long) 3805)), BGl_string2201z00zz__tvectorz00,
							BGl_string2200z00zz__tvectorz00, BgL_tvectz00_1637);
						FAILURE(BgL_auxz00_1715, BFALSE, BFALSE);
					}
				return BGl_tvectorzd2idzd2zz__tvectorz00(BgL_auxz00_1712);
			}
		}
	}



/* get-tvector-descriptor */
	BGL_EXPORTED_DEF obj_t get_tvector_descriptor(obj_t BgL_idz00_22)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 125 */
			if (PAIRP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
				{	/* Llib/tvector.scm 126 */
					obj_t BgL_cellz00_1323;

					BgL_cellz00_1323 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_22,
						BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
					if (PAIRP(BgL_cellz00_1323))
						{	/* Llib/tvector.scm 126 */
							return CDR(BgL_cellz00_1323);
						}
					else
						{	/* Llib/tvector.scm 126 */
							return BFALSE;
						}
				}
			else
				{	/* Llib/tvector.scm 126 */
					return BFALSE;
				}
		}
	}



/* _get-tvector-descriptor */
	obj_t BGl__getzd2tvectorzd2descriptorz00zz__tvectorz00(obj_t BgL_envz00_1638,
		obj_t BgL_idz00_1639)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 125 */
			{	/* Llib/tvector.scm 126 */
				obj_t BgL_auxz00_1726;

				if (SYMBOLP(BgL_idz00_1639))
					{	/* Llib/tvector.scm 126 */
						BgL_auxz00_1726 = BgL_idz00_1639;
					}
				else
					{
						obj_t BgL_auxz00_1729;

						BgL_auxz00_1729 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
							BINT(((long) 5056)), BGl_string2202z00zz__tvectorz00,
							BGl_string2203z00zz__tvectorz00, BgL_idz00_1639);
						FAILURE(BgL_auxz00_1729, BFALSE, BFALSE);
					}
				return get_tvector_descriptor(BgL_auxz00_1726);
			}
		}
	}



/* declare-tvector! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2tvectorz12zc0zz__tvectorz00(char
		*BgL_idz00_23, obj_t BgL_allocatez00_24, obj_t BgL_refz00_25,
		obj_t BgL_setz00_26)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 139 */
			{	/* Llib/tvector.scm 140 */
				obj_t BgL_idz00_787;

				{	/* Llib/tvector.scm 140 */
					obj_t BgL_arg1898z00_792;

					{	/* Llib/tvector.scm 140 */
						obj_t BgL_casezd2valuezd2_793;

						BgL_casezd2valuezd2_793 =
							BGl_bigloozd2casezd2sensitivityz00zz__readerz00();
						if ((BgL_casezd2valuezd2_793 == BGl_symbol2204z00zz__tvectorz00))
							{	/* Llib/tvector.scm 140 */
								BgL_arg1898z00_792 =
									BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(string_to_bstring
									(BgL_idz00_23));
							}
						else
							{	/* Llib/tvector.scm 140 */
								if (
									(BgL_casezd2valuezd2_793 == BGl_symbol2206z00zz__tvectorz00))
									{	/* Llib/tvector.scm 140 */
										BgL_arg1898z00_792 =
											BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
											(string_to_bstring(BgL_idz00_23));
									}
								else
									{	/* Llib/tvector.scm 140 */
										BgL_arg1898z00_792 = string_to_bstring(BgL_idz00_23);
									}
							}
					}
					BgL_idz00_787 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg1898z00_792));
				}
				{	/* Llib/tvector.scm 140 */
					obj_t BgL_oldz00_788;

					if (PAIRP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
						{	/* Llib/tvector.scm 147 */
							obj_t BgL_cellz00_1335;

							BgL_cellz00_1335 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_787,
								BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
							if (PAIRP(BgL_cellz00_1335))
								{	/* Llib/tvector.scm 147 */
									BgL_oldz00_788 = CDR(BgL_cellz00_1335);
								}
							else
								{	/* Llib/tvector.scm 147 */
									BgL_oldz00_788 = BFALSE;
								}
						}
					else
						{	/* Llib/tvector.scm 147 */
							BgL_oldz00_788 = BFALSE;
						}
					{	/* Llib/tvector.scm 147 */

						{	/* Llib/tvector.scm 148 */
							bool_t BgL_testz00_1752;

							if (STRUCTP(BgL_oldz00_788))
								{	/* Llib/tvector.scm 148 */
									BgL_testz00_1752 =
										(STRUCT_KEY(BgL_oldz00_788) ==
										BGl_symbol2208z00zz__tvectorz00);
								}
							else
								{	/* Llib/tvector.scm 148 */
									BgL_testz00_1752 = ((bool_t) 0);
								}
							if (BgL_testz00_1752)
								{	/* Llib/tvector.scm 148 */
									return BgL_oldz00_788;
								}
							else
								{	/* Llib/tvector.scm 149 */
									obj_t BgL_newz00_790;

									{	/* Llib/tvector.scm 149 */
										obj_t BgL_newz00_1351;

										BgL_newz00_1351 =
											create_struct(BGl_symbol2208z00zz__tvectorz00,
											(int) (((long) 4)));
										{	/* Llib/tvector.scm 149 */
											int BgL_auxz00_1759;

											BgL_auxz00_1759 = (int) (((long) 3));
											STRUCT_SET(BgL_newz00_1351, BgL_auxz00_1759,
												BgL_setz00_26);
										}
										{	/* Llib/tvector.scm 149 */
											int BgL_auxz00_1762;

											BgL_auxz00_1762 = (int) (((long) 2));
											STRUCT_SET(BgL_newz00_1351, BgL_auxz00_1762,
												BgL_refz00_25);
										}
										{	/* Llib/tvector.scm 149 */
											int BgL_auxz00_1765;

											BgL_auxz00_1765 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_1351, BgL_auxz00_1765,
												BgL_allocatez00_24);
										}
										{	/* Llib/tvector.scm 149 */
											int BgL_auxz00_1768;

											BgL_auxz00_1768 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_1351, BgL_auxz00_1768,
												BgL_idz00_787);
										}
										BgL_newz00_790 = BgL_newz00_1351;
									}
									{	/* Llib/tvector.scm 150 */
										obj_t BgL_arg1896z00_791;

										BgL_arg1896z00_791 =
											MAKE_PAIR(BgL_idz00_787, BgL_newz00_790);
										BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 =
											MAKE_PAIR(BgL_arg1896z00_791,
											BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
									}
									return BgL_newz00_790;
								}
						}
					}
				}
			}
		}
	}



/* _declare-tvector! */
	obj_t BGl__declarezd2tvectorz12zc0zz__tvectorz00(obj_t BgL_envz00_1640,
		obj_t BgL_idz00_1641, obj_t BgL_allocatez00_1642, obj_t BgL_refz00_1643,
		obj_t BgL_setz00_1644)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 139 */
			{	/* Llib/tvector.scm 140 */
				obj_t BgL_auxz00_1782;

				char *BgL_auxz00_1773;

				if (PROCEDUREP(BgL_allocatez00_1642))
					{	/* Llib/tvector.scm 140 */
						BgL_auxz00_1782 = BgL_allocatez00_1642;
					}
				else
					{
						obj_t BgL_auxz00_1785;

						BgL_auxz00_1785 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
							BINT(((long) 5745)), BGl_string2210z00zz__tvectorz00,
							BGl_string2212z00zz__tvectorz00, BgL_allocatez00_1642);
						FAILURE(BgL_auxz00_1785, BFALSE, BFALSE);
					}
				{	/* Llib/tvector.scm 140 */
					obj_t BgL_auxz00_1774;

					if (STRINGP(BgL_idz00_1641))
						{	/* Llib/tvector.scm 140 */
							BgL_auxz00_1774 = BgL_idz00_1641;
						}
					else
						{
							obj_t BgL_auxz00_1777;

							BgL_auxz00_1777 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
								BINT(((long) 5745)), BGl_string2210z00zz__tvectorz00,
								BGl_string2211z00zz__tvectorz00, BgL_idz00_1641);
							FAILURE(BgL_auxz00_1777, BFALSE, BFALSE);
						}
					BgL_auxz00_1773 = BSTRING_TO_STRING(BgL_auxz00_1774);
				}
				return
					BGl_declarezd2tvectorz12zc0zz__tvectorz00(BgL_auxz00_1773,
					BgL_auxz00_1782, BgL_refz00_1643, BgL_setz00_1644);
			}
		}
	}



/* tvector-ref */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t
		BgL_tvectorz00_27)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 157 */
			return STRUCT_REF(TVECTOR_DESCR(BgL_tvectorz00_27), (int) (((long) 2)));
		}
	}



/* _tvector-ref */
	obj_t BGl__tvectorzd2refzd2zz__tvectorz00(obj_t BgL_envz00_1645,
		obj_t BgL_tvectorz00_1646)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 157 */
			{	/* Llib/tvector.scm 158 */
				obj_t BgL_auxz00_1793;

				if (TVECTORP(BgL_tvectorz00_1646))
					{	/* Llib/tvector.scm 158 */
						BgL_auxz00_1793 = BgL_tvectorz00_1646;
					}
				else
					{
						obj_t BgL_auxz00_1796;

						BgL_auxz00_1796 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
							BINT(((long) 6466)), BGl_string2213z00zz__tvectorz00,
							BGl_string2200z00zz__tvectorz00, BgL_tvectorz00_1646);
						FAILURE(BgL_auxz00_1796, BFALSE, BFALSE);
					}
				return BGl_tvectorzd2refzd2zz__tvectorz00(BgL_auxz00_1793);
			}
		}
	}



/* list->tvector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3tvectorz31zz__tvectorz00(obj_t
		BgL_idz00_28, obj_t BgL_lz00_29)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 163 */
			{	/* Llib/tvector.scm 164 */
				obj_t BgL_descrz00_799;

				if (PAIRP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
					{	/* Llib/tvector.scm 164 */
						obj_t BgL_cellz00_1378;

						BgL_cellz00_1378 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_28,
							BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
						if (PAIRP(BgL_cellz00_1378))
							{	/* Llib/tvector.scm 164 */
								BgL_descrz00_799 = CDR(BgL_cellz00_1378);
							}
						else
							{	/* Llib/tvector.scm 164 */
								BgL_descrz00_799 = BFALSE;
							}
					}
				else
					{	/* Llib/tvector.scm 164 */
						BgL_descrz00_799 = BFALSE;
					}
				if (CBOOL(BgL_descrz00_799))
					{	/* Llib/tvector.scm 167 */
						obj_t BgL_allocatez00_800;

						obj_t BgL_setz00_801;

						BgL_allocatez00_800 =
							STRUCT_REF(BgL_descrz00_799, (int) (((long) 1)));
						BgL_setz00_801 = STRUCT_REF(BgL_descrz00_799, (int) (((long) 3)));
						if (PROCEDUREP(BgL_setz00_801))
							{	/* Llib/tvector.scm 173 */
								long BgL_lenz00_803;

								BgL_lenz00_803 = bgl_list_length(BgL_lz00_29);
								{	/* Llib/tvector.scm 173 */
									obj_t BgL_tvecz00_804;

									BgL_tvecz00_804 =
										PROCEDURE_ENTRY(BgL_allocatez00_800) (BgL_allocatez00_800,
										BINT(BgL_lenz00_803), BEOA);
									{	/* Llib/tvector.scm 174 */

										{
											obj_t BgL_lz00_1391;

											long BgL_iz00_1392;

											BgL_lz00_1391 = BgL_lz00_29;
											BgL_iz00_1392 = ((long) 0);
										BgL_loopz00_1390:
											if (NULLP(BgL_lz00_1391))
												{	/* Llib/tvector.scm 175 */
													return BgL_tvecz00_804;
												}
											else
												{	/* Llib/tvector.scm 175 */
													{	/* Llib/tvector.scm 175 */
														obj_t BgL_arg1907z00_1398;

														BgL_arg1907z00_1398 = CAR(BgL_lz00_1391);
														PROCEDURE_ENTRY(BgL_setz00_801) (BgL_setz00_801,
															BgL_tvecz00_804, BINT(BgL_iz00_1392),
															BgL_arg1907z00_1398, BEOA);
													}
													{
														long BgL_iz00_1827;

														obj_t BgL_lz00_1825;

														BgL_lz00_1825 = CDR(BgL_lz00_1391);
														BgL_iz00_1827 = (BgL_iz00_1392 + ((long) 1));
														BgL_iz00_1392 = BgL_iz00_1827;
														BgL_lz00_1391 = BgL_lz00_1825;
														goto BgL_loopz00_1390;
													}
												}
										}
									}
								}
							}
						else
							{	/* Llib/tvector.scm 169 */
								return
									BGl_errorz00zz__errorz00(BGl_string2214z00zz__tvectorz00,
									BGl_string2215z00zz__tvectorz00, BgL_idz00_28);
							}
					}
				else
					{	/* Llib/tvector.scm 165 */
						return
							BGl_errorz00zz__errorz00(BGl_string2214z00zz__tvectorz00,
							BGl_string2216z00zz__tvectorz00, BgL_idz00_28);
					}
			}
		}
	}



/* _list->tvector */
	obj_t BGl__listzd2ze3tvectorz31zz__tvectorz00(obj_t BgL_envz00_1647,
		obj_t BgL_idz00_1648, obj_t BgL_lz00_1649)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 163 */
			{	/* Llib/tvector.scm 164 */
				obj_t BgL_auxz00_1838;

				obj_t BgL_auxz00_1831;

				{	/* Llib/tvector.scm 164 */
					bool_t BgL_testz00_1839;

					if (PAIRP(BgL_lz00_1649))
						{	/* Llib/tvector.scm 164 */
							BgL_testz00_1839 = ((bool_t) 1);
						}
					else
						{	/* Llib/tvector.scm 164 */
							BgL_testz00_1839 = NULLP(BgL_lz00_1649);
						}
					if (BgL_testz00_1839)
						{	/* Llib/tvector.scm 164 */
							BgL_auxz00_1838 = BgL_lz00_1649;
						}
					else
						{
							obj_t BgL_auxz00_1843;

							BgL_auxz00_1843 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
								BINT(((long) 6767)), BGl_string2217z00zz__tvectorz00,
								BGl_string2218z00zz__tvectorz00, BgL_lz00_1649);
							FAILURE(BgL_auxz00_1843, BFALSE, BFALSE);
				}}
				if (SYMBOLP(BgL_idz00_1648))
					{	/* Llib/tvector.scm 164 */
						BgL_auxz00_1831 = BgL_idz00_1648;
					}
				else
					{
						obj_t BgL_auxz00_1834;

						BgL_auxz00_1834 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
							BINT(((long) 6767)), BGl_string2217z00zz__tvectorz00,
							BGl_string2203z00zz__tvectorz00, BgL_idz00_1648);
						FAILURE(BgL_auxz00_1834, BFALSE, BFALSE);
					}
				return
					BGl_listzd2ze3tvectorz31zz__tvectorz00(BgL_auxz00_1831,
					BgL_auxz00_1838);
			}
		}
	}



/* vector->tvector */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t
		BgL_idz00_30, obj_t BgL_vz00_31)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 186 */
			{	/* Llib/tvector.scm 187 */
				obj_t BgL_descrz00_814;

				if (PAIRP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
					{	/* Llib/tvector.scm 187 */
						obj_t BgL_cellz00_1428;

						BgL_cellz00_1428 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_30,
							BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
						if (PAIRP(BgL_cellz00_1428))
							{	/* Llib/tvector.scm 187 */
								BgL_descrz00_814 = CDR(BgL_cellz00_1428);
							}
						else
							{	/* Llib/tvector.scm 187 */
								BgL_descrz00_814 = BFALSE;
							}
					}
				else
					{	/* Llib/tvector.scm 187 */
						BgL_descrz00_814 = BFALSE;
					}
				if (CBOOL(BgL_descrz00_814))
					{	/* Llib/tvector.scm 190 */
						obj_t BgL_allocatez00_815;

						obj_t BgL_setz00_816;

						BgL_allocatez00_815 =
							STRUCT_REF(BgL_descrz00_814, (int) (((long) 1)));
						BgL_setz00_816 = STRUCT_REF(BgL_descrz00_814, (int) (((long) 3)));
						if (PROCEDUREP(BgL_setz00_816))
							{	/* Llib/tvector.scm 196 */
								int BgL_lenz00_818;

								BgL_lenz00_818 = VECTOR_LENGTH(BgL_vz00_31);
								{	/* Llib/tvector.scm 196 */
									obj_t BgL_tvecz00_819;

									BgL_tvecz00_819 =
										PROCEDURE_ENTRY(BgL_allocatez00_815) (BgL_allocatez00_815,
										BINT(BgL_lenz00_818), BEOA);
									{	/* Llib/tvector.scm 197 */

										{	/* Llib/tvector.scm 198 */
											long BgL_g1825z00_820;

											BgL_g1825z00_820 = ((long) (BgL_lenz00_818) - ((long) 1));
											{
												long BgL_iz00_822;

												BgL_iz00_822 = BgL_g1825z00_820;
											BgL_zc3anonymousza31911ze3z83_823:
												if ((BgL_iz00_822 == ((long) -1)))
													{	/* Llib/tvector.scm 199 */
														return BgL_tvecz00_819;
													}
												else
													{	/* Llib/tvector.scm 199 */
														{	/* Llib/tvector.scm 202 */
															obj_t BgL_arg1914z00_825;

															BgL_arg1914z00_825 =
																VECTOR_REF(BgL_vz00_31, (int) (BgL_iz00_822));
															PROCEDURE_ENTRY(BgL_setz00_816) (BgL_setz00_816,
																BgL_tvecz00_819, BINT(BgL_iz00_822),
																BgL_arg1914z00_825, BEOA);
														}
														{
															long BgL_iz00_1875;

															BgL_iz00_1875 = (BgL_iz00_822 - ((long) 1));
															BgL_iz00_822 = BgL_iz00_1875;
															goto BgL_zc3anonymousza31911ze3z83_823;
														}
													}
											}
										}
									}
								}
							}
						else
							{	/* Llib/tvector.scm 192 */
								return
									BGl_errorz00zz__errorz00(BGl_string2219z00zz__tvectorz00,
									BGl_string2215z00zz__tvectorz00, BgL_idz00_30);
							}
					}
				else
					{	/* Llib/tvector.scm 188 */
						return
							BGl_errorz00zz__errorz00(BGl_string2219z00zz__tvectorz00,
							BGl_string2216z00zz__tvectorz00, BgL_idz00_30);
					}
			}
		}
	}



/* _vector->tvector */
	obj_t BGl__vectorzd2ze3tvectorz31zz__tvectorz00(obj_t BgL_envz00_1650,
		obj_t BgL_idz00_1651, obj_t BgL_vz00_1652)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 186 */
			{	/* Llib/tvector.scm 187 */
				obj_t BgL_auxz00_1886;

				obj_t BgL_auxz00_1879;

				if (VECTORP(BgL_vz00_1652))
					{	/* Llib/tvector.scm 187 */
						BgL_auxz00_1886 = BgL_vz00_1652;
					}
				else
					{
						obj_t BgL_auxz00_1889;

						BgL_auxz00_1889 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
							BINT(((long) 7562)), BGl_string2220z00zz__tvectorz00,
							BGl_string2221z00zz__tvectorz00, BgL_vz00_1652);
						FAILURE(BgL_auxz00_1889, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_idz00_1651))
					{	/* Llib/tvector.scm 187 */
						BgL_auxz00_1879 = BgL_idz00_1651;
					}
				else
					{
						obj_t BgL_auxz00_1882;

						BgL_auxz00_1882 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
							BINT(((long) 7562)), BGl_string2220z00zz__tvectorz00,
							BGl_string2203z00zz__tvectorz00, BgL_idz00_1651);
						FAILURE(BgL_auxz00_1882, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2ze3tvectorz31zz__tvectorz00(BgL_auxz00_1879,
					BgL_auxz00_1886);
			}
		}
	}



/* tvector->vector */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t
		BgL_tvz00_32)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 208 */
			{	/* Llib/tvector.scm 209 */
				obj_t BgL_descrz00_828;

				BgL_descrz00_828 = TVECTOR_DESCR(BgL_tvz00_32);
				{	/* Llib/tvector.scm 210 */
					obj_t BgL_refz00_830;

					BgL_refz00_830 = STRUCT_REF(BgL_descrz00_828, (int) (((long) 2)));
					if (PROCEDUREP(BgL_refz00_830))
						{	/* Llib/tvector.scm 216 */
							int BgL_lenz00_832;

							BgL_lenz00_832 = TVECTOR_LENGTH(BgL_tvz00_32);
							{	/* Llib/tvector.scm 216 */
								obj_t BgL_vecz00_833;

								BgL_vecz00_833 = create_vector(BgL_lenz00_832);
								{	/* Llib/tvector.scm 217 */

									{	/* Llib/tvector.scm 218 */
										long BgL_g1826z00_834;

										BgL_g1826z00_834 = ((long) (BgL_lenz00_832) - ((long) 1));
										{
											long BgL_iz00_836;

											BgL_iz00_836 = BgL_g1826z00_834;
										BgL_zc3anonymousza31917ze3z83_837:
											if ((BgL_iz00_836 == ((long) -1)))
												{	/* Llib/tvector.scm 219 */
													return BgL_vecz00_833;
												}
											else
												{	/* Llib/tvector.scm 219 */
													{	/* Llib/tvector.scm 222 */
														obj_t BgL_arg1919z00_839;

														BgL_arg1919z00_839 =
															PROCEDURE_ENTRY(BgL_refz00_830) (BgL_refz00_830,
															BgL_tvz00_32, BINT(BgL_iz00_836), BEOA);
														VECTOR_SET(BgL_vecz00_833, (int) (BgL_iz00_836),
															BgL_arg1919z00_839);
													}
													{
														long BgL_iz00_1910;

														BgL_iz00_1910 = (BgL_iz00_836 - ((long) 1));
														BgL_iz00_836 = BgL_iz00_1910;
														goto BgL_zc3anonymousza31917ze3z83_837;
													}
												}
										}
									}
								}
							}
						}
					else
						{	/* Llib/tvector.scm 212 */
							return
								BGl_errorz00zz__errorz00(BGl_string2222z00zz__tvectorz00,
								BGl_string2215z00zz__tvectorz00, STRUCT_REF(BgL_descrz00_828,
									(int) (((long) 0))));
		}}}}
	}



/* _tvector->vector */
	obj_t BGl__tvectorzd2ze3vectorz31zz__tvectorz00(obj_t BgL_envz00_1653,
		obj_t BgL_tvz00_1654)
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 208 */
			{	/* Llib/tvector.scm 209 */
				obj_t BgL_auxz00_1915;

				if (TVECTORP(BgL_tvz00_1654))
					{	/* Llib/tvector.scm 209 */
						BgL_auxz00_1915 = BgL_tvz00_1654;
					}
				else
					{
						obj_t BgL_auxz00_1918;

						BgL_auxz00_1918 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2198z00zz__tvectorz00,
							BINT(((long) 8355)), BGl_string2223z00zz__tvectorz00,
							BGl_string2200z00zz__tvectorz00, BgL_tvz00_1654);
						FAILURE(BgL_auxz00_1918, BFALSE, BFALSE);
					}
				return BGl_tvectorzd2ze3vectorz31zz__tvectorz00(BgL_auxz00_1915);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__tvectorz00()
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__tvectorz00()
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__tvectorz00()
	{
		AN_OBJECT;
		{	/* Llib/tvector.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2224z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string2224z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string2224z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2224z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2224z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2224z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2224z00zz__tvectorz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2224z00zz__tvectorz00));
		}
	}

#ifdef __cplusplus
}
#endif
