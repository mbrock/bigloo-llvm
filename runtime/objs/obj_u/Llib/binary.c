/*===========================================================================*/
/*   (Llib/binary.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/binary.scm -indent -o objs/obj_u/Llib/binary.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl__appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t,
		obj_t);
	extern int bgl_input_fill_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inputzd2stringzd2zz__binaryz00(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_inputzd2objzd2zz__binaryz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__binaryz00 = BUNSPEC;
	extern int bgl_output_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_binaryzd2portzf3z21zz__binaryz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2stringzd2zz__binaryz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__binaryz00();
	static obj_t BGl__inputzd2fillzd2stringz12z12zz__binaryz00(obj_t, obj_t,
		obj_t);
	extern obj_t output_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_inputzd2fillzd2stringz12z12zz__binaryz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_closezd2binaryzd2portz00zz__binaryz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__binaryz00();
	static obj_t BGl__outputzd2objzd2zz__binaryz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__closezd2binaryzd2portz00zz__binaryz00(obj_t, obj_t);
	extern obj_t close_binary_port(obj_t);
	static obj_t BGl__inputzd2charzd2zz__binaryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2charzd2zz__binaryz00(obj_t,
		unsigned char);
	extern obj_t open_output_binary_file(obj_t);
	static obj_t BGl__openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl__inputzd2objzd2zz__binaryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_flushzd2binaryzd2portz00zz__binaryz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2objzd2zz__binaryz00(obj_t, obj_t);
	extern obj_t bgl_input_string(obj_t, int);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t input_obj(obj_t);
	extern obj_t append_output_binary_file(obj_t);
	static obj_t BGl__flushzd2binaryzd2portz00zz__binaryz00(obj_t, obj_t);
	static obj_t BGl__openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t, obj_t);
	extern obj_t bgl_flush_binary_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inputzd2charzd2zz__binaryz00(obj_t);
	static obj_t BGl__outputzd2charzd2zz__binaryz00(obj_t, obj_t, obj_t);
	extern obj_t open_input_binary_file(obj_t);
	static obj_t BGl__inputzd2stringzd2zz__binaryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__binaryz00();
	static obj_t BGl__binaryzd2portzf3z21zz__binaryz00(obj_t, obj_t);
	static obj_t BGl__outputzd2stringzd2zz__binaryz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_binaryzd2portzf3zd2envzf3zz__binaryz00,
		BgL_bgl__binaryza7d2portza7f2197z00, BGl__binaryzd2portzf3z21zz__binaryz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inputzd2charzd2envz00zz__binaryz00,
		BgL_bgl__inputza7d2charza7d22198z00, BGl__inputzd2charzd2zz__binaryz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_closezd2binaryzd2portzd2envzd2zz__binaryz00,
		BgL_bgl__closeza7d2binaryza72199z00,
		BGl__closezd2binaryzd2portz00zz__binaryz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_outputzd2stringzd2envz00zz__binaryz00,
		BgL_bgl__outputza7d2string2200za7, BGl__outputzd2stringzd2zz__binaryz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_flushzd2binaryzd2portzd2envzd2zz__binaryz00,
		BgL_bgl__flushza7d2binaryza72201z00,
		BGl__flushzd2binaryzd2portz00zz__binaryz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inputzd2objzd2envz00zz__binaryz00,
		BgL_bgl__inputza7d2objza7d2za72202za7, BGl__inputzd2objzd2zz__binaryz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2outputzd2binaryzd2filezd2envz00zz__binaryz00,
		BgL_bgl__appendza7d2output2203za7,
		BGl__appendzd2outputzd2binaryzd2filezd2zz__binaryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2fillzd2stringz12zd2envzc0zz__binaryz00,
		BgL_bgl__inputza7d2fillza7d22204z00,
		BGl__inputzd2fillzd2stringz12z12zz__binaryz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2outputzd2binaryzd2filezd2envz00zz__binaryz00,
		BgL_bgl__openza7d2outputza7d2205z00,
		BGl__openzd2outputzd2binaryzd2filezd2zz__binaryz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_outputzd2objzd2envz00zz__binaryz00,
		BgL_bgl__outputza7d2objza7d22206z00, BGl__outputzd2objzd2zz__binaryz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_outputzd2charzd2envz00zz__binaryz00,
		BgL_bgl__outputza7d2charza7d2207z00, BGl__outputzd2charzd2zz__binaryz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inputzd2stringzd2envz00zz__binaryz00,
		BgL_bgl__inputza7d2stringza72208z00, BGl__inputzd2stringzd2zz__binaryz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2180z00zz__binaryz00,
		BgL_bgl_string2180za700za7za7_2209za7, "_open-output-binary-file", 24);
	      DEFINE_STRING(BGl_string2179z00zz__binaryz00,
		BgL_bgl_string2179za700za7za7_2210za7,
		"/tmp/bigloo/runtime/Llib/binary.scm", 35);
	      DEFINE_STRING(BGl_string2181z00zz__binaryz00,
		BgL_bgl_string2181za700za7za7_2211za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2182z00zz__binaryz00,
		BgL_bgl_string2182za700za7za7_2212za7, "_append-output-binary-file", 26);
	      DEFINE_STRING(BGl_string2183z00zz__binaryz00,
		BgL_bgl_string2183za700za7za7_2213za7, "_open-input-binary-file", 23);
	      DEFINE_STRING(BGl_string2184z00zz__binaryz00,
		BgL_bgl_string2184za700za7za7_2214za7, "_close-binary-port", 18);
	      DEFINE_STRING(BGl_string2185z00zz__binaryz00,
		BgL_bgl_string2185za700za7za7_2215za7, "binary-port", 11);
	      DEFINE_STRING(BGl_string2186z00zz__binaryz00,
		BgL_bgl_string2186za700za7za7_2216za7, "_flush-binary-port", 18);
	      DEFINE_STRING(BGl_string2187z00zz__binaryz00,
		BgL_bgl_string2187za700za7za7_2217za7, "_input-obj", 10);
	      DEFINE_STRING(BGl_string2188z00zz__binaryz00,
		BgL_bgl_string2188za700za7za7_2218za7, "_output-obj", 11);
	      DEFINE_STRING(BGl_string2190z00zz__binaryz00,
		BgL_bgl_string2190za700za7za7_2219za7, "char", 4);
	      DEFINE_STRING(BGl_string2189z00zz__binaryz00,
		BgL_bgl_string2189za700za7za7_2220za7, "_output-char", 12);
	      DEFINE_STRING(BGl_string2191z00zz__binaryz00,
		BgL_bgl_string2191za700za7za7_2221za7, "_input-char", 11);
	      DEFINE_STRING(BGl_string2192z00zz__binaryz00,
		BgL_bgl_string2192za700za7za7_2222za7, "_output-string", 14);
	      DEFINE_STRING(BGl_string2193z00zz__binaryz00,
		BgL_bgl_string2193za700za7za7_2223za7, "_input-string", 13);
	      DEFINE_STRING(BGl_string2194z00zz__binaryz00,
		BgL_bgl_string2194za700za7za7_2224za7, "int", 3);
	      DEFINE_STRING(BGl_string2195z00zz__binaryz00,
		BgL_bgl_string2195za700za7za7_2225za7, "_input-fill-string!", 19);
	      DEFINE_STRING(BGl_string2196z00zz__binaryz00,
		BgL_bgl_string2196za700za7za7_2226za7, "__binary", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2binaryzd2filezd2envz00zz__binaryz00,
		BgL_bgl__openza7d2inputza7d22227z00,
		BGl__openzd2inputzd2binaryzd2filezd2zz__binaryz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long
		BgL_checksumz00_1496, char *BgL_fromz00_1497)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__binaryz00))
				{
					BGl_requirezd2initializa7ationz75zz__binaryz00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__binaryz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* binary-port? */
	BGL_EXPORTED_DEF bool_t BGl_binaryzd2portzf3z21zz__binaryz00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 129 */
			return BINARY_PORTP(BgL_objz00_1);
		}
	}



