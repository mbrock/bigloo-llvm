/*===========================================================================*/
/*   (Llib/mmap.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/mmap.scm -indent -o objs/obj_u/Llib/mmap.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_closezd2mmapzd2zz__mmapz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2substringzd2setz12z12zz__mmapz00(obj_t,
		long, obj_t);
	static obj_t BGl__mmapzd2substringzd2setz12z12zz__mmapz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_requirezd2initializa7ationz75zz__mmapz00 = BUNSPEC;
	static obj_t BGl__mmapzd2setzd2urz12z12zz__mmapz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__mmapzd2setz12zc0zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2substringzd2zz__mmapz00(obj_t, long, long);
	static obj_t BGl_genericzd2initzd2zz__mmapz00();
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2putzd2charz12z12zz__mmapz00(obj_t,
		unsigned char);
	static obj_t BGl__mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL unsigned char BGl_mmapzd2refzd2zz__mmapz00(obj_t, long);
	BGL_EXPORTED_DECL long BGl_mmapzd2lengthzd2zz__mmapz00(obj_t);
	static obj_t BGl__openzd2mmapzd2zz__mmapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2setzd2urz12z12zz__mmapz00(obj_t, long,
		unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2getzd2stringz00zz__mmapz00(obj_t, long);
	static obj_t BGl__mmapzd2refzd2urz00zz__mmapz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__mmapz00();
	BGL_EXPORTED_DECL long
		BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2putzd2stringz12z12zz__mmapz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t, long);
	static obj_t BGl_importedzd2moduleszd2initz00zz__mmapz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__mmapzd2getzd2stringz00zz__mmapz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl__mmapzd2refzd2zz__mmapz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__stringzd2ze3mmapz31zz__mmapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__mmapz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_symbol2349z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_symbol2354z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_symbol2357z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_symbol2364z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_symbol2366z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl__mmapzd2lengthzd2zz__mmapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2setz12zc0zz__mmapz00(obj_t, long,
		unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3mmapz31zz__mmapz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_keyword2330z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl__mmapzd2readzd2positionz00zz__mmapz00(obj_t, obj_t);
	static obj_t BGl_keyword2332z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl__mmapzd2getzd2charz00zz__mmapz00(obj_t, obj_t);
	extern obj_t string_to_bstring(char *);
	BGL_EXPORTED_DECL bool_t BGl_mmapzf3zf3zz__mmapz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
	static obj_t BGl__closezd2mmapzd2zz__mmapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_mmapzd2readzd2positionz00zz__mmapz00(obj_t);
	BGL_EXPORTED_DECL unsigned char BGl_mmapzd2getzd2charz00zz__mmapz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__mmapzd2putzd2stringz12z12zz__mmapz00(obj_t, obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__mmapzf3zf3zz__mmapz00(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl__mmapzd2substringzd2zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_mmapzd2writezd2positionz00zz__mmapz00(obj_t);
	static obj_t BGl__mmapzd2writezd2positionz00zz__mmapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned char BGl_mmapzd2refzd2urz00zz__mmapz00(obj_t,
		long);
	static obj_t BGl__mmapzd2putzd2charz12z12zz__mmapz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__mmapz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2365z00zz__mmapz00,
		BgL_bgl_string2365za700za7za7_2379za7, "mmap-sbustring-set!", 19);
	      DEFINE_STRING(BGl_string2367z00zz__mmapz00,
		BgL_bgl_string2367za700za7za7_2380za7, "[", 1);
	      DEFINE_STRING(BGl_string2368z00zz__mmapz00,
		BgL_bgl_string2368za700za7za7_2381za7, "_mmap-substring-set!", 20);
	      DEFINE_STRING(BGl_string2370z00zz__mmapz00,
		BgL_bgl_string2370za700za7za7_2382za7, "_mmap-put-char!", 15);
	      DEFINE_STRING(BGl_string2369z00zz__mmapz00,
		BgL_bgl_string2369za700za7za7_2383za7, "_mmap-get-char", 14);
	      DEFINE_STRING(BGl_string2371z00zz__mmapz00,
		BgL_bgl_string2371za700za7za7_2384za7, "_mmap-get-string", 16);
	      DEFINE_STRING(BGl_string2372z00zz__mmapz00,
		BgL_bgl_string2372za700za7za7_2385za7, "_mmap-put-string!", 17);
	      DEFINE_STRING(BGl_string2373z00zz__mmapz00,
		BgL_bgl_string2373za700za7za7_2386za7, "__mmap", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closezd2mmapzd2envz00zz__mmapz00,
		BgL_bgl__closeza7d2mmapza7d22387z00, BGl__closezd2mmapzd2zz__mmapz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mmapzd2substringzd2setz12zd2envzc0zz__mmapz00,
		BgL_bgl__mmapza7d2substrin2388za7,
		BGl__mmapzd2substringzd2setz12z12zz__mmapz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzf3zd2envz21zz__mmapz00,
		BgL_bgl__mmapza7f3za7f3za7za7__m2389z00, BGl__mmapzf3zf3zz__mmapz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2lengthzd2envz00zz__mmapz00,
		BgL_bgl__mmapza7d2lengthza7d2390z00, BGl__mmapzd2lengthzd2zz__mmapz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mmapzd2readzd2positionzd2setz12zd2envz12zz__mmapz00,
		BgL_bgl__mmapza7d2readza7d2p2391z00,
		BGl__mmapzd2readzd2positionzd2setz12zc0zz__mmapz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2setzd2urz12zd2envzc0zz__mmapz00,
		BgL_bgl__mmapza7d2setza7d2ur2392z00, BGl__mmapzd2setzd2urz12z12zz__mmapz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2putzd2charz12zd2envzc0zz__mmapz00,
		BgL_bgl__mmapza7d2putza7d2ch2393z00,
		BGl__mmapzd2putzd2charz12z12zz__mmapz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2refzd2envz00zz__mmapz00,
		BgL_bgl__mmapza7d2refza7d2za7za72394z00, BGl__mmapzd2refzd2zz__mmapz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_openzd2mmapzd2envz00zz__mmapz00,
		BgL_bgl__openza7d2mmapza7d2za72395za7, opt_generic_entry,
		BGl__openzd2mmapzd2zz__mmapz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2getzd2stringzd2envzd2zz__mmapz00,
		BgL_bgl__mmapza7d2getza7d2st2396z00, BGl__mmapzd2getzd2stringz00zz__mmapz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2ze3mmapzd2envze3zz__mmapz00,
		BgL_bgl__stringza7d2za7e3mma2397z00, opt_generic_entry,
		BGl__stringzd2ze3mmapz31zz__mmapz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mmapzd2writezd2positionzd2setz12zd2envz12zz__mmapz00,
		BgL_bgl__mmapza7d2writeza7d22398z00,
		BGl__mmapzd2writezd2positionzd2setz12zc0zz__mmapz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2writezd2positionzd2envzd2zz__mmapz00,
		BgL_bgl__mmapza7d2writeza7d22399z00,
		BGl__mmapzd2writezd2positionz00zz__mmapz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2getzd2charzd2envzd2zz__mmapz00,
		BgL_bgl__mmapza7d2getza7d2ch2400z00, BGl__mmapzd2getzd2charz00zz__mmapz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2putzd2stringz12zd2envzc0zz__mmapz00,
		BgL_bgl__mmapza7d2putza7d2st2401z00,
		BGl__mmapzd2putzd2stringz12z12zz__mmapz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2substringzd2envz00zz__mmapz00,
		BgL_bgl__mmapza7d2substrin2402za7, BGl__mmapzd2substringzd2zz__mmapz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2refzd2urzd2envzd2zz__mmapz00,
		BgL_bgl__mmapza7d2refza7d2ur2403z00, BGl__mmapzd2refzd2urz00zz__mmapz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2setz12zd2envz12zz__mmapz00,
		BgL_bgl__mmapza7d2setza712za7c2404za7, BGl__mmapzd2setz12zc0zz__mmapz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2readzd2positionzd2envzd2zz__mmapz00,
		BgL_bgl__mmapza7d2readza7d2p2405z00,
		BGl__mmapzd2readzd2positionz00zz__mmapz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2331z00zz__mmapz00,
		BgL_bgl_string2331za700za7za7_2406za7, "read", 4);
	      DEFINE_STRING(BGl_string2333z00zz__mmapz00,
		BgL_bgl_string2333za700za7za7_2407za7, "write", 5);
	      DEFINE_STRING(BGl_string2334z00zz__mmapz00,
		BgL_bgl_string2334za700za7za7_2408za7, "/tmp/bigloo/runtime/Llib/mmap.scm",
		33);
	      DEFINE_STRING(BGl_string2335z00zz__mmapz00,
		BgL_bgl_string2335za700za7za7_2409za7, "_open-mmap", 10);
	      DEFINE_STRING(BGl_string2336z00zz__mmapz00,
		BgL_bgl_string2336za700za7za7_2410za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2337z00zz__mmapz00,
		BgL_bgl_string2337za700za7za7_2411za7, "_string->mmap", 13);
	      DEFINE_STRING(BGl_string2338z00zz__mmapz00,
		BgL_bgl_string2338za700za7za7_2412za7, "_close-mmap", 11);
	      DEFINE_STRING(BGl_string2340z00zz__mmapz00,
		BgL_bgl_string2340za700za7za7_2413za7, "_mmap-length", 12);
	      DEFINE_STRING(BGl_string2339z00zz__mmapz00,
		BgL_bgl_string2339za700za7za7_2414za7, "mmap", 4);
	      DEFINE_STRING(BGl_string2341z00zz__mmapz00,
		BgL_bgl_string2341za700za7za7_2415za7, "_mmap-read-position", 19);
	      DEFINE_STRING(BGl_string2342z00zz__mmapz00,
		BgL_bgl_string2342za700za7za7_2416za7, "_mmap-read-position-set!", 24);
	      DEFINE_STRING(BGl_string2343z00zz__mmapz00,
		BgL_bgl_string2343za700za7za7_2417za7, "elong", 5);
	      DEFINE_STRING(BGl_string2344z00zz__mmapz00,
		BgL_bgl_string2344za700za7za7_2418za7, "_mmap-write-position", 20);
	      DEFINE_STRING(BGl_string2345z00zz__mmapz00,
		BgL_bgl_string2345za700za7za7_2419za7, "_mmap-write-position-set!", 25);
	      DEFINE_STRING(BGl_string2346z00zz__mmapz00,
		BgL_bgl_string2346za700za7za7_2420za7, "_mmap-ref-ur", 12);
	      DEFINE_STRING(BGl_string2347z00zz__mmapz00,
		BgL_bgl_string2347za700za7za7_2421za7, "_mmap-set-ur!", 13);
	      DEFINE_STRING(BGl_string2348z00zz__mmapz00,
		BgL_bgl_string2348za700za7za7_2422za7, "uchar", 5);
	      DEFINE_STRING(BGl_string2350z00zz__mmapz00,
		BgL_bgl_string2350za700za7za7_2423za7, "mmap-ref", 8);
	      DEFINE_STRING(BGl_string2351z00zz__mmapz00,
		BgL_bgl_string2351za700za7za7_2424za7, "index out of range [0..", 23);
	      DEFINE_STRING(BGl_string2352z00zz__mmapz00,
		BgL_bgl_string2352za700za7za7_2425za7, "]", 1);
	      DEFINE_STRING(BGl_string2353z00zz__mmapz00,
		BgL_bgl_string2353za700za7za7_2426za7, "_mmap-ref", 9);
	      DEFINE_STRING(BGl_string2355z00zz__mmapz00,
		BgL_bgl_string2355za700za7za7_2427za7, "mmap-set!", 9);
	      DEFINE_STRING(BGl_string2356z00zz__mmapz00,
		BgL_bgl_string2356za700za7za7_2428za7, "_mmap-set!", 10);
	      DEFINE_STRING(BGl_string2358z00zz__mmapz00,
		BgL_bgl_string2358za700za7za7_2429za7, "mmap-substring", 14);
	      DEFINE_STRING(BGl_string2360z00zz__mmapz00,
		BgL_bgl_string2360za700za7za7_2430za7, "Illegal index", 13);
	      DEFINE_STRING(BGl_string2359z00zz__mmapz00,
		BgL_bgl_string2359za700za7za7_2431za7, "length too small", 16);
	      DEFINE_STRING(BGl_string2361z00zz__mmapz00,
		BgL_bgl_string2361za700za7za7_2432za7, "start+length bigger than ", 25);
	      DEFINE_STRING(BGl_string2362z00zz__mmapz00,
		BgL_bgl_string2362za700za7za7_2433za7, "_mmap-substring", 15);
	      DEFINE_STRING(BGl_string2363z00zz__mmapz00,
		BgL_bgl_string2363za700za7za7_2434za7, "mmap-substring-set!", 19);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__mmapz00(long
		BgL_checksumz00_1981, char *BgL_fromz00_1982)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__mmapz00))
				{
					BGl_requirezd2initializa7ationz75zz__mmapz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__mmapz00();
					BGl_importedzd2moduleszd2initz00zz__mmapz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__mmapz00()
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 19 */
			BGl_keyword2330z00zz__mmapz00 =
				bstring_to_keyword(BGl_string2331z00zz__mmapz00);
			BGl_keyword2332z00zz__mmapz00 =
				bstring_to_keyword(BGl_string2333z00zz__mmapz00);
			BGl_symbol2349z00zz__mmapz00 =
				bstring_to_symbol(BGl_string2350z00zz__mmapz00);
			BGl_symbol2354z00zz__mmapz00 =
				bstring_to_symbol(BGl_string2355z00zz__mmapz00);
			BGl_symbol2357z00zz__mmapz00 =
				bstring_to_symbol(BGl_string2358z00zz__mmapz00);
			BGl_symbol2364z00zz__mmapz00 =
				bstring_to_symbol(BGl_string2365z00zz__mmapz00);
			return (BGl_symbol2366z00zz__mmapz00 =
				bstring_to_symbol(BGl_string2363z00zz__mmapz00), BUNSPEC);
		}
	}



