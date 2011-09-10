/*===========================================================================*/
/*   (Llib/struct.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/struct.scm -indent -o objs/obj_u/Llib/struct.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__recordzf3zf3zz__structurez00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2structzd2zz__structurez00(obj_t, int,
		obj_t);
	extern long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_recordzf3zf3zz__structurez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2setz12zc0zz__structurez00(obj_t, int,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__structurez00();
	static obj_t BGl__structzd2lengthzd2zz__structurez00(obj_t, obj_t);
	static obj_t BGl__structzf3zf3zz__structurez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2keyzd2setz12z12zz__structurez00(obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_structzf3zf3zz__structurez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3structz31zz__structurez00(obj_t);
	static obj_t BGl__makezd2structzd2zz__structurez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__structurez00 = BUNSPEC;
	static obj_t BGl__structzd2keyzd2zz__structurez00(obj_t, obj_t);
	static obj_t BGl__structzd2setz12zc0zz__structurez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__structurez00();
	extern obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__structzd2refzd2zz__structurez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2updatez12zc0zz__structurez00(obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__structzd2ze3listz31zz__structurez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2keyzd2zz__structurez00(obj_t);
	static obj_t BGl_symbol1477z00zz__structurez00 = BUNSPEC;
	static obj_t BGl__structzd2updatez12zc0zz__structurez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2refzd2zz__structurez00(obj_t, int);
	BGL_EXPORTED_DECL int BGl_structzd2lengthzd2zz__structurez00(obj_t);
	static obj_t BGl__listzd2ze3structz31zz__structurez00(obj_t, obj_t);
	static obj_t BGl__structzd2keyzd2setz12z12zz__structurez00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2ze3listzd2envze3zz__structurez00,
		BgL_bgl__structza7d2za7e3lis1484z00,
		BGl__structzd2ze3listz31zz__structurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3structzd2envze3zz__structurez00,
		BgL_bgl__listza7d2za7e3struc1485z00,
		BGl__listzd2ze3structz31zz__structurez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzf3zd2envz21zz__structurez00,
		BgL_bgl__structza7f3za7f3za7za7_1486z00, BGl__structzf3zf3zz__structurez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_recordzf3zd2envz21zz__structurez00,
		BgL_bgl__recordza7f3za7f3za7za7_1487z00, BGl__recordzf3zf3zz__structurez00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1463z00zz__structurez00,
		BgL_bgl_string1463za700za7za7_1488za7,
		"/tmp/bigloo/runtime/Llib/struct.scm", 35);
	      DEFINE_STRING(BGl_string1464z00zz__structurez00,
		BgL_bgl_string1464za700za7za7_1489za7, "_make-struct", 12);
	      DEFINE_STRING(BGl_string1465z00zz__structurez00,
		BgL_bgl_string1465za700za7za7_1490za7, "symbol", 6);
	      DEFINE_STRING(BGl_string1466z00zz__structurez00,
		BgL_bgl_string1466za700za7za7_1491za7, "int", 3);
	      DEFINE_STRING(BGl_string1467z00zz__structurez00,
		BgL_bgl_string1467za700za7za7_1492za7, "_struct-key", 11);
	      DEFINE_STRING(BGl_string1468z00zz__structurez00,
		BgL_bgl_string1468za700za7za7_1493za7, "struct", 6);
	      DEFINE_STRING(BGl_string1470z00zz__structurez00,
		BgL_bgl_string1470za700za7za7_1494za7, "_struct-length", 14);
	      DEFINE_STRING(BGl_string1469z00zz__structurez00,
		BgL_bgl_string1469za700za7za7_1495za7, "_struct-key-set!", 16);
	      DEFINE_STRING(BGl_string1471z00zz__structurez00,
		BgL_bgl_string1471za700za7za7_1496za7, "_struct-ref", 11);
	      DEFINE_STRING(BGl_string1472z00zz__structurez00,
		BgL_bgl_string1472za700za7za7_1497za7, "_struct-set!", 12);
	      DEFINE_STRING(BGl_string1473z00zz__structurez00,
		BgL_bgl_string1473za700za7za7_1498za7, "struct-update!", 14);
	      DEFINE_STRING(BGl_string1474z00zz__structurez00,
		BgL_bgl_string1474za700za7za7_1499za7, "Incompatible structures", 23);
	      DEFINE_STRING(BGl_string1475z00zz__structurez00,
		BgL_bgl_string1475za700za7za7_1500za7, "_struct-update!", 15);
	      DEFINE_STRING(BGl_string1476z00zz__structurez00,
		BgL_bgl_string1476za700za7za7_1501za7, "_struct->list", 13);
	      DEFINE_STRING(BGl_string1478z00zz__structurez00,
		BgL_bgl_string1478za700za7za7_1502za7, "list->struct", 12);
	      DEFINE_STRING(BGl_string1480z00zz__structurez00,
		BgL_bgl_string1480za700za7za7_1503za7, "_list->struct", 13);
	      DEFINE_STRING(BGl_string1479z00zz__structurez00,
		BgL_bgl_string1479za700za7za7_1504za7, "Illegal struct key", 18);
	      DEFINE_STRING(BGl_string1481z00zz__structurez00,
		BgL_bgl_string1481za700za7za7_1505za7, "pair", 4);
	      DEFINE_STRING(BGl_string1482z00zz__structurez00,
		BgL_bgl_string1482za700za7za7_1506za7, "__structure", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2refzd2envz00zz__structurez00,
		BgL_bgl__structza7d2refza7d21507z00, BGl__structzd2refzd2zz__structurez00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2structzd2envz00zz__structurez00,
		BgL_bgl__makeza7d2structza7d1508z00, BGl__makezd2structzd2zz__structurez00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2lengthzd2envz00zz__structurez00,
		BgL_bgl__structza7d2length1509za7, BGl__structzd2lengthzd2zz__structurez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2updatez12zd2envz12zz__structurez00,
		BgL_bgl__structza7d2update1510za7,
		BGl__structzd2updatez12zc0zz__structurez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2keyzd2setz12zd2envzc0zz__structurez00,
		BgL_bgl__structza7d2keyza7d21511z00,
		BGl__structzd2keyzd2setz12z12zz__structurez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2keyzd2envz00zz__structurez00,
		BgL_bgl__structza7d2keyza7d21512z00, BGl__structzd2keyzd2zz__structurez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2setz12zd2envz12zz__structurez00,
		BgL_bgl__structza7d2setza7121513z00,
		BGl__structzd2setz12zc0zz__structurez00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long
		BgL_checksumz00_932, char *BgL_fromz00_933)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__structurez00))
				{
					BGl_requirezd2initializa7ationz75zz__structurez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__structurez00();
					BGl_importedzd2moduleszd2initz00zz__structurez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__structurez00()
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 18 */
			return (BGl_symbol1477z00zz__structurez00 =
				bstring_to_symbol(BGl_string1478z00zz__structurez00), BUNSPEC);
		}
	}