/* _binary-port? */
	obj_t BGl__binaryzd2portzf3z21zz__binaryz00(obj_t BgL_envz00_1413,
		obj_t BgL_objz00_1414)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 129 */
			return BBOOL(BINARY_PORTP(BgL_objz00_1414));
		}
	}



/* open-output-binary-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t
		BgL_strz00_2)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 135 */
			return open_output_binary_file(BgL_strz00_2);
		}
	}



/* _open-output-binary-file */
	obj_t BGl__openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t
		BgL_envz00_1415, obj_t BgL_strz00_1416)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 135 */
			{	/* Llib/binary.scm 136 */
				obj_t BgL_strz00_1477;

				if (STRINGP(BgL_strz00_1416))
					{	/* Llib/binary.scm 136 */
						BgL_strz00_1477 = BgL_strz00_1416;
					}
				else
					{
						obj_t BgL_auxz00_1508;

						BgL_auxz00_1508 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 5342)), BGl_string2180z00zz__binaryz00,
							BGl_string2181z00zz__binaryz00, BgL_strz00_1416);
						FAILURE(BgL_auxz00_1508, BFALSE, BFALSE);
					}
				return open_output_binary_file(BgL_strz00_1477);
			}
		}
	}



/* append-output-binary-file */
	BGL_EXPORTED_DEF obj_t
		BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_strz00_3)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 141 */
			return append_output_binary_file(BgL_strz00_3);
		}
	}



