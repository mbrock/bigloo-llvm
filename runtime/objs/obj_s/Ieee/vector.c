/*===========================================================================*/
/*   (Ieee/vector.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/vector.scm -indent -o objs/obj_s/Ieee/vector.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_makezd2vectorzd2zz__r4_vectors_6_8z00(int, obj_t);
BGL_EXPORTED_DECL obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, int);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
extern long bgl_list_length(obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t, int);
static obj_t BGl_cnstzd2initzd2zz__r4_vectors_6_8z00();
static obj_t BGl__vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl__vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t, int, obj_t);
static obj_t BGl_symbol1696z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl__makezd2vectorzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl__vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl__copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol1723z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorz00zz__r4_vectors_6_8z00(obj_t);
static obj_t BGl__vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t, int);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00();
static obj_t BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
extern obj_t make_vector(int, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl__vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t, int, obj_t);
static obj_t BGl__vectorzf3zf3zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl__vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl__vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_vectorzf3zf3zz__r4_vectors_6_8z00(obj_t);
static obj_t BGl__vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t, int);
static obj_t BGl__vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl__vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl__listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t, obj_t);
extern obj_t fill_vector(obj_t, int, obj_t);
static obj_t BGl__sortz00zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl__vectorz00zz__r4_vectors_6_8z00(obj_t, obj_t);
extern obj_t sort_vector(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2copyz12zd2envz12zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2copyza711736z00, opt_generic_entry, BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00, BFALSE, -1 );
DEFINE_STRING( BGl_string1700z00zz__r4_vectors_6_8z00, BgL_bgl_string1700za700za7za7_1737za7, "_make-vector", 12 );
DEFINE_STRING( BGl_string1701z00zz__r4_vectors_6_8z00, BgL_bgl_string1701za700za7za7_1738za7, "int", 3 );
DEFINE_STRING( BGl_string1702z00zz__r4_vectors_6_8z00, BgL_bgl_string1702za700za7za7_1739za7, "vector", 6 );
DEFINE_STRING( BGl_string1703z00zz__r4_vectors_6_8z00, BgL_bgl_string1703za700za7za7_1740za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1704z00zz__r4_vectors_6_8z00, BgL_bgl_string1704za700za7za7_1741za7, "_vector-length", 14 );
DEFINE_STRING( BGl_string1705z00zz__r4_vectors_6_8z00, BgL_bgl_string1705za700za7za7_1742za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string1706z00zz__r4_vectors_6_8z00, BgL_bgl_string1706za700za7za7_1743za7, "_vector-ref", 11 );
DEFINE_STRING( BGl_string1707z00zz__r4_vectors_6_8z00, BgL_bgl_string1707za700za7za7_1744za7, "_vector-set!", 12 );
DEFINE_STRING( BGl_string1697z00zz__r4_vectors_6_8z00, BgL_bgl_string1697za700za7za7_1745za7, "make-vector", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2appendzd2envz00zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2append1746za7, va_generic_entry, BGl__vectorzd2appendzd2zz__r4_vectors_6_8z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string1708z00zz__r4_vectors_6_8z00, BgL_bgl_string1708za700za7za7_1747za7, "_vector-ref-ur", 14 );
DEFINE_STRING( BGl_string1698z00zz__r4_vectors_6_8z00, BgL_bgl_string1698za700za7za7_1748za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string1710z00zz__r4_vectors_6_8z00, BgL_bgl_string1710za700za7za7_1749za7, "_vector->list", 13 );
DEFINE_STRING( BGl_string1709z00zz__r4_vectors_6_8z00, BgL_bgl_string1709za700za7za7_1750za7, "_vector-set-ur!", 15 );
DEFINE_STRING( BGl_string1699z00zz__r4_vectors_6_8z00, BgL_bgl_string1699za700za7za7_1751za7, "/tmp/bigloo/runtime/Ieee/vector.scm", 35 );
DEFINE_STRING( BGl_string1711z00zz__r4_vectors_6_8z00, BgL_bgl_string1711za700za7za7_1752za7, "loop", 4 );
DEFINE_STRING( BGl_string1712z00zz__r4_vectors_6_8z00, BgL_bgl_string1712za700za7za7_1753za7, "pair", 4 );
DEFINE_STRING( BGl_string1713z00zz__r4_vectors_6_8z00, BgL_bgl_string1713za700za7za7_1754za7, "_list->vector", 13 );
DEFINE_STRING( BGl_string1714z00zz__r4_vectors_6_8z00, BgL_bgl_string1714za700za7za7_1755za7, "_vector-fill!", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2vectorzd2envz00zz__r4_vectors_6_8z00, BgL_bgl__makeza7d2vectorza7d1756z00, opt_generic_entry, BGl__makezd2vectorzd2zz__r4_vectors_6_8z00, BFALSE, -1 );
DEFINE_STRING( BGl_string1715z00zz__r4_vectors_6_8z00, BgL_bgl_string1715za700za7za7_1757za7, "_vector-tag", 11 );
DEFINE_STRING( BGl_string1716z00zz__r4_vectors_6_8z00, BgL_bgl_string1716za700za7za7_1758za7, "_vector-tag-set!", 16 );
DEFINE_STRING( BGl_string1717z00zz__r4_vectors_6_8z00, BgL_bgl_string1717za700za7za7_1759za7, "_copy-vector", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2refzd2urzd2envzd2zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2refza7d21760z00, BGl__vectorzd2refzd2urz00zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1718z00zz__r4_vectors_6_8z00, BgL_bgl_string1718za700za7za7_1761za7, "vector-copy", 11 );
DEFINE_STRING( BGl_string1720z00zz__r4_vectors_6_8z00, BgL_bgl_string1720za700za7za7_1762za7, "long", 4 );
DEFINE_STRING( BGl_string1719z00zz__r4_vectors_6_8z00, BgL_bgl_string1719za700za7za7_1763za7, "Illegal argument", 16 );
DEFINE_STRING( BGl_string1721z00zz__r4_vectors_6_8z00, BgL_bgl_string1721za700za7za7_1764za7, "Illegal indexes", 15 );
DEFINE_STRING( BGl_string1722z00zz__r4_vectors_6_8z00, BgL_bgl_string1722za700za7za7_1765za7, "_vector-copy", 12 );
DEFINE_STRING( BGl_string1724z00zz__r4_vectors_6_8z00, BgL_bgl_string1724za700za7za7_1766za7, "vector-copy!", 12 );
DEFINE_STRING( BGl_string1725z00zz__r4_vectors_6_8z00, BgL_bgl_string1725za700za7za7_1767za7, "wrong number of arguments: [3..5] expected, provided", 52 );
DEFINE_STRING( BGl_string1726z00zz__r4_vectors_6_8z00, BgL_bgl_string1726za700za7za7_1768za7, "_vector-copy!", 13 );
DEFINE_STRING( BGl_string1727z00zz__r4_vectors_6_8z00, BgL_bgl_string1727za700za7za7_1769za7, "_vector-append", 14 );
DEFINE_STRING( BGl_string1728z00zz__r4_vectors_6_8z00, BgL_bgl_string1728za700za7za7_1770za7, "sort", 4 );
DEFINE_STRING( BGl_string1730z00zz__r4_vectors_6_8z00, BgL_bgl_string1730za700za7za7_1771za7, "Object must be a list or a vector", 33 );
DEFINE_STRING( BGl_string1729z00zz__r4_vectors_6_8z00, BgL_bgl_string1729za700za7za7_1772za7, "procedure", 9 );
DEFINE_STRING( BGl_string1731z00zz__r4_vectors_6_8z00, BgL_bgl_string1731za700za7za7_1773za7, "inner-sort", 10 );
DEFINE_STRING( BGl_string1732z00zz__r4_vectors_6_8z00, BgL_bgl_string1732za700za7za7_1774za7, "__r4_vectors_6_8", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzf3zd2envz21zz__r4_vectors_6_8z00, BgL_bgl__vectorza7f3za7f3za7za7_1775z00, BGl__vectorzf3zf3zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2copyzd2envz00zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2copyza7d1776z00, va_generic_entry, BGl__vectorzd2copyzd2zz__r4_vectors_6_8z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_copyzd2vectorzd2envz00zz__r4_vectors_6_8z00, BgL_bgl__copyza7d2vectorza7d1777z00, BGl__copyzd2vectorzd2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sortzd2envzd2zz__r4_vectors_6_8z00, BgL_bgl__sortza700za7za7__r4_v1778za7, BGl__sortz00zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2fillz12zd2envz12zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2fillza711779z00, BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2setzd2urz12zd2envzc0zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2setza7d21780z00, BGl__vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2envzd2zz__r4_vectors_6_8z00, BgL_bgl__vectorza700za7za7__r41781za7, va_generic_entry, BGl__vectorz00zz__r4_vectors_6_8z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2ze3listzd2envze3zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2za7e3lis1782z00, BGl__vectorzd2ze3listz31zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2tagzd2envz00zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2tagza7d21783z00, BGl__vectorzd2tagzd2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2setz12zd2envz12zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2setza7121784z00, BGl__vectorzd2setz12zc0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2tagzd2setz12zd2envzc0zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2tagza7d21785z00, BGl__vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3vectorzd2envze3zz__r4_vectors_6_8z00, BgL_bgl__listza7d2za7e3vecto1786z00, BGl__listzd2ze3vectorz31zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2lengthzd2envz00zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2length1787za7, BGl__vectorzd2lengthzd2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2refzd2envz00zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2refza7d21788z00, BGl__vectorzd2refzd2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long BgL_checksumz00_1381, char * BgL_fromz00_1382)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_vectors_6_8z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_vectors_6_8z00()
{ AN_OBJECT;
{ /* Ieee/vector.scm 18 */
BGl_symbol1696z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1697z00zz__r4_vectors_6_8z00); 
return ( 
BGl_symbol1723z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1724z00zz__r4_vectors_6_8z00), BUNSPEC) ;} 
}



/* vector? */
BGL_EXPORTED_DEF bool_t BGl_vectorzf3zf3zz__r4_vectors_6_8z00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/vector.scm 123 */
return 
VECTORP(BgL_objz00_1);} 
}



/* _vector? */
obj_t BGl__vectorzf3zf3zz__r4_vectors_6_8z00(obj_t BgL_envz00_1078, obj_t BgL_objz00_1079)
{ AN_OBJECT;
{ /* Ieee/vector.scm 123 */
return 
BBOOL(
VECTORP(BgL_objz00_1079));} 
}



/* _make-vector */
obj_t BGl__makezd2vectorzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_5, obj_t BgL_optz00_4)
{ AN_OBJECT;
{ /* Ieee/vector.scm 129 */
{ /* Ieee/vector.scm 129 */
obj_t BgL_g1111z00_1337;
BgL_g1111z00_1337 = 
VECTOR_REF(BgL_optz00_4,
(int)(((long)0))); 
{ 

{ /* Ieee/vector.scm 129 */
int BgL_aux1113z00_1341;
BgL_aux1113z00_1341 = 
VECTOR_LENGTH(BgL_optz00_4); 
switch( 
(long)(BgL_aux1113z00_1341)) { case ((long)1) : 

{ /* Ieee/vector.scm 129 */

{ /* Ieee/vector.scm 129 */
obj_t BgL_arg1127z00_1342;
BgL_arg1127z00_1342 = 
VECTOR_REF(BgL_optz00_4,
(int)(((long)0))); 
{ /* Ieee/vector.scm 129 */
int BgL_intz00_1343;
{ /* Ieee/vector.scm 129 */
obj_t BgL_auxz00_1398;
if(
INTEGERP(BgL_arg1127z00_1342))
{ /* Ieee/vector.scm 129 */
BgL_auxz00_1398 = BgL_arg1127z00_1342
; }  else 
{ 
obj_t BgL_auxz00_1401;
BgL_auxz00_1401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)5911)), BGl_string1700z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_arg1127z00_1342); 
FAILURE(BgL_auxz00_1401,BFALSE,BFALSE);} 
BgL_intz00_1343 = 
CINT(BgL_auxz00_1398); } 
return 
make_vector(BgL_intz00_1343, BUNSPEC);} } } break;case ((long)2) : 

{ /* Ieee/vector.scm 129 */
obj_t BgL_fillz00_1344;
BgL_fillz00_1344 = 
VECTOR_REF(BgL_optz00_4,
(int)(((long)1))); 
{ /* Ieee/vector.scm 129 */

{ /* Ieee/vector.scm 129 */
obj_t BgL_arg1128z00_1345;
BgL_arg1128z00_1345 = 
VECTOR_REF(BgL_optz00_4,
(int)(((long)0))); 
{ /* Ieee/vector.scm 129 */
int BgL_intz00_1346;
{ /* Ieee/vector.scm 129 */
obj_t BgL_auxz00_1411;
if(
INTEGERP(BgL_arg1128z00_1345))
{ /* Ieee/vector.scm 129 */
BgL_auxz00_1411 = BgL_arg1128z00_1345
; }  else 
{ 
obj_t BgL_auxz00_1414;
BgL_auxz00_1414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)5911)), BGl_string1700z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_arg1128z00_1345); 
FAILURE(BgL_auxz00_1414,BFALSE,BFALSE);} 
BgL_intz00_1346 = 
CINT(BgL_auxz00_1411); } 
return 
make_vector(BgL_intz00_1346, BgL_fillz00_1344);} } } } break;
default: 
{ /* Ieee/vector.scm 129 */
obj_t BgL_arg1129z00_1339;int BgL_arg1237z00_1340;
BgL_arg1129z00_1339 = BGl_symbol1696z00zz__r4_vectors_6_8z00; 
BgL_arg1237z00_1340 = 
VECTOR_LENGTH(BgL_optz00_4); 
return 
BGl_errorz00zz__errorz00(BgL_arg1129z00_1339, BGl_string1698z00zz__r4_vectors_6_8z00, 
BINT(BgL_arg1237z00_1340));} } } } } } 
}