/* make-struct */
	BGL_EXPORTED_DEF obj_t BGl_makezd2structzd2zz__structurez00(obj_t
		BgL_keyz00_1, int BgL_lenz00_2, obj_t BgL_initz00_3)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 122 */
			return make_struct(BgL_keyz00_1, BgL_lenz00_2, BgL_initz00_3);
		}
	}



/* _make-struct */
	obj_t BGl__makezd2structzd2zz__structurez00(obj_t BgL_envz00_860,
		obj_t BgL_keyz00_861, obj_t BgL_lenz00_862, obj_t BgL_initz00_863)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 122 */
			{	/* Llib/struct.scm 123 */
				obj_t BgL_keyz00_917;

				int BgL_lenz00_918;

				if (SYMBOLP(BgL_keyz00_861))
					{	/* Llib/struct.scm 123 */
						BgL_keyz00_917 = BgL_keyz00_861;
					}
				else
					{
						obj_t BgL_auxz00_943;

						BgL_auxz00_943 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 5120)), BGl_string1464z00zz__structurez00,
							BGl_string1465z00zz__structurez00, BgL_keyz00_861);
						FAILURE(BgL_auxz00_943, BFALSE, BFALSE);
					}
				{	/* Llib/struct.scm 123 */
					obj_t BgL_auxz00_947;

					if (INTEGERP(BgL_lenz00_862))
						{	/* Llib/struct.scm 123 */
							BgL_auxz00_947 = BgL_lenz00_862;
						}
					else
						{
							obj_t BgL_auxz00_950;

							BgL_auxz00_950 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1463z00zz__structurez00, BINT(((long) 5120)),
								BGl_string1464z00zz__structurez00,
								BGl_string1466z00zz__structurez00, BgL_lenz00_862);
							FAILURE(BgL_auxz00_950, BFALSE, BFALSE);
						}
					BgL_lenz00_918 = CINT(BgL_auxz00_947);
				}
				return make_struct(BgL_keyz00_917, BgL_lenz00_918, BgL_initz00_863);
			}
		}
	}