/* _append-output-binary-file */
	obj_t BGl__appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t
		BgL_envz00_1417, obj_t BgL_strz00_1418)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 141 */
			{	/* Llib/binary.scm 142 */
				obj_t BgL_strz00_1478;

				if (STRINGP(BgL_strz00_1418))
					{	/* Llib/binary.scm 142 */
						BgL_strz00_1478 = BgL_strz00_1418;
					}
				else
					{
						obj_t BgL_auxz00_1516;

						BgL_auxz00_1516 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 5641)), BGl_string2182z00zz__binaryz00,
							BGl_string2181z00zz__binaryz00, BgL_strz00_1418);
						FAILURE(BgL_auxz00_1516, BFALSE, BFALSE);
					}
				return append_output_binary_file(BgL_strz00_1478);
			}
		}
	}



/* open-input-binary-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t
		BgL_strz00_4)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 147 */
			return open_input_binary_file(BgL_strz00_4);
		}
	}



/* _open-input-binary-file */
	obj_t BGl__openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_envz00_1419,
		obj_t BgL_strz00_1420)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 147 */
			{	/* Llib/binary.scm 148 */
				obj_t BgL_strz00_1479;

				if (STRINGP(BgL_strz00_1420))
					{	/* Llib/binary.scm 148 */
						BgL_strz00_1479 = BgL_strz00_1420;
					}
				else
					{
						obj_t BgL_auxz00_1524;

						BgL_auxz00_1524 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 5939)), BGl_string2183z00zz__binaryz00,
							BGl_string2181z00zz__binaryz00, BgL_strz00_1420);
						FAILURE(BgL_auxz00_1524, BFALSE, BFALSE);
					}
				return open_input_binary_file(BgL_strz00_1479);
			}
		}
	}



/* close-binary-port */
	BGL_EXPORTED_DEF obj_t BGl_closezd2binaryzd2portz00zz__binaryz00(obj_t
		BgL_portz00_5)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 153 */
			return close_binary_port(BgL_portz00_5);
		}
	}



/* _close-binary-port */
	obj_t BGl__closezd2binaryzd2portz00zz__binaryz00(obj_t BgL_envz00_1421,
		obj_t BgL_portz00_1422)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 153 */
			{	/* Llib/binary.scm 154 */
				obj_t BgL_portz00_1480;

				if (BINARY_PORTP(BgL_portz00_1422))
					{	/* Llib/binary.scm 154 */
						BgL_portz00_1480 = BgL_portz00_1422;
					}
				else
					{
						obj_t BgL_auxz00_1532;

						BgL_auxz00_1532 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 6237)), BGl_string2184z00zz__binaryz00,
							BGl_string2185z00zz__binaryz00, BgL_portz00_1422);
						FAILURE(BgL_auxz00_1532, BFALSE, BFALSE);
					}
				return close_binary_port(BgL_portz00_1480);
			}
		}
	}



/* flush-binary-port */
	BGL_EXPORTED_DEF obj_t BGl_flushzd2binaryzd2portz00zz__binaryz00(obj_t
		BgL_portz00_6)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 159 */
			return bgl_flush_binary_port(BgL_portz00_6);
		}
	}