/* make-vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2vectorzd2zz__r4_vectors_6_8z00(int BgL_intz00_2, obj_t BgL_fillz00_3)
{ AN_OBJECT;
{ /* Ieee/vector.scm 129 */
return 
make_vector(BgL_intz00_2, BgL_fillz00_3);} 
}



/* vector */
BGL_EXPORTED_DEF obj_t BGl_vectorz00zz__r4_vectors_6_8z00(obj_t BgL_argsz00_6)
{ AN_OBJECT;
{ /* Ieee/vector.scm 135 */
{ /* Ieee/vector.scm 136 */
obj_t BgL_auxz00_1426;
{ /* Ieee/vector.scm 136 */
bool_t BgL_testz00_1427;
if(
PAIRP(BgL_argsz00_6))
{ /* Ieee/vector.scm 136 */
BgL_testz00_1427 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 136 */
BgL_testz00_1427 = 
NULLP(BgL_argsz00_6)
; } 
if(BgL_testz00_1427)
{ /* Ieee/vector.scm 136 */
BgL_auxz00_1426 = BgL_argsz00_6
; }  else 
{ 
obj_t BgL_auxz00_1431;
BgL_auxz00_1431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)6274)), BGl_string1702z00zz__r4_vectors_6_8z00, BGl_string1703z00zz__r4_vectors_6_8z00, BgL_argsz00_6); 
FAILURE(BgL_auxz00_1431,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_auxz00_1426);} } 
}



/* _vector */
obj_t BGl__vectorz00zz__r4_vectors_6_8z00(obj_t BgL_envz00_1080, obj_t BgL_argsz00_1081)
{ AN_OBJECT;
{ /* Ieee/vector.scm 135 */
{ /* Ieee/vector.scm 136 */
obj_t BgL_auxz00_1436;
{ /* Ieee/vector.scm 136 */
bool_t BgL_testz00_1437;
if(
PAIRP(BgL_argsz00_1081))
{ /* Ieee/vector.scm 136 */
BgL_testz00_1437 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 136 */
BgL_testz00_1437 = 
NULLP(BgL_argsz00_1081)
; } 
if(BgL_testz00_1437)
{ /* Ieee/vector.scm 136 */
BgL_auxz00_1436 = BgL_argsz00_1081
; }  else 
{ 
obj_t BgL_auxz00_1441;
BgL_auxz00_1441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)6274)), BGl_string1702z00zz__r4_vectors_6_8z00, BGl_string1703z00zz__r4_vectors_6_8z00, BgL_argsz00_1081); 
FAILURE(BgL_auxz00_1441,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_auxz00_1436);} } 
}



/* vector-length */
BGL_EXPORTED_DEF int BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_7)
{ AN_OBJECT;
{ /* Ieee/vector.scm 141 */
return 
VECTOR_LENGTH(BgL_vectorz00_7);} 
}



/* _vector-length */
obj_t BGl__vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1082, obj_t BgL_vectorz00_1083)
{ AN_OBJECT;
{ /* Ieee/vector.scm 141 */
{ /* Ieee/vector.scm 142 */
int BgL_auxz00_1447;
{ /* Ieee/vector.scm 142 */
obj_t BgL_vectorz00_1358;
if(
VECTORP(BgL_vectorz00_1083))
{ /* Ieee/vector.scm 142 */
BgL_vectorz00_1358 = BgL_vectorz00_1083; }  else 
{ 
obj_t BgL_auxz00_1450;
BgL_auxz00_1450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)6545)), BGl_string1704z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1083); 
FAILURE(BgL_auxz00_1450,BFALSE,BFALSE);} 
BgL_auxz00_1447 = 
VECTOR_LENGTH(BgL_vectorz00_1358); } 
return 
BINT(BgL_auxz00_1447);} } 
}



/* vector-ref */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_8, int BgL_kz00_9)
{ AN_OBJECT;
{ /* Ieee/vector.scm 147 */
{ /* Ieee/vector.scm 148 */
int BgL_l1488z00_1359;
BgL_l1488z00_1359 = 
VECTOR_LENGTH(BgL_vectorz00_8); 
if(
BOUND_CHECK(BgL_kz00_9, BgL_l1488z00_1359))
{ /* Ieee/vector.scm 148 */
return 
VECTOR_REF(BgL_vectorz00_8,BgL_kz00_9);}  else 
{ 
obj_t BgL_auxz00_1460;
BgL_auxz00_1460 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)6833)), BGl_string1705z00zz__r4_vectors_6_8z00, 
BINT(BgL_kz00_9), BgL_vectorz00_8); 
FAILURE(BgL_auxz00_1460,BFALSE,BFALSE);} } } 
}



/* _vector-ref */
obj_t BGl__vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1084, obj_t BgL_vectorz00_1085, obj_t BgL_kz00_1086)
{ AN_OBJECT;
{ /* Ieee/vector.scm 147 */
{ /* Ieee/vector.scm 148 */
obj_t BgL_vectorz00_1360;int BgL_kz00_1361;
if(
VECTORP(BgL_vectorz00_1085))
{ /* Ieee/vector.scm 148 */
BgL_vectorz00_1360 = BgL_vectorz00_1085; }  else 
{ 
obj_t BgL_auxz00_1467;
BgL_auxz00_1467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)6833)), BGl_string1706z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1085); 
FAILURE(BgL_auxz00_1467,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 148 */
obj_t BgL_auxz00_1471;
if(
INTEGERP(BgL_kz00_1086))
{ /* Ieee/vector.scm 148 */
BgL_auxz00_1471 = BgL_kz00_1086
; }  else 
{ 
obj_t BgL_auxz00_1474;
BgL_auxz00_1474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)6833)), BGl_string1706z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_kz00_1086); 
FAILURE(BgL_auxz00_1474,BFALSE,BFALSE);} 
BgL_kz00_1361 = 
CINT(BgL_auxz00_1471); } 
{ /* Ieee/vector.scm 148 */
int BgL_l1488z00_1362;
BgL_l1488z00_1362 = 
VECTOR_LENGTH(BgL_vectorz00_1360); 
if(
BOUND_CHECK(BgL_kz00_1361, BgL_l1488z00_1362))
{ /* Ieee/vector.scm 148 */
return 
VECTOR_REF(BgL_vectorz00_1360,BgL_kz00_1361);}  else 
{ 
obj_t BgL_auxz00_1483;
BgL_auxz00_1483 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)6833)), BGl_string1705z00zz__r4_vectors_6_8z00, 
BINT(BgL_kz00_1361), BgL_vectorz00_1360); 
FAILURE(BgL_auxz00_1483,BFALSE,BFALSE);} } } } 
}



/* vector-set! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_10, int BgL_kz00_11, obj_t BgL_objz00_12)
{ AN_OBJECT;
{ /* Ieee/vector.scm 153 */
{ /* Ieee/vector.scm 154 */
int BgL_l1492z00_1363;
BgL_l1492z00_1363 = 
VECTOR_LENGTH(BgL_vectorz00_10); 
if(
BOUND_CHECK(BgL_kz00_11, BgL_l1492z00_1363))
{ /* Ieee/vector.scm 154 */
return 
VECTOR_SET(BgL_vectorz00_10,BgL_kz00_11,BgL_objz00_12);}  else 
{ 
obj_t BgL_auxz00_1492;
BgL_auxz00_1492 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)7125)), BGl_string1705z00zz__r4_vectors_6_8z00, 
BINT(BgL_kz00_11), BgL_vectorz00_10); 
FAILURE(BgL_auxz00_1492,BFALSE,BFALSE);} } } 
}



/* _vector-set! */
obj_t BGl__vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1087, obj_t BgL_vectorz00_1088, obj_t BgL_kz00_1089, obj_t BgL_objz00_1090)
{ AN_OBJECT;
{ /* Ieee/vector.scm 153 */
{ /* Ieee/vector.scm 154 */
obj_t BgL_vectorz00_1364;int BgL_kz00_1365;
if(
VECTORP(BgL_vectorz00_1088))
{ /* Ieee/vector.scm 154 */
BgL_vectorz00_1364 = BgL_vectorz00_1088; }  else 
{ 
obj_t BgL_auxz00_1499;
BgL_auxz00_1499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)7125)), BGl_string1707z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1088); 
FAILURE(BgL_auxz00_1499,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 154 */
obj_t BgL_auxz00_1503;
if(
INTEGERP(BgL_kz00_1089))
{ /* Ieee/vector.scm 154 */
BgL_auxz00_1503 = BgL_kz00_1089
; }  else 
{ 
obj_t BgL_auxz00_1506;
BgL_auxz00_1506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)7125)), BGl_string1707z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_kz00_1089); 
FAILURE(BgL_auxz00_1506,BFALSE,BFALSE);} 
BgL_kz00_1365 = 
CINT(BgL_auxz00_1503); } 
{ /* Ieee/vector.scm 154 */
int BgL_l1492z00_1367;
BgL_l1492z00_1367 = 
VECTOR_LENGTH(BgL_vectorz00_1364); 
if(
BOUND_CHECK(BgL_kz00_1365, BgL_l1492z00_1367))
{ /* Ieee/vector.scm 154 */
return 
VECTOR_SET(BgL_vectorz00_1364,BgL_kz00_1365,BgL_objz00_1090);}  else 
{ 
obj_t BgL_auxz00_1515;
BgL_auxz00_1515 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)7125)), BGl_string1705z00zz__r4_vectors_6_8z00, 
BINT(BgL_kz00_1365), BgL_vectorz00_1364); 
FAILURE(BgL_auxz00_1515,BFALSE,BFALSE);} } } } 
}



/* vector-ref-ur */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_13, int BgL_kz00_14)
{ AN_OBJECT;
{ /* Ieee/vector.scm 159 */
return 
VECTOR_REF(BgL_vectorz00_13,BgL_kz00_14);} 
}



/* _vector-ref-ur */
obj_t BGl__vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t BgL_envz00_1091, obj_t BgL_vectorz00_1092, obj_t BgL_kz00_1093)
{ AN_OBJECT;
{ /* Ieee/vector.scm 159 */
{ /* Ieee/vector.scm 160 */
obj_t BgL_vectorz00_1368;int BgL_kz00_1369;
if(
VECTORP(BgL_vectorz00_1092))
{ /* Ieee/vector.scm 160 */
BgL_vectorz00_1368 = BgL_vectorz00_1092; }  else 
{ 
obj_t BgL_auxz00_1523;
BgL_auxz00_1523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)7420)), BGl_string1708z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1092); 
FAILURE(BgL_auxz00_1523,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 160 */
obj_t BgL_auxz00_1527;
if(
INTEGERP(BgL_kz00_1093))
{ /* Ieee/vector.scm 160 */
BgL_auxz00_1527 = BgL_kz00_1093
; }  else 
{ 
obj_t BgL_auxz00_1530;
BgL_auxz00_1530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)7420)), BGl_string1708z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_kz00_1093); 
FAILURE(BgL_auxz00_1530,BFALSE,BFALSE);} 
BgL_kz00_1369 = 
CINT(BgL_auxz00_1527); } 
return 
VECTOR_REF(BgL_vectorz00_1368,BgL_kz00_1369);} } 
}



/* vector-set-ur! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_15, int BgL_kz00_16, obj_t BgL_objz00_17)
{ AN_OBJECT;
{ /* Ieee/vector.scm 165 */
return 
VECTOR_SET(BgL_vectorz00_15,BgL_kz00_16,BgL_objz00_17);} 
}



/* _vector-set-ur! */
obj_t BGl__vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t BgL_envz00_1094, obj_t BgL_vectorz00_1095, obj_t BgL_kz00_1096, obj_t BgL_objz00_1097)
{ AN_OBJECT;
{ /* Ieee/vector.scm 165 */
{ /* Ieee/vector.scm 166 */
obj_t BgL_vectorz00_1370;int BgL_kz00_1371;
if(
VECTORP(BgL_vectorz00_1095))
{ /* Ieee/vector.scm 166 */
BgL_vectorz00_1370 = BgL_vectorz00_1095; }  else 
{ 
obj_t BgL_auxz00_1539;
BgL_auxz00_1539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)7718)), BGl_string1709z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1095); 
FAILURE(BgL_auxz00_1539,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 166 */
obj_t BgL_auxz00_1543;
if(
INTEGERP(BgL_kz00_1096))
{ /* Ieee/vector.scm 166 */
BgL_auxz00_1543 = BgL_kz00_1096
; }  else 
{ 
obj_t BgL_auxz00_1546;
BgL_auxz00_1546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)7718)), BGl_string1709z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_kz00_1096); 
FAILURE(BgL_auxz00_1546,BFALSE,BFALSE);} 
BgL_kz00_1371 = 
CINT(BgL_auxz00_1543); } 
return 
VECTOR_SET(BgL_vectorz00_1370,BgL_kz00_1371,BgL_objz00_1097);} } 
}