/* struct? */
	BGL_EXPORTED_DEF bool_t BGl_structzf3zf3zz__structurez00(obj_t BgL_oz00_4)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 128 */
			return STRUCTP(BgL_oz00_4);
		}
	}



/* _struct? */
	obj_t BGl__structzf3zf3zz__structurez00(obj_t BgL_envz00_864,
		obj_t BgL_oz00_865)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 128 */
			return BBOOL(STRUCTP(BgL_oz00_865));
		}
	}



/* record? */
	BGL_EXPORTED_DEF bool_t BGl_recordzf3zf3zz__structurez00(obj_t BgL_oz00_5)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 134 */
			return STRUCTP(BgL_oz00_5);
		}
	}



/* _record? */
	obj_t BGl__recordzf3zf3zz__structurez00(obj_t BgL_envz00_866,
		obj_t BgL_oz00_867)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 134 */
			return BBOOL(STRUCTP(BgL_oz00_867));
		}
	}



/* struct-key */
	BGL_EXPORTED_DEF obj_t BGl_structzd2keyzd2zz__structurez00(obj_t BgL_sz00_6)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 140 */
			return STRUCT_KEY(BgL_sz00_6);
		}
	}



/* _struct-key */
	obj_t BGl__structzd2keyzd2zz__structurez00(obj_t BgL_envz00_868,
		obj_t BgL_sz00_869)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 140 */
			{	/* Llib/struct.scm 141 */
				obj_t BgL_res1483z00_923;

				{	/* Llib/struct.scm 141 */
					obj_t BgL_sz00_922;

					if (STRUCTP(BgL_sz00_869))
						{	/* Llib/struct.scm 141 */
							BgL_sz00_922 = BgL_sz00_869;
						}
					else
						{
							obj_t BgL_auxz00_965;

							BgL_auxz00_965 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1463z00zz__structurez00, BINT(((long) 5942)),
								BGl_string1467z00zz__structurez00,
								BGl_string1468z00zz__structurez00, BgL_sz00_869);
							FAILURE(BgL_auxz00_965, BFALSE, BFALSE);
						}
					BgL_res1483z00_923 = STRUCT_KEY(BgL_sz00_922);
				}
				return BgL_res1483z00_923;
			}
		}
	}



/* struct-key-set! */
	BGL_EXPORTED_DEF obj_t BGl_structzd2keyzd2setz12z12zz__structurez00(obj_t
		BgL_sz00_7, obj_t BgL_kz00_8)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 146 */
			return STRUCT_KEY_SET(BgL_sz00_7, BgL_kz00_8);
		}
	}



/* _struct-key-set! */
	obj_t BGl__structzd2keyzd2setz12z12zz__structurez00(obj_t BgL_envz00_870,
		obj_t BgL_sz00_871, obj_t BgL_kz00_872)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 146 */
			{	/* Llib/struct.scm 147 */
				obj_t BgL_sz00_924;

				obj_t BgL_kz00_925;

				if (STRUCTP(BgL_sz00_871))
					{	/* Llib/struct.scm 147 */
						BgL_sz00_924 = BgL_sz00_871;
					}
				else
					{
						obj_t BgL_auxz00_973;

						BgL_auxz00_973 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 6223)), BGl_string1469z00zz__structurez00,
							BGl_string1468z00zz__structurez00, BgL_sz00_871);
						FAILURE(BgL_auxz00_973, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_kz00_872))
					{	/* Llib/struct.scm 147 */
						BgL_kz00_925 = BgL_kz00_872;
					}
				else
					{
						obj_t BgL_auxz00_979;

						BgL_auxz00_979 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 6223)), BGl_string1469z00zz__structurez00,
							BGl_string1465z00zz__structurez00, BgL_kz00_872);
						FAILURE(BgL_auxz00_979, BFALSE, BFALSE);
					}
				return STRUCT_KEY_SET(BgL_sz00_924, BgL_kz00_925);
			}
		}
	}