/* mmap? */
	BGL_EXPORTED_DEF bool_t BGl_mmapzf3zf3zz__mmapz00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 116 */
			return BGL_MMAPP(BgL_objz00_1);
		}
	}



/* _mmap? */
	obj_t BGl__mmapzf3zf3zz__mmapz00(obj_t BgL_envz00_1765, obj_t BgL_objz00_1766)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 116 */
			return BBOOL(BGL_MMAPP(BgL_objz00_1766));
		}
	}



/* _open-mmap */
	obj_t BGl__openzd2mmapzd2zz__mmapz00(obj_t BgL_envz00_6,
		obj_t BgL_opt1856z00_5)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 122 */
			{	/* Llib/mmap.scm 122 */
				int BgL_l1857z00_779;

				BgL_l1857z00_779 = VECTOR_LENGTH(BgL_opt1856z00_5);
				{	/* Llib/mmap.scm 122 */
					obj_t BgL_g1863z00_783;

					BgL_g1863z00_783 = VECTOR_REF(BgL_opt1856z00_5, (int) (((long) 0)));
					{	/* Llib/mmap.scm 122 */
						obj_t BgL_readz00_784;

						BgL_readz00_784 = BTRUE;
						{	/* Llib/mmap.scm 122 */
							obj_t BgL_writez00_785;

							BgL_writez00_785 = BTRUE;
							{	/* Llib/mmap.scm 122 */

								{	/* Llib/mmap.scm 122 */
									long BgL_index1861z00_786;

									{
										long BgL_iz00_1340;

										BgL_iz00_1340 = ((long) 1);
									BgL_search1858z00_1339:
										if ((BgL_iz00_1340 == (long) (BgL_l1857z00_779)))
											{	/* Llib/mmap.scm 122 */
												BgL_index1861z00_786 = ((long) -1);
											}
										else
											{	/* Llib/mmap.scm 122 */
												obj_t BgL_vz00_1342;

												BgL_vz00_1342 =
													VECTOR_REF(BgL_opt1856z00_5, (int) (BgL_iz00_1340));
												if ((BgL_vz00_1342 == BGl_keyword2330z00zz__mmapz00))
													{	/* Llib/mmap.scm 122 */
														BgL_index1861z00_786 = (BgL_iz00_1340 + ((long) 1));
													}
												else
													{
														long BgL_iz00_2009;

														BgL_iz00_2009 = (BgL_iz00_1340 + ((long) 2));
														BgL_iz00_1340 = BgL_iz00_2009;
														goto BgL_search1858z00_1339;
													}
											}
									}
									if ((BgL_index1861z00_786 >= ((long) 0)))
										{	/* Llib/mmap.scm 122 */
											BgL_readz00_784 =
												VECTOR_REF(BgL_opt1856z00_5,
												(int) (BgL_index1861z00_786));
										}
									else
										{	/* Llib/mmap.scm 122 */
											BFALSE;
										}
								}
								{	/* Llib/mmap.scm 122 */
									long BgL_index1862z00_788;

									{
										long BgL_iz00_1354;

										BgL_iz00_1354 = ((long) 1);
									BgL_search1858z00_1353:
										if ((BgL_iz00_1354 == (long) (BgL_l1857z00_779)))
											{	/* Llib/mmap.scm 122 */
												BgL_index1862z00_788 = ((long) -1);
											}
										else
											{	/* Llib/mmap.scm 122 */
												obj_t BgL_vz00_1356;

												BgL_vz00_1356 =
													VECTOR_REF(BgL_opt1856z00_5, (int) (BgL_iz00_1354));
												if ((BgL_vz00_1356 == BGl_keyword2332z00zz__mmapz00))
													{	/* Llib/mmap.scm 122 */
														BgL_index1862z00_788 = (BgL_iz00_1354 + ((long) 1));
													}
												else
													{
														long BgL_iz00_2023;

														BgL_iz00_2023 = (BgL_iz00_1354 + ((long) 2));
														BgL_iz00_1354 = BgL_iz00_2023;
														goto BgL_search1858z00_1353;
													}
											}
									}
									if ((BgL_index1862z00_788 >= ((long) 0)))
										{	/* Llib/mmap.scm 122 */
											BgL_writez00_785 =
												VECTOR_REF(BgL_opt1856z00_5,
												(int) (BgL_index1862z00_788));
										}
									else
										{	/* Llib/mmap.scm 122 */
											BFALSE;
										}
								}
								{	/* Llib/mmap.scm 122 */
									obj_t BgL_arg1901z00_790;

									BgL_arg1901z00_790 =
										VECTOR_REF(BgL_opt1856z00_5, (int) (((long) 0)));
									{	/* Llib/mmap.scm 122 */
										obj_t BgL_readz00_791;

										BgL_readz00_791 = BgL_readz00_784;
										{	/* Llib/mmap.scm 122 */
											obj_t BgL_writez00_792;

											BgL_writez00_792 = BgL_writez00_785;
											{	/* Llib/mmap.scm 122 */
												obj_t BgL_namez00_1367;

												if (STRINGP(BgL_arg1901z00_790))
													{	/* Llib/mmap.scm 122 */
														BgL_namez00_1367 = BgL_arg1901z00_790;
													}
												else
													{
														obj_t BgL_auxz00_2033;

														BgL_auxz00_2033 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2334z00zz__mmapz00,
															BINT(((long) 5555)), BGl_string2335z00zz__mmapz00,
															BGl_string2336z00zz__mmapz00, BgL_arg1901z00_790);
														FAILURE(BgL_auxz00_2033, BFALSE, BFALSE);
													}
												{	/* Llib/mmap.scm 122 */
													bool_t BgL_auxz00_2039;

													bool_t BgL_auxz00_2037;

													BgL_auxz00_2039 = CBOOL(BgL_writez00_792);
													BgL_auxz00_2037 = CBOOL(BgL_readz00_791);
													return
														bgl_open_mmap(BgL_namez00_1367, BgL_auxz00_2037,
														BgL_auxz00_2039);
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



/* open-mmap */
	BGL_EXPORTED_DEF obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t BgL_namez00_2,
		obj_t BgL_readz00_3, obj_t BgL_writez00_4)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 122 */
			{	/* Llib/mmap.scm 123 */
				bool_t BgL_auxz00_2044;

				bool_t BgL_auxz00_2042;

				BgL_auxz00_2044 = CBOOL(BgL_writez00_4);
				BgL_auxz00_2042 = CBOOL(BgL_readz00_3);
				return bgl_open_mmap(BgL_namez00_2, BgL_auxz00_2042, BgL_auxz00_2044);
			}
		}
	}



/* _string->mmap */
	obj_t BGl__stringzd2ze3mmapz31zz__mmapz00(obj_t BgL_envz00_11,
		obj_t BgL_opt1864z00_10)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 128 */
			{	/* Llib/mmap.scm 128 */
				int BgL_l1865z00_797;

				BgL_l1865z00_797 = VECTOR_LENGTH(BgL_opt1864z00_10);
				{	/* Llib/mmap.scm 128 */
					obj_t BgL_g1871z00_801;

					BgL_g1871z00_801 = VECTOR_REF(BgL_opt1864z00_10, (int) (((long) 0)));
					{	/* Llib/mmap.scm 128 */
						obj_t BgL_readz00_802;

						BgL_readz00_802 = BTRUE;
						{	/* Llib/mmap.scm 128 */
							obj_t BgL_writez00_803;

							BgL_writez00_803 = BTRUE;
							{	/* Llib/mmap.scm 128 */

								{	/* Llib/mmap.scm 128 */
									long BgL_index1869z00_804;

									{
										long BgL_iz00_1394;

										BgL_iz00_1394 = ((long) 1);
									BgL_search1866z00_1393:
										if ((BgL_iz00_1394 == (long) (BgL_l1865z00_797)))
											{	/* Llib/mmap.scm 128 */
												BgL_index1869z00_804 = ((long) -1);
											}
										else
											{	/* Llib/mmap.scm 128 */
												obj_t BgL_vz00_1396;

												BgL_vz00_1396 =
													VECTOR_REF(BgL_opt1864z00_10, (int) (BgL_iz00_1394));
												if ((BgL_vz00_1396 == BGl_keyword2330z00zz__mmapz00))
													{	/* Llib/mmap.scm 128 */
														BgL_index1869z00_804 = (BgL_iz00_1394 + ((long) 1));
													}
												else
													{
														long BgL_iz00_2058;

														BgL_iz00_2058 = (BgL_iz00_1394 + ((long) 2));
														BgL_iz00_1394 = BgL_iz00_2058;
														goto BgL_search1866z00_1393;
													}
											}
									}
									if ((BgL_index1869z00_804 >= ((long) 0)))
										{	/* Llib/mmap.scm 128 */
											BgL_readz00_802 =
												VECTOR_REF(BgL_opt1864z00_10,
												(int) (BgL_index1869z00_804));
										}
									else
										{	/* Llib/mmap.scm 128 */
											BFALSE;
										}
								}
								{	/* Llib/mmap.scm 128 */
									long BgL_index1870z00_806;

									{
										long BgL_iz00_1408;

										BgL_iz00_1408 = ((long) 1);
									BgL_search1866z00_1407:
										if ((BgL_iz00_1408 == (long) (BgL_l1865z00_797)))
											{	/* Llib/mmap.scm 128 */
												BgL_index1870z00_806 = ((long) -1);
											}
										else
											{	/* Llib/mmap.scm 128 */
												obj_t BgL_vz00_1410;

												BgL_vz00_1410 =
													VECTOR_REF(BgL_opt1864z00_10, (int) (BgL_iz00_1408));
												if ((BgL_vz00_1410 == BGl_keyword2332z00zz__mmapz00))
													{	/* Llib/mmap.scm 128 */
														BgL_index1870z00_806 = (BgL_iz00_1408 + ((long) 1));
													}
												else
													{
														long BgL_iz00_2072;

														BgL_iz00_2072 = (BgL_iz00_1408 + ((long) 2));
														BgL_iz00_1408 = BgL_iz00_2072;
														goto BgL_search1866z00_1407;
													}
											}
									}
									if ((BgL_index1870z00_806 >= ((long) 0)))
										{	/* Llib/mmap.scm 128 */
											BgL_writez00_803 =
												VECTOR_REF(BgL_opt1864z00_10,
												(int) (BgL_index1870z00_806));
										}
									else
										{	/* Llib/mmap.scm 128 */
											BFALSE;
										}
								}
								{	/* Llib/mmap.scm 128 */
									obj_t BgL_arg1907z00_808;

									BgL_arg1907z00_808 =
										VECTOR_REF(BgL_opt1864z00_10, (int) (((long) 0)));
									{	/* Llib/mmap.scm 128 */
										obj_t BgL_readz00_809;

										BgL_readz00_809 = BgL_readz00_802;
										{	/* Llib/mmap.scm 128 */
											obj_t BgL_writez00_810;

											BgL_writez00_810 = BgL_writez00_803;
											{	/* Llib/mmap.scm 128 */
												obj_t BgL_sz00_1421;

												if (STRINGP(BgL_arg1907z00_808))
													{	/* Llib/mmap.scm 128 */
														BgL_sz00_1421 = BgL_arg1907z00_808;
													}
												else
													{
														obj_t BgL_auxz00_2082;

														BgL_auxz00_2082 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2334z00zz__mmapz00,
															BINT(((long) 5872)), BGl_string2337z00zz__mmapz00,
															BGl_string2336z00zz__mmapz00, BgL_arg1907z00_808);
														FAILURE(BgL_auxz00_2082, BFALSE, BFALSE);
													}
												{	/* Llib/mmap.scm 128 */
													bool_t BgL_auxz00_2088;

													bool_t BgL_auxz00_2086;

													BgL_auxz00_2088 = CBOOL(BgL_writez00_810);
													BgL_auxz00_2086 = CBOOL(BgL_readz00_809);
													return
														bgl_string_to_mmap(BgL_sz00_1421, BgL_auxz00_2086,
														BgL_auxz00_2088);
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



/* string->mmap */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3mmapz31zz__mmapz00(obj_t BgL_sz00_7,
		obj_t BgL_readz00_8, obj_t BgL_writez00_9)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 128 */
			{	/* Llib/mmap.scm 129 */
				bool_t BgL_auxz00_2093;

				bool_t BgL_auxz00_2091;

				BgL_auxz00_2093 = CBOOL(BgL_writez00_9);
				BgL_auxz00_2091 = CBOOL(BgL_readz00_8);
				return bgl_string_to_mmap(BgL_sz00_7, BgL_auxz00_2091, BgL_auxz00_2093);
			}
		}
	}



/* close-mmap */
	BGL_EXPORTED_DEF obj_t BGl_closezd2mmapzd2zz__mmapz00(obj_t BgL_mmapz00_12)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 134 */
			return bgl_close_mmap(BgL_mmapz00_12);
		}
	}



/* _close-mmap */
	obj_t BGl__closezd2mmapzd2zz__mmapz00(obj_t BgL_envz00_1767,
		obj_t BgL_mmapz00_1768)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 134 */
			{	/* Llib/mmap.scm 135 */
				obj_t BgL_mmapz00_1881;

				if (BGL_MMAPP(BgL_mmapz00_1768))
					{	/* Llib/mmap.scm 135 */
						BgL_mmapz00_1881 = BgL_mmapz00_1768;
					}
				else
					{
						obj_t BgL_auxz00_2099;

						BgL_auxz00_2099 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 6234)), BGl_string2338z00zz__mmapz00,
							BGl_string2339z00zz__mmapz00, BgL_mmapz00_1768);
						FAILURE(BgL_auxz00_2099, BFALSE, BFALSE);
					}
				return bgl_close_mmap(BgL_mmapz00_1881);
			}
		}
	}



/* mmap-length */
	BGL_EXPORTED_DEF long BGl_mmapzd2lengthzd2zz__mmapz00(obj_t BgL_objz00_13)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 140 */
			return BGL_MMAP_LENGTH(BgL_objz00_13);
		}
	}



/* _mmap-length */
	obj_t BGl__mmapzd2lengthzd2zz__mmapz00(obj_t BgL_envz00_1769,
		obj_t BgL_objz00_1770)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 140 */
			{	/* Llib/mmap.scm 141 */
				long BgL_auxz00_2105;

				{	/* Llib/mmap.scm 141 */
					obj_t BgL_objz00_1882;

					if (BGL_MMAPP(BgL_objz00_1770))
						{	/* Llib/mmap.scm 141 */
							BgL_objz00_1882 = BgL_objz00_1770;
						}
					else
						{
							obj_t BgL_auxz00_2108;

							BgL_auxz00_2108 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 6519)), BGl_string2340z00zz__mmapz00,
								BGl_string2339z00zz__mmapz00, BgL_objz00_1770);
							FAILURE(BgL_auxz00_2108, BFALSE, BFALSE);
						}
					BgL_auxz00_2105 = BGL_MMAP_LENGTH(BgL_objz00_1882);
				}
				return make_belong(BgL_auxz00_2105);
			}
		}
	}