/* vector->list */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_18)
{ AN_OBJECT;
{ /* Ieee/vector.scm 171 */
{ /* Ieee/vector.scm 172 */
int BgL_vlenz00_398;
BgL_vlenz00_398 = 
VECTOR_LENGTH(BgL_vectorz00_18); 
if(
(
(long)(BgL_vlenz00_398)==((long)0)))
{ /* Ieee/vector.scm 173 */
return BNIL;}  else 
{ /* Ieee/vector.scm 175 */
long BgL_g1096z00_400;
BgL_g1096z00_400 = 
(
(long)(BgL_vlenz00_398)-((long)1)); 
{ 
long BgL_iz00_403;obj_t BgL_accz00_404;
BgL_iz00_403 = BgL_g1096z00_400; 
BgL_accz00_404 = BNIL; 
BgL_zc3anonymousza31239ze3z83_405:
if(
(BgL_iz00_403==((long)0)))
{ /* Ieee/vector.scm 177 */
return 
MAKE_PAIR(
VECTOR_REF(BgL_vectorz00_18,
(int)(BgL_iz00_403)), BgL_accz00_404);}  else 
{ /* Ieee/vector.scm 179 */
long BgL_arg1242z00_408;obj_t BgL_arg1243z00_409;
BgL_arg1242z00_408 = 
(BgL_iz00_403-((long)1)); 
BgL_arg1243z00_409 = 
MAKE_PAIR(
VECTOR_REF(BgL_vectorz00_18,
(int)(BgL_iz00_403)), BgL_accz00_404); 
{ 
obj_t BgL_accz00_1568;long BgL_iz00_1567;
BgL_iz00_1567 = BgL_arg1242z00_408; 
BgL_accz00_1568 = BgL_arg1243z00_409; 
BgL_accz00_404 = BgL_accz00_1568; 
BgL_iz00_403 = BgL_iz00_1567; 
goto BgL_zc3anonymousza31239ze3z83_405;} } } } } } 
}



/* _vector->list */
obj_t BGl__vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t BgL_envz00_1098, obj_t BgL_vectorz00_1099)
{ AN_OBJECT;
{ /* Ieee/vector.scm 171 */
{ /* Ieee/vector.scm 172 */
obj_t BgL_auxz00_1569;
if(
VECTORP(BgL_vectorz00_1099))
{ /* Ieee/vector.scm 172 */
BgL_auxz00_1569 = BgL_vectorz00_1099
; }  else 
{ 
obj_t BgL_auxz00_1572;
BgL_auxz00_1572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)8006)), BGl_string1710z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1099); 
FAILURE(BgL_auxz00_1572,BFALSE,BFALSE);} 
return 
BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_auxz00_1569);} } 
}



/* list->vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t BgL_listz00_19)
{ AN_OBJECT;
{ /* Ieee/vector.scm 184 */
{ /* Ieee/vector.scm 185 */
long BgL_lenz00_412;
BgL_lenz00_412 = 
bgl_list_length(BgL_listz00_19); 
{ /* Ieee/vector.scm 185 */
obj_t BgL_vecz00_413;
BgL_vecz00_413 = 
create_vector(
(int)(BgL_lenz00_412)); 
{ /* Ieee/vector.scm 186 */

{ 
long BgL_iz00_415;obj_t BgL_lz00_416;
BgL_iz00_415 = ((long)0); 
BgL_lz00_416 = BgL_listz00_19; 
BgL_zc3anonymousza31245ze3z83_417:
if(
(BgL_iz00_415==BgL_lenz00_412))
{ /* Ieee/vector.scm 189 */
return BgL_vecz00_413;}  else 
{ /* Ieee/vector.scm 189 */
{ /* Ieee/vector.scm 192 */
obj_t BgL_arg1247z00_419;
{ /* Ieee/vector.scm 192 */
obj_t BgL_pairz00_757;
if(
PAIRP(BgL_lz00_416))
{ /* Ieee/vector.scm 192 */
BgL_pairz00_757 = BgL_lz00_416; }  else 
{ 
obj_t BgL_auxz00_1584;
BgL_auxz00_1584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)8660)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1712z00zz__r4_vectors_6_8z00, BgL_lz00_416); 
FAILURE(BgL_auxz00_1584,BFALSE,BFALSE);} 
BgL_arg1247z00_419 = 
CAR(BgL_pairz00_757); } 
VECTOR_SET(BgL_vecz00_413,
(int)(BgL_iz00_415),BgL_arg1247z00_419); } 
{ 
obj_t BgL_lz00_1593;long BgL_iz00_1591;
BgL_iz00_1591 = 
(BgL_iz00_415+((long)1)); 
BgL_lz00_1593 = 
CDR(BgL_lz00_416); 
BgL_lz00_416 = BgL_lz00_1593; 
BgL_iz00_415 = BgL_iz00_1591; 
goto BgL_zc3anonymousza31245ze3z83_417;} } } } } } } 
}



/* _list->vector */
obj_t BGl__listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t BgL_envz00_1100, obj_t BgL_listz00_1101)
{ AN_OBJECT;
{ /* Ieee/vector.scm 184 */
{ /* Ieee/vector.scm 185 */
obj_t BgL_auxz00_1595;
{ /* Ieee/vector.scm 185 */
bool_t BgL_testz00_1596;
if(
PAIRP(BgL_listz00_1101))
{ /* Ieee/vector.scm 185 */
BgL_testz00_1596 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 185 */
BgL_testz00_1596 = 
NULLP(BgL_listz00_1101)
; } 
if(BgL_testz00_1596)
{ /* Ieee/vector.scm 185 */
BgL_auxz00_1595 = BgL_listz00_1101
; }  else 
{ 
obj_t BgL_auxz00_1600;
BgL_auxz00_1600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)8496)), BGl_string1713z00zz__r4_vectors_6_8z00, BGl_string1703z00zz__r4_vectors_6_8z00, BgL_listz00_1101); 
FAILURE(BgL_auxz00_1600,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_auxz00_1595);} } 
}



/* vector-fill! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_20, obj_t BgL_fillz00_21)
{ AN_OBJECT;
{ /* Ieee/vector.scm 198 */
{ /* Ieee/vector.scm 199 */
int BgL_arg1250z00_764;
BgL_arg1250z00_764 = 
VECTOR_LENGTH(BgL_vectorz00_20); 
return 
fill_vector(BgL_vectorz00_20, BgL_arg1250z00_764, BgL_fillz00_21);} } 
}



/* _vector-fill! */
obj_t BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1102, obj_t BgL_vectorz00_1103, obj_t BgL_fillz00_1104)
{ AN_OBJECT;
{ /* Ieee/vector.scm 198 */
{ /* Ieee/vector.scm 199 */
obj_t BgL_auxz00_1607;
if(
VECTORP(BgL_vectorz00_1103))
{ /* Ieee/vector.scm 199 */
BgL_auxz00_1607 = BgL_vectorz00_1103
; }  else 
{ 
obj_t BgL_auxz00_1610;
BgL_auxz00_1610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)8979)), BGl_string1714z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1103); 
FAILURE(BgL_auxz00_1610,BFALSE,BFALSE);} 
return 
BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_1607, BgL_fillz00_1104);} } 
}



/* vector-tag */
BGL_EXPORTED_DEF int BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_22)
{ AN_OBJECT;
{ /* Ieee/vector.scm 204 */
return 
VECTOR_TAG(BgL_vectorz00_22);} 
}



/* _vector-tag */
obj_t BGl__vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1105, obj_t BgL_vectorz00_1106)
{ AN_OBJECT;
{ /* Ieee/vector.scm 204 */
{ /* Ieee/vector.scm 205 */
int BgL_auxz00_1616;
{ /* Ieee/vector.scm 205 */
obj_t BgL_vectorz00_1378;
if(
VECTORP(BgL_vectorz00_1106))
{ /* Ieee/vector.scm 205 */
BgL_vectorz00_1378 = BgL_vectorz00_1106; }  else 
{ 
obj_t BgL_auxz00_1619;
BgL_auxz00_1619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)9270)), BGl_string1715z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1106); 
FAILURE(BgL_auxz00_1619,BFALSE,BFALSE);} 
BgL_auxz00_1616 = 
VECTOR_TAG(BgL_vectorz00_1378); } 
return 
BINT(BgL_auxz00_1616);} } 
}



/* vector-tag-set! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_23, int BgL_tagz00_24)
{ AN_OBJECT;
{ /* Ieee/vector.scm 210 */
return 
VECTOR_TAG_SET(BgL_vectorz00_23, BgL_tagz00_24);} 
}



/* _vector-tag-set! */
obj_t BGl__vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t BgL_envz00_1107, obj_t BgL_vectorz00_1108, obj_t BgL_tagz00_1109)
{ AN_OBJECT;
{ /* Ieee/vector.scm 210 */
{ /* Ieee/vector.scm 211 */
obj_t BgL_vectorz00_1379;int BgL_tagz00_1380;
if(
VECTORP(BgL_vectorz00_1108))
{ /* Ieee/vector.scm 211 */
BgL_vectorz00_1379 = BgL_vectorz00_1108; }  else 
{ 
obj_t BgL_auxz00_1628;
BgL_auxz00_1628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)9562)), BGl_string1716z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vectorz00_1108); 
FAILURE(BgL_auxz00_1628,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 211 */
obj_t BgL_auxz00_1632;
if(
INTEGERP(BgL_tagz00_1109))
{ /* Ieee/vector.scm 211 */
BgL_auxz00_1632 = BgL_tagz00_1109
; }  else 
{ 
obj_t BgL_auxz00_1635;
BgL_auxz00_1635 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)9562)), BGl_string1716z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_tagz00_1109); 
FAILURE(BgL_auxz00_1635,BFALSE,BFALSE);} 
BgL_tagz00_1380 = 
CINT(BgL_auxz00_1632); } 
return 
VECTOR_TAG_SET(BgL_vectorz00_1379, BgL_tagz00_1380);} } 
}



/* copy-vector */
BGL_EXPORTED_DEF obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t BgL_oldzd2veczd2_25, int BgL_newzd2lenzd2_26)
{ AN_OBJECT;
{ /* Ieee/vector.scm 216 */
{ /* Ieee/vector.scm 217 */
int BgL_oldzd2lenzd2_424;
BgL_oldzd2lenzd2_424 = 
VECTOR_LENGTH(BgL_oldzd2veczd2_25); 
{ /* Ieee/vector.scm 217 */
obj_t BgL_newzd2veczd2_425;
BgL_newzd2veczd2_425 = 
make_vector(BgL_newzd2lenzd2_26, BUNSPEC); 
{ /* Ieee/vector.scm 218 */
int BgL_minz00_426;
if(
(
(long)(BgL_newzd2lenzd2_26)<
(long)(BgL_oldzd2lenzd2_424)))
{ /* Ieee/vector.scm 219 */
BgL_minz00_426 = BgL_newzd2lenzd2_26; }  else 
{ /* Ieee/vector.scm 219 */
BgL_minz00_426 = BgL_oldzd2lenzd2_424; } 
{ /* Ieee/vector.scm 219 */

{ 
long BgL_iz00_428;
BgL_iz00_428 = ((long)0); 
BgL_zc3anonymousza31251ze3z83_429:
if(
(BgL_iz00_428==
(long)(BgL_minz00_426)))
{ /* Ieee/vector.scm 223 */
return BgL_newzd2veczd2_425;}  else 
{ /* Ieee/vector.scm 223 */
VECTOR_SET(BgL_newzd2veczd2_425,
(int)(BgL_iz00_428),
VECTOR_REF(BgL_oldzd2veczd2_25,
(int)(BgL_iz00_428))); 
{ 
long BgL_iz00_1654;
BgL_iz00_1654 = 
(BgL_iz00_428+((long)1)); 
BgL_iz00_428 = BgL_iz00_1654; 
goto BgL_zc3anonymousza31251ze3z83_429;} } } } } } } } 
}



/* _copy-vector */
obj_t BGl__copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1110, obj_t BgL_oldzd2veczd2_1111, obj_t BgL_newzd2lenzd2_1112)
{ AN_OBJECT;
{ /* Ieee/vector.scm 216 */
{ /* Ieee/vector.scm 217 */
int BgL_auxz00_1663;obj_t BgL_auxz00_1656;
{ /* Ieee/vector.scm 217 */
obj_t BgL_auxz00_1664;
if(
INTEGERP(BgL_newzd2lenzd2_1112))
{ /* Ieee/vector.scm 217 */
BgL_auxz00_1664 = BgL_newzd2lenzd2_1112
; }  else 
{ 
obj_t BgL_auxz00_1667;
BgL_auxz00_1667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)9878)), BGl_string1717z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_newzd2lenzd2_1112); 
FAILURE(BgL_auxz00_1667,BFALSE,BFALSE);} 
BgL_auxz00_1663 = 
CINT(BgL_auxz00_1664); } 
if(
VECTORP(BgL_oldzd2veczd2_1111))
{ /* Ieee/vector.scm 217 */
BgL_auxz00_1656 = BgL_oldzd2veczd2_1111
; }  else 
{ 
obj_t BgL_auxz00_1659;
BgL_auxz00_1659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)9878)), BGl_string1717z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1111); 
FAILURE(BgL_auxz00_1659,BFALSE,BFALSE);} 
return 
BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_auxz00_1656, BgL_auxz00_1663);} } 
}



