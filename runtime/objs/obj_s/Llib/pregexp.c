/*===========================================================================*/
/*   (Llib/pregexp.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/pregexp.scm -indent -o objs/obj_s/Llib/pregexp.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_fkz00zz__pregexpz00(obj_t);
static obj_t BGl_pregexpzd2readzd2clusterzd2typezd2zz__pregexpz00(obj_t, obj_t, long);
static obj_t BGl_pregexpzd2readzd2branchz00zz__pregexpz00(obj_t, obj_t, long);
static obj_t BGl_subz72z72zz__pregexpz00(obj_t);
static obj_t BGl_zc3anonymousza32520ze3z83zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_za2pregexpzd2versionza2zd2zz__pregexpz00 = BUNSPEC;
static obj_t BGl_pregexpzd2matchzd2positionszd2auxzd2zz__pregexpz00(obj_t, obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_pregexpzd2readzd2patternz00zz__pregexpz00(obj_t, obj_t, long);
static obj_t BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__pregexpz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__pregexpzd2replacezd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32528ze3z83zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__pregexpz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32534ze3z83zz__pregexpz00(obj_t);
static obj_t BGl_genericzd2initzd2zz__pregexpz00();
static obj_t BGl_loupzd2onezd2ofzd2charszd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_za2pregexpzd2tabzd2charza2z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl__pregexpzd2splitzd2zz__pregexpz00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32538ze3z83zz__pregexpz00(obj_t);
static obj_t BGl_list3878z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3881z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_subz00zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3884z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3888z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3902z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list4005z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3905z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3896z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list4008z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3908z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3899z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl__pregexpzd2quotezd2zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_list4016z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list4020z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list4032z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl__pregexpz00zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_list3938z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00(unsigned char, obj_t);
static obj_t BGl_list4041z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_loupzd2orzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32551ze3z83zz__pregexpz00(obj_t);
extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl_list4073z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3980z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3985z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__pregexpz00();
static obj_t BGl_list3992z00zz__pregexpz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_pregexpzd2splitzd2zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_list3995z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_list3998z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_pregexpzd2readzd2subpatternz00zz__pregexpz00(obj_t, obj_t, long);
static obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__pregexpz00(obj_t, obj_t, long);
static obj_t BGl_importedzd2moduleszd2initz00zz__pregexpz00();
BGL_EXPORTED_DECL obj_t BGl_pregexpzd2replaceza2z70zz__pregexpz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_pregexpzd2quotezd2zz__pregexpz00(obj_t);
static obj_t BGl_zc3anonymousza32564ze3z83zz__pregexpz00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32569ze3z83zz__pregexpz00(obj_t);
static obj_t BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00(obj_t, obj_t, long);
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl_za2pregexpzd2commentzd2charza2z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32576ze3z83zz__pregexpz00(obj_t, obj_t);
extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32577ze3z83zz__pregexpz00(obj_t);
extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__pregexpz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_pregexpzd2readzd2piecez00zz__pregexpz00(obj_t, obj_t, long);
static obj_t BGl_toplevelzd2initzd2zz__pregexpz00();
static obj_t BGl_zc3anonymousza32582ze3z83zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_pregexpzd2readzd2escapedzd2charzd2zz__pregexpz00(obj_t, obj_t, long);
extern bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32590ze3z83zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_pregexpzd2listzd2refz00zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 = BUNSPEC;
static obj_t BGl__pregexpzd2matchzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32595ze3z83zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_pregexpzd2stringzd2matchz00zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3865z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3867z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3885z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4001z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3891z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4003z00zz__pregexpz00 = BUNSPEC;
extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol4006z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4009z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4011z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4012z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3912z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3916z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3918z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3920z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4021z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3922z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3925z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3926z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_identityz00zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_symbol3929z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_loupzd2pzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_loupzd2qzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_loupzd2seqzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol4033z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3939z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3941z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4042z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4052z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4059z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol4061z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3969z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3981z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3983z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3986z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3988z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3990z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_symbol3993z00zz__pregexpz00 = BUNSPEC;
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3996z00zz__pregexpz00 = BUNSPEC;
extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_symbol3999z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3845z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3847z00zz__pregexpz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_pregexpzd2matchzd2zz__pregexpz00(obj_t, obj_t, obj_t);
static obj_t BGl_keyword3853z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3855z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3857z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3859z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3861z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3863z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3872z00zz__pregexpz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_keyword3874z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3876z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3879z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3882z00zz__pregexpz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_pregexpz00zz__pregexpz00(obj_t);
static obj_t BGl_keyword3900z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3889z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3892z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3903z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3894z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3906z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3897z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3909z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3914z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_g1888z00zz__pregexpz00(obj_t);
static obj_t BGl_keyword3931z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3933z00zz__pregexpz00 = BUNSPEC;
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_keyword3946z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3948z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3950z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3952z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3955z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3957z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl__pregexpzd2replaceza2z70zz__pregexpz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_keyword3959z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_za2pregexpzd2returnzd2charza2z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3961z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3963z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3965z00zz__pregexpz00 = BUNSPEC;
static obj_t BGl_keyword3967z00zz__pregexpz00 = BUNSPEC;
extern obj_t bgl_append2(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32488ze3z83zz__pregexpz00(obj_t);
static obj_t BGl_pregexpzd2reversez12zc0zz__pregexpz00(obj_t);
static obj_t BGl_pregexpzd2readzd2numsz00zz__pregexpz00(obj_t, obj_t, long);
static obj_t BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(obj_t, obj_t, long);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32503ze3z83zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_pregexpzd2replacezd2auxz00zz__pregexpz00(obj_t, obj_t, long, obj_t);
static obj_t BGl_zc3anonymousza32495ze3z83zz__pregexpz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32496ze3z83zz__pregexpz00(obj_t);
static obj_t BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__pregexpz00(obj_t, obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_pregexpzd2replacezd2zz__pregexpz00(obj_t, obj_t, obj_t);
extern obj_t string_to_keyword(char *);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl_zc3anonymousza32511ze3z83zz__pregexpz00(obj_t, obj_t);
extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_zc3anonymousza32513ze3z83zz__pregexpz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__pregexpz00();
static obj_t BGl__pregexpzd2matchzd2positionsz00zz__pregexpz00(obj_t, obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4017z00zz__pregexpz00, BgL_bgl_za7c3anonymousza7a324085z00, BGl_zc3anonymousza32551ze3z83zz__pregexpz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4018z00zz__pregexpz00, BgL_bgl_za7c3anonymousza7a324086z00, BGl_zc3anonymousza32564ze3z83zz__pregexpz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4019z00zz__pregexpz00, BgL_bgl_za7c3anonymousza7a324087z00, BGl_zc3anonymousza32569ze3z83zz__pregexpz00, 0L, BUNSPEC, 0 );
extern obj_t BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3971z00zz__pregexpz00, BgL_bgl_identityza700za7za7__p4088za7, BGl_identityz00zz__pregexpz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3972z00zz__pregexpz00, BgL_bgl_g1888za700za7za7__preg4089za7, BGl_g1888z00zz__pregexpz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3840z00zz__pregexpz00, BgL_bgl_string3840za700za7za7_4090za7, "/tmp/bigloo/runtime/Llib/pregexp.scm", 36 );
DEFINE_STRING( BGl_string3841z00zz__pregexpz00, BgL_bgl_string3841za700za7za7_4091za7, "toplevel-init", 13 );
DEFINE_STRING( BGl_string3842z00zz__pregexpz00, BgL_bgl_string3842za700za7za7_4092za7, "long", 4 );
DEFINE_STRING( BGl_string3843z00zz__pregexpz00, BgL_bgl_string3843za700za7za7_4093za7, "loop", 4 );
DEFINE_STRING( BGl_string3844z00zz__pregexpz00, BgL_bgl_string3844za700za7za7_4094za7, "pair", 4 );
DEFINE_STRING( BGl_string3846z00zz__pregexpz00, BgL_bgl_string3846za700za7za7_4095za7, "or", 2 );
DEFINE_STRING( BGl_string3848z00zz__pregexpz00, BgL_bgl_string3848za700za7za7_4096za7, "seq", 3 );
DEFINE_STRING( BGl_string3850z00zz__pregexpz00, BgL_bgl_string3850za700za7za7_4097za7, "pregexp-read-piece", 18 );
DEFINE_STRING( BGl_string3849z00zz__pregexpz00, BgL_bgl_string3849za700za7za7_4098za7, "string-ref", 10 );
DEFINE_STRING( BGl_string3851z00zz__pregexpz00, BgL_bgl_string3851za700za7za7_4099za7, "case_else1829", 13 );
DEFINE_STRING( BGl_string3852z00zz__pregexpz00, BgL_bgl_string3852za700za7za7_4100za7, "uchar", 5 );
DEFINE_STRING( BGl_string3854z00zz__pregexpz00, BgL_bgl_string3854za700za7za7_4101za7, "empty", 5 );
DEFINE_STRING( BGl_string3856z00zz__pregexpz00, BgL_bgl_string3856za700za7za7_4102za7, "bos", 3 );
DEFINE_STRING( BGl_string3858z00zz__pregexpz00, BgL_bgl_string3858za700za7za7_4103za7, "eos", 3 );
DEFINE_STRING( BGl_string3860z00zz__pregexpz00, BgL_bgl_string3860za700za7za7_4104za7, "any", 3 );
DEFINE_STRING( BGl_string3862z00zz__pregexpz00, BgL_bgl_string3862za700za7za7_4105za7, "neg-char", 8 );
DEFINE_STRING( BGl_string3864z00zz__pregexpz00, BgL_bgl_string3864za700za7za7_4106za7, "backref", 7 );
DEFINE_STRING( BGl_string3866z00zz__pregexpz00, BgL_bgl_string3866za700za7za7_4107za7, "backslash", 9 );
DEFINE_STRING( BGl_string3868z00zz__pregexpz00, BgL_bgl_string3868za700za7za7_4108za7, "pregexp", 7 );
DEFINE_STRING( BGl_string3870z00zz__pregexpz00, BgL_bgl_string3870za700za7za7_4109za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3869z00zz__pregexpz00, BgL_bgl_string3869za700za7za7_4110za7, "pregexp-read-escaped-number", 27 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pregexpzd2envzd2zz__pregexpz00, BgL_bgl__pregexpza700za7za7__p4111za7, BGl__pregexpz00zz__pregexpz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3871z00zz__pregexpz00, BgL_bgl_string3871za700za7za7_4112za7, "pregexp-read-escaped-char", 25 );
DEFINE_STRING( BGl_string3873z00zz__pregexpz00, BgL_bgl_string3873za700za7za7_4113za7, "wbdry", 5 );
DEFINE_STRING( BGl_string3875z00zz__pregexpz00, BgL_bgl_string3875za700za7za7_4114za7, "not-wbdry", 9 );
DEFINE_STRING( BGl_string3877z00zz__pregexpz00, BgL_bgl_string3877za700za7za7_4115za7, "digit", 5 );
DEFINE_STRING( BGl_string3880z00zz__pregexpz00, BgL_bgl_string3880za700za7za7_4116za7, "space", 5 );
DEFINE_STRING( BGl_string3883z00zz__pregexpz00, BgL_bgl_string3883za700za7za7_4117za7, "word", 4 );
DEFINE_STRING( BGl_string3886z00zz__pregexpz00, BgL_bgl_string3886za700za7za7_4118za7, "pregexp-read-posix-char-class", 29 );
DEFINE_STRING( BGl_string3887z00zz__pregexpz00, BgL_bgl_string3887za700za7za7_4119za7, "pregexp-read-cluster-type", 25 );
DEFINE_STRING( BGl_string4000z00zz__pregexpz00, BgL_bgl_string4000za700za7za7_4120za7, "c<", 2 );
DEFINE_STRING( BGl_string3890z00zz__pregexpz00, BgL_bgl_string3890za700za7za7_4121za7, "sub", 3 );
DEFINE_STRING( BGl_string3901z00zz__pregexpz00, BgL_bgl_string3901za700za7za7_4122za7, "neg-lookahead", 13 );
DEFINE_STRING( BGl_string4002z00zz__pregexpz00, BgL_bgl_string4002za700za7za7_4123za7, "arg2477", 7 );
DEFINE_STRING( BGl_string3893z00zz__pregexpz00, BgL_bgl_string3893za700za7za7_4124za7, "case-sensitive", 14 );
DEFINE_STRING( BGl_string4004z00zz__pregexpz00, BgL_bgl_string4004za700za7za7_4125za7, "c", 1 );
DEFINE_STRING( BGl_string3904z00zz__pregexpz00, BgL_bgl_string3904za700za7za7_4126za7, "no-backtrack", 12 );
DEFINE_STRING( BGl_string3895z00zz__pregexpz00, BgL_bgl_string3895za700za7za7_4127za7, "case-insensitive", 16 );
DEFINE_STRING( BGl_string4007z00zz__pregexpz00, BgL_bgl_string4007za700za7za7_4128za7, "arg2476", 7 );
DEFINE_STRING( BGl_string3907z00zz__pregexpz00, BgL_bgl_string3907za700za7za7_4129za7, "lookbehind", 10 );
DEFINE_STRING( BGl_string3898z00zz__pregexpz00, BgL_bgl_string3898za700za7za7_4130za7, "lookahead", 9 );
DEFINE_STRING( BGl_string4010z00zz__pregexpz00, BgL_bgl_string4010za700za7za7_4131za7, "arg2472", 7 );
DEFINE_STRING( BGl_string3910z00zz__pregexpz00, BgL_bgl_string3910za700za7za7_4132za7, "neg-lookbehind", 14 );
DEFINE_STRING( BGl_string3911z00zz__pregexpz00, BgL_bgl_string3911za700za7za7_4133za7, "pregexp-read-subpattern", 23 );
DEFINE_STRING( BGl_string4013z00zz__pregexpz00, BgL_bgl_string4013za700za7za7_4134za7, "non-existent-backref", 20 );
DEFINE_STRING( BGl_string3913z00zz__pregexpz00, BgL_bgl_string3913za700za7za7_4135za7, "pregexp-wrap-quantifier-if-any", 30 );
DEFINE_STRING( BGl_string3915z00zz__pregexpz00, BgL_bgl_string3915za700za7za7_4136za7, "between", 7 );
DEFINE_STRING( BGl_string3917z00zz__pregexpz00, BgL_bgl_string3917za700za7za7_4137za7, "minimal?", 8 );
DEFINE_STRING( BGl_string3919z00zz__pregexpz00, BgL_bgl_string3919za700za7za7_4138za7, "at-least", 8 );
DEFINE_STRING( BGl_string3921z00zz__pregexpz00, BgL_bgl_string3921za700za7za7_4139za7, "at-most", 7 );
DEFINE_STRING( BGl_string4022z00zz__pregexpz00, BgL_bgl_string4022za700za7za7_4140za7, "found-it?", 9 );
DEFINE_STRING( BGl_string4023z00zz__pregexpz00, BgL_bgl_string4023za700za7za7_4141za7, "loup-seq", 8 );
DEFINE_STRING( BGl_string3923z00zz__pregexpz00, BgL_bgl_string3923za700za7za7_4142za7, "next-i", 6 );
DEFINE_STRING( BGl_string4024z00zz__pregexpz00, BgL_bgl_string4024za700za7za7_4143za7, "loup-seq:Wrong number of arguments", 34 );
DEFINE_STRING( BGl_string3924z00zz__pregexpz00, BgL_bgl_string3924za700za7za7_4144za7, "left bracket must be followed by number", 39 );
DEFINE_STRING( BGl_string4025z00zz__pregexpz00, BgL_bgl_string4025za700za7za7_4145za7, "loup-or", 7 );
DEFINE_STRING( BGl_string4026z00zz__pregexpz00, BgL_bgl_string4026za700za7za7_4146za7, "loup-or:Wrong number of arguments", 33 );
DEFINE_STRING( BGl_string4027z00zz__pregexpz00, BgL_bgl_string4027za700za7za7_4147za7, "loup-q", 6 );
DEFINE_STRING( BGl_string3927z00zz__pregexpz00, BgL_bgl_string3927za700za7za7_4148za7, "pregexp-read-nums", 17 );
DEFINE_STRING( BGl_string4028z00zz__pregexpz00, BgL_bgl_string4028za700za7za7_4149za7, "loup-q:Wrong number of arguments", 32 );
DEFINE_STRING( BGl_string3928z00zz__pregexpz00, BgL_bgl_string3928za700za7za7_4150za7, "character class ended too soon", 30 );
DEFINE_STRING( BGl_string4030z00zz__pregexpz00, BgL_bgl_string4030za700za7za7_4151za7, "<anonymous:2496>", 16 );
DEFINE_STRING( BGl_string4029z00zz__pregexpz00, BgL_bgl_string4029za700za7za7_4152za7, "<anonymous:2488>", 16 );
DEFINE_STRING( BGl_string3930z00zz__pregexpz00, BgL_bgl_string3930za700za7za7_4153za7, "pregexp-read-char-list", 22 );
DEFINE_STRING( BGl_string4031z00zz__pregexpz00, BgL_bgl_string4031za700za7za7_4154za7, "<anonymous:2496>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3932z00zz__pregexpz00, BgL_bgl_string3932za700za7za7_4155za7, "one-of-chars", 12 );
DEFINE_STRING( BGl_string4034z00zz__pregexpz00, BgL_bgl_string4034za700za7za7_4156za7, "arg2497", 7 );
DEFINE_STRING( BGl_string3934z00zz__pregexpz00, BgL_bgl_string3934za700za7za7_4157za7, "char-range", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pregexpzd2replacezd2envz00zz__pregexpz00, BgL_bgl__pregexpza7d2repla4158za7, BGl__pregexpzd2replacezd2zz__pregexpz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string4035z00zz__pregexpz00, BgL_bgl_string4035za700za7za7_4159za7, "<anonymous:2495>", 16 );
DEFINE_STRING( BGl_string3935z00zz__pregexpz00, BgL_bgl_string3935za700za7za7_4160za7, "pregexp-string-match", 20 );
DEFINE_STRING( BGl_string4036z00zz__pregexpz00, BgL_bgl_string4036za700za7za7_4161za7, "<anonymous:2495>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3936z00zz__pregexpz00, BgL_bgl_string3936za700za7za7_4162za7, "procedure", 9 );
DEFINE_STRING( BGl_string4037z00zz__pregexpz00, BgL_bgl_string4037za700za7za7_4163za7, "<anonymous:2503>", 16 );
DEFINE_STRING( BGl_string3937z00zz__pregexpz00, BgL_bgl_string3937za700za7za7_4164za7, "pregexp-string-match:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string4038z00zz__pregexpz00, BgL_bgl_string4038za700za7za7_4165za7, "<anonymous:2513>", 16 );
DEFINE_STRING( BGl_string4040z00zz__pregexpz00, BgL_bgl_string4040za700za7za7_4166za7, "<anonymous:2511>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string4039z00zz__pregexpz00, BgL_bgl_string4039za700za7za7_4167za7, "<anonymous:2511>", 16 );
DEFINE_STRING( BGl_string3940z00zz__pregexpz00, BgL_bgl_string3940za700za7za7_4168za7, "funcall", 7 );
DEFINE_STRING( BGl_string3942z00zz__pregexpz00, BgL_bgl_string3942za700za7za7_4169za7, "fk", 2 );
DEFINE_STRING( BGl_string4043z00zz__pregexpz00, BgL_bgl_string4043za700za7za7_4170za7, "i1", 2 );
DEFINE_STRING( BGl_string3943z00zz__pregexpz00, BgL_bgl_string3943za700za7za7_4171za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string4044z00zz__pregexpz00, BgL_bgl_string4044za700za7za7_4172za7, "<anonymous:2520>", 16 );
DEFINE_STRING( BGl_string3944z00zz__pregexpz00, BgL_bgl_string3944za700za7za7_4173za7, "bstring", 7 );
DEFINE_STRING( BGl_string4045z00zz__pregexpz00, BgL_bgl_string4045za700za7za7_4174za7, "<anonymous:2520>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3945z00zz__pregexpz00, BgL_bgl_string3945za700za7za7_4175za7, "pregexp-at-word-boundary?", 25 );
DEFINE_STRING( BGl_string4046z00zz__pregexpz00, BgL_bgl_string4046za700za7za7_4176za7, "<anonymous:2528>", 16 );
DEFINE_STRING( BGl_string4047z00zz__pregexpz00, BgL_bgl_string4047za700za7za7_4177za7, "<anonymous:2528>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3947z00zz__pregexpz00, BgL_bgl_string3947za700za7za7_4178za7, "alnum", 5 );
DEFINE_STRING( BGl_string4048z00zz__pregexpz00, BgL_bgl_string4048za700za7za7_4179za7, "<anonymous:2577>", 16 );
DEFINE_STRING( BGl_string4050z00zz__pregexpz00, BgL_bgl_string4050za700za7za7_4180za7, "<anonymous:2576>", 16 );
DEFINE_STRING( BGl_string4049z00zz__pregexpz00, BgL_bgl_string4049za700za7za7_4181za7, "<anonymous:2577>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3949z00zz__pregexpz00, BgL_bgl_string3949za700za7za7_4182za7, "alpha", 5 );
DEFINE_STRING( BGl_string4051z00zz__pregexpz00, BgL_bgl_string4051za700za7za7_4183za7, "<anonymous:2576>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3951z00zz__pregexpz00, BgL_bgl_string3951za700za7za7_4184za7, "ascii", 5 );
DEFINE_STRING( BGl_string4053z00zz__pregexpz00, BgL_bgl_string4053za700za7za7_4185za7, "greedy-quantifier-operand-could-be-empty", 40 );
DEFINE_STRING( BGl_string3953z00zz__pregexpz00, BgL_bgl_string3953za700za7za7_4186za7, "blank", 5 );
DEFINE_STRING( BGl_string4054z00zz__pregexpz00, BgL_bgl_string4054za700za7za7_4187za7, "<anonymous:2590>", 16 );
DEFINE_STRING( BGl_string3954z00zz__pregexpz00, BgL_bgl_string3954za700za7za7_4188za7, "pregexp-check-if-in-char-class?", 31 );
DEFINE_STRING( BGl_string4055z00zz__pregexpz00, BgL_bgl_string4055za700za7za7_4189za7, "<anonymous:2590>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string4056z00zz__pregexpz00, BgL_bgl_string4056za700za7za7_4190za7, "fk:Wrong number of arguments", 28 );
DEFINE_STRING( BGl_string3956z00zz__pregexpz00, BgL_bgl_string3956za700za7za7_4191za7, "cntrl", 5 );
DEFINE_STRING( BGl_string4057z00zz__pregexpz00, BgL_bgl_string4057za700za7za7_4192za7, "", 0 );
DEFINE_STRING( BGl_string4058z00zz__pregexpz00, BgL_bgl_string4058za700za7za7_4193za7, "_pregexp", 8 );
DEFINE_STRING( BGl_string3958z00zz__pregexpz00, BgL_bgl_string3958za700za7za7_4194za7, "graph", 5 );
DEFINE_STRING( BGl_string4060z00zz__pregexpz00, BgL_bgl_string4060za700za7za7_4195za7, "pattern-must-be-compiled-or-string-regexp", 41 );
DEFINE_STRING( BGl_string3960z00zz__pregexpz00, BgL_bgl_string3960za700za7za7_4196za7, "lower", 5 );
DEFINE_STRING( BGl_string4062z00zz__pregexpz00, BgL_bgl_string4062za700za7za7_4197za7, "pregexp-match-positions", 23 );
DEFINE_STRING( BGl_string3962z00zz__pregexpz00, BgL_bgl_string3962za700za7za7_4198za7, "print", 5 );
DEFINE_STRING( BGl_string4063z00zz__pregexpz00, BgL_bgl_string4063za700za7za7_4199za7, "_pregexp-match-positions", 24 );
DEFINE_STRING( BGl_string4064z00zz__pregexpz00, BgL_bgl_string4064za700za7za7_4200za7, "pregexp-match", 13 );
DEFINE_STRING( BGl_string3964z00zz__pregexpz00, BgL_bgl_string3964za700za7za7_4201za7, "punct", 5 );
DEFINE_STRING( BGl_string4065z00zz__pregexpz00, BgL_bgl_string4065za700za7za7_4202za7, "<anonymous:2659>", 16 );
DEFINE_STRING( BGl_string4066z00zz__pregexpz00, BgL_bgl_string4066za700za7za7_4203za7, "_pregexp-match", 14 );
DEFINE_STRING( BGl_string3966z00zz__pregexpz00, BgL_bgl_string3966za700za7za7_4204za7, "upper", 5 );
DEFINE_STRING( BGl_string4067z00zz__pregexpz00, BgL_bgl_string4067za700za7za7_4205za7, "pregexp-split", 13 );
DEFINE_STRING( BGl_string4068z00zz__pregexpz00, BgL_bgl_string4068za700za7za7_4206za7, "_pregexp-split", 14 );
DEFINE_STRING( BGl_string3968z00zz__pregexpz00, BgL_bgl_string3968za700za7za7_4207za7, "xdigit", 6 );
DEFINE_STRING( BGl_string4070z00zz__pregexpz00, BgL_bgl_string4070za700za7za7_4208za7, "_pregexp-replace", 16 );
DEFINE_STRING( BGl_string4069z00zz__pregexpz00, BgL_bgl_string4069za700za7za7_4209za7, "pregexp-replace", 15 );
DEFINE_STRING( BGl_string3970z00zz__pregexpz00, BgL_bgl_string3970za700za7za7_4210za7, "sub'", 4 );
DEFINE_STRING( BGl_string4071z00zz__pregexpz00, BgL_bgl_string4071za700za7za7_4211za7, "_pregexp-replace*", 17 );
DEFINE_STRING( BGl_string4072z00zz__pregexpz00, BgL_bgl_string4072za700za7za7_4212za7, "pregexp-quote", 13 );
DEFINE_STRING( BGl_string3973z00zz__pregexpz00, BgL_bgl_string3973za700za7za7_4213za7, "pregexp-match-positions-aux", 27 );
DEFINE_STRING( BGl_string4074z00zz__pregexpz00, BgL_bgl_string4074za700za7za7_4214za7, "_pregexp-quote", 14 );
DEFINE_STRING( BGl_string3974z00zz__pregexpz00, BgL_bgl_string3974za700za7za7_4215za7, "<anonymous:2611>", 16 );
DEFINE_STRING( BGl_string4075z00zz__pregexpz00, BgL_bgl_string4075za700za7za7_4216za7, "__pregexp", 9 );
DEFINE_STRING( BGl_string3975z00zz__pregexpz00, BgL_bgl_string3975za700za7za7_4217za7, "map", 3 );
DEFINE_STRING( BGl_string3976z00zz__pregexpz00, BgL_bgl_string3976za700za7za7_4218za7, "argument not a list", 19 );
DEFINE_STRING( BGl_string3977z00zz__pregexpz00, BgL_bgl_string3977za700za7za7_4219za7, "loup-one-of-chars", 17 );
DEFINE_STRING( BGl_string3978z00zz__pregexpz00, BgL_bgl_string3978za700za7za7_4220za7, "loup-one-of-chars:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3979z00zz__pregexpz00, BgL_bgl_string3979za700za7za7_4221za7, "sub:Wrong number of arguments", 29 );
DEFINE_STRING( BGl_string3982z00zz__pregexpz00, BgL_bgl_string3982za700za7za7_4222za7, "sk", 2 );
DEFINE_STRING( BGl_string3984z00zz__pregexpz00, BgL_bgl_string3984za700za7za7_4223za7, "i", 1 );
DEFINE_STRING( BGl_string3987z00zz__pregexpz00, BgL_bgl_string3987za700za7za7_4224za7, "fun2463", 7 );
DEFINE_STRING( BGl_string3989z00zz__pregexpz00, BgL_bgl_string3989za700za7za7_4225za7, "arg2462", 7 );
DEFINE_STRING( BGl_string3991z00zz__pregexpz00, BgL_bgl_string3991za700za7za7_4226za7, "re", 2 );
DEFINE_STRING( BGl_string3994z00zz__pregexpz00, BgL_bgl_string3994za700za7za7_4227za7, "arg2461", 7 );
DEFINE_STRING( BGl_string3997z00zz__pregexpz00, BgL_bgl_string3997za700za7za7_4228za7, "arg2467", 7 );
extern obj_t BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00;
extern obj_t BGl_charzd3zf3zd2envzf2zz__r4_characters_6_6z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pregexpzd2matchzd2positionszd2envzd2zz__pregexpz00, BgL_bgl__pregexpza7d2match4229za7, va_generic_entry, BGl__pregexpzd2matchzd2positionsz00zz__pregexpz00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pregexpzd2quotezd2envz00zz__pregexpz00, BgL_bgl__pregexpza7d2quote4230za7, BGl__pregexpzd2quotezd2zz__pregexpz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pregexpzd2replaceza2zd2envza2zz__pregexpz00, BgL_bgl__pregexpza7d2repla4231za7, BGl__pregexpzd2replaceza2z70zz__pregexpz00, 0L, BUNSPEC, 3 );
extern obj_t BGl_charzd2cizd3zf3zd2envz20zz__r4_characters_6_6z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pregexpzd2splitzd2envz00zz__pregexpz00, BgL_bgl__pregexpza7d2split4232za7, BGl__pregexpzd2splitzd2zz__pregexpz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pregexpzd2matchzd2envz00zz__pregexpz00, BgL_bgl__pregexpza7d2match4233za7, va_generic_entry, BGl__pregexpzd2matchzd2zz__pregexpz00, BUNSPEC, -3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4014z00zz__pregexpz00, BgL_bgl_za7c3anonymousza7a324234z00, BGl_zc3anonymousza32534ze3z83zz__pregexpz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4015z00zz__pregexpz00, BgL_bgl_za7c3anonymousza7a324235z00, BGl_zc3anonymousza32538ze3z83zz__pregexpz00, 0L, BUNSPEC, 0 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__pregexpz00(long BgL_checksumz00_4616, char * BgL_fromz00_4617)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__pregexpz00))
{ 
BGl_requirezd2initializa7ationz75zz__pregexpz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__pregexpz00(); 
BGl_importedzd2moduleszd2initz00zz__pregexpz00(); 
BGl_toplevelzd2initzd2zz__pregexpz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__pregexpz00()
{ AN_OBJECT;
{ /* Llib/pregexp.scm 17 */
BGl_keyword3845z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3846z00zz__pregexpz00); 
BGl_keyword3847z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3848z00zz__pregexpz00); 
BGl_keyword3853z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3854z00zz__pregexpz00); 
BGl_keyword3855z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3856z00zz__pregexpz00); 
BGl_keyword3857z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3858z00zz__pregexpz00); 
BGl_keyword3859z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3860z00zz__pregexpz00); 
BGl_keyword3861z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3862z00zz__pregexpz00); 
BGl_keyword3863z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3864z00zz__pregexpz00); 
BGl_symbol3865z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3866z00zz__pregexpz00); 
BGl_symbol3867z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3850z00zz__pregexpz00); 
BGl_keyword3872z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3873z00zz__pregexpz00); 
BGl_keyword3874z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3875z00zz__pregexpz00); 
BGl_keyword3876z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3877z00zz__pregexpz00); 
BGl_list3878z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3861z00zz__pregexpz00, 
MAKE_PAIR(BGl_keyword3876z00zz__pregexpz00, BNIL)); 
BGl_keyword3879z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3880z00zz__pregexpz00); 
BGl_list3881z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3861z00zz__pregexpz00, 
MAKE_PAIR(BGl_keyword3879z00zz__pregexpz00, BNIL)); 
BGl_keyword3882z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3883z00zz__pregexpz00); 
BGl_list3884z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3861z00zz__pregexpz00, 
MAKE_PAIR(BGl_keyword3882z00zz__pregexpz00, BNIL)); 
BGl_symbol3885z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3886z00zz__pregexpz00); 
BGl_keyword3889z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3890z00zz__pregexpz00); 
BGl_list3888z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3889z00zz__pregexpz00, BNIL); 
BGl_symbol3891z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3887z00zz__pregexpz00); 
BGl_keyword3892z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3893z00zz__pregexpz00); 
BGl_keyword3894z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3895z00zz__pregexpz00); 
BGl_keyword3897z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3898z00zz__pregexpz00); 
BGl_list3896z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3897z00zz__pregexpz00, BNIL); 
BGl_keyword3900z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3901z00zz__pregexpz00); 
BGl_list3899z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3900z00zz__pregexpz00, BNIL); 
BGl_keyword3903z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3904z00zz__pregexpz00); 
BGl_list3902z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3903z00zz__pregexpz00, BNIL); 
BGl_keyword3906z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3907z00zz__pregexpz00); 
BGl_list3905z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3906z00zz__pregexpz00, BNIL); 
BGl_keyword3909z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3910z00zz__pregexpz00); 
BGl_list3908z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3909z00zz__pregexpz00, BNIL); 
BGl_symbol3912z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3911z00zz__pregexpz00); 
BGl_keyword3914z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3915z00zz__pregexpz00); 
BGl_symbol3916z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3917z00zz__pregexpz00); 
BGl_symbol3918z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3919z00zz__pregexpz00); 
BGl_symbol3920z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3921z00zz__pregexpz00); 
BGl_symbol3922z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3923z00zz__pregexpz00); 
BGl_symbol3925z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3913z00zz__pregexpz00); 
BGl_symbol3926z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3927z00zz__pregexpz00); 
BGl_symbol3929z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3930z00zz__pregexpz00); 
BGl_keyword3931z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3932z00zz__pregexpz00); 
BGl_keyword3933z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3934z00zz__pregexpz00); 
BGl_symbol3939z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3940z00zz__pregexpz00); 
BGl_symbol3941z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3942z00zz__pregexpz00); 
BGl_list3938z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3941z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3941z00zz__pregexpz00, BNIL))); 
BGl_keyword3946z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3947z00zz__pregexpz00); 
BGl_keyword3948z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3949z00zz__pregexpz00); 
BGl_keyword3950z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3951z00zz__pregexpz00); 
BGl_keyword3952z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3953z00zz__pregexpz00); 
BGl_keyword3955z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3956z00zz__pregexpz00); 
BGl_keyword3957z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3958z00zz__pregexpz00); 
BGl_keyword3959z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3960z00zz__pregexpz00); 
BGl_keyword3961z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3962z00zz__pregexpz00); 
BGl_keyword3963z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3964z00zz__pregexpz00); 
BGl_keyword3965z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3966z00zz__pregexpz00); 
BGl_keyword3967z00zz__pregexpz00 = 
bstring_to_keyword(BGl_string3968z00zz__pregexpz00); 
BGl_symbol3969z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3954z00zz__pregexpz00); 
BGl_symbol3981z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3982z00zz__pregexpz00); 
BGl_symbol3983z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3984z00zz__pregexpz00); 
BGl_list3980z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3983z00zz__pregexpz00, BNIL)))); 
BGl_symbol3986z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3987z00zz__pregexpz00); 
BGl_symbol3988z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3989z00zz__pregexpz00); 
BGl_symbol3990z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3991z00zz__pregexpz00); 
BGl_list3985z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3986z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3986z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3988z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3990z00zz__pregexpz00, BNIL))))); 
BGl_symbol3993z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3994z00zz__pregexpz00); 
BGl_list3992z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3993z00zz__pregexpz00, BNIL)))); 
BGl_symbol3996z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3997z00zz__pregexpz00); 
BGl_list3995z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3996z00zz__pregexpz00, BNIL)))); 
BGl_symbol3999z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4000z00zz__pregexpz00); 
BGl_symbol4001z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4002z00zz__pregexpz00); 
BGl_symbol4003z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4004z00zz__pregexpz00); 
BGl_list3998z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3999z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3999z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol4001z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol4003z00zz__pregexpz00, BNIL))))); 
BGl_symbol4006z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4007z00zz__pregexpz00); 
BGl_list4005z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3999z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3999z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol4003z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol4006z00zz__pregexpz00, BNIL))))); 
BGl_symbol4009z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4010z00zz__pregexpz00); 
BGl_list4008z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol4009z00zz__pregexpz00, BNIL)))); 
BGl_symbol4011z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string3973z00zz__pregexpz00); 
BGl_symbol4012z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4013z00zz__pregexpz00); 
BGl_list4016z00zz__pregexpz00 = 
MAKE_PAIR(BGl_keyword3914z00zz__pregexpz00, 
MAKE_PAIR(
BBOOL(((bool_t)0)), 
MAKE_PAIR(
BINT(((long)0)), 
MAKE_PAIR(
BBOOL(((bool_t)0)), 
MAKE_PAIR(BGl_keyword3859z00zz__pregexpz00, BNIL))))); 
BGl_symbol4021z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4022z00zz__pregexpz00); 
BGl_list4020z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol4021z00zz__pregexpz00, BNIL)))); 
BGl_symbol4033z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4034z00zz__pregexpz00); 
BGl_list4032z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol4033z00zz__pregexpz00, BNIL)))); 
BGl_symbol4042z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4043z00zz__pregexpz00); 
BGl_list4041z00zz__pregexpz00 = 
MAKE_PAIR(BGl_symbol3939z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol3981z00zz__pregexpz00, 
MAKE_PAIR(BGl_symbol4042z00zz__pregexpz00, BNIL)))); 
BGl_symbol4052z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4053z00zz__pregexpz00); 
BGl_symbol4059z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4060z00zz__pregexpz00); 
BGl_symbol4061z00zz__pregexpz00 = 
bstring_to_symbol(BGl_string4062z00zz__pregexpz00); 
return ( 
BGl_list4073z00zz__pregexpz00 = 
MAKE_PAIR(
BCHAR(((unsigned char)'\\')), 
MAKE_PAIR(
BCHAR(((unsigned char)'.')), 
MAKE_PAIR(
BCHAR(((unsigned char)'?')), 
MAKE_PAIR(
BCHAR(((unsigned char)'*')), 
MAKE_PAIR(
BCHAR(((unsigned char)'+')), 
MAKE_PAIR(
BCHAR(((unsigned char)'|')), 
MAKE_PAIR(
BCHAR(((unsigned char)'^')), 
MAKE_PAIR(
BCHAR(((unsigned char)'$')), 
MAKE_PAIR(
BCHAR(((unsigned char)'[')), 
MAKE_PAIR(
BCHAR(((unsigned char)']')), 
MAKE_PAIR(
BCHAR(((unsigned char)'{')), 
MAKE_PAIR(
BCHAR(((unsigned char)'}')), 
MAKE_PAIR(
BCHAR(((unsigned char)'(')), 
MAKE_PAIR(
BCHAR(((unsigned char)')')), BNIL)))))))))))))), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__pregexpz00()
{ AN_OBJECT;
{ /* Llib/pregexp.scm 17 */
BGl_za2pregexpzd2versionza2zd2zz__pregexpz00 = 
BINT(((long)20050502)); 
BGl_za2pregexpzd2commentzd2charza2z00zz__pregexpz00 = 
BCHAR(((unsigned char)';')); 
BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__pregexpz00 = 
BINT(((long)0)); 
{ /* Llib/pregexp.scm 77 */
long BgL_arg1977z00_839;
{ /* Llib/pregexp.scm 77 */
obj_t BgL_auxz00_4791;
{ /* Llib/pregexp.scm 77 */
obj_t BgL_aux3180z00_3846;
BgL_aux3180z00_3846 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
BINT(((long)13)), BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__pregexpz00); 
if(
INTEGERP(BgL_aux3180z00_3846))
{ /* Llib/pregexp.scm 77 */
BgL_auxz00_4791 = BgL_aux3180z00_3846
; }  else 
{ 
obj_t BgL_auxz00_4796;
BgL_auxz00_4796 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)2524)), BGl_string3841z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3180z00_3846); 
FAILURE(BgL_auxz00_4796,BFALSE,BFALSE);} } 
BgL_arg1977z00_839 = 
(long)CINT(BgL_auxz00_4791); } 
BGl_za2pregexpzd2returnzd2charza2z00zz__pregexpz00 = 
BCHAR(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_arg1977z00_839)); } 
{ /* Llib/pregexp.scm 82 */
long BgL_arg1979z00_840;
{ /* Llib/pregexp.scm 82 */
obj_t BgL_auxz00_4803;
{ /* Llib/pregexp.scm 82 */
obj_t BgL_aux3182z00_3848;
BgL_aux3182z00_3848 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
BINT(((long)9)), BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__pregexpz00); 
if(
INTEGERP(BgL_aux3182z00_3848))
{ /* Llib/pregexp.scm 82 */
BgL_auxz00_4803 = BgL_aux3182z00_3848
; }  else 
{ 
obj_t BgL_auxz00_4808;
BgL_auxz00_4808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)2646)), BGl_string3841z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3182z00_3848); 
FAILURE(BgL_auxz00_4808,BFALSE,BFALSE);} } 
BgL_arg1979z00_840 = 
(long)CINT(BgL_auxz00_4803); } 
BGl_za2pregexpzd2tabzd2charza2z00zz__pregexpz00 = 
BCHAR(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_arg1979z00_840)); } 
return ( 
BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 = BTRUE, BUNSPEC) ;} 
}



/* pregexp-reverse! */
obj_t BGl_pregexpzd2reversez12zc0zz__pregexpz00(obj_t BgL_sz00_3)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 86 */
{ 
obj_t BgL_sz00_2342;obj_t BgL_rz00_2343;
BgL_sz00_2342 = BgL_sz00_3; 
BgL_rz00_2343 = BNIL; 
BgL_loopz00_2341:
if(
NULLP(BgL_sz00_2342))
{ /* Llib/pregexp.scm 89 */
return BgL_rz00_2343;}  else 
{ /* Llib/pregexp.scm 89 */
obj_t BgL_dz00_2347;
{ /* Llib/pregexp.scm 89 */
obj_t BgL_pairz00_2349;
if(
PAIRP(BgL_sz00_2342))
{ /* Llib/pregexp.scm 89 */
BgL_pairz00_2349 = BgL_sz00_2342; }  else 
{ 
obj_t BgL_auxz00_4819;
BgL_auxz00_4819 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)2795)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_sz00_2342); 
FAILURE(BgL_auxz00_4819,BFALSE,BFALSE);} 
BgL_dz00_2347 = 
CDR(BgL_pairz00_2349); } 
SET_CDR(BgL_sz00_2342, BgL_rz00_2343); 
{ 
obj_t BgL_rz00_4826;obj_t BgL_sz00_4825;
BgL_sz00_4825 = BgL_dz00_2347; 
BgL_rz00_4826 = BgL_sz00_2342; 
BgL_rz00_2343 = BgL_rz00_4826; 
BgL_sz00_2342 = BgL_sz00_4825; 
goto BgL_loopz00_2341;} } } } 
}



/* pregexp-read-pattern */
obj_t BGl_pregexpzd2readzd2patternz00zz__pregexpz00(obj_t BgL_sz00_4, obj_t BgL_iz00_5, long BgL_nz00_6)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 99 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_5, 
BINT(BgL_nz00_6)))
{ /* Llib/pregexp.scm 103 */
obj_t BgL_arg1986z00_853;
{ /* Llib/pregexp.scm 103 */
obj_t BgL_arg1989z00_856;obj_t BgL_arg1990z00_857;
BgL_arg1989z00_856 = BGl_keyword3845z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 103 */
obj_t BgL_list1993z00_860;
BgL_list1993z00_860 = 
MAKE_PAIR(BGl_keyword3847z00zz__pregexpz00, BNIL); 
BgL_arg1990z00_857 = BgL_list1993z00_860; } 
{ /* Llib/pregexp.scm 103 */
obj_t BgL_list1991z00_858;
{ /* Llib/pregexp.scm 103 */
obj_t BgL_arg1992z00_859;
BgL_arg1992z00_859 = 
MAKE_PAIR(BgL_arg1990z00_857, BNIL); 
BgL_list1991z00_858 = 
MAKE_PAIR(BgL_arg1989z00_856, BgL_arg1992z00_859); } 
BgL_arg1986z00_853 = BgL_list1991z00_858; } } 
{ /* Llib/pregexp.scm 102 */
obj_t BgL_list1987z00_854;
{ /* Llib/pregexp.scm 102 */
obj_t BgL_arg1988z00_855;
BgL_arg1988z00_855 = 
MAKE_PAIR(BgL_iz00_5, BNIL); 
BgL_list1987z00_854 = 
MAKE_PAIR(BgL_arg1986z00_853, BgL_arg1988z00_855); } 
return BgL_list1987z00_854;} }  else 
{ 
obj_t BgL_branchesz00_863;obj_t BgL_iz00_864;
BgL_branchesz00_863 = BNIL; 
BgL_iz00_864 = BgL_iz00_5; 
BgL_zc3anonymousza31994ze3z83_865:
{ /* Llib/pregexp.scm 105 */
bool_t BgL_testz00_4835;
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_864, 
BINT(BgL_nz00_6)))
{ /* Llib/pregexp.scm 105 */
BgL_testz00_4835 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 106 */
unsigned char BgL_auxz00_4839;
{ /* Llib/pregexp.scm 106 */
long BgL_kz00_2373;
{ /* Llib/pregexp.scm 106 */
obj_t BgL_auxz00_4840;
if(
INTEGERP(BgL_iz00_864))
{ /* Llib/pregexp.scm 106 */
BgL_auxz00_4840 = BgL_iz00_864
; }  else 
{ 
obj_t BgL_auxz00_4843;
BgL_auxz00_4843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3265)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_864); 
FAILURE(BgL_auxz00_4843,BFALSE,BFALSE);} 
BgL_kz00_2373 = 
(long)CINT(BgL_auxz00_4840); } 
{ /* Llib/pregexp.scm 106 */
long BgL_l3046z00_3712;
BgL_l3046z00_3712 = 
STRING_LENGTH(BgL_sz00_4); 
if(
BOUND_CHECK(BgL_kz00_2373, BgL_l3046z00_3712))
{ /* Llib/pregexp.scm 106 */
BgL_auxz00_4839 = 
STRING_REF(BgL_sz00_4, BgL_kz00_2373)
; }  else 
{ 
obj_t BgL_auxz00_4852;
BgL_auxz00_4852 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3251)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2373), BgL_sz00_4); 
FAILURE(BgL_auxz00_4852,BFALSE,BFALSE);} } } 
BgL_testz00_4835 = 
(BgL_auxz00_4839==((unsigned char)')')); } 
if(BgL_testz00_4835)
{ /* Llib/pregexp.scm 107 */
obj_t BgL_arg1996z00_867;
BgL_arg1996z00_867 = 
MAKE_PAIR(BGl_keyword3845z00zz__pregexpz00, 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_branchesz00_863)); 
{ /* Llib/pregexp.scm 107 */
obj_t BgL_list1997z00_868;
{ /* Llib/pregexp.scm 107 */
obj_t BgL_arg1998z00_869;
BgL_arg1998z00_869 = 
MAKE_PAIR(BgL_iz00_864, BNIL); 
BgL_list1997z00_868 = 
MAKE_PAIR(BgL_arg1996z00_867, BgL_arg1998z00_869); } 
return BgL_list1997z00_868;} }  else 
{ /* Llib/pregexp.scm 108 */
obj_t BgL_vvz00_872;
{ /* Llib/pregexp.scm 110 */
obj_t BgL_arg2004z00_876;
{ /* Llib/pregexp.scm 110 */
bool_t BgL_testz00_4862;
{ /* Llib/pregexp.scm 110 */
unsigned char BgL_auxz00_4863;
{ /* Llib/pregexp.scm 110 */
long BgL_kz00_2379;
{ /* Llib/pregexp.scm 110 */
obj_t BgL_auxz00_4864;
if(
INTEGERP(BgL_iz00_864))
{ /* Llib/pregexp.scm 110 */
BgL_auxz00_4864 = BgL_iz00_864
; }  else 
{ 
obj_t BgL_auxz00_4867;
BgL_auxz00_4867 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3462)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_864); 
FAILURE(BgL_auxz00_4867,BFALSE,BFALSE);} 
BgL_kz00_2379 = 
(long)CINT(BgL_auxz00_4864); } 
{ /* Llib/pregexp.scm 110 */
long BgL_l3050z00_3716;
BgL_l3050z00_3716 = 
STRING_LENGTH(BgL_sz00_4); 
if(
BOUND_CHECK(BgL_kz00_2379, BgL_l3050z00_3716))
{ /* Llib/pregexp.scm 110 */
BgL_auxz00_4863 = 
STRING_REF(BgL_sz00_4, BgL_kz00_2379)
; }  else 
{ 
obj_t BgL_auxz00_4876;
BgL_auxz00_4876 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3448)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2379), BgL_sz00_4); 
FAILURE(BgL_auxz00_4876,BFALSE,BFALSE);} } } 
BgL_testz00_4862 = 
(BgL_auxz00_4863==((unsigned char)'|')); } 
if(BgL_testz00_4862)
{ /* Llib/pregexp.scm 110 */
BgL_arg2004z00_876 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_864, 
BINT(((long)1))); }  else 
{ /* Llib/pregexp.scm 110 */
BgL_arg2004z00_876 = BgL_iz00_864; } } 
BgL_vvz00_872 = 
BGl_pregexpzd2readzd2branchz00zz__pregexpz00(BgL_sz00_4, BgL_arg2004z00_876, BgL_nz00_6); } 
{ /* Llib/pregexp.scm 111 */
obj_t BgL_arg2001z00_873;obj_t BgL_arg2002z00_874;
{ /* Llib/pregexp.scm 111 */
obj_t BgL_arg2003z00_875;
{ /* Llib/pregexp.scm 111 */
obj_t BgL_pairz00_2382;
if(
PAIRP(BgL_vvz00_872))
{ /* Llib/pregexp.scm 111 */
BgL_pairz00_2382 = BgL_vvz00_872; }  else 
{ 
obj_t BgL_auxz00_4887;
BgL_auxz00_4887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3519)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_vvz00_872); 
FAILURE(BgL_auxz00_4887,BFALSE,BFALSE);} 
BgL_arg2003z00_875 = 
CAR(BgL_pairz00_2382); } 
BgL_arg2001z00_873 = 
MAKE_PAIR(BgL_arg2003z00_875, BgL_branchesz00_863); } 
{ /* Llib/pregexp.scm 111 */
obj_t BgL_pairz00_2383;
BgL_pairz00_2383 = BgL_vvz00_872; 
{ /* Llib/pregexp.scm 111 */
obj_t BgL_pairz00_2386;
{ /* Llib/pregexp.scm 111 */
obj_t BgL_aux3196z00_3862;
BgL_aux3196z00_3862 = 
CDR(BgL_pairz00_2383); 
if(
PAIRP(BgL_aux3196z00_3862))
{ /* Llib/pregexp.scm 111 */
BgL_pairz00_2386 = BgL_aux3196z00_3862; }  else 
{ 
obj_t BgL_auxz00_4896;
BgL_auxz00_4896 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3533)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3196z00_3862); 
FAILURE(BgL_auxz00_4896,BFALSE,BFALSE);} } 
BgL_arg2002z00_874 = 
CAR(BgL_pairz00_2386); } } 
{ 
obj_t BgL_iz00_4902;obj_t BgL_branchesz00_4901;
BgL_branchesz00_4901 = BgL_arg2001z00_873; 
BgL_iz00_4902 = BgL_arg2002z00_874; 
BgL_iz00_864 = BgL_iz00_4902; 
BgL_branchesz00_863 = BgL_branchesz00_4901; 
goto BgL_zc3anonymousza31994ze3z83_865;} } } } } } 
}



/* pregexp-read-branch */
obj_t BGl_pregexpzd2readzd2branchz00zz__pregexpz00(obj_t BgL_sz00_7, obj_t BgL_iz00_8, long BgL_nz00_9)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 113 */
{ 
obj_t BgL_piecesz00_884;obj_t BgL_iz00_885;
BgL_piecesz00_884 = BNIL; 
BgL_iz00_885 = BgL_iz00_8; 
BgL_zc3anonymousza32009ze3z83_886:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_885, 
BINT(BgL_nz00_9)))
{ /* Llib/pregexp.scm 117 */
obj_t BgL_arg2011z00_888;
BgL_arg2011z00_888 = 
MAKE_PAIR(BGl_keyword3847z00zz__pregexpz00, 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_piecesz00_884)); 
{ /* Llib/pregexp.scm 117 */
obj_t BgL_list2012z00_889;
{ /* Llib/pregexp.scm 117 */
obj_t BgL_arg2013z00_890;
BgL_arg2013z00_890 = 
MAKE_PAIR(BgL_iz00_885, BNIL); 
BgL_list2012z00_889 = 
MAKE_PAIR(BgL_arg2011z00_888, BgL_arg2013z00_890); } 
return BgL_list2012z00_889;} }  else 
{ /* Llib/pregexp.scm 118 */
bool_t BgL_testz00_4910;
{ /* Llib/pregexp.scm 118 */
unsigned char BgL_cz00_903;
{ /* Llib/pregexp.scm 118 */
long BgL_kz00_2390;
{ /* Llib/pregexp.scm 118 */
obj_t BgL_auxz00_4911;
if(
INTEGERP(BgL_iz00_885))
{ /* Llib/pregexp.scm 118 */
BgL_auxz00_4911 = BgL_iz00_885
; }  else 
{ 
obj_t BgL_auxz00_4914;
BgL_auxz00_4914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3752)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_885); 
FAILURE(BgL_auxz00_4914,BFALSE,BFALSE);} 
BgL_kz00_2390 = 
(long)CINT(BgL_auxz00_4911); } 
{ /* Llib/pregexp.scm 118 */
long BgL_l3054z00_3720;
BgL_l3054z00_3720 = 
STRING_LENGTH(BgL_sz00_7); 
if(
BOUND_CHECK(BgL_kz00_2390, BgL_l3054z00_3720))
{ /* Llib/pregexp.scm 118 */
BgL_cz00_903 = 
STRING_REF(BgL_sz00_7, BgL_kz00_2390); }  else 
{ 
obj_t BgL_auxz00_4923;
BgL_auxz00_4923 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3738)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2390), BgL_sz00_7); 
FAILURE(BgL_auxz00_4923,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 119 */
bool_t BgL__ortest_1827z00_904;
BgL__ortest_1827z00_904 = 
(BgL_cz00_903==((unsigned char)'|')); 
if(BgL__ortest_1827z00_904)
{ /* Llib/pregexp.scm 119 */
BgL_testz00_4910 = BgL__ortest_1827z00_904
; }  else 
{ /* Llib/pregexp.scm 119 */
BgL_testz00_4910 = 
(BgL_cz00_903==((unsigned char)')'))
; } } } 
if(BgL_testz00_4910)
{ /* Llib/pregexp.scm 121 */
obj_t BgL_arg2018z00_894;
BgL_arg2018z00_894 = 
MAKE_PAIR(BGl_keyword3847z00zz__pregexpz00, 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_piecesz00_884)); 
{ /* Llib/pregexp.scm 121 */
obj_t BgL_list2019z00_895;
{ /* Llib/pregexp.scm 121 */
obj_t BgL_arg2021z00_896;
BgL_arg2021z00_896 = 
MAKE_PAIR(BgL_iz00_885, BNIL); 
BgL_list2019z00_895 = 
MAKE_PAIR(BgL_arg2018z00_894, BgL_arg2021z00_896); } 
return BgL_list2019z00_895;} }  else 
{ /* Llib/pregexp.scm 122 */
obj_t BgL_vvz00_899;
BgL_vvz00_899 = 
BGl_pregexpzd2readzd2piecez00zz__pregexpz00(BgL_sz00_7, BgL_iz00_885, BgL_nz00_9); 
{ /* Llib/pregexp.scm 123 */
obj_t BgL_arg2024z00_900;obj_t BgL_arg2025z00_901;
{ /* Llib/pregexp.scm 123 */
obj_t BgL_arg2027z00_902;
{ /* Llib/pregexp.scm 123 */
obj_t BgL_pairz00_2397;
if(
PAIRP(BgL_vvz00_899))
{ /* Llib/pregexp.scm 123 */
BgL_pairz00_2397 = BgL_vvz00_899; }  else 
{ 
obj_t BgL_auxz00_4938;
BgL_auxz00_4938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3983)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_vvz00_899); 
FAILURE(BgL_auxz00_4938,BFALSE,BFALSE);} 
BgL_arg2027z00_902 = 
CAR(BgL_pairz00_2397); } 
BgL_arg2024z00_900 = 
MAKE_PAIR(BgL_arg2027z00_902, BgL_piecesz00_884); } 
{ /* Llib/pregexp.scm 123 */
obj_t BgL_pairz00_2398;
BgL_pairz00_2398 = BgL_vvz00_899; 
{ /* Llib/pregexp.scm 123 */
obj_t BgL_pairz00_2401;
{ /* Llib/pregexp.scm 123 */
obj_t BgL_aux3204z00_3870;
BgL_aux3204z00_3870 = 
CDR(BgL_pairz00_2398); 
if(
PAIRP(BgL_aux3204z00_3870))
{ /* Llib/pregexp.scm 123 */
BgL_pairz00_2401 = BgL_aux3204z00_3870; }  else 
{ 
obj_t BgL_auxz00_4947;
BgL_auxz00_4947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)3995)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3204z00_3870); 
FAILURE(BgL_auxz00_4947,BFALSE,BFALSE);} } 
BgL_arg2025z00_901 = 
CAR(BgL_pairz00_2401); } } 
{ 
obj_t BgL_iz00_4953;obj_t BgL_piecesz00_4952;
BgL_piecesz00_4952 = BgL_arg2024z00_900; 
BgL_iz00_4953 = BgL_arg2025z00_901; 
BgL_iz00_885 = BgL_iz00_4953; 
BgL_piecesz00_884 = BgL_piecesz00_4952; 
goto BgL_zc3anonymousza32009ze3z83_886;} } } } } } 
}



/* pregexp-read-piece */
obj_t BGl_pregexpzd2readzd2piecez00zz__pregexpz00(obj_t BgL_sz00_10, obj_t BgL_iz00_11, long BgL_nz00_12)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 125 */
{ /* Llib/pregexp.scm 127 */
unsigned char BgL_cz00_906;
{ /* Llib/pregexp.scm 127 */
long BgL_kz00_2403;
{ /* Llib/pregexp.scm 127 */
obj_t BgL_auxz00_4954;
if(
INTEGERP(BgL_iz00_11))
{ /* Llib/pregexp.scm 127 */
BgL_auxz00_4954 = BgL_iz00_11
; }  else 
{ 
obj_t BgL_auxz00_4957;
BgL_auxz00_4957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4085)), BGl_string3850z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_11); 
FAILURE(BgL_auxz00_4957,BFALSE,BFALSE);} 
BgL_kz00_2403 = 
(long)CINT(BgL_auxz00_4954); } 
{ /* Llib/pregexp.scm 127 */
long BgL_l3058z00_3724;
BgL_l3058z00_3724 = 
STRING_LENGTH(BgL_sz00_10); 
if(
BOUND_CHECK(BgL_kz00_2403, BgL_l3058z00_3724))
{ /* Llib/pregexp.scm 127 */
BgL_cz00_906 = 
STRING_REF(BgL_sz00_10, BgL_kz00_2403); }  else 
{ 
obj_t BgL_auxz00_4966;
BgL_auxz00_4966 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4071)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2403), BgL_sz00_10); 
FAILURE(BgL_auxz00_4966,BFALSE,BFALSE);} } } 
{ 

switch( BgL_cz00_906) { case ((unsigned char)'^') : 

{ /* Llib/pregexp.scm 129 */
obj_t BgL_arg2029z00_910;obj_t BgL_arg2030z00_911;
BgL_arg2029z00_910 = BGl_keyword3855z00zz__pregexpz00; 
BgL_arg2030z00_911 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 129 */
obj_t BgL_list2031z00_912;
{ /* Llib/pregexp.scm 129 */
obj_t BgL_arg2033z00_913;
BgL_arg2033z00_913 = 
MAKE_PAIR(BgL_arg2030z00_911, BNIL); 
BgL_list2031z00_912 = 
MAKE_PAIR(BgL_arg2029z00_910, BgL_arg2033z00_913); } 
return BgL_list2031z00_912;} } break;case ((unsigned char)'$') : 

{ /* Llib/pregexp.scm 130 */
obj_t BgL_arg2034z00_914;obj_t BgL_arg2036z00_915;
BgL_arg2034z00_914 = BGl_keyword3857z00zz__pregexpz00; 
BgL_arg2036z00_915 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 130 */
obj_t BgL_list2037z00_916;
{ /* Llib/pregexp.scm 130 */
obj_t BgL_arg2038z00_917;
BgL_arg2038z00_917 = 
MAKE_PAIR(BgL_arg2036z00_915, BNIL); 
BgL_list2037z00_916 = 
MAKE_PAIR(BgL_arg2034z00_914, BgL_arg2038z00_917); } 
return BgL_list2037z00_916;} } break;case ((unsigned char)'.') : 

{ /* Llib/pregexp.scm 132 */
obj_t BgL_arg2039z00_918;
{ /* Llib/pregexp.scm 132 */
obj_t BgL_arg2040z00_919;obj_t BgL_arg2041z00_920;
BgL_arg2040z00_919 = BGl_keyword3859z00zz__pregexpz00; 
BgL_arg2041z00_920 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 132 */
obj_t BgL_list2042z00_921;
{ /* Llib/pregexp.scm 132 */
obj_t BgL_arg2043z00_922;
BgL_arg2043z00_922 = 
MAKE_PAIR(BgL_arg2041z00_920, BNIL); 
BgL_list2042z00_921 = 
MAKE_PAIR(BgL_arg2040z00_919, BgL_arg2043z00_922); } 
BgL_arg2039z00_918 = BgL_list2042z00_921; } } 
return 
BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(BgL_arg2039z00_918, BgL_sz00_10, BgL_nz00_12);} break;case ((unsigned char)'[') : 

{ /* Llib/pregexp.scm 133 */
obj_t BgL_izb21zb2_923;
BgL_izb21zb2_923 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 135 */
obj_t BgL_arg2044z00_924;
{ /* Llib/pregexp.scm 135 */
obj_t BgL_aux1832z00_926;
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_izb21zb2_923, 
BINT(BgL_nz00_12)))
{ /* Llib/pregexp.scm 135 */
long BgL_kz00_2411;
{ /* Llib/pregexp.scm 135 */
obj_t BgL_auxz00_4989;
if(
INTEGERP(BgL_izb21zb2_923))
{ /* Llib/pregexp.scm 135 */
BgL_auxz00_4989 = BgL_izb21zb2_923
; }  else 
{ 
obj_t BgL_auxz00_4992;
BgL_auxz00_4992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4408)), BGl_string3850z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_izb21zb2_923); 
FAILURE(BgL_auxz00_4992,BFALSE,BFALSE);} 
BgL_kz00_2411 = 
(long)CINT(BgL_auxz00_4989); } 
{ /* Llib/pregexp.scm 135 */
long BgL_l3066z00_3732;
BgL_l3066z00_3732 = 
STRING_LENGTH(BgL_sz00_10); 
if(
BOUND_CHECK(BgL_kz00_2411, BgL_l3066z00_3732))
{ /* Llib/pregexp.scm 135 */
BgL_aux1832z00_926 = 
BCHAR(
STRING_REF(BgL_sz00_10, BgL_kz00_2411)); }  else 
{ 
obj_t BgL_auxz00_5002;
BgL_auxz00_5002 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4394)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2411), BgL_sz00_10); 
FAILURE(BgL_auxz00_5002,BFALSE,BFALSE);} } }  else 
{ /* Llib/pregexp.scm 135 */
BgL_aux1832z00_926 = BFALSE; } 
if(
CHARP(BgL_aux1832z00_926))
{ /* Llib/pregexp.scm 135 */
switch( 
CCHAR(BgL_aux1832z00_926)) { case ((unsigned char)'^') : 

{ /* Llib/pregexp.scm 137 */
obj_t BgL_vvz00_928;
BgL_vvz00_928 = 
BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00(BgL_sz00_10, 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11, 
BINT(((long)2))), BgL_nz00_12); 
{ /* Llib/pregexp.scm 138 */
obj_t BgL_arg2046z00_929;obj_t BgL_arg2047z00_930;
{ /* Llib/pregexp.scm 138 */
obj_t BgL_arg2052z00_933;obj_t BgL_arg2053z00_934;
BgL_arg2052z00_933 = BGl_keyword3861z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 138 */
obj_t BgL_pairz00_2412;
if(
PAIRP(BgL_vvz00_928))
{ /* Llib/pregexp.scm 138 */
BgL_pairz00_2412 = BgL_vvz00_928; }  else 
{ 
obj_t BgL_auxz00_5014;
BgL_auxz00_5014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4565)), BGl_string3850z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_vvz00_928); 
FAILURE(BgL_auxz00_5014,BFALSE,BFALSE);} 
BgL_arg2053z00_934 = 
CAR(BgL_pairz00_2412); } 
{ /* Llib/pregexp.scm 138 */
obj_t BgL_list2054z00_935;
{ /* Llib/pregexp.scm 138 */
obj_t BgL_arg2055z00_936;
BgL_arg2055z00_936 = 
MAKE_PAIR(BgL_arg2053z00_934, BNIL); 
BgL_list2054z00_935 = 
MAKE_PAIR(BgL_arg2052z00_933, BgL_arg2055z00_936); } 
BgL_arg2046z00_929 = BgL_list2054z00_935; } } 
{ /* Llib/pregexp.scm 138 */
obj_t BgL_pairz00_2415;
BgL_pairz00_2415 = BgL_vvz00_928; 
{ /* Llib/pregexp.scm 138 */
obj_t BgL_pairz00_2418;
{ /* Llib/pregexp.scm 138 */
obj_t BgL_aux3220z00_3886;
BgL_aux3220z00_3886 = 
CDR(BgL_pairz00_2415); 
if(
PAIRP(BgL_aux3220z00_3886))
{ /* Llib/pregexp.scm 138 */
BgL_pairz00_2418 = BgL_aux3220z00_3886; }  else 
{ 
obj_t BgL_auxz00_5024;
BgL_auxz00_5024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4570)), BGl_string3850z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3220z00_3886); 
FAILURE(BgL_auxz00_5024,BFALSE,BFALSE);} } 
BgL_arg2047z00_930 = 
CAR(BgL_pairz00_2418); } } 
{ /* Llib/pregexp.scm 138 */
obj_t BgL_list2048z00_931;
{ /* Llib/pregexp.scm 138 */
obj_t BgL_arg2051z00_932;
BgL_arg2051z00_932 = 
MAKE_PAIR(BgL_arg2047z00_930, BNIL); 
BgL_list2048z00_931 = 
MAKE_PAIR(BgL_arg2046z00_929, BgL_arg2051z00_932); } 
BgL_arg2044z00_924 = BgL_list2048z00_931; } } } break;
default: 
BgL_arg2044z00_924 = 
BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00(BgL_sz00_10, BgL_izb21zb2_923, BgL_nz00_12); } }  else 
{ /* Llib/pregexp.scm 135 */
BgL_arg2044z00_924 = 
BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00(BgL_sz00_10, BgL_izb21zb2_923, BgL_nz00_12); } } 
return 
BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(BgL_arg2044z00_924, BgL_sz00_10, BgL_nz00_12);} } break;case ((unsigned char)'(') : 

return 
BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(
BGl_pregexpzd2readzd2subpatternz00zz__pregexpz00(BgL_sz00_10, 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11, 
BINT(((long)1))), BgL_nz00_12), BgL_sz00_10, BgL_nz00_12);break;case ((unsigned char)'\\') : 

{ /* Llib/pregexp.scm 146 */
obj_t BgL_arg2059z00_941;
{ /* Llib/pregexp.scm 146 */
obj_t BgL_g1834z00_942;
BgL_g1834z00_942 = 
BGl_pregexpzd2readzd2escapedzd2numberzd2zz__pregexpz00(BgL_sz00_10, BgL_iz00_11, BgL_nz00_12); 
if(
CBOOL(BgL_g1834z00_942))
{ /* Llib/pregexp.scm 148 */
obj_t BgL_arg2060z00_945;obj_t BgL_arg2061z00_946;
{ /* Llib/pregexp.scm 148 */
obj_t BgL_arg2064z00_949;obj_t BgL_arg2065z00_950;
BgL_arg2064z00_949 = BGl_keyword3863z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 148 */
obj_t BgL_pairz00_2421;
if(
PAIRP(BgL_g1834z00_942))
{ /* Llib/pregexp.scm 148 */
BgL_pairz00_2421 = BgL_g1834z00_942; }  else 
{ 
obj_t BgL_auxz00_5045;
BgL_auxz00_5045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4976)), BGl_string3850z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_g1834z00_942); 
FAILURE(BgL_auxz00_5045,BFALSE,BFALSE);} 
BgL_arg2065z00_950 = 
CAR(BgL_pairz00_2421); } 
{ /* Llib/pregexp.scm 148 */
obj_t BgL_list2066z00_951;
{ /* Llib/pregexp.scm 148 */
obj_t BgL_arg2067z00_952;
BgL_arg2067z00_952 = 
MAKE_PAIR(BgL_arg2065z00_950, BNIL); 
BgL_list2066z00_951 = 
MAKE_PAIR(BgL_arg2064z00_949, BgL_arg2067z00_952); } 
BgL_arg2060z00_945 = BgL_list2066z00_951; } } 
{ /* Llib/pregexp.scm 148 */
obj_t BgL_pairz00_2424;
if(
PAIRP(BgL_g1834z00_942))
{ /* Llib/pregexp.scm 148 */
BgL_pairz00_2424 = BgL_g1834z00_942; }  else 
{ 
obj_t BgL_auxz00_5054;
BgL_auxz00_5054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4990)), BGl_string3850z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_g1834z00_942); 
FAILURE(BgL_auxz00_5054,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 148 */
obj_t BgL_pairz00_2427;
{ /* Llib/pregexp.scm 148 */
obj_t BgL_aux3226z00_3892;
BgL_aux3226z00_3892 = 
CDR(BgL_pairz00_2424); 
if(
PAIRP(BgL_aux3226z00_3892))
{ /* Llib/pregexp.scm 148 */
BgL_pairz00_2427 = BgL_aux3226z00_3892; }  else 
{ 
obj_t BgL_auxz00_5061;
BgL_auxz00_5061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)4984)), BGl_string3850z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3226z00_3892); 
FAILURE(BgL_auxz00_5061,BFALSE,BFALSE);} } 
BgL_arg2061z00_946 = 
CAR(BgL_pairz00_2427); } } 
{ /* Llib/pregexp.scm 148 */
obj_t BgL_list2062z00_947;
{ /* Llib/pregexp.scm 148 */
obj_t BgL_arg2063z00_948;
BgL_arg2063z00_948 = 
MAKE_PAIR(BgL_arg2061z00_946, BNIL); 
BgL_list2062z00_947 = 
MAKE_PAIR(BgL_arg2060z00_945, BgL_arg2063z00_948); } 
BgL_arg2059z00_941 = BgL_list2062z00_947; } }  else 
{ /* Llib/pregexp.scm 149 */
obj_t BgL_g1836z00_953;
BgL_g1836z00_953 = 
BGl_pregexpzd2readzd2escapedzd2charzd2zz__pregexpz00(BgL_sz00_10, BgL_iz00_11, BgL_nz00_12); 
if(
CBOOL(BgL_g1836z00_953))
{ /* Llib/pregexp.scm 151 */
obj_t BgL_arg2068z00_956;obj_t BgL_arg2069z00_957;
{ /* Llib/pregexp.scm 151 */
obj_t BgL_pairz00_2430;
if(
PAIRP(BgL_g1836z00_953))
{ /* Llib/pregexp.scm 151 */
BgL_pairz00_2430 = BgL_g1836z00_953; }  else 
{ 
obj_t BgL_auxz00_5073;
BgL_auxz00_5073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)5121)), BGl_string3850z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_g1836z00_953); 
FAILURE(BgL_auxz00_5073,BFALSE,BFALSE);} 
BgL_arg2068z00_956 = 
CAR(BgL_pairz00_2430); } 
{ /* Llib/pregexp.scm 151 */
obj_t BgL_pairz00_2431;
if(
PAIRP(BgL_g1836z00_953))
{ /* Llib/pregexp.scm 151 */
BgL_pairz00_2431 = BgL_g1836z00_953; }  else 
{ 
obj_t BgL_auxz00_5080;
BgL_auxz00_5080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)5135)), BGl_string3850z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_g1836z00_953); 
FAILURE(BgL_auxz00_5080,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 151 */
obj_t BgL_pairz00_2434;
{ /* Llib/pregexp.scm 151 */
obj_t BgL_aux3232z00_3898;
BgL_aux3232z00_3898 = 
CDR(BgL_pairz00_2431); 
if(
PAIRP(BgL_aux3232z00_3898))
{ /* Llib/pregexp.scm 151 */
BgL_pairz00_2434 = BgL_aux3232z00_3898; }  else 
{ 
obj_t BgL_auxz00_5087;
BgL_auxz00_5087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)5129)), BGl_string3850z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3232z00_3898); 
FAILURE(BgL_auxz00_5087,BFALSE,BFALSE);} } 
BgL_arg2069z00_957 = 
CAR(BgL_pairz00_2434); } } 
{ /* Llib/pregexp.scm 151 */
obj_t BgL_list2070z00_958;
{ /* Llib/pregexp.scm 151 */
obj_t BgL_arg2072z00_959;
BgL_arg2072z00_959 = 
MAKE_PAIR(BgL_arg2069z00_957, BNIL); 
BgL_list2070z00_958 = 
MAKE_PAIR(BgL_arg2068z00_956, BgL_arg2072z00_959); } 
BgL_arg2059z00_941 = BgL_list2070z00_958; } }  else 
{ /* Llib/pregexp.scm 152 */
obj_t BgL_list2073z00_960;
BgL_list2073z00_960 = 
MAKE_PAIR(BGl_symbol3865z00zz__pregexpz00, BNIL); 
BgL_arg2059z00_941 = 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3867z00zz__pregexpz00, 
CAR(BgL_list2073z00_960)); } } } 
return 
BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(BgL_arg2059z00_941, BgL_sz00_10, BgL_nz00_12);} break;
default: 
{ /* Llib/pregexp.scm 155 */
bool_t BgL_testz00_5098;
if(
CBOOL(BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00))
{ /* Llib/pregexp.scm 155 */
BgL_testz00_5098 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 156 */
bool_t BgL_testz00_5101;
if(
isspace(BgL_cz00_906))
{ /* Llib/pregexp.scm 156 */
BgL_testz00_5101 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 156 */
BgL_testz00_5101 = ((bool_t)1)
; } 
if(BgL_testz00_5101)
{ /* Llib/pregexp.scm 157 */
bool_t BgL_testz00_5104;
{ /* Llib/pregexp.scm 157 */
unsigned char BgL_char2z00_2446;
{ /* Llib/pregexp.scm 157 */
obj_t BgL_auxz00_5105;
{ /* Llib/pregexp.scm 157 */
obj_t BgL_aux3208z00_3874;
BgL_aux3208z00_3874 = BGl_za2pregexpzd2commentzd2charza2z00zz__pregexpz00; 
if(
CHARP(BgL_aux3208z00_3874))
{ /* Llib/pregexp.scm 157 */
BgL_auxz00_5105 = BgL_aux3208z00_3874
; }  else 
{ 
obj_t BgL_auxz00_5108;
BgL_auxz00_5108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)5382)), BGl_string3851z00zz__pregexpz00, BGl_string3852z00zz__pregexpz00, BgL_aux3208z00_3874); 
FAILURE(BgL_auxz00_5108,BFALSE,BFALSE);} } 
BgL_char2z00_2446 = 
CCHAR(BgL_auxz00_5105); } 
BgL_testz00_5104 = 
(BgL_cz00_906==BgL_char2z00_2446); } 
if(BgL_testz00_5104)
{ /* Llib/pregexp.scm 157 */
BgL_testz00_5098 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 157 */
BgL_testz00_5098 = ((bool_t)1)
; } }  else 
{ /* Llib/pregexp.scm 156 */
BgL_testz00_5098 = ((bool_t)0)
; } } 
if(BgL_testz00_5098)
{ /* Llib/pregexp.scm 159 */
obj_t BgL_arg2076z00_962;
{ /* Llib/pregexp.scm 159 */
obj_t BgL_arg2077z00_963;
BgL_arg2077z00_963 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 159 */
obj_t BgL_list2078z00_964;
{ /* Llib/pregexp.scm 159 */
obj_t BgL_arg2079z00_965;
BgL_arg2079z00_965 = 
MAKE_PAIR(BgL_arg2077z00_963, BNIL); 
BgL_list2078z00_964 = 
MAKE_PAIR(
BCHAR(BgL_cz00_906), BgL_arg2079z00_965); } 
BgL_arg2076z00_962 = BgL_list2078z00_964; } } 
return 
BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(BgL_arg2076z00_962, BgL_sz00_10, BgL_nz00_12);}  else 
{ 
obj_t BgL_iz00_967;bool_t BgL_inzd2commentzf3z21_968;
BgL_iz00_967 = BgL_iz00_11; 
BgL_inzd2commentzf3z21_968 = ((bool_t)0); 
BgL_zc3anonymousza32080ze3z83_969:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_967, 
BINT(BgL_nz00_12)))
{ /* Llib/pregexp.scm 161 */
obj_t BgL_list2082z00_971;
{ /* Llib/pregexp.scm 161 */
obj_t BgL_arg2083z00_972;obj_t BgL_arg2084z00_973;
BgL_arg2083z00_972 = BGl_keyword3853z00zz__pregexpz00; 
BgL_arg2084z00_973 = 
MAKE_PAIR(BgL_iz00_967, BNIL); 
BgL_list2082z00_971 = 
MAKE_PAIR(BgL_arg2083z00_972, BgL_arg2084z00_973); } 
return BgL_list2082z00_971;}  else 
{ /* Llib/pregexp.scm 162 */
unsigned char BgL_cz00_974;
{ /* Llib/pregexp.scm 162 */
long BgL_kz00_2452;
{ /* Llib/pregexp.scm 162 */
obj_t BgL_auxz00_5125;
if(
INTEGERP(BgL_iz00_967))
{ /* Llib/pregexp.scm 162 */
BgL_auxz00_5125 = BgL_iz00_967
; }  else 
{ 
obj_t BgL_auxz00_5128;
BgL_auxz00_5128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)5631)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_967); 
FAILURE(BgL_auxz00_5128,BFALSE,BFALSE);} 
BgL_kz00_2452 = 
(long)CINT(BgL_auxz00_5125); } 
{ /* Llib/pregexp.scm 162 */
long BgL_l3062z00_3728;
BgL_l3062z00_3728 = 
STRING_LENGTH(BgL_sz00_10); 
if(
BOUND_CHECK(BgL_kz00_2452, BgL_l3062z00_3728))
{ /* Llib/pregexp.scm 162 */
BgL_cz00_974 = 
STRING_REF(BgL_sz00_10, BgL_kz00_2452); }  else 
{ 
obj_t BgL_auxz00_5137;
BgL_auxz00_5137 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)5617)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2452), BgL_sz00_10); 
FAILURE(BgL_auxz00_5137,BFALSE,BFALSE);} } } 
if(BgL_inzd2commentzf3z21_968)
{ /* Llib/pregexp.scm 164 */
obj_t BgL_arg2085z00_975;bool_t BgL_arg2086z00_976;
BgL_arg2085z00_975 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_967, 
BINT(((long)1))); 
if(
(BgL_cz00_974==((unsigned char)'\n')))
{ /* Llib/pregexp.scm 165 */
BgL_arg2086z00_976 = ((bool_t)0); }  else 
{ /* Llib/pregexp.scm 165 */
BgL_arg2086z00_976 = ((bool_t)1); } 
{ 
bool_t BgL_inzd2commentzf3z21_5148;obj_t BgL_iz00_5147;
BgL_iz00_5147 = BgL_arg2085z00_975; 
BgL_inzd2commentzf3z21_5148 = BgL_arg2086z00_976; 
BgL_inzd2commentzf3z21_968 = BgL_inzd2commentzf3z21_5148; 
BgL_iz00_967 = BgL_iz00_5147; 
goto BgL_zc3anonymousza32080ze3z83_969;} }  else 
{ /* Llib/pregexp.scm 163 */
if(
isspace(BgL_cz00_974))
{ 
bool_t BgL_inzd2commentzf3z21_5154;obj_t BgL_iz00_5151;
BgL_iz00_5151 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_967, 
BINT(((long)1))); 
BgL_inzd2commentzf3z21_5154 = ((bool_t)0); 
BgL_inzd2commentzf3z21_968 = BgL_inzd2commentzf3z21_5154; 
BgL_iz00_967 = BgL_iz00_5151; 
goto BgL_zc3anonymousza32080ze3z83_969;}  else 
{ /* Llib/pregexp.scm 168 */
bool_t BgL_testz00_5155;
{ /* Llib/pregexp.scm 168 */
unsigned char BgL_char2z00_2457;
{ /* Llib/pregexp.scm 168 */
obj_t BgL_auxz00_5156;
{ /* Llib/pregexp.scm 168 */
obj_t BgL_aux3212z00_3878;
BgL_aux3212z00_3878 = BGl_za2pregexpzd2commentzd2charza2z00zz__pregexpz00; 
if(
CHARP(BgL_aux3212z00_3878))
{ /* Llib/pregexp.scm 168 */
BgL_auxz00_5156 = BgL_aux3212z00_3878
; }  else 
{ 
obj_t BgL_auxz00_5159;
BgL_auxz00_5159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)5919)), BGl_string3843z00zz__pregexpz00, BGl_string3852z00zz__pregexpz00, BgL_aux3212z00_3878); 
FAILURE(BgL_auxz00_5159,BFALSE,BFALSE);} } 
BgL_char2z00_2457 = 
CCHAR(BgL_auxz00_5156); } 
BgL_testz00_5155 = 
(BgL_cz00_974==BgL_char2z00_2457); } 
if(BgL_testz00_5155)
{ 
bool_t BgL_inzd2commentzf3z21_5168;obj_t BgL_iz00_5165;
BgL_iz00_5165 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_967, 
BINT(((long)1))); 
BgL_inzd2commentzf3z21_5168 = ((bool_t)1); 
BgL_inzd2commentzf3z21_968 = BgL_inzd2commentzf3z21_5168; 
BgL_iz00_967 = BgL_iz00_5165; 
goto BgL_zc3anonymousza32080ze3z83_969;}  else 
{ /* Llib/pregexp.scm 170 */
obj_t BgL_list2092z00_982;
{ /* Llib/pregexp.scm 170 */
obj_t BgL_arg2093z00_983;obj_t BgL_arg2094z00_984;
BgL_arg2093z00_983 = BGl_keyword3853z00zz__pregexpz00; 
BgL_arg2094z00_984 = 
MAKE_PAIR(BgL_iz00_967, BNIL); 
BgL_list2092z00_982 = 
MAKE_PAIR(BgL_arg2093z00_983, BgL_arg2094z00_984); } 
return BgL_list2092z00_982;} } } } } } } } } } 
}



/* pregexp-read-escaped-number */
obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__pregexpz00(obj_t BgL_sz00_13, obj_t BgL_iz00_14, long BgL_nz00_15)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 172 */
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_14, 
BINT(((long)1))), 
BINT(BgL_nz00_15)))
{ /* Llib/pregexp.scm 176 */
unsigned char BgL_cz00_990;
{ /* Llib/pregexp.scm 176 */
long BgL_kz00_2461;
{ /* Llib/pregexp.scm 176 */
obj_t BgL_auxz00_5177;
{ /* Llib/pregexp.scm 176 */
obj_t BgL_aux3234z00_3900;
BgL_aux3234z00_3900 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_14, 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3234z00_3900))
{ /* Llib/pregexp.scm 176 */
BgL_auxz00_5177 = BgL_aux3234z00_3900
; }  else 
{ 
obj_t BgL_auxz00_5182;
BgL_auxz00_5182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)6220)), BGl_string3869z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3234z00_3900); 
FAILURE(BgL_auxz00_5182,BFALSE,BFALSE);} } 
BgL_kz00_2461 = 
(long)CINT(BgL_auxz00_5177); } 
{ /* Llib/pregexp.scm 176 */
long BgL_l3070z00_3736;
BgL_l3070z00_3736 = 
STRING_LENGTH(BgL_sz00_13); 
if(
BOUND_CHECK(BgL_kz00_2461, BgL_l3070z00_3736))
{ /* Llib/pregexp.scm 176 */
BgL_cz00_990 = 
STRING_REF(BgL_sz00_13, BgL_kz00_2461); }  else 
{ 
obj_t BgL_auxz00_5191;
BgL_auxz00_5191 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)6206)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2461), BgL_sz00_13); 
FAILURE(BgL_auxz00_5191,BFALSE,BFALSE);} } } 
if(
isdigit(BgL_cz00_990))
{ /* Llib/pregexp.scm 178 */
obj_t BgL_g1840z00_992;obj_t BgL_g1841z00_993;
BgL_g1840z00_992 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_14, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 178 */
obj_t BgL_list2112z00_1018;
BgL_list2112z00_1018 = 
MAKE_PAIR(
BCHAR(BgL_cz00_990), BNIL); 
BgL_g1841z00_993 = BgL_list2112z00_1018; } 
{ 
obj_t BgL_iz00_995;obj_t BgL_rz00_996;
BgL_iz00_995 = BgL_g1840z00_992; 
BgL_rz00_996 = BgL_g1841z00_993; 
BgL_zc3anonymousza32097ze3z83_997:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_995, 
BINT(BgL_nz00_15)))
{ /* Llib/pregexp.scm 181 */
obj_t BgL_arg2099z00_999;
{ /* Llib/pregexp.scm 181 */
obj_t BgL_arg2102z00_1002;
{ /* Llib/pregexp.scm 181 */
obj_t BgL_arg2103z00_1005;
BgL_arg2103z00_1005 = 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_rz00_996); 
{ /* Llib/pregexp.scm 181 */
obj_t BgL_auxz00_5206;
{ /* Llib/pregexp.scm 181 */
bool_t BgL_testz00_5207;
if(
PAIRP(BgL_arg2103z00_1005))
{ /* Llib/pregexp.scm 181 */
BgL_testz00_5207 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 181 */
BgL_testz00_5207 = 
NULLP(BgL_arg2103z00_1005)
; } 
if(BgL_testz00_5207)
{ /* Llib/pregexp.scm 181 */
BgL_auxz00_5206 = BgL_arg2103z00_1005
; }  else 
{ 
obj_t BgL_auxz00_5211;
BgL_auxz00_5211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)6456)), BGl_string3843z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_arg2103z00_1005); 
FAILURE(BgL_auxz00_5211,BFALSE,BFALSE);} } 
BgL_arg2102z00_1002 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_5206); } } 
{ /* Ieee/number.scm 134 */

BgL_arg2099z00_999 = 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(BgL_arg2102z00_1002, 
BINT(((long)10))); } } 
{ /* Llib/pregexp.scm 180 */
obj_t BgL_list2100z00_1000;
{ /* Llib/pregexp.scm 180 */
obj_t BgL_arg2101z00_1001;
BgL_arg2101z00_1001 = 
MAKE_PAIR(BgL_iz00_995, BNIL); 
BgL_list2100z00_1000 = 
MAKE_PAIR(BgL_arg2099z00_999, BgL_arg2101z00_1001); } 
return BgL_list2100z00_1000;} }  else 
{ /* Llib/pregexp.scm 182 */
unsigned char BgL_cz00_1006;
{ /* Llib/pregexp.scm 182 */
long BgL_kz00_2468;
{ /* Llib/pregexp.scm 182 */
obj_t BgL_auxz00_5220;
if(
INTEGERP(BgL_iz00_995))
{ /* Llib/pregexp.scm 182 */
BgL_auxz00_5220 = BgL_iz00_995
; }  else 
{ 
obj_t BgL_auxz00_5223;
BgL_auxz00_5223 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)6508)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_995); 
FAILURE(BgL_auxz00_5223,BFALSE,BFALSE);} 
BgL_kz00_2468 = 
(long)CINT(BgL_auxz00_5220); } 
{ /* Llib/pregexp.scm 182 */
long BgL_l3074z00_3740;
BgL_l3074z00_3740 = 
STRING_LENGTH(BgL_sz00_13); 
if(
BOUND_CHECK(BgL_kz00_2468, BgL_l3074z00_3740))
{ /* Llib/pregexp.scm 182 */
BgL_cz00_1006 = 
STRING_REF(BgL_sz00_13, BgL_kz00_2468); }  else 
{ 
obj_t BgL_auxz00_5232;
BgL_auxz00_5232 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)6494)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2468), BgL_sz00_13); 
FAILURE(BgL_auxz00_5232,BFALSE,BFALSE);} } } 
if(
isdigit(BgL_cz00_1006))
{ /* Llib/pregexp.scm 184 */
obj_t BgL_arg2105z00_1008;obj_t BgL_arg2106z00_1009;
BgL_arg2105z00_1008 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_995, 
BINT(((long)1))); 
BgL_arg2106z00_1009 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1006), BgL_rz00_996); 
{ 
obj_t BgL_rz00_5244;obj_t BgL_iz00_5243;
BgL_iz00_5243 = BgL_arg2105z00_1008; 
BgL_rz00_5244 = BgL_arg2106z00_1009; 
BgL_rz00_996 = BgL_rz00_5244; 
BgL_iz00_995 = BgL_iz00_5243; 
goto BgL_zc3anonymousza32097ze3z83_997;} }  else 
{ /* Llib/pregexp.scm 186 */
obj_t BgL_arg2107z00_1010;
{ /* Llib/pregexp.scm 186 */
obj_t BgL_arg2110z00_1013;
{ /* Llib/pregexp.scm 186 */
obj_t BgL_arg2111z00_1016;
BgL_arg2111z00_1016 = 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_rz00_996); 
{ /* Llib/pregexp.scm 186 */
obj_t BgL_auxz00_5246;
{ /* Llib/pregexp.scm 186 */
bool_t BgL_testz00_5247;
if(
PAIRP(BgL_arg2111z00_1016))
{ /* Llib/pregexp.scm 186 */
BgL_testz00_5247 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 186 */
BgL_testz00_5247 = 
NULLP(BgL_arg2111z00_1016)
; } 
if(BgL_testz00_5247)
{ /* Llib/pregexp.scm 186 */
BgL_auxz00_5246 = BgL_arg2111z00_1016
; }  else 
{ 
obj_t BgL_auxz00_5251;
BgL_auxz00_5251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)6732)), BGl_string3843z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_arg2111z00_1016); 
FAILURE(BgL_auxz00_5251,BFALSE,BFALSE);} } 
BgL_arg2110z00_1013 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_5246); } } 
{ /* Ieee/number.scm 134 */

BgL_arg2107z00_1010 = 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(BgL_arg2110z00_1013, 
BINT(((long)10))); } } 
{ /* Llib/pregexp.scm 185 */
obj_t BgL_list2108z00_1011;
{ /* Llib/pregexp.scm 185 */
obj_t BgL_arg2109z00_1012;
BgL_arg2109z00_1012 = 
MAKE_PAIR(BgL_iz00_995, BNIL); 
BgL_list2108z00_1011 = 
MAKE_PAIR(BgL_arg2107z00_1010, BgL_arg2109z00_1012); } 
return BgL_list2108z00_1011;} } } } }  else 
{ /* Llib/pregexp.scm 177 */
return BFALSE;} }  else 
{ /* Llib/pregexp.scm 175 */
return BFALSE;} } 
}



/* pregexp-read-escaped-char */
obj_t BGl_pregexpzd2readzd2escapedzd2charzd2zz__pregexpz00(obj_t BgL_sz00_16, obj_t BgL_iz00_17, long BgL_nz00_18)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 189 */
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)1))), 
BINT(BgL_nz00_18)))
{ /* Llib/pregexp.scm 193 */
unsigned char BgL_cz00_1022;
{ /* Llib/pregexp.scm 193 */
long BgL_kz00_2473;
{ /* Llib/pregexp.scm 193 */
obj_t BgL_auxz00_5265;
{ /* Llib/pregexp.scm 193 */
obj_t BgL_aux3242z00_3908;
BgL_aux3242z00_3908 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3242z00_3908))
{ /* Llib/pregexp.scm 193 */
BgL_auxz00_5265 = BgL_aux3242z00_3908
; }  else 
{ 
obj_t BgL_auxz00_5270;
BgL_auxz00_5270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)6901)), BGl_string3871z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3242z00_3908); 
FAILURE(BgL_auxz00_5270,BFALSE,BFALSE);} } 
BgL_kz00_2473 = 
(long)CINT(BgL_auxz00_5265); } 
{ /* Llib/pregexp.scm 193 */
long BgL_l3078z00_3744;
BgL_l3078z00_3744 = 
STRING_LENGTH(BgL_sz00_16); 
if(
BOUND_CHECK(BgL_kz00_2473, BgL_l3078z00_3744))
{ /* Llib/pregexp.scm 193 */
BgL_cz00_1022 = 
STRING_REF(BgL_sz00_16, BgL_kz00_2473); }  else 
{ 
obj_t BgL_auxz00_5279;
BgL_auxz00_5279 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)6887)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2473), BgL_sz00_16); 
FAILURE(BgL_auxz00_5279,BFALSE,BFALSE);} } } 
{ 

switch( BgL_cz00_1022) { case ((unsigned char)'b') : 

{ /* Llib/pregexp.scm 195 */
obj_t BgL_arg2116z00_1026;obj_t BgL_arg2118z00_1027;
BgL_arg2116z00_1026 = BGl_keyword3872z00zz__pregexpz00; 
BgL_arg2118z00_1027 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 195 */
obj_t BgL_list2119z00_1028;
{ /* Llib/pregexp.scm 195 */
obj_t BgL_arg2121z00_1029;
BgL_arg2121z00_1029 = 
MAKE_PAIR(BgL_arg2118z00_1027, BNIL); 
BgL_list2119z00_1028 = 
MAKE_PAIR(BgL_arg2116z00_1026, BgL_arg2121z00_1029); } 
return BgL_list2119z00_1028;} } break;case ((unsigned char)'B') : 

{ /* Llib/pregexp.scm 196 */
obj_t BgL_arg2123z00_1030;obj_t BgL_arg2124z00_1031;
BgL_arg2123z00_1030 = BGl_keyword3874z00zz__pregexpz00; 
BgL_arg2124z00_1031 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 196 */
obj_t BgL_list2125z00_1032;
{ /* Llib/pregexp.scm 196 */
obj_t BgL_arg2126z00_1033;
BgL_arg2126z00_1033 = 
MAKE_PAIR(BgL_arg2124z00_1031, BNIL); 
BgL_list2125z00_1032 = 
MAKE_PAIR(BgL_arg2123z00_1030, BgL_arg2126z00_1033); } 
return BgL_list2125z00_1032;} } break;case ((unsigned char)'d') : 

{ /* Llib/pregexp.scm 197 */
obj_t BgL_arg2127z00_1034;obj_t BgL_arg2130z00_1035;
BgL_arg2127z00_1034 = BGl_keyword3876z00zz__pregexpz00; 
BgL_arg2130z00_1035 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 197 */
obj_t BgL_list2131z00_1036;
{ /* Llib/pregexp.scm 197 */
obj_t BgL_arg2132z00_1037;
BgL_arg2132z00_1037 = 
MAKE_PAIR(BgL_arg2130z00_1035, BNIL); 
BgL_list2131z00_1036 = 
MAKE_PAIR(BgL_arg2127z00_1034, BgL_arg2132z00_1037); } 
return BgL_list2131z00_1036;} } break;case ((unsigned char)'D') : 

{ /* Llib/pregexp.scm 198 */
obj_t BgL_arg2133z00_1038;obj_t BgL_arg2134z00_1039;
BgL_arg2133z00_1038 = BGl_list3878z00zz__pregexpz00; 
BgL_arg2134z00_1039 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 198 */
obj_t BgL_list2135z00_1040;
{ /* Llib/pregexp.scm 198 */
obj_t BgL_arg2136z00_1041;
BgL_arg2136z00_1041 = 
MAKE_PAIR(BgL_arg2134z00_1039, BNIL); 
BgL_list2135z00_1040 = 
MAKE_PAIR(BgL_arg2133z00_1038, BgL_arg2136z00_1041); } 
return BgL_list2135z00_1040;} } break;case ((unsigned char)'n') : 

{ /* Llib/pregexp.scm 199 */
obj_t BgL_arg2137z00_1042;
BgL_arg2137z00_1042 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 199 */
obj_t BgL_list2138z00_1043;
{ /* Llib/pregexp.scm 199 */
obj_t BgL_arg2139z00_1044;
BgL_arg2139z00_1044 = 
MAKE_PAIR(BgL_arg2137z00_1042, BNIL); 
BgL_list2138z00_1043 = 
MAKE_PAIR(
BCHAR(((unsigned char)'\n')), BgL_arg2139z00_1044); } 
return BgL_list2138z00_1043;} } break;case ((unsigned char)'r') : 

{ /* Llib/pregexp.scm 200 */
obj_t BgL_arg2140z00_1045;
BgL_arg2140z00_1045 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 200 */
obj_t BgL_list2141z00_1046;
{ /* Llib/pregexp.scm 200 */
obj_t BgL_arg2144z00_1047;
BgL_arg2144z00_1047 = 
MAKE_PAIR(BgL_arg2140z00_1045, BNIL); 
BgL_list2141z00_1046 = 
MAKE_PAIR(BGl_za2pregexpzd2returnzd2charza2z00zz__pregexpz00, BgL_arg2144z00_1047); } 
return BgL_list2141z00_1046;} } break;case ((unsigned char)'s') : 

{ /* Llib/pregexp.scm 201 */
obj_t BgL_arg2145z00_1048;obj_t BgL_arg2146z00_1049;
BgL_arg2145z00_1048 = BGl_keyword3879z00zz__pregexpz00; 
BgL_arg2146z00_1049 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 201 */
obj_t BgL_list2147z00_1050;
{ /* Llib/pregexp.scm 201 */
obj_t BgL_arg2148z00_1051;
BgL_arg2148z00_1051 = 
MAKE_PAIR(BgL_arg2146z00_1049, BNIL); 
BgL_list2147z00_1050 = 
MAKE_PAIR(BgL_arg2145z00_1048, BgL_arg2148z00_1051); } 
return BgL_list2147z00_1050;} } break;case ((unsigned char)'S') : 

{ /* Llib/pregexp.scm 202 */
obj_t BgL_arg2149z00_1052;obj_t BgL_arg2150z00_1053;
BgL_arg2149z00_1052 = BGl_list3881z00zz__pregexpz00; 
BgL_arg2150z00_1053 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 202 */
obj_t BgL_list2151z00_1054;
{ /* Llib/pregexp.scm 202 */
obj_t BgL_arg2152z00_1055;
BgL_arg2152z00_1055 = 
MAKE_PAIR(BgL_arg2150z00_1053, BNIL); 
BgL_list2151z00_1054 = 
MAKE_PAIR(BgL_arg2149z00_1052, BgL_arg2152z00_1055); } 
return BgL_list2151z00_1054;} } break;case ((unsigned char)'t') : 

{ /* Llib/pregexp.scm 203 */
obj_t BgL_arg2153z00_1056;
BgL_arg2153z00_1056 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 203 */
obj_t BgL_list2154z00_1057;
{ /* Llib/pregexp.scm 203 */
obj_t BgL_arg2155z00_1058;
BgL_arg2155z00_1058 = 
MAKE_PAIR(BgL_arg2153z00_1056, BNIL); 
BgL_list2154z00_1057 = 
MAKE_PAIR(BGl_za2pregexpzd2tabzd2charza2z00zz__pregexpz00, BgL_arg2155z00_1058); } 
return BgL_list2154z00_1057;} } break;case ((unsigned char)'w') : 

{ /* Llib/pregexp.scm 204 */
obj_t BgL_arg2156z00_1059;obj_t BgL_arg2157z00_1060;
BgL_arg2156z00_1059 = BGl_keyword3882z00zz__pregexpz00; 
BgL_arg2157z00_1060 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 204 */
obj_t BgL_list2158z00_1061;
{ /* Llib/pregexp.scm 204 */
obj_t BgL_arg2159z00_1062;
BgL_arg2159z00_1062 = 
MAKE_PAIR(BgL_arg2157z00_1060, BNIL); 
BgL_list2158z00_1061 = 
MAKE_PAIR(BgL_arg2156z00_1059, BgL_arg2159z00_1062); } 
return BgL_list2158z00_1061;} } break;case ((unsigned char)'W') : 

{ /* Llib/pregexp.scm 205 */
obj_t BgL_arg2160z00_1063;obj_t BgL_arg2161z00_1064;
BgL_arg2160z00_1063 = BGl_list3884z00zz__pregexpz00; 
BgL_arg2161z00_1064 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 205 */
obj_t BgL_list2162z00_1065;
{ /* Llib/pregexp.scm 205 */
obj_t BgL_arg2163z00_1066;
BgL_arg2163z00_1066 = 
MAKE_PAIR(BgL_arg2161z00_1064, BNIL); 
BgL_list2162z00_1065 = 
MAKE_PAIR(BgL_arg2160z00_1063, BgL_arg2163z00_1066); } 
return BgL_list2162z00_1065;} } break;
default: 
{ /* Llib/pregexp.scm 206 */
obj_t BgL_arg2164z00_1067;
BgL_arg2164z00_1067 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 206 */
obj_t BgL_list2165z00_1068;
{ /* Llib/pregexp.scm 206 */
obj_t BgL_arg2166z00_1069;
BgL_arg2166z00_1069 = 
MAKE_PAIR(BgL_arg2164z00_1067, BNIL); 
BgL_list2165z00_1068 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1022), BgL_arg2166z00_1069); } 
return BgL_list2165z00_1068;} } } } }  else 
{ /* Llib/pregexp.scm 192 */
return BFALSE;} } 
}



/* pregexp-read-posix-char-class */
obj_t BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__pregexpz00(obj_t BgL_sz00_19, obj_t BgL_iz00_20, long BgL_nz00_21)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 208 */
{ /* Llib/pregexp.scm 211 */
bool_t BgL_negzf3zf3_1072;
BgL_negzf3zf3_1072 = ((bool_t)0); 
{ 
obj_t BgL_iz00_1075;obj_t BgL_rz00_1076;
BgL_iz00_1075 = BgL_iz00_20; 
BgL_rz00_1076 = BNIL; 
BgL_zc3anonymousza32169ze3z83_1077:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1075, 
BINT(BgL_nz00_21)))
{ /* Llib/pregexp.scm 216 */
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3885z00zz__pregexpz00, BUNSPEC);}  else 
{ /* Llib/pregexp.scm 218 */
unsigned char BgL_cz00_1080;
{ /* Llib/pregexp.scm 218 */
long BgL_kz00_2506;
{ /* Llib/pregexp.scm 218 */
obj_t BgL_auxz00_5339;
if(
INTEGERP(BgL_iz00_1075))
{ /* Llib/pregexp.scm 218 */
BgL_auxz00_5339 = BgL_iz00_1075
; }  else 
{ 
obj_t BgL_auxz00_5342;
BgL_auxz00_5342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)7908)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1075); 
FAILURE(BgL_auxz00_5342,BFALSE,BFALSE);} 
BgL_kz00_2506 = 
(long)CINT(BgL_auxz00_5339); } 
{ /* Llib/pregexp.scm 218 */
long BgL_l3082z00_3748;
BgL_l3082z00_3748 = 
STRING_LENGTH(BgL_sz00_19); 
if(
BOUND_CHECK(BgL_kz00_2506, BgL_l3082z00_3748))
{ /* Llib/pregexp.scm 218 */
BgL_cz00_1080 = 
STRING_REF(BgL_sz00_19, BgL_kz00_2506); }  else 
{ 
obj_t BgL_auxz00_5351;
BgL_auxz00_5351 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)7894)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2506), BgL_sz00_19); 
FAILURE(BgL_auxz00_5351,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1080==((unsigned char)'^')))
{ /* Llib/pregexp.scm 219 */
BgL_negzf3zf3_1072 = ((bool_t)1); 
{ 
obj_t BgL_iz00_5358;
BgL_iz00_5358 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1075, 
BINT(((long)1))); 
BgL_iz00_1075 = BgL_iz00_5358; 
goto BgL_zc3anonymousza32169ze3z83_1077;} }  else 
{ /* Llib/pregexp.scm 219 */
if(
isalpha(BgL_cz00_1080))
{ /* Llib/pregexp.scm 223 */
obj_t BgL_arg2175z00_1084;obj_t BgL_arg2176z00_1085;
BgL_arg2175z00_1084 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1075, 
BINT(((long)1))); 
BgL_arg2176z00_1085 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1080), BgL_rz00_1076); 
{ 
obj_t BgL_rz00_5368;obj_t BgL_iz00_5367;
BgL_iz00_5367 = BgL_arg2175z00_1084; 
BgL_rz00_5368 = BgL_arg2176z00_1085; 
BgL_rz00_1076 = BgL_rz00_5368; 
BgL_iz00_1075 = BgL_iz00_5367; 
goto BgL_zc3anonymousza32169ze3z83_1077;} }  else 
{ /* Llib/pregexp.scm 222 */
if(
(BgL_cz00_1080==((unsigned char)':')))
{ /* Llib/pregexp.scm 225 */
bool_t BgL_testz00_5371;
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1075, 
BINT(((long)1))), 
BINT(BgL_nz00_21)))
{ /* Llib/pregexp.scm 225 */
BgL_testz00_5371 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 226 */
bool_t BgL_testz00_5377;
{ /* Llib/pregexp.scm 226 */
unsigned char BgL_auxz00_5378;
{ /* Llib/pregexp.scm 226 */
long BgL_kz00_2513;
{ /* Llib/pregexp.scm 226 */
obj_t BgL_auxz00_5379;
{ /* Llib/pregexp.scm 226 */
obj_t BgL_aux3246z00_3912;
BgL_aux3246z00_3912 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1075, 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3246z00_3912))
{ /* Llib/pregexp.scm 226 */
BgL_auxz00_5379 = BgL_aux3246z00_3912
; }  else 
{ 
obj_t BgL_auxz00_5384;
BgL_auxz00_5384 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)8250)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3246z00_3912); 
FAILURE(BgL_auxz00_5384,BFALSE,BFALSE);} } 
BgL_kz00_2513 = 
(long)CINT(BgL_auxz00_5379); } 
{ /* Llib/pregexp.scm 226 */
long BgL_l3086z00_3752;
BgL_l3086z00_3752 = 
STRING_LENGTH(BgL_sz00_19); 
if(
BOUND_CHECK(BgL_kz00_2513, BgL_l3086z00_3752))
{ /* Llib/pregexp.scm 226 */
BgL_auxz00_5378 = 
STRING_REF(BgL_sz00_19, BgL_kz00_2513)
; }  else 
{ 
obj_t BgL_auxz00_5393;
BgL_auxz00_5393 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)8236)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2513), BgL_sz00_19); 
FAILURE(BgL_auxz00_5393,BFALSE,BFALSE);} } } 
BgL_testz00_5377 = 
(BgL_auxz00_5378==((unsigned char)']')); } 
if(BgL_testz00_5377)
{ /* Llib/pregexp.scm 226 */
BgL_testz00_5371 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 226 */
BgL_testz00_5371 = ((bool_t)1)
; } } 
if(BgL_testz00_5371)
{ /* Llib/pregexp.scm 227 */
obj_t BgL_list2179z00_1088;
BgL_list2179z00_1088 = 
MAKE_PAIR(
BCHAR(((unsigned char)':')), BNIL); 
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3885z00zz__pregexpz00, 
CAR(BgL_list2179z00_1088));}  else 
{ /* Llib/pregexp.scm 228 */
obj_t BgL_posixzd2classzd2_1089;
{ /* Llib/pregexp.scm 230 */
obj_t BgL_arg2187z00_1097;
{ /* Llib/pregexp.scm 230 */
obj_t BgL_arg2188z00_1098;
BgL_arg2188z00_1098 = 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_rz00_1076); 
{ /* Llib/pregexp.scm 230 */
obj_t BgL_auxz00_5404;
{ /* Llib/pregexp.scm 230 */
bool_t BgL_testz00_5405;
if(
PAIRP(BgL_arg2188z00_1098))
{ /* Llib/pregexp.scm 230 */
BgL_testz00_5405 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 230 */
BgL_testz00_5405 = 
NULLP(BgL_arg2188z00_1098)
; } 
if(BgL_testz00_5405)
{ /* Llib/pregexp.scm 230 */
BgL_auxz00_5404 = BgL_arg2188z00_1098
; }  else 
{ 
obj_t BgL_auxz00_5409;
BgL_auxz00_5409 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)8504)), BGl_string3843z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_arg2188z00_1098); 
FAILURE(BgL_auxz00_5409,BFALSE,BFALSE);} } 
BgL_arg2187z00_1097 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_5404); } } 
BgL_posixzd2classzd2_1089 = 
string_to_keyword(
BSTRING_TO_STRING(BgL_arg2187z00_1097)); } 
{ /* Llib/pregexp.scm 231 */
obj_t BgL_arg2180z00_1090;obj_t BgL_arg2181z00_1091;
if(BgL_negzf3zf3_1072)
{ /* Llib/pregexp.scm 231 */
obj_t BgL_list2184z00_1094;
{ /* Llib/pregexp.scm 231 */
obj_t BgL_arg2185z00_1095;obj_t BgL_arg2186z00_1096;
BgL_arg2185z00_1095 = BGl_keyword3861z00zz__pregexpz00; 
BgL_arg2186z00_1096 = 
MAKE_PAIR(BgL_posixzd2classzd2_1089, BNIL); 
BgL_list2184z00_1094 = 
MAKE_PAIR(BgL_arg2185z00_1095, BgL_arg2186z00_1096); } 
BgL_arg2180z00_1090 = BgL_list2184z00_1094; }  else 
{ /* Llib/pregexp.scm 231 */
BgL_arg2180z00_1090 = BgL_posixzd2classzd2_1089; } 
BgL_arg2181z00_1091 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1075, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 231 */
obj_t BgL_list2182z00_1092;
{ /* Llib/pregexp.scm 231 */
obj_t BgL_arg2183z00_1093;
BgL_arg2183z00_1093 = 
MAKE_PAIR(BgL_arg2181z00_1091, BNIL); 
BgL_list2182z00_1092 = 
MAKE_PAIR(BgL_arg2180z00_1090, BgL_arg2183z00_1093); } 
return BgL_list2182z00_1092;} } } }  else 
{ /* Llib/pregexp.scm 224 */
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3885z00zz__pregexpz00, BUNSPEC);} } } } } } } 
}



/* pregexp-read-cluster-type */
obj_t BGl_pregexpzd2readzd2clusterzd2typezd2zz__pregexpz00(obj_t BgL_sz00_22, obj_t BgL_iz00_23, long BgL_nz00_24)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 237 */
{ /* Llib/pregexp.scm 240 */
unsigned char BgL_cz00_1106;
{ /* Llib/pregexp.scm 240 */
long BgL_kz00_2536;
{ /* Llib/pregexp.scm 240 */
obj_t BgL_auxz00_5424;
if(
INTEGERP(BgL_iz00_23))
{ /* Llib/pregexp.scm 240 */
BgL_auxz00_5424 = BgL_iz00_23
; }  else 
{ 
obj_t BgL_auxz00_5427;
BgL_auxz00_5427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)8882)), BGl_string3887z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_23); 
FAILURE(BgL_auxz00_5427,BFALSE,BFALSE);} 
BgL_kz00_2536 = 
(long)CINT(BgL_auxz00_5424); } 
{ /* Llib/pregexp.scm 240 */
long BgL_l3090z00_3756;
BgL_l3090z00_3756 = 
STRING_LENGTH(BgL_sz00_22); 
if(
BOUND_CHECK(BgL_kz00_2536, BgL_l3090z00_3756))
{ /* Llib/pregexp.scm 240 */
BgL_cz00_1106 = 
STRING_REF(BgL_sz00_22, BgL_kz00_2536); }  else 
{ 
obj_t BgL_auxz00_5436;
BgL_auxz00_5436 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)8868)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2536), BgL_sz00_22); 
FAILURE(BgL_auxz00_5436,BFALSE,BFALSE);} } } 
{ 

switch( BgL_cz00_1106) { case ((unsigned char)'?') : 

{ /* Llib/pregexp.scm 243 */
obj_t BgL_iz00_1110;
BgL_iz00_1110 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_23, 
BINT(((long)1))); 
{ 

{ /* Llib/pregexp.scm 244 */
unsigned char BgL_aux1852z00_1112;
{ /* Llib/pregexp.scm 244 */
long BgL_kz00_2538;
{ /* Llib/pregexp.scm 244 */
obj_t BgL_auxz00_5443;
if(
INTEGERP(BgL_iz00_1110))
{ /* Llib/pregexp.scm 244 */
BgL_auxz00_5443 = BgL_iz00_1110
; }  else 
{ 
obj_t BgL_auxz00_5446;
BgL_auxz00_5446 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)8975)), BGl_string3887z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1110); 
FAILURE(BgL_auxz00_5446,BFALSE,BFALSE);} 
BgL_kz00_2538 = 
(long)CINT(BgL_auxz00_5443); } 
{ /* Llib/pregexp.scm 244 */
long BgL_l3098z00_3764;
BgL_l3098z00_3764 = 
STRING_LENGTH(BgL_sz00_22); 
if(
BOUND_CHECK(BgL_kz00_2538, BgL_l3098z00_3764))
{ /* Llib/pregexp.scm 244 */
BgL_aux1852z00_1112 = 
STRING_REF(BgL_sz00_22, BgL_kz00_2538); }  else 
{ 
obj_t BgL_auxz00_5455;
BgL_auxz00_5455 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)8961)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2538), BgL_sz00_22); 
FAILURE(BgL_auxz00_5455,BFALSE,BFALSE);} } } 
switch( BgL_aux1852z00_1112) { case ((unsigned char)':') : 

{ /* Llib/pregexp.scm 245 */
obj_t BgL_arg2198z00_1115;
BgL_arg2198z00_1115 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 245 */
obj_t BgL_list2199z00_1116;
{ /* Llib/pregexp.scm 245 */
obj_t BgL_arg2200z00_1117;
BgL_arg2200z00_1117 = 
MAKE_PAIR(BgL_arg2198z00_1115, BNIL); 
BgL_list2199z00_1116 = 
MAKE_PAIR(BNIL, BgL_arg2200z00_1117); } 
return BgL_list2199z00_1116;} } break;case ((unsigned char)'=') : 

{ /* Llib/pregexp.scm 246 */
obj_t BgL_arg2203z00_1118;obj_t BgL_arg2204z00_1119;
BgL_arg2203z00_1118 = BGl_list3896z00zz__pregexpz00; 
BgL_arg2204z00_1119 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 246 */
obj_t BgL_list2205z00_1120;
{ /* Llib/pregexp.scm 246 */
obj_t BgL_arg2206z00_1121;
BgL_arg2206z00_1121 = 
MAKE_PAIR(BgL_arg2204z00_1119, BNIL); 
BgL_list2205z00_1120 = 
MAKE_PAIR(BgL_arg2203z00_1118, BgL_arg2206z00_1121); } 
return BgL_list2205z00_1120;} } break;case ((unsigned char)'!') : 

{ /* Llib/pregexp.scm 247 */
obj_t BgL_arg2207z00_1122;obj_t BgL_arg2208z00_1123;
BgL_arg2207z00_1122 = BGl_list3899z00zz__pregexpz00; 
BgL_arg2208z00_1123 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 247 */
obj_t BgL_list2209z00_1124;
{ /* Llib/pregexp.scm 247 */
obj_t BgL_arg2210z00_1125;
BgL_arg2210z00_1125 = 
MAKE_PAIR(BgL_arg2208z00_1123, BNIL); 
BgL_list2209z00_1124 = 
MAKE_PAIR(BgL_arg2207z00_1122, BgL_arg2210z00_1125); } 
return BgL_list2209z00_1124;} } break;case ((unsigned char)'>') : 

{ /* Llib/pregexp.scm 248 */
obj_t BgL_arg2211z00_1126;obj_t BgL_arg2212z00_1127;
BgL_arg2211z00_1126 = BGl_list3902z00zz__pregexpz00; 
BgL_arg2212z00_1127 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 248 */
obj_t BgL_list2213z00_1128;
{ /* Llib/pregexp.scm 248 */
obj_t BgL_arg2214z00_1129;
BgL_arg2214z00_1129 = 
MAKE_PAIR(BgL_arg2212z00_1127, BNIL); 
BgL_list2213z00_1128 = 
MAKE_PAIR(BgL_arg2211z00_1126, BgL_arg2214z00_1129); } 
return BgL_list2213z00_1128;} } break;case ((unsigned char)'<') : 

{ /* Llib/pregexp.scm 250 */
obj_t BgL_arg2216z00_1130;obj_t BgL_arg2217z00_1131;
{ 

{ /* Llib/pregexp.scm 250 */
unsigned char BgL_aux1854z00_1135;
{ /* Llib/pregexp.scm 250 */
long BgL_kz00_2548;
{ /* Llib/pregexp.scm 250 */
obj_t BgL_auxz00_5476;
{ /* Llib/pregexp.scm 250 */
obj_t BgL_aux3256z00_3922;
BgL_aux3256z00_3922 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110, 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3256z00_3922))
{ /* Llib/pregexp.scm 250 */
BgL_auxz00_5476 = BgL_aux3256z00_3922
; }  else 
{ 
obj_t BgL_auxz00_5481;
BgL_auxz00_5481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)9235)), BGl_string3887z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3256z00_3922); 
FAILURE(BgL_auxz00_5481,BFALSE,BFALSE);} } 
BgL_kz00_2548 = 
(long)CINT(BgL_auxz00_5476); } 
{ /* Llib/pregexp.scm 250 */
long BgL_l3102z00_3768;
BgL_l3102z00_3768 = 
STRING_LENGTH(BgL_sz00_22); 
if(
BOUND_CHECK(BgL_kz00_2548, BgL_l3102z00_3768))
{ /* Llib/pregexp.scm 250 */
BgL_aux1854z00_1135 = 
STRING_REF(BgL_sz00_22, BgL_kz00_2548); }  else 
{ 
obj_t BgL_auxz00_5490;
BgL_auxz00_5490 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)9221)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2548), BgL_sz00_22); 
FAILURE(BgL_auxz00_5490,BFALSE,BFALSE);} } } 
switch( BgL_aux1854z00_1135) { case ((unsigned char)'=') : 

BgL_arg2216z00_1130 = BGl_list3905z00zz__pregexpz00; break;case ((unsigned char)'!') : 

BgL_arg2216z00_1130 = BGl_list3908z00zz__pregexpz00; break;
default: 
{ /* Llib/pregexp.scm 253 */
obj_t BgL_list2225z00_1138;
BgL_list2225z00_1138 = 
MAKE_PAIR(
BCHAR(((unsigned char)'<')), BNIL); 
BgL_arg2216z00_1130 = 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3891z00zz__pregexpz00, 
CAR(BgL_list2225z00_1138)); } } } } 
BgL_arg2217z00_1131 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110, 
BINT(((long)2))); 
{ /* Llib/pregexp.scm 250 */
obj_t BgL_list2218z00_1132;
{ /* Llib/pregexp.scm 250 */
obj_t BgL_arg2222z00_1133;
BgL_arg2222z00_1133 = 
MAKE_PAIR(BgL_arg2217z00_1131, BNIL); 
BgL_list2218z00_1132 = 
MAKE_PAIR(BgL_arg2216z00_1130, BgL_arg2222z00_1133); } 
return BgL_list2218z00_1132;} } break;
default: 
{ 
obj_t BgL_iz00_1141;obj_t BgL_rz00_1142;bool_t BgL_invzf3zf3_1143;
BgL_iz00_1141 = BgL_iz00_1110; 
BgL_rz00_1142 = BNIL; 
BgL_invzf3zf3_1143 = ((bool_t)0); 
BgL_zc3anonymousza32226ze3z83_1144:
{ /* Llib/pregexp.scm 256 */
unsigned char BgL_cz00_1145;
{ /* Llib/pregexp.scm 256 */
long BgL_kz00_2559;
{ /* Llib/pregexp.scm 256 */
obj_t BgL_auxz00_5504;
if(
INTEGERP(BgL_iz00_1141))
{ /* Llib/pregexp.scm 256 */
BgL_auxz00_5504 = BgL_iz00_1141
; }  else 
{ 
obj_t BgL_auxz00_5507;
BgL_auxz00_5507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)9540)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1141); 
FAILURE(BgL_auxz00_5507,BFALSE,BFALSE);} 
BgL_kz00_2559 = 
(long)CINT(BgL_auxz00_5504); } 
{ /* Llib/pregexp.scm 256 */
long BgL_l3094z00_3760;
BgL_l3094z00_3760 = 
STRING_LENGTH(BgL_sz00_22); 
if(
BOUND_CHECK(BgL_kz00_2559, BgL_l3094z00_3760))
{ /* Llib/pregexp.scm 256 */
BgL_cz00_1145 = 
STRING_REF(BgL_sz00_22, BgL_kz00_2559); }  else 
{ 
obj_t BgL_auxz00_5516;
BgL_auxz00_5516 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)9526)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2559), BgL_sz00_22); 
FAILURE(BgL_auxz00_5516,BFALSE,BFALSE);} } } 
{ 

switch( BgL_cz00_1145) { case ((unsigned char)'-') : 

{ 
bool_t BgL_invzf3zf3_5524;obj_t BgL_iz00_5521;
BgL_iz00_5521 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1141, 
BINT(((long)1))); 
BgL_invzf3zf3_5524 = ((bool_t)1); 
BgL_invzf3zf3_1143 = BgL_invzf3zf3_5524; 
BgL_iz00_1141 = BgL_iz00_5521; 
goto BgL_zc3anonymousza32226ze3z83_1144;} break;case ((unsigned char)'i') : 

{ /* Llib/pregexp.scm 259 */
obj_t BgL_arg2234z00_1150;obj_t BgL_arg2235z00_1151;
BgL_arg2234z00_1150 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1141, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 260 */
obj_t BgL_arg2236z00_1152;
if(BgL_invzf3zf3_1143)
{ /* Llib/pregexp.scm 260 */
BgL_arg2236z00_1152 = BGl_keyword3892z00zz__pregexpz00; }  else 
{ /* Llib/pregexp.scm 260 */
BgL_arg2236z00_1152 = BGl_keyword3894z00zz__pregexpz00; } 
BgL_arg2235z00_1151 = 
MAKE_PAIR(BgL_arg2236z00_1152, BgL_rz00_1142); } 
{ 
bool_t BgL_invzf3zf3_5531;obj_t BgL_rz00_5530;obj_t BgL_iz00_5529;
BgL_iz00_5529 = BgL_arg2234z00_1150; 
BgL_rz00_5530 = BgL_arg2235z00_1151; 
BgL_invzf3zf3_5531 = ((bool_t)0); 
BgL_invzf3zf3_1143 = BgL_invzf3zf3_5531; 
BgL_rz00_1142 = BgL_rz00_5530; 
BgL_iz00_1141 = BgL_iz00_5529; 
goto BgL_zc3anonymousza32226ze3z83_1144;} } break;case ((unsigned char)'x') : 

BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 = 
BBOOL(BgL_invzf3zf3_1143); 
{ 
bool_t BgL_invzf3zf3_5536;obj_t BgL_iz00_5533;
BgL_iz00_5533 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1141, 
BINT(((long)1))); 
BgL_invzf3zf3_5536 = ((bool_t)0); 
BgL_invzf3zf3_1143 = BgL_invzf3zf3_5536; 
BgL_iz00_1141 = BgL_iz00_5533; 
goto BgL_zc3anonymousza32226ze3z83_1144;} break;case ((unsigned char)':') : 

{ /* Llib/pregexp.scm 265 */
obj_t BgL_arg2238z00_1154;
BgL_arg2238z00_1154 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1141, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 265 */
obj_t BgL_list2239z00_1155;
{ /* Llib/pregexp.scm 265 */
obj_t BgL_arg2240z00_1156;
BgL_arg2240z00_1156 = 
MAKE_PAIR(BgL_arg2238z00_1154, BNIL); 
BgL_list2239z00_1155 = 
MAKE_PAIR(BgL_rz00_1142, BgL_arg2240z00_1156); } 
return BgL_list2239z00_1155;} } break;
default: 
{ /* Llib/pregexp.scm 266 */
obj_t BgL_list2241z00_1157;
BgL_list2241z00_1157 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1145), BNIL); 
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3891z00zz__pregexpz00, 
CAR(BgL_list2241z00_1157));} } } } } } } } } break;
default: 
{ /* Llib/pregexp.scm 267 */
obj_t BgL_list2242z00_1159;
{ /* Llib/pregexp.scm 267 */
obj_t BgL_arg2243z00_1160;obj_t BgL_arg2244z00_1161;
BgL_arg2243z00_1160 = BGl_list3888z00zz__pregexpz00; 
BgL_arg2244z00_1161 = 
MAKE_PAIR(BgL_iz00_23, BNIL); 
BgL_list2242z00_1159 = 
MAKE_PAIR(BgL_arg2243z00_1160, BgL_arg2244z00_1161); } 
return BgL_list2242z00_1159;} } } } } 
}



/* pregexp-read-subpattern */
obj_t BGl_pregexpzd2readzd2subpatternz00zz__pregexpz00(obj_t BgL_sz00_25, obj_t BgL_iz00_26, long BgL_nz00_27)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 269 */
{ /* Llib/pregexp.scm 271 */
bool_t BgL_rememberzd2spacezd2sensitivezf3zf3_1162;
BgL_rememberzd2spacezd2sensitivezf3zf3_1162 = 
CBOOL(BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00); 
{ /* Llib/pregexp.scm 271 */
obj_t BgL_ctypzd2izd2_1163;
BgL_ctypzd2izd2_1163 = 
BGl_pregexpzd2readzd2clusterzd2typezd2zz__pregexpz00(BgL_sz00_25, BgL_iz00_26, BgL_nz00_27); 
{ /* Llib/pregexp.scm 272 */
obj_t BgL_ctypz00_1164;
{ /* Llib/pregexp.scm 273 */
obj_t BgL_pairz00_2571;
if(
PAIRP(BgL_ctypzd2izd2_1163))
{ /* Llib/pregexp.scm 273 */
BgL_pairz00_2571 = BgL_ctypzd2izd2_1163; }  else 
{ 
obj_t BgL_auxz00_5554;
BgL_auxz00_5554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)10321)), BGl_string3911z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_ctypzd2izd2_1163); 
FAILURE(BgL_auxz00_5554,BFALSE,BFALSE);} 
BgL_ctypz00_1164 = 
CAR(BgL_pairz00_2571); } 
{ /* Llib/pregexp.scm 273 */
obj_t BgL_iz00_1165;
{ /* Llib/pregexp.scm 274 */
obj_t BgL_pairz00_2572;
BgL_pairz00_2572 = BgL_ctypzd2izd2_1163; 
{ /* Llib/pregexp.scm 274 */
obj_t BgL_pairz00_2575;
{ /* Llib/pregexp.scm 274 */
obj_t BgL_aux3262z00_3928;
BgL_aux3262z00_3928 = 
CDR(BgL_pairz00_2572); 
if(
PAIRP(BgL_aux3262z00_3928))
{ /* Llib/pregexp.scm 274 */
BgL_pairz00_2575 = BgL_aux3262z00_3928; }  else 
{ 
obj_t BgL_auxz00_5562;
BgL_auxz00_5562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)10344)), BGl_string3911z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3262z00_3928); 
FAILURE(BgL_auxz00_5562,BFALSE,BFALSE);} } 
BgL_iz00_1165 = 
CAR(BgL_pairz00_2575); } } 
{ /* Llib/pregexp.scm 274 */
obj_t BgL_vvz00_1166;
BgL_vvz00_1166 = 
BGl_pregexpzd2readzd2patternz00zz__pregexpz00(BgL_sz00_25, BgL_iz00_1165, BgL_nz00_27); 
{ /* Llib/pregexp.scm 275 */

BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 = 
BBOOL(BgL_rememberzd2spacezd2sensitivezf3zf3_1162); 
{ /* Llib/pregexp.scm 277 */
obj_t BgL_vvzd2rezd2_1167;obj_t BgL_vvzd2izd2_1168;
{ /* Llib/pregexp.scm 277 */
obj_t BgL_pairz00_2576;
if(
PAIRP(BgL_vvz00_1166))
{ /* Llib/pregexp.scm 277 */
BgL_pairz00_2576 = BgL_vvz00_1166; }  else 
{ 
obj_t BgL_auxz00_5571;
BgL_auxz00_5571 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)10495)), BGl_string3911z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_vvz00_1166); 
FAILURE(BgL_auxz00_5571,BFALSE,BFALSE);} 
BgL_vvzd2rezd2_1167 = 
CAR(BgL_pairz00_2576); } 
{ /* Llib/pregexp.scm 278 */
obj_t BgL_pairz00_2577;
BgL_pairz00_2577 = BgL_vvz00_1166; 
{ /* Llib/pregexp.scm 278 */
obj_t BgL_pairz00_2580;
{ /* Llib/pregexp.scm 278 */
obj_t BgL_aux3268z00_3934;
BgL_aux3268z00_3934 = 
CDR(BgL_pairz00_2577); 
if(
PAIRP(BgL_aux3268z00_3934))
{ /* Llib/pregexp.scm 278 */
BgL_pairz00_2580 = BgL_aux3268z00_3934; }  else 
{ 
obj_t BgL_auxz00_5579;
BgL_auxz00_5579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)10518)), BGl_string3911z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3268z00_3934); 
FAILURE(BgL_auxz00_5579,BFALSE,BFALSE);} } 
BgL_vvzd2izd2_1168 = 
CAR(BgL_pairz00_2580); } } 
{ /* Llib/pregexp.scm 279 */
bool_t BgL_testz00_5584;
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_vvzd2izd2_1168, 
BINT(BgL_nz00_27)))
{ /* Llib/pregexp.scm 280 */
unsigned char BgL_auxz00_5588;
{ /* Llib/pregexp.scm 280 */
long BgL_kz00_2582;
{ /* Llib/pregexp.scm 280 */
obj_t BgL_auxz00_5589;
if(
INTEGERP(BgL_vvzd2izd2_1168))
{ /* Llib/pregexp.scm 280 */
BgL_auxz00_5589 = BgL_vvzd2izd2_1168
; }  else 
{ 
obj_t BgL_auxz00_5592;
BgL_auxz00_5592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)10597)), BGl_string3911z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_vvzd2izd2_1168); 
FAILURE(BgL_auxz00_5592,BFALSE,BFALSE);} 
BgL_kz00_2582 = 
(long)CINT(BgL_auxz00_5589); } 
{ /* Llib/pregexp.scm 280 */
long BgL_l3106z00_3772;
BgL_l3106z00_3772 = 
STRING_LENGTH(BgL_sz00_25); 
if(
BOUND_CHECK(BgL_kz00_2582, BgL_l3106z00_3772))
{ /* Llib/pregexp.scm 280 */
BgL_auxz00_5588 = 
STRING_REF(BgL_sz00_25, BgL_kz00_2582)
; }  else 
{ 
obj_t BgL_auxz00_5601;
BgL_auxz00_5601 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)10583)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2582), BgL_sz00_25); 
FAILURE(BgL_auxz00_5601,BFALSE,BFALSE);} } } 
BgL_testz00_5584 = 
(BgL_auxz00_5588==((unsigned char)')')); }  else 
{ /* Llib/pregexp.scm 279 */
BgL_testz00_5584 = ((bool_t)0)
; } 
if(BgL_testz00_5584)
{ /* Llib/pregexp.scm 284 */
obj_t BgL_arg2246z00_1170;obj_t BgL_arg2247z00_1171;
{ 
obj_t BgL_ctypz00_1175;obj_t BgL_rez00_1176;
BgL_ctypz00_1175 = BgL_ctypz00_1164; 
BgL_rez00_1176 = BgL_vvzd2rezd2_1167; 
BgL_zc3anonymousza32250ze3z83_1177:
if(
NULLP(BgL_ctypz00_1175))
{ /* Llib/pregexp.scm 284 */
BgL_arg2246z00_1170 = BgL_rez00_1176; }  else 
{ /* Llib/pregexp.scm 285 */
obj_t BgL_arg2252z00_1179;obj_t BgL_arg2253z00_1180;
{ /* Llib/pregexp.scm 285 */
obj_t BgL_pairz00_2586;
if(
PAIRP(BgL_ctypz00_1175))
{ /* Llib/pregexp.scm 285 */
BgL_pairz00_2586 = BgL_ctypz00_1175; }  else 
{ 
obj_t BgL_auxz00_5611;
BgL_auxz00_5611 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)10763)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_ctypz00_1175); 
FAILURE(BgL_auxz00_5611,BFALSE,BFALSE);} 
BgL_arg2252z00_1179 = 
CDR(BgL_pairz00_2586); } 
{ /* Llib/pregexp.scm 286 */
obj_t BgL_arg2255z00_1181;
BgL_arg2255z00_1181 = 
CAR(BgL_ctypz00_1175); 
{ /* Llib/pregexp.scm 286 */
obj_t BgL_list2256z00_1182;
{ /* Llib/pregexp.scm 286 */
obj_t BgL_arg2257z00_1183;
BgL_arg2257z00_1183 = 
MAKE_PAIR(BgL_rez00_1176, BNIL); 
BgL_list2256z00_1182 = 
MAKE_PAIR(BgL_arg2255z00_1181, BgL_arg2257z00_1183); } 
BgL_arg2253z00_1180 = BgL_list2256z00_1182; } } 
{ 
obj_t BgL_rez00_5620;obj_t BgL_ctypz00_5619;
BgL_ctypz00_5619 = BgL_arg2252z00_1179; 
BgL_rez00_5620 = BgL_arg2253z00_1180; 
BgL_rez00_1176 = BgL_rez00_5620; 
BgL_ctypz00_1175 = BgL_ctypz00_5619; 
goto BgL_zc3anonymousza32250ze3z83_1177;} } } 
BgL_arg2247z00_1171 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_vvzd2izd2_1168, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 282 */
obj_t BgL_list2248z00_1172;
{ /* Llib/pregexp.scm 282 */
obj_t BgL_arg2249z00_1173;
BgL_arg2249z00_1173 = 
MAKE_PAIR(BgL_arg2247z00_1171, BNIL); 
BgL_list2248z00_1172 = 
MAKE_PAIR(BgL_arg2246z00_1170, BgL_arg2249z00_1173); } 
return BgL_list2248z00_1172;} }  else 
{ /* Llib/pregexp.scm 279 */
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3912z00zz__pregexpz00, BUNSPEC);} } } } } } } } } } 
}



/* pregexp-wrap-quantifier-if-any */
obj_t BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(obj_t BgL_vvz00_28, obj_t BgL_sz00_29, long BgL_nz00_30)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 290 */
{ /* Llib/pregexp.scm 292 */
obj_t BgL_rez00_1188;
{ /* Llib/pregexp.scm 292 */
obj_t BgL_pairz00_2599;
if(
PAIRP(BgL_vvz00_28))
{ /* Llib/pregexp.scm 292 */
BgL_pairz00_2599 = BgL_vvz00_28; }  else 
{ 
obj_t BgL_auxz00_5628;
BgL_auxz00_5628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)10977)), BGl_string3913z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_vvz00_28); 
FAILURE(BgL_auxz00_5628,BFALSE,BFALSE);} 
BgL_rez00_1188 = 
CAR(BgL_pairz00_2599); } 
{ /* Llib/pregexp.scm 293 */
obj_t BgL_g1855z00_1189;
{ /* Llib/pregexp.scm 293 */
obj_t BgL_pairz00_2600;
BgL_pairz00_2600 = BgL_vvz00_28; 
{ /* Llib/pregexp.scm 293 */
obj_t BgL_pairz00_2603;
{ /* Llib/pregexp.scm 293 */
obj_t BgL_aux3280z00_3946;
BgL_aux3280z00_3946 = 
CDR(BgL_pairz00_2600); 
if(
PAIRP(BgL_aux3280z00_3946))
{ /* Llib/pregexp.scm 293 */
BgL_pairz00_2603 = BgL_aux3280z00_3946; }  else 
{ 
obj_t BgL_auxz00_5636;
BgL_auxz00_5636 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11003)), BGl_string3913z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3280z00_3946); 
FAILURE(BgL_auxz00_5636,BFALSE,BFALSE);} } 
BgL_g1855z00_1189 = 
CAR(BgL_pairz00_2603); } } 
{ 
obj_t BgL_iz00_1191;
BgL_iz00_1191 = BgL_g1855z00_1189; 
BgL_zc3anonymousza32261ze3z83_1192:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1191, 
BINT(BgL_nz00_30)))
{ /* Llib/pregexp.scm 294 */
return BgL_vvz00_28;}  else 
{ /* Llib/pregexp.scm 295 */
unsigned char BgL_cz00_1194;
{ /* Llib/pregexp.scm 295 */
long BgL_kz00_2605;
{ /* Llib/pregexp.scm 295 */
obj_t BgL_auxz00_5644;
{ /* Llib/pregexp.scm 295 */
obj_t BgL_aux3282z00_3948;
BgL_aux3282z00_3948 = BgL_iz00_1191; 
if(
INTEGERP(BgL_aux3282z00_3948))
{ /* Llib/pregexp.scm 295 */
BgL_auxz00_5644 = BgL_aux3282z00_3948
; }  else 
{ 
obj_t BgL_auxz00_5647;
BgL_auxz00_5647 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11074)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3282z00_3948); 
FAILURE(BgL_auxz00_5647,BFALSE,BFALSE);} } 
BgL_kz00_2605 = 
(long)CINT(BgL_auxz00_5644); } 
{ /* Llib/pregexp.scm 295 */
long BgL_l3110z00_3776;
BgL_l3110z00_3776 = 
STRING_LENGTH(BgL_sz00_29); 
if(
BOUND_CHECK(BgL_kz00_2605, BgL_l3110z00_3776))
{ /* Llib/pregexp.scm 295 */
BgL_cz00_1194 = 
STRING_REF(BgL_sz00_29, BgL_kz00_2605); }  else 
{ 
obj_t BgL_auxz00_5656;
BgL_auxz00_5656 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11060)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2605), BgL_sz00_29); 
FAILURE(BgL_auxz00_5656,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 296 */
bool_t BgL_testz00_5661;
if(
isspace(BgL_cz00_1194))
{ /* Llib/pregexp.scm 296 */
if(
CBOOL(BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00))
{ /* Llib/pregexp.scm 296 */
BgL_testz00_5661 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 296 */
BgL_testz00_5661 = ((bool_t)1)
; } }  else 
{ /* Llib/pregexp.scm 296 */
BgL_testz00_5661 = ((bool_t)0)
; } 
if(BgL_testz00_5661)
{ 
obj_t BgL_iz00_5666;
BgL_iz00_5666 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1191, 
BINT(((long)1))); 
BgL_iz00_1191 = BgL_iz00_5666; 
goto BgL_zc3anonymousza32261ze3z83_1192;}  else 
{ /* Llib/pregexp.scm 296 */
switch( BgL_cz00_1194) { case ((unsigned char)'*') : 
case ((unsigned char)'+') : 
case ((unsigned char)'?') : 
case ((unsigned char)'{') : 

{ /* Llib/pregexp.scm 300 */
obj_t BgL_newzd2rezd2_1200;
{ /* Llib/pregexp.scm 300 */
obj_t BgL_list2304z00_1242;
{ /* Llib/pregexp.scm 300 */
obj_t BgL_arg2305z00_1243;obj_t BgL_arg2306z00_1244;
BgL_arg2305z00_1243 = BGl_keyword3914z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 300 */
obj_t BgL_arg2307z00_1245;obj_t BgL_arg2308z00_1246;
BgL_arg2307z00_1245 = BGl_symbol3916z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 301 */
obj_t BgL_arg2309z00_1247;obj_t BgL_arg2310z00_1248;
BgL_arg2309z00_1247 = BGl_symbol3918z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 301 */
obj_t BgL_arg2311z00_1249;obj_t BgL_arg2312z00_1250;
BgL_arg2311z00_1249 = BGl_symbol3920z00zz__pregexpz00; 
BgL_arg2312z00_1250 = 
MAKE_PAIR(BgL_rez00_1188, BNIL); 
BgL_arg2310z00_1248 = 
MAKE_PAIR(BgL_arg2311z00_1249, BgL_arg2312z00_1250); } 
BgL_arg2308z00_1246 = 
MAKE_PAIR(BgL_arg2309z00_1247, BgL_arg2310z00_1248); } 
BgL_arg2306z00_1244 = 
MAKE_PAIR(BgL_arg2307z00_1245, BgL_arg2308z00_1246); } 
BgL_list2304z00_1242 = 
MAKE_PAIR(BgL_arg2305z00_1243, BgL_arg2306z00_1244); } 
BgL_newzd2rezd2_1200 = BgL_list2304z00_1242; } 
{ /* Llib/pregexp.scm 300 */
obj_t BgL_newzd2vvzd2_1201;
{ /* Llib/pregexp.scm 302 */
obj_t BgL_list2302z00_1240;
{ /* Llib/pregexp.scm 302 */
obj_t BgL_arg2303z00_1241;
BgL_arg2303z00_1241 = 
MAKE_PAIR(BGl_symbol3922z00zz__pregexpz00, BNIL); 
BgL_list2302z00_1240 = 
MAKE_PAIR(BgL_newzd2rezd2_1200, BgL_arg2303z00_1241); } 
BgL_newzd2vvzd2_1201 = BgL_list2302z00_1240; } 
{ /* Llib/pregexp.scm 302 */

switch( BgL_cz00_1194) { case ((unsigned char)'*') : 

{ /* Llib/pregexp.scm 304 */
obj_t BgL_arg2267z00_1205;
{ /* Llib/pregexp.scm 304 */
obj_t BgL_pairz00_2611;
if(
PAIRP(BgL_newzd2rezd2_1200))
{ /* Llib/pregexp.scm 304 */
BgL_pairz00_2611 = BgL_newzd2rezd2_1200; }  else 
{ 
obj_t BgL_auxz00_5678;
BgL_auxz00_5678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11518)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2rezd2_1200); 
FAILURE(BgL_auxz00_5678,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 304 */
obj_t BgL_pairz00_2614;
{ /* Llib/pregexp.scm 304 */
obj_t BgL_aux3286z00_3952;
BgL_aux3286z00_3952 = 
CDR(BgL_pairz00_2611); 
if(
PAIRP(BgL_aux3286z00_3952))
{ /* Llib/pregexp.scm 304 */
BgL_pairz00_2614 = BgL_aux3286z00_3952; }  else 
{ 
obj_t BgL_auxz00_5685;
BgL_auxz00_5685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11512)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3286z00_3952); 
FAILURE(BgL_auxz00_5685,BFALSE,BFALSE);} } 
BgL_arg2267z00_1205 = 
CDR(BgL_pairz00_2614); } } 
{ /* Llib/pregexp.scm 304 */
obj_t BgL_pairz00_2615;obj_t BgL_objz00_2616;
if(
PAIRP(BgL_arg2267z00_1205))
{ /* Llib/pregexp.scm 304 */
BgL_pairz00_2615 = BgL_arg2267z00_1205; }  else 
{ 
obj_t BgL_auxz00_5692;
BgL_auxz00_5692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11524)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2267z00_1205); 
FAILURE(BgL_auxz00_5692,BFALSE,BFALSE);} 
BgL_objz00_2616 = 
BINT(((long)0)); 
SET_CAR(BgL_pairz00_2615, BgL_objz00_2616); } } 
{ /* Llib/pregexp.scm 305 */
obj_t BgL_arg2269z00_1207;
{ /* Llib/pregexp.scm 305 */
obj_t BgL_pairz00_2617;
BgL_pairz00_2617 = BgL_newzd2rezd2_1200; 
{ /* Llib/pregexp.scm 305 */
obj_t BgL_pairz00_2622;
{ /* Llib/pregexp.scm 305 */
obj_t BgL_pairz00_2621;
{ /* Llib/pregexp.scm 305 */
obj_t BgL_aux3292z00_3958;
BgL_aux3292z00_3958 = 
CDR(BgL_pairz00_2617); 
if(
PAIRP(BgL_aux3292z00_3958))
{ /* Llib/pregexp.scm 305 */
BgL_pairz00_2621 = BgL_aux3292z00_3958; }  else 
{ 
obj_t BgL_auxz00_5701;
BgL_auxz00_5701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11565)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3292z00_3958); 
FAILURE(BgL_auxz00_5701,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 305 */
obj_t BgL_aux3294z00_3960;
BgL_aux3294z00_3960 = 
CDR(BgL_pairz00_2621); 
if(
PAIRP(BgL_aux3294z00_3960))
{ /* Llib/pregexp.scm 305 */
BgL_pairz00_2622 = BgL_aux3294z00_3960; }  else 
{ 
obj_t BgL_auxz00_5708;
BgL_auxz00_5708 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11565)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3294z00_3960); 
FAILURE(BgL_auxz00_5708,BFALSE,BFALSE);} } } 
BgL_arg2269z00_1207 = 
CDR(BgL_pairz00_2622); } } 
{ /* Llib/pregexp.scm 305 */
obj_t BgL_pairz00_2623;
if(
PAIRP(BgL_arg2269z00_1207))
{ /* Llib/pregexp.scm 305 */
BgL_pairz00_2623 = BgL_arg2269z00_1207; }  else 
{ 
obj_t BgL_auxz00_5715;
BgL_auxz00_5715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11578)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2269z00_1207); 
FAILURE(BgL_auxz00_5715,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2623, BFALSE); } } break;case ((unsigned char)'+') : 

{ /* Llib/pregexp.scm 306 */
obj_t BgL_arg2270z00_1208;
{ /* Llib/pregexp.scm 306 */
obj_t BgL_pairz00_2625;
if(
PAIRP(BgL_newzd2rezd2_1200))
{ /* Llib/pregexp.scm 306 */
BgL_pairz00_2625 = BgL_newzd2rezd2_1200; }  else 
{ 
obj_t BgL_auxz00_5722;
BgL_auxz00_5722 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11633)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2rezd2_1200); 
FAILURE(BgL_auxz00_5722,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 306 */
obj_t BgL_pairz00_2628;
{ /* Llib/pregexp.scm 306 */
obj_t BgL_aux3300z00_3966;
BgL_aux3300z00_3966 = 
CDR(BgL_pairz00_2625); 
if(
PAIRP(BgL_aux3300z00_3966))
{ /* Llib/pregexp.scm 306 */
BgL_pairz00_2628 = BgL_aux3300z00_3966; }  else 
{ 
obj_t BgL_auxz00_5729;
BgL_auxz00_5729 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11627)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3300z00_3966); 
FAILURE(BgL_auxz00_5729,BFALSE,BFALSE);} } 
BgL_arg2270z00_1208 = 
CDR(BgL_pairz00_2628); } } 
{ /* Llib/pregexp.scm 306 */
obj_t BgL_pairz00_2629;obj_t BgL_objz00_2630;
if(
PAIRP(BgL_arg2270z00_1208))
{ /* Llib/pregexp.scm 306 */
BgL_pairz00_2629 = BgL_arg2270z00_1208; }  else 
{ 
obj_t BgL_auxz00_5736;
BgL_auxz00_5736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11639)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2270z00_1208); 
FAILURE(BgL_auxz00_5736,BFALSE,BFALSE);} 
BgL_objz00_2630 = 
BINT(((long)1)); 
SET_CAR(BgL_pairz00_2629, BgL_objz00_2630); } } 
{ /* Llib/pregexp.scm 307 */
obj_t BgL_arg2272z00_1210;
{ /* Llib/pregexp.scm 307 */
obj_t BgL_pairz00_2631;
BgL_pairz00_2631 = BgL_newzd2rezd2_1200; 
{ /* Llib/pregexp.scm 307 */
obj_t BgL_pairz00_2636;
{ /* Llib/pregexp.scm 307 */
obj_t BgL_pairz00_2635;
{ /* Llib/pregexp.scm 307 */
obj_t BgL_aux3306z00_3972;
BgL_aux3306z00_3972 = 
CDR(BgL_pairz00_2631); 
if(
PAIRP(BgL_aux3306z00_3972))
{ /* Llib/pregexp.scm 307 */
BgL_pairz00_2635 = BgL_aux3306z00_3972; }  else 
{ 
obj_t BgL_auxz00_5745;
BgL_auxz00_5745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11680)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3306z00_3972); 
FAILURE(BgL_auxz00_5745,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 307 */
obj_t BgL_aux3308z00_3974;
BgL_aux3308z00_3974 = 
CDR(BgL_pairz00_2635); 
if(
PAIRP(BgL_aux3308z00_3974))
{ /* Llib/pregexp.scm 307 */
BgL_pairz00_2636 = BgL_aux3308z00_3974; }  else 
{ 
obj_t BgL_auxz00_5752;
BgL_auxz00_5752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11680)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3308z00_3974); 
FAILURE(BgL_auxz00_5752,BFALSE,BFALSE);} } } 
BgL_arg2272z00_1210 = 
CDR(BgL_pairz00_2636); } } 
{ /* Llib/pregexp.scm 307 */
obj_t BgL_pairz00_2637;
if(
PAIRP(BgL_arg2272z00_1210))
{ /* Llib/pregexp.scm 307 */
BgL_pairz00_2637 = BgL_arg2272z00_1210; }  else 
{ 
obj_t BgL_auxz00_5759;
BgL_auxz00_5759 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11693)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2272z00_1210); 
FAILURE(BgL_auxz00_5759,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2637, BFALSE); } } break;case ((unsigned char)'?') : 

{ /* Llib/pregexp.scm 308 */
obj_t BgL_arg2274z00_1211;
{ /* Llib/pregexp.scm 308 */
obj_t BgL_pairz00_2639;
if(
PAIRP(BgL_newzd2rezd2_1200))
{ /* Llib/pregexp.scm 308 */
BgL_pairz00_2639 = BgL_newzd2rezd2_1200; }  else 
{ 
obj_t BgL_auxz00_5766;
BgL_auxz00_5766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11748)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2rezd2_1200); 
FAILURE(BgL_auxz00_5766,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 308 */
obj_t BgL_pairz00_2642;
{ /* Llib/pregexp.scm 308 */
obj_t BgL_aux3314z00_3980;
BgL_aux3314z00_3980 = 
CDR(BgL_pairz00_2639); 
if(
PAIRP(BgL_aux3314z00_3980))
{ /* Llib/pregexp.scm 308 */
BgL_pairz00_2642 = BgL_aux3314z00_3980; }  else 
{ 
obj_t BgL_auxz00_5773;
BgL_auxz00_5773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11742)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3314z00_3980); 
FAILURE(BgL_auxz00_5773,BFALSE,BFALSE);} } 
BgL_arg2274z00_1211 = 
CDR(BgL_pairz00_2642); } } 
{ /* Llib/pregexp.scm 308 */
obj_t BgL_pairz00_2643;obj_t BgL_objz00_2644;
if(
PAIRP(BgL_arg2274z00_1211))
{ /* Llib/pregexp.scm 308 */
BgL_pairz00_2643 = BgL_arg2274z00_1211; }  else 
{ 
obj_t BgL_auxz00_5780;
BgL_auxz00_5780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11754)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2274z00_1211); 
FAILURE(BgL_auxz00_5780,BFALSE,BFALSE);} 
BgL_objz00_2644 = 
BINT(((long)0)); 
SET_CAR(BgL_pairz00_2643, BgL_objz00_2644); } } 
{ /* Llib/pregexp.scm 309 */
obj_t BgL_arg2277z00_1213;
{ /* Llib/pregexp.scm 309 */
obj_t BgL_pairz00_2645;
BgL_pairz00_2645 = BgL_newzd2rezd2_1200; 
{ /* Llib/pregexp.scm 309 */
obj_t BgL_pairz00_2650;
{ /* Llib/pregexp.scm 309 */
obj_t BgL_pairz00_2649;
{ /* Llib/pregexp.scm 309 */
obj_t BgL_aux3320z00_3986;
BgL_aux3320z00_3986 = 
CDR(BgL_pairz00_2645); 
if(
PAIRP(BgL_aux3320z00_3986))
{ /* Llib/pregexp.scm 309 */
BgL_pairz00_2649 = BgL_aux3320z00_3986; }  else 
{ 
obj_t BgL_auxz00_5789;
BgL_auxz00_5789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11795)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3320z00_3986); 
FAILURE(BgL_auxz00_5789,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 309 */
obj_t BgL_aux3322z00_3988;
BgL_aux3322z00_3988 = 
CDR(BgL_pairz00_2649); 
if(
PAIRP(BgL_aux3322z00_3988))
{ /* Llib/pregexp.scm 309 */
BgL_pairz00_2650 = BgL_aux3322z00_3988; }  else 
{ 
obj_t BgL_auxz00_5796;
BgL_auxz00_5796 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11795)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3322z00_3988); 
FAILURE(BgL_auxz00_5796,BFALSE,BFALSE);} } } 
BgL_arg2277z00_1213 = 
CDR(BgL_pairz00_2650); } } 
{ /* Llib/pregexp.scm 309 */
obj_t BgL_pairz00_2651;obj_t BgL_objz00_2652;
if(
PAIRP(BgL_arg2277z00_1213))
{ /* Llib/pregexp.scm 309 */
BgL_pairz00_2651 = BgL_arg2277z00_1213; }  else 
{ 
obj_t BgL_auxz00_5803;
BgL_auxz00_5803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)11808)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2277z00_1213); 
FAILURE(BgL_auxz00_5803,BFALSE,BFALSE);} 
BgL_objz00_2652 = 
BINT(((long)1)); 
SET_CAR(BgL_pairz00_2651, BgL_objz00_2652); } } break;case ((unsigned char)'{') : 

{ /* Llib/pregexp.scm 310 */
obj_t BgL_pqz00_1215;
BgL_pqz00_1215 = 
BGl_pregexpzd2readzd2numsz00zz__pregexpz00(BgL_sz00_29, 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1191, 
BINT(((long)1))), BgL_nz00_30); 
if(
CBOOL(BgL_pqz00_1215))
{ /* Llib/pregexp.scm 311 */BFALSE; }  else 
{ /* Llib/pregexp.scm 312 */
obj_t BgL_list2279z00_1216;
BgL_list2279z00_1216 = 
MAKE_PAIR(BGl_string3924z00zz__pregexpz00, BNIL); 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3925z00zz__pregexpz00, 
CAR(BgL_list2279z00_1216)); } 
{ /* Llib/pregexp.scm 315 */
obj_t BgL_arg2280z00_1217;obj_t BgL_arg2281z00_1218;
{ /* Llib/pregexp.scm 315 */
obj_t BgL_pairz00_2660;
if(
PAIRP(BgL_newzd2rezd2_1200))
{ /* Llib/pregexp.scm 315 */
BgL_pairz00_2660 = BgL_newzd2rezd2_1200; }  else 
{ 
obj_t BgL_auxz00_5819;
BgL_auxz00_5819 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12197)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2rezd2_1200); 
FAILURE(BgL_auxz00_5819,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 315 */
obj_t BgL_pairz00_2663;
{ /* Llib/pregexp.scm 315 */
obj_t BgL_aux3328z00_3994;
BgL_aux3328z00_3994 = 
CDR(BgL_pairz00_2660); 
if(
PAIRP(BgL_aux3328z00_3994))
{ /* Llib/pregexp.scm 315 */
BgL_pairz00_2663 = BgL_aux3328z00_3994; }  else 
{ 
obj_t BgL_auxz00_5826;
BgL_auxz00_5826 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12191)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3328z00_3994); 
FAILURE(BgL_auxz00_5826,BFALSE,BFALSE);} } 
BgL_arg2280z00_1217 = 
CDR(BgL_pairz00_2663); } } 
{ /* Llib/pregexp.scm 315 */
obj_t BgL_pairz00_2664;
if(
PAIRP(BgL_pqz00_1215))
{ /* Llib/pregexp.scm 315 */
BgL_pairz00_2664 = BgL_pqz00_1215; }  else 
{ 
obj_t BgL_auxz00_5833;
BgL_auxz00_5833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12210)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_pqz00_1215); 
FAILURE(BgL_auxz00_5833,BFALSE,BFALSE);} 
BgL_arg2281z00_1218 = 
CAR(BgL_pairz00_2664); } 
{ /* Llib/pregexp.scm 315 */
obj_t BgL_pairz00_2665;
if(
PAIRP(BgL_arg2280z00_1217))
{ /* Llib/pregexp.scm 315 */
BgL_pairz00_2665 = BgL_arg2280z00_1217; }  else 
{ 
obj_t BgL_auxz00_5840;
BgL_auxz00_5840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12203)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2280z00_1217); 
FAILURE(BgL_auxz00_5840,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2665, BgL_arg2281z00_1218); } } 
{ /* Llib/pregexp.scm 316 */
obj_t BgL_arg2282z00_1219;obj_t BgL_arg2283z00_1220;
{ /* Llib/pregexp.scm 316 */
obj_t BgL_pairz00_2667;
BgL_pairz00_2667 = BgL_newzd2rezd2_1200; 
{ /* Llib/pregexp.scm 316 */
obj_t BgL_pairz00_2672;
{ /* Llib/pregexp.scm 316 */
obj_t BgL_pairz00_2671;
{ /* Llib/pregexp.scm 316 */
obj_t BgL_aux3336z00_4002;
BgL_aux3336z00_4002 = 
CDR(BgL_pairz00_2667); 
if(
PAIRP(BgL_aux3336z00_4002))
{ /* Llib/pregexp.scm 316 */
BgL_pairz00_2671 = BgL_aux3336z00_4002; }  else 
{ 
obj_t BgL_auxz00_5848;
BgL_auxz00_5848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12259)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3336z00_4002); 
FAILURE(BgL_auxz00_5848,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 316 */
obj_t BgL_aux3338z00_4004;
BgL_aux3338z00_4004 = 
CDR(BgL_pairz00_2671); 
if(
PAIRP(BgL_aux3338z00_4004))
{ /* Llib/pregexp.scm 316 */
BgL_pairz00_2672 = BgL_aux3338z00_4004; }  else 
{ 
obj_t BgL_auxz00_5855;
BgL_auxz00_5855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12259)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3338z00_4004); 
FAILURE(BgL_auxz00_5855,BFALSE,BFALSE);} } } 
BgL_arg2282z00_1219 = 
CDR(BgL_pairz00_2672); } } 
{ /* Llib/pregexp.scm 316 */
obj_t BgL_pairz00_2673;
BgL_pairz00_2673 = BgL_pqz00_1215; 
{ /* Llib/pregexp.scm 316 */
obj_t BgL_pairz00_2676;
{ /* Llib/pregexp.scm 316 */
obj_t BgL_aux3342z00_4008;
BgL_aux3342z00_4008 = 
CDR(BgL_pairz00_2673); 
if(
PAIRP(BgL_aux3342z00_4008))
{ /* Llib/pregexp.scm 316 */
BgL_pairz00_2676 = BgL_aux3342z00_4008; }  else 
{ 
obj_t BgL_auxz00_5863;
BgL_auxz00_5863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12274)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3342z00_4008); 
FAILURE(BgL_auxz00_5863,BFALSE,BFALSE);} } 
BgL_arg2283z00_1220 = 
CAR(BgL_pairz00_2676); } } 
{ /* Llib/pregexp.scm 316 */
obj_t BgL_pairz00_2677;
if(
PAIRP(BgL_arg2282z00_1219))
{ /* Llib/pregexp.scm 316 */
BgL_pairz00_2677 = BgL_arg2282z00_1219; }  else 
{ 
obj_t BgL_auxz00_5870;
BgL_auxz00_5870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12272)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2282z00_1219); 
FAILURE(BgL_auxz00_5870,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2677, BgL_arg2283z00_1220); } } 
{ /* Llib/pregexp.scm 317 */
obj_t BgL_pairz00_2679;
BgL_pairz00_2679 = BgL_pqz00_1215; 
{ /* Llib/pregexp.scm 317 */
obj_t BgL_pairz00_2684;
{ /* Llib/pregexp.scm 317 */
obj_t BgL_pairz00_2683;
{ /* Llib/pregexp.scm 317 */
obj_t BgL_aux3348z00_4014;
BgL_aux3348z00_4014 = 
CDR(BgL_pairz00_2679); 
if(
PAIRP(BgL_aux3348z00_4014))
{ /* Llib/pregexp.scm 317 */
BgL_pairz00_2683 = BgL_aux3348z00_4014; }  else 
{ 
obj_t BgL_auxz00_5878;
BgL_auxz00_5878 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12327)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3348z00_4014); 
FAILURE(BgL_auxz00_5878,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 317 */
obj_t BgL_aux3350z00_4016;
BgL_aux3350z00_4016 = 
CDR(BgL_pairz00_2683); 
if(
PAIRP(BgL_aux3350z00_4016))
{ /* Llib/pregexp.scm 317 */
BgL_pairz00_2684 = BgL_aux3350z00_4016; }  else 
{ 
obj_t BgL_auxz00_5885;
BgL_auxz00_5885 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12327)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3350z00_4016); 
FAILURE(BgL_auxz00_5885,BFALSE,BFALSE);} } } 
BgL_iz00_1191 = 
CAR(BgL_pairz00_2684); } } } break;
default: BUNSPEC; } 
{ /* Llib/pregexp.scm 318 */
obj_t BgL_g1860z00_1222;
BgL_g1860z00_1222 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1191, 
BINT(((long)1))); 
{ 
obj_t BgL_iz00_1224;
BgL_iz00_1224 = BgL_g1860z00_1222; 
BgL_zc3anonymousza32285ze3z83_1225:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1224, 
BINT(BgL_nz00_30)))
{ /* Llib/pregexp.scm 319 */
{ /* Llib/pregexp.scm 320 */
obj_t BgL_arg2289z00_1227;
{ /* Llib/pregexp.scm 320 */
obj_t BgL_pairz00_2685;
if(
PAIRP(BgL_newzd2rezd2_1200))
{ /* Llib/pregexp.scm 320 */
BgL_pairz00_2685 = BgL_newzd2rezd2_1200; }  else 
{ 
obj_t BgL_auxz00_5898;
BgL_auxz00_5898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12478)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2rezd2_1200); 
FAILURE(BgL_auxz00_5898,BFALSE,BFALSE);} 
BgL_arg2289z00_1227 = 
CDR(BgL_pairz00_2685); } 
{ /* Llib/pregexp.scm 320 */
obj_t BgL_pairz00_2686;
if(
PAIRP(BgL_arg2289z00_1227))
{ /* Llib/pregexp.scm 320 */
BgL_pairz00_2686 = BgL_arg2289z00_1227; }  else 
{ 
obj_t BgL_auxz00_5905;
BgL_auxz00_5905 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12484)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2289z00_1227); 
FAILURE(BgL_auxz00_5905,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2686, BFALSE); } } 
{ /* Llib/pregexp.scm 321 */
obj_t BgL_arg2290z00_1228;
{ /* Llib/pregexp.scm 321 */
obj_t BgL_pairz00_2688;
if(
PAIRP(BgL_newzd2vvzd2_1201))
{ /* Llib/pregexp.scm 321 */
BgL_pairz00_2688 = BgL_newzd2vvzd2_1201; }  else 
{ 
obj_t BgL_auxz00_5912;
BgL_auxz00_5912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12536)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2vvzd2_1201); 
FAILURE(BgL_auxz00_5912,BFALSE,BFALSE);} 
BgL_arg2290z00_1228 = 
CDR(BgL_pairz00_2688); } 
{ /* Llib/pregexp.scm 321 */
obj_t BgL_pairz00_2689;
if(
PAIRP(BgL_arg2290z00_1228))
{ /* Llib/pregexp.scm 321 */
BgL_pairz00_2689 = BgL_arg2290z00_1228; }  else 
{ 
obj_t BgL_auxz00_5919;
BgL_auxz00_5919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12542)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2290z00_1228); 
FAILURE(BgL_auxz00_5919,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2689, BgL_iz00_1224); } } }  else 
{ /* Llib/pregexp.scm 322 */
unsigned char BgL_cz00_1229;
{ /* Llib/pregexp.scm 322 */
long BgL_kz00_2692;
{ /* Llib/pregexp.scm 322 */
obj_t BgL_auxz00_5924;
if(
INTEGERP(BgL_iz00_1224))
{ /* Llib/pregexp.scm 322 */
BgL_auxz00_5924 = BgL_iz00_1224
; }  else 
{ 
obj_t BgL_auxz00_5927;
BgL_auxz00_5927 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12600)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1224); 
FAILURE(BgL_auxz00_5927,BFALSE,BFALSE);} 
BgL_kz00_2692 = 
(long)CINT(BgL_auxz00_5924); } 
{ /* Llib/pregexp.scm 322 */
long BgL_l3114z00_3780;
BgL_l3114z00_3780 = 
STRING_LENGTH(BgL_sz00_29); 
if(
BOUND_CHECK(BgL_kz00_2692, BgL_l3114z00_3780))
{ /* Llib/pregexp.scm 322 */
BgL_cz00_1229 = 
STRING_REF(BgL_sz00_29, BgL_kz00_2692); }  else 
{ 
obj_t BgL_auxz00_5936;
BgL_auxz00_5936 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12586)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2692), BgL_sz00_29); 
FAILURE(BgL_auxz00_5936,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 323 */
bool_t BgL_testz00_5941;
if(
isspace(BgL_cz00_1229))
{ /* Llib/pregexp.scm 323 */
if(
CBOOL(BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00))
{ /* Llib/pregexp.scm 324 */
BgL_testz00_5941 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 324 */
BgL_testz00_5941 = ((bool_t)1)
; } }  else 
{ /* Llib/pregexp.scm 323 */
BgL_testz00_5941 = ((bool_t)0)
; } 
if(BgL_testz00_5941)
{ 
obj_t BgL_iz00_5946;
BgL_iz00_5946 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1224, 
BINT(((long)1))); 
BgL_iz00_1224 = BgL_iz00_5946; 
goto BgL_zc3anonymousza32285ze3z83_1225;}  else 
{ /* Llib/pregexp.scm 323 */
if(
(BgL_cz00_1229==((unsigned char)'?')))
{ /* Llib/pregexp.scm 326 */
{ /* Llib/pregexp.scm 327 */
obj_t BgL_arg2294z00_1233;
{ /* Llib/pregexp.scm 327 */
obj_t BgL_pairz00_2696;
if(
PAIRP(BgL_newzd2rezd2_1200))
{ /* Llib/pregexp.scm 327 */
BgL_pairz00_2696 = BgL_newzd2rezd2_1200; }  else 
{ 
obj_t BgL_auxz00_5953;
BgL_auxz00_5953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12906)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2rezd2_1200); 
FAILURE(BgL_auxz00_5953,BFALSE,BFALSE);} 
BgL_arg2294z00_1233 = 
CDR(BgL_pairz00_2696); } 
{ /* Llib/pregexp.scm 327 */
obj_t BgL_pairz00_2697;
if(
PAIRP(BgL_arg2294z00_1233))
{ /* Llib/pregexp.scm 327 */
BgL_pairz00_2697 = BgL_arg2294z00_1233; }  else 
{ 
obj_t BgL_auxz00_5960;
BgL_auxz00_5960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12912)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2294z00_1233); 
FAILURE(BgL_auxz00_5960,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2697, BTRUE); } } 
{ /* Llib/pregexp.scm 328 */
obj_t BgL_arg2295z00_1234;obj_t BgL_arg2296z00_1235;
{ /* Llib/pregexp.scm 328 */
obj_t BgL_pairz00_2699;
if(
PAIRP(BgL_newzd2vvzd2_1201))
{ /* Llib/pregexp.scm 328 */
BgL_pairz00_2699 = BgL_newzd2vvzd2_1201; }  else 
{ 
obj_t BgL_auxz00_5967;
BgL_auxz00_5967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12971)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2vvzd2_1201); 
FAILURE(BgL_auxz00_5967,BFALSE,BFALSE);} 
BgL_arg2295z00_1234 = 
CDR(BgL_pairz00_2699); } 
BgL_arg2296z00_1235 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1224, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 328 */
obj_t BgL_pairz00_2700;
if(
PAIRP(BgL_arg2295z00_1234))
{ /* Llib/pregexp.scm 328 */
BgL_pairz00_2700 = BgL_arg2295z00_1234; }  else 
{ 
obj_t BgL_auxz00_5976;
BgL_auxz00_5976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)12977)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2295z00_1234); 
FAILURE(BgL_auxz00_5976,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2700, BgL_arg2296z00_1235); } } }  else 
{ /* Llib/pregexp.scm 326 */
{ /* Llib/pregexp.scm 329 */
obj_t BgL_arg2297z00_1236;
{ /* Llib/pregexp.scm 329 */
obj_t BgL_pairz00_2702;
if(
PAIRP(BgL_newzd2rezd2_1200))
{ /* Llib/pregexp.scm 329 */
BgL_pairz00_2702 = BgL_newzd2rezd2_1200; }  else 
{ 
obj_t BgL_auxz00_5983;
BgL_auxz00_5983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)13047)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2rezd2_1200); 
FAILURE(BgL_auxz00_5983,BFALSE,BFALSE);} 
BgL_arg2297z00_1236 = 
CDR(BgL_pairz00_2702); } 
{ /* Llib/pregexp.scm 329 */
obj_t BgL_pairz00_2703;
if(
PAIRP(BgL_arg2297z00_1236))
{ /* Llib/pregexp.scm 329 */
BgL_pairz00_2703 = BgL_arg2297z00_1236; }  else 
{ 
obj_t BgL_auxz00_5990;
BgL_auxz00_5990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)13053)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2297z00_1236); 
FAILURE(BgL_auxz00_5990,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2703, BFALSE); } } 
{ /* Llib/pregexp.scm 330 */
obj_t BgL_arg2300z00_1237;
{ /* Llib/pregexp.scm 330 */
obj_t BgL_pairz00_2705;
if(
PAIRP(BgL_newzd2vvzd2_1201))
{ /* Llib/pregexp.scm 330 */
BgL_pairz00_2705 = BgL_newzd2vvzd2_1201; }  else 
{ 
obj_t BgL_auxz00_5997;
BgL_auxz00_5997 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)13113)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_newzd2vvzd2_1201); 
FAILURE(BgL_auxz00_5997,BFALSE,BFALSE);} 
BgL_arg2300z00_1237 = 
CDR(BgL_pairz00_2705); } 
{ /* Llib/pregexp.scm 330 */
obj_t BgL_pairz00_2706;
if(
PAIRP(BgL_arg2300z00_1237))
{ /* Llib/pregexp.scm 330 */
BgL_pairz00_2706 = BgL_arg2300z00_1237; }  else 
{ 
obj_t BgL_auxz00_6004;
BgL_auxz00_6004 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)13119)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2300z00_1237); 
FAILURE(BgL_auxz00_6004,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2706, BgL_iz00_1224); } } } } } } } } 
return BgL_newzd2vvzd2_1201;} } } break;
default: 
return BgL_vvz00_28;} } } } } } } } 
}



/* pregexp-read-nums */
obj_t BGl_pregexpzd2readzd2numsz00zz__pregexpz00(obj_t BgL_sz00_31, obj_t BgL_iz00_32, long BgL_nz00_33)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 336 */
{ 
obj_t BgL_pz00_1256;obj_t BgL_qz00_1257;obj_t BgL_kz00_1258;long BgL_readingz00_1259;
BgL_pz00_1256 = BNIL; 
BgL_qz00_1257 = BNIL; 
BgL_kz00_1258 = BgL_iz00_32; 
BgL_readingz00_1259 = ((long)1); 
BgL_zc3anonymousza32314ze3z83_1260:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_kz00_1258, 
BINT(BgL_nz00_33)))
{ /* Llib/pregexp.scm 341 */
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3926z00zz__pregexpz00, BUNSPEC); }  else 
{ /* Llib/pregexp.scm 341 */BFALSE; } 
{ /* Llib/pregexp.scm 342 */
unsigned char BgL_cz00_1263;
{ /* Llib/pregexp.scm 342 */
long BgL_kz00_2716;
{ /* Llib/pregexp.scm 342 */
obj_t BgL_auxz00_6014;
if(
INTEGERP(BgL_kz00_1258))
{ /* Llib/pregexp.scm 342 */
BgL_auxz00_6014 = BgL_kz00_1258
; }  else 
{ 
obj_t BgL_auxz00_6017;
BgL_auxz00_6017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)13435)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_kz00_1258); 
FAILURE(BgL_auxz00_6017,BFALSE,BFALSE);} 
BgL_kz00_2716 = 
(long)CINT(BgL_auxz00_6014); } 
{ /* Llib/pregexp.scm 342 */
long BgL_l3118z00_3784;
BgL_l3118z00_3784 = 
STRING_LENGTH(BgL_sz00_31); 
if(
BOUND_CHECK(BgL_kz00_2716, BgL_l3118z00_3784))
{ /* Llib/pregexp.scm 342 */
BgL_cz00_1263 = 
STRING_REF(BgL_sz00_31, BgL_kz00_2716); }  else 
{ 
obj_t BgL_auxz00_6026;
BgL_auxz00_6026 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)13421)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2716), BgL_sz00_31); 
FAILURE(BgL_auxz00_6026,BFALSE,BFALSE);} } } 
if(
isdigit(BgL_cz00_1263))
{ /* Llib/pregexp.scm 343 */
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(
BINT(BgL_readingz00_1259), 
BINT(((long)1))))
{ /* Llib/pregexp.scm 345 */
obj_t BgL_arg2319z00_1266;obj_t BgL_arg2320z00_1267;
BgL_arg2319z00_1266 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1263), BgL_pz00_1256); 
BgL_arg2320z00_1267 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1258, 
BINT(((long)1))); 
{ 
long BgL_readingz00_6043;obj_t BgL_kz00_6042;obj_t BgL_pz00_6041;
BgL_pz00_6041 = BgL_arg2319z00_1266; 
BgL_kz00_6042 = BgL_arg2320z00_1267; 
BgL_readingz00_6043 = ((long)1); 
BgL_readingz00_1259 = BgL_readingz00_6043; 
BgL_kz00_1258 = BgL_kz00_6042; 
BgL_pz00_1256 = BgL_pz00_6041; 
goto BgL_zc3anonymousza32314ze3z83_1260;} }  else 
{ /* Llib/pregexp.scm 346 */
obj_t BgL_arg2322z00_1269;obj_t BgL_arg2323z00_1270;
BgL_arg2322z00_1269 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1263), BgL_qz00_1257); 
BgL_arg2323z00_1270 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1258, 
BINT(((long)1))); 
{ 
long BgL_readingz00_6050;obj_t BgL_kz00_6049;obj_t BgL_qz00_6048;
BgL_qz00_6048 = BgL_arg2322z00_1269; 
BgL_kz00_6049 = BgL_arg2323z00_1270; 
BgL_readingz00_6050 = ((long)2); 
BgL_readingz00_1259 = BgL_readingz00_6050; 
BgL_kz00_1258 = BgL_kz00_6049; 
BgL_qz00_1257 = BgL_qz00_6048; 
goto BgL_zc3anonymousza32314ze3z83_1260;} } }  else 
{ /* Llib/pregexp.scm 347 */
bool_t BgL_testz00_6051;
if(
isspace(BgL_cz00_1263))
{ /* Llib/pregexp.scm 347 */
if(
CBOOL(BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00))
{ /* Llib/pregexp.scm 347 */
BgL_testz00_6051 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 347 */
BgL_testz00_6051 = ((bool_t)1)
; } }  else 
{ /* Llib/pregexp.scm 347 */
BgL_testz00_6051 = ((bool_t)0)
; } 
if(BgL_testz00_6051)
{ 
obj_t BgL_kz00_6056;
BgL_kz00_6056 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1258, 
BINT(((long)1))); 
BgL_kz00_1258 = BgL_kz00_6056; 
goto BgL_zc3anonymousza32314ze3z83_1260;}  else 
{ /* Llib/pregexp.scm 349 */
bool_t BgL_testz00_6059;
if(
(BgL_cz00_1263==((unsigned char)',')))
{ /* Llib/pregexp.scm 349 */
BgL_testz00_6059 = 
BGl_2zd3zd3zz__r4_numbers_6_5z00(
BINT(BgL_readingz00_1259), 
BINT(((long)1)))
; }  else 
{ /* Llib/pregexp.scm 349 */
BgL_testz00_6059 = ((bool_t)0)
; } 
if(BgL_testz00_6059)
{ 
long BgL_readingz00_6068;obj_t BgL_kz00_6065;
BgL_kz00_6065 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1258, 
BINT(((long)1))); 
BgL_readingz00_6068 = ((long)2); 
BgL_readingz00_1259 = BgL_readingz00_6068; 
BgL_kz00_1258 = BgL_kz00_6065; 
goto BgL_zc3anonymousza32314ze3z83_1260;}  else 
{ /* Llib/pregexp.scm 349 */
if(
(BgL_cz00_1263==((unsigned char)'}')))
{ /* Llib/pregexp.scm 352 */
obj_t BgL_pz00_1278;obj_t BgL_qz00_1279;
{ /* Llib/pregexp.scm 352 */
obj_t BgL_arg2343z00_1292;
{ /* Llib/pregexp.scm 352 */
obj_t BgL_arg2344z00_1295;
BgL_arg2344z00_1295 = 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_pz00_1256); 
{ /* Llib/pregexp.scm 352 */
obj_t BgL_auxz00_6072;
{ /* Llib/pregexp.scm 352 */
bool_t BgL_testz00_6073;
if(
PAIRP(BgL_arg2344z00_1295))
{ /* Llib/pregexp.scm 352 */
BgL_testz00_6073 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 352 */
BgL_testz00_6073 = 
NULLP(BgL_arg2344z00_1295)
; } 
if(BgL_testz00_6073)
{ /* Llib/pregexp.scm 352 */
BgL_auxz00_6072 = BgL_arg2344z00_1295
; }  else 
{ 
obj_t BgL_auxz00_6077;
BgL_auxz00_6077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)13914)), BGl_string3843z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_arg2344z00_1295); 
FAILURE(BgL_auxz00_6077,BFALSE,BFALSE);} } 
BgL_arg2343z00_1292 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_6072); } } 
{ /* Ieee/number.scm 134 */

BgL_pz00_1278 = 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(BgL_arg2343z00_1292, 
BINT(((long)10))); } } 
{ /* Llib/pregexp.scm 353 */
obj_t BgL_arg2345z00_1296;
{ /* Llib/pregexp.scm 353 */
obj_t BgL_arg2346z00_1299;
BgL_arg2346z00_1299 = 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_qz00_1257); 
{ /* Llib/pregexp.scm 353 */
obj_t BgL_auxz00_6085;
{ /* Llib/pregexp.scm 353 */
bool_t BgL_testz00_6086;
if(
PAIRP(BgL_arg2346z00_1299))
{ /* Llib/pregexp.scm 353 */
BgL_testz00_6086 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 353 */
BgL_testz00_6086 = 
NULLP(BgL_arg2346z00_1299)
; } 
if(BgL_testz00_6086)
{ /* Llib/pregexp.scm 353 */
BgL_auxz00_6085 = BgL_arg2346z00_1299
; }  else 
{ 
obj_t BgL_auxz00_6090;
BgL_auxz00_6090 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)13992)), BGl_string3843z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_arg2346z00_1299); 
FAILURE(BgL_auxz00_6090,BFALSE,BFALSE);} } 
BgL_arg2345z00_1296 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_6085); } } 
{ /* Ieee/number.scm 134 */

BgL_qz00_1279 = 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(BgL_arg2345z00_1296, 
BINT(((long)10))); } } 
{ /* Llib/pregexp.scm 354 */
bool_t BgL_testz00_6097;
if(
CBOOL(BgL_pz00_1278))
{ /* Llib/pregexp.scm 354 */
BgL_testz00_6097 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 354 */
BgL_testz00_6097 = 
BGl_2zd3zd3zz__r4_numbers_6_5z00(
BINT(BgL_readingz00_1259), 
BINT(((long)1)))
; } 
if(BgL_testz00_6097)
{ /* Llib/pregexp.scm 354 */
obj_t BgL_list2332z00_1281;
{ /* Llib/pregexp.scm 354 */
obj_t BgL_arg2334z00_1283;
{ /* Llib/pregexp.scm 354 */
obj_t BgL_arg2335z00_1284;
BgL_arg2335z00_1284 = 
MAKE_PAIR(BgL_kz00_1258, BNIL); 
BgL_arg2334z00_1283 = 
MAKE_PAIR(BFALSE, BgL_arg2335z00_1284); } 
BgL_list2332z00_1281 = 
MAKE_PAIR(
BINT(((long)0)), BgL_arg2334z00_1283); } 
return BgL_list2332z00_1281;}  else 
{ /* Llib/pregexp.scm 354 */
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(
BINT(BgL_readingz00_1259), 
BINT(((long)1))))
{ /* Llib/pregexp.scm 355 */
obj_t BgL_list2337z00_1286;
{ /* Llib/pregexp.scm 355 */
obj_t BgL_arg2338z00_1287;
{ /* Llib/pregexp.scm 355 */
obj_t BgL_arg2339z00_1288;
BgL_arg2339z00_1288 = 
MAKE_PAIR(BgL_kz00_1258, BNIL); 
BgL_arg2338z00_1287 = 
MAKE_PAIR(BgL_pz00_1278, BgL_arg2339z00_1288); } 
BgL_list2337z00_1286 = 
MAKE_PAIR(BgL_pz00_1278, BgL_arg2338z00_1287); } 
return BgL_list2337z00_1286;}  else 
{ /* Llib/pregexp.scm 356 */
obj_t BgL_list2340z00_1289;
{ /* Llib/pregexp.scm 356 */
obj_t BgL_arg2341z00_1290;
{ /* Llib/pregexp.scm 356 */
obj_t BgL_arg2342z00_1291;
BgL_arg2342z00_1291 = 
MAKE_PAIR(BgL_kz00_1258, BNIL); 
BgL_arg2341z00_1290 = 
MAKE_PAIR(BgL_qz00_1279, BgL_arg2342z00_1291); } 
BgL_list2340z00_1289 = 
MAKE_PAIR(BgL_pz00_1278, BgL_arg2341z00_1290); } 
return BgL_list2340z00_1289;} } } }  else 
{ /* Llib/pregexp.scm 351 */
return BFALSE;} } } } } } } 
}



/* pregexp-read-char-list */
obj_t BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00(obj_t BgL_sz00_35, obj_t BgL_iz00_36, long BgL_nz00_37)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 366 */
{ 
obj_t BgL_rz00_1307;obj_t BgL_iz00_1308;
BgL_rz00_1307 = BNIL; 
BgL_iz00_1308 = BgL_iz00_36; 
BgL_zc3anonymousza32351ze3z83_1309:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(BgL_nz00_37)))
{ /* Llib/pregexp.scm 370 */
obj_t BgL_list2353z00_1311;
BgL_list2353z00_1311 = 
MAKE_PAIR(BGl_string3928z00zz__pregexpz00, BNIL); 
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3929z00zz__pregexpz00, 
CAR(BgL_list2353z00_1311));}  else 
{ /* Llib/pregexp.scm 372 */
unsigned char BgL_cz00_1312;
{ /* Llib/pregexp.scm 372 */
long BgL_kz00_2737;
{ /* Llib/pregexp.scm 372 */
obj_t BgL_auxz00_6123;
if(
INTEGERP(BgL_iz00_1308))
{ /* Llib/pregexp.scm 372 */
BgL_auxz00_6123 = BgL_iz00_1308
; }  else 
{ 
obj_t BgL_auxz00_6126;
BgL_auxz00_6126 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)14512)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1308); 
FAILURE(BgL_auxz00_6126,BFALSE,BFALSE);} 
BgL_kz00_2737 = 
(long)CINT(BgL_auxz00_6123); } 
{ /* Llib/pregexp.scm 372 */
long BgL_l3122z00_3788;
BgL_l3122z00_3788 = 
STRING_LENGTH(BgL_sz00_35); 
if(
BOUND_CHECK(BgL_kz00_2737, BgL_l3122z00_3788))
{ /* Llib/pregexp.scm 372 */
BgL_cz00_1312 = 
STRING_REF(BgL_sz00_35, BgL_kz00_2737); }  else 
{ 
obj_t BgL_auxz00_6135;
BgL_auxz00_6135 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)14498)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2737), BgL_sz00_35); 
FAILURE(BgL_auxz00_6135,BFALSE,BFALSE);} } } 
{ 

switch( BgL_cz00_1312) { case ((unsigned char)']') : 

if(
NULLP(BgL_rz00_1307))
{ /* Llib/pregexp.scm 375 */
obj_t BgL_arg2356z00_1317;obj_t BgL_arg2357z00_1318;
BgL_arg2356z00_1317 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1312), BgL_rz00_1307); 
BgL_arg2357z00_1318 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
{ 
obj_t BgL_iz00_6147;obj_t BgL_rz00_6146;
BgL_rz00_6146 = BgL_arg2356z00_1317; 
BgL_iz00_6147 = BgL_arg2357z00_1318; 
BgL_iz00_1308 = BgL_iz00_6147; 
BgL_rz00_1307 = BgL_rz00_6146; 
goto BgL_zc3anonymousza32351ze3z83_1309;} }  else 
{ /* Llib/pregexp.scm 376 */
obj_t BgL_arg2358z00_1319;obj_t BgL_arg2359z00_1320;
BgL_arg2358z00_1319 = 
MAKE_PAIR(BGl_keyword3931z00zz__pregexpz00, 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_rz00_1307)); 
BgL_arg2359z00_1320 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 376 */
obj_t BgL_list2360z00_1321;
{ /* Llib/pregexp.scm 376 */
obj_t BgL_arg2361z00_1322;
BgL_arg2361z00_1322 = 
MAKE_PAIR(BgL_arg2359z00_1320, BNIL); 
BgL_list2360z00_1321 = 
MAKE_PAIR(BgL_arg2358z00_1319, BgL_arg2361z00_1322); } 
return BgL_list2360z00_1321;} } break;case ((unsigned char)'\\') : 

{ /* Llib/pregexp.scm 379 */
obj_t BgL_charzd2izd2_1325;
BgL_charzd2izd2_1325 = 
BGl_pregexpzd2readzd2escapedzd2charzd2zz__pregexpz00(BgL_sz00_35, BgL_iz00_1308, BgL_nz00_37); 
if(
CBOOL(BgL_charzd2izd2_1325))
{ /* Llib/pregexp.scm 380 */
obj_t BgL_arg2364z00_1326;obj_t BgL_arg2365z00_1327;
{ /* Llib/pregexp.scm 380 */
obj_t BgL_arg2366z00_1328;
{ /* Llib/pregexp.scm 380 */
obj_t BgL_pairz00_2741;
if(
PAIRP(BgL_charzd2izd2_1325))
{ /* Llib/pregexp.scm 380 */
BgL_pairz00_2741 = BgL_charzd2izd2_1325; }  else 
{ 
obj_t BgL_auxz00_6159;
BgL_auxz00_6159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)14858)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_charzd2izd2_1325); 
FAILURE(BgL_auxz00_6159,BFALSE,BFALSE);} 
BgL_arg2366z00_1328 = 
CAR(BgL_pairz00_2741); } 
BgL_arg2364z00_1326 = 
MAKE_PAIR(BgL_arg2366z00_1328, BgL_rz00_1307); } 
{ /* Llib/pregexp.scm 380 */
obj_t BgL_pairz00_2742;
BgL_pairz00_2742 = BgL_charzd2izd2_1325; 
{ /* Llib/pregexp.scm 380 */
obj_t BgL_pairz00_2745;
{ /* Llib/pregexp.scm 380 */
obj_t BgL_aux3390z00_4056;
BgL_aux3390z00_4056 = 
CDR(BgL_pairz00_2742); 
if(
PAIRP(BgL_aux3390z00_4056))
{ /* Llib/pregexp.scm 380 */
BgL_pairz00_2745 = BgL_aux3390z00_4056; }  else 
{ 
obj_t BgL_auxz00_6168;
BgL_auxz00_6168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)14869)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3390z00_4056); 
FAILURE(BgL_auxz00_6168,BFALSE,BFALSE);} } 
BgL_arg2365z00_1327 = 
CAR(BgL_pairz00_2745); } } 
{ 
obj_t BgL_iz00_6174;obj_t BgL_rz00_6173;
BgL_rz00_6173 = BgL_arg2364z00_1326; 
BgL_iz00_6174 = BgL_arg2365z00_1327; 
BgL_iz00_1308 = BgL_iz00_6174; 
BgL_rz00_1307 = BgL_rz00_6173; 
goto BgL_zc3anonymousza32351ze3z83_1309;} }  else 
{ /* Llib/pregexp.scm 381 */
obj_t BgL_list2367z00_1329;
BgL_list2367z00_1329 = 
MAKE_PAIR(
BCHAR(((unsigned char)'\\')), BNIL); 
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3929z00zz__pregexpz00, 
CAR(BgL_list2367z00_1329));} } break;case ((unsigned char)'-') : 

{ /* Llib/pregexp.scm 382 */
bool_t BgL_testz00_6179;
if(
NULLP(BgL_rz00_1307))
{ /* Llib/pregexp.scm 382 */
BgL_testz00_6179 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 383 */
obj_t BgL_izb21zb2_1348;
BgL_izb21zb2_1348 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_izb21zb2_1348, 
BINT(BgL_nz00_37)))
{ /* Llib/pregexp.scm 385 */
unsigned char BgL_auxz00_6187;
{ /* Llib/pregexp.scm 385 */
long BgL_kz00_2755;
{ /* Llib/pregexp.scm 385 */
obj_t BgL_auxz00_6188;
if(
INTEGERP(BgL_izb21zb2_1348))
{ /* Llib/pregexp.scm 385 */
BgL_auxz00_6188 = BgL_izb21zb2_1348
; }  else 
{ 
obj_t BgL_auxz00_6191;
BgL_auxz00_6191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15132)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_izb21zb2_1348); 
FAILURE(BgL_auxz00_6191,BFALSE,BFALSE);} 
BgL_kz00_2755 = 
(long)CINT(BgL_auxz00_6188); } 
{ /* Llib/pregexp.scm 385 */
long BgL_l3126z00_3792;
BgL_l3126z00_3792 = 
STRING_LENGTH(BgL_sz00_35); 
if(
BOUND_CHECK(BgL_kz00_2755, BgL_l3126z00_3792))
{ /* Llib/pregexp.scm 385 */
BgL_auxz00_6187 = 
STRING_REF(BgL_sz00_35, BgL_kz00_2755)
; }  else 
{ 
obj_t BgL_auxz00_6200;
BgL_auxz00_6200 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15118)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2755), BgL_sz00_35); 
FAILURE(BgL_auxz00_6200,BFALSE,BFALSE);} } } 
BgL_testz00_6179 = 
(BgL_auxz00_6187==((unsigned char)']')); }  else 
{ /* Llib/pregexp.scm 384 */
BgL_testz00_6179 = ((bool_t)0)
; } } 
if(BgL_testz00_6179)
{ /* Llib/pregexp.scm 386 */
obj_t BgL_arg2369z00_1331;obj_t BgL_arg2370z00_1332;
BgL_arg2369z00_1331 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1312), BgL_rz00_1307); 
BgL_arg2370z00_1332 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
{ 
obj_t BgL_iz00_6211;obj_t BgL_rz00_6210;
BgL_rz00_6210 = BgL_arg2369z00_1331; 
BgL_iz00_6211 = BgL_arg2370z00_1332; 
BgL_iz00_1308 = BgL_iz00_6211; 
BgL_rz00_1307 = BgL_rz00_6210; 
goto BgL_zc3anonymousza32351ze3z83_1309;} }  else 
{ /* Llib/pregexp.scm 387 */
obj_t BgL_czd2prevzd2_1333;
{ /* Llib/pregexp.scm 387 */
obj_t BgL_pairz00_2758;
if(
PAIRP(BgL_rz00_1307))
{ /* Llib/pregexp.scm 387 */
BgL_pairz00_2758 = BgL_rz00_1307; }  else 
{ 
obj_t BgL_auxz00_6214;
BgL_auxz00_6214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15240)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_rz00_1307); 
FAILURE(BgL_auxz00_6214,BFALSE,BFALSE);} 
BgL_czd2prevzd2_1333 = 
CAR(BgL_pairz00_2758); } 
if(
CHARP(BgL_czd2prevzd2_1333))
{ /* Llib/pregexp.scm 389 */
obj_t BgL_arg2372z00_1335;obj_t BgL_arg2373z00_1336;
{ /* Llib/pregexp.scm 389 */
obj_t BgL_arg2374z00_1337;obj_t BgL_arg2375z00_1338;
{ /* Llib/pregexp.scm 389 */
obj_t BgL_arg2376z00_1339;unsigned char BgL_arg2377z00_1340;
BgL_arg2376z00_1339 = BGl_keyword3933z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 390 */
long BgL_kz00_2761;
{ /* Llib/pregexp.scm 390 */
obj_t BgL_auxz00_6221;
{ /* Llib/pregexp.scm 390 */
obj_t BgL_aux3396z00_4062;
BgL_aux3396z00_4062 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3396z00_4062))
{ /* Llib/pregexp.scm 390 */
BgL_auxz00_6221 = BgL_aux3396z00_4062
; }  else 
{ 
obj_t BgL_auxz00_6226;
BgL_auxz00_6226 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15423)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3396z00_4062); 
FAILURE(BgL_auxz00_6226,BFALSE,BFALSE);} } 
BgL_kz00_2761 = 
(long)CINT(BgL_auxz00_6221); } 
{ /* Llib/pregexp.scm 390 */
long BgL_l3130z00_3796;
BgL_l3130z00_3796 = 
STRING_LENGTH(BgL_sz00_35); 
if(
BOUND_CHECK(BgL_kz00_2761, BgL_l3130z00_3796))
{ /* Llib/pregexp.scm 390 */
BgL_arg2377z00_1340 = 
STRING_REF(BgL_sz00_35, BgL_kz00_2761); }  else 
{ 
obj_t BgL_auxz00_6235;
BgL_auxz00_6235 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15409)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2761), BgL_sz00_35); 
FAILURE(BgL_auxz00_6235,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 389 */
obj_t BgL_list2378z00_1341;
{ /* Llib/pregexp.scm 389 */
obj_t BgL_arg2379z00_1342;
{ /* Llib/pregexp.scm 389 */
obj_t BgL_arg2380z00_1343;
BgL_arg2380z00_1343 = 
MAKE_PAIR(
BCHAR(BgL_arg2377z00_1340), BNIL); 
BgL_arg2379z00_1342 = 
MAKE_PAIR(BgL_czd2prevzd2_1333, BgL_arg2380z00_1343); } 
BgL_list2378z00_1341 = 
MAKE_PAIR(BgL_arg2376z00_1339, BgL_arg2379z00_1342); } 
BgL_arg2374z00_1337 = BgL_list2378z00_1341; } } 
BgL_arg2375z00_1338 = 
CDR(BgL_rz00_1307); 
BgL_arg2372z00_1335 = 
MAKE_PAIR(BgL_arg2374z00_1337, BgL_arg2375z00_1338); } 
BgL_arg2373z00_1336 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)2))); 
{ 
obj_t BgL_iz00_6249;obj_t BgL_rz00_6248;
BgL_rz00_6248 = BgL_arg2372z00_1335; 
BgL_iz00_6249 = BgL_arg2373z00_1336; 
BgL_iz00_1308 = BgL_iz00_6249; 
BgL_rz00_1307 = BgL_rz00_6248; 
goto BgL_zc3anonymousza32351ze3z83_1309;} }  else 
{ /* Llib/pregexp.scm 392 */
obj_t BgL_arg2382z00_1345;obj_t BgL_arg2383z00_1346;
BgL_arg2382z00_1345 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1312), BgL_rz00_1307); 
BgL_arg2383z00_1346 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
{ 
obj_t BgL_iz00_6255;obj_t BgL_rz00_6254;
BgL_rz00_6254 = BgL_arg2382z00_1345; 
BgL_iz00_6255 = BgL_arg2383z00_1346; 
BgL_iz00_1308 = BgL_iz00_6255; 
BgL_rz00_1307 = BgL_rz00_6254; 
goto BgL_zc3anonymousza32351ze3z83_1309;} } } } break;case ((unsigned char)'[') : 

{ /* Llib/pregexp.scm 393 */
bool_t BgL_testz00_6256;
{ /* Llib/pregexp.scm 393 */
unsigned char BgL_auxz00_6257;
{ /* Llib/pregexp.scm 393 */
long BgL_kz00_2766;
{ /* Llib/pregexp.scm 393 */
obj_t BgL_auxz00_6258;
{ /* Llib/pregexp.scm 393 */
obj_t BgL_aux3400z00_4066;
BgL_aux3400z00_4066 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3400z00_4066))
{ /* Llib/pregexp.scm 393 */
BgL_auxz00_6258 = BgL_aux3400z00_4066
; }  else 
{ 
obj_t BgL_auxz00_6263;
BgL_auxz00_6263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15596)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3400z00_4066); 
FAILURE(BgL_auxz00_6263,BFALSE,BFALSE);} } 
BgL_kz00_2766 = 
(long)CINT(BgL_auxz00_6258); } 
{ /* Llib/pregexp.scm 393 */
long BgL_l3134z00_3800;
BgL_l3134z00_3800 = 
STRING_LENGTH(BgL_sz00_35); 
if(
BOUND_CHECK(BgL_kz00_2766, BgL_l3134z00_3800))
{ /* Llib/pregexp.scm 393 */
BgL_auxz00_6257 = 
STRING_REF(BgL_sz00_35, BgL_kz00_2766)
; }  else 
{ 
obj_t BgL_auxz00_6272;
BgL_auxz00_6272 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15582)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2766), BgL_sz00_35); 
FAILURE(BgL_auxz00_6272,BFALSE,BFALSE);} } } 
BgL_testz00_6256 = 
(BgL_auxz00_6257==((unsigned char)':')); } 
if(BgL_testz00_6256)
{ /* Llib/pregexp.scm 394 */
obj_t BgL_posixzd2charzd2classzd2izd2_1352;
BgL_posixzd2charzd2classzd2izd2_1352 = 
BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__pregexpz00(BgL_sz00_35, 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)2))), BgL_nz00_37); 
{ /* Llib/pregexp.scm 396 */
obj_t BgL_arg2387z00_1353;obj_t BgL_arg2388z00_1354;
{ /* Llib/pregexp.scm 396 */
obj_t BgL_arg2389z00_1355;
{ /* Llib/pregexp.scm 396 */
obj_t BgL_pairz00_2769;
if(
PAIRP(BgL_posixzd2charzd2classzd2izd2_1352))
{ /* Llib/pregexp.scm 396 */
BgL_pairz00_2769 = BgL_posixzd2charzd2classzd2izd2_1352; }  else 
{ 
obj_t BgL_auxz00_6283;
BgL_auxz00_6283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15784)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_posixzd2charzd2classzd2izd2_1352); 
FAILURE(BgL_auxz00_6283,BFALSE,BFALSE);} 
BgL_arg2389z00_1355 = 
CAR(BgL_pairz00_2769); } 
BgL_arg2387z00_1353 = 
MAKE_PAIR(BgL_arg2389z00_1355, BgL_rz00_1307); } 
{ /* Llib/pregexp.scm 397 */
obj_t BgL_pairz00_2770;
BgL_pairz00_2770 = BgL_posixzd2charzd2classzd2izd2_1352; 
{ /* Llib/pregexp.scm 397 */
obj_t BgL_pairz00_2773;
{ /* Llib/pregexp.scm 397 */
obj_t BgL_aux3406z00_4072;
BgL_aux3406z00_4072 = 
CDR(BgL_pairz00_2770); 
if(
PAIRP(BgL_aux3406z00_4072))
{ /* Llib/pregexp.scm 397 */
BgL_pairz00_2773 = BgL_aux3406z00_4072; }  else 
{ 
obj_t BgL_auxz00_6292;
BgL_auxz00_6292 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)15840)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3406z00_4072); 
FAILURE(BgL_auxz00_6292,BFALSE,BFALSE);} } 
BgL_arg2388z00_1354 = 
CAR(BgL_pairz00_2773); } } 
{ 
obj_t BgL_iz00_6298;obj_t BgL_rz00_6297;
BgL_rz00_6297 = BgL_arg2387z00_1353; 
BgL_iz00_6298 = BgL_arg2388z00_1354; 
BgL_iz00_1308 = BgL_iz00_6298; 
BgL_rz00_1307 = BgL_rz00_6297; 
goto BgL_zc3anonymousza32351ze3z83_1309;} } }  else 
{ /* Llib/pregexp.scm 398 */
obj_t BgL_arg2391z00_1357;obj_t BgL_arg2392z00_1358;
BgL_arg2391z00_1357 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1312), BgL_rz00_1307); 
BgL_arg2392z00_1358 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
{ 
obj_t BgL_iz00_6304;obj_t BgL_rz00_6303;
BgL_rz00_6303 = BgL_arg2391z00_1357; 
BgL_iz00_6304 = BgL_arg2392z00_1358; 
BgL_iz00_1308 = BgL_iz00_6304; 
BgL_rz00_1307 = BgL_rz00_6303; 
goto BgL_zc3anonymousza32351ze3z83_1309;} } } break;
default: 
{ /* Llib/pregexp.scm 399 */
obj_t BgL_arg2395z00_1361;obj_t BgL_arg2396z00_1362;
BgL_arg2395z00_1361 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1312), BgL_rz00_1307); 
BgL_arg2396z00_1362 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308, 
BINT(((long)1))); 
{ 
obj_t BgL_iz00_6310;obj_t BgL_rz00_6309;
BgL_rz00_6309 = BgL_arg2395z00_1361; 
BgL_iz00_6310 = BgL_arg2396z00_1362; 
BgL_iz00_1308 = BgL_iz00_6310; 
BgL_rz00_1307 = BgL_rz00_6309; 
goto BgL_zc3anonymousza32351ze3z83_1309;} } } } } } } 
}



/* pregexp-string-match */
obj_t BGl_pregexpzd2stringzd2matchz00zz__pregexpz00(obj_t BgL_s1z00_38, obj_t BgL_sz00_39, obj_t BgL_iz00_40, obj_t BgL_nz00_41, obj_t BgL_skz00_42, obj_t BgL_fkz00_43)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 403 */
{ /* Llib/pregexp.scm 405 */
long BgL_n1z00_1364;
BgL_n1z00_1364 = 
STRING_LENGTH(BgL_s1z00_38); 
if(
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_n1z00_1364), BgL_nz00_41))
{ /* Llib/pregexp.scm 406 */
obj_t BgL_funz00_4076;
if(
PROCEDUREP(BgL_fkz00_43))
{ /* Llib/pregexp.scm 406 */
BgL_funz00_4076 = BgL_fkz00_43; }  else 
{ 
obj_t BgL_auxz00_6318;
BgL_auxz00_6318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16088)), BGl_string3935z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_43); 
FAILURE(BgL_auxz00_6318,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4076, ((long)0)))
{ /* Llib/pregexp.scm 406 */
return 
PROCEDURE_ENTRY(BgL_funz00_4076)(BgL_fkz00_43, BEOA);}  else 
{ /* Llib/pregexp.scm 406 */
FAILURE(BGl_string3937z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4076);} }  else 
{ 
long BgL_jz00_1367;obj_t BgL_kz00_1368;
BgL_jz00_1367 = ((long)0); 
BgL_kz00_1368 = BgL_iz00_40; 
BgL_zc3anonymousza32398ze3z83_1369:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(
BINT(BgL_jz00_1367), 
BINT(BgL_n1z00_1364)))
{ /* Llib/pregexp.scm 408 */
return 
BGl_zc3anonymousza32520ze3z83zz__pregexpz00(BgL_skz00_42, BgL_kz00_1368);}  else 
{ /* Llib/pregexp.scm 408 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_kz00_1368, BgL_nz00_41))
{ /* Llib/pregexp.scm 409 */
obj_t BgL_funz00_4081;
if(
PROCEDUREP(BgL_fkz00_43))
{ /* Llib/pregexp.scm 409 */
BgL_funz00_4081 = BgL_fkz00_43; }  else 
{ 
obj_t BgL_auxz00_6337;
BgL_auxz00_6337 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16192)), BGl_string3843z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_43); 
FAILURE(BgL_auxz00_6337,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4081, ((long)0)))
{ /* Llib/pregexp.scm 409 */
return 
PROCEDURE_ENTRY(BgL_funz00_4081)(BgL_fkz00_43, BEOA);}  else 
{ /* Llib/pregexp.scm 409 */
FAILURE(BGl_string3943z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4081);} }  else 
{ /* Llib/pregexp.scm 410 */
bool_t BgL_testz00_6346;
{ /* Llib/pregexp.scm 410 */
unsigned char BgL_auxz00_6357;unsigned char BgL_auxz00_6347;
{ /* Llib/pregexp.scm 410 */
obj_t BgL_stringz00_2777;long BgL_kz00_2778;
if(
STRINGP(BgL_sz00_39))
{ /* Llib/pregexp.scm 410 */
BgL_stringz00_2777 = BgL_sz00_39; }  else 
{ 
obj_t BgL_auxz00_6360;
BgL_auxz00_6360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16255)), BGl_string3843z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_sz00_39); 
FAILURE(BgL_auxz00_6360,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 410 */
obj_t BgL_auxz00_6364;
if(
INTEGERP(BgL_kz00_1368))
{ /* Llib/pregexp.scm 410 */
BgL_auxz00_6364 = BgL_kz00_1368
; }  else 
{ 
obj_t BgL_auxz00_6367;
BgL_auxz00_6367 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16257)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_kz00_1368); 
FAILURE(BgL_auxz00_6367,BFALSE,BFALSE);} 
BgL_kz00_2778 = 
(long)CINT(BgL_auxz00_6364); } 
{ /* Llib/pregexp.scm 410 */
long BgL_l3142z00_3808;
BgL_l3142z00_3808 = 
STRING_LENGTH(BgL_stringz00_2777); 
if(
BOUND_CHECK(BgL_kz00_2778, BgL_l3142z00_3808))
{ /* Llib/pregexp.scm 410 */
BgL_auxz00_6357 = 
STRING_REF(BgL_stringz00_2777, BgL_kz00_2778)
; }  else 
{ 
obj_t BgL_auxz00_6376;
BgL_auxz00_6376 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16243)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2778), BgL_stringz00_2777); 
FAILURE(BgL_auxz00_6376,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 410 */
long BgL_l3138z00_3804;
BgL_l3138z00_3804 = 
STRING_LENGTH(BgL_s1z00_38); 
if(
BOUND_CHECK(BgL_jz00_1367, BgL_l3138z00_3804))
{ /* Llib/pregexp.scm 410 */
BgL_auxz00_6347 = 
STRING_REF(BgL_s1z00_38, BgL_jz00_1367)
; }  else 
{ 
obj_t BgL_auxz00_6352;
BgL_auxz00_6352 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16225)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_jz00_1367), BgL_s1z00_38); 
FAILURE(BgL_auxz00_6352,BFALSE,BFALSE);} } 
BgL_testz00_6346 = 
(BgL_auxz00_6347==BgL_auxz00_6357); } 
if(BgL_testz00_6346)
{ /* Llib/pregexp.scm 411 */
long BgL_arg2402z00_1373;obj_t BgL_arg2403z00_1374;
{ /* Llib/pregexp.scm 411 */
obj_t BgL_auxz00_6382;
{ /* Llib/pregexp.scm 411 */
obj_t BgL_aux3420z00_4088;
BgL_aux3420z00_4088 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
BINT(BgL_jz00_1367), 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3420z00_4088))
{ /* Llib/pregexp.scm 411 */
BgL_auxz00_6382 = BgL_aux3420z00_4088
; }  else 
{ 
obj_t BgL_auxz00_6388;
BgL_auxz00_6388 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16286)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3420z00_4088); 
FAILURE(BgL_auxz00_6388,BFALSE,BFALSE);} } 
BgL_arg2402z00_1373 = 
(long)CINT(BgL_auxz00_6382); } 
BgL_arg2403z00_1374 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1368, 
BINT(((long)1))); 
{ 
obj_t BgL_kz00_6396;long BgL_jz00_6395;
BgL_jz00_6395 = BgL_arg2402z00_1373; 
BgL_kz00_6396 = BgL_arg2403z00_1374; 
BgL_kz00_1368 = BgL_kz00_6396; 
BgL_jz00_1367 = BgL_jz00_6395; 
goto BgL_zc3anonymousza32398ze3z83_1369;} }  else 
{ /* Llib/pregexp.scm 412 */
obj_t BgL_funz00_4092;
if(
PROCEDUREP(BgL_fkz00_43))
{ /* Llib/pregexp.scm 412 */
BgL_funz00_4092 = BgL_fkz00_43; }  else 
{ 
obj_t BgL_auxz00_6399;
BgL_auxz00_6399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16328)), BGl_string3843z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_43); 
FAILURE(BgL_auxz00_6399,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4092, ((long)0)))
{ /* Llib/pregexp.scm 412 */
return 
PROCEDURE_ENTRY(BgL_funz00_4092)(BgL_fkz00_43, BEOA);}  else 
{ /* Llib/pregexp.scm 412 */
FAILURE(BGl_string3943z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4092);} } } } } } } 
}



/* pregexp-at-word-boundary? */
obj_t BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__pregexpz00(obj_t BgL_sz00_45, obj_t BgL_iz00_46, obj_t BgL_nz00_47)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 422 */
{ /* Llib/pregexp.scm 424 */
bool_t BgL__ortest_1869z00_1380;
BgL__ortest_1869z00_1380 = 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_iz00_46, 
BINT(((long)0))); 
if(BgL__ortest_1869z00_1380)
{ /* Llib/pregexp.scm 424 */
return 
BBOOL(BgL__ortest_1869z00_1380);}  else 
{ /* Llib/pregexp.scm 424 */
bool_t BgL__ortest_1870z00_1381;
BgL__ortest_1870z00_1381 = 
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_46, BgL_nz00_47); 
if(BgL__ortest_1870z00_1381)
{ /* Llib/pregexp.scm 424 */
return 
BBOOL(BgL__ortest_1870z00_1381);}  else 
{ /* Llib/pregexp.scm 425 */
unsigned char BgL_czf2izf2_1382;unsigned char BgL_czf2izd21z20_1383;
{ /* Llib/pregexp.scm 425 */
obj_t BgL_stringz00_2781;long BgL_kz00_2782;
if(
STRINGP(BgL_sz00_45))
{ /* Llib/pregexp.scm 425 */
BgL_stringz00_2781 = BgL_sz00_45; }  else 
{ 
obj_t BgL_auxz00_6417;
BgL_auxz00_6417 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16657)), BGl_string3945z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_sz00_45); 
FAILURE(BgL_auxz00_6417,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 425 */
obj_t BgL_auxz00_6421;
if(
INTEGERP(BgL_iz00_46))
{ /* Llib/pregexp.scm 425 */
BgL_auxz00_6421 = BgL_iz00_46
; }  else 
{ 
obj_t BgL_auxz00_6424;
BgL_auxz00_6424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16659)), BGl_string3945z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_46); 
FAILURE(BgL_auxz00_6424,BFALSE,BFALSE);} 
BgL_kz00_2782 = 
(long)CINT(BgL_auxz00_6421); } 
{ /* Llib/pregexp.scm 425 */
long BgL_l3146z00_3812;
BgL_l3146z00_3812 = 
STRING_LENGTH(BgL_stringz00_2781); 
if(
BOUND_CHECK(BgL_kz00_2782, BgL_l3146z00_3812))
{ /* Llib/pregexp.scm 425 */
BgL_czf2izf2_1382 = 
STRING_REF(BgL_stringz00_2781, BgL_kz00_2782); }  else 
{ 
obj_t BgL_auxz00_6433;
BgL_auxz00_6433 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16645)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2782), BgL_stringz00_2781); 
FAILURE(BgL_auxz00_6433,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 426 */
obj_t BgL_stringz00_2783;long BgL_kz00_2784;
BgL_stringz00_2783 = BgL_sz00_45; 
{ /* Llib/pregexp.scm 426 */
obj_t BgL_auxz00_6438;
{ /* Llib/pregexp.scm 426 */
obj_t BgL_aux3432z00_4101;
BgL_aux3432z00_4101 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_iz00_46, 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3432z00_4101))
{ /* Llib/pregexp.scm 426 */
BgL_auxz00_6438 = BgL_aux3432z00_4101
; }  else 
{ 
obj_t BgL_auxz00_6443;
BgL_auxz00_6443 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16698)), BGl_string3945z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3432z00_4101); 
FAILURE(BgL_auxz00_6443,BFALSE,BFALSE);} } 
BgL_kz00_2784 = 
(long)CINT(BgL_auxz00_6438); } 
{ /* Llib/pregexp.scm 426 */
long BgL_l3150z00_3816;
BgL_l3150z00_3816 = 
STRING_LENGTH(BgL_stringz00_2783); 
if(
BOUND_CHECK(BgL_kz00_2784, BgL_l3150z00_3816))
{ /* Llib/pregexp.scm 426 */
BgL_czf2izd21z20_1383 = 
STRING_REF(BgL_stringz00_2783, BgL_kz00_2784); }  else 
{ 
obj_t BgL_auxz00_6452;
BgL_auxz00_6452 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)16684)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2784), BgL_stringz00_2783); 
FAILURE(BgL_auxz00_6452,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 427 */
obj_t BgL_czf2izf2wzf3zf3_1384;obj_t BgL_czf2izd21zf2wzf3z21_1385;
BgL_czf2izf2wzf3zf3_1384 = 
BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00(BgL_czf2izf2_1382, BGl_keyword3882z00zz__pregexpz00); 
BgL_czf2izd21zf2wzf3z21_1385 = 
BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00(BgL_czf2izd21z20_1383, BGl_keyword3882z00zz__pregexpz00); 
{ /* Llib/pregexp.scm 431 */
bool_t BgL__ortest_1871z00_1386;
if(
CBOOL(BgL_czf2izf2wzf3zf3_1384))
{ /* Llib/pregexp.scm 431 */
if(
CBOOL(BgL_czf2izd21zf2wzf3z21_1385))
{ /* Llib/pregexp.scm 431 */
BgL__ortest_1871z00_1386 = ((bool_t)0); }  else 
{ /* Llib/pregexp.scm 431 */
BgL__ortest_1871z00_1386 = ((bool_t)1); } }  else 
{ /* Llib/pregexp.scm 431 */
BgL__ortest_1871z00_1386 = ((bool_t)0); } 
if(BgL__ortest_1871z00_1386)
{ /* Llib/pregexp.scm 431 */
return 
BBOOL(BgL__ortest_1871z00_1386);}  else 
{ /* Llib/pregexp.scm 432 */
bool_t BgL_testz00_6465;
if(
CBOOL(BgL_czf2izf2wzf3zf3_1384))
{ /* Llib/pregexp.scm 432 */
BgL_testz00_6465 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 432 */
BgL_testz00_6465 = ((bool_t)1)
; } 
if(BgL_testz00_6465)
{ /* Llib/pregexp.scm 432 */
return BgL_czf2izd21zf2wzf3z21_1385;}  else 
{ /* Llib/pregexp.scm 432 */
return BFALSE;} } } } } } } } 
}



/* pregexp-check-if-in-char-class? */
obj_t BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00(unsigned char BgL_cz00_48, obj_t BgL_charzd2classzd2_49)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 434 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3859z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
if(
(BgL_cz00_48==((unsigned char)'\n')))
{ /* Llib/pregexp.scm 437 */
return BFALSE;}  else 
{ /* Llib/pregexp.scm 437 */
return BTRUE;} }  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3946z00zz__pregexpz00))
{ /* Llib/pregexp.scm 439 */
bool_t BgL__ortest_1874z00_1394;
BgL__ortest_1874z00_1394 = 
isalpha(BgL_cz00_48); 
if(BgL__ortest_1874z00_1394)
{ /* Llib/pregexp.scm 439 */
return 
BBOOL(BgL__ortest_1874z00_1394);}  else 
{ /* Llib/pregexp.scm 439 */
return 
BBOOL(
isdigit(BgL_cz00_48));} }  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3948z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
return 
BBOOL(
isalpha(BgL_cz00_48));}  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3950z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
return 
BBOOL(
BGl_2zc3zc3zz__r4_numbers_6_5z00(
BINT(
(BgL_cz00_48)), 
BINT(((long)128))));}  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3952z00zz__pregexpz00))
{ /* Llib/pregexp.scm 442 */
bool_t BgL__ortest_1875z00_1400;
BgL__ortest_1875z00_1400 = 
(BgL_cz00_48==((unsigned char)' ')); 
if(BgL__ortest_1875z00_1400)
{ /* Llib/pregexp.scm 442 */
return 
BBOOL(BgL__ortest_1875z00_1400);}  else 
{ /* Llib/pregexp.scm 442 */
unsigned char BgL_char2z00_2804;
{ /* Llib/pregexp.scm 442 */
obj_t BgL_auxz00_6495;
{ /* Llib/pregexp.scm 442 */
obj_t BgL_aux3434z00_4103;
BgL_aux3434z00_4103 = BGl_za2pregexpzd2tabzd2charza2z00zz__pregexpz00; 
if(
CHARP(BgL_aux3434z00_4103))
{ /* Llib/pregexp.scm 442 */
BgL_auxz00_6495 = BgL_aux3434z00_4103
; }  else 
{ 
obj_t BgL_auxz00_6498;
BgL_auxz00_6498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)17330)), BGl_string3954z00zz__pregexpz00, BGl_string3852z00zz__pregexpz00, BgL_aux3434z00_4103); 
FAILURE(BgL_auxz00_6498,BFALSE,BFALSE);} } 
BgL_char2z00_2804 = 
CCHAR(BgL_auxz00_6495); } 
return 
BBOOL(
(BgL_cz00_48==BgL_char2z00_2804));} }  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3955z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
return 
BBOOL(
BGl_2zc3zc3zz__r4_numbers_6_5z00(
BINT(
(BgL_cz00_48)), 
BINT(((long)32))));}  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3876z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
return 
BBOOL(
isdigit(BgL_cz00_48));}  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3957z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(
BINT(
(BgL_cz00_48)), 
BINT(((long)32))))
{ /* Llib/pregexp.scm 445 */
if(
isspace(BgL_cz00_48))
{ /* Llib/pregexp.scm 446 */
return BFALSE;}  else 
{ /* Llib/pregexp.scm 446 */
return BTRUE;} }  else 
{ /* Llib/pregexp.scm 445 */
return BFALSE;} }  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3959z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
return 
BBOOL(
islower(BgL_cz00_48));}  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3961z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
return 
BBOOL(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(
BINT(
(BgL_cz00_48)), 
BINT(((long)32))));}  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3963z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(
BINT(
(BgL_cz00_48)), 
BINT(((long)32))))
{ /* Llib/pregexp.scm 450 */
bool_t BgL_testz00_6543;
if(
isspace(BgL_cz00_48))
{ /* Llib/pregexp.scm 450 */
BgL_testz00_6543 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 450 */
BgL_testz00_6543 = ((bool_t)1)
; } 
if(BgL_testz00_6543)
{ /* Llib/pregexp.scm 451 */
bool_t BgL_testz00_6546;
if(
isalpha(BgL_cz00_48))
{ /* Llib/pregexp.scm 451 */
BgL_testz00_6546 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 451 */
BgL_testz00_6546 = ((bool_t)1)
; } 
if(BgL_testz00_6546)
{ /* Llib/pregexp.scm 451 */
if(
isdigit(BgL_cz00_48))
{ /* Llib/pregexp.scm 452 */
return BFALSE;}  else 
{ /* Llib/pregexp.scm 452 */
return BTRUE;} }  else 
{ /* Llib/pregexp.scm 451 */
return BFALSE;} }  else 
{ /* Llib/pregexp.scm 450 */
return BFALSE;} }  else 
{ /* Llib/pregexp.scm 449 */
return BFALSE;} }  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3879z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
return 
BBOOL(
isspace(BgL_cz00_48));}  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3965z00zz__pregexpz00))
{ /* Llib/pregexp.scm 436 */
return 
BBOOL(
isupper(BgL_cz00_48));}  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3882z00zz__pregexpz00))
{ /* Llib/pregexp.scm 455 */
bool_t BgL__ortest_1880z00_1426;
BgL__ortest_1880z00_1426 = 
isalpha(BgL_cz00_48); 
if(BgL__ortest_1880z00_1426)
{ /* Llib/pregexp.scm 455 */
return 
BBOOL(BgL__ortest_1880z00_1426);}  else 
{ /* Llib/pregexp.scm 456 */
bool_t BgL__ortest_1881z00_1427;
BgL__ortest_1881z00_1427 = 
isdigit(BgL_cz00_48); 
if(BgL__ortest_1881z00_1427)
{ /* Llib/pregexp.scm 456 */
return 
BBOOL(BgL__ortest_1881z00_1427);}  else 
{ /* Llib/pregexp.scm 456 */
return 
BBOOL(
(BgL_cz00_48==((unsigned char)'_')));} } }  else 
{ /* Llib/pregexp.scm 436 */
if(
(BgL_charzd2classzd2_49==BGl_keyword3967z00zz__pregexpz00))
{ /* Llib/pregexp.scm 458 */
bool_t BgL__ortest_1882z00_1429;
BgL__ortest_1882z00_1429 = 
isdigit(BgL_cz00_48); 
if(BgL__ortest_1882z00_1429)
{ /* Llib/pregexp.scm 458 */
return 
BBOOL(BgL__ortest_1882z00_1429);}  else 
{ /* Llib/pregexp.scm 459 */
bool_t BgL__ortest_1883z00_1430;
BgL__ortest_1883z00_1430 = 
(
toupper(BgL_cz00_48)==
toupper(((unsigned char)'a'))); 
if(BgL__ortest_1883z00_1430)
{ /* Llib/pregexp.scm 459 */
return 
BBOOL(BgL__ortest_1883z00_1430);}  else 
{ /* Llib/pregexp.scm 459 */
bool_t BgL__ortest_1884z00_1431;
BgL__ortest_1884z00_1431 = 
(
toupper(BgL_cz00_48)==
toupper(((unsigned char)'b'))); 
if(BgL__ortest_1884z00_1431)
{ /* Llib/pregexp.scm 459 */
return 
BBOOL(BgL__ortest_1884z00_1431);}  else 
{ /* Llib/pregexp.scm 460 */
bool_t BgL__ortest_1885z00_1432;
BgL__ortest_1885z00_1432 = 
(
toupper(BgL_cz00_48)==
toupper(((unsigned char)'c'))); 
if(BgL__ortest_1885z00_1432)
{ /* Llib/pregexp.scm 460 */
return 
BBOOL(BgL__ortest_1885z00_1432);}  else 
{ /* Llib/pregexp.scm 460 */
bool_t BgL__ortest_1886z00_1433;
BgL__ortest_1886z00_1433 = 
(
toupper(BgL_cz00_48)==
toupper(((unsigned char)'d'))); 
if(BgL__ortest_1886z00_1433)
{ /* Llib/pregexp.scm 460 */
return 
BBOOL(BgL__ortest_1886z00_1433);}  else 
{ /* Llib/pregexp.scm 461 */
bool_t BgL__ortest_1887z00_1434;
BgL__ortest_1887z00_1434 = 
(
toupper(BgL_cz00_48)==
toupper(((unsigned char)'e'))); 
if(BgL__ortest_1887z00_1434)
{ /* Llib/pregexp.scm 461 */
return 
BBOOL(BgL__ortest_1887z00_1434);}  else 
{ /* Llib/pregexp.scm 461 */
return 
BBOOL(
(
toupper(BgL_cz00_48)==
toupper(((unsigned char)'f'))));} } } } } } }  else 
{ /* Llib/pregexp.scm 462 */
obj_t BgL_list2437z00_1435;
BgL_list2437z00_1435 = 
MAKE_PAIR(BgL_charzd2classzd2_49, BNIL); 
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol3969z00zz__pregexpz00, 
CAR(BgL_list2437z00_1435));} } } } } } } } } } } } } } } } 
}



/* pregexp-list-ref */
obj_t BGl_pregexpzd2listzd2refz00zz__pregexpz00(obj_t BgL_sz00_50, obj_t BgL_iz00_51)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 464 */
{ 
obj_t BgL_sz00_1437;long BgL_kz00_1438;
BgL_sz00_1437 = BgL_sz00_50; 
BgL_kz00_1438 = ((long)0); 
BgL_zc3anonymousza32438ze3z83_1439:
if(
NULLP(BgL_sz00_1437))
{ /* Llib/pregexp.scm 469 */
return BFALSE;}  else 
{ /* Llib/pregexp.scm 469 */
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(
BINT(BgL_kz00_1438), BgL_iz00_51))
{ /* Llib/pregexp.scm 470 */
obj_t BgL_pairz00_2904;
if(
PAIRP(BgL_sz00_1437))
{ /* Llib/pregexp.scm 470 */
BgL_pairz00_2904 = BgL_sz00_1437; }  else 
{ 
obj_t BgL_auxz00_6613;
BgL_auxz00_6613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)18462)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_sz00_1437); 
FAILURE(BgL_auxz00_6613,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_2904);}  else 
{ /* Llib/pregexp.scm 471 */
long BgL_arg2442z00_1443;
{ /* Llib/pregexp.scm 471 */
obj_t BgL_auxz00_6618;
{ /* Llib/pregexp.scm 471 */
obj_t BgL_aux3438z00_4107;
BgL_aux3438z00_4107 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
BINT(BgL_kz00_1438), 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3438z00_4107))
{ /* Llib/pregexp.scm 471 */
BgL_auxz00_6618 = BgL_aux3438z00_4107
; }  else 
{ 
obj_t BgL_auxz00_6624;
BgL_auxz00_6624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)18498)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3438z00_4107); 
FAILURE(BgL_auxz00_6624,BFALSE,BFALSE);} } 
BgL_arg2442z00_1443 = 
(long)CINT(BgL_auxz00_6618); } 
{ 
long BgL_kz00_6637;obj_t BgL_sz00_6629;
{ /* Llib/pregexp.scm 471 */
obj_t BgL_pairz00_2905;
if(
PAIRP(BgL_sz00_1437))
{ /* Llib/pregexp.scm 471 */
BgL_pairz00_2905 = BgL_sz00_1437; }  else 
{ 
obj_t BgL_auxz00_6632;
BgL_auxz00_6632 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)18495)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_sz00_1437); 
FAILURE(BgL_auxz00_6632,BFALSE,BFALSE);} 
BgL_sz00_6629 = 
CDR(BgL_pairz00_2905); } 
BgL_kz00_6637 = BgL_arg2442z00_1443; 
BgL_kz00_1438 = BgL_kz00_6637; 
BgL_sz00_1437 = BgL_sz00_6629; 
goto BgL_zc3anonymousza32438ze3z83_1439;} } } } } 
}



/* sub' */
obj_t BGl_subz72z72zz__pregexpz00(obj_t BgL_rez00_1446)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 485 */
if(
PAIRP(BgL_rez00_1446))
{ /* Llib/pregexp.scm 487 */
obj_t BgL_carzd2rezd2_1449;obj_t BgL_subzd2cdrzd2rez00_1450;
BgL_carzd2rezd2_1449 = 
CAR(BgL_rez00_1446); 
BgL_subzd2cdrzd2rez00_1450 = 
BGl_subz72z72zz__pregexpz00(
CDR(BgL_rez00_1446)); 
if(
(BgL_carzd2rezd2_1449==BGl_keyword3889z00zz__pregexpz00))
{ /* Llib/pregexp.scm 490 */
obj_t BgL_arg2446z00_1452;
BgL_arg2446z00_1452 = 
MAKE_PAIR(BgL_rez00_1446, BFALSE); 
return 
MAKE_PAIR(BgL_arg2446z00_1452, BgL_subzd2cdrzd2rez00_1450);}  else 
{ /* Llib/pregexp.scm 491 */
obj_t BgL_arg2447z00_1453;
BgL_arg2447z00_1453 = 
BGl_subz72z72zz__pregexpz00(BgL_carzd2rezd2_1449); 
{ /* Llib/pregexp.scm 491 */
obj_t BgL_auxz00_6648;
{ /* Llib/pregexp.scm 491 */
bool_t BgL_testz00_6649;
if(
PAIRP(BgL_arg2447z00_1453))
{ /* Llib/pregexp.scm 491 */
BgL_testz00_6649 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 491 */
BgL_testz00_6649 = 
NULLP(BgL_arg2447z00_1453)
; } 
if(BgL_testz00_6649)
{ /* Llib/pregexp.scm 491 */
BgL_auxz00_6648 = BgL_arg2447z00_1453
; }  else 
{ 
obj_t BgL_auxz00_6653;
BgL_auxz00_6653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)19180)), BGl_string3970z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_arg2447z00_1453); 
FAILURE(BgL_auxz00_6653,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_6648, BgL_subzd2cdrzd2rez00_1450);} } }  else 
{ /* Llib/pregexp.scm 486 */
return BNIL;} } 
}



/* pregexp-match-positions-aux */
obj_t BGl_pregexpzd2matchzd2positionszd2auxzd2zz__pregexpz00(obj_t BgL_rez00_53, obj_t BgL_sz00_54, long BgL_snz00_55, obj_t BgL_startz00_56, obj_t BgL_nz00_57, obj_t BgL_iz00_58)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 494 */
{ /* Llib/pregexp.scm 496 */
obj_t BgL_nz00_3686;obj_t BgL_snz00_3685;
BgL_nz00_3686 = 
MAKE_CELL(BgL_nz00_57); 
{ /* Llib/pregexp.scm 496 */
obj_t BgL_cellvalz00_6658;
BgL_cellvalz00_6658 = 
BINT(BgL_snz00_55); 
BgL_snz00_3685 = 
MAKE_CELL(BgL_cellvalz00_6658); } 
{ /* Llib/pregexp.scm 496 */
obj_t BgL_backrefsz00_1457;obj_t BgL_casezd2sensitivezf3z21_1458;
BgL_backrefsz00_1457 = 
BGl_subz72z72zz__pregexpz00(BgL_rez00_53); 
BgL_casezd2sensitivezf3z21_1458 = 
MAKE_CELL(BTRUE); 
BGl_subz00zz__pregexpz00(BgL_startz00_56, BgL_sz00_54, BgL_backrefsz00_1457, BgL_snz00_3685, BGl_proc3971z00zz__pregexpz00, BgL_casezd2sensitivezf3z21_1458, BgL_nz00_3686, BgL_rez00_53, BgL_iz00_58, BGl_proc3971z00zz__pregexpz00, BGl_proc3972z00zz__pregexpz00); 
{ /* Llib/pregexp.scm 671 */
obj_t BgL_backrefsz00_1701;
if(
NULLP(BgL_backrefsz00_1457))
{ /* Llib/pregexp.scm 671 */
BgL_backrefsz00_1701 = BNIL; }  else 
{ /* Llib/pregexp.scm 671 */
obj_t BgL_head1933z00_1705;
{ /* Llib/pregexp.scm 671 */
obj_t BgL_arg2618z00_1719;
{ /* Llib/pregexp.scm 671 */
obj_t BgL_pairz00_3109;
{ /* Llib/pregexp.scm 671 */
obj_t BgL_pairz00_3108;
if(
PAIRP(BgL_backrefsz00_1457))
{ /* Llib/pregexp.scm 671 */
BgL_pairz00_3108 = BgL_backrefsz00_1457; }  else 
{ 
obj_t BgL_auxz00_6666;
BgL_auxz00_6666 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27593)), BGl_string3973z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_backrefsz00_1457); 
FAILURE(BgL_auxz00_6666,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 671 */
obj_t BgL_aux3446z00_4115;
BgL_aux3446z00_4115 = 
CAR(BgL_pairz00_3108); 
if(
PAIRP(BgL_aux3446z00_4115))
{ /* Llib/pregexp.scm 671 */
BgL_pairz00_3109 = BgL_aux3446z00_4115; }  else 
{ 
obj_t BgL_auxz00_6673;
BgL_auxz00_6673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27593)), BGl_string3973z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3446z00_4115); 
FAILURE(BgL_auxz00_6673,BFALSE,BFALSE);} } } 
BgL_arg2618z00_1719 = 
CDR(BgL_pairz00_3109); } 
BgL_head1933z00_1705 = 
MAKE_PAIR(BgL_arg2618z00_1719, BNIL); } 
{ /* Llib/pregexp.scm 671 */
obj_t BgL_g1936z00_1706;
{ /* Llib/pregexp.scm 671 */
obj_t BgL_pairz00_3112;
if(
PAIRP(BgL_backrefsz00_1457))
{ /* Llib/pregexp.scm 671 */
BgL_pairz00_3112 = BgL_backrefsz00_1457; }  else 
{ 
obj_t BgL_auxz00_6681;
BgL_auxz00_6681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27593)), BGl_string3973z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_backrefsz00_1457); 
FAILURE(BgL_auxz00_6681,BFALSE,BFALSE);} 
BgL_g1936z00_1706 = 
CDR(BgL_pairz00_3112); } 
{ 
obj_t BgL_l1931z00_1708;obj_t BgL_tail1934z00_1709;
BgL_l1931z00_1708 = BgL_g1936z00_1706; 
BgL_tail1934z00_1709 = BgL_head1933z00_1705; 
BgL_zc3anonymousza32611ze3z83_1710:
if(
PAIRP(BgL_l1931z00_1708))
{ /* Llib/pregexp.scm 671 */
obj_t BgL_newtail1935z00_1712;
{ /* Llib/pregexp.scm 671 */
obj_t BgL_arg2614z00_1714;
{ /* Llib/pregexp.scm 671 */
obj_t BgL_pairz00_3115;
{ /* Llib/pregexp.scm 671 */
obj_t BgL_aux3450z00_4119;
BgL_aux3450z00_4119 = 
CAR(BgL_l1931z00_1708); 
if(
PAIRP(BgL_aux3450z00_4119))
{ /* Llib/pregexp.scm 671 */
BgL_pairz00_3115 = BgL_aux3450z00_4119; }  else 
{ 
obj_t BgL_auxz00_6691;
BgL_auxz00_6691 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27593)), BGl_string3974z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3450z00_4119); 
FAILURE(BgL_auxz00_6691,BFALSE,BFALSE);} } 
BgL_arg2614z00_1714 = 
CDR(BgL_pairz00_3115); } 
BgL_newtail1935z00_1712 = 
MAKE_PAIR(BgL_arg2614z00_1714, BNIL); } 
SET_CDR(BgL_tail1934z00_1709, BgL_newtail1935z00_1712); 
{ 
obj_t BgL_tail1934z00_6700;obj_t BgL_l1931z00_6698;
BgL_l1931z00_6698 = 
CDR(BgL_l1931z00_1708); 
BgL_tail1934z00_6700 = BgL_newtail1935z00_1712; 
BgL_tail1934z00_1709 = BgL_tail1934z00_6700; 
BgL_l1931z00_1708 = BgL_l1931z00_6698; 
goto BgL_zc3anonymousza32611ze3z83_1710;} }  else 
{ /* Llib/pregexp.scm 671 */
if(
NULLP(BgL_l1931z00_1708))
{ /* Llib/pregexp.scm 671 */
BgL_backrefsz00_1701 = BgL_head1933z00_1705; }  else 
{ /* Llib/pregexp.scm 671 */
BgL_backrefsz00_1701 = 
BGl_errorz00zz__errorz00(BGl_string3975z00zz__pregexpz00, BGl_string3976z00zz__pregexpz00, BgL_l1931z00_1708); } } } } } 
{ /* Llib/pregexp.scm 672 */
bool_t BgL_testz00_6704;
{ /* Llib/pregexp.scm 672 */
obj_t BgL_pairz00_3122;
if(
PAIRP(BgL_backrefsz00_1701))
{ /* Llib/pregexp.scm 672 */
BgL_pairz00_3122 = BgL_backrefsz00_1701; }  else 
{ 
obj_t BgL_auxz00_6707;
BgL_auxz00_6707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27632)), BGl_string3973z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_backrefsz00_1701); 
FAILURE(BgL_auxz00_6707,BFALSE,BFALSE);} 
BgL_testz00_6704 = 
CBOOL(
CAR(BgL_pairz00_3122)); } 
if(BgL_testz00_6704)
{ /* Llib/pregexp.scm 672 */
return BgL_backrefsz00_1701;}  else 
{ /* Llib/pregexp.scm 672 */
return BFALSE;} } } } } } 
}



/* loup-one-of-chars */
obj_t BGl_loupzd2onezd2ofzd2charszd2zz__pregexpz00(obj_t BgL_fkz00_3488, obj_t BgL_skz00_3487, obj_t BgL_iz00_3486, obj_t BgL_startz00_3485, obj_t BgL_sz00_3484, obj_t BgL_backrefsz00_3483, obj_t BgL_snz00_3482, obj_t BgL_identityz00_3481, obj_t BgL_casezd2sensitivezf3z21_3480, obj_t BgL_nz00_3479, obj_t BgL_charsz00_1501)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 541 */
if(
NULLP(BgL_charsz00_1501))
{ /* Llib/pregexp.scm 542 */
obj_t BgL_funz00_4125;
if(
PROCEDUREP(BgL_fkz00_3488))
{ /* Llib/pregexp.scm 542 */
BgL_funz00_4125 = BgL_fkz00_3488; }  else 
{ 
obj_t BgL_auxz00_6717;
BgL_auxz00_6717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21205)), BGl_string3977z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_3488); 
FAILURE(BgL_auxz00_6717,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4125, ((long)0)))
{ /* Llib/pregexp.scm 542 */
return 
PROCEDURE_ENTRY(BgL_funz00_4125)(BgL_fkz00_3488, BEOA);}  else 
{ /* Llib/pregexp.scm 542 */
FAILURE(BGl_string3978z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4125);} }  else 
{ /* Llib/pregexp.scm 543 */
obj_t BgL_arg2486z00_1504;
{ /* Llib/pregexp.scm 543 */
obj_t BgL_pairz00_2958;
if(
PAIRP(BgL_charsz00_1501))
{ /* Llib/pregexp.scm 543 */
BgL_pairz00_2958 = BgL_charsz00_1501; }  else 
{ 
obj_t BgL_auxz00_6728;
BgL_auxz00_6728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21248)), BGl_string3977z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_charsz00_1501); 
FAILURE(BgL_auxz00_6728,BFALSE,BFALSE);} 
BgL_arg2486z00_1504 = 
CAR(BgL_pairz00_2958); } 
{ /* Llib/pregexp.scm 545 */
obj_t BgL_zc3anonymousza32488ze3z83_3476;
BgL_zc3anonymousza32488ze3z83_3476 = 
make_fx_procedure(BGl_zc3anonymousza32488ze3z83zz__pregexpz00, 
(int)(((long)0)), 
(int)(((long)11))); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)0)), BgL_nz00_3479); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3480); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)2)), BgL_identityz00_3481); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)3)), BgL_snz00_3482); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)4)), BgL_backrefsz00_3483); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)5)), BgL_sz00_3484); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)6)), BgL_startz00_3485); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)7)), BgL_iz00_3486); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)8)), BgL_skz00_3487); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)9)), BgL_fkz00_3488); 
PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3476, 
(int)(((long)10)), BgL_charsz00_1501); 
return 
BGl_subz00zz__pregexpz00(BgL_startz00_3485, BgL_sz00_3484, BgL_backrefsz00_3483, BgL_snz00_3482, BgL_identityz00_3481, BgL_casezd2sensitivezf3z21_3480, BgL_nz00_3479, BgL_arg2486z00_1504, BgL_iz00_3486, BgL_skz00_3487, BgL_zc3anonymousza32488ze3z83_3476);} } } 
}



/* sub */
obj_t BGl_subz00zz__pregexpz00(obj_t BgL_startz00_3495, obj_t BgL_sz00_3494, obj_t BgL_backrefsz00_3493, obj_t BgL_snz00_3492, obj_t BgL_identityz00_3491, obj_t BgL_casezd2sensitivezf3z21_3490, obj_t BgL_nz00_3489, obj_t BgL_rez00_1461, obj_t BgL_iz00_1462, obj_t BgL_skz00_1463, obj_t BgL_fkz00_1464)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 499 */
BGl_subz00zz__pregexpz00:
if(
(BgL_rez00_1461==BGl_keyword3855z00zz__pregexpz00))
{ /* Llib/pregexp.scm 501 */
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_iz00_1462, BgL_startz00_3495))
{ /* Llib/pregexp.scm 503 */
obj_t BgL_funz00_4132;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 503 */
BgL_funz00_4132 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_6765;
BgL_auxz00_6765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)19625)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_6765,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4132, ((long)1)))
{ /* Llib/pregexp.scm 503 */
return 
PROCEDURE_ENTRY(BgL_funz00_4132)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 503 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4132);} }  else 
{ /* Llib/pregexp.scm 503 */
obj_t BgL_funz00_4137;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 503 */
BgL_funz00_4137 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_6776;
BgL_auxz00_6776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)19632)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_6776,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4137, ((long)0)))
{ /* Llib/pregexp.scm 503 */
return 
PROCEDURE_ENTRY(BgL_funz00_4137)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 503 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4137);} } }  else 
{ /* Llib/pregexp.scm 501 */
if(
(BgL_rez00_1461==BGl_keyword3857z00zz__pregexpz00))
{ /* Llib/pregexp.scm 505 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489)))
{ /* Llib/pregexp.scm 507 */
obj_t BgL_funz00_4142;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 507 */
BgL_funz00_4142 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_6791;
BgL_auxz00_6791 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)19757)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_6791,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4142, ((long)1)))
{ /* Llib/pregexp.scm 507 */
return 
PROCEDURE_ENTRY(BgL_funz00_4142)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 507 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4142);} }  else 
{ /* Llib/pregexp.scm 507 */
obj_t BgL_funz00_4147;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 507 */
BgL_funz00_4147 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_6802;
BgL_auxz00_6802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)19764)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_6802,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4147, ((long)0)))
{ /* Llib/pregexp.scm 507 */
return 
PROCEDURE_ENTRY(BgL_funz00_4147)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 507 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4147);} } }  else 
{ /* Llib/pregexp.scm 505 */
if(
(BgL_rez00_1461==BGl_keyword3853z00zz__pregexpz00))
{ /* Llib/pregexp.scm 510 */
obj_t BgL_funz00_4152;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 510 */
BgL_funz00_4152 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_6815;
BgL_auxz00_6815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)19835)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_6815,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4152, ((long)1)))
{ /* Llib/pregexp.scm 510 */
return 
PROCEDURE_ENTRY(BgL_funz00_4152)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 510 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4152);} }  else 
{ /* Llib/pregexp.scm 509 */
if(
(BgL_rez00_1461==BGl_keyword3872z00zz__pregexpz00))
{ /* Llib/pregexp.scm 511 */
if(
CBOOL(
BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__pregexpz00(BgL_sz00_3494, BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489))))
{ /* Llib/pregexp.scm 513 */
obj_t BgL_funz00_4157;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 513 */
BgL_funz00_4157 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_6831;
BgL_auxz00_6831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)19948)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_6831,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4157, ((long)1)))
{ /* Llib/pregexp.scm 513 */
return 
PROCEDURE_ENTRY(BgL_funz00_4157)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 513 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4157);} }  else 
{ /* Llib/pregexp.scm 514 */
obj_t BgL_funz00_4162;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 514 */
BgL_funz00_4162 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_6842;
BgL_auxz00_6842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)19974)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_6842,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4162, ((long)0)))
{ /* Llib/pregexp.scm 514 */
return 
PROCEDURE_ENTRY(BgL_funz00_4162)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 514 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4162);} } }  else 
{ /* Llib/pregexp.scm 511 */
if(
(BgL_rez00_1461==BGl_keyword3874z00zz__pregexpz00))
{ /* Llib/pregexp.scm 515 */
if(
CBOOL(
BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__pregexpz00(BgL_sz00_3494, BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489))))
{ /* Llib/pregexp.scm 517 */
obj_t BgL_funz00_4167;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 517 */
BgL_funz00_4167 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_6858;
BgL_auxz00_6858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20090)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_6858,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4167, ((long)0)))
{ /* Llib/pregexp.scm 517 */
return 
PROCEDURE_ENTRY(BgL_funz00_4167)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 517 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4167);} }  else 
{ /* Llib/pregexp.scm 518 */
obj_t BgL_funz00_4172;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 518 */
BgL_funz00_4172 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_6869;
BgL_auxz00_6869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20114)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_6869,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4172, ((long)1)))
{ /* Llib/pregexp.scm 518 */
return 
PROCEDURE_ENTRY(BgL_funz00_4172)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 518 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4172);} } }  else 
{ /* Llib/pregexp.scm 519 */
bool_t BgL_testz00_6878;
if(
CHARP(BgL_rez00_1461))
{ /* Llib/pregexp.scm 519 */
BgL_testz00_6878 = 
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489))
; }  else 
{ /* Llib/pregexp.scm 519 */
BgL_testz00_6878 = ((bool_t)0)
; } 
if(BgL_testz00_6878)
{ /* Llib/pregexp.scm 521 */
bool_t BgL_testz00_6882;
{ /* Llib/pregexp.scm 521 */
obj_t BgL_fun2463z00_1478;
if(
CBOOL(
CELL_REF(BgL_casezd2sensitivezf3z21_3490)))
{ /* Llib/pregexp.scm 521 */
BgL_fun2463z00_1478 = BGl_charzd3zf3zd2envzf2zz__r4_characters_6_6z00; }  else 
{ /* Llib/pregexp.scm 521 */
BgL_fun2463z00_1478 = BGl_charzd2cizd3zf3zd2envz20zz__r4_characters_6_6z00; } 
{ /* Llib/pregexp.scm 522 */
unsigned char BgL_arg2462z00_1479;
{ /* Llib/pregexp.scm 522 */
obj_t BgL_stringz00_2922;long BgL_kz00_2923;
if(
STRINGP(BgL_sz00_3494))
{ /* Llib/pregexp.scm 522 */
BgL_stringz00_2922 = BgL_sz00_3494; }  else 
{ 
obj_t BgL_auxz00_6887;
BgL_auxz00_6887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20288)), BGl_string3890z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_sz00_3494); 
FAILURE(BgL_auxz00_6887,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 522 */
obj_t BgL_auxz00_6891;
if(
INTEGERP(BgL_iz00_1462))
{ /* Llib/pregexp.scm 522 */
BgL_auxz00_6891 = BgL_iz00_1462
; }  else 
{ 
obj_t BgL_auxz00_6894;
BgL_auxz00_6894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20290)), BGl_string3890z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1462); 
FAILURE(BgL_auxz00_6894,BFALSE,BFALSE);} 
BgL_kz00_2923 = 
(long)CINT(BgL_auxz00_6891); } 
{ /* Llib/pregexp.scm 522 */
long BgL_l3154z00_3820;
BgL_l3154z00_3820 = 
STRING_LENGTH(BgL_stringz00_2922); 
if(
BOUND_CHECK(BgL_kz00_2923, BgL_l3154z00_3820))
{ /* Llib/pregexp.scm 522 */
BgL_arg2462z00_1479 = 
STRING_REF(BgL_stringz00_2922, BgL_kz00_2923); }  else 
{ 
obj_t BgL_auxz00_6903;
BgL_auxz00_6903 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20276)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2923), BgL_stringz00_2922); 
FAILURE(BgL_auxz00_6903,BFALSE,BFALSE);} } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun2463z00_1478, ((long)2)))
{ /* Llib/pregexp.scm 521 */
BgL_testz00_6882 = 
CBOOL(
PROCEDURE_ENTRY(BgL_fun2463z00_1478)(BgL_fun2463z00_1478, 
BCHAR(BgL_arg2462z00_1479), BgL_rez00_1461, BEOA))
; }  else 
{ /* Llib/pregexp.scm 521 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3985z00zz__pregexpz00,BgL_fun2463z00_1478);} } } 
if(BgL_testz00_6882)
{ /* Llib/pregexp.scm 523 */
obj_t BgL_arg2461z00_1477;
BgL_arg2461z00_1477 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1462, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 523 */
obj_t BgL_funz00_4184;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 523 */
BgL_funz00_4184 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_6919;
BgL_auxz00_6919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20316)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_6919,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4184, ((long)1)))
{ /* Llib/pregexp.scm 523 */
return 
PROCEDURE_ENTRY(BgL_funz00_4184)(BgL_skz00_1463, BgL_arg2461z00_1477, BEOA);}  else 
{ /* Llib/pregexp.scm 523 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3992z00zz__pregexpz00,BgL_funz00_4184);} } }  else 
{ /* Llib/pregexp.scm 523 */
obj_t BgL_funz00_4189;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 523 */
BgL_funz00_4189 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_6930;
BgL_auxz00_6930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20329)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_6930,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4189, ((long)0)))
{ /* Llib/pregexp.scm 523 */
return 
PROCEDURE_ENTRY(BgL_funz00_4189)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 523 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4189);} } }  else 
{ /* Llib/pregexp.scm 524 */
bool_t BgL_testz00_6939;
if(
PAIRP(BgL_rez00_1461))
{ /* Llib/pregexp.scm 524 */
BgL_testz00_6939 = ((bool_t)0)
; }  else 
{ /* Llib/pregexp.scm 524 */
BgL_testz00_6939 = 
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489))
; } 
if(BgL_testz00_6939)
{ /* Llib/pregexp.scm 525 */
bool_t BgL_testz00_6943;
{ /* Llib/pregexp.scm 526 */
unsigned char BgL_arg2469z00_1483;
{ /* Llib/pregexp.scm 526 */
obj_t BgL_stringz00_2925;long BgL_kz00_2926;
if(
STRINGP(BgL_sz00_3494))
{ /* Llib/pregexp.scm 526 */
BgL_stringz00_2925 = BgL_sz00_3494; }  else 
{ 
obj_t BgL_auxz00_6946;
BgL_auxz00_6946 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20467)), BGl_string3890z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_sz00_3494); 
FAILURE(BgL_auxz00_6946,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 526 */
obj_t BgL_auxz00_6950;
if(
INTEGERP(BgL_iz00_1462))
{ /* Llib/pregexp.scm 526 */
BgL_auxz00_6950 = BgL_iz00_1462
; }  else 
{ 
obj_t BgL_auxz00_6953;
BgL_auxz00_6953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20469)), BGl_string3890z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1462); 
FAILURE(BgL_auxz00_6953,BFALSE,BFALSE);} 
BgL_kz00_2926 = 
(long)CINT(BgL_auxz00_6950); } 
{ /* Llib/pregexp.scm 526 */
long BgL_l3158z00_3824;
BgL_l3158z00_3824 = 
STRING_LENGTH(BgL_stringz00_2925); 
if(
BOUND_CHECK(BgL_kz00_2926, BgL_l3158z00_3824))
{ /* Llib/pregexp.scm 526 */
BgL_arg2469z00_1483 = 
STRING_REF(BgL_stringz00_2925, BgL_kz00_2926); }  else 
{ 
obj_t BgL_auxz00_6962;
BgL_auxz00_6962 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20455)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2926), BgL_stringz00_2925); 
FAILURE(BgL_auxz00_6962,BFALSE,BFALSE);} } } 
BgL_testz00_6943 = 
CBOOL(
BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00(BgL_arg2469z00_1483, BgL_rez00_1461)); } 
if(BgL_testz00_6943)
{ /* Llib/pregexp.scm 527 */
obj_t BgL_arg2467z00_1482;
BgL_arg2467z00_1482 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1462, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 527 */
obj_t BgL_funz00_4198;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 527 */
BgL_funz00_4198 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_6973;
BgL_auxz00_6973 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20495)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_6973,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4198, ((long)1)))
{ /* Llib/pregexp.scm 527 */
return 
PROCEDURE_ENTRY(BgL_funz00_4198)(BgL_skz00_1463, BgL_arg2467z00_1482, BEOA);}  else 
{ /* Llib/pregexp.scm 527 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3995z00zz__pregexpz00,BgL_funz00_4198);} } }  else 
{ /* Llib/pregexp.scm 527 */
obj_t BgL_funz00_4203;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 527 */
BgL_funz00_4203 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_6984;
BgL_auxz00_6984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20508)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_6984,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4203, ((long)0)))
{ /* Llib/pregexp.scm 527 */
return 
PROCEDURE_ENTRY(BgL_funz00_4203)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 527 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4203);} } }  else 
{ /* Llib/pregexp.scm 528 */
bool_t BgL_testz00_6993;
if(
PAIRP(BgL_rez00_1461))
{ /* Llib/pregexp.scm 528 */
if(
(
CAR(BgL_rez00_1461)==BGl_keyword3933z00zz__pregexpz00))
{ /* Llib/pregexp.scm 528 */
BgL_testz00_6993 = 
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489))
; }  else 
{ /* Llib/pregexp.scm 528 */
BgL_testz00_6993 = ((bool_t)0)
; } }  else 
{ /* Llib/pregexp.scm 528 */
BgL_testz00_6993 = ((bool_t)0)
; } 
if(BgL_testz00_6993)
{ /* Llib/pregexp.scm 529 */
unsigned char BgL_cz00_1485;
{ /* Llib/pregexp.scm 529 */
obj_t BgL_stringz00_2931;long BgL_kz00_2932;
if(
STRINGP(BgL_sz00_3494))
{ /* Llib/pregexp.scm 529 */
BgL_stringz00_2931 = BgL_sz00_3494; }  else 
{ 
obj_t BgL_auxz00_7002;
BgL_auxz00_7002 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20620)), BGl_string3890z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_sz00_3494); 
FAILURE(BgL_auxz00_7002,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 529 */
obj_t BgL_auxz00_7006;
if(
INTEGERP(BgL_iz00_1462))
{ /* Llib/pregexp.scm 529 */
BgL_auxz00_7006 = BgL_iz00_1462
; }  else 
{ 
obj_t BgL_auxz00_7009;
BgL_auxz00_7009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20622)), BGl_string3890z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1462); 
FAILURE(BgL_auxz00_7009,BFALSE,BFALSE);} 
BgL_kz00_2932 = 
(long)CINT(BgL_auxz00_7006); } 
{ /* Llib/pregexp.scm 529 */
long BgL_l3162z00_3828;
BgL_l3162z00_3828 = 
STRING_LENGTH(BgL_stringz00_2931); 
if(
BOUND_CHECK(BgL_kz00_2932, BgL_l3162z00_3828))
{ /* Llib/pregexp.scm 529 */
BgL_cz00_1485 = 
STRING_REF(BgL_stringz00_2931, BgL_kz00_2932); }  else 
{ 
obj_t BgL_auxz00_7018;
BgL_auxz00_7018 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20608)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_2932), BgL_stringz00_2931); 
FAILURE(BgL_auxz00_7018,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 530 */
bool_t BgL_testz00_7023;
{ /* Llib/pregexp.scm 530 */
obj_t BgL_czc3zc3_1488;
if(
CBOOL(
CELL_REF(BgL_casezd2sensitivezf3z21_3490)))
{ /* Llib/pregexp.scm 530 */
BgL_czc3zc3_1488 = BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00; }  else 
{ /* Llib/pregexp.scm 530 */
BgL_czc3zc3_1488 = BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00; } 
{ /* Llib/pregexp.scm 531 */
obj_t BgL__andtest_1889z00_1489;
{ /* Llib/pregexp.scm 531 */
obj_t BgL_arg2477z00_1491;
{ /* Llib/pregexp.scm 531 */
obj_t BgL_pairz00_2936;
{ /* Llib/pregexp.scm 531 */
obj_t BgL_aux3526z00_4210;
BgL_aux3526z00_4210 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3526z00_4210))
{ /* Llib/pregexp.scm 531 */
BgL_pairz00_2936 = BgL_aux3526z00_4210; }  else 
{ 
obj_t BgL_auxz00_7029;
BgL_auxz00_7029 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20732)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3526z00_4210); 
FAILURE(BgL_auxz00_7029,BFALSE,BFALSE);} } 
BgL_arg2477z00_1491 = 
CAR(BgL_pairz00_2936); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_czc3zc3_1488, ((long)2)))
{ /* Llib/pregexp.scm 531 */
BgL__andtest_1889z00_1489 = 
PROCEDURE_ENTRY(BgL_czc3zc3_1488)(BgL_czc3zc3_1488, BgL_arg2477z00_1491, 
BCHAR(BgL_cz00_1485), BEOA); }  else 
{ /* Llib/pregexp.scm 531 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3998z00zz__pregexpz00,BgL_czc3zc3_1488);} } 
if(
CBOOL(BgL__andtest_1889z00_1489))
{ /* Llib/pregexp.scm 532 */
obj_t BgL_arg2476z00_1490;
{ /* Llib/pregexp.scm 532 */
obj_t BgL_pairz00_2942;
{ /* Llib/pregexp.scm 532 */
obj_t BgL_pairz00_2941;
{ /* Llib/pregexp.scm 532 */
obj_t BgL_aux3530z00_4215;
BgL_aux3530z00_4215 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3530z00_4215))
{ /* Llib/pregexp.scm 532 */
BgL_pairz00_2941 = BgL_aux3530z00_4215; }  else 
{ 
obj_t BgL_auxz00_7045;
BgL_auxz00_7045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20779)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3530z00_4215); 
FAILURE(BgL_auxz00_7045,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 532 */
obj_t BgL_aux3532z00_4217;
BgL_aux3532z00_4217 = 
CDR(BgL_pairz00_2941); 
if(
PAIRP(BgL_aux3532z00_4217))
{ /* Llib/pregexp.scm 532 */
BgL_pairz00_2942 = BgL_aux3532z00_4217; }  else 
{ 
obj_t BgL_auxz00_7052;
BgL_auxz00_7052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20779)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3532z00_4217); 
FAILURE(BgL_auxz00_7052,BFALSE,BFALSE);} } } 
BgL_arg2476z00_1490 = 
CAR(BgL_pairz00_2942); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_czc3zc3_1488, ((long)2)))
{ /* Llib/pregexp.scm 532 */
BgL_testz00_7023 = 
CBOOL(
PROCEDURE_ENTRY(BgL_czc3zc3_1488)(BgL_czc3zc3_1488, 
BCHAR(BgL_cz00_1485), BgL_arg2476z00_1490, BEOA))
; }  else 
{ /* Llib/pregexp.scm 532 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list4005z00zz__pregexpz00,BgL_czc3zc3_1488);} }  else 
{ /* Llib/pregexp.scm 531 */
BgL_testz00_7023 = ((bool_t)0)
; } } } 
if(BgL_testz00_7023)
{ /* Llib/pregexp.scm 533 */
obj_t BgL_arg2472z00_1487;
BgL_arg2472z00_1487 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1462, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 533 */
obj_t BgL_funz00_4224;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 533 */
BgL_funz00_4224 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_7068;
BgL_auxz00_7068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20814)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_7068,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4224, ((long)1)))
{ /* Llib/pregexp.scm 533 */
return 
PROCEDURE_ENTRY(BgL_funz00_4224)(BgL_skz00_1463, BgL_arg2472z00_1487, BEOA);}  else 
{ /* Llib/pregexp.scm 533 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list4008z00zz__pregexpz00,BgL_funz00_4224);} } }  else 
{ /* Llib/pregexp.scm 533 */
obj_t BgL_funz00_4229;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 533 */
BgL_funz00_4229 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7079;
BgL_auxz00_7079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20827)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7079,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4229, ((long)0)))
{ /* Llib/pregexp.scm 533 */
return 
PROCEDURE_ENTRY(BgL_funz00_4229)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 533 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4229);} } } }  else 
{ /* Llib/pregexp.scm 528 */
if(
PAIRP(BgL_rez00_1461))
{ /* Llib/pregexp.scm 535 */
obj_t BgL_casezd2valuezd2_1493;
BgL_casezd2valuezd2_1493 = 
CAR(BgL_rez00_1461); 
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3933z00zz__pregexpz00))
{ /* Llib/pregexp.scm 535 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489)))
{ /* Llib/pregexp.scm 537 */
obj_t BgL_funz00_4234;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 537 */
BgL_funz00_4234 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7097;
BgL_auxz00_7097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)20954)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7097,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4234, ((long)0)))
{ /* Llib/pregexp.scm 537 */
return 
PROCEDURE_ENTRY(BgL_funz00_4234)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 537 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4234);} }  else 
{ /* Llib/pregexp.scm 537 */
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol4011z00zz__pregexpz00, BUNSPEC);} }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3931z00zz__pregexpz00))
{ /* Llib/pregexp.scm 535 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489)))
{ /* Llib/pregexp.scm 540 */
obj_t BgL_funz00_4239;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 540 */
BgL_funz00_4239 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7113;
BgL_auxz00_7113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21094)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7113,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4239, ((long)0)))
{ /* Llib/pregexp.scm 540 */
return 
PROCEDURE_ENTRY(BgL_funz00_4239)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 540 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4239);} }  else 
{ /* Llib/pregexp.scm 541 */
obj_t BgL_g1890z00_1499;
BgL_g1890z00_1499 = 
CDR(BgL_rez00_1461); 
return 
BGl_loupzd2onezd2ofzd2charszd2zz__pregexpz00(BgL_fkz00_1464, BgL_skz00_1463, BgL_iz00_1462, BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, BgL_g1890z00_1499);} }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3861z00zz__pregexpz00))
{ /* Llib/pregexp.scm 535 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489)))
{ /* Llib/pregexp.scm 547 */
obj_t BgL_funz00_4244;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 547 */
BgL_funz00_4244 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7130;
BgL_auxz00_7130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21438)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7130,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4244, ((long)0)))
{ /* Llib/pregexp.scm 547 */
return 
PROCEDURE_ENTRY(BgL_funz00_4244)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 547 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4244);} }  else 
{ /* Llib/pregexp.scm 548 */
obj_t BgL_arg2492z00_1512;
{ /* Llib/pregexp.scm 548 */
obj_t BgL_pairz00_2966;
{ /* Llib/pregexp.scm 548 */
obj_t BgL_aux3556z00_4247;
BgL_aux3556z00_4247 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3556z00_4247))
{ /* Llib/pregexp.scm 548 */
BgL_pairz00_2966 = BgL_aux3556z00_4247; }  else 
{ 
obj_t BgL_auxz00_7142;
BgL_auxz00_7142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21470)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3556z00_4247); 
FAILURE(BgL_auxz00_7142,BFALSE,BFALSE);} } 
BgL_arg2492z00_1512 = 
CAR(BgL_pairz00_2966); } 
{ /* Llib/pregexp.scm 549 */
obj_t BgL_zc3anonymousza32495ze3z83_3452;obj_t BgL_zc3anonymousza32496ze3z83_3451;
BgL_zc3anonymousza32495ze3z83_3452 = 
make_fx_procedure(BGl_zc3anonymousza32495ze3z83zz__pregexpz00, 
(int)(((long)1)), 
(int)(((long)1))); 
BgL_zc3anonymousza32496ze3z83_3451 = 
make_fx_procedure(BGl_zc3anonymousza32496ze3z83zz__pregexpz00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza32495ze3z83_3452, 
(int)(((long)0)), BgL_fkz00_1464); 
PROCEDURE_SET(BgL_zc3anonymousza32496ze3z83_3451, 
(int)(((long)0)), BgL_iz00_1462); 
PROCEDURE_SET(BgL_zc3anonymousza32496ze3z83_3451, 
(int)(((long)1)), BgL_skz00_1463); 
{ 
obj_t BgL_fkz00_7161;obj_t BgL_skz00_7160;obj_t BgL_rez00_7159;
BgL_rez00_7159 = BgL_arg2492z00_1512; 
BgL_skz00_7160 = BgL_zc3anonymousza32495ze3z83_3452; 
BgL_fkz00_7161 = BgL_zc3anonymousza32496ze3z83_3451; 
BgL_fkz00_1464 = BgL_fkz00_7161; 
BgL_skz00_1463 = BgL_skz00_7160; 
BgL_rez00_1461 = BgL_rez00_7159; 
goto BGl_subz00zz__pregexpz00;} } } }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3847z00zz__pregexpz00))
{ /* Llib/pregexp.scm 552 */
obj_t BgL_g1891z00_1522;
BgL_g1891z00_1522 = 
CDR(BgL_rez00_1461); 
return 
BGl_loupzd2seqzd2zz__pregexpz00(BgL_skz00_1463, BgL_fkz00_1464, BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, BgL_g1891z00_1522, BgL_iz00_1462);}  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3845z00zz__pregexpz00))
{ /* Llib/pregexp.scm 559 */
obj_t BgL_g1892z00_1536;
BgL_g1892z00_1536 = 
CDR(BgL_rez00_1461); 
return 
BGl_loupzd2orzd2zz__pregexpz00(BgL_fkz00_1464, BgL_iz00_1462, BgL_skz00_1463, BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, BgL_g1892z00_1536);}  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3863z00zz__pregexpz00))
{ /* Llib/pregexp.scm 567 */
obj_t BgL_cz00_1554;
{ /* Llib/pregexp.scm 567 */
obj_t BgL_auxz00_7172;
{ /* Llib/pregexp.scm 567 */
obj_t BgL_pairz00_2989;
{ /* Llib/pregexp.scm 567 */
obj_t BgL_aux3558z00_4249;
BgL_aux3558z00_4249 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3558z00_4249))
{ /* Llib/pregexp.scm 567 */
BgL_pairz00_2989 = BgL_aux3558z00_4249; }  else 
{ 
obj_t BgL_auxz00_7176;
BgL_auxz00_7176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22334)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3558z00_4249); 
FAILURE(BgL_auxz00_7176,BFALSE,BFALSE);} } 
BgL_auxz00_7172 = 
CAR(BgL_pairz00_2989); } 
BgL_cz00_1554 = 
BGl_pregexpzd2listzd2refz00zz__pregexpz00(BgL_backrefsz00_3493, BgL_auxz00_7172); } 
{ /* Llib/pregexp.scm 567 */
obj_t BgL_backrefz00_1555;
if(
CBOOL(BgL_cz00_1554))
{ /* Llib/pregexp.scm 569 */
obj_t BgL_pairz00_2990;
if(
PAIRP(BgL_cz00_1554))
{ /* Llib/pregexp.scm 569 */
BgL_pairz00_2990 = BgL_cz00_1554; }  else 
{ 
obj_t BgL_auxz00_7186;
BgL_auxz00_7186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22407)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_cz00_1554); 
FAILURE(BgL_auxz00_7186,BFALSE,BFALSE);} 
BgL_backrefz00_1555 = 
CDR(BgL_pairz00_2990); }  else 
{ /* Llib/pregexp.scm 569 */
{ /* Llib/pregexp.scm 572 */
obj_t BgL_list2521z00_1565;
{ /* Llib/pregexp.scm 572 */
obj_t BgL_arg2522z00_1566;obj_t BgL_arg2523z00_1567;
BgL_arg2522z00_1566 = BGl_symbol4012z00zz__pregexpz00; 
BgL_arg2523z00_1567 = 
MAKE_PAIR(BgL_rez00_1461, BNIL); 
BgL_list2521z00_1565 = 
MAKE_PAIR(BgL_arg2522z00_1566, BgL_arg2523z00_1567); } 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol4011z00zz__pregexpz00, 
CAR(BgL_list2521z00_1565)); } 
BgL_backrefz00_1555 = BFALSE; } 
{ /* Llib/pregexp.scm 568 */

if(
CBOOL(BgL_backrefz00_1555))
{ /* Llib/pregexp.scm 576 */
obj_t BgL_arg2516z00_1556;
{ /* Llib/pregexp.scm 576 */
obj_t BgL_arg2518z00_1558;obj_t BgL_arg2519z00_1559;
{ /* Llib/pregexp.scm 576 */
obj_t BgL_pairz00_2998;
if(
PAIRP(BgL_backrefz00_1555))
{ /* Llib/pregexp.scm 576 */
BgL_pairz00_2998 = BgL_backrefz00_1555; }  else 
{ 
obj_t BgL_auxz00_7199;
BgL_auxz00_7199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22783)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_backrefz00_1555); 
FAILURE(BgL_auxz00_7199,BFALSE,BFALSE);} 
BgL_arg2518z00_1558 = 
CAR(BgL_pairz00_2998); } 
BgL_arg2519z00_1559 = 
CDR(BgL_backrefz00_1555); 
{ /* Llib/pregexp.scm 576 */
long BgL_auxz00_7221;long BgL_auxz00_7212;obj_t BgL_auxz00_7205;
{ /* Llib/pregexp.scm 576 */
obj_t BgL_auxz00_7222;
if(
INTEGERP(BgL_arg2519z00_1559))
{ /* Llib/pregexp.scm 576 */
BgL_auxz00_7222 = BgL_arg2519z00_1559
; }  else 
{ 
obj_t BgL_auxz00_7225;
BgL_auxz00_7225 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22765)), BGl_string3890z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_arg2519z00_1559); 
FAILURE(BgL_auxz00_7225,BFALSE,BFALSE);} 
BgL_auxz00_7221 = 
(long)CINT(BgL_auxz00_7222); } 
{ /* Llib/pregexp.scm 576 */
obj_t BgL_auxz00_7213;
if(
INTEGERP(BgL_arg2518z00_1558))
{ /* Llib/pregexp.scm 576 */
BgL_auxz00_7213 = BgL_arg2518z00_1558
; }  else 
{ 
obj_t BgL_auxz00_7216;
BgL_auxz00_7216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22765)), BGl_string3890z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_arg2518z00_1558); 
FAILURE(BgL_auxz00_7216,BFALSE,BFALSE);} 
BgL_auxz00_7212 = 
(long)CINT(BgL_auxz00_7213); } 
if(
STRINGP(BgL_sz00_3494))
{ /* Llib/pregexp.scm 576 */
BgL_auxz00_7205 = BgL_sz00_3494
; }  else 
{ 
obj_t BgL_auxz00_7208;
BgL_auxz00_7208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22765)), BGl_string3890z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_sz00_3494); 
FAILURE(BgL_auxz00_7208,BFALSE,BFALSE);} 
BgL_arg2516z00_1556 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_7205, BgL_auxz00_7212, BgL_auxz00_7221); } } 
{ /* Llib/pregexp.scm 577 */
obj_t BgL_zc3anonymousza32520ze3z83_3453;
{ 
int BgL_auxz00_7231;
BgL_auxz00_7231 = 
(int)(((long)1)); 
BgL_zc3anonymousza32520ze3z83_3453 = 
MAKE_EL_PROCEDURE_1(BgL_auxz00_7231); } 
PROCEDURE_1_EL_SET(BgL_zc3anonymousza32520ze3z83_3453, 
(int)(((long)0)), BgL_skz00_1463); 
return 
BGl_pregexpzd2stringzd2matchz00zz__pregexpz00(BgL_arg2516z00_1556, BgL_sz00_3494, BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489), BgL_zc3anonymousza32520ze3z83_3453, BgL_fkz00_1464);} }  else 
{ /* Llib/pregexp.scm 578 */
obj_t BgL_funz00_4265;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 578 */
BgL_funz00_4265 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_7239;
BgL_auxz00_7239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22887)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_7239,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4265, ((long)1)))
{ /* Llib/pregexp.scm 578 */
return 
PROCEDURE_ENTRY(BgL_funz00_4265)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 578 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4265);} } } } }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3889z00zz__pregexpz00))
{ /* Llib/pregexp.scm 580 */
obj_t BgL_arg2526z00_1570;
{ /* Llib/pregexp.scm 580 */
obj_t BgL_pairz00_3005;
{ /* Llib/pregexp.scm 580 */
obj_t BgL_aux3576z00_4268;
BgL_aux3576z00_4268 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3576z00_4268))
{ /* Llib/pregexp.scm 580 */
BgL_pairz00_3005 = BgL_aux3576z00_4268; }  else 
{ 
obj_t BgL_auxz00_7253;
BgL_auxz00_7253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22945)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3576z00_4268); 
FAILURE(BgL_auxz00_7253,BFALSE,BFALSE);} } 
BgL_arg2526z00_1570 = 
CAR(BgL_pairz00_3005); } 
{ /* Llib/pregexp.scm 582 */
obj_t BgL_zc3anonymousza32528ze3z83_3454;
BgL_zc3anonymousza32528ze3z83_3454 = 
make_fx_procedure(BGl_zc3anonymousza32528ze3z83zz__pregexpz00, 
(int)(((long)1)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3anonymousza32528ze3z83_3454, 
(int)(((long)0)), BgL_rez00_1461); 
PROCEDURE_SET(BgL_zc3anonymousza32528ze3z83_3454, 
(int)(((long)1)), BgL_backrefsz00_3493); 
PROCEDURE_SET(BgL_zc3anonymousza32528ze3z83_3454, 
(int)(((long)2)), BgL_iz00_1462); 
PROCEDURE_SET(BgL_zc3anonymousza32528ze3z83_3454, 
(int)(((long)3)), BgL_skz00_1463); 
{ 
obj_t BgL_skz00_7270;obj_t BgL_rez00_7269;
BgL_rez00_7269 = BgL_arg2526z00_1570; 
BgL_skz00_7270 = BgL_zc3anonymousza32528ze3z83_3454; 
BgL_skz00_1463 = BgL_skz00_7270; 
BgL_rez00_1461 = BgL_rez00_7269; 
goto BGl_subz00zz__pregexpz00;} } }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3897z00zz__pregexpz00))
{ /* Llib/pregexp.scm 585 */
obj_t BgL_foundzd2itzf3z21_1578;
{ /* Llib/pregexp.scm 586 */
obj_t BgL_arg2532z00_1579;
{ /* Llib/pregexp.scm 586 */
obj_t BgL_pairz00_3013;
{ /* Llib/pregexp.scm 586 */
obj_t BgL_aux3578z00_4270;
BgL_aux3578z00_4270 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3578z00_4270))
{ /* Llib/pregexp.scm 586 */
BgL_pairz00_3013 = BgL_aux3578z00_4270; }  else 
{ 
obj_t BgL_auxz00_7276;
BgL_auxz00_7276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23197)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3578z00_4270); 
FAILURE(BgL_auxz00_7276,BFALSE,BFALSE);} } 
BgL_arg2532z00_1579 = 
CAR(BgL_pairz00_3013); } 
BgL_foundzd2itzf3z21_1578 = 
BGl_subz00zz__pregexpz00(BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, BgL_arg2532z00_1579, BgL_iz00_1462, BgL_identityz00_3491, BGl_proc4014z00zz__pregexpz00); } 
if(
CBOOL(BgL_foundzd2itzf3z21_1578))
{ /* Llib/pregexp.scm 588 */
obj_t BgL_funz00_4274;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 588 */
BgL_funz00_4274 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_7286;
BgL_auxz00_7286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23301)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_7286,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4274, ((long)1)))
{ /* Llib/pregexp.scm 588 */
return 
PROCEDURE_ENTRY(BgL_funz00_4274)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 588 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4274);} }  else 
{ /* Llib/pregexp.scm 588 */
obj_t BgL_funz00_4279;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 588 */
BgL_funz00_4279 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7297;
BgL_auxz00_7297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23308)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7297,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4279, ((long)0)))
{ /* Llib/pregexp.scm 588 */
return 
PROCEDURE_ENTRY(BgL_funz00_4279)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 588 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4279);} } }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3900z00zz__pregexpz00))
{ /* Llib/pregexp.scm 590 */
obj_t BgL_foundzd2itzf3z21_1584;
{ /* Llib/pregexp.scm 591 */
obj_t BgL_arg2536z00_1585;
{ /* Llib/pregexp.scm 591 */
obj_t BgL_pairz00_3019;
{ /* Llib/pregexp.scm 591 */
obj_t BgL_aux3588z00_4282;
BgL_aux3588z00_4282 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3588z00_4282))
{ /* Llib/pregexp.scm 591 */
BgL_pairz00_3019 = BgL_aux3588z00_4282; }  else 
{ 
obj_t BgL_auxz00_7311;
BgL_auxz00_7311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23417)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3588z00_4282); 
FAILURE(BgL_auxz00_7311,BFALSE,BFALSE);} } 
BgL_arg2536z00_1585 = 
CAR(BgL_pairz00_3019); } 
BgL_foundzd2itzf3z21_1584 = 
BGl_subz00zz__pregexpz00(BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, BgL_arg2536z00_1585, BgL_iz00_1462, BgL_identityz00_3491, BGl_proc4015z00zz__pregexpz00); } 
if(
CBOOL(BgL_foundzd2itzf3z21_1584))
{ /* Llib/pregexp.scm 593 */
obj_t BgL_funz00_4286;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 593 */
BgL_funz00_4286 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7321;
BgL_auxz00_7321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23521)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7321,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4286, ((long)0)))
{ /* Llib/pregexp.scm 593 */
return 
PROCEDURE_ENTRY(BgL_funz00_4286)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 593 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4286);} }  else 
{ /* Llib/pregexp.scm 593 */
obj_t BgL_funz00_4291;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 593 */
BgL_funz00_4291 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_7332;
BgL_auxz00_7332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23526)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_7332,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4291, ((long)1)))
{ /* Llib/pregexp.scm 593 */
return 
PROCEDURE_ENTRY(BgL_funz00_4291)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 593 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4291);} } }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3906z00zz__pregexpz00))
{ /* Llib/pregexp.scm 595 */
obj_t BgL_nzd2actualzd2_1590;obj_t BgL_snzd2actualzd2_1591;
BgL_nzd2actualzd2_1590 = 
CELL_REF(BgL_nz00_3489); 
BgL_snzd2actualzd2_1591 = 
CELL_REF(BgL_snz00_3492); 
CELL_SET(BgL_nz00_3489, BgL_iz00_1462); 
CELL_SET(BgL_snz00_3492, BgL_iz00_1462); 
{ /* Llib/pregexp.scm 597 */
obj_t BgL_foundzd2itzf3z21_1592;
{ /* Llib/pregexp.scm 598 */
obj_t BgL_arg2540z00_1593;
{ /* Llib/pregexp.scm 598 */
obj_t BgL_arg2543z00_1596;obj_t BgL_arg2544z00_1597;obj_t BgL_arg2545z00_1598;obj_t BgL_arg2546z00_1599;
BgL_arg2543z00_1596 = BGl_keyword3847z00zz__pregexpz00; 
BgL_arg2544z00_1597 = BGl_list4016z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 599 */
obj_t BgL_pairz00_3025;
{ /* Llib/pregexp.scm 599 */
obj_t BgL_aux3598z00_4294;
BgL_aux3598z00_4294 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3598z00_4294))
{ /* Llib/pregexp.scm 599 */
BgL_pairz00_3025 = BgL_aux3598z00_4294; }  else 
{ 
obj_t BgL_auxz00_7346;
BgL_auxz00_7346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23811)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3598z00_4294); 
FAILURE(BgL_auxz00_7346,BFALSE,BFALSE);} } 
BgL_arg2545z00_1598 = 
CAR(BgL_pairz00_3025); } 
BgL_arg2546z00_1599 = BGl_keyword3857z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 598 */
obj_t BgL_list2547z00_1600;
{ /* Llib/pregexp.scm 598 */
obj_t BgL_arg2548z00_1601;
{ /* Llib/pregexp.scm 598 */
obj_t BgL_arg2549z00_1602;
{ /* Llib/pregexp.scm 598 */
obj_t BgL_arg2550z00_1603;
BgL_arg2550z00_1603 = 
MAKE_PAIR(BgL_arg2546z00_1599, BNIL); 
BgL_arg2549z00_1602 = 
MAKE_PAIR(BgL_arg2545z00_1598, BgL_arg2550z00_1603); } 
BgL_arg2548z00_1601 = 
MAKE_PAIR(BgL_arg2544z00_1597, BgL_arg2549z00_1602); } 
BgL_list2547z00_1600 = 
MAKE_PAIR(BgL_arg2543z00_1596, BgL_arg2548z00_1601); } 
BgL_arg2540z00_1593 = BgL_list2547z00_1600; } } 
BgL_foundzd2itzf3z21_1592 = 
BGl_subz00zz__pregexpz00(BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, BgL_arg2540z00_1593, 
BINT(((long)0)), BgL_identityz00_3491, BGl_proc4017z00zz__pregexpz00); } 
CELL_SET(BgL_nz00_3489, BgL_nzd2actualzd2_1590); 
CELL_SET(BgL_snz00_3492, BgL_snzd2actualzd2_1591); 
if(
CBOOL(BgL_foundzd2itzf3z21_1592))
{ /* Llib/pregexp.scm 602 */
obj_t BgL_funz00_4298;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 602 */
BgL_funz00_4298 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_7361;
BgL_auxz00_7361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23987)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_7361,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4298, ((long)1)))
{ /* Llib/pregexp.scm 602 */
return 
PROCEDURE_ENTRY(BgL_funz00_4298)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 602 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4298);} }  else 
{ /* Llib/pregexp.scm 602 */
obj_t BgL_funz00_4303;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 602 */
BgL_funz00_4303 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7372;
BgL_auxz00_7372 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23994)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7372,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4303, ((long)0)))
{ /* Llib/pregexp.scm 602 */
return 
PROCEDURE_ENTRY(BgL_funz00_4303)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 602 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4303);} } } }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3909z00zz__pregexpz00))
{ /* Llib/pregexp.scm 604 */
obj_t BgL_nzd2actualzd2_1607;obj_t BgL_snzd2actualzd2_1608;
BgL_nzd2actualzd2_1607 = 
CELL_REF(BgL_nz00_3489); 
BgL_snzd2actualzd2_1608 = 
CELL_REF(BgL_snz00_3492); 
CELL_SET(BgL_nz00_3489, BgL_iz00_1462); 
CELL_SET(BgL_snz00_3492, BgL_iz00_1462); 
{ /* Llib/pregexp.scm 606 */
obj_t BgL_foundzd2itzf3z21_1609;
{ /* Llib/pregexp.scm 607 */
obj_t BgL_arg2553z00_1610;
{ /* Llib/pregexp.scm 607 */
obj_t BgL_arg2556z00_1613;obj_t BgL_arg2557z00_1614;obj_t BgL_arg2558z00_1615;obj_t BgL_arg2559z00_1616;
BgL_arg2556z00_1613 = BGl_keyword3847z00zz__pregexpz00; 
BgL_arg2557z00_1614 = BGl_list4016z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 608 */
obj_t BgL_pairz00_3033;
{ /* Llib/pregexp.scm 608 */
obj_t BgL_aux3608z00_4306;
BgL_aux3608z00_4306 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3608z00_4306))
{ /* Llib/pregexp.scm 608 */
BgL_pairz00_3033 = BgL_aux3608z00_4306; }  else 
{ 
obj_t BgL_auxz00_7386;
BgL_auxz00_7386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)24282)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3608z00_4306); 
FAILURE(BgL_auxz00_7386,BFALSE,BFALSE);} } 
BgL_arg2558z00_1615 = 
CAR(BgL_pairz00_3033); } 
BgL_arg2559z00_1616 = BGl_keyword3857z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 607 */
obj_t BgL_list2560z00_1617;
{ /* Llib/pregexp.scm 607 */
obj_t BgL_arg2561z00_1618;
{ /* Llib/pregexp.scm 607 */
obj_t BgL_arg2562z00_1619;
{ /* Llib/pregexp.scm 607 */
obj_t BgL_arg2563z00_1620;
BgL_arg2563z00_1620 = 
MAKE_PAIR(BgL_arg2559z00_1616, BNIL); 
BgL_arg2562z00_1619 = 
MAKE_PAIR(BgL_arg2558z00_1615, BgL_arg2563z00_1620); } 
BgL_arg2561z00_1618 = 
MAKE_PAIR(BgL_arg2557z00_1614, BgL_arg2562z00_1619); } 
BgL_list2560z00_1617 = 
MAKE_PAIR(BgL_arg2556z00_1613, BgL_arg2561z00_1618); } 
BgL_arg2553z00_1610 = BgL_list2560z00_1617; } } 
BgL_foundzd2itzf3z21_1609 = 
BGl_subz00zz__pregexpz00(BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, BgL_arg2553z00_1610, 
BINT(((long)0)), BgL_identityz00_3491, BGl_proc4018z00zz__pregexpz00); } 
CELL_SET(BgL_nz00_3489, BgL_nzd2actualzd2_1607); 
CELL_SET(BgL_snz00_3492, BgL_snzd2actualzd2_1608); 
if(
CBOOL(BgL_foundzd2itzf3z21_1609))
{ /* Llib/pregexp.scm 611 */
obj_t BgL_funz00_4310;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 611 */
BgL_funz00_4310 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7401;
BgL_auxz00_7401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)24457)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7401,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4310, ((long)0)))
{ /* Llib/pregexp.scm 611 */
return 
PROCEDURE_ENTRY(BgL_funz00_4310)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 611 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4310);} }  else 
{ /* Llib/pregexp.scm 611 */
obj_t BgL_funz00_4315;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 611 */
BgL_funz00_4315 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_7412;
BgL_auxz00_7412 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)24462)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_7412,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4315, ((long)1)))
{ /* Llib/pregexp.scm 611 */
return 
PROCEDURE_ENTRY(BgL_funz00_4315)(BgL_skz00_1463, BgL_iz00_1462, BEOA);}  else 
{ /* Llib/pregexp.scm 611 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4315);} } } }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3903z00zz__pregexpz00))
{ /* Llib/pregexp.scm 613 */
obj_t BgL_foundzd2itzf3z21_1624;
{ /* Llib/pregexp.scm 613 */
obj_t BgL_arg2566z00_1625;
{ /* Llib/pregexp.scm 613 */
obj_t BgL_pairz00_3041;
{ /* Llib/pregexp.scm 613 */
obj_t BgL_aux3618z00_4318;
BgL_aux3618z00_4318 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3618z00_4318))
{ /* Llib/pregexp.scm 613 */
BgL_pairz00_3041 = BgL_aux3618z00_4318; }  else 
{ 
obj_t BgL_auxz00_7426;
BgL_auxz00_7426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)24547)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3618z00_4318); 
FAILURE(BgL_auxz00_7426,BFALSE,BFALSE);} } 
BgL_arg2566z00_1625 = 
CAR(BgL_pairz00_3041); } 
BgL_foundzd2itzf3z21_1624 = 
BGl_subz00zz__pregexpz00(BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, BgL_arg2566z00_1625, BgL_iz00_1462, BgL_identityz00_3491, BGl_proc4019z00zz__pregexpz00); } 
if(
CBOOL(BgL_foundzd2itzf3z21_1624))
{ /* Llib/pregexp.scm 616 */
obj_t BgL_funz00_4322;
if(
PROCEDUREP(BgL_skz00_1463))
{ /* Llib/pregexp.scm 616 */
BgL_funz00_4322 = BgL_skz00_1463; }  else 
{ 
obj_t BgL_auxz00_7436;
BgL_auxz00_7436 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)24684)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_1463); 
FAILURE(BgL_auxz00_7436,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4322, ((long)1)))
{ /* Llib/pregexp.scm 616 */
return 
PROCEDURE_ENTRY(BgL_funz00_4322)(BgL_skz00_1463, BgL_foundzd2itzf3z21_1624, BEOA);}  else 
{ /* Llib/pregexp.scm 616 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list4020z00zz__pregexpz00,BgL_funz00_4322);} }  else 
{ /* Llib/pregexp.scm 617 */
obj_t BgL_funz00_4327;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 617 */
BgL_funz00_4327 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7447;
BgL_auxz00_7447 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)24724)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7447,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4327, ((long)0)))
{ /* Llib/pregexp.scm 617 */
return 
PROCEDURE_ENTRY(BgL_funz00_4327)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 617 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4327);} } }  else 
{ /* Llib/pregexp.scm 535 */
bool_t BgL_testz00_7456;
{ /* Llib/pregexp.scm 535 */
bool_t BgL__ortest_1896z00_1689;
BgL__ortest_1896z00_1689 = 
(BgL_casezd2valuezd2_1493==BGl_keyword3892z00zz__pregexpz00); 
if(BgL__ortest_1896z00_1689)
{ /* Llib/pregexp.scm 535 */
BgL_testz00_7456 = BgL__ortest_1896z00_1689
; }  else 
{ /* Llib/pregexp.scm 535 */
BgL_testz00_7456 = 
(BgL_casezd2valuezd2_1493==BGl_keyword3894z00zz__pregexpz00)
; } } 
if(BgL_testz00_7456)
{ /* Llib/pregexp.scm 619 */
obj_t BgL_oldz00_1630;
BgL_oldz00_1630 = 
CELL_REF(BgL_casezd2sensitivezf3z21_3490); 
{ /* Llib/pregexp.scm 620 */
obj_t BgL_auxz00_3504;
BgL_auxz00_3504 = 
BBOOL(
(BgL_casezd2valuezd2_1493==BGl_keyword3892z00zz__pregexpz00)); 
CELL_SET(BgL_casezd2sensitivezf3z21_3490, BgL_auxz00_3504); } 
{ /* Llib/pregexp.scm 622 */
obj_t BgL_arg2573z00_1633;
{ /* Llib/pregexp.scm 622 */
obj_t BgL_pairz00_3048;
{ /* Llib/pregexp.scm 622 */
obj_t BgL_aux3628z00_4330;
BgL_aux3628z00_4330 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3628z00_4330))
{ /* Llib/pregexp.scm 622 */
BgL_pairz00_3048 = BgL_aux3628z00_4330; }  else 
{ 
obj_t BgL_auxz00_7465;
BgL_auxz00_7465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)24956)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3628z00_4330); 
FAILURE(BgL_auxz00_7465,BFALSE,BFALSE);} } 
BgL_arg2573z00_1633 = 
CAR(BgL_pairz00_3048); } 
{ /* Llib/pregexp.scm 624 */
obj_t BgL_zc3anonymousza32576ze3z83_3462;obj_t BgL_zc3anonymousza32577ze3z83_3461;
BgL_zc3anonymousza32576ze3z83_3462 = 
make_fx_procedure(BGl_zc3anonymousza32576ze3z83zz__pregexpz00, 
(int)(((long)1)), 
(int)(((long)3))); 
BgL_zc3anonymousza32577ze3z83_3461 = 
make_fx_procedure(BGl_zc3anonymousza32577ze3z83zz__pregexpz00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3anonymousza32576ze3z83_3462, 
(int)(((long)0)), BgL_oldz00_1630); 
PROCEDURE_SET(BgL_zc3anonymousza32576ze3z83_3462, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3490); 
PROCEDURE_SET(BgL_zc3anonymousza32576ze3z83_3462, 
(int)(((long)2)), BgL_skz00_1463); 
PROCEDURE_SET(BgL_zc3anonymousza32577ze3z83_3461, 
(int)(((long)0)), BgL_oldz00_1630); 
PROCEDURE_SET(BgL_zc3anonymousza32577ze3z83_3461, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3490); 
PROCEDURE_SET(BgL_zc3anonymousza32577ze3z83_3461, 
(int)(((long)2)), BgL_fkz00_1464); 
{ 
obj_t BgL_fkz00_7490;obj_t BgL_skz00_7489;obj_t BgL_rez00_7488;
BgL_rez00_7488 = BgL_arg2573z00_1633; 
BgL_skz00_7489 = BgL_zc3anonymousza32576ze3z83_3462; 
BgL_fkz00_7490 = BgL_zc3anonymousza32577ze3z83_3461; 
BgL_fkz00_1464 = BgL_fkz00_7490; 
BgL_skz00_1463 = BgL_skz00_7489; 
BgL_rez00_1461 = BgL_rez00_7488; 
goto BGl_subz00zz__pregexpz00;} } } }  else 
{ /* Llib/pregexp.scm 535 */
if(
(BgL_casezd2valuezd2_1493==BGl_keyword3914z00zz__pregexpz00))
{ /* Llib/pregexp.scm 630 */
bool_t BgL_maximalzf3zf3_1642;
{ /* Llib/pregexp.scm 630 */
bool_t BgL_testz00_7493;
{ /* Llib/pregexp.scm 630 */
obj_t BgL_pairz00_3054;
{ /* Llib/pregexp.scm 630 */
obj_t BgL_aux3630z00_4332;
BgL_aux3630z00_4332 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3630z00_4332))
{ /* Llib/pregexp.scm 630 */
BgL_pairz00_3054 = BgL_aux3630z00_4332; }  else 
{ 
obj_t BgL_auxz00_7497;
BgL_auxz00_7497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25292)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3630z00_4332); 
FAILURE(BgL_auxz00_7497,BFALSE,BFALSE);} } 
BgL_testz00_7493 = 
CBOOL(
CAR(BgL_pairz00_3054)); } 
if(BgL_testz00_7493)
{ /* Llib/pregexp.scm 630 */
BgL_maximalzf3zf3_1642 = ((bool_t)0); }  else 
{ /* Llib/pregexp.scm 630 */
BgL_maximalzf3zf3_1642 = ((bool_t)1); } } 
{ /* Llib/pregexp.scm 630 */
obj_t BgL_pz00_1643;
{ /* Llib/pregexp.scm 631 */
obj_t BgL_pairz00_3060;
{ /* Llib/pregexp.scm 631 */
obj_t BgL_pairz00_3059;
{ /* Llib/pregexp.scm 631 */
obj_t BgL_aux3632z00_4334;
BgL_aux3632z00_4334 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3632z00_4334))
{ /* Llib/pregexp.scm 631 */
BgL_pairz00_3059 = BgL_aux3632z00_4334; }  else 
{ 
obj_t BgL_auxz00_7506;
BgL_auxz00_7506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25332)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3632z00_4334); 
FAILURE(BgL_auxz00_7506,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 631 */
obj_t BgL_aux3634z00_4336;
BgL_aux3634z00_4336 = 
CDR(BgL_pairz00_3059); 
if(
PAIRP(BgL_aux3634z00_4336))
{ /* Llib/pregexp.scm 631 */
BgL_pairz00_3060 = BgL_aux3634z00_4336; }  else 
{ 
obj_t BgL_auxz00_7513;
BgL_auxz00_7513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25332)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3634z00_4336); 
FAILURE(BgL_auxz00_7513,BFALSE,BFALSE);} } } 
BgL_pz00_1643 = 
CAR(BgL_pairz00_3060); } 
{ /* Llib/pregexp.scm 631 */
obj_t BgL_qz00_1644;
{ /* Llib/pregexp.scm 632 */
obj_t BgL_pairz00_3068;
{ /* Llib/pregexp.scm 632 */
obj_t BgL_pairz00_3067;
{ /* Llib/pregexp.scm 632 */
obj_t BgL_pairz00_3066;
{ /* Llib/pregexp.scm 632 */
obj_t BgL_aux3636z00_4338;
BgL_aux3636z00_4338 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3636z00_4338))
{ /* Llib/pregexp.scm 632 */
BgL_pairz00_3066 = BgL_aux3636z00_4338; }  else 
{ 
obj_t BgL_auxz00_7521;
BgL_auxz00_7521 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25373)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3636z00_4338); 
FAILURE(BgL_auxz00_7521,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 632 */
obj_t BgL_aux3638z00_4340;
BgL_aux3638z00_4340 = 
CDR(BgL_pairz00_3066); 
if(
PAIRP(BgL_aux3638z00_4340))
{ /* Llib/pregexp.scm 632 */
BgL_pairz00_3067 = BgL_aux3638z00_4340; }  else 
{ 
obj_t BgL_auxz00_7528;
BgL_auxz00_7528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25373)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3638z00_4340); 
FAILURE(BgL_auxz00_7528,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 632 */
obj_t BgL_aux3640z00_4342;
BgL_aux3640z00_4342 = 
CDR(BgL_pairz00_3067); 
if(
PAIRP(BgL_aux3640z00_4342))
{ /* Llib/pregexp.scm 632 */
BgL_pairz00_3068 = BgL_aux3640z00_4342; }  else 
{ 
obj_t BgL_auxz00_7535;
BgL_auxz00_7535 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25373)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3640z00_4342); 
FAILURE(BgL_auxz00_7535,BFALSE,BFALSE);} } } 
BgL_qz00_1644 = 
CAR(BgL_pairz00_3068); } 
{ /* Llib/pregexp.scm 632 */
bool_t BgL_couldzd2loopzd2infinitelyzf3zf3_1645;
if(BgL_maximalzf3zf3_1642)
{ /* Llib/pregexp.scm 633 */
if(
CBOOL(BgL_qz00_1644))
{ /* Llib/pregexp.scm 633 */
BgL_couldzd2loopzd2infinitelyzf3zf3_1645 = ((bool_t)0); }  else 
{ /* Llib/pregexp.scm 633 */
BgL_couldzd2loopzd2infinitelyzf3zf3_1645 = ((bool_t)1); } }  else 
{ /* Llib/pregexp.scm 633 */
BgL_couldzd2loopzd2infinitelyzf3zf3_1645 = ((bool_t)0); } 
{ /* Llib/pregexp.scm 633 */
obj_t BgL_rez00_1646;
{ /* Llib/pregexp.scm 634 */
obj_t BgL_pairz00_3077;
{ /* Llib/pregexp.scm 634 */
obj_t BgL_pairz00_3076;
{ /* Llib/pregexp.scm 634 */
obj_t BgL_pairz00_3075;
{ /* Llib/pregexp.scm 634 */
obj_t BgL_pairz00_3074;
{ /* Llib/pregexp.scm 634 */
obj_t BgL_aux3642z00_4344;
BgL_aux3642z00_4344 = 
CDR(BgL_rez00_1461); 
if(
PAIRP(BgL_aux3642z00_4344))
{ /* Llib/pregexp.scm 634 */
BgL_pairz00_3074 = BgL_aux3642z00_4344; }  else 
{ 
obj_t BgL_auxz00_7546;
BgL_auxz00_7546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25493)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3642z00_4344); 
FAILURE(BgL_auxz00_7546,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 634 */
obj_t BgL_aux3644z00_4346;
BgL_aux3644z00_4346 = 
CDR(BgL_pairz00_3074); 
if(
PAIRP(BgL_aux3644z00_4346))
{ /* Llib/pregexp.scm 634 */
BgL_pairz00_3075 = BgL_aux3644z00_4346; }  else 
{ 
obj_t BgL_auxz00_7553;
BgL_auxz00_7553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25493)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3644z00_4346); 
FAILURE(BgL_auxz00_7553,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 634 */
obj_t BgL_aux3646z00_4348;
BgL_aux3646z00_4348 = 
CDR(BgL_pairz00_3075); 
if(
PAIRP(BgL_aux3646z00_4348))
{ /* Llib/pregexp.scm 634 */
BgL_pairz00_3076 = BgL_aux3646z00_4348; }  else 
{ 
obj_t BgL_auxz00_7560;
BgL_auxz00_7560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25493)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3646z00_4348); 
FAILURE(BgL_auxz00_7560,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 634 */
obj_t BgL_aux3648z00_4350;
BgL_aux3648z00_4350 = 
CDR(BgL_pairz00_3076); 
if(
PAIRP(BgL_aux3648z00_4350))
{ /* Llib/pregexp.scm 634 */
BgL_pairz00_3077 = BgL_aux3648z00_4350; }  else 
{ 
obj_t BgL_auxz00_7567;
BgL_auxz00_7567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25493)), BGl_string3890z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3648z00_4350); 
FAILURE(BgL_auxz00_7567,BFALSE,BFALSE);} } } 
BgL_rez00_1646 = 
CAR(BgL_pairz00_3077); } 
{ /* Llib/pregexp.scm 634 */

return 
BGl_loupzd2pzd2zz__pregexpz00(BgL_fkz00_1464, BgL_rez00_1646, 
BBOOL(BgL_couldzd2loopzd2infinitelyzf3zf3_1645), BgL_pz00_1643, BgL_qz00_1644, 
BBOOL(BgL_maximalzf3zf3_1642), BgL_skz00_1463, BgL_startz00_3495, BgL_sz00_3494, BgL_backrefsz00_3493, BgL_snz00_3492, BgL_identityz00_3491, BgL_casezd2sensitivezf3z21_3490, BgL_nz00_3489, 
BINT(((long)0)), BgL_iz00_1462);} } } } } }  else 
{ /* Llib/pregexp.scm 535 */
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol4011z00zz__pregexpz00, BUNSPEC);} } } } } } } } } } } } } } }  else 
{ /* Llib/pregexp.scm 534 */
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, 
CELL_REF(BgL_nz00_3489)))
{ /* Llib/pregexp.scm 668 */
obj_t BgL_funz00_4354;
if(
PROCEDUREP(BgL_fkz00_1464))
{ /* Llib/pregexp.scm 668 */
BgL_funz00_4354 = BgL_fkz00_1464; }  else 
{ 
obj_t BgL_auxz00_7581;
BgL_auxz00_7581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27472)), BGl_string3890z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_1464); 
FAILURE(BgL_auxz00_7581,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4354, ((long)0)))
{ /* Llib/pregexp.scm 668 */
return 
PROCEDURE_ENTRY(BgL_funz00_4354)(BgL_fkz00_1464, BEOA);}  else 
{ /* Llib/pregexp.scm 668 */
FAILURE(BGl_string3979z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4354);} }  else 
{ /* Llib/pregexp.scm 668 */
return 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol4011z00zz__pregexpz00, BUNSPEC);} } } } } } } } } } } 
}



/* loup-seq */
obj_t BGl_loupzd2seqzd2zz__pregexpz00(obj_t BgL_skz00_3513, obj_t BgL_fkz00_3512, obj_t BgL_startz00_3511, obj_t BgL_sz00_3510, obj_t BgL_backrefsz00_3509, obj_t BgL_snz00_3508, obj_t BgL_identityz00_3507, obj_t BgL_casezd2sensitivezf3z21_3506, obj_t BgL_nz00_3505, obj_t BgL_resz00_1524, obj_t BgL_iz00_1525)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 552 */
if(
NULLP(BgL_resz00_1524))
{ /* Llib/pregexp.scm 553 */
obj_t BgL_funz00_4359;
if(
PROCEDUREP(BgL_skz00_3513))
{ /* Llib/pregexp.scm 553 */
BgL_funz00_4359 = BgL_skz00_3513; }  else 
{ 
obj_t BgL_auxz00_7595;
BgL_auxz00_7595 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21700)), BGl_string4023z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3513); 
FAILURE(BgL_auxz00_7595,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4359, ((long)1)))
{ /* Llib/pregexp.scm 553 */
return 
PROCEDURE_ENTRY(BgL_funz00_4359)(BgL_skz00_3513, BgL_iz00_1525, BEOA);}  else 
{ /* Llib/pregexp.scm 553 */
FAILURE(BGl_string4024z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4359);} }  else 
{ /* Llib/pregexp.scm 554 */
obj_t BgL_arg2501z00_1528;
{ /* Llib/pregexp.scm 554 */
obj_t BgL_pairz00_2971;
if(
PAIRP(BgL_resz00_1524))
{ /* Llib/pregexp.scm 554 */
BgL_pairz00_2971 = BgL_resz00_1524; }  else 
{ 
obj_t BgL_auxz00_7606;
BgL_auxz00_7606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21742)), BGl_string4023z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_resz00_1524); 
FAILURE(BgL_auxz00_7606,BFALSE,BFALSE);} 
BgL_arg2501z00_1528 = 
CAR(BgL_pairz00_2971); } 
{ /* Llib/pregexp.scm 556 */
obj_t BgL_zc3anonymousza32503ze3z83_3440;
BgL_zc3anonymousza32503ze3z83_3440 = 
make_fx_procedure(BGl_zc3anonymousza32503ze3z83zz__pregexpz00, 
(int)(((long)1)), 
(int)(((long)10))); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)0)), BgL_nz00_3505); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3506); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)2)), BgL_identityz00_3507); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)3)), BgL_snz00_3508); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)4)), BgL_backrefsz00_3509); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)5)), BgL_sz00_3510); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)6)), BgL_startz00_3511); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)7)), BgL_fkz00_3512); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)8)), BgL_skz00_3513); 
PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3440, 
(int)(((long)9)), BgL_resz00_1524); 
return 
BGl_subz00zz__pregexpz00(BgL_startz00_3511, BgL_sz00_3510, BgL_backrefsz00_3509, BgL_snz00_3508, BgL_identityz00_3507, BgL_casezd2sensitivezf3z21_3506, BgL_nz00_3505, BgL_arg2501z00_1528, BgL_iz00_1525, BgL_zc3anonymousza32503ze3z83_3440, BgL_fkz00_3512);} } } 
}



/* loup-or */
obj_t BGl_loupzd2orzd2zz__pregexpz00(obj_t BgL_fkz00_3523, obj_t BgL_iz00_3522, obj_t BgL_skz00_3521, obj_t BgL_startz00_3520, obj_t BgL_sz00_3519, obj_t BgL_backrefsz00_3518, obj_t BgL_snz00_3517, obj_t BgL_identityz00_3516, obj_t BgL_casezd2sensitivezf3z21_3515, obj_t BgL_nz00_3514, obj_t BgL_resz00_1538)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 559 */
if(
NULLP(BgL_resz00_1538))
{ /* Llib/pregexp.scm 560 */
obj_t BgL_funz00_4366;
if(
PROCEDUREP(BgL_fkz00_3523))
{ /* Llib/pregexp.scm 560 */
BgL_funz00_4366 = BgL_fkz00_3523; }  else 
{ 
obj_t BgL_auxz00_7639;
BgL_auxz00_7639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21994)), BGl_string4025z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_3523); 
FAILURE(BgL_auxz00_7639,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4366, ((long)0)))
{ /* Llib/pregexp.scm 560 */
return 
PROCEDURE_ENTRY(BgL_funz00_4366)(BgL_fkz00_3523, BEOA);}  else 
{ /* Llib/pregexp.scm 560 */
FAILURE(BGl_string4026z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4366);} }  else 
{ /* Llib/pregexp.scm 561 */
obj_t BgL_arg2508z00_1541;
{ /* Llib/pregexp.scm 561 */
obj_t BgL_pairz00_2978;
if(
PAIRP(BgL_resz00_1538))
{ /* Llib/pregexp.scm 561 */
BgL_pairz00_2978 = BgL_resz00_1538; }  else 
{ 
obj_t BgL_auxz00_7650;
BgL_auxz00_7650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22033)), BGl_string4025z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_resz00_1538); 
FAILURE(BgL_auxz00_7650,BFALSE,BFALSE);} 
BgL_arg2508z00_1541 = 
CAR(BgL_pairz00_2978); } 
{ /* Llib/pregexp.scm 563 */
obj_t BgL_zc3anonymousza32511ze3z83_3443;obj_t BgL_zc3anonymousza32513ze3z83_3442;
BgL_zc3anonymousza32511ze3z83_3443 = 
make_fx_procedure(BGl_zc3anonymousza32511ze3z83zz__pregexpz00, 
(int)(((long)1)), 
(int)(((long)11))); 
BgL_zc3anonymousza32513ze3z83_3442 = 
make_fx_procedure(BGl_zc3anonymousza32513ze3z83zz__pregexpz00, 
(int)(((long)0)), 
(int)(((long)11))); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)0)), BgL_nz00_3514); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3515); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)2)), BgL_identityz00_3516); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)3)), BgL_snz00_3517); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)4)), BgL_backrefsz00_3518); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)5)), BgL_sz00_3519); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)6)), BgL_startz00_3520); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)7)), BgL_iz00_3522); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)8)), BgL_fkz00_3523); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)9)), BgL_skz00_3521); 
PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3443, 
(int)(((long)10)), BgL_resz00_1538); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)0)), BgL_nz00_3514); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3515); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)2)), BgL_identityz00_3516); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)3)), BgL_snz00_3517); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)4)), BgL_backrefsz00_3518); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)5)), BgL_sz00_3519); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)6)), BgL_startz00_3520); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)7)), BgL_skz00_3521); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)8)), BgL_iz00_3522); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)9)), BgL_fkz00_3523); 
PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3442, 
(int)(((long)10)), BgL_resz00_1538); 
return 
BGl_subz00zz__pregexpz00(BgL_startz00_3520, BgL_sz00_3519, BgL_backrefsz00_3518, BgL_snz00_3517, BgL_identityz00_3516, BgL_casezd2sensitivezf3z21_3515, BgL_nz00_3514, BgL_arg2508z00_1541, BgL_iz00_3522, BgL_zc3anonymousza32511ze3z83_3443, BgL_zc3anonymousza32513ze3z83_3442);} } } 
}



/* loup-p */
obj_t BGl_loupzd2pzd2zz__pregexpz00(obj_t BgL_fkz00_3537, obj_t BgL_rez00_3536, obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3535, obj_t BgL_pz00_3534, obj_t BgL_qz00_3533, obj_t BgL_maximalzf3zf3_3532, obj_t BgL_skz00_3531, obj_t BgL_startz00_3530, obj_t BgL_sz00_3529, obj_t BgL_backrefsz00_3528, obj_t BgL_snz00_3527, obj_t BgL_identityz00_3526, obj_t BgL_casezd2sensitivezf3z21_3525, obj_t BgL_nz00_3524, obj_t BgL_kz00_1648, obj_t BgL_iz00_1649)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 635 */
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_kz00_1648, BgL_pz00_3534))
{ /* Llib/pregexp.scm 639 */
obj_t BgL_zc3anonymousza32582ze3z83_3449;
BgL_zc3anonymousza32582ze3z83_3449 = 
make_fx_procedure(BGl_zc3anonymousza32582ze3z83zz__pregexpz00, 
(int)(((long)1)), 
(int)(((long)16))); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)0)), BgL_nz00_3524); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3525); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)2)), BgL_identityz00_3526); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)3)), BgL_snz00_3527); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)4)), BgL_backrefsz00_3528); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)5)), BgL_sz00_3529); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)6)), BgL_startz00_3530); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)7)), BgL_skz00_3531); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)8)), BgL_maximalzf3zf3_3532); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)9)), BgL_qz00_3533); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)10)), BgL_pz00_3534); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)11)), BgL_rez00_3536); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)12)), BgL_fkz00_3537); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)13)), BgL_iz00_1649); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)14)), BgL_couldzd2loopzd2infinitelyzf3zf3_3535); 
PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3449, 
(int)(((long)15)), BgL_kz00_1648); 
return 
BGl_subz00zz__pregexpz00(BgL_startz00_3530, BgL_sz00_3529, BgL_backrefsz00_3528, BgL_snz00_3527, BgL_identityz00_3526, BgL_casezd2sensitivezf3z21_3525, BgL_nz00_3524, BgL_rez00_3536, BgL_iz00_1649, BgL_zc3anonymousza32582ze3z83_3449, BgL_fkz00_3537);}  else 
{ /* Llib/pregexp.scm 646 */
obj_t BgL_qz00_1659;
if(
CBOOL(BgL_qz00_3533))
{ /* Llib/pregexp.scm 646 */
BgL_qz00_1659 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_qz00_3533, BgL_pz00_3534); }  else 
{ /* Llib/pregexp.scm 646 */
BgL_qz00_1659 = BFALSE; } 
return 
BGl_loupzd2qzd2zz__pregexpz00(BgL_qz00_1659, BgL_maximalzf3zf3_3532, BgL_couldzd2loopzd2infinitelyzf3zf3_3535, BgL_rez00_3536, BgL_skz00_3531, BgL_startz00_3530, BgL_sz00_3529, BgL_backrefsz00_3528, BgL_snz00_3527, BgL_identityz00_3526, BgL_casezd2sensitivezf3z21_3525, BgL_nz00_3524, 
BINT(((long)0)), BgL_iz00_1649);} } 
}



/* loup-q */
obj_t BGl_loupzd2qzd2zz__pregexpz00(obj_t BgL_qz00_3549, obj_t BgL_maximalzf3zf3_3548, obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3547, obj_t BgL_rez00_3546, obj_t BgL_skz00_3545, obj_t BgL_startz00_3544, obj_t BgL_sz00_3543, obj_t BgL_backrefsz00_3542, obj_t BgL_snz00_3541, obj_t BgL_identityz00_3540, obj_t BgL_casezd2sensitivezf3z21_3539, obj_t BgL_nz00_3538, obj_t BgL_kz00_1661, obj_t BgL_iz00_1662)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 647 */
{ /* Llib/pregexp.scm 649 */
obj_t BgL_fkz00_3446;
BgL_fkz00_3446 = 
make_fx_procedure(BGl_fkz00zz__pregexpz00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_fkz00_3446, 
(int)(((long)0)), BgL_skz00_3545); 
PROCEDURE_SET(BgL_fkz00_3446, 
(int)(((long)1)), BgL_iz00_1662); 
{ /* Llib/pregexp.scm 650 */
bool_t BgL_testz00_7756;
if(
CBOOL(BgL_qz00_3549))
{ /* Llib/pregexp.scm 650 */
BgL_testz00_7756 = 
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_kz00_1661, BgL_qz00_3549)
; }  else 
{ /* Llib/pregexp.scm 650 */
BgL_testz00_7756 = ((bool_t)0)
; } 
if(BgL_testz00_7756)
{ /* Llib/pregexp.scm 650 */
obj_t BgL_funz00_4373;
if(
PROCEDUREP(BgL_skz00_3545))
{ /* Llib/pregexp.scm 650 */
BgL_funz00_4373 = BgL_skz00_3545; }  else 
{ 
obj_t BgL_auxz00_7762;
BgL_auxz00_7762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)26346)), BGl_string4027z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3545); 
FAILURE(BgL_auxz00_7762,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4373, ((long)1)))
{ /* Llib/pregexp.scm 650 */
return 
PROCEDURE_ENTRY(BgL_funz00_4373)(BgL_skz00_3545, BgL_iz00_1662, BEOA);}  else 
{ /* Llib/pregexp.scm 650 */
FAILURE(BGl_string4028z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4373);} }  else 
{ /* Llib/pregexp.scm 650 */
if(
CBOOL(BgL_maximalzf3zf3_3548))
{ /* Llib/pregexp.scm 654 */
obj_t BgL_zc3anonymousza32590ze3z83_3445;
BgL_zc3anonymousza32590ze3z83_3445 = 
make_fx_procedure(BGl_zc3anonymousza32590ze3z83zz__pregexpz00, 
(int)(((long)1)), 
(int)(((long)14))); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)0)), BgL_nz00_3538); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3539); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)2)), BgL_identityz00_3540); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)3)), BgL_snz00_3541); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)4)), BgL_backrefsz00_3542); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)5)), BgL_sz00_3543); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)6)), BgL_startz00_3544); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)7)), BgL_rez00_3546); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)8)), BgL_maximalzf3zf3_3548); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)9)), BgL_qz00_3549); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)10)), BgL_iz00_1662); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)11)), BgL_couldzd2loopzd2infinitelyzf3zf3_3547); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)12)), BgL_kz00_1661); 
PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3445, 
(int)(((long)13)), BgL_skz00_3545); 
return 
BGl_subz00zz__pregexpz00(BgL_startz00_3544, BgL_sz00_3543, BgL_backrefsz00_3542, BgL_snz00_3541, BgL_identityz00_3540, BgL_casezd2sensitivezf3z21_3539, BgL_nz00_3538, BgL_rez00_3546, BgL_iz00_1662, BgL_zc3anonymousza32590ze3z83_3445, BgL_fkz00_3446);}  else 
{ /* Llib/pregexp.scm 662 */
obj_t BgL__ortest_1900z00_1674;
{ /* Llib/pregexp.scm 662 */
obj_t BgL_funz00_4378;
if(
PROCEDUREP(BgL_skz00_3545))
{ /* Llib/pregexp.scm 662 */
BgL_funz00_4378 = BgL_skz00_3545; }  else 
{ 
obj_t BgL_auxz00_7807;
BgL_auxz00_7807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27120)), BGl_string4027z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3545); 
FAILURE(BgL_auxz00_7807,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4378, ((long)1)))
{ /* Llib/pregexp.scm 662 */
BgL__ortest_1900z00_1674 = 
PROCEDURE_ENTRY(BgL_funz00_4378)(BgL_skz00_3545, BgL_iz00_1662, BEOA); }  else 
{ /* Llib/pregexp.scm 662 */
FAILURE(BGl_string4028z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4378);} } 
if(
CBOOL(BgL__ortest_1900z00_1674))
{ /* Llib/pregexp.scm 662 */
return BgL__ortest_1900z00_1674;}  else 
{ /* Llib/pregexp.scm 665 */
obj_t BgL_zc3anonymousza32595ze3z83_3447;
BgL_zc3anonymousza32595ze3z83_3447 = 
make_fx_procedure(BGl_zc3anonymousza32595ze3z83zz__pregexpz00, 
(int)(((long)1)), 
(int)(((long)13))); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)0)), BgL_nz00_3538); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)1)), BgL_casezd2sensitivezf3z21_3539); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)2)), BgL_identityz00_3540); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)3)), BgL_snz00_3541); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)4)), BgL_backrefsz00_3542); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)5)), BgL_sz00_3543); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)6)), BgL_startz00_3544); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)7)), BgL_skz00_3545); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)8)), BgL_rez00_3546); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)9)), BgL_couldzd2loopzd2infinitelyzf3zf3_3547); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)10)), BgL_maximalzf3zf3_3548); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)11)), BgL_qz00_3549); 
PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3447, 
(int)(((long)12)), BgL_kz00_1661); 
return 
BGl_subz00zz__pregexpz00(BgL_startz00_3544, BgL_sz00_3543, BgL_backrefsz00_3542, BgL_snz00_3541, BgL_identityz00_3540, BgL_casezd2sensitivezf3z21_3539, BgL_nz00_3538, BgL_rez00_3546, BgL_iz00_1662, BgL_zc3anonymousza32595ze3z83_3447, BgL_fkz00_3446);} } } } } } 
}



/* g1888 */
obj_t BGl_g1888z00zz__pregexpz00(obj_t BgL_envz00_3550)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 499 */
return 
BBOOL(((bool_t)0));} 
}



/* <anonymous:2488> */
obj_t BGl_zc3anonymousza32488ze3z83zz__pregexpz00(obj_t BgL_envz00_3551)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 544 */
{ /* Llib/pregexp.scm 545 */
obj_t BgL_nz00_3552;obj_t BgL_casezd2sensitivezf3z21_3553;obj_t BgL_identityz00_3554;obj_t BgL_snz00_3555;obj_t BgL_backrefsz00_3556;obj_t BgL_sz00_3557;obj_t BgL_startz00_3558;obj_t BgL_iz00_3559;obj_t BgL_skz00_3560;obj_t BgL_fkz00_3561;obj_t BgL_charsz00_3562;
BgL_nz00_3552 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3553 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)1))); 
BgL_identityz00_3554 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)2))); 
BgL_snz00_3555 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)3))); 
BgL_backrefsz00_3556 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)4))); 
BgL_sz00_3557 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)5))); 
BgL_startz00_3558 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)6))); 
BgL_iz00_3559 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)7))); 
BgL_skz00_3560 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)8))); 
BgL_fkz00_3561 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)9))); 
BgL_charsz00_3562 = 
PROCEDURE_REF(BgL_envz00_3551, 
(int)(((long)10))); 
{ 

{ /* Llib/pregexp.scm 545 */
obj_t BgL_arg2489z00_2959;
{ /* Llib/pregexp.scm 545 */
obj_t BgL_pairz00_2960;
if(
PAIRP(BgL_charsz00_3562))
{ /* Llib/pregexp.scm 545 */
BgL_pairz00_2960 = BgL_charsz00_3562; }  else 
{ 
obj_t BgL_auxz00_7873;
BgL_auxz00_7873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21363)), BGl_string4029z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_charsz00_3562); 
FAILURE(BgL_auxz00_7873,BFALSE,BFALSE);} 
BgL_arg2489z00_2959 = 
CDR(BgL_pairz00_2960); } 
return 
BGl_loupzd2onezd2ofzd2charszd2zz__pregexpz00(BgL_fkz00_3561, BgL_skz00_3560, BgL_iz00_3559, BgL_startz00_3558, BgL_sz00_3557, BgL_backrefsz00_3556, BgL_snz00_3555, BgL_identityz00_3554, BgL_casezd2sensitivezf3z21_3553, BgL_nz00_3552, BgL_arg2489z00_2959);} } } } 
}



/* <anonymous:2496> */
obj_t BGl_zc3anonymousza32496ze3z83zz__pregexpz00(obj_t BgL_envz00_3563)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 550 */
{ /* Llib/pregexp.scm 550 */
obj_t BgL_iz00_3564;obj_t BgL_skz00_3565;
BgL_iz00_3564 = 
PROCEDURE_REF(BgL_envz00_3563, 
(int)(((long)0))); 
BgL_skz00_3565 = 
PROCEDURE_REF(BgL_envz00_3563, 
(int)(((long)1))); 
{ 

{ /* Llib/pregexp.scm 550 */
obj_t BgL_arg2497z00_1518;
BgL_arg2497z00_1518 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_3564, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 550 */
obj_t BgL_funz00_4385;
if(
PROCEDUREP(BgL_skz00_3565))
{ /* Llib/pregexp.scm 550 */
BgL_funz00_4385 = BgL_skz00_3565; }  else 
{ 
obj_t BgL_auxz00_7887;
BgL_auxz00_7887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21567)), BGl_string4030z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3565); 
FAILURE(BgL_auxz00_7887,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4385, ((long)1)))
{ /* Llib/pregexp.scm 550 */
return 
PROCEDURE_ENTRY(BgL_funz00_4385)(BgL_skz00_3565, BgL_arg2497z00_1518, BEOA);}  else 
{ /* Llib/pregexp.scm 550 */
FAILURE(BGl_string4031z00zz__pregexpz00,BGl_list4032z00zz__pregexpz00,BgL_funz00_4385);} } } } } } 
}



/* <anonymous:2495> */
obj_t BGl_zc3anonymousza32495ze3z83zz__pregexpz00(obj_t BgL_envz00_3566, obj_t BgL_i1z00_3568)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 549 */
{ /* Llib/pregexp.scm 549 */
obj_t BgL_fkz00_3567;
BgL_fkz00_3567 = 
PROCEDURE_REF(BgL_envz00_3566, 
(int)(((long)0))); 
{ 
obj_t BgL_i1z00_1515;
BgL_i1z00_1515 = BgL_i1z00_3568; 
{ /* Llib/pregexp.scm 549 */
obj_t BgL_funz00_4390;
if(
PROCEDUREP(BgL_fkz00_3567))
{ /* Llib/pregexp.scm 549 */
BgL_funz00_4390 = BgL_fkz00_3567; }  else 
{ 
obj_t BgL_auxz00_7900;
BgL_auxz00_7900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21523)), BGl_string4035z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_3567); 
FAILURE(BgL_auxz00_7900,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4390, ((long)0)))
{ /* Llib/pregexp.scm 549 */
return 
PROCEDURE_ENTRY(BgL_funz00_4390)(BgL_fkz00_3567, BEOA);}  else 
{ /* Llib/pregexp.scm 549 */
FAILURE(BGl_string4036z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4390);} } } } } 
}



/* <anonymous:2503> */
obj_t BGl_zc3anonymousza32503ze3z83zz__pregexpz00(obj_t BgL_envz00_3569, obj_t BgL_i1z00_3580)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 555 */
{ /* Llib/pregexp.scm 556 */
obj_t BgL_nz00_3570;obj_t BgL_casezd2sensitivezf3z21_3571;obj_t BgL_identityz00_3572;obj_t BgL_snz00_3573;obj_t BgL_backrefsz00_3574;obj_t BgL_sz00_3575;obj_t BgL_startz00_3576;obj_t BgL_fkz00_3577;obj_t BgL_skz00_3578;obj_t BgL_resz00_3579;
BgL_nz00_3570 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3571 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)1))); 
BgL_identityz00_3572 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)2))); 
BgL_snz00_3573 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)3))); 
BgL_backrefsz00_3574 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)4))); 
BgL_sz00_3575 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)5))); 
BgL_startz00_3576 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)6))); 
BgL_fkz00_3577 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)7))); 
BgL_skz00_3578 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)8))); 
BgL_resz00_3579 = 
PROCEDURE_REF(BgL_envz00_3569, 
(int)(((long)9))); 
{ 
obj_t BgL_i1z00_1530;
BgL_i1z00_1530 = BgL_i1z00_3580; 
{ /* Llib/pregexp.scm 556 */
obj_t BgL_arg2504z00_2972;
{ /* Llib/pregexp.scm 556 */
obj_t BgL_pairz00_2973;
if(
PAIRP(BgL_resz00_3579))
{ /* Llib/pregexp.scm 556 */
BgL_pairz00_2973 = BgL_resz00_3579; }  else 
{ 
obj_t BgL_auxz00_7931;
BgL_auxz00_7931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)21839)), BGl_string4037z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_resz00_3579); 
FAILURE(BgL_auxz00_7931,BFALSE,BFALSE);} 
BgL_arg2504z00_2972 = 
CDR(BgL_pairz00_2973); } 
return 
BGl_loupzd2seqzd2zz__pregexpz00(BgL_skz00_3578, BgL_fkz00_3577, BgL_startz00_3576, BgL_sz00_3575, BgL_backrefsz00_3574, BgL_snz00_3573, BgL_identityz00_3572, BgL_casezd2sensitivezf3z21_3571, BgL_nz00_3570, BgL_arg2504z00_2972, BgL_i1z00_1530);} } } } 
}



/* <anonymous:2513> */
obj_t BGl_zc3anonymousza32513ze3z83zz__pregexpz00(obj_t BgL_envz00_3581)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 565 */
{ /* Llib/pregexp.scm 565 */
obj_t BgL_nz00_3582;obj_t BgL_casezd2sensitivezf3z21_3583;obj_t BgL_identityz00_3584;obj_t BgL_snz00_3585;obj_t BgL_backrefsz00_3586;obj_t BgL_sz00_3587;obj_t BgL_startz00_3588;obj_t BgL_skz00_3589;obj_t BgL_iz00_3590;obj_t BgL_fkz00_3591;obj_t BgL_resz00_3592;
BgL_nz00_3582 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3583 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)1))); 
BgL_identityz00_3584 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)2))); 
BgL_snz00_3585 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)3))); 
BgL_backrefsz00_3586 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)4))); 
BgL_sz00_3587 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)5))); 
BgL_startz00_3588 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)6))); 
BgL_skz00_3589 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)7))); 
BgL_iz00_3590 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)8))); 
BgL_fkz00_3591 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)9))); 
BgL_resz00_3592 = 
PROCEDURE_REF(BgL_envz00_3581, 
(int)(((long)10))); 
{ 

{ /* Llib/pregexp.scm 565 */
obj_t BgL_arg2514z00_2982;
{ /* Llib/pregexp.scm 565 */
obj_t BgL_pairz00_2983;
if(
PAIRP(BgL_resz00_3592))
{ /* Llib/pregexp.scm 565 */
BgL_pairz00_2983 = BgL_resz00_3592; }  else 
{ 
obj_t BgL_auxz00_7961;
BgL_auxz00_7961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22239)), BGl_string4038z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_resz00_3592); 
FAILURE(BgL_auxz00_7961,BFALSE,BFALSE);} 
BgL_arg2514z00_2982 = 
CDR(BgL_pairz00_2983); } 
return 
BGl_loupzd2orzd2zz__pregexpz00(BgL_fkz00_3591, BgL_iz00_3590, BgL_skz00_3589, BgL_startz00_3588, BgL_sz00_3587, BgL_backrefsz00_3586, BgL_snz00_3585, BgL_identityz00_3584, BgL_casezd2sensitivezf3z21_3583, BgL_nz00_3582, BgL_arg2514z00_2982);} } } } 
}



/* <anonymous:2511> */
obj_t BGl_zc3anonymousza32511ze3z83zz__pregexpz00(obj_t BgL_envz00_3593, obj_t BgL_i1z00_3605)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 562 */
{ /* Llib/pregexp.scm 563 */
obj_t BgL_nz00_3594;obj_t BgL_casezd2sensitivezf3z21_3595;obj_t BgL_identityz00_3596;obj_t BgL_snz00_3597;obj_t BgL_backrefsz00_3598;obj_t BgL_sz00_3599;obj_t BgL_startz00_3600;obj_t BgL_iz00_3601;obj_t BgL_fkz00_3602;obj_t BgL_skz00_3603;obj_t BgL_resz00_3604;
BgL_nz00_3594 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3595 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)1))); 
BgL_identityz00_3596 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)2))); 
BgL_snz00_3597 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)3))); 
BgL_backrefsz00_3598 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)4))); 
BgL_sz00_3599 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)5))); 
BgL_startz00_3600 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)6))); 
BgL_iz00_3601 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)7))); 
BgL_fkz00_3602 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)8))); 
BgL_skz00_3603 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)9))); 
BgL_resz00_3604 = 
PROCEDURE_REF(BgL_envz00_3593, 
(int)(((long)10))); 
{ 
obj_t BgL_i1z00_1544;
BgL_i1z00_1544 = BgL_i1z00_3605; 
{ /* Llib/pregexp.scm 563 */
obj_t BgL__ortest_1893z00_2979;
{ /* Llib/pregexp.scm 563 */
obj_t BgL_funz00_4399;
if(
PROCEDUREP(BgL_skz00_3603))
{ /* Llib/pregexp.scm 563 */
BgL_funz00_4399 = BgL_skz00_3603; }  else 
{ 
obj_t BgL_auxz00_7991;
BgL_auxz00_7991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22119)), BGl_string4039z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3603); 
FAILURE(BgL_auxz00_7991,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4399, ((long)1)))
{ /* Llib/pregexp.scm 563 */
BgL__ortest_1893z00_2979 = 
PROCEDURE_ENTRY(BgL_funz00_4399)(BgL_skz00_3603, BgL_i1z00_1544, BEOA); }  else 
{ /* Llib/pregexp.scm 563 */
FAILURE(BGl_string4040z00zz__pregexpz00,BGl_list4041z00zz__pregexpz00,BgL_funz00_4399);} } 
if(
CBOOL(BgL__ortest_1893z00_2979))
{ /* Llib/pregexp.scm 563 */
return BgL__ortest_1893z00_2979;}  else 
{ /* Llib/pregexp.scm 563 */
obj_t BgL_arg2512z00_2980;
{ /* Llib/pregexp.scm 563 */
obj_t BgL_pairz00_2981;
if(
PAIRP(BgL_resz00_3604))
{ /* Llib/pregexp.scm 563 */
BgL_pairz00_2981 = BgL_resz00_3604; }  else 
{ 
obj_t BgL_auxz00_8004;
BgL_auxz00_8004 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22119)), BGl_string4039z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_resz00_3604); 
FAILURE(BgL_auxz00_8004,BFALSE,BFALSE);} 
BgL_arg2512z00_2980 = 
CDR(BgL_pairz00_2981); } 
return 
BGl_loupzd2orzd2zz__pregexpz00(BgL_fkz00_3602, BgL_iz00_3601, BgL_skz00_3603, BgL_startz00_3600, BgL_sz00_3599, BgL_backrefsz00_3598, BgL_snz00_3597, BgL_identityz00_3596, BgL_casezd2sensitivezf3z21_3595, BgL_nz00_3594, BgL_arg2512z00_2980);} } } } } 
}



/* <anonymous:2520> */
obj_t BGl_zc3anonymousza32520ze3z83zz__pregexpz00(obj_t BgL_envz00_3606, obj_t BgL_iz00_3608)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 577 */
{ /* Llib/pregexp.scm 577 */
obj_t BgL_skz00_3607;
BgL_skz00_3607 = 
PROCEDURE_1_EL_REF(BgL_envz00_3606, 
(int)(((long)0))); 
{ 
obj_t BgL_iz00_1560;
BgL_iz00_1560 = BgL_iz00_3608; 
{ /* Llib/pregexp.scm 577 */
obj_t BgL_funz00_4406;
if(
PROCEDUREP(BgL_skz00_3607))
{ /* Llib/pregexp.scm 577 */
BgL_funz00_4406 = BgL_skz00_3607; }  else 
{ 
obj_t BgL_auxz00_8014;
BgL_auxz00_8014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)22851)), BGl_string4044z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3607); 
FAILURE(BgL_auxz00_8014,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4406, ((long)1)))
{ /* Llib/pregexp.scm 577 */
return 
PROCEDURE_ENTRY(BgL_funz00_4406)(BgL_skz00_3607, BgL_iz00_1560, BEOA);}  else 
{ /* Llib/pregexp.scm 577 */
FAILURE(BGl_string4045z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4406);} } } } } 
}



/* <anonymous:2528> */
obj_t BGl_zc3anonymousza32528ze3z83zz__pregexpz00(obj_t BgL_envz00_3609, obj_t BgL_i1z00_3614)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 581 */
{ /* Llib/pregexp.scm 582 */
obj_t BgL_rez00_3610;obj_t BgL_backrefsz00_3611;obj_t BgL_iz00_3612;obj_t BgL_skz00_3613;
BgL_rez00_3610 = 
PROCEDURE_REF(BgL_envz00_3609, 
(int)(((long)0))); 
BgL_backrefsz00_3611 = 
PROCEDURE_REF(BgL_envz00_3609, 
(int)(((long)1))); 
BgL_iz00_3612 = 
PROCEDURE_REF(BgL_envz00_3609, 
(int)(((long)2))); 
BgL_skz00_3613 = 
PROCEDURE_REF(BgL_envz00_3609, 
(int)(((long)3))); 
{ 
obj_t BgL_i1z00_1572;
BgL_i1z00_1572 = BgL_i1z00_3614; 
{ /* Llib/pregexp.scm 582 */
obj_t BgL_arg2529z00_1574;obj_t BgL_arg2530z00_1575;
{ /* Llib/pregexp.scm 582 */
obj_t BgL_auxz00_8031;
{ /* Llib/pregexp.scm 582 */
bool_t BgL_testz00_8032;
if(
PAIRP(BgL_backrefsz00_3611))
{ /* Llib/pregexp.scm 582 */
BgL_testz00_8032 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 582 */
BgL_testz00_8032 = 
NULLP(BgL_backrefsz00_3611)
; } 
if(BgL_testz00_8032)
{ /* Llib/pregexp.scm 582 */
BgL_auxz00_8031 = BgL_backrefsz00_3611
; }  else 
{ 
obj_t BgL_auxz00_8036;
BgL_auxz00_8036 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23038)), BGl_string4046z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_backrefsz00_3611); 
FAILURE(BgL_auxz00_8036,BFALSE,BFALSE);} } 
BgL_arg2529z00_1574 = 
BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BgL_rez00_3610, BgL_auxz00_8031); } 
BgL_arg2530z00_1575 = 
MAKE_PAIR(BgL_iz00_3612, BgL_i1z00_1572); 
{ /* Llib/pregexp.scm 582 */
obj_t BgL_pairz00_3006;
if(
PAIRP(BgL_arg2529z00_1574))
{ /* Llib/pregexp.scm 582 */
BgL_pairz00_3006 = BgL_arg2529z00_1574; }  else 
{ 
obj_t BgL_auxz00_8044;
BgL_auxz00_8044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23046)), BGl_string4046z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2529z00_1574); 
FAILURE(BgL_auxz00_8044,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3006, BgL_arg2530z00_1575); } } 
{ /* Llib/pregexp.scm 583 */
obj_t BgL_funz00_4415;
if(
PROCEDUREP(BgL_skz00_3613))
{ /* Llib/pregexp.scm 583 */
BgL_funz00_4415 = BgL_skz00_3613; }  else 
{ 
obj_t BgL_auxz00_8051;
BgL_auxz00_8051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)23086)), BGl_string4046z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3613); 
FAILURE(BgL_auxz00_8051,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4415, ((long)1)))
{ /* Llib/pregexp.scm 583 */
return 
PROCEDURE_ENTRY(BgL_funz00_4415)(BgL_skz00_3613, BgL_i1z00_1572, BEOA);}  else 
{ /* Llib/pregexp.scm 583 */
FAILURE(BGl_string4047z00zz__pregexpz00,BGl_list4041z00zz__pregexpz00,BgL_funz00_4415);} } } } } 
}



/* <anonymous:2534> */
obj_t BGl_zc3anonymousza32534ze3z83zz__pregexpz00(obj_t BgL_envz00_3615)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 587 */
return 
BBOOL(((bool_t)0));} 
}



/* <anonymous:2538> */
obj_t BGl_zc3anonymousza32538ze3z83zz__pregexpz00(obj_t BgL_envz00_3616)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 592 */
return 
BBOOL(((bool_t)0));} 
}



/* <anonymous:2551> */
obj_t BGl_zc3anonymousza32551ze3z83zz__pregexpz00(obj_t BgL_envz00_3617)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 600 */
return 
BBOOL(((bool_t)0));} 
}



/* <anonymous:2564> */
obj_t BGl_zc3anonymousza32564ze3z83zz__pregexpz00(obj_t BgL_envz00_3618)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 609 */
return 
BBOOL(((bool_t)0));} 
}



/* <anonymous:2569> */
obj_t BGl_zc3anonymousza32569ze3z83zz__pregexpz00(obj_t BgL_envz00_3619)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 614 */
return 
BBOOL(((bool_t)0));} 
}



/* identity */
obj_t BGl_identityz00zz__pregexpz00(obj_t BgL_envz00_3620, obj_t BgL_xz00_3621)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 496 */
return BgL_xz00_3621;} 
}



/* <anonymous:2577> */
obj_t BGl_zc3anonymousza32577ze3z83zz__pregexpz00(obj_t BgL_envz00_3622)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 626 */
{ /* Llib/pregexp.scm 627 */
obj_t BgL_oldz00_3623;obj_t BgL_casezd2sensitivezf3z21_3624;obj_t BgL_fkz00_3625;
BgL_oldz00_3623 = 
PROCEDURE_REF(BgL_envz00_3622, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3624 = 
PROCEDURE_REF(BgL_envz00_3622, 
(int)(((long)1))); 
BgL_fkz00_3625 = 
PROCEDURE_REF(BgL_envz00_3622, 
(int)(((long)2))); 
{ 

CELL_SET(BgL_casezd2sensitivezf3z21_3624, BgL_oldz00_3623); 
{ /* Llib/pregexp.scm 628 */
obj_t BgL_funz00_4420;
if(
PROCEDUREP(BgL_fkz00_3625))
{ /* Llib/pregexp.scm 628 */
BgL_funz00_4420 = BgL_fkz00_3625; }  else 
{ 
obj_t BgL_auxz00_8073;
BgL_auxz00_8073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25214)), BGl_string4048z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_fkz00_3625); 
FAILURE(BgL_auxz00_8073,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4420, ((long)0)))
{ /* Llib/pregexp.scm 628 */
return 
PROCEDURE_ENTRY(BgL_funz00_4420)(BgL_fkz00_3625, BEOA);}  else 
{ /* Llib/pregexp.scm 628 */
FAILURE(BGl_string4049z00zz__pregexpz00,BGl_list3938z00zz__pregexpz00,BgL_funz00_4420);} } } } } 
}



/* <anonymous:2576> */
obj_t BGl_zc3anonymousza32576ze3z83zz__pregexpz00(obj_t BgL_envz00_3627, obj_t BgL_i1z00_3631)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 623 */
{ /* Llib/pregexp.scm 624 */
obj_t BgL_oldz00_3628;obj_t BgL_casezd2sensitivezf3z21_3629;obj_t BgL_skz00_3630;
BgL_oldz00_3628 = 
PROCEDURE_REF(BgL_envz00_3627, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3629 = 
PROCEDURE_REF(BgL_envz00_3627, 
(int)(((long)1))); 
BgL_skz00_3630 = 
PROCEDURE_REF(BgL_envz00_3627, 
(int)(((long)2))); 
{ 
obj_t BgL_i1z00_1636;
BgL_i1z00_1636 = BgL_i1z00_3631; 
CELL_SET(BgL_casezd2sensitivezf3z21_3629, BgL_oldz00_3628); 
{ /* Llib/pregexp.scm 625 */
obj_t BgL_funz00_4425;
if(
PROCEDUREP(BgL_skz00_3630))
{ /* Llib/pregexp.scm 625 */
BgL_funz00_4425 = BgL_skz00_3630; }  else 
{ 
obj_t BgL_auxz00_8090;
BgL_auxz00_8090 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)25088)), BGl_string4050z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3630); 
FAILURE(BgL_auxz00_8090,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4425, ((long)1)))
{ /* Llib/pregexp.scm 625 */
return 
PROCEDURE_ENTRY(BgL_funz00_4425)(BgL_skz00_3630, BgL_i1z00_1636, BEOA);}  else 
{ /* Llib/pregexp.scm 625 */
FAILURE(BGl_string4051z00zz__pregexpz00,BGl_list4041z00zz__pregexpz00,BgL_funz00_4425);} } } } } 
}



/* <anonymous:2582> */
obj_t BGl_zc3anonymousza32582ze3z83zz__pregexpz00(obj_t BgL_envz00_3633, obj_t BgL_i1z00_3650)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 638 */
{ /* Llib/pregexp.scm 639 */
obj_t BgL_nz00_3634;obj_t BgL_casezd2sensitivezf3z21_3635;obj_t BgL_identityz00_3636;obj_t BgL_snz00_3637;obj_t BgL_backrefsz00_3638;obj_t BgL_sz00_3639;obj_t BgL_startz00_3640;obj_t BgL_skz00_3641;obj_t BgL_maximalzf3zf3_3642;obj_t BgL_qz00_3643;obj_t BgL_pz00_3644;obj_t BgL_rez00_3645;obj_t BgL_fkz00_3646;obj_t BgL_iz00_3647;obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3648;obj_t BgL_kz00_3649;
BgL_nz00_3634 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3635 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)1))); 
BgL_identityz00_3636 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)2))); 
BgL_snz00_3637 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)3))); 
BgL_backrefsz00_3638 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)4))); 
BgL_sz00_3639 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)5))); 
BgL_startz00_3640 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)6))); 
BgL_skz00_3641 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)7))); 
BgL_maximalzf3zf3_3642 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)8))); 
BgL_qz00_3643 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)9))); 
BgL_pz00_3644 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)10))); 
BgL_rez00_3645 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)11))); 
BgL_fkz00_3646 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)12))); 
BgL_iz00_3647 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)13))); 
BgL_couldzd2loopzd2infinitelyzf3zf3_3648 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)14))); 
BgL_kz00_3649 = 
PROCEDURE_REF(BgL_envz00_3633, 
(int)(((long)15))); 
{ 
obj_t BgL_i1z00_1653;
BgL_i1z00_1653 = BgL_i1z00_3650; 
{ /* Llib/pregexp.scm 639 */
bool_t BgL_testz00_8131;
if(
CBOOL(BgL_couldzd2loopzd2infinitelyzf3zf3_3648))
{ /* Llib/pregexp.scm 639 */
BgL_testz00_8131 = 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_i1z00_1653, BgL_iz00_3647)
; }  else 
{ /* Llib/pregexp.scm 639 */
BgL_testz00_8131 = ((bool_t)0)
; } 
if(BgL_testz00_8131)
{ /* Llib/pregexp.scm 641 */
obj_t BgL_list2584z00_1656;
BgL_list2584z00_1656 = 
MAKE_PAIR(BGl_symbol4052z00zz__pregexpz00, BNIL); 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol4011z00zz__pregexpz00, 
CAR(BgL_list2584z00_1656)); }  else 
{ /* Llib/pregexp.scm 639 */BFALSE; } } 
return 
BGl_loupzd2pzd2zz__pregexpz00(BgL_fkz00_3646, BgL_rez00_3645, BgL_couldzd2loopzd2infinitelyzf3zf3_3648, BgL_pz00_3644, BgL_qz00_3643, BgL_maximalzf3zf3_3642, BgL_skz00_3641, BgL_startz00_3640, BgL_sz00_3639, BgL_backrefsz00_3638, BgL_snz00_3637, BgL_identityz00_3636, BgL_casezd2sensitivezf3z21_3635, BgL_nz00_3634, 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_3649, 
BINT(((long)1))), BgL_i1z00_1653);} } } 
}



/* <anonymous:2590> */
obj_t BGl_zc3anonymousza32590ze3z83zz__pregexpz00(obj_t BgL_envz00_3651, obj_t BgL_i1z00_3666)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 653 */
{ /* Llib/pregexp.scm 654 */
obj_t BgL_nz00_3652;obj_t BgL_casezd2sensitivezf3z21_3653;obj_t BgL_identityz00_3654;obj_t BgL_snz00_3655;obj_t BgL_backrefsz00_3656;obj_t BgL_sz00_3657;obj_t BgL_startz00_3658;obj_t BgL_rez00_3659;obj_t BgL_maximalzf3zf3_3660;obj_t BgL_qz00_3661;obj_t BgL_iz00_3662;obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3663;obj_t BgL_kz00_3664;obj_t BgL_skz00_3665;
BgL_nz00_3652 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3653 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)1))); 
BgL_identityz00_3654 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)2))); 
BgL_snz00_3655 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)3))); 
BgL_backrefsz00_3656 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)4))); 
BgL_sz00_3657 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)5))); 
BgL_startz00_3658 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)6))); 
BgL_rez00_3659 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)7))); 
BgL_maximalzf3zf3_3660 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)8))); 
BgL_qz00_3661 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)9))); 
BgL_iz00_3662 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)10))); 
BgL_couldzd2loopzd2infinitelyzf3zf3_3663 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)11))); 
BgL_kz00_3664 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)12))); 
BgL_skz00_3665 = 
PROCEDURE_REF(BgL_envz00_3651, 
(int)(((long)13))); 
{ 
obj_t BgL_i1z00_1667;
BgL_i1z00_1667 = BgL_i1z00_3666; 
{ /* Llib/pregexp.scm 654 */
bool_t BgL_testz00_8169;
if(
CBOOL(BgL_couldzd2loopzd2infinitelyzf3zf3_3663))
{ /* Llib/pregexp.scm 654 */
BgL_testz00_8169 = 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_i1z00_1667, BgL_iz00_3662)
; }  else 
{ /* Llib/pregexp.scm 654 */
BgL_testz00_8169 = ((bool_t)0)
; } 
if(BgL_testz00_8169)
{ /* Llib/pregexp.scm 656 */
obj_t BgL_list2592z00_1670;
BgL_list2592z00_1670 = 
MAKE_PAIR(BGl_symbol4052z00zz__pregexpz00, BNIL); 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol4011z00zz__pregexpz00, 
CAR(BgL_list2592z00_1670)); }  else 
{ /* Llib/pregexp.scm 654 */BFALSE; } } 
{ /* Llib/pregexp.scm 659 */
obj_t BgL__ortest_1899z00_1671;
BgL__ortest_1899z00_1671 = 
BGl_loupzd2qzd2zz__pregexpz00(BgL_qz00_3661, BgL_maximalzf3zf3_3660, BgL_couldzd2loopzd2infinitelyzf3zf3_3663, BgL_rez00_3659, BgL_skz00_3665, BgL_startz00_3658, BgL_sz00_3657, BgL_backrefsz00_3656, BgL_snz00_3655, BgL_identityz00_3654, BgL_casezd2sensitivezf3z21_3653, BgL_nz00_3652, 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_3664, 
BINT(((long)1))), BgL_i1z00_1667); 
if(
CBOOL(BgL__ortest_1899z00_1671))
{ /* Llib/pregexp.scm 659 */
return BgL__ortest_1899z00_1671;}  else 
{ /* Llib/pregexp.scm 660 */
obj_t BgL_funz00_4430;
if(
PROCEDUREP(BgL_skz00_3665))
{ /* Llib/pregexp.scm 660 */
BgL_funz00_4430 = BgL_skz00_3665; }  else 
{ 
obj_t BgL_auxz00_8183;
BgL_auxz00_8183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27020)), BGl_string4054z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3665); 
FAILURE(BgL_auxz00_8183,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4430, ((long)1)))
{ /* Llib/pregexp.scm 660 */
return 
PROCEDURE_ENTRY(BgL_funz00_4430)(BgL_skz00_3665, BgL_iz00_3662, BEOA);}  else 
{ /* Llib/pregexp.scm 660 */
FAILURE(BGl_string4055z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4430);} } } } } } 
}



/* fk */
obj_t BGl_fkz00zz__pregexpz00(obj_t BgL_envz00_3667)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 648 */
{ /* Llib/pregexp.scm 649 */
obj_t BgL_skz00_3668;obj_t BgL_iz00_3669;
BgL_skz00_3668 = 
PROCEDURE_REF(BgL_envz00_3667, 
(int)(((long)0))); 
BgL_iz00_3669 = 
PROCEDURE_REF(BgL_envz00_3667, 
(int)(((long)1))); 
{ 

{ /* Llib/pregexp.scm 649 */
obj_t BgL_funz00_4435;
if(
PROCEDUREP(BgL_skz00_3668))
{ /* Llib/pregexp.scm 649 */
BgL_funz00_4435 = BgL_skz00_3668; }  else 
{ 
obj_t BgL_auxz00_8198;
BgL_auxz00_8198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)26282)), BGl_string3942z00zz__pregexpz00, BGl_string3936z00zz__pregexpz00, BgL_skz00_3668); 
FAILURE(BgL_auxz00_8198,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4435, ((long)1)))
{ /* Llib/pregexp.scm 649 */
return 
PROCEDURE_ENTRY(BgL_funz00_4435)(BgL_skz00_3668, BgL_iz00_3669, BEOA);}  else 
{ /* Llib/pregexp.scm 649 */
FAILURE(BGl_string4056z00zz__pregexpz00,BGl_list3980z00zz__pregexpz00,BgL_funz00_4435);} } } } } 
}



/* <anonymous:2595> */
obj_t BGl_zc3anonymousza32595ze3z83zz__pregexpz00(obj_t BgL_envz00_3670, obj_t BgL_i1z00_3684)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 664 */
{ /* Llib/pregexp.scm 665 */
obj_t BgL_nz00_3671;obj_t BgL_casezd2sensitivezf3z21_3672;obj_t BgL_identityz00_3673;obj_t BgL_snz00_3674;obj_t BgL_backrefsz00_3675;obj_t BgL_sz00_3676;obj_t BgL_startz00_3677;obj_t BgL_skz00_3678;obj_t BgL_rez00_3679;obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3680;obj_t BgL_maximalzf3zf3_3681;obj_t BgL_qz00_3682;obj_t BgL_kz00_3683;
BgL_nz00_3671 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)0))); 
BgL_casezd2sensitivezf3z21_3672 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)1))); 
BgL_identityz00_3673 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)2))); 
BgL_snz00_3674 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)3))); 
BgL_backrefsz00_3675 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)4))); 
BgL_sz00_3676 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)5))); 
BgL_startz00_3677 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)6))); 
BgL_skz00_3678 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)7))); 
BgL_rez00_3679 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)8))); 
BgL_couldzd2loopzd2infinitelyzf3zf3_3680 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)9))); 
BgL_maximalzf3zf3_3681 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)10))); 
BgL_qz00_3682 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)11))); 
BgL_kz00_3683 = 
PROCEDURE_REF(BgL_envz00_3670, 
(int)(((long)12))); 
{ 
obj_t BgL_i1z00_1676;
BgL_i1z00_1676 = BgL_i1z00_3684; 
return 
BGl_loupzd2qzd2zz__pregexpz00(BgL_qz00_3682, BgL_maximalzf3zf3_3681, BgL_couldzd2loopzd2infinitelyzf3zf3_3680, BgL_rez00_3679, BgL_skz00_3678, BgL_startz00_3677, BgL_sz00_3676, BgL_backrefsz00_3675, BgL_snz00_3674, BgL_identityz00_3673, BgL_casezd2sensitivezf3z21_3672, BgL_nz00_3671, 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_3683, 
BINT(((long)1))), BgL_i1z00_1676);} } } 
}



/* pregexp-replace-aux */
obj_t BGl_pregexpzd2replacezd2auxz00zz__pregexpz00(obj_t BgL_strz00_59, obj_t BgL_insz00_60, long BgL_nz00_61, obj_t BgL_backrefsz00_62)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 674 */
{ 
obj_t BgL_iz00_1726;obj_t BgL_rz00_1727;
BgL_iz00_1726 = 
BINT(((long)0)); 
BgL_rz00_1727 = BGl_string4057z00zz__pregexpz00; 
BgL_zc3anonymousza32622ze3z83_1728:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1726, 
BINT(BgL_nz00_61)))
{ /* Llib/pregexp.scm 677 */
return BgL_rz00_1727;}  else 
{ /* Llib/pregexp.scm 678 */
unsigned char BgL_cz00_1730;
{ /* Llib/pregexp.scm 678 */
long BgL_kz00_3124;
{ /* Llib/pregexp.scm 678 */
obj_t BgL_auxz00_8239;
if(
INTEGERP(BgL_iz00_1726))
{ /* Llib/pregexp.scm 678 */
BgL_auxz00_8239 = BgL_iz00_1726
; }  else 
{ 
obj_t BgL_auxz00_8242;
BgL_auxz00_8242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27801)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1726); 
FAILURE(BgL_auxz00_8242,BFALSE,BFALSE);} 
BgL_kz00_3124 = 
(long)CINT(BgL_auxz00_8239); } 
{ /* Llib/pregexp.scm 678 */
long BgL_l3166z00_3832;
BgL_l3166z00_3832 = 
STRING_LENGTH(BgL_insz00_60); 
if(
BOUND_CHECK(BgL_kz00_3124, BgL_l3166z00_3832))
{ /* Llib/pregexp.scm 678 */
BgL_cz00_1730 = 
STRING_REF(BgL_insz00_60, BgL_kz00_3124); }  else 
{ 
obj_t BgL_auxz00_8251;
BgL_auxz00_8251 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27785)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_3124), BgL_insz00_60); 
FAILURE(BgL_auxz00_8251,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1730==((unsigned char)'\\')))
{ /* Llib/pregexp.scm 680 */
obj_t BgL_brzd2izd2_1732;
BgL_brzd2izd2_1732 = 
BGl_pregexpzd2readzd2escapedzd2numberzd2zz__pregexpz00(BgL_insz00_60, BgL_iz00_1726, BgL_nz00_61); 
{ /* Llib/pregexp.scm 680 */
obj_t BgL_brz00_1733;
if(
CBOOL(BgL_brzd2izd2_1732))
{ /* Llib/pregexp.scm 681 */
obj_t BgL_pairz00_3127;
if(
PAIRP(BgL_brzd2izd2_1732))
{ /* Llib/pregexp.scm 681 */
BgL_pairz00_3127 = BgL_brzd2izd2_1732; }  else 
{ 
obj_t BgL_auxz00_8263;
BgL_auxz00_8263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27946)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_brzd2izd2_1732); 
FAILURE(BgL_auxz00_8263,BFALSE,BFALSE);} 
BgL_brz00_1733 = 
CAR(BgL_pairz00_3127); }  else 
{ /* Llib/pregexp.scm 682 */
bool_t BgL_testz00_8268;
{ /* Llib/pregexp.scm 682 */
unsigned char BgL_auxz00_8269;
{ /* Llib/pregexp.scm 682 */
long BgL_kz00_3129;
{ /* Llib/pregexp.scm 682 */
obj_t BgL_auxz00_8270;
{ /* Llib/pregexp.scm 682 */
obj_t BgL_aux3726z00_4442;
BgL_aux3726z00_4442 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1726, 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3726z00_4442))
{ /* Llib/pregexp.scm 682 */
BgL_auxz00_8270 = BgL_aux3726z00_4442
; }  else 
{ 
obj_t BgL_auxz00_8275;
BgL_auxz00_8275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28011)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3726z00_4442); 
FAILURE(BgL_auxz00_8275,BFALSE,BFALSE);} } 
BgL_kz00_3129 = 
(long)CINT(BgL_auxz00_8270); } 
{ /* Llib/pregexp.scm 682 */
long BgL_l3170z00_3836;
BgL_l3170z00_3836 = 
STRING_LENGTH(BgL_insz00_60); 
if(
BOUND_CHECK(BgL_kz00_3129, BgL_l3170z00_3836))
{ /* Llib/pregexp.scm 682 */
BgL_auxz00_8269 = 
STRING_REF(BgL_insz00_60, BgL_kz00_3129)
; }  else 
{ 
obj_t BgL_auxz00_8284;
BgL_auxz00_8284 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)27995)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_3129), BgL_insz00_60); 
FAILURE(BgL_auxz00_8284,BFALSE,BFALSE);} } } 
BgL_testz00_8268 = 
(BgL_auxz00_8269==((unsigned char)'&')); } 
if(BgL_testz00_8268)
{ /* Llib/pregexp.scm 682 */
BgL_brz00_1733 = 
BINT(((long)0)); }  else 
{ /* Llib/pregexp.scm 682 */
BgL_brz00_1733 = BFALSE; } } 
{ /* Llib/pregexp.scm 681 */
obj_t BgL_iz00_1734;
if(
CBOOL(BgL_brzd2izd2_1732))
{ /* Llib/pregexp.scm 684 */
obj_t BgL_pairz00_3132;
if(
PAIRP(BgL_brzd2izd2_1732))
{ /* Llib/pregexp.scm 684 */
BgL_pairz00_3132 = BgL_brzd2izd2_1732; }  else 
{ 
obj_t BgL_auxz00_8295;
BgL_auxz00_8295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28109)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_brzd2izd2_1732); 
FAILURE(BgL_auxz00_8295,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 684 */
obj_t BgL_pairz00_3135;
{ /* Llib/pregexp.scm 684 */
obj_t BgL_aux3730z00_4446;
BgL_aux3730z00_4446 = 
CDR(BgL_pairz00_3132); 
if(
PAIRP(BgL_aux3730z00_4446))
{ /* Llib/pregexp.scm 684 */
BgL_pairz00_3135 = BgL_aux3730z00_4446; }  else 
{ 
obj_t BgL_auxz00_8302;
BgL_auxz00_8302 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28103)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3730z00_4446); 
FAILURE(BgL_auxz00_8302,BFALSE,BFALSE);} } 
BgL_iz00_1734 = 
CAR(BgL_pairz00_3135); } }  else 
{ /* Llib/pregexp.scm 684 */
if(
CBOOL(BgL_brz00_1733))
{ /* Llib/pregexp.scm 685 */
BgL_iz00_1734 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1726, 
BINT(((long)2))); }  else 
{ /* Llib/pregexp.scm 685 */
BgL_iz00_1734 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1726, 
BINT(((long)1))); } } 
{ /* Llib/pregexp.scm 684 */

if(
CBOOL(BgL_brz00_1733))
{ /* Llib/pregexp.scm 693 */
obj_t BgL_arg2625z00_1735;
{ /* Llib/pregexp.scm 693 */
obj_t BgL_backrefz00_1736;
BgL_backrefz00_1736 = 
BGl_pregexpzd2listzd2refz00zz__pregexpz00(BgL_backrefsz00_62, BgL_brz00_1733); 
if(
CBOOL(BgL_backrefz00_1736))
{ /* Llib/pregexp.scm 696 */
obj_t BgL_arg2626z00_1737;
{ /* Llib/pregexp.scm 696 */
obj_t BgL_arg2627z00_1738;obj_t BgL_arg2628z00_1739;
{ /* Llib/pregexp.scm 696 */
obj_t BgL_pairz00_3136;
if(
PAIRP(BgL_backrefz00_1736))
{ /* Llib/pregexp.scm 696 */
BgL_pairz00_3136 = BgL_backrefz00_1736; }  else 
{ 
obj_t BgL_auxz00_8320;
BgL_auxz00_8320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28678)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_backrefz00_1736); 
FAILURE(BgL_auxz00_8320,BFALSE,BFALSE);} 
BgL_arg2627z00_1738 = 
CAR(BgL_pairz00_3136); } 
BgL_arg2628z00_1739 = 
CDR(BgL_backrefz00_1736); 
{ /* Llib/pregexp.scm 696 */
long BgL_auxz00_8335;long BgL_auxz00_8326;
{ /* Llib/pregexp.scm 696 */
obj_t BgL_auxz00_8336;
if(
INTEGERP(BgL_arg2628z00_1739))
{ /* Llib/pregexp.scm 696 */
BgL_auxz00_8336 = BgL_arg2628z00_1739
; }  else 
{ 
obj_t BgL_auxz00_8339;
BgL_auxz00_8339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28658)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_arg2628z00_1739); 
FAILURE(BgL_auxz00_8339,BFALSE,BFALSE);} 
BgL_auxz00_8335 = 
(long)CINT(BgL_auxz00_8336); } 
{ /* Llib/pregexp.scm 696 */
obj_t BgL_auxz00_8327;
if(
INTEGERP(BgL_arg2627z00_1738))
{ /* Llib/pregexp.scm 696 */
BgL_auxz00_8327 = BgL_arg2627z00_1738
; }  else 
{ 
obj_t BgL_auxz00_8330;
BgL_auxz00_8330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28658)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_arg2627z00_1738); 
FAILURE(BgL_auxz00_8330,BFALSE,BFALSE);} 
BgL_auxz00_8326 = 
(long)CINT(BgL_auxz00_8327); } 
BgL_arg2626z00_1737 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_59, BgL_auxz00_8326, BgL_auxz00_8335); } } 
BgL_arg2625z00_1735 = 
string_append(BgL_rz00_1727, BgL_arg2626z00_1737); }  else 
{ /* Llib/pregexp.scm 694 */
BgL_arg2625z00_1735 = BgL_rz00_1727; } } 
{ 
obj_t BgL_rz00_8347;obj_t BgL_iz00_8346;
BgL_iz00_8346 = BgL_iz00_1734; 
BgL_rz00_8347 = BgL_arg2625z00_1735; 
BgL_rz00_1727 = BgL_rz00_8347; 
BgL_iz00_1726 = BgL_iz00_8346; 
goto BgL_zc3anonymousza32622ze3z83_1728;} }  else 
{ /* Llib/pregexp.scm 688 */
unsigned char BgL_c2z00_1740;
{ /* Llib/pregexp.scm 688 */
long BgL_kz00_3139;
{ /* Llib/pregexp.scm 688 */
obj_t BgL_auxz00_8348;
if(
INTEGERP(BgL_iz00_1734))
{ /* Llib/pregexp.scm 688 */
BgL_auxz00_8348 = BgL_iz00_1734
; }  else 
{ 
obj_t BgL_auxz00_8351;
BgL_auxz00_8351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28285)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1734); 
FAILURE(BgL_auxz00_8351,BFALSE,BFALSE);} 
BgL_kz00_3139 = 
(long)CINT(BgL_auxz00_8348); } 
{ /* Llib/pregexp.scm 688 */
long BgL_l3174z00_3840;
BgL_l3174z00_3840 = 
STRING_LENGTH(BgL_insz00_60); 
if(
BOUND_CHECK(BgL_kz00_3139, BgL_l3174z00_3840))
{ /* Llib/pregexp.scm 688 */
BgL_c2z00_1740 = 
STRING_REF(BgL_insz00_60, BgL_kz00_3139); }  else 
{ 
obj_t BgL_auxz00_8360;
BgL_auxz00_8360 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28269)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_kz00_3139), BgL_insz00_60); 
FAILURE(BgL_auxz00_8360,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 689 */
obj_t BgL_arg2629z00_1741;obj_t BgL_arg2630z00_1742;
BgL_arg2629z00_1741 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1734, 
BINT(((long)1))); 
if(
(BgL_c2z00_1740==((unsigned char)'$')))
{ /* Llib/pregexp.scm 690 */
BgL_arg2630z00_1742 = BgL_rz00_1727; }  else 
{ /* Llib/pregexp.scm 691 */
obj_t BgL_arg2632z00_1744;
{ /* Llib/pregexp.scm 691 */
obj_t BgL_list2633z00_1745;
BgL_list2633z00_1745 = 
MAKE_PAIR(
BCHAR(BgL_c2z00_1740), BNIL); 
BgL_arg2632z00_1744 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list2633z00_1745); } 
BgL_arg2630z00_1742 = 
string_append(BgL_rz00_1727, BgL_arg2632z00_1744); } 
{ 
obj_t BgL_rz00_8374;obj_t BgL_iz00_8373;
BgL_iz00_8373 = BgL_arg2629z00_1741; 
BgL_rz00_8374 = BgL_arg2630z00_1742; 
BgL_rz00_1727 = BgL_rz00_8374; 
BgL_iz00_1726 = BgL_iz00_8373; 
goto BgL_zc3anonymousza32622ze3z83_1728;} } } } } } }  else 
{ /* Llib/pregexp.scm 698 */
obj_t BgL_arg2637z00_1749;obj_t BgL_arg2638z00_1750;
BgL_arg2637z00_1749 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1726, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 698 */
obj_t BgL_arg2639z00_1751;
{ /* Llib/pregexp.scm 698 */
obj_t BgL_list2640z00_1752;
BgL_list2640z00_1752 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1730), BNIL); 
BgL_arg2639z00_1751 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list2640z00_1752); } 
BgL_arg2638z00_1750 = 
string_append(BgL_rz00_1727, BgL_arg2639z00_1751); } 
{ 
obj_t BgL_rz00_8382;obj_t BgL_iz00_8381;
BgL_iz00_8381 = BgL_arg2637z00_1749; 
BgL_rz00_8382 = BgL_arg2638z00_1750; 
BgL_rz00_1727 = BgL_rz00_8382; 
BgL_iz00_1726 = BgL_iz00_8381; 
goto BgL_zc3anonymousza32622ze3z83_1728;} } } } } 
}



/* pregexp */
BGL_EXPORTED_DEF obj_t BGl_pregexpz00zz__pregexpz00(obj_t BgL_sz00_63)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 700 */
BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 = BTRUE; 
{ /* Llib/pregexp.scm 703 */
obj_t BgL_arg2641z00_1754;obj_t BgL_arg2642z00_1755;
BgL_arg2641z00_1754 = BGl_keyword3889z00zz__pregexpz00; 
{ /* Llib/pregexp.scm 703 */
obj_t BgL_arg2645z00_1758;
BgL_arg2645z00_1758 = 
BGl_pregexpzd2readzd2patternz00zz__pregexpz00(BgL_sz00_63, 
BINT(((long)0)), 
STRING_LENGTH(BgL_sz00_63)); 
{ /* Llib/pregexp.scm 703 */
obj_t BgL_pairz00_3145;
if(
PAIRP(BgL_arg2645z00_1758))
{ /* Llib/pregexp.scm 703 */
BgL_pairz00_3145 = BgL_arg2645z00_1758; }  else 
{ 
obj_t BgL_auxz00_8389;
BgL_auxz00_8389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28968)), BGl_string3868z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_arg2645z00_1758); 
FAILURE(BgL_auxz00_8389,BFALSE,BFALSE);} 
BgL_arg2642z00_1755 = 
CAR(BgL_pairz00_3145); } } 
{ /* Llib/pregexp.scm 703 */
obj_t BgL_list2643z00_1756;
{ /* Llib/pregexp.scm 703 */
obj_t BgL_arg2644z00_1757;
BgL_arg2644z00_1757 = 
MAKE_PAIR(BgL_arg2642z00_1755, BNIL); 
BgL_list2643z00_1756 = 
MAKE_PAIR(BgL_arg2641z00_1754, BgL_arg2644z00_1757); } 
return BgL_list2643z00_1756;} } } 
}



/* _pregexp */
obj_t BGl__pregexpz00zz__pregexpz00(obj_t BgL_envz00_3687, obj_t BgL_sz00_3688)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 700 */
{ /* Llib/pregexp.scm 703 */
obj_t BgL_auxz00_8396;
if(
STRINGP(BgL_sz00_3688))
{ /* Llib/pregexp.scm 703 */
BgL_auxz00_8396 = BgL_sz00_3688
; }  else 
{ 
obj_t BgL_auxz00_8399;
BgL_auxz00_8399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)28970)), BGl_string4058z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_sz00_3688); 
FAILURE(BgL_auxz00_8399,BFALSE,BFALSE);} 
return 
BGl_pregexpz00zz__pregexpz00(BgL_auxz00_8396);} } 
}



/* pregexp-match-positions */
BGL_EXPORTED_DEF obj_t BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(obj_t BgL_patz00_64, obj_t BgL_strz00_65, obj_t BgL_optzd2argszd2_66)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 705 */
if(
STRINGP(BgL_patz00_64))
{ /* Llib/pregexp.scm 707 */
BgL_patz00_64 = 
BGl_pregexpz00zz__pregexpz00(BgL_patz00_64); }  else 
{ /* Llib/pregexp.scm 707 */
if(
PAIRP(BgL_patz00_64))
{ /* Llib/pregexp.scm 708 */BTRUE; }  else 
{ /* Llib/pregexp.scm 710 */
obj_t BgL_list2650z00_1763;
{ /* Llib/pregexp.scm 710 */
obj_t BgL_arg2651z00_1764;obj_t BgL_arg2652z00_1765;
BgL_arg2651z00_1764 = BGl_symbol4059z00zz__pregexpz00; 
BgL_arg2652z00_1765 = 
MAKE_PAIR(BgL_patz00_64, BNIL); 
BgL_list2650z00_1763 = 
MAKE_PAIR(BgL_arg2651z00_1764, BgL_arg2652z00_1765); } 
BGl_errorz00zz__errorz00(BGl_string3868z00zz__pregexpz00, BGl_symbol4061z00zz__pregexpz00, 
CAR(BgL_list2650z00_1763)); } } 
{ /* Llib/pregexp.scm 712 */
long BgL_strzd2lenzd2_1766;
BgL_strzd2lenzd2_1766 = 
STRING_LENGTH(BgL_strz00_65); 
{ /* Llib/pregexp.scm 712 */
obj_t BgL_startz00_1767;
if(
NULLP(BgL_optzd2argszd2_66))
{ /* Llib/pregexp.scm 713 */
BgL_startz00_1767 = 
BINT(((long)0)); }  else 
{ /* Llib/pregexp.scm 714 */
obj_t BgL_startz00_1778;
{ /* Llib/pregexp.scm 714 */
obj_t BgL_pairz00_3159;
{ /* Llib/pregexp.scm 714 */
obj_t BgL_aux3750z00_4466;
BgL_aux3750z00_4466 = BgL_optzd2argszd2_66; 
if(
PAIRP(BgL_aux3750z00_4466))
{ /* Llib/pregexp.scm 714 */
BgL_pairz00_3159 = BgL_aux3750z00_4466; }  else 
{ 
obj_t BgL_auxz00_8419;
BgL_auxz00_8419 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29407)), BGl_string4062z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3750z00_4466); 
FAILURE(BgL_auxz00_8419,BFALSE,BFALSE);} } 
BgL_startz00_1778 = 
CAR(BgL_pairz00_3159); } 
{ /* Llib/pregexp.scm 715 */
obj_t BgL_pairz00_3160;
{ /* Llib/pregexp.scm 715 */
obj_t BgL_aux3752z00_4468;
BgL_aux3752z00_4468 = BgL_optzd2argszd2_66; 
if(
PAIRP(BgL_aux3752z00_4468))
{ /* Llib/pregexp.scm 715 */
BgL_pairz00_3160 = BgL_aux3752z00_4468; }  else 
{ 
obj_t BgL_auxz00_8426;
BgL_auxz00_8426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29463)), BGl_string4062z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3752z00_4468); 
FAILURE(BgL_auxz00_8426,BFALSE,BFALSE);} } 
BgL_optzd2argszd2_66 = 
CDR(BgL_pairz00_3160); } 
BgL_startz00_1767 = BgL_startz00_1778; } 
{ /* Llib/pregexp.scm 713 */
obj_t BgL_endz00_1768;
if(
NULLP(BgL_optzd2argszd2_66))
{ /* Llib/pregexp.scm 717 */
BgL_endz00_1768 = 
BINT(BgL_strzd2lenzd2_1766); }  else 
{ /* Llib/pregexp.scm 718 */
obj_t BgL_pairz00_3162;
{ /* Llib/pregexp.scm 718 */
obj_t BgL_aux3754z00_4470;
BgL_aux3754z00_4470 = BgL_optzd2argszd2_66; 
if(
PAIRP(BgL_aux3754z00_4470))
{ /* Llib/pregexp.scm 718 */
BgL_pairz00_3162 = BgL_aux3754z00_4470; }  else 
{ 
obj_t BgL_auxz00_8436;
BgL_auxz00_8436 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29578)), BGl_string4062z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3754z00_4470); 
FAILURE(BgL_auxz00_8436,BFALSE,BFALSE);} } 
BgL_endz00_1768 = 
CAR(BgL_pairz00_3162); } 
{ /* Llib/pregexp.scm 717 */

{ 
obj_t BgL_iz00_1770;
BgL_iz00_1770 = BgL_startz00_1767; 
BgL_zc3anonymousza32653ze3z83_1771:
if(
BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_iz00_1770, BgL_endz00_1768))
{ /* Llib/pregexp.scm 721 */
obj_t BgL__ortest_1903z00_1773;
BgL__ortest_1903z00_1773 = 
BGl_pregexpzd2matchzd2positionszd2auxzd2zz__pregexpz00(BgL_patz00_64, BgL_strz00_65, BgL_strzd2lenzd2_1766, BgL_startz00_1767, BgL_endz00_1768, BgL_iz00_1770); 
if(
CBOOL(BgL__ortest_1903z00_1773))
{ /* Llib/pregexp.scm 721 */
return BgL__ortest_1903z00_1773;}  else 
{ 
obj_t BgL_iz00_8446;
BgL_iz00_8446 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1770, 
BINT(((long)1))); 
BgL_iz00_1770 = BgL_iz00_8446; 
goto BgL_zc3anonymousza32653ze3z83_1771;} }  else 
{ /* Llib/pregexp.scm 720 */
return BFALSE;} } } } } } } 
}



/* _pregexp-match-positions */
obj_t BGl__pregexpzd2matchzd2positionsz00zz__pregexpz00(obj_t BgL_envz00_3689, obj_t BgL_patz00_3690, obj_t BgL_strz00_3691, obj_t BgL_optzd2argszd2_3692)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 705 */
{ /* Llib/pregexp.scm 723 */
obj_t BgL_auxz00_8449;
if(
STRINGP(BgL_strz00_3691))
{ /* Llib/pregexp.scm 723 */
BgL_auxz00_8449 = BgL_strz00_3691
; }  else 
{ 
obj_t BgL_auxz00_8452;
BgL_auxz00_8452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29772)), BGl_string4063z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_strz00_3691); 
FAILURE(BgL_auxz00_8452,BFALSE,BFALSE);} 
return 
BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(BgL_patz00_3690, BgL_auxz00_8449, BgL_optzd2argszd2_3692);} } 
}



/* pregexp-match */
BGL_EXPORTED_DEF obj_t BGl_pregexpzd2matchzd2zz__pregexpz00(obj_t BgL_patz00_67, obj_t BgL_strz00_68, obj_t BgL_optzd2argszd2_69)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 725 */
{ /* Llib/pregexp.scm 727 */
obj_t BgL_ixzd2prszd2_1779;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_runner2672z00_1803;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_list2668z00_1799;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_arg2669z00_1800;
BgL_arg2669z00_1800 = 
MAKE_PAIR(BgL_optzd2argszd2_69, BNIL); 
BgL_list2668z00_1799 = 
MAKE_PAIR(BgL_strz00_68, BgL_arg2669z00_1800); } 
BgL_runner2672z00_1803 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_patz00_67, BgL_list2668z00_1799); } 
{ /* Llib/pregexp.scm 727 */
obj_t BgL_aux2670z00_1801;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_pairz00_3163;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_aux3758z00_4474;
BgL_aux3758z00_4474 = BgL_runner2672z00_1803; 
if(
PAIRP(BgL_aux3758z00_4474))
{ /* Llib/pregexp.scm 727 */
BgL_pairz00_3163 = BgL_aux3758z00_4474; }  else 
{ 
obj_t BgL_auxz00_8462;
BgL_auxz00_8462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29848)), BGl_string4064z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3758z00_4474); 
FAILURE(BgL_auxz00_8462,BFALSE,BFALSE);} } 
BgL_aux2670z00_1801 = 
CAR(BgL_pairz00_3163); } 
{ /* Llib/pregexp.scm 727 */
obj_t BgL_pairz00_3164;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_aux3760z00_4476;
BgL_aux3760z00_4476 = BgL_runner2672z00_1803; 
if(
PAIRP(BgL_aux3760z00_4476))
{ /* Llib/pregexp.scm 727 */
BgL_pairz00_3164 = BgL_aux3760z00_4476; }  else 
{ 
obj_t BgL_auxz00_8469;
BgL_auxz00_8469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29848)), BGl_string4064z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3760z00_4476); 
FAILURE(BgL_auxz00_8469,BFALSE,BFALSE);} } 
BgL_runner2672z00_1803 = 
CDR(BgL_pairz00_3164); } 
{ /* Llib/pregexp.scm 727 */
obj_t BgL_aux2671z00_1802;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_pairz00_3165;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_aux3762z00_4478;
BgL_aux3762z00_4478 = BgL_runner2672z00_1803; 
if(
PAIRP(BgL_aux3762z00_4478))
{ /* Llib/pregexp.scm 727 */
BgL_pairz00_3165 = BgL_aux3762z00_4478; }  else 
{ 
obj_t BgL_auxz00_8476;
BgL_auxz00_8476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29848)), BGl_string4064z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3762z00_4478); 
FAILURE(BgL_auxz00_8476,BFALSE,BFALSE);} } 
{ /* Llib/pregexp.scm 727 */
obj_t BgL_aux3764z00_4480;
BgL_aux3764z00_4480 = 
CAR(BgL_pairz00_3165); 
if(
STRINGP(BgL_aux3764z00_4480))
{ /* Llib/pregexp.scm 727 */
BgL_aux2671z00_1802 = BgL_aux3764z00_4480; }  else 
{ 
obj_t BgL_auxz00_8483;
BgL_auxz00_8483 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29848)), BGl_string4064z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_aux3764z00_4480); 
FAILURE(BgL_auxz00_8483,BFALSE,BFALSE);} } } 
{ /* Llib/pregexp.scm 727 */
obj_t BgL_pairz00_3166;
{ /* Llib/pregexp.scm 727 */
obj_t BgL_aux3766z00_4482;
BgL_aux3766z00_4482 = BgL_runner2672z00_1803; 
if(
PAIRP(BgL_aux3766z00_4482))
{ /* Llib/pregexp.scm 727 */
BgL_pairz00_3166 = BgL_aux3766z00_4482; }  else 
{ 
obj_t BgL_auxz00_8489;
BgL_auxz00_8489 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29848)), BGl_string4064z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3766z00_4482); 
FAILURE(BgL_auxz00_8489,BFALSE,BFALSE);} } 
BgL_runner2672z00_1803 = 
CDR(BgL_pairz00_3166); } 
BgL_ixzd2prszd2_1779 = 
BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(BgL_aux2670z00_1801, BgL_aux2671z00_1802, BgL_runner2672z00_1803); } } } 
if(
CBOOL(BgL_ixzd2prszd2_1779))
{ /* Llib/pregexp.scm 728 */
if(
NULLP(BgL_ixzd2prszd2_1779))
{ /* Llib/pregexp.scm 729 */
return BNIL;}  else 
{ /* Llib/pregexp.scm 729 */
obj_t BgL_head1939z00_1783;
BgL_head1939z00_1783 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_l1937z00_1785;obj_t BgL_tail1940z00_1786;
BgL_l1937z00_1785 = BgL_ixzd2prszd2_1779; 
BgL_tail1940z00_1786 = BgL_head1939z00_1783; 
BgL_zc3anonymousza32659ze3z83_1787:
if(
PAIRP(BgL_l1937z00_1785))
{ /* Llib/pregexp.scm 729 */
obj_t BgL_newtail1941z00_1789;
{ /* Llib/pregexp.scm 729 */
obj_t BgL_arg2663z00_1791;
{ /* Llib/pregexp.scm 729 */
obj_t BgL_ixzd2przd2_1793;
BgL_ixzd2przd2_1793 = 
CAR(BgL_l1937z00_1785); 
if(
CBOOL(BgL_ixzd2przd2_1793))
{ /* Llib/pregexp.scm 732 */
obj_t BgL_arg2665z00_1795;obj_t BgL_arg2666z00_1796;
{ /* Llib/pregexp.scm 732 */
obj_t BgL_pairz00_3172;
if(
PAIRP(BgL_ixzd2przd2_1793))
{ /* Llib/pregexp.scm 732 */
BgL_pairz00_3172 = BgL_ixzd2przd2_1793; }  else 
{ 
obj_t BgL_auxz00_8507;
BgL_auxz00_8507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30028)), BGl_string4065z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_ixzd2przd2_1793); 
FAILURE(BgL_auxz00_8507,BFALSE,BFALSE);} 
BgL_arg2665z00_1795 = 
CAR(BgL_pairz00_3172); } 
BgL_arg2666z00_1796 = 
CDR(BgL_ixzd2przd2_1793); 
{ /* Llib/pregexp.scm 732 */
long BgL_auxz00_8522;long BgL_auxz00_8513;
{ /* Llib/pregexp.scm 732 */
obj_t BgL_auxz00_8523;
if(
INTEGERP(BgL_arg2666z00_1796))
{ /* Llib/pregexp.scm 732 */
BgL_auxz00_8523 = BgL_arg2666z00_1796
; }  else 
{ 
obj_t BgL_auxz00_8526;
BgL_auxz00_8526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30008)), BGl_string4065z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_arg2666z00_1796); 
FAILURE(BgL_auxz00_8526,BFALSE,BFALSE);} 
BgL_auxz00_8522 = 
(long)CINT(BgL_auxz00_8523); } 
{ /* Llib/pregexp.scm 732 */
obj_t BgL_auxz00_8514;
if(
INTEGERP(BgL_arg2665z00_1795))
{ /* Llib/pregexp.scm 732 */
BgL_auxz00_8514 = BgL_arg2665z00_1795
; }  else 
{ 
obj_t BgL_auxz00_8517;
BgL_auxz00_8517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30008)), BGl_string4065z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_arg2665z00_1795); 
FAILURE(BgL_auxz00_8517,BFALSE,BFALSE);} 
BgL_auxz00_8513 = 
(long)CINT(BgL_auxz00_8514); } 
BgL_arg2663z00_1791 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_68, BgL_auxz00_8513, BgL_auxz00_8522); } }  else 
{ /* Llib/pregexp.scm 731 */
BgL_arg2663z00_1791 = BFALSE; } } 
BgL_newtail1941z00_1789 = 
MAKE_PAIR(BgL_arg2663z00_1791, BNIL); } 
SET_CDR(BgL_tail1940z00_1786, BgL_newtail1941z00_1789); 
{ 
obj_t BgL_tail1940z00_8536;obj_t BgL_l1937z00_8534;
BgL_l1937z00_8534 = 
CDR(BgL_l1937z00_1785); 
BgL_tail1940z00_8536 = BgL_newtail1941z00_1789; 
BgL_tail1940z00_1786 = BgL_tail1940z00_8536; 
BgL_l1937z00_1785 = BgL_l1937z00_8534; 
goto BgL_zc3anonymousza32659ze3z83_1787;} }  else 
{ /* Llib/pregexp.scm 729 */
if(
NULLP(BgL_l1937z00_1785))
{ /* Llib/pregexp.scm 729 */
return 
CDR(BgL_head1939z00_1783);}  else 
{ /* Llib/pregexp.scm 729 */
return 
BGl_errorz00zz__errorz00(BGl_string3975z00zz__pregexpz00, BGl_string3976z00zz__pregexpz00, BgL_l1937z00_1785);} } } } }  else 
{ /* Llib/pregexp.scm 728 */
return BFALSE;} } } 
}



/* _pregexp-match */
obj_t BGl__pregexpzd2matchzd2zz__pregexpz00(obj_t BgL_envz00_3693, obj_t BgL_patz00_3694, obj_t BgL_strz00_3695, obj_t BgL_optzd2argszd2_3696)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 725 */
{ /* Llib/pregexp.scm 727 */
obj_t BgL_auxz00_8541;
if(
STRINGP(BgL_strz00_3695))
{ /* Llib/pregexp.scm 727 */
BgL_auxz00_8541 = BgL_strz00_3695
; }  else 
{ 
obj_t BgL_auxz00_8544;
BgL_auxz00_8544 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)29834)), BGl_string4066z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_strz00_3695); 
FAILURE(BgL_auxz00_8544,BFALSE,BFALSE);} 
return 
BGl_pregexpzd2matchzd2zz__pregexpz00(BgL_patz00_3694, BgL_auxz00_8541, BgL_optzd2argszd2_3696);} } 
}



/* pregexp-split */
BGL_EXPORTED_DEF obj_t BGl_pregexpzd2splitzd2zz__pregexpz00(obj_t BgL_patz00_70, obj_t BgL_strz00_71)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 735 */
{ /* Llib/pregexp.scm 738 */
long BgL_nz00_1804;
BgL_nz00_1804 = 
STRING_LENGTH(BgL_strz00_71); 
{ 
obj_t BgL_iz00_1807;obj_t BgL_rz00_1808;bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1809;
{ /* Llib/pregexp.scm 739 */
obj_t BgL_aux3794z00_4510;
BgL_iz00_1807 = 
BINT(((long)0)); 
BgL_rz00_1808 = BNIL; 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1809 = ((bool_t)0); 
BgL_zc3anonymousza32673ze3z83_1810:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1807, 
BINT(BgL_nz00_1804)))
{ /* Llib/pregexp.scm 740 */
BgL_aux3794z00_4510 = 
BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_rz00_1808); }  else 
{ /* Llib/pregexp.scm 741 */
obj_t BgL_g1907z00_1812;
{ /* Llib/pregexp.scm 741 */
obj_t BgL_list2686z00_1829;
{ /* Llib/pregexp.scm 741 */
obj_t BgL_arg2687z00_1830;
BgL_arg2687z00_1830 = 
MAKE_PAIR(
BINT(BgL_nz00_1804), BNIL); 
BgL_list2686z00_1829 = 
MAKE_PAIR(BgL_iz00_1807, BgL_arg2687z00_1830); } 
BgL_g1907z00_1812 = 
BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(BgL_patz00_70, BgL_strz00_71, BgL_list2686z00_1829); } 
if(
CBOOL(BgL_g1907z00_1812))
{ /* Llib/pregexp.scm 744 */
obj_t BgL_jkz00_1815;
{ /* Llib/pregexp.scm 744 */
obj_t BgL_pairz00_3182;
if(
PAIRP(BgL_g1907z00_1812))
{ /* Llib/pregexp.scm 744 */
BgL_pairz00_3182 = BgL_g1907z00_1812; }  else 
{ 
obj_t BgL_auxz00_8562;
BgL_auxz00_8562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30453)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_g1907z00_1812); 
FAILURE(BgL_auxz00_8562,BFALSE,BFALSE);} 
BgL_jkz00_1815 = 
CAR(BgL_pairz00_3182); } 
{ /* Llib/pregexp.scm 745 */
obj_t BgL_jz00_1816;obj_t BgL_kz00_1817;
{ /* Llib/pregexp.scm 745 */
obj_t BgL_pairz00_3183;
if(
PAIRP(BgL_jkz00_1815))
{ /* Llib/pregexp.scm 745 */
BgL_pairz00_3183 = BgL_jkz00_1815; }  else 
{ 
obj_t BgL_auxz00_8569;
BgL_auxz00_8569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30491)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_jkz00_1815); 
FAILURE(BgL_auxz00_8569,BFALSE,BFALSE);} 
BgL_jz00_1816 = 
CAR(BgL_pairz00_3183); } 
BgL_kz00_1817 = 
CDR(BgL_jkz00_1815); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_jz00_1816, BgL_kz00_1817))
{ /* Llib/pregexp.scm 749 */
obj_t BgL_arg2676z00_1819;obj_t BgL_arg2677z00_1820;
BgL_arg2676z00_1819 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1817, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 750 */
obj_t BgL_arg2678z00_1821;
{ /* Llib/pregexp.scm 750 */
obj_t BgL_arg2679z00_1822;
BgL_arg2679z00_1822 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_jz00_1816, 
BINT(((long)1))); 
{ /* Llib/pregexp.scm 750 */
long BgL_auxz00_8590;long BgL_auxz00_8581;
{ /* Llib/pregexp.scm 750 */
obj_t BgL_auxz00_8591;
if(
INTEGERP(BgL_arg2679z00_1822))
{ /* Llib/pregexp.scm 750 */
BgL_auxz00_8591 = BgL_arg2679z00_1822
; }  else 
{ 
obj_t BgL_auxz00_8594;
BgL_auxz00_8594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30774)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_arg2679z00_1822); 
FAILURE(BgL_auxz00_8594,BFALSE,BFALSE);} 
BgL_auxz00_8590 = 
(long)CINT(BgL_auxz00_8591); } 
{ /* Llib/pregexp.scm 750 */
obj_t BgL_auxz00_8582;
if(
INTEGERP(BgL_iz00_1807))
{ /* Llib/pregexp.scm 750 */
BgL_auxz00_8582 = BgL_iz00_1807
; }  else 
{ 
obj_t BgL_auxz00_8585;
BgL_auxz00_8585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30774)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1807); 
FAILURE(BgL_auxz00_8585,BFALSE,BFALSE);} 
BgL_auxz00_8581 = 
(long)CINT(BgL_auxz00_8582); } 
BgL_arg2678z00_1821 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_71, BgL_auxz00_8581, BgL_auxz00_8590); } } 
BgL_arg2677z00_1820 = 
MAKE_PAIR(BgL_arg2678z00_1821, BgL_rz00_1808); } 
{ 
bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8603;obj_t BgL_rz00_8602;obj_t BgL_iz00_8601;
BgL_iz00_8601 = BgL_arg2676z00_1819; 
BgL_rz00_8602 = BgL_arg2677z00_1820; 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8603 = ((bool_t)1); 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1809 = BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8603; 
BgL_rz00_1808 = BgL_rz00_8602; 
BgL_iz00_1807 = BgL_iz00_8601; 
goto BgL_zc3anonymousza32673ze3z83_1810;} }  else 
{ /* Llib/pregexp.scm 751 */
bool_t BgL_testz00_8604;
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_jz00_1816, BgL_iz00_1807))
{ /* Llib/pregexp.scm 751 */
BgL_testz00_8604 = BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1809
; }  else 
{ /* Llib/pregexp.scm 751 */
BgL_testz00_8604 = ((bool_t)0)
; } 
if(BgL_testz00_8604)
{ 
bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8608;obj_t BgL_iz00_8607;
BgL_iz00_8607 = BgL_kz00_1817; 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8608 = ((bool_t)0); 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1809 = BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8608; 
BgL_iz00_1807 = BgL_iz00_8607; 
goto BgL_zc3anonymousza32673ze3z83_1810;}  else 
{ /* Llib/pregexp.scm 755 */
obj_t BgL_arg2681z00_1824;
{ /* Llib/pregexp.scm 755 */
obj_t BgL_arg2682z00_1825;
{ /* Llib/pregexp.scm 755 */
long BgL_auxz00_8618;long BgL_auxz00_8609;
{ /* Llib/pregexp.scm 755 */
obj_t BgL_auxz00_8619;
if(
INTEGERP(BgL_jz00_1816))
{ /* Llib/pregexp.scm 755 */
BgL_auxz00_8619 = BgL_jz00_1816
; }  else 
{ 
obj_t BgL_auxz00_8622;
BgL_auxz00_8622 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31077)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_jz00_1816); 
FAILURE(BgL_auxz00_8622,BFALSE,BFALSE);} 
BgL_auxz00_8618 = 
(long)CINT(BgL_auxz00_8619); } 
{ /* Llib/pregexp.scm 755 */
obj_t BgL_auxz00_8610;
if(
INTEGERP(BgL_iz00_1807))
{ /* Llib/pregexp.scm 755 */
BgL_auxz00_8610 = BgL_iz00_1807
; }  else 
{ 
obj_t BgL_auxz00_8613;
BgL_auxz00_8613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31077)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1807); 
FAILURE(BgL_auxz00_8613,BFALSE,BFALSE);} 
BgL_auxz00_8609 = 
(long)CINT(BgL_auxz00_8610); } 
BgL_arg2682z00_1825 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_71, BgL_auxz00_8609, BgL_auxz00_8618); } 
BgL_arg2681z00_1824 = 
MAKE_PAIR(BgL_arg2682z00_1825, BgL_rz00_1808); } 
{ 
bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8631;obj_t BgL_rz00_8630;obj_t BgL_iz00_8629;
BgL_iz00_8629 = BgL_kz00_1817; 
BgL_rz00_8630 = BgL_arg2681z00_1824; 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8631 = ((bool_t)0); 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1809 = BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8631; 
BgL_rz00_1808 = BgL_rz00_8630; 
BgL_iz00_1807 = BgL_iz00_8629; 
goto BgL_zc3anonymousza32673ze3z83_1810;} } } } }  else 
{ /* Llib/pregexp.scm 756 */
obj_t BgL_arg2684z00_1827;
{ /* Llib/pregexp.scm 756 */
obj_t BgL_arg2685z00_1828;
{ /* Llib/pregexp.scm 756 */
long BgL_auxz00_8632;
{ /* Llib/pregexp.scm 756 */
obj_t BgL_auxz00_8633;
if(
INTEGERP(BgL_iz00_1807))
{ /* Llib/pregexp.scm 756 */
BgL_auxz00_8633 = BgL_iz00_1807
; }  else 
{ 
obj_t BgL_auxz00_8636;
BgL_auxz00_8636 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31144)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1807); 
FAILURE(BgL_auxz00_8636,BFALSE,BFALSE);} 
BgL_auxz00_8632 = 
(long)CINT(BgL_auxz00_8633); } 
BgL_arg2685z00_1828 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_71, BgL_auxz00_8632, BgL_nz00_1804); } 
BgL_arg2684z00_1827 = 
MAKE_PAIR(BgL_arg2685z00_1828, BgL_rz00_1808); } 
{ 
bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8646;obj_t BgL_rz00_8645;obj_t BgL_iz00_8643;
BgL_iz00_8643 = 
BINT(BgL_nz00_1804); 
BgL_rz00_8645 = BgL_arg2684z00_1827; 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8646 = ((bool_t)0); 
BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1809 = BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_8646; 
BgL_rz00_1808 = BgL_rz00_8645; 
BgL_iz00_1807 = BgL_iz00_8643; 
goto BgL_zc3anonymousza32673ze3z83_1810;} } } 
{ /* Llib/pregexp.scm 739 */
bool_t BgL_testz00_8648;
if(
PAIRP(BgL_aux3794z00_4510))
{ /* Llib/pregexp.scm 739 */
BgL_testz00_8648 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 739 */
BgL_testz00_8648 = 
NULLP(BgL_aux3794z00_4510)
; } 
if(BgL_testz00_8648)
{ /* Llib/pregexp.scm 739 */
return BgL_aux3794z00_4510;}  else 
{ 
obj_t BgL_auxz00_8652;
BgL_auxz00_8652 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30214)), BGl_string4067z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_aux3794z00_4510); 
FAILURE(BgL_auxz00_8652,BFALSE,BFALSE);} } } } } } 
}



/* _pregexp-split */
obj_t BGl__pregexpzd2splitzd2zz__pregexpz00(obj_t BgL_envz00_3697, obj_t BgL_patz00_3698, obj_t BgL_strz00_3699)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 735 */
{ /* Llib/pregexp.scm 738 */
obj_t BgL_auxz00_8656;
if(
STRINGP(BgL_strz00_3699))
{ /* Llib/pregexp.scm 738 */
BgL_auxz00_8656 = BgL_strz00_3699
; }  else 
{ 
obj_t BgL_auxz00_8659;
BgL_auxz00_8659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)30177)), BGl_string4068z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_strz00_3699); 
FAILURE(BgL_auxz00_8659,BFALSE,BFALSE);} 
return 
BGl_pregexpzd2splitzd2zz__pregexpz00(BgL_patz00_3698, BgL_auxz00_8656);} } 
}



/* pregexp-replace */
BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replacezd2zz__pregexpz00(obj_t BgL_patz00_72, obj_t BgL_strz00_73, obj_t BgL_insz00_74)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 758 */
{ /* Llib/pregexp.scm 760 */
long BgL_nz00_1832;
BgL_nz00_1832 = 
STRING_LENGTH(BgL_strz00_73); 
{ /* Llib/pregexp.scm 760 */
obj_t BgL_ppz00_1833;
{ /* Llib/pregexp.scm 761 */
obj_t BgL_list2691z00_1840;
{ /* Llib/pregexp.scm 761 */
obj_t BgL_arg2693z00_1842;
BgL_arg2693z00_1842 = 
MAKE_PAIR(
BINT(BgL_nz00_1832), BNIL); 
BgL_list2691z00_1840 = 
MAKE_PAIR(
BINT(((long)0)), BgL_arg2693z00_1842); } 
BgL_ppz00_1833 = 
BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(BgL_patz00_72, BgL_strz00_73, BgL_list2691z00_1840); } 
{ /* Llib/pregexp.scm 761 */

if(
CBOOL(BgL_ppz00_1833))
{ /* Llib/pregexp.scm 763 */
long BgL_inszd2lenzd2_1834;obj_t BgL_mzd2izd2_1835;obj_t BgL_mzd2nzd2_1836;
BgL_inszd2lenzd2_1834 = 
STRING_LENGTH(BgL_insz00_74); 
{ /* Llib/pregexp.scm 764 */
obj_t BgL_pairz00_3187;
if(
PAIRP(BgL_ppz00_1833))
{ /* Llib/pregexp.scm 764 */
BgL_pairz00_3187 = BgL_ppz00_1833; }  else 
{ 
obj_t BgL_auxz00_8675;
BgL_auxz00_8675 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31412)), BGl_string4069z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_ppz00_1833); 
FAILURE(BgL_auxz00_8675,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 764 */
obj_t BgL_pairz00_3190;
{ /* Llib/pregexp.scm 764 */
obj_t BgL_aux3800z00_4516;
BgL_aux3800z00_4516 = 
CAR(BgL_pairz00_3187); 
if(
PAIRP(BgL_aux3800z00_4516))
{ /* Llib/pregexp.scm 764 */
BgL_pairz00_3190 = BgL_aux3800z00_4516; }  else 
{ 
obj_t BgL_auxz00_8682;
BgL_auxz00_8682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31406)), BGl_string4069z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3800z00_4516); 
FAILURE(BgL_auxz00_8682,BFALSE,BFALSE);} } 
BgL_mzd2izd2_1835 = 
CAR(BgL_pairz00_3190); } } 
{ /* Llib/pregexp.scm 765 */
obj_t BgL_pairz00_3191;
BgL_pairz00_3191 = BgL_ppz00_1833; 
{ /* Llib/pregexp.scm 765 */
obj_t BgL_pairz00_3194;
{ /* Llib/pregexp.scm 765 */
obj_t BgL_aux3804z00_4520;
BgL_aux3804z00_4520 = 
CAR(BgL_pairz00_3191); 
if(
PAIRP(BgL_aux3804z00_4520))
{ /* Llib/pregexp.scm 765 */
BgL_pairz00_3194 = BgL_aux3804z00_4520; }  else 
{ 
obj_t BgL_auxz00_8690;
BgL_auxz00_8690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31438)), BGl_string4069z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3804z00_4520); 
FAILURE(BgL_auxz00_8690,BFALSE,BFALSE);} } 
BgL_mzd2nzd2_1836 = 
CDR(BgL_pairz00_3194); } } 
{ /* Llib/pregexp.scm 767 */
obj_t BgL_arg2688z00_1837;obj_t BgL_arg2689z00_1838;obj_t BgL_arg2690z00_1839;
{ /* Llib/pregexp.scm 767 */
long BgL_auxz00_8695;
{ /* Llib/pregexp.scm 767 */
obj_t BgL_auxz00_8696;
if(
INTEGERP(BgL_mzd2izd2_1835))
{ /* Llib/pregexp.scm 767 */
BgL_auxz00_8696 = BgL_mzd2izd2_1835
; }  else 
{ 
obj_t BgL_auxz00_8699;
BgL_auxz00_8699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31491)), BGl_string4069z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_mzd2izd2_1835); 
FAILURE(BgL_auxz00_8699,BFALSE,BFALSE);} 
BgL_auxz00_8695 = 
(long)CINT(BgL_auxz00_8696); } 
BgL_arg2688z00_1837 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_73, ((long)0), BgL_auxz00_8695); } 
BgL_arg2689z00_1838 = 
BGl_pregexpzd2replacezd2auxz00zz__pregexpz00(BgL_strz00_73, BgL_insz00_74, BgL_inszd2lenzd2_1834, BgL_ppz00_1833); 
{ /* Llib/pregexp.scm 769 */
long BgL_auxz00_8706;
{ /* Llib/pregexp.scm 769 */
obj_t BgL_auxz00_8707;
if(
INTEGERP(BgL_mzd2nzd2_1836))
{ /* Llib/pregexp.scm 769 */
BgL_auxz00_8707 = BgL_mzd2nzd2_1836
; }  else 
{ 
obj_t BgL_auxz00_8710;
BgL_auxz00_8710 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31582)), BGl_string4069z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_mzd2nzd2_1836); 
FAILURE(BgL_auxz00_8710,BFALSE,BFALSE);} 
BgL_auxz00_8706 = 
(long)CINT(BgL_auxz00_8707); } 
BgL_arg2690z00_1839 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_73, BgL_auxz00_8706, BgL_nz00_1832); } 
return 
string_append_3(BgL_arg2688z00_1837, BgL_arg2689z00_1838, BgL_arg2690z00_1839);} }  else 
{ /* Llib/pregexp.scm 762 */
return BgL_strz00_73;} } } } } 
}



/* _pregexp-replace */
obj_t BGl__pregexpzd2replacezd2zz__pregexpz00(obj_t BgL_envz00_3700, obj_t BgL_patz00_3701, obj_t BgL_strz00_3702, obj_t BgL_insz00_3703)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 758 */
{ /* Llib/pregexp.scm 760 */
obj_t BgL_auxz00_8724;obj_t BgL_auxz00_8717;
if(
STRINGP(BgL_insz00_3703))
{ /* Llib/pregexp.scm 760 */
BgL_auxz00_8724 = BgL_insz00_3703
; }  else 
{ 
obj_t BgL_auxz00_8727;
BgL_auxz00_8727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31230)), BGl_string4070z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_insz00_3703); 
FAILURE(BgL_auxz00_8727,BFALSE,BFALSE);} 
if(
STRINGP(BgL_strz00_3702))
{ /* Llib/pregexp.scm 760 */
BgL_auxz00_8717 = BgL_strz00_3702
; }  else 
{ 
obj_t BgL_auxz00_8720;
BgL_auxz00_8720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31230)), BGl_string4070z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_strz00_3702); 
FAILURE(BgL_auxz00_8720,BFALSE,BFALSE);} 
return 
BGl_pregexpzd2replacezd2zz__pregexpz00(BgL_patz00_3701, BgL_auxz00_8717, BgL_auxz00_8724);} } 
}



/* pregexp-replace* */
BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replaceza2z70zz__pregexpz00(obj_t BgL_patz00_75, obj_t BgL_strz00_76, obj_t BgL_insz00_77)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 771 */
{ /* Llib/pregexp.scm 775 */
obj_t BgL_patz00_1843;long BgL_nz00_1844;long BgL_inszd2lenzd2_1845;
if(
STRINGP(BgL_patz00_75))
{ /* Llib/pregexp.scm 775 */
BgL_patz00_1843 = 
BGl_pregexpz00zz__pregexpz00(BgL_patz00_75); }  else 
{ /* Llib/pregexp.scm 775 */
BgL_patz00_1843 = BgL_patz00_75; } 
BgL_nz00_1844 = 
STRING_LENGTH(BgL_strz00_76); 
BgL_inszd2lenzd2_1845 = 
STRING_LENGTH(BgL_insz00_77); 
{ 
obj_t BgL_iz00_1847;obj_t BgL_rz00_1848;
BgL_iz00_1847 = 
BINT(((long)0)); 
BgL_rz00_1848 = BGl_string4057z00zz__pregexpz00; 
BgL_zc3anonymousza32694ze3z83_1849:
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1847, 
BINT(BgL_nz00_1844)))
{ /* Llib/pregexp.scm 781 */
return BgL_rz00_1848;}  else 
{ /* Llib/pregexp.scm 782 */
obj_t BgL_ppz00_1851;
{ /* Llib/pregexp.scm 782 */
obj_t BgL_list2703z00_1859;
{ /* Llib/pregexp.scm 782 */
obj_t BgL_arg2704z00_1860;
BgL_arg2704z00_1860 = 
MAKE_PAIR(
BINT(BgL_nz00_1844), BNIL); 
BgL_list2703z00_1859 = 
MAKE_PAIR(BgL_iz00_1847, BgL_arg2704z00_1860); } 
BgL_ppz00_1851 = 
BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(BgL_patz00_1843, BgL_strz00_76, BgL_list2703z00_1859); } 
if(
CBOOL(BgL_ppz00_1851))
{ /* Llib/pregexp.scm 793 */
obj_t BgL_arg2696z00_1852;obj_t BgL_arg2697z00_1853;
{ /* Llib/pregexp.scm 793 */
obj_t BgL_pairz00_3198;
if(
PAIRP(BgL_ppz00_1851))
{ /* Llib/pregexp.scm 793 */
BgL_pairz00_3198 = BgL_ppz00_1851; }  else 
{ 
obj_t BgL_auxz00_8748;
BgL_auxz00_8748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32544)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_ppz00_1851); 
FAILURE(BgL_auxz00_8748,BFALSE,BFALSE);} 
{ /* Llib/pregexp.scm 793 */
obj_t BgL_pairz00_3201;
{ /* Llib/pregexp.scm 793 */
obj_t BgL_aux3816z00_4532;
BgL_aux3816z00_4532 = 
CAR(BgL_pairz00_3198); 
if(
PAIRP(BgL_aux3816z00_4532))
{ /* Llib/pregexp.scm 793 */
BgL_pairz00_3201 = BgL_aux3816z00_4532; }  else 
{ 
obj_t BgL_auxz00_8755;
BgL_auxz00_8755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32538)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3816z00_4532); 
FAILURE(BgL_auxz00_8755,BFALSE,BFALSE);} } 
BgL_arg2696z00_1852 = 
CDR(BgL_pairz00_3201); } } 
{ /* Llib/pregexp.scm 796 */
obj_t BgL_arg2698z00_1854;obj_t BgL_arg2699z00_1855;
{ /* Llib/pregexp.scm 796 */
obj_t BgL_arg2700z00_1856;
{ /* Llib/pregexp.scm 796 */
obj_t BgL_pairz00_3202;
BgL_pairz00_3202 = BgL_ppz00_1851; 
{ /* Llib/pregexp.scm 796 */
obj_t BgL_pairz00_3205;
{ /* Llib/pregexp.scm 796 */
obj_t BgL_aux3820z00_4536;
BgL_aux3820z00_4536 = 
CAR(BgL_pairz00_3202); 
if(
PAIRP(BgL_aux3820z00_4536))
{ /* Llib/pregexp.scm 796 */
BgL_pairz00_3205 = BgL_aux3820z00_4536; }  else 
{ 
obj_t BgL_auxz00_8763;
BgL_auxz00_8763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32656)), BGl_string3843z00zz__pregexpz00, BGl_string3844z00zz__pregexpz00, BgL_aux3820z00_4536); 
FAILURE(BgL_auxz00_8763,BFALSE,BFALSE);} } 
BgL_arg2700z00_1856 = 
CAR(BgL_pairz00_3205); } } 
{ /* Llib/pregexp.scm 796 */
long BgL_auxz00_8777;long BgL_auxz00_8768;
{ /* Llib/pregexp.scm 796 */
obj_t BgL_auxz00_8778;
if(
INTEGERP(BgL_arg2700z00_1856))
{ /* Llib/pregexp.scm 796 */
BgL_auxz00_8778 = BgL_arg2700z00_1856
; }  else 
{ 
obj_t BgL_auxz00_8781;
BgL_auxz00_8781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32639)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_arg2700z00_1856); 
FAILURE(BgL_auxz00_8781,BFALSE,BFALSE);} 
BgL_auxz00_8777 = 
(long)CINT(BgL_auxz00_8778); } 
{ /* Llib/pregexp.scm 796 */
obj_t BgL_auxz00_8769;
if(
INTEGERP(BgL_iz00_1847))
{ /* Llib/pregexp.scm 796 */
BgL_auxz00_8769 = BgL_iz00_1847
; }  else 
{ 
obj_t BgL_auxz00_8772;
BgL_auxz00_8772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32639)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1847); 
FAILURE(BgL_auxz00_8772,BFALSE,BFALSE);} 
BgL_auxz00_8768 = 
(long)CINT(BgL_auxz00_8769); } 
BgL_arg2698z00_1854 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_76, BgL_auxz00_8768, BgL_auxz00_8777); } } 
BgL_arg2699z00_1855 = 
BGl_pregexpzd2replacezd2auxz00zz__pregexpz00(BgL_strz00_76, BgL_insz00_77, BgL_inszd2lenzd2_1845, BgL_ppz00_1851); 
BgL_arg2697z00_1853 = 
string_append_3(BgL_rz00_1848, BgL_arg2698z00_1854, BgL_arg2699z00_1855); } 
{ 
obj_t BgL_rz00_8790;obj_t BgL_iz00_8789;
BgL_iz00_8789 = BgL_arg2696z00_1852; 
BgL_rz00_8790 = BgL_arg2697z00_1853; 
BgL_rz00_1848 = BgL_rz00_8790; 
BgL_iz00_1847 = BgL_iz00_8789; 
goto BgL_zc3anonymousza32694ze3z83_1849;} }  else 
{ /* Llib/pregexp.scm 783 */
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_iz00_1847, 
BINT(((long)0))))
{ /* Llib/pregexp.scm 784 */
return BgL_strz00_76;}  else 
{ /* Llib/pregexp.scm 792 */
obj_t BgL_arg2702z00_1858;
{ /* Llib/pregexp.scm 792 */
long BgL_auxz00_8794;
{ /* Llib/pregexp.scm 792 */
obj_t BgL_auxz00_8795;
if(
INTEGERP(BgL_iz00_1847))
{ /* Llib/pregexp.scm 792 */
BgL_auxz00_8795 = BgL_iz00_1847
; }  else 
{ 
obj_t BgL_auxz00_8798;
BgL_auxz00_8798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32492)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_iz00_1847); 
FAILURE(BgL_auxz00_8798,BFALSE,BFALSE);} 
BgL_auxz00_8794 = 
(long)CINT(BgL_auxz00_8795); } 
BgL_arg2702z00_1858 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_76, BgL_auxz00_8794, BgL_nz00_1844); } 
return 
string_append(BgL_rz00_1848, BgL_arg2702z00_1858);} } } } } } 
}



/* _pregexp-replace* */
obj_t BGl__pregexpzd2replaceza2z70zz__pregexpz00(obj_t BgL_envz00_3704, obj_t BgL_patz00_3705, obj_t BgL_strz00_3706, obj_t BgL_insz00_3707)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 771 */
{ /* Llib/pregexp.scm 775 */
obj_t BgL_auxz00_8813;obj_t BgL_auxz00_8806;
if(
STRINGP(BgL_insz00_3707))
{ /* Llib/pregexp.scm 775 */
BgL_auxz00_8813 = BgL_insz00_3707
; }  else 
{ 
obj_t BgL_auxz00_8816;
BgL_auxz00_8816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31731)), BGl_string4071z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_insz00_3707); 
FAILURE(BgL_auxz00_8816,BFALSE,BFALSE);} 
if(
STRINGP(BgL_strz00_3706))
{ /* Llib/pregexp.scm 775 */
BgL_auxz00_8806 = BgL_strz00_3706
; }  else 
{ 
obj_t BgL_auxz00_8809;
BgL_auxz00_8809 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)31731)), BGl_string4071z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_strz00_3706); 
FAILURE(BgL_auxz00_8809,BFALSE,BFALSE);} 
return 
BGl_pregexpzd2replaceza2z70zz__pregexpz00(BgL_patz00_3705, BgL_auxz00_8806, BgL_auxz00_8813);} } 
}



/* pregexp-quote */
BGL_EXPORTED_DEF obj_t BGl_pregexpzd2quotezd2zz__pregexpz00(obj_t BgL_sz00_78)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 799 */
{ /* Llib/pregexp.scm 801 */
long BgL_g1909z00_1863;
{ /* Llib/pregexp.scm 801 */
obj_t BgL_auxz00_8821;
{ /* Llib/pregexp.scm 801 */
obj_t BgL_aux3832z00_4548;
BgL_aux3832z00_4548 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
BINT(
STRING_LENGTH(BgL_sz00_78)), 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3832z00_4548))
{ /* Llib/pregexp.scm 801 */
BgL_auxz00_8821 = BgL_aux3832z00_4548
; }  else 
{ 
obj_t BgL_auxz00_8828;
BgL_auxz00_8828 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32797)), BGl_string4072z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3832z00_4548); 
FAILURE(BgL_auxz00_8828,BFALSE,BFALSE);} } 
BgL_g1909z00_1863 = 
(long)CINT(BgL_auxz00_8821); } 
{ 
long BgL_iz00_1866;obj_t BgL_rz00_1867;
BgL_iz00_1866 = BgL_g1909z00_1863; 
BgL_rz00_1867 = BNIL; 
BgL_zc3anonymousza32706ze3z83_1868:
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(
BINT(BgL_iz00_1866), 
BINT(((long)0))))
{ /* Llib/pregexp.scm 802 */
obj_t BgL_auxz00_8837;
{ /* Llib/pregexp.scm 802 */
bool_t BgL_testz00_8838;
if(
PAIRP(BgL_rz00_1867))
{ /* Llib/pregexp.scm 802 */
BgL_testz00_8838 = ((bool_t)1)
; }  else 
{ /* Llib/pregexp.scm 802 */
BgL_testz00_8838 = 
NULLP(BgL_rz00_1867)
; } 
if(BgL_testz00_8838)
{ /* Llib/pregexp.scm 802 */
BgL_auxz00_8837 = BgL_rz00_1867
; }  else 
{ 
obj_t BgL_auxz00_8842;
BgL_auxz00_8842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32863)), BGl_string3843z00zz__pregexpz00, BGl_string3870z00zz__pregexpz00, BgL_rz00_1867); 
FAILURE(BgL_auxz00_8842,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_8837);}  else 
{ /* Llib/pregexp.scm 803 */
long BgL_arg2708z00_1870;obj_t BgL_arg2709z00_1871;
{ /* Llib/pregexp.scm 803 */
obj_t BgL_auxz00_8847;
{ /* Llib/pregexp.scm 803 */
obj_t BgL_aux3836z00_4552;
BgL_aux3836z00_4552 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
BINT(BgL_iz00_1866), 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux3836z00_4552))
{ /* Llib/pregexp.scm 803 */
BgL_auxz00_8847 = BgL_aux3836z00_4552
; }  else 
{ 
obj_t BgL_auxz00_8853;
BgL_auxz00_8853 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32882)), BGl_string3843z00zz__pregexpz00, BGl_string3842z00zz__pregexpz00, BgL_aux3836z00_4552); 
FAILURE(BgL_auxz00_8853,BFALSE,BFALSE);} } 
BgL_arg2708z00_1870 = 
(long)CINT(BgL_auxz00_8847); } 
{ /* Llib/pregexp.scm 804 */
unsigned char BgL_cz00_1872;
{ /* Llib/pregexp.scm 804 */
long BgL_l3178z00_3844;
BgL_l3178z00_3844 = 
STRING_LENGTH(BgL_sz00_78); 
if(
BOUND_CHECK(BgL_iz00_1866, BgL_l3178z00_3844))
{ /* Llib/pregexp.scm 804 */
BgL_cz00_1872 = 
STRING_REF(BgL_sz00_78, BgL_iz00_1866); }  else 
{ 
obj_t BgL_auxz00_8862;
BgL_auxz00_8862 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32915)), BGl_string3849z00zz__pregexpz00, 
BINT(BgL_iz00_1866), BgL_sz00_78); 
FAILURE(BgL_auxz00_8862,BFALSE,BFALSE);} } 
if(
CBOOL(
BGl_memvz00zz__r4_pairs_and_lists_6_3z00(
BCHAR(BgL_cz00_1872), BGl_list4073z00zz__pregexpz00)))
{ /* Llib/pregexp.scm 807 */
obj_t BgL_arg2711z00_1874;
BgL_arg2711z00_1874 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1872), BgL_rz00_1867); 
BgL_arg2709z00_1871 = 
MAKE_PAIR(
BCHAR(((unsigned char)'\\')), BgL_arg2711z00_1874); }  else 
{ /* Llib/pregexp.scm 805 */
BgL_arg2709z00_1871 = 
MAKE_PAIR(
BCHAR(BgL_cz00_1872), BgL_rz00_1867); } } 
{ 
obj_t BgL_rz00_8878;long BgL_iz00_8877;
BgL_iz00_8877 = BgL_arg2708z00_1870; 
BgL_rz00_8878 = BgL_arg2709z00_1871; 
BgL_rz00_1867 = BgL_rz00_8878; 
BgL_iz00_1866 = BgL_iz00_8877; 
goto BgL_zc3anonymousza32706ze3z83_1868;} } } } } 
}



/* _pregexp-quote */
obj_t BGl__pregexpzd2quotezd2zz__pregexpz00(obj_t BgL_envz00_3708, obj_t BgL_sz00_3709)
{ AN_OBJECT;
{ /* Llib/pregexp.scm 799 */
{ /* Llib/pregexp.scm 801 */
obj_t BgL_auxz00_8879;
if(
STRINGP(BgL_sz00_3709))
{ /* Llib/pregexp.scm 801 */
BgL_auxz00_8879 = BgL_sz00_3709
; }  else 
{ 
obj_t BgL_auxz00_8882;
BgL_auxz00_8882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3840z00zz__pregexpz00, 
BINT(((long)32783)), BGl_string4074z00zz__pregexpz00, BGl_string3944z00zz__pregexpz00, BgL_sz00_3709); 
FAILURE(BgL_auxz00_8882,BFALSE,BFALSE);} 
return 
BGl_pregexpzd2quotezd2zz__pregexpz00(BgL_auxz00_8879);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__pregexpz00()
{ AN_OBJECT;
{ /* Llib/pregexp.scm 17 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__pregexpz00()
{ AN_OBJECT;
{ /* Llib/pregexp.scm 17 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__pregexpz00()
{ AN_OBJECT;
{ /* Llib/pregexp.scm 17 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string4075z00zz__pregexpz00));} 
}

#ifdef __cplusplus
}
#endif