/* mmap-read-position */
	BGL_EXPORTED_DEF long BGl_mmapzd2readzd2positionz00zz__mmapz00(obj_t
		BgL_mmz00_14)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 146 */
			return BGL_MMAP_RP_GET(BgL_mmz00_14);
		}
	}



/* _mmap-read-position */
	obj_t BGl__mmapzd2readzd2positionz00zz__mmapz00(obj_t BgL_envz00_1771,
		obj_t BgL_mmz00_1772)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 146 */
			{	/* Llib/mmap.scm 147 */
				long BgL_auxz00_2115;

				{	/* Llib/mmap.scm 147 */
					obj_t BgL_mmz00_1883;

					if (BGL_MMAPP(BgL_mmz00_1772))
						{	/* Llib/mmap.scm 147 */
							BgL_mmz00_1883 = BgL_mmz00_1772;
						}
					else
						{
							obj_t BgL_auxz00_2118;

							BgL_auxz00_2118 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 6810)), BGl_string2341z00zz__mmapz00,
								BGl_string2339z00zz__mmapz00, BgL_mmz00_1772);
							FAILURE(BgL_auxz00_2118, BFALSE, BFALSE);
						}
					BgL_auxz00_2115 = BGL_MMAP_RP_GET(BgL_mmz00_1883);
				}
				return make_belong(BgL_auxz00_2115);
			}
		}
	}



/* mmap-read-position-set! */
	BGL_EXPORTED_DEF long BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t
		BgL_mmz00_15, long BgL_pz00_16)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 152 */
			BGL_MMAP_RP_SET(BgL_mmz00_15, BgL_pz00_16);
			BUNSPEC;
			return BgL_pz00_16;
		}
	}



/* _mmap-read-position-set! */
	obj_t BGl__mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t
		BgL_envz00_1773, obj_t BgL_mmz00_1774, obj_t BgL_pz00_1775)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 152 */
			{	/* Llib/mmap.scm 154 */
				long BgL_auxz00_2125;

				{	/* Llib/mmap.scm 154 */
					long BgL_res2374z00_1886;

					{	/* Llib/mmap.scm 154 */
						obj_t BgL_mmz00_1884;

						long BgL_pz00_1885;

						if (BGL_MMAPP(BgL_mmz00_1774))
							{	/* Llib/mmap.scm 154 */
								BgL_mmz00_1884 = BgL_mmz00_1774;
							}
						else
							{
								obj_t BgL_auxz00_2128;

								BgL_auxz00_2128 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
									BINT(((long) 7127)), BGl_string2342z00zz__mmapz00,
									BGl_string2339z00zz__mmapz00, BgL_mmz00_1774);
								FAILURE(BgL_auxz00_2128, BFALSE, BFALSE);
							}
						{	/* Llib/mmap.scm 154 */
							obj_t BgL_auxz00_2132;

							if (ELONGP(BgL_pz00_1775))
								{	/* Llib/mmap.scm 154 */
									BgL_auxz00_2132 = BgL_pz00_1775;
								}
							else
								{
									obj_t BgL_auxz00_2135;

									BgL_auxz00_2135 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2334z00zz__mmapz00, BINT(((long) 7127)),
										BGl_string2342z00zz__mmapz00, BGl_string2343z00zz__mmapz00,
										BgL_pz00_1775);
									FAILURE(BgL_auxz00_2135, BFALSE, BFALSE);
								}
							BgL_pz00_1885 = BELONG_TO_LONG(BgL_auxz00_2132);
						}
						BGL_MMAP_RP_SET(BgL_mmz00_1884, BgL_pz00_1885);
						BUNSPEC;
						BgL_res2374z00_1886 = BgL_pz00_1885;
					}
					BgL_auxz00_2125 = BgL_res2374z00_1886;
				}
				return make_belong(BgL_auxz00_2125);
			}
		}
	}



/* mmap-write-position */
	BGL_EXPORTED_DEF long BGl_mmapzd2writezd2positionz00zz__mmapz00(obj_t
		BgL_mmz00_17)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 159 */
			return BGL_MMAP_WP_GET(BgL_mmz00_17);
		}
	}



/* _mmap-write-position */
	obj_t BGl__mmapzd2writezd2positionz00zz__mmapz00(obj_t BgL_envz00_1776,
		obj_t BgL_mmz00_1777)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 159 */
			{	/* Llib/mmap.scm 160 */
				long BgL_auxz00_2143;

				{	/* Llib/mmap.scm 160 */
					obj_t BgL_mmz00_1887;

					if (BGL_MMAPP(BgL_mmz00_1777))
						{	/* Llib/mmap.scm 160 */
							BgL_mmz00_1887 = BgL_mmz00_1777;
						}
					else
						{
							obj_t BgL_auxz00_2146;

							BgL_auxz00_2146 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 7402)), BGl_string2344z00zz__mmapz00,
								BGl_string2339z00zz__mmapz00, BgL_mmz00_1777);
							FAILURE(BgL_auxz00_2146, BFALSE, BFALSE);
						}
					BgL_auxz00_2143 = BGL_MMAP_WP_GET(BgL_mmz00_1887);
				}
				return make_belong(BgL_auxz00_2143);
			}
		}
	}



/* mmap-write-position-set! */
	BGL_EXPORTED_DEF long BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t
		BgL_mmz00_18, long BgL_pz00_19)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 165 */
			BGL_MMAP_WP_SET(BgL_mmz00_18, BgL_pz00_19);
			BUNSPEC;
			return BgL_pz00_19;
		}
	}