/* vector-copy */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t BgL_oldzd2veczd2_27, obj_t BgL_argsz00_28)
{ AN_OBJECT;
{ /* Ieee/vector.scm 232 */
{ /* Ieee/vector.scm 233 */
int BgL_oldzd2lenzd2_436;
BgL_oldzd2lenzd2_436 = 
VECTOR_LENGTH(BgL_oldzd2veczd2_27); 
{ /* Ieee/vector.scm 233 */
obj_t BgL_startz00_437;
if(
PAIRP(BgL_argsz00_28))
{ /* Ieee/vector.scm 234 */
if(
INTEGERP(
CAR(BgL_argsz00_28)))
{ /* Ieee/vector.scm 235 */
BgL_startz00_437 = 
CAR(BgL_argsz00_28); }  else 
{ /* Ieee/vector.scm 235 */
BgL_startz00_437 = 
BGl_errorz00zz__errorz00(BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1719z00zz__r4_vectors_6_8z00, 
CAR(BgL_argsz00_28)); } }  else 
{ /* Ieee/vector.scm 234 */
BgL_startz00_437 = 
BINT(((long)0)); } 
{ /* Ieee/vector.scm 234 */
obj_t BgL_stopz00_438;
{ /* Ieee/vector.scm 239 */
bool_t BgL_testz00_1683;
if(
PAIRP(BgL_argsz00_28))
{ /* Ieee/vector.scm 239 */
obj_t BgL_auxz00_1686;
BgL_auxz00_1686 = 
CDR(BgL_argsz00_28); 
BgL_testz00_1683 = 
PAIRP(BgL_auxz00_1686); }  else 
{ /* Ieee/vector.scm 239 */
BgL_testz00_1683 = ((bool_t)0)
; } 
if(BgL_testz00_1683)
{ /* Ieee/vector.scm 240 */
bool_t BgL_testz00_1689;
{ /* Ieee/vector.scm 240 */
bool_t BgL_testz00_1690;
{ /* Ieee/vector.scm 240 */
obj_t BgL_auxz00_1691;
{ /* Ieee/vector.scm 240 */
obj_t BgL_pairz00_791;
{ /* Ieee/vector.scm 240 */
obj_t BgL_aux1546z00_1183;
BgL_aux1546z00_1183 = 
CDR(BgL_argsz00_28); 
if(
PAIRP(BgL_aux1546z00_1183))
{ /* Ieee/vector.scm 240 */
BgL_pairz00_791 = BgL_aux1546z00_1183; }  else 
{ 
obj_t BgL_auxz00_1695;
BgL_auxz00_1695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)10711)), BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1712z00zz__r4_vectors_6_8z00, BgL_aux1546z00_1183); 
FAILURE(BgL_auxz00_1695,BFALSE,BFALSE);} } 
BgL_auxz00_1691 = 
CDR(BgL_pairz00_791); } 
BgL_testz00_1690 = 
PAIRP(BgL_auxz00_1691); } 
if(BgL_testz00_1690)
{ /* Ieee/vector.scm 240 */
BgL_testz00_1689 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 241 */
bool_t BgL_testz00_1701;
{ /* Ieee/vector.scm 241 */
obj_t BgL_auxz00_1702;
{ /* Ieee/vector.scm 241 */
obj_t BgL_pairz00_796;
{ /* Ieee/vector.scm 241 */
obj_t BgL_aux1548z00_1185;
BgL_aux1548z00_1185 = 
CDR(BgL_argsz00_28); 
if(
PAIRP(BgL_aux1548z00_1185))
{ /* Ieee/vector.scm 241 */
BgL_pairz00_796 = BgL_aux1548z00_1185; }  else 
{ 
obj_t BgL_auxz00_1706;
BgL_auxz00_1706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)10745)), BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1712z00zz__r4_vectors_6_8z00, BgL_aux1548z00_1185); 
FAILURE(BgL_auxz00_1706,BFALSE,BFALSE);} } 
BgL_auxz00_1702 = 
CAR(BgL_pairz00_796); } 
BgL_testz00_1701 = 
INTEGERP(BgL_auxz00_1702); } 
if(BgL_testz00_1701)
{ /* Ieee/vector.scm 241 */
BgL_testz00_1689 = ((bool_t)0)
; }  else 
{ /* Ieee/vector.scm 241 */
BgL_testz00_1689 = ((bool_t)1)
; } } } 
if(BgL_testz00_1689)
{ /* Ieee/vector.scm 240 */
BgL_stopz00_438 = 
BGl_errorz00zz__errorz00(BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1719z00zz__r4_vectors_6_8z00, 
CDR(BgL_argsz00_28)); }  else 
{ /* Ieee/vector.scm 243 */
obj_t BgL_pairz00_802;
{ /* Ieee/vector.scm 243 */
obj_t BgL_aux1550z00_1187;
BgL_aux1550z00_1187 = 
CDR(BgL_argsz00_28); 
if(
PAIRP(BgL_aux1550z00_1187))
{ /* Ieee/vector.scm 243 */
BgL_pairz00_802 = BgL_aux1550z00_1187; }  else 
{ 
obj_t BgL_auxz00_1717;
BgL_auxz00_1717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)10818)), BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1712z00zz__r4_vectors_6_8z00, BgL_aux1550z00_1187); 
FAILURE(BgL_auxz00_1717,BFALSE,BFALSE);} } 
BgL_stopz00_438 = 
CAR(BgL_pairz00_802); } }  else 
{ /* Ieee/vector.scm 239 */
BgL_stopz00_438 = 
BINT(BgL_oldzd2lenzd2_436); } } 
{ /* Ieee/vector.scm 239 */
long BgL_newzd2lenzd2_439;
{ /* Ieee/vector.scm 245 */
long BgL_za71za7_803;long BgL_za72za7_804;
{ /* Ieee/vector.scm 245 */
obj_t BgL_auxz00_1723;
if(
INTEGERP(BgL_stopz00_438))
{ /* Ieee/vector.scm 245 */
BgL_auxz00_1723 = BgL_stopz00_438
; }  else 
{ 
obj_t BgL_auxz00_1726;
BgL_auxz00_1726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)10859)), BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_stopz00_438); 
FAILURE(BgL_auxz00_1726,BFALSE,BFALSE);} 
BgL_za71za7_803 = 
(long)CINT(BgL_auxz00_1723); } 
{ /* Ieee/vector.scm 245 */
obj_t BgL_auxz00_1731;
if(
INTEGERP(BgL_startz00_437))
{ /* Ieee/vector.scm 245 */
BgL_auxz00_1731 = BgL_startz00_437
; }  else 
{ 
obj_t BgL_auxz00_1734;
BgL_auxz00_1734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)10859)), BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_startz00_437); 
FAILURE(BgL_auxz00_1734,BFALSE,BFALSE);} 
BgL_za72za7_804 = 
(long)CINT(BgL_auxz00_1731); } 
BgL_newzd2lenzd2_439 = 
(BgL_za71za7_803-BgL_za72za7_804); } 
{ /* Ieee/vector.scm 245 */
obj_t BgL_newzd2veczd2_440;
BgL_newzd2veczd2_440 = 
make_vector(
(int)(BgL_newzd2lenzd2_439), BUNSPEC); 
{ /* Ieee/vector.scm 247 */

{ /* Ieee/vector.scm 250 */
bool_t BgL_testz00_1742;
if(
(BgL_newzd2lenzd2_439<((long)0)))
{ /* Ieee/vector.scm 250 */
BgL_testz00_1742 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 251 */
bool_t BgL_testz00_1745;
{ /* Ieee/vector.scm 251 */
long BgL_n1z00_810;long BgL_n2z00_811;
{ /* Ieee/vector.scm 251 */
obj_t BgL_auxz00_1746;
if(
INTEGERP(BgL_startz00_437))
{ /* Ieee/vector.scm 251 */
BgL_auxz00_1746 = BgL_startz00_437
; }  else 
{ 
obj_t BgL_auxz00_1749;
BgL_auxz00_1749 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11017)), BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_startz00_437); 
FAILURE(BgL_auxz00_1749,BFALSE,BFALSE);} 
BgL_n1z00_810 = 
(long)CINT(BgL_auxz00_1746); } 
BgL_n2z00_811 = 
(long)(BgL_oldzd2lenzd2_436); 
BgL_testz00_1745 = 
(BgL_n1z00_810>BgL_n2z00_811); } 
if(BgL_testz00_1745)
{ /* Ieee/vector.scm 251 */
BgL_testz00_1742 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 252 */
long BgL_n1z00_812;long BgL_n2z00_813;
{ /* Ieee/vector.scm 252 */
obj_t BgL_auxz00_1756;
if(
INTEGERP(BgL_stopz00_438))
{ /* Ieee/vector.scm 252 */
BgL_auxz00_1756 = BgL_stopz00_438
; }  else 
{ 
obj_t BgL_auxz00_1759;
BgL_auxz00_1759 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11044)), BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_stopz00_438); 
FAILURE(BgL_auxz00_1759,BFALSE,BFALSE);} 
BgL_n1z00_812 = 
(long)CINT(BgL_auxz00_1756); } 
BgL_n2z00_813 = 
(long)(BgL_oldzd2lenzd2_436); 
BgL_testz00_1742 = 
(BgL_n1z00_812>BgL_n2z00_813); } } 
if(BgL_testz00_1742)
{ /* Ieee/vector.scm 253 */
obj_t BgL_aux1560z00_1198;
BgL_aux1560z00_1198 = 
BGl_errorz00zz__errorz00(BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1721z00zz__r4_vectors_6_8z00, BgL_argsz00_28); 
if(
VECTORP(BgL_aux1560z00_1198))
{ /* Ieee/vector.scm 253 */
return BgL_aux1560z00_1198;}  else 
{ 
obj_t BgL_auxz00_1769;
BgL_auxz00_1769 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11062)), BGl_string1718z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_aux1560z00_1198); 
FAILURE(BgL_auxz00_1769,BFALSE,BFALSE);} }  else 
{ 
obj_t BgL_rz00_444;long BgL_wz00_445;
BgL_rz00_444 = BgL_startz00_437; 
BgL_wz00_445 = ((long)0); 
BgL_zc3anonymousza31258ze3z83_446:
{ /* Ieee/vector.scm 256 */
bool_t BgL_testz00_1773;
{ /* Ieee/vector.scm 256 */
long BgL_n1z00_814;long BgL_n2z00_815;
{ /* Ieee/vector.scm 256 */
obj_t BgL_auxz00_1774;
if(
INTEGERP(BgL_rz00_444))
{ /* Ieee/vector.scm 256 */
BgL_auxz00_1774 = BgL_rz00_444
; }  else 
{ 
obj_t BgL_auxz00_1777;
BgL_auxz00_1777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11160)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_rz00_444); 
FAILURE(BgL_auxz00_1777,BFALSE,BFALSE);} 
BgL_n1z00_814 = 
(long)CINT(BgL_auxz00_1774); } 
{ /* Ieee/vector.scm 256 */
obj_t BgL_auxz00_1782;
if(
INTEGERP(BgL_stopz00_438))
{ /* Ieee/vector.scm 256 */
BgL_auxz00_1782 = BgL_stopz00_438
; }  else 
{ 
obj_t BgL_auxz00_1785;
BgL_auxz00_1785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11162)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_stopz00_438); 
FAILURE(BgL_auxz00_1785,BFALSE,BFALSE);} 
BgL_n2z00_815 = 
(long)CINT(BgL_auxz00_1782); } 
BgL_testz00_1773 = 
(BgL_n1z00_814==BgL_n2z00_815); } 
if(BgL_testz00_1773)
{ /* Ieee/vector.scm 256 */
return BgL_newzd2veczd2_440;}  else 
{ /* Ieee/vector.scm 256 */
{ /* Ieee/vector.scm 259 */
obj_t BgL_arg1260z00_448;
{ /* Ieee/vector.scm 259 */
int BgL_kz00_817;
{ /* Ieee/vector.scm 259 */
obj_t BgL_auxz00_1791;
if(
INTEGERP(BgL_rz00_444))
{ /* Ieee/vector.scm 259 */
BgL_auxz00_1791 = BgL_rz00_444
; }  else 
{ 
obj_t BgL_auxz00_1794;
BgL_auxz00_1794 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11244)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_rz00_444); 
FAILURE(BgL_auxz00_1794,BFALSE,BFALSE);} 
BgL_kz00_817 = 
CINT(BgL_auxz00_1791); } 
BgL_arg1260z00_448 = 
VECTOR_REF(BgL_oldzd2veczd2_27,BgL_kz00_817); } 
VECTOR_SET(BgL_newzd2veczd2_440,
(int)(BgL_wz00_445),BgL_arg1260z00_448); } 
{ /* Ieee/vector.scm 260 */
long BgL_arg1261z00_449;long BgL_arg1262z00_450;
{ /* Ieee/vector.scm 260 */
long BgL_za71za7_821;
{ /* Ieee/vector.scm 260 */
obj_t BgL_auxz00_1802;
if(
INTEGERP(BgL_rz00_444))
{ /* Ieee/vector.scm 260 */
BgL_auxz00_1802 = BgL_rz00_444
; }  else 
{ 
obj_t BgL_auxz00_1805;
BgL_auxz00_1805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11260)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_rz00_444); 
FAILURE(BgL_auxz00_1805,BFALSE,BFALSE);} 
BgL_za71za7_821 = 
(long)CINT(BgL_auxz00_1802); } 
BgL_arg1261z00_449 = 
(BgL_za71za7_821+((long)1)); } 
BgL_arg1262z00_450 = 
(BgL_wz00_445+((long)1)); 
{ 
long BgL_wz00_1814;obj_t BgL_rz00_1812;
BgL_rz00_1812 = 
BINT(BgL_arg1261z00_449); 
BgL_wz00_1814 = BgL_arg1262z00_450; 
BgL_wz00_445 = BgL_wz00_1814; 
BgL_rz00_444 = BgL_rz00_1812; 
goto BgL_zc3anonymousza31258ze3z83_446;} } } } } } } } } } } } } 
}



