/*===========================================================================*/
/*   (Llib/struct.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/struct.scm -indent -o objs/obj_s/Llib/struct.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__recordzf3zf3zz__structurez00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2structzd2zz__structurez00(obj_t, int, obj_t);
extern long bgl_list_length(obj_t);
BGL_EXPORTED_DECL bool_t BGl_recordzf3zf3zz__structurez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2setz12zc0zz__structurez00(obj_t, int, obj_t);
static obj_t BGl_cnstzd2initzd2zz__structurez00();
static obj_t BGl__structzd2lengthzd2zz__structurez00(obj_t, obj_t);
static obj_t BGl__structzf3zf3zz__structurez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2keyzd2setz12z12zz__structurez00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL bool_t BGl_structzf3zf3zz__structurez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3structz31zz__structurez00(obj_t);
static obj_t BGl__makezd2structzd2zz__structurez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__structurez00 = BUNSPEC;
static obj_t BGl__structzd2keyzd2zz__structurez00(obj_t, obj_t);
static obj_t BGl__structzd2setz12zc0zz__structurez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__structurez00();
extern obj_t make_struct(obj_t, int, obj_t);
static obj_t BGl__structzd2refzd2zz__structurez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2updatez12zc0zz__structurez00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__structzd2ze3listz31zz__structurez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2keyzd2zz__structurez00(obj_t);
static obj_t BGl_symbol1507z00zz__structurez00 = BUNSPEC;
static obj_t BGl__structzd2updatez12zc0zz__structurez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2refzd2zz__structurez00(obj_t, int);
BGL_EXPORTED_DECL int BGl_structzd2lengthzd2zz__structurez00(obj_t);
static obj_t BGl__listzd2ze3structz31zz__structurez00(obj_t, obj_t);
static obj_t BGl__structzd2keyzd2setz12z12zz__structurez00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2ze3listzd2envze3zz__structurez00, BgL_bgl__structza7d2za7e3lis1513z00, BGl__structzd2ze3listz31zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3structzd2envze3zz__structurez00, BgL_bgl__listza7d2za7e3struc1514z00, BGl__listzd2ze3structz31zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzf3zd2envz21zz__structurez00, BgL_bgl__structza7f3za7f3za7za7_1515z00, BGl__structzf3zf3zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_recordzf3zd2envz21zz__structurez00, BgL_bgl__recordza7f3za7f3za7za7_1516z00, BGl__recordzf3zf3zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1488z00zz__structurez00, BgL_bgl_string1488za700za7za7_1517za7, "/tmp/bigloo/runtime/Llib/struct.scm", 35 );
DEFINE_STRING( BGl_string1500z00zz__structurez00, BgL_bgl_string1500za700za7za7_1518za7, "Incompatible structures", 23 );
DEFINE_STRING( BGl_string1490z00zz__structurez00, BgL_bgl_string1490za700za7za7_1519za7, "symbol", 6 );
DEFINE_STRING( BGl_string1489z00zz__structurez00, BgL_bgl_string1489za700za7za7_1520za7, "_make-struct", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2refzd2envz00zz__structurez00, BgL_bgl__structza7d2refza7d21521z00, BGl__structzd2refzd2zz__structurez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1501z00zz__structurez00, BgL_bgl_string1501za700za7za7_1522za7, "_struct-update!", 15 );
DEFINE_STRING( BGl_string1491z00zz__structurez00, BgL_bgl_string1491za700za7za7_1523za7, "int", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2structzd2envz00zz__structurez00, BgL_bgl__makeza7d2structza7d1524z00, BGl__makezd2structzd2zz__structurez00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string1502z00zz__structurez00, BgL_bgl_string1502za700za7za7_1525za7, "loop", 4 );
DEFINE_STRING( BGl_string1492z00zz__structurez00, BgL_bgl_string1492za700za7za7_1526za7, "struct-key", 10 );
DEFINE_STRING( BGl_string1503z00zz__structurez00, BgL_bgl_string1503za700za7za7_1527za7, "_struct->list", 13 );
DEFINE_STRING( BGl_string1493z00zz__structurez00, BgL_bgl_string1493za700za7za7_1528za7, "_struct-key", 11 );
DEFINE_STRING( BGl_string1504z00zz__structurez00, BgL_bgl_string1504za700za7za7_1529za7, "list->struct", 12 );
DEFINE_STRING( BGl_string1494z00zz__structurez00, BgL_bgl_string1494za700za7za7_1530za7, "struct", 6 );
DEFINE_STRING( BGl_string1505z00zz__structurez00, BgL_bgl_string1505za700za7za7_1531za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1495z00zz__structurez00, BgL_bgl_string1495za700za7za7_1532za7, "_struct-key-set!", 16 );
DEFINE_STRING( BGl_string1506z00zz__structurez00, BgL_bgl_string1506za700za7za7_1533za7, "pair", 4 );
DEFINE_STRING( BGl_string1496z00zz__structurez00, BgL_bgl_string1496za700za7za7_1534za7, "_struct-length", 14 );
DEFINE_STRING( BGl_string1497z00zz__structurez00, BgL_bgl_string1497za700za7za7_1535za7, "_struct-ref", 11 );
DEFINE_STRING( BGl_string1508z00zz__structurez00, BgL_bgl_string1508za700za7za7_1536za7, "Illegal struct key", 18 );
DEFINE_STRING( BGl_string1498z00zz__structurez00, BgL_bgl_string1498za700za7za7_1537za7, "_struct-set!", 12 );
DEFINE_STRING( BGl_string1510z00zz__structurez00, BgL_bgl_string1510za700za7za7_1538za7, "__structure", 11 );
DEFINE_STRING( BGl_string1509z00zz__structurez00, BgL_bgl_string1509za700za7za7_1539za7, "_list->struct", 13 );
DEFINE_STRING( BGl_string1499z00zz__structurez00, BgL_bgl_string1499za700za7za7_1540za7, "struct-update!", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2lengthzd2envz00zz__structurez00, BgL_bgl__structza7d2length1541za7, BGl__structzd2lengthzd2zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2updatez12zd2envz12zz__structurez00, BgL_bgl__structza7d2update1542za7, BGl__structzd2updatez12zc0zz__structurez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2keyzd2setz12zd2envzc0zz__structurez00, BgL_bgl__structza7d2keyza7d21543z00, BGl__structzd2keyzd2setz12z12zz__structurez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2keyzd2envz00zz__structurez00, BgL_bgl__structza7d2keyza7d21544z00, BGl__structzd2keyzd2zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2setz12zd2envz12zz__structurez00, BgL_bgl__structza7d2setza7121545z00, BGl__structzd2setz12zc0zz__structurez00, 0L, BUNSPEC, 3 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long BgL_checksumz00_897, char * BgL_fromz00_898)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__structurez00))
{ 
BGl_requirezd2initializa7ationz75zz__structurez00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__structurez00(); 
BGl_importedzd2moduleszd2initz00zz__structurez00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__structurez00()
{ AN_OBJECT;
{ /* Llib/struct.scm 18 */
return ( 
BGl_symbol1507z00zz__structurez00 = 
bstring_to_symbol(BGl_string1504z00zz__structurez00), BUNSPEC) ;} 
}