/* _mmap-write-position-set! */
	obj_t BGl__mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t
		BgL_envz00_1778, obj_t BgL_mmz00_1779, obj_t BgL_pz00_1780)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 165 */
			{	/* Llib/mmap.scm 167 */
				long BgL_auxz00_2153;

				{	/* Llib/mmap.scm 167 */
					long BgL_res2375z00_1890;

					{	/* Llib/mmap.scm 167 */
						obj_t BgL_mmz00_1888;

						long BgL_pz00_1889;

						if (BGL_MMAPP(BgL_mmz00_1779))
							{	/* Llib/mmap.scm 167 */
								BgL_mmz00_1888 = BgL_mmz00_1779;
							}
						else
							{
								obj_t BgL_auxz00_2156;

								BgL_auxz00_2156 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
									BINT(((long) 7720)), BGl_string2345z00zz__mmapz00,
									BGl_string2339z00zz__mmapz00, BgL_mmz00_1779);
								FAILURE(BgL_auxz00_2156, BFALSE, BFALSE);
							}
						{	/* Llib/mmap.scm 167 */
							obj_t BgL_auxz00_2160;

							if (ELONGP(BgL_pz00_1780))
								{	/* Llib/mmap.scm 167 */
									BgL_auxz00_2160 = BgL_pz00_1780;
								}
							else
								{
									obj_t BgL_auxz00_2163;

									BgL_auxz00_2163 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2334z00zz__mmapz00, BINT(((long) 7720)),
										BGl_string2345z00zz__mmapz00, BGl_string2343z00zz__mmapz00,
										BgL_pz00_1780);
									FAILURE(BgL_auxz00_2163, BFALSE, BFALSE);
								}
							BgL_pz00_1889 = BELONG_TO_LONG(BgL_auxz00_2160);
						}
						BGL_MMAP_WP_SET(BgL_mmz00_1888, BgL_pz00_1889);
						BUNSPEC;
						BgL_res2375z00_1890 = BgL_pz00_1889;
					}
					BgL_auxz00_2153 = BgL_res2375z00_1890;
				}
				return make_belong(BgL_auxz00_2153);
			}
		}
	}



/* mmap-ref-ur */
	BGL_EXPORTED_DEF unsigned char BGl_mmapzd2refzd2urz00zz__mmapz00(obj_t
		BgL_mmz00_20, long BgL_iz00_21)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 172 */
			{	/* Llib/mmap.scm 173 */
				unsigned char BgL_cz00_1891;

				BgL_cz00_1891 = BGL_MMAP_REF(BgL_mmz00_20, BgL_iz00_21);
				{	/* Llib/mmap.scm 173 */
					long BgL_arg1911z00_1892;

					BgL_arg1911z00_1892 = (BgL_iz00_21 + ((long) 1));
					{	/* Llib/mmap.scm 173 */
						long BgL_res2240z00_1893;

						BGL_MMAP_RP_SET(BgL_mmz00_20, BgL_arg1911z00_1892);
						BUNSPEC;
						BgL_res2240z00_1893 = BgL_arg1911z00_1892;
						BgL_res2240z00_1893;
				}}
				return BgL_cz00_1891;
			}
		}
	}



/* _mmap-ref-ur */
	obj_t BGl__mmapzd2refzd2urz00zz__mmapz00(obj_t BgL_envz00_1781,
		obj_t BgL_mmz00_1782, obj_t BgL_iz00_1783)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 172 */
			{	/* Llib/mmap.scm 173 */
				unsigned char BgL_auxz00_2173;

				{	/* Llib/mmap.scm 173 */
					unsigned char BgL_res2376z00_1899;

					{	/* Llib/mmap.scm 173 */
						obj_t BgL_mmz00_1894;

						long BgL_iz00_1895;

						if (BGL_MMAPP(BgL_mmz00_1782))
							{	/* Llib/mmap.scm 173 */
								BgL_mmz00_1894 = BgL_mmz00_1782;
							}
						else
							{
								obj_t BgL_auxz00_2176;

								BgL_auxz00_2176 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
									BINT(((long) 8003)), BGl_string2346z00zz__mmapz00,
									BGl_string2339z00zz__mmapz00, BgL_mmz00_1782);
								FAILURE(BgL_auxz00_2176, BFALSE, BFALSE);
							}
						{	/* Llib/mmap.scm 173 */
							obj_t BgL_auxz00_2180;

							if (ELONGP(BgL_iz00_1783))
								{	/* Llib/mmap.scm 173 */
									BgL_auxz00_2180 = BgL_iz00_1783;
								}
							else
								{
									obj_t BgL_auxz00_2183;

									BgL_auxz00_2183 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2334z00zz__mmapz00, BINT(((long) 8003)),
										BGl_string2346z00zz__mmapz00, BGl_string2343z00zz__mmapz00,
										BgL_iz00_1783);
									FAILURE(BgL_auxz00_2183, BFALSE, BFALSE);
								}
							BgL_iz00_1895 = BELONG_TO_LONG(BgL_auxz00_2180);
						}
						{	/* Llib/mmap.scm 173 */
							unsigned char BgL_cz00_1896;

							BgL_cz00_1896 = BGL_MMAP_REF(BgL_mmz00_1894, BgL_iz00_1895);
							{	/* Llib/mmap.scm 173 */
								long BgL_arg1911z00_1897;

								BgL_arg1911z00_1897 = (BgL_iz00_1895 + ((long) 1));
								{	/* Llib/mmap.scm 173 */
									long BgL_res2240z00_1898;

									BGL_MMAP_RP_SET(BgL_mmz00_1894, BgL_arg1911z00_1897);
									BUNSPEC;
									BgL_res2240z00_1898 = BgL_arg1911z00_1897;
									BgL_res2240z00_1898;
							}}
							BgL_res2376z00_1899 = BgL_cz00_1896;
					}}
					BgL_auxz00_2173 = BgL_res2376z00_1899;
				}
				return BCHAR(BgL_auxz00_2173);
			}
		}
	}



/* mmap-set-ur! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2setzd2urz12z12zz__mmapz00(obj_t
		BgL_mmz00_22, long BgL_iz00_23, unsigned char BgL_cz00_24)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 180 */
			BGL_MMAP_SET(BgL_mmz00_22, BgL_iz00_23, BgL_cz00_24);
			{	/* Llib/mmap.scm 182 */
				long BgL_arg1912z00_1900;

				BgL_arg1912z00_1900 = (BgL_iz00_23 + ((long) 1));
				{	/* Llib/mmap.scm 182 */
					long BgL_res2241z00_1901;

					BGL_MMAP_WP_SET(BgL_mmz00_22, BgL_arg1912z00_1900);
					BUNSPEC;
					BgL_res2241z00_1901 = BgL_arg1912z00_1900;
					return make_belong(BgL_res2241z00_1901);
				}
			}
		}
	}



/* _mmap-set-ur! */
	obj_t BGl__mmapzd2setzd2urz12z12zz__mmapz00(obj_t BgL_envz00_1784,
		obj_t BgL_mmz00_1785, obj_t BgL_iz00_1786, obj_t BgL_cz00_1787)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 180 */
			{	/* Llib/mmap.scm 182 */
				obj_t BgL_mmz00_1902;

				long BgL_iz00_1903;

				unsigned char BgL_cz00_1904;

				if (BGL_MMAPP(BgL_mmz00_1785))
					{	/* Llib/mmap.scm 182 */
						BgL_mmz00_1902 = BgL_mmz00_1785;
					}
				else
					{
						obj_t BgL_auxz00_2198;

						BgL_auxz00_2198 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 8445)), BGl_string2347z00zz__mmapz00,
							BGl_string2339z00zz__mmapz00, BgL_mmz00_1785);
						FAILURE(BgL_auxz00_2198, BFALSE, BFALSE);
					}
				{	/* Llib/mmap.scm 182 */
					obj_t BgL_auxz00_2202;

					if (ELONGP(BgL_iz00_1786))
						{	/* Llib/mmap.scm 182 */
							BgL_auxz00_2202 = BgL_iz00_1786;
						}
					else
						{
							obj_t BgL_auxz00_2205;

							BgL_auxz00_2205 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 8445)), BGl_string2347z00zz__mmapz00,
								BGl_string2343z00zz__mmapz00, BgL_iz00_1786);
							FAILURE(BgL_auxz00_2205, BFALSE, BFALSE);
						}
					BgL_iz00_1903 = BELONG_TO_LONG(BgL_auxz00_2202);
				}
				{	/* Llib/mmap.scm 182 */
					obj_t BgL_auxz00_2210;

					if (CHARP(BgL_cz00_1787))
						{	/* Llib/mmap.scm 182 */
							BgL_auxz00_2210 = BgL_cz00_1787;
						}
					else
						{
							obj_t BgL_auxz00_2213;

							BgL_auxz00_2213 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 8445)), BGl_string2347z00zz__mmapz00,
								BGl_string2348z00zz__mmapz00, BgL_cz00_1787);
							FAILURE(BgL_auxz00_2213, BFALSE, BFALSE);
						}
					BgL_cz00_1904 = CCHAR(BgL_auxz00_2210);
				}
				BGL_MMAP_SET(BgL_mmz00_1902, BgL_iz00_1903, BgL_cz00_1904);
				{	/* Llib/mmap.scm 182 */
					long BgL_arg1912z00_1905;

					BgL_arg1912z00_1905 = (BgL_iz00_1903 + ((long) 1));
					{	/* Llib/mmap.scm 182 */
						long BgL_res2241z00_1906;

						BGL_MMAP_WP_SET(BgL_mmz00_1902, BgL_arg1912z00_1905);
						BUNSPEC;
						BgL_res2241z00_1906 = BgL_arg1912z00_1905;
						return make_belong(BgL_res2241z00_1906);
					}
				}
			}
		}
	}



/* mmap-ref */
	BGL_EXPORTED_DEF unsigned char BGl_mmapzd2refzd2zz__mmapz00(obj_t
		BgL_mmz00_25, long BgL_iz00_26)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 187 */
			{	/* Llib/mmap.scm 188 */
				bool_t BgL_testz00_2222;

				{	/* Llib/mmap.scm 188 */
					long BgL_arg1923z00_1907;

					BgL_arg1923z00_1907 = BGL_MMAP_LENGTH(BgL_mmz00_25);
					BgL_testz00_2222 = BOUND_CHECK(BgL_iz00_26, BgL_arg1923z00_1907);
				}
				if (BgL_testz00_2222)
					{	/* Llib/mmap.scm 188 */
						unsigned char BgL_res2243z00_1908;

						{	/* Llib/mmap.scm 188 */
							unsigned char BgL_cz00_1909;

							BgL_cz00_1909 = BGL_MMAP_REF(BgL_mmz00_25, BgL_iz00_26);
							{	/* Llib/mmap.scm 188 */
								long BgL_arg1911z00_1910;

								BgL_arg1911z00_1910 = (BgL_iz00_26 + ((long) 1));
								{	/* Llib/mmap.scm 188 */
									long BgL_res2242z00_1911;

									BGL_MMAP_RP_SET(BgL_mmz00_25, BgL_arg1911z00_1910);
									BUNSPEC;
									BgL_res2242z00_1911 = BgL_arg1911z00_1910;
									BgL_res2242z00_1911;
							}}
							BgL_res2243z00_1908 = BgL_cz00_1909;
						}
						return BgL_res2243z00_1908;
					}
				else
					{	/* Llib/mmap.scm 188 */
						obj_t BgL_arg1914z00_1912;

						obj_t BgL_arg1915z00_1913;

						BgL_arg1914z00_1912 = BGl_symbol2349z00zz__mmapz00;
						{	/* Llib/mmap.scm 188 */
							char *BgL_arg1918z00_1914;

							{	/* Llib/mmap.scm 188 */
								obj_t BgL_arg1920z00_1915;

								{	/* Llib/mmap.scm 188 */
									long BgL_arg1921z00_1916;

									BgL_arg1921z00_1916 = BGL_MMAP_LENGTH(BgL_mmz00_25);
									BgL_arg1920z00_1915 =
										BGl_2zd2zd2zz__r4_numbers_6_5z00(make_belong
										(BgL_arg1921z00_1916), BINT(((long) 1)));
								}
								{	/* Llib/mmap.scm 188 */

									BgL_arg1918z00_1914 =
										BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
										(BgL_arg1920z00_1915, BINT(((long) 10)));
							}}
							BgL_arg1915z00_1913 =
								string_append_3(BGl_string2351z00zz__mmapz00,
								string_to_bstring(BgL_arg1918z00_1914),
								BGl_string2352z00zz__mmapz00);
						}
						return
							CCHAR(BGl_errorz00zz__errorz00(BgL_arg1914z00_1912,
								BgL_arg1915z00_1913, make_belong(BgL_iz00_26)));
					}
			}
		}
	}