/* _vector-copy */
obj_t BGl__vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1113, obj_t BgL_oldzd2veczd2_1114, obj_t BgL_argsz00_1115)
{ AN_OBJECT;
{ /* Ieee/vector.scm 232 */
{ /* Ieee/vector.scm 233 */
obj_t BgL_auxz00_1815;
if(
VECTORP(BgL_oldzd2veczd2_1114))
{ /* Ieee/vector.scm 233 */
BgL_auxz00_1815 = BgL_oldzd2veczd2_1114
; }  else 
{ 
obj_t BgL_auxz00_1818;
BgL_auxz00_1818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)10456)), BGl_string1722z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1114); 
FAILURE(BgL_auxz00_1818,BFALSE,BFALSE);} 
return 
BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(BgL_auxz00_1815, BgL_argsz00_1115);} } 
}



/* _vector-copy! */
obj_t BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t BgL_envz00_35, obj_t BgL_optz00_34)
{ AN_OBJECT;
{ /* Ieee/vector.scm 265 */
{ /* Ieee/vector.scm 265 */
obj_t BgL_targetz00_473;obj_t BgL_tstartz00_474;obj_t BgL_sourcez00_475;
BgL_targetz00_473 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)0))); 
BgL_tstartz00_474 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)1))); 
BgL_sourcez00_475 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)2))); 
{ 

{ /* Ieee/vector.scm 265 */
int BgL_aux1115z00_477;
BgL_aux1115z00_477 = 
VECTOR_LENGTH(BgL_optz00_34); 
switch( 
(long)(BgL_aux1115z00_477)) { case ((long)3) : 

{ /* Ieee/vector.scm 266 */
int BgL_sendz00_480;
{ /* Ieee/vector.scm 266 */
obj_t BgL_vectorz00_825;
if(
VECTORP(BgL_sourcez00_475))
{ /* Ieee/vector.scm 266 */
BgL_vectorz00_825 = BgL_sourcez00_475; }  else 
{ 
obj_t BgL_auxz00_1832;
BgL_auxz00_1832 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11604)), BGl_string1726z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_sourcez00_475); 
FAILURE(BgL_auxz00_1832,BFALSE,BFALSE);} 
BgL_sendz00_480 = 
VECTOR_LENGTH(BgL_vectorz00_825); } 
{ /* Ieee/vector.scm 265 */

{ /* Ieee/vector.scm 265 */
obj_t BgL_arg1285z00_481;obj_t BgL_arg1286z00_482;obj_t BgL_arg1287z00_483;
BgL_arg1285z00_481 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)0))); 
BgL_arg1286z00_482 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)1))); 
BgL_arg1287z00_483 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)2))); 
{ /* Ieee/vector.scm 265 */
obj_t BgL_sstartz00_829;obj_t BgL_sendz00_830;
BgL_sstartz00_829 = 
BINT(((long)0)); 
BgL_sendz00_830 = 
BINT(BgL_sendz00_480); 
{ 
obj_t BgL_iz00_832;obj_t BgL_jz00_833;
{ /* Ieee/vector.scm 265 */
bool_t BgL_auxz00_1845;
BgL_iz00_832 = BgL_sstartz00_829; 
BgL_jz00_833 = BgL_arg1286z00_482; 
BgL_loopz00_831:
{ /* Ieee/vector.scm 265 */
bool_t BgL_testz00_1846;
{ /* Ieee/vector.scm 265 */
long BgL_n1z00_838;long BgL_n2z00_839;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1847;
if(
INTEGERP(BgL_iz00_832))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1847 = BgL_iz00_832
; }  else 
{ 
obj_t BgL_auxz00_1850;
BgL_auxz00_1850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_832); 
FAILURE(BgL_auxz00_1850,BFALSE,BFALSE);} 
BgL_n1z00_838 = 
(long)CINT(BgL_auxz00_1847); } 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1855;
if(
INTEGERP(BgL_sendz00_830))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1855 = BgL_sendz00_830
; }  else 
{ 
obj_t BgL_auxz00_1858;
BgL_auxz00_1858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_sendz00_830); 
FAILURE(BgL_auxz00_1858,BFALSE,BFALSE);} 
BgL_n2z00_839 = 
(long)CINT(BgL_auxz00_1855); } 
BgL_testz00_1846 = 
(BgL_n1z00_838<BgL_n2z00_839); } 
if(BgL_testz00_1846)
{ /* Ieee/vector.scm 265 */
{ /* Ieee/vector.scm 265 */
obj_t BgL_arg1299z00_835;
{ /* Ieee/vector.scm 265 */
obj_t BgL_vectorz00_840;int BgL_kz00_841;
if(
VECTORP(BgL_arg1287z00_483))
{ /* Ieee/vector.scm 265 */
BgL_vectorz00_840 = BgL_arg1287z00_483; }  else 
{ 
obj_t BgL_auxz00_1866;
BgL_auxz00_1866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_arg1287z00_483); 
FAILURE(BgL_auxz00_1866,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1870;
if(
INTEGERP(BgL_iz00_832))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1870 = BgL_iz00_832
; }  else 
{ 
obj_t BgL_auxz00_1873;
BgL_auxz00_1873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_iz00_832); 
FAILURE(BgL_auxz00_1873,BFALSE,BFALSE);} 
BgL_kz00_841 = 
CINT(BgL_auxz00_1870); } 
BgL_arg1299z00_835 = 
VECTOR_REF(BgL_vectorz00_840,BgL_kz00_841); } 
{ /* Ieee/vector.scm 265 */
obj_t BgL_vectorz00_842;int BgL_kz00_843;
if(
VECTORP(BgL_arg1285z00_481))
{ /* Ieee/vector.scm 265 */
BgL_vectorz00_842 = BgL_arg1285z00_481; }  else 
{ 
obj_t BgL_auxz00_1881;
BgL_auxz00_1881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_arg1285z00_481); 
FAILURE(BgL_auxz00_1881,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1885;
if(
INTEGERP(BgL_jz00_833))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1885 = BgL_jz00_833
; }  else 
{ 
obj_t BgL_auxz00_1888;
BgL_auxz00_1888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_jz00_833); 
FAILURE(BgL_auxz00_1888,BFALSE,BFALSE);} 
BgL_kz00_843 = 
CINT(BgL_auxz00_1885); } 
VECTOR_SET(BgL_vectorz00_842,BgL_kz00_843,BgL_arg1299z00_835); } } 
{ /* Ieee/vector.scm 265 */
long BgL_arg1300z00_836;long BgL_arg1301z00_837;
{ /* Ieee/vector.scm 265 */
long BgL_za71za7_845;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1894;
if(
INTEGERP(BgL_iz00_832))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1894 = BgL_iz00_832
; }  else 
{ 
obj_t BgL_auxz00_1897;
BgL_auxz00_1897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_832); 
FAILURE(BgL_auxz00_1897,BFALSE,BFALSE);} 
BgL_za71za7_845 = 
(long)CINT(BgL_auxz00_1894); } 
BgL_arg1300z00_836 = 
(BgL_za71za7_845+((long)1)); } 
{ /* Ieee/vector.scm 265 */
long BgL_za71za7_847;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1903;
if(
INTEGERP(BgL_jz00_833))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1903 = BgL_jz00_833
; }  else 
{ 
obj_t BgL_auxz00_1906;
BgL_auxz00_1906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_jz00_833); 
FAILURE(BgL_auxz00_1906,BFALSE,BFALSE);} 
BgL_za71za7_847 = 
(long)CINT(BgL_auxz00_1903); } 
BgL_arg1301z00_837 = 
(BgL_za71za7_847+((long)1)); } 
{ 
obj_t BgL_jz00_1914;obj_t BgL_iz00_1912;
BgL_iz00_1912 = 
BINT(BgL_arg1300z00_836); 
BgL_jz00_1914 = 
BINT(BgL_arg1301z00_837); 
BgL_jz00_833 = BgL_jz00_1914; 
BgL_iz00_832 = BgL_iz00_1912; 
goto BgL_loopz00_831;} } }  else 
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1845 = ((bool_t)0)
; } } 
return 
BBOOL(BgL_auxz00_1845);} } } } } } break;case ((long)4) : 

{ /* Ieee/vector.scm 265 */
obj_t BgL_sstartz00_484;
BgL_sstartz00_484 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)3))); 
{ /* Ieee/vector.scm 266 */
int BgL_sendz00_485;
{ /* Ieee/vector.scm 266 */
obj_t BgL_vectorz00_849;
if(
VECTORP(BgL_sourcez00_475))
{ /* Ieee/vector.scm 266 */
BgL_vectorz00_849 = BgL_sourcez00_475; }  else 
{ 
obj_t BgL_auxz00_1921;
BgL_auxz00_1921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11604)), BGl_string1726z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_sourcez00_475); 
FAILURE(BgL_auxz00_1921,BFALSE,BFALSE);} 
BgL_sendz00_485 = 
VECTOR_LENGTH(BgL_vectorz00_849); } 
{ /* Ieee/vector.scm 265 */

{ /* Ieee/vector.scm 265 */
obj_t BgL_arg1288z00_486;obj_t BgL_arg1289z00_487;obj_t BgL_arg1290z00_488;
BgL_arg1288z00_486 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)0))); 
BgL_arg1289z00_487 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)1))); 
BgL_arg1290z00_488 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)2))); 
{ /* Ieee/vector.scm 265 */
obj_t BgL_sendz00_854;
BgL_sendz00_854 = 
BINT(BgL_sendz00_485); 
{ 
obj_t BgL_iz00_856;obj_t BgL_jz00_857;
{ /* Ieee/vector.scm 265 */
bool_t BgL_auxz00_1933;
BgL_iz00_856 = BgL_sstartz00_484; 
BgL_jz00_857 = BgL_arg1289z00_487; 
BgL_loopz00_855:
{ /* Ieee/vector.scm 265 */
bool_t BgL_testz00_1934;
{ /* Ieee/vector.scm 265 */
long BgL_n1z00_862;long BgL_n2z00_863;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1935;
if(
INTEGERP(BgL_iz00_856))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1935 = BgL_iz00_856
; }  else 
{ 
obj_t BgL_auxz00_1938;
BgL_auxz00_1938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_856); 
FAILURE(BgL_auxz00_1938,BFALSE,BFALSE);} 
BgL_n1z00_862 = 
(long)CINT(BgL_auxz00_1935); } 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1943;
if(
INTEGERP(BgL_sendz00_854))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1943 = BgL_sendz00_854
; }  else 
{ 
obj_t BgL_auxz00_1946;
BgL_auxz00_1946 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_sendz00_854); 
FAILURE(BgL_auxz00_1946,BFALSE,BFALSE);} 
BgL_n2z00_863 = 
(long)CINT(BgL_auxz00_1943); } 
BgL_testz00_1934 = 
(BgL_n1z00_862<BgL_n2z00_863); } 
if(BgL_testz00_1934)
{ /* Ieee/vector.scm 265 */
{ /* Ieee/vector.scm 265 */
obj_t BgL_arg1299z00_859;
{ /* Ieee/vector.scm 265 */
obj_t BgL_vectorz00_864;int BgL_kz00_865;
if(
VECTORP(BgL_arg1290z00_488))
{ /* Ieee/vector.scm 265 */
BgL_vectorz00_864 = BgL_arg1290z00_488; }  else 
{ 
obj_t BgL_auxz00_1954;
BgL_auxz00_1954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_arg1290z00_488); 
FAILURE(BgL_auxz00_1954,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1958;
if(
INTEGERP(BgL_iz00_856))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1958 = BgL_iz00_856
; }  else 
{ 
obj_t BgL_auxz00_1961;
BgL_auxz00_1961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_iz00_856); 
FAILURE(BgL_auxz00_1961,BFALSE,BFALSE);} 
BgL_kz00_865 = 
CINT(BgL_auxz00_1958); } 
BgL_arg1299z00_859 = 
VECTOR_REF(BgL_vectorz00_864,BgL_kz00_865); } 
{ /* Ieee/vector.scm 265 */
obj_t BgL_vectorz00_866;int BgL_kz00_867;
if(
VECTORP(BgL_arg1288z00_486))
{ /* Ieee/vector.scm 265 */
BgL_vectorz00_866 = BgL_arg1288z00_486; }  else 
{ 
obj_t BgL_auxz00_1969;
BgL_auxz00_1969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_arg1288z00_486); 
FAILURE(BgL_auxz00_1969,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1973;
if(
INTEGERP(BgL_jz00_857))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1973 = BgL_jz00_857
; }  else 
{ 
obj_t BgL_auxz00_1976;
BgL_auxz00_1976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_jz00_857); 
FAILURE(BgL_auxz00_1976,BFALSE,BFALSE);} 
BgL_kz00_867 = 
CINT(BgL_auxz00_1973); } 
VECTOR_SET(BgL_vectorz00_866,BgL_kz00_867,BgL_arg1299z00_859); } } 
{ /* Ieee/vector.scm 265 */
long BgL_arg1300z00_860;long BgL_arg1301z00_861;
{ /* Ieee/vector.scm 265 */
long BgL_za71za7_869;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1982;
if(
INTEGERP(BgL_iz00_856))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1982 = BgL_iz00_856
; }  else 
{ 
obj_t BgL_auxz00_1985;
BgL_auxz00_1985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_856); 
FAILURE(BgL_auxz00_1985,BFALSE,BFALSE);} 
BgL_za71za7_869 = 
(long)CINT(BgL_auxz00_1982); } 
BgL_arg1300z00_860 = 
(BgL_za71za7_869+((long)1)); } 
{ /* Ieee/vector.scm 265 */
long BgL_za71za7_871;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_1991;
if(
INTEGERP(BgL_jz00_857))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1991 = BgL_jz00_857
; }  else 
{ 
obj_t BgL_auxz00_1994;
BgL_auxz00_1994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_jz00_857); 
FAILURE(BgL_auxz00_1994,BFALSE,BFALSE);} 
BgL_za71za7_871 = 
(long)CINT(BgL_auxz00_1991); } 
BgL_arg1301z00_861 = 
(BgL_za71za7_871+((long)1)); } 
{ 
obj_t BgL_jz00_2002;obj_t BgL_iz00_2000;
BgL_iz00_2000 = 
BINT(BgL_arg1300z00_860); 
BgL_jz00_2002 = 
BINT(BgL_arg1301z00_861); 
BgL_jz00_857 = BgL_jz00_2002; 
BgL_iz00_856 = BgL_iz00_2000; 
goto BgL_loopz00_855;} } }  else 
{ /* Ieee/vector.scm 265 */
BgL_auxz00_1933 = ((bool_t)0)
; } } 
return 
BBOOL(BgL_auxz00_1933);} } } } } } } break;case ((long)5) : 