/* make-struct */
BGL_EXPORTED_DEF obj_t BGl_makezd2structzd2zz__structurez00(obj_t BgL_keyz00_1, int BgL_lenz00_2, obj_t BgL_initz00_3)
{ AN_OBJECT;
{ /* Llib/struct.scm 122 */
return 
make_struct(BgL_keyz00_1, BgL_lenz00_2, BgL_initz00_3);} 
}



/* _make-struct */
obj_t BGl__makezd2structzd2zz__structurez00(obj_t BgL_envz00_800, obj_t BgL_keyz00_801, obj_t BgL_lenz00_802, obj_t BgL_initz00_803)
{ AN_OBJECT;
{ /* Llib/struct.scm 122 */
{ /* Llib/struct.scm 123 */
obj_t BgL_keyz00_875;int BgL_lenz00_876;
if(
SYMBOLP(BgL_keyz00_801))
{ /* Llib/struct.scm 123 */
BgL_keyz00_875 = BgL_keyz00_801; }  else 
{ 
obj_t BgL_auxz00_908;
BgL_auxz00_908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)5120)), BGl_string1489z00zz__structurez00, BGl_string1490z00zz__structurez00, BgL_keyz00_801); 
FAILURE(BgL_auxz00_908,BFALSE,BFALSE);} 
{ /* Llib/struct.scm 123 */
obj_t BgL_auxz00_912;
if(
INTEGERP(BgL_lenz00_802))
{ /* Llib/struct.scm 123 */
BgL_auxz00_912 = BgL_lenz00_802
; }  else 
{ 
obj_t BgL_auxz00_915;
BgL_auxz00_915 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)5120)), BGl_string1489z00zz__structurez00, BGl_string1491z00zz__structurez00, BgL_lenz00_802); 
FAILURE(BgL_auxz00_915,BFALSE,BFALSE);} 
BgL_lenz00_876 = 
CINT(BgL_auxz00_912); } 
return 
make_struct(BgL_keyz00_875, BgL_lenz00_876, BgL_initz00_803);} } 
}