/* _mmap-ref */
	obj_t BGl__mmapzd2refzd2zz__mmapz00(obj_t BgL_envz00_1788,
		obj_t BgL_mmz00_1789, obj_t BgL_iz00_1790)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 187 */
			{	/* Llib/mmap.scm 188 */
				unsigned char BgL_auxz00_2239;

				{	/* Llib/mmap.scm 188 */
					obj_t BgL_mmz00_1917;

					long BgL_iz00_1918;

					if (BGL_MMAPP(BgL_mmz00_1789))
						{	/* Llib/mmap.scm 188 */
							BgL_mmz00_1917 = BgL_mmz00_1789;
						}
					else
						{
							obj_t BgL_auxz00_2242;

							BgL_auxz00_2242 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 8751)), BGl_string2353z00zz__mmapz00,
								BGl_string2339z00zz__mmapz00, BgL_mmz00_1789);
							FAILURE(BgL_auxz00_2242, BFALSE, BFALSE);
						}
					{	/* Llib/mmap.scm 188 */
						obj_t BgL_auxz00_2246;

						if (ELONGP(BgL_iz00_1790))
							{	/* Llib/mmap.scm 188 */
								BgL_auxz00_2246 = BgL_iz00_1790;
							}
						else
							{
								obj_t BgL_auxz00_2249;

								BgL_auxz00_2249 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
									BINT(((long) 8751)), BGl_string2353z00zz__mmapz00,
									BGl_string2343z00zz__mmapz00, BgL_iz00_1790);
								FAILURE(BgL_auxz00_2249, BFALSE, BFALSE);
							}
						BgL_iz00_1918 = BELONG_TO_LONG(BgL_auxz00_2246);
					}
					{	/* Llib/mmap.scm 188 */
						bool_t BgL_testz00_2254;

						{	/* Llib/mmap.scm 188 */
							long BgL_arg1923z00_1919;

							BgL_arg1923z00_1919 = BGL_MMAP_LENGTH(BgL_mmz00_1917);
							BgL_testz00_2254 =
								BOUND_CHECK(BgL_iz00_1918, BgL_arg1923z00_1919);
						}
						if (BgL_testz00_2254)
							{	/* Llib/mmap.scm 188 */
								unsigned char BgL_res2243z00_1920;

								{	/* Llib/mmap.scm 188 */
									unsigned char BgL_cz00_1921;

									BgL_cz00_1921 = BGL_MMAP_REF(BgL_mmz00_1917, BgL_iz00_1918);
									{	/* Llib/mmap.scm 188 */
										long BgL_arg1911z00_1922;

										BgL_arg1911z00_1922 = (BgL_iz00_1918 + ((long) 1));
										{	/* Llib/mmap.scm 188 */
											long BgL_res2242z00_1923;

											BGL_MMAP_RP_SET(BgL_mmz00_1917, BgL_arg1911z00_1922);
											BUNSPEC;
											BgL_res2242z00_1923 = BgL_arg1911z00_1922;
											BgL_res2242z00_1923;
									}}
									BgL_res2243z00_1920 = BgL_cz00_1921;
								}
								BgL_auxz00_2239 = BgL_res2243z00_1920;
							}
						else
							{	/* Llib/mmap.scm 188 */
								obj_t BgL_arg1914z00_1924;

								obj_t BgL_arg1915z00_1925;

								BgL_arg1914z00_1924 = BGl_symbol2349z00zz__mmapz00;
								{	/* Llib/mmap.scm 188 */
									char *BgL_arg1918z00_1926;

									{	/* Llib/mmap.scm 188 */
										obj_t BgL_arg1920z00_1927;

										{	/* Llib/mmap.scm 188 */
											long BgL_arg1921z00_1928;

											BgL_arg1921z00_1928 = BGL_MMAP_LENGTH(BgL_mmz00_1917);
											BgL_arg1920z00_1927 =
												BGl_2zd2zd2zz__r4_numbers_6_5z00(make_belong
												(BgL_arg1921z00_1928), BINT(((long) 1)));
										}
										{	/* Llib/mmap.scm 188 */

											BgL_arg1918z00_1926 =
												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
												(BgL_arg1920z00_1927, BINT(((long) 10)));
									}}
									BgL_arg1915z00_1925 =
										string_append_3(BGl_string2351z00zz__mmapz00,
										string_to_bstring(BgL_arg1918z00_1926),
										BGl_string2352z00zz__mmapz00);
								}
								BgL_auxz00_2239 =
									CCHAR(BGl_errorz00zz__errorz00(BgL_arg1914z00_1924,
										BgL_arg1915z00_1925, make_belong(BgL_iz00_1918)));
				}}}
				return BCHAR(BgL_auxz00_2239);
			}
		}
	}



/* mmap-set! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2setz12zc0zz__mmapz00(obj_t BgL_mmz00_27,
		long BgL_iz00_28, unsigned char BgL_cz00_29)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 199 */
			{	/* Llib/mmap.scm 200 */
				bool_t BgL_testz00_2272;

				{	/* Llib/mmap.scm 200 */
					long BgL_arg1937z00_1929;

					BgL_arg1937z00_1929 = BGL_MMAP_LENGTH(BgL_mmz00_27);
					BgL_testz00_2272 = BOUND_CHECK(BgL_iz00_28, BgL_arg1937z00_1929);
				}
				if (BgL_testz00_2272)
					{	/* Llib/mmap.scm 200 */
						BGL_MMAP_SET(BgL_mmz00_27, BgL_iz00_28, BgL_cz00_29);
						{	/* Llib/mmap.scm 200 */
							long BgL_arg1912z00_1930;

							BgL_arg1912z00_1930 = (BgL_iz00_28 + ((long) 1));
							{	/* Llib/mmap.scm 200 */
								long BgL_res2244z00_1931;

								BGL_MMAP_WP_SET(BgL_mmz00_27, BgL_arg1912z00_1930);
								BUNSPEC;
								BgL_res2244z00_1931 = BgL_arg1912z00_1930;
								return make_belong(BgL_res2244z00_1931);
							}
						}
					}
				else
					{	/* Llib/mmap.scm 200 */
						obj_t BgL_arg1925z00_1932;

						obj_t BgL_arg1926z00_1933;

						BgL_arg1925z00_1932 = BGl_symbol2354z00zz__mmapz00;
						{	/* Llib/mmap.scm 200 */
							char *BgL_arg1929z00_1934;

							{	/* Llib/mmap.scm 200 */
								obj_t BgL_arg1931z00_1935;

								{	/* Llib/mmap.scm 200 */
									long BgL_arg1932z00_1936;

									BgL_arg1932z00_1936 = BGL_MMAP_LENGTH(BgL_mmz00_27);
									BgL_arg1931z00_1935 =
										BGl_2zd2zd2zz__r4_numbers_6_5z00(make_belong
										(BgL_arg1932z00_1936), BINT(((long) 1)));
								}
								{	/* Llib/mmap.scm 200 */

									BgL_arg1929z00_1934 =
										BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
										(BgL_arg1931z00_1935, BINT(((long) 10)));
							}}
							BgL_arg1926z00_1933 =
								string_append_3(BGl_string2351z00zz__mmapz00,
								string_to_bstring(BgL_arg1929z00_1934),
								BGl_string2352z00zz__mmapz00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg1925z00_1932, BgL_arg1926z00_1933,
							make_belong(BgL_iz00_28));
					}
			}
		}
	}



/* _mmap-set! */
	obj_t BGl__mmapzd2setz12zc0zz__mmapz00(obj_t BgL_envz00_1791,
		obj_t BgL_mmz00_1792, obj_t BgL_iz00_1793, obj_t BgL_cz00_1794)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 199 */
			{	/* Llib/mmap.scm 200 */
				obj_t BgL_mmz00_1937;

				long BgL_iz00_1938;

				unsigned char BgL_cz00_1939;

				if (BGL_MMAPP(BgL_mmz00_1792))
					{	/* Llib/mmap.scm 200 */
						BgL_mmz00_1937 = BgL_mmz00_1792;
					}
				else
					{
						obj_t BgL_auxz00_2291;

						BgL_auxz00_2291 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 9251)), BGl_string2356z00zz__mmapz00,
							BGl_string2339z00zz__mmapz00, BgL_mmz00_1792);
						FAILURE(BgL_auxz00_2291, BFALSE, BFALSE);
					}
				{	/* Llib/mmap.scm 200 */
					obj_t BgL_auxz00_2295;

					if (ELONGP(BgL_iz00_1793))
						{	/* Llib/mmap.scm 200 */
							BgL_auxz00_2295 = BgL_iz00_1793;
						}
					else
						{
							obj_t BgL_auxz00_2298;

							BgL_auxz00_2298 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 9251)), BGl_string2356z00zz__mmapz00,
								BGl_string2343z00zz__mmapz00, BgL_iz00_1793);
							FAILURE(BgL_auxz00_2298, BFALSE, BFALSE);
						}
					BgL_iz00_1938 = BELONG_TO_LONG(BgL_auxz00_2295);
				}
				{	/* Llib/mmap.scm 200 */
					obj_t BgL_auxz00_2303;

					if (CHARP(BgL_cz00_1794))
						{	/* Llib/mmap.scm 200 */
							BgL_auxz00_2303 = BgL_cz00_1794;
						}
					else
						{
							obj_t BgL_auxz00_2306;

							BgL_auxz00_2306 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 9251)), BGl_string2356z00zz__mmapz00,
								BGl_string2348z00zz__mmapz00, BgL_cz00_1794);
							FAILURE(BgL_auxz00_2306, BFALSE, BFALSE);
						}
					BgL_cz00_1939 = CCHAR(BgL_auxz00_2303);
				}
				{	/* Llib/mmap.scm 200 */
					bool_t BgL_testz00_2311;

					{	/* Llib/mmap.scm 200 */
						long BgL_arg1937z00_1940;

						BgL_arg1937z00_1940 = BGL_MMAP_LENGTH(BgL_mmz00_1937);
						BgL_testz00_2311 = BOUND_CHECK(BgL_iz00_1938, BgL_arg1937z00_1940);
					}
					if (BgL_testz00_2311)
						{	/* Llib/mmap.scm 200 */
							BGL_MMAP_SET(BgL_mmz00_1937, BgL_iz00_1938, BgL_cz00_1939);
							{	/* Llib/mmap.scm 200 */
								long BgL_arg1912z00_1941;

								BgL_arg1912z00_1941 = (BgL_iz00_1938 + ((long) 1));
								{	/* Llib/mmap.scm 200 */
									long BgL_res2244z00_1942;

									BGL_MMAP_WP_SET(BgL_mmz00_1937, BgL_arg1912z00_1941);
									BUNSPEC;
									BgL_res2244z00_1942 = BgL_arg1912z00_1941;
									return make_belong(BgL_res2244z00_1942);
								}
							}
						}
					else
						{	/* Llib/mmap.scm 200 */
							obj_t BgL_arg1925z00_1943;

							obj_t BgL_arg1926z00_1944;

							BgL_arg1925z00_1943 = BGl_symbol2354z00zz__mmapz00;
							{	/* Llib/mmap.scm 200 */
								char *BgL_arg1929z00_1945;

								{	/* Llib/mmap.scm 200 */
									obj_t BgL_arg1931z00_1946;

									{	/* Llib/mmap.scm 200 */
										long BgL_arg1932z00_1947;

										BgL_arg1932z00_1947 = BGL_MMAP_LENGTH(BgL_mmz00_1937);
										BgL_arg1931z00_1946 =
											BGl_2zd2zd2zz__r4_numbers_6_5z00(make_belong
											(BgL_arg1932z00_1947), BINT(((long) 1)));
									}
									{	/* Llib/mmap.scm 200 */

										BgL_arg1929z00_1945 =
											BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
											(BgL_arg1931z00_1946, BINT(((long) 10)));
								}}
								BgL_arg1926z00_1944 =
									string_append_3(BGl_string2351z00zz__mmapz00,
									string_to_bstring(BgL_arg1929z00_1945),
									BGl_string2352z00zz__mmapz00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg1925z00_1943,
								BgL_arg1926z00_1944, make_belong(BgL_iz00_1938));
						}
				}
			}
		}
	}