{ /* Ieee/vector.scm 265 */
obj_t BgL_sstartz00_489;
BgL_sstartz00_489 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)3))); 
{ /* Ieee/vector.scm 265 */
obj_t BgL_sendz00_490;
BgL_sendz00_490 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)4))); 
{ /* Ieee/vector.scm 265 */

{ /* Ieee/vector.scm 265 */
obj_t BgL_arg1291z00_491;obj_t BgL_arg1292z00_492;obj_t BgL_arg1293z00_493;
BgL_arg1291z00_491 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)0))); 
BgL_arg1292z00_492 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)1))); 
BgL_arg1293z00_493 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)2))); 
{ 
obj_t BgL_iz00_879;obj_t BgL_jz00_880;
{ /* Ieee/vector.scm 265 */
bool_t BgL_auxz00_2015;
BgL_iz00_879 = BgL_sstartz00_489; 
BgL_jz00_880 = BgL_arg1292z00_492; 
BgL_loopz00_878:
{ /* Ieee/vector.scm 265 */
bool_t BgL_testz00_2016;
{ /* Ieee/vector.scm 265 */
long BgL_n1z00_885;long BgL_n2z00_886;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_2017;
if(
INTEGERP(BgL_iz00_879))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_2017 = BgL_iz00_879
; }  else 
{ 
obj_t BgL_auxz00_2020;
BgL_auxz00_2020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_879); 
FAILURE(BgL_auxz00_2020,BFALSE,BFALSE);} 
BgL_n1z00_885 = 
(long)CINT(BgL_auxz00_2017); } 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_2025;
if(
INTEGERP(BgL_sendz00_490))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_2025 = BgL_sendz00_490
; }  else 
{ 
obj_t BgL_auxz00_2028;
BgL_auxz00_2028 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_sendz00_490); 
FAILURE(BgL_auxz00_2028,BFALSE,BFALSE);} 
BgL_n2z00_886 = 
(long)CINT(BgL_auxz00_2025); } 
BgL_testz00_2016 = 
(BgL_n1z00_885<BgL_n2z00_886); } 
if(BgL_testz00_2016)
{ /* Ieee/vector.scm 265 */
{ /* Ieee/vector.scm 265 */
obj_t BgL_arg1299z00_882;
{ /* Ieee/vector.scm 265 */
obj_t BgL_vectorz00_887;int BgL_kz00_888;
if(
VECTORP(BgL_arg1293z00_493))
{ /* Ieee/vector.scm 265 */
BgL_vectorz00_887 = BgL_arg1293z00_493; }  else 
{ 
obj_t BgL_auxz00_2036;
BgL_auxz00_2036 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_arg1293z00_493); 
FAILURE(BgL_auxz00_2036,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_2040;
if(
INTEGERP(BgL_iz00_879))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_2040 = BgL_iz00_879
; }  else 
{ 
obj_t BgL_auxz00_2043;
BgL_auxz00_2043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_iz00_879); 
FAILURE(BgL_auxz00_2043,BFALSE,BFALSE);} 
BgL_kz00_888 = 
CINT(BgL_auxz00_2040); } 
BgL_arg1299z00_882 = 
VECTOR_REF(BgL_vectorz00_887,BgL_kz00_888); } 
{ /* Ieee/vector.scm 265 */
obj_t BgL_vectorz00_889;int BgL_kz00_890;
if(
VECTORP(BgL_arg1291z00_491))
{ /* Ieee/vector.scm 265 */
BgL_vectorz00_889 = BgL_arg1291z00_491; }  else 
{ 
obj_t BgL_auxz00_2051;
BgL_auxz00_2051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_arg1291z00_491); 
FAILURE(BgL_auxz00_2051,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_2055;
if(
INTEGERP(BgL_jz00_880))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_2055 = BgL_jz00_880
; }  else 
{ 
obj_t BgL_auxz00_2058;
BgL_auxz00_2058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_jz00_880); 
FAILURE(BgL_auxz00_2058,BFALSE,BFALSE);} 
BgL_kz00_890 = 
CINT(BgL_auxz00_2055); } 
VECTOR_SET(BgL_vectorz00_889,BgL_kz00_890,BgL_arg1299z00_882); } } 
{ /* Ieee/vector.scm 265 */
long BgL_arg1300z00_883;long BgL_arg1301z00_884;
{ /* Ieee/vector.scm 265 */
long BgL_za71za7_892;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_2064;
if(
INTEGERP(BgL_iz00_879))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_2064 = BgL_iz00_879
; }  else 
{ 
obj_t BgL_auxz00_2067;
BgL_auxz00_2067 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_879); 
FAILURE(BgL_auxz00_2067,BFALSE,BFALSE);} 
BgL_za71za7_892 = 
(long)CINT(BgL_auxz00_2064); } 
BgL_arg1300z00_883 = 
(BgL_za71za7_892+((long)1)); } 
{ /* Ieee/vector.scm 265 */
long BgL_za71za7_894;
{ /* Ieee/vector.scm 265 */
obj_t BgL_auxz00_2073;
if(
INTEGERP(BgL_jz00_880))
{ /* Ieee/vector.scm 265 */
BgL_auxz00_2073 = BgL_jz00_880
; }  else 
{ 
obj_t BgL_auxz00_2076;
BgL_auxz00_2076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11510)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_jz00_880); 
FAILURE(BgL_auxz00_2076,BFALSE,BFALSE);} 
BgL_za71za7_894 = 
(long)CINT(BgL_auxz00_2073); } 
BgL_arg1301z00_884 = 
(BgL_za71za7_894+((long)1)); } 
{ 
obj_t BgL_jz00_2084;obj_t BgL_iz00_2082;
BgL_iz00_2082 = 
BINT(BgL_arg1300z00_883); 
BgL_jz00_2084 = 
BINT(BgL_arg1301z00_884); 
BgL_jz00_880 = BgL_jz00_2084; 
BgL_iz00_879 = BgL_iz00_2082; 
goto BgL_loopz00_878;} } }  else 
{ /* Ieee/vector.scm 265 */
BgL_auxz00_2015 = ((bool_t)0)
; } } 
return 
BBOOL(BgL_auxz00_2015);} } } } } } break;
default: 
{ /* Ieee/vector.scm 265 */
obj_t BgL_arg1294z00_494;int BgL_arg1296z00_496;
BgL_arg1294z00_494 = BGl_symbol1723z00zz__r4_vectors_6_8z00; 
BgL_arg1296z00_496 = 
VECTOR_LENGTH(BgL_optz00_34); 
return 
BGl_errorz00zz__errorz00(BgL_arg1294z00_494, BGl_string1725z00zz__r4_vectors_6_8z00, 
BINT(BgL_arg1296z00_496));} } } } } } 
}



/* vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t BgL_targetz00_29, obj_t BgL_tstartz00_30, obj_t BgL_sourcez00_31, obj_t BgL_sstartz00_32, obj_t BgL_sendz00_33)
{ AN_OBJECT;
{ /* Ieee/vector.scm 265 */
{ 
obj_t BgL_iz00_897;obj_t BgL_jz00_898;
{ /* Ieee/vector.scm 269 */
bool_t BgL_auxz00_2092;
BgL_iz00_897 = BgL_sstartz00_32; 
BgL_jz00_898 = BgL_tstartz00_30; 
BgL_loopz00_896:
{ /* Ieee/vector.scm 269 */
bool_t BgL_testz00_2093;
{ /* Ieee/vector.scm 269 */
long BgL_n1z00_903;long BgL_n2z00_904;
{ /* Ieee/vector.scm 269 */
obj_t BgL_auxz00_2094;
if(
INTEGERP(BgL_iz00_897))
{ /* Ieee/vector.scm 269 */
BgL_auxz00_2094 = BgL_iz00_897
; }  else 
{ 
obj_t BgL_auxz00_2097;
BgL_auxz00_2097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11664)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_897); 
FAILURE(BgL_auxz00_2097,BFALSE,BFALSE);} 
BgL_n1z00_903 = 
(long)CINT(BgL_auxz00_2094); } 
{ /* Ieee/vector.scm 269 */
obj_t BgL_auxz00_2102;
if(
INTEGERP(BgL_sendz00_33))
{ /* Ieee/vector.scm 269 */
BgL_auxz00_2102 = BgL_sendz00_33
; }  else 
{ 
obj_t BgL_auxz00_2105;
BgL_auxz00_2105 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11664)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_sendz00_33); 
FAILURE(BgL_auxz00_2105,BFALSE,BFALSE);} 
BgL_n2z00_904 = 
(long)CINT(BgL_auxz00_2102); } 
BgL_testz00_2093 = 
(BgL_n1z00_903<BgL_n2z00_904); } 
if(BgL_testz00_2093)
{ /* Ieee/vector.scm 269 */
{ /* Ieee/vector.scm 269 */
obj_t BgL_arg1299z00_900;
{ /* Ieee/vector.scm 269 */
obj_t BgL_vectorz00_905;int BgL_kz00_906;
if(
VECTORP(BgL_sourcez00_31))
{ /* Ieee/vector.scm 269 */
BgL_vectorz00_905 = BgL_sourcez00_31; }  else 
{ 
obj_t BgL_auxz00_2113;
BgL_auxz00_2113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11664)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_sourcez00_31); 
FAILURE(BgL_auxz00_2113,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 269 */
obj_t BgL_auxz00_2117;
if(
INTEGERP(BgL_iz00_897))
{ /* Ieee/vector.scm 269 */
BgL_auxz00_2117 = BgL_iz00_897
; }  else 
{ 
obj_t BgL_auxz00_2120;
BgL_auxz00_2120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11664)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_iz00_897); 
FAILURE(BgL_auxz00_2120,BFALSE,BFALSE);} 
BgL_kz00_906 = 
CINT(BgL_auxz00_2117); } 
BgL_arg1299z00_900 = 
VECTOR_REF(BgL_vectorz00_905,BgL_kz00_906); } 
{ /* Ieee/vector.scm 269 */
obj_t BgL_vectorz00_907;int BgL_kz00_908;
if(
VECTORP(BgL_targetz00_29))
{ /* Ieee/vector.scm 269 */
BgL_vectorz00_907 = BgL_targetz00_29; }  else 
{ 
obj_t BgL_auxz00_2128;
BgL_auxz00_2128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11664)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_targetz00_29); 
FAILURE(BgL_auxz00_2128,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 269 */
obj_t BgL_auxz00_2132;
if(
INTEGERP(BgL_jz00_898))
{ /* Ieee/vector.scm 269 */
BgL_auxz00_2132 = BgL_jz00_898
; }  else 
{ 
obj_t BgL_auxz00_2135;
BgL_auxz00_2135 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11664)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_jz00_898); 
FAILURE(BgL_auxz00_2135,BFALSE,BFALSE);} 
BgL_kz00_908 = 
CINT(BgL_auxz00_2132); } 
VECTOR_SET(BgL_vectorz00_907,BgL_kz00_908,BgL_arg1299z00_900); } } 
{ /* Ieee/vector.scm 269 */
long BgL_arg1300z00_901;long BgL_arg1301z00_902;
{ /* Ieee/vector.scm 269 */
long BgL_za71za7_910;
{ /* Ieee/vector.scm 269 */
obj_t BgL_auxz00_2141;
if(
INTEGERP(BgL_iz00_897))
{ /* Ieee/vector.scm 269 */
BgL_auxz00_2141 = BgL_iz00_897
; }  else 
{ 
obj_t BgL_auxz00_2144;
BgL_auxz00_2144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11664)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_897); 
FAILURE(BgL_auxz00_2144,BFALSE,BFALSE);} 
BgL_za71za7_910 = 
(long)CINT(BgL_auxz00_2141); } 
BgL_arg1300z00_901 = 
(BgL_za71za7_910+((long)1)); } 
{ /* Ieee/vector.scm 269 */
long BgL_za71za7_912;
{ /* Ieee/vector.scm 269 */
obj_t BgL_auxz00_2150;
if(
INTEGERP(BgL_jz00_898))
{ /* Ieee/vector.scm 269 */
BgL_auxz00_2150 = BgL_jz00_898
; }  else 
{ 
obj_t BgL_auxz00_2153;
BgL_auxz00_2153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)11664)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_jz00_898); 
FAILURE(BgL_auxz00_2153,BFALSE,BFALSE);} 
BgL_za71za7_912 = 
(long)CINT(BgL_auxz00_2150); } 
BgL_arg1301z00_902 = 
(BgL_za71za7_912+((long)1)); } 
{ 
obj_t BgL_jz00_2161;obj_t BgL_iz00_2159;
BgL_iz00_2159 = 
BINT(BgL_arg1300z00_901); 
BgL_jz00_2161 = 
BINT(BgL_arg1301z00_902); 
BgL_jz00_898 = BgL_jz00_2161; 
BgL_iz00_897 = BgL_iz00_2159; 
goto BgL_loopz00_896;} } }  else 
{ /* Ieee/vector.scm 269 */
BgL_auxz00_2092 = ((bool_t)0)
; } } 
return 
BBOOL(BgL_auxz00_2092);} } } 
}