/* struct? */
BGL_EXPORTED_DEF bool_t BGl_structzf3zf3zz__structurez00(obj_t BgL_oz00_4)
{ AN_OBJECT;
{ /* Llib/struct.scm 128 */
return 
STRUCTP(BgL_oz00_4);} 
}



/* _struct? */
obj_t BGl__structzf3zf3zz__structurez00(obj_t BgL_envz00_804, obj_t BgL_oz00_805)
{ AN_OBJECT;
{ /* Llib/struct.scm 128 */
return 
BBOOL(
STRUCTP(BgL_oz00_805));} 
}



/* record? */
BGL_EXPORTED_DEF bool_t BGl_recordzf3zf3zz__structurez00(obj_t BgL_oz00_5)
{ AN_OBJECT;
{ /* Llib/struct.scm 134 */
return 
STRUCTP(BgL_oz00_5);} 
}



/* _record? */
obj_t BGl__recordzf3zf3zz__structurez00(obj_t BgL_envz00_806, obj_t BgL_oz00_807)
{ AN_OBJECT;
{ /* Llib/struct.scm 134 */
return 
BBOOL(
STRUCTP(BgL_oz00_807));} 
}



/* struct-key */
BGL_EXPORTED_DEF obj_t BGl_structzd2keyzd2zz__structurez00(obj_t BgL_sz00_6)
{ AN_OBJECT;
{ /* Llib/struct.scm 140 */
{ /* Llib/struct.scm 141 */
obj_t BgL_aux1446z00_880;
BgL_aux1446z00_880 = 
STRUCT_KEY(BgL_sz00_6); 
if(
SYMBOLP(BgL_aux1446z00_880))
{ /* Llib/struct.scm 141 */
return BgL_aux1446z00_880;}  else 
{ 
obj_t BgL_auxz00_930;
BgL_auxz00_930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)5942)), BGl_string1492z00zz__structurez00, BGl_string1490z00zz__structurez00, BgL_aux1446z00_880); 
FAILURE(BgL_auxz00_930,BFALSE,BFALSE);} } } 
}



/* _struct-key */
obj_t BGl__structzd2keyzd2zz__structurez00(obj_t BgL_envz00_808, obj_t BgL_sz00_809)
{ AN_OBJECT;
{ /* Llib/struct.scm 140 */
{ /* Llib/struct.scm 141 */
obj_t BgL_res1511z00_883;
{ /* Llib/struct.scm 141 */
obj_t BgL_sz00_881;
if(
STRUCTP(BgL_sz00_809))
{ /* Llib/struct.scm 141 */
BgL_sz00_881 = BgL_sz00_809; }  else 
{ 
obj_t BgL_auxz00_936;
BgL_auxz00_936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)5942)), BGl_string1493z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_sz00_809); 
FAILURE(BgL_auxz00_936,BFALSE,BFALSE);} 
{ /* Llib/struct.scm 141 */
obj_t BgL_aux1446z00_882;
BgL_aux1446z00_882 = 
STRUCT_KEY(BgL_sz00_881); 
if(
SYMBOLP(BgL_aux1446z00_882))
{ /* Llib/struct.scm 141 */
BgL_res1511z00_883 = BgL_aux1446z00_882; }  else 
{ 
obj_t BgL_auxz00_943;
BgL_auxz00_943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)5942)), BGl_string1492z00zz__structurez00, BGl_string1490z00zz__structurez00, BgL_aux1446z00_882); 
FAILURE(BgL_auxz00_943,BFALSE,BFALSE);} } } 
return BgL_res1511z00_883;} } 
}



/* struct-key-set! */
BGL_EXPORTED_DEF obj_t BGl_structzd2keyzd2setz12z12zz__structurez00(obj_t BgL_sz00_7, obj_t BgL_kz00_8)
{ AN_OBJECT;
{ /* Llib/struct.scm 146 */
return 
STRUCT_KEY_SET(BgL_sz00_7, BgL_kz00_8);} 
}