/* _flush-binary-port */
	obj_t BGl__flushzd2binaryzd2portz00zz__binaryz00(obj_t BgL_envz00_1423,
		obj_t BgL_portz00_1424)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 159 */
			{	/* Llib/binary.scm 160 */
				obj_t BgL_portz00_1481;

				if (BINARY_PORTP(BgL_portz00_1424))
					{	/* Llib/binary.scm 160 */
						BgL_portz00_1481 = BgL_portz00_1424;
					}
				else
					{
						obj_t BgL_auxz00_1540;

						BgL_auxz00_1540 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 6531)), BGl_string2186z00zz__binaryz00,
							BGl_string2185z00zz__binaryz00, BgL_portz00_1424);
						FAILURE(BgL_auxz00_1540, BFALSE, BFALSE);
					}
				return bgl_flush_binary_port(BgL_portz00_1481);
			}
		}
	}



/* input-obj */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2objzd2zz__binaryz00(obj_t BgL_portz00_7)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 165 */
			return input_obj(BgL_portz00_7);
		}
	}



/* _input-obj */
	obj_t BGl__inputzd2objzd2zz__binaryz00(obj_t BgL_envz00_1425,
		obj_t BgL_portz00_1426)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 165 */
			{	/* Llib/binary.scm 166 */
				obj_t BgL_portz00_1482;

				if (BINARY_PORTP(BgL_portz00_1426))
					{	/* Llib/binary.scm 166 */
						BgL_portz00_1482 = BgL_portz00_1426;
					}
				else
					{
						obj_t BgL_auxz00_1548;

						BgL_auxz00_1548 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 6817)), BGl_string2187z00zz__binaryz00,
							BGl_string2185z00zz__binaryz00, BgL_portz00_1426);
						FAILURE(BgL_auxz00_1548, BFALSE, BFALSE);
					}
				return input_obj(BgL_portz00_1482);
			}
		}
	}



/* output-obj */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2objzd2zz__binaryz00(obj_t BgL_portz00_8,
		obj_t BgL_objz00_9)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 171 */
			return output_obj(BgL_portz00_8, BgL_objz00_9);
		}
	}



/* _output-obj */
	obj_t BGl__outputzd2objzd2zz__binaryz00(obj_t BgL_envz00_1427,
		obj_t BgL_portz00_1428, obj_t BgL_objz00_1429)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 171 */
			{	/* Llib/binary.scm 172 */
				obj_t BgL_portz00_1483;

				if (BINARY_PORTP(BgL_portz00_1428))
					{	/* Llib/binary.scm 172 */
						BgL_portz00_1483 = BgL_portz00_1428;
					}
				else
					{
						obj_t BgL_auxz00_1556;

						BgL_auxz00_1556 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 7100)), BGl_string2188z00zz__binaryz00,
							BGl_string2185z00zz__binaryz00, BgL_portz00_1428);
						FAILURE(BgL_auxz00_1556, BFALSE, BFALSE);
					}
				return output_obj(BgL_portz00_1483, BgL_objz00_1429);
			}
		}
	}



/* output-char */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2charzd2zz__binaryz00(obj_t BgL_portz00_10,
		unsigned char BgL_charz00_11)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 177 */
			return BGL_OUTPUT_CHAR(BgL_portz00_10, BgL_charz00_11);
		}
	}



/* _output-char */
	obj_t BGl__outputzd2charzd2zz__binaryz00(obj_t BgL_envz00_1430,
		obj_t BgL_portz00_1431, obj_t BgL_charz00_1432)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 177 */
			{	/* Llib/binary.scm 178 */
				obj_t BgL_portz00_1485;

				unsigned char BgL_charz00_1486;

				if (BINARY_PORTP(BgL_portz00_1431))
					{	/* Llib/binary.scm 178 */
						BgL_portz00_1485 = BgL_portz00_1431;
					}
				else
					{
						obj_t BgL_auxz00_1564;

						BgL_auxz00_1564 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 7395)), BGl_string2189z00zz__binaryz00,
							BGl_string2185z00zz__binaryz00, BgL_portz00_1431);
						FAILURE(BgL_auxz00_1564, BFALSE, BFALSE);
					}
				{	/* Llib/binary.scm 178 */
					obj_t BgL_auxz00_1568;

					if (CHARP(BgL_charz00_1432))
						{	/* Llib/binary.scm 178 */
							BgL_auxz00_1568 = BgL_charz00_1432;
						}
					else
						{
							obj_t BgL_auxz00_1571;

							BgL_auxz00_1571 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
								BINT(((long) 7395)), BGl_string2189z00zz__binaryz00,
								BGl_string2190z00zz__binaryz00, BgL_charz00_1432);
							FAILURE(BgL_auxz00_1571, BFALSE, BFALSE);
						}
					BgL_charz00_1486 = CCHAR(BgL_auxz00_1568);
				}
				return BGL_OUTPUT_CHAR(BgL_portz00_1485, BgL_charz00_1486);
			}
		}
	}