/* vector-append */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t BgL_vecz00_36, obj_t BgL_argsz00_37)
{ AN_OBJECT;
{ /* Ieee/vector.scm 276 */
{ /* Ieee/vector.scm 277 */
int BgL_g1099z00_506;
BgL_g1099z00_506 = 
VECTOR_LENGTH(BgL_vecz00_36); 
{ 
int BgL_lenz00_508;obj_t BgL_vectsz00_509;
BgL_lenz00_508 = BgL_g1099z00_506; 
BgL_vectsz00_509 = BgL_argsz00_37; 
BgL_zc3anonymousza31302ze3z83_510:
if(
NULLP(BgL_vectsz00_509))
{ /* Ieee/vector.scm 280 */
obj_t BgL_resz00_512;
BgL_resz00_512 = 
make_vector(BgL_lenz00_508, BUNSPEC); 
{ /* Ieee/vector.scm 104 */
int BgL_sendz00_517;
BgL_sendz00_517 = 
VECTOR_LENGTH(BgL_vecz00_36); 
{ /* Ieee/vector.scm 104 */

{ /* Ieee/vector.scm 104 */
obj_t BgL_tstartz00_919;obj_t BgL_sstartz00_921;obj_t BgL_sendz00_922;
BgL_tstartz00_919 = 
BINT(((long)0)); 
BgL_sstartz00_921 = 
BINT(((long)0)); 
BgL_sendz00_922 = 
BINT(BgL_sendz00_517); 
{ 
obj_t BgL_iz00_924;obj_t BgL_jz00_925;
BgL_iz00_924 = BgL_sstartz00_921; 
BgL_jz00_925 = BgL_tstartz00_919; 
BgL_loopz00_923:
{ /* Ieee/vector.scm 104 */
bool_t BgL_testz00_2172;
{ /* Ieee/vector.scm 104 */
long BgL_n1z00_930;long BgL_n2z00_931;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2173;
if(
INTEGERP(BgL_iz00_924))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2173 = BgL_iz00_924
; }  else 
{ 
obj_t BgL_auxz00_2176;
BgL_auxz00_2176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_924); 
FAILURE(BgL_auxz00_2176,BFALSE,BFALSE);} 
BgL_n1z00_930 = 
(long)CINT(BgL_auxz00_2173); } 
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2181;
if(
INTEGERP(BgL_sendz00_922))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2181 = BgL_sendz00_922
; }  else 
{ 
obj_t BgL_auxz00_2184;
BgL_auxz00_2184 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_sendz00_922); 
FAILURE(BgL_auxz00_2184,BFALSE,BFALSE);} 
BgL_n2z00_931 = 
(long)CINT(BgL_auxz00_2181); } 
BgL_testz00_2172 = 
(BgL_n1z00_930<BgL_n2z00_931); } 
if(BgL_testz00_2172)
{ /* Ieee/vector.scm 104 */
{ /* Ieee/vector.scm 104 */
obj_t BgL_arg1299z00_927;
{ /* Ieee/vector.scm 104 */
int BgL_kz00_933;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2190;
if(
INTEGERP(BgL_iz00_924))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2190 = BgL_iz00_924
; }  else 
{ 
obj_t BgL_auxz00_2193;
BgL_auxz00_2193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_iz00_924); 
FAILURE(BgL_auxz00_2193,BFALSE,BFALSE);} 
BgL_kz00_933 = 
CINT(BgL_auxz00_2190); } 
BgL_arg1299z00_927 = 
VECTOR_REF(BgL_vecz00_36,BgL_kz00_933); } 
{ /* Ieee/vector.scm 104 */
int BgL_kz00_935;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2199;
if(
INTEGERP(BgL_jz00_925))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2199 = BgL_jz00_925
; }  else 
{ 
obj_t BgL_auxz00_2202;
BgL_auxz00_2202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_jz00_925); 
FAILURE(BgL_auxz00_2202,BFALSE,BFALSE);} 
BgL_kz00_935 = 
CINT(BgL_auxz00_2199); } 
VECTOR_SET(BgL_resz00_512,BgL_kz00_935,BgL_arg1299z00_927); } } 
{ /* Ieee/vector.scm 104 */
long BgL_arg1300z00_928;long BgL_arg1301z00_929;
{ /* Ieee/vector.scm 104 */
long BgL_za71za7_937;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2208;
if(
INTEGERP(BgL_iz00_924))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2208 = BgL_iz00_924
; }  else 
{ 
obj_t BgL_auxz00_2211;
BgL_auxz00_2211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_924); 
FAILURE(BgL_auxz00_2211,BFALSE,BFALSE);} 
BgL_za71za7_937 = 
(long)CINT(BgL_auxz00_2208); } 
BgL_arg1300z00_928 = 
(BgL_za71za7_937+((long)1)); } 
{ /* Ieee/vector.scm 104 */
long BgL_za71za7_939;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2217;
if(
INTEGERP(BgL_jz00_925))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2217 = BgL_jz00_925
; }  else 
{ 
obj_t BgL_auxz00_2220;
BgL_auxz00_2220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_jz00_925); 
FAILURE(BgL_auxz00_2220,BFALSE,BFALSE);} 
BgL_za71za7_939 = 
(long)CINT(BgL_auxz00_2217); } 
BgL_arg1301z00_929 = 
(BgL_za71za7_939+((long)1)); } 
{ 
obj_t BgL_jz00_2228;obj_t BgL_iz00_2226;
BgL_iz00_2226 = 
BINT(BgL_arg1300z00_928); 
BgL_jz00_2228 = 
BINT(BgL_arg1301z00_929); 
BgL_jz00_925 = BgL_jz00_2228; 
BgL_iz00_924 = BgL_iz00_2226; 
goto BgL_loopz00_923;} } }  else 
{ /* Ieee/vector.scm 104 */((bool_t)0); } } } } } } 
{ /* Ieee/vector.scm 282 */
int BgL_g1100z00_518;
BgL_g1100z00_518 = 
VECTOR_LENGTH(BgL_vecz00_36); 
{ 
int BgL_iz00_520;obj_t BgL_vectsz00_521;
BgL_iz00_520 = BgL_g1100z00_518; 
BgL_vectsz00_521 = BgL_argsz00_37; 
BgL_zc3anonymousza31304ze3z83_522:
if(
NULLP(BgL_vectsz00_521))
{ /* Ieee/vector.scm 284 */
return BgL_resz00_512;}  else 
{ /* Ieee/vector.scm 286 */
obj_t BgL_vecz00_524;
{ /* Ieee/vector.scm 286 */
obj_t BgL_pairz00_943;
if(
PAIRP(BgL_vectsz00_521))
{ /* Ieee/vector.scm 286 */
BgL_pairz00_943 = BgL_vectsz00_521; }  else 
{ 
obj_t BgL_auxz00_2235;
BgL_auxz00_2235 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)12302)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1712z00zz__r4_vectors_6_8z00, BgL_vectsz00_521); 
FAILURE(BgL_auxz00_2235,BFALSE,BFALSE);} 
BgL_vecz00_524 = 
CAR(BgL_pairz00_943); } 
{ /* Ieee/vector.scm 104 */
int BgL_sendz00_529;
{ /* Ieee/vector.scm 104 */
obj_t BgL_vectorz00_944;
if(
VECTORP(BgL_vecz00_524))
{ /* Ieee/vector.scm 104 */
BgL_vectorz00_944 = BgL_vecz00_524; }  else 
{ 
obj_t BgL_auxz00_2242;
BgL_auxz00_2242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4749)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vecz00_524); 
FAILURE(BgL_auxz00_2242,BFALSE,BFALSE);} 
BgL_sendz00_529 = 
VECTOR_LENGTH(BgL_vectorz00_944); } 
{ /* Ieee/vector.scm 104 */

{ /* Ieee/vector.scm 104 */
obj_t BgL_tstartz00_946;obj_t BgL_sstartz00_948;obj_t BgL_sendz00_949;
BgL_tstartz00_946 = 
BINT(BgL_iz00_520); 
BgL_sstartz00_948 = 
BINT(((long)0)); 
BgL_sendz00_949 = 
BINT(BgL_sendz00_529); 
{ 
obj_t BgL_iz00_951;obj_t BgL_jz00_952;
BgL_iz00_951 = BgL_sstartz00_948; 
BgL_jz00_952 = BgL_tstartz00_946; 
BgL_loopz00_950:
{ /* Ieee/vector.scm 104 */
bool_t BgL_testz00_2250;
{ /* Ieee/vector.scm 104 */
long BgL_n1z00_957;long BgL_n2z00_958;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2251;
if(
INTEGERP(BgL_iz00_951))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2251 = BgL_iz00_951
; }  else 
{ 
obj_t BgL_auxz00_2254;
BgL_auxz00_2254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_951); 
FAILURE(BgL_auxz00_2254,BFALSE,BFALSE);} 
BgL_n1z00_957 = 
(long)CINT(BgL_auxz00_2251); } 
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2259;
if(
INTEGERP(BgL_sendz00_949))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2259 = BgL_sendz00_949
; }  else 
{ 
obj_t BgL_auxz00_2262;
BgL_auxz00_2262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_sendz00_949); 
FAILURE(BgL_auxz00_2262,BFALSE,BFALSE);} 
BgL_n2z00_958 = 
(long)CINT(BgL_auxz00_2259); } 
BgL_testz00_2250 = 
(BgL_n1z00_957<BgL_n2z00_958); } 
if(BgL_testz00_2250)
{ /* Ieee/vector.scm 104 */
{ /* Ieee/vector.scm 104 */
obj_t BgL_arg1299z00_954;
{ /* Ieee/vector.scm 104 */
obj_t BgL_vectorz00_959;int BgL_kz00_960;
if(
VECTORP(BgL_vecz00_524))
{ /* Ieee/vector.scm 104 */
BgL_vectorz00_959 = BgL_vecz00_524; }  else 
{ 
obj_t BgL_auxz00_2270;
BgL_auxz00_2270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vecz00_524); 
FAILURE(BgL_auxz00_2270,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2274;
if(
INTEGERP(BgL_iz00_951))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2274 = BgL_iz00_951
; }  else 
{ 
obj_t BgL_auxz00_2277;
BgL_auxz00_2277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_iz00_951); 
FAILURE(BgL_auxz00_2277,BFALSE,BFALSE);} 
BgL_kz00_960 = 
CINT(BgL_auxz00_2274); } 
BgL_arg1299z00_954 = 
VECTOR_REF(BgL_vectorz00_959,BgL_kz00_960); } 
{ /* Ieee/vector.scm 104 */
int BgL_kz00_962;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2283;
if(
INTEGERP(BgL_jz00_952))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2283 = BgL_jz00_952
; }  else 
{ 
obj_t BgL_auxz00_2286;
BgL_auxz00_2286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1701z00zz__r4_vectors_6_8z00, BgL_jz00_952); 
FAILURE(BgL_auxz00_2286,BFALSE,BFALSE);} 
BgL_kz00_962 = 
CINT(BgL_auxz00_2283); } 
VECTOR_SET(BgL_resz00_512,BgL_kz00_962,BgL_arg1299z00_954); } } 
{ /* Ieee/vector.scm 104 */
long BgL_arg1300z00_955;long BgL_arg1301z00_956;
{ /* Ieee/vector.scm 104 */
long BgL_za71za7_964;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2292;
if(
INTEGERP(BgL_iz00_951))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2292 = BgL_iz00_951
; }  else 
{ 
obj_t BgL_auxz00_2295;
BgL_auxz00_2295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_iz00_951); 
FAILURE(BgL_auxz00_2295,BFALSE,BFALSE);} 
BgL_za71za7_964 = 
(long)CINT(BgL_auxz00_2292); } 
BgL_arg1300z00_955 = 
(BgL_za71za7_964+((long)1)); } 
{ /* Ieee/vector.scm 104 */
long BgL_za71za7_966;
{ /* Ieee/vector.scm 104 */
obj_t BgL_auxz00_2301;
if(
INTEGERP(BgL_jz00_952))
{ /* Ieee/vector.scm 104 */
BgL_auxz00_2301 = BgL_jz00_952
; }  else 
{ 
obj_t BgL_auxz00_2304;
BgL_auxz00_2304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)4728)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1720z00zz__r4_vectors_6_8z00, BgL_jz00_952); 
FAILURE(BgL_auxz00_2304,BFALSE,BFALSE);} 
BgL_za71za7_966 = 
(long)CINT(BgL_auxz00_2301); } 
BgL_arg1301z00_956 = 
(BgL_za71za7_966+((long)1)); } 
{ 
obj_t BgL_jz00_2312;obj_t BgL_iz00_2310;
BgL_iz00_2310 = 
BINT(BgL_arg1300z00_955); 
BgL_jz00_2312 = 
BINT(BgL_arg1301z00_956); 
BgL_jz00_952 = BgL_jz00_2312; 
BgL_iz00_951 = BgL_iz00_2310; 
goto BgL_loopz00_950;} } }  else 
{ /* Ieee/vector.scm 104 */((bool_t)0); } } } } } } 
{ /* Ieee/vector.scm 288 */
long BgL_arg1306z00_530;obj_t BgL_arg1307z00_531;
{ /* Ieee/vector.scm 288 */
int BgL_arg1308z00_532;
BgL_arg1308z00_532 = 
VECTOR_LENGTH(BgL_vecz00_524); 
BgL_arg1306z00_530 = 
(
(long)(BgL_iz00_520)+
(long)(BgL_arg1308z00_532)); } 
BgL_arg1307z00_531 = 
CDR(BgL_vectsz00_521); 
{ 
obj_t BgL_vectsz00_2321;int BgL_iz00_2319;
BgL_iz00_2319 = 
(int)(BgL_arg1306z00_530); 
BgL_vectsz00_2321 = BgL_arg1307z00_531; 
BgL_vectsz00_521 = BgL_vectsz00_2321; 
BgL_iz00_520 = BgL_iz00_2319; 
goto BgL_zc3anonymousza31304ze3z83_522;} } } } } }  else 
{ /* Ieee/vector.scm 289 */
long BgL_arg1310z00_535;obj_t BgL_arg1311z00_536;
{ /* Ieee/vector.scm 289 */
int BgL_arg1312z00_537;
{ /* Ieee/vector.scm 289 */
obj_t BgL_arg1313z00_538;
{ /* Ieee/vector.scm 289 */
obj_t BgL_pairz00_972;
if(
PAIRP(BgL_vectsz00_509))
{ /* Ieee/vector.scm 289 */
BgL_pairz00_972 = BgL_vectsz00_509; }  else 
{ 
obj_t BgL_auxz00_2324;
BgL_auxz00_2324 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)12439)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1712z00zz__r4_vectors_6_8z00, BgL_vectsz00_509); 
FAILURE(BgL_auxz00_2324,BFALSE,BFALSE);} 
BgL_arg1313z00_538 = 
CAR(BgL_pairz00_972); } 
{ /* Ieee/vector.scm 289 */
obj_t BgL_vectorz00_973;
if(
VECTORP(BgL_arg1313z00_538))
{ /* Ieee/vector.scm 289 */
BgL_vectorz00_973 = BgL_arg1313z00_538; }  else 
{ 
obj_t BgL_auxz00_2331;
BgL_auxz00_2331 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)12444)), BGl_string1711z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_arg1313z00_538); 
FAILURE(BgL_auxz00_2331,BFALSE,BFALSE);} 
BgL_arg1312z00_537 = 
VECTOR_LENGTH(BgL_vectorz00_973); } } 
BgL_arg1310z00_535 = 
(
(long)(BgL_arg1312z00_537)+
(long)(BgL_lenz00_508)); } 
BgL_arg1311z00_536 = 
CDR(BgL_vectsz00_509); 
{ 
obj_t BgL_vectsz00_2342;int BgL_lenz00_2340;
BgL_lenz00_2340 = 
(int)(BgL_arg1310z00_535); 
BgL_vectsz00_2342 = BgL_arg1311z00_536; 
BgL_vectsz00_509 = BgL_vectsz00_2342; 
BgL_lenz00_508 = BgL_lenz00_2340; 
goto BgL_zc3anonymousza31302ze3z83_510;} } } } } 
}