/* mmap-substring */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2substringzd2zz__mmapz00(obj_t BgL_mmz00_30,
		long BgL_startz00_31, long BgL_endz00_32)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 211 */
			if ((BgL_endz00_32 < BgL_startz00_31))
				{	/* Llib/mmap.scm 214 */
					obj_t BgL_arg1940z00_843;

					long BgL_arg1942z00_845;

					BgL_arg1940z00_843 = BGl_symbol2357z00zz__mmapz00;
					{	/* Llib/mmap.scm 214 */
						long BgL_res2245z00_1510;

						{	/* Llib/mmap.scm 214 */
							long BgL_auxz00_2330;

							BgL_auxz00_2330 = (BgL_endz00_32 - BgL_startz00_31);
							BgL_res2245z00_1510 = LONG_TO_ELONG(BgL_auxz00_2330);
						}
						BgL_arg1942z00_845 = BgL_res2245z00_1510;
					}
					return
						BGl_errorz00zz__errorz00(BgL_arg1940z00_843,
						BGl_string2359z00zz__mmapz00, make_belong(BgL_arg1942z00_845));
				}
			else
				{	/* Llib/mmap.scm 215 */
					bool_t BgL_testz00_2335;

					{	/* Llib/mmap.scm 215 */
						long BgL_arg1959z00_868;

						{	/* Llib/mmap.scm 215 */
							long BgL_arg1961z00_870;

							BgL_arg1961z00_870 = BGL_MMAP_LENGTH(BgL_mmz00_30);
							BgL_arg1959z00_868 = (((long) 1) + BgL_arg1961z00_870);
						}
						BgL_testz00_2335 = BOUND_CHECK(BgL_endz00_32, BgL_arg1959z00_868);
					}
					if (BgL_testz00_2335)
						{	/* Llib/mmap.scm 220 */
							bool_t BgL_testz00_2339;

							{	/* Llib/mmap.scm 220 */
								long BgL_arg1953z00_860;

								BgL_arg1953z00_860 = BGL_MMAP_LENGTH(BgL_mmz00_30);
								BgL_testz00_2339 =
									BOUND_CHECK(BgL_startz00_31, BgL_arg1953z00_860);
							}
							if (BgL_testz00_2339)
								{	/* Llib/mmap.scm 223 */
									obj_t BgL_rz00_848;

									{	/* Llib/mmap.scm 223 */
										long BgL_arg1951z00_858;

										{	/* Llib/mmap.scm 223 */
											long BgL_arg1952z00_859;

											{	/* Llib/mmap.scm 223 */
												long BgL_res2246z00_1517;

												{	/* Llib/mmap.scm 223 */
													long BgL_auxz00_2342;

													BgL_auxz00_2342 = (BgL_endz00_32 - BgL_startz00_31);
													BgL_res2246z00_1517 = LONG_TO_ELONG(BgL_auxz00_2342);
												}
												BgL_arg1952z00_859 = BgL_res2246z00_1517;
											}
											{	/* Llib/mmap.scm 223 */
												long BgL_res2247z00_1519;

												{	/* Llib/mmap.scm 223 */
													long BgL_auxz00_2345;

													{	/* Llib/mmap.scm 223 */
														long BgL_auxz00_2346;

														BgL_auxz00_2346 = ELONG_TO_LONG(BgL_arg1952z00_859);
														BgL_auxz00_2345 = ELONG_TO_LONG(BgL_auxz00_2346);
													}
													BgL_res2247z00_1519 = ELONG_TO_LONG(BgL_auxz00_2345);
												}
												BgL_arg1951z00_858 = BgL_res2247z00_1519;
										}}
										BgL_rz00_848 = make_string_sans_fill(BgL_arg1951z00_858);
									}
									{
										long BgL_iz00_850;

										long BgL_jz00_851;

										BgL_iz00_850 = BgL_startz00_31;
										BgL_jz00_851 = ((long) 0);
									BgL_zc3anonymousza31945ze3z83_852:
										if ((BgL_iz00_850 == BgL_endz00_32))
											{	/* Llib/mmap.scm 226 */
												{	/* Llib/mmap.scm 228 */
													long BgL_res2248z00_1524;

													BGL_MMAP_RP_SET(BgL_mmz00_30, BgL_iz00_850);
													BUNSPEC;
													BgL_res2248z00_1524 = BgL_iz00_850;
													BgL_res2248z00_1524;
												}
												return BgL_rz00_848;
											}
										else
											{	/* Llib/mmap.scm 226 */
												{	/* Llib/mmap.scm 231 */
													unsigned char BgL_arg1948z00_854;

													{	/* Llib/mmap.scm 231 */
														unsigned char BgL_res2250z00_1534;

														{	/* Llib/mmap.scm 231 */
															unsigned char BgL_cz00_1527;

															BgL_cz00_1527 =
																BGL_MMAP_REF(BgL_mmz00_30, BgL_iz00_850);
															{	/* Llib/mmap.scm 231 */
																long BgL_arg1911z00_1528;

																BgL_arg1911z00_1528 =
																	(BgL_iz00_850 + ((long) 1));
																{	/* Llib/mmap.scm 231 */
																	long BgL_res2249z00_1533;

																	BGL_MMAP_RP_SET(BgL_mmz00_30,
																		BgL_arg1911z00_1528);
																	BUNSPEC;
																	BgL_res2249z00_1533 = BgL_arg1911z00_1528;
																	BgL_res2249z00_1533;
															}}
															BgL_res2250z00_1534 = BgL_cz00_1527;
														}
														BgL_arg1948z00_854 = BgL_res2250z00_1534;
													}
													STRING_SET(BgL_rz00_848, BgL_jz00_851,
														BgL_arg1948z00_854);
												}
												{	/* Llib/mmap.scm 232 */
													long BgL_arg1949z00_855;

													long BgL_arg1950z00_856;

													BgL_arg1949z00_855 =
														(BgL_iz00_850 + LONG_TO_ELONG(((long) 1)));
													BgL_arg1950z00_856 = (BgL_jz00_851 + ((long) 1));
													{
														long BgL_jz00_2362;

														long BgL_iz00_2361;

														BgL_iz00_2361 = BgL_arg1949z00_855;
														BgL_jz00_2362 = BgL_arg1950z00_856;
														BgL_jz00_851 = BgL_jz00_2362;
														BgL_iz00_850 = BgL_iz00_2361;
														goto BgL_zc3anonymousza31945ze3z83_852;
													}
												}
											}
									}
								}
							else
								{	/* Llib/mmap.scm 220 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol2357z00zz__mmapz00,
										BGl_string2360z00zz__mmapz00, make_belong(BgL_startz00_31));
								}
						}
					else
						{	/* Llib/mmap.scm 216 */
							obj_t BgL_arg1954z00_861;

							obj_t BgL_arg1955z00_862;

							BgL_arg1954z00_861 = BGl_symbol2357z00zz__mmapz00;
							{	/* Llib/mmap.scm 217 */
								char *BgL_arg1957z00_864;

								{	/* Llib/mmap.scm 218 */
									long BgL_arg1958z00_865;

									BgL_arg1958z00_865 = BGL_MMAP_LENGTH(BgL_mmz00_30);
									{	/* Ieee/number.scm 133 */

										BgL_arg1957z00_864 =
											BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(make_belong
											(BgL_arg1958z00_865), BINT(((long) 10)));
								}}
								BgL_arg1955z00_862 =
									string_append(BGl_string2361z00zz__mmapz00,
									string_to_bstring(BgL_arg1957z00_864));
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg1954z00_861, BgL_arg1955z00_862,
								make_belong(BgL_endz00_32));
						}
				}
		}
	}



/* _mmap-substring */
	obj_t BGl__mmapzd2substringzd2zz__mmapz00(obj_t BgL_envz00_1795,
		obj_t BgL_mmz00_1796, obj_t BgL_startz00_1797, obj_t BgL_endz00_1798)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 211 */
			{	/* Llib/mmap.scm 213 */
				long BgL_auxz00_2389;

				long BgL_auxz00_2380;

				obj_t BgL_auxz00_2373;

				{	/* Llib/mmap.scm 213 */
					obj_t BgL_auxz00_2390;

					if (ELONGP(BgL_endz00_1798))
						{	/* Llib/mmap.scm 213 */
							BgL_auxz00_2390 = BgL_endz00_1798;
						}
					else
						{
							obj_t BgL_auxz00_2393;

							BgL_auxz00_2393 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 9736)), BGl_string2362z00zz__mmapz00,
								BGl_string2343z00zz__mmapz00, BgL_endz00_1798);
							FAILURE(BgL_auxz00_2393, BFALSE, BFALSE);
						}
					BgL_auxz00_2389 = BELONG_TO_LONG(BgL_auxz00_2390);
				}
				{	/* Llib/mmap.scm 213 */
					obj_t BgL_auxz00_2381;

					if (ELONGP(BgL_startz00_1797))
						{	/* Llib/mmap.scm 213 */
							BgL_auxz00_2381 = BgL_startz00_1797;
						}
					else
						{
							obj_t BgL_auxz00_2384;

							BgL_auxz00_2384 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 9736)), BGl_string2362z00zz__mmapz00,
								BGl_string2343z00zz__mmapz00, BgL_startz00_1797);
							FAILURE(BgL_auxz00_2384, BFALSE, BFALSE);
						}
					BgL_auxz00_2380 = BELONG_TO_LONG(BgL_auxz00_2381);
				}
				if (BGL_MMAPP(BgL_mmz00_1796))
					{	/* Llib/mmap.scm 213 */
						BgL_auxz00_2373 = BgL_mmz00_1796;
					}
				else
					{
						obj_t BgL_auxz00_2376;

						BgL_auxz00_2376 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 9736)), BGl_string2362z00zz__mmapz00,
							BGl_string2339z00zz__mmapz00, BgL_mmz00_1796);
						FAILURE(BgL_auxz00_2376, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2substringzd2zz__mmapz00(BgL_auxz00_2373, BgL_auxz00_2380,
					BgL_auxz00_2389);
			}
		}
	}