/* struct-length */
	BGL_EXPORTED_DEF int BGl_structzd2lengthzd2zz__structurez00(obj_t BgL_sz00_9)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 152 */
			return STRUCT_LENGTH(BgL_sz00_9);
		}
	}



/* _struct-length */
	obj_t BGl__structzd2lengthzd2zz__structurez00(obj_t BgL_envz00_873,
		obj_t BgL_sz00_874)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 152 */
			{	/* Llib/struct.scm 153 */
				int BgL_auxz00_985;

				{	/* Llib/struct.scm 153 */
					obj_t BgL_sz00_926;

					if (STRUCTP(BgL_sz00_874))
						{	/* Llib/struct.scm 153 */
							BgL_sz00_926 = BgL_sz00_874;
						}
					else
						{
							obj_t BgL_auxz00_988;

							BgL_auxz00_988 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1463z00zz__structurez00, BINT(((long) 6508)),
								BGl_string1470z00zz__structurez00,
								BGl_string1468z00zz__structurez00, BgL_sz00_874);
							FAILURE(BgL_auxz00_988, BFALSE, BFALSE);
						}
					BgL_auxz00_985 = STRUCT_LENGTH(BgL_sz00_926);
				}
				return BINT(BgL_auxz00_985);
			}
		}
	}



/* struct-ref */
	BGL_EXPORTED_DEF obj_t BGl_structzd2refzd2zz__structurez00(obj_t BgL_sz00_10,
		int BgL_kz00_11)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 158 */
			return STRUCT_REF(BgL_sz00_10, BgL_kz00_11);
		}
	}



/* _struct-ref */
	obj_t BGl__structzd2refzd2zz__structurez00(obj_t BgL_envz00_875,
		obj_t BgL_sz00_876, obj_t BgL_kz00_877)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 158 */
			{	/* Llib/struct.scm 159 */
				obj_t BgL_sz00_927;

				int BgL_kz00_928;

				if (STRUCTP(BgL_sz00_876))
					{	/* Llib/struct.scm 159 */
						BgL_sz00_927 = BgL_sz00_876;
					}
				else
					{
						obj_t BgL_auxz00_997;

						BgL_auxz00_997 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 6791)), BGl_string1471z00zz__structurez00,
							BGl_string1468z00zz__structurez00, BgL_sz00_876);
						FAILURE(BgL_auxz00_997, BFALSE, BFALSE);
					}
				{	/* Llib/struct.scm 159 */
					obj_t BgL_auxz00_1001;

					if (INTEGERP(BgL_kz00_877))
						{	/* Llib/struct.scm 159 */
							BgL_auxz00_1001 = BgL_kz00_877;
						}
					else
						{
							obj_t BgL_auxz00_1004;

							BgL_auxz00_1004 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1463z00zz__structurez00, BINT(((long) 6791)),
								BGl_string1471z00zz__structurez00,
								BGl_string1466z00zz__structurez00, BgL_kz00_877);
							FAILURE(BgL_auxz00_1004, BFALSE, BFALSE);
						}
					BgL_kz00_928 = CINT(BgL_auxz00_1001);
				}
				return STRUCT_REF(BgL_sz00_927, BgL_kz00_928);
			}
		}
	}



/* struct-set! */
	BGL_EXPORTED_DEF obj_t BGl_structzd2setz12zc0zz__structurez00(obj_t
		BgL_sz00_12, int BgL_kz00_13, obj_t BgL_oz00_14)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 164 */
			return STRUCT_SET(BgL_sz00_12, BgL_kz00_13, BgL_oz00_14);
		}
	}