/* _struct-key-set! */
obj_t BGl__structzd2keyzd2setz12z12zz__structurez00(obj_t BgL_envz00_810, obj_t BgL_sz00_811, obj_t BgL_kz00_812)
{ AN_OBJECT;
{ /* Llib/struct.scm 146 */
{ /* Llib/struct.scm 147 */
obj_t BgL_sz00_884;obj_t BgL_kz00_885;
if(
STRUCTP(BgL_sz00_811))
{ /* Llib/struct.scm 147 */
BgL_sz00_884 = BgL_sz00_811; }  else 
{ 
obj_t BgL_auxz00_950;
BgL_auxz00_950 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)6223)), BGl_string1495z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_sz00_811); 
FAILURE(BgL_auxz00_950,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_kz00_812))
{ /* Llib/struct.scm 147 */
BgL_kz00_885 = BgL_kz00_812; }  else 
{ 
obj_t BgL_auxz00_956;
BgL_auxz00_956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)6223)), BGl_string1495z00zz__structurez00, BGl_string1490z00zz__structurez00, BgL_kz00_812); 
FAILURE(BgL_auxz00_956,BFALSE,BFALSE);} 
return 
STRUCT_KEY_SET(BgL_sz00_884, BgL_kz00_885);} } 
}



/* struct-length */
BGL_EXPORTED_DEF int BGl_structzd2lengthzd2zz__structurez00(obj_t BgL_sz00_9)
{ AN_OBJECT;
{ /* Llib/struct.scm 152 */
return 
STRUCT_LENGTH(BgL_sz00_9);} 
}



/* _struct-length */
obj_t BGl__structzd2lengthzd2zz__structurez00(obj_t BgL_envz00_813, obj_t BgL_sz00_814)
{ AN_OBJECT;
{ /* Llib/struct.scm 152 */
{ /* Llib/struct.scm 153 */
int BgL_auxz00_962;
{ /* Llib/struct.scm 153 */
obj_t BgL_sz00_886;
if(
STRUCTP(BgL_sz00_814))
{ /* Llib/struct.scm 153 */
BgL_sz00_886 = BgL_sz00_814; }  else 
{ 
obj_t BgL_auxz00_965;
BgL_auxz00_965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)6508)), BGl_string1496z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_sz00_814); 
FAILURE(BgL_auxz00_965,BFALSE,BFALSE);} 
BgL_auxz00_962 = 
STRUCT_LENGTH(BgL_sz00_886); } 
return 
BINT(BgL_auxz00_962);} } 
}



/* struct-ref */
BGL_EXPORTED_DEF obj_t BGl_structzd2refzd2zz__structurez00(obj_t BgL_sz00_10, int BgL_kz00_11)
{ AN_OBJECT;
{ /* Llib/struct.scm 158 */
return 
STRUCT_REF(BgL_sz00_10, BgL_kz00_11);} 
}



/* _struct-ref */
obj_t BGl__structzd2refzd2zz__structurez00(obj_t BgL_envz00_815, obj_t BgL_sz00_816, obj_t BgL_kz00_817)
{ AN_OBJECT;
{ /* Llib/struct.scm 158 */
{ /* Llib/struct.scm 159 */
obj_t BgL_sz00_887;int BgL_kz00_888;
if(
STRUCTP(BgL_sz00_816))
{ /* Llib/struct.scm 159 */
BgL_sz00_887 = BgL_sz00_816; }  else 
{ 
obj_t BgL_auxz00_974;
BgL_auxz00_974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)6791)), BGl_string1497z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_sz00_816); 
FAILURE(BgL_auxz00_974,BFALSE,BFALSE);} 
{ /* Llib/struct.scm 159 */
obj_t BgL_auxz00_978;
if(
INTEGERP(BgL_kz00_817))
{ /* Llib/struct.scm 159 */
BgL_auxz00_978 = BgL_kz00_817
; }  else 
{ 
obj_t BgL_auxz00_981;
BgL_auxz00_981 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)6791)), BGl_string1497z00zz__structurez00, BGl_string1491z00zz__structurez00, BgL_kz00_817); 
FAILURE(BgL_auxz00_981,BFALSE,BFALSE);} 
BgL_kz00_888 = 
CINT(BgL_auxz00_978); } 
return 
STRUCT_REF(BgL_sz00_887, BgL_kz00_888);} } 
}



/* struct-set! */
BGL_EXPORTED_DEF obj_t BGl_structzd2setz12zc0zz__structurez00(obj_t BgL_sz00_12, int BgL_kz00_13, obj_t BgL_oz00_14)
{ AN_OBJECT;
{ /* Llib/struct.scm 164 */
return 
STRUCT_SET(BgL_sz00_12, BgL_kz00_13, BgL_oz00_14);} 
}