/* _vector-append */
obj_t BGl__vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1116, obj_t BgL_vecz00_1117, obj_t BgL_argsz00_1118)
{ AN_OBJECT;
{ /* Ieee/vector.scm 276 */
{ /* Ieee/vector.scm 277 */
obj_t BgL_auxz00_2343;
if(
VECTORP(BgL_vecz00_1117))
{ /* Ieee/vector.scm 277 */
BgL_auxz00_2343 = BgL_vecz00_1117
; }  else 
{ 
obj_t BgL_auxz00_2346;
BgL_auxz00_2346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)12045)), BGl_string1727z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vecz00_1117); 
FAILURE(BgL_auxz00_2346,BFALSE,BFALSE);} 
return 
BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(BgL_auxz00_2343, BgL_argsz00_1118);} } 
}



/* sort */
BGL_EXPORTED_DEF obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t BgL_o1z00_38, obj_t BgL_o2z00_39)
{ AN_OBJECT;
{ /* Ieee/vector.scm 294 */
if(
PROCEDUREP(BgL_o1z00_38))
{ /* Ieee/vector.scm 295 */
return 
BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(BgL_o2z00_39, BgL_o1z00_38);}  else 
{ /* Ieee/vector.scm 295 */
obj_t BgL_auxz00_2354;
if(
PROCEDUREP(BgL_o2z00_39))
{ /* Ieee/vector.scm 295 */
BgL_auxz00_2354 = BgL_o2z00_39
; }  else 
{ 
obj_t BgL_auxz00_2357;
BgL_auxz00_2357 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)12715)), BGl_string1728z00zz__r4_vectors_6_8z00, BGl_string1729z00zz__r4_vectors_6_8z00, BgL_o2z00_39); 
FAILURE(BgL_auxz00_2357,BFALSE,BFALSE);} 
return 
BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(BgL_o1z00_38, BgL_auxz00_2354);} } 
}



/* _sort */
obj_t BGl__sortz00zz__r4_vectors_6_8z00(obj_t BgL_envz00_1119, obj_t BgL_o1z00_1120, obj_t BgL_o2z00_1121)
{ AN_OBJECT;
{ /* Ieee/vector.scm 294 */
return 
BGl_sortz00zz__r4_vectors_6_8z00(BgL_o1z00_1120, BgL_o2z00_1121);} 
}



/* inner-sort */
obj_t BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(obj_t BgL_objz00_40, obj_t BgL_procz00_41)
{ AN_OBJECT;
{ /* Ieee/vector.scm 302 */
if(
NULLP(BgL_objz00_40))
{ /* Ieee/vector.scm 304 */
return BgL_objz00_40;}  else 
{ /* Ieee/vector.scm 306 */
bool_t BgL_testz00_2365;
if(
PAIRP(BgL_objz00_40))
{ /* Ieee/vector.scm 306 */
BgL_testz00_2365 = 
NULLP(
CDR(BgL_objz00_40))
; }  else 
{ /* Ieee/vector.scm 306 */
BgL_testz00_2365 = ((bool_t)0)
; } 
if(BgL_testz00_2365)
{ /* Ieee/vector.scm 306 */
return BgL_objz00_40;}  else 
{ /* Ieee/vector.scm 309 */
obj_t BgL_vecz00_543;
if(
VECTORP(BgL_objz00_40))
{ /* Ieee/vector.scm 311 */
int BgL_lenz00_547;
BgL_lenz00_547 = 
VECTOR_LENGTH(BgL_objz00_40); 
{ /* Ieee/vector.scm 311 */
obj_t BgL_newz00_548;
BgL_newz00_548 = 
make_vector(BgL_lenz00_547, BUNSPEC); 
{ /* Ieee/vector.scm 312 */

{ 
long BgL_iz00_550;
BgL_iz00_550 = ((long)0); 
BgL_zc3anonymousza31319ze3z83_551:
if(
(BgL_iz00_550<
(long)(BgL_lenz00_547)))
{ /* Ieee/vector.scm 314 */
{ /* Ieee/vector.scm 316 */
obj_t BgL_arg1321z00_553;
{ /* Ieee/vector.scm 316 */
obj_t BgL_vectorz00_988;int BgL_kz00_989;
BgL_vectorz00_988 = BgL_objz00_40; 
BgL_kz00_989 = 
(int)(BgL_iz00_550); 
{ /* Ieee/vector.scm 316 */
int BgL_l1496z00_1132;
BgL_l1496z00_1132 = 
VECTOR_LENGTH(BgL_vectorz00_988); 
if(
BOUND_CHECK(BgL_kz00_989, BgL_l1496z00_1132))
{ /* Ieee/vector.scm 316 */
BgL_arg1321z00_553 = 
VECTOR_REF(BgL_vectorz00_988,BgL_kz00_989); }  else 
{ 
obj_t BgL_auxz00_2382;
BgL_auxz00_2382 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)13362)), BGl_string1705z00zz__r4_vectors_6_8z00, 
BINT(BgL_kz00_989), BgL_vectorz00_988); 
FAILURE(BgL_auxz00_2382,BFALSE,BFALSE);} } } 
{ /* Ieee/vector.scm 316 */
int BgL_kz00_991;
BgL_kz00_991 = 
(int)(BgL_iz00_550); 
{ /* Ieee/vector.scm 316 */
int BgL_l1500z00_1136;
BgL_l1500z00_1136 = 
VECTOR_LENGTH(BgL_newz00_548); 
if(
BOUND_CHECK(BgL_kz00_991, BgL_l1500z00_1136))
{ /* Ieee/vector.scm 316 */
VECTOR_SET(BgL_newz00_548,BgL_kz00_991,BgL_arg1321z00_553); }  else 
{ 
obj_t BgL_auxz00_2392;
BgL_auxz00_2392 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)13343)), BGl_string1705z00zz__r4_vectors_6_8z00, 
BINT(BgL_kz00_991), BgL_newz00_548); 
FAILURE(BgL_auxz00_2392,BFALSE,BFALSE);} } } } 
{ 
long BgL_iz00_2397;
BgL_iz00_2397 = 
(BgL_iz00_550+((long)1)); 
BgL_iz00_550 = BgL_iz00_2397; 
goto BgL_zc3anonymousza31319ze3z83_551;} }  else 
{ /* Ieee/vector.scm 314 */((bool_t)0); } } 
BgL_vecz00_543 = BgL_newz00_548; } } }  else 
{ /* Ieee/vector.scm 310 */
if(
PAIRP(BgL_objz00_40))
{ /* Ieee/vector.scm 319 */
BgL_vecz00_543 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_objz00_40); }  else 
{ /* Ieee/vector.scm 319 */
BgL_vecz00_543 = 
BGl_errorz00zz__errorz00(BGl_string1728z00zz__r4_vectors_6_8z00, BGl_string1730z00zz__r4_vectors_6_8z00, BgL_objz00_40); } } 
{ /* Ieee/vector.scm 325 */
obj_t BgL_resz00_544;
{ /* Ieee/vector.scm 325 */
obj_t BgL_auxz00_2403;
if(
VECTORP(BgL_vecz00_543))
{ /* Ieee/vector.scm 325 */
BgL_auxz00_2403 = BgL_vecz00_543
; }  else 
{ 
obj_t BgL_auxz00_2406;
BgL_auxz00_2406 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1699z00zz__r4_vectors_6_8z00, 
BINT(((long)13591)), BGl_string1731z00zz__r4_vectors_6_8z00, BGl_string1702z00zz__r4_vectors_6_8z00, BgL_vecz00_543); 
FAILURE(BgL_auxz00_2406,BFALSE,BFALSE);} 
BgL_resz00_544 = 
sort_vector(BgL_auxz00_2403, BgL_procz00_41); } 
if(
PAIRP(BgL_objz00_40))
{ /* Ieee/vector.scm 326 */
return 
BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_resz00_544);}  else 
{ /* Ieee/vector.scm 326 */
return BgL_resz00_544;} } } } } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00()
{ AN_OBJECT;
{ /* Ieee/vector.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string1732z00zz__r4_vectors_6_8z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string1732z00zz__r4_vectors_6_8z00));} 
}

#ifdef __cplusplus
}
#endif