/* input-char */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2charzd2zz__binaryz00(obj_t BgL_portz00_12)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 183 */
			{	/* Llib/binary.scm 184 */
				int BgL_charz00_1487;

				BgL_charz00_1487 = BGL_INPUT_CHAR(BgL_portz00_12);
				if (BGL_INT_EOFP(BgL_charz00_1487))
					{	/* Llib/binary.scm 184 */
						return BEOF;
					}
				else
					{	/* Llib/binary.scm 184 */
						return BCHAR(((long) (BgL_charz00_1487)));
		}}}
	}



/* _input-char */
	obj_t BGl__inputzd2charzd2zz__binaryz00(obj_t BgL_envz00_1433,
		obj_t BgL_portz00_1434)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 183 */
			{	/* Llib/binary.scm 184 */
				obj_t BgL_portz00_1488;

				if (BINARY_PORTP(BgL_portz00_1434))
					{	/* Llib/binary.scm 184 */
						BgL_portz00_1488 = BgL_portz00_1434;
					}
				else
					{
						obj_t BgL_auxz00_1585;

						BgL_auxz00_1585 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 7681)), BGl_string2191z00zz__binaryz00,
							BGl_string2185z00zz__binaryz00, BgL_portz00_1434);
						FAILURE(BgL_auxz00_1585, BFALSE, BFALSE);
					}
				{	/* Llib/binary.scm 184 */
					int BgL_charz00_1489;

					BgL_charz00_1489 = BGL_INPUT_CHAR(BgL_portz00_1488);
					if (BGL_INT_EOFP(BgL_charz00_1489))
						{	/* Llib/binary.scm 184 */
							return BEOF;
						}
					else
						{	/* Llib/binary.scm 184 */
							return BCHAR(((long) (BgL_charz00_1489)));
		}}}}
	}



/* output-string */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2stringzd2zz__binaryz00(obj_t
		BgL_portz00_13, obj_t BgL_stringz00_14)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 192 */
			return BINT(bgl_output_string(BgL_portz00_13, BgL_stringz00_14));
		}
	}



/* _output-string */
	obj_t BGl__outputzd2stringzd2zz__binaryz00(obj_t BgL_envz00_1435,
		obj_t BgL_portz00_1436, obj_t BgL_stringz00_1437)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 192 */
			{	/* Llib/binary.scm 193 */
				obj_t BgL_portz00_1490;

				obj_t BgL_stringz00_1491;

				if (BINARY_PORTP(BgL_portz00_1436))
					{	/* Llib/binary.scm 193 */
						BgL_portz00_1490 = BgL_portz00_1436;
					}
				else
					{
						obj_t BgL_auxz00_1599;

						BgL_auxz00_1599 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 8047)), BGl_string2192z00zz__binaryz00,
							BGl_string2185z00zz__binaryz00, BgL_portz00_1436);
						FAILURE(BgL_auxz00_1599, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_1437))
					{	/* Llib/binary.scm 193 */
						BgL_stringz00_1491 = BgL_stringz00_1437;
					}
				else
					{
						obj_t BgL_auxz00_1605;

						BgL_auxz00_1605 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 8047)), BGl_string2192z00zz__binaryz00,
							BGl_string2181z00zz__binaryz00, BgL_stringz00_1437);
						FAILURE(BgL_auxz00_1605, BFALSE, BFALSE);
					}
				return BINT(bgl_output_string(BgL_portz00_1490, BgL_stringz00_1491));
			}
		}
	}



/* input-string */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2stringzd2zz__binaryz00(obj_t
		BgL_portz00_15, int BgL_lenz00_16)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 198 */
			return bgl_input_string(BgL_portz00_15, BgL_lenz00_16);
		}
	}