/* _struct-set! */
obj_t BGl__structzd2setz12zc0zz__structurez00(obj_t BgL_envz00_818, obj_t BgL_sz00_819, obj_t BgL_kz00_820, obj_t BgL_oz00_821)
{ AN_OBJECT;
{ /* Llib/struct.scm 164 */
{ /* Llib/struct.scm 165 */
obj_t BgL_sz00_889;int BgL_kz00_890;
if(
STRUCTP(BgL_sz00_819))
{ /* Llib/struct.scm 165 */
BgL_sz00_889 = BgL_sz00_819; }  else 
{ 
obj_t BgL_auxz00_990;
BgL_auxz00_990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)7073)), BGl_string1498z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_sz00_819); 
FAILURE(BgL_auxz00_990,BFALSE,BFALSE);} 
{ /* Llib/struct.scm 165 */
obj_t BgL_auxz00_994;
if(
INTEGERP(BgL_kz00_820))
{ /* Llib/struct.scm 165 */
BgL_auxz00_994 = BgL_kz00_820
; }  else 
{ 
obj_t BgL_auxz00_997;
BgL_auxz00_997 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)7073)), BGl_string1498z00zz__structurez00, BGl_string1491z00zz__structurez00, BgL_kz00_820); 
FAILURE(BgL_auxz00_997,BFALSE,BFALSE);} 
BgL_kz00_890 = 
CINT(BgL_auxz00_994); } 
return 
STRUCT_SET(BgL_sz00_889, BgL_kz00_890, BgL_oz00_821);} } 
}



/* struct-update! */
BGL_EXPORTED_DEF obj_t BGl_structzd2updatez12zc0zz__structurez00(obj_t BgL_dstz00_15, obj_t BgL_srcz00_16)
{ AN_OBJECT;
{ /* Llib/struct.scm 170 */
{ /* Llib/struct.scm 171 */
bool_t BgL_testz00_1003;
{ /* Llib/struct.scm 171 */
bool_t BgL_testz00_1004;
{ /* Llib/struct.scm 171 */
obj_t BgL_auxz00_1013;obj_t BgL_auxz00_1005;
{ /* Llib/struct.scm 171 */
obj_t BgL_res1435z00_662;
{ /* Llib/struct.scm 171 */
obj_t BgL_aux1466z00_853;
BgL_aux1466z00_853 = 
STRUCT_KEY(BgL_srcz00_16); 
if(
SYMBOLP(BgL_aux1466z00_853))
{ /* Llib/struct.scm 171 */
BgL_res1435z00_662 = BgL_aux1466z00_853; }  else 
{ 
obj_t BgL_auxz00_1017;
BgL_auxz00_1017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)7386)), BGl_string1499z00zz__structurez00, BGl_string1490z00zz__structurez00, BgL_aux1466z00_853); 
FAILURE(BgL_auxz00_1017,BFALSE,BFALSE);} } 
BgL_auxz00_1013 = BgL_res1435z00_662; } 
{ /* Llib/struct.scm 171 */
obj_t BgL_res1434z00_660;
{ /* Llib/struct.scm 171 */
obj_t BgL_aux1464z00_851;
BgL_aux1464z00_851 = 
STRUCT_KEY(BgL_dstz00_15); 
if(
SYMBOLP(BgL_aux1464z00_851))
{ /* Llib/struct.scm 171 */
BgL_res1434z00_660 = BgL_aux1464z00_851; }  else 
{ 
obj_t BgL_auxz00_1009;
BgL_auxz00_1009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)7369)), BGl_string1499z00zz__structurez00, BGl_string1490z00zz__structurez00, BgL_aux1464z00_851); 
FAILURE(BgL_auxz00_1009,BFALSE,BFALSE);} } 
BgL_auxz00_1005 = BgL_res1434z00_660; } 
BgL_testz00_1004 = 
(BgL_auxz00_1005==BgL_auxz00_1013); } 
if(BgL_testz00_1004)
{ /* Llib/struct.scm 171 */
BgL_testz00_1003 = 
(
(long)(
STRUCT_LENGTH(BgL_dstz00_15))==
(long)(
STRUCT_LENGTH(BgL_srcz00_16)))
; }  else 
{ /* Llib/struct.scm 171 */
BgL_testz00_1003 = ((bool_t)0)
; } } 
if(BgL_testz00_1003)
{ /* Llib/struct.scm 173 */
long BgL_g1094z00_417;
BgL_g1094z00_417 = 
(
(long)(
STRUCT_LENGTH(BgL_dstz00_15))-((long)1)); 
{ 
long BgL_iz00_419;
BgL_iz00_419 = BgL_g1094z00_417; 
BgL_zc3anonymousza31123ze3z83_420:
if(
(BgL_iz00_419==((long)-1)))
{ /* Llib/struct.scm 174 */
return BgL_dstz00_15;}  else 
{ /* Llib/struct.scm 174 */
{ /* Llib/struct.scm 177 */
obj_t BgL_auxz00_1034;int BgL_auxz00_1032;
BgL_auxz00_1034 = 
STRUCT_REF(BgL_srcz00_16, 
(int)(BgL_iz00_419)); 
BgL_auxz00_1032 = 
(int)(BgL_iz00_419); 
STRUCT_SET(BgL_dstz00_15, BgL_auxz00_1032, BgL_auxz00_1034); } 
{ 
long BgL_iz00_1038;
BgL_iz00_1038 = 
(BgL_iz00_419-((long)1)); 
BgL_iz00_419 = BgL_iz00_1038; 
goto BgL_zc3anonymousza31123ze3z83_420;} } } }  else 
{ /* Llib/struct.scm 179 */
obj_t BgL_arg1237z00_429;
{ /* Llib/struct.scm 179 */
obj_t BgL_list1238z00_430;
{ /* Llib/struct.scm 179 */
obj_t BgL_arg1239z00_431;
BgL_arg1239z00_431 = 
MAKE_PAIR(BgL_srcz00_16, BNIL); 
BgL_list1238z00_430 = 
MAKE_PAIR(BgL_dstz00_15, BgL_arg1239z00_431); } 
BgL_arg1237z00_429 = BgL_list1238z00_430; } 
return 
BGl_errorz00zz__errorz00(BGl_string1499z00zz__structurez00, BGl_string1500z00zz__structurez00, BgL_arg1237z00_429);} } } 
}



