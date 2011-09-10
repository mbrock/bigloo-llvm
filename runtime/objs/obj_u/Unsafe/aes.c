/*===========================================================================*/
/*   (Unsafe/aes.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/aes.scm -indent -o objs/obj_u/Unsafe/aes.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_aeszd2cipherzd2zz__aesz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_u8vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__aesz00 = BUNSPEC;
	static obj_t BGl_aeszd2passwordzd2ze3keyze3zz__aesz00(obj_t, int, obj_t);
	static obj_t BGl_genericzd2initzd2zz__aesz00();
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptzd2portzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_makezd2u8matrixzd2zz__aesz00(int, int);
	static bool_t BGl_addroundkeyz12z12zz__aesz00(obj_t, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptzd2portzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_hvector3431z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3433z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3435z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3437z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3439z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3441z00zz__aesz00 = BUNSPEC;
	static obj_t BGl__aeszd2ctrzd2decryptzd2portzd2zz__aesz00(obj_t, obj_t);
	static obj_t BGl_hvector3443z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3445z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3447z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3449z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3451z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_hvector3453z00zz__aesz00 = BUNSPEC;
	static bool_t BGl_shiftrowsz12z12zz__aesz00(obj_t, long);
	static obj_t BGl__aeszd2ctrzd2encryptzd2portzd2zz__aesz00(obj_t, obj_t);
	static obj_t BGl_aeszd2keyzd2expansionz00zz__aesz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__aesz00();
	extern obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_symbol3459z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_symbol3468z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__aesz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_vector3429z00zz__aesz00 = BUNSPEC;
	extern obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptzd2filezd2zz__aesz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__aesz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__datez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__sha1z00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__aesz00();
	static obj_t BGl__u8stringzd2refzd2zz__aesz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptzd2filezd2zz__aesz00(obj_t,
		obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	extern long bgl_current_seconds();
	static obj_t BGl__aeszd2ctrzd2decryptzd2filezd2zz__aesz00(obj_t, obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl_zc3exitza32023ze3z83zz__aesz00(obj_t, obj_t, obj_t);
	static obj_t BGl__aeszd2ctrzd2encryptzd2filezd2zz__aesz00(obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptz00zz__aesz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static int BGl_u8stringzd2refzd2zz__aesz00(obj_t, int);
	extern obj_t BGl_sha1sumzd2stringzd2zz__sha1z00(obj_t);
	static obj_t BGl_mixcolumnsz12z12zz__aesz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptz00zz__aesz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_subwordz12z12zz__aesz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
	static obj_t BGl_Rconnz00zz__aesz00 = BUNSPEC;
	extern obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t);
	static bool_t BGl_subbytesz12z12zz__aesz00(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__aeszd2ctrzd2encryptz00zz__aesz00(obj_t, obj_t);
	static obj_t BGl__aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl__aeszd2ctrzd2decryptz00zz__aesz00(obj_t, obj_t);
	static obj_t BGl_list3430z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3432z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3434z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3436z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3438z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3440z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3442z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3444z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3446z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3448z00zz__aesz00 = BUNSPEC;
	extern obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t);
	static obj_t BGl_list3450z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_list3452z00zz__aesz00 = BUNSPEC;
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl_list3454z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_zc3exitza32061ze3z83zz__aesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_list3474z00zz__aesz00 = BUNSPEC;
	static obj_t BGl_rotwordz12z12zz__aesz00(obj_t);
	static obj_t BGl__aeszd2ctrzd2encryptzd2stringzd2zz__aesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptzd2stringzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_Sboxz00zz__aesz00 = BUNSPEC;
	static obj_t BGl__aeszd2ctrzd2decryptzd2stringzd2zz__aesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptzd2stringzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__aesz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2encryptzd2portzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3480z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptzd2portzd2zz__aesz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2decryptzd2stringzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3481z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptzd2stringzd2zz__aesz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aeszd2ctrzd2decryptzd2envzd2zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3482z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptz00zz__aesz00, BFALSE, -1);
	extern obj_t BGl_mmapzd2lengthzd2envz00zz__mmapz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2decryptzd2mmapzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3483z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2encryptzd2stringzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3484z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptzd2stringzd2zz__aesz00, BFALSE, -1);
	extern obj_t BGl_mmapzd2refzd2envz00zz__mmapz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2encryptzd2filezd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3485z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptzd2filezd2zz__aesz00, BFALSE, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_u8stringzd2refzd2envz00zz__aesz00,
		BgL_bgl__u8stringza7d2refza73486z00, BGl__u8stringzd2refzd2zz__aesz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2encryptzd2mmapzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3487z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2decryptzd2portzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3488z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptzd2portzd2zz__aesz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3455z00zz__aesz00,
		BgL_bgl_string3455za700za7za7_3489za7, "/tmp/bigloo/runtime/Unsafe/aes.scm",
		34);
	      DEFINE_STRING(BGl_string3456z00zz__aesz00,
		BgL_bgl_string3456za700za7za7_3490za7, "_aes-ctr-encrypt", 16);
	      DEFINE_STRING(BGl_string3457z00zz__aesz00,
		BgL_bgl_string3457za700za7za7_3491za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3458z00zz__aesz00,
		BgL_bgl_string3458za700za7za7_3492za7, "mmap", 4);
	      DEFINE_STRING(BGl_string3460z00zz__aesz00,
		BgL_bgl_string3460za700za7za7_3493za7, "aes-ctr-encrypt", 15);
	      DEFINE_STRING(BGl_string3461z00zz__aesz00,
		BgL_bgl_string3461za700za7za7_3494za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string3462z00zz__aesz00,
		BgL_bgl_string3462za700za7za7_3495za7, "_aes-ctr-encrypt-string", 23);
	      DEFINE_STRING(BGl_string3463z00zz__aesz00,
		BgL_bgl_string3463za700za7za7_3496za7, "_aes-ctr-encrypt-mmap", 21);
	      DEFINE_STRING(BGl_string3464z00zz__aesz00,
		BgL_bgl_string3464za700za7za7_3497za7, "_aes-ctr-encrypt-file", 21);
	      DEFINE_STRING(BGl_string3465z00zz__aesz00,
		BgL_bgl_string3465za700za7za7_3498za7, "_aes-ctr-encrypt-port", 21);
	      DEFINE_STRING(BGl_string3466z00zz__aesz00,
		BgL_bgl_string3466za700za7za7_3499za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3467z00zz__aesz00,
		BgL_bgl_string3467za700za7za7_3500za7, "_aes-ctr-decrypt", 16);
	      DEFINE_STRING(BGl_string3470z00zz__aesz00,
		BgL_bgl_string3470za700za7za7_3501za7, "_aes-ctr-decrypt-string", 23);
	      DEFINE_STRING(BGl_string3469z00zz__aesz00,
		BgL_bgl_string3469za700za7za7_3502za7, "aes-ctr-decrypt", 15);
	      DEFINE_STRING(BGl_string3471z00zz__aesz00,
		BgL_bgl_string3471za700za7za7_3503za7, "_aes-ctr-decrypt-mmap", 21);
	      DEFINE_STRING(BGl_string3472z00zz__aesz00,
		BgL_bgl_string3472za700za7za7_3504za7, "_aes-ctr-decrypt-file", 21);
	      DEFINE_STRING(BGl_string3473z00zz__aesz00,
		BgL_bgl_string3473za700za7za7_3505za7, "_aes-ctr-decrypt-port", 21);
	      DEFINE_STRING(BGl_string3475z00zz__aesz00,
		BgL_bgl_string3475za700za7za7_3506za7, "Illegal bit keys", 16);
	      DEFINE_STRING(BGl_string3476z00zz__aesz00,
		BgL_bgl_string3476za700za7za7_3507za7, "string or mmap", 14);
	      DEFINE_STRING(BGl_string3477z00zz__aesz00,
		BgL_bgl_string3477za700za7za7_3508za7, "_u8string-ref", 13);
	extern obj_t BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00;
	   
		 
		DEFINE_STRING(BGl_string3478z00zz__aesz00,
		BgL_bgl_string3478za700za7za7_3509za7, "int", 3);
	      DEFINE_STRING(BGl_string3479z00zz__aesz00,
		BgL_bgl_string3479za700za7za7_3510za7, "__aes", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aeszd2ctrzd2encryptzd2envzd2zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3511z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptz00zz__aesz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2decryptzd2filezd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3512z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptzd2filezd2zz__aesz00, BFALSE, -1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__aesz00(long
		BgL_checksumz00_4759, char *BgL_fromz00_4760)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__aesz00))
				{
					BGl_requirezd2initializa7ationz75zz__aesz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__aesz00();
					BGl_importedzd2moduleszd2initz00zz__aesz00();
					BGl_toplevelzd2initzd2zz__aesz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__aesz00()
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 20 */
			BGl_list3432z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 0)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3431z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3432z00zz__aesz00);
			BGl_list3434z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 1)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3433z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3434z00zz__aesz00);
			BGl_list3436z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 2)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3435z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3436z00zz__aesz00);
			BGl_list3438z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 4)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3437z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3438z00zz__aesz00);
			BGl_list3440z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 8)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3439z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3440z00zz__aesz00);
			BGl_list3442z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 16)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3441z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3442z00zz__aesz00);
			BGl_list3444z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 32)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3443z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3444z00zz__aesz00);
			BGl_list3446z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 64)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3445z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3446z00zz__aesz00);
			BGl_list3448z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 128)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3447z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3448z00zz__aesz00);
			BGl_list3450z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 27)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3449z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3450z00zz__aesz00);
			BGl_list3452z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 54)),
				MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)), BNIL))));
			BGl_hvector3451z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3452z00zz__aesz00);
			BGl_list3430z00zz__aesz00 =
				MAKE_PAIR(BGl_hvector3431z00zz__aesz00,
				MAKE_PAIR(BGl_hvector3433z00zz__aesz00,
					MAKE_PAIR(BGl_hvector3435z00zz__aesz00,
						MAKE_PAIR(BGl_hvector3437z00zz__aesz00,
							MAKE_PAIR(BGl_hvector3439z00zz__aesz00,
								MAKE_PAIR(BGl_hvector3441z00zz__aesz00,
									MAKE_PAIR(BGl_hvector3443z00zz__aesz00,
										MAKE_PAIR(BGl_hvector3445z00zz__aesz00,
											MAKE_PAIR(BGl_hvector3447z00zz__aesz00,
												MAKE_PAIR(BGl_hvector3449z00zz__aesz00,
													MAKE_PAIR(BGl_hvector3451z00zz__aesz00,
														BNIL)))))))))));
			BGl_vector3429z00zz__aesz00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BGl_list3430z00zz__aesz00);
			BGl_list3454z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 99)), MAKE_PAIR(BINT(((long) 124)),
					MAKE_PAIR(BINT(((long) 119)), MAKE_PAIR(BINT(((long) 123)),
							MAKE_PAIR(BINT(((long) 242)), MAKE_PAIR(BINT(((long) 107)),
									MAKE_PAIR(BINT(((long) 111)), MAKE_PAIR(BINT(((long) 197)),
											MAKE_PAIR(BINT(((long) 48)), MAKE_PAIR(BINT(((long) 1)),
													MAKE_PAIR(BINT(((long) 103)),
														MAKE_PAIR(BINT(((long) 43)),
															MAKE_PAIR(BINT(((long) 254)),
																MAKE_PAIR(BINT(((long) 215)),
																	MAKE_PAIR(BINT(((long) 171)),
																		MAKE_PAIR(BINT(((long) 118)),
																			MAKE_PAIR(BINT(((long) 202)),
																				MAKE_PAIR(BINT(((long) 130)),
																					MAKE_PAIR(BINT(((long) 201)),
																						MAKE_PAIR(BINT(((long) 125)),
																							MAKE_PAIR(BINT(((long) 250)),
																								MAKE_PAIR(BINT(((long) 89)),
																									MAKE_PAIR(BINT(((long) 71)),
																										MAKE_PAIR(BINT(((long)
																													240)),
																											MAKE_PAIR(BINT(((long)
																														173)),
																												MAKE_PAIR(BINT(((long)
																															212)),
																													MAKE_PAIR(BINT(((long)
																																162)),
																														MAKE_PAIR(BINT((
																																	(long) 175)),
																															MAKE_PAIR(BINT((
																																		(long)
																																		156)),
																																MAKE_PAIR(BINT((
																																			(long)
																																			164)),
																																	MAKE_PAIR(BINT
																																		(((long)
																																				114)),
																																		MAKE_PAIR
																																		(BINT((
																																					(long)
																																					192)),
																																			MAKE_PAIR
																																			(BINT((
																																						(long)
																																						183)),
																																				MAKE_PAIR
																																				(BINT((
																																							(long)
																																							253)),
																																					MAKE_PAIR
																																					(BINT(
																																							((long) 147)), MAKE_PAIR(BINT(((long) 38)), MAKE_PAIR(BINT(((long) 54)), MAKE_PAIR(BINT(((long) 63)), MAKE_PAIR(BINT(((long) 247)), MAKE_PAIR(BINT(((long) 204)), MAKE_PAIR(BINT(((long) 52)), MAKE_PAIR(BINT(((long) 165)), MAKE_PAIR(BINT(((long) 229)), MAKE_PAIR(BINT(((long) 241)), MAKE_PAIR(BINT(((long) 113)), MAKE_PAIR(BINT(((long) 216)), MAKE_PAIR(BINT(((long) 49)), MAKE_PAIR(BINT(((long) 21)), MAKE_PAIR(BINT(((long) 4)), MAKE_PAIR(BINT(((long) 199)), MAKE_PAIR(BINT(((long) 35)), MAKE_PAIR(BINT(((long) 195)), MAKE_PAIR(BINT(((long) 24)), MAKE_PAIR(BINT(((long) 150)), MAKE_PAIR(BINT(((long) 5)), MAKE_PAIR(BINT(((long) 154)), MAKE_PAIR(BINT(((long) 7)), MAKE_PAIR(BINT(((long) 18)), MAKE_PAIR(BINT(((long) 128)), MAKE_PAIR(BINT(((long) 226)), MAKE_PAIR(BINT(((long) 235)), MAKE_PAIR(BINT(((long) 39)), MAKE_PAIR(BINT(((long) 178)), MAKE_PAIR(BINT(((long) 117)), MAKE_PAIR(BINT(((long) 9)), MAKE_PAIR(BINT(((long) 131)), MAKE_PAIR(BINT(((long) 44)), MAKE_PAIR(BINT(((long) 26)), MAKE_PAIR(BINT(((long) 27)), MAKE_PAIR(BINT(((long) 110)), MAKE_PAIR(BINT(((long) 90)), MAKE_PAIR(BINT(((long) 160)), MAKE_PAIR(BINT(((long) 82)), MAKE_PAIR(BINT(((long) 59)), MAKE_PAIR(BINT(((long) 214)), MAKE_PAIR(BINT(((long) 179)), MAKE_PAIR(BINT(((long) 41)), MAKE_PAIR(BINT(((long) 227)), MAKE_PAIR(BINT(((long) 47)), MAKE_PAIR(BINT(((long) 132)), MAKE_PAIR(BINT(((long) 83)), MAKE_PAIR(BINT(((long) 209)), MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 237)), MAKE_PAIR(BINT(((long) 32)), MAKE_PAIR(BINT(((long) 252)), MAKE_PAIR(BINT(((long) 177)), MAKE_PAIR(BINT(((long) 91)), MAKE_PAIR(BINT(((long) 106)), MAKE_PAIR(BINT(((long) 203)), MAKE_PAIR(BINT(((long) 190)), MAKE_PAIR(BINT(((long) 57)), MAKE_PAIR(BINT(((long) 74)), MAKE_PAIR(BINT(((long) 76)), MAKE_PAIR(BINT(((long) 88)), MAKE_PAIR(BINT(((long) 207)), MAKE_PAIR(BINT(((long) 208)), MAKE_PAIR(BINT(((long) 239)), MAKE_PAIR(BINT(((long) 170)), MAKE_PAIR(BINT(((long) 251)), MAKE_PAIR(BINT(((long) 67)), MAKE_PAIR(BINT(((long) 77)), MAKE_PAIR(BINT(((long) 51)), MAKE_PAIR(BINT(((long) 133)), MAKE_PAIR(BINT(((long) 69)), MAKE_PAIR(BINT(((long) 249)), MAKE_PAIR(BINT(((long) 2)), MAKE_PAIR(BINT(((long) 127)), MAKE_PAIR(BINT(((long) 80)), MAKE_PAIR(BINT(((long) 60)), MAKE_PAIR(BINT(((long) 159)), MAKE_PAIR(BINT(((long) 168)), MAKE_PAIR(BINT(((long) 81)), MAKE_PAIR(BINT(((long) 163)), MAKE_PAIR(BINT(((long) 64)), MAKE_PAIR(BINT(((long) 143)), MAKE_PAIR(BINT(((long) 146)), MAKE_PAIR(BINT(((long) 157)), MAKE_PAIR(BINT(((long) 56)), MAKE_PAIR(BINT(((long) 245)), MAKE_PAIR(BINT(((long) 188)), MAKE_PAIR(BINT(((long) 182)), MAKE_PAIR(BINT(((long) 218)), MAKE_PAIR(BINT(((long) 33)), MAKE_PAIR(BINT(((long) 16)), MAKE_PAIR(BINT(((long) 255)), MAKE_PAIR(BINT(((long) 243)), MAKE_PAIR(BINT(((long) 210)), MAKE_PAIR(BINT(((long) 205)), MAKE_PAIR(BINT(((long) 12)), MAKE_PAIR(BINT(((long) 19)), MAKE_PAIR(BINT(((long) 236)), MAKE_PAIR(BINT(((long) 95)), MAKE_PAIR(BINT(((long) 151)), MAKE_PAIR(BINT(((long) 68)), MAKE_PAIR(BINT(((long) 23)), MAKE_PAIR(BINT(((long) 196)), MAKE_PAIR(BINT(((long) 167)), MAKE_PAIR(BINT(((long) 126)), MAKE_PAIR(BINT(((long) 61)), MAKE_PAIR(BINT(((long) 100)), MAKE_PAIR(BINT(((long) 93)), MAKE_PAIR(BINT(((long) 25)), MAKE_PAIR(BINT(((long) 115)), MAKE_PAIR(BINT(((long) 96)), MAKE_PAIR(BINT(((long) 129)), MAKE_PAIR(BINT(((long) 79)), MAKE_PAIR(BINT(((long) 220)), MAKE_PAIR(BINT(((long) 34)), MAKE_PAIR(BINT(((long) 42)), MAKE_PAIR(BINT(((long) 144)), MAKE_PAIR(BINT(((long) 136)), MAKE_PAIR(BINT(((long) 70)), MAKE_PAIR(BINT(((long) 238)), MAKE_PAIR(BINT(((long) 184)), MAKE_PAIR(BINT(((long) 20)), MAKE_PAIR(BINT(((long) 222)), MAKE_PAIR(BINT(((long) 94)), MAKE_PAIR(BINT(((long) 11)), MAKE_PAIR(BINT(((long) 219)), MAKE_PAIR(BINT(((long) 224)), MAKE_PAIR(BINT(((long) 50)), MAKE_PAIR(BINT(((long) 58)), MAKE_PAIR(BINT(((long) 10)), MAKE_PAIR(BINT(((long) 73)), MAKE_PAIR(BINT(((long) 6)), MAKE_PAIR(BINT(((long) 36)), MAKE_PAIR(BINT(((long) 92)), MAKE_PAIR(BINT(((long) 194)), MAKE_PAIR(BINT(((long) 211)), MAKE_PAIR(BINT(((long) 172)), MAKE_PAIR(BINT(((long) 98)), MAKE_PAIR(BINT(((long) 145)), MAKE_PAIR(BINT(((long) 149)), MAKE_PAIR(BINT(((long) 228)), MAKE_PAIR(BINT(((long) 121)), MAKE_PAIR(BINT(((long) 231)), MAKE_PAIR(BINT(((long) 200)), MAKE_PAIR(BINT(((long) 55)), MAKE_PAIR(BINT(((long) 109)), MAKE_PAIR(BINT(((long) 141)), MAKE_PAIR(BINT(((long) 213)), MAKE_PAIR(BINT(((long) 78)), MAKE_PAIR(BINT(((long) 169)), MAKE_PAIR(BINT(((long) 108)), MAKE_PAIR(BINT(((long) 86)), MAKE_PAIR(BINT(((long) 244)), MAKE_PAIR(BINT(((long) 234)), MAKE_PAIR(BINT(((long) 101)), MAKE_PAIR(BINT(((long) 122)), MAKE_PAIR(BINT(((long) 174)), MAKE_PAIR(BINT(((long) 8)), MAKE_PAIR(BINT(((long) 186)), MAKE_PAIR(BINT(((long) 120)), MAKE_PAIR(BINT(((long) 37)), MAKE_PAIR(BINT(((long) 46)), MAKE_PAIR(BINT(((long) 28)), MAKE_PAIR(BINT(((long) 166)), MAKE_PAIR(BINT(((long) 180)), MAKE_PAIR(BINT(((long) 198)), MAKE_PAIR(BINT(((long) 232)), MAKE_PAIR(BINT(((long) 221)), MAKE_PAIR(BINT(((long) 116)), MAKE_PAIR(BINT(((long) 31)), MAKE_PAIR(BINT(((long) 75)), MAKE_PAIR(BINT(((long) 189)), MAKE_PAIR(BINT(((long) 139)), MAKE_PAIR(BINT(((long) 138)), MAKE_PAIR(BINT(((long) 112)), MAKE_PAIR(BINT(((long) 62)), MAKE_PAIR(BINT(((long) 181)), MAKE_PAIR(BINT(((long) 102)), MAKE_PAIR(BINT(((long) 72)), MAKE_PAIR(BINT(((long) 3)), MAKE_PAIR(BINT(((long) 246)), MAKE_PAIR(BINT(((long) 14)), MAKE_PAIR(BINT(((long) 97)), MAKE_PAIR(BINT(((long) 53)), MAKE_PAIR(BINT(((long) 87)), MAKE_PAIR(BINT(((long) 185)), MAKE_PAIR(BINT(((long) 134)), MAKE_PAIR(BINT(((long) 193)), MAKE_PAIR(BINT(((long) 29)), MAKE_PAIR(BINT(((long) 158)), MAKE_PAIR(BINT(((long) 225)), MAKE_PAIR(BINT(((long) 248)), MAKE_PAIR(BINT(((long) 152)), MAKE_PAIR(BINT(((long) 17)), MAKE_PAIR(BINT(((long) 105)), MAKE_PAIR(BINT(((long) 217)), MAKE_PAIR(BINT(((long) 142)), MAKE_PAIR(BINT(((long) 148)), MAKE_PAIR(BINT(((long) 155)), MAKE_PAIR(BINT(((long) 30)), MAKE_PAIR(BINT(((long) 135)), MAKE_PAIR(BINT(((long) 233)), MAKE_PAIR(BINT(((long) 206)), MAKE_PAIR(BINT(((long) 85)), MAKE_PAIR(BINT(((long) 40)), MAKE_PAIR(BINT(((long) 223)), MAKE_PAIR(BINT(((long) 140)), MAKE_PAIR(BINT(((long) 161)), MAKE_PAIR(BINT(((long) 137)), MAKE_PAIR(BINT(((long) 13)), MAKE_PAIR(BINT(((long) 191)), MAKE_PAIR(BINT(((long) 230)), MAKE_PAIR(BINT(((long) 66)), MAKE_PAIR(BINT(((long) 104)), MAKE_PAIR(BINT(((long) 65)), MAKE_PAIR(BINT(((long) 153)), MAKE_PAIR(BINT(((long) 45)), MAKE_PAIR(BINT(((long) 15)), MAKE_PAIR(BINT(((long) 176)), MAKE_PAIR(BINT(((long) 84)), MAKE_PAIR(BINT(((long) 187)), MAKE_PAIR(BINT(((long) 22)), BNIL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			BGl_hvector3453z00zz__aesz00 =
				BGl_listzd2ze3u8vectorz31zz__srfi4z00(BGl_list3454z00zz__aesz00);
			BGl_symbol3459z00zz__aesz00 =
				bstring_to_symbol(BGl_string3460z00zz__aesz00);
			BGl_symbol3468z00zz__aesz00 =
				bstring_to_symbol(BGl_string3469z00zz__aesz00);
			return (BGl_list3474z00zz__aesz00 =
				MAKE_PAIR(BINT(((long) 128)), MAKE_PAIR(BINT(((long) 192)),
						MAKE_PAIR(BINT(((long) 256)), BNIL))), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__aesz00()
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 20 */
			BGl_Rconnz00zz__aesz00 = BGl_vector3429z00zz__aesz00;
			return (BGl_Sboxz00zz__aesz00 = BGl_hvector3453z00zz__aesz00, BUNSPEC);
		}
	}



/* _aes-ctr-encrypt */
	obj_t BGl__aeszd2ctrzd2encryptz00zz__aesz00(obj_t BgL_envz00_5,
		obj_t BgL_optz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 81 */
			{	/* Unsafe/aes.scm 81 */
				obj_t BgL_g1920z00_1002;

				obj_t BgL_g1921z00_1003;

				BgL_g1920z00_1002 = VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
				BgL_g1921z00_1003 = VECTOR_REF(BgL_optz00_4, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 81 */
					int BgL_aux1923z00_1005;

					BgL_aux1923z00_1005 = VECTOR_LENGTH(BgL_optz00_4);
					switch ((long) (BgL_aux1923z00_1005))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 81 */

								{	/* Unsafe/aes.scm 81 */
									obj_t BgL_arg1996z00_1008;

									obj_t BgL_arg1998z00_1009;

									BgL_arg1996z00_1008 =
										VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
									BgL_arg1998z00_1009 =
										VECTOR_REF(BgL_optz00_4, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 81 */
										obj_t BgL_res3201z00_2794;

										{	/* Unsafe/aes.scm 81 */
											obj_t BgL_passwordz00_2769;

											obj_t BgL_nbitsz00_2770;

											if (STRINGP(BgL_arg1998z00_1009))
												{	/* Unsafe/aes.scm 81 */
													BgL_passwordz00_2769 = BgL_arg1998z00_1009;
												}
											else
												{
													obj_t BgL_auxz00_5410;

													BgL_auxz00_5410 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 3149)),
														BGl_string3456z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg1998z00_1009);
													FAILURE(BgL_auxz00_5410, BFALSE, BFALSE);
												}
											BgL_nbitsz00_2770 = BINT(((long) 128));
											if (STRINGP(BgL_arg1996z00_1008))
												{	/* Unsafe/aes.scm 81 */
													BgL_res3201z00_2794 =
														BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
														(BgL_arg1996z00_1008, BgL_passwordz00_2769,
														BgL_nbitsz00_2770);
												}
											else
												{	/* Unsafe/aes.scm 81 */
													if (BGL_MMAPP(BgL_arg1996z00_1008))
														{	/* Unsafe/aes.scm 81 */
															obj_t BgL_res3198z00_2783;

															{	/* Unsafe/aes.scm 81 */
																obj_t BgL_plaintextz00_2780;

																if (BGL_MMAPP(BgL_arg1996z00_1008))
																	{	/* Unsafe/aes.scm 81 */
																		BgL_plaintextz00_2780 = BgL_arg1996z00_1008;
																	}
																else
																	{
																		obj_t BgL_auxz00_5422;

																		BgL_auxz00_5422 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3455z00zz__aesz00,
																			BINT(((long) 3149)),
																			BGl_string3456z00zz__aesz00,
																			BGl_string3458z00zz__aesz00,
																			BgL_arg1996z00_1008);
																		FAILURE(BgL_auxz00_5422, BFALSE, BFALSE);
																	}
																BgL_res3198z00_2783 =
																	BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
																	(BgL_plaintextz00_2780, BgL_passwordz00_2769,
																	BgL_nbitsz00_2770);
															}
															BgL_res3201z00_2794 = BgL_res3198z00_2783;
														}
													else
														{	/* Unsafe/aes.scm 81 */
															if (INPUT_PORTP(BgL_arg1996z00_1008))
																{	/* Unsafe/aes.scm 81 */
																	obj_t BgL_res3200z00_2793;

																	{	/* Unsafe/aes.scm 81 */
																		obj_t BgL_inputzd2portzd2_2785;

																		BgL_inputzd2portzd2_2785 =
																			BgL_arg1996z00_1008;
																		BgL_res3200z00_2793 =
																			BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
																			(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
																			(BgL_inputzd2portzd2_2785),
																			BgL_passwordz00_2769, BgL_nbitsz00_2770);
																	}
																	BgL_res3201z00_2794 = BgL_res3200z00_2793;
																}
															else
																{	/* Unsafe/aes.scm 81 */
																	obj_t BgL_aux3341z00_4656;

																	BgL_aux3341z00_4656 =
																		BGl_errorz00zz__errorz00
																		(BGl_symbol3459z00zz__aesz00,
																		BGl_string3461z00zz__aesz00,
																		BgL_arg1996z00_1008);
																	if (STRINGP(BgL_aux3341z00_4656))
																		{	/* Unsafe/aes.scm 81 */
																			BgL_res3201z00_2794 = BgL_aux3341z00_4656;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5434;

																			BgL_auxz00_5434 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3455z00zz__aesz00,
																				BINT(((long) 3149)),
																				BGl_string3456z00zz__aesz00,
																				BGl_string3457z00zz__aesz00,
																				BgL_aux3341z00_4656);
																			FAILURE(BgL_auxz00_5434, BFALSE, BFALSE);
										}}}}}
										return BgL_res3201z00_2794;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 81 */
								obj_t BgL_nbitsz00_1010;

								BgL_nbitsz00_1010 =
									VECTOR_REF(BgL_optz00_4, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 81 */

									{	/* Unsafe/aes.scm 81 */
										obj_t BgL_arg1999z00_1011;

										obj_t BgL_arg2000z00_1012;

										BgL_arg1999z00_1011 =
											VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
										BgL_arg2000z00_1012 =
											VECTOR_REF(BgL_optz00_4, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 81 */
											obj_t BgL_res3206z00_2821;

											{	/* Unsafe/aes.scm 81 */
												obj_t BgL_passwordz00_2796;

												if (STRINGP(BgL_arg2000z00_1012))
													{	/* Unsafe/aes.scm 81 */
														BgL_passwordz00_2796 = BgL_arg2000z00_1012;
													}
												else
													{
														obj_t BgL_auxz00_5446;

														BgL_auxz00_5446 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 3149)),
															BGl_string3456z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2000z00_1012);
														FAILURE(BgL_auxz00_5446, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1999z00_1011))
													{	/* Unsafe/aes.scm 81 */
														BgL_res3206z00_2821 =
															BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
															(BgL_arg1999z00_1011, BgL_passwordz00_2796,
															BgL_nbitsz00_1010);
													}
												else
													{	/* Unsafe/aes.scm 81 */
														if (BGL_MMAPP(BgL_arg1999z00_1011))
															{	/* Unsafe/aes.scm 81 */
																obj_t BgL_res3203z00_2810;

																{	/* Unsafe/aes.scm 81 */
																	obj_t BgL_plaintextz00_2807;

																	if (BGL_MMAPP(BgL_arg1999z00_1011))
																		{	/* Unsafe/aes.scm 81 */
																			BgL_plaintextz00_2807 =
																				BgL_arg1999z00_1011;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5457;

																			BgL_auxz00_5457 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3455z00zz__aesz00,
																				BINT(((long) 3149)),
																				BGl_string3456z00zz__aesz00,
																				BGl_string3458z00zz__aesz00,
																				BgL_arg1999z00_1011);
																			FAILURE(BgL_auxz00_5457, BFALSE, BFALSE);
																		}
																	BgL_res3203z00_2810 =
																		BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
																		(BgL_plaintextz00_2807,
																		BgL_passwordz00_2796, BgL_nbitsz00_1010);
																}
																BgL_res3206z00_2821 = BgL_res3203z00_2810;
															}
														else
															{	/* Unsafe/aes.scm 81 */
																if (INPUT_PORTP(BgL_arg1999z00_1011))
																	{	/* Unsafe/aes.scm 81 */
																		obj_t BgL_res3205z00_2820;

																		{	/* Unsafe/aes.scm 81 */
																			obj_t BgL_inputzd2portzd2_2812;

																			BgL_inputzd2portzd2_2812 =
																				BgL_arg1999z00_1011;
																			BgL_res3205z00_2820 =
																				BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
																				(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
																				(BgL_inputzd2portzd2_2812),
																				BgL_passwordz00_2796,
																				BgL_nbitsz00_1010);
																		}
																		BgL_res3206z00_2821 = BgL_res3205z00_2820;
																	}
																else
																	{	/* Unsafe/aes.scm 81 */
																		obj_t BgL_aux3347z00_4662;

																		BgL_aux3347z00_4662 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol3459z00zz__aesz00,
																			BGl_string3461z00zz__aesz00,
																			BgL_arg1999z00_1011);
																		if (STRINGP(BgL_aux3347z00_4662))
																			{	/* Unsafe/aes.scm 81 */
																				BgL_res3206z00_2821 =
																					BgL_aux3347z00_4662;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5469;

																				BgL_auxz00_5469 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3455z00zz__aesz00,
																					BINT(((long) 3149)),
																					BGl_string3456z00zz__aesz00,
																					BGl_string3457z00zz__aesz00,
																					BgL_aux3347z00_4662);
																				FAILURE(BgL_auxz00_5469, BFALSE,
																					BFALSE);
											}}}}}
											return BgL_res3206z00_2821;
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-encrypt */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptz00zz__aesz00(obj_t
		BgL_plaintextz00_1, obj_t BgL_passwordz00_2, obj_t BgL_nbitsz00_3)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 81 */
			if (STRINGP(BgL_plaintextz00_1))
				{	/* Unsafe/aes.scm 83 */
					return
						BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_plaintextz00_1,
						BgL_passwordz00_2, BgL_nbitsz00_3);
				}
			else
				{	/* Unsafe/aes.scm 83 */
					if (BGL_MMAPP(BgL_plaintextz00_1))
						{	/* Unsafe/aes.scm 83 */
							return
								BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_plaintextz00_1,
								BgL_passwordz00_2, BgL_nbitsz00_3);
						}
					else
						{	/* Unsafe/aes.scm 83 */
							if (INPUT_PORTP(BgL_plaintextz00_1))
								{	/* Unsafe/aes.scm 83 */
									obj_t BgL_res3210z00_2844;

									{	/* Unsafe/aes.scm 83 */
										obj_t BgL_inputzd2portzd2_2836;

										BgL_inputzd2portzd2_2836 = BgL_plaintextz00_1;
										BgL_res3210z00_2844 =
											BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
											(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
											(BgL_inputzd2portzd2_2836), BgL_passwordz00_2,
											BgL_nbitsz00_3);
									}
									return BgL_res3210z00_2844;
								}
							else
								{	/* Unsafe/aes.scm 83 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol3459z00zz__aesz00,
										BGl_string3461z00zz__aesz00, BgL_plaintextz00_1);
								}
						}
				}
		}
	}



/* _aes-ctr-encrypt-string */
	obj_t BGl__aeszd2ctrzd2encryptzd2stringzd2zz__aesz00(obj_t BgL_envz00_10,
		obj_t BgL_optz00_9)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 95 */
			{	/* Unsafe/aes.scm 95 */
				obj_t BgL_g1924z00_1016;

				obj_t BgL_g1925z00_1017;

				BgL_g1924z00_1016 = VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
				BgL_g1925z00_1017 = VECTOR_REF(BgL_optz00_9, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 95 */
					int BgL_aux1927z00_1019;

					BgL_aux1927z00_1019 = VECTOR_LENGTH(BgL_optz00_9);
					switch ((long) (BgL_aux1927z00_1019))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 95 */

								{	/* Unsafe/aes.scm 95 */
									obj_t BgL_arg2005z00_1022;

									obj_t BgL_arg2006z00_1023;

									BgL_arg2005z00_1022 =
										VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
									BgL_arg2006z00_1023 =
										VECTOR_REF(BgL_optz00_9, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 95 */
										obj_t BgL_res3211z00_2848;

										{	/* Unsafe/aes.scm 95 */
											obj_t BgL_plaintextz00_2845;

											obj_t BgL_passwordz00_2846;

											obj_t BgL_nbitsz00_2847;

											if (STRINGP(BgL_arg2005z00_1022))
												{	/* Unsafe/aes.scm 95 */
													BgL_plaintextz00_2845 = BgL_arg2005z00_1022;
												}
											else
												{
													obj_t BgL_auxz00_5497;

													BgL_auxz00_5497 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 3778)),
														BGl_string3462z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2005z00_1022);
													FAILURE(BgL_auxz00_5497, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg2006z00_1023))
												{	/* Unsafe/aes.scm 95 */
													BgL_passwordz00_2846 = BgL_arg2006z00_1023;
												}
											else
												{
													obj_t BgL_auxz00_5503;

													BgL_auxz00_5503 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 3778)),
														BGl_string3462z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2006z00_1023);
													FAILURE(BgL_auxz00_5503, BFALSE, BFALSE);
												}
											BgL_nbitsz00_2847 = BINT(((long) 128));
											BgL_res3211z00_2848 =
												BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
												(BgL_plaintextz00_2845, BgL_passwordz00_2846,
												BgL_nbitsz00_2847);
										}
										return BgL_res3211z00_2848;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 95 */
								obj_t BgL_nbitsz00_1024;

								BgL_nbitsz00_1024 =
									VECTOR_REF(BgL_optz00_9, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 95 */

									{	/* Unsafe/aes.scm 95 */
										obj_t BgL_arg2007z00_1025;

										obj_t BgL_arg2008z00_1026;

										BgL_arg2007z00_1025 =
											VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
										BgL_arg2008z00_1026 =
											VECTOR_REF(BgL_optz00_9, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 95 */
											obj_t BgL_res3212z00_2852;

											{	/* Unsafe/aes.scm 95 */
												obj_t BgL_plaintextz00_2849;

												obj_t BgL_passwordz00_2850;

												if (STRINGP(BgL_arg2007z00_1025))
													{	/* Unsafe/aes.scm 95 */
														BgL_plaintextz00_2849 = BgL_arg2007z00_1025;
													}
												else
													{
														obj_t BgL_auxz00_5517;

														BgL_auxz00_5517 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 3778)),
															BGl_string3462z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2007z00_1025);
														FAILURE(BgL_auxz00_5517, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg2008z00_1026))
													{	/* Unsafe/aes.scm 95 */
														BgL_passwordz00_2850 = BgL_arg2008z00_1026;
													}
												else
													{
														obj_t BgL_auxz00_5523;

														BgL_auxz00_5523 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 3778)),
															BGl_string3462z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2008z00_1026);
														FAILURE(BgL_auxz00_5523, BFALSE, BFALSE);
													}
												BgL_res3212z00_2852 =
													BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
													(BgL_plaintextz00_2849, BgL_passwordz00_2850,
													BgL_nbitsz00_1024);
											}
											return BgL_res3212z00_2852;
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-encrypt-string */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptzd2stringzd2zz__aesz00(obj_t
		BgL_plaintextz00_6, obj_t BgL_passwordz00_7, obj_t BgL_nbitsz00_8)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 95 */
			return
				BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_plaintextz00_6,
				BgL_passwordz00_7, BgL_nbitsz00_8);
		}
	}



/* _aes-ctr-encrypt-mmap */
	obj_t BGl__aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00(obj_t BgL_envz00_15,
		obj_t BgL_optz00_14)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 101 */
			{	/* Unsafe/aes.scm 101 */
				obj_t BgL_g1928z00_1027;

				obj_t BgL_g1929z00_1028;

				BgL_g1928z00_1027 = VECTOR_REF(BgL_optz00_14, (int) (((long) 0)));
				BgL_g1929z00_1028 = VECTOR_REF(BgL_optz00_14, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 101 */
					int BgL_aux1931z00_1030;

					BgL_aux1931z00_1030 = VECTOR_LENGTH(BgL_optz00_14);
					switch ((long) (BgL_aux1931z00_1030))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 101 */

								{	/* Unsafe/aes.scm 101 */
									obj_t BgL_arg2010z00_1033;

									obj_t BgL_arg2011z00_1034;

									BgL_arg2010z00_1033 =
										VECTOR_REF(BgL_optz00_14, (int) (((long) 0)));
									BgL_arg2011z00_1034 =
										VECTOR_REF(BgL_optz00_14, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 101 */
										obj_t BgL_res3213z00_2856;

										{	/* Unsafe/aes.scm 101 */
											obj_t BgL_plaintextz00_2853;

											obj_t BgL_passwordz00_2854;

											obj_t BgL_nbitsz00_2855;

											if (BGL_MMAPP(BgL_arg2010z00_1033))
												{	/* Unsafe/aes.scm 101 */
													BgL_plaintextz00_2853 = BgL_arg2010z00_1033;
												}
											else
												{
													obj_t BgL_auxz00_5542;

													BgL_auxz00_5542 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 4127)),
														BGl_string3463z00zz__aesz00,
														BGl_string3458z00zz__aesz00, BgL_arg2010z00_1033);
													FAILURE(BgL_auxz00_5542, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg2011z00_1034))
												{	/* Unsafe/aes.scm 101 */
													BgL_passwordz00_2854 = BgL_arg2011z00_1034;
												}
											else
												{
													obj_t BgL_auxz00_5548;

													BgL_auxz00_5548 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 4127)),
														BGl_string3463z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2011z00_1034);
													FAILURE(BgL_auxz00_5548, BFALSE, BFALSE);
												}
											BgL_nbitsz00_2855 = BINT(((long) 128));
											BgL_res3213z00_2856 =
												BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
												(BgL_plaintextz00_2853, BgL_passwordz00_2854,
												BgL_nbitsz00_2855);
										}
										return BgL_res3213z00_2856;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 101 */
								obj_t BgL_nbitsz00_1035;

								BgL_nbitsz00_1035 =
									VECTOR_REF(BgL_optz00_14, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 101 */

									{	/* Unsafe/aes.scm 101 */
										obj_t BgL_arg2012z00_1036;

										obj_t BgL_arg2013z00_1037;

										BgL_arg2012z00_1036 =
											VECTOR_REF(BgL_optz00_14, (int) (((long) 0)));
										BgL_arg2013z00_1037 =
											VECTOR_REF(BgL_optz00_14, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 101 */
											obj_t BgL_res3214z00_2860;

											{	/* Unsafe/aes.scm 101 */
												obj_t BgL_plaintextz00_2857;

												obj_t BgL_passwordz00_2858;

												if (BGL_MMAPP(BgL_arg2012z00_1036))
													{	/* Unsafe/aes.scm 101 */
														BgL_plaintextz00_2857 = BgL_arg2012z00_1036;
													}
												else
													{
														obj_t BgL_auxz00_5562;

														BgL_auxz00_5562 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 4127)),
															BGl_string3463z00zz__aesz00,
															BGl_string3458z00zz__aesz00, BgL_arg2012z00_1036);
														FAILURE(BgL_auxz00_5562, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg2013z00_1037))
													{	/* Unsafe/aes.scm 101 */
														BgL_passwordz00_2858 = BgL_arg2013z00_1037;
													}
												else
													{
														obj_t BgL_auxz00_5568;

														BgL_auxz00_5568 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 4127)),
															BGl_string3463z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2013z00_1037);
														FAILURE(BgL_auxz00_5568, BFALSE, BFALSE);
													}
												BgL_res3214z00_2860 =
													BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
													(BgL_plaintextz00_2857, BgL_passwordz00_2858,
													BgL_nbitsz00_1035);
											}
											return BgL_res3214z00_2860;
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-encrypt-mmap */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00(obj_t
		BgL_plaintextz00_11, obj_t BgL_passwordz00_12, obj_t BgL_nbitsz00_13)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 101 */
			return
				BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_plaintextz00_11,
				BgL_passwordz00_12, BgL_nbitsz00_13);
		}
	}



/* _aes-ctr-encrypt-file */
	obj_t BGl__aeszd2ctrzd2encryptzd2filezd2zz__aesz00(obj_t BgL_envz00_20,
		obj_t BgL_optz00_19)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 107 */
			{	/* Unsafe/aes.scm 107 */
				obj_t BgL_g1932z00_1038;

				obj_t BgL_g1933z00_1039;

				BgL_g1932z00_1038 = VECTOR_REF(BgL_optz00_19, (int) (((long) 0)));
				BgL_g1933z00_1039 = VECTOR_REF(BgL_optz00_19, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 107 */
					int BgL_aux1935z00_1041;

					BgL_aux1935z00_1041 = VECTOR_LENGTH(BgL_optz00_19);
					switch ((long) (BgL_aux1935z00_1041))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 107 */

								{	/* Unsafe/aes.scm 107 */
									obj_t BgL_arg2015z00_1044;

									obj_t BgL_arg2016z00_1045;

									BgL_arg2015z00_1044 =
										VECTOR_REF(BgL_optz00_19, (int) (((long) 0)));
									BgL_arg2016z00_1045 =
										VECTOR_REF(BgL_optz00_19, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 107 */
										obj_t BgL_auxz00_5592;

										obj_t BgL_auxz00_5585;

										if (STRINGP(BgL_arg2016z00_1045))
											{	/* Unsafe/aes.scm 107 */
												BgL_auxz00_5592 = BgL_arg2016z00_1045;
											}
										else
											{
												obj_t BgL_auxz00_5595;

												BgL_auxz00_5595 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3455z00zz__aesz00, BINT(((long) 4474)),
													BGl_string3464z00zz__aesz00,
													BGl_string3457z00zz__aesz00, BgL_arg2016z00_1045);
												FAILURE(BgL_auxz00_5595, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_arg2015z00_1044))
											{	/* Unsafe/aes.scm 107 */
												BgL_auxz00_5585 = BgL_arg2015z00_1044;
											}
										else
											{
												obj_t BgL_auxz00_5588;

												BgL_auxz00_5588 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3455z00zz__aesz00, BINT(((long) 4474)),
													BGl_string3464z00zz__aesz00,
													BGl_string3457z00zz__aesz00, BgL_arg2015z00_1044);
												FAILURE(BgL_auxz00_5588, BFALSE, BFALSE);
											}
										return
											BGl_aeszd2ctrzd2encryptzd2filezd2zz__aesz00
											(BgL_auxz00_5585, BgL_auxz00_5592, BINT(((long) 128)));
							}}} break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 107 */
								obj_t BgL_nbitsz00_1046;

								BgL_nbitsz00_1046 =
									VECTOR_REF(BgL_optz00_19, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 107 */

									{	/* Unsafe/aes.scm 107 */
										obj_t BgL_arg2017z00_1047;

										obj_t BgL_arg2018z00_1048;

										BgL_arg2017z00_1047 =
											VECTOR_REF(BgL_optz00_19, (int) (((long) 0)));
										BgL_arg2018z00_1048 =
											VECTOR_REF(BgL_optz00_19, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 107 */
											obj_t BgL_auxz00_5614;

											obj_t BgL_auxz00_5607;

											if (STRINGP(BgL_arg2018z00_1048))
												{	/* Unsafe/aes.scm 107 */
													BgL_auxz00_5614 = BgL_arg2018z00_1048;
												}
											else
												{
													obj_t BgL_auxz00_5617;

													BgL_auxz00_5617 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 4474)),
														BGl_string3464z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2018z00_1048);
													FAILURE(BgL_auxz00_5617, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg2017z00_1047))
												{	/* Unsafe/aes.scm 107 */
													BgL_auxz00_5607 = BgL_arg2017z00_1047;
												}
											else
												{
													obj_t BgL_auxz00_5610;

													BgL_auxz00_5610 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 4474)),
														BGl_string3464z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2017z00_1047);
													FAILURE(BgL_auxz00_5610, BFALSE, BFALSE);
												}
											return
												BGl_aeszd2ctrzd2encryptzd2filezd2zz__aesz00
												(BgL_auxz00_5607, BgL_auxz00_5614, BgL_nbitsz00_1046);
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-encrypt-file */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptzd2filezd2zz__aesz00(obj_t
		BgL_fnamez00_16, obj_t BgL_passwordz00_17, obj_t BgL_nbitsz00_18)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 107 */
			{	/* Unsafe/aes.scm 108 */
				obj_t BgL_mmz00_1049;

				BgL_mmz00_1049 =
					BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_16, BTRUE, BFALSE);
				{	/* Unsafe/aes.scm 109 */
					obj_t BgL_val1828z00_1050;

					BgL_val1828z00_1050 =
						BGl_zc3exitza32023ze3z83zz__aesz00(BgL_nbitsz00_18,
						BgL_passwordz00_17, BgL_mmz00_1049);
					bgl_close_mmap(BgL_mmz00_1049);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1828z00_1050)))
						{	/* Unsafe/aes.scm 111 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1828z00_1050),
								CDR(BgL_val1828z00_1050));
						}
					else
						{	/* Unsafe/aes.scm 111 */
							return BgL_val1828z00_1050;
						}
				}
			}
		}
	}



/* <exit:2023> */
	obj_t BGl_zc3exitza32023ze3z83zz__aesz00(obj_t BgL_nbitsz00_4651,
		obj_t BgL_passwordz00_4650, obj_t BgL_mmz00_4649)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 111 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1829z00_1055;

			if (SET_EXIT(BgL_an_exit1829z00_1055))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1829z00_1055 = (void *) jmpbuf;
					{	/* Unsafe/aes.scm 111 */

						PUSH_EXIT(BgL_an_exit1829z00_1055, ((long) 0));
						{	/* Unsafe/aes.scm 110 */
							obj_t BgL_val1830z00_1056;

							BgL_val1830z00_1056 =
								BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_mmz00_4649,
								BgL_passwordz00_4650, BgL_nbitsz00_4651);
							POP_EXIT();
							return BgL_val1830z00_1056;
						}
					}
				}
		}
	}



/* _aes-ctr-encrypt-port */
	obj_t BGl__aeszd2ctrzd2encryptzd2portzd2zz__aesz00(obj_t BgL_envz00_25,
		obj_t BgL_optz00_24)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 116 */
			{	/* Unsafe/aes.scm 116 */
				obj_t BgL_g1936z00_1059;

				obj_t BgL_g1937z00_1060;

				BgL_g1936z00_1059 = VECTOR_REF(BgL_optz00_24, (int) (((long) 0)));
				BgL_g1937z00_1060 = VECTOR_REF(BgL_optz00_24, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 116 */
					int BgL_aux1939z00_1062;

					BgL_aux1939z00_1062 = VECTOR_LENGTH(BgL_optz00_24);
					switch ((long) (BgL_aux1939z00_1062))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 116 */

								{	/* Unsafe/aes.scm 116 */
									obj_t BgL_arg2025z00_1065;

									obj_t BgL_arg2027z00_1066;

									BgL_arg2025z00_1065 =
										VECTOR_REF(BgL_optz00_24, (int) (((long) 0)));
									BgL_arg2027z00_1066 =
										VECTOR_REF(BgL_optz00_24, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 116 */
										obj_t BgL_res3217z00_2876;

										{	/* Unsafe/aes.scm 116 */
											obj_t BgL_inputzd2portzd2_2868;

											obj_t BgL_passwordz00_2869;

											obj_t BgL_nbitsz00_2870;

											if (INPUT_PORTP(BgL_arg2025z00_1065))
												{	/* Unsafe/aes.scm 116 */
													BgL_inputzd2portzd2_2868 = BgL_arg2025z00_1065;
												}
											else
												{
													obj_t BgL_auxz00_5649;

													BgL_auxz00_5649 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 4895)),
														BGl_string3465z00zz__aesz00,
														BGl_string3466z00zz__aesz00, BgL_arg2025z00_1065);
													FAILURE(BgL_auxz00_5649, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg2027z00_1066))
												{	/* Unsafe/aes.scm 116 */
													BgL_passwordz00_2869 = BgL_arg2027z00_1066;
												}
											else
												{
													obj_t BgL_auxz00_5655;

													BgL_auxz00_5655 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 4895)),
														BGl_string3465z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2027z00_1066);
													FAILURE(BgL_auxz00_5655, BFALSE, BFALSE);
												}
											BgL_nbitsz00_2870 = BINT(((long) 128));
											BgL_res3217z00_2876 =
												BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
												(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
												(BgL_inputzd2portzd2_2868), BgL_passwordz00_2869,
												BgL_nbitsz00_2870);
										}
										return BgL_res3217z00_2876;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 116 */
								obj_t BgL_nbitsz00_1067;

								BgL_nbitsz00_1067 =
									VECTOR_REF(BgL_optz00_24, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 116 */

									{	/* Unsafe/aes.scm 116 */
										obj_t BgL_arg2028z00_1068;

										obj_t BgL_arg2029z00_1069;

										BgL_arg2028z00_1068 =
											VECTOR_REF(BgL_optz00_24, (int) (((long) 0)));
										BgL_arg2029z00_1069 =
											VECTOR_REF(BgL_optz00_24, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 116 */
											obj_t BgL_res3219z00_2885;

											{	/* Unsafe/aes.scm 116 */
												obj_t BgL_inputzd2portzd2_2877;

												obj_t BgL_passwordz00_2878;

												if (INPUT_PORTP(BgL_arg2028z00_1068))
													{	/* Unsafe/aes.scm 116 */
														BgL_inputzd2portzd2_2877 = BgL_arg2028z00_1068;
													}
												else
													{
														obj_t BgL_auxz00_5670;

														BgL_auxz00_5670 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 4895)),
															BGl_string3465z00zz__aesz00,
															BGl_string3466z00zz__aesz00, BgL_arg2028z00_1068);
														FAILURE(BgL_auxz00_5670, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg2029z00_1069))
													{	/* Unsafe/aes.scm 116 */
														BgL_passwordz00_2878 = BgL_arg2029z00_1069;
													}
												else
													{
														obj_t BgL_auxz00_5676;

														BgL_auxz00_5676 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 4895)),
															BGl_string3465z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2029z00_1069);
														FAILURE(BgL_auxz00_5676, BFALSE, BFALSE);
													}
												BgL_res3219z00_2885 =
													BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
													(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
													(BgL_inputzd2portzd2_2877), BgL_passwordz00_2878,
													BgL_nbitsz00_1067);
											}
											return BgL_res3219z00_2885;
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-encrypt-port */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptzd2portzd2zz__aesz00(obj_t
		BgL_inputzd2portzd2_21, obj_t BgL_passwordz00_22, obj_t BgL_nbitsz00_23)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 116 */
			return
				BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
				(BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_21),
				BgL_passwordz00_22, BgL_nbitsz00_23);
		}
	}



/* _aes-ctr-decrypt */
	obj_t BGl__aeszd2ctrzd2decryptz00zz__aesz00(obj_t BgL_envz00_30,
		obj_t BgL_optz00_29)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 125 */
			{	/* Unsafe/aes.scm 125 */
				obj_t BgL_g1940z00_1071;

				obj_t BgL_g1941z00_1072;

				BgL_g1940z00_1071 = VECTOR_REF(BgL_optz00_29, (int) (((long) 0)));
				BgL_g1941z00_1072 = VECTOR_REF(BgL_optz00_29, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 125 */
					int BgL_aux1943z00_1074;

					BgL_aux1943z00_1074 = VECTOR_LENGTH(BgL_optz00_29);
					switch ((long) (BgL_aux1943z00_1074))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 125 */

								{	/* Unsafe/aes.scm 125 */
									obj_t BgL_arg2033z00_1077;

									obj_t BgL_arg2034z00_1078;

									BgL_arg2033z00_1077 =
										VECTOR_REF(BgL_optz00_29, (int) (((long) 0)));
									BgL_arg2034z00_1078 =
										VECTOR_REF(BgL_optz00_29, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 125 */
										obj_t BgL_res3225z00_2917;

										{	/* Unsafe/aes.scm 125 */
											obj_t BgL_passwordz00_2892;

											obj_t BgL_nbitsz00_2893;

											if (STRINGP(BgL_arg2034z00_1078))
												{	/* Unsafe/aes.scm 125 */
													BgL_passwordz00_2892 = BgL_arg2034z00_1078;
												}
											else
												{
													obj_t BgL_auxz00_5697;

													BgL_auxz00_5697 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 5483)),
														BGl_string3467z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2034z00_1078);
													FAILURE(BgL_auxz00_5697, BFALSE, BFALSE);
												}
											BgL_nbitsz00_2893 = BINT(((long) 128));
											if (STRINGP(BgL_arg2033z00_1077))
												{	/* Unsafe/aes.scm 125 */
													BgL_res3225z00_2917 =
														BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
														(BgL_arg2033z00_1077, BgL_passwordz00_2892,
														BgL_nbitsz00_2893);
												}
											else
												{	/* Unsafe/aes.scm 125 */
													if (BGL_MMAPP(BgL_arg2033z00_1077))
														{	/* Unsafe/aes.scm 125 */
															obj_t BgL_res3222z00_2906;

															{	/* Unsafe/aes.scm 125 */
																obj_t BgL_plaintextz00_2903;

																if (BGL_MMAPP(BgL_arg2033z00_1077))
																	{	/* Unsafe/aes.scm 125 */
																		BgL_plaintextz00_2903 = BgL_arg2033z00_1077;
																	}
																else
																	{
																		obj_t BgL_auxz00_5709;

																		BgL_auxz00_5709 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3455z00zz__aesz00,
																			BINT(((long) 5483)),
																			BGl_string3467z00zz__aesz00,
																			BGl_string3458z00zz__aesz00,
																			BgL_arg2033z00_1077);
																		FAILURE(BgL_auxz00_5709, BFALSE, BFALSE);
																	}
																BgL_res3222z00_2906 =
																	BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
																	(BgL_plaintextz00_2903, BgL_passwordz00_2892,
																	BgL_nbitsz00_2893);
															}
															BgL_res3225z00_2917 = BgL_res3222z00_2906;
														}
													else
														{	/* Unsafe/aes.scm 125 */
															if (INPUT_PORTP(BgL_arg2033z00_1077))
																{	/* Unsafe/aes.scm 125 */
																	obj_t BgL_res3224z00_2916;

																	{	/* Unsafe/aes.scm 125 */
																		obj_t BgL_inputzd2portzd2_2908;

																		BgL_inputzd2portzd2_2908 =
																			BgL_arg2033z00_1077;
																		BgL_res3224z00_2916 =
																			BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
																			(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
																			(BgL_inputzd2portzd2_2908),
																			BgL_passwordz00_2892, BgL_nbitsz00_2893);
																	}
																	BgL_res3225z00_2917 = BgL_res3224z00_2916;
																}
															else
																{	/* Unsafe/aes.scm 125 */
																	obj_t BgL_aux3385z00_4700;

																	BgL_aux3385z00_4700 =
																		BGl_errorz00zz__errorz00
																		(BGl_symbol3468z00zz__aesz00,
																		BGl_string3461z00zz__aesz00,
																		BgL_arg2033z00_1077);
																	if (STRINGP(BgL_aux3385z00_4700))
																		{	/* Unsafe/aes.scm 125 */
																			BgL_res3225z00_2917 = BgL_aux3385z00_4700;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5721;

																			BgL_auxz00_5721 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3455z00zz__aesz00,
																				BINT(((long) 5483)),
																				BGl_string3467z00zz__aesz00,
																				BGl_string3457z00zz__aesz00,
																				BgL_aux3385z00_4700);
																			FAILURE(BgL_auxz00_5721, BFALSE, BFALSE);
										}}}}}
										return BgL_res3225z00_2917;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 125 */
								obj_t BgL_nbitsz00_1079;

								BgL_nbitsz00_1079 =
									VECTOR_REF(BgL_optz00_29, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 125 */

									{	/* Unsafe/aes.scm 125 */
										obj_t BgL_arg2036z00_1080;

										obj_t BgL_arg2037z00_1081;

										BgL_arg2036z00_1080 =
											VECTOR_REF(BgL_optz00_29, (int) (((long) 0)));
										BgL_arg2037z00_1081 =
											VECTOR_REF(BgL_optz00_29, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 125 */
											obj_t BgL_res3230z00_2944;

											{	/* Unsafe/aes.scm 125 */
												obj_t BgL_passwordz00_2919;

												if (STRINGP(BgL_arg2037z00_1081))
													{	/* Unsafe/aes.scm 125 */
														BgL_passwordz00_2919 = BgL_arg2037z00_1081;
													}
												else
													{
														obj_t BgL_auxz00_5733;

														BgL_auxz00_5733 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 5483)),
															BGl_string3467z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2037z00_1081);
														FAILURE(BgL_auxz00_5733, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg2036z00_1080))
													{	/* Unsafe/aes.scm 125 */
														BgL_res3230z00_2944 =
															BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
															(BgL_arg2036z00_1080, BgL_passwordz00_2919,
															BgL_nbitsz00_1079);
													}
												else
													{	/* Unsafe/aes.scm 125 */
														if (BGL_MMAPP(BgL_arg2036z00_1080))
															{	/* Unsafe/aes.scm 125 */
																obj_t BgL_res3227z00_2933;

																{	/* Unsafe/aes.scm 125 */
																	obj_t BgL_plaintextz00_2930;

																	if (BGL_MMAPP(BgL_arg2036z00_1080))
																		{	/* Unsafe/aes.scm 125 */
																			BgL_plaintextz00_2930 =
																				BgL_arg2036z00_1080;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5744;

																			BgL_auxz00_5744 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3455z00zz__aesz00,
																				BINT(((long) 5483)),
																				BGl_string3467z00zz__aesz00,
																				BGl_string3458z00zz__aesz00,
																				BgL_arg2036z00_1080);
																			FAILURE(BgL_auxz00_5744, BFALSE, BFALSE);
																		}
																	BgL_res3227z00_2933 =
																		BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
																		(BgL_plaintextz00_2930,
																		BgL_passwordz00_2919, BgL_nbitsz00_1079);
																}
																BgL_res3230z00_2944 = BgL_res3227z00_2933;
															}
														else
															{	/* Unsafe/aes.scm 125 */
																if (INPUT_PORTP(BgL_arg2036z00_1080))
																	{	/* Unsafe/aes.scm 125 */
																		obj_t BgL_res3229z00_2943;

																		{	/* Unsafe/aes.scm 125 */
																			obj_t BgL_inputzd2portzd2_2935;

																			BgL_inputzd2portzd2_2935 =
																				BgL_arg2036z00_1080;
																			BgL_res3229z00_2943 =
																				BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
																				(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
																				(BgL_inputzd2portzd2_2935),
																				BgL_passwordz00_2919,
																				BgL_nbitsz00_1079);
																		}
																		BgL_res3230z00_2944 = BgL_res3229z00_2943;
																	}
																else
																	{	/* Unsafe/aes.scm 125 */
																		obj_t BgL_aux3391z00_4706;

																		BgL_aux3391z00_4706 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol3468z00zz__aesz00,
																			BGl_string3461z00zz__aesz00,
																			BgL_arg2036z00_1080);
																		if (STRINGP(BgL_aux3391z00_4706))
																			{	/* Unsafe/aes.scm 125 */
																				BgL_res3230z00_2944 =
																					BgL_aux3391z00_4706;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5756;

																				BgL_auxz00_5756 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3455z00zz__aesz00,
																					BINT(((long) 5483)),
																					BGl_string3467z00zz__aesz00,
																					BGl_string3457z00zz__aesz00,
																					BgL_aux3391z00_4706);
																				FAILURE(BgL_auxz00_5756, BFALSE,
																					BFALSE);
											}}}}}
											return BgL_res3230z00_2944;
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-decrypt */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptz00zz__aesz00(obj_t
		BgL_ciphertextz00_26, obj_t BgL_passwordz00_27, obj_t BgL_nbitsz00_28)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 125 */
			if (STRINGP(BgL_ciphertextz00_26))
				{	/* Unsafe/aes.scm 127 */
					return
						BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_ciphertextz00_26,
						BgL_passwordz00_27, BgL_nbitsz00_28);
				}
			else
				{	/* Unsafe/aes.scm 127 */
					if (BGL_MMAPP(BgL_ciphertextz00_26))
						{	/* Unsafe/aes.scm 127 */
							return
								BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_ciphertextz00_26,
								BgL_passwordz00_27, BgL_nbitsz00_28);
						}
					else
						{	/* Unsafe/aes.scm 127 */
							if (INPUT_PORTP(BgL_ciphertextz00_26))
								{	/* Unsafe/aes.scm 127 */
									obj_t BgL_res3234z00_2967;

									{	/* Unsafe/aes.scm 127 */
										obj_t BgL_inputzd2portzd2_2959;

										BgL_inputzd2portzd2_2959 = BgL_ciphertextz00_26;
										BgL_res3234z00_2967 =
											BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
											(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
											(BgL_inputzd2portzd2_2959), BgL_passwordz00_27,
											BgL_nbitsz00_28);
									}
									return BgL_res3234z00_2967;
								}
							else
								{	/* Unsafe/aes.scm 127 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol3468z00zz__aesz00,
										BGl_string3461z00zz__aesz00, BgL_ciphertextz00_26);
								}
						}
				}
		}
	}



/* _aes-ctr-decrypt-string */
	obj_t BGl__aeszd2ctrzd2decryptzd2stringzd2zz__aesz00(obj_t BgL_envz00_35,
		obj_t BgL_optz00_34)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 139 */
			{	/* Unsafe/aes.scm 139 */
				obj_t BgL_g1944z00_1085;

				obj_t BgL_g1945z00_1086;

				BgL_g1944z00_1085 = VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
				BgL_g1945z00_1086 = VECTOR_REF(BgL_optz00_34, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 139 */
					int BgL_aux1947z00_1088;

					BgL_aux1947z00_1088 = VECTOR_LENGTH(BgL_optz00_34);
					switch ((long) (BgL_aux1947z00_1088))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 139 */

								{	/* Unsafe/aes.scm 139 */
									obj_t BgL_arg2042z00_1091;

									obj_t BgL_arg2043z00_1092;

									BgL_arg2042z00_1091 =
										VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
									BgL_arg2043z00_1092 =
										VECTOR_REF(BgL_optz00_34, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 139 */
										obj_t BgL_res3235z00_2971;

										{	/* Unsafe/aes.scm 139 */
											obj_t BgL_plaintextz00_2968;

											obj_t BgL_passwordz00_2969;

											obj_t BgL_nbitsz00_2970;

											if (STRINGP(BgL_arg2042z00_1091))
												{	/* Unsafe/aes.scm 139 */
													BgL_plaintextz00_2968 = BgL_arg2042z00_1091;
												}
											else
												{
													obj_t BgL_auxz00_5784;

													BgL_auxz00_5784 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 6121)),
														BGl_string3470z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2042z00_1091);
													FAILURE(BgL_auxz00_5784, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg2043z00_1092))
												{	/* Unsafe/aes.scm 139 */
													BgL_passwordz00_2969 = BgL_arg2043z00_1092;
												}
											else
												{
													obj_t BgL_auxz00_5790;

													BgL_auxz00_5790 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 6121)),
														BGl_string3470z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2043z00_1092);
													FAILURE(BgL_auxz00_5790, BFALSE, BFALSE);
												}
											BgL_nbitsz00_2970 = BINT(((long) 128));
											BgL_res3235z00_2971 =
												BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
												(BgL_plaintextz00_2968, BgL_passwordz00_2969,
												BgL_nbitsz00_2970);
										}
										return BgL_res3235z00_2971;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 139 */
								obj_t BgL_nbitsz00_1093;

								BgL_nbitsz00_1093 =
									VECTOR_REF(BgL_optz00_34, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 139 */

									{	/* Unsafe/aes.scm 139 */
										obj_t BgL_arg2044z00_1094;

										obj_t BgL_arg2045z00_1095;

										BgL_arg2044z00_1094 =
											VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
										BgL_arg2045z00_1095 =
											VECTOR_REF(BgL_optz00_34, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 139 */
											obj_t BgL_res3236z00_2975;

											{	/* Unsafe/aes.scm 139 */
												obj_t BgL_plaintextz00_2972;

												obj_t BgL_passwordz00_2973;

												if (STRINGP(BgL_arg2044z00_1094))
													{	/* Unsafe/aes.scm 139 */
														BgL_plaintextz00_2972 = BgL_arg2044z00_1094;
													}
												else
													{
														obj_t BgL_auxz00_5804;

														BgL_auxz00_5804 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 6121)),
															BGl_string3470z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2044z00_1094);
														FAILURE(BgL_auxz00_5804, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg2045z00_1095))
													{	/* Unsafe/aes.scm 139 */
														BgL_passwordz00_2973 = BgL_arg2045z00_1095;
													}
												else
													{
														obj_t BgL_auxz00_5810;

														BgL_auxz00_5810 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 6121)),
															BGl_string3470z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2045z00_1095);
														FAILURE(BgL_auxz00_5810, BFALSE, BFALSE);
													}
												BgL_res3236z00_2975 =
													BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
													(BgL_plaintextz00_2972, BgL_passwordz00_2973,
													BgL_nbitsz00_1093);
											}
											return BgL_res3236z00_2975;
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-decrypt-string */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptzd2stringzd2zz__aesz00(obj_t
		BgL_plaintextz00_31, obj_t BgL_passwordz00_32, obj_t BgL_nbitsz00_33)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 139 */
			return
				BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_plaintextz00_31,
				BgL_passwordz00_32, BgL_nbitsz00_33);
		}
	}



/* _aes-ctr-decrypt-mmap */
	obj_t BGl__aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00(obj_t BgL_envz00_40,
		obj_t BgL_optz00_39)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 145 */
			{	/* Unsafe/aes.scm 145 */
				obj_t BgL_g1948z00_1096;

				obj_t BgL_g1949z00_1097;

				BgL_g1948z00_1096 = VECTOR_REF(BgL_optz00_39, (int) (((long) 0)));
				BgL_g1949z00_1097 = VECTOR_REF(BgL_optz00_39, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 145 */
					int BgL_aux1951z00_1099;

					BgL_aux1951z00_1099 = VECTOR_LENGTH(BgL_optz00_39);
					switch ((long) (BgL_aux1951z00_1099))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 145 */

								{	/* Unsafe/aes.scm 145 */
									obj_t BgL_arg2047z00_1102;

									obj_t BgL_arg2048z00_1103;

									BgL_arg2047z00_1102 =
										VECTOR_REF(BgL_optz00_39, (int) (((long) 0)));
									BgL_arg2048z00_1103 =
										VECTOR_REF(BgL_optz00_39, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 145 */
										obj_t BgL_res3237z00_2979;

										{	/* Unsafe/aes.scm 145 */
											obj_t BgL_plaintextz00_2976;

											obj_t BgL_passwordz00_2977;

											obj_t BgL_nbitsz00_2978;

											if (BGL_MMAPP(BgL_arg2047z00_1102))
												{	/* Unsafe/aes.scm 145 */
													BgL_plaintextz00_2976 = BgL_arg2047z00_1102;
												}
											else
												{
													obj_t BgL_auxz00_5829;

													BgL_auxz00_5829 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 6470)),
														BGl_string3471z00zz__aesz00,
														BGl_string3458z00zz__aesz00, BgL_arg2047z00_1102);
													FAILURE(BgL_auxz00_5829, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg2048z00_1103))
												{	/* Unsafe/aes.scm 145 */
													BgL_passwordz00_2977 = BgL_arg2048z00_1103;
												}
											else
												{
													obj_t BgL_auxz00_5835;

													BgL_auxz00_5835 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 6470)),
														BGl_string3471z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2048z00_1103);
													FAILURE(BgL_auxz00_5835, BFALSE, BFALSE);
												}
											BgL_nbitsz00_2978 = BINT(((long) 128));
											BgL_res3237z00_2979 =
												BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
												(BgL_plaintextz00_2976, BgL_passwordz00_2977,
												BgL_nbitsz00_2978);
										}
										return BgL_res3237z00_2979;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 145 */
								obj_t BgL_nbitsz00_1104;

								BgL_nbitsz00_1104 =
									VECTOR_REF(BgL_optz00_39, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 145 */

									{	/* Unsafe/aes.scm 145 */
										obj_t BgL_arg2051z00_1105;

										obj_t BgL_arg2052z00_1106;

										BgL_arg2051z00_1105 =
											VECTOR_REF(BgL_optz00_39, (int) (((long) 0)));
										BgL_arg2052z00_1106 =
											VECTOR_REF(BgL_optz00_39, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 145 */
											obj_t BgL_res3238z00_2983;

											{	/* Unsafe/aes.scm 145 */
												obj_t BgL_plaintextz00_2980;

												obj_t BgL_passwordz00_2981;

												if (BGL_MMAPP(BgL_arg2051z00_1105))
													{	/* Unsafe/aes.scm 145 */
														BgL_plaintextz00_2980 = BgL_arg2051z00_1105;
													}
												else
													{
														obj_t BgL_auxz00_5849;

														BgL_auxz00_5849 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 6470)),
															BGl_string3471z00zz__aesz00,
															BGl_string3458z00zz__aesz00, BgL_arg2051z00_1105);
														FAILURE(BgL_auxz00_5849, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg2052z00_1106))
													{	/* Unsafe/aes.scm 145 */
														BgL_passwordz00_2981 = BgL_arg2052z00_1106;
													}
												else
													{
														obj_t BgL_auxz00_5855;

														BgL_auxz00_5855 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 6470)),
															BGl_string3471z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2052z00_1106);
														FAILURE(BgL_auxz00_5855, BFALSE, BFALSE);
													}
												BgL_res3238z00_2983 =
													BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
													(BgL_plaintextz00_2980, BgL_passwordz00_2981,
													BgL_nbitsz00_1104);
											}
											return BgL_res3238z00_2983;
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-decrypt-mmap */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00(obj_t
		BgL_plaintextz00_36, obj_t BgL_passwordz00_37, obj_t BgL_nbitsz00_38)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 145 */
			return
				BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_plaintextz00_36,
				BgL_passwordz00_37, BgL_nbitsz00_38);
		}
	}



/* _aes-ctr-decrypt-file */
	obj_t BGl__aeszd2ctrzd2decryptzd2filezd2zz__aesz00(obj_t BgL_envz00_45,
		obj_t BgL_optz00_44)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 151 */
			{	/* Unsafe/aes.scm 151 */
				obj_t BgL_g1952z00_1107;

				obj_t BgL_g1953z00_1108;

				BgL_g1952z00_1107 = VECTOR_REF(BgL_optz00_44, (int) (((long) 0)));
				BgL_g1953z00_1108 = VECTOR_REF(BgL_optz00_44, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 151 */
					int BgL_aux1955z00_1110;

					BgL_aux1955z00_1110 = VECTOR_LENGTH(BgL_optz00_44);
					switch ((long) (BgL_aux1955z00_1110))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 151 */

								{	/* Unsafe/aes.scm 151 */
									obj_t BgL_arg2054z00_1113;

									obj_t BgL_arg2055z00_1114;

									BgL_arg2054z00_1113 =
										VECTOR_REF(BgL_optz00_44, (int) (((long) 0)));
									BgL_arg2055z00_1114 =
										VECTOR_REF(BgL_optz00_44, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 151 */
										obj_t BgL_auxz00_5879;

										obj_t BgL_auxz00_5872;

										if (STRINGP(BgL_arg2055z00_1114))
											{	/* Unsafe/aes.scm 151 */
												BgL_auxz00_5879 = BgL_arg2055z00_1114;
											}
										else
											{
												obj_t BgL_auxz00_5882;

												BgL_auxz00_5882 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3455z00zz__aesz00, BINT(((long) 6817)),
													BGl_string3472z00zz__aesz00,
													BGl_string3457z00zz__aesz00, BgL_arg2055z00_1114);
												FAILURE(BgL_auxz00_5882, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_arg2054z00_1113))
											{	/* Unsafe/aes.scm 151 */
												BgL_auxz00_5872 = BgL_arg2054z00_1113;
											}
										else
											{
												obj_t BgL_auxz00_5875;

												BgL_auxz00_5875 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3455z00zz__aesz00, BINT(((long) 6817)),
													BGl_string3472z00zz__aesz00,
													BGl_string3457z00zz__aesz00, BgL_arg2054z00_1113);
												FAILURE(BgL_auxz00_5875, BFALSE, BFALSE);
											}
										return
											BGl_aeszd2ctrzd2decryptzd2filezd2zz__aesz00
											(BgL_auxz00_5872, BgL_auxz00_5879, BINT(((long) 128)));
							}}} break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 151 */
								obj_t BgL_nbitsz00_1115;

								BgL_nbitsz00_1115 =
									VECTOR_REF(BgL_optz00_44, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 151 */

									{	/* Unsafe/aes.scm 151 */
										obj_t BgL_arg2056z00_1116;

										obj_t BgL_arg2057z00_1117;

										BgL_arg2056z00_1116 =
											VECTOR_REF(BgL_optz00_44, (int) (((long) 0)));
										BgL_arg2057z00_1117 =
											VECTOR_REF(BgL_optz00_44, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 151 */
											obj_t BgL_auxz00_5901;

											obj_t BgL_auxz00_5894;

											if (STRINGP(BgL_arg2057z00_1117))
												{	/* Unsafe/aes.scm 151 */
													BgL_auxz00_5901 = BgL_arg2057z00_1117;
												}
											else
												{
													obj_t BgL_auxz00_5904;

													BgL_auxz00_5904 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 6817)),
														BGl_string3472z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2057z00_1117);
													FAILURE(BgL_auxz00_5904, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg2056z00_1116))
												{	/* Unsafe/aes.scm 151 */
													BgL_auxz00_5894 = BgL_arg2056z00_1116;
												}
											else
												{
													obj_t BgL_auxz00_5897;

													BgL_auxz00_5897 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 6817)),
														BGl_string3472z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2056z00_1116);
													FAILURE(BgL_auxz00_5897, BFALSE, BFALSE);
												}
											return
												BGl_aeszd2ctrzd2decryptzd2filezd2zz__aesz00
												(BgL_auxz00_5894, BgL_auxz00_5901, BgL_nbitsz00_1115);
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-decrypt-file */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptzd2filezd2zz__aesz00(obj_t
		BgL_fnamez00_41, obj_t BgL_passwordz00_42, obj_t BgL_nbitsz00_43)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 151 */
			{	/* Unsafe/aes.scm 152 */
				obj_t BgL_mmz00_1118;

				BgL_mmz00_1118 =
					BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_41, BTRUE, BFALSE);
				{	/* Unsafe/aes.scm 153 */
					obj_t BgL_val1836z00_1119;

					BgL_val1836z00_1119 =
						BGl_zc3exitza32061ze3z83zz__aesz00(BgL_nbitsz00_43,
						BgL_passwordz00_42, BgL_mmz00_1118);
					bgl_close_mmap(BgL_mmz00_1118);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1836z00_1119)))
						{	/* Unsafe/aes.scm 155 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1836z00_1119),
								CDR(BgL_val1836z00_1119));
						}
					else
						{	/* Unsafe/aes.scm 155 */
							return BgL_val1836z00_1119;
						}
				}
			}
		}
	}



/* <exit:2061> */
	obj_t BGl_zc3exitza32061ze3z83zz__aesz00(obj_t BgL_nbitsz00_4648,
		obj_t BgL_passwordz00_4647, obj_t BgL_mmz00_4646)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 155 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1837z00_1124;

			if (SET_EXIT(BgL_an_exit1837z00_1124))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1837z00_1124 = (void *) jmpbuf;
					{	/* Unsafe/aes.scm 155 */

						PUSH_EXIT(BgL_an_exit1837z00_1124, ((long) 0));
						{	/* Unsafe/aes.scm 154 */
							obj_t BgL_val1838z00_1125;

							BgL_val1838z00_1125 =
								BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_mmz00_4646,
								BgL_passwordz00_4647, BgL_nbitsz00_4648);
							POP_EXIT();
							return BgL_val1838z00_1125;
						}
					}
				}
		}
	}



/* _aes-ctr-decrypt-port */
	obj_t BGl__aeszd2ctrzd2decryptzd2portzd2zz__aesz00(obj_t BgL_envz00_50,
		obj_t BgL_optz00_49)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 160 */
			{	/* Unsafe/aes.scm 160 */
				obj_t BgL_g1956z00_1128;

				obj_t BgL_g1957z00_1129;

				BgL_g1956z00_1128 = VECTOR_REF(BgL_optz00_49, (int) (((long) 0)));
				BgL_g1957z00_1129 = VECTOR_REF(BgL_optz00_49, (int) (((long) 1)));
				{	/* Unsafe/aes.scm 160 */
					int BgL_aux1959z00_1131;

					BgL_aux1959z00_1131 = VECTOR_LENGTH(BgL_optz00_49);
					switch ((long) (BgL_aux1959z00_1131))
						{
						case ((long) 2):

							{	/* Unsafe/aes.scm 160 */

								{	/* Unsafe/aes.scm 160 */
									obj_t BgL_arg2063z00_1134;

									obj_t BgL_arg2064z00_1135;

									BgL_arg2063z00_1134 =
										VECTOR_REF(BgL_optz00_49, (int) (((long) 0)));
									BgL_arg2064z00_1135 =
										VECTOR_REF(BgL_optz00_49, (int) (((long) 1)));
									{	/* Unsafe/aes.scm 160 */
										obj_t BgL_res3241z00_2999;

										{	/* Unsafe/aes.scm 160 */
											obj_t BgL_inputzd2portzd2_2991;

											obj_t BgL_passwordz00_2992;

											obj_t BgL_nbitsz00_2993;

											if (INPUT_PORTP(BgL_arg2063z00_1134))
												{	/* Unsafe/aes.scm 160 */
													BgL_inputzd2portzd2_2991 = BgL_arg2063z00_1134;
												}
											else
												{
													obj_t BgL_auxz00_5936;

													BgL_auxz00_5936 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 7238)),
														BGl_string3473z00zz__aesz00,
														BGl_string3466z00zz__aesz00, BgL_arg2063z00_1134);
													FAILURE(BgL_auxz00_5936, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg2064z00_1135))
												{	/* Unsafe/aes.scm 160 */
													BgL_passwordz00_2992 = BgL_arg2064z00_1135;
												}
											else
												{
													obj_t BgL_auxz00_5942;

													BgL_auxz00_5942 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3455z00zz__aesz00, BINT(((long) 7238)),
														BGl_string3473z00zz__aesz00,
														BGl_string3457z00zz__aesz00, BgL_arg2064z00_1135);
													FAILURE(BgL_auxz00_5942, BFALSE, BFALSE);
												}
											BgL_nbitsz00_2993 = BINT(((long) 128));
											BgL_res3241z00_2999 =
												BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
												(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
												(BgL_inputzd2portzd2_2991), BgL_passwordz00_2992,
												BgL_nbitsz00_2993);
										}
										return BgL_res3241z00_2999;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Unsafe/aes.scm 160 */
								obj_t BgL_nbitsz00_1136;

								BgL_nbitsz00_1136 =
									VECTOR_REF(BgL_optz00_49, (int) (((long) 2)));
								{	/* Unsafe/aes.scm 160 */

									{	/* Unsafe/aes.scm 160 */
										obj_t BgL_arg2065z00_1137;

										obj_t BgL_arg2066z00_1138;

										BgL_arg2065z00_1137 =
											VECTOR_REF(BgL_optz00_49, (int) (((long) 0)));
										BgL_arg2066z00_1138 =
											VECTOR_REF(BgL_optz00_49, (int) (((long) 1)));
										{	/* Unsafe/aes.scm 160 */
											obj_t BgL_res3243z00_3008;

											{	/* Unsafe/aes.scm 160 */
												obj_t BgL_inputzd2portzd2_3000;

												obj_t BgL_passwordz00_3001;

												if (INPUT_PORTP(BgL_arg2065z00_1137))
													{	/* Unsafe/aes.scm 160 */
														BgL_inputzd2portzd2_3000 = BgL_arg2065z00_1137;
													}
												else
													{
														obj_t BgL_auxz00_5957;

														BgL_auxz00_5957 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 7238)),
															BGl_string3473z00zz__aesz00,
															BGl_string3466z00zz__aesz00, BgL_arg2065z00_1137);
														FAILURE(BgL_auxz00_5957, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg2066z00_1138))
													{	/* Unsafe/aes.scm 160 */
														BgL_passwordz00_3001 = BgL_arg2066z00_1138;
													}
												else
													{
														obj_t BgL_auxz00_5963;

														BgL_auxz00_5963 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3455z00zz__aesz00, BINT(((long) 7238)),
															BGl_string3473z00zz__aesz00,
															BGl_string3457z00zz__aesz00, BgL_arg2066z00_1138);
														FAILURE(BgL_auxz00_5963, BFALSE, BFALSE);
													}
												BgL_res3243z00_3008 =
													BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
													(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
													(BgL_inputzd2portzd2_3000), BgL_passwordz00_3001,
													BgL_nbitsz00_1136);
											}
											return BgL_res3243z00_3008;
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* aes-ctr-decrypt-port */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptzd2portzd2zz__aesz00(obj_t
		BgL_inputzd2portzd2_46, obj_t BgL_passwordz00_47, obj_t BgL_nbitsz00_48)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 160 */
			return
				BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
				(BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_46),
				BgL_passwordz00_47, BgL_nbitsz00_48);
		}
	}



/* %aes-ctr-encrypt */
	obj_t BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(obj_t BgL_plaintextz00_51,
		obj_t BgL_passwordz00_52, obj_t BgL_nbitsz00_53)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 217 */
			if (CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BgL_nbitsz00_53,
						BGl_list3474z00zz__aesz00)))
				{	/* Unsafe/aes.scm 220 */
					BFALSE;
				}
			else
				{	/* Unsafe/aes.scm 220 */
					BGl_errorz00zz__errorz00(BGl_symbol3459z00zz__aesz00,
						BGl_string3475z00zz__aesz00, BgL_nbitsz00_53);
				}
			{	/* Unsafe/aes.scm 224 */
				bool_t BgL_testz00_5977;

				if (STRINGP(BgL_plaintextz00_51))
					{	/* Unsafe/aes.scm 224 */
						BgL_testz00_5977 = ((bool_t) 1);
					}
				else
					{	/* Unsafe/aes.scm 224 */
						BgL_testz00_5977 = BGL_MMAPP(BgL_plaintextz00_51);
					}
				if (BgL_testz00_5977)
					{	/* Unsafe/aes.scm 224 */
						BFALSE;
					}
				else
					{	/* Unsafe/aes.scm 224 */
						BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_symbol3459z00zz__aesz00, BGl_string3476z00zz__aesz00,
							BgL_plaintextz00_51);
					}
			}
			{	/* Unsafe/aes.scm 228 */
				obj_t BgL_statez00_1154;

				BgL_statez00_1154 =
					BGl_makezd2u8matrixzd2zz__aesz00(
					(int) (((long) 4)), (int) (((long) 4)));
				{	/* Unsafe/aes.scm 228 */
					int BgL_lenz00_1155;

					if (STRINGP(BgL_plaintextz00_51))
						{	/* Unsafe/aes.scm 229 */
							BgL_lenz00_1155 =
								CINT(PROCEDURE_ENTRY
								(BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00)
								(BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00,
									BgL_plaintextz00_51, BEOA));
						}
					else
						{	/* Unsafe/aes.scm 229 */
							if (BGL_MMAPP(BgL_plaintextz00_51))
								{	/* Unsafe/aes.scm 230 */
									BgL_lenz00_1155 =
										CINT(PROCEDURE_ENTRY(BGl_mmapzd2lengthzd2envz00zz__mmapz00)
										(BGl_mmapzd2lengthzd2envz00zz__mmapz00, BgL_plaintextz00_51,
											BEOA));
								}
							else
								{	/* Unsafe/aes.scm 230 */
									BgL_lenz00_1155 = (int) (((long) 0));
						}}
					{	/* Unsafe/aes.scm 229 */
						obj_t BgL_keyz00_1156;

						BgL_keyz00_1156 =
							BGl_aeszd2passwordzd2ze3keyze3zz__aesz00(BgL_passwordz00_52,
							CINT(BgL_nbitsz00_53), BgL_statez00_1154);
						{	/* Unsafe/aes.scm 232 */
							long BgL_blockcountz00_1157;

							{	/* Unsafe/aes.scm 237 */
								obj_t BgL_za7za7_3019;

								BgL_za7za7_3019 =
									BGl_ceilingz00zz__r4_numbers_6_5z00
									(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lenz00_1155),
										BINT((int) (((long) 16)))));
								if (REALP(BgL_za7za7_3019))
									{	/* Unsafe/aes.scm 237 */
										BgL_blockcountz00_1157 =
											(long) (REAL_TO_DOUBLE(BgL_za7za7_3019));
									}
								else
									{	/* Unsafe/aes.scm 237 */
										BgL_blockcountz00_1157 = (long) CINT(BgL_za7za7_3019);
							}}
							{	/* Unsafe/aes.scm 237 */
								obj_t BgL_counterblockz00_1158;

								{	/* Unsafe/aes.scm 238 */
									int BgL_arg2174z00_1297;

									BgL_arg2174z00_1297 = (int) (((long) 16));
									{	/* Llib/srfi4.scm 231 */

										BgL_counterblockz00_1158 =
											BGl_makezd2u8vectorzd2zz__srfi4z00(
											(long) (BgL_arg2174z00_1297), BINT(((long) 0)));
								}}
								{	/* Unsafe/aes.scm 238 */
									long BgL_noncez00_1159;

									BgL_noncez00_1159 = bgl_current_seconds();
									{	/* Unsafe/aes.scm 239 */
										obj_t BgL_keyschedulez00_1160;

										BgL_keyschedulez00_1160 =
											BGl_aeszd2keyzd2expansionz00zz__aesz00(BgL_keyz00_1156);
										{	/* Unsafe/aes.scm 243 */
											obj_t BgL_ciphertextz00_1161;

											BgL_ciphertextz00_1161 =
												make_string(
												((long) (
														(int) (((long) 8))) +
													(long) (BgL_lenz00_1155)), ((unsigned char) ' '));
											{	/* Unsafe/aes.scm 246 */

												{	/* Unsafe/aes.scm 250 */
													long BgL_sz00_1163;

													{	/* Unsafe/aes.scm 250 */
														long BgL_arg2078z00_1165;

														{	/* Unsafe/aes.scm 250 */
															long BgL_nz00_3038;

															BgL_nz00_3038 =
																(BgL_noncez00_1159 >>
																(int) ((((long) 0) * ((long) 8))));
															if ((BgL_nz00_3038 < ((long) 0)))
																{	/* Unsafe/aes.scm 250 */
																	BgL_arg2078z00_1165 = NEG(BgL_nz00_3038);
																}
															else
																{	/* Unsafe/aes.scm 250 */
																	BgL_arg2078z00_1165 = BgL_nz00_3038;
																}
														}
														{	/* Unsafe/aes.scm 250 */
															long BgL_res3250z00_3045;

															{	/* Unsafe/aes.scm 250 */
																long BgL_auxz00_6025;

																{	/* Unsafe/aes.scm 250 */
																	long BgL_auxz00_6026;

																	BgL_auxz00_6026 =
																		ELONG_TO_LONG(BgL_arg2078z00_1165);
																	BgL_auxz00_6025 =
																		ELONG_TO_LONG(BgL_auxz00_6026);
																}
																BgL_res3250z00_3045 =
																	ELONG_TO_LONG(BgL_auxz00_6025);
															}
															BgL_sz00_1163 = BgL_res3250z00_3045;
													}}
													{	/* Unsafe/aes.scm 251 */
														long BgL_arg2077z00_1164;

														BgL_arg2077z00_1164 =
															(BgL_sz00_1163 & ((long) 255));
														{	/* Unsafe/aes.scm 251 */
															unsigned char BgL_auxz00_6031;

															BgL_auxz00_6031 =
																(unsigned char) (BgL_arg2077z00_1164);
															BGL_U8VSET(BgL_counterblockz00_1158, ((long) 0),
																BgL_auxz00_6031);
														} BUNSPEC;
												}}
												{	/* Unsafe/aes.scm 256 */
													long BgL_arg2081z00_1169;

													long BgL_arg2082z00_1170;

													BgL_arg2081z00_1169 = (((long) 0) + ((long) 4));
													BgL_arg2082z00_1170 = (((long) 0) & ((long) 255));
													{	/* Unsafe/aes.scm 256 */
														unsigned char BgL_auxz00_6036;

														BgL_auxz00_6036 =
															(unsigned char) (BgL_arg2082z00_1170);
														BGL_U8VSET(BgL_counterblockz00_1158,
															BgL_arg2081z00_1169, BgL_auxz00_6036);
													} BUNSPEC;
												}
												{	/* Unsafe/aes.scm 250 */
													long BgL_sz00_1172;

													{	/* Unsafe/aes.scm 250 */
														long BgL_arg2084z00_1174;

														{	/* Unsafe/aes.scm 250 */
															long BgL_nz00_3056;

															BgL_nz00_3056 =
																(BgL_noncez00_1159 >>
																(int) ((((long) 1) * ((long) 8))));
															if ((BgL_nz00_3056 < ((long) 0)))
																{	/* Unsafe/aes.scm 250 */
																	BgL_arg2084z00_1174 = NEG(BgL_nz00_3056);
																}
															else
																{	/* Unsafe/aes.scm 250 */
																	BgL_arg2084z00_1174 = BgL_nz00_3056;
																}
														}
														{	/* Unsafe/aes.scm 250 */
															long BgL_res3252z00_3063;

															{	/* Unsafe/aes.scm 250 */
																long BgL_auxz00_6045;

																{	/* Unsafe/aes.scm 250 */
																	long BgL_auxz00_6046;

																	BgL_auxz00_6046 =
																		ELONG_TO_LONG(BgL_arg2084z00_1174);
																	BgL_auxz00_6045 =
																		ELONG_TO_LONG(BgL_auxz00_6046);
																}
																BgL_res3252z00_3063 =
																	ELONG_TO_LONG(BgL_auxz00_6045);
															}
															BgL_sz00_1172 = BgL_res3252z00_3063;
													}}
													{	/* Unsafe/aes.scm 251 */
														long BgL_arg2083z00_1173;

														BgL_arg2083z00_1173 =
															(BgL_sz00_1172 & ((long) 255));
														{	/* Unsafe/aes.scm 251 */
															unsigned char BgL_auxz00_6051;

															BgL_auxz00_6051 =
																(unsigned char) (BgL_arg2083z00_1173);
															BGL_U8VSET(BgL_counterblockz00_1158, ((long) 1),
																BgL_auxz00_6051);
														} BUNSPEC;
												}}
												{	/* Unsafe/aes.scm 256 */
													long BgL_arg2089z00_1178;

													long BgL_arg2090z00_1179;

													BgL_arg2089z00_1178 = (((long) 1) + ((long) 4));
													BgL_arg2090z00_1179 = (((long) 0) & ((long) 255));
													{	/* Unsafe/aes.scm 256 */
														unsigned char BgL_auxz00_6056;

														BgL_auxz00_6056 =
															(unsigned char) (BgL_arg2090z00_1179);
														BGL_U8VSET(BgL_counterblockz00_1158,
															BgL_arg2089z00_1178, BgL_auxz00_6056);
													} BUNSPEC;
												}
												{	/* Unsafe/aes.scm 250 */
													long BgL_sz00_1181;

													{	/* Unsafe/aes.scm 250 */
														long BgL_arg2092z00_1183;

														{	/* Unsafe/aes.scm 250 */
															long BgL_nz00_3074;

															BgL_nz00_3074 =
																(BgL_noncez00_1159 >>
																(int) ((((long) 2) * ((long) 8))));
															if ((BgL_nz00_3074 < ((long) 0)))
																{	/* Unsafe/aes.scm 250 */
																	BgL_arg2092z00_1183 = NEG(BgL_nz00_3074);
																}
															else
																{	/* Unsafe/aes.scm 250 */
																	BgL_arg2092z00_1183 = BgL_nz00_3074;
																}
														}
														{	/* Unsafe/aes.scm 250 */
															long BgL_res3254z00_3081;

															{	/* Unsafe/aes.scm 250 */
																long BgL_auxz00_6065;

																{	/* Unsafe/aes.scm 250 */
																	long BgL_auxz00_6066;

																	BgL_auxz00_6066 =
																		ELONG_TO_LONG(BgL_arg2092z00_1183);
																	BgL_auxz00_6065 =
																		ELONG_TO_LONG(BgL_auxz00_6066);
																}
																BgL_res3254z00_3081 =
																	ELONG_TO_LONG(BgL_auxz00_6065);
															}
															BgL_sz00_1181 = BgL_res3254z00_3081;
													}}
													{	/* Unsafe/aes.scm 251 */
														long BgL_arg2091z00_1182;

														BgL_arg2091z00_1182 =
															(BgL_sz00_1181 & ((long) 255));
														{	/* Unsafe/aes.scm 251 */
															unsigned char BgL_auxz00_6071;

															BgL_auxz00_6071 =
																(unsigned char) (BgL_arg2091z00_1182);
															BGL_U8VSET(BgL_counterblockz00_1158, ((long) 2),
																BgL_auxz00_6071);
														} BUNSPEC;
												}}
												{	/* Unsafe/aes.scm 256 */
													long BgL_arg2095z00_1187;

													long BgL_arg2096z00_1188;

													BgL_arg2095z00_1187 = (((long) 2) + ((long) 4));
													BgL_arg2096z00_1188 = (((long) 0) & ((long) 255));
													{	/* Unsafe/aes.scm 256 */
														unsigned char BgL_auxz00_6076;

														BgL_auxz00_6076 =
															(unsigned char) (BgL_arg2096z00_1188);
														BGL_U8VSET(BgL_counterblockz00_1158,
															BgL_arg2095z00_1187, BgL_auxz00_6076);
													} BUNSPEC;
												}
												{	/* Unsafe/aes.scm 250 */
													long BgL_sz00_1190;

													{	/* Unsafe/aes.scm 250 */
														long BgL_arg2098z00_1192;

														{	/* Unsafe/aes.scm 250 */
															long BgL_nz00_3092;

															BgL_nz00_3092 =
																(BgL_noncez00_1159 >>
																(int) ((((long) 3) * ((long) 8))));
															if ((BgL_nz00_3092 < ((long) 0)))
																{	/* Unsafe/aes.scm 250 */
																	BgL_arg2098z00_1192 = NEG(BgL_nz00_3092);
																}
															else
																{	/* Unsafe/aes.scm 250 */
																	BgL_arg2098z00_1192 = BgL_nz00_3092;
																}
														}
														{	/* Unsafe/aes.scm 250 */
															long BgL_res3256z00_3099;

															{	/* Unsafe/aes.scm 250 */
																long BgL_auxz00_6085;

																{	/* Unsafe/aes.scm 250 */
																	long BgL_auxz00_6086;

																	BgL_auxz00_6086 =
																		ELONG_TO_LONG(BgL_arg2098z00_1192);
																	BgL_auxz00_6085 =
																		ELONG_TO_LONG(BgL_auxz00_6086);
																}
																BgL_res3256z00_3099 =
																	ELONG_TO_LONG(BgL_auxz00_6085);
															}
															BgL_sz00_1190 = BgL_res3256z00_3099;
													}}
													{	/* Unsafe/aes.scm 251 */
														long BgL_arg2097z00_1191;

														BgL_arg2097z00_1191 =
															(BgL_sz00_1190 & ((long) 255));
														{	/* Unsafe/aes.scm 251 */
															unsigned char BgL_auxz00_6091;

															BgL_auxz00_6091 =
																(unsigned char) (BgL_arg2097z00_1191);
															BGL_U8VSET(BgL_counterblockz00_1158, ((long) 3),
																BgL_auxz00_6091);
														} BUNSPEC;
												}}
												{	/* Unsafe/aes.scm 256 */
													long BgL_arg2101z00_1196;

													long BgL_arg2102z00_1197;

													BgL_arg2101z00_1196 = (((long) 3) + ((long) 4));
													BgL_arg2102z00_1197 = (((long) 0) & ((long) 255));
													{	/* Unsafe/aes.scm 256 */
														unsigned char BgL_auxz00_6096;

														BgL_auxz00_6096 =
															(unsigned char) (BgL_arg2102z00_1197);
														BGL_U8VSET(BgL_counterblockz00_1158,
															BgL_arg2101z00_1196, BgL_auxz00_6096);
													} BUNSPEC;
												}
												{
													long BgL_bz00_1199;

													BgL_bz00_1199 = ((long) 0);
												BgL_zc3anonymousza32103ze3z83_1200:
													if ((BgL_bz00_1199 < BgL_blockcountz00_1157))
														{	/* Unsafe/aes.scm 258 */
															{	/* Unsafe/aes.scm 263 */
																long BgL_jz00_1203;

																BgL_jz00_1203 = (((long) 0) * ((long) 8));
																{	/* Unsafe/aes.scm 264 */
																	long BgL_sz00_1204;

																	BgL_sz00_1204 =
																		(
																		(long) (
																			((unsigned long) (BgL_bz00_1199) >>
																				(int) (BgL_jz00_1203))) & ((long) 255));
																	{	/* Unsafe/aes.scm 265 */
																		long BgL_arg2105z00_1205;

																		BgL_arg2105z00_1205 =
																			(((long) 15) - ((long) 0));
																		{	/* Unsafe/aes.scm 265 */
																			unsigned char BgL_auxz00_6108;

																			BgL_auxz00_6108 =
																				(unsigned char) (BgL_sz00_1204);
																			BGL_U8VSET(BgL_counterblockz00_1158,
																				BgL_arg2105z00_1205, BgL_auxz00_6108);
																		} BUNSPEC;
																	}
																	{	/* Unsafe/aes.scm 267 */
																		long BgL_arg2106z00_1206;

																		BgL_arg2106z00_1206 =
																			(((long) 15) - (((long) 0) + ((long) 4)));
																		{	/* Unsafe/aes.scm 267 */
																			unsigned char BgL_auxz00_6113;

																			BgL_auxz00_6113 =
																				(unsigned char) (((long) 0));
																			BGL_U8VSET(BgL_counterblockz00_1158,
																				BgL_arg2106z00_1206, BgL_auxz00_6113);
																		} BUNSPEC;
															}}}
															{	/* Unsafe/aes.scm 263 */
																long BgL_jz00_1213;

																BgL_jz00_1213 = (((long) 1) * ((long) 8));
																{	/* Unsafe/aes.scm 264 */
																	long BgL_sz00_1214;

																	BgL_sz00_1214 =
																		(
																		(long) (
																			((unsigned long) (BgL_bz00_1199) >>
																				(int) (BgL_jz00_1213))) & ((long) 255));
																	{	/* Unsafe/aes.scm 265 */
																		long BgL_arg2112z00_1215;

																		BgL_arg2112z00_1215 =
																			(((long) 15) - ((long) 1));
																		{	/* Unsafe/aes.scm 265 */
																			unsigned char BgL_auxz00_6123;

																			BgL_auxz00_6123 =
																				(unsigned char) (BgL_sz00_1214);
																			BGL_U8VSET(BgL_counterblockz00_1158,
																				BgL_arg2112z00_1215, BgL_auxz00_6123);
																		} BUNSPEC;
																	}
																	{	/* Unsafe/aes.scm 267 */
																		long BgL_arg2113z00_1216;

																		BgL_arg2113z00_1216 =
																			(((long) 15) - (((long) 1) + ((long) 4)));
																		{	/* Unsafe/aes.scm 267 */
																			unsigned char BgL_auxz00_6128;

																			BgL_auxz00_6128 =
																				(unsigned char) (((long) 0));
																			BGL_U8VSET(BgL_counterblockz00_1158,
																				BgL_arg2113z00_1216, BgL_auxz00_6128);
																		} BUNSPEC;
															}}}
															{	/* Unsafe/aes.scm 263 */
																long BgL_jz00_1223;

																BgL_jz00_1223 = (((long) 2) * ((long) 8));
																{	/* Unsafe/aes.scm 264 */
																	long BgL_sz00_1224;

																	BgL_sz00_1224 =
																		(
																		(long) (
																			((unsigned long) (BgL_bz00_1199) >>
																				(int) (BgL_jz00_1223))) & ((long) 255));
																	{	/* Unsafe/aes.scm 265 */
																		long BgL_arg2121z00_1225;

																		BgL_arg2121z00_1225 =
																			(((long) 15) - ((long) 2));
																		{	/* Unsafe/aes.scm 265 */
																			unsigned char BgL_auxz00_6138;

																			BgL_auxz00_6138 =
																				(unsigned char) (BgL_sz00_1224);
																			BGL_U8VSET(BgL_counterblockz00_1158,
																				BgL_arg2121z00_1225, BgL_auxz00_6138);
																		} BUNSPEC;
																	}
																	{	/* Unsafe/aes.scm 267 */
																		long BgL_arg2123z00_1226;

																		BgL_arg2123z00_1226 =
																			(((long) 15) - (((long) 2) + ((long) 4)));
																		{	/* Unsafe/aes.scm 267 */
																			unsigned char BgL_auxz00_6143;

																			BgL_auxz00_6143 =
																				(unsigned char) (((long) 0));
																			BGL_U8VSET(BgL_counterblockz00_1158,
																				BgL_arg2123z00_1226, BgL_auxz00_6143);
																		} BUNSPEC;
															}}}
															{	/* Unsafe/aes.scm 263 */
																long BgL_jz00_1233;

																BgL_jz00_1233 = (((long) 3) * ((long) 8));
																{	/* Unsafe/aes.scm 264 */
																	long BgL_sz00_1234;

																	BgL_sz00_1234 =
																		(
																		(long) (
																			((unsigned long) (BgL_bz00_1199) >>
																				(int) (BgL_jz00_1233))) & ((long) 255));
																	{	/* Unsafe/aes.scm 265 */
																		long BgL_arg2131z00_1235;

																		BgL_arg2131z00_1235 =
																			(((long) 15) - ((long) 3));
																		{	/* Unsafe/aes.scm 265 */
																			unsigned char BgL_auxz00_6153;

																			BgL_auxz00_6153 =
																				(unsigned char) (BgL_sz00_1234);
																			BGL_U8VSET(BgL_counterblockz00_1158,
																				BgL_arg2131z00_1235, BgL_auxz00_6153);
																		} BUNSPEC;
																	}
																	{	/* Unsafe/aes.scm 267 */
																		long BgL_arg2132z00_1236;

																		BgL_arg2132z00_1236 =
																			(((long) 15) - (((long) 3) + ((long) 4)));
																		{	/* Unsafe/aes.scm 267 */
																			unsigned char BgL_auxz00_6158;

																			BgL_auxz00_6158 =
																				(unsigned char) (((long) 0));
																			BGL_U8VSET(BgL_counterblockz00_1158,
																				BgL_arg2132z00_1236, BgL_auxz00_6158);
																		} BUNSPEC;
															}}}
															{	/* Unsafe/aes.scm 269 */
																obj_t BgL_ciphercntrz00_1242;

																BgL_ciphercntrz00_1242 =
																	BGl_aeszd2cipherzd2zz__aesz00
																	(BgL_counterblockz00_1158,
																	BgL_keyschedulez00_1160, BgL_statez00_1154);
																{	/* Unsafe/aes.scm 269 */
																	int BgL_blocklengthz00_1243;

																	if (
																		(BgL_bz00_1199 <
																			(BgL_blockcountz00_1157 - ((long) 1))))
																		{	/* Unsafe/aes.scm 270 */
																			BgL_blocklengthz00_1243 =
																				(int) (((long) 16));
																		}
																	else
																		{	/* Unsafe/aes.scm 272 */
																			obj_t BgL_arg2160z00_1279;

																			{	/* Unsafe/aes.scm 272 */
																				long BgL_arg2162z00_1281;

																				int BgL_arg2163z00_1282;

																				BgL_arg2162z00_1281 =
																					(
																					(long) (BgL_lenz00_1155) -
																					((long) 1));
																				BgL_arg2163z00_1282 =
																					(int) (((long) 16));
																				BgL_arg2160z00_1279 =
																					BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																					(BINT(BgL_arg2162z00_1281),
																					BINT(BgL_arg2163z00_1282));
																			}
																			BgL_blocklengthz00_1243 =
																				(int) (
																				((long) CINT(BgL_arg2160z00_1279) +
																					((long) 1)));
																		}
																	{	/* Unsafe/aes.scm 270 */
																		long BgL_startz00_1244;

																		BgL_startz00_1244 =
																			(
																			(long) (
																				(int) (((long) 8))) +
																			(BgL_bz00_1199 *
																				(long) ((int) (((long) 16)))));
																		{	/* Unsafe/aes.scm 273 */

																			if (STRINGP(BgL_plaintextz00_51))
																				{
																					long BgL_iz00_1248;

																					{	/* Unsafe/aes.scm 277 */
																						bool_t BgL_auxz00_6183;

																						BgL_iz00_1248 = ((long) 0);
																					BgL_zc3anonymousza32139ze3z83_1249:
																						if (
																							(BgL_iz00_1248 <
																								(long)
																								(BgL_blocklengthz00_1243)))
																							{	/* Unsafe/aes.scm 277 */
																								{	/* Unsafe/aes.scm 278 */
																									long BgL_jz00_1251;

																									BgL_jz00_1251 =
																										(
																										(BgL_bz00_1199 *
																											(long) (
																												(int) (((long) 16)))) +
																										BgL_iz00_1248);
																									{	/* Unsafe/aes.scm 278 */
																										obj_t BgL_pz00_1252;

																										BgL_pz00_1252 =
																											PROCEDURE_ENTRY
																											(BGl_u8stringzd2refzd2envz00zz__aesz00)
																											(BGl_u8stringzd2refzd2envz00zz__aesz00,
																											BgL_plaintextz00_51,
																											BINT(BgL_jz00_1251),
																											BEOA);
																										{	/* Unsafe/aes.scm 279 */
																											long BgL_bytez00_1253;

																											{	/* Unsafe/aes.scm 280 */
																												unsigned char
																													BgL_arg2144z00_1255;
																												BgL_arg2144z00_1255 =
																													BGL_U8VREF
																													(BgL_ciphercntrz00_1242,
																													BgL_iz00_1248);
																												BgL_bytez00_1253 =
																													((long)
																													CINT(BgL_pz00_1252) ^
																													(long)
																													(BgL_arg2144z00_1255));
																											}
																											{	/* Unsafe/aes.scm 280 */

																												{	/* Unsafe/aes.scm 281 */
																													long
																														BgL_arg2141z00_1254;
																													BgL_arg2141z00_1254 =
																														(BgL_iz00_1248 +
																														BgL_startz00_1244);
																													{	/* Unsafe/aes.scm 281 */
																														int BgL_iz00_3185;

																														int BgL_vz00_3186;

																														BgL_iz00_3185 =
																															(int)
																															(BgL_arg2141z00_1254);
																														BgL_vz00_3186 =
																															(int)
																															(BgL_bytez00_1253);
																														{	/* Unsafe/aes.scm 281 */
																															unsigned char
																																BgL_auxz00_6203;
																															long
																																BgL_auxz00_6201;
																															BgL_auxz00_6203 =
																																((long)
																																(BgL_vz00_3186));
																															BgL_auxz00_6201 =
																																(long)
																																(BgL_iz00_3185);
																															STRING_SET
																																(BgL_ciphertextz00_1161,
																																BgL_auxz00_6201,
																																BgL_auxz00_6203);
																								}}}}}}}
																								{
																									long BgL_iz00_6207;

																									BgL_iz00_6207 =
																										(BgL_iz00_1248 +
																										((long) 1));
																									BgL_iz00_1248 = BgL_iz00_6207;
																									goto
																										BgL_zc3anonymousza32139ze3z83_1249;
																								}
																							}
																						else
																							{	/* Unsafe/aes.scm 277 */
																								BgL_auxz00_6183 = ((bool_t) 0);
																							}
																						BBOOL(BgL_auxz00_6183);
																					}
																				}
																			else
																				{	/* Unsafe/aes.scm 275 */
																					if (BGL_MMAPP(BgL_plaintextz00_51))
																						{
																							long BgL_iz00_1263;

																							{	/* Unsafe/aes.scm 277 */
																								bool_t BgL_auxz00_6212;

																								BgL_iz00_1263 = ((long) 0);
																							BgL_zc3anonymousza32149ze3z83_1264:
																								if (
																									(BgL_iz00_1263 <
																										(long)
																										(BgL_blocklengthz00_1243)))
																									{	/* Unsafe/aes.scm 277 */
																										{	/* Unsafe/aes.scm 278 */
																											long BgL_jz00_1266;

																											BgL_jz00_1266 =
																												(
																												(BgL_bz00_1199 *
																													(long) (
																														(int) (((long)
																																16)))) +
																												BgL_iz00_1263);
																											{	/* Unsafe/aes.scm 278 */
																												obj_t BgL_pz00_1267;

																												BgL_pz00_1267 =
																													PROCEDURE_ENTRY
																													(BGl_mmapzd2refzd2envz00zz__mmapz00)
																													(BGl_mmapzd2refzd2envz00zz__mmapz00,
																													BgL_plaintextz00_51,
																													BINT(BgL_jz00_1266),
																													BEOA);
																												{	/* Unsafe/aes.scm 279 */
																													long BgL_bytez00_1268;

																													{	/* Unsafe/aes.scm 280 */
																														unsigned char
																															BgL_arg2152z00_1270;
																														BgL_arg2152z00_1270
																															=
																															BGL_U8VREF
																															(BgL_ciphercntrz00_1242,
																															BgL_iz00_1263);
																														BgL_bytez00_1268 =
																															((long)
																															CINT
																															(BgL_pz00_1267) ^
																															(long)
																															(BgL_arg2152z00_1270));
																													}
																													{	/* Unsafe/aes.scm 280 */

																														{	/* Unsafe/aes.scm 281 */
																															long
																																BgL_arg2151z00_1269;
																															BgL_arg2151z00_1269
																																=
																																(BgL_iz00_1263 +
																																BgL_startz00_1244);
																															{	/* Unsafe/aes.scm 281 */
																																int
																																	BgL_iz00_3207;
																																int
																																	BgL_vz00_3208;
																																BgL_iz00_3207 =
																																	(int)
																																	(BgL_arg2151z00_1269);
																																BgL_vz00_3208 =
																																	(int)
																																	(BgL_bytez00_1268);
																																{	/* Unsafe/aes.scm 281 */
																																	unsigned char
																																		BgL_auxz00_6232;
																																	long
																																		BgL_auxz00_6230;
																																	BgL_auxz00_6232
																																		=
																																		((long)
																																		(BgL_vz00_3208));
																																	BgL_auxz00_6230
																																		=
																																		(long)
																																		(BgL_iz00_3207);
																																	STRING_SET
																																		(BgL_ciphertextz00_1161,
																																		BgL_auxz00_6230,
																																		BgL_auxz00_6232);
																										}}}}}}}
																										{
																											long BgL_iz00_6236;

																											BgL_iz00_6236 =
																												(BgL_iz00_1263 +
																												((long) 1));
																											BgL_iz00_1263 =
																												BgL_iz00_6236;
																											goto
																												BgL_zc3anonymousza32149ze3z83_1264;
																										}
																									}
																								else
																									{	/* Unsafe/aes.scm 277 */
																										BgL_auxz00_6212 =
																											((bool_t) 0);
																									}
																								BBOOL(BgL_auxz00_6212);
																							}
																						}
																					else
																						{	/* Unsafe/aes.scm 276 */
																							BINT(((long) 0));
															}}}}}}
															{
																long BgL_bz00_6240;

																BgL_bz00_6240 = (BgL_bz00_1199 + ((long) 1));
																BgL_bz00_1199 = BgL_bz00_6240;
																goto BgL_zc3anonymousza32103ze3z83_1200;
															}
														}
													else
														{	/* Unsafe/aes.scm 258 */
															((bool_t) 0);
														}
												}
												{
													long BgL_iz00_1287;

													BgL_iz00_1287 = ((long) 0);
												BgL_zc3anonymousza32166ze3z83_1288:
													if ((BgL_iz00_1287 < (long) ((int) (((long) 8)))))
														{	/* Unsafe/aes.scm 284 */
															{	/* Unsafe/aes.scm 285 */
																unsigned char BgL_arg2168z00_1290;

																BgL_arg2168z00_1290 =
																	BGL_U8VREF(BgL_counterblockz00_1158,
																	BgL_iz00_1287);
																{	/* Unsafe/aes.scm 285 */
																	int BgL_iz00_3222;

																	int BgL_vz00_3223;

																	BgL_iz00_3222 = (int) (BgL_iz00_1287);
																	BgL_vz00_3223 = (int) (BgL_arg2168z00_1290);
																	{	/* Unsafe/aes.scm 285 */
																		unsigned char BgL_auxz00_6251;

																		long BgL_auxz00_6249;

																		BgL_auxz00_6251 = ((long) (BgL_vz00_3223));
																		BgL_auxz00_6249 = (long) (BgL_iz00_3222);
																		STRING_SET(BgL_ciphertextz00_1161,
																			BgL_auxz00_6249, BgL_auxz00_6251);
															}}}
															{
																long BgL_iz00_6255;

																BgL_iz00_6255 = (BgL_iz00_1287 + ((long) 1));
																BgL_iz00_1287 = BgL_iz00_6255;
																goto BgL_zc3anonymousza32166ze3z83_1288;
															}
														}
													else
														{	/* Unsafe/aes.scm 284 */
															((bool_t) 0);
														}
												}
												return BgL_ciphertextz00_1161;
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



/* %aes-ctr-decrypt */
	obj_t BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(obj_t BgL_ciphertextz00_56,
		obj_t BgL_passwordz00_57, obj_t BgL_nbitsz00_58)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 295 */
			if (CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BgL_nbitsz00_58,
						BGl_list3474z00zz__aesz00)))
				{	/* Unsafe/aes.scm 298 */
					BFALSE;
				}
			else
				{	/* Unsafe/aes.scm 298 */
					BGl_errorz00zz__errorz00(BGl_symbol3468z00zz__aesz00,
						BGl_string3475z00zz__aesz00, BgL_nbitsz00_58);
				}
			{	/* Unsafe/aes.scm 301 */
				obj_t BgL_statez00_1319;

				BgL_statez00_1319 =
					BGl_makezd2u8matrixzd2zz__aesz00(
					(int) (((long) 4)), (int) (((long) 4)));
				{	/* Unsafe/aes.scm 301 */
					obj_t BgL_keyz00_1320;

					BgL_keyz00_1320 =
						BGl_aeszd2passwordzd2ze3keyze3zz__aesz00(BgL_passwordz00_57,
						CINT(BgL_nbitsz00_58), BgL_statez00_1319);
					{	/* Unsafe/aes.scm 302 */
						obj_t BgL_keyschedulez00_1321;

						BgL_keyschedulez00_1321 =
							BGl_aeszd2keyzd2expansionz00zz__aesz00(BgL_keyz00_1320);
						{	/* Unsafe/aes.scm 303 */
							int BgL_lenz00_1322;

							BgL_lenz00_1322 =
								(int) (
								(STRING_LENGTH(BgL_ciphertextz00_56) -
									(long) ((int) (((long) 8)))));
							{	/* Unsafe/aes.scm 304 */
								obj_t BgL_blockcountz00_1323;

								{	/* Unsafe/aes.scm 305 */
									obj_t BgL_za7za7_3236;

									BgL_za7za7_3236 =
										BGl_ceilingz00zz__r4_numbers_6_5z00
										(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lenz00_1322),
											BINT((int) (((long) 16)))));
									if (REALP(BgL_za7za7_3236))
										{	/* Unsafe/aes.scm 305 */
											BgL_blockcountz00_1323 =
												BINT((long) (REAL_TO_DOUBLE(BgL_za7za7_3236)));
										}
									else
										{	/* Unsafe/aes.scm 305 */
											BgL_blockcountz00_1323 = BgL_za7za7_3236;
										}
								}
								{	/* Unsafe/aes.scm 305 */
									obj_t BgL_counterblockz00_1324;

									{	/* Unsafe/aes.scm 306 */
										int BgL_arg2251z00_1404;

										BgL_arg2251z00_1404 = (int) (((long) 16));
										{	/* Llib/srfi4.scm 231 */

											BgL_counterblockz00_1324 =
												BGl_makezd2u8vectorzd2zz__srfi4z00(
												(long) (BgL_arg2251z00_1404), BINT(((long) 0)));
									}}
									{	/* Unsafe/aes.scm 306 */
										obj_t BgL_plaintextz00_1325;

										BgL_plaintextz00_1325 =
											make_string(
											(long) (BgL_lenz00_1322), ((unsigned char) ' '));
										{	/* Unsafe/aes.scm 307 */

											{
												long BgL_iz00_1327;

												BgL_iz00_1327 = ((long) 0);
											BgL_zc3anonymousza32187ze3z83_1328:
												if ((BgL_iz00_1327 < (long) ((int) (((long) 8)))))
													{	/* Unsafe/aes.scm 310 */
														{	/* Unsafe/aes.scm 311 */
															int BgL_arg2189z00_1330;

															{	/* Unsafe/aes.scm 311 */
																obj_t BgL_sz00_3251;

																BgL_sz00_3251 = BgL_ciphertextz00_56;
																BgL_arg2189z00_1330 =
																	(int) (
																	(STRING_REF(BgL_sz00_3251,
																			(long) ((int) (BgL_iz00_1327)))));
															}
															{	/* Unsafe/aes.scm 311 */
																unsigned char BgL_auxz00_6297;

																BgL_auxz00_6297 =
																	(unsigned char) (BgL_arg2189z00_1330);
																BGL_U8VSET(BgL_counterblockz00_1324,
																	BgL_iz00_1327, BgL_auxz00_6297);
															} BUNSPEC;
														}
														{
															long BgL_iz00_6300;

															BgL_iz00_6300 = (BgL_iz00_1327 + ((long) 1));
															BgL_iz00_1327 = BgL_iz00_6300;
															goto BgL_zc3anonymousza32187ze3z83_1328;
														}
													}
												else
													{	/* Unsafe/aes.scm 310 */
														((bool_t) 0);
													}
											}
											{
												long BgL_bz00_1335;

												BgL_bz00_1335 = ((long) 0);
											BgL_zc3anonymousza32192ze3z83_1336:
												if (
													(BgL_bz00_1335 < (long) CINT(BgL_blockcountz00_1323)))
													{	/* Unsafe/aes.scm 313 */
														{	/* Unsafe/aes.scm 315 */
															long BgL_vz00_1339;

															BgL_vz00_1339 =
																(
																(long) (
																	((unsigned long) (BgL_bz00_1335) >>
																		(int) (
																			(((long) 0) *
																				((long) 8))))) & ((long) 255));
															{	/* Unsafe/aes.scm 316 */
																long BgL_arg2194z00_1340;

																BgL_arg2194z00_1340 =
																	(((long) 15) - ((long) 0));
																{	/* Unsafe/aes.scm 316 */
																	unsigned char BgL_auxz00_6312;

																	BgL_auxz00_6312 =
																		(unsigned char) (BgL_vz00_1339);
																	BGL_U8VSET(BgL_counterblockz00_1324,
																		BgL_arg2194z00_1340, BgL_auxz00_6312);
																} BUNSPEC;
														}}
														{	/* Unsafe/aes.scm 319 */
															long BgL_arg2198z00_1345;

															BgL_arg2198z00_1345 =
																(((long) 15) - (((long) 0) + ((long) 4)));
															{	/* Unsafe/aes.scm 319 */
																unsigned char BgL_auxz00_6317;

																BgL_auxz00_6317 = (unsigned char) (((long) 0));
																BGL_U8VSET(BgL_counterblockz00_1324,
																	BgL_arg2198z00_1345, BgL_auxz00_6317);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 315 */
															long BgL_vz00_1349;

															BgL_vz00_1349 =
																(
																(long) (
																	((unsigned long) (BgL_bz00_1335) >>
																		(int) (
																			(((long) 1) *
																				((long) 8))))) & ((long) 255));
															{	/* Unsafe/aes.scm 316 */
																long BgL_arg2203z00_1350;

																BgL_arg2203z00_1350 =
																	(((long) 15) - ((long) 1));
																{	/* Unsafe/aes.scm 316 */
																	unsigned char BgL_auxz00_6327;

																	BgL_auxz00_6327 =
																		(unsigned char) (BgL_vz00_1349);
																	BGL_U8VSET(BgL_counterblockz00_1324,
																		BgL_arg2203z00_1350, BgL_auxz00_6327);
																} BUNSPEC;
														}}
														{	/* Unsafe/aes.scm 319 */
															long BgL_arg2207z00_1355;

															BgL_arg2207z00_1355 =
																(((long) 15) - (((long) 1) + ((long) 4)));
															{	/* Unsafe/aes.scm 319 */
																unsigned char BgL_auxz00_6332;

																BgL_auxz00_6332 = (unsigned char) (((long) 0));
																BGL_U8VSET(BgL_counterblockz00_1324,
																	BgL_arg2207z00_1355, BgL_auxz00_6332);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 315 */
															long BgL_vz00_1359;

															BgL_vz00_1359 =
																(
																(long) (
																	((unsigned long) (BgL_bz00_1335) >>
																		(int) (
																			(((long) 2) *
																				((long) 8))))) & ((long) 255));
															{	/* Unsafe/aes.scm 316 */
																long BgL_arg2210z00_1360;

																BgL_arg2210z00_1360 =
																	(((long) 15) - ((long) 2));
																{	/* Unsafe/aes.scm 316 */
																	unsigned char BgL_auxz00_6342;

																	BgL_auxz00_6342 =
																		(unsigned char) (BgL_vz00_1359);
																	BGL_U8VSET(BgL_counterblockz00_1324,
																		BgL_arg2210z00_1360, BgL_auxz00_6342);
																} BUNSPEC;
														}}
														{	/* Unsafe/aes.scm 319 */
															long BgL_arg2214z00_1365;

															BgL_arg2214z00_1365 =
																(((long) 15) - (((long) 2) + ((long) 4)));
															{	/* Unsafe/aes.scm 319 */
																unsigned char BgL_auxz00_6347;

																BgL_auxz00_6347 = (unsigned char) (((long) 0));
																BGL_U8VSET(BgL_counterblockz00_1324,
																	BgL_arg2214z00_1365, BgL_auxz00_6347);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 315 */
															long BgL_vz00_1369;

															BgL_vz00_1369 =
																(
																(long) (
																	((unsigned long) (BgL_bz00_1335) >>
																		(int) (
																			(((long) 3) *
																				((long) 8))))) & ((long) 255));
															{	/* Unsafe/aes.scm 316 */
																long BgL_arg2222z00_1370;

																BgL_arg2222z00_1370 =
																	(((long) 15) - ((long) 3));
																{	/* Unsafe/aes.scm 316 */
																	unsigned char BgL_auxz00_6357;

																	BgL_auxz00_6357 =
																		(unsigned char) (BgL_vz00_1369);
																	BGL_U8VSET(BgL_counterblockz00_1324,
																		BgL_arg2222z00_1370, BgL_auxz00_6357);
																} BUNSPEC;
														}}
														{	/* Unsafe/aes.scm 319 */
															long BgL_arg2227z00_1375;

															BgL_arg2227z00_1375 =
																(((long) 15) - (((long) 3) + ((long) 4)));
															{	/* Unsafe/aes.scm 319 */
																unsigned char BgL_auxz00_6362;

																BgL_auxz00_6362 = (unsigned char) (((long) 0));
																BGL_U8VSET(BgL_counterblockz00_1324,
																	BgL_arg2227z00_1375, BgL_auxz00_6362);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 320 */
															obj_t BgL_ciphercntrz00_1378;

															BgL_ciphercntrz00_1378 =
																BGl_aeszd2cipherzd2zz__aesz00
																(BgL_counterblockz00_1324,
																BgL_keyschedulez00_1321, BgL_statez00_1319);
															{	/* Unsafe/aes.scm 320 */
																int BgL_blocklengthz00_1379;

																if (
																	(BgL_bz00_1335 <
																		((long) CINT(BgL_blockcountz00_1323) -
																			((long) 1))))
																	{	/* Unsafe/aes.scm 321 */
																		BgL_blocklengthz00_1379 =
																			(int) (((long) 16));
																	}
																else
																	{	/* Unsafe/aes.scm 323 */
																		obj_t BgL_arg2244z00_1396;

																		{	/* Unsafe/aes.scm 323 */
																			long BgL_arg2246z00_1398;

																			int BgL_arg2247z00_1399;

																			BgL_arg2246z00_1398 =
																				((long) (BgL_lenz00_1322) - ((long) 1));
																			BgL_arg2247z00_1399 = (int) (((long) 16));
																			BgL_arg2244z00_1396 =
																				BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																				(BINT(BgL_arg2246z00_1398),
																				BINT(BgL_arg2247z00_1399));
																		}
																		BgL_blocklengthz00_1379 =
																			(int) (
																			((long) CINT(BgL_arg2244z00_1396) +
																				((long) 1)));
																	}
																{	/* Unsafe/aes.scm 321 */
																	long BgL_startz00_1380;

																	BgL_startz00_1380 =
																		(BgL_bz00_1335 *
																		(long) ((int) (((long) 16))));
																	{	/* Unsafe/aes.scm 324 */
																		long BgL_endz00_1381;

																		BgL_endz00_1381 =
																			(BgL_startz00_1380 +
																			(long) (BgL_blocklengthz00_1379));
																		{	/* Unsafe/aes.scm 325 */

																			{
																				long BgL_iz00_1383;

																				BgL_iz00_1383 = BgL_startz00_1380;
																			BgL_zc3anonymousza32235ze3z83_1384:
																				if ((BgL_iz00_1383 < BgL_endz00_1381))
																					{	/* Unsafe/aes.scm 326 */
																						{	/* Unsafe/aes.scm 327 */
																							int BgL_cipherz00_1386;

																							{	/* Unsafe/aes.scm 327 */
																								obj_t BgL_sz00_3330;

																								BgL_sz00_3330 =
																									BgL_ciphertextz00_56;
																								BgL_cipherz00_1386 =
																									(int) ((STRING_REF
																										(BgL_sz00_3330,
																											(long) ((int) (
																													(BgL_iz00_1383 +
																														(long) ((int) ((
																																	(long)
																																	8)))))))));
																							}
																							{	/* Unsafe/aes.scm 327 */
																								unsigned char
																									BgL_cntrbytez00_1387;
																								{	/* Unsafe/aes.scm 328 */
																									long BgL_auxz00_6395;

																									BgL_auxz00_6395 =
																										(BgL_iz00_1383 -
																										BgL_startz00_1380);
																									BgL_cntrbytez00_1387 =
																										BGL_U8VREF
																										(BgL_ciphercntrz00_1378,
																										BgL_auxz00_6395);
																								}
																								{	/* Unsafe/aes.scm 328 */
																									long BgL_plainbytez00_1388;

																									BgL_plainbytez00_1388 =
																										(
																										(long) (BgL_cipherz00_1386)
																										^
																										(long)
																										(BgL_cntrbytez00_1387));
																									{	/* Unsafe/aes.scm 329 */

																										{	/* Unsafe/aes.scm 330 */
																											int BgL_iz00_3342;

																											int BgL_vz00_3343;

																											BgL_iz00_3342 =
																												(int) (BgL_iz00_1383);
																											BgL_vz00_3343 =
																												(int)
																												(BgL_plainbytez00_1388);
																											{	/* Unsafe/aes.scm 330 */
																												unsigned char
																													BgL_auxz00_6405;
																												long BgL_auxz00_6403;

																												BgL_auxz00_6405 =
																													(
																													(long)
																													(BgL_vz00_3343));
																												BgL_auxz00_6403 =
																													(long)
																													(BgL_iz00_3342);
																												STRING_SET
																													(BgL_plaintextz00_1325,
																													BgL_auxz00_6403,
																													BgL_auxz00_6405);
																						}}}}}}
																						{
																							long BgL_iz00_6409;

																							BgL_iz00_6409 =
																								(BgL_iz00_1383 + ((long) 1));
																							BgL_iz00_1383 = BgL_iz00_6409;
																							goto
																								BgL_zc3anonymousza32235ze3z83_1384;
																						}
																					}
																				else
																					{	/* Unsafe/aes.scm 326 */
																						((bool_t) 0);
																					}
																			}
																		}
																	}
																}
															}
														}
														{
															long BgL_bz00_6411;

															BgL_bz00_6411 = (BgL_bz00_1335 + ((long) 1));
															BgL_bz00_1335 = BgL_bz00_6411;
															goto BgL_zc3anonymousza32192ze3z83_1336;
														}
													}
												else
													{	/* Unsafe/aes.scm 313 */
														((bool_t) 0);
													}
											}
											return BgL_plaintextz00_1325;
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



/* make-u8matrix */
	obj_t BGl_makezd2u8matrixzd2zz__aesz00(int BgL_nz00_61, int BgL_mz00_62)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 391 */
			{	/* Unsafe/aes.scm 392 */
				obj_t BgL_vz00_1412;

				BgL_vz00_1412 = make_vector(BgL_nz00_61, BUNSPEC);
				{
					long BgL_iz00_1414;

					BgL_iz00_1414 = ((long) 0);
				BgL_zc3anonymousza32258ze3z83_1415:
					if ((BgL_iz00_1414 < (long) (BgL_nz00_61)))
						{	/* Unsafe/aes.scm 393 */
							VECTOR_SET(BgL_vz00_1412,
								(int) (BgL_iz00_1414),
								BGl_makezd2u8vectorzd2zz__srfi4z00(
									(long) (BgL_mz00_62), BINT(((long) 0))));
							{
								long BgL_iz00_6422;

								BgL_iz00_6422 = (BgL_iz00_1414 + ((long) 1));
								BgL_iz00_1414 = BgL_iz00_6422;
								goto BgL_zc3anonymousza32258ze3z83_1415;
							}
						}
					else
						{	/* Unsafe/aes.scm 393 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1412;
			}
		}
	}



/* u8string-ref */
	int BGl_u8stringzd2refzd2zz__aesz00(obj_t BgL_sz00_70, int BgL_iz00_71)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 412 */
			return (int) ((STRING_REF(BgL_sz00_70, (long) (BgL_iz00_71))));
		}
	}



/* _u8string-ref */
	obj_t BGl__u8stringzd2refzd2zz__aesz00(obj_t BgL_envz00_4638,
		obj_t BgL_sz00_4639, obj_t BgL_iz00_4640)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 412 */
			{	/* Unsafe/aes.scm 413 */
				int BgL_auxz00_6428;

				{	/* Unsafe/aes.scm 413 */
					int BgL_auxz00_6436;

					obj_t BgL_auxz00_6429;

					{	/* Unsafe/aes.scm 413 */
						obj_t BgL_auxz00_6437;

						if (INTEGERP(BgL_iz00_4640))
							{	/* Unsafe/aes.scm 413 */
								BgL_auxz00_6437 = BgL_iz00_4640;
							}
						else
							{
								obj_t BgL_auxz00_6440;

								BgL_auxz00_6440 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3455z00zz__aesz00,
									BINT(((long) 18767)), BGl_string3477z00zz__aesz00,
									BGl_string3478z00zz__aesz00, BgL_iz00_4640);
								FAILURE(BgL_auxz00_6440, BFALSE, BFALSE);
							}
						BgL_auxz00_6436 = CINT(BgL_auxz00_6437);
					}
					if (STRINGP(BgL_sz00_4639))
						{	/* Unsafe/aes.scm 413 */
							BgL_auxz00_6429 = BgL_sz00_4639;
						}
					else
						{
							obj_t BgL_auxz00_6432;

							BgL_auxz00_6432 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3455z00zz__aesz00,
								BINT(((long) 18767)), BGl_string3477z00zz__aesz00,
								BGl_string3457z00zz__aesz00, BgL_sz00_4639);
							FAILURE(BgL_auxz00_6432, BFALSE, BFALSE);
						}
					BgL_auxz00_6428 =
						BGl_u8stringzd2refzd2zz__aesz00(BgL_auxz00_6429, BgL_auxz00_6436);
				}
				return BINT(BgL_auxz00_6428);
			}
		}
	}



/* aes-password->key */
	obj_t BGl_aeszd2passwordzd2ze3keyze3zz__aesz00(obj_t BgL_passwordz00_75,
		int BgL_nbitsz00_76, obj_t BgL_statez00_77)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 424 */
			{	/* Unsafe/aes.scm 425 */
				long BgL_nbytesz00_1425;

				BgL_nbytesz00_1425 = ((long) (BgL_nbitsz00_76) / ((long) 8));
				{	/* Unsafe/aes.scm 425 */
					obj_t BgL_uvecz00_1426;

					BgL_uvecz00_1426 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_nbytesz00_1425,
						BINT(((long) 0)));
					{	/* Unsafe/aes.scm 426 */
						obj_t BgL_shapassz00_1427;

						if ((STRING_LENGTH(BgL_passwordz00_75) < BgL_nbytesz00_1425))
							{	/* Unsafe/aes.scm 427 */
								BgL_shapassz00_1427 =
									string_append(BgL_passwordz00_75,
									BGl_sha1sumzd2stringzd2zz__sha1z00(BgL_passwordz00_75));
							}
						else
							{	/* Unsafe/aes.scm 427 */
								BgL_shapassz00_1427 = BgL_passwordz00_75;
							}
						{	/* Unsafe/aes.scm 430 */

							{
								long BgL_iz00_1430;

								BgL_iz00_1430 = ((long) 0);
							BgL_zc3anonymousza32268ze3z83_1431:
								if ((BgL_iz00_1430 < BgL_nbytesz00_1425))
									{	/* Unsafe/aes.scm 431 */
										{	/* Unsafe/aes.scm 432 */
											int BgL_arg2270z00_1433;

											BgL_arg2270z00_1433 =
												(int) (
												(STRING_REF(BgL_shapassz00_1427,
														(long) ((int) (BgL_iz00_1430)))));
											{	/* Unsafe/aes.scm 432 */
												unsigned char BgL_auxz00_6463;

												BgL_auxz00_6463 = (unsigned char) (BgL_arg2270z00_1433);
												BGL_U8VSET(BgL_uvecz00_1426, BgL_iz00_1430,
													BgL_auxz00_6463);
											} BUNSPEC;
										}
										{
											long BgL_iz00_6466;

											BgL_iz00_6466 = (BgL_iz00_1430 + ((long) 1));
											BgL_iz00_1430 = BgL_iz00_6466;
											goto BgL_zc3anonymousza32268ze3z83_1431;
										}
									}
								else
									{	/* Unsafe/aes.scm 431 */
										((bool_t) 0);
									}
							}
							return
								BGl_aeszd2cipherzd2zz__aesz00(BgL_uvecz00_1426,
								BGl_aeszd2keyzd2expansionz00zz__aesz00(BgL_uvecz00_1426),
								BgL_statez00_77);
						}
					}
				}
			}
		}
	}



/* aes-key-expansion */
	obj_t BGl_aeszd2keyzd2expansionz00zz__aesz00(obj_t BgL_keyz00_78)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 440 */
			{	/* Unsafe/aes.scm 442 */
				long BgL_nkz00_1441;

				{	/* Unsafe/aes.scm 443 */
					long BgL_arg2342z00_1539;

					BgL_arg2342z00_1539 = BGL_HVECTOR_LENGTH(BgL_keyz00_78);
					BgL_nkz00_1441 = (BgL_arg2342z00_1539 / ((long) 4));
				}
				{	/* Unsafe/aes.scm 443 */
					long BgL_nrz00_1442;

					BgL_nrz00_1442 = (BgL_nkz00_1441 + ((long) 6));
					{	/* Unsafe/aes.scm 444 */
						obj_t BgL_wz00_1443;

						{	/* Unsafe/aes.scm 445 */
							long BgL_arg2339z00_1536;

							BgL_arg2339z00_1536 =
								(((long) 4) * (BgL_nrz00_1442 + ((long) 1)));
							BgL_wz00_1443 = make_vector((int) (BgL_arg2339z00_1536), BUNSPEC);
						}
						{	/* Unsafe/aes.scm 445 */
							obj_t BgL_tempz00_1444;

							{	/* Llib/srfi4.scm 231 */

								BgL_tempz00_1444 =
									BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4),
									BINT(((long) 0)));
							}
							{	/* Unsafe/aes.scm 446 */

								{
									long BgL_iz00_1446;

									BgL_iz00_1446 = ((long) 0);
								BgL_zc3anonymousza32276ze3z83_1447:
									if ((BgL_iz00_1446 < BgL_nkz00_1441))
										{	/* Unsafe/aes.scm 448 */
											{	/* Unsafe/aes.scm 449 */
												long BgL_jz00_1449;

												BgL_jz00_1449 = (((long) 4) * BgL_iz00_1446);
												{	/* Unsafe/aes.scm 449 */
													obj_t BgL_rz00_1450;

													{	/* Unsafe/aes.scm 450 */
														unsigned char BgL_arg2278z00_1451;

														unsigned char BgL_arg2279z00_1452;

														unsigned char BgL_arg2280z00_1453;

														unsigned char BgL_arg2281z00_1454;

														BgL_arg2278z00_1451 =
															BGL_U8VREF(BgL_keyz00_78, BgL_jz00_1449);
														{	/* Unsafe/aes.scm 451 */
															long BgL_auxz00_6483;

															BgL_auxz00_6483 = (BgL_jz00_1449 + ((long) 1));
															BgL_arg2279z00_1452 =
																BGL_U8VREF(BgL_keyz00_78, BgL_auxz00_6483);
														}
														{	/* Unsafe/aes.scm 452 */
															long BgL_auxz00_6486;

															BgL_auxz00_6486 = (BgL_jz00_1449 + ((long) 2));
															BgL_arg2280z00_1453 =
																BGL_U8VREF(BgL_keyz00_78, BgL_auxz00_6486);
														}
														{	/* Unsafe/aes.scm 453 */
															long BgL_auxz00_6489;

															BgL_auxz00_6489 = (BgL_jz00_1449 + ((long) 3));
															BgL_arg2281z00_1454 =
																BGL_U8VREF(BgL_keyz00_78, BgL_auxz00_6489);
														}
														{	/* Unsafe/aes.scm 450 */
															obj_t BgL_list2282z00_1455;

															{	/* Unsafe/aes.scm 450 */
																obj_t BgL_arg2283z00_1456;

																{	/* Unsafe/aes.scm 450 */
																	obj_t BgL_arg2284z00_1457;

																	{	/* Unsafe/aes.scm 450 */
																		obj_t BgL_arg2285z00_1458;

																		BgL_arg2285z00_1458 =
																			MAKE_PAIR(BINT(BgL_arg2281z00_1454),
																			BNIL);
																		BgL_arg2284z00_1457 =
																			MAKE_PAIR(BINT(BgL_arg2280z00_1453),
																			BgL_arg2285z00_1458);
																	}
																	BgL_arg2283z00_1456 =
																		MAKE_PAIR(BINT(BgL_arg2279z00_1452),
																		BgL_arg2284z00_1457);
																}
																BgL_list2282z00_1455 =
																	MAKE_PAIR(BINT(BgL_arg2278z00_1451),
																	BgL_arg2283z00_1456);
															}
															BgL_rz00_1450 =
																BGl_u8vectorz00zz__srfi4z00
																(BgL_list2282z00_1455);
													}}
													{	/* Unsafe/aes.scm 450 */

														VECTOR_SET(BgL_wz00_1443,
															(int) (BgL_iz00_1446), BgL_rz00_1450);
											}}}
											{
												long BgL_iz00_6503;

												BgL_iz00_6503 = (BgL_iz00_1446 + ((long) 1));
												BgL_iz00_1446 = BgL_iz00_6503;
												goto BgL_zc3anonymousza32276ze3z83_1447;
											}
										}
									else
										{	/* Unsafe/aes.scm 448 */
											((bool_t) 0);
										}
								}
								{
									long BgL_iz00_1465;

									BgL_iz00_1465 = BgL_nkz00_1441;
								BgL_zc3anonymousza32292ze3z83_1466:
									if (
										(BgL_iz00_1465 <
											(((long) 4) * (BgL_nrz00_1442 + ((long) 1)))))
										{	/* Unsafe/aes.scm 456 */
											{	/* Unsafe/aes.scm 457 */
												obj_t BgL_arg2294z00_1468;

												{	/* Llib/srfi4.scm 231 */

													BgL_arg2294z00_1468 =
														BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4),
														BINT(((long) 0)));
												}
												VECTOR_SET(BgL_wz00_1443,
													(int) (BgL_iz00_1465), BgL_arg2294z00_1468);
											}
											{	/* Unsafe/aes.scm 459 */
												unsigned long BgL_arg2295z00_1472;

												{	/* Unsafe/aes.scm 459 */
													long BgL_arg2296z00_1473;

													BgL_arg2296z00_1473 = (BgL_iz00_1465 - ((long) 1));
													{	/* Unsafe/aes.scm 459 */
														unsigned long BgL_res3278z00_3435;

														{	/* Unsafe/aes.scm 459 */
															int BgL_iz00_3430;

															int BgL_jz00_3431;

															BgL_iz00_3430 = (int) (BgL_arg2296z00_1473);
															BgL_jz00_3431 = (int) (((long) 0));
															{	/* Unsafe/aes.scm 459 */
																obj_t BgL_arg2264z00_3432;

																BgL_arg2264z00_3432 =
																	VECTOR_REF(BgL_wz00_1443, BgL_iz00_3430);
																{	/* Unsafe/aes.scm 459 */
																	unsigned char BgL_auxz00_6517;

																	{	/* Unsafe/aes.scm 459 */
																		long BgL_auxz00_6518;

																		BgL_auxz00_6518 = (long) (BgL_jz00_3431);
																		BgL_auxz00_6517 =
																			BGL_U8VREF(BgL_arg2264z00_3432,
																			BgL_auxz00_6518);
																	}
																	BgL_res3278z00_3435 =
																		(unsigned long) (BgL_auxz00_6517);
														}}}
														BgL_arg2295z00_1472 = BgL_res3278z00_3435;
												}}
												{	/* Unsafe/aes.scm 459 */
													unsigned char BgL_auxz00_6522;

													BgL_auxz00_6522 =
														(unsigned char) (BgL_arg2295z00_1472);
													BGL_U8VSET(BgL_tempz00_1444, ((long) 0),
														BgL_auxz00_6522);
												} BUNSPEC;
											}
											{	/* Unsafe/aes.scm 459 */
												unsigned long BgL_arg2297z00_1475;

												{	/* Unsafe/aes.scm 459 */
													long BgL_arg2300z00_1476;

													BgL_arg2300z00_1476 = (BgL_iz00_1465 - ((long) 1));
													{	/* Unsafe/aes.scm 459 */
														unsigned long BgL_res3279z00_3444;

														{	/* Unsafe/aes.scm 459 */
															int BgL_iz00_3439;

															int BgL_jz00_3440;

															BgL_iz00_3439 = (int) (BgL_arg2300z00_1476);
															BgL_jz00_3440 = (int) (((long) 1));
															{	/* Unsafe/aes.scm 459 */
																obj_t BgL_arg2264z00_3441;

																BgL_arg2264z00_3441 =
																	VECTOR_REF(BgL_wz00_1443, BgL_iz00_3439);
																{	/* Unsafe/aes.scm 459 */
																	unsigned char BgL_auxz00_6529;

																	{	/* Unsafe/aes.scm 459 */
																		long BgL_auxz00_6530;

																		BgL_auxz00_6530 = (long) (BgL_jz00_3440);
																		BgL_auxz00_6529 =
																			BGL_U8VREF(BgL_arg2264z00_3441,
																			BgL_auxz00_6530);
																	}
																	BgL_res3279z00_3444 =
																		(unsigned long) (BgL_auxz00_6529);
														}}}
														BgL_arg2297z00_1475 = BgL_res3279z00_3444;
												}}
												{	/* Unsafe/aes.scm 459 */
													unsigned char BgL_auxz00_6534;

													BgL_auxz00_6534 =
														(unsigned char) (BgL_arg2297z00_1475);
													BGL_U8VSET(BgL_tempz00_1444, ((long) 1),
														BgL_auxz00_6534);
												} BUNSPEC;
											}
											{	/* Unsafe/aes.scm 459 */
												unsigned long BgL_arg2301z00_1478;

												{	/* Unsafe/aes.scm 459 */
													long BgL_arg2302z00_1479;

													BgL_arg2302z00_1479 = (BgL_iz00_1465 - ((long) 1));
													{	/* Unsafe/aes.scm 459 */
														unsigned long BgL_res3280z00_3453;

														{	/* Unsafe/aes.scm 459 */
															int BgL_iz00_3448;

															int BgL_jz00_3449;

															BgL_iz00_3448 = (int) (BgL_arg2302z00_1479);
															BgL_jz00_3449 = (int) (((long) 2));
															{	/* Unsafe/aes.scm 459 */
																obj_t BgL_arg2264z00_3450;

																BgL_arg2264z00_3450 =
																	VECTOR_REF(BgL_wz00_1443, BgL_iz00_3448);
																{	/* Unsafe/aes.scm 459 */
																	unsigned char BgL_auxz00_6541;

																	{	/* Unsafe/aes.scm 459 */
																		long BgL_auxz00_6542;

																		BgL_auxz00_6542 = (long) (BgL_jz00_3449);
																		BgL_auxz00_6541 =
																			BGL_U8VREF(BgL_arg2264z00_3450,
																			BgL_auxz00_6542);
																	}
																	BgL_res3280z00_3453 =
																		(unsigned long) (BgL_auxz00_6541);
														}}}
														BgL_arg2301z00_1478 = BgL_res3280z00_3453;
												}}
												{	/* Unsafe/aes.scm 459 */
													unsigned char BgL_auxz00_6546;

													BgL_auxz00_6546 =
														(unsigned char) (BgL_arg2301z00_1478);
													BGL_U8VSET(BgL_tempz00_1444, ((long) 2),
														BgL_auxz00_6546);
												} BUNSPEC;
											}
											{	/* Unsafe/aes.scm 459 */
												unsigned long BgL_arg2303z00_1481;

												{	/* Unsafe/aes.scm 459 */
													long BgL_arg2304z00_1482;

													BgL_arg2304z00_1482 = (BgL_iz00_1465 - ((long) 1));
													{	/* Unsafe/aes.scm 459 */
														unsigned long BgL_res3281z00_3462;

														{	/* Unsafe/aes.scm 459 */
															int BgL_iz00_3457;

															int BgL_jz00_3458;

															BgL_iz00_3457 = (int) (BgL_arg2304z00_1482);
															BgL_jz00_3458 = (int) (((long) 3));
															{	/* Unsafe/aes.scm 459 */
																obj_t BgL_arg2264z00_3459;

																BgL_arg2264z00_3459 =
																	VECTOR_REF(BgL_wz00_1443, BgL_iz00_3457);
																{	/* Unsafe/aes.scm 459 */
																	unsigned char BgL_auxz00_6553;

																	{	/* Unsafe/aes.scm 459 */
																		long BgL_auxz00_6554;

																		BgL_auxz00_6554 = (long) (BgL_jz00_3458);
																		BgL_auxz00_6553 =
																			BGL_U8VREF(BgL_arg2264z00_3459,
																			BgL_auxz00_6554);
																	}
																	BgL_res3281z00_3462 =
																		(unsigned long) (BgL_auxz00_6553);
														}}}
														BgL_arg2303z00_1481 = BgL_res3281z00_3462;
												}}
												{	/* Unsafe/aes.scm 459 */
													unsigned char BgL_auxz00_6558;

													BgL_auxz00_6558 =
														(unsigned char) (BgL_arg2303z00_1481);
													BGL_U8VSET(BgL_tempz00_1444, ((long) 3),
														BgL_auxz00_6558);
												} BUNSPEC;
											}
											{	/* Unsafe/aes.scm 460 */
												bool_t BgL_testz00_6561;

												{	/* Unsafe/aes.scm 460 */
													obj_t BgL_arg2323z00_1509;

													BgL_arg2323z00_1509 =
														BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
														(BgL_iz00_1465), BINT(BgL_nkz00_1441));
													BgL_testz00_6561 =
														((long) CINT(BgL_arg2323z00_1509) == ((long) 0));
												}
												if (BgL_testz00_6561)
													{	/* Unsafe/aes.scm 460 */
														BGl_subwordz12z12zz__aesz00
															(BGl_rotwordz12z12zz__aesz00(BgL_tempz00_1444));
														{	/* Unsafe/aes.scm 464 */
															long BgL_vz00_1486;

															{	/* Unsafe/aes.scm 464 */
																unsigned char BgL_arg2307z00_1487;

																unsigned long BgL_arg2308z00_1488;

																BgL_arg2307z00_1487 =
																	BGL_U8VREF(BgL_tempz00_1444, ((long) 0));
																{	/* Unsafe/aes.scm 465 */
																	long BgL_arg2309z00_1489;

																	BgL_arg2309z00_1489 =
																		(BgL_iz00_1465 / BgL_nkz00_1441);
																	{	/* Unsafe/aes.scm 465 */
																		unsigned long BgL_res3282z00_3474;

																		{	/* Unsafe/aes.scm 465 */
																			obj_t BgL_mz00_3468;

																			int BgL_iz00_3469;

																			int BgL_jz00_3470;

																			BgL_mz00_3468 = BGl_Rconnz00zz__aesz00;
																			BgL_iz00_3469 =
																				(int) (BgL_arg2309z00_1489);
																			BgL_jz00_3470 = (int) (((long) 0));
																			{	/* Unsafe/aes.scm 465 */
																				obj_t BgL_arg2264z00_3471;

																				BgL_arg2264z00_3471 =
																					VECTOR_REF(BgL_mz00_3468,
																					BgL_iz00_3469);
																				{	/* Unsafe/aes.scm 465 */
																					unsigned char BgL_auxz00_6574;

																					{	/* Unsafe/aes.scm 465 */
																						long BgL_auxz00_6575;

																						BgL_auxz00_6575 =
																							(long) (BgL_jz00_3470);
																						BgL_auxz00_6574 =
																							BGL_U8VREF(BgL_arg2264z00_3471,
																							BgL_auxz00_6575);
																					}
																					BgL_res3282z00_3474 =
																						(unsigned long) (BgL_auxz00_6574);
																		}}}
																		BgL_arg2308z00_1488 = BgL_res3282z00_3474;
																}}
																BgL_vz00_1486 =
																	(
																	(long) (BgL_arg2307z00_1487) ^
																	(long) (BgL_arg2308z00_1488));
															}
															{	/* Unsafe/aes.scm 466 */
																unsigned char BgL_auxz00_6582;

																BgL_auxz00_6582 =
																	(unsigned char) (BgL_vz00_1486);
																BGL_U8VSET(BgL_tempz00_1444, ((long) 0),
																	BgL_auxz00_6582);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 464 */
															long BgL_vz00_1491;

															{	/* Unsafe/aes.scm 464 */
																unsigned char BgL_arg2310z00_1492;

																unsigned long BgL_arg2311z00_1493;

																BgL_arg2310z00_1492 =
																	BGL_U8VREF(BgL_tempz00_1444, ((long) 1));
																{	/* Unsafe/aes.scm 465 */
																	long BgL_arg2312z00_1494;

																	BgL_arg2312z00_1494 =
																		(BgL_iz00_1465 / BgL_nkz00_1441);
																	{	/* Unsafe/aes.scm 465 */
																		unsigned long BgL_res3283z00_3485;

																		{	/* Unsafe/aes.scm 465 */
																			obj_t BgL_mz00_3479;

																			int BgL_iz00_3480;

																			int BgL_jz00_3481;

																			BgL_mz00_3479 = BGl_Rconnz00zz__aesz00;
																			BgL_iz00_3480 =
																				(int) (BgL_arg2312z00_1494);
																			BgL_jz00_3481 = (int) (((long) 1));
																			{	/* Unsafe/aes.scm 465 */
																				obj_t BgL_arg2264z00_3482;

																				BgL_arg2264z00_3482 =
																					VECTOR_REF(BgL_mz00_3479,
																					BgL_iz00_3480);
																				{	/* Unsafe/aes.scm 465 */
																					unsigned char BgL_auxz00_6590;

																					{	/* Unsafe/aes.scm 465 */
																						long BgL_auxz00_6591;

																						BgL_auxz00_6591 =
																							(long) (BgL_jz00_3481);
																						BgL_auxz00_6590 =
																							BGL_U8VREF(BgL_arg2264z00_3482,
																							BgL_auxz00_6591);
																					}
																					BgL_res3283z00_3485 =
																						(unsigned long) (BgL_auxz00_6590);
																		}}}
																		BgL_arg2311z00_1493 = BgL_res3283z00_3485;
																}}
																BgL_vz00_1491 =
																	(
																	(long) (BgL_arg2310z00_1492) ^
																	(long) (BgL_arg2311z00_1493));
															}
															{	/* Unsafe/aes.scm 466 */
																unsigned char BgL_auxz00_6598;

																BgL_auxz00_6598 =
																	(unsigned char) (BgL_vz00_1491);
																BGL_U8VSET(BgL_tempz00_1444, ((long) 1),
																	BgL_auxz00_6598);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 464 */
															long BgL_vz00_1496;

															{	/* Unsafe/aes.scm 464 */
																unsigned char BgL_arg2313z00_1497;

																unsigned long BgL_arg2314z00_1498;

																BgL_arg2313z00_1497 =
																	BGL_U8VREF(BgL_tempz00_1444, ((long) 2));
																{	/* Unsafe/aes.scm 465 */
																	long BgL_arg2315z00_1499;

																	BgL_arg2315z00_1499 =
																		(BgL_iz00_1465 / BgL_nkz00_1441);
																	{	/* Unsafe/aes.scm 465 */
																		unsigned long BgL_res3284z00_3496;

																		{	/* Unsafe/aes.scm 465 */
																			obj_t BgL_mz00_3490;

																			int BgL_iz00_3491;

																			int BgL_jz00_3492;

																			BgL_mz00_3490 = BGl_Rconnz00zz__aesz00;
																			BgL_iz00_3491 =
																				(int) (BgL_arg2315z00_1499);
																			BgL_jz00_3492 = (int) (((long) 2));
																			{	/* Unsafe/aes.scm 465 */
																				obj_t BgL_arg2264z00_3493;

																				BgL_arg2264z00_3493 =
																					VECTOR_REF(BgL_mz00_3490,
																					BgL_iz00_3491);
																				{	/* Unsafe/aes.scm 465 */
																					unsigned char BgL_auxz00_6606;

																					{	/* Unsafe/aes.scm 465 */
																						long BgL_auxz00_6607;

																						BgL_auxz00_6607 =
																							(long) (BgL_jz00_3492);
																						BgL_auxz00_6606 =
																							BGL_U8VREF(BgL_arg2264z00_3493,
																							BgL_auxz00_6607);
																					}
																					BgL_res3284z00_3496 =
																						(unsigned long) (BgL_auxz00_6606);
																		}}}
																		BgL_arg2314z00_1498 = BgL_res3284z00_3496;
																}}
																BgL_vz00_1496 =
																	(
																	(long) (BgL_arg2313z00_1497) ^
																	(long) (BgL_arg2314z00_1498));
															}
															{	/* Unsafe/aes.scm 466 */
																unsigned char BgL_auxz00_6614;

																BgL_auxz00_6614 =
																	(unsigned char) (BgL_vz00_1496);
																BGL_U8VSET(BgL_tempz00_1444, ((long) 2),
																	BgL_auxz00_6614);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 464 */
															long BgL_vz00_1501;

															{	/* Unsafe/aes.scm 464 */
																unsigned char BgL_arg2316z00_1502;

																unsigned long BgL_arg2317z00_1503;

																BgL_arg2316z00_1502 =
																	BGL_U8VREF(BgL_tempz00_1444, ((long) 3));
																{	/* Unsafe/aes.scm 465 */
																	long BgL_arg2318z00_1504;

																	BgL_arg2318z00_1504 =
																		(BgL_iz00_1465 / BgL_nkz00_1441);
																	{	/* Unsafe/aes.scm 465 */
																		unsigned long BgL_res3285z00_3507;

																		{	/* Unsafe/aes.scm 465 */
																			obj_t BgL_mz00_3501;

																			int BgL_iz00_3502;

																			int BgL_jz00_3503;

																			BgL_mz00_3501 = BGl_Rconnz00zz__aesz00;
																			BgL_iz00_3502 =
																				(int) (BgL_arg2318z00_1504);
																			BgL_jz00_3503 = (int) (((long) 3));
																			{	/* Unsafe/aes.scm 465 */
																				obj_t BgL_arg2264z00_3504;

																				BgL_arg2264z00_3504 =
																					VECTOR_REF(BgL_mz00_3501,
																					BgL_iz00_3502);
																				{	/* Unsafe/aes.scm 465 */
																					unsigned char BgL_auxz00_6622;

																					{	/* Unsafe/aes.scm 465 */
																						long BgL_auxz00_6623;

																						BgL_auxz00_6623 =
																							(long) (BgL_jz00_3503);
																						BgL_auxz00_6622 =
																							BGL_U8VREF(BgL_arg2264z00_3504,
																							BgL_auxz00_6623);
																					}
																					BgL_res3285z00_3507 =
																						(unsigned long) (BgL_auxz00_6622);
																		}}}
																		BgL_arg2317z00_1503 = BgL_res3285z00_3507;
																}}
																BgL_vz00_1501 =
																	(
																	(long) (BgL_arg2316z00_1502) ^
																	(long) (BgL_arg2317z00_1503));
															}
															{	/* Unsafe/aes.scm 466 */
																unsigned char BgL_auxz00_6630;

																BgL_auxz00_6630 =
																	(unsigned char) (BgL_vz00_1501);
																BGL_U8VSET(BgL_tempz00_1444, ((long) 3),
																	BgL_auxz00_6630);
															} BUNSPEC;
													}}
												else
													{	/* Unsafe/aes.scm 467 */
														bool_t BgL_testz00_6633;

														if ((BgL_nkz00_1441 > ((long) 6)))
															{	/* Unsafe/aes.scm 467 */
																obj_t BgL_arg2321z00_1507;

																BgL_arg2321z00_1507 =
																	BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																	(BINT(BgL_iz00_1465), BINT(BgL_nkz00_1441));
																BgL_testz00_6633 =
																	((long) CINT(BgL_arg2321z00_1507) ==
																	((long) 4));
															}
														else
															{	/* Unsafe/aes.scm 467 */
																BgL_testz00_6633 = ((bool_t) 0);
															}
														if (BgL_testz00_6633)
															{	/* Unsafe/aes.scm 467 */
																BGl_subwordz12z12zz__aesz00(BgL_tempz00_1444);
															}
														else
															{	/* Unsafe/aes.scm 467 */
																BFALSE;
															}
													}
											}
											{	/* Unsafe/aes.scm 470 */
												long BgL_vz00_1511;

												{	/* Unsafe/aes.scm 470 */
													unsigned long BgL_arg2324z00_1512;

													unsigned char BgL_arg2325z00_1513;

													{	/* Unsafe/aes.scm 470 */
														long BgL_arg2326z00_1514;

														BgL_arg2326z00_1514 =
															(BgL_iz00_1465 - BgL_nkz00_1441);
														{	/* Unsafe/aes.scm 470 */
															unsigned long BgL_res3286z00_3522;

															{	/* Unsafe/aes.scm 470 */
																int BgL_iz00_3517;

																int BgL_jz00_3518;

																BgL_iz00_3517 = (int) (BgL_arg2326z00_1514);
																BgL_jz00_3518 = (int) (((long) 0));
																{	/* Unsafe/aes.scm 470 */
																	obj_t BgL_arg2264z00_3519;

																	BgL_arg2264z00_3519 =
																		VECTOR_REF(BgL_wz00_1443, BgL_iz00_3517);
																	{	/* Unsafe/aes.scm 470 */
																		unsigned char BgL_auxz00_6646;

																		{	/* Unsafe/aes.scm 470 */
																			long BgL_auxz00_6647;

																			BgL_auxz00_6647 = (long) (BgL_jz00_3518);
																			BgL_auxz00_6646 =
																				BGL_U8VREF(BgL_arg2264z00_3519,
																				BgL_auxz00_6647);
																		}
																		BgL_res3286z00_3522 =
																			(unsigned long) (BgL_auxz00_6646);
															}}}
															BgL_arg2324z00_1512 = BgL_res3286z00_3522;
													}}
													BgL_arg2325z00_1513 =
														BGL_U8VREF(BgL_tempz00_1444, ((long) 0));
													BgL_vz00_1511 =
														(
														(long) (BgL_arg2324z00_1512) ^
														(long) (BgL_arg2325z00_1513));
												}
												{	/* Unsafe/aes.scm 472 */
													int BgL_iz00_3526;

													int BgL_jz00_3527;

													unsigned long BgL_vz00_3528;

													BgL_iz00_3526 = (int) (BgL_iz00_1465);
													BgL_jz00_3527 = (int) (((long) 0));
													BgL_vz00_3528 = (unsigned long) (BgL_vz00_1511);
													{	/* Unsafe/aes.scm 472 */
														obj_t BgL_arg2265z00_3529;

														BgL_arg2265z00_3529 =
															VECTOR_REF(BgL_wz00_1443, BgL_iz00_3526);
														{	/* Unsafe/aes.scm 472 */
															unsigned char BgL_auxz00_6661;

															long BgL_auxz00_6659;

															BgL_auxz00_6661 = (unsigned char) (BgL_vz00_3528);
															BgL_auxz00_6659 = (long) (BgL_jz00_3527);
															BGL_U8VSET(BgL_arg2265z00_3529, BgL_auxz00_6659,
																BgL_auxz00_6661);
														} BUNSPEC;
											}}}
											{	/* Unsafe/aes.scm 470 */
												long BgL_vz00_1516;

												{	/* Unsafe/aes.scm 470 */
													unsigned long BgL_arg2327z00_1517;

													unsigned char BgL_arg2328z00_1518;

													{	/* Unsafe/aes.scm 470 */
														long BgL_arg2329z00_1519;

														BgL_arg2329z00_1519 =
															(BgL_iz00_1465 - BgL_nkz00_1441);
														{	/* Unsafe/aes.scm 470 */
															unsigned long BgL_res3287z00_3540;

															{	/* Unsafe/aes.scm 470 */
																int BgL_iz00_3535;

																int BgL_jz00_3536;

																BgL_iz00_3535 = (int) (BgL_arg2329z00_1519);
																BgL_jz00_3536 = (int) (((long) 1));
																{	/* Unsafe/aes.scm 470 */
																	obj_t BgL_arg2264z00_3537;

																	BgL_arg2264z00_3537 =
																		VECTOR_REF(BgL_wz00_1443, BgL_iz00_3535);
																	{	/* Unsafe/aes.scm 470 */
																		unsigned char BgL_auxz00_6668;

																		{	/* Unsafe/aes.scm 470 */
																			long BgL_auxz00_6669;

																			BgL_auxz00_6669 = (long) (BgL_jz00_3536);
																			BgL_auxz00_6668 =
																				BGL_U8VREF(BgL_arg2264z00_3537,
																				BgL_auxz00_6669);
																		}
																		BgL_res3287z00_3540 =
																			(unsigned long) (BgL_auxz00_6668);
															}}}
															BgL_arg2327z00_1517 = BgL_res3287z00_3540;
													}}
													BgL_arg2328z00_1518 =
														BGL_U8VREF(BgL_tempz00_1444, ((long) 1));
													BgL_vz00_1516 =
														(
														(long) (BgL_arg2327z00_1517) ^
														(long) (BgL_arg2328z00_1518));
												}
												{	/* Unsafe/aes.scm 472 */
													int BgL_iz00_3544;

													int BgL_jz00_3545;

													unsigned long BgL_vz00_3546;

													BgL_iz00_3544 = (int) (BgL_iz00_1465);
													BgL_jz00_3545 = (int) (((long) 1));
													BgL_vz00_3546 = (unsigned long) (BgL_vz00_1516);
													{	/* Unsafe/aes.scm 472 */
														obj_t BgL_arg2265z00_3547;

														BgL_arg2265z00_3547 =
															VECTOR_REF(BgL_wz00_1443, BgL_iz00_3544);
														{	/* Unsafe/aes.scm 472 */
															unsigned char BgL_auxz00_6683;

															long BgL_auxz00_6681;

															BgL_auxz00_6683 = (unsigned char) (BgL_vz00_3546);
															BgL_auxz00_6681 = (long) (BgL_jz00_3545);
															BGL_U8VSET(BgL_arg2265z00_3547, BgL_auxz00_6681,
																BgL_auxz00_6683);
														} BUNSPEC;
											}}}
											{	/* Unsafe/aes.scm 470 */
												long BgL_vz00_1521;

												{	/* Unsafe/aes.scm 470 */
													unsigned long BgL_arg2330z00_1522;

													unsigned char BgL_arg2331z00_1523;

													{	/* Unsafe/aes.scm 470 */
														long BgL_arg2332z00_1524;

														BgL_arg2332z00_1524 =
															(BgL_iz00_1465 - BgL_nkz00_1441);
														{	/* Unsafe/aes.scm 470 */
															unsigned long BgL_res3288z00_3558;

															{	/* Unsafe/aes.scm 470 */
																int BgL_iz00_3553;

																int BgL_jz00_3554;

																BgL_iz00_3553 = (int) (BgL_arg2332z00_1524);
																BgL_jz00_3554 = (int) (((long) 2));
																{	/* Unsafe/aes.scm 470 */
																	obj_t BgL_arg2264z00_3555;

																	BgL_arg2264z00_3555 =
																		VECTOR_REF(BgL_wz00_1443, BgL_iz00_3553);
																	{	/* Unsafe/aes.scm 470 */
																		unsigned char BgL_auxz00_6690;

																		{	/* Unsafe/aes.scm 470 */
																			long BgL_auxz00_6691;

																			BgL_auxz00_6691 = (long) (BgL_jz00_3554);
																			BgL_auxz00_6690 =
																				BGL_U8VREF(BgL_arg2264z00_3555,
																				BgL_auxz00_6691);
																		}
																		BgL_res3288z00_3558 =
																			(unsigned long) (BgL_auxz00_6690);
															}}}
															BgL_arg2330z00_1522 = BgL_res3288z00_3558;
													}}
													BgL_arg2331z00_1523 =
														BGL_U8VREF(BgL_tempz00_1444, ((long) 2));
													BgL_vz00_1521 =
														(
														(long) (BgL_arg2330z00_1522) ^
														(long) (BgL_arg2331z00_1523));
												}
												{	/* Unsafe/aes.scm 472 */
													int BgL_iz00_3562;

													int BgL_jz00_3563;

													unsigned long BgL_vz00_3564;

													BgL_iz00_3562 = (int) (BgL_iz00_1465);
													BgL_jz00_3563 = (int) (((long) 2));
													BgL_vz00_3564 = (unsigned long) (BgL_vz00_1521);
													{	/* Unsafe/aes.scm 472 */
														obj_t BgL_arg2265z00_3565;

														BgL_arg2265z00_3565 =
															VECTOR_REF(BgL_wz00_1443, BgL_iz00_3562);
														{	/* Unsafe/aes.scm 472 */
															unsigned char BgL_auxz00_6705;

															long BgL_auxz00_6703;

															BgL_auxz00_6705 = (unsigned char) (BgL_vz00_3564);
															BgL_auxz00_6703 = (long) (BgL_jz00_3563);
															BGL_U8VSET(BgL_arg2265z00_3565, BgL_auxz00_6703,
																BgL_auxz00_6705);
														} BUNSPEC;
											}}}
											{	/* Unsafe/aes.scm 470 */
												long BgL_vz00_1526;

												{	/* Unsafe/aes.scm 470 */
													unsigned long BgL_arg2333z00_1527;

													unsigned char BgL_arg2334z00_1528;

													{	/* Unsafe/aes.scm 470 */
														long BgL_arg2335z00_1529;

														BgL_arg2335z00_1529 =
															(BgL_iz00_1465 - BgL_nkz00_1441);
														{	/* Unsafe/aes.scm 470 */
															unsigned long BgL_res3289z00_3576;

															{	/* Unsafe/aes.scm 470 */
																int BgL_iz00_3571;

																int BgL_jz00_3572;

																BgL_iz00_3571 = (int) (BgL_arg2335z00_1529);
																BgL_jz00_3572 = (int) (((long) 3));
																{	/* Unsafe/aes.scm 470 */
																	obj_t BgL_arg2264z00_3573;

																	BgL_arg2264z00_3573 =
																		VECTOR_REF(BgL_wz00_1443, BgL_iz00_3571);
																	{	/* Unsafe/aes.scm 470 */
																		unsigned char BgL_auxz00_6712;

																		{	/* Unsafe/aes.scm 470 */
																			long BgL_auxz00_6713;

																			BgL_auxz00_6713 = (long) (BgL_jz00_3572);
																			BgL_auxz00_6712 =
																				BGL_U8VREF(BgL_arg2264z00_3573,
																				BgL_auxz00_6713);
																		}
																		BgL_res3289z00_3576 =
																			(unsigned long) (BgL_auxz00_6712);
															}}}
															BgL_arg2333z00_1527 = BgL_res3289z00_3576;
													}}
													BgL_arg2334z00_1528 =
														BGL_U8VREF(BgL_tempz00_1444, ((long) 3));
													BgL_vz00_1526 =
														(
														(long) (BgL_arg2333z00_1527) ^
														(long) (BgL_arg2334z00_1528));
												}
												{	/* Unsafe/aes.scm 472 */
													int BgL_iz00_3580;

													int BgL_jz00_3581;

													unsigned long BgL_vz00_3582;

													BgL_iz00_3580 = (int) (BgL_iz00_1465);
													BgL_jz00_3581 = (int) (((long) 3));
													BgL_vz00_3582 = (unsigned long) (BgL_vz00_1526);
													{	/* Unsafe/aes.scm 472 */
														obj_t BgL_arg2265z00_3583;

														BgL_arg2265z00_3583 =
															VECTOR_REF(BgL_wz00_1443, BgL_iz00_3580);
														{	/* Unsafe/aes.scm 472 */
															unsigned char BgL_auxz00_6727;

															long BgL_auxz00_6725;

															BgL_auxz00_6727 = (unsigned char) (BgL_vz00_3582);
															BgL_auxz00_6725 = (long) (BgL_jz00_3581);
															BGL_U8VSET(BgL_arg2265z00_3583, BgL_auxz00_6725,
																BgL_auxz00_6727);
														} BUNSPEC;
											}}}
											{
												long BgL_iz00_6730;

												BgL_iz00_6730 = (BgL_iz00_1465 + ((long) 1));
												BgL_iz00_1465 = BgL_iz00_6730;
												goto BgL_zc3anonymousza32292ze3z83_1466;
											}
										}
									else
										{	/* Unsafe/aes.scm 456 */
											((bool_t) 0);
										}
								}
								return BgL_wz00_1443;
							}
						}
					}
				}
			}
		}
	}



/* aes-cipher */
	obj_t BGl_aeszd2cipherzd2zz__aesz00(obj_t BgL_inputz00_79, obj_t BgL_wz00_80,
		obj_t BgL_statez00_81)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 479 */
			{	/* Unsafe/aes.scm 480 */
				long BgL_nrz00_1542;

				{	/* Unsafe/aes.scm 481 */
					long BgL_arg2360z00_1573;

					{	/* Unsafe/aes.scm 481 */
						int BgL_arg2362z00_1575;

						BgL_arg2362z00_1575 = VECTOR_LENGTH(BgL_wz00_80);
						BgL_arg2360z00_1573 = ((long) (BgL_arg2362z00_1575) / ((long) 4));
					}
					BgL_nrz00_1542 = (BgL_arg2360z00_1573 - ((long) 1));
				}
				{	/* Unsafe/aes.scm 481 */

					{
						long BgL_iz00_1544;

						BgL_iz00_1544 = ((long) 0);
					BgL_zc3anonymousza32344ze3z83_1545:
						if ((BgL_iz00_1544 < (((long) 4) * ((long) 4))))
							{	/* Unsafe/aes.scm 483 */
								{	/* Unsafe/aes.scm 484 */
									unsigned char BgL_vz00_1547;

									BgL_vz00_1547 = BGL_U8VREF(BgL_inputz00_79, BgL_iz00_1544);
									{	/* Unsafe/aes.scm 485 */
										obj_t BgL_arg2346z00_1548;

										long BgL_arg2347z00_1549;

										BgL_arg2346z00_1548 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_iz00_1544), BINT(((long) 4)));
										BgL_arg2347z00_1549 = (BgL_iz00_1544 / ((long) 4));
										{	/* Unsafe/aes.scm 485 */
											int BgL_iz00_3600;

											int BgL_jz00_3601;

											unsigned long BgL_vz00_3602;

											BgL_iz00_3600 = CINT(BgL_arg2346z00_1548);
											BgL_jz00_3601 = (int) (BgL_arg2347z00_1549);
											BgL_vz00_3602 = (unsigned long) (BgL_vz00_1547);
											{	/* Unsafe/aes.scm 485 */
												obj_t BgL_arg2265z00_3603;

												BgL_arg2265z00_3603 =
													VECTOR_REF(BgL_statez00_81, BgL_iz00_3600);
												{	/* Unsafe/aes.scm 485 */
													unsigned char BgL_auxz00_6750;

													long BgL_auxz00_6748;

													BgL_auxz00_6750 = (unsigned char) (BgL_vz00_3602);
													BgL_auxz00_6748 = (long) (BgL_jz00_3601);
													BGL_U8VSET(BgL_arg2265z00_3603, BgL_auxz00_6748,
														BgL_auxz00_6750);
												} BUNSPEC;
								}}}}
								{
									long BgL_iz00_6753;

									BgL_iz00_6753 = (BgL_iz00_1544 + ((long) 1));
									BgL_iz00_1544 = BgL_iz00_6753;
									goto BgL_zc3anonymousza32344ze3z83_1545;
								}
							}
						else
							{	/* Unsafe/aes.scm 483 */
								((bool_t) 0);
							}
					}
					BGl_addroundkeyz12z12zz__aesz00(BgL_statez00_81, BgL_wz00_80,
						((long) 0), ((long) 4));
					{
						long BgL_roundz00_1554;

						BgL_roundz00_1554 = ((long) 1);
					BgL_zc3anonymousza32350ze3z83_1555:
						if ((BgL_roundz00_1554 < BgL_nrz00_1542))
							{	/* Unsafe/aes.scm 489 */
								BGl_subbytesz12z12zz__aesz00(BgL_statez00_81,
									(int) (((long) 4)));
								BGl_shiftrowsz12z12zz__aesz00(BgL_statez00_81, ((long) 4));
								BGl_mixcolumnsz12z12zz__aesz00(BgL_statez00_81, ((long) 4));
								BGl_addroundkeyz12z12zz__aesz00(BgL_statez00_81, BgL_wz00_80,
									BgL_roundz00_1554, ((long) 4));
								{
									long BgL_roundz00_6763;

									BgL_roundz00_6763 = (BgL_roundz00_1554 + ((long) 1));
									BgL_roundz00_1554 = BgL_roundz00_6763;
									goto BgL_zc3anonymousza32350ze3z83_1555;
								}
							}
						else
							{	/* Unsafe/aes.scm 489 */
								((bool_t) 0);
							}
					}
					BGl_subbytesz12z12zz__aesz00(BgL_statez00_81, (int) (((long) 4)));
					BGl_shiftrowsz12z12zz__aesz00(BgL_statez00_81, ((long) 4));
					BGl_addroundkeyz12z12zz__aesz00(BgL_statez00_81, BgL_wz00_80,
						BgL_nrz00_1542, ((long) 4));
					{	/* Unsafe/aes.scm 499 */
						obj_t BgL_outputz00_1559;

						{	/* Unsafe/aes.scm 499 */
							long BgL_arg2359z00_1570;

							BgL_arg2359z00_1570 = (((long) 4) * ((long) 4));
							{	/* Llib/srfi4.scm 231 */

								BgL_outputz00_1559 =
									BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_arg2359z00_1570,
									BINT(((long) 0)));
						}}
						{
							long BgL_iz00_1561;

							BgL_iz00_1561 = ((long) 0);
						BgL_zc3anonymousza32353ze3z83_1562:
							if ((BgL_iz00_1561 < (((long) 4) * ((long) 4))))
								{	/* Unsafe/aes.scm 500 */
									{	/* Unsafe/aes.scm 501 */
										unsigned long BgL_vz00_1564;

										{	/* Unsafe/aes.scm 501 */
											obj_t BgL_arg2355z00_1565;

											long BgL_arg2356z00_1566;

											BgL_arg2355z00_1565 =
												BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
												(BgL_iz00_1561), BINT(((long) 4)));
											BgL_arg2356z00_1566 = (BgL_iz00_1561 / ((long) 4));
											{	/* Unsafe/aes.scm 501 */
												unsigned long BgL_res3290z00_3626;

												{	/* Unsafe/aes.scm 501 */
													int BgL_iz00_3621;

													int BgL_jz00_3622;

													BgL_iz00_3621 = CINT(BgL_arg2355z00_1565);
													BgL_jz00_3622 = (int) (BgL_arg2356z00_1566);
													{	/* Unsafe/aes.scm 501 */
														obj_t BgL_arg2264z00_3623;

														BgL_arg2264z00_3623 =
															VECTOR_REF(BgL_statez00_81, BgL_iz00_3621);
														{	/* Unsafe/aes.scm 501 */
															unsigned char BgL_auxz00_6782;

															{	/* Unsafe/aes.scm 501 */
																long BgL_auxz00_6783;

																BgL_auxz00_6783 = (long) (BgL_jz00_3622);
																BgL_auxz00_6782 =
																	BGL_U8VREF(BgL_arg2264z00_3623,
																	BgL_auxz00_6783);
															}
															BgL_res3290z00_3626 =
																(unsigned long) (BgL_auxz00_6782);
												}}}
												BgL_vz00_1564 = BgL_res3290z00_3626;
										}}
										{	/* Unsafe/aes.scm 502 */
											unsigned char BgL_auxz00_6787;

											BgL_auxz00_6787 = (unsigned char) (BgL_vz00_1564);
											BGL_U8VSET(BgL_outputz00_1559, BgL_iz00_1561,
												BgL_auxz00_6787);
										} BUNSPEC;
									}
									{
										long BgL_iz00_6790;

										BgL_iz00_6790 = (BgL_iz00_1561 + ((long) 1));
										BgL_iz00_1561 = BgL_iz00_6790;
										goto BgL_zc3anonymousza32353ze3z83_1562;
									}
								}
							else
								{	/* Unsafe/aes.scm 500 */
									((bool_t) 0);
								}
						}
						return BgL_outputz00_1559;
					}
				}
			}
		}
	}



/* subbytes! */
	bool_t BGl_subbytesz12z12zz__aesz00(obj_t BgL_sz00_82, int BgL_nbz00_83)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 510 */
			{
				long BgL_cz00_1578;

				BgL_cz00_1578 = ((long) 0);
			BgL_zc3anonymousza32363ze3z83_1579:
				if ((BgL_cz00_1578 < (long) (BgL_nbz00_83)))
					{	/* Unsafe/aes.scm 512 */
						{	/* Unsafe/aes.scm 513 */
							unsigned char BgL_arg2365z00_1581;

							{	/* Unsafe/aes.scm 513 */
								unsigned long BgL_arg2366z00_1582;

								{	/* Unsafe/aes.scm 513 */
									unsigned long BgL_res3291z00_3637;

									{	/* Unsafe/aes.scm 513 */
										int BgL_iz00_3632;

										int BgL_jz00_3633;

										BgL_iz00_3632 = (int) (((long) 0));
										BgL_jz00_3633 = (int) (BgL_cz00_1578);
										{	/* Unsafe/aes.scm 513 */
											obj_t BgL_arg2264z00_3634;

											BgL_arg2264z00_3634 =
												VECTOR_REF(BgL_sz00_82, BgL_iz00_3632);
											{	/* Unsafe/aes.scm 513 */
												unsigned char BgL_auxz00_6798;

												{	/* Unsafe/aes.scm 513 */
													long BgL_auxz00_6799;

													BgL_auxz00_6799 = (long) (BgL_jz00_3633);
													BgL_auxz00_6798 =
														BGL_U8VREF(BgL_arg2264z00_3634, BgL_auxz00_6799);
												}
												BgL_res3291z00_3637 = (unsigned long) (BgL_auxz00_6798);
									}}}
									BgL_arg2366z00_1582 = BgL_res3291z00_3637;
								}
								{	/* Unsafe/aes.scm 513 */
									long BgL_auxz00_6803;

									BgL_auxz00_6803 = (long) (BgL_arg2366z00_1582);
									BgL_arg2365z00_1581 =
										BGL_U8VREF(BGl_Sboxz00zz__aesz00, BgL_auxz00_6803);
							}}
							{	/* Unsafe/aes.scm 513 */
								int BgL_iz00_3639;

								int BgL_jz00_3640;

								unsigned long BgL_vz00_3641;

								BgL_iz00_3639 = (int) (((long) 0));
								BgL_jz00_3640 = (int) (BgL_cz00_1578);
								BgL_vz00_3641 = (unsigned long) (BgL_arg2365z00_1581);
								{	/* Unsafe/aes.scm 513 */
									obj_t BgL_arg2265z00_3642;

									BgL_arg2265z00_3642 = VECTOR_REF(BgL_sz00_82, BgL_iz00_3639);
									{	/* Unsafe/aes.scm 513 */
										unsigned char BgL_auxz00_6812;

										long BgL_auxz00_6810;

										BgL_auxz00_6812 = (unsigned char) (BgL_vz00_3641);
										BgL_auxz00_6810 = (long) (BgL_jz00_3640);
										BGL_U8VSET(BgL_arg2265z00_3642, BgL_auxz00_6810,
											BgL_auxz00_6812);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_6815;

							BgL_cz00_6815 = (BgL_cz00_1578 + ((long) 1));
							BgL_cz00_1578 = BgL_cz00_6815;
							goto BgL_zc3anonymousza32363ze3z83_1579;
						}
					}
				else
					{	/* Unsafe/aes.scm 512 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_1587;

				BgL_cz00_1587 = ((long) 0);
			BgL_zc3anonymousza32368ze3z83_1588:
				if ((BgL_cz00_1587 < (long) (BgL_nbz00_83)))
					{	/* Unsafe/aes.scm 512 */
						{	/* Unsafe/aes.scm 513 */
							unsigned char BgL_arg2370z00_1590;

							{	/* Unsafe/aes.scm 513 */
								unsigned long BgL_arg2371z00_1591;

								{	/* Unsafe/aes.scm 513 */
									unsigned long BgL_res3292z00_3655;

									{	/* Unsafe/aes.scm 513 */
										int BgL_iz00_3650;

										int BgL_jz00_3651;

										BgL_iz00_3650 = (int) (((long) 1));
										BgL_jz00_3651 = (int) (BgL_cz00_1587);
										{	/* Unsafe/aes.scm 513 */
											obj_t BgL_arg2264z00_3652;

											BgL_arg2264z00_3652 =
												VECTOR_REF(BgL_sz00_82, BgL_iz00_3650);
											{	/* Unsafe/aes.scm 513 */
												unsigned char BgL_auxz00_6823;

												{	/* Unsafe/aes.scm 513 */
													long BgL_auxz00_6824;

													BgL_auxz00_6824 = (long) (BgL_jz00_3651);
													BgL_auxz00_6823 =
														BGL_U8VREF(BgL_arg2264z00_3652, BgL_auxz00_6824);
												}
												BgL_res3292z00_3655 = (unsigned long) (BgL_auxz00_6823);
									}}}
									BgL_arg2371z00_1591 = BgL_res3292z00_3655;
								}
								{	/* Unsafe/aes.scm 513 */
									long BgL_auxz00_6828;

									BgL_auxz00_6828 = (long) (BgL_arg2371z00_1591);
									BgL_arg2370z00_1590 =
										BGL_U8VREF(BGl_Sboxz00zz__aesz00, BgL_auxz00_6828);
							}}
							{	/* Unsafe/aes.scm 513 */
								int BgL_iz00_3657;

								int BgL_jz00_3658;

								unsigned long BgL_vz00_3659;

								BgL_iz00_3657 = (int) (((long) 1));
								BgL_jz00_3658 = (int) (BgL_cz00_1587);
								BgL_vz00_3659 = (unsigned long) (BgL_arg2370z00_1590);
								{	/* Unsafe/aes.scm 513 */
									obj_t BgL_arg2265z00_3660;

									BgL_arg2265z00_3660 = VECTOR_REF(BgL_sz00_82, BgL_iz00_3657);
									{	/* Unsafe/aes.scm 513 */
										unsigned char BgL_auxz00_6837;

										long BgL_auxz00_6835;

										BgL_auxz00_6837 = (unsigned char) (BgL_vz00_3659);
										BgL_auxz00_6835 = (long) (BgL_jz00_3658);
										BGL_U8VSET(BgL_arg2265z00_3660, BgL_auxz00_6835,
											BgL_auxz00_6837);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_6840;

							BgL_cz00_6840 = (BgL_cz00_1587 + ((long) 1));
							BgL_cz00_1587 = BgL_cz00_6840;
							goto BgL_zc3anonymousza32368ze3z83_1588;
						}
					}
				else
					{	/* Unsafe/aes.scm 512 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_1596;

				BgL_cz00_1596 = ((long) 0);
			BgL_zc3anonymousza32373ze3z83_1597:
				if ((BgL_cz00_1596 < (long) (BgL_nbz00_83)))
					{	/* Unsafe/aes.scm 512 */
						{	/* Unsafe/aes.scm 513 */
							unsigned char BgL_arg2375z00_1599;

							{	/* Unsafe/aes.scm 513 */
								unsigned long BgL_arg2376z00_1600;

								{	/* Unsafe/aes.scm 513 */
									unsigned long BgL_res3293z00_3673;

									{	/* Unsafe/aes.scm 513 */
										int BgL_iz00_3668;

										int BgL_jz00_3669;

										BgL_iz00_3668 = (int) (((long) 2));
										BgL_jz00_3669 = (int) (BgL_cz00_1596);
										{	/* Unsafe/aes.scm 513 */
											obj_t BgL_arg2264z00_3670;

											BgL_arg2264z00_3670 =
												VECTOR_REF(BgL_sz00_82, BgL_iz00_3668);
											{	/* Unsafe/aes.scm 513 */
												unsigned char BgL_auxz00_6848;

												{	/* Unsafe/aes.scm 513 */
													long BgL_auxz00_6849;

													BgL_auxz00_6849 = (long) (BgL_jz00_3669);
													BgL_auxz00_6848 =
														BGL_U8VREF(BgL_arg2264z00_3670, BgL_auxz00_6849);
												}
												BgL_res3293z00_3673 = (unsigned long) (BgL_auxz00_6848);
									}}}
									BgL_arg2376z00_1600 = BgL_res3293z00_3673;
								}
								{	/* Unsafe/aes.scm 513 */
									long BgL_auxz00_6853;

									BgL_auxz00_6853 = (long) (BgL_arg2376z00_1600);
									BgL_arg2375z00_1599 =
										BGL_U8VREF(BGl_Sboxz00zz__aesz00, BgL_auxz00_6853);
							}}
							{	/* Unsafe/aes.scm 513 */
								int BgL_iz00_3675;

								int BgL_jz00_3676;

								unsigned long BgL_vz00_3677;

								BgL_iz00_3675 = (int) (((long) 2));
								BgL_jz00_3676 = (int) (BgL_cz00_1596);
								BgL_vz00_3677 = (unsigned long) (BgL_arg2375z00_1599);
								{	/* Unsafe/aes.scm 513 */
									obj_t BgL_arg2265z00_3678;

									BgL_arg2265z00_3678 = VECTOR_REF(BgL_sz00_82, BgL_iz00_3675);
									{	/* Unsafe/aes.scm 513 */
										unsigned char BgL_auxz00_6862;

										long BgL_auxz00_6860;

										BgL_auxz00_6862 = (unsigned char) (BgL_vz00_3677);
										BgL_auxz00_6860 = (long) (BgL_jz00_3676);
										BGL_U8VSET(BgL_arg2265z00_3678, BgL_auxz00_6860,
											BgL_auxz00_6862);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_6865;

							BgL_cz00_6865 = (BgL_cz00_1596 + ((long) 1));
							BgL_cz00_1596 = BgL_cz00_6865;
							goto BgL_zc3anonymousza32373ze3z83_1597;
						}
					}
				else
					{	/* Unsafe/aes.scm 512 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_1605;

				BgL_cz00_1605 = ((long) 0);
			BgL_zc3anonymousza32378ze3z83_1606:
				if ((BgL_cz00_1605 < (long) (BgL_nbz00_83)))
					{	/* Unsafe/aes.scm 512 */
						{	/* Unsafe/aes.scm 513 */
							unsigned char BgL_arg2380z00_1608;

							{	/* Unsafe/aes.scm 513 */
								unsigned long BgL_arg2381z00_1609;

								{	/* Unsafe/aes.scm 513 */
									unsigned long BgL_res3294z00_3691;

									{	/* Unsafe/aes.scm 513 */
										int BgL_iz00_3686;

										int BgL_jz00_3687;

										BgL_iz00_3686 = (int) (((long) 3));
										BgL_jz00_3687 = (int) (BgL_cz00_1605);
										{	/* Unsafe/aes.scm 513 */
											obj_t BgL_arg2264z00_3688;

											BgL_arg2264z00_3688 =
												VECTOR_REF(BgL_sz00_82, BgL_iz00_3686);
											{	/* Unsafe/aes.scm 513 */
												unsigned char BgL_auxz00_6873;

												{	/* Unsafe/aes.scm 513 */
													long BgL_auxz00_6874;

													BgL_auxz00_6874 = (long) (BgL_jz00_3687);
													BgL_auxz00_6873 =
														BGL_U8VREF(BgL_arg2264z00_3688, BgL_auxz00_6874);
												}
												BgL_res3294z00_3691 = (unsigned long) (BgL_auxz00_6873);
									}}}
									BgL_arg2381z00_1609 = BgL_res3294z00_3691;
								}
								{	/* Unsafe/aes.scm 513 */
									long BgL_auxz00_6878;

									BgL_auxz00_6878 = (long) (BgL_arg2381z00_1609);
									BgL_arg2380z00_1608 =
										BGL_U8VREF(BGl_Sboxz00zz__aesz00, BgL_auxz00_6878);
							}}
							{	/* Unsafe/aes.scm 513 */
								int BgL_iz00_3693;

								int BgL_jz00_3694;

								unsigned long BgL_vz00_3695;

								BgL_iz00_3693 = (int) (((long) 3));
								BgL_jz00_3694 = (int) (BgL_cz00_1605);
								BgL_vz00_3695 = (unsigned long) (BgL_arg2380z00_1608);
								{	/* Unsafe/aes.scm 513 */
									obj_t BgL_arg2265z00_3696;

									BgL_arg2265z00_3696 = VECTOR_REF(BgL_sz00_82, BgL_iz00_3693);
									{	/* Unsafe/aes.scm 513 */
										unsigned char BgL_auxz00_6887;

										long BgL_auxz00_6885;

										BgL_auxz00_6887 = (unsigned char) (BgL_vz00_3695);
										BgL_auxz00_6885 = (long) (BgL_jz00_3694);
										BGL_U8VSET(BgL_arg2265z00_3696, BgL_auxz00_6885,
											BgL_auxz00_6887);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_6890;

							BgL_cz00_6890 = (BgL_cz00_1605 + ((long) 1));
							BgL_cz00_1605 = BgL_cz00_6890;
							goto BgL_zc3anonymousza32378ze3z83_1606;
						}
					}
				else
					{	/* Unsafe/aes.scm 512 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* shiftrows! */
	bool_t BGl_shiftrowsz12z12zz__aesz00(obj_t BgL_sz00_84, long BgL_nbz00_85)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 520 */
			{	/* Unsafe/aes.scm 521 */
				obj_t BgL_tz00_1612;

				{	/* Llib/srfi4.scm 231 */

					BgL_tz00_1612 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{
					long BgL_rz00_1614;

					BgL_rz00_1614 = ((long) 1);
				BgL_zc3anonymousza32383ze3z83_1615:
					if ((BgL_rz00_1614 < ((long) 4)))
						{	/* Unsafe/aes.scm 522 */
							{	/* Unsafe/aes.scm 524 */
								unsigned long BgL_arg2385z00_1618;

								{	/* Unsafe/aes.scm 524 */
									obj_t BgL_arg2386z00_1619;

									{	/* Unsafe/aes.scm 524 */
										long BgL_arg2387z00_1620;

										BgL_arg2387z00_1620 = (((long) 0) + BgL_rz00_1614);
										BgL_arg2386z00_1619 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg2387z00_1620), BINT(BgL_nbz00_85));
									}
									{	/* Unsafe/aes.scm 524 */
										unsigned long BgL_res3295z00_3711;

										{	/* Unsafe/aes.scm 524 */
											int BgL_iz00_3706;

											int BgL_jz00_3707;

											BgL_iz00_3706 = (int) (BgL_rz00_1614);
											BgL_jz00_3707 = CINT(BgL_arg2386z00_1619);
											{	/* Unsafe/aes.scm 524 */
												obj_t BgL_arg2264z00_3708;

												BgL_arg2264z00_3708 =
													VECTOR_REF(BgL_sz00_84, BgL_iz00_3706);
												{	/* Unsafe/aes.scm 524 */
													unsigned char BgL_auxz00_6903;

													{	/* Unsafe/aes.scm 524 */
														long BgL_auxz00_6904;

														BgL_auxz00_6904 = (long) (BgL_jz00_3707);
														BgL_auxz00_6903 =
															BGL_U8VREF(BgL_arg2264z00_3708, BgL_auxz00_6904);
													}
													BgL_res3295z00_3711 =
														(unsigned long) (BgL_auxz00_6903);
										}}}
										BgL_arg2385z00_1618 = BgL_res3295z00_3711;
								}}
								{	/* Unsafe/aes.scm 524 */
									unsigned char BgL_auxz00_6908;

									BgL_auxz00_6908 = (unsigned char) (BgL_arg2385z00_1618);
									BGL_U8VSET(BgL_tz00_1612, ((long) 0), BgL_auxz00_6908);
								} BUNSPEC;
							}
							{	/* Unsafe/aes.scm 524 */
								unsigned long BgL_arg2388z00_1622;

								{	/* Unsafe/aes.scm 524 */
									obj_t BgL_arg2389z00_1623;

									{	/* Unsafe/aes.scm 524 */
										long BgL_arg2390z00_1624;

										BgL_arg2390z00_1624 = (((long) 1) + BgL_rz00_1614);
										BgL_arg2389z00_1623 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg2390z00_1624), BINT(BgL_nbz00_85));
									}
									{	/* Unsafe/aes.scm 524 */
										unsigned long BgL_res3296z00_3720;

										{	/* Unsafe/aes.scm 524 */
											int BgL_iz00_3715;

											int BgL_jz00_3716;

											BgL_iz00_3715 = (int) (BgL_rz00_1614);
											BgL_jz00_3716 = CINT(BgL_arg2389z00_1623);
											{	/* Unsafe/aes.scm 524 */
												obj_t BgL_arg2264z00_3717;

												BgL_arg2264z00_3717 =
													VECTOR_REF(BgL_sz00_84, BgL_iz00_3715);
												{	/* Unsafe/aes.scm 524 */
													unsigned char BgL_auxz00_6918;

													{	/* Unsafe/aes.scm 524 */
														long BgL_auxz00_6919;

														BgL_auxz00_6919 = (long) (BgL_jz00_3716);
														BgL_auxz00_6918 =
															BGL_U8VREF(BgL_arg2264z00_3717, BgL_auxz00_6919);
													}
													BgL_res3296z00_3720 =
														(unsigned long) (BgL_auxz00_6918);
										}}}
										BgL_arg2388z00_1622 = BgL_res3296z00_3720;
								}}
								{	/* Unsafe/aes.scm 524 */
									unsigned char BgL_auxz00_6923;

									BgL_auxz00_6923 = (unsigned char) (BgL_arg2388z00_1622);
									BGL_U8VSET(BgL_tz00_1612, ((long) 1), BgL_auxz00_6923);
								} BUNSPEC;
							}
							{	/* Unsafe/aes.scm 524 */
								unsigned long BgL_arg2391z00_1626;

								{	/* Unsafe/aes.scm 524 */
									obj_t BgL_arg2392z00_1627;

									{	/* Unsafe/aes.scm 524 */
										long BgL_arg2393z00_1628;

										BgL_arg2393z00_1628 = (((long) 2) + BgL_rz00_1614);
										BgL_arg2392z00_1627 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg2393z00_1628), BINT(BgL_nbz00_85));
									}
									{	/* Unsafe/aes.scm 524 */
										unsigned long BgL_res3297z00_3729;

										{	/* Unsafe/aes.scm 524 */
											int BgL_iz00_3724;

											int BgL_jz00_3725;

											BgL_iz00_3724 = (int) (BgL_rz00_1614);
											BgL_jz00_3725 = CINT(BgL_arg2392z00_1627);
											{	/* Unsafe/aes.scm 524 */
												obj_t BgL_arg2264z00_3726;

												BgL_arg2264z00_3726 =
													VECTOR_REF(BgL_sz00_84, BgL_iz00_3724);
												{	/* Unsafe/aes.scm 524 */
													unsigned char BgL_auxz00_6933;

													{	/* Unsafe/aes.scm 524 */
														long BgL_auxz00_6934;

														BgL_auxz00_6934 = (long) (BgL_jz00_3725);
														BgL_auxz00_6933 =
															BGL_U8VREF(BgL_arg2264z00_3726, BgL_auxz00_6934);
													}
													BgL_res3297z00_3729 =
														(unsigned long) (BgL_auxz00_6933);
										}}}
										BgL_arg2391z00_1626 = BgL_res3297z00_3729;
								}}
								{	/* Unsafe/aes.scm 524 */
									unsigned char BgL_auxz00_6938;

									BgL_auxz00_6938 = (unsigned char) (BgL_arg2391z00_1626);
									BGL_U8VSET(BgL_tz00_1612, ((long) 2), BgL_auxz00_6938);
								} BUNSPEC;
							}
							{	/* Unsafe/aes.scm 524 */
								unsigned long BgL_arg2394z00_1630;

								{	/* Unsafe/aes.scm 524 */
									obj_t BgL_arg2395z00_1631;

									{	/* Unsafe/aes.scm 524 */
										long BgL_arg2396z00_1632;

										BgL_arg2396z00_1632 = (((long) 3) + BgL_rz00_1614);
										BgL_arg2395z00_1631 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg2396z00_1632), BINT(BgL_nbz00_85));
									}
									{	/* Unsafe/aes.scm 524 */
										unsigned long BgL_res3298z00_3738;

										{	/* Unsafe/aes.scm 524 */
											int BgL_iz00_3733;

											int BgL_jz00_3734;

											BgL_iz00_3733 = (int) (BgL_rz00_1614);
											BgL_jz00_3734 = CINT(BgL_arg2395z00_1631);
											{	/* Unsafe/aes.scm 524 */
												obj_t BgL_arg2264z00_3735;

												BgL_arg2264z00_3735 =
													VECTOR_REF(BgL_sz00_84, BgL_iz00_3733);
												{	/* Unsafe/aes.scm 524 */
													unsigned char BgL_auxz00_6948;

													{	/* Unsafe/aes.scm 524 */
														long BgL_auxz00_6949;

														BgL_auxz00_6949 = (long) (BgL_jz00_3734);
														BgL_auxz00_6948 =
															BGL_U8VREF(BgL_arg2264z00_3735, BgL_auxz00_6949);
													}
													BgL_res3298z00_3738 =
														(unsigned long) (BgL_auxz00_6948);
										}}}
										BgL_arg2394z00_1630 = BgL_res3298z00_3738;
								}}
								{	/* Unsafe/aes.scm 524 */
									unsigned char BgL_auxz00_6953;

									BgL_auxz00_6953 = (unsigned char) (BgL_arg2394z00_1630);
									BGL_U8VSET(BgL_tz00_1612, ((long) 3), BgL_auxz00_6953);
								} BUNSPEC;
							}
							{	/* Unsafe/aes.scm 526 */
								unsigned char BgL_arg2397z00_1634;

								BgL_arg2397z00_1634 = BGL_U8VREF(BgL_tz00_1612, ((long) 0));
								{	/* Unsafe/aes.scm 526 */
									int BgL_iz00_3740;

									int BgL_jz00_3741;

									unsigned long BgL_vz00_3742;

									BgL_iz00_3740 = (int) (BgL_rz00_1614);
									BgL_jz00_3741 = (int) (((long) 0));
									BgL_vz00_3742 = (unsigned long) (BgL_arg2397z00_1634);
									{	/* Unsafe/aes.scm 526 */
										obj_t BgL_arg2265z00_3743;

										BgL_arg2265z00_3743 =
											VECTOR_REF(BgL_sz00_84, BgL_iz00_3740);
										{	/* Unsafe/aes.scm 526 */
											unsigned char BgL_auxz00_6963;

											long BgL_auxz00_6961;

											BgL_auxz00_6963 = (unsigned char) (BgL_vz00_3742);
											BgL_auxz00_6961 = (long) (BgL_jz00_3741);
											BGL_U8VSET(BgL_arg2265z00_3743, BgL_auxz00_6961,
												BgL_auxz00_6963);
										} BUNSPEC;
							}}}
							{	/* Unsafe/aes.scm 526 */
								unsigned char BgL_arg2398z00_1636;

								BgL_arg2398z00_1636 = BGL_U8VREF(BgL_tz00_1612, ((long) 1));
								{	/* Unsafe/aes.scm 526 */
									int BgL_iz00_3747;

									int BgL_jz00_3748;

									unsigned long BgL_vz00_3749;

									BgL_iz00_3747 = (int) (BgL_rz00_1614);
									BgL_jz00_3748 = (int) (((long) 1));
									BgL_vz00_3749 = (unsigned long) (BgL_arg2398z00_1636);
									{	/* Unsafe/aes.scm 526 */
										obj_t BgL_arg2265z00_3750;

										BgL_arg2265z00_3750 =
											VECTOR_REF(BgL_sz00_84, BgL_iz00_3747);
										{	/* Unsafe/aes.scm 526 */
											unsigned char BgL_auxz00_6973;

											long BgL_auxz00_6971;

											BgL_auxz00_6973 = (unsigned char) (BgL_vz00_3749);
											BgL_auxz00_6971 = (long) (BgL_jz00_3748);
											BGL_U8VSET(BgL_arg2265z00_3750, BgL_auxz00_6971,
												BgL_auxz00_6973);
										} BUNSPEC;
							}}}
							{	/* Unsafe/aes.scm 526 */
								unsigned char BgL_arg2399z00_1638;

								BgL_arg2399z00_1638 = BGL_U8VREF(BgL_tz00_1612, ((long) 2));
								{	/* Unsafe/aes.scm 526 */
									int BgL_iz00_3754;

									int BgL_jz00_3755;

									unsigned long BgL_vz00_3756;

									BgL_iz00_3754 = (int) (BgL_rz00_1614);
									BgL_jz00_3755 = (int) (((long) 2));
									BgL_vz00_3756 = (unsigned long) (BgL_arg2399z00_1638);
									{	/* Unsafe/aes.scm 526 */
										obj_t BgL_arg2265z00_3757;

										BgL_arg2265z00_3757 =
											VECTOR_REF(BgL_sz00_84, BgL_iz00_3754);
										{	/* Unsafe/aes.scm 526 */
											unsigned char BgL_auxz00_6983;

											long BgL_auxz00_6981;

											BgL_auxz00_6983 = (unsigned char) (BgL_vz00_3756);
											BgL_auxz00_6981 = (long) (BgL_jz00_3755);
											BGL_U8VSET(BgL_arg2265z00_3757, BgL_auxz00_6981,
												BgL_auxz00_6983);
										} BUNSPEC;
							}}}
							{	/* Unsafe/aes.scm 526 */
								unsigned char BgL_arg2400z00_1640;

								BgL_arg2400z00_1640 = BGL_U8VREF(BgL_tz00_1612, ((long) 3));
								{	/* Unsafe/aes.scm 526 */
									int BgL_iz00_3761;

									int BgL_jz00_3762;

									unsigned long BgL_vz00_3763;

									BgL_iz00_3761 = (int) (BgL_rz00_1614);
									BgL_jz00_3762 = (int) (((long) 3));
									BgL_vz00_3763 = (unsigned long) (BgL_arg2400z00_1640);
									{	/* Unsafe/aes.scm 526 */
										obj_t BgL_arg2265z00_3764;

										BgL_arg2265z00_3764 =
											VECTOR_REF(BgL_sz00_84, BgL_iz00_3761);
										{	/* Unsafe/aes.scm 526 */
											unsigned char BgL_auxz00_6993;

											long BgL_auxz00_6991;

											BgL_auxz00_6993 = (unsigned char) (BgL_vz00_3763);
											BgL_auxz00_6991 = (long) (BgL_jz00_3762);
											BGL_U8VSET(BgL_arg2265z00_3764, BgL_auxz00_6991,
												BgL_auxz00_6993);
										} BUNSPEC;
							}}}
							{
								long BgL_rz00_6996;

								BgL_rz00_6996 = (BgL_rz00_1614 + ((long) 1));
								BgL_rz00_1614 = BgL_rz00_6996;
								goto BgL_zc3anonymousza32383ze3z83_1615;
							}
						}
					else
						{	/* Unsafe/aes.scm 522 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* mixcolumns! */
	obj_t BGl_mixcolumnsz12z12zz__aesz00(obj_t BgL_sz00_86, long BgL_nbz00_87)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 533 */
			{	/* Unsafe/aes.scm 535 */
				obj_t BgL_az00_1646;

				obj_t BgL_bz00_1647;

				{	/* Llib/srfi4.scm 231 */

					BgL_az00_1646 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Llib/srfi4.scm 231 */

					BgL_bz00_1647 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1649;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3299z00_3775;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_3770;

							int BgL_jz00_3771;

							BgL_iz00_3770 = (int) (((long) 0));
							BgL_jz00_3771 = (int) (((long) 0));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_3772;

								BgL_arg2264z00_3772 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3770);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7005;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7006;

										BgL_auxz00_7006 = (long) (BgL_jz00_3771);
										BgL_auxz00_7005 =
											BGL_U8VREF(BgL_arg2264z00_3772, BgL_auxz00_7006);
									}
									BgL_res3299z00_3775 = (unsigned long) (BgL_auxz00_7005);
						}}}
						BgL_vz00_1649 = BgL_res3299z00_3775;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7010;

						BgL_auxz00_7010 = (unsigned char) (BgL_vz00_1649);
						BGL_U8VSET(BgL_az00_1646, ((long) 0), BgL_auxz00_7010);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1649) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2403z00_1651;

							BgL_arg2403z00_1651 =
								((long) (BgL_vz00_1649) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7020;

								BgL_auxz00_7020 = (unsigned char) (BgL_arg2403z00_1651);
								BGL_U8VSET(BgL_bz00_1647, ((long) 0), BgL_auxz00_7020);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2404z00_1652;

							BgL_arg2404z00_1652 =
								(((long) (BgL_vz00_1649) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7027;

								BgL_auxz00_7027 = (unsigned char) (BgL_arg2404z00_1652);
								BGL_U8VSET(BgL_bz00_1647, ((long) 0), BgL_auxz00_7027);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1658;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3300z00_3792;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_3787;

							int BgL_jz00_3788;

							BgL_iz00_3787 = (int) (((long) 1));
							BgL_jz00_3788 = (int) (((long) 0));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_3789;

								BgL_arg2264z00_3789 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3787);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7033;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7034;

										BgL_auxz00_7034 = (long) (BgL_jz00_3788);
										BgL_auxz00_7033 =
											BGL_U8VREF(BgL_arg2264z00_3789, BgL_auxz00_7034);
									}
									BgL_res3300z00_3792 = (unsigned long) (BgL_auxz00_7033);
						}}}
						BgL_vz00_1658 = BgL_res3300z00_3792;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7038;

						BgL_auxz00_7038 = (unsigned char) (BgL_vz00_1658);
						BGL_U8VSET(BgL_az00_1646, ((long) 1), BgL_auxz00_7038);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1658) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2409z00_1660;

							BgL_arg2409z00_1660 =
								((long) (BgL_vz00_1658) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7048;

								BgL_auxz00_7048 = (unsigned char) (BgL_arg2409z00_1660);
								BGL_U8VSET(BgL_bz00_1647, ((long) 1), BgL_auxz00_7048);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2410z00_1661;

							BgL_arg2410z00_1661 =
								(((long) (BgL_vz00_1658) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7055;

								BgL_auxz00_7055 = (unsigned char) (BgL_arg2410z00_1661);
								BGL_U8VSET(BgL_bz00_1647, ((long) 1), BgL_auxz00_7055);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1667;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3301z00_3809;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_3804;

							int BgL_jz00_3805;

							BgL_iz00_3804 = (int) (((long) 2));
							BgL_jz00_3805 = (int) (((long) 0));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_3806;

								BgL_arg2264z00_3806 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3804);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7061;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7062;

										BgL_auxz00_7062 = (long) (BgL_jz00_3805);
										BgL_auxz00_7061 =
											BGL_U8VREF(BgL_arg2264z00_3806, BgL_auxz00_7062);
									}
									BgL_res3301z00_3809 = (unsigned long) (BgL_auxz00_7061);
						}}}
						BgL_vz00_1667 = BgL_res3301z00_3809;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7066;

						BgL_auxz00_7066 = (unsigned char) (BgL_vz00_1667);
						BGL_U8VSET(BgL_az00_1646, ((long) 2), BgL_auxz00_7066);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1667) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2415z00_1669;

							BgL_arg2415z00_1669 =
								((long) (BgL_vz00_1667) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7076;

								BgL_auxz00_7076 = (unsigned char) (BgL_arg2415z00_1669);
								BGL_U8VSET(BgL_bz00_1647, ((long) 2), BgL_auxz00_7076);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2416z00_1670;

							BgL_arg2416z00_1670 =
								(((long) (BgL_vz00_1667) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7083;

								BgL_auxz00_7083 = (unsigned char) (BgL_arg2416z00_1670);
								BGL_U8VSET(BgL_bz00_1647, ((long) 2), BgL_auxz00_7083);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1676;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3302z00_3826;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_3821;

							int BgL_jz00_3822;

							BgL_iz00_3821 = (int) (((long) 3));
							BgL_jz00_3822 = (int) (((long) 0));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_3823;

								BgL_arg2264z00_3823 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3821);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7089;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7090;

										BgL_auxz00_7090 = (long) (BgL_jz00_3822);
										BgL_auxz00_7089 =
											BGL_U8VREF(BgL_arg2264z00_3823, BgL_auxz00_7090);
									}
									BgL_res3302z00_3826 = (unsigned long) (BgL_auxz00_7089);
						}}}
						BgL_vz00_1676 = BgL_res3302z00_3826;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7094;

						BgL_auxz00_7094 = (unsigned char) (BgL_vz00_1676);
						BGL_U8VSET(BgL_az00_1646, ((long) 3), BgL_auxz00_7094);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1676) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2421z00_1678;

							BgL_arg2421z00_1678 =
								((long) (BgL_vz00_1676) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7104;

								BgL_auxz00_7104 = (unsigned char) (BgL_arg2421z00_1678);
								BGL_U8VSET(BgL_bz00_1647, ((long) 3), BgL_auxz00_7104);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2422z00_1679;

							BgL_arg2422z00_1679 =
								(((long) (BgL_vz00_1676) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7111;

								BgL_auxz00_7111 = (unsigned char) (BgL_arg2422z00_1679);
								BGL_U8VSET(BgL_bz00_1647, ((long) 3), BgL_auxz00_7111);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 543 */
					long BgL_arg2428z00_1685;

					{	/* Unsafe/aes.scm 543 */
						unsigned char BgL_arg2429z00_1686;

						long BgL_arg2430z00_1687;

						BgL_arg2429z00_1686 = BGL_U8VREF(BgL_bz00_1647, ((long) 0));
						{	/* Unsafe/aes.scm 544 */
							unsigned char BgL_arg2431z00_1688;

							long BgL_arg2432z00_1689;

							BgL_arg2431z00_1688 = BGL_U8VREF(BgL_az00_1646, ((long) 1));
							{	/* Unsafe/aes.scm 545 */
								unsigned char BgL_arg2434z00_1690;

								long BgL_arg2435z00_1691;

								BgL_arg2434z00_1690 = BGL_U8VREF(BgL_bz00_1647, ((long) 1));
								{	/* Unsafe/aes.scm 546 */
									unsigned char BgL_arg2436z00_1692;

									unsigned char BgL_arg2437z00_1693;

									BgL_arg2436z00_1692 = BGL_U8VREF(BgL_az00_1646, ((long) 2));
									BgL_arg2437z00_1693 = BGL_U8VREF(BgL_az00_1646, ((long) 3));
									BgL_arg2435z00_1691 =
										(
										(long) (BgL_arg2436z00_1692) ^
										(long) (BgL_arg2437z00_1693));
								}
								BgL_arg2432z00_1689 =
									((long) (BgL_arg2434z00_1690) ^ BgL_arg2435z00_1691);
							}
							BgL_arg2430z00_1687 =
								((long) (BgL_arg2431z00_1688) ^ BgL_arg2432z00_1689);
						}
						BgL_arg2428z00_1685 =
							((long) (BgL_arg2429z00_1686) ^ BgL_arg2430z00_1687);
					}
					{	/* Unsafe/aes.scm 543 */
						int BgL_iz00_3846;

						int BgL_jz00_3847;

						unsigned long BgL_vz00_3848;

						BgL_iz00_3846 = (int) (((long) 0));
						BgL_jz00_3847 = (int) (((long) 0));
						BgL_vz00_3848 = (unsigned long) (BgL_arg2428z00_1685);
						{	/* Unsafe/aes.scm 543 */
							obj_t BgL_arg2265z00_3849;

							BgL_arg2265z00_3849 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3846);
							{	/* Unsafe/aes.scm 543 */
								unsigned char BgL_auxz00_7134;

								long BgL_auxz00_7132;

								BgL_auxz00_7134 = (unsigned char) (BgL_vz00_3848);
								BgL_auxz00_7132 = (long) (BgL_jz00_3847);
								BGL_U8VSET(BgL_arg2265z00_3849, BgL_auxz00_7132,
									BgL_auxz00_7134);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 548 */
					long BgL_arg2439z00_1695;

					{	/* Unsafe/aes.scm 548 */
						unsigned char BgL_arg2440z00_1696;

						long BgL_arg2441z00_1697;

						BgL_arg2440z00_1696 = BGL_U8VREF(BgL_az00_1646, ((long) 0));
						{	/* Unsafe/aes.scm 549 */
							unsigned char BgL_arg2442z00_1698;

							long BgL_arg2443z00_1699;

							BgL_arg2442z00_1698 = BGL_U8VREF(BgL_bz00_1647, ((long) 1));
							{	/* Unsafe/aes.scm 550 */
								unsigned char BgL_arg2444z00_1700;

								long BgL_arg2445z00_1701;

								BgL_arg2444z00_1700 = BGL_U8VREF(BgL_az00_1646, ((long) 2));
								{	/* Unsafe/aes.scm 551 */
									unsigned char BgL_arg2446z00_1702;

									unsigned char BgL_arg2447z00_1703;

									BgL_arg2446z00_1702 = BGL_U8VREF(BgL_bz00_1647, ((long) 2));
									BgL_arg2447z00_1703 = BGL_U8VREF(BgL_az00_1646, ((long) 3));
									BgL_arg2445z00_1701 =
										(
										(long) (BgL_arg2446z00_1702) ^
										(long) (BgL_arg2447z00_1703));
								}
								BgL_arg2443z00_1699 =
									((long) (BgL_arg2444z00_1700) ^ BgL_arg2445z00_1701);
							}
							BgL_arg2441z00_1697 =
								((long) (BgL_arg2442z00_1698) ^ BgL_arg2443z00_1699);
						}
						BgL_arg2439z00_1695 =
							((long) (BgL_arg2440z00_1696) ^ BgL_arg2441z00_1697);
					}
					{	/* Unsafe/aes.scm 548 */
						int BgL_iz00_3861;

						int BgL_jz00_3862;

						unsigned long BgL_vz00_3863;

						BgL_iz00_3861 = (int) (((long) 1));
						BgL_jz00_3862 = (int) (((long) 0));
						BgL_vz00_3863 = (unsigned long) (BgL_arg2439z00_1695);
						{	/* Unsafe/aes.scm 548 */
							obj_t BgL_arg2265z00_3864;

							BgL_arg2265z00_3864 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3861);
							{	/* Unsafe/aes.scm 548 */
								unsigned char BgL_auxz00_7157;

								long BgL_auxz00_7155;

								BgL_auxz00_7157 = (unsigned char) (BgL_vz00_3863);
								BgL_auxz00_7155 = (long) (BgL_jz00_3862);
								BGL_U8VSET(BgL_arg2265z00_3864, BgL_auxz00_7155,
									BgL_auxz00_7157);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 553 */
					long BgL_arg2449z00_1705;

					{	/* Unsafe/aes.scm 553 */
						unsigned char BgL_arg2450z00_1706;

						long BgL_arg2451z00_1707;

						BgL_arg2450z00_1706 = BGL_U8VREF(BgL_az00_1646, ((long) 0));
						{	/* Unsafe/aes.scm 554 */
							unsigned char BgL_arg2452z00_1708;

							long BgL_arg2453z00_1709;

							BgL_arg2452z00_1708 = BGL_U8VREF(BgL_az00_1646, ((long) 1));
							{	/* Unsafe/aes.scm 555 */
								unsigned char BgL_arg2454z00_1710;

								long BgL_arg2455z00_1711;

								BgL_arg2454z00_1710 = BGL_U8VREF(BgL_bz00_1647, ((long) 2));
								{	/* Unsafe/aes.scm 556 */
									unsigned char BgL_arg2456z00_1712;

									unsigned char BgL_arg2457z00_1713;

									BgL_arg2456z00_1712 = BGL_U8VREF(BgL_az00_1646, ((long) 3));
									BgL_arg2457z00_1713 = BGL_U8VREF(BgL_bz00_1647, ((long) 3));
									BgL_arg2455z00_1711 =
										(
										(long) (BgL_arg2456z00_1712) ^
										(long) (BgL_arg2457z00_1713));
								}
								BgL_arg2453z00_1709 =
									((long) (BgL_arg2454z00_1710) ^ BgL_arg2455z00_1711);
							}
							BgL_arg2451z00_1707 =
								((long) (BgL_arg2452z00_1708) ^ BgL_arg2453z00_1709);
						}
						BgL_arg2449z00_1705 =
							((long) (BgL_arg2450z00_1706) ^ BgL_arg2451z00_1707);
					}
					{	/* Unsafe/aes.scm 553 */
						int BgL_iz00_3876;

						int BgL_jz00_3877;

						unsigned long BgL_vz00_3878;

						BgL_iz00_3876 = (int) (((long) 2));
						BgL_jz00_3877 = (int) (((long) 0));
						BgL_vz00_3878 = (unsigned long) (BgL_arg2449z00_1705);
						{	/* Unsafe/aes.scm 553 */
							obj_t BgL_arg2265z00_3879;

							BgL_arg2265z00_3879 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3876);
							{	/* Unsafe/aes.scm 553 */
								unsigned char BgL_auxz00_7180;

								long BgL_auxz00_7178;

								BgL_auxz00_7180 = (unsigned char) (BgL_vz00_3878);
								BgL_auxz00_7178 = (long) (BgL_jz00_3877);
								BGL_U8VSET(BgL_arg2265z00_3879, BgL_auxz00_7178,
									BgL_auxz00_7180);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 558 */
					long BgL_arg2459z00_1715;

					{	/* Unsafe/aes.scm 558 */
						unsigned char BgL_arg2460z00_1716;

						long BgL_arg2461z00_1717;

						BgL_arg2460z00_1716 = BGL_U8VREF(BgL_az00_1646, ((long) 0));
						{	/* Unsafe/aes.scm 559 */
							unsigned char BgL_arg2462z00_1718;

							long BgL_arg2465z00_1719;

							BgL_arg2462z00_1718 = BGL_U8VREF(BgL_bz00_1647, ((long) 0));
							{	/* Unsafe/aes.scm 560 */
								unsigned char BgL_arg2467z00_1720;

								long BgL_arg2469z00_1721;

								BgL_arg2467z00_1720 = BGL_U8VREF(BgL_az00_1646, ((long) 1));
								{	/* Unsafe/aes.scm 561 */
									unsigned char BgL_arg2470z00_1722;

									unsigned char BgL_arg2471z00_1723;

									BgL_arg2470z00_1722 = BGL_U8VREF(BgL_az00_1646, ((long) 2));
									BgL_arg2471z00_1723 = BGL_U8VREF(BgL_bz00_1647, ((long) 3));
									BgL_arg2469z00_1721 =
										(
										(long) (BgL_arg2470z00_1722) ^
										(long) (BgL_arg2471z00_1723));
								}
								BgL_arg2465z00_1719 =
									((long) (BgL_arg2467z00_1720) ^ BgL_arg2469z00_1721);
							}
							BgL_arg2461z00_1717 =
								((long) (BgL_arg2462z00_1718) ^ BgL_arg2465z00_1719);
						}
						BgL_arg2459z00_1715 =
							((long) (BgL_arg2460z00_1716) ^ BgL_arg2461z00_1717);
					}
					{	/* Unsafe/aes.scm 558 */
						int BgL_iz00_3891;

						int BgL_jz00_3892;

						unsigned long BgL_vz00_3893;

						BgL_iz00_3891 = (int) (((long) 3));
						BgL_jz00_3892 = (int) (((long) 0));
						BgL_vz00_3893 = (unsigned long) (BgL_arg2459z00_1715);
						{	/* Unsafe/aes.scm 558 */
							obj_t BgL_arg2265z00_3894;

							BgL_arg2265z00_3894 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3891);
							{	/* Unsafe/aes.scm 558 */
								unsigned char BgL_auxz00_7203;

								long BgL_auxz00_7201;

								BgL_auxz00_7203 = (unsigned char) (BgL_vz00_3893);
								BgL_auxz00_7201 = (long) (BgL_jz00_3892);
								BGL_U8VSET(BgL_arg2265z00_3894, BgL_auxz00_7201,
									BgL_auxz00_7203);
							} BUNSPEC;
			}}}}
			{	/* Unsafe/aes.scm 535 */
				obj_t BgL_az00_1729;

				obj_t BgL_bz00_1730;

				{	/* Llib/srfi4.scm 231 */

					BgL_az00_1729 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Llib/srfi4.scm 231 */

					BgL_bz00_1730 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1732;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3303z00_3903;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_3898;

							int BgL_jz00_3899;

							BgL_iz00_3898 = (int) (((long) 0));
							BgL_jz00_3899 = (int) (((long) 1));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_3900;

								BgL_arg2264z00_3900 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3898);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7213;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7214;

										BgL_auxz00_7214 = (long) (BgL_jz00_3899);
										BgL_auxz00_7213 =
											BGL_U8VREF(BgL_arg2264z00_3900, BgL_auxz00_7214);
									}
									BgL_res3303z00_3903 = (unsigned long) (BgL_auxz00_7213);
						}}}
						BgL_vz00_1732 = BgL_res3303z00_3903;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7218;

						BgL_auxz00_7218 = (unsigned char) (BgL_vz00_1732);
						BGL_U8VSET(BgL_az00_1729, ((long) 0), BgL_auxz00_7218);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1732) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2472z00_1734;

							BgL_arg2472z00_1734 =
								((long) (BgL_vz00_1732) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7228;

								BgL_auxz00_7228 = (unsigned char) (BgL_arg2472z00_1734);
								BGL_U8VSET(BgL_bz00_1730, ((long) 0), BgL_auxz00_7228);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2476z00_1735;

							BgL_arg2476z00_1735 =
								(((long) (BgL_vz00_1732) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7235;

								BgL_auxz00_7235 = (unsigned char) (BgL_arg2476z00_1735);
								BGL_U8VSET(BgL_bz00_1730, ((long) 0), BgL_auxz00_7235);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1741;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3304z00_3920;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_3915;

							int BgL_jz00_3916;

							BgL_iz00_3915 = (int) (((long) 1));
							BgL_jz00_3916 = (int) (((long) 1));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_3917;

								BgL_arg2264z00_3917 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3915);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7241;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7242;

										BgL_auxz00_7242 = (long) (BgL_jz00_3916);
										BgL_auxz00_7241 =
											BGL_U8VREF(BgL_arg2264z00_3917, BgL_auxz00_7242);
									}
									BgL_res3304z00_3920 = (unsigned long) (BgL_auxz00_7241);
						}}}
						BgL_vz00_1741 = BgL_res3304z00_3920;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7246;

						BgL_auxz00_7246 = (unsigned char) (BgL_vz00_1741);
						BGL_U8VSET(BgL_az00_1729, ((long) 1), BgL_auxz00_7246);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1741) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2481z00_1743;

							BgL_arg2481z00_1743 =
								((long) (BgL_vz00_1741) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7256;

								BgL_auxz00_7256 = (unsigned char) (BgL_arg2481z00_1743);
								BGL_U8VSET(BgL_bz00_1730, ((long) 1), BgL_auxz00_7256);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2482z00_1744;

							BgL_arg2482z00_1744 =
								(((long) (BgL_vz00_1741) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7263;

								BgL_auxz00_7263 = (unsigned char) (BgL_arg2482z00_1744);
								BGL_U8VSET(BgL_bz00_1730, ((long) 1), BgL_auxz00_7263);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1750;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3305z00_3937;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_3932;

							int BgL_jz00_3933;

							BgL_iz00_3932 = (int) (((long) 2));
							BgL_jz00_3933 = (int) (((long) 1));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_3934;

								BgL_arg2264z00_3934 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3932);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7269;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7270;

										BgL_auxz00_7270 = (long) (BgL_jz00_3933);
										BgL_auxz00_7269 =
											BGL_U8VREF(BgL_arg2264z00_3934, BgL_auxz00_7270);
									}
									BgL_res3305z00_3937 = (unsigned long) (BgL_auxz00_7269);
						}}}
						BgL_vz00_1750 = BgL_res3305z00_3937;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7274;

						BgL_auxz00_7274 = (unsigned char) (BgL_vz00_1750);
						BGL_U8VSET(BgL_az00_1729, ((long) 2), BgL_auxz00_7274);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1750) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2487z00_1752;

							BgL_arg2487z00_1752 =
								((long) (BgL_vz00_1750) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7284;

								BgL_auxz00_7284 = (unsigned char) (BgL_arg2487z00_1752);
								BGL_U8VSET(BgL_bz00_1730, ((long) 2), BgL_auxz00_7284);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2488z00_1753;

							BgL_arg2488z00_1753 =
								(((long) (BgL_vz00_1750) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7291;

								BgL_auxz00_7291 = (unsigned char) (BgL_arg2488z00_1753);
								BGL_U8VSET(BgL_bz00_1730, ((long) 2), BgL_auxz00_7291);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1759;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3306z00_3954;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_3949;

							int BgL_jz00_3950;

							BgL_iz00_3949 = (int) (((long) 3));
							BgL_jz00_3950 = (int) (((long) 1));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_3951;

								BgL_arg2264z00_3951 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3949);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7297;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7298;

										BgL_auxz00_7298 = (long) (BgL_jz00_3950);
										BgL_auxz00_7297 =
											BGL_U8VREF(BgL_arg2264z00_3951, BgL_auxz00_7298);
									}
									BgL_res3306z00_3954 = (unsigned long) (BgL_auxz00_7297);
						}}}
						BgL_vz00_1759 = BgL_res3306z00_3954;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7302;

						BgL_auxz00_7302 = (unsigned char) (BgL_vz00_1759);
						BGL_U8VSET(BgL_az00_1729, ((long) 3), BgL_auxz00_7302);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1759) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2494z00_1761;

							BgL_arg2494z00_1761 =
								((long) (BgL_vz00_1759) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7312;

								BgL_auxz00_7312 = (unsigned char) (BgL_arg2494z00_1761);
								BGL_U8VSET(BgL_bz00_1730, ((long) 3), BgL_auxz00_7312);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2495z00_1762;

							BgL_arg2495z00_1762 =
								(((long) (BgL_vz00_1759) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7319;

								BgL_auxz00_7319 = (unsigned char) (BgL_arg2495z00_1762);
								BGL_U8VSET(BgL_bz00_1730, ((long) 3), BgL_auxz00_7319);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 543 */
					long BgL_arg2502z00_1768;

					{	/* Unsafe/aes.scm 543 */
						unsigned char BgL_arg2503z00_1769;

						long BgL_arg2504z00_1770;

						BgL_arg2503z00_1769 = BGL_U8VREF(BgL_bz00_1730, ((long) 0));
						{	/* Unsafe/aes.scm 544 */
							unsigned char BgL_arg2505z00_1771;

							long BgL_arg2506z00_1772;

							BgL_arg2505z00_1771 = BGL_U8VREF(BgL_az00_1729, ((long) 1));
							{	/* Unsafe/aes.scm 545 */
								unsigned char BgL_arg2507z00_1773;

								long BgL_arg2508z00_1774;

								BgL_arg2507z00_1773 = BGL_U8VREF(BgL_bz00_1730, ((long) 1));
								{	/* Unsafe/aes.scm 546 */
									unsigned char BgL_arg2509z00_1775;

									unsigned char BgL_arg2510z00_1776;

									BgL_arg2509z00_1775 = BGL_U8VREF(BgL_az00_1729, ((long) 2));
									BgL_arg2510z00_1776 = BGL_U8VREF(BgL_az00_1729, ((long) 3));
									BgL_arg2508z00_1774 =
										(
										(long) (BgL_arg2509z00_1775) ^
										(long) (BgL_arg2510z00_1776));
								}
								BgL_arg2506z00_1772 =
									((long) (BgL_arg2507z00_1773) ^ BgL_arg2508z00_1774);
							}
							BgL_arg2504z00_1770 =
								((long) (BgL_arg2505z00_1771) ^ BgL_arg2506z00_1772);
						}
						BgL_arg2502z00_1768 =
							((long) (BgL_arg2503z00_1769) ^ BgL_arg2504z00_1770);
					}
					{	/* Unsafe/aes.scm 543 */
						int BgL_iz00_3974;

						int BgL_jz00_3975;

						unsigned long BgL_vz00_3976;

						BgL_iz00_3974 = (int) (((long) 0));
						BgL_jz00_3975 = (int) (((long) 1));
						BgL_vz00_3976 = (unsigned long) (BgL_arg2502z00_1768);
						{	/* Unsafe/aes.scm 543 */
							obj_t BgL_arg2265z00_3977;

							BgL_arg2265z00_3977 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3974);
							{	/* Unsafe/aes.scm 543 */
								unsigned char BgL_auxz00_7342;

								long BgL_auxz00_7340;

								BgL_auxz00_7342 = (unsigned char) (BgL_vz00_3976);
								BgL_auxz00_7340 = (long) (BgL_jz00_3975);
								BGL_U8VSET(BgL_arg2265z00_3977, BgL_auxz00_7340,
									BgL_auxz00_7342);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 548 */
					long BgL_arg2512z00_1778;

					{	/* Unsafe/aes.scm 548 */
						unsigned char BgL_arg2513z00_1779;

						long BgL_arg2514z00_1780;

						BgL_arg2513z00_1779 = BGL_U8VREF(BgL_az00_1729, ((long) 0));
						{	/* Unsafe/aes.scm 549 */
							unsigned char BgL_arg2515z00_1781;

							long BgL_arg2516z00_1782;

							BgL_arg2515z00_1781 = BGL_U8VREF(BgL_bz00_1730, ((long) 1));
							{	/* Unsafe/aes.scm 550 */
								unsigned char BgL_arg2517z00_1783;

								long BgL_arg2518z00_1784;

								BgL_arg2517z00_1783 = BGL_U8VREF(BgL_az00_1729, ((long) 2));
								{	/* Unsafe/aes.scm 551 */
									unsigned char BgL_arg2519z00_1785;

									unsigned char BgL_arg2520z00_1786;

									BgL_arg2519z00_1785 = BGL_U8VREF(BgL_bz00_1730, ((long) 2));
									BgL_arg2520z00_1786 = BGL_U8VREF(BgL_az00_1729, ((long) 3));
									BgL_arg2518z00_1784 =
										(
										(long) (BgL_arg2519z00_1785) ^
										(long) (BgL_arg2520z00_1786));
								}
								BgL_arg2516z00_1782 =
									((long) (BgL_arg2517z00_1783) ^ BgL_arg2518z00_1784);
							}
							BgL_arg2514z00_1780 =
								((long) (BgL_arg2515z00_1781) ^ BgL_arg2516z00_1782);
						}
						BgL_arg2512z00_1778 =
							((long) (BgL_arg2513z00_1779) ^ BgL_arg2514z00_1780);
					}
					{	/* Unsafe/aes.scm 548 */
						int BgL_iz00_3989;

						int BgL_jz00_3990;

						unsigned long BgL_vz00_3991;

						BgL_iz00_3989 = (int) (((long) 1));
						BgL_jz00_3990 = (int) (((long) 1));
						BgL_vz00_3991 = (unsigned long) (BgL_arg2512z00_1778);
						{	/* Unsafe/aes.scm 548 */
							obj_t BgL_arg2265z00_3992;

							BgL_arg2265z00_3992 = VECTOR_REF(BgL_sz00_86, BgL_iz00_3989);
							{	/* Unsafe/aes.scm 548 */
								unsigned char BgL_auxz00_7365;

								long BgL_auxz00_7363;

								BgL_auxz00_7365 = (unsigned char) (BgL_vz00_3991);
								BgL_auxz00_7363 = (long) (BgL_jz00_3990);
								BGL_U8VSET(BgL_arg2265z00_3992, BgL_auxz00_7363,
									BgL_auxz00_7365);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 553 */
					long BgL_arg2522z00_1788;

					{	/* Unsafe/aes.scm 553 */
						unsigned char BgL_arg2523z00_1789;

						long BgL_arg2524z00_1790;

						BgL_arg2523z00_1789 = BGL_U8VREF(BgL_az00_1729, ((long) 0));
						{	/* Unsafe/aes.scm 554 */
							unsigned char BgL_arg2525z00_1791;

							long BgL_arg2526z00_1792;

							BgL_arg2525z00_1791 = BGL_U8VREF(BgL_az00_1729, ((long) 1));
							{	/* Unsafe/aes.scm 555 */
								unsigned char BgL_arg2527z00_1793;

								long BgL_arg2528z00_1794;

								BgL_arg2527z00_1793 = BGL_U8VREF(BgL_bz00_1730, ((long) 2));
								{	/* Unsafe/aes.scm 556 */
									unsigned char BgL_arg2529z00_1795;

									unsigned char BgL_arg2530z00_1796;

									BgL_arg2529z00_1795 = BGL_U8VREF(BgL_az00_1729, ((long) 3));
									BgL_arg2530z00_1796 = BGL_U8VREF(BgL_bz00_1730, ((long) 3));
									BgL_arg2528z00_1794 =
										(
										(long) (BgL_arg2529z00_1795) ^
										(long) (BgL_arg2530z00_1796));
								}
								BgL_arg2526z00_1792 =
									((long) (BgL_arg2527z00_1793) ^ BgL_arg2528z00_1794);
							}
							BgL_arg2524z00_1790 =
								((long) (BgL_arg2525z00_1791) ^ BgL_arg2526z00_1792);
						}
						BgL_arg2522z00_1788 =
							((long) (BgL_arg2523z00_1789) ^ BgL_arg2524z00_1790);
					}
					{	/* Unsafe/aes.scm 553 */
						int BgL_iz00_4004;

						int BgL_jz00_4005;

						unsigned long BgL_vz00_4006;

						BgL_iz00_4004 = (int) (((long) 2));
						BgL_jz00_4005 = (int) (((long) 1));
						BgL_vz00_4006 = (unsigned long) (BgL_arg2522z00_1788);
						{	/* Unsafe/aes.scm 553 */
							obj_t BgL_arg2265z00_4007;

							BgL_arg2265z00_4007 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4004);
							{	/* Unsafe/aes.scm 553 */
								unsigned char BgL_auxz00_7388;

								long BgL_auxz00_7386;

								BgL_auxz00_7388 = (unsigned char) (BgL_vz00_4006);
								BgL_auxz00_7386 = (long) (BgL_jz00_4005);
								BGL_U8VSET(BgL_arg2265z00_4007, BgL_auxz00_7386,
									BgL_auxz00_7388);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 558 */
					long BgL_arg2532z00_1798;

					{	/* Unsafe/aes.scm 558 */
						unsigned char BgL_arg2533z00_1799;

						long BgL_arg2534z00_1800;

						BgL_arg2533z00_1799 = BGL_U8VREF(BgL_az00_1729, ((long) 0));
						{	/* Unsafe/aes.scm 559 */
							unsigned char BgL_arg2535z00_1801;

							long BgL_arg2536z00_1802;

							BgL_arg2535z00_1801 = BGL_U8VREF(BgL_bz00_1730, ((long) 0));
							{	/* Unsafe/aes.scm 560 */
								unsigned char BgL_arg2537z00_1803;

								long BgL_arg2539z00_1804;

								BgL_arg2537z00_1803 = BGL_U8VREF(BgL_az00_1729, ((long) 1));
								{	/* Unsafe/aes.scm 561 */
									unsigned char BgL_arg2540z00_1805;

									unsigned char BgL_arg2541z00_1806;

									BgL_arg2540z00_1805 = BGL_U8VREF(BgL_az00_1729, ((long) 2));
									BgL_arg2541z00_1806 = BGL_U8VREF(BgL_bz00_1730, ((long) 3));
									BgL_arg2539z00_1804 =
										(
										(long) (BgL_arg2540z00_1805) ^
										(long) (BgL_arg2541z00_1806));
								}
								BgL_arg2536z00_1802 =
									((long) (BgL_arg2537z00_1803) ^ BgL_arg2539z00_1804);
							}
							BgL_arg2534z00_1800 =
								((long) (BgL_arg2535z00_1801) ^ BgL_arg2536z00_1802);
						}
						BgL_arg2532z00_1798 =
							((long) (BgL_arg2533z00_1799) ^ BgL_arg2534z00_1800);
					}
					{	/* Unsafe/aes.scm 558 */
						int BgL_iz00_4019;

						int BgL_jz00_4020;

						unsigned long BgL_vz00_4021;

						BgL_iz00_4019 = (int) (((long) 3));
						BgL_jz00_4020 = (int) (((long) 1));
						BgL_vz00_4021 = (unsigned long) (BgL_arg2532z00_1798);
						{	/* Unsafe/aes.scm 558 */
							obj_t BgL_arg2265z00_4022;

							BgL_arg2265z00_4022 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4019);
							{	/* Unsafe/aes.scm 558 */
								unsigned char BgL_auxz00_7411;

								long BgL_auxz00_7409;

								BgL_auxz00_7411 = (unsigned char) (BgL_vz00_4021);
								BgL_auxz00_7409 = (long) (BgL_jz00_4020);
								BGL_U8VSET(BgL_arg2265z00_4022, BgL_auxz00_7409,
									BgL_auxz00_7411);
							} BUNSPEC;
			}}}}
			{	/* Unsafe/aes.scm 535 */
				obj_t BgL_az00_1812;

				obj_t BgL_bz00_1813;

				{	/* Llib/srfi4.scm 231 */

					BgL_az00_1812 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Llib/srfi4.scm 231 */

					BgL_bz00_1813 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1815;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3307z00_4031;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_4026;

							int BgL_jz00_4027;

							BgL_iz00_4026 = (int) (((long) 0));
							BgL_jz00_4027 = (int) (((long) 2));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_4028;

								BgL_arg2264z00_4028 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4026);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7421;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7422;

										BgL_auxz00_7422 = (long) (BgL_jz00_4027);
										BgL_auxz00_7421 =
											BGL_U8VREF(BgL_arg2264z00_4028, BgL_auxz00_7422);
									}
									BgL_res3307z00_4031 = (unsigned long) (BgL_auxz00_7421);
						}}}
						BgL_vz00_1815 = BgL_res3307z00_4031;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7426;

						BgL_auxz00_7426 = (unsigned char) (BgL_vz00_1815);
						BGL_U8VSET(BgL_az00_1812, ((long) 0), BgL_auxz00_7426);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1815) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2542z00_1817;

							BgL_arg2542z00_1817 =
								((long) (BgL_vz00_1815) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7436;

								BgL_auxz00_7436 = (unsigned char) (BgL_arg2542z00_1817);
								BGL_U8VSET(BgL_bz00_1813, ((long) 0), BgL_auxz00_7436);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2543z00_1818;

							BgL_arg2543z00_1818 =
								(((long) (BgL_vz00_1815) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7443;

								BgL_auxz00_7443 = (unsigned char) (BgL_arg2543z00_1818);
								BGL_U8VSET(BgL_bz00_1813, ((long) 0), BgL_auxz00_7443);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1824;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3308z00_4048;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_4043;

							int BgL_jz00_4044;

							BgL_iz00_4043 = (int) (((long) 1));
							BgL_jz00_4044 = (int) (((long) 2));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_4045;

								BgL_arg2264z00_4045 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4043);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7449;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7450;

										BgL_auxz00_7450 = (long) (BgL_jz00_4044);
										BgL_auxz00_7449 =
											BGL_U8VREF(BgL_arg2264z00_4045, BgL_auxz00_7450);
									}
									BgL_res3308z00_4048 = (unsigned long) (BgL_auxz00_7449);
						}}}
						BgL_vz00_1824 = BgL_res3308z00_4048;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7454;

						BgL_auxz00_7454 = (unsigned char) (BgL_vz00_1824);
						BGL_U8VSET(BgL_az00_1812, ((long) 1), BgL_auxz00_7454);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1824) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2548z00_1826;

							BgL_arg2548z00_1826 =
								((long) (BgL_vz00_1824) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7464;

								BgL_auxz00_7464 = (unsigned char) (BgL_arg2548z00_1826);
								BGL_U8VSET(BgL_bz00_1813, ((long) 1), BgL_auxz00_7464);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2549z00_1827;

							BgL_arg2549z00_1827 =
								(((long) (BgL_vz00_1824) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7471;

								BgL_auxz00_7471 = (unsigned char) (BgL_arg2549z00_1827);
								BGL_U8VSET(BgL_bz00_1813, ((long) 1), BgL_auxz00_7471);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1833;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3309z00_4065;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_4060;

							int BgL_jz00_4061;

							BgL_iz00_4060 = (int) (((long) 2));
							BgL_jz00_4061 = (int) (((long) 2));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_4062;

								BgL_arg2264z00_4062 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4060);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7477;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7478;

										BgL_auxz00_7478 = (long) (BgL_jz00_4061);
										BgL_auxz00_7477 =
											BGL_U8VREF(BgL_arg2264z00_4062, BgL_auxz00_7478);
									}
									BgL_res3309z00_4065 = (unsigned long) (BgL_auxz00_7477);
						}}}
						BgL_vz00_1833 = BgL_res3309z00_4065;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7482;

						BgL_auxz00_7482 = (unsigned char) (BgL_vz00_1833);
						BGL_U8VSET(BgL_az00_1812, ((long) 2), BgL_auxz00_7482);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1833) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2554z00_1835;

							BgL_arg2554z00_1835 =
								((long) (BgL_vz00_1833) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7492;

								BgL_auxz00_7492 = (unsigned char) (BgL_arg2554z00_1835);
								BGL_U8VSET(BgL_bz00_1813, ((long) 2), BgL_auxz00_7492);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2555z00_1836;

							BgL_arg2555z00_1836 =
								(((long) (BgL_vz00_1833) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7499;

								BgL_auxz00_7499 = (unsigned char) (BgL_arg2555z00_1836);
								BGL_U8VSET(BgL_bz00_1813, ((long) 2), BgL_auxz00_7499);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1842;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3310z00_4082;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_4077;

							int BgL_jz00_4078;

							BgL_iz00_4077 = (int) (((long) 3));
							BgL_jz00_4078 = (int) (((long) 2));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_4079;

								BgL_arg2264z00_4079 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4077);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7505;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7506;

										BgL_auxz00_7506 = (long) (BgL_jz00_4078);
										BgL_auxz00_7505 =
											BGL_U8VREF(BgL_arg2264z00_4079, BgL_auxz00_7506);
									}
									BgL_res3310z00_4082 = (unsigned long) (BgL_auxz00_7505);
						}}}
						BgL_vz00_1842 = BgL_res3310z00_4082;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7510;

						BgL_auxz00_7510 = (unsigned char) (BgL_vz00_1842);
						BGL_U8VSET(BgL_az00_1812, ((long) 3), BgL_auxz00_7510);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1842) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2560z00_1844;

							BgL_arg2560z00_1844 =
								((long) (BgL_vz00_1842) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7520;

								BgL_auxz00_7520 = (unsigned char) (BgL_arg2560z00_1844);
								BGL_U8VSET(BgL_bz00_1813, ((long) 3), BgL_auxz00_7520);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2561z00_1845;

							BgL_arg2561z00_1845 =
								(((long) (BgL_vz00_1842) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7527;

								BgL_auxz00_7527 = (unsigned char) (BgL_arg2561z00_1845);
								BGL_U8VSET(BgL_bz00_1813, ((long) 3), BgL_auxz00_7527);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 543 */
					long BgL_arg2568z00_1851;

					{	/* Unsafe/aes.scm 543 */
						unsigned char BgL_arg2569z00_1852;

						long BgL_arg2571z00_1853;

						BgL_arg2569z00_1852 = BGL_U8VREF(BgL_bz00_1813, ((long) 0));
						{	/* Unsafe/aes.scm 544 */
							unsigned char BgL_arg2572z00_1854;

							long BgL_arg2573z00_1855;

							BgL_arg2572z00_1854 = BGL_U8VREF(BgL_az00_1812, ((long) 1));
							{	/* Unsafe/aes.scm 545 */
								unsigned char BgL_arg2574z00_1856;

								long BgL_arg2575z00_1857;

								BgL_arg2574z00_1856 = BGL_U8VREF(BgL_bz00_1813, ((long) 1));
								{	/* Unsafe/aes.scm 546 */
									unsigned char BgL_arg2576z00_1858;

									unsigned char BgL_arg2577z00_1859;

									BgL_arg2576z00_1858 = BGL_U8VREF(BgL_az00_1812, ((long) 2));
									BgL_arg2577z00_1859 = BGL_U8VREF(BgL_az00_1812, ((long) 3));
									BgL_arg2575z00_1857 =
										(
										(long) (BgL_arg2576z00_1858) ^
										(long) (BgL_arg2577z00_1859));
								}
								BgL_arg2573z00_1855 =
									((long) (BgL_arg2574z00_1856) ^ BgL_arg2575z00_1857);
							}
							BgL_arg2571z00_1853 =
								((long) (BgL_arg2572z00_1854) ^ BgL_arg2573z00_1855);
						}
						BgL_arg2568z00_1851 =
							((long) (BgL_arg2569z00_1852) ^ BgL_arg2571z00_1853);
					}
					{	/* Unsafe/aes.scm 543 */
						int BgL_iz00_4102;

						int BgL_jz00_4103;

						unsigned long BgL_vz00_4104;

						BgL_iz00_4102 = (int) (((long) 0));
						BgL_jz00_4103 = (int) (((long) 2));
						BgL_vz00_4104 = (unsigned long) (BgL_arg2568z00_1851);
						{	/* Unsafe/aes.scm 543 */
							obj_t BgL_arg2265z00_4105;

							BgL_arg2265z00_4105 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4102);
							{	/* Unsafe/aes.scm 543 */
								unsigned char BgL_auxz00_7550;

								long BgL_auxz00_7548;

								BgL_auxz00_7550 = (unsigned char) (BgL_vz00_4104);
								BgL_auxz00_7548 = (long) (BgL_jz00_4103);
								BGL_U8VSET(BgL_arg2265z00_4105, BgL_auxz00_7548,
									BgL_auxz00_7550);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 548 */
					long BgL_arg2579z00_1861;

					{	/* Unsafe/aes.scm 548 */
						unsigned char BgL_arg2580z00_1862;

						long BgL_arg2581z00_1863;

						BgL_arg2580z00_1862 = BGL_U8VREF(BgL_az00_1812, ((long) 0));
						{	/* Unsafe/aes.scm 549 */
							unsigned char BgL_arg2582z00_1864;

							long BgL_arg2583z00_1865;

							BgL_arg2582z00_1864 = BGL_U8VREF(BgL_bz00_1813, ((long) 1));
							{	/* Unsafe/aes.scm 550 */
								unsigned char BgL_arg2584z00_1866;

								long BgL_arg2585z00_1867;

								BgL_arg2584z00_1866 = BGL_U8VREF(BgL_az00_1812, ((long) 2));
								{	/* Unsafe/aes.scm 551 */
									unsigned char BgL_arg2586z00_1868;

									unsigned char BgL_arg2587z00_1869;

									BgL_arg2586z00_1868 = BGL_U8VREF(BgL_bz00_1813, ((long) 2));
									BgL_arg2587z00_1869 = BGL_U8VREF(BgL_az00_1812, ((long) 3));
									BgL_arg2585z00_1867 =
										(
										(long) (BgL_arg2586z00_1868) ^
										(long) (BgL_arg2587z00_1869));
								}
								BgL_arg2583z00_1865 =
									((long) (BgL_arg2584z00_1866) ^ BgL_arg2585z00_1867);
							}
							BgL_arg2581z00_1863 =
								((long) (BgL_arg2582z00_1864) ^ BgL_arg2583z00_1865);
						}
						BgL_arg2579z00_1861 =
							((long) (BgL_arg2580z00_1862) ^ BgL_arg2581z00_1863);
					}
					{	/* Unsafe/aes.scm 548 */
						int BgL_iz00_4117;

						int BgL_jz00_4118;

						unsigned long BgL_vz00_4119;

						BgL_iz00_4117 = (int) (((long) 1));
						BgL_jz00_4118 = (int) (((long) 2));
						BgL_vz00_4119 = (unsigned long) (BgL_arg2579z00_1861);
						{	/* Unsafe/aes.scm 548 */
							obj_t BgL_arg2265z00_4120;

							BgL_arg2265z00_4120 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4117);
							{	/* Unsafe/aes.scm 548 */
								unsigned char BgL_auxz00_7573;

								long BgL_auxz00_7571;

								BgL_auxz00_7573 = (unsigned char) (BgL_vz00_4119);
								BgL_auxz00_7571 = (long) (BgL_jz00_4118);
								BGL_U8VSET(BgL_arg2265z00_4120, BgL_auxz00_7571,
									BgL_auxz00_7573);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 553 */
					long BgL_arg2590z00_1871;

					{	/* Unsafe/aes.scm 553 */
						unsigned char BgL_arg2591z00_1872;

						long BgL_arg2592z00_1873;

						BgL_arg2591z00_1872 = BGL_U8VREF(BgL_az00_1812, ((long) 0));
						{	/* Unsafe/aes.scm 554 */
							unsigned char BgL_arg2593z00_1874;

							long BgL_arg2594z00_1875;

							BgL_arg2593z00_1874 = BGL_U8VREF(BgL_az00_1812, ((long) 1));
							{	/* Unsafe/aes.scm 555 */
								unsigned char BgL_arg2595z00_1876;

								long BgL_arg2596z00_1877;

								BgL_arg2595z00_1876 = BGL_U8VREF(BgL_bz00_1813, ((long) 2));
								{	/* Unsafe/aes.scm 556 */
									unsigned char BgL_arg2597z00_1878;

									unsigned char BgL_arg2598z00_1879;

									BgL_arg2597z00_1878 = BGL_U8VREF(BgL_az00_1812, ((long) 3));
									BgL_arg2598z00_1879 = BGL_U8VREF(BgL_bz00_1813, ((long) 3));
									BgL_arg2596z00_1877 =
										(
										(long) (BgL_arg2597z00_1878) ^
										(long) (BgL_arg2598z00_1879));
								}
								BgL_arg2594z00_1875 =
									((long) (BgL_arg2595z00_1876) ^ BgL_arg2596z00_1877);
							}
							BgL_arg2592z00_1873 =
								((long) (BgL_arg2593z00_1874) ^ BgL_arg2594z00_1875);
						}
						BgL_arg2590z00_1871 =
							((long) (BgL_arg2591z00_1872) ^ BgL_arg2592z00_1873);
					}
					{	/* Unsafe/aes.scm 553 */
						int BgL_iz00_4132;

						int BgL_jz00_4133;

						unsigned long BgL_vz00_4134;

						BgL_iz00_4132 = (int) (((long) 2));
						BgL_jz00_4133 = (int) (((long) 2));
						BgL_vz00_4134 = (unsigned long) (BgL_arg2590z00_1871);
						{	/* Unsafe/aes.scm 553 */
							obj_t BgL_arg2265z00_4135;

							BgL_arg2265z00_4135 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4132);
							{	/* Unsafe/aes.scm 553 */
								unsigned char BgL_auxz00_7596;

								long BgL_auxz00_7594;

								BgL_auxz00_7596 = (unsigned char) (BgL_vz00_4134);
								BgL_auxz00_7594 = (long) (BgL_jz00_4133);
								BGL_U8VSET(BgL_arg2265z00_4135, BgL_auxz00_7594,
									BgL_auxz00_7596);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 558 */
					long BgL_arg2600z00_1881;

					{	/* Unsafe/aes.scm 558 */
						unsigned char BgL_arg2601z00_1882;

						long BgL_arg2602z00_1883;

						BgL_arg2601z00_1882 = BGL_U8VREF(BgL_az00_1812, ((long) 0));
						{	/* Unsafe/aes.scm 559 */
							unsigned char BgL_arg2603z00_1884;

							long BgL_arg2604z00_1885;

							BgL_arg2603z00_1884 = BGL_U8VREF(BgL_bz00_1813, ((long) 0));
							{	/* Unsafe/aes.scm 560 */
								unsigned char BgL_arg2605z00_1886;

								long BgL_arg2606z00_1887;

								BgL_arg2605z00_1886 = BGL_U8VREF(BgL_az00_1812, ((long) 1));
								{	/* Unsafe/aes.scm 561 */
									unsigned char BgL_arg2607z00_1888;

									unsigned char BgL_arg2608z00_1889;

									BgL_arg2607z00_1888 = BGL_U8VREF(BgL_az00_1812, ((long) 2));
									BgL_arg2608z00_1889 = BGL_U8VREF(BgL_bz00_1813, ((long) 3));
									BgL_arg2606z00_1887 =
										(
										(long) (BgL_arg2607z00_1888) ^
										(long) (BgL_arg2608z00_1889));
								}
								BgL_arg2604z00_1885 =
									((long) (BgL_arg2605z00_1886) ^ BgL_arg2606z00_1887);
							}
							BgL_arg2602z00_1883 =
								((long) (BgL_arg2603z00_1884) ^ BgL_arg2604z00_1885);
						}
						BgL_arg2600z00_1881 =
							((long) (BgL_arg2601z00_1882) ^ BgL_arg2602z00_1883);
					}
					{	/* Unsafe/aes.scm 558 */
						int BgL_iz00_4147;

						int BgL_jz00_4148;

						unsigned long BgL_vz00_4149;

						BgL_iz00_4147 = (int) (((long) 3));
						BgL_jz00_4148 = (int) (((long) 2));
						BgL_vz00_4149 = (unsigned long) (BgL_arg2600z00_1881);
						{	/* Unsafe/aes.scm 558 */
							obj_t BgL_arg2265z00_4150;

							BgL_arg2265z00_4150 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4147);
							{	/* Unsafe/aes.scm 558 */
								unsigned char BgL_auxz00_7619;

								long BgL_auxz00_7617;

								BgL_auxz00_7619 = (unsigned char) (BgL_vz00_4149);
								BgL_auxz00_7617 = (long) (BgL_jz00_4148);
								BGL_U8VSET(BgL_arg2265z00_4150, BgL_auxz00_7617,
									BgL_auxz00_7619);
							} BUNSPEC;
			}}}}
			{	/* Unsafe/aes.scm 535 */
				obj_t BgL_az00_1895;

				obj_t BgL_bz00_1896;

				{	/* Llib/srfi4.scm 231 */

					BgL_az00_1895 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Llib/srfi4.scm 231 */

					BgL_bz00_1896 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1898;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3311z00_4159;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_4154;

							int BgL_jz00_4155;

							BgL_iz00_4154 = (int) (((long) 0));
							BgL_jz00_4155 = (int) (((long) 3));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_4156;

								BgL_arg2264z00_4156 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4154);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7629;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7630;

										BgL_auxz00_7630 = (long) (BgL_jz00_4155);
										BgL_auxz00_7629 =
											BGL_U8VREF(BgL_arg2264z00_4156, BgL_auxz00_7630);
									}
									BgL_res3311z00_4159 = (unsigned long) (BgL_auxz00_7629);
						}}}
						BgL_vz00_1898 = BgL_res3311z00_4159;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7634;

						BgL_auxz00_7634 = (unsigned char) (BgL_vz00_1898);
						BGL_U8VSET(BgL_az00_1895, ((long) 0), BgL_auxz00_7634);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1898) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2609z00_1900;

							BgL_arg2609z00_1900 =
								((long) (BgL_vz00_1898) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7644;

								BgL_auxz00_7644 = (unsigned char) (BgL_arg2609z00_1900);
								BGL_U8VSET(BgL_bz00_1896, ((long) 0), BgL_auxz00_7644);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2610z00_1901;

							BgL_arg2610z00_1901 =
								(((long) (BgL_vz00_1898) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7651;

								BgL_auxz00_7651 = (unsigned char) (BgL_arg2610z00_1901);
								BGL_U8VSET(BgL_bz00_1896, ((long) 0), BgL_auxz00_7651);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1907;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3312z00_4176;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_4171;

							int BgL_jz00_4172;

							BgL_iz00_4171 = (int) (((long) 1));
							BgL_jz00_4172 = (int) (((long) 3));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_4173;

								BgL_arg2264z00_4173 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4171);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7657;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7658;

										BgL_auxz00_7658 = (long) (BgL_jz00_4172);
										BgL_auxz00_7657 =
											BGL_U8VREF(BgL_arg2264z00_4173, BgL_auxz00_7658);
									}
									BgL_res3312z00_4176 = (unsigned long) (BgL_auxz00_7657);
						}}}
						BgL_vz00_1907 = BgL_res3312z00_4176;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7662;

						BgL_auxz00_7662 = (unsigned char) (BgL_vz00_1907);
						BGL_U8VSET(BgL_az00_1895, ((long) 1), BgL_auxz00_7662);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1907) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2615z00_1909;

							BgL_arg2615z00_1909 =
								((long) (BgL_vz00_1907) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7672;

								BgL_auxz00_7672 = (unsigned char) (BgL_arg2615z00_1909);
								BGL_U8VSET(BgL_bz00_1896, ((long) 1), BgL_auxz00_7672);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2616z00_1910;

							BgL_arg2616z00_1910 =
								(((long) (BgL_vz00_1907) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7679;

								BgL_auxz00_7679 = (unsigned char) (BgL_arg2616z00_1910);
								BGL_U8VSET(BgL_bz00_1896, ((long) 1), BgL_auxz00_7679);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1916;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3313z00_4193;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_4188;

							int BgL_jz00_4189;

							BgL_iz00_4188 = (int) (((long) 2));
							BgL_jz00_4189 = (int) (((long) 3));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_4190;

								BgL_arg2264z00_4190 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4188);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7685;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7686;

										BgL_auxz00_7686 = (long) (BgL_jz00_4189);
										BgL_auxz00_7685 =
											BGL_U8VREF(BgL_arg2264z00_4190, BgL_auxz00_7686);
									}
									BgL_res3313z00_4193 = (unsigned long) (BgL_auxz00_7685);
						}}}
						BgL_vz00_1916 = BgL_res3313z00_4193;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7690;

						BgL_auxz00_7690 = (unsigned char) (BgL_vz00_1916);
						BGL_U8VSET(BgL_az00_1895, ((long) 2), BgL_auxz00_7690);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1916) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2621z00_1918;

							BgL_arg2621z00_1918 =
								((long) (BgL_vz00_1916) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7700;

								BgL_auxz00_7700 = (unsigned char) (BgL_arg2621z00_1918);
								BGL_U8VSET(BgL_bz00_1896, ((long) 2), BgL_auxz00_7700);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2622z00_1919;

							BgL_arg2622z00_1919 =
								(((long) (BgL_vz00_1916) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7707;

								BgL_auxz00_7707 = (unsigned char) (BgL_arg2622z00_1919);
								BGL_U8VSET(BgL_bz00_1896, ((long) 2), BgL_auxz00_7707);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 538 */
					unsigned long BgL_vz00_1925;

					{	/* Unsafe/aes.scm 538 */
						unsigned long BgL_res3314z00_4210;

						{	/* Unsafe/aes.scm 538 */
							int BgL_iz00_4205;

							int BgL_jz00_4206;

							BgL_iz00_4205 = (int) (((long) 3));
							BgL_jz00_4206 = (int) (((long) 3));
							{	/* Unsafe/aes.scm 538 */
								obj_t BgL_arg2264z00_4207;

								BgL_arg2264z00_4207 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4205);
								{	/* Unsafe/aes.scm 538 */
									unsigned char BgL_auxz00_7713;

									{	/* Unsafe/aes.scm 538 */
										long BgL_auxz00_7714;

										BgL_auxz00_7714 = (long) (BgL_jz00_4206);
										BgL_auxz00_7713 =
											BGL_U8VREF(BgL_arg2264z00_4207, BgL_auxz00_7714);
									}
									BgL_res3314z00_4210 = (unsigned long) (BgL_auxz00_7713);
						}}}
						BgL_vz00_1925 = BgL_res3314z00_4210;
					}
					{	/* Unsafe/aes.scm 539 */
						unsigned char BgL_auxz00_7718;

						BgL_auxz00_7718 = (unsigned char) (BgL_vz00_1925);
						BGL_U8VSET(BgL_az00_1895, ((long) 3), BgL_auxz00_7718);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1925) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 541 */
							long BgL_arg2627z00_1927;

							BgL_arg2627z00_1927 =
								((long) (BgL_vz00_1925) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 541 */
								unsigned char BgL_auxz00_7728;

								BgL_auxz00_7728 = (unsigned char) (BgL_arg2627z00_1927);
								BGL_U8VSET(BgL_bz00_1896, ((long) 3), BgL_auxz00_7728);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 542 */
							long BgL_arg2628z00_1928;

							BgL_arg2628z00_1928 =
								(((long) (BgL_vz00_1925) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 542 */
								unsigned char BgL_auxz00_7735;

								BgL_auxz00_7735 = (unsigned char) (BgL_arg2628z00_1928);
								BGL_U8VSET(BgL_bz00_1896, ((long) 3), BgL_auxz00_7735);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 543 */
					long BgL_arg2634z00_1934;

					{	/* Unsafe/aes.scm 543 */
						unsigned char BgL_arg2635z00_1935;

						long BgL_arg2636z00_1936;

						BgL_arg2635z00_1935 = BGL_U8VREF(BgL_bz00_1896, ((long) 0));
						{	/* Unsafe/aes.scm 544 */
							unsigned char BgL_arg2637z00_1937;

							long BgL_arg2638z00_1938;

							BgL_arg2637z00_1937 = BGL_U8VREF(BgL_az00_1895, ((long) 1));
							{	/* Unsafe/aes.scm 545 */
								unsigned char BgL_arg2639z00_1939;

								long BgL_arg2640z00_1940;

								BgL_arg2639z00_1939 = BGL_U8VREF(BgL_bz00_1896, ((long) 1));
								{	/* Unsafe/aes.scm 546 */
									unsigned char BgL_arg2641z00_1941;

									unsigned char BgL_arg2642z00_1942;

									BgL_arg2641z00_1941 = BGL_U8VREF(BgL_az00_1895, ((long) 2));
									BgL_arg2642z00_1942 = BGL_U8VREF(BgL_az00_1895, ((long) 3));
									BgL_arg2640z00_1940 =
										(
										(long) (BgL_arg2641z00_1941) ^
										(long) (BgL_arg2642z00_1942));
								}
								BgL_arg2638z00_1938 =
									((long) (BgL_arg2639z00_1939) ^ BgL_arg2640z00_1940);
							}
							BgL_arg2636z00_1936 =
								((long) (BgL_arg2637z00_1937) ^ BgL_arg2638z00_1938);
						}
						BgL_arg2634z00_1934 =
							((long) (BgL_arg2635z00_1935) ^ BgL_arg2636z00_1936);
					}
					{	/* Unsafe/aes.scm 543 */
						int BgL_iz00_4230;

						int BgL_jz00_4231;

						unsigned long BgL_vz00_4232;

						BgL_iz00_4230 = (int) (((long) 0));
						BgL_jz00_4231 = (int) (((long) 3));
						BgL_vz00_4232 = (unsigned long) (BgL_arg2634z00_1934);
						{	/* Unsafe/aes.scm 543 */
							obj_t BgL_arg2265z00_4233;

							BgL_arg2265z00_4233 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4230);
							{	/* Unsafe/aes.scm 543 */
								unsigned char BgL_auxz00_7758;

								long BgL_auxz00_7756;

								BgL_auxz00_7758 = (unsigned char) (BgL_vz00_4232);
								BgL_auxz00_7756 = (long) (BgL_jz00_4231);
								BGL_U8VSET(BgL_arg2265z00_4233, BgL_auxz00_7756,
									BgL_auxz00_7758);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 548 */
					long BgL_arg2644z00_1944;

					{	/* Unsafe/aes.scm 548 */
						unsigned char BgL_arg2645z00_1945;

						long BgL_arg2646z00_1946;

						BgL_arg2645z00_1945 = BGL_U8VREF(BgL_az00_1895, ((long) 0));
						{	/* Unsafe/aes.scm 549 */
							unsigned char BgL_arg2647z00_1947;

							long BgL_arg2648z00_1948;

							BgL_arg2647z00_1947 = BGL_U8VREF(BgL_bz00_1896, ((long) 1));
							{	/* Unsafe/aes.scm 550 */
								unsigned char BgL_arg2649z00_1949;

								long BgL_arg2650z00_1950;

								BgL_arg2649z00_1949 = BGL_U8VREF(BgL_az00_1895, ((long) 2));
								{	/* Unsafe/aes.scm 551 */
									unsigned char BgL_arg2651z00_1951;

									unsigned char BgL_arg2652z00_1952;

									BgL_arg2651z00_1951 = BGL_U8VREF(BgL_bz00_1896, ((long) 2));
									BgL_arg2652z00_1952 = BGL_U8VREF(BgL_az00_1895, ((long) 3));
									BgL_arg2650z00_1950 =
										(
										(long) (BgL_arg2651z00_1951) ^
										(long) (BgL_arg2652z00_1952));
								}
								BgL_arg2648z00_1948 =
									((long) (BgL_arg2649z00_1949) ^ BgL_arg2650z00_1950);
							}
							BgL_arg2646z00_1946 =
								((long) (BgL_arg2647z00_1947) ^ BgL_arg2648z00_1948);
						}
						BgL_arg2644z00_1944 =
							((long) (BgL_arg2645z00_1945) ^ BgL_arg2646z00_1946);
					}
					{	/* Unsafe/aes.scm 548 */
						int BgL_iz00_4245;

						int BgL_jz00_4246;

						unsigned long BgL_vz00_4247;

						BgL_iz00_4245 = (int) (((long) 1));
						BgL_jz00_4246 = (int) (((long) 3));
						BgL_vz00_4247 = (unsigned long) (BgL_arg2644z00_1944);
						{	/* Unsafe/aes.scm 548 */
							obj_t BgL_arg2265z00_4248;

							BgL_arg2265z00_4248 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4245);
							{	/* Unsafe/aes.scm 548 */
								unsigned char BgL_auxz00_7781;

								long BgL_auxz00_7779;

								BgL_auxz00_7781 = (unsigned char) (BgL_vz00_4247);
								BgL_auxz00_7779 = (long) (BgL_jz00_4246);
								BGL_U8VSET(BgL_arg2265z00_4248, BgL_auxz00_7779,
									BgL_auxz00_7781);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 553 */
					long BgL_arg2656z00_1954;

					{	/* Unsafe/aes.scm 553 */
						unsigned char BgL_arg2657z00_1955;

						long BgL_arg2658z00_1956;

						BgL_arg2657z00_1955 = BGL_U8VREF(BgL_az00_1895, ((long) 0));
						{	/* Unsafe/aes.scm 554 */
							unsigned char BgL_arg2659z00_1957;

							long BgL_arg2660z00_1958;

							BgL_arg2659z00_1957 = BGL_U8VREF(BgL_az00_1895, ((long) 1));
							{	/* Unsafe/aes.scm 555 */
								unsigned char BgL_arg2661z00_1959;

								long BgL_arg2663z00_1960;

								BgL_arg2661z00_1959 = BGL_U8VREF(BgL_bz00_1896, ((long) 2));
								{	/* Unsafe/aes.scm 556 */
									unsigned char BgL_arg2664z00_1961;

									unsigned char BgL_arg2665z00_1962;

									BgL_arg2664z00_1961 = BGL_U8VREF(BgL_az00_1895, ((long) 3));
									BgL_arg2665z00_1962 = BGL_U8VREF(BgL_bz00_1896, ((long) 3));
									BgL_arg2663z00_1960 =
										(
										(long) (BgL_arg2664z00_1961) ^
										(long) (BgL_arg2665z00_1962));
								}
								BgL_arg2660z00_1958 =
									((long) (BgL_arg2661z00_1959) ^ BgL_arg2663z00_1960);
							}
							BgL_arg2658z00_1956 =
								((long) (BgL_arg2659z00_1957) ^ BgL_arg2660z00_1958);
						}
						BgL_arg2656z00_1954 =
							((long) (BgL_arg2657z00_1955) ^ BgL_arg2658z00_1956);
					}
					{	/* Unsafe/aes.scm 553 */
						int BgL_iz00_4260;

						int BgL_jz00_4261;

						unsigned long BgL_vz00_4262;

						BgL_iz00_4260 = (int) (((long) 2));
						BgL_jz00_4261 = (int) (((long) 3));
						BgL_vz00_4262 = (unsigned long) (BgL_arg2656z00_1954);
						{	/* Unsafe/aes.scm 553 */
							obj_t BgL_arg2265z00_4263;

							BgL_arg2265z00_4263 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4260);
							{	/* Unsafe/aes.scm 553 */
								unsigned char BgL_auxz00_7804;

								long BgL_auxz00_7802;

								BgL_auxz00_7804 = (unsigned char) (BgL_vz00_4262);
								BgL_auxz00_7802 = (long) (BgL_jz00_4261);
								BGL_U8VSET(BgL_arg2265z00_4263, BgL_auxz00_7802,
									BgL_auxz00_7804);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 558 */
					long BgL_arg2667z00_1964;

					{	/* Unsafe/aes.scm 558 */
						unsigned char BgL_arg2668z00_1965;

						long BgL_arg2669z00_1966;

						BgL_arg2668z00_1965 = BGL_U8VREF(BgL_az00_1895, ((long) 0));
						{	/* Unsafe/aes.scm 559 */
							unsigned char BgL_arg2670z00_1967;

							long BgL_arg2671z00_1968;

							BgL_arg2670z00_1967 = BGL_U8VREF(BgL_bz00_1896, ((long) 0));
							{	/* Unsafe/aes.scm 560 */
								unsigned char BgL_arg2672z00_1969;

								long BgL_arg2673z00_1970;

								BgL_arg2672z00_1969 = BGL_U8VREF(BgL_az00_1895, ((long) 1));
								{	/* Unsafe/aes.scm 561 */
									unsigned char BgL_arg2674z00_1971;

									unsigned char BgL_arg2675z00_1972;

									BgL_arg2674z00_1971 = BGL_U8VREF(BgL_az00_1895, ((long) 2));
									BgL_arg2675z00_1972 = BGL_U8VREF(BgL_bz00_1896, ((long) 3));
									BgL_arg2673z00_1970 =
										(
										(long) (BgL_arg2674z00_1971) ^
										(long) (BgL_arg2675z00_1972));
								}
								BgL_arg2671z00_1968 =
									((long) (BgL_arg2672z00_1969) ^ BgL_arg2673z00_1970);
							}
							BgL_arg2669z00_1966 =
								((long) (BgL_arg2670z00_1967) ^ BgL_arg2671z00_1968);
						}
						BgL_arg2667z00_1964 =
							((long) (BgL_arg2668z00_1965) ^ BgL_arg2669z00_1966);
					}
					{	/* Unsafe/aes.scm 558 */
						int BgL_iz00_4275;

						int BgL_jz00_4276;

						unsigned long BgL_vz00_4277;

						BgL_iz00_4275 = (int) (((long) 3));
						BgL_jz00_4276 = (int) (((long) 3));
						BgL_vz00_4277 = (unsigned long) (BgL_arg2667z00_1964);
						{	/* Unsafe/aes.scm 558 */
							obj_t BgL_arg2265z00_4278;

							BgL_arg2265z00_4278 = VECTOR_REF(BgL_sz00_86, BgL_iz00_4275);
							{	/* Unsafe/aes.scm 558 */
								unsigned char BgL_auxz00_7827;

								long BgL_auxz00_7825;

								BgL_auxz00_7827 = (unsigned char) (BgL_vz00_4277);
								BgL_auxz00_7825 = (long) (BgL_jz00_4276);
								BGL_U8VSET(BgL_arg2265z00_4278, BgL_auxz00_7825,
									BgL_auxz00_7827);
							}
							return BUNSPEC;
						}
					}
				}
			}
		}
	}



/* addroundkey! */
	bool_t BGl_addroundkeyz12z12zz__aesz00(obj_t BgL_statez00_88,
		obj_t BgL_wz00_89, long BgL_rndz00_90, long BgL_nbz00_91)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 569 */
			{
				long BgL_cz00_1979;

				BgL_cz00_1979 = ((long) 0);
			BgL_zc3anonymousza32676ze3z83_1980:
				if ((BgL_cz00_1979 < BgL_nbz00_91))
					{	/* Unsafe/aes.scm 571 */
						{	/* Unsafe/aes.scm 572 */
							long BgL_vz00_1982;

							{	/* Unsafe/aes.scm 572 */
								unsigned long BgL_arg2678z00_1983;

								unsigned long BgL_arg2679z00_1984;

								{	/* Unsafe/aes.scm 572 */
									unsigned long BgL_res3315z00_4289;

									{	/* Unsafe/aes.scm 572 */
										int BgL_iz00_4284;

										int BgL_jz00_4285;

										BgL_iz00_4284 = (int) (((long) 0));
										BgL_jz00_4285 = (int) (BgL_cz00_1979);
										{	/* Unsafe/aes.scm 572 */
											obj_t BgL_arg2264z00_4286;

											BgL_arg2264z00_4286 =
												VECTOR_REF(BgL_statez00_88, BgL_iz00_4284);
											{	/* Unsafe/aes.scm 572 */
												unsigned char BgL_auxz00_7835;

												{	/* Unsafe/aes.scm 572 */
													long BgL_auxz00_7836;

													BgL_auxz00_7836 = (long) (BgL_jz00_4285);
													BgL_auxz00_7835 =
														BGL_U8VREF(BgL_arg2264z00_4286, BgL_auxz00_7836);
												}
												BgL_res3315z00_4289 = (unsigned long) (BgL_auxz00_7835);
									}}}
									BgL_arg2678z00_1983 = BgL_res3315z00_4289;
								}
								{	/* Unsafe/aes.scm 573 */
									long BgL_arg2680z00_1985;

									BgL_arg2680z00_1985 =
										((BgL_rndz00_90 * ((long) 4)) + BgL_cz00_1979);
									{	/* Unsafe/aes.scm 573 */
										unsigned long BgL_res3316z00_4300;

										{	/* Unsafe/aes.scm 573 */
											int BgL_iz00_4295;

											int BgL_jz00_4296;

											BgL_iz00_4295 = (int) (BgL_arg2680z00_1985);
											BgL_jz00_4296 = (int) (((long) 0));
											{	/* Unsafe/aes.scm 573 */
												obj_t BgL_arg2264z00_4297;

												BgL_arg2264z00_4297 =
													VECTOR_REF(BgL_wz00_89, BgL_iz00_4295);
												{	/* Unsafe/aes.scm 573 */
													unsigned char BgL_auxz00_7845;

													{	/* Unsafe/aes.scm 573 */
														long BgL_auxz00_7846;

														BgL_auxz00_7846 = (long) (BgL_jz00_4296);
														BgL_auxz00_7845 =
															BGL_U8VREF(BgL_arg2264z00_4297, BgL_auxz00_7846);
													}
													BgL_res3316z00_4300 =
														(unsigned long) (BgL_auxz00_7845);
										}}}
										BgL_arg2679z00_1984 = BgL_res3316z00_4300;
								}}
								BgL_vz00_1982 =
									((long) (BgL_arg2678z00_1983) ^ (long) (BgL_arg2679z00_1984));
							}
							{	/* Unsafe/aes.scm 574 */
								int BgL_iz00_4304;

								int BgL_jz00_4305;

								unsigned long BgL_vz00_4306;

								BgL_iz00_4304 = (int) (((long) 0));
								BgL_jz00_4305 = (int) (BgL_cz00_1979);
								BgL_vz00_4306 = (unsigned long) (BgL_vz00_1982);
								{	/* Unsafe/aes.scm 574 */
									obj_t BgL_arg2265z00_4307;

									BgL_arg2265z00_4307 =
										VECTOR_REF(BgL_statez00_88, BgL_iz00_4304);
									{	/* Unsafe/aes.scm 574 */
										unsigned char BgL_auxz00_7859;

										long BgL_auxz00_7857;

										BgL_auxz00_7859 = (unsigned char) (BgL_vz00_4306);
										BgL_auxz00_7857 = (long) (BgL_jz00_4305);
										BGL_U8VSET(BgL_arg2265z00_4307, BgL_auxz00_7857,
											BgL_auxz00_7859);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_7862;

							BgL_cz00_7862 = (BgL_cz00_1979 + ((long) 1));
							BgL_cz00_1979 = BgL_cz00_7862;
							goto BgL_zc3anonymousza32676ze3z83_1980;
						}
					}
				else
					{	/* Unsafe/aes.scm 571 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_1991;

				BgL_cz00_1991 = ((long) 0);
			BgL_zc3anonymousza32683ze3z83_1992:
				if ((BgL_cz00_1991 < BgL_nbz00_91))
					{	/* Unsafe/aes.scm 571 */
						{	/* Unsafe/aes.scm 572 */
							long BgL_vz00_1994;

							{	/* Unsafe/aes.scm 572 */
								unsigned long BgL_arg2685z00_1995;

								unsigned long BgL_arg2686z00_1996;

								{	/* Unsafe/aes.scm 572 */
									unsigned long BgL_res3317z00_4320;

									{	/* Unsafe/aes.scm 572 */
										int BgL_iz00_4315;

										int BgL_jz00_4316;

										BgL_iz00_4315 = (int) (((long) 1));
										BgL_jz00_4316 = (int) (BgL_cz00_1991);
										{	/* Unsafe/aes.scm 572 */
											obj_t BgL_arg2264z00_4317;

											BgL_arg2264z00_4317 =
												VECTOR_REF(BgL_statez00_88, BgL_iz00_4315);
											{	/* Unsafe/aes.scm 572 */
												unsigned char BgL_auxz00_7869;

												{	/* Unsafe/aes.scm 572 */
													long BgL_auxz00_7870;

													BgL_auxz00_7870 = (long) (BgL_jz00_4316);
													BgL_auxz00_7869 =
														BGL_U8VREF(BgL_arg2264z00_4317, BgL_auxz00_7870);
												}
												BgL_res3317z00_4320 = (unsigned long) (BgL_auxz00_7869);
									}}}
									BgL_arg2685z00_1995 = BgL_res3317z00_4320;
								}
								{	/* Unsafe/aes.scm 573 */
									long BgL_arg2687z00_1997;

									BgL_arg2687z00_1997 =
										((BgL_rndz00_90 * ((long) 4)) + BgL_cz00_1991);
									{	/* Unsafe/aes.scm 573 */
										unsigned long BgL_res3318z00_4331;

										{	/* Unsafe/aes.scm 573 */
											int BgL_iz00_4326;

											int BgL_jz00_4327;

											BgL_iz00_4326 = (int) (BgL_arg2687z00_1997);
											BgL_jz00_4327 = (int) (((long) 1));
											{	/* Unsafe/aes.scm 573 */
												obj_t BgL_arg2264z00_4328;

												BgL_arg2264z00_4328 =
													VECTOR_REF(BgL_wz00_89, BgL_iz00_4326);
												{	/* Unsafe/aes.scm 573 */
													unsigned char BgL_auxz00_7879;

													{	/* Unsafe/aes.scm 573 */
														long BgL_auxz00_7880;

														BgL_auxz00_7880 = (long) (BgL_jz00_4327);
														BgL_auxz00_7879 =
															BGL_U8VREF(BgL_arg2264z00_4328, BgL_auxz00_7880);
													}
													BgL_res3318z00_4331 =
														(unsigned long) (BgL_auxz00_7879);
										}}}
										BgL_arg2686z00_1996 = BgL_res3318z00_4331;
								}}
								BgL_vz00_1994 =
									((long) (BgL_arg2685z00_1995) ^ (long) (BgL_arg2686z00_1996));
							}
							{	/* Unsafe/aes.scm 574 */
								int BgL_iz00_4335;

								int BgL_jz00_4336;

								unsigned long BgL_vz00_4337;

								BgL_iz00_4335 = (int) (((long) 1));
								BgL_jz00_4336 = (int) (BgL_cz00_1991);
								BgL_vz00_4337 = (unsigned long) (BgL_vz00_1994);
								{	/* Unsafe/aes.scm 574 */
									obj_t BgL_arg2265z00_4338;

									BgL_arg2265z00_4338 =
										VECTOR_REF(BgL_statez00_88, BgL_iz00_4335);
									{	/* Unsafe/aes.scm 574 */
										unsigned char BgL_auxz00_7893;

										long BgL_auxz00_7891;

										BgL_auxz00_7893 = (unsigned char) (BgL_vz00_4337);
										BgL_auxz00_7891 = (long) (BgL_jz00_4336);
										BGL_U8VSET(BgL_arg2265z00_4338, BgL_auxz00_7891,
											BgL_auxz00_7893);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_7896;

							BgL_cz00_7896 = (BgL_cz00_1991 + ((long) 1));
							BgL_cz00_1991 = BgL_cz00_7896;
							goto BgL_zc3anonymousza32683ze3z83_1992;
						}
					}
				else
					{	/* Unsafe/aes.scm 571 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_2003;

				BgL_cz00_2003 = ((long) 0);
			BgL_zc3anonymousza32690ze3z83_2004:
				if ((BgL_cz00_2003 < BgL_nbz00_91))
					{	/* Unsafe/aes.scm 571 */
						{	/* Unsafe/aes.scm 572 */
							long BgL_vz00_2006;

							{	/* Unsafe/aes.scm 572 */
								unsigned long BgL_arg2692z00_2007;

								unsigned long BgL_arg2693z00_2008;

								{	/* Unsafe/aes.scm 572 */
									unsigned long BgL_res3319z00_4351;

									{	/* Unsafe/aes.scm 572 */
										int BgL_iz00_4346;

										int BgL_jz00_4347;

										BgL_iz00_4346 = (int) (((long) 2));
										BgL_jz00_4347 = (int) (BgL_cz00_2003);
										{	/* Unsafe/aes.scm 572 */
											obj_t BgL_arg2264z00_4348;

											BgL_arg2264z00_4348 =
												VECTOR_REF(BgL_statez00_88, BgL_iz00_4346);
											{	/* Unsafe/aes.scm 572 */
												unsigned char BgL_auxz00_7903;

												{	/* Unsafe/aes.scm 572 */
													long BgL_auxz00_7904;

													BgL_auxz00_7904 = (long) (BgL_jz00_4347);
													BgL_auxz00_7903 =
														BGL_U8VREF(BgL_arg2264z00_4348, BgL_auxz00_7904);
												}
												BgL_res3319z00_4351 = (unsigned long) (BgL_auxz00_7903);
									}}}
									BgL_arg2692z00_2007 = BgL_res3319z00_4351;
								}
								{	/* Unsafe/aes.scm 573 */
									long BgL_arg2694z00_2009;

									BgL_arg2694z00_2009 =
										((BgL_rndz00_90 * ((long) 4)) + BgL_cz00_2003);
									{	/* Unsafe/aes.scm 573 */
										unsigned long BgL_res3320z00_4362;

										{	/* Unsafe/aes.scm 573 */
											int BgL_iz00_4357;

											int BgL_jz00_4358;

											BgL_iz00_4357 = (int) (BgL_arg2694z00_2009);
											BgL_jz00_4358 = (int) (((long) 2));
											{	/* Unsafe/aes.scm 573 */
												obj_t BgL_arg2264z00_4359;

												BgL_arg2264z00_4359 =
													VECTOR_REF(BgL_wz00_89, BgL_iz00_4357);
												{	/* Unsafe/aes.scm 573 */
													unsigned char BgL_auxz00_7913;

													{	/* Unsafe/aes.scm 573 */
														long BgL_auxz00_7914;

														BgL_auxz00_7914 = (long) (BgL_jz00_4358);
														BgL_auxz00_7913 =
															BGL_U8VREF(BgL_arg2264z00_4359, BgL_auxz00_7914);
													}
													BgL_res3320z00_4362 =
														(unsigned long) (BgL_auxz00_7913);
										}}}
										BgL_arg2693z00_2008 = BgL_res3320z00_4362;
								}}
								BgL_vz00_2006 =
									((long) (BgL_arg2692z00_2007) ^ (long) (BgL_arg2693z00_2008));
							}
							{	/* Unsafe/aes.scm 574 */
								int BgL_iz00_4366;

								int BgL_jz00_4367;

								unsigned long BgL_vz00_4368;

								BgL_iz00_4366 = (int) (((long) 2));
								BgL_jz00_4367 = (int) (BgL_cz00_2003);
								BgL_vz00_4368 = (unsigned long) (BgL_vz00_2006);
								{	/* Unsafe/aes.scm 574 */
									obj_t BgL_arg2265z00_4369;

									BgL_arg2265z00_4369 =
										VECTOR_REF(BgL_statez00_88, BgL_iz00_4366);
									{	/* Unsafe/aes.scm 574 */
										unsigned char BgL_auxz00_7927;

										long BgL_auxz00_7925;

										BgL_auxz00_7927 = (unsigned char) (BgL_vz00_4368);
										BgL_auxz00_7925 = (long) (BgL_jz00_4367);
										BGL_U8VSET(BgL_arg2265z00_4369, BgL_auxz00_7925,
											BgL_auxz00_7927);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_7930;

							BgL_cz00_7930 = (BgL_cz00_2003 + ((long) 1));
							BgL_cz00_2003 = BgL_cz00_7930;
							goto BgL_zc3anonymousza32690ze3z83_2004;
						}
					}
				else
					{	/* Unsafe/aes.scm 571 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_2015;

				BgL_cz00_2015 = ((long) 0);
			BgL_zc3anonymousza32697ze3z83_2016:
				if ((BgL_cz00_2015 < BgL_nbz00_91))
					{	/* Unsafe/aes.scm 571 */
						{	/* Unsafe/aes.scm 572 */
							long BgL_vz00_2018;

							{	/* Unsafe/aes.scm 572 */
								unsigned long BgL_arg2699z00_2019;

								unsigned long BgL_arg2700z00_2020;

								{	/* Unsafe/aes.scm 572 */
									unsigned long BgL_res3321z00_4382;

									{	/* Unsafe/aes.scm 572 */
										int BgL_iz00_4377;

										int BgL_jz00_4378;

										BgL_iz00_4377 = (int) (((long) 3));
										BgL_jz00_4378 = (int) (BgL_cz00_2015);
										{	/* Unsafe/aes.scm 572 */
											obj_t BgL_arg2264z00_4379;

											BgL_arg2264z00_4379 =
												VECTOR_REF(BgL_statez00_88, BgL_iz00_4377);
											{	/* Unsafe/aes.scm 572 */
												unsigned char BgL_auxz00_7937;

												{	/* Unsafe/aes.scm 572 */
													long BgL_auxz00_7938;

													BgL_auxz00_7938 = (long) (BgL_jz00_4378);
													BgL_auxz00_7937 =
														BGL_U8VREF(BgL_arg2264z00_4379, BgL_auxz00_7938);
												}
												BgL_res3321z00_4382 = (unsigned long) (BgL_auxz00_7937);
									}}}
									BgL_arg2699z00_2019 = BgL_res3321z00_4382;
								}
								{	/* Unsafe/aes.scm 573 */
									long BgL_arg2701z00_2021;

									BgL_arg2701z00_2021 =
										((BgL_rndz00_90 * ((long) 4)) + BgL_cz00_2015);
									{	/* Unsafe/aes.scm 573 */
										unsigned long BgL_res3322z00_4393;

										{	/* Unsafe/aes.scm 573 */
											int BgL_iz00_4388;

											int BgL_jz00_4389;

											BgL_iz00_4388 = (int) (BgL_arg2701z00_2021);
											BgL_jz00_4389 = (int) (((long) 3));
											{	/* Unsafe/aes.scm 573 */
												obj_t BgL_arg2264z00_4390;

												BgL_arg2264z00_4390 =
													VECTOR_REF(BgL_wz00_89, BgL_iz00_4388);
												{	/* Unsafe/aes.scm 573 */
													unsigned char BgL_auxz00_7947;

													{	/* Unsafe/aes.scm 573 */
														long BgL_auxz00_7948;

														BgL_auxz00_7948 = (long) (BgL_jz00_4389);
														BgL_auxz00_7947 =
															BGL_U8VREF(BgL_arg2264z00_4390, BgL_auxz00_7948);
													}
													BgL_res3322z00_4393 =
														(unsigned long) (BgL_auxz00_7947);
										}}}
										BgL_arg2700z00_2020 = BgL_res3322z00_4393;
								}}
								BgL_vz00_2018 =
									((long) (BgL_arg2699z00_2019) ^ (long) (BgL_arg2700z00_2020));
							}
							{	/* Unsafe/aes.scm 574 */
								int BgL_iz00_4397;

								int BgL_jz00_4398;

								unsigned long BgL_vz00_4399;

								BgL_iz00_4397 = (int) (((long) 3));
								BgL_jz00_4398 = (int) (BgL_cz00_2015);
								BgL_vz00_4399 = (unsigned long) (BgL_vz00_2018);
								{	/* Unsafe/aes.scm 574 */
									obj_t BgL_arg2265z00_4400;

									BgL_arg2265z00_4400 =
										VECTOR_REF(BgL_statez00_88, BgL_iz00_4397);
									{	/* Unsafe/aes.scm 574 */
										unsigned char BgL_auxz00_7961;

										long BgL_auxz00_7959;

										BgL_auxz00_7961 = (unsigned char) (BgL_vz00_4399);
										BgL_auxz00_7959 = (long) (BgL_jz00_4398);
										BGL_U8VSET(BgL_arg2265z00_4400, BgL_auxz00_7959,
											BgL_auxz00_7961);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_7964;

							BgL_cz00_7964 = (BgL_cz00_2015 + ((long) 1));
							BgL_cz00_2015 = BgL_cz00_7964;
							goto BgL_zc3anonymousza32697ze3z83_2016;
						}
					}
				else
					{	/* Unsafe/aes.scm 571 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* subword! */
	obj_t BGl_subwordz12z12zz__aesz00(obj_t BgL_wz00_92)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 581 */
			{	/* Unsafe/aes.scm 583 */
				unsigned char BgL_arg2704z00_2026;

				{	/* Unsafe/aes.scm 583 */
					unsigned char BgL_arg2705z00_2027;

					BgL_arg2705z00_2027 = BGL_U8VREF(BgL_wz00_92, ((long) 0));
					{	/* Unsafe/aes.scm 583 */
						long BgL_auxz00_7967;

						BgL_auxz00_7967 = (long) (BgL_arg2705z00_2027);
						BgL_arg2704z00_2026 =
							BGL_U8VREF(BGl_Sboxz00zz__aesz00, BgL_auxz00_7967);
				}}
				BGL_U8VSET(BgL_wz00_92, ((long) 0), BgL_arg2704z00_2026);
				BUNSPEC;
			}
			{	/* Unsafe/aes.scm 583 */
				unsigned char BgL_arg2706z00_2029;

				{	/* Unsafe/aes.scm 583 */
					unsigned char BgL_arg2707z00_2030;

					BgL_arg2707z00_2030 = BGL_U8VREF(BgL_wz00_92, ((long) 1));
					{	/* Unsafe/aes.scm 583 */
						long BgL_auxz00_7972;

						BgL_auxz00_7972 = (long) (BgL_arg2707z00_2030);
						BgL_arg2706z00_2029 =
							BGL_U8VREF(BGl_Sboxz00zz__aesz00, BgL_auxz00_7972);
				}}
				BGL_U8VSET(BgL_wz00_92, ((long) 1), BgL_arg2706z00_2029);
				BUNSPEC;
			}
			{	/* Unsafe/aes.scm 583 */
				unsigned char BgL_arg2708z00_2032;

				{	/* Unsafe/aes.scm 583 */
					unsigned char BgL_arg2709z00_2033;

					BgL_arg2709z00_2033 = BGL_U8VREF(BgL_wz00_92, ((long) 2));
					{	/* Unsafe/aes.scm 583 */
						long BgL_auxz00_7977;

						BgL_auxz00_7977 = (long) (BgL_arg2709z00_2033);
						BgL_arg2708z00_2032 =
							BGL_U8VREF(BGl_Sboxz00zz__aesz00, BgL_auxz00_7977);
				}}
				BGL_U8VSET(BgL_wz00_92, ((long) 2), BgL_arg2708z00_2032);
				BUNSPEC;
			}
			{	/* Unsafe/aes.scm 583 */
				unsigned char BgL_arg2710z00_2035;

				{	/* Unsafe/aes.scm 583 */
					unsigned char BgL_arg2711z00_2036;

					BgL_arg2711z00_2036 = BGL_U8VREF(BgL_wz00_92, ((long) 3));
					{	/* Unsafe/aes.scm 583 */
						long BgL_auxz00_7982;

						BgL_auxz00_7982 = (long) (BgL_arg2711z00_2036);
						BgL_arg2710z00_2035 =
							BGL_U8VREF(BGl_Sboxz00zz__aesz00, BgL_auxz00_7982);
				}}
				BGL_U8VSET(BgL_wz00_92, ((long) 3), BgL_arg2710z00_2035);
				BUNSPEC;
			}
			return BgL_wz00_92;
		}
	}



/* rotword! */
	obj_t BGl_rotwordz12z12zz__aesz00(obj_t BgL_wz00_93)
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 591 */
			{	/* Unsafe/aes.scm 592 */
				unsigned char BgL_tmpz00_2037;

				BgL_tmpz00_2037 = BGL_U8VREF(BgL_wz00_93, ((long) 0));
				{
					long BgL_iz00_2039;

					BgL_iz00_2039 = ((long) 0);
				BgL_zc3anonymousza32712ze3z83_2040:
					if ((BgL_iz00_2039 < ((long) 3)))
						{	/* Unsafe/aes.scm 593 */
							{	/* Unsafe/aes.scm 594 */
								unsigned char BgL_arg2714z00_2042;

								{	/* Unsafe/aes.scm 594 */
									long BgL_auxz00_7989;

									BgL_auxz00_7989 = (BgL_iz00_2039 + ((long) 1));
									BgL_arg2714z00_2042 =
										BGL_U8VREF(BgL_wz00_93, BgL_auxz00_7989);
								}
								BGL_U8VSET(BgL_wz00_93, BgL_iz00_2039, BgL_arg2714z00_2042);
								BUNSPEC;
							}
							{
								long BgL_iz00_7993;

								BgL_iz00_7993 = (BgL_iz00_2039 + ((long) 1));
								BgL_iz00_2039 = BgL_iz00_7993;
								goto BgL_zc3anonymousza32712ze3z83_2040;
							}
						}
					else
						{	/* Unsafe/aes.scm 593 */
							((bool_t) 0);
						}
				}
				BGL_U8VSET(BgL_wz00_93, ((long) 3), BgL_tmpz00_2037);
				BUNSPEC;
				return BgL_wz00_93;
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__aesz00()
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 20 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__aesz00()
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 20 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__aesz00()
	{
		AN_OBJECT;
		{	/* Unsafe/aes.scm 20 */
			BGl_modulezd2initializa7ationz75zz__sha1z00(((long) 379172419),
				BSTRING_TO_STRING(BGl_string3479z00zz__aesz00));
			BGl_modulezd2initializa7ationz75zz__datez00(((long) -49986001),
				BSTRING_TO_STRING(BGl_string3479z00zz__aesz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3479z00zz__aesz00));
		}
	}

#ifdef __cplusplus
}
#endif