/* _input-string */
	obj_t BGl__inputzd2stringzd2zz__binaryz00(obj_t BgL_envz00_1438,
		obj_t BgL_portz00_1439, obj_t BgL_lenz00_1440)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 198 */
			{	/* Llib/binary.scm 199 */
				obj_t BgL_portz00_1492;

				int BgL_lenz00_1493;

				if (BINARY_PORTP(BgL_portz00_1439))
					{	/* Llib/binary.scm 199 */
						BgL_portz00_1492 = BgL_portz00_1439;
					}
				else
					{
						obj_t BgL_auxz00_1614;

						BgL_auxz00_1614 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
							BINT(((long) 8343)), BGl_string2193z00zz__binaryz00,
							BGl_string2185z00zz__binaryz00, BgL_portz00_1439);
						FAILURE(BgL_auxz00_1614, BFALSE, BFALSE);
					}
				{	/* Llib/binary.scm 199 */
					obj_t BgL_auxz00_1618;

					if (INTEGERP(BgL_lenz00_1440))
						{	/* Llib/binary.scm 199 */
							BgL_auxz00_1618 = BgL_lenz00_1440;
						}
					else
						{
							obj_t BgL_auxz00_1621;

							BgL_auxz00_1621 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
								BINT(((long) 8343)), BGl_string2193z00zz__binaryz00,
								BGl_string2194z00zz__binaryz00, BgL_lenz00_1440);
							FAILURE(BgL_auxz00_1621, BFALSE, BFALSE);
						}
					BgL_lenz00_1493 = CINT(BgL_auxz00_1618);
				}
				return bgl_input_string(BgL_portz00_1492, BgL_lenz00_1493);
			}
		}
	}



/* input-fill-string! */
	BGL_EXPORTED_DEF int BGl_inputzd2fillzd2stringz12z12zz__binaryz00(obj_t
		BgL_portz00_17, obj_t BgL_strz00_18)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 204 */
			return bgl_input_fill_string(BgL_portz00_17, BgL_strz00_18);
		}
	}



/* _input-fill-string! */
	obj_t BGl__inputzd2fillzd2stringz12z12zz__binaryz00(obj_t BgL_envz00_1441,
		obj_t BgL_portz00_1442, obj_t BgL_strz00_1443)
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 204 */
			{	/* Llib/binary.scm 205 */
				int BgL_auxz00_1628;

				{	/* Llib/binary.scm 205 */
					obj_t BgL_portz00_1494;

					obj_t BgL_strz00_1495;

					if (BINARY_PORTP(BgL_portz00_1442))
						{	/* Llib/binary.scm 205 */
							BgL_portz00_1494 = BgL_portz00_1442;
						}
					else
						{
							obj_t BgL_auxz00_1631;

							BgL_auxz00_1631 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
								BINT(((long) 8641)), BGl_string2195z00zz__binaryz00,
								BGl_string2185z00zz__binaryz00, BgL_portz00_1442);
							FAILURE(BgL_auxz00_1631, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_strz00_1443))
						{	/* Llib/binary.scm 205 */
							BgL_strz00_1495 = BgL_strz00_1443;
						}
					else
						{
							obj_t BgL_auxz00_1637;

							BgL_auxz00_1637 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2179z00zz__binaryz00,
								BINT(((long) 8641)), BGl_string2195z00zz__binaryz00,
								BGl_string2181z00zz__binaryz00, BgL_strz00_1443);
							FAILURE(BgL_auxz00_1637, BFALSE, BFALSE);
						}
					BgL_auxz00_1628 =
						bgl_input_fill_string(BgL_portz00_1494, BgL_strz00_1495);
				}
				return BINT(BgL_auxz00_1628);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__binaryz00()
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__binaryz00()
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__binaryz00()
	{
		AN_OBJECT;
		{	/* Llib/binary.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2196z00zz__binaryz00));
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 77210208),
				BSTRING_TO_STRING(BGl_string2196z00zz__binaryz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2196z00zz__binaryz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2196z00zz__binaryz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2196z00zz__binaryz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2196z00zz__binaryz00));
		}
	}

#ifdef __cplusplus
}
#endif