/* _struct-update! */
obj_t BGl__structzd2updatez12zc0zz__structurez00(obj_t BgL_envz00_822, obj_t BgL_dstz00_823, obj_t BgL_srcz00_824)
{ AN_OBJECT;
{ /* Llib/struct.scm 170 */
{ /* Llib/struct.scm 171 */
obj_t BgL_auxz00_1050;obj_t BgL_auxz00_1043;
if(
STRUCTP(BgL_srcz00_824))
{ /* Llib/struct.scm 171 */
BgL_auxz00_1050 = BgL_srcz00_824
; }  else 
{ 
obj_t BgL_auxz00_1053;
BgL_auxz00_1053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)7355)), BGl_string1501z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_srcz00_824); 
FAILURE(BgL_auxz00_1053,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_dstz00_823))
{ /* Llib/struct.scm 171 */
BgL_auxz00_1043 = BgL_dstz00_823
; }  else 
{ 
obj_t BgL_auxz00_1046;
BgL_auxz00_1046 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)7355)), BGl_string1501z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_dstz00_823); 
FAILURE(BgL_auxz00_1046,BFALSE,BFALSE);} 
return 
BGl_structzd2updatez12zc0zz__structurez00(BgL_auxz00_1043, BgL_auxz00_1050);} } 
}



/* struct->list */
BGL_EXPORTED_DEF obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t BgL_structz00_17)
{ AN_OBJECT;
{ /* Llib/struct.scm 184 */
{ /* Llib/struct.scm 185 */
long BgL_g1095z00_437;
BgL_g1095z00_437 = 
(
(long)(
STRUCT_LENGTH(BgL_structz00_17))-((long)1)); 
{ 
long BgL_iz00_440;obj_t BgL_rz00_441;
BgL_iz00_440 = BgL_g1095z00_437; 
BgL_rz00_441 = BNIL; 
BgL_zc3anonymousza31245ze3z83_442:
if(
(BgL_iz00_440==((long)-1)))
{ /* Llib/struct.scm 188 */
obj_t BgL_arg1247z00_444;
{ /* Llib/struct.scm 188 */
obj_t BgL_res1437z00_687;
{ /* Llib/struct.scm 188 */
obj_t BgL_aux1472z00_859;
BgL_aux1472z00_859 = 
STRUCT_KEY(BgL_structz00_17); 
if(
SYMBOLP(BgL_aux1472z00_859))
{ /* Llib/struct.scm 188 */
BgL_res1437z00_687 = BgL_aux1472z00_859; }  else 
{ 
obj_t BgL_auxz00_1066;
BgL_auxz00_1066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)8038)), BGl_string1502z00zz__structurez00, BGl_string1490z00zz__structurez00, BgL_aux1472z00_859); 
FAILURE(BgL_auxz00_1066,BFALSE,BFALSE);} } 
BgL_arg1247z00_444 = BgL_res1437z00_687; } 
return 
MAKE_PAIR(BgL_arg1247z00_444, BgL_rz00_441);}  else 
{ /* Llib/struct.scm 189 */
long BgL_arg1248z00_445;obj_t BgL_arg1249z00_446;
BgL_arg1248z00_445 = 
(BgL_iz00_440-((long)1)); 
BgL_arg1249z00_446 = 
MAKE_PAIR(
STRUCT_REF(BgL_structz00_17, 
(int)(BgL_iz00_440)), BgL_rz00_441); 
{ 
obj_t BgL_rz00_1076;long BgL_iz00_1075;
BgL_iz00_1075 = BgL_arg1248z00_445; 
BgL_rz00_1076 = BgL_arg1249z00_446; 
BgL_rz00_441 = BgL_rz00_1076; 
BgL_iz00_440 = BgL_iz00_1075; 
goto BgL_zc3anonymousza31245ze3z83_442;} } } } } 
}