/* _struct-set! */
	obj_t BGl__structzd2setz12zc0zz__structurez00(obj_t BgL_envz00_878,
		obj_t BgL_sz00_879, obj_t BgL_kz00_880, obj_t BgL_oz00_881)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 164 */
			{	/* Llib/struct.scm 165 */
				obj_t BgL_sz00_929;

				int BgL_kz00_930;

				if (STRUCTP(BgL_sz00_879))
					{	/* Llib/struct.scm 165 */
						BgL_sz00_929 = BgL_sz00_879;
					}
				else
					{
						obj_t BgL_auxz00_1013;

						BgL_auxz00_1013 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 7073)), BGl_string1472z00zz__structurez00,
							BGl_string1468z00zz__structurez00, BgL_sz00_879);
						FAILURE(BgL_auxz00_1013, BFALSE, BFALSE);
					}
				{	/* Llib/struct.scm 165 */
					obj_t BgL_auxz00_1017;

					if (INTEGERP(BgL_kz00_880))
						{	/* Llib/struct.scm 165 */
							BgL_auxz00_1017 = BgL_kz00_880;
						}
					else
						{
							obj_t BgL_auxz00_1020;

							BgL_auxz00_1020 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1463z00zz__structurez00, BINT(((long) 7073)),
								BGl_string1472z00zz__structurez00,
								BGl_string1466z00zz__structurez00, BgL_kz00_880);
							FAILURE(BgL_auxz00_1020, BFALSE, BFALSE);
						}
					BgL_kz00_930 = CINT(BgL_auxz00_1017);
				}
				return STRUCT_SET(BgL_sz00_929, BgL_kz00_930, BgL_oz00_881);
			}
		}
	}



/* struct-update! */
	BGL_EXPORTED_DEF obj_t BGl_structzd2updatez12zc0zz__structurez00(obj_t
		BgL_dstz00_15, obj_t BgL_srcz00_16)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 170 */
			{	/* Llib/struct.scm 171 */
				bool_t BgL_testz00_1026;

				if ((STRUCT_KEY(BgL_dstz00_15) == STRUCT_KEY(BgL_srcz00_16)))
					{	/* Llib/struct.scm 171 */
						BgL_testz00_1026 =
							(
							(long) (STRUCT_LENGTH(BgL_dstz00_15)) ==
							(long) (STRUCT_LENGTH(BgL_srcz00_16)));
					}
				else
					{	/* Llib/struct.scm 171 */
						BgL_testz00_1026 = ((bool_t) 0);
					}
				if (BgL_testz00_1026)
					{	/* Llib/struct.scm 173 */
						long BgL_g1094z00_417;

						BgL_g1094z00_417 =
							((long) (STRUCT_LENGTH(BgL_dstz00_15)) - ((long) 1));
						{
							long BgL_iz00_419;

							BgL_iz00_419 = BgL_g1094z00_417;
						BgL_zc3anonymousza31123ze3z83_420:
							if ((BgL_iz00_419 == ((long) -1)))
								{	/* Llib/struct.scm 174 */
									return BgL_dstz00_15;
								}
							else
								{	/* Llib/struct.scm 174 */
									{	/* Llib/struct.scm 177 */
										obj_t BgL_auxz00_1043;

										int BgL_auxz00_1041;

										BgL_auxz00_1043 =
											STRUCT_REF(BgL_srcz00_16, (int) (BgL_iz00_419));
										BgL_auxz00_1041 = (int) (BgL_iz00_419);
										STRUCT_SET(BgL_dstz00_15, BgL_auxz00_1041, BgL_auxz00_1043);
									}
									{
										long BgL_iz00_1047;

										BgL_iz00_1047 = (BgL_iz00_419 - ((long) 1));
										BgL_iz00_419 = BgL_iz00_1047;
										goto BgL_zc3anonymousza31123ze3z83_420;
									}
								}
						}
					}
				else
					{	/* Llib/struct.scm 179 */
						obj_t BgL_arg1237z00_429;

						{	/* Llib/struct.scm 179 */
							obj_t BgL_list1238z00_430;

							{	/* Llib/struct.scm 179 */
								obj_t BgL_arg1239z00_431;

								BgL_arg1239z00_431 = MAKE_PAIR(BgL_srcz00_16, BNIL);
								BgL_list1238z00_430 =
									MAKE_PAIR(BgL_dstz00_15, BgL_arg1239z00_431);
							}
							BgL_arg1237z00_429 = BgL_list1238z00_430;
						}
						return
							BGl_errorz00zz__errorz00(BGl_string1473z00zz__structurez00,
							BGl_string1474z00zz__structurez00, BgL_arg1237z00_429);
					}
			}
		}
	}