/* mmap-substring-set! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2substringzd2setz12z12zz__mmapz00(obj_t
		BgL_mmz00_33, long BgL_oz00_34, obj_t BgL_sz00_35)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 237 */
			{	/* Llib/mmap.scm 238 */
				long BgL_lenz00_871;

				BgL_lenz00_871 = STRING_LENGTH(BgL_sz00_35);
				if ((BgL_oz00_34 < ((long) 0)))
					{	/* Llib/mmap.scm 240 */
						return
							BGl_errorz00zz__errorz00(BGl_string2363z00zz__mmapz00,
							BGl_string2360z00zz__mmapz00, make_belong(BgL_oz00_34));
					}
				else
					{	/* Llib/mmap.scm 242 */
						bool_t BgL_testz00_2404;

						{	/* Llib/mmap.scm 242 */
							long BgL_arg1990z00_905;

							{	/* Llib/mmap.scm 242 */
								long BgL_arg1991z00_906;

								BgL_arg1991z00_906 = BGL_MMAP_LENGTH(BgL_mmz00_33);
								BgL_arg1990z00_905 = (BgL_arg1991z00_906 + ((long) 1));
							}
							BgL_testz00_2404 = BOUND_CHECK(BgL_oz00_34, BgL_arg1990z00_905);
						}
						if (BgL_testz00_2404)
							{	/* Llib/mmap.scm 248 */
								bool_t BgL_testz00_2408;

								{	/* Llib/mmap.scm 248 */
									long BgL_arg1979z00_892;

									long BgL_arg1980z00_893;

									{	/* Llib/mmap.scm 248 */
										long BgL_arg1981z00_894;

										BgL_arg1981z00_894 = LONG_TO_ELONG(BgL_lenz00_871);
										BgL_arg1979z00_892 = (BgL_oz00_34 + BgL_arg1981z00_894);
									}
									{	/* Llib/mmap.scm 249 */
										long BgL_arg1982z00_895;

										BgL_arg1982z00_895 = BGL_MMAP_LENGTH(BgL_mmz00_33);
										BgL_arg1980z00_893 = (BgL_arg1982z00_895 + ((long) 1));
									}
									BgL_testz00_2408 =
										BOUND_CHECK(BgL_arg1979z00_892, BgL_arg1980z00_893);
								}
								if (BgL_testz00_2408)
									{
										long BgL_iz00_876;

										long BgL_jz00_877;

										BgL_iz00_876 = ((long) 0);
										BgL_jz00_877 = BgL_oz00_34;
									BgL_zc3anonymousza31965ze3z83_878:
										if ((BgL_iz00_876 == BgL_lenz00_871))
											{	/* Llib/mmap.scm 258 */
												{	/* Llib/mmap.scm 260 */
													long BgL_res2251z00_1559;

													BGL_MMAP_WP_SET(BgL_mmz00_33, BgL_jz00_877);
													BUNSPEC;
													BgL_res2251z00_1559 = BgL_jz00_877;
													BgL_res2251z00_1559;
												}
												return BgL_mmz00_33;
											}
										else
											{	/* Llib/mmap.scm 258 */
												{	/* Llib/mmap.scm 263 */
													unsigned char BgL_arg1967z00_880;

													BgL_arg1967z00_880 =
														STRING_REF(BgL_sz00_35, BgL_iz00_876);
													BGL_MMAP_SET(BgL_mmz00_33, BgL_jz00_877,
														BgL_arg1967z00_880);
													{	/* Llib/mmap.scm 263 */
														long BgL_arg1912z00_1565;

														BgL_arg1912z00_1565 = (BgL_jz00_877 + ((long) 1));
														{	/* Llib/mmap.scm 263 */
															long BgL_res2252z00_1570;

															BGL_MMAP_WP_SET(BgL_mmz00_33,
																BgL_arg1912z00_1565);
															BUNSPEC;
															BgL_res2252z00_1570 = BgL_arg1912z00_1565;
															BgL_res2252z00_1570;
												}}}
												{	/* Llib/mmap.scm 264 */
													long BgL_arg1968z00_881;

													long BgL_arg1969z00_882;

													BgL_arg1968z00_881 = (BgL_iz00_876 + ((long) 1));
													BgL_arg1969z00_882 =
														(BgL_jz00_877 + LONG_TO_ELONG(((long) 1)));
													{
														long BgL_jz00_2425;

														long BgL_iz00_2424;

														BgL_iz00_2424 = BgL_arg1968z00_881;
														BgL_jz00_2425 = BgL_arg1969z00_882;
														BgL_jz00_877 = BgL_jz00_2425;
														BgL_iz00_876 = BgL_iz00_2424;
														goto BgL_zc3anonymousza31965ze3z83_878;
													}
												}
											}
									}
								else
									{	/* Llib/mmap.scm 250 */
										obj_t BgL_arg1970z00_884;

										obj_t BgL_arg1971z00_885;

										obj_t BgL_arg1972z00_886;

										BgL_arg1970z00_884 = BGl_symbol2364z00zz__mmapz00;
										{	/* Llib/mmap.scm 251 */
											char *BgL_arg1974z00_888;

											{	/* Llib/mmap.scm 252 */
												long BgL_arg1976z00_890;

												BgL_arg1976z00_890 = BGL_MMAP_LENGTH(BgL_mmz00_33);
												BgL_arg1974z00_888 =
													BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
													(make_belong(BgL_arg1976z00_890), BINT(((long) 1)));
											}
											BgL_arg1971z00_885 =
												string_append_3(BGl_string2351z00zz__mmapz00,
												string_to_bstring(BgL_arg1974z00_888),
												BGl_string2352z00zz__mmapz00);
										}
										BgL_arg1972z00_886 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(make_belong(BgL_oz00_34),
											BINT(BgL_lenz00_871));
										return
											BGl_errorz00zz__errorz00(BgL_arg1970z00_884,
											BgL_arg1971z00_885, BgL_arg1972z00_886);
									}
							}
						else
							{	/* Llib/mmap.scm 243 */
								obj_t BgL_arg1984z00_897;

								obj_t BgL_arg1985z00_898;

								BgL_arg1984z00_897 = BGl_symbol2366z00zz__mmapz00;
								{	/* Llib/mmap.scm 244 */
									char *BgL_arg1987z00_900;

									{	/* Llib/mmap.scm 245 */
										long BgL_arg1989z00_902;

										BgL_arg1989z00_902 = BGL_MMAP_LENGTH(BgL_mmz00_33);
										{	/* Ieee/number.scm 133 */

											BgL_arg1987z00_900 =
												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
												(make_belong(BgL_arg1989z00_902), BINT(((long) 10)));
									}}
									BgL_arg1985z00_898 =
										string_append_3(BGl_string2351z00zz__mmapz00,
										string_to_bstring(BgL_arg1987z00_900),
										BGl_string2367z00zz__mmapz00);
								}
								return
									BGl_errorz00zz__errorz00(BgL_arg1984z00_897,
									BgL_arg1985z00_898, make_belong(BgL_oz00_34));
							}
					}
			}
		}
	}



/* _mmap-substring-set! */
	obj_t BGl__mmapzd2substringzd2setz12z12zz__mmapz00(obj_t BgL_envz00_1799,
		obj_t BgL_mmz00_1800, obj_t BgL_oz00_1801, obj_t BgL_sz00_1802)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 237 */
			{	/* Llib/mmap.scm 238 */
				obj_t BgL_auxz00_2460;

				long BgL_auxz00_2451;

				obj_t BgL_auxz00_2444;

				if (STRINGP(BgL_sz00_1802))
					{	/* Llib/mmap.scm 238 */
						BgL_auxz00_2460 = BgL_sz00_1802;
					}
				else
					{
						obj_t BgL_auxz00_2463;

						BgL_auxz00_2463 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 10731)), BGl_string2368z00zz__mmapz00,
							BGl_string2336z00zz__mmapz00, BgL_sz00_1802);
						FAILURE(BgL_auxz00_2463, BFALSE, BFALSE);
					}
				{	/* Llib/mmap.scm 238 */
					obj_t BgL_auxz00_2452;

					if (ELONGP(BgL_oz00_1801))
						{	/* Llib/mmap.scm 238 */
							BgL_auxz00_2452 = BgL_oz00_1801;
						}
					else
						{
							obj_t BgL_auxz00_2455;

							BgL_auxz00_2455 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 10731)), BGl_string2368z00zz__mmapz00,
								BGl_string2343z00zz__mmapz00, BgL_oz00_1801);
							FAILURE(BgL_auxz00_2455, BFALSE, BFALSE);
						}
					BgL_auxz00_2451 = BELONG_TO_LONG(BgL_auxz00_2452);
				}
				if (BGL_MMAPP(BgL_mmz00_1800))
					{	/* Llib/mmap.scm 238 */
						BgL_auxz00_2444 = BgL_mmz00_1800;
					}
				else
					{
						obj_t BgL_auxz00_2447;

						BgL_auxz00_2447 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 10731)), BGl_string2368z00zz__mmapz00,
							BGl_string2339z00zz__mmapz00, BgL_mmz00_1800);
						FAILURE(BgL_auxz00_2447, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_auxz00_2444,
					BgL_auxz00_2451, BgL_auxz00_2460);
			}
		}
	}



/* mmap-get-char */
	BGL_EXPORTED_DEF unsigned char BGl_mmapzd2getzd2charz00zz__mmapz00(obj_t
		BgL_mmz00_36)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 269 */
			{	/* Llib/mmap.scm 270 */
				long BgL_arg1993z00_1948;

				BgL_arg1993z00_1948 = BGL_MMAP_RP_GET(BgL_mmz00_36);
				{	/* Llib/mmap.scm 270 */
					unsigned char BgL_res2254z00_1949;

					{	/* Llib/mmap.scm 270 */
						unsigned char BgL_cz00_1950;

						BgL_cz00_1950 = BGL_MMAP_REF(BgL_mmz00_36, BgL_arg1993z00_1948);
						{	/* Llib/mmap.scm 270 */
							long BgL_arg1911z00_1951;

							BgL_arg1911z00_1951 = (BgL_arg1993z00_1948 + ((long) 1));
							{	/* Llib/mmap.scm 270 */
								long BgL_res2253z00_1952;

								BGL_MMAP_RP_SET(BgL_mmz00_36, BgL_arg1911z00_1951);
								BUNSPEC;
								BgL_res2253z00_1952 = BgL_arg1911z00_1951;
								BgL_res2253z00_1952;
						}}
						BgL_res2254z00_1949 = BgL_cz00_1950;
					}
					return BgL_res2254z00_1949;
				}
			}
		}
	}