/* _struct->list */
obj_t BGl__structzd2ze3listz31zz__structurez00(obj_t BgL_envz00_825, obj_t BgL_structz00_826)
{ AN_OBJECT;
{ /* Llib/struct.scm 184 */
{ /* Llib/struct.scm 185 */
obj_t BgL_auxz00_1077;
if(
STRUCTP(BgL_structz00_826))
{ /* Llib/struct.scm 185 */
BgL_auxz00_1077 = BgL_structz00_826
; }  else 
{ 
obj_t BgL_auxz00_1080;
BgL_auxz00_1080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)7946)), BGl_string1503z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_structz00_826); 
FAILURE(BgL_auxz00_1080,BFALSE,BFALSE);} 
return 
BGl_structzd2ze3listz31zz__structurez00(BgL_auxz00_1077);} } 
}



/* list->struct */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3structz31zz__structurez00(obj_t BgL_lstz00_18)
{ AN_OBJECT;
{ /* Llib/struct.scm 194 */
{ /* Llib/struct.scm 198 */
bool_t BgL_testz00_1085;
{ /* Llib/struct.scm 198 */
obj_t BgL_auxz00_1086;
BgL_auxz00_1086 = 
CAR(BgL_lstz00_18); 
BgL_testz00_1085 = 
SYMBOLP(BgL_auxz00_1086); } 
if(BgL_testz00_1085)
{ /* Llib/struct.scm 201 */
long BgL_lenz00_453;
{ /* Llib/struct.scm 201 */
obj_t BgL_auxz00_1089;
{ /* Llib/struct.scm 201 */
obj_t BgL_aux1476z00_863;
BgL_aux1476z00_863 = 
CDR(BgL_lstz00_18); 
{ /* Llib/struct.scm 201 */
bool_t BgL_testz00_1091;
if(
PAIRP(BgL_aux1476z00_863))
{ /* Llib/struct.scm 201 */
BgL_testz00_1091 = ((bool_t)1)
; }  else 
{ /* Llib/struct.scm 201 */
BgL_testz00_1091 = 
NULLP(BgL_aux1476z00_863)
; } 
if(BgL_testz00_1091)
{ /* Llib/struct.scm 201 */
BgL_auxz00_1089 = BgL_aux1476z00_863
; }  else 
{ 
obj_t BgL_auxz00_1095;
BgL_auxz00_1095 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)8581)), BGl_string1504z00zz__structurez00, BGl_string1505z00zz__structurez00, BgL_aux1476z00_863); 
FAILURE(BgL_auxz00_1095,BFALSE,BFALSE);} } } 
BgL_lenz00_453 = 
bgl_list_length(BgL_auxz00_1089); } 
{ /* Llib/struct.scm 201 */
obj_t BgL_structz00_454;
{ /* Llib/struct.scm 202 */
obj_t BgL_arg1260z00_465;
BgL_arg1260z00_465 = 
CAR(BgL_lstz00_18); 
{ /* Llib/struct.scm 202 */
obj_t BgL_keyz00_697;int BgL_lenz00_698;
if(
SYMBOLP(BgL_arg1260z00_465))
{ /* Llib/struct.scm 202 */
BgL_keyz00_697 = BgL_arg1260z00_465; }  else 
{ 
obj_t BgL_auxz00_1103;
BgL_auxz00_1103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)8629)), BGl_string1504z00zz__structurez00, BGl_string1490z00zz__structurez00, BgL_arg1260z00_465); 
FAILURE(BgL_auxz00_1103,BFALSE,BFALSE);} 
BgL_lenz00_698 = 
(int)(BgL_lenz00_453); 
BgL_structz00_454 = 
make_struct(BgL_keyz00_697, BgL_lenz00_698, BUNSPEC); } } 
{ /* Llib/struct.scm 202 */

{ /* Llib/struct.scm 203 */
obj_t BgL_g1097z00_455;
BgL_g1097z00_455 = 
CDR(BgL_lstz00_18); 
{ 
long BgL_iz00_457;obj_t BgL_lz00_458;
BgL_iz00_457 = ((long)0); 
BgL_lz00_458 = BgL_g1097z00_455; 
BgL_zc3anonymousza31255ze3z83_459:
if(
NULLP(BgL_lz00_458))
{ /* Llib/struct.scm 205 */
return BgL_structz00_454;}  else 
{ /* Llib/struct.scm 205 */
{ /* Llib/struct.scm 208 */
obj_t BgL_arg1257z00_461;
{ /* Llib/struct.scm 208 */
obj_t BgL_pairz00_702;
if(
PAIRP(BgL_lz00_458))
{ /* Llib/struct.scm 208 */
BgL_pairz00_702 = BgL_lz00_458; }  else 
{ 
obj_t BgL_auxz00_1114;
BgL_auxz00_1114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)8766)), BGl_string1502z00zz__structurez00, BGl_string1506z00zz__structurez00, BgL_lz00_458); 
FAILURE(BgL_auxz00_1114,BFALSE,BFALSE);} 
BgL_arg1257z00_461 = 
CAR(BgL_pairz00_702); } 
{ /* Llib/struct.scm 208 */
int BgL_auxz00_1119;
BgL_auxz00_1119 = 
(int)(BgL_iz00_457); 
STRUCT_SET(BgL_structz00_454, BgL_auxz00_1119, BgL_arg1257z00_461); } } 
{ 
obj_t BgL_lz00_1124;long BgL_iz00_1122;
BgL_iz00_1122 = 
(BgL_iz00_457+((long)1)); 
BgL_lz00_1124 = 
CDR(BgL_lz00_458); 
BgL_lz00_458 = BgL_lz00_1124; 
BgL_iz00_457 = BgL_iz00_1122; 
goto BgL_zc3anonymousza31255ze3z83_459;} } } } } } }  else 
{ /* Llib/struct.scm 199 */
obj_t BgL_arg1262z00_467;obj_t BgL_arg1264z00_469;
BgL_arg1262z00_467 = BGl_symbol1507z00zz__structurez00; 
BgL_arg1264z00_469 = 
CAR(BgL_lstz00_18); 
{ /* Llib/struct.scm 199 */
obj_t BgL_aux1484z00_871;
BgL_aux1484z00_871 = 
BGl_errorz00zz__errorz00(BgL_arg1262z00_467, BGl_string1508z00zz__structurez00, BgL_arg1264z00_469); 
if(
STRUCTP(BgL_aux1484z00_871))
{ /* Llib/struct.scm 199 */
return BgL_aux1484z00_871;}  else 
{ 
obj_t BgL_auxz00_1130;
BgL_auxz00_1130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)8488)), BGl_string1504z00zz__structurez00, BGl_string1494z00zz__structurez00, BgL_aux1484z00_871); 
FAILURE(BgL_auxz00_1130,BFALSE,BFALSE);} } } } } 
}



/* _list->struct */
obj_t BGl__listzd2ze3structz31zz__structurez00(obj_t BgL_envz00_827, obj_t BgL_lstz00_828)
{ AN_OBJECT;
{ /* Llib/struct.scm 194 */
{ /* Llib/struct.scm 196 */
obj_t BgL_auxz00_1134;
if(
PAIRP(BgL_lstz00_828))
{ /* Llib/struct.scm 196 */
BgL_auxz00_1134 = BgL_lstz00_828
; }  else 
{ 
obj_t BgL_auxz00_1137;
BgL_auxz00_1137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1488z00zz__structurez00, 
BINT(((long)8381)), BGl_string1509z00zz__structurez00, BGl_string1506z00zz__structurez00, BgL_lstz00_828); 
FAILURE(BgL_auxz00_1137,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3structz31zz__structurez00(BgL_auxz00_1134);} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__structurez00()
{ AN_OBJECT;
{ /* Llib/struct.scm 18 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string1510z00zz__structurez00));} 
}

#ifdef __cplusplus
}
#endif