/* _struct-update! */
	obj_t BGl__structzd2updatez12zc0zz__structurez00(obj_t BgL_envz00_882,
		obj_t BgL_dstz00_883, obj_t BgL_srcz00_884)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 170 */
			{	/* Llib/struct.scm 171 */
				obj_t BgL_auxz00_1059;

				obj_t BgL_auxz00_1052;

				if (STRUCTP(BgL_srcz00_884))
					{	/* Llib/struct.scm 171 */
						BgL_auxz00_1059 = BgL_srcz00_884;
					}
				else
					{
						obj_t BgL_auxz00_1062;

						BgL_auxz00_1062 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 7355)), BGl_string1475z00zz__structurez00,
							BGl_string1468z00zz__structurez00, BgL_srcz00_884);
						FAILURE(BgL_auxz00_1062, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_dstz00_883))
					{	/* Llib/struct.scm 171 */
						BgL_auxz00_1052 = BgL_dstz00_883;
					}
				else
					{
						obj_t BgL_auxz00_1055;

						BgL_auxz00_1055 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 7355)), BGl_string1475z00zz__structurez00,
							BGl_string1468z00zz__structurez00, BgL_dstz00_883);
						FAILURE(BgL_auxz00_1055, BFALSE, BFALSE);
					}
				return
					BGl_structzd2updatez12zc0zz__structurez00(BgL_auxz00_1052,
					BgL_auxz00_1059);
			}
		}
	}



/* struct->list */
	BGL_EXPORTED_DEF obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t
		BgL_structz00_17)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 184 */
			{	/* Llib/struct.scm 185 */
				long BgL_g1095z00_437;

				BgL_g1095z00_437 =
					((long) (STRUCT_LENGTH(BgL_structz00_17)) - ((long) 1));
				{
					long BgL_iz00_676;

					obj_t BgL_rz00_677;

					BgL_iz00_676 = BgL_g1095z00_437;
					BgL_rz00_677 = BNIL;
				BgL_loopz00_675:
					if ((BgL_iz00_676 == ((long) -1)))
						{	/* Llib/struct.scm 185 */
							return MAKE_PAIR(STRUCT_KEY(BgL_structz00_17), BgL_rz00_677);
						}
					else
						{	/* Llib/struct.scm 185 */
							long BgL_arg1248z00_685;

							obj_t BgL_arg1249z00_686;

							BgL_arg1248z00_685 = (BgL_iz00_676 - ((long) 1));
							BgL_arg1249z00_686 =
								MAKE_PAIR(STRUCT_REF(BgL_structz00_17,
									(int) (BgL_iz00_676)), BgL_rz00_677);
							{
								obj_t BgL_rz00_1079;

								long BgL_iz00_1078;

								BgL_iz00_1078 = BgL_arg1248z00_685;
								BgL_rz00_1079 = BgL_arg1249z00_686;
								BgL_rz00_677 = BgL_rz00_1079;
								BgL_iz00_676 = BgL_iz00_1078;
								goto BgL_loopz00_675;
							}
						}
				}
			}
		}
	}