/* _mmap-get-char */
	obj_t BGl__mmapzd2getzd2charz00zz__mmapz00(obj_t BgL_envz00_1803,
		obj_t BgL_mmz00_1804)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 269 */
			{	/* Llib/mmap.scm 270 */
				unsigned char BgL_auxz00_2472;

				{	/* Llib/mmap.scm 270 */
					unsigned char BgL_res2377z00_1959;

					{	/* Llib/mmap.scm 270 */
						obj_t BgL_mmz00_1953;

						if (BGL_MMAPP(BgL_mmz00_1804))
							{	/* Llib/mmap.scm 270 */
								BgL_mmz00_1953 = BgL_mmz00_1804;
							}
						else
							{
								obj_t BgL_auxz00_2475;

								BgL_auxz00_2475 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
									BINT(((long) 11772)), BGl_string2369z00zz__mmapz00,
									BGl_string2339z00zz__mmapz00, BgL_mmz00_1804);
								FAILURE(BgL_auxz00_2475, BFALSE, BFALSE);
							}
						{	/* Llib/mmap.scm 270 */
							long BgL_arg1993z00_1954;

							BgL_arg1993z00_1954 = BGL_MMAP_RP_GET(BgL_mmz00_1953);
							{	/* Llib/mmap.scm 270 */
								unsigned char BgL_res2254z00_1955;

								{	/* Llib/mmap.scm 270 */
									unsigned char BgL_cz00_1956;

									BgL_cz00_1956 =
										BGL_MMAP_REF(BgL_mmz00_1953, BgL_arg1993z00_1954);
									{	/* Llib/mmap.scm 270 */
										long BgL_arg1911z00_1957;

										BgL_arg1911z00_1957 = (BgL_arg1993z00_1954 + ((long) 1));
										{	/* Llib/mmap.scm 270 */
											long BgL_res2253z00_1958;

											BGL_MMAP_RP_SET(BgL_mmz00_1953, BgL_arg1911z00_1957);
											BUNSPEC;
											BgL_res2253z00_1958 = BgL_arg1911z00_1957;
											BgL_res2253z00_1958;
									}}
									BgL_res2254z00_1955 = BgL_cz00_1956;
								}
								BgL_res2377z00_1959 = BgL_res2254z00_1955;
					}}}
					BgL_auxz00_2472 = BgL_res2377z00_1959;
				}
				return BCHAR(BgL_auxz00_2472);
			}
		}
	}



/* mmap-put-char! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2putzd2charz12z12zz__mmapz00(obj_t
		BgL_mmz00_37, unsigned char BgL_cz00_38)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 275 */
			{	/* Llib/mmap.scm 276 */
				long BgL_arg1994z00_1960;

				BgL_arg1994z00_1960 = BGL_MMAP_WP_GET(BgL_mmz00_37);
				BGL_MMAP_SET(BgL_mmz00_37, BgL_arg1994z00_1960, BgL_cz00_38);
				{	/* Llib/mmap.scm 276 */
					long BgL_arg1912z00_1961;

					BgL_arg1912z00_1961 = (BgL_arg1994z00_1960 + ((long) 1));
					{	/* Llib/mmap.scm 276 */
						long BgL_res2255z00_1962;

						BGL_MMAP_WP_SET(BgL_mmz00_37, BgL_arg1912z00_1961);
						BUNSPEC;
						BgL_res2255z00_1962 = BgL_arg1912z00_1961;
						return make_belong(BgL_res2255z00_1962);
					}
				}
			}
		}
	}



/* _mmap-put-char! */
	obj_t BGl__mmapzd2putzd2charz12z12zz__mmapz00(obj_t BgL_envz00_1805,
		obj_t BgL_mmz00_1806, obj_t BgL_cz00_1807)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 275 */
			{	/* Llib/mmap.scm 276 */
				obj_t BgL_mmz00_1963;

				unsigned char BgL_cz00_1964;

				if (BGL_MMAPP(BgL_mmz00_1806))
					{	/* Llib/mmap.scm 276 */
						BgL_mmz00_1963 = BgL_mmz00_1806;
					}
				else
					{
						obj_t BgL_auxz00_2491;

						BgL_auxz00_2491 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 12071)), BGl_string2370z00zz__mmapz00,
							BGl_string2339z00zz__mmapz00, BgL_mmz00_1806);
						FAILURE(BgL_auxz00_2491, BFALSE, BFALSE);
					}
				{	/* Llib/mmap.scm 276 */
					obj_t BgL_auxz00_2495;

					if (CHARP(BgL_cz00_1807))
						{	/* Llib/mmap.scm 276 */
							BgL_auxz00_2495 = BgL_cz00_1807;
						}
					else
						{
							obj_t BgL_auxz00_2498;

							BgL_auxz00_2498 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 12071)), BGl_string2370z00zz__mmapz00,
								BGl_string2348z00zz__mmapz00, BgL_cz00_1807);
							FAILURE(BgL_auxz00_2498, BFALSE, BFALSE);
						}
					BgL_cz00_1964 = CCHAR(BgL_auxz00_2495);
				}
				{	/* Llib/mmap.scm 276 */
					long BgL_arg1994z00_1965;

					BgL_arg1994z00_1965 = BGL_MMAP_WP_GET(BgL_mmz00_1963);
					BGL_MMAP_SET(BgL_mmz00_1963, BgL_arg1994z00_1965, BgL_cz00_1964);
					{	/* Llib/mmap.scm 276 */
						long BgL_arg1912z00_1966;

						BgL_arg1912z00_1966 = (BgL_arg1994z00_1965 + ((long) 1));
						{	/* Llib/mmap.scm 276 */
							long BgL_res2255z00_1967;

							BGL_MMAP_WP_SET(BgL_mmz00_1963, BgL_arg1912z00_1966);
							BUNSPEC;
							BgL_res2255z00_1967 = BgL_arg1912z00_1966;
							return make_belong(BgL_res2255z00_1967);
						}
					}
				}
			}
		}
	}



/* mmap-get-string */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2getzd2stringz00zz__mmapz00(obj_t
		BgL_mmz00_39, long BgL_lenz00_40)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 281 */
			{	/* Llib/mmap.scm 282 */
				long BgL_arg1995z00_1968;

				long BgL_arg1996z00_1969;

				BgL_arg1995z00_1968 = BGL_MMAP_RP_GET(BgL_mmz00_39);
				{	/* Llib/mmap.scm 282 */
					long BgL_arg1998z00_1970;

					BgL_arg1998z00_1970 = BGL_MMAP_RP_GET(BgL_mmz00_39);
					BgL_arg1996z00_1969 = (BgL_arg1998z00_1970 + BgL_lenz00_40);
				}
				return
					BGl_mmapzd2substringzd2zz__mmapz00(BgL_mmz00_39, BgL_arg1995z00_1968,
					BgL_arg1996z00_1969);
			}
		}
	}



/* _mmap-get-string */
	obj_t BGl__mmapzd2getzd2stringz00zz__mmapz00(obj_t BgL_envz00_1808,
		obj_t BgL_mmz00_1809, obj_t BgL_lenz00_1810)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 281 */
			{	/* Llib/mmap.scm 282 */
				obj_t BgL_res2378z00_1976;

				{	/* Llib/mmap.scm 282 */
					obj_t BgL_mmz00_1971;

					long BgL_lenz00_1972;

					if (BGL_MMAPP(BgL_mmz00_1809))
						{	/* Llib/mmap.scm 282 */
							BgL_mmz00_1971 = BgL_mmz00_1809;
						}
					else
						{
							obj_t BgL_auxz00_2514;

							BgL_auxz00_2514 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
								BINT(((long) 12402)), BGl_string2371z00zz__mmapz00,
								BGl_string2339z00zz__mmapz00, BgL_mmz00_1809);
							FAILURE(BgL_auxz00_2514, BFALSE, BFALSE);
						}
					{	/* Llib/mmap.scm 282 */
						obj_t BgL_auxz00_2518;

						if (ELONGP(BgL_lenz00_1810))
							{	/* Llib/mmap.scm 282 */
								BgL_auxz00_2518 = BgL_lenz00_1810;
							}
						else
							{
								obj_t BgL_auxz00_2521;

								BgL_auxz00_2521 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
									BINT(((long) 12402)), BGl_string2371z00zz__mmapz00,
									BGl_string2343z00zz__mmapz00, BgL_lenz00_1810);
								FAILURE(BgL_auxz00_2521, BFALSE, BFALSE);
							}
						BgL_lenz00_1972 = BELONG_TO_LONG(BgL_auxz00_2518);
					}
					{	/* Llib/mmap.scm 282 */
						long BgL_arg1995z00_1973;

						long BgL_arg1996z00_1974;

						BgL_arg1995z00_1973 = BGL_MMAP_RP_GET(BgL_mmz00_1971);
						{	/* Llib/mmap.scm 282 */
							long BgL_arg1998z00_1975;

							BgL_arg1998z00_1975 = BGL_MMAP_RP_GET(BgL_mmz00_1971);
							BgL_arg1996z00_1974 = (BgL_arg1998z00_1975 + BgL_lenz00_1972);
						}
						BgL_res2378z00_1976 =
							BGl_mmapzd2substringzd2zz__mmapz00(BgL_mmz00_1971,
							BgL_arg1995z00_1973, BgL_arg1996z00_1974);
				}}
				return BgL_res2378z00_1976;
			}
		}
	}



/* mmap-put-string! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2putzd2stringz12z12zz__mmapz00(obj_t
		BgL_mmz00_41, obj_t BgL_sz00_42)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 287 */
			{	/* Llib/mmap.scm 288 */
				long BgL_arg1999z00_1977;

				BgL_arg1999z00_1977 = BGL_MMAP_WP_GET(BgL_mmz00_41);
				return
					BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_mmz00_41,
					BgL_arg1999z00_1977, BgL_sz00_42);
			}
		}
	}



/* _mmap-put-string! */
	obj_t BGl__mmapzd2putzd2stringz12z12zz__mmapz00(obj_t BgL_envz00_1811,
		obj_t BgL_mmz00_1812, obj_t BgL_sz00_1813)
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 287 */
			{	/* Llib/mmap.scm 288 */
				obj_t BgL_mmz00_1978;

				obj_t BgL_sz00_1979;

				if (BGL_MMAPP(BgL_mmz00_1812))
					{	/* Llib/mmap.scm 288 */
						BgL_mmz00_1978 = BgL_mmz00_1812;
					}
				else
					{
						obj_t BgL_auxz00_2534;

						BgL_auxz00_2534 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 12718)), BGl_string2372z00zz__mmapz00,
							BGl_string2339z00zz__mmapz00, BgL_mmz00_1812);
						FAILURE(BgL_auxz00_2534, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_sz00_1813))
					{	/* Llib/mmap.scm 288 */
						BgL_sz00_1979 = BgL_sz00_1813;
					}
				else
					{
						obj_t BgL_auxz00_2540;

						BgL_auxz00_2540 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2334z00zz__mmapz00,
							BINT(((long) 12718)), BGl_string2372z00zz__mmapz00,
							BGl_string2336z00zz__mmapz00, BgL_sz00_1813);
						FAILURE(BgL_auxz00_2540, BFALSE, BFALSE);
					}
				{	/* Llib/mmap.scm 288 */
					long BgL_arg1999z00_1980;

					BgL_arg1999z00_1980 = BGL_MMAP_WP_GET(BgL_mmz00_1978);
					return
						BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_mmz00_1978,
						BgL_arg1999z00_1980, BgL_sz00_1979);
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__mmapz00()
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 19 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__mmapz00()
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 19 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__mmapz00()
	{
		AN_OBJECT;
		{	/* Llib/mmap.scm 19 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2373z00zz__mmapz00));
		}
	}

#ifdef __cplusplus
}
#endif