/* _struct->list */
	obj_t BGl__structzd2ze3listz31zz__structurez00(obj_t BgL_envz00_885,
		obj_t BgL_structz00_886)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 184 */
			{	/* Llib/struct.scm 185 */
				obj_t BgL_auxz00_1080;

				if (STRUCTP(BgL_structz00_886))
					{	/* Llib/struct.scm 185 */
						BgL_auxz00_1080 = BgL_structz00_886;
					}
				else
					{
						obj_t BgL_auxz00_1083;

						BgL_auxz00_1083 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 7946)), BGl_string1476z00zz__structurez00,
							BGl_string1468z00zz__structurez00, BgL_structz00_886);
						FAILURE(BgL_auxz00_1083, BFALSE, BFALSE);
					}
				return BGl_structzd2ze3listz31zz__structurez00(BgL_auxz00_1080);
			}
		}
	}



/* list->struct */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3structz31zz__structurez00(obj_t
		BgL_lstz00_18)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 194 */
			{	/* Llib/struct.scm 198 */
				bool_t BgL_testz00_1088;

				{	/* Llib/struct.scm 198 */
					obj_t BgL_auxz00_1089;

					BgL_auxz00_1089 = CAR(BgL_lstz00_18);
					BgL_testz00_1088 = SYMBOLP(BgL_auxz00_1089);
				}
				if (BgL_testz00_1088)
					{	/* Llib/struct.scm 201 */
						long BgL_lenz00_453;

						BgL_lenz00_453 = bgl_list_length(CDR(BgL_lstz00_18));
						{	/* Llib/struct.scm 201 */
							obj_t BgL_structz00_454;

							BgL_structz00_454 =
								make_struct(CAR(BgL_lstz00_18),
								(int) (BgL_lenz00_453), BUNSPEC);
							{	/* Llib/struct.scm 202 */

								{	/* Llib/struct.scm 203 */
									obj_t BgL_g1097z00_455;

									BgL_g1097z00_455 = CDR(BgL_lstz00_18);
									{
										long BgL_iz00_734;

										obj_t BgL_lz00_735;

										BgL_iz00_734 = ((long) 0);
										BgL_lz00_735 = BgL_g1097z00_455;
									BgL_loopz00_733:
										if (NULLP(BgL_lz00_735))
											{	/* Llib/struct.scm 203 */
												return BgL_structz00_454;
											}
										else
											{	/* Llib/struct.scm 203 */
												{	/* Llib/struct.scm 203 */
													obj_t BgL_auxz00_1102;

													int BgL_auxz00_1100;

													BgL_auxz00_1102 = CAR(BgL_lz00_735);
													BgL_auxz00_1100 = (int) (BgL_iz00_734);
													STRUCT_SET(BgL_structz00_454, BgL_auxz00_1100,
														BgL_auxz00_1102);
												}
												{
													obj_t BgL_lz00_1107;

													long BgL_iz00_1105;

													BgL_iz00_1105 = (BgL_iz00_734 + ((long) 1));
													BgL_lz00_1107 = CDR(BgL_lz00_735);
													BgL_lz00_735 = BgL_lz00_1107;
													BgL_iz00_734 = BgL_iz00_1105;
													goto BgL_loopz00_733;
												}
											}
									}
								}
							}
						}
					}
				else
					{	/* Llib/struct.scm 198 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol1477z00zz__structurez00,
							BGl_string1479z00zz__structurez00, CAR(BgL_lstz00_18));
					}
			}
		}
	}



/* _list->struct */
	obj_t BGl__listzd2ze3structz31zz__structurez00(obj_t BgL_envz00_887,
		obj_t BgL_lstz00_888)
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 194 */
			{	/* Llib/struct.scm 196 */
				obj_t BgL_auxz00_1111;

				if (PAIRP(BgL_lstz00_888))
					{	/* Llib/struct.scm 196 */
						BgL_auxz00_1111 = BgL_lstz00_888;
					}
				else
					{
						obj_t BgL_auxz00_1114;

						BgL_auxz00_1114 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1463z00zz__structurez00,
							BINT(((long) 8381)), BGl_string1480z00zz__structurez00,
							BGl_string1481z00zz__structurez00, BgL_lstz00_888);
						FAILURE(BgL_auxz00_1114, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3structz31zz__structurez00(BgL_auxz00_1111);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__structurez00()
	{
		AN_OBJECT;
		{	/* Llib/struct.scm 18 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1482z00zz__structurez00));
		}
	}

#ifdef __cplusplus
}
#endif
