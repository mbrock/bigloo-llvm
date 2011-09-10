/*===========================================================================*/
/*   (Eval/evobject.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/evobject.scm -indent -o objs/obj_u/Eval/evobject.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol5787z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5789z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5801z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5791z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_refz00zz__evobjectz00(obj_t, obj_t, obj_t);
	static obj_t BGl__evalzd2expandzd2instantiatez00zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_symbol5803z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5793z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5805z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5795z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5797z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5799z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza35343ze3z83zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol5812z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5814z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5816z00zz__evobjectz00 = BUNSPEC;
	extern bool_t BGl_evalzd2classzf3z21zz__objectz00(obj_t);
	static obj_t BGl_symbol5818z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5820z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5822z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5824z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5826z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5828z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5830z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5832z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5834z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5836z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_symbol5838z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5840z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5842z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5844z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl__evalzd2expandzd2cozd2instantiatezd2zz__evobjectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol5846z00zz__evobjectz00 = BUNSPEC;
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_symbol5848z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5850z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5852z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5854z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_evalzd2registerzd2classz00zz__evobjectz00(obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol5856z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_refzd2plainzd2zz__evobjectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol5858z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5860z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_evalzd2classzd2slotzd2aliaszd2zz__evobjectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol5862z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5864z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_evalzd2allocatezd2classz00zz__evobjectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol5866z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5868z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5870z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza35349ze3z83zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_symbol5872z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5874z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5876z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_symbol5880z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5882z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5884z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5886z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5888z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5890z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6001z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5901z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5892z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6003z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5894z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6005z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5905z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5896z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6007z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5907z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_evalzd2parsezd2classz00zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_symbol5898z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6009z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol6011z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6013z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5914z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6015z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5916z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6017z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5918z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6019z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6021z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5921z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6023z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_getzd2evalzd2classzd2hashzd2zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6025z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5925z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6027z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5927z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6029z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5929z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6031z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5931z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6033z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5933z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5935z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6036z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5937z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6039z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5939z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6041z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5941z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6045z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5946z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza35221ze3z83zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_symbol6048z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5948z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5950z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5952z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5955z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol6056z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5957z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_evalzd2classzd2predicatez00zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_symbol5959z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5961z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5963z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5965z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5967z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5969z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5971z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_findzd2classzd2zz__objectz00(obj_t);
	static obj_t BGl_symbol5973z00zz__evobjectz00 = BUNSPEC;
	static obj_t
		BGl_makezd2evalzd2withzd2accesszd2bodyzd2plainzd2zz__evobjectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol5975z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5977z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5979z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5981z00zz__evobjectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2expandzd2duplicatez00zz__evobjectz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__evobjectz00();
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2expandzd2instantiatez00zz__evobjectz00(obj_t);
	static obj_t BGl_symbol5983z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5985z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_initzd2slotz72za0zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_symbol5987z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5989z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5991z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5993z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5995z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5997z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol5999z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_keyword5903z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_classzd2allzd2fieldsz00zz__objectz00(obj_t);
	extern obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t);
	extern obj_t create_struct(obj_t, int);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_evalzd2makezd2classz00zz__evobjectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_loopz72z72z00zz__evobjectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	static obj_t BGl_evalzd2fillzd2classz00zz__evobjectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32135ze3z83zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evobjectz00();
	static obj_t BGl_classzd2allzd2slotsz00zz__evobjectz00(obj_t);
	static obj_t BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_initzd2slotzd2zz__evobjectz00(obj_t, obj_t);
	extern bool_t BGl_classzd2fieldzd2indexedzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__evobjectz00();
	static obj_t BGl_zc3anonymousza35117ze3z83zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35120ze3z83zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	extern obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	extern obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t
		BGl_makezd2evalzd2structzb2objectzd2ze3objectz83zz__evobjectz00(obj_t,
		obj_t);
	static obj_t BGl_evalzd2classzd2slotz00zz__evobjectz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_definez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl__evalzd2expandzd2withzd2accesszd2zz__evobjectz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evobjectz00();
	extern obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t
		BGl_makezd2evalzd2withzd2accesszd2bodyzd2indexedzd2zz__evobjectz00(obj_t,
		obj_t, obj_t);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_makezd2evalzd2objectzd2ze3structz31zz__evobjectz00(obj_t,
		obj_t);
	extern obj_t string_to_symbol(char *);
	extern obj_t BGl_evcompilezd2errorzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl__slotzd2virtualpzd2zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	extern long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	static obj_t BGl_evalzd2instantiatezd2checkz00zz__evobjectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern bool_t BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t);
	static obj_t BGl_loopz72z72z72z72zz__evobjectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	extern obj_t BGl_classzd2fieldzd2infoz00zz__objectz00(obj_t);
	extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00(obj_t);
	static obj_t BGl_cozd2instantiatezd2ze3letze3zz__evobjectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__evalzd2classzd2zz__evobjectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_makezd2evalzd2withzd2accesszd2expanderz00zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_expandzd2errorzd2zz__evobjectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35294ze3z83zz__evobjectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__evalzd2expandzd2duplicatez00zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_evalzd2classzd2nilz00zz__evobjectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_slotzd2virtualpzd2zz__evobjectz00(obj_t);
	static obj_t BGl_decomposezd2identzd2zz__evobjectz00(obj_t);
	static obj_t BGl_loopz00zz__evobjectz00(long, obj_t);
	extern bool_t BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_evalzd2duplicatezd2ze3makeze3zz__evobjectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32135ze3_5760z83zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32135ze3_5759z83zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32135ze3_5761z83zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32135ze3_5762z83zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32135ze3_5763z83zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32135ze3_5764z83zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32135ze3_5765z83zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_evalz12z12zz__evalz00(obj_t, obj_t);
	static obj_t BGl_loopz72z72z72z72z00zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	extern obj_t BGl_classzd2evdatazd2zz__objectz00(obj_t);
	static obj_t BGl_loopz72z72zz__evobjectz00(obj_t, long, obj_t);
	static obj_t BGl_fieldzd2ze3slotz31zz__evobjectz00(obj_t);
	static obj_t BGl_refzd2indexzd2zz__evobjectz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_localiza7eza7zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_evalzd2withzd2accesszd2expanderzd2zz__evobjectz00(obj_t,
		obj_t, obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_slotzd2nonzd2virtualzd2idzd2zz__evobjectz00(obj_t);
	static obj_t BGl_evalzd2instantiatezd2ze3makeze3zz__evobjectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__slotzd2nonzd2virtualzd2idzd2zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35180ze3z83zz__evobjectz00(obj_t, obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_zc3anonymousza35185ze3z83zz__evobjectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2expandzd2cozd2instantiatezd2zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evobjectz00();
	extern obj_t BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
	static obj_t BGl_zc3anonymousza35203ze3z83zz__evobjectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2classzd2zz__evobjectz00(obj_t, bool_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol5782z00zz__evobjectz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2expandzd2duplicatezd2envzd2zz__evobjectz00,
		BgL_bgl__evalza7d2expandza7d6067z00,
		BGl__evalzd2expandzd2duplicatez00zz__evobjectz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_listzd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2expandzd2withzd2accesszd2envz00zz__evobjectz00,
		BgL_bgl__evalza7d2expandza7d6068z00,
		BGl__evalzd2expandzd2withzd2accesszd2zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2classzd2envz00zz__evobjectz00,
		BgL_bgl__evalza7d2classza7d26069z00, BGl__evalzd2classzd2zz__evobjectz00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5784z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a326070z00,
		BGl_zc3anonymousza32135ze3_5760z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5785z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a326071z00,
		BGl_zc3anonymousza32135ze3_5759z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5786z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a326072z00,
		BGl_zc3anonymousza32135ze3z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5807z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a326073z00,
		BGl_zc3anonymousza32135ze3_5765z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5808z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a326074z00,
		BGl_zc3anonymousza32135ze3_5764z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5810z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a326075z00,
		BGl_zc3anonymousza32135ze3_5762z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5809z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a326076z00,
		BGl_zc3anonymousza32135ze3_5763z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5811z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a326077z00,
		BGl_zc3anonymousza32135ze3_5761z83zz__evobjectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2expandzd2instantiatezd2envzd2zz__evobjectz00,
		BgL_bgl__evalza7d2expandza7d6078z00,
		BGl__evalzd2expandzd2instantiatez00zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6050z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a356079z00,
		BGl_zc3anonymousza35221ze3z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6062z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a356080z00,
		BGl_zc3anonymousza35294ze3z83zz__evobjectz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6063z00zz__evobjectz00,
		BgL_bgl_za7c3anonymousza7a356081z00,
		BGl_zc3anonymousza35343ze3z83zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5783z00zz__evobjectz00,
		BgL_bgl_string5783za700za7za7_6082za7, "make-", 5);
	      DEFINE_STRING(BGl_string5788z00zz__evobjectz00,
		BgL_bgl_string5788za700za7za7_6083za7, "define", 6);
	      DEFINE_STRING(BGl_string5800z00zz__evobjectz00,
		BgL_bgl_string5800za700za7za7_6084za7, "make-vector", 11);
	      DEFINE_STRING(BGl_string5790z00zz__evobjectz00,
		BgL_bgl_string5790za700za7za7_6085za7, "let", 3);
	      DEFINE_STRING(BGl_string5802z00zz__evobjectz00,
		BgL_bgl_string5802za700za7za7_6086za7, "-len", 4);
	      DEFINE_STRING(BGl_string5792z00zz__evobjectz00,
		BgL_bgl_string5792za700za7za7_6087za7, "object-class-num-set!", 21);
	      DEFINE_STRING(BGl_string5804z00zz__evobjectz00,
		BgL_bgl_string5804za700za7za7_6088za7, "fill-", 5);
	      DEFINE_STRING(BGl_string5794z00zz__evobjectz00,
		BgL_bgl_string5794za700za7za7_6089za7, "class-num", 9);
	      DEFINE_STRING(BGl_string5806z00zz__evobjectz00,
		BgL_bgl_string5806za700za7za7_6090za7, "!", 1);
	      DEFINE_STRING(BGl_string5796z00zz__evobjectz00,
		BgL_bgl_string5796za700za7za7_6091za7, "%object-widening-set!", 21);
	      DEFINE_STRING(BGl_string5798z00zz__evobjectz00,
		BgL_bgl_string5798za700za7za7_6092za7, "vector", 6);
	      DEFINE_STRING(BGl_string5813z00zz__evobjectz00,
		BgL_bgl_string5813za700za7za7_6093za7, "%allocate-", 10);
	      DEFINE_STRING(BGl_string5815z00zz__evobjectz00,
		BgL_bgl_string5815za700za7za7_6094za7, "-nil", 4);
	      DEFINE_STRING(BGl_string5817z00zz__evobjectz00,
		BgL_bgl_string5817za700za7za7_6095za7, "?", 1);
	      DEFINE_STRING(BGl_string5819z00zz__evobjectz00,
		BgL_bgl_string5819za700za7za7_6096za7, "x", 1);
	      DEFINE_STRING(BGl_string5821z00zz__evobjectz00,
		BgL_bgl_string5821za700za7za7_6097za7, "is-a?", 5);
	      DEFINE_STRING(BGl_string5823z00zz__evobjectz00,
		BgL_bgl_string5823za700za7za7_6098za7, "-", 1);
	      DEFINE_STRING(BGl_string5825z00zz__evobjectz00,
		BgL_bgl_string5825za700za7za7_6099za7, "-set!", 5);
	      DEFINE_STRING(BGl_string5827z00zz__evobjectz00,
		BgL_bgl_string5827za700za7za7_6100za7, "vector-set!", 11);
	      DEFINE_STRING(BGl_string5829z00zz__evobjectz00,
		BgL_bgl_string5829za700za7za7_6101za7, "vector-ref-ur", 13);
	      DEFINE_STRING(BGl_string5831z00zz__evobjectz00,
		BgL_bgl_string5831za700za7za7_6102za7, "%object-widening", 16);
	      DEFINE_STRING(BGl_string5833z00zz__evobjectz00,
		BgL_bgl_string5833za700za7za7_6103za7, "o", 1);
	      DEFINE_STRING(BGl_string5835z00zz__evobjectz00,
		BgL_bgl_string5835za700za7za7_6104za7, "i", 1);
	      DEFINE_STRING(BGl_string5837z00zz__evobjectz00,
		BgL_bgl_string5837za700za7za7_6105za7, "v", 1);
	      DEFINE_STRING(BGl_string5839z00zz__evobjectz00,
		BgL_bgl_string5839za700za7za7_6106za7, "if", 2);
	      DEFINE_STRING(BGl_string5841z00zz__evobjectz00,
		BgL_bgl_string5841za700za7za7_6107za7, "bigloo-type-error", 17);
	      DEFINE_STRING(BGl_string5843z00zz__evobjectz00,
		BgL_bgl_string5843za700za7za7_6108za7, "quote", 5);
	      DEFINE_STRING(BGl_string5845z00zz__evobjectz00,
		BgL_bgl_string5845za700za7za7_6109za7, "vector-set-ur!", 14);
	      DEFINE_STRING(BGl_string5847z00zz__evobjectz00,
		BgL_bgl_string5847za700za7za7_6110za7, "vector-ref", 10);
	      DEFINE_STRING(BGl_string5849z00zz__evobjectz00,
		BgL_bgl_string5849za700za7za7_6111za7, "register-class!", 15);
	      DEFINE_STRING(BGl_string5851z00zz__evobjectz00,
		BgL_bgl_string5851za700za7za7_6112za7, "list", 4);
	      DEFINE_STRING(BGl_string5853z00zz__evobjectz00,
		BgL_bgl_string5853za700za7za7_6113za7, "make-class-field", 16);
	      DEFINE_STRING(BGl_string5855z00zz__evobjectz00,
		BgL_bgl_string5855za700za7za7_6114za7, "class-evdata-set!", 17);
	      DEFINE_STRING(BGl_string5857z00zz__evobjectz00,
		BgL_bgl_string5857za700za7za7_6115za7, "slot", 4);
	      DEFINE_STRING(BGl_string5859z00zz__evobjectz00,
		BgL_bgl_string5859za700za7za7_6116za7, "instantiate::", 13);
	      DEFINE_STRING(BGl_string5861z00zz__evobjectz00,
		BgL_bgl_string5861za700za7za7_6117za7, "quasiquote", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_slotzd2virtualpzd2envz00zz__evobjectz00,
		BgL_bgl__slotza7d2virtualp6118za7, BGl__slotzd2virtualpzd2zz__evobjectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5863z00zz__evobjectz00,
		BgL_bgl_string5863za700za7za7_6119za7, "unquote", 7);
	      DEFINE_STRING(BGl_string5865z00zz__evobjectz00,
		BgL_bgl_string5865za700za7za7_6120za7, "unless", 6);
	      DEFINE_STRING(BGl_string5867z00zz__evobjectz00,
		BgL_bgl_string5867za700za7za7_6121za7, "eq?", 3);
	      DEFINE_STRING(BGl_string5869z00zz__evobjectz00,
		BgL_bgl_string5869za700za7za7_6122za7, "c", 1);
	      DEFINE_STRING(BGl_string5871z00zz__evobjectz00,
		BgL_bgl_string5871za700za7za7_6123za7, "assq", 4);
	      DEFINE_STRING(BGl_string5873z00zz__evobjectz00,
		BgL_bgl_string5873za700za7za7_6124za7, "pair?", 5);
	      DEFINE_STRING(BGl_string5875z00zz__evobjectz00,
		BgL_bgl_string5875za700za7za7_6125za7, "cadr", 4);
	      DEFINE_STRING(BGl_string5877z00zz__evobjectz00,
		BgL_bgl_string5877za700za7za7_6126za7, "error/source", 12);
	      DEFINE_STRING(BGl_string5878z00zz__evobjectz00,
		BgL_bgl_string5878za700za7za7_6127za7,
		"value provided for read-only virtual slot", 41);
	      DEFINE_STRING(BGl_string5879z00zz__evobjectz00,
		BgL_bgl_string5879za700za7za7_6128za7, "argument missing", 16);
	      DEFINE_STRING(BGl_string5881z00zz__evobjectz00,
		BgL_bgl_string5881za700za7za7_6129za7, "lst", 3);
	      DEFINE_STRING(BGl_string5883z00zz__evobjectz00,
		BgL_bgl_string5883za700za7za7_6130za7, "filter", 6);
	      DEFINE_STRING(BGl_string5885z00zz__evobjectz00,
		BgL_bgl_string5885za700za7za7_6131za7, "lambda", 6);
	      DEFINE_STRING(BGl_string5887z00zz__evobjectz00,
		BgL_bgl_string5887za700za7za7_6132za7, "s", 1);
	      DEFINE_STRING(BGl_string6000z00zz__evobjectz00,
		BgL_bgl_string6000za700za7za7_6133za7, "r", 1);
	      DEFINE_STRING(BGl_string5900z00zz__evobjectz00,
		BgL_bgl_string5900za700za7za7_6134za7, "Illegal slot(s)", 15);
	      DEFINE_STRING(BGl_string5889z00zz__evobjectz00,
		BgL_bgl_string5889za700za7za7_6135za7, "or", 2);
	      DEFINE_STRING(BGl_string5891z00zz__evobjectz00,
		BgL_bgl_string5891za700za7za7_6136za7, "not", 3);
	      DEFINE_STRING(BGl_string6002z00zz__evobjectz00,
		BgL_bgl_string6002za700za7za7_6137za7, "-ref", 4);
	      DEFINE_STRING(BGl_string5902z00zz__evobjectz00,
		BgL_bgl_string5902za700za7za7_6138za7, "define-expander", 15);
	      DEFINE_STRING(BGl_string5893z00zz__evobjectz00,
		BgL_bgl_string5893za700za7za7_6139za7, "symbol?", 7);
	      DEFINE_STRING(BGl_string6004z00zz__evobjectz00,
		BgL_bgl_string6004za700za7za7_6140za7, "define-method", 13);
	      DEFINE_STRING(BGl_string5904z00zz__evobjectz00,
		BgL_bgl_string5904za700za7za7_6141za7, "eval!", 5);
	      DEFINE_STRING(BGl_string5895z00zz__evobjectz00,
		BgL_bgl_string5895za700za7za7_6142za7, "car", 3);
	      DEFINE_STRING(BGl_string6006z00zz__evobjectz00,
		BgL_bgl_string6006za700za7za7_6143za7, "object->struct", 14);
	      DEFINE_STRING(BGl_string5906z00zz__evobjectz00,
		BgL_bgl_string5906za700za7za7_6144za7, "e", 1);
	      DEFINE_STRING(BGl_string5897z00zz__evobjectz00,
		BgL_bgl_string5897za700za7za7_6145za7, "memq", 4);
	      DEFINE_STRING(BGl_string6008z00zz__evobjectz00,
		BgL_bgl_string6008za700za7za7_6146za7, "obj::", 5);
	      DEFINE_STRING(BGl_string5908z00zz__evobjectz00,
		BgL_bgl_string5908za700za7za7_6147za7, "cdr", 3);
	      DEFINE_STRING(BGl_string6010z00zz__evobjectz00,
		BgL_bgl_string6010za700za7za7_6148za7, "res", 3);
	      DEFINE_STRING(BGl_string5910z00zz__evobjectz00,
		BgL_bgl_string5910za700za7za7_6149za7, "Cannot find class", 17);
	      DEFINE_STRING(BGl_string5909z00zz__evobjectz00,
		BgL_bgl_string5909za700za7za7_6150za7, "instantiate", 11);
	      DEFINE_STRING(BGl_string5899z00zz__evobjectz00,
		BgL_bgl_string5899za700za7za7_6151za7, "error", 5);
	      DEFINE_STRING(BGl_string5911z00zz__evobjectz00,
		BgL_bgl_string5911za700za7za7_6152za7,
		"/tmp/bigloo/runtime/Eval/evobject.scm", 37);
	      DEFINE_STRING(BGl_string6012z00zz__evobjectz00,
		BgL_bgl_string6012za700za7za7_6153za7, "make-struct", 11);
	      DEFINE_STRING(BGl_string5912z00zz__evobjectz00,
		BgL_bgl_string5912za700za7za7_6154za7, "_eval-expand-instantiate", 24);
	      DEFINE_STRING(BGl_string5913z00zz__evobjectz00,
		BgL_bgl_string5913za700za7za7_6155za7, "symbol", 6);
	      DEFINE_STRING(BGl_string6014z00zz__evobjectz00,
		BgL_bgl_string6014za700za7za7_6156za7, "struct-key-set!", 15);
	      DEFINE_STRING(BGl_string5915z00zz__evobjectz00,
		BgL_bgl_string5915za700za7za7_6157za7, "duplicate::", 11);
	      DEFINE_STRING(BGl_string6016z00zz__evobjectz00,
		BgL_bgl_string6016za700za7za7_6158za7, "struct-set!", 11);
	      DEFINE_STRING(BGl_string5917z00zz__evobjectz00,
		BgL_bgl_string5917za700za7za7_6159za7, "let*", 4);
	      DEFINE_STRING(BGl_string6018z00zz__evobjectz00,
		BgL_bgl_string6018za700za7za7_6160za7, "obj", 3);
	      DEFINE_STRING(BGl_string6020z00zz__evobjectz00,
		BgL_bgl_string6020za700za7za7_6161za7, "struct+object->object", 21);
	      DEFINE_STRING(BGl_string5920z00zz__evobjectz00,
		BgL_bgl_string5920za700za7za7_6162za7, "object missing", 14);
	      DEFINE_STRING(BGl_string5919z00zz__evobjectz00,
		BgL_bgl_string5919za700za7za7_6163za7, "null?", 5);
	      DEFINE_STRING(BGl_string6022z00zz__evobjectz00,
		BgL_bgl_string6022za700za7za7_6164za7, "struct::struct", 14);
	      DEFINE_STRING(BGl_string5922z00zz__evobjectz00,
		BgL_bgl_string5922za700za7za7_6165za7, "cddr", 4);
	      DEFINE_STRING(BGl_string5923z00zz__evobjectz00,
		BgL_bgl_string5923za700za7za7_6166za7, "duplicate", 9);
	      DEFINE_STRING(BGl_string6024z00zz__evobjectz00,
		BgL_bgl_string6024za700za7za7_6167za7, "struct-ref", 10);
	      DEFINE_STRING(BGl_string5924z00zz__evobjectz00,
		BgL_bgl_string5924za700za7za7_6168za7, "_eval-expand-duplicate", 22);
	      DEFINE_STRING(BGl_string6026z00zz__evobjectz00,
		BgL_bgl_string6026za700za7za7_6169za7, "struct", 6);
	      DEFINE_STRING(BGl_string5926z00zz__evobjectz00,
		BgL_bgl_string5926za700za7za7_6170za7, "with-access::", 13);
	      DEFINE_STRING(BGl_string6028z00zz__evobjectz00,
		BgL_bgl_string6028za700za7za7_6171za7, "*", 1);
	      DEFINE_STRING(BGl_string5928z00zz__evobjectz00,
		BgL_bgl_string5928za700za7za7_6172za7, "match-case", 10);
	      DEFINE_STRING(BGl_string6030z00zz__evobjectz00,
		BgL_bgl_string6030za700za7za7_6173za7, "get", 3);
	      DEFINE_STRING(BGl_string5930z00zz__evobjectz00,
		BgL_bgl_string5930za700za7za7_6174za7, "?-", 2);
	      DEFINE_STRING(BGl_string6032z00zz__evobjectz00,
		BgL_bgl_string6032za700za7za7_6175za7, "set", 3);
	      DEFINE_STRING(BGl_string5932z00zz__evobjectz00,
		BgL_bgl_string5932za700za7za7_6176za7, "?i", 2);
	      DEFINE_STRING(BGl_string6034z00zz__evobjectz00,
		BgL_bgl_string6034za700za7za7_6177za7, "eval", 4);
	      DEFINE_STRING(BGl_string5934z00zz__evobjectz00,
		BgL_bgl_string5934za700za7za7_6178za7, "and", 3);
	      DEFINE_STRING(BGl_string6035z00zz__evobjectz00,
		BgL_bgl_string6035za700za7za7_6179za7, "Illegal indexed slot declaration",
		32);
	      DEFINE_STRING(BGl_string5936z00zz__evobjectz00,
		BgL_bgl_string5936za700za7za7_6180za7, "list?", 5);
	      DEFINE_STRING(BGl_string6037z00zz__evobjectz00,
		BgL_bgl_string6037za700za7za7_6181za7, "read-only", 9);
	      DEFINE_STRING(BGl_string6038z00zz__evobjectz00,
		BgL_bgl_string6038za700za7za7_6182za7, "Illegal slot declaration", 24);
	      DEFINE_STRING(BGl_string5938z00zz__evobjectz00,
		BgL_bgl_string5938za700za7za7_6183za7, "?vars", 5);
	      DEFINE_STRING(BGl_string6040z00zz__evobjectz00,
		BgL_bgl_string6040za700za7za7_6184za7, "info", 4);
	      DEFINE_STRING(BGl_string5940z00zz__evobjectz00,
		BgL_bgl_string5940za700za7za7_6185za7, "?body", 5);
	      DEFINE_STRING(BGl_string6042z00zz__evobjectz00,
		BgL_bgl_string6042za700za7za7_6186za7, "default", 7);
	      DEFINE_STRING(BGl_string5942z00zz__evobjectz00,
		BgL_bgl_string5942za700za7za7_6187za7, "else", 4);
	      DEFINE_STRING(BGl_string6043z00zz__evobjectz00,
		BgL_bgl_string6043za700za7za7_6188za7, "Missing virtual set", 19);
	      DEFINE_STRING(BGl_string5943z00zz__evobjectz00,
		BgL_bgl_string5943za700za7za7_6189za7, "Illegal `with-access' form", 26);
	      DEFINE_STRING(BGl_string6044z00zz__evobjectz00,
		BgL_bgl_string6044za700za7za7_6190za7, "Missing virtual get", 19);
	      DEFINE_STRING(BGl_string5944z00zz__evobjectz00,
		BgL_bgl_string5944za700za7za7_6191za7, "with-access", 11);
	      DEFINE_STRING(BGl_string5945z00zz__evobjectz00,
		BgL_bgl_string5945za700za7za7_6192za7, "_eval-expand-with-access", 24);
	      DEFINE_STRING(BGl_string6046z00zz__evobjectz00,
		BgL_bgl_string6046za700za7za7_6193za7, "integer", 7);
	      DEFINE_STRING(BGl_string6047z00zz__evobjectz00,
		BgL_bgl_string6047za700za7za7_6194za7, "Illegal class declaration", 25);
	      DEFINE_STRING(BGl_string5947z00zz__evobjectz00,
		BgL_bgl_string5947za700za7za7_6195za7, "fields", 6);
	      DEFINE_STRING(BGl_string6049z00zz__evobjectz00,
		BgL_bgl_string6049za700za7za7_6196za7, "object", 6);
	      DEFINE_STRING(BGl_string5949z00zz__evobjectz00,
		BgL_bgl_string5949za700za7za7_6197za7, "bdgs", 4);
	      DEFINE_STRING(BGl_string6051z00zz__evobjectz00,
		BgL_bgl_string6051za700za7za7_6198za7, "Illegal duplicate field", 23);
	      DEFINE_STRING(BGl_string5951z00zz__evobjectz00,
		BgL_bgl_string5951za700za7za7_6199za7, "map", 3);
	      DEFINE_STRING(BGl_string6052z00zz__evobjectz00,
		BgL_bgl_string6052za700za7za7_6200za7, "Cannot find super class", 23);
	      DEFINE_STRING(BGl_string6053z00zz__evobjectz00,
		BgL_bgl_string6053za700za7za7_6201za7, "_eval-class", 11);
	      DEFINE_STRING(BGl_string5953z00zz__evobjectz00,
		BgL_bgl_string5953za700za7za7_6202za7, "cond", 4);
	      DEFINE_STRING(BGl_string6054z00zz__evobjectz00,
		BgL_bgl_string6054za700za7za7_6203za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string5954z00zz__evobjectz00,
		BgL_bgl_string5954za700za7za7_6204za7, "Illegal attribute", 17);
	      DEFINE_STRING(BGl_string6055z00zz__evobjectz00,
		BgL_bgl_string6055za700za7za7_6205za7, "pair", 4);
	      DEFINE_STRING(BGl_string5956z00zz__evobjectz00,
		BgL_bgl_string5956za700za7za7_6206za7, "vars", 4);
	      DEFINE_STRING(BGl_string6057z00zz__evobjectz00,
		BgL_bgl_string6057za700za7za7_6207za7, "co-instantiate", 14);
	      DEFINE_STRING(BGl_string6058z00zz__evobjectz00,
		BgL_bgl_string6058za700za7za7_6208za7, "Illegal `co-instantiate' form", 29);
	      DEFINE_STRING(BGl_string5958z00zz__evobjectz00,
		BgL_bgl_string5958za700za7za7_6209za7, "ins", 3);
	      DEFINE_STRING(BGl_string6060z00zz__evobjectz00,
		BgL_bgl_string6060za700za7za7_6210za7, "procedure", 9);
	      DEFINE_STRING(BGl_string6059z00zz__evobjectz00,
		BgL_bgl_string6059za700za7za7_6211za7, "_eval-expand-co-instantiate", 27);
	      DEFINE_STRING(BGl_string5960z00zz__evobjectz00,
		BgL_bgl_string5960za700za7za7_6212za7, "gensym", 6);
	      DEFINE_STRING(BGl_string6061z00zz__evobjectz00,
		BgL_bgl_string6061za700za7za7_6213za7, "Illegal binding", 15);
	      DEFINE_STRING(BGl_string5962z00zz__evobjectz00,
		BgL_bgl_string5962za700za7za7_6214za7, "body", 4);
	      DEFINE_STRING(BGl_string6064z00zz__evobjectz00,
		BgL_bgl_string6064za700za7za7_6215za7, "__evobject", 10);
	      DEFINE_STRING(BGl_string5964z00zz__evobjectz00,
		BgL_bgl_string5964za700za7za7_6216za7, "e2", 2);
	      DEFINE_STRING(BGl_string5966z00zz__evobjectz00,
		BgL_bgl_string5966za700za7za7_6217za7, "%with-lexical", 13);
	      DEFINE_STRING(BGl_string5968z00zz__evobjectz00,
		BgL_bgl_string5968za700za7za7_6218za7, "eval-begin-expander", 19);
	      DEFINE_STRING(BGl_string5970z00zz__evobjectz00,
		BgL_bgl_string5970za700za7za7_6219za7, "e3", 2);
	      DEFINE_STRING(BGl_string5972z00zz__evobjectz00,
		BgL_bgl_string5972za700za7za7_6220za7, "c1", 2);
	      DEFINE_STRING(BGl_string5974z00zz__evobjectz00,
		BgL_bgl_string5974za700za7za7_6221za7, "d", 1);
	      DEFINE_STRING(BGl_string5976z00zz__evobjectz00,
		BgL_bgl_string5976za700za7za7_6222za7, "%lexical-stack", 14);
	      DEFINE_STRING(BGl_string5978z00zz__evobjectz00,
		BgL_bgl_string5978za700za7za7_6223za7, "symbol-append", 13);
	      DEFINE_STRING(BGl_string5980z00zz__evobjectz00,
		BgL_bgl_string5980za700za7za7_6224za7, "set!", 4);
	      DEFINE_STRING(BGl_string5982z00zz__evobjectz00,
		BgL_bgl_string5982za700za7za7_6225za7, "?v", 2);
	      DEFINE_STRING(BGl_string5984z00zz__evobjectz00,
		BgL_bgl_string5984za700za7za7_6226za7, "?s", 2);
	      DEFINE_STRING(BGl_string5986z00zz__evobjectz00,
		BgL_bgl_string5986za700za7za7_6227za7, "v2", 2);
	      DEFINE_STRING(BGl_string5988z00zz__evobjectz00,
		BgL_bgl_string5988za700za7za7_6228za7, "caddr", 5);
	      DEFINE_STRING(BGl_string5990z00zz__evobjectz00,
		BgL_bgl_string5990za700za7za7_6229za7, "begin", 5);
	      DEFINE_STRING(BGl_string5992z00zz__evobjectz00,
		BgL_bgl_string5992za700za7za7_6230za7, "unquote-splicing", 16);
	      DEFINE_STRING(BGl_string5994z00zz__evobjectz00,
		BgL_bgl_string5994za700za7za7_6231za7, "loop", 4);
	      DEFINE_STRING(BGl_string5996z00zz__evobjectz00,
		BgL_bgl_string5996za700za7za7_6232za7, "caar", 4);
	      DEFINE_STRING(BGl_string5998z00zz__evobjectz00,
		BgL_bgl_string5998za700za7za7_6233za7, "tmp", 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_slotzd2nonzd2virtualzd2idzd2envz00zz__evobjectz00,
		BgL_bgl__slotza7d2nonza7d2vi6234z00,
		BGl__slotzd2nonzd2virtualzd2idzd2zz__evobjectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2expandzd2cozd2instantiatezd2envz00zz__evobjectz00,
		BgL_bgl__evalza7d2expandza7d6235z00,
		BGl__evalzd2expandzd2cozd2instantiatezd2zz__evobjectz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long
		BgL_checksumz00_8057, char *BgL_fromz00_8058)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evobjectz00))
				{
					BGl_requirezd2initializa7ationz75zz__evobjectz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__evobjectz00();
					BGl_importedzd2moduleszd2initz00zz__evobjectz00();
					BGl_toplevelzd2initzd2zz__evobjectz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evobjectz00()
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 15 */
			BGl_symbol5782z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5783z00zz__evobjectz00);
			BGl_symbol5787z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5788z00zz__evobjectz00);
			BGl_symbol5789z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5790z00zz__evobjectz00);
			BGl_symbol5791z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5792z00zz__evobjectz00);
			BGl_symbol5793z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5794z00zz__evobjectz00);
			BGl_symbol5795z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5796z00zz__evobjectz00);
			BGl_symbol5797z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5798z00zz__evobjectz00);
			BGl_symbol5799z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5800z00zz__evobjectz00);
			BGl_symbol5801z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5802z00zz__evobjectz00);
			BGl_symbol5803z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5804z00zz__evobjectz00);
			BGl_symbol5805z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5806z00zz__evobjectz00);
			BGl_symbol5812z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5813z00zz__evobjectz00);
			BGl_symbol5814z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5815z00zz__evobjectz00);
			BGl_symbol5816z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5817z00zz__evobjectz00);
			BGl_symbol5818z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5819z00zz__evobjectz00);
			BGl_symbol5820z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5821z00zz__evobjectz00);
			BGl_symbol5822z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5823z00zz__evobjectz00);
			BGl_symbol5824z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5825z00zz__evobjectz00);
			BGl_symbol5826z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5827z00zz__evobjectz00);
			BGl_symbol5828z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5829z00zz__evobjectz00);
			BGl_symbol5830z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5831z00zz__evobjectz00);
			BGl_symbol5832z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5833z00zz__evobjectz00);
			BGl_symbol5834z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5835z00zz__evobjectz00);
			BGl_symbol5836z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5837z00zz__evobjectz00);
			BGl_symbol5838z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5839z00zz__evobjectz00);
			BGl_symbol5840z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5841z00zz__evobjectz00);
			BGl_symbol5842z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5843z00zz__evobjectz00);
			BGl_symbol5844z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5845z00zz__evobjectz00);
			BGl_symbol5846z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5847z00zz__evobjectz00);
			BGl_symbol5848z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5849z00zz__evobjectz00);
			BGl_symbol5850z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5851z00zz__evobjectz00);
			BGl_symbol5852z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5853z00zz__evobjectz00);
			BGl_symbol5854z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5855z00zz__evobjectz00);
			BGl_symbol5856z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5857z00zz__evobjectz00);
			BGl_symbol5858z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5859z00zz__evobjectz00);
			BGl_symbol5860z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5861z00zz__evobjectz00);
			BGl_symbol5862z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5863z00zz__evobjectz00);
			BGl_symbol5864z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5865z00zz__evobjectz00);
			BGl_symbol5866z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5867z00zz__evobjectz00);
			BGl_symbol5868z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5869z00zz__evobjectz00);
			BGl_symbol5870z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5871z00zz__evobjectz00);
			BGl_symbol5872z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5873z00zz__evobjectz00);
			BGl_symbol5874z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5875z00zz__evobjectz00);
			BGl_symbol5876z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5877z00zz__evobjectz00);
			BGl_symbol5880z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5881z00zz__evobjectz00);
			BGl_symbol5882z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5883z00zz__evobjectz00);
			BGl_symbol5884z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5885z00zz__evobjectz00);
			BGl_symbol5886z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5887z00zz__evobjectz00);
			BGl_symbol5888z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5889z00zz__evobjectz00);
			BGl_symbol5890z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5891z00zz__evobjectz00);
			BGl_symbol5892z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5893z00zz__evobjectz00);
			BGl_symbol5894z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5895z00zz__evobjectz00);
			BGl_symbol5896z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5897z00zz__evobjectz00);
			BGl_symbol5898z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5899z00zz__evobjectz00);
			BGl_symbol5901z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5902z00zz__evobjectz00);
			BGl_keyword5903z00zz__evobjectz00 =
				bstring_to_keyword(BGl_string5904z00zz__evobjectz00);
			BGl_symbol5905z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5906z00zz__evobjectz00);
			BGl_symbol5907z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5908z00zz__evobjectz00);
			BGl_symbol5914z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5915z00zz__evobjectz00);
			BGl_symbol5916z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5917z00zz__evobjectz00);
			BGl_symbol5918z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5919z00zz__evobjectz00);
			BGl_symbol5921z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5922z00zz__evobjectz00);
			BGl_symbol5925z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5926z00zz__evobjectz00);
			BGl_symbol5927z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5928z00zz__evobjectz00);
			BGl_symbol5929z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5930z00zz__evobjectz00);
			BGl_symbol5931z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5932z00zz__evobjectz00);
			BGl_symbol5933z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5934z00zz__evobjectz00);
			BGl_symbol5935z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5936z00zz__evobjectz00);
			BGl_symbol5937z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5938z00zz__evobjectz00);
			BGl_symbol5939z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5940z00zz__evobjectz00);
			BGl_symbol5941z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5942z00zz__evobjectz00);
			BGl_symbol5946z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5947z00zz__evobjectz00);
			BGl_symbol5948z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5949z00zz__evobjectz00);
			BGl_symbol5950z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5951z00zz__evobjectz00);
			BGl_symbol5952z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5953z00zz__evobjectz00);
			BGl_symbol5955z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5956z00zz__evobjectz00);
			BGl_symbol5957z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5958z00zz__evobjectz00);
			BGl_symbol5959z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5960z00zz__evobjectz00);
			BGl_symbol5961z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5962z00zz__evobjectz00);
			BGl_symbol5963z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5964z00zz__evobjectz00);
			BGl_symbol5965z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5966z00zz__evobjectz00);
			BGl_symbol5967z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5968z00zz__evobjectz00);
			BGl_symbol5969z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5970z00zz__evobjectz00);
			BGl_symbol5971z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5972z00zz__evobjectz00);
			BGl_symbol5973z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5974z00zz__evobjectz00);
			BGl_symbol5975z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5976z00zz__evobjectz00);
			BGl_symbol5977z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5978z00zz__evobjectz00);
			BGl_symbol5979z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5980z00zz__evobjectz00);
			BGl_symbol5981z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5982z00zz__evobjectz00);
			BGl_symbol5983z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5984z00zz__evobjectz00);
			BGl_symbol5985z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5986z00zz__evobjectz00);
			BGl_symbol5987z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5988z00zz__evobjectz00);
			BGl_symbol5989z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5990z00zz__evobjectz00);
			BGl_symbol5991z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5992z00zz__evobjectz00);
			BGl_symbol5993z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5994z00zz__evobjectz00);
			BGl_symbol5995z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5996z00zz__evobjectz00);
			BGl_symbol5997z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string5998z00zz__evobjectz00);
			BGl_symbol5999z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6000z00zz__evobjectz00);
			BGl_symbol6001z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6002z00zz__evobjectz00);
			BGl_symbol6003z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6004z00zz__evobjectz00);
			BGl_symbol6005z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6006z00zz__evobjectz00);
			BGl_symbol6007z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6008z00zz__evobjectz00);
			BGl_symbol6009z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6010z00zz__evobjectz00);
			BGl_symbol6011z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6012z00zz__evobjectz00);
			BGl_symbol6013z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6014z00zz__evobjectz00);
			BGl_symbol6015z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6016z00zz__evobjectz00);
			BGl_symbol6017z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6018z00zz__evobjectz00);
			BGl_symbol6019z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6020z00zz__evobjectz00);
			BGl_symbol6021z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6022z00zz__evobjectz00);
			BGl_symbol6023z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6024z00zz__evobjectz00);
			BGl_symbol6025z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6026z00zz__evobjectz00);
			BGl_symbol6027z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6028z00zz__evobjectz00);
			BGl_symbol6029z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6030z00zz__evobjectz00);
			BGl_symbol6031z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6032z00zz__evobjectz00);
			BGl_symbol6033z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6034z00zz__evobjectz00);
			BGl_symbol6036z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6037z00zz__evobjectz00);
			BGl_symbol6039z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6040z00zz__evobjectz00);
			BGl_symbol6041z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6042z00zz__evobjectz00);
			BGl_symbol6045z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6046z00zz__evobjectz00);
			BGl_symbol6048z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6049z00zz__evobjectz00);
			return (BGl_symbol6056z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string6057z00zz__evobjectz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evobjectz00()
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 15 */
			return BUNSPEC;
		}
	}



/* expand-error */
	obj_t BGl_expandzd2errorzd2zz__evobjectz00(obj_t BgL_pz00_1, obj_t BgL_mz00_2,
		obj_t BgL_xz00_3)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 66 */
			{	/* Eval/evobject.scm 67 */
				obj_t BgL_locz00_965;

				if (EXTENDED_PAIRP(BgL_xz00_3))
					{	/* Eval/evobject.scm 67 */
						BgL_locz00_965 = CER(BgL_xz00_3);
					}
				else
					{	/* Eval/evobject.scm 67 */
						BgL_locz00_965 = BFALSE;
					}
				{	/* Eval/evobject.scm 68 */
					bool_t BgL_testz00_8189;

					if (PAIRP(BgL_locz00_965))
						{	/* Eval/evobject.scm 68 */
							bool_t BgL_testz00_8192;

							{	/* Eval/evobject.scm 68 */
								obj_t BgL_auxz00_8193;

								BgL_auxz00_8193 = CDR(BgL_locz00_965);
								BgL_testz00_8192 = PAIRP(BgL_auxz00_8193);
							}
							if (BgL_testz00_8192)
								{	/* Eval/evobject.scm 68 */
									obj_t BgL_auxz00_8196;

									BgL_auxz00_8196 = CDR(CDR(BgL_locz00_965));
									BgL_testz00_8189 = PAIRP(BgL_auxz00_8196);
								}
							else
								{	/* Eval/evobject.scm 68 */
									BgL_testz00_8189 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/evobject.scm 68 */
							BgL_testz00_8189 = ((bool_t) 0);
						}
					if (BgL_testz00_8189)
						{	/* Eval/evobject.scm 68 */
							return
								BGl_errorzf2locationzf2zz__errorz00(BgL_pz00_1, BgL_mz00_2,
								BgL_xz00_3, CAR(CDR(BgL_locz00_965)),
								CAR(CDR(CDR(BgL_locz00_965))));
						}
					else
						{	/* Eval/evobject.scm 68 */
							return
								BGl_errorz00zz__errorz00(BgL_pz00_1, BgL_mz00_2, BgL_xz00_3);
						}
				}
			}
		}
	}



/* slot-virtualp */
	obj_t BGl_slotzd2virtualpzd2zz__evobjectz00(obj_t BgL_slotz00_38)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 80 */
			return STRUCT_REF(BgL_slotz00_38, (int) (((long) 4)));
		}
	}



/* _slot-virtualp */
	obj_t BGl__slotzd2virtualpzd2zz__evobjectz00(obj_t BgL_envz00_7918,
		obj_t BgL_slotz00_7919)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 80 */
			return BGl_slotzd2virtualpzd2zz__evobjectz00(BgL_slotz00_7919);
		}
	}



/* decompose-ident */
	obj_t BGl_decomposezd2identzd2zz__evobjectz00(obj_t BgL_idz00_39)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 86 */
			{	/* Eval/evobject.scm 87 */
				obj_t BgL_stringz00_984;

				{	/* Eval/evobject.scm 87 */
					obj_t BgL_res5601z00_5267;

					{	/* Eval/evobject.scm 87 */
						obj_t BgL_arg5527z00_5266;

						BgL_arg5527z00_5266 = SYMBOL_TO_STRING(BgL_idz00_39);
						BgL_res5601z00_5267 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg5527z00_5266);
					}
					BgL_stringz00_984 = BgL_res5601z00_5267;
				}
				{	/* Eval/evobject.scm 87 */
					long BgL_lenz00_985;

					BgL_lenz00_985 = STRING_LENGTH(BgL_stringz00_984);
					{	/* Eval/evobject.scm 88 */

						{
							long BgL_walkerz00_987;

							BgL_walkerz00_987 = ((long) 0);
						BgL_zc3anonymousza32074ze3z83_988:
							if ((BgL_walkerz00_987 == BgL_lenz00_985))
								{	/* Eval/evobject.scm 91 */
									{	/* Eval/evobject.scm 92 */
										int BgL_auxz00_8215;

										BgL_auxz00_8215 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_8215);
									}
									{	/* Eval/evobject.scm 92 */
										int BgL_auxz00_8218;

										BgL_auxz00_8218 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8218, BFALSE);
									}
									return BgL_idz00_39;
								}
							else
								{	/* Eval/evobject.scm 93 */
									bool_t BgL_testz00_8221;

									if (
										(STRING_REF(BgL_stringz00_984,
												BgL_walkerz00_987) == ((unsigned char) ':')))
										{	/* Eval/evobject.scm 93 */
											if ((BgL_walkerz00_987 < (BgL_lenz00_985 - ((long) 1))))
												{	/* Eval/evobject.scm 94 */
													BgL_testz00_8221 =
														(STRING_REF(BgL_stringz00_984,
															(BgL_walkerz00_987 + ((long) 1))) ==
														((unsigned char) ':'));
												}
											else
												{	/* Eval/evobject.scm 94 */
													BgL_testz00_8221 = ((bool_t) 0);
												}
										}
									else
										{	/* Eval/evobject.scm 93 */
											BgL_testz00_8221 = ((bool_t) 0);
										}
									if (BgL_testz00_8221)
										{	/* Eval/evobject.scm 96 */
											obj_t BgL_val0_1873z00_993;

											obj_t BgL_val1_1874z00_994;

											{	/* Eval/evobject.scm 96 */
												obj_t BgL_arg2077z00_995;

												BgL_arg2077z00_995 =
													c_substring(BgL_stringz00_984, ((long) 0),
													BgL_walkerz00_987);
												BgL_val0_1873z00_993 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2077z00_995));
											}
											{	/* Eval/evobject.scm 97 */
												obj_t BgL_arg2078z00_996;

												BgL_arg2078z00_996 =
													c_substring(BgL_stringz00_984,
													(BgL_walkerz00_987 + ((long) 2)), BgL_lenz00_985);
												BgL_val1_1874z00_994 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2078z00_996));
											}
											{	/* Eval/evobject.scm 96 */
												int BgL_auxz00_8238;

												BgL_auxz00_8238 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_8238);
											}
											{	/* Eval/evobject.scm 96 */
												int BgL_auxz00_8241;

												BgL_auxz00_8241 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_8241,
													BgL_val1_1874z00_994);
											}
											return BgL_val0_1873z00_993;
										}
									else
										{
											long BgL_walkerz00_8244;

											BgL_walkerz00_8244 = (BgL_walkerz00_987 + ((long) 1));
											BgL_walkerz00_987 = BgL_walkerz00_8244;
											goto BgL_zc3anonymousza32074ze3z83_988;
										}
								}
						}
					}
				}
			}
		}
	}



/* slot-non-virtual-id */
	obj_t BGl_slotzd2nonzd2virtualzd2idzd2zz__evobjectz00(obj_t BgL_sz00_51)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 160 */
			{	/* Eval/evobject.scm 161 */
				bool_t BgL_testz00_8246;

				{	/* Eval/evobject.scm 161 */
					bool_t BgL_testz00_8247;

					{	/* Eval/evobject.scm 161 */
						obj_t BgL_sz00_5385;

						BgL_sz00_5385 = BgL_sz00_51;
						BgL_testz00_8247 =
							CBOOL(STRUCT_REF(BgL_sz00_5385, (int) (((long) 4))));
					}
					if (BgL_testz00_8247)
						{	/* Eval/evobject.scm 161 */
							BgL_testz00_8246 = ((bool_t) 0);
						}
					else
						{	/* Eval/evobject.scm 161 */
							BgL_testz00_8246 = ((bool_t) 1);
						}
				}
				if (BgL_testz00_8246)
					{	/* Eval/evobject.scm 161 */
						return STRUCT_REF(BgL_sz00_51, (int) (((long) 0)));
					}
				else
					{	/* Eval/evobject.scm 161 */
						return BFALSE;
					}
			}
		}
	}



/* _slot-non-virtual-id */
	obj_t BGl__slotzd2nonzd2virtualzd2idzd2zz__evobjectz00(obj_t BgL_envz00_7920,
		obj_t BgL_sz00_7921)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 160 */
			return BGl_slotzd2nonzd2virtualzd2idzd2zz__evobjectz00(BgL_sz00_7921);
		}
	}



/* localize */
	obj_t BGl_localiza7eza7zz__evobjectz00(obj_t BgL_locz00_53, obj_t BgL_pz00_54)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 172 */
			if (CBOOL(BgL_locz00_53))
				{	/* Eval/evobject.scm 173 */
					return
						BGl_loopz72z72z72z72z00zz__evobjectz00(BgL_locz00_53, BgL_pz00_54);
				}
			else
				{	/* Eval/evobject.scm 173 */
					return BgL_pz00_54;
				}
		}
	}



/* loop'''' */
	obj_t BGl_loopz72z72z72z72z00zz__evobjectz00(obj_t BgL_locz00_8029,
		obj_t BgL_pz00_1054)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 175 */
			if (PAIRP(BgL_pz00_1054))
				{	/* Eval/evobject.scm 178 */
					obj_t BgL_arg2139z00_1057;

					obj_t BgL_arg2140z00_1058;

					BgL_arg2139z00_1057 =
						BGl_loopz72z72z72z72z00zz__evobjectz00(BgL_locz00_8029,
						CAR(BgL_pz00_1054));
					BgL_arg2140z00_1058 =
						BGl_loopz72z72z72z72z00zz__evobjectz00(BgL_locz00_8029,
						CDR(BgL_pz00_1054));
					{	/* Eval/evobject.scm 178 */
						obj_t BgL_res5612z00_5404;

						BgL_res5612z00_5404 =
							MAKE_EXTENDED_PAIR(BgL_arg2139z00_1057, BgL_arg2140z00_1058,
							BgL_locz00_8029);
						return BgL_res5612z00_5404;
					}
				}
			else
				{	/* Eval/evobject.scm 176 */
					return BgL_pz00_1054;
				}
		}
	}



/* eval-make-class */
	obj_t BGl_evalzd2makezd2classz00zz__evobjectz00(obj_t BgL_locz00_55,
		obj_t BgL_idz00_56, obj_t BgL_slotsz00_57, obj_t BgL_constz00_58,
		obj_t BgL_superz00_59, obj_t BgL_superzd2slotszd2_60,
		obj_t BgL_nativez00_61, obj_t BgL_nativezd2slotszd2_62)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 183 */
			{	/* Eval/evobject.scm 184 */
				obj_t BgL_fidz00_1062;

				{	/* Eval/evobject.scm 184 */
					obj_t BgL_arg2094z00_5406;

					{	/* Eval/evobject.scm 184 */
						obj_t BgL_arg2095z00_5407;

						obj_t BgL_arg2096z00_5408;

						{	/* Eval/evobject.scm 184 */
							obj_t BgL_res5613z00_5413;

							{	/* Eval/evobject.scm 184 */
								obj_t BgL_symbolz00_5411;

								BgL_symbolz00_5411 = BGl_symbol5782z00zz__evobjectz00;
								{	/* Eval/evobject.scm 184 */
									obj_t BgL_arg5527z00_5412;

									BgL_arg5527z00_5412 = SYMBOL_TO_STRING(BgL_symbolz00_5411);
									BgL_res5613z00_5413 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg5527z00_5412);
								}
							}
							BgL_arg2095z00_5407 = BgL_res5613z00_5413;
						}
						{	/* Eval/evobject.scm 184 */
							obj_t BgL_res5614z00_5416;

							{	/* Eval/evobject.scm 184 */
								obj_t BgL_arg5527z00_5415;

								BgL_arg5527z00_5415 = SYMBOL_TO_STRING(BgL_idz00_56);
								BgL_res5614z00_5416 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg5527z00_5415);
							}
							BgL_arg2096z00_5408 = BgL_res5614z00_5416;
						}
						{	/* Eval/evobject.scm 184 */
							obj_t BgL_list2097z00_5409;

							{	/* Eval/evobject.scm 184 */
								obj_t BgL_arg2098z00_5410;

								BgL_arg2098z00_5410 = MAKE_PAIR(BgL_arg2096z00_5408, BNIL);
								BgL_list2097z00_5409 =
									MAKE_PAIR(BgL_arg2095z00_5407, BgL_arg2098z00_5410);
							}
							BgL_arg2094z00_5406 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2097z00_5409);
						}
					}
					BgL_fidz00_1062 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg2094z00_5406));
				}
				{	/* Eval/evobject.scm 184 */
					obj_t BgL_tmpz00_1063;

					{	/* Eval/evobject.scm 185 */

						{	/* Eval/evobject.scm 185 */

							BgL_tmpz00_1063 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
					}
					{	/* Eval/evobject.scm 185 */
						obj_t BgL_makezd2nativezd2_1064;

						{	/* Eval/evobject.scm 186 */
							obj_t BgL_arg2251z00_1201;

							BgL_arg2251z00_1201 =
								BGl_classzd2namezd2zz__objectz00(BgL_nativez00_61);
							{	/* Eval/evobject.scm 186 */
								obj_t BgL_arg2094z00_5419;

								{	/* Eval/evobject.scm 186 */
									obj_t BgL_arg2095z00_5420;

									obj_t BgL_arg2096z00_5421;

									{	/* Eval/evobject.scm 186 */
										obj_t BgL_res5615z00_5426;

										{	/* Eval/evobject.scm 186 */
											obj_t BgL_symbolz00_5424;

											BgL_symbolz00_5424 = BGl_symbol5782z00zz__evobjectz00;
											{	/* Eval/evobject.scm 186 */
												obj_t BgL_arg5527z00_5425;

												BgL_arg5527z00_5425 =
													SYMBOL_TO_STRING(BgL_symbolz00_5424);
												BgL_res5615z00_5426 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg5527z00_5425);
											}
										}
										BgL_arg2095z00_5420 = BgL_res5615z00_5426;
									}
									{	/* Eval/evobject.scm 186 */
										obj_t BgL_res5616z00_5429;

										{	/* Eval/evobject.scm 186 */
											obj_t BgL_arg5527z00_5428;

											BgL_arg5527z00_5428 =
												SYMBOL_TO_STRING(BgL_arg2251z00_1201);
											BgL_res5616z00_5429 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg5527z00_5428);
										}
										BgL_arg2096z00_5421 = BgL_res5616z00_5429;
									}
									{	/* Eval/evobject.scm 186 */
										obj_t BgL_list2097z00_5422;

										{	/* Eval/evobject.scm 186 */
											obj_t BgL_arg2098z00_5423;

											BgL_arg2098z00_5423 =
												MAKE_PAIR(BgL_arg2096z00_5421, BNIL);
											BgL_list2097z00_5422 =
												MAKE_PAIR(BgL_arg2095z00_5420, BgL_arg2098z00_5423);
										}
										BgL_arg2094z00_5419 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2097z00_5422);
									}
								}
								BgL_makezd2nativezd2_1064 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2094z00_5419));
							}
						}
						{	/* Eval/evobject.scm 186 */
							obj_t BgL_slotsz00_1065;

							BgL_slotsz00_1065 =
								BGl_filterz00zz__r4_control_features_6_9z00
								(BGl_proc5784z00zz__evobjectz00, BgL_slotsz00_57);
							{	/* Eval/evobject.scm 187 */
								obj_t BgL_superzd2slotszd2_1066;

								BgL_superzd2slotszd2_1066 =
									BGl_filterz00zz__r4_control_features_6_9z00
									(BGl_proc5785z00zz__evobjectz00, BgL_superzd2slotszd2_60);
								{	/* Eval/evobject.scm 188 */
									obj_t BgL_nativezd2slotszd2_1067;

									BgL_nativezd2slotszd2_1067 =
										BGl_filterz00zz__r4_control_features_6_9z00
										(BGl_proc5786z00zz__evobjectz00, BgL_nativezd2slotszd2_62);
									{	/* Eval/evobject.scm 189 */
										obj_t BgL_allzd2slotszd2_1068;

										BgL_allzd2slotszd2_1068 =
											bgl_append2(BgL_superzd2slotszd2_1066, BgL_slotsz00_1065);
										{	/* Eval/evobject.scm 190 */
											obj_t BgL_nativezd2argszd2_1069;

											{	/* Eval/evobject.scm 191 */
												obj_t BgL_list2250z00_1200;

												BgL_list2250z00_1200 =
													MAKE_PAIR(BgL_nativezd2slotszd2_1067, BNIL);
												BgL_nativezd2argszd2_1069 =
													BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
													(BGl_slotzd2nonzd2virtualzd2idzd2envz00zz__evobjectz00,
													BgL_list2250z00_1200);
											}
											{	/* Eval/evobject.scm 191 */
												obj_t BgL_allzd2argszd2_1070;

												{	/* Eval/evobject.scm 192 */
													obj_t BgL_arg2224z00_1162;

													obj_t BgL_arg2226z00_1163;

													if (NULLP(BgL_superzd2slotszd2_1066))
														{	/* Eval/evobject.scm 192 */
															BgL_arg2224z00_1162 = BNIL;
														}
													else
														{	/* Eval/evobject.scm 192 */
															obj_t BgL_head1877z00_1166;

															BgL_head1877z00_1166 =
																MAKE_PAIR(STRUCT_REF(CAR
																	(BgL_superzd2slotszd2_1066),
																	(int) (((long) 0))), BNIL);
															{	/* Eval/evobject.scm 192 */
																obj_t BgL_g1880z00_1167;

																BgL_g1880z00_1167 =
																	CDR(BgL_superzd2slotszd2_1066);
																{
																	obj_t BgL_l1875z00_5467;

																	obj_t BgL_tail1878z00_5468;

																	BgL_l1875z00_5467 = BgL_g1880z00_1167;
																	BgL_tail1878z00_5468 = BgL_head1877z00_1166;
																BgL_zc3anonymousza32228ze3z83_5466:
																	if (NULLP(BgL_l1875z00_5467))
																		{	/* Eval/evobject.scm 192 */
																			BgL_arg2224z00_1162 =
																				BgL_head1877z00_1166;
																		}
																	else
																		{	/* Eval/evobject.scm 192 */
																			obj_t BgL_newtail1879z00_5476;

																			BgL_newtail1879z00_5476 =
																				MAKE_PAIR(STRUCT_REF(CAR
																					(BgL_l1875z00_5467),
																					(int) (((long) 0))), BNIL);
																			SET_CDR(BgL_tail1878z00_5468,
																				BgL_newtail1879z00_5476);
																			{
																				obj_t BgL_tail1878z00_8306;

																				obj_t BgL_l1875z00_8304;

																				BgL_l1875z00_8304 =
																					CDR(BgL_l1875z00_5467);
																				BgL_tail1878z00_8306 =
																					BgL_newtail1879z00_5476;
																				BgL_tail1878z00_5468 =
																					BgL_tail1878z00_8306;
																				BgL_l1875z00_5467 = BgL_l1875z00_8304;
																				goto BgL_zc3anonymousza32228ze3z83_5466;
																			}
																		}
																}
															}
														}
													if (NULLP(BgL_slotsz00_1065))
														{	/* Eval/evobject.scm 192 */
															BgL_arg2226z00_1163 = BNIL;
														}
													else
														{	/* Eval/evobject.scm 192 */
															obj_t BgL_head1883z00_1184;

															BgL_head1883z00_1184 =
																MAKE_PAIR(STRUCT_REF(CAR(BgL_slotsz00_1065),
																	(int) (((long) 0))), BNIL);
															{	/* Eval/evobject.scm 192 */
																obj_t BgL_g1886z00_1185;

																BgL_g1886z00_1185 = CDR(BgL_slotsz00_1065);
																{
																	obj_t BgL_l1881z00_5534;

																	obj_t BgL_tail1884z00_5535;

																	BgL_l1881z00_5534 = BgL_g1886z00_1185;
																	BgL_tail1884z00_5535 = BgL_head1883z00_1184;
																BgL_zc3anonymousza32241ze3z83_5533:
																	if (NULLP(BgL_l1881z00_5534))
																		{	/* Eval/evobject.scm 192 */
																			BgL_arg2226z00_1163 =
																				BgL_head1883z00_1184;
																		}
																	else
																		{	/* Eval/evobject.scm 192 */
																			obj_t BgL_newtail1885z00_5543;

																			BgL_newtail1885z00_5543 =
																				MAKE_PAIR(STRUCT_REF(CAR
																					(BgL_l1881z00_5534),
																					(int) (((long) 0))), BNIL);
																			SET_CDR(BgL_tail1884z00_5535,
																				BgL_newtail1885z00_5543);
																			{
																				obj_t BgL_tail1884z00_8323;

																				obj_t BgL_l1881z00_8321;

																				BgL_l1881z00_8321 =
																					CDR(BgL_l1881z00_5534);
																				BgL_tail1884z00_8323 =
																					BgL_newtail1885z00_5543;
																				BgL_tail1884z00_5535 =
																					BgL_tail1884z00_8323;
																				BgL_l1881z00_5534 = BgL_l1881z00_8321;
																				goto BgL_zc3anonymousza32241ze3z83_5533;
																			}
																		}
																}
															}
														}
													BgL_allzd2argszd2_1070 =
														bgl_append2(BgL_arg2224z00_1162,
														BgL_arg2226z00_1163);
												}
												{	/* Eval/evobject.scm 192 */
													obj_t BgL_evalzd2slotszd2_1071;

													BgL_evalzd2slotszd2_1071 =
														BGl_dropz00zz__r4_pairs_and_lists_6_3z00
														(BgL_allzd2slotszd2_1068,
														bgl_list_length(BgL_nativezd2slotszd2_1067));
													{	/* Eval/evobject.scm 193 */
														obj_t BgL_evalzd2argszd2_1072;

														BgL_evalzd2argszd2_1072 =
															BGl_dropz00zz__r4_pairs_and_lists_6_3z00
															(BgL_allzd2argszd2_1070,
															bgl_list_length(BgL_nativezd2argszd2_1069));
														{	/* Eval/evobject.scm 194 */

															{	/* Eval/evobject.scm 202 */
																obj_t BgL_arg2145z00_1074;

																{	/* Eval/evobject.scm 202 */
																	obj_t BgL_arg2146z00_1075;

																	obj_t BgL_arg2147z00_1076;

																	BgL_arg2146z00_1075 =
																		BGl_symbol5787z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 202 */
																		obj_t BgL_arg2148z00_1077;

																		obj_t BgL_arg2149z00_1078;

																		BgL_arg2148z00_1077 =
																			MAKE_PAIR(BgL_fidz00_1062,
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_allzd2argszd2_1070, BNIL));
																		{	/* Eval/evobject.scm 203 */
																			obj_t BgL_arg2154z00_1083;

																			obj_t BgL_arg2155z00_1084;

																			BgL_arg2154z00_1083 =
																				BGl_symbol5789z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 203 */
																				obj_t BgL_arg2156z00_1085;

																				obj_t BgL_arg2157z00_1086;

																				obj_t BgL_arg2158z00_1087;

																				obj_t BgL_arg2159z00_1088;

																				{	/* Eval/evobject.scm 203 */
																					obj_t BgL_arg2166z00_1095;

																					{	/* Eval/evobject.scm 203 */
																						obj_t BgL_arg2168z00_1097;

																						{	/* Eval/evobject.scm 203 */
																							obj_t BgL_arg2169z00_1098;

																							BgL_arg2169z00_1098 =
																								MAKE_PAIR
																								(BgL_makezd2nativezd2_1064,
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_nativezd2argszd2_1069,
																									BNIL));
																							{	/* Eval/evobject.scm 203 */
																								obj_t BgL_list2171z00_1100;

																								BgL_list2171z00_1100 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2168z00_1097 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2169z00_1098,
																									BgL_list2171z00_1100);
																							}
																						}
																						BgL_arg2166z00_1095 =
																							MAKE_PAIR(BgL_tmpz00_1063,
																							BgL_arg2168z00_1097);
																					}
																					BgL_arg2156z00_1085 =
																						MAKE_PAIR(BgL_arg2166z00_1095,
																						BNIL);
																				}
																				{	/* Eval/evobject.scm 204 */
																					obj_t BgL_arg2173z00_1102;

																					obj_t BgL_arg2174z00_1103;

																					BgL_arg2173z00_1102 =
																						BGl_symbol5791z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 204 */
																						obj_t BgL_arg2175z00_1104;

																						{	/* Eval/evobject.scm 204 */
																							obj_t BgL_arg2179z00_1108;

																							obj_t BgL_arg2180z00_1109;

																							BgL_arg2179z00_1108 =
																								BGl_symbol5793z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 204 */
																								obj_t BgL_list2181z00_1110;

																								BgL_list2181z00_1110 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2180z00_1109 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_idz00_56,
																									BgL_list2181z00_1110);
																							}
																							BgL_arg2175z00_1104 =
																								MAKE_PAIR(BgL_arg2179z00_1108,
																								BgL_arg2180z00_1109);
																						}
																						{	/* Eval/evobject.scm 204 */
																							obj_t BgL_list2177z00_1106;

																							{	/* Eval/evobject.scm 204 */
																								obj_t BgL_arg2178z00_1107;

																								BgL_arg2178z00_1107 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2177z00_1106 =
																									MAKE_PAIR(BgL_arg2175z00_1104,
																									BgL_arg2178z00_1107);
																							}
																							BgL_arg2174z00_1103 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_tmpz00_1063,
																								BgL_list2177z00_1106);
																						}
																					}
																					BgL_arg2157z00_1086 =
																						MAKE_PAIR(BgL_arg2173z00_1102,
																						BgL_arg2174z00_1103);
																				}
																				{	/* Eval/evobject.scm 205 */
																					obj_t BgL_arg2182z00_1111;

																					obj_t BgL_arg2183z00_1112;

																					BgL_arg2182z00_1111 =
																						BGl_symbol5795z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 206 */
																						obj_t BgL_arg2184z00_1113;

																						{	/* Eval/evobject.scm 206 */
																							obj_t BgL_arg2188z00_1117;

																							obj_t BgL_arg2189z00_1118;

																							BgL_arg2188z00_1117 =
																								BGl_symbol5797z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 206 */
																								obj_t BgL_arg2190z00_1119;

																								if (NULLP
																									(BgL_evalzd2slotszd2_1071))
																									{	/* Eval/evobject.scm 206 */
																										BgL_arg2190z00_1119 = BNIL;
																									}
																								else
																									{	/* Eval/evobject.scm 206 */
																										obj_t BgL_head1889z00_1124;

																										BgL_head1889z00_1124 =
																											MAKE_PAIR
																											(BGl_initzd2slotz72za0zz__evobjectz00
																											(CAR
																												(BgL_evalzd2slotszd2_1071),
																												CAR
																												(BgL_evalzd2argszd2_1072)),
																											BNIL);
																										{	/* Eval/evobject.scm 206 */
																											obj_t BgL_g1893z00_1125;

																											obj_t BgL_g1894z00_1126;

																											BgL_g1893z00_1125 =
																												CDR
																												(BgL_evalzd2slotszd2_1071);
																											BgL_g1894z00_1126 =
																												CDR
																												(BgL_evalzd2argszd2_1072);
																											{
																												obj_t
																													BgL_ll1887z00_5600;
																												obj_t
																													BgL_ll1888z00_5601;
																												obj_t
																													BgL_tail1890z00_5602;
																												BgL_ll1887z00_5600 =
																													BgL_g1893z00_1125;
																												BgL_ll1888z00_5601 =
																													BgL_g1894z00_1126;
																												BgL_tail1890z00_5602 =
																													BgL_head1889z00_1124;
																											BgL_zc3anonymousza32193ze3z83_5599:
																												if (NULLP
																													(BgL_ll1887z00_5600))
																													{	/* Eval/evobject.scm 206 */
																														BgL_arg2190z00_1119
																															=
																															BgL_head1889z00_1124;
																													}
																												else
																													{	/* Eval/evobject.scm 206 */
																														obj_t
																															BgL_newtail1891z00_5612;
																														BgL_newtail1891z00_5612
																															=
																															MAKE_PAIR
																															(BGl_initzd2slotz72za0zz__evobjectz00
																															(CAR
																																(BgL_ll1887z00_5600),
																																CAR
																																(BgL_ll1888z00_5601)),
																															BNIL);
																														SET_CDR
																															(BgL_tail1890z00_5602,
																															BgL_newtail1891z00_5612);
																														{
																															obj_t
																																BgL_tail1890z00_8363;
																															obj_t
																																BgL_ll1888z00_8361;
																															obj_t
																																BgL_ll1887z00_8359;
																															BgL_ll1887z00_8359
																																=
																																CDR
																																(BgL_ll1887z00_5600);
																															BgL_ll1888z00_8361
																																=
																																CDR
																																(BgL_ll1888z00_5601);
																															BgL_tail1890z00_8363
																																=
																																BgL_newtail1891z00_5612;
																															BgL_tail1890z00_5602
																																=
																																BgL_tail1890z00_8363;
																															BgL_ll1888z00_5601
																																=
																																BgL_ll1888z00_8361;
																															BgL_ll1887z00_5600
																																=
																																BgL_ll1887z00_8359;
																															goto
																																BgL_zc3anonymousza32193ze3z83_5599;
																														}
																													}
																											}
																										}
																									}
																								BgL_arg2189z00_1118 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2190z00_1119, BNIL);
																							}
																							BgL_arg2184z00_1113 =
																								MAKE_PAIR(BgL_arg2188z00_1117,
																								BgL_arg2189z00_1118);
																						}
																						{	/* Eval/evobject.scm 205 */
																							obj_t BgL_list2186z00_1115;

																							{	/* Eval/evobject.scm 205 */
																								obj_t BgL_arg2187z00_1116;

																								BgL_arg2187z00_1116 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2186z00_1115 =
																									MAKE_PAIR(BgL_arg2184z00_1113,
																									BgL_arg2187z00_1116);
																							}
																							BgL_arg2183z00_1112 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_tmpz00_1063,
																								BgL_list2186z00_1115);
																						}
																					}
																					BgL_arg2158z00_1087 =
																						MAKE_PAIR(BgL_arg2182z00_1111,
																						BgL_arg2183z00_1112);
																				}
																				if (CBOOL(BgL_constz00_58))
																					{	/* Eval/evobject.scm 209 */
																						obj_t BgL_arg2207z00_1145;

																						{	/* Eval/evobject.scm 209 */
																							obj_t BgL_list2208z00_1146;

																							BgL_list2208z00_1146 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2207z00_1145 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_tmpz00_1063,
																								BgL_list2208z00_1146);
																						}
																						BgL_arg2159z00_1088 =
																							MAKE_PAIR(BgL_constz00_58,
																							BgL_arg2207z00_1145);
																					}
																				else
																					{	/* Eval/evobject.scm 209 */
																						BgL_arg2159z00_1088 = BFALSE;
																					}
																				{	/* Eval/evobject.scm 203 */
																					obj_t BgL_list2161z00_1090;

																					{	/* Eval/evobject.scm 203 */
																						obj_t BgL_arg2162z00_1091;

																						{	/* Eval/evobject.scm 203 */
																							obj_t BgL_arg2163z00_1092;

																							{	/* Eval/evobject.scm 203 */
																								obj_t BgL_arg2164z00_1093;

																								{	/* Eval/evobject.scm 203 */
																									obj_t BgL_arg2165z00_1094;

																									BgL_arg2165z00_1094 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2164z00_1093 =
																										MAKE_PAIR(BgL_tmpz00_1063,
																										BgL_arg2165z00_1094);
																								}
																								BgL_arg2163z00_1092 =
																									MAKE_PAIR(BgL_arg2159z00_1088,
																									BgL_arg2164z00_1093);
																							}
																							BgL_arg2162z00_1091 =
																								MAKE_PAIR(BgL_arg2158z00_1087,
																								BgL_arg2163z00_1092);
																						}
																						BgL_list2161z00_1090 =
																							MAKE_PAIR(BgL_arg2157z00_1086,
																							BgL_arg2162z00_1091);
																					}
																					BgL_arg2155z00_1084 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2156z00_1085,
																						BgL_list2161z00_1090);
																				}
																			}
																			BgL_arg2149z00_1078 =
																				MAKE_PAIR(BgL_arg2154z00_1083,
																				BgL_arg2155z00_1084);
																		}
																		{	/* Eval/evobject.scm 202 */
																			obj_t BgL_list2151z00_1080;

																			{	/* Eval/evobject.scm 202 */
																				obj_t BgL_arg2152z00_1081;

																				BgL_arg2152z00_1081 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2151z00_1080 =
																					MAKE_PAIR(BgL_arg2149z00_1078,
																					BgL_arg2152z00_1081);
																			}
																			BgL_arg2147z00_1076 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2148z00_1077,
																				BgL_list2151z00_1080);
																		}
																	}
																	BgL_arg2145z00_1074 =
																		MAKE_PAIR(BgL_arg2146z00_1075,
																		BgL_arg2147z00_1076);
																}
																return
																	BGl_localiza7eza7zz__evobjectz00
																	(BgL_locz00_55, BgL_arg2145z00_1074);
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
			}
		}
	}



/* init-slot' */
	obj_t BGl_initzd2slotz72za0zz__evobjectz00(obj_t BgL_sz00_1147,
		obj_t BgL_az00_1148)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 199 */
			{	/* Eval/evobject.scm 196 */
				obj_t BgL_vz00_1150;

				{	/* Eval/evobject.scm 196 */
					bool_t BgL_testz00_8387;

					{	/* Eval/evobject.scm 196 */
						obj_t BgL_sz00_5666;

						BgL_sz00_5666 = BgL_sz00_1147;
						BgL_testz00_8387 =
							CBOOL(STRUCT_REF(BgL_sz00_5666, (int) (((long) 6))));
					}
					if (BgL_testz00_8387)
						{	/* Eval/evobject.scm 197 */
							obj_t BgL_arg2211z00_1152;

							obj_t BgL_arg2212z00_1153;

							BgL_arg2211z00_1152 = BGl_symbol5799z00zz__evobjectz00;
							{	/* Eval/evobject.scm 197 */
								obj_t BgL_arg2213z00_1154;

								{	/* Eval/evobject.scm 197 */
									obj_t BgL_arg2217z00_1158;

									BgL_arg2217z00_1158 =
										STRUCT_REF(BgL_sz00_1147, (int) (((long) 0)));
									{	/* Eval/evobject.scm 197 */
										obj_t BgL_arg2124z00_5672;

										{	/* Eval/evobject.scm 197 */
											obj_t BgL_arg2125z00_5673;

											obj_t BgL_arg2126z00_5674;

											{	/* Eval/evobject.scm 197 */
												obj_t BgL_res5617z00_5679;

												{	/* Eval/evobject.scm 197 */
													obj_t BgL_symbolz00_5677;

													BgL_symbolz00_5677 = BgL_arg2217z00_1158;
													{	/* Eval/evobject.scm 197 */
														obj_t BgL_arg5527z00_5678;

														BgL_arg5527z00_5678 =
															SYMBOL_TO_STRING(BgL_symbolz00_5677);
														BgL_res5617z00_5679 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg5527z00_5678);
												}}
												BgL_arg2125z00_5673 = BgL_res5617z00_5679;
											}
											{	/* Eval/evobject.scm 197 */
												obj_t BgL_res5618z00_5682;

												{	/* Eval/evobject.scm 197 */
													obj_t BgL_symbolz00_5680;

													BgL_symbolz00_5680 = BGl_symbol5801z00zz__evobjectz00;
													{	/* Eval/evobject.scm 197 */
														obj_t BgL_arg5527z00_5681;

														BgL_arg5527z00_5681 =
															SYMBOL_TO_STRING(BgL_symbolz00_5680);
														BgL_res5618z00_5682 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg5527z00_5681);
												}}
												BgL_arg2126z00_5674 = BgL_res5618z00_5682;
											}
											{	/* Eval/evobject.scm 197 */
												obj_t BgL_list2127z00_5675;

												{	/* Eval/evobject.scm 197 */
													obj_t BgL_arg2130z00_5676;

													BgL_arg2130z00_5676 =
														MAKE_PAIR(BgL_arg2126z00_5674, BNIL);
													BgL_list2127z00_5675 =
														MAKE_PAIR(BgL_arg2125z00_5673, BgL_arg2130z00_5676);
												}
												BgL_arg2124z00_5672 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list2127z00_5675);
										}}
										BgL_arg2213z00_1154 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg2124z00_5672));
								}}
								{	/* Eval/evobject.scm 197 */
									obj_t BgL_list2215z00_1156;

									{	/* Eval/evobject.scm 197 */
										obj_t BgL_arg2216z00_1157;

										BgL_arg2216z00_1157 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2215z00_1156 =
											MAKE_PAIR(BgL_az00_1148, BgL_arg2216z00_1157);
									}
									BgL_arg2212z00_1153 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2213z00_1154, BgL_list2215z00_1156);
							}}
							BgL_vz00_1150 =
								MAKE_PAIR(BgL_arg2211z00_1152, BgL_arg2212z00_1153);
						}
					else
						{	/* Eval/evobject.scm 196 */
							BgL_vz00_1150 = BgL_az00_1148;
						}
				}
				return BgL_vz00_1150;
			}
		}
	}



/* <anonymous:2135> */
	obj_t BGl_zc3anonymousza32135ze3z83zz__evobjectz00(obj_t BgL_envz00_7925,
		obj_t BgL_sz00_7926)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 167 */
			{
				obj_t BgL_sz00_5451;

				{	/* Eval/evobject.scm 189 */
					bool_t BgL_auxz00_8406;

					BgL_sz00_5451 = BgL_sz00_7926;
					{	/* Eval/evobject.scm 189 */
						bool_t BgL_testz00_8407;

						{	/* Eval/evobject.scm 189 */
							obj_t BgL_sz00_5456;

							BgL_sz00_5456 = BgL_sz00_5451;
							BgL_testz00_8407 =
								CBOOL(STRUCT_REF(BgL_sz00_5456, (int) (((long) 4))));
						}
						if (BgL_testz00_8407)
							{	/* Eval/evobject.scm 189 */
								BgL_auxz00_8406 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 189 */
								BgL_auxz00_8406 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_8406);
				}
			}
		}
	}



/* <anonymous:2135>_5759 */
	obj_t BGl_zc3anonymousza32135ze3_5759z83zz__evobjectz00(obj_t BgL_envz00_7927,
		obj_t BgL_sz00_7928)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 167 */
			{
				obj_t BgL_sz00_5442;

				{	/* Eval/evobject.scm 188 */
					bool_t BgL_auxz00_8412;

					BgL_sz00_5442 = BgL_sz00_7928;
					{	/* Eval/evobject.scm 188 */
						bool_t BgL_testz00_8413;

						{	/* Eval/evobject.scm 188 */
							obj_t BgL_sz00_5447;

							BgL_sz00_5447 = BgL_sz00_5442;
							BgL_testz00_8413 =
								CBOOL(STRUCT_REF(BgL_sz00_5447, (int) (((long) 4))));
						}
						if (BgL_testz00_8413)
							{	/* Eval/evobject.scm 188 */
								BgL_auxz00_8412 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 188 */
								BgL_auxz00_8412 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_8412);
				}
			}
		}
	}



/* <anonymous:2135>_5760 */
	obj_t BGl_zc3anonymousza32135ze3_5760z83zz__evobjectz00(obj_t BgL_envz00_7929,
		obj_t BgL_sz00_7930)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 167 */
			{
				obj_t BgL_sz00_5433;

				{	/* Eval/evobject.scm 187 */
					bool_t BgL_auxz00_8418;

					BgL_sz00_5433 = BgL_sz00_7930;
					{	/* Eval/evobject.scm 187 */
						bool_t BgL_testz00_8419;

						{	/* Eval/evobject.scm 187 */
							obj_t BgL_sz00_5438;

							BgL_sz00_5438 = BgL_sz00_5433;
							BgL_testz00_8419 =
								CBOOL(STRUCT_REF(BgL_sz00_5438, (int) (((long) 4))));
						}
						if (BgL_testz00_8419)
							{	/* Eval/evobject.scm 187 */
								BgL_auxz00_8418 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 187 */
								BgL_auxz00_8418 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_8418);
				}
			}
		}
	}



/* eval-fill-class */
	obj_t BGl_evalzd2fillzd2classz00zz__evobjectz00(obj_t BgL_locz00_63,
		obj_t BgL_idz00_64, obj_t BgL_slotsz00_65, obj_t BgL_superz00_66,
		obj_t BgL_superzd2slotszd2_67, obj_t BgL_nativez00_68,
		obj_t BgL_nativezd2slotszd2_69)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 215 */
			{	/* Eval/evobject.scm 216 */
				obj_t BgL_fidz00_1203;

				{	/* Eval/evobject.scm 216 */
					obj_t BgL_list2099z00_5685;

					{	/* Eval/evobject.scm 216 */
						obj_t BgL_arg2100z00_5686;

						obj_t BgL_arg2101z00_5687;

						BgL_arg2100z00_5686 = BGl_symbol5803z00zz__evobjectz00;
						{	/* Eval/evobject.scm 216 */
							obj_t BgL_arg2102z00_5688;

							BgL_arg2102z00_5688 =
								MAKE_PAIR(BGl_symbol5805z00zz__evobjectz00, BNIL);
							BgL_arg2101z00_5687 =
								MAKE_PAIR(BgL_idz00_64, BgL_arg2102z00_5688);
						}
						BgL_list2099z00_5685 =
							MAKE_PAIR(BgL_arg2100z00_5686, BgL_arg2101z00_5687);
					}
					BgL_fidz00_1203 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list2099z00_5685);
				}
				{	/* Eval/evobject.scm 216 */
					obj_t BgL_oz00_1204;

					{	/* Eval/evobject.scm 217 */

						{	/* Eval/evobject.scm 217 */

							BgL_oz00_1204 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
					}
					{	/* Eval/evobject.scm 217 */
						obj_t BgL_fillzd2nativezd2_1205;

						{	/* Eval/evobject.scm 218 */
							obj_t BgL_arg2332z00_1320;

							BgL_arg2332z00_1320 =
								BGl_classzd2namezd2zz__objectz00(BgL_nativez00_68);
							{	/* Eval/evobject.scm 218 */
								obj_t BgL_list2099z00_5690;

								{	/* Eval/evobject.scm 218 */
									obj_t BgL_arg2100z00_5691;

									obj_t BgL_arg2101z00_5692;

									BgL_arg2100z00_5691 = BGl_symbol5803z00zz__evobjectz00;
									{	/* Eval/evobject.scm 218 */
										obj_t BgL_arg2102z00_5693;

										BgL_arg2102z00_5693 =
											MAKE_PAIR(BGl_symbol5805z00zz__evobjectz00, BNIL);
										BgL_arg2101z00_5692 =
											MAKE_PAIR(BgL_arg2332z00_1320, BgL_arg2102z00_5693);
									}
									BgL_list2099z00_5690 =
										MAKE_PAIR(BgL_arg2100z00_5691, BgL_arg2101z00_5692);
								}
								BgL_fillzd2nativezd2_1205 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list2099z00_5690);
							}
						}
						{	/* Eval/evobject.scm 218 */
							obj_t BgL_slotsz00_1206;

							BgL_slotsz00_1206 =
								BGl_filterz00zz__r4_control_features_6_9z00
								(BGl_proc5807z00zz__evobjectz00, BgL_slotsz00_65);
							{	/* Eval/evobject.scm 219 */
								obj_t BgL_superzd2slotszd2_1207;

								BgL_superzd2slotszd2_1207 =
									BGl_filterz00zz__r4_control_features_6_9z00
									(BGl_proc5808z00zz__evobjectz00, BgL_superzd2slotszd2_67);
								{	/* Eval/evobject.scm 220 */
									obj_t BgL_nativezd2slotszd2_1208;

									BgL_nativezd2slotszd2_1208 =
										BGl_filterz00zz__r4_control_features_6_9z00
										(BGl_proc5809z00zz__evobjectz00, BgL_nativezd2slotszd2_69);
									{	/* Eval/evobject.scm 221 */
										obj_t BgL_allzd2slotszd2_1209;

										BgL_allzd2slotszd2_1209 =
											bgl_append2(BgL_superzd2slotszd2_1207, BgL_slotsz00_1206);
										{	/* Eval/evobject.scm 222 */
											obj_t BgL_nativezd2argszd2_1210;

											{	/* Eval/evobject.scm 223 */
												obj_t BgL_list2331z00_1319;

												BgL_list2331z00_1319 =
													MAKE_PAIR(BgL_nativezd2slotszd2_1208, BNIL);
												BgL_nativezd2argszd2_1210 =
													BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
													(BGl_slotzd2nonzd2virtualzd2idzd2envz00zz__evobjectz00,
													BgL_list2331z00_1319);
											}
											{	/* Eval/evobject.scm 223 */
												obj_t BgL_allzd2argszd2_1211;

												{	/* Eval/evobject.scm 224 */
													obj_t BgL_arg2309z00_1281;

													obj_t BgL_arg2310z00_1282;

													{	/* Eval/evobject.scm 224 */
														obj_t BgL_l1895z00_1283;

														BgL_l1895z00_1283 =
															BGl_filterz00zz__r4_control_features_6_9z00
															(BGl_proc5810z00zz__evobjectz00,
															BgL_superzd2slotszd2_1207);
														if (NULLP(BgL_l1895z00_1283))
															{	/* Eval/evobject.scm 224 */
																BgL_arg2309z00_1281 = BNIL;
															}
														else
															{	/* Eval/evobject.scm 224 */
																obj_t BgL_head1897z00_1285;

																BgL_head1897z00_1285 =
																	MAKE_PAIR(STRUCT_REF(CAR(BgL_l1895z00_1283),
																		(int) (((long) 0))), BNIL);
																{	/* Eval/evobject.scm 224 */
																	obj_t BgL_g1900z00_1286;

																	BgL_g1900z00_1286 = CDR(BgL_l1895z00_1283);
																	{
																		obj_t BgL_l1895z00_5739;

																		obj_t BgL_tail1898z00_5740;

																		BgL_l1895z00_5739 = BgL_g1900z00_1286;
																		BgL_tail1898z00_5740 = BgL_head1897z00_1285;
																	BgL_zc3anonymousza32312ze3z83_5738:
																		if (NULLP(BgL_l1895z00_5739))
																			{	/* Eval/evobject.scm 224 */
																				BgL_arg2309z00_1281 =
																					BgL_head1897z00_1285;
																			}
																		else
																			{	/* Eval/evobject.scm 224 */
																				obj_t BgL_newtail1899z00_5748;

																				BgL_newtail1899z00_5748 =
																					MAKE_PAIR(STRUCT_REF(CAR
																						(BgL_l1895z00_5739),
																						(int) (((long) 0))), BNIL);
																				SET_CDR(BgL_tail1898z00_5740,
																					BgL_newtail1899z00_5748);
																				{
																					obj_t BgL_tail1898z00_8457;

																					obj_t BgL_l1895z00_8455;

																					BgL_l1895z00_8455 =
																						CDR(BgL_l1895z00_5739);
																					BgL_tail1898z00_8457 =
																						BgL_newtail1899z00_5748;
																					BgL_tail1898z00_5740 =
																						BgL_tail1898z00_8457;
																					BgL_l1895z00_5739 = BgL_l1895z00_8455;
																					goto
																						BgL_zc3anonymousza32312ze3z83_5738;
																				}
																			}
																	}
																}
															}
													}
													{	/* Eval/evobject.scm 225 */
														obj_t BgL_l1901z00_1301;

														BgL_l1901z00_1301 =
															BGl_filterz00zz__r4_control_features_6_9z00
															(BGl_proc5811z00zz__evobjectz00,
															BgL_slotsz00_1206);
														if (NULLP(BgL_l1901z00_1301))
															{	/* Eval/evobject.scm 225 */
																BgL_arg2310z00_1282 = BNIL;
															}
														else
															{	/* Eval/evobject.scm 225 */
																obj_t BgL_head1903z00_1303;

																BgL_head1903z00_1303 =
																	MAKE_PAIR(STRUCT_REF(CAR(BgL_l1901z00_1301),
																		(int) (((long) 0))), BNIL);
																{	/* Eval/evobject.scm 225 */
																	obj_t BgL_g1906z00_1304;

																	BgL_g1906z00_1304 = CDR(BgL_l1901z00_1301);
																	{
																		obj_t BgL_l1901z00_5815;

																		obj_t BgL_tail1904z00_5816;

																		BgL_l1901z00_5815 = BgL_g1906z00_1304;
																		BgL_tail1904z00_5816 = BgL_head1903z00_1303;
																	BgL_zc3anonymousza32322ze3z83_5814:
																		if (NULLP(BgL_l1901z00_5815))
																			{	/* Eval/evobject.scm 225 */
																				BgL_arg2310z00_1282 =
																					BgL_head1903z00_1303;
																			}
																		else
																			{	/* Eval/evobject.scm 225 */
																				obj_t BgL_newtail1905z00_5824;

																				BgL_newtail1905z00_5824 =
																					MAKE_PAIR(STRUCT_REF(CAR
																						(BgL_l1901z00_5815),
																						(int) (((long) 0))), BNIL);
																				SET_CDR(BgL_tail1904z00_5816,
																					BgL_newtail1905z00_5824);
																				{
																					obj_t BgL_tail1904z00_8475;

																					obj_t BgL_l1901z00_8473;

																					BgL_l1901z00_8473 =
																						CDR(BgL_l1901z00_5815);
																					BgL_tail1904z00_8475 =
																						BgL_newtail1905z00_5824;
																					BgL_tail1904z00_5816 =
																						BgL_tail1904z00_8475;
																					BgL_l1901z00_5815 = BgL_l1901z00_8473;
																					goto
																						BgL_zc3anonymousza32322ze3z83_5814;
																				}
																			}
																	}
																}
															}
													}
													BgL_allzd2argszd2_1211 =
														bgl_append2(BgL_arg2309z00_1281,
														BgL_arg2310z00_1282);
												}
												{	/* Eval/evobject.scm 224 */
													obj_t BgL_evalzd2slotszd2_1212;

													BgL_evalzd2slotszd2_1212 =
														BGl_dropz00zz__r4_pairs_and_lists_6_3z00
														(BgL_allzd2slotszd2_1209,
														bgl_list_length(BgL_nativezd2slotszd2_1208));
													{	/* Eval/evobject.scm 226 */
														obj_t BgL_evalzd2argszd2_1213;

														BgL_evalzd2argszd2_1213 =
															BGl_dropz00zz__r4_pairs_and_lists_6_3z00
															(BgL_allzd2argszd2_1211,
															bgl_list_length(BgL_nativezd2argszd2_1210));
														{	/* Eval/evobject.scm 227 */

															{	/* Eval/evobject.scm 235 */
																obj_t BgL_arg2252z00_1215;

																{	/* Eval/evobject.scm 235 */
																	obj_t BgL_arg2253z00_1216;

																	obj_t BgL_arg2255z00_1217;

																	BgL_arg2253z00_1216 =
																		BGl_symbol5787z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 235 */
																		obj_t BgL_arg2256z00_1218;

																		obj_t BgL_arg2257z00_1219;

																		obj_t BgL_arg2259z00_1220;

																		{	/* Eval/evobject.scm 235 */
																			obj_t BgL_arg2265z00_1226;

																			{	/* Eval/evobject.scm 235 */
																				obj_t BgL_arg2266z00_1227;

																				BgL_arg2266z00_1227 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_allzd2argszd2_1211, BNIL);
																				{	/* Eval/evobject.scm 235 */
																					obj_t BgL_list2267z00_1228;

																					BgL_list2267z00_1228 =
																						MAKE_PAIR(BgL_arg2266z00_1227,
																						BNIL);
																					BgL_arg2265z00_1226 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_oz00_1204,
																						BgL_list2267z00_1228);
																				}
																			}
																			BgL_arg2256z00_1218 =
																				MAKE_PAIR(BgL_fidz00_1203,
																				BgL_arg2265z00_1226);
																		}
																		{	/* Eval/evobject.scm 236 */
																			obj_t BgL_arg2268z00_1229;

																			{	/* Eval/evobject.scm 236 */
																				obj_t BgL_arg2269z00_1230;

																				BgL_arg2269z00_1230 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_nativezd2argszd2_1210, BNIL);
																				{	/* Eval/evobject.scm 236 */
																					obj_t BgL_list2270z00_1231;

																					BgL_list2270z00_1231 =
																						MAKE_PAIR(BgL_arg2269z00_1230,
																						BNIL);
																					BgL_arg2268z00_1229 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_oz00_1204,
																						BgL_list2270z00_1231);
																				}
																			}
																			BgL_arg2257z00_1219 =
																				MAKE_PAIR(BgL_fillzd2nativezd2_1205,
																				BgL_arg2268z00_1229);
																		}
																		{	/* Eval/evobject.scm 237 */
																			obj_t BgL_arg2271z00_1232;

																			obj_t BgL_arg2272z00_1233;

																			BgL_arg2271z00_1232 =
																				BGl_symbol5795z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 238 */
																				obj_t BgL_arg2274z00_1234;

																				{	/* Eval/evobject.scm 238 */
																					obj_t BgL_arg2278z00_1238;

																					obj_t BgL_arg2279z00_1239;

																					BgL_arg2278z00_1238 =
																						BGl_symbol5797z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 238 */
																						obj_t BgL_arg2280z00_1240;

																						if (NULLP(BgL_evalzd2slotszd2_1212))
																							{	/* Eval/evobject.scm 238 */
																								BgL_arg2280z00_1240 = BNIL;
																							}
																						else
																							{	/* Eval/evobject.scm 238 */
																								obj_t BgL_head1909z00_1245;

																								BgL_head1909z00_1245 =
																									MAKE_PAIR
																									(BGl_initzd2slotzd2zz__evobjectz00
																									(CAR
																										(BgL_evalzd2slotszd2_1212),
																										CAR
																										(BgL_evalzd2argszd2_1213)),
																									BNIL);
																								{	/* Eval/evobject.scm 238 */
																									obj_t BgL_g1913z00_1246;

																									obj_t BgL_g1914z00_1247;

																									BgL_g1913z00_1246 =
																										CDR
																										(BgL_evalzd2slotszd2_1212);
																									BgL_g1914z00_1247 =
																										CDR
																										(BgL_evalzd2argszd2_1213);
																									{
																										obj_t BgL_ll1907z00_5881;

																										obj_t BgL_ll1908z00_5882;

																										obj_t BgL_tail1910z00_5883;

																										BgL_ll1907z00_5881 =
																											BgL_g1913z00_1246;
																										BgL_ll1908z00_5882 =
																											BgL_g1914z00_1247;
																										BgL_tail1910z00_5883 =
																											BgL_head1909z00_1245;
																									BgL_zc3anonymousza32283ze3z83_5880:
																										if (NULLP
																											(BgL_ll1907z00_5881))
																											{	/* Eval/evobject.scm 238 */
																												BgL_arg2280z00_1240 =
																													BgL_head1909z00_1245;
																											}
																										else
																											{	/* Eval/evobject.scm 238 */
																												obj_t
																													BgL_newtail1911z00_5893;
																												BgL_newtail1911z00_5893
																													=
																													MAKE_PAIR
																													(BGl_initzd2slotzd2zz__evobjectz00
																													(CAR
																														(BgL_ll1907z00_5881),
																														CAR
																														(BgL_ll1908z00_5882)),
																													BNIL);
																												SET_CDR
																													(BgL_tail1910z00_5883,
																													BgL_newtail1911z00_5893);
																												{
																													obj_t
																														BgL_tail1910z00_8508;
																													obj_t
																														BgL_ll1908z00_8506;
																													obj_t
																														BgL_ll1907z00_8504;
																													BgL_ll1907z00_8504 =
																														CDR
																														(BgL_ll1907z00_5881);
																													BgL_ll1908z00_8506 =
																														CDR
																														(BgL_ll1908z00_5882);
																													BgL_tail1910z00_8508 =
																														BgL_newtail1911z00_5893;
																													BgL_tail1910z00_5883 =
																														BgL_tail1910z00_8508;
																													BgL_ll1908z00_5882 =
																														BgL_ll1908z00_8506;
																													BgL_ll1907z00_5881 =
																														BgL_ll1907z00_8504;
																													goto
																														BgL_zc3anonymousza32283ze3z83_5880;
																												}
																											}
																									}
																								}
																							}
																						BgL_arg2279z00_1239 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2280z00_1240, BNIL);
																					}
																					BgL_arg2274z00_1234 =
																						MAKE_PAIR(BgL_arg2278z00_1238,
																						BgL_arg2279z00_1239);
																				}
																				{	/* Eval/evobject.scm 237 */
																					obj_t BgL_list2276z00_1236;

																					{	/* Eval/evobject.scm 237 */
																						obj_t BgL_arg2277z00_1237;

																						BgL_arg2277z00_1237 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2276z00_1236 =
																							MAKE_PAIR(BgL_arg2274z00_1234,
																							BgL_arg2277z00_1237);
																					}
																					BgL_arg2272z00_1233 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_oz00_1204,
																						BgL_list2276z00_1236);
																				}
																			}
																			BgL_arg2259z00_1220 =
																				MAKE_PAIR(BgL_arg2271z00_1232,
																				BgL_arg2272z00_1233);
																		}
																		{	/* Eval/evobject.scm 235 */
																			obj_t BgL_list2261z00_1222;

																			{	/* Eval/evobject.scm 235 */
																				obj_t BgL_arg2262z00_1223;

																				{	/* Eval/evobject.scm 235 */
																					obj_t BgL_arg2263z00_1224;

																					{	/* Eval/evobject.scm 235 */
																						obj_t BgL_arg2264z00_1225;

																						BgL_arg2264z00_1225 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2263z00_1224 =
																							MAKE_PAIR(BgL_oz00_1204,
																							BgL_arg2264z00_1225);
																					}
																					BgL_arg2262z00_1223 =
																						MAKE_PAIR(BgL_arg2259z00_1220,
																						BgL_arg2263z00_1224);
																				}
																				BgL_list2261z00_1222 =
																					MAKE_PAIR(BgL_arg2257z00_1219,
																					BgL_arg2262z00_1223);
																			}
																			BgL_arg2255z00_1217 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2256z00_1218,
																				BgL_list2261z00_1222);
																		}
																	}
																	BgL_arg2252z00_1215 =
																		MAKE_PAIR(BgL_arg2253z00_1216,
																		BgL_arg2255z00_1217);
																}
																return
																	BGl_localiza7eza7zz__evobjectz00
																	(BgL_locz00_63, BgL_arg2252z00_1215);
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
			}
		}
	}



/* init-slot */
	obj_t BGl_initzd2slotzd2zz__evobjectz00(obj_t BgL_sz00_1266,
		obj_t BgL_az00_1267)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 232 */
			{	/* Eval/evobject.scm 229 */
				obj_t BgL_vz00_1269;

				{	/* Eval/evobject.scm 229 */
					bool_t BgL_testz00_8522;

					{	/* Eval/evobject.scm 229 */
						obj_t BgL_sz00_5947;

						BgL_sz00_5947 = BgL_sz00_1266;
						BgL_testz00_8522 =
							CBOOL(STRUCT_REF(BgL_sz00_5947, (int) (((long) 6))));
					}
					if (BgL_testz00_8522)
						{	/* Eval/evobject.scm 230 */
							obj_t BgL_arg2300z00_1271;

							obj_t BgL_arg2301z00_1272;

							BgL_arg2300z00_1271 = BGl_symbol5799z00zz__evobjectz00;
							{	/* Eval/evobject.scm 230 */
								obj_t BgL_arg2302z00_1273;

								{	/* Eval/evobject.scm 230 */
									obj_t BgL_arg2306z00_1277;

									BgL_arg2306z00_1277 =
										STRUCT_REF(BgL_sz00_1266, (int) (((long) 0)));
									{	/* Eval/evobject.scm 230 */
										obj_t BgL_arg2124z00_5953;

										{	/* Eval/evobject.scm 230 */
											obj_t BgL_arg2125z00_5954;

											obj_t BgL_arg2126z00_5955;

											{	/* Eval/evobject.scm 230 */
												obj_t BgL_res5619z00_5960;

												{	/* Eval/evobject.scm 230 */
													obj_t BgL_symbolz00_5958;

													BgL_symbolz00_5958 = BgL_arg2306z00_1277;
													{	/* Eval/evobject.scm 230 */
														obj_t BgL_arg5527z00_5959;

														BgL_arg5527z00_5959 =
															SYMBOL_TO_STRING(BgL_symbolz00_5958);
														BgL_res5619z00_5960 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg5527z00_5959);
												}}
												BgL_arg2125z00_5954 = BgL_res5619z00_5960;
											}
											{	/* Eval/evobject.scm 230 */
												obj_t BgL_res5620z00_5963;

												{	/* Eval/evobject.scm 230 */
													obj_t BgL_symbolz00_5961;

													BgL_symbolz00_5961 = BGl_symbol5801z00zz__evobjectz00;
													{	/* Eval/evobject.scm 230 */
														obj_t BgL_arg5527z00_5962;

														BgL_arg5527z00_5962 =
															SYMBOL_TO_STRING(BgL_symbolz00_5961);
														BgL_res5620z00_5963 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg5527z00_5962);
												}}
												BgL_arg2126z00_5955 = BgL_res5620z00_5963;
											}
											{	/* Eval/evobject.scm 230 */
												obj_t BgL_list2127z00_5956;

												{	/* Eval/evobject.scm 230 */
													obj_t BgL_arg2130z00_5957;

													BgL_arg2130z00_5957 =
														MAKE_PAIR(BgL_arg2126z00_5955, BNIL);
													BgL_list2127z00_5956 =
														MAKE_PAIR(BgL_arg2125z00_5954, BgL_arg2130z00_5957);
												}
												BgL_arg2124z00_5953 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list2127z00_5956);
										}}
										BgL_arg2302z00_1273 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg2124z00_5953));
								}}
								{	/* Eval/evobject.scm 230 */
									obj_t BgL_list2304z00_1275;

									{	/* Eval/evobject.scm 230 */
										obj_t BgL_arg2305z00_1276;

										BgL_arg2305z00_1276 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2304z00_1275 =
											MAKE_PAIR(BgL_az00_1267, BgL_arg2305z00_1276);
									}
									BgL_arg2301z00_1272 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2302z00_1273, BgL_list2304z00_1275);
							}}
							BgL_vz00_1269 =
								MAKE_PAIR(BgL_arg2300z00_1271, BgL_arg2301z00_1272);
						}
					else
						{	/* Eval/evobject.scm 229 */
							BgL_vz00_1269 = BgL_az00_1267;
						}
				}
				return BgL_vz00_1269;
			}
		}
	}



/* <anonymous:2135>_5761 */
	obj_t BGl_zc3anonymousza32135ze3_5761z83zz__evobjectz00(obj_t BgL_envz00_7936,
		obj_t BgL_sz00_7937)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 167 */
			{
				obj_t BgL_sz00_5799;

				{	/* Eval/evobject.scm 225 */
					bool_t BgL_auxz00_8541;

					BgL_sz00_5799 = BgL_sz00_7937;
					{	/* Eval/evobject.scm 225 */
						bool_t BgL_testz00_8542;

						{	/* Eval/evobject.scm 225 */
							obj_t BgL_sz00_5804;

							BgL_sz00_5804 = BgL_sz00_5799;
							BgL_testz00_8542 =
								CBOOL(STRUCT_REF(BgL_sz00_5804, (int) (((long) 4))));
						}
						if (BgL_testz00_8542)
							{	/* Eval/evobject.scm 225 */
								BgL_auxz00_8541 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 225 */
								BgL_auxz00_8541 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_8541);
				}
			}
		}
	}



/* <anonymous:2135>_5762 */
	obj_t BGl_zc3anonymousza32135ze3_5762z83zz__evobjectz00(obj_t BgL_envz00_7938,
		obj_t BgL_sz00_7939)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 167 */
			{
				obj_t BgL_sz00_5723;

				{	/* Eval/evobject.scm 224 */
					bool_t BgL_auxz00_8547;

					BgL_sz00_5723 = BgL_sz00_7939;
					{	/* Eval/evobject.scm 224 */
						bool_t BgL_testz00_8548;

						{	/* Eval/evobject.scm 224 */
							obj_t BgL_sz00_5728;

							BgL_sz00_5728 = BgL_sz00_5723;
							BgL_testz00_8548 =
								CBOOL(STRUCT_REF(BgL_sz00_5728, (int) (((long) 4))));
						}
						if (BgL_testz00_8548)
							{	/* Eval/evobject.scm 224 */
								BgL_auxz00_8547 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 224 */
								BgL_auxz00_8547 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_8547);
				}
			}
		}
	}



/* <anonymous:2135>_5763 */
	obj_t BGl_zc3anonymousza32135ze3_5763z83zz__evobjectz00(obj_t BgL_envz00_7940,
		obj_t BgL_sz00_7941)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 167 */
			{
				obj_t BgL_sz00_5714;

				{	/* Eval/evobject.scm 221 */
					bool_t BgL_auxz00_8553;

					BgL_sz00_5714 = BgL_sz00_7941;
					{	/* Eval/evobject.scm 221 */
						bool_t BgL_testz00_8554;

						{	/* Eval/evobject.scm 221 */
							obj_t BgL_sz00_5719;

							BgL_sz00_5719 = BgL_sz00_5714;
							BgL_testz00_8554 =
								CBOOL(STRUCT_REF(BgL_sz00_5719, (int) (((long) 4))));
						}
						if (BgL_testz00_8554)
							{	/* Eval/evobject.scm 221 */
								BgL_auxz00_8553 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 221 */
								BgL_auxz00_8553 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_8553);
				}
			}
		}
	}



/* <anonymous:2135>_5764 */
	obj_t BGl_zc3anonymousza32135ze3_5764z83zz__evobjectz00(obj_t BgL_envz00_7942,
		obj_t BgL_sz00_7943)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 167 */
			{
				obj_t BgL_sz00_5705;

				{	/* Eval/evobject.scm 220 */
					bool_t BgL_auxz00_8559;

					BgL_sz00_5705 = BgL_sz00_7943;
					{	/* Eval/evobject.scm 220 */
						bool_t BgL_testz00_8560;

						{	/* Eval/evobject.scm 220 */
							obj_t BgL_sz00_5710;

							BgL_sz00_5710 = BgL_sz00_5705;
							BgL_testz00_8560 =
								CBOOL(STRUCT_REF(BgL_sz00_5710, (int) (((long) 4))));
						}
						if (BgL_testz00_8560)
							{	/* Eval/evobject.scm 220 */
								BgL_auxz00_8559 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 220 */
								BgL_auxz00_8559 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_8559);
				}
			}
		}
	}



/* <anonymous:2135>_5765 */
	obj_t BGl_zc3anonymousza32135ze3_5765z83zz__evobjectz00(obj_t BgL_envz00_7944,
		obj_t BgL_sz00_7945)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 167 */
			{
				obj_t BgL_sz00_5696;

				{	/* Eval/evobject.scm 219 */
					bool_t BgL_auxz00_8565;

					BgL_sz00_5696 = BgL_sz00_7945;
					{	/* Eval/evobject.scm 219 */
						bool_t BgL_testz00_8566;

						{	/* Eval/evobject.scm 219 */
							obj_t BgL_sz00_5701;

							BgL_sz00_5701 = BgL_sz00_5696;
							BgL_testz00_8566 =
								CBOOL(STRUCT_REF(BgL_sz00_5701, (int) (((long) 4))));
						}
						if (BgL_testz00_8566)
							{	/* Eval/evobject.scm 219 */
								BgL_auxz00_8565 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 219 */
								BgL_auxz00_8565 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_8565);
				}
			}
		}
	}



/* eval-allocate-class */
	obj_t BGl_evalzd2allocatezd2classz00zz__evobjectz00(obj_t BgL_locz00_70,
		obj_t BgL_idz00_71, obj_t BgL_slotsz00_72, obj_t BgL_superz00_73,
		obj_t BgL_superzd2slotszd2_74, obj_t BgL_nativez00_75,
		obj_t BgL_nativezd2slotszd2_76)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 244 */
			{	/* Eval/evobject.scm 245 */
				obj_t BgL_allocatezd2nativezd2_1322;

				{	/* Eval/evobject.scm 245 */
					obj_t BgL_arg2384z00_1379;

					BgL_arg2384z00_1379 =
						BGl_classzd2namezd2zz__objectz00(BgL_nativez00_75);
					{	/* Eval/evobject.scm 245 */
						obj_t BgL_arg2103z00_5966;

						{	/* Eval/evobject.scm 245 */
							obj_t BgL_arg2104z00_5967;

							obj_t BgL_arg2105z00_5968;

							{	/* Eval/evobject.scm 245 */
								obj_t BgL_res5621z00_5973;

								{	/* Eval/evobject.scm 245 */
									obj_t BgL_symbolz00_5971;

									BgL_symbolz00_5971 = BGl_symbol5812z00zz__evobjectz00;
									{	/* Eval/evobject.scm 245 */
										obj_t BgL_arg5527z00_5972;

										BgL_arg5527z00_5972 = SYMBOL_TO_STRING(BgL_symbolz00_5971);
										BgL_res5621z00_5973 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg5527z00_5972);
									}
								}
								BgL_arg2104z00_5967 = BgL_res5621z00_5973;
							}
							{	/* Eval/evobject.scm 245 */
								obj_t BgL_res5622z00_5976;

								{	/* Eval/evobject.scm 245 */
									obj_t BgL_arg5527z00_5975;

									BgL_arg5527z00_5975 = SYMBOL_TO_STRING(BgL_arg2384z00_1379);
									BgL_res5622z00_5976 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg5527z00_5975);
								}
								BgL_arg2105z00_5968 = BgL_res5622z00_5976;
							}
							{	/* Eval/evobject.scm 245 */
								obj_t BgL_list2106z00_5969;

								{	/* Eval/evobject.scm 245 */
									obj_t BgL_arg2107z00_5970;

									BgL_arg2107z00_5970 = MAKE_PAIR(BgL_arg2105z00_5968, BNIL);
									BgL_list2106z00_5969 =
										MAKE_PAIR(BgL_arg2104z00_5967, BgL_arg2107z00_5970);
								}
								BgL_arg2103z00_5966 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2106z00_5969);
							}
						}
						BgL_allocatezd2nativezd2_1322 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg2103z00_5966));
					}
				}
				{	/* Eval/evobject.scm 245 */
					obj_t BgL_nativezd2argszd2_1323;

					{	/* Eval/evobject.scm 246 */
						obj_t BgL_list2383z00_1378;

						BgL_list2383z00_1378 = MAKE_PAIR(BgL_nativezd2slotszd2_76, BNIL);
						BgL_nativezd2argszd2_1323 =
							BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
							(BGl_slotzd2nonzd2virtualzd2idzd2envz00zz__evobjectz00,
							BgL_list2383z00_1378);
					}
					{	/* Eval/evobject.scm 246 */
						obj_t BgL_argsz00_1324;

						{	/* Eval/evobject.scm 247 */
							obj_t BgL_arg2379z00_1374;

							obj_t BgL_arg2380z00_1375;

							{	/* Eval/evobject.scm 247 */
								obj_t BgL_list2381z00_1376;

								BgL_list2381z00_1376 = MAKE_PAIR(BgL_superzd2slotszd2_74, BNIL);
								BgL_arg2379z00_1374 =
									BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
									(BGl_slotzd2nonzd2virtualzd2idzd2envz00zz__evobjectz00,
									BgL_list2381z00_1376);
							}
							{	/* Eval/evobject.scm 248 */
								obj_t BgL_list2382z00_1377;

								BgL_list2382z00_1377 = MAKE_PAIR(BgL_slotsz00_72, BNIL);
								BgL_arg2380z00_1375 =
									BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
									(BGl_slotzd2nonzd2virtualzd2idzd2envz00zz__evobjectz00,
									BgL_list2382z00_1377);
							}
							BgL_argsz00_1324 =
								bgl_append2(BgL_arg2379z00_1374, BgL_arg2380z00_1375);
						}
						{	/* Eval/evobject.scm 247 */
							obj_t BgL_fidz00_1325;

							{	/* Eval/evobject.scm 249 */
								obj_t BgL_arg2103z00_5979;

								{	/* Eval/evobject.scm 249 */
									obj_t BgL_arg2104z00_5980;

									obj_t BgL_arg2105z00_5981;

									{	/* Eval/evobject.scm 249 */
										obj_t BgL_res5623z00_5986;

										{	/* Eval/evobject.scm 249 */
											obj_t BgL_symbolz00_5984;

											BgL_symbolz00_5984 = BGl_symbol5812z00zz__evobjectz00;
											{	/* Eval/evobject.scm 249 */
												obj_t BgL_arg5527z00_5985;

												BgL_arg5527z00_5985 =
													SYMBOL_TO_STRING(BgL_symbolz00_5984);
												BgL_res5623z00_5986 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg5527z00_5985);
											}
										}
										BgL_arg2104z00_5980 = BgL_res5623z00_5986;
									}
									{	/* Eval/evobject.scm 249 */
										obj_t BgL_res5624z00_5989;

										{	/* Eval/evobject.scm 249 */
											obj_t BgL_arg5527z00_5988;

											BgL_arg5527z00_5988 = SYMBOL_TO_STRING(BgL_idz00_71);
											BgL_res5624z00_5989 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg5527z00_5988);
										}
										BgL_arg2105z00_5981 = BgL_res5624z00_5989;
									}
									{	/* Eval/evobject.scm 249 */
										obj_t BgL_list2106z00_5982;

										{	/* Eval/evobject.scm 249 */
											obj_t BgL_arg2107z00_5983;

											BgL_arg2107z00_5983 =
												MAKE_PAIR(BgL_arg2105z00_5981, BNIL);
											BgL_list2106z00_5982 =
												MAKE_PAIR(BgL_arg2104z00_5980, BgL_arg2107z00_5983);
										}
										BgL_arg2103z00_5979 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2106z00_5982);
									}
								}
								BgL_fidz00_1325 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2103z00_5979));
							}
							{	/* Eval/evobject.scm 249 */
								obj_t BgL_tmpz00_1326;

								{	/* Eval/evobject.scm 250 */

									{	/* Eval/evobject.scm 250 */

										BgL_tmpz00_1326 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}
								}
								{	/* Eval/evobject.scm 250 */

									{	/* Eval/evobject.scm 253 */
										obj_t BgL_arg2333z00_1327;

										{	/* Eval/evobject.scm 253 */
											obj_t BgL_arg2334z00_1328;

											obj_t BgL_arg2335z00_1329;

											BgL_arg2334z00_1328 = BGl_symbol5787z00zz__evobjectz00;
											{	/* Eval/evobject.scm 253 */
												obj_t BgL_arg2336z00_1330;

												obj_t BgL_arg2337z00_1331;

												BgL_arg2336z00_1330 = MAKE_PAIR(BgL_fidz00_1325, BNIL);
												{	/* Eval/evobject.scm 254 */
													obj_t BgL_arg2341z00_1335;

													obj_t BgL_arg2342z00_1336;

													BgL_arg2341z00_1335 =
														BGl_symbol5789z00zz__evobjectz00;
													{	/* Eval/evobject.scm 254 */
														obj_t BgL_arg2343z00_1337;

														obj_t BgL_arg2344z00_1338;

														obj_t BgL_arg2345z00_1339;

														{	/* Eval/evobject.scm 254 */
															obj_t BgL_arg2351z00_1345;

															{	/* Eval/evobject.scm 254 */
																obj_t BgL_arg2353z00_1347;

																{	/* Eval/evobject.scm 254 */
																	obj_t BgL_arg2354z00_1348;

																	BgL_arg2354z00_1348 =
																		MAKE_PAIR(BgL_allocatezd2nativezd2_1322,
																		BNIL);
																	{	/* Eval/evobject.scm 254 */
																		obj_t BgL_list2356z00_1350;

																		BgL_list2356z00_1350 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2353z00_1347 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2354z00_1348,
																			BgL_list2356z00_1350);
																	}
																}
																BgL_arg2351z00_1345 =
																	MAKE_PAIR(BgL_tmpz00_1326,
																	BgL_arg2353z00_1347);
															}
															BgL_arg2343z00_1337 =
																MAKE_PAIR(BgL_arg2351z00_1345, BNIL);
														}
														{	/* Eval/evobject.scm 255 */
															obj_t BgL_arg2357z00_1351;

															obj_t BgL_arg2358z00_1352;

															BgL_arg2357z00_1351 =
																BGl_symbol5791z00zz__evobjectz00;
															{	/* Eval/evobject.scm 255 */
																obj_t BgL_arg2359z00_1353;

																{	/* Eval/evobject.scm 255 */
																	obj_t BgL_arg2363z00_1357;

																	obj_t BgL_arg2364z00_1358;

																	BgL_arg2363z00_1357 =
																		BGl_symbol5793z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 255 */
																		obj_t BgL_list2365z00_1359;

																		BgL_list2365z00_1359 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2364z00_1358 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_idz00_71, BgL_list2365z00_1359);
																	}
																	BgL_arg2359z00_1353 =
																		MAKE_PAIR(BgL_arg2363z00_1357,
																		BgL_arg2364z00_1358);
																}
																{	/* Eval/evobject.scm 255 */
																	obj_t BgL_list2361z00_1355;

																	{	/* Eval/evobject.scm 255 */
																		obj_t BgL_arg2362z00_1356;

																		BgL_arg2362z00_1356 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2361z00_1355 =
																			MAKE_PAIR(BgL_arg2359z00_1353,
																			BgL_arg2362z00_1356);
																	}
																	BgL_arg2358z00_1352 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_tmpz00_1326, BgL_list2361z00_1355);
																}
															}
															BgL_arg2344z00_1338 =
																MAKE_PAIR(BgL_arg2357z00_1351,
																BgL_arg2358z00_1352);
														}
														{	/* Eval/evobject.scm 256 */
															obj_t BgL_arg2366z00_1360;

															obj_t BgL_arg2367z00_1361;

															BgL_arg2366z00_1360 =
																BGl_symbol5795z00zz__evobjectz00;
															{	/* Eval/evobject.scm 256 */
																obj_t BgL_arg2368z00_1362;

																{	/* Eval/evobject.scm 256 */
																	obj_t BgL_arg2372z00_1366;

																	obj_t BgL_arg2373z00_1367;

																	BgL_arg2372z00_1366 =
																		BGl_symbol5799z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 257 */
																		long BgL_arg2374z00_1368;

																		BgL_arg2374z00_1368 =
																			(long)
																			CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT
																				(bgl_list_length(BgL_argsz00_1324)),
																				BINT(bgl_list_length
																					(BgL_nativezd2argszd2_1323))));
																		{	/* Eval/evobject.scm 256 */
																			obj_t BgL_list2376z00_1370;

																			BgL_list2376z00_1370 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2373z00_1367 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BINT(BgL_arg2374z00_1368),
																				BgL_list2376z00_1370);
																	}}
																	BgL_arg2368z00_1362 =
																		MAKE_PAIR(BgL_arg2372z00_1366,
																		BgL_arg2373z00_1367);
																}
																{	/* Eval/evobject.scm 256 */
																	obj_t BgL_list2370z00_1364;

																	{	/* Eval/evobject.scm 256 */
																		obj_t BgL_arg2371z00_1365;

																		BgL_arg2371z00_1365 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2370z00_1364 =
																			MAKE_PAIR(BgL_arg2368z00_1362,
																			BgL_arg2371z00_1365);
																	}
																	BgL_arg2367z00_1361 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_tmpz00_1326, BgL_list2370z00_1364);
															}}
															BgL_arg2345z00_1339 =
																MAKE_PAIR(BgL_arg2366z00_1360,
																BgL_arg2367z00_1361);
														}
														{	/* Eval/evobject.scm 254 */
															obj_t BgL_list2347z00_1341;

															{	/* Eval/evobject.scm 254 */
																obj_t BgL_arg2348z00_1342;

																{	/* Eval/evobject.scm 254 */
																	obj_t BgL_arg2349z00_1343;

																	{	/* Eval/evobject.scm 254 */
																		obj_t BgL_arg2350z00_1344;

																		BgL_arg2350z00_1344 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2349z00_1343 =
																			MAKE_PAIR(BgL_tmpz00_1326,
																			BgL_arg2350z00_1344);
																	}
																	BgL_arg2348z00_1342 =
																		MAKE_PAIR(BgL_arg2345z00_1339,
																		BgL_arg2349z00_1343);
																}
																BgL_list2347z00_1341 =
																	MAKE_PAIR(BgL_arg2344z00_1338,
																	BgL_arg2348z00_1342);
															}
															BgL_arg2342z00_1336 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2343z00_1337, BgL_list2347z00_1341);
													}}
													BgL_arg2337z00_1331 =
														MAKE_PAIR(BgL_arg2341z00_1335, BgL_arg2342z00_1336);
												}
												{	/* Eval/evobject.scm 253 */
													obj_t BgL_list2339z00_1333;

													{	/* Eval/evobject.scm 253 */
														obj_t BgL_arg2340z00_1334;

														BgL_arg2340z00_1334 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2339z00_1333 =
															MAKE_PAIR(BgL_arg2337z00_1331,
															BgL_arg2340z00_1334);
													}
													BgL_arg2335z00_1329 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2336z00_1330, BgL_list2339z00_1333);
											}}
											BgL_arg2333z00_1327 =
												MAKE_PAIR(BgL_arg2334z00_1328, BgL_arg2335z00_1329);
										}
										return
											BGl_localiza7eza7zz__evobjectz00(BgL_locz00_70,
											BgL_arg2333z00_1327);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* eval-class-nil */
	obj_t BGl_evalzd2classzd2nilz00zz__evobjectz00(obj_t BgL_locz00_77,
		obj_t BgL_idz00_78, obj_t BgL_superz00_79, obj_t BgL_nativez00_80)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 264 */
			{	/* Eval/evobject.scm 265 */
				obj_t BgL_nativezd2nilzd2_1380;

				{	/* Eval/evobject.scm 265 */
					obj_t BgL_arg2416z00_1415;

					BgL_arg2416z00_1415 =
						BGl_classzd2namezd2zz__objectz00(BgL_nativez00_80);
					{	/* Eval/evobject.scm 265 */
						obj_t BgL_arg2108z00_5992;

						{	/* Eval/evobject.scm 265 */
							obj_t BgL_arg2109z00_5993;

							obj_t BgL_arg2110z00_5994;

							{	/* Eval/evobject.scm 265 */
								obj_t BgL_res5625z00_5999;

								{	/* Eval/evobject.scm 265 */
									obj_t BgL_arg5527z00_5998;

									BgL_arg5527z00_5998 = SYMBOL_TO_STRING(BgL_arg2416z00_1415);
									BgL_res5625z00_5999 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg5527z00_5998);
								}
								BgL_arg2109z00_5993 = BgL_res5625z00_5999;
							}
							{	/* Eval/evobject.scm 265 */
								obj_t BgL_res5626z00_6002;

								{	/* Eval/evobject.scm 265 */
									obj_t BgL_symbolz00_6000;

									BgL_symbolz00_6000 = BGl_symbol5814z00zz__evobjectz00;
									{	/* Eval/evobject.scm 265 */
										obj_t BgL_arg5527z00_6001;

										BgL_arg5527z00_6001 = SYMBOL_TO_STRING(BgL_symbolz00_6000);
										BgL_res5626z00_6002 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg5527z00_6001);
									}
								}
								BgL_arg2110z00_5994 = BgL_res5626z00_6002;
							}
							{	/* Eval/evobject.scm 265 */
								obj_t BgL_list2111z00_5995;

								{	/* Eval/evobject.scm 265 */
									obj_t BgL_arg2112z00_5996;

									BgL_arg2112z00_5996 = MAKE_PAIR(BgL_arg2110z00_5994, BNIL);
									BgL_list2111z00_5995 =
										MAKE_PAIR(BgL_arg2109z00_5993, BgL_arg2112z00_5996);
								}
								BgL_arg2108z00_5992 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2111z00_5995);
							}
						}
						BgL_nativezd2nilzd2_1380 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg2108z00_5992));
					}
				}
				{	/* Eval/evobject.scm 265 */
					obj_t BgL_fidz00_1381;

					{	/* Eval/evobject.scm 266 */
						obj_t BgL_arg2108z00_6005;

						{	/* Eval/evobject.scm 266 */
							obj_t BgL_arg2109z00_6006;

							obj_t BgL_arg2110z00_6007;

							{	/* Eval/evobject.scm 266 */
								obj_t BgL_res5627z00_6012;

								{	/* Eval/evobject.scm 266 */
									obj_t BgL_arg5527z00_6011;

									BgL_arg5527z00_6011 = SYMBOL_TO_STRING(BgL_idz00_78);
									BgL_res5627z00_6012 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg5527z00_6011);
								}
								BgL_arg2109z00_6006 = BgL_res5627z00_6012;
							}
							{	/* Eval/evobject.scm 266 */
								obj_t BgL_res5628z00_6015;

								{	/* Eval/evobject.scm 266 */
									obj_t BgL_symbolz00_6013;

									BgL_symbolz00_6013 = BGl_symbol5814z00zz__evobjectz00;
									{	/* Eval/evobject.scm 266 */
										obj_t BgL_arg5527z00_6014;

										BgL_arg5527z00_6014 = SYMBOL_TO_STRING(BgL_symbolz00_6013);
										BgL_res5628z00_6015 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg5527z00_6014);
									}
								}
								BgL_arg2110z00_6007 = BgL_res5628z00_6015;
							}
							{	/* Eval/evobject.scm 266 */
								obj_t BgL_list2111z00_6008;

								{	/* Eval/evobject.scm 266 */
									obj_t BgL_arg2112z00_6009;

									BgL_arg2112z00_6009 = MAKE_PAIR(BgL_arg2110z00_6007, BNIL);
									BgL_list2111z00_6008 =
										MAKE_PAIR(BgL_arg2109z00_6006, BgL_arg2112z00_6009);
								}
								BgL_arg2108z00_6005 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2111z00_6008);
							}
						}
						BgL_fidz00_1381 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg2108z00_6005));
					}
					{	/* Eval/evobject.scm 266 */
						obj_t BgL_tmpz00_1382;

						{	/* Eval/evobject.scm 267 */

							{	/* Eval/evobject.scm 267 */

								BgL_tmpz00_1382 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						{	/* Eval/evobject.scm 267 */

							{	/* Eval/evobject.scm 270 */
								obj_t BgL_arg2385z00_1383;

								{	/* Eval/evobject.scm 270 */
									obj_t BgL_arg2386z00_1384;

									obj_t BgL_arg2387z00_1385;

									BgL_arg2386z00_1384 = BGl_symbol5787z00zz__evobjectz00;
									{	/* Eval/evobject.scm 270 */
										obj_t BgL_arg2388z00_1386;

										obj_t BgL_arg2389z00_1387;

										BgL_arg2388z00_1386 = MAKE_PAIR(BgL_fidz00_1381, BNIL);
										{	/* Eval/evobject.scm 271 */
											obj_t BgL_arg2393z00_1391;

											obj_t BgL_arg2394z00_1392;

											BgL_arg2393z00_1391 = BGl_symbol5789z00zz__evobjectz00;
											{	/* Eval/evobject.scm 271 */
												obj_t BgL_arg2395z00_1393;

												obj_t BgL_arg2396z00_1394;

												{	/* Eval/evobject.scm 271 */
													obj_t BgL_arg2401z00_1399;

													{	/* Eval/evobject.scm 271 */
														obj_t BgL_arg2403z00_1401;

														{	/* Eval/evobject.scm 271 */
															obj_t BgL_arg2404z00_1402;

															BgL_arg2404z00_1402 =
																MAKE_PAIR(BgL_nativezd2nilzd2_1380, BNIL);
															{	/* Eval/evobject.scm 271 */
																obj_t BgL_list2406z00_1404;

																BgL_list2406z00_1404 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2403z00_1401 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2404z00_1402, BgL_list2406z00_1404);
															}
														}
														BgL_arg2401z00_1399 =
															MAKE_PAIR(BgL_tmpz00_1382, BgL_arg2403z00_1401);
													}
													BgL_arg2395z00_1393 =
														MAKE_PAIR(BgL_arg2401z00_1399, BNIL);
												}
												{	/* Eval/evobject.scm 272 */
													obj_t BgL_arg2407z00_1405;

													obj_t BgL_arg2408z00_1406;

													BgL_arg2407z00_1405 =
														BGl_symbol5791z00zz__evobjectz00;
													{	/* Eval/evobject.scm 272 */
														obj_t BgL_arg2409z00_1407;

														{	/* Eval/evobject.scm 272 */
															obj_t BgL_arg2413z00_1411;

															obj_t BgL_arg2414z00_1412;

															BgL_arg2413z00_1411 =
																BGl_symbol5793z00zz__evobjectz00;
															{	/* Eval/evobject.scm 272 */
																obj_t BgL_list2415z00_1413;

																BgL_list2415z00_1413 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2414z00_1412 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_idz00_78, BgL_list2415z00_1413);
															}
															BgL_arg2409z00_1407 =
																MAKE_PAIR(BgL_arg2413z00_1411,
																BgL_arg2414z00_1412);
														}
														{	/* Eval/evobject.scm 272 */
															obj_t BgL_list2411z00_1409;

															{	/* Eval/evobject.scm 272 */
																obj_t BgL_arg2412z00_1410;

																BgL_arg2412z00_1410 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2411z00_1409 =
																	MAKE_PAIR(BgL_arg2409z00_1407,
																	BgL_arg2412z00_1410);
															}
															BgL_arg2408z00_1406 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_tmpz00_1382, BgL_list2411z00_1409);
														}
													}
													BgL_arg2396z00_1394 =
														MAKE_PAIR(BgL_arg2407z00_1405, BgL_arg2408z00_1406);
												}
												{	/* Eval/evobject.scm 271 */
													obj_t BgL_list2398z00_1396;

													{	/* Eval/evobject.scm 271 */
														obj_t BgL_arg2399z00_1397;

														{	/* Eval/evobject.scm 271 */
															obj_t BgL_arg2400z00_1398;

															BgL_arg2400z00_1398 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2399z00_1397 =
																MAKE_PAIR(BgL_tmpz00_1382, BgL_arg2400z00_1398);
														}
														BgL_list2398z00_1396 =
															MAKE_PAIR(BgL_arg2396z00_1394,
															BgL_arg2399z00_1397);
													}
													BgL_arg2394z00_1392 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2395z00_1393, BgL_list2398z00_1396);
												}
											}
											BgL_arg2389z00_1387 =
												MAKE_PAIR(BgL_arg2393z00_1391, BgL_arg2394z00_1392);
										}
										{	/* Eval/evobject.scm 270 */
											obj_t BgL_list2391z00_1389;

											{	/* Eval/evobject.scm 270 */
												obj_t BgL_arg2392z00_1390;

												BgL_arg2392z00_1390 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2391z00_1389 =
													MAKE_PAIR(BgL_arg2389z00_1387, BgL_arg2392z00_1390);
											}
											BgL_arg2387z00_1385 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2388z00_1386, BgL_list2391z00_1389);
										}
									}
									BgL_arg2385z00_1383 =
										MAKE_PAIR(BgL_arg2386z00_1384, BgL_arg2387z00_1385);
								}
								return
									BGl_localiza7eza7zz__evobjectz00(BgL_locz00_77,
									BgL_arg2385z00_1383);
							}
						}
					}
				}
			}
		}
	}



/* eval-class-predicate */
	obj_t BGl_evalzd2classzd2predicatez00zz__evobjectz00(obj_t BgL_locz00_81,
		obj_t BgL_idz00_82)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 278 */
			{	/* Eval/evobject.scm 279 */
				obj_t BgL_fidz00_1416;

				{	/* Eval/evobject.scm 279 */
					obj_t BgL_arg2089z00_6018;

					{	/* Eval/evobject.scm 279 */
						obj_t BgL_arg2090z00_6019;

						obj_t BgL_arg2091z00_6020;

						{	/* Eval/evobject.scm 279 */
							obj_t BgL_res5629z00_6025;

							{	/* Eval/evobject.scm 279 */
								obj_t BgL_arg5527z00_6024;

								BgL_arg5527z00_6024 = SYMBOL_TO_STRING(BgL_idz00_82);
								BgL_res5629z00_6025 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg5527z00_6024);
							}
							BgL_arg2090z00_6019 = BgL_res5629z00_6025;
						}
						{	/* Eval/evobject.scm 279 */
							obj_t BgL_res5630z00_6028;

							{	/* Eval/evobject.scm 279 */
								obj_t BgL_symbolz00_6026;

								BgL_symbolz00_6026 = BGl_symbol5816z00zz__evobjectz00;
								{	/* Eval/evobject.scm 279 */
									obj_t BgL_arg5527z00_6027;

									BgL_arg5527z00_6027 = SYMBOL_TO_STRING(BgL_symbolz00_6026);
									BgL_res5630z00_6028 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg5527z00_6027);
								}
							}
							BgL_arg2091z00_6020 = BgL_res5630z00_6028;
						}
						{	/* Eval/evobject.scm 279 */
							obj_t BgL_list2092z00_6021;

							{	/* Eval/evobject.scm 279 */
								obj_t BgL_arg2093z00_6022;

								BgL_arg2093z00_6022 = MAKE_PAIR(BgL_arg2091z00_6020, BNIL);
								BgL_list2092z00_6021 =
									MAKE_PAIR(BgL_arg2090z00_6019, BgL_arg2093z00_6022);
							}
							BgL_arg2089z00_6018 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2092z00_6021);
						}
					}
					BgL_fidz00_1416 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg2089z00_6018));
				}
				{	/* Eval/evobject.scm 282 */
					obj_t BgL_arg2417z00_1417;

					{	/* Eval/evobject.scm 282 */
						obj_t BgL_arg2418z00_1418;

						obj_t BgL_arg2419z00_1419;

						BgL_arg2418z00_1418 = BGl_symbol5787z00zz__evobjectz00;
						{	/* Eval/evobject.scm 282 */
							obj_t BgL_arg2420z00_1420;

							obj_t BgL_arg2421z00_1421;

							{	/* Eval/evobject.scm 282 */
								obj_t BgL_arg2425z00_1425;

								{	/* Eval/evobject.scm 282 */
									obj_t BgL_list2426z00_1426;

									BgL_list2426z00_1426 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2425z00_1425 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol5818z00zz__evobjectz00, BgL_list2426z00_1426);
								}
								BgL_arg2420z00_1420 =
									MAKE_PAIR(BgL_fidz00_1416, BgL_arg2425z00_1425);
							}
							{	/* Eval/evobject.scm 283 */
								obj_t BgL_arg2427z00_1427;

								obj_t BgL_arg2428z00_1428;

								BgL_arg2427z00_1427 = BGl_symbol5820z00zz__evobjectz00;
								{	/* Eval/evobject.scm 283 */
									obj_t BgL_list2429z00_1429;

									{	/* Eval/evobject.scm 283 */
										obj_t BgL_arg2430z00_1430;

										BgL_arg2430z00_1430 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2429z00_1429 =
											MAKE_PAIR(BgL_idz00_82, BgL_arg2430z00_1430);
									}
									BgL_arg2428z00_1428 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol5818z00zz__evobjectz00, BgL_list2429z00_1429);
								}
								BgL_arg2421z00_1421 =
									MAKE_PAIR(BgL_arg2427z00_1427, BgL_arg2428z00_1428);
							}
							{	/* Eval/evobject.scm 282 */
								obj_t BgL_list2423z00_1423;

								{	/* Eval/evobject.scm 282 */
									obj_t BgL_arg2424z00_1424;

									BgL_arg2424z00_1424 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2423z00_1423 =
										MAKE_PAIR(BgL_arg2421z00_1421, BgL_arg2424z00_1424);
								}
								BgL_arg2419z00_1419 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2420z00_1420, BgL_list2423z00_1423);
							}
						}
						BgL_arg2417z00_1417 =
							MAKE_PAIR(BgL_arg2418z00_1418, BgL_arg2419z00_1419);
					}
					return
						BGl_localiza7eza7zz__evobjectz00(BgL_locz00_81,
						BgL_arg2417z00_1417);
				}
			}
		}
	}



/* eval-class-slot-alias */
	obj_t BGl_evalzd2classzd2slotzd2aliaszd2zz__evobjectz00(obj_t BgL_locz00_83,
		obj_t BgL_cidz00_84, obj_t BgL_slotz00_85, obj_t BgL_superz00_86)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 288 */
			{	/* Eval/evobject.scm 289 */
				obj_t BgL_sidz00_1431;

				BgL_sidz00_1431 = STRUCT_REF(BgL_slotz00_85, (int) (((long) 0)));
				{

					{	/* Eval/evobject.scm 296 */
						bool_t BgL_testz00_8702;

						{	/* Eval/evobject.scm 296 */
							obj_t BgL_sz00_6034;

							BgL_sz00_6034 = BgL_slotz00_85;
							BgL_testz00_8702 =
								CBOOL(STRUCT_REF(BgL_sz00_6034, (int) (((long) 2))));
						}
						if (BgL_testz00_8702)
							{	/* Eval/evobject.scm 297 */
								obj_t BgL_arg2432z00_1435;

								BgL_arg2432z00_1435 =
									BGl_localiza7eza7zz__evobjectz00(BgL_locz00_83,
									BGl_refz00zz__evobjectz00(BgL_superz00_86, BgL_cidz00_84,
										BgL_sidz00_1431));
								{	/* Eval/evobject.scm 297 */
									obj_t BgL_list2433z00_1436;

									BgL_list2433z00_1436 = MAKE_PAIR(BgL_arg2432z00_1435, BNIL);
									return BgL_list2433z00_1436;
								}
							}
						else
							{	/* Eval/evobject.scm 298 */
								obj_t BgL_arg2435z00_1438;

								obj_t BgL_arg2436z00_1439;

								BgL_arg2435z00_1438 =
									BGl_localiza7eza7zz__evobjectz00(BgL_locz00_83,
									BGl_refz00zz__evobjectz00(BgL_superz00_86, BgL_cidz00_84,
										BgL_sidz00_1431));
								{	/* Eval/evobject.scm 298 */
									obj_t BgL_auxz00_8711;

									{	/* Eval/evobject.scm 294 */
										obj_t BgL_arg2451z00_1454;

										obj_t BgL_arg2452z00_1455;

										BgL_arg2451z00_1454 = BGl_symbol5787z00zz__evobjectz00;
										{	/* Eval/evobject.scm 294 */
											obj_t BgL_arg2453z00_1456;

											obj_t BgL_arg2454z00_1457;

											{	/* Eval/evobject.scm 294 */
												obj_t BgL_list2117z00_6054;

												{	/* Eval/evobject.scm 294 */
													obj_t BgL_arg2118z00_6055;

													{	/* Eval/evobject.scm 294 */
														obj_t BgL_arg2119z00_6056;

														obj_t BgL_arg2121z00_6057;

														BgL_arg2119z00_6056 =
															BGl_symbol5822z00zz__evobjectz00;
														{	/* Eval/evobject.scm 294 */
															obj_t BgL_arg2123z00_6058;

															BgL_arg2123z00_6058 =
																MAKE_PAIR(BGl_symbol5824z00zz__evobjectz00,
																BNIL);
															BgL_arg2121z00_6057 =
																MAKE_PAIR(BgL_sidz00_1431, BgL_arg2123z00_6058);
														}
														BgL_arg2118z00_6055 =
															MAKE_PAIR(BgL_arg2119z00_6056,
															BgL_arg2121z00_6057);
													}
													BgL_list2117z00_6054 =
														MAKE_PAIR(BgL_cidz00_84, BgL_arg2118z00_6055);
												}
												BgL_arg2453z00_1456 =
													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
													(BgL_list2117z00_6054);
											}
											{	/* Eval/evobject.scm 295 */
												obj_t BgL_arg2458z00_1461;

												BgL_arg2458z00_1461 =
													BGl_classzd2namezd2zz__objectz00(BgL_superz00_86);
												{	/* Eval/evobject.scm 295 */
													obj_t BgL_list2117z00_6061;

													{	/* Eval/evobject.scm 295 */
														obj_t BgL_arg2118z00_6062;

														{	/* Eval/evobject.scm 295 */
															obj_t BgL_arg2119z00_6063;

															obj_t BgL_arg2121z00_6064;

															BgL_arg2119z00_6063 =
																BGl_symbol5822z00zz__evobjectz00;
															{	/* Eval/evobject.scm 295 */
																obj_t BgL_arg2123z00_6065;

																BgL_arg2123z00_6065 =
																	MAKE_PAIR(BGl_symbol5824z00zz__evobjectz00,
																	BNIL);
																BgL_arg2121z00_6064 =
																	MAKE_PAIR(BgL_sidz00_1431,
																	BgL_arg2123z00_6065);
															}
															BgL_arg2118z00_6062 =
																MAKE_PAIR(BgL_arg2119z00_6063,
																BgL_arg2121z00_6064);
														}
														BgL_list2117z00_6061 =
															MAKE_PAIR(BgL_arg2458z00_1461,
															BgL_arg2118z00_6062);
													}
													BgL_arg2454z00_1457 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list2117z00_6061);
												}
											}
											{	/* Eval/evobject.scm 294 */
												obj_t BgL_list2456z00_1459;

												{	/* Eval/evobject.scm 294 */
													obj_t BgL_arg2457z00_1460;

													BgL_arg2457z00_1460 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2456z00_1459 =
														MAKE_PAIR(BgL_arg2454z00_1457, BgL_arg2457z00_1460);
												}
												BgL_arg2452z00_1455 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2453z00_1456, BgL_list2456z00_1459);
											}
										}
										BgL_auxz00_8711 =
											MAKE_PAIR(BgL_arg2451z00_1454, BgL_arg2452z00_1455);
									}
									BgL_arg2436z00_1439 =
										BGl_localiza7eza7zz__evobjectz00(BgL_locz00_83,
										BgL_auxz00_8711);
								}
								{	/* Eval/evobject.scm 298 */
									obj_t BgL_list2437z00_1440;

									{	/* Eval/evobject.scm 298 */
										obj_t BgL_arg2438z00_1441;

										BgL_arg2438z00_1441 = MAKE_PAIR(BgL_arg2436z00_1439, BNIL);
										BgL_list2437z00_1440 =
											MAKE_PAIR(BgL_arg2435z00_1438, BgL_arg2438z00_1441);
									}
									return BgL_list2437z00_1440;
								}
							}
					}
				}
			}
		}
	}



/* ref */
	obj_t BGl_refz00zz__evobjectz00(obj_t BgL_superz00_8028,
		obj_t BgL_cidz00_8027, obj_t BgL_sidz00_8026)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 292 */
			{	/* Eval/evobject.scm 291 */
				obj_t BgL_arg2442z00_1445;

				obj_t BgL_arg2443z00_1446;

				BgL_arg2442z00_1445 = BGl_symbol5787z00zz__evobjectz00;
				{	/* Eval/evobject.scm 291 */
					obj_t BgL_arg2444z00_1447;

					obj_t BgL_arg2445z00_1448;

					{	/* Eval/evobject.scm 291 */
						obj_t BgL_list2113z00_6042;

						{	/* Eval/evobject.scm 291 */
							obj_t BgL_arg2114z00_6043;

							{	/* Eval/evobject.scm 291 */
								obj_t BgL_arg2115z00_6044;

								obj_t BgL_arg2116z00_6045;

								BgL_arg2115z00_6044 = BGl_symbol5822z00zz__evobjectz00;
								BgL_arg2116z00_6045 = MAKE_PAIR(BgL_sidz00_8026, BNIL);
								BgL_arg2114z00_6043 =
									MAKE_PAIR(BgL_arg2115z00_6044, BgL_arg2116z00_6045);
							}
							BgL_list2113z00_6042 =
								MAKE_PAIR(BgL_cidz00_8027, BgL_arg2114z00_6043);
						}
						BgL_arg2444z00_1447 =
							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list2113z00_6042);
					}
					{	/* Eval/evobject.scm 292 */
						obj_t BgL_arg2449z00_1452;

						BgL_arg2449z00_1452 =
							BGl_classzd2namezd2zz__objectz00(BgL_superz00_8028);
						{	/* Eval/evobject.scm 292 */
							obj_t BgL_list2113z00_6048;

							{	/* Eval/evobject.scm 292 */
								obj_t BgL_arg2114z00_6049;

								{	/* Eval/evobject.scm 292 */
									obj_t BgL_arg2115z00_6050;

									obj_t BgL_arg2116z00_6051;

									BgL_arg2115z00_6050 = BGl_symbol5822z00zz__evobjectz00;
									BgL_arg2116z00_6051 = MAKE_PAIR(BgL_sidz00_8026, BNIL);
									BgL_arg2114z00_6049 =
										MAKE_PAIR(BgL_arg2115z00_6050, BgL_arg2116z00_6051);
								}
								BgL_list2113z00_6048 =
									MAKE_PAIR(BgL_arg2449z00_1452, BgL_arg2114z00_6049);
							}
							BgL_arg2445z00_1448 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list2113z00_6048);
						}
					}
					{	/* Eval/evobject.scm 291 */
						obj_t BgL_list2447z00_1450;

						{	/* Eval/evobject.scm 291 */
							obj_t BgL_arg2448z00_1451;

							BgL_arg2448z00_1451 = MAKE_PAIR(BNIL, BNIL);
							BgL_list2447z00_1450 =
								MAKE_PAIR(BgL_arg2445z00_1448, BgL_arg2448z00_1451);
						}
						BgL_arg2443z00_1446 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2444z00_1447,
							BgL_list2447z00_1450);
					}
				}
				return MAKE_PAIR(BgL_arg2442z00_1445, BgL_arg2443z00_1446);
			}
		}
	}



/* eval-class-slot */
	obj_t BGl_evalzd2classzd2slotz00zz__evobjectz00(obj_t BgL_locz00_87,
		obj_t BgL_cidz00_88, obj_t BgL_slotz00_89, obj_t BgL_offsetz00_90)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 303 */
			{

				{	/* Eval/evobject.scm 343 */
					bool_t BgL_testz00_8743;

					{	/* Eval/evobject.scm 343 */
						obj_t BgL_sz00_6067;

						BgL_sz00_6067 = BgL_slotz00_89;
						BgL_testz00_8743 =
							CBOOL(STRUCT_REF(BgL_sz00_6067, (int) (((long) 2))));
					}
					if (BgL_testz00_8743)
						{	/* Eval/evobject.scm 344 */
							obj_t BgL_arg2460z00_1471;

							{	/* Eval/evobject.scm 344 */
								obj_t BgL_arg2462z00_1473;

								{	/* Eval/evobject.scm 344 */
									bool_t BgL_testz00_8747;

									{	/* Eval/evobject.scm 344 */
										obj_t BgL_sz00_6071;

										BgL_sz00_6071 = BgL_slotz00_89;
										BgL_testz00_8747 =
											CBOOL(STRUCT_REF(BgL_sz00_6071, (int) (((long) 6))));
									}
									if (BgL_testz00_8747)
										{	/* Eval/evobject.scm 344 */
											BgL_arg2462z00_1473 =
												BGl_refzd2indexzd2zz__evobjectz00(BgL_offsetz00_90,
												BgL_cidz00_88, BgL_slotz00_89);
										}
									else
										{	/* Eval/evobject.scm 344 */
											BgL_arg2462z00_1473 =
												BGl_refzd2plainzd2zz__evobjectz00(BgL_cidz00_88,
												BgL_slotz00_89, BgL_offsetz00_90);
										}
								}
								BgL_arg2460z00_1471 =
									BGl_localiza7eza7zz__evobjectz00(BgL_locz00_87,
									BgL_arg2462z00_1473);
							}
							{	/* Eval/evobject.scm 344 */
								obj_t BgL_list2461z00_1472;

								BgL_list2461z00_1472 = MAKE_PAIR(BgL_arg2460z00_1471, BNIL);
								return BgL_list2461z00_1472;
							}
						}
					else
						{	/* Eval/evobject.scm 345 */
							obj_t BgL_arg2465z00_1474;

							obj_t BgL_arg2467z00_1475;

							{	/* Eval/evobject.scm 345 */
								obj_t BgL_arg2470z00_1478;

								{	/* Eval/evobject.scm 345 */
									bool_t BgL_testz00_8755;

									{	/* Eval/evobject.scm 345 */
										obj_t BgL_sz00_6077;

										BgL_sz00_6077 = BgL_slotz00_89;
										BgL_testz00_8755 =
											CBOOL(STRUCT_REF(BgL_sz00_6077, (int) (((long) 6))));
									}
									if (BgL_testz00_8755)
										{	/* Eval/evobject.scm 345 */
											BgL_arg2470z00_1478 =
												BGl_refzd2indexzd2zz__evobjectz00(BgL_offsetz00_90,
												BgL_cidz00_88, BgL_slotz00_89);
										}
									else
										{	/* Eval/evobject.scm 345 */
											BgL_arg2470z00_1478 =
												BGl_refzd2plainzd2zz__evobjectz00(BgL_cidz00_88,
												BgL_slotz00_89, BgL_offsetz00_90);
										}
								}
								BgL_arg2465z00_1474 =
									BGl_localiza7eza7zz__evobjectz00(BgL_locz00_87,
									BgL_arg2470z00_1478);
							}
							{	/* Eval/evobject.scm 345 */
								obj_t BgL_arg2471z00_1479;

								{	/* Eval/evobject.scm 345 */
									bool_t BgL_testz00_8762;

									{	/* Eval/evobject.scm 345 */
										obj_t BgL_sz00_6081;

										BgL_sz00_6081 = BgL_slotz00_89;
										BgL_testz00_8762 =
											CBOOL(STRUCT_REF(BgL_sz00_6081, (int) (((long) 6))));
									}
									if (BgL_testz00_8762)
										{	/* Eval/evobject.scm 345 */
											{	/* Eval/evobject.scm 329 */
												obj_t BgL_bodyz00_1657;

												{	/* Eval/evobject.scm 329 */
													obj_t BgL_arg2700z00_1702;

													obj_t BgL_arg2701z00_1703;

													BgL_arg2700z00_1702 =
														BGl_symbol5826z00zz__evobjectz00;
													{	/* Eval/evobject.scm 329 */
														obj_t BgL_arg2702z00_1704;

														obj_t BgL_arg2703z00_1705;

														obj_t BgL_arg2704z00_1706;

														{	/* Eval/evobject.scm 329 */
															obj_t BgL_arg2709z00_1711;

															obj_t BgL_arg2710z00_1712;

															BgL_arg2709z00_1711 =
																BGl_symbol5828z00zz__evobjectz00;
															{	/* Eval/evobject.scm 329 */
																obj_t BgL_arg2711z00_1713;

																{	/* Eval/evobject.scm 329 */
																	obj_t BgL_arg2716z00_1717;

																	obj_t BgL_arg2717z00_1718;

																	BgL_arg2716z00_1717 =
																		BGl_symbol5830z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 329 */
																		obj_t BgL_list2718z00_1719;

																		BgL_list2718z00_1719 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2717z00_1718 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5832z00zz__evobjectz00,
																			BgL_list2718z00_1719);
																	}
																	BgL_arg2711z00_1713 =
																		MAKE_PAIR(BgL_arg2716z00_1717,
																		BgL_arg2717z00_1718);
																}
																{	/* Eval/evobject.scm 329 */
																	obj_t BgL_list2713z00_1715;

																	{	/* Eval/evobject.scm 329 */
																		obj_t BgL_arg2714z00_1716;

																		BgL_arg2714z00_1716 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2713z00_1715 =
																			MAKE_PAIR(BgL_offsetz00_90,
																			BgL_arg2714z00_1716);
																	}
																	BgL_arg2710z00_1712 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2711z00_1713, BgL_list2713z00_1715);
																}
															}
															BgL_arg2702z00_1704 =
																MAKE_PAIR(BgL_arg2709z00_1711,
																BgL_arg2710z00_1712);
														}
														BgL_arg2703z00_1705 =
															BGl_symbol5834z00zz__evobjectz00;
														BgL_arg2704z00_1706 =
															BGl_symbol5836z00zz__evobjectz00;
														{	/* Eval/evobject.scm 329 */
															obj_t BgL_list2706z00_1708;

															{	/* Eval/evobject.scm 329 */
																obj_t BgL_arg2707z00_1709;

																{	/* Eval/evobject.scm 329 */
																	obj_t BgL_arg2708z00_1710;

																	BgL_arg2708z00_1710 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2707z00_1709 =
																		MAKE_PAIR(BgL_arg2704z00_1706,
																		BgL_arg2708z00_1710);
																}
																BgL_list2706z00_1708 =
																	MAKE_PAIR(BgL_arg2703z00_1705,
																	BgL_arg2707z00_1709);
															}
															BgL_arg2701z00_1703 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2702z00_1704, BgL_list2706z00_1708);
														}
													}
													BgL_bodyz00_1657 =
														MAKE_PAIR(BgL_arg2700z00_1702, BgL_arg2701z00_1703);
												}
												{	/* Eval/evobject.scm 330 */
													obj_t BgL_arg2655z00_1658;

													obj_t BgL_arg2656z00_1659;

													BgL_arg2655z00_1658 =
														BGl_symbol5787z00zz__evobjectz00;
													{	/* Eval/evobject.scm 330 */
														obj_t BgL_arg2657z00_1660;

														obj_t BgL_arg2658z00_1661;

														{	/* Eval/evobject.scm 330 */
															obj_t BgL_arg2663z00_1665;

															obj_t BgL_arg2664z00_1666;

															{	/* Eval/evobject.scm 330 */
																obj_t BgL_arg2665z00_1667;

																BgL_arg2665z00_1667 =
																	STRUCT_REF(BgL_slotz00_89,
																	(int) (((long) 0)));
																{	/* Eval/evobject.scm 330 */
																	obj_t BgL_list2117z00_6197;

																	{	/* Eval/evobject.scm 330 */
																		obj_t BgL_arg2118z00_6198;

																		{	/* Eval/evobject.scm 330 */
																			obj_t BgL_arg2119z00_6199;

																			obj_t BgL_arg2121z00_6200;

																			BgL_arg2119z00_6199 =
																				BGl_symbol5822z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 330 */
																				obj_t BgL_arg2123z00_6201;

																				BgL_arg2123z00_6201 =
																					MAKE_PAIR
																					(BGl_symbol5824z00zz__evobjectz00,
																					BNIL);
																				BgL_arg2121z00_6200 =
																					MAKE_PAIR(BgL_arg2665z00_1667,
																					BgL_arg2123z00_6201);
																			}
																			BgL_arg2118z00_6198 =
																				MAKE_PAIR(BgL_arg2119z00_6199,
																				BgL_arg2121z00_6200);
																		}
																		BgL_list2117z00_6197 =
																			MAKE_PAIR(BgL_cidz00_88,
																			BgL_arg2118z00_6198);
																	}
																	BgL_arg2663z00_1665 =
																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																		(BgL_list2117z00_6197);
															}}
															{	/* Eval/evobject.scm 330 */
																obj_t BgL_list2666z00_1668;

																{	/* Eval/evobject.scm 330 */
																	obj_t BgL_arg2667z00_1669;

																	obj_t BgL_arg2668z00_1670;

																	BgL_arg2667z00_1669 =
																		BGl_symbol5834z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 330 */
																		obj_t BgL_arg2669z00_1671;

																		obj_t BgL_arg2670z00_1672;

																		BgL_arg2669z00_1671 =
																			BGl_symbol5836z00zz__evobjectz00;
																		BgL_arg2670z00_1672 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2668z00_1670 =
																			MAKE_PAIR(BgL_arg2669z00_1671,
																			BgL_arg2670z00_1672);
																	}
																	BgL_list2666z00_1668 =
																		MAKE_PAIR(BgL_arg2667z00_1669,
																		BgL_arg2668z00_1670);
																}
																BgL_arg2664z00_1666 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol5832z00zz__evobjectz00,
																	BgL_list2666z00_1668);
															}
															BgL_arg2657z00_1660 =
																MAKE_PAIR(BgL_arg2663z00_1665,
																BgL_arg2664z00_1666);
														}
														{	/* Eval/evobject.scm 331 */
															obj_t BgL_arg2671z00_1673;

															obj_t BgL_arg2672z00_1674;

															BgL_arg2671z00_1673 =
																BGl_symbol5838z00zz__evobjectz00;
															{	/* Eval/evobject.scm 331 */
																obj_t BgL_arg2673z00_1675;

																obj_t BgL_arg2674z00_1676;

																{	/* Eval/evobject.scm 331 */
																	obj_t BgL_arg2679z00_1681;

																	obj_t BgL_arg2680z00_1682;

																	{	/* Eval/evobject.scm 331 */
																		obj_t BgL_arg2089z00_6203;

																		{	/* Eval/evobject.scm 331 */
																			obj_t BgL_arg2090z00_6204;

																			obj_t BgL_arg2091z00_6205;

																			{	/* Eval/evobject.scm 331 */
																				obj_t BgL_res5641z00_6210;

																				{	/* Eval/evobject.scm 331 */
																					obj_t BgL_symbolz00_6208;

																					BgL_symbolz00_6208 = BgL_cidz00_88;
																					{	/* Eval/evobject.scm 331 */
																						obj_t BgL_arg5527z00_6209;

																						BgL_arg5527z00_6209 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_6208);
																						BgL_res5641z00_6210 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg5527z00_6209);
																				}}
																				BgL_arg2090z00_6204 =
																					BgL_res5641z00_6210;
																			}
																			{	/* Eval/evobject.scm 331 */
																				obj_t BgL_res5642z00_6213;

																				{	/* Eval/evobject.scm 331 */
																					obj_t BgL_symbolz00_6211;

																					BgL_symbolz00_6211 =
																						BGl_symbol5816z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 331 */
																						obj_t BgL_arg5527z00_6212;

																						BgL_arg5527z00_6212 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_6211);
																						BgL_res5642z00_6213 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg5527z00_6212);
																				}}
																				BgL_arg2091z00_6205 =
																					BgL_res5642z00_6213;
																			}
																			{	/* Eval/evobject.scm 331 */
																				obj_t BgL_list2092z00_6206;

																				{	/* Eval/evobject.scm 331 */
																					obj_t BgL_arg2093z00_6207;

																					BgL_arg2093z00_6207 =
																						MAKE_PAIR(BgL_arg2091z00_6205,
																						BNIL);
																					BgL_list2092z00_6206 =
																						MAKE_PAIR(BgL_arg2090z00_6204,
																						BgL_arg2093z00_6207);
																				}
																				BgL_arg2089z00_6203 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2092z00_6206);
																		}}
																		BgL_arg2679z00_1681 =
																			string_to_symbol(BSTRING_TO_STRING
																			(BgL_arg2089z00_6203));
																	}
																	{	/* Eval/evobject.scm 331 */
																		obj_t BgL_list2681z00_1683;

																		BgL_list2681z00_1683 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2680z00_1682 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5832z00zz__evobjectz00,
																			BgL_list2681z00_1683);
																	}
																	BgL_arg2673z00_1675 =
																		MAKE_PAIR(BgL_arg2679z00_1681,
																		BgL_arg2680z00_1682);
																}
																{	/* Eval/evobject.scm 333 */
																	obj_t BgL_arg2682z00_1684;

																	obj_t BgL_arg2683z00_1685;

																	BgL_arg2682z00_1684 =
																		BGl_symbol5840z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 334 */
																		obj_t BgL_arg2684z00_1686;

																		obj_t BgL_arg2685z00_1687;

																		obj_t BgL_arg2686z00_1688;

																		{	/* Eval/evobject.scm 334 */
																			obj_t BgL_arg2691z00_1693;

																			obj_t BgL_arg2692z00_1694;

																			BgL_arg2691z00_1693 =
																				BGl_symbol5842z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 334 */
																				obj_t BgL_arg2693z00_1695;

																				{	/* Eval/evobject.scm 334 */
																					obj_t BgL_arg2696z00_1698;

																					BgL_arg2696z00_1698 =
																						STRUCT_REF(BgL_slotz00_89,
																						(int) (((long) 0)));
																					{	/* Eval/evobject.scm 334 */
																						obj_t BgL_list2117z00_6220;

																						{	/* Eval/evobject.scm 334 */
																							obj_t BgL_arg2118z00_6221;

																							{	/* Eval/evobject.scm 334 */
																								obj_t BgL_arg2119z00_6222;

																								obj_t BgL_arg2121z00_6223;

																								BgL_arg2119z00_6222 =
																									BGl_symbol5822z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 334 */
																									obj_t BgL_arg2123z00_6224;

																									BgL_arg2123z00_6224 =
																										MAKE_PAIR
																										(BGl_symbol5824z00zz__evobjectz00,
																										BNIL);
																									BgL_arg2121z00_6223 =
																										MAKE_PAIR
																										(BgL_arg2696z00_1698,
																										BgL_arg2123z00_6224);
																								}
																								BgL_arg2118z00_6221 =
																									MAKE_PAIR(BgL_arg2119z00_6222,
																									BgL_arg2121z00_6223);
																							}
																							BgL_list2117z00_6220 =
																								MAKE_PAIR(BgL_cidz00_88,
																								BgL_arg2118z00_6221);
																						}
																						BgL_arg2693z00_1695 =
																							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																							(BgL_list2117z00_6220);
																				}}
																				{	/* Eval/evobject.scm 334 */
																					obj_t BgL_list2695z00_1697;

																					BgL_list2695z00_1697 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2692z00_1694 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2693z00_1695,
																						BgL_list2695z00_1697);
																			}}
																			BgL_arg2684z00_1686 =
																				MAKE_PAIR(BgL_arg2691z00_1693,
																				BgL_arg2692z00_1694);
																		}
																		{	/* Eval/evobject.scm 334 */
																			obj_t BgL_arg2697z00_1699;

																			obj_t BgL_arg2698z00_1700;

																			BgL_arg2697z00_1699 =
																				BGl_symbol5842z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 334 */
																				obj_t BgL_list2699z00_1701;

																				BgL_list2699z00_1701 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2698z00_1700 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_cidz00_88, BgL_list2699z00_1701);
																			}
																			BgL_arg2685z00_1687 =
																				MAKE_PAIR(BgL_arg2697z00_1699,
																				BgL_arg2698z00_1700);
																		}
																		BgL_arg2686z00_1688 =
																			BGl_symbol5832z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 333 */
																			obj_t BgL_list2688z00_1690;

																			{	/* Eval/evobject.scm 333 */
																				obj_t BgL_arg2689z00_1691;

																				{	/* Eval/evobject.scm 333 */
																					obj_t BgL_arg2690z00_1692;

																					BgL_arg2690z00_1692 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2689z00_1691 =
																						MAKE_PAIR(BgL_arg2686z00_1688,
																						BgL_arg2690z00_1692);
																				}
																				BgL_list2688z00_1690 =
																					MAKE_PAIR(BgL_arg2685z00_1687,
																					BgL_arg2689z00_1691);
																			}
																			BgL_arg2683z00_1685 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2684z00_1686,
																				BgL_list2688z00_1690);
																	}}
																	BgL_arg2674z00_1676 =
																		MAKE_PAIR(BgL_arg2682z00_1684,
																		BgL_arg2683z00_1685);
																}
																{	/* Eval/evobject.scm 331 */
																	obj_t BgL_list2676z00_1678;

																	{	/* Eval/evobject.scm 331 */
																		obj_t BgL_arg2677z00_1679;

																		{	/* Eval/evobject.scm 331 */
																			obj_t BgL_arg2678z00_1680;

																			BgL_arg2678z00_1680 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2677z00_1679 =
																				MAKE_PAIR(BgL_arg2674z00_1676,
																				BgL_arg2678z00_1680);
																		}
																		BgL_list2676z00_1678 =
																			MAKE_PAIR(BgL_bodyz00_1657,
																			BgL_arg2677z00_1679);
																	}
																	BgL_arg2672z00_1674 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2673z00_1675, BgL_list2676z00_1678);
															}}
															BgL_arg2658z00_1661 =
																MAKE_PAIR(BgL_arg2671z00_1673,
																BgL_arg2672z00_1674);
														}
														{	/* Eval/evobject.scm 330 */
															obj_t BgL_list2660z00_1663;

															{	/* Eval/evobject.scm 330 */
																obj_t BgL_arg2661z00_1664;

																BgL_arg2661z00_1664 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2660z00_1663 =
																	MAKE_PAIR(BgL_arg2658z00_1661,
																	BgL_arg2661z00_1664);
															}
															BgL_arg2656z00_1659 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2657z00_1660, BgL_list2660z00_1663);
													}}
													BgL_arg2471z00_1479 =
														MAKE_PAIR(BgL_arg2655z00_1658, BgL_arg2656z00_1659);
										}}}
									else
										{	/* Eval/evobject.scm 345 */
											{	/* Eval/evobject.scm 314 */
												obj_t BgL_bodyz00_1536;

												{	/* Eval/evobject.scm 314 */
													bool_t BgL_testz00_8829;

													{	/* Eval/evobject.scm 314 */
														obj_t BgL_sz00_6123;

														BgL_sz00_6123 = BgL_slotz00_89;
														BgL_testz00_8829 =
															CBOOL(STRUCT_REF(BgL_sz00_6123,
																(int) (((long) 5))));
													}
													if (BgL_testz00_8829)
														{	/* Eval/evobject.scm 315 */
															obj_t BgL_arg2578z00_1580;

															obj_t BgL_arg2579z00_1581;

															BgL_arg2578z00_1580 =
																STRUCT_REF(BgL_slotz00_89, (int) (((long) 5)));
															{	/* Eval/evobject.scm 315 */
																obj_t BgL_list2580z00_1582;

																{	/* Eval/evobject.scm 315 */
																	obj_t BgL_arg2581z00_1583;

																	obj_t BgL_arg2582z00_1584;

																	BgL_arg2581z00_1583 =
																		BGl_symbol5836z00zz__evobjectz00;
																	BgL_arg2582z00_1584 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2580z00_1582 =
																		MAKE_PAIR(BgL_arg2581z00_1583,
																		BgL_arg2582z00_1584);
																}
																BgL_arg2579z00_1581 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol5832z00zz__evobjectz00,
																	BgL_list2580z00_1582);
															}
															BgL_bodyz00_1536 =
																MAKE_PAIR(BgL_arg2578z00_1580,
																BgL_arg2579z00_1581);
														}
													else
														{	/* Eval/evobject.scm 316 */
															obj_t BgL_arg2583z00_1585;

															obj_t BgL_arg2584z00_1586;

															BgL_arg2583z00_1585 =
																BGl_symbol5844z00zz__evobjectz00;
															{	/* Eval/evobject.scm 316 */
																obj_t BgL_arg2585z00_1587;

																obj_t BgL_arg2586z00_1588;

																{	/* Eval/evobject.scm 316 */
																	obj_t BgL_arg2591z00_1593;

																	obj_t BgL_arg2592z00_1594;

																	BgL_arg2591z00_1593 =
																		BGl_symbol5830z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 316 */
																		obj_t BgL_list2593z00_1595;

																		BgL_list2593z00_1595 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2592z00_1594 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5832z00zz__evobjectz00,
																			BgL_list2593z00_1595);
																	}
																	BgL_arg2585z00_1587 =
																		MAKE_PAIR(BgL_arg2591z00_1593,
																		BgL_arg2592z00_1594);
																}
																BgL_arg2586z00_1588 =
																	BGl_symbol5836z00zz__evobjectz00;
																{	/* Eval/evobject.scm 316 */
																	obj_t BgL_list2588z00_1590;

																	{	/* Eval/evobject.scm 316 */
																		obj_t BgL_arg2589z00_1591;

																		{	/* Eval/evobject.scm 316 */
																			obj_t BgL_arg2590z00_1592;

																			BgL_arg2590z00_1592 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2589z00_1591 =
																				MAKE_PAIR(BgL_arg2586z00_1588,
																				BgL_arg2590z00_1592);
																		}
																		BgL_list2588z00_1590 =
																			MAKE_PAIR(BgL_offsetz00_90,
																			BgL_arg2589z00_1591);
																	}
																	BgL_arg2584z00_1586 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2585z00_1587, BgL_list2588z00_1590);
																}
															}
															BgL_bodyz00_1536 =
																MAKE_PAIR(BgL_arg2583z00_1585,
																BgL_arg2584z00_1586);
														}
												}
												{	/* Eval/evobject.scm 317 */
													obj_t BgL_arg2532z00_1537;

													obj_t BgL_arg2533z00_1538;

													BgL_arg2532z00_1537 =
														BGl_symbol5787z00zz__evobjectz00;
													{	/* Eval/evobject.scm 317 */
														obj_t BgL_arg2534z00_1539;

														obj_t BgL_arg2535z00_1540;

														{	/* Eval/evobject.scm 317 */
															obj_t BgL_arg2540z00_1544;

															obj_t BgL_arg2541z00_1545;

															{	/* Eval/evobject.scm 317 */
																obj_t BgL_arg2542z00_1546;

																BgL_arg2542z00_1546 =
																	STRUCT_REF(BgL_slotz00_89,
																	(int) (((long) 0)));
																{	/* Eval/evobject.scm 317 */
																	obj_t BgL_list2117z00_6133;

																	{	/* Eval/evobject.scm 317 */
																		obj_t BgL_arg2118z00_6134;

																		{	/* Eval/evobject.scm 317 */
																			obj_t BgL_arg2119z00_6135;

																			obj_t BgL_arg2121z00_6136;

																			BgL_arg2119z00_6135 =
																				BGl_symbol5822z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 317 */
																				obj_t BgL_arg2123z00_6137;

																				BgL_arg2123z00_6137 =
																					MAKE_PAIR
																					(BGl_symbol5824z00zz__evobjectz00,
																					BNIL);
																				BgL_arg2121z00_6136 =
																					MAKE_PAIR(BgL_arg2542z00_1546,
																					BgL_arg2123z00_6137);
																			}
																			BgL_arg2118z00_6134 =
																				MAKE_PAIR(BgL_arg2119z00_6135,
																				BgL_arg2121z00_6136);
																		}
																		BgL_list2117z00_6133 =
																			MAKE_PAIR(BgL_cidz00_88,
																			BgL_arg2118z00_6134);
																	}
																	BgL_arg2540z00_1544 =
																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																		(BgL_list2117z00_6133);
															}}
															{	/* Eval/evobject.scm 317 */
																obj_t BgL_list2543z00_1547;

																{	/* Eval/evobject.scm 317 */
																	obj_t BgL_arg2544z00_1548;

																	obj_t BgL_arg2545z00_1549;

																	BgL_arg2544z00_1548 =
																		BGl_symbol5836z00zz__evobjectz00;
																	BgL_arg2545z00_1549 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2543z00_1547 =
																		MAKE_PAIR(BgL_arg2544z00_1548,
																		BgL_arg2545z00_1549);
																}
																BgL_arg2541z00_1545 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol5832z00zz__evobjectz00,
																	BgL_list2543z00_1547);
															}
															BgL_arg2534z00_1539 =
																MAKE_PAIR(BgL_arg2540z00_1544,
																BgL_arg2541z00_1545);
														}
														{	/* Eval/evobject.scm 318 */
															obj_t BgL_arg2546z00_1550;

															obj_t BgL_arg2547z00_1551;

															BgL_arg2546z00_1550 =
																BGl_symbol5838z00zz__evobjectz00;
															{	/* Eval/evobject.scm 318 */
																obj_t BgL_arg2548z00_1552;

																obj_t BgL_arg2549z00_1553;

																{	/* Eval/evobject.scm 318 */
																	obj_t BgL_arg2554z00_1558;

																	obj_t BgL_arg2555z00_1559;

																	{	/* Eval/evobject.scm 318 */
																		obj_t BgL_arg2089z00_6139;

																		{	/* Eval/evobject.scm 318 */
																			obj_t BgL_arg2090z00_6140;

																			obj_t BgL_arg2091z00_6141;

																			{	/* Eval/evobject.scm 318 */
																				obj_t BgL_res5637z00_6146;

																				{	/* Eval/evobject.scm 318 */
																					obj_t BgL_symbolz00_6144;

																					BgL_symbolz00_6144 = BgL_cidz00_88;
																					{	/* Eval/evobject.scm 318 */
																						obj_t BgL_arg5527z00_6145;

																						BgL_arg5527z00_6145 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_6144);
																						BgL_res5637z00_6146 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg5527z00_6145);
																				}}
																				BgL_arg2090z00_6140 =
																					BgL_res5637z00_6146;
																			}
																			{	/* Eval/evobject.scm 318 */
																				obj_t BgL_res5638z00_6149;

																				{	/* Eval/evobject.scm 318 */
																					obj_t BgL_symbolz00_6147;

																					BgL_symbolz00_6147 =
																						BGl_symbol5816z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 318 */
																						obj_t BgL_arg5527z00_6148;

																						BgL_arg5527z00_6148 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_6147);
																						BgL_res5638z00_6149 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg5527z00_6148);
																				}}
																				BgL_arg2091z00_6141 =
																					BgL_res5638z00_6149;
																			}
																			{	/* Eval/evobject.scm 318 */
																				obj_t BgL_list2092z00_6142;

																				{	/* Eval/evobject.scm 318 */
																					obj_t BgL_arg2093z00_6143;

																					BgL_arg2093z00_6143 =
																						MAKE_PAIR(BgL_arg2091z00_6141,
																						BNIL);
																					BgL_list2092z00_6142 =
																						MAKE_PAIR(BgL_arg2090z00_6140,
																						BgL_arg2093z00_6143);
																				}
																				BgL_arg2089z00_6139 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2092z00_6142);
																		}}
																		BgL_arg2554z00_1558 =
																			string_to_symbol(BSTRING_TO_STRING
																			(BgL_arg2089z00_6139));
																	}
																	{	/* Eval/evobject.scm 318 */
																		obj_t BgL_list2556z00_1560;

																		BgL_list2556z00_1560 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2555z00_1559 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5832z00zz__evobjectz00,
																			BgL_list2556z00_1560);
																	}
																	BgL_arg2548z00_1552 =
																		MAKE_PAIR(BgL_arg2554z00_1558,
																		BgL_arg2555z00_1559);
																}
																{	/* Eval/evobject.scm 320 */
																	obj_t BgL_arg2557z00_1561;

																	obj_t BgL_arg2558z00_1562;

																	BgL_arg2557z00_1561 =
																		BGl_symbol5840z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 321 */
																		obj_t BgL_arg2559z00_1563;

																		obj_t BgL_arg2560z00_1564;

																		obj_t BgL_arg2561z00_1565;

																		{	/* Eval/evobject.scm 321 */
																			obj_t BgL_arg2566z00_1570;

																			obj_t BgL_arg2568z00_1571;

																			BgL_arg2566z00_1570 =
																				BGl_symbol5842z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 321 */
																				obj_t BgL_arg2569z00_1572;

																				{	/* Eval/evobject.scm 321 */
																					obj_t BgL_arg2573z00_1575;

																					BgL_arg2573z00_1575 =
																						STRUCT_REF(BgL_slotz00_89,
																						(int) (((long) 0)));
																					{	/* Eval/evobject.scm 321 */
																						obj_t BgL_list2117z00_6156;

																						{	/* Eval/evobject.scm 321 */
																							obj_t BgL_arg2118z00_6157;

																							{	/* Eval/evobject.scm 321 */
																								obj_t BgL_arg2119z00_6158;

																								obj_t BgL_arg2121z00_6159;

																								BgL_arg2119z00_6158 =
																									BGl_symbol5822z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 321 */
																									obj_t BgL_arg2123z00_6160;

																									BgL_arg2123z00_6160 =
																										MAKE_PAIR
																										(BGl_symbol5824z00zz__evobjectz00,
																										BNIL);
																									BgL_arg2121z00_6159 =
																										MAKE_PAIR
																										(BgL_arg2573z00_1575,
																										BgL_arg2123z00_6160);
																								}
																								BgL_arg2118z00_6157 =
																									MAKE_PAIR(BgL_arg2119z00_6158,
																									BgL_arg2121z00_6159);
																							}
																							BgL_list2117z00_6156 =
																								MAKE_PAIR(BgL_cidz00_88,
																								BgL_arg2118z00_6157);
																						}
																						BgL_arg2569z00_1572 =
																							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																							(BgL_list2117z00_6156);
																				}}
																				{	/* Eval/evobject.scm 321 */
																					obj_t BgL_list2572z00_1574;

																					BgL_list2572z00_1574 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2568z00_1571 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2569z00_1572,
																						BgL_list2572z00_1574);
																			}}
																			BgL_arg2559z00_1563 =
																				MAKE_PAIR(BgL_arg2566z00_1570,
																				BgL_arg2568z00_1571);
																		}
																		{	/* Eval/evobject.scm 321 */
																			obj_t BgL_arg2574z00_1576;

																			obj_t BgL_arg2575z00_1577;

																			BgL_arg2574z00_1576 =
																				BGl_symbol5842z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 321 */
																				obj_t BgL_list2576z00_1578;

																				BgL_list2576z00_1578 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2575z00_1577 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_cidz00_88, BgL_list2576z00_1578);
																			}
																			BgL_arg2560z00_1564 =
																				MAKE_PAIR(BgL_arg2574z00_1576,
																				BgL_arg2575z00_1577);
																		}
																		BgL_arg2561z00_1565 =
																			BGl_symbol5832z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 320 */
																			obj_t BgL_list2563z00_1567;

																			{	/* Eval/evobject.scm 320 */
																				obj_t BgL_arg2564z00_1568;

																				{	/* Eval/evobject.scm 320 */
																					obj_t BgL_arg2565z00_1569;

																					BgL_arg2565z00_1569 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2564z00_1568 =
																						MAKE_PAIR(BgL_arg2561z00_1565,
																						BgL_arg2565z00_1569);
																				}
																				BgL_list2563z00_1567 =
																					MAKE_PAIR(BgL_arg2560z00_1564,
																					BgL_arg2564z00_1568);
																			}
																			BgL_arg2558z00_1562 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2559z00_1563,
																				BgL_list2563z00_1567);
																	}}
																	BgL_arg2549z00_1553 =
																		MAKE_PAIR(BgL_arg2557z00_1561,
																		BgL_arg2558z00_1562);
																}
																{	/* Eval/evobject.scm 318 */
																	obj_t BgL_list2551z00_1555;

																	{	/* Eval/evobject.scm 318 */
																		obj_t BgL_arg2552z00_1556;

																		{	/* Eval/evobject.scm 318 */
																			obj_t BgL_arg2553z00_1557;

																			BgL_arg2553z00_1557 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2552z00_1556 =
																				MAKE_PAIR(BgL_arg2549z00_1553,
																				BgL_arg2553z00_1557);
																		}
																		BgL_list2551z00_1555 =
																			MAKE_PAIR(BgL_bodyz00_1536,
																			BgL_arg2552z00_1556);
																	}
																	BgL_arg2547z00_1551 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2548z00_1552, BgL_list2551z00_1555);
															}}
															BgL_arg2535z00_1540 =
																MAKE_PAIR(BgL_arg2546z00_1550,
																BgL_arg2547z00_1551);
														}
														{	/* Eval/evobject.scm 317 */
															obj_t BgL_list2537z00_1542;

															{	/* Eval/evobject.scm 317 */
																obj_t BgL_arg2539z00_1543;

																BgL_arg2539z00_1543 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2537z00_1542 =
																	MAKE_PAIR(BgL_arg2535z00_1540,
																	BgL_arg2539z00_1543);
															}
															BgL_arg2533z00_1538 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2534z00_1539, BgL_list2537z00_1542);
													}}
													BgL_arg2471z00_1479 =
														MAKE_PAIR(BgL_arg2532z00_1537, BgL_arg2533z00_1538);
								}}}}
								BgL_arg2467z00_1475 =
									BGl_localiza7eza7zz__evobjectz00(BgL_locz00_87,
									BgL_arg2471z00_1479);
							}
							{	/* Eval/evobject.scm 345 */
								obj_t BgL_list2468z00_1476;

								{	/* Eval/evobject.scm 345 */
									obj_t BgL_arg2469z00_1477;

									BgL_arg2469z00_1477 = MAKE_PAIR(BgL_arg2467z00_1475, BNIL);
									BgL_list2468z00_1476 =
										MAKE_PAIR(BgL_arg2465z00_1474, BgL_arg2469z00_1477);
								}
								return BgL_list2468z00_1476;
							}
						}
				}
			}
		}
	}



/* ref-plain */
	obj_t BGl_refzd2plainzd2zz__evobjectz00(obj_t BgL_cidz00_8022,
		obj_t BgL_slotz00_8021, obj_t BgL_offsetz00_8020)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 312 */
			{	/* Eval/evobject.scm 305 */
				obj_t BgL_bodyz00_1481;

				{	/* Eval/evobject.scm 305 */
					bool_t BgL_testz00_8900;

					{	/* Eval/evobject.scm 305 */
						obj_t BgL_sz00_6086;

						BgL_sz00_6086 = BgL_slotz00_8021;
						BgL_testz00_8900 =
							CBOOL(STRUCT_REF(BgL_sz00_6086, (int) (((long) 4))));
					}
					if (BgL_testz00_8900)
						{	/* Eval/evobject.scm 306 */
							obj_t BgL_arg2519z00_1523;

							obj_t BgL_arg2520z00_1524;

							BgL_arg2519z00_1523 =
								STRUCT_REF(BgL_slotz00_8021, (int) (((long) 4)));
							{	/* Eval/evobject.scm 306 */
								obj_t BgL_list2521z00_1525;

								BgL_list2521z00_1525 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2520z00_1524 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BGl_symbol5832z00zz__evobjectz00, BgL_list2521z00_1525);
							}
							BgL_bodyz00_1481 =
								MAKE_PAIR(BgL_arg2519z00_1523, BgL_arg2520z00_1524);
						}
					else
						{	/* Eval/evobject.scm 307 */
							obj_t BgL_arg2522z00_1526;

							obj_t BgL_arg2523z00_1527;

							BgL_arg2522z00_1526 = BGl_symbol5828z00zz__evobjectz00;
							{	/* Eval/evobject.scm 307 */
								obj_t BgL_arg2524z00_1528;

								{	/* Eval/evobject.scm 307 */
									obj_t BgL_arg2528z00_1532;

									obj_t BgL_arg2529z00_1533;

									BgL_arg2528z00_1532 = BGl_symbol5830z00zz__evobjectz00;
									{	/* Eval/evobject.scm 307 */
										obj_t BgL_list2530z00_1534;

										BgL_list2530z00_1534 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2529z00_1533 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BGl_symbol5832z00zz__evobjectz00, BgL_list2530z00_1534);
									}
									BgL_arg2524z00_1528 =
										MAKE_PAIR(BgL_arg2528z00_1532, BgL_arg2529z00_1533);
								}
								{	/* Eval/evobject.scm 307 */
									obj_t BgL_list2526z00_1530;

									{	/* Eval/evobject.scm 307 */
										obj_t BgL_arg2527z00_1531;

										BgL_arg2527z00_1531 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2526z00_1530 =
											MAKE_PAIR(BgL_offsetz00_8020, BgL_arg2527z00_1531);
									}
									BgL_arg2523z00_1527 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2524z00_1528, BgL_list2526z00_1530);
								}
							}
							BgL_bodyz00_1481 =
								MAKE_PAIR(BgL_arg2522z00_1526, BgL_arg2523z00_1527);
						}
				}
				{	/* Eval/evobject.scm 308 */
					obj_t BgL_arg2476z00_1482;

					obj_t BgL_arg2477z00_1483;

					BgL_arg2476z00_1482 = BGl_symbol5787z00zz__evobjectz00;
					{	/* Eval/evobject.scm 308 */
						obj_t BgL_arg2478z00_1484;

						obj_t BgL_arg2479z00_1485;

						{	/* Eval/evobject.scm 308 */
							obj_t BgL_arg2483z00_1489;

							obj_t BgL_arg2484z00_1490;

							{	/* Eval/evobject.scm 308 */
								obj_t BgL_arg2485z00_1491;

								BgL_arg2485z00_1491 =
									STRUCT_REF(BgL_slotz00_8021, (int) (((long) 0)));
								{	/* Eval/evobject.scm 308 */
									obj_t BgL_list2113z00_6096;

									{	/* Eval/evobject.scm 308 */
										obj_t BgL_arg2114z00_6097;

										{	/* Eval/evobject.scm 308 */
											obj_t BgL_arg2115z00_6098;

											obj_t BgL_arg2116z00_6099;

											BgL_arg2115z00_6098 = BGl_symbol5822z00zz__evobjectz00;
											BgL_arg2116z00_6099 =
												MAKE_PAIR(BgL_arg2485z00_1491, BNIL);
											BgL_arg2114z00_6097 =
												MAKE_PAIR(BgL_arg2115z00_6098, BgL_arg2116z00_6099);
										}
										BgL_list2113z00_6096 =
											MAKE_PAIR(BgL_cidz00_8022, BgL_arg2114z00_6097);
									}
									BgL_arg2483z00_1489 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list2113z00_6096);
							}}
							{	/* Eval/evobject.scm 308 */
								obj_t BgL_list2486z00_1492;

								BgL_list2486z00_1492 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2484z00_1490 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BGl_symbol5832z00zz__evobjectz00, BgL_list2486z00_1492);
							}
							BgL_arg2478z00_1484 =
								MAKE_PAIR(BgL_arg2483z00_1489, BgL_arg2484z00_1490);
						}
						{	/* Eval/evobject.scm 309 */
							obj_t BgL_arg2487z00_1493;

							obj_t BgL_arg2488z00_1494;

							BgL_arg2487z00_1493 = BGl_symbol5838z00zz__evobjectz00;
							{	/* Eval/evobject.scm 309 */
								obj_t BgL_arg2489z00_1495;

								obj_t BgL_arg2491z00_1496;

								{	/* Eval/evobject.scm 309 */
									obj_t BgL_arg2497z00_1501;

									obj_t BgL_arg2498z00_1502;

									{	/* Eval/evobject.scm 309 */
										obj_t BgL_arg2089z00_6101;

										{	/* Eval/evobject.scm 309 */
											obj_t BgL_arg2090z00_6102;

											obj_t BgL_arg2091z00_6103;

											{	/* Eval/evobject.scm 309 */
												obj_t BgL_res5635z00_6108;

												{	/* Eval/evobject.scm 309 */
													obj_t BgL_symbolz00_6106;

													BgL_symbolz00_6106 = BgL_cidz00_8022;
													{	/* Eval/evobject.scm 309 */
														obj_t BgL_arg5527z00_6107;

														BgL_arg5527z00_6107 =
															SYMBOL_TO_STRING(BgL_symbolz00_6106);
														BgL_res5635z00_6108 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg5527z00_6107);
												}}
												BgL_arg2090z00_6102 = BgL_res5635z00_6108;
											}
											{	/* Eval/evobject.scm 309 */
												obj_t BgL_res5636z00_6111;

												{	/* Eval/evobject.scm 309 */
													obj_t BgL_symbolz00_6109;

													BgL_symbolz00_6109 = BGl_symbol5816z00zz__evobjectz00;
													{	/* Eval/evobject.scm 309 */
														obj_t BgL_arg5527z00_6110;

														BgL_arg5527z00_6110 =
															SYMBOL_TO_STRING(BgL_symbolz00_6109);
														BgL_res5636z00_6111 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg5527z00_6110);
												}}
												BgL_arg2091z00_6103 = BgL_res5636z00_6111;
											}
											{	/* Eval/evobject.scm 309 */
												obj_t BgL_list2092z00_6104;

												{	/* Eval/evobject.scm 309 */
													obj_t BgL_arg2093z00_6105;

													BgL_arg2093z00_6105 =
														MAKE_PAIR(BgL_arg2091z00_6103, BNIL);
													BgL_list2092z00_6104 =
														MAKE_PAIR(BgL_arg2090z00_6102, BgL_arg2093z00_6105);
												}
												BgL_arg2089z00_6101 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list2092z00_6104);
										}}
										BgL_arg2497z00_1501 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg2089z00_6101));
									}
									{	/* Eval/evobject.scm 309 */
										obj_t BgL_list2499z00_1503;

										BgL_list2499z00_1503 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2498z00_1502 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BGl_symbol5832z00zz__evobjectz00, BgL_list2499z00_1503);
									}
									BgL_arg2489z00_1495 =
										MAKE_PAIR(BgL_arg2497z00_1501, BgL_arg2498z00_1502);
								}
								{	/* Eval/evobject.scm 311 */
									obj_t BgL_arg2500z00_1504;

									obj_t BgL_arg2501z00_1505;

									BgL_arg2500z00_1504 = BGl_symbol5840z00zz__evobjectz00;
									{	/* Eval/evobject.scm 312 */
										obj_t BgL_arg2502z00_1506;

										obj_t BgL_arg2503z00_1507;

										obj_t BgL_arg2504z00_1508;

										{	/* Eval/evobject.scm 312 */
											obj_t BgL_arg2509z00_1513;

											obj_t BgL_arg2510z00_1514;

											BgL_arg2509z00_1513 = BGl_symbol5842z00zz__evobjectz00;
											{	/* Eval/evobject.scm 312 */
												obj_t BgL_arg2511z00_1515;

												{	/* Eval/evobject.scm 312 */
													obj_t BgL_arg2514z00_1518;

													BgL_arg2514z00_1518 =
														STRUCT_REF(BgL_slotz00_8021, (int) (((long) 0)));
													{	/* Eval/evobject.scm 312 */
														obj_t BgL_list2113z00_6118;

														{	/* Eval/evobject.scm 312 */
															obj_t BgL_arg2114z00_6119;

															{	/* Eval/evobject.scm 312 */
																obj_t BgL_arg2115z00_6120;

																obj_t BgL_arg2116z00_6121;

																BgL_arg2115z00_6120 =
																	BGl_symbol5822z00zz__evobjectz00;
																BgL_arg2116z00_6121 =
																	MAKE_PAIR(BgL_arg2514z00_1518, BNIL);
																BgL_arg2114z00_6119 =
																	MAKE_PAIR(BgL_arg2115z00_6120,
																	BgL_arg2116z00_6121);
															}
															BgL_list2113z00_6118 =
																MAKE_PAIR(BgL_cidz00_8022, BgL_arg2114z00_6119);
														}
														BgL_arg2511z00_1515 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list2113z00_6118);
												}}
												{	/* Eval/evobject.scm 312 */
													obj_t BgL_list2513z00_1517;

													BgL_list2513z00_1517 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2510z00_1514 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2511z00_1515, BgL_list2513z00_1517);
											}}
											BgL_arg2502z00_1506 =
												MAKE_PAIR(BgL_arg2509z00_1513, BgL_arg2510z00_1514);
										}
										{	/* Eval/evobject.scm 312 */
											obj_t BgL_arg2515z00_1519;

											obj_t BgL_arg2516z00_1520;

											BgL_arg2515z00_1519 = BGl_symbol5842z00zz__evobjectz00;
											{	/* Eval/evobject.scm 312 */
												obj_t BgL_list2517z00_1521;

												BgL_list2517z00_1521 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2516z00_1520 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_cidz00_8022, BgL_list2517z00_1521);
											}
											BgL_arg2503z00_1507 =
												MAKE_PAIR(BgL_arg2515z00_1519, BgL_arg2516z00_1520);
										}
										BgL_arg2504z00_1508 = BGl_symbol5832z00zz__evobjectz00;
										{	/* Eval/evobject.scm 311 */
											obj_t BgL_list2506z00_1510;

											{	/* Eval/evobject.scm 311 */
												obj_t BgL_arg2507z00_1511;

												{	/* Eval/evobject.scm 311 */
													obj_t BgL_arg2508z00_1512;

													BgL_arg2508z00_1512 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2507z00_1511 =
														MAKE_PAIR(BgL_arg2504z00_1508, BgL_arg2508z00_1512);
												}
												BgL_list2506z00_1510 =
													MAKE_PAIR(BgL_arg2503z00_1507, BgL_arg2507z00_1511);
											}
											BgL_arg2501z00_1505 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2502z00_1506, BgL_list2506z00_1510);
									}}
									BgL_arg2491z00_1496 =
										MAKE_PAIR(BgL_arg2500z00_1504, BgL_arg2501z00_1505);
								}
								{	/* Eval/evobject.scm 309 */
									obj_t BgL_list2493z00_1498;

									{	/* Eval/evobject.scm 309 */
										obj_t BgL_arg2494z00_1499;

										{	/* Eval/evobject.scm 309 */
											obj_t BgL_arg2495z00_1500;

											BgL_arg2495z00_1500 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2494z00_1499 =
												MAKE_PAIR(BgL_arg2491z00_1496, BgL_arg2495z00_1500);
										}
										BgL_list2493z00_1498 =
											MAKE_PAIR(BgL_bodyz00_1481, BgL_arg2494z00_1499);
									}
									BgL_arg2488z00_1494 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2489z00_1495, BgL_list2493z00_1498);
							}}
							BgL_arg2479z00_1485 =
								MAKE_PAIR(BgL_arg2487z00_1493, BgL_arg2488z00_1494);
						}
						{	/* Eval/evobject.scm 308 */
							obj_t BgL_list2481z00_1487;

							{	/* Eval/evobject.scm 308 */
								obj_t BgL_arg2482z00_1488;

								BgL_arg2482z00_1488 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2481z00_1487 =
									MAKE_PAIR(BgL_arg2479z00_1485, BgL_arg2482z00_1488);
							}
							BgL_arg2477z00_1483 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2478z00_1484,
								BgL_list2481z00_1487);
					}}
					return MAKE_PAIR(BgL_arg2476z00_1482, BgL_arg2477z00_1483);
				}
			}
		}
	}



/* ref-index */
	obj_t BGl_refzd2indexzd2zz__evobjectz00(obj_t BgL_offsetz00_8025,
		obj_t BgL_cidz00_8024, obj_t BgL_slotz00_8023)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 327 */
			{	/* Eval/evobject.scm 323 */
				obj_t BgL_arg2595z00_1597;

				obj_t BgL_arg2596z00_1598;

				BgL_arg2595z00_1597 = BGl_symbol5787z00zz__evobjectz00;
				{	/* Eval/evobject.scm 323 */
					obj_t BgL_arg2597z00_1599;

					obj_t BgL_arg2598z00_1600;

					{	/* Eval/evobject.scm 323 */
						obj_t BgL_arg2602z00_1604;

						obj_t BgL_arg2603z00_1605;

						{	/* Eval/evobject.scm 323 */
							obj_t BgL_arg2604z00_1606;

							BgL_arg2604z00_1606 =
								STRUCT_REF(BgL_slotz00_8023, (int) (((long) 0)));
							{	/* Eval/evobject.scm 323 */
								obj_t BgL_list2113z00_6166;

								{	/* Eval/evobject.scm 323 */
									obj_t BgL_arg2114z00_6167;

									{	/* Eval/evobject.scm 323 */
										obj_t BgL_arg2115z00_6168;

										obj_t BgL_arg2116z00_6169;

										BgL_arg2115z00_6168 = BGl_symbol5822z00zz__evobjectz00;
										BgL_arg2116z00_6169 = MAKE_PAIR(BgL_arg2604z00_1606, BNIL);
										BgL_arg2114z00_6167 =
											MAKE_PAIR(BgL_arg2115z00_6168, BgL_arg2116z00_6169);
									}
									BgL_list2113z00_6166 =
										MAKE_PAIR(BgL_cidz00_8024, BgL_arg2114z00_6167);
								}
								BgL_arg2602z00_1604 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list2113z00_6166);
						}}
						{	/* Eval/evobject.scm 323 */
							obj_t BgL_list2605z00_1607;

							{	/* Eval/evobject.scm 323 */
								obj_t BgL_arg2606z00_1608;

								obj_t BgL_arg2607z00_1609;

								BgL_arg2606z00_1608 = BGl_symbol5834z00zz__evobjectz00;
								BgL_arg2607z00_1609 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2605z00_1607 =
									MAKE_PAIR(BgL_arg2606z00_1608, BgL_arg2607z00_1609);
							}
							BgL_arg2603z00_1605 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_symbol5832z00zz__evobjectz00, BgL_list2605z00_1607);
						}
						BgL_arg2597z00_1599 =
							MAKE_PAIR(BgL_arg2602z00_1604, BgL_arg2603z00_1605);
					}
					{	/* Eval/evobject.scm 324 */
						obj_t BgL_arg2608z00_1610;

						obj_t BgL_arg2609z00_1611;

						BgL_arg2608z00_1610 = BGl_symbol5838z00zz__evobjectz00;
						{	/* Eval/evobject.scm 324 */
							obj_t BgL_arg2610z00_1612;

							obj_t BgL_arg2611z00_1613;

							obj_t BgL_arg2612z00_1614;

							{	/* Eval/evobject.scm 324 */
								obj_t BgL_arg2617z00_1619;

								obj_t BgL_arg2618z00_1620;

								{	/* Eval/evobject.scm 324 */
									obj_t BgL_arg2089z00_6171;

									{	/* Eval/evobject.scm 324 */
										obj_t BgL_arg2090z00_6172;

										obj_t BgL_arg2091z00_6173;

										{	/* Eval/evobject.scm 324 */
											obj_t BgL_res5639z00_6178;

											{	/* Eval/evobject.scm 324 */
												obj_t BgL_symbolz00_6176;

												BgL_symbolz00_6176 = BgL_cidz00_8024;
												{	/* Eval/evobject.scm 324 */
													obj_t BgL_arg5527z00_6177;

													BgL_arg5527z00_6177 =
														SYMBOL_TO_STRING(BgL_symbolz00_6176);
													BgL_res5639z00_6178 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg5527z00_6177);
											}}
											BgL_arg2090z00_6172 = BgL_res5639z00_6178;
										}
										{	/* Eval/evobject.scm 324 */
											obj_t BgL_res5640z00_6181;

											{	/* Eval/evobject.scm 324 */
												obj_t BgL_symbolz00_6179;

												BgL_symbolz00_6179 = BGl_symbol5816z00zz__evobjectz00;
												{	/* Eval/evobject.scm 324 */
													obj_t BgL_arg5527z00_6180;

													BgL_arg5527z00_6180 =
														SYMBOL_TO_STRING(BgL_symbolz00_6179);
													BgL_res5640z00_6181 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg5527z00_6180);
											}}
											BgL_arg2091z00_6173 = BgL_res5640z00_6181;
										}
										{	/* Eval/evobject.scm 324 */
											obj_t BgL_list2092z00_6174;

											{	/* Eval/evobject.scm 324 */
												obj_t BgL_arg2093z00_6175;

												BgL_arg2093z00_6175 =
													MAKE_PAIR(BgL_arg2091z00_6173, BNIL);
												BgL_list2092z00_6174 =
													MAKE_PAIR(BgL_arg2090z00_6172, BgL_arg2093z00_6175);
											}
											BgL_arg2089z00_6171 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list2092z00_6174);
									}}
									BgL_arg2617z00_1619 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg2089z00_6171));
								}
								{	/* Eval/evobject.scm 324 */
									obj_t BgL_list2619z00_1621;

									BgL_list2619z00_1621 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2618z00_1620 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol5832z00zz__evobjectz00, BgL_list2619z00_1621);
								}
								BgL_arg2610z00_1612 =
									MAKE_PAIR(BgL_arg2617z00_1619, BgL_arg2618z00_1620);
							}
							{	/* Eval/evobject.scm 325 */
								obj_t BgL_arg2620z00_1622;

								obj_t BgL_arg2621z00_1623;

								BgL_arg2620z00_1622 = BGl_symbol5846z00zz__evobjectz00;
								{	/* Eval/evobject.scm 325 */
									obj_t BgL_arg2622z00_1624;

									obj_t BgL_arg2623z00_1625;

									{	/* Eval/evobject.scm 325 */
										obj_t BgL_arg2627z00_1629;

										obj_t BgL_arg2628z00_1630;

										BgL_arg2627z00_1629 = BGl_symbol5828z00zz__evobjectz00;
										{	/* Eval/evobject.scm 325 */
											obj_t BgL_arg2629z00_1631;

											{	/* Eval/evobject.scm 325 */
												obj_t BgL_arg2633z00_1635;

												obj_t BgL_arg2634z00_1636;

												BgL_arg2633z00_1635 = BGl_symbol5830z00zz__evobjectz00;
												{	/* Eval/evobject.scm 325 */
													obj_t BgL_list2635z00_1637;

													BgL_list2635z00_1637 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2634z00_1636 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BGl_symbol5832z00zz__evobjectz00,
														BgL_list2635z00_1637);
												}
												BgL_arg2629z00_1631 =
													MAKE_PAIR(BgL_arg2633z00_1635, BgL_arg2634z00_1636);
											}
											{	/* Eval/evobject.scm 325 */
												obj_t BgL_list2631z00_1633;

												{	/* Eval/evobject.scm 325 */
													obj_t BgL_arg2632z00_1634;

													BgL_arg2632z00_1634 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2631z00_1633 =
														MAKE_PAIR(BgL_offsetz00_8025, BgL_arg2632z00_1634);
												}
												BgL_arg2628z00_1630 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2629z00_1631, BgL_list2631z00_1633);
										}}
										BgL_arg2622z00_1624 =
											MAKE_PAIR(BgL_arg2627z00_1629, BgL_arg2628z00_1630);
									}
									BgL_arg2623z00_1625 = BGl_symbol5834z00zz__evobjectz00;
									{	/* Eval/evobject.scm 325 */
										obj_t BgL_list2625z00_1627;

										{	/* Eval/evobject.scm 325 */
											obj_t BgL_arg2626z00_1628;

											BgL_arg2626z00_1628 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2625z00_1627 =
												MAKE_PAIR(BgL_arg2623z00_1625, BgL_arg2626z00_1628);
										}
										BgL_arg2621z00_1623 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2622z00_1624, BgL_list2625z00_1627);
								}}
								BgL_arg2611z00_1613 =
									MAKE_PAIR(BgL_arg2620z00_1622, BgL_arg2621z00_1623);
							}
							{	/* Eval/evobject.scm 326 */
								obj_t BgL_arg2636z00_1638;

								obj_t BgL_arg2637z00_1639;

								BgL_arg2636z00_1638 = BGl_symbol5840z00zz__evobjectz00;
								{	/* Eval/evobject.scm 327 */
									obj_t BgL_arg2638z00_1640;

									obj_t BgL_arg2639z00_1641;

									obj_t BgL_arg2640z00_1642;

									{	/* Eval/evobject.scm 327 */
										obj_t BgL_arg2645z00_1647;

										obj_t BgL_arg2646z00_1648;

										BgL_arg2645z00_1647 = BGl_symbol5842z00zz__evobjectz00;
										{	/* Eval/evobject.scm 327 */
											obj_t BgL_arg2647z00_1649;

											{	/* Eval/evobject.scm 327 */
												obj_t BgL_arg2650z00_1652;

												BgL_arg2650z00_1652 =
													STRUCT_REF(BgL_slotz00_8023, (int) (((long) 0)));
												{	/* Eval/evobject.scm 327 */
													obj_t BgL_list2113z00_6188;

													{	/* Eval/evobject.scm 327 */
														obj_t BgL_arg2114z00_6189;

														{	/* Eval/evobject.scm 327 */
															obj_t BgL_arg2115z00_6190;

															obj_t BgL_arg2116z00_6191;

															BgL_arg2115z00_6190 =
																BGl_symbol5822z00zz__evobjectz00;
															BgL_arg2116z00_6191 =
																MAKE_PAIR(BgL_arg2650z00_1652, BNIL);
															BgL_arg2114z00_6189 =
																MAKE_PAIR(BgL_arg2115z00_6190,
																BgL_arg2116z00_6191);
														}
														BgL_list2113z00_6188 =
															MAKE_PAIR(BgL_cidz00_8024, BgL_arg2114z00_6189);
													}
													BgL_arg2647z00_1649 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list2113z00_6188);
											}}
											{	/* Eval/evobject.scm 327 */
												obj_t BgL_list2649z00_1651;

												BgL_list2649z00_1651 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2646z00_1648 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2647z00_1649, BgL_list2649z00_1651);
										}}
										BgL_arg2638z00_1640 =
											MAKE_PAIR(BgL_arg2645z00_1647, BgL_arg2646z00_1648);
									}
									{	/* Eval/evobject.scm 327 */
										obj_t BgL_arg2651z00_1653;

										obj_t BgL_arg2652z00_1654;

										BgL_arg2651z00_1653 = BGl_symbol5842z00zz__evobjectz00;
										{	/* Eval/evobject.scm 327 */
											obj_t BgL_list2653z00_1655;

											BgL_list2653z00_1655 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2652z00_1654 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_cidz00_8024, BgL_list2653z00_1655);
										}
										BgL_arg2639z00_1641 =
											MAKE_PAIR(BgL_arg2651z00_1653, BgL_arg2652z00_1654);
									}
									BgL_arg2640z00_1642 = BGl_symbol5832z00zz__evobjectz00;
									{	/* Eval/evobject.scm 326 */
										obj_t BgL_list2642z00_1644;

										{	/* Eval/evobject.scm 326 */
											obj_t BgL_arg2643z00_1645;

											{	/* Eval/evobject.scm 326 */
												obj_t BgL_arg2644z00_1646;

												BgL_arg2644z00_1646 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2643z00_1645 =
													MAKE_PAIR(BgL_arg2640z00_1642, BgL_arg2644z00_1646);
											}
											BgL_list2642z00_1644 =
												MAKE_PAIR(BgL_arg2639z00_1641, BgL_arg2643z00_1645);
										}
										BgL_arg2637z00_1639 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2638z00_1640, BgL_list2642z00_1644);
								}}
								BgL_arg2612z00_1614 =
									MAKE_PAIR(BgL_arg2636z00_1638, BgL_arg2637z00_1639);
							}
							{	/* Eval/evobject.scm 324 */
								obj_t BgL_list2614z00_1616;

								{	/* Eval/evobject.scm 324 */
									obj_t BgL_arg2615z00_1617;

									{	/* Eval/evobject.scm 324 */
										obj_t BgL_arg2616z00_1618;

										BgL_arg2616z00_1618 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2615z00_1617 =
											MAKE_PAIR(BgL_arg2612z00_1614, BgL_arg2616z00_1618);
									}
									BgL_list2614z00_1616 =
										MAKE_PAIR(BgL_arg2611z00_1613, BgL_arg2615z00_1617);
								}
								BgL_arg2609z00_1611 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2610z00_1612, BgL_list2614z00_1616);
						}}
						BgL_arg2598z00_1600 =
							MAKE_PAIR(BgL_arg2608z00_1610, BgL_arg2609z00_1611);
					}
					{	/* Eval/evobject.scm 323 */
						obj_t BgL_list2600z00_1602;

						{	/* Eval/evobject.scm 323 */
							obj_t BgL_arg2601z00_1603;

							BgL_arg2601z00_1603 = MAKE_PAIR(BNIL, BNIL);
							BgL_list2600z00_1602 =
								MAKE_PAIR(BgL_arg2598z00_1600, BgL_arg2601z00_1603);
						}
						BgL_arg2596z00_1598 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2597z00_1599,
							BgL_list2600z00_1602);
				}}
				return MAKE_PAIR(BgL_arg2595z00_1597, BgL_arg2596z00_1598);
			}
		}
	}



/* eval-register-class */
	obj_t BGl_evalzd2registerzd2classz00zz__evobjectz00(obj_t BgL_locz00_91,
		obj_t BgL_idz00_92, obj_t BgL_superz00_93, bool_t BgL_abstractz00_94,
		obj_t BgL_slotsz00_95, obj_t BgL_sza7za7_96, obj_t BgL_hashz00_97,
		obj_t BgL_constructorz00_98)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 350 */
			{	/* Eval/evobject.scm 351 */
				obj_t BgL_claz00_1730;

				{	/* Eval/evobject.scm 351 */

					{	/* Eval/evobject.scm 351 */

						BgL_claz00_1730 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				{	/* Eval/evobject.scm 354 */
					obj_t BgL_arg2724z00_1731;

					{	/* Eval/evobject.scm 354 */
						obj_t BgL_arg2725z00_1732;

						obj_t BgL_arg2726z00_1733;

						BgL_arg2725z00_1732 = BGl_symbol5789z00zz__evobjectz00;
						{	/* Eval/evobject.scm 354 */
							obj_t BgL_arg2727z00_1734;

							obj_t BgL_arg2728z00_1735;

							{	/* Eval/evobject.scm 354 */
								obj_t BgL_arg2733z00_1740;

								{	/* Eval/evobject.scm 354 */
									obj_t BgL_arg2735z00_1742;

									{	/* Eval/evobject.scm 354 */
										obj_t BgL_arg2736z00_1743;

										{	/* Eval/evobject.scm 354 */
											obj_t BgL_arg2739z00_1746;

											obj_t BgL_arg2740z00_1747;

											BgL_arg2739z00_1746 = BGl_symbol5848z00zz__evobjectz00;
											{	/* Eval/evobject.scm 355 */
												obj_t BgL_arg2741z00_1748;

												obj_t BgL_arg2742z00_1749;

												obj_t BgL_arg2743z00_1750;

												obj_t BgL_arg2745z00_1751;

												obj_t BgL_arg2746z00_1752;

												obj_t BgL_arg2747z00_1753;

												obj_t BgL_arg2748z00_1754;

												obj_t BgL_arg2749z00_1755;

												{	/* Eval/evobject.scm 355 */
													obj_t BgL_arg2763z00_1768;

													obj_t BgL_arg2764z00_1769;

													BgL_arg2763z00_1768 =
														BGl_symbol5842z00zz__evobjectz00;
													{	/* Eval/evobject.scm 355 */
														obj_t BgL_list2765z00_1770;

														BgL_list2765z00_1770 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2764z00_1769 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_idz00_92, BgL_list2765z00_1770);
													}
													BgL_arg2741z00_1748 =
														MAKE_PAIR(BgL_arg2763z00_1768, BgL_arg2764z00_1769);
												}
												BgL_arg2742z00_1749 =
													BGl_classzd2namezd2zz__objectz00(BgL_superz00_93);
												if (BgL_abstractz00_94)
													{	/* Eval/evobject.scm 358 */
														BgL_arg2743z00_1750 = BFALSE;
													}
												else
													{	/* Eval/evobject.scm 358 */
														obj_t BgL_arg2094z00_6234;

														{	/* Eval/evobject.scm 358 */
															obj_t BgL_arg2095z00_6235;

															obj_t BgL_arg2096z00_6236;

															{	/* Eval/evobject.scm 358 */
																obj_t BgL_res5643z00_6241;

																{	/* Eval/evobject.scm 358 */
																	obj_t BgL_symbolz00_6239;

																	BgL_symbolz00_6239 =
																		BGl_symbol5782z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 358 */
																		obj_t BgL_arg5527z00_6240;

																		BgL_arg5527z00_6240 =
																			SYMBOL_TO_STRING(BgL_symbolz00_6239);
																		BgL_res5643z00_6241 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg5527z00_6240);
																	}
																}
																BgL_arg2095z00_6235 = BgL_res5643z00_6241;
															}
															{	/* Eval/evobject.scm 358 */
																obj_t BgL_res5644z00_6244;

																{	/* Eval/evobject.scm 358 */
																	obj_t BgL_arg5527z00_6243;

																	BgL_arg5527z00_6243 =
																		SYMBOL_TO_STRING(BgL_idz00_92);
																	BgL_res5644z00_6244 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg5527z00_6243);
																}
																BgL_arg2096z00_6236 = BgL_res5644z00_6244;
															}
															{	/* Eval/evobject.scm 358 */
																obj_t BgL_list2097z00_6237;

																{	/* Eval/evobject.scm 358 */
																	obj_t BgL_arg2098z00_6238;

																	BgL_arg2098z00_6238 =
																		MAKE_PAIR(BgL_arg2096z00_6236, BNIL);
																	BgL_list2097z00_6237 =
																		MAKE_PAIR(BgL_arg2095z00_6235,
																		BgL_arg2098z00_6238);
																}
																BgL_arg2094z00_6234 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2097z00_6237);
															}
														}
														BgL_arg2743z00_1750 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2094z00_6234));
													}
												if (BgL_abstractz00_94)
													{	/* Eval/evobject.scm 359 */
														BgL_arg2745z00_1751 =
															BGl_listzd2envzd2zz__r4_pairs_and_lists_6_3z00;
													}
												else
													{	/* Eval/evobject.scm 359 */
														obj_t BgL_arg2103z00_6247;

														{	/* Eval/evobject.scm 359 */
															obj_t BgL_arg2104z00_6248;

															obj_t BgL_arg2105z00_6249;

															{	/* Eval/evobject.scm 359 */
																obj_t BgL_res5645z00_6254;

																{	/* Eval/evobject.scm 359 */
																	obj_t BgL_symbolz00_6252;

																	BgL_symbolz00_6252 =
																		BGl_symbol5812z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 359 */
																		obj_t BgL_arg5527z00_6253;

																		BgL_arg5527z00_6253 =
																			SYMBOL_TO_STRING(BgL_symbolz00_6252);
																		BgL_res5645z00_6254 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg5527z00_6253);
																	}
																}
																BgL_arg2104z00_6248 = BgL_res5645z00_6254;
															}
															{	/* Eval/evobject.scm 359 */
																obj_t BgL_res5646z00_6257;

																{	/* Eval/evobject.scm 359 */
																	obj_t BgL_arg5527z00_6256;

																	BgL_arg5527z00_6256 =
																		SYMBOL_TO_STRING(BgL_idz00_92);
																	BgL_res5646z00_6257 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg5527z00_6256);
																}
																BgL_arg2105z00_6249 = BgL_res5646z00_6257;
															}
															{	/* Eval/evobject.scm 359 */
																obj_t BgL_list2106z00_6250;

																{	/* Eval/evobject.scm 359 */
																	obj_t BgL_arg2107z00_6251;

																	BgL_arg2107z00_6251 =
																		MAKE_PAIR(BgL_arg2105z00_6249, BNIL);
																	BgL_list2106z00_6250 =
																		MAKE_PAIR(BgL_arg2104z00_6248,
																		BgL_arg2107z00_6251);
																}
																BgL_arg2103z00_6247 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2106z00_6250);
															}
														}
														BgL_arg2745z00_1751 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2103z00_6247));
													}
												{	/* Eval/evobject.scm 360 */
													obj_t BgL_arg2108z00_6260;

													{	/* Eval/evobject.scm 360 */
														obj_t BgL_arg2109z00_6261;

														obj_t BgL_arg2110z00_6262;

														{	/* Eval/evobject.scm 360 */
															obj_t BgL_res5647z00_6267;

															{	/* Eval/evobject.scm 360 */
																obj_t BgL_arg5527z00_6266;

																BgL_arg5527z00_6266 =
																	SYMBOL_TO_STRING(BgL_idz00_92);
																BgL_res5647z00_6267 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg5527z00_6266);
															}
															BgL_arg2109z00_6261 = BgL_res5647z00_6267;
														}
														{	/* Eval/evobject.scm 360 */
															obj_t BgL_res5648z00_6270;

															{	/* Eval/evobject.scm 360 */
																obj_t BgL_symbolz00_6268;

																BgL_symbolz00_6268 =
																	BGl_symbol5814z00zz__evobjectz00;
																{	/* Eval/evobject.scm 360 */
																	obj_t BgL_arg5527z00_6269;

																	BgL_arg5527z00_6269 =
																		SYMBOL_TO_STRING(BgL_symbolz00_6268);
																	BgL_res5648z00_6270 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg5527z00_6269);
																}
															}
															BgL_arg2110z00_6262 = BgL_res5648z00_6270;
														}
														{	/* Eval/evobject.scm 360 */
															obj_t BgL_list2111z00_6263;

															{	/* Eval/evobject.scm 360 */
																obj_t BgL_arg2112z00_6264;

																BgL_arg2112z00_6264 =
																	MAKE_PAIR(BgL_arg2110z00_6262, BNIL);
																BgL_list2111z00_6263 =
																	MAKE_PAIR(BgL_arg2109z00_6261,
																	BgL_arg2112z00_6264);
															}
															BgL_arg2108z00_6260 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2111z00_6263);
														}
													}
													BgL_arg2746z00_1752 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2108z00_6260));
												}
												{	/* Eval/evobject.scm 361 */
													obj_t BgL_arg2089z00_6273;

													{	/* Eval/evobject.scm 361 */
														obj_t BgL_arg2090z00_6274;

														obj_t BgL_arg2091z00_6275;

														{	/* Eval/evobject.scm 361 */
															obj_t BgL_res5649z00_6280;

															{	/* Eval/evobject.scm 361 */
																obj_t BgL_arg5527z00_6279;

																BgL_arg5527z00_6279 =
																	SYMBOL_TO_STRING(BgL_idz00_92);
																BgL_res5649z00_6280 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg5527z00_6279);
															}
															BgL_arg2090z00_6274 = BgL_res5649z00_6280;
														}
														{	/* Eval/evobject.scm 361 */
															obj_t BgL_res5650z00_6283;

															{	/* Eval/evobject.scm 361 */
																obj_t BgL_symbolz00_6281;

																BgL_symbolz00_6281 =
																	BGl_symbol5816z00zz__evobjectz00;
																{	/* Eval/evobject.scm 361 */
																	obj_t BgL_arg5527z00_6282;

																	BgL_arg5527z00_6282 =
																		SYMBOL_TO_STRING(BgL_symbolz00_6281);
																	BgL_res5650z00_6283 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg5527z00_6282);
																}
															}
															BgL_arg2091z00_6275 = BgL_res5650z00_6283;
														}
														{	/* Eval/evobject.scm 361 */
															obj_t BgL_list2092z00_6276;

															{	/* Eval/evobject.scm 361 */
																obj_t BgL_arg2093z00_6277;

																BgL_arg2093z00_6277 =
																	MAKE_PAIR(BgL_arg2091z00_6275, BNIL);
																BgL_list2092z00_6276 =
																	MAKE_PAIR(BgL_arg2090z00_6274,
																	BgL_arg2093z00_6277);
															}
															BgL_arg2089z00_6273 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2092z00_6276);
														}
													}
													BgL_arg2747z00_1753 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2089z00_6273));
												}
												{	/* Eval/evobject.scm 363 */
													obj_t BgL_arg2766z00_1771;

													obj_t BgL_arg2767z00_1772;

													BgL_arg2766z00_1771 =
														BGl_symbol5850z00zz__evobjectz00;
													{	/* Eval/evobject.scm 363 */
														obj_t BgL_arg2768z00_1773;

														if (NULLP(BgL_slotsz00_95))
															{	/* Eval/evobject.scm 363 */
																BgL_arg2768z00_1773 = BNIL;
															}
														else
															{	/* Eval/evobject.scm 363 */
																obj_t BgL_head1917z00_1777;

																BgL_head1917z00_1777 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_l1915z00_1779;

																	obj_t BgL_tail1918z00_1780;

																	BgL_l1915z00_1779 = BgL_slotsz00_95;
																	BgL_tail1918z00_1780 = BgL_head1917z00_1777;
																BgL_zc3anonymousza32771ze3z83_1781:
																	if (NULLP(BgL_l1915z00_1779))
																		{	/* Eval/evobject.scm 363 */
																			BgL_arg2768z00_1773 =
																				CDR(BgL_head1917z00_1777);
																		}
																	else
																		{	/* Eval/evobject.scm 363 */
																			obj_t BgL_newtail1919z00_1783;

																			{	/* Eval/evobject.scm 363 */
																				obj_t BgL_arg2774z00_1785;

																				{	/* Eval/evobject.scm 363 */
																					obj_t BgL_fz00_1787;

																					BgL_fz00_1787 =
																						CAR(BgL_l1915z00_1779);
																					{	/* Eval/evobject.scm 364 */
																						obj_t BgL_sidz00_1788;

																						BgL_sidz00_1788 =
																							STRUCT_REF(BgL_fz00_1787,
																							(int) (((long) 0)));
																						{	/* Eval/evobject.scm 365 */
																							obj_t BgL_arg2776z00_1789;

																							obj_t BgL_arg2777z00_1790;

																							BgL_arg2776z00_1789 =
																								BGl_symbol5852z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 366 */
																								obj_t BgL_arg2778z00_1791;

																								obj_t BgL_arg2779z00_1792;

																								obj_t BgL_arg2780z00_1793;

																								obj_t BgL_arg2782z00_1794;

																								obj_t BgL_arg2783z00_1795;

																								obj_t BgL_arg2784z00_1796;

																								obj_t BgL_arg2785z00_1797;

																								{	/* Eval/evobject.scm 366 */
																									obj_t BgL_arg2795z00_1806;

																									obj_t BgL_arg2796z00_1807;

																									BgL_arg2795z00_1806 =
																										BGl_symbol5842z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 366 */
																										obj_t BgL_list2797z00_1808;

																										BgL_list2797z00_1808 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2796z00_1807 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_sidz00_1788,
																											BgL_list2797z00_1808);
																									}
																									BgL_arg2778z00_1791 =
																										MAKE_PAIR
																										(BgL_arg2795z00_1806,
																										BgL_arg2796z00_1807);
																								}
																								{	/* Eval/evobject.scm 367 */
																									obj_t
																										BgL__ortest_1825z00_1809;
																									BgL__ortest_1825z00_1809 =
																										STRUCT_REF(BgL_fz00_1787,
																										(int) (((long) 4)));
																									if (CBOOL
																										(BgL__ortest_1825z00_1809))
																										{	/* Eval/evobject.scm 367 */
																											BgL_arg2779z00_1792 =
																												BgL__ortest_1825z00_1809;
																										}
																									else
																										{	/* Eval/evobject.scm 368 */
																											obj_t
																												BgL_list2113z00_6299;
																											{	/* Eval/evobject.scm 368 */
																												obj_t
																													BgL_arg2114z00_6300;
																												{	/* Eval/evobject.scm 368 */
																													obj_t
																														BgL_arg2115z00_6301;
																													obj_t
																														BgL_arg2116z00_6302;
																													BgL_arg2115z00_6301 =
																														BGl_symbol5822z00zz__evobjectz00;
																													BgL_arg2116z00_6302 =
																														MAKE_PAIR
																														(BgL_sidz00_1788,
																														BNIL);
																													BgL_arg2114z00_6300 =
																														MAKE_PAIR
																														(BgL_arg2115z00_6301,
																														BgL_arg2116z00_6302);
																												}
																												BgL_list2113z00_6299 =
																													MAKE_PAIR
																													(BgL_idz00_92,
																													BgL_arg2114z00_6300);
																											}
																											BgL_arg2779z00_1792 =
																												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																												(BgL_list2113z00_6299);
																										}
																								}
																								{	/* Eval/evobject.scm 369 */
																									bool_t BgL_testz00_9085;

																									{	/* Eval/evobject.scm 369 */
																										obj_t BgL_sz00_6304;

																										BgL_sz00_6304 =
																											BgL_fz00_1787;
																										BgL_testz00_9085 =
																											CBOOL(STRUCT_REF
																											(BgL_sz00_6304,
																												(int) (((long) 2))));
																									}
																									if (BgL_testz00_9085)
																										{	/* Eval/evobject.scm 369 */
																											BgL_arg2780z00_1793 =
																												BFALSE;
																										}
																									else
																										{	/* Eval/evobject.scm 370 */
																											obj_t
																												BgL__ortest_1826z00_1811;
																											BgL__ortest_1826z00_1811 =
																												STRUCT_REF
																												(BgL_fz00_1787,
																												(int) (((long) 5)));
																											if (CBOOL
																												(BgL__ortest_1826z00_1811))
																												{	/* Eval/evobject.scm 370 */
																													BgL_arg2780z00_1793 =
																														BgL__ortest_1826z00_1811;
																												}
																											else
																												{	/* Eval/evobject.scm 371 */
																													obj_t
																														BgL_list2117z00_6311;
																													{	/* Eval/evobject.scm 371 */
																														obj_t
																															BgL_arg2118z00_6312;
																														{	/* Eval/evobject.scm 371 */
																															obj_t
																																BgL_arg2119z00_6313;
																															obj_t
																																BgL_arg2121z00_6314;
																															BgL_arg2119z00_6313
																																=
																																BGl_symbol5822z00zz__evobjectz00;
																															{	/* Eval/evobject.scm 371 */
																																obj_t
																																	BgL_arg2123z00_6315;
																																BgL_arg2123z00_6315
																																	=
																																	MAKE_PAIR
																																	(BGl_symbol5824z00zz__evobjectz00,
																																	BNIL);
																																BgL_arg2121z00_6314
																																	=
																																	MAKE_PAIR
																																	(BgL_sidz00_1788,
																																	BgL_arg2123z00_6315);
																															}
																															BgL_arg2118z00_6312
																																=
																																MAKE_PAIR
																																(BgL_arg2119z00_6313,
																																BgL_arg2121z00_6314);
																														}
																														BgL_list2117z00_6311
																															=
																															MAKE_PAIR
																															(BgL_idz00_92,
																															BgL_arg2118z00_6312);
																													}
																													BgL_arg2780z00_1793 =
																														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																														(BgL_list2117z00_6311);
																												}
																										}
																								}
																								{	/* Eval/evobject.scm 372 */
																									bool_t BgL_testz00_9098;

																									{	/* Eval/evobject.scm 372 */
																										obj_t BgL_sz00_6317;

																										BgL_sz00_6317 =
																											BgL_fz00_1787;
																										BgL_testz00_9098 =
																											CBOOL(STRUCT_REF
																											(BgL_sz00_6317,
																												(int) (((long) 6))));
																									}
																									if (BgL_testz00_9098)
																										{	/* Eval/evobject.scm 373 */
																											obj_t BgL_arg2800z00_1813;

																											{	/* Eval/evobject.scm 373 */
																												obj_t
																													BgL_arg2124z00_6320;
																												{	/* Eval/evobject.scm 373 */
																													obj_t
																														BgL_arg2125z00_6321;
																													obj_t
																														BgL_arg2126z00_6322;
																													{	/* Eval/evobject.scm 373 */
																														obj_t
																															BgL_res5651z00_6327;
																														{	/* Eval/evobject.scm 373 */
																															obj_t
																																BgL_symbolz00_6325;
																															BgL_symbolz00_6325
																																=
																																BgL_sidz00_1788;
																															{	/* Eval/evobject.scm 373 */
																																obj_t
																																	BgL_arg5527z00_6326;
																																BgL_arg5527z00_6326
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_symbolz00_6325);
																																BgL_res5651z00_6327
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg5527z00_6326);
																															}
																														}
																														BgL_arg2125z00_6321
																															=
																															BgL_res5651z00_6327;
																													}
																													{	/* Eval/evobject.scm 373 */
																														obj_t
																															BgL_res5652z00_6330;
																														{	/* Eval/evobject.scm 373 */
																															obj_t
																																BgL_symbolz00_6328;
																															BgL_symbolz00_6328
																																=
																																BGl_symbol5801z00zz__evobjectz00;
																															{	/* Eval/evobject.scm 373 */
																																obj_t
																																	BgL_arg5527z00_6329;
																																BgL_arg5527z00_6329
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_symbolz00_6328);
																																BgL_res5652z00_6330
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg5527z00_6329);
																															}
																														}
																														BgL_arg2126z00_6322
																															=
																															BgL_res5652z00_6330;
																													}
																													{	/* Eval/evobject.scm 373 */
																														obj_t
																															BgL_list2127z00_6323;
																														{	/* Eval/evobject.scm 373 */
																															obj_t
																																BgL_arg2130z00_6324;
																															BgL_arg2130z00_6324
																																=
																																MAKE_PAIR
																																(BgL_arg2126z00_6322,
																																BNIL);
																															BgL_list2127z00_6323
																																=
																																MAKE_PAIR
																																(BgL_arg2125z00_6321,
																																BgL_arg2130z00_6324);
																														}
																														BgL_arg2124z00_6320
																															=
																															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																															(BgL_list2127z00_6323);
																													}
																												}
																												BgL_arg2800z00_1813 =
																													string_to_symbol
																													(BSTRING_TO_STRING
																													(BgL_arg2124z00_6320));
																											}
																											{	/* Eval/evobject.scm 373 */
																												obj_t
																													BgL_list2113z00_6334;
																												{	/* Eval/evobject.scm 373 */
																													obj_t
																														BgL_arg2114z00_6335;
																													{	/* Eval/evobject.scm 373 */
																														obj_t
																															BgL_arg2115z00_6336;
																														obj_t
																															BgL_arg2116z00_6337;
																														BgL_arg2115z00_6336
																															=
																															BGl_symbol5822z00zz__evobjectz00;
																														BgL_arg2116z00_6337
																															=
																															MAKE_PAIR
																															(BgL_arg2800z00_1813,
																															BNIL);
																														BgL_arg2114z00_6335
																															=
																															MAKE_PAIR
																															(BgL_arg2115z00_6336,
																															BgL_arg2116z00_6337);
																													}
																													BgL_list2113z00_6334 =
																														MAKE_PAIR
																														(BgL_idz00_92,
																														BgL_arg2114z00_6335);
																												}
																												BgL_arg2782z00_1794 =
																													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																													(BgL_list2113z00_6334);
																											}
																										}
																									else
																										{	/* Eval/evobject.scm 372 */
																											BgL_arg2782z00_1794 =
																												BFALSE;
																										}
																								}
																								BgL_arg2783z00_1795 =
																									STRUCT_REF(BgL_fz00_1787,
																									(int) (((long) 4)));
																								BgL_arg2784z00_1796 =
																									STRUCT_REF(BgL_fz00_1787,
																									(int) (((long) 7)));
																								{	/* Eval/evobject.scm 377 */
																									obj_t BgL_arg2801z00_1814;

																									obj_t BgL_arg2802z00_1815;

																									BgL_arg2801z00_1814 =
																										BGl_symbol5842z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 377 */
																										obj_t BgL_arg2803z00_1816;

																										BgL_arg2803z00_1816 =
																											STRUCT_REF(BgL_fz00_1787,
																											(int) (((long) 3)));
																										{	/* Eval/evobject.scm 377 */
																											obj_t
																												BgL_list2805z00_1818;
																											BgL_list2805z00_1818 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2802z00_1815 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2803z00_1816,
																												BgL_list2805z00_1818);
																									}}
																									BgL_arg2785z00_1797 =
																										MAKE_PAIR
																										(BgL_arg2801z00_1814,
																										BgL_arg2802z00_1815);
																								}
																								{	/* Eval/evobject.scm 365 */
																									obj_t BgL_list2787z00_1799;

																									{	/* Eval/evobject.scm 365 */
																										obj_t BgL_arg2789z00_1800;

																										{	/* Eval/evobject.scm 365 */
																											obj_t BgL_arg2790z00_1801;

																											{	/* Eval/evobject.scm 365 */
																												obj_t
																													BgL_arg2791z00_1802;
																												{	/* Eval/evobject.scm 365 */
																													obj_t
																														BgL_arg2792z00_1803;
																													{	/* Eval/evobject.scm 365 */
																														obj_t
																															BgL_arg2793z00_1804;
																														{	/* Eval/evobject.scm 365 */
																															obj_t
																																BgL_arg2794z00_1805;
																															BgL_arg2794z00_1805
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2793z00_1804
																																=
																																MAKE_PAIR
																																(BgL_arg2785z00_1797,
																																BgL_arg2794z00_1805);
																														}
																														BgL_arg2792z00_1803
																															=
																															MAKE_PAIR
																															(BgL_arg2784z00_1796,
																															BgL_arg2793z00_1804);
																													}
																													BgL_arg2791z00_1802 =
																														MAKE_PAIR
																														(BgL_arg2783z00_1795,
																														BgL_arg2792z00_1803);
																												}
																												BgL_arg2790z00_1801 =
																													MAKE_PAIR
																													(BgL_arg2782z00_1794,
																													BgL_arg2791z00_1802);
																											}
																											BgL_arg2789z00_1800 =
																												MAKE_PAIR
																												(BgL_arg2780z00_1793,
																												BgL_arg2790z00_1801);
																										}
																										BgL_list2787z00_1799 =
																											MAKE_PAIR
																											(BgL_arg2779z00_1792,
																											BgL_arg2789z00_1800);
																									}
																									BgL_arg2777z00_1790 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2778z00_1791,
																										BgL_list2787z00_1799);
																							}}
																							BgL_arg2774z00_1785 =
																								MAKE_PAIR(BgL_arg2776z00_1789,
																								BgL_arg2777z00_1790);
																				}}}
																				BgL_newtail1919z00_1783 =
																					MAKE_PAIR(BgL_arg2774z00_1785, BNIL);
																			}
																			SET_CDR(BgL_tail1918z00_1780,
																				BgL_newtail1919z00_1783);
																			{
																				obj_t BgL_tail1918z00_9137;

																				obj_t BgL_l1915z00_9135;

																				BgL_l1915z00_9135 =
																					CDR(BgL_l1915z00_1779);
																				BgL_tail1918z00_9137 =
																					BgL_newtail1919z00_1783;
																				BgL_tail1918z00_1780 =
																					BgL_tail1918z00_9137;
																				BgL_l1915z00_1779 = BgL_l1915z00_9135;
																				goto BgL_zc3anonymousza32771ze3z83_1781;
																			}
																		}
																}
															}
														BgL_arg2767z00_1772 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2768z00_1773, BNIL);
													}
													BgL_arg2748z00_1754 =
														MAKE_PAIR(BgL_arg2766z00_1771, BgL_arg2767z00_1772);
												}
												{	/* Eval/evobject.scm 380 */
													obj_t BgL_arg2806z00_1820;

													obj_t BgL_arg2807z00_1821;

													BgL_arg2806z00_1820 =
														BGl_symbol5842z00zz__evobjectz00;
													{	/* Eval/evobject.scm 380 */
														obj_t BgL_arg2808z00_1822;

														BgL_arg2808z00_1822 =
															BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
															(BNIL);
														{	/* Eval/evobject.scm 380 */
															obj_t BgL_list2810z00_1824;

															BgL_list2810z00_1824 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2807z00_1821 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2808z00_1822, BgL_list2810z00_1824);
														}
													}
													BgL_arg2749z00_1755 =
														MAKE_PAIR(BgL_arg2806z00_1820, BgL_arg2807z00_1821);
												}
												{	/* Eval/evobject.scm 354 */
													obj_t BgL_list2751z00_1757;

													{	/* Eval/evobject.scm 354 */
														obj_t BgL_arg2752z00_1758;

														{	/* Eval/evobject.scm 354 */
															obj_t BgL_arg2753z00_1759;

															{	/* Eval/evobject.scm 354 */
																obj_t BgL_arg2754z00_1760;

																{	/* Eval/evobject.scm 354 */
																	obj_t BgL_arg2755z00_1761;

																	{	/* Eval/evobject.scm 354 */
																		obj_t BgL_arg2756z00_1762;

																		{	/* Eval/evobject.scm 354 */
																			obj_t BgL_arg2758z00_1763;

																			{	/* Eval/evobject.scm 354 */
																				obj_t BgL_arg2759z00_1764;

																				{	/* Eval/evobject.scm 354 */
																					obj_t BgL_arg2760z00_1765;

																					{	/* Eval/evobject.scm 354 */
																						obj_t BgL_arg2761z00_1766;

																						{	/* Eval/evobject.scm 354 */
																							obj_t BgL_arg2762z00_1767;

																							BgL_arg2762z00_1767 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2761z00_1766 =
																								MAKE_PAIR(BgL_arg2749z00_1755,
																								BgL_arg2762z00_1767);
																						}
																						BgL_arg2760z00_1765 =
																							MAKE_PAIR(BgL_constructorz00_98,
																							BgL_arg2761z00_1766);
																					}
																					BgL_arg2759z00_1764 =
																						MAKE_PAIR(BgL_arg2748z00_1754,
																						BgL_arg2760z00_1765);
																				}
																				BgL_arg2758z00_1763 =
																					MAKE_PAIR(BgL_hashz00_97,
																					BgL_arg2759z00_1764);
																			}
																			BgL_arg2756z00_1762 =
																				MAKE_PAIR(BgL_arg2747z00_1753,
																				BgL_arg2758z00_1763);
																		}
																		BgL_arg2755z00_1761 =
																			MAKE_PAIR(BgL_arg2746z00_1752,
																			BgL_arg2756z00_1762);
																	}
																	BgL_arg2754z00_1760 =
																		MAKE_PAIR(BgL_arg2745z00_1751,
																		BgL_arg2755z00_1761);
																}
																BgL_arg2753z00_1759 =
																	MAKE_PAIR(BgL_arg2743z00_1750,
																	BgL_arg2754z00_1760);
															}
															BgL_arg2752z00_1758 =
																MAKE_PAIR(BBOOL(BgL_abstractz00_94),
																BgL_arg2753z00_1759);
														}
														BgL_list2751z00_1757 =
															MAKE_PAIR(BgL_arg2742z00_1749,
															BgL_arg2752z00_1758);
													}
													BgL_arg2740z00_1747 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2741z00_1748, BgL_list2751z00_1757);
												}
											}
											BgL_arg2736z00_1743 =
												MAKE_PAIR(BgL_arg2739z00_1746, BgL_arg2740z00_1747);
										}
										{	/* Eval/evobject.scm 354 */
											obj_t BgL_list2738z00_1745;

											BgL_list2738z00_1745 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2735z00_1742 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2736z00_1743, BgL_list2738z00_1745);
										}
									}
									BgL_arg2733z00_1740 =
										MAKE_PAIR(BgL_claz00_1730, BgL_arg2735z00_1742);
								}
								BgL_arg2727z00_1734 = MAKE_PAIR(BgL_arg2733z00_1740, BNIL);
							}
							{	/* Eval/evobject.scm 381 */
								obj_t BgL_arg2811z00_1825;

								obj_t BgL_arg2812z00_1826;

								BgL_arg2811z00_1825 = BGl_symbol5854z00zz__evobjectz00;
								{	/* Eval/evobject.scm 381 */
									obj_t BgL_list2813z00_1827;

									{	/* Eval/evobject.scm 381 */
										obj_t BgL_arg2814z00_1828;

										BgL_arg2814z00_1828 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2813z00_1827 =
											MAKE_PAIR(BgL_sza7za7_96, BgL_arg2814z00_1828);
									}
									BgL_arg2812z00_1826 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_claz00_1730,
										BgL_list2813z00_1827);
								}
								BgL_arg2728z00_1735 =
									MAKE_PAIR(BgL_arg2811z00_1825, BgL_arg2812z00_1826);
							}
							{	/* Eval/evobject.scm 354 */
								obj_t BgL_list2730z00_1737;

								{	/* Eval/evobject.scm 354 */
									obj_t BgL_arg2731z00_1738;

									{	/* Eval/evobject.scm 354 */
										obj_t BgL_arg2732z00_1739;

										BgL_arg2732z00_1739 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2731z00_1738 =
											MAKE_PAIR(BgL_claz00_1730, BgL_arg2732z00_1739);
									}
									BgL_list2730z00_1737 =
										MAKE_PAIR(BgL_arg2728z00_1735, BgL_arg2731z00_1738);
								}
								BgL_arg2726z00_1733 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2727z00_1734, BgL_list2730z00_1737);
							}
						}
						BgL_arg2724z00_1731 =
							MAKE_PAIR(BgL_arg2725z00_1732, BgL_arg2726z00_1733);
					}
					return
						BGl_localiza7eza7zz__evobjectz00(BgL_locz00_91,
						BgL_arg2724z00_1731);
				}
			}
		}
	}



/* field->slot */
	obj_t BGl_fieldzd2ze3slotz31zz__evobjectz00(obj_t BgL_fieldz00_99)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 387 */
			{	/* Eval/evobject.scm 388 */
				obj_t BgL_arg2815z00_1830;

				bool_t BgL_arg2816z00_1831;

				obj_t BgL_arg2818z00_1832;

				obj_t BgL_arg2819z00_1833;

				obj_t BgL_arg2820z00_1834;

				obj_t BgL_arg2821z00_1835;

				BgL_arg2815z00_1830 =
					BGl_classzd2fieldzd2namez00zz__objectz00(BgL_fieldz00_99);
				if (BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(BgL_fieldz00_99))
					{	/* Eval/evobject.scm 390 */
						BgL_arg2816z00_1831 = ((bool_t) 0);
					}
				else
					{	/* Eval/evobject.scm 390 */
						BgL_arg2816z00_1831 = ((bool_t) 1);
					}
				BgL_arg2818z00_1832 =
					BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_fieldz00_99);
				if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fieldz00_99))
					{	/* Eval/evobject.scm 392 */
						BgL_arg2819z00_1833 =
							BGl_classzd2fieldzd2accessorz00zz__objectz00(BgL_fieldz00_99);
					}
				else
					{	/* Eval/evobject.scm 392 */
						BgL_arg2819z00_1833 = BFALSE;
					}
				{	/* Eval/evobject.scm 394 */
					bool_t BgL_testz00_9179;

					if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fieldz00_99))
						{	/* Eval/evobject.scm 394 */
							BgL_testz00_9179 =
								BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(BgL_fieldz00_99);
						}
					else
						{	/* Eval/evobject.scm 394 */
							BgL_testz00_9179 = ((bool_t) 0);
						}
					if (BgL_testz00_9179)
						{	/* Eval/evobject.scm 394 */
							BgL_arg2820z00_1834 =
								BGl_classzd2fieldzd2mutatorz00zz__objectz00(BgL_fieldz00_99);
						}
					else
						{	/* Eval/evobject.scm 394 */
							BgL_arg2820z00_1834 = BFALSE;
						}
				}
				BgL_arg2821z00_1835 =
					BGl_classzd2fieldzd2infoz00zz__objectz00(BgL_fieldz00_99);
				{	/* Eval/evobject.scm 388 */
					obj_t BgL_newz00_6361;

					BgL_newz00_6361 =
						create_struct(BGl_symbol5856z00zz__evobjectz00, (int) (((long) 8)));
					{	/* Eval/evobject.scm 388 */
						int BgL_auxz00_9187;

						BgL_auxz00_9187 = (int) (((long) 7));
						STRUCT_SET(BgL_newz00_6361, BgL_auxz00_9187, BgL_arg2821z00_1835);
					}
					{	/* Eval/evobject.scm 388 */
						int BgL_auxz00_9190;

						BgL_auxz00_9190 = (int) (((long) 6));
						STRUCT_SET(BgL_newz00_6361, BgL_auxz00_9190, BFALSE);
					}
					{	/* Eval/evobject.scm 388 */
						int BgL_auxz00_9193;

						BgL_auxz00_9193 = (int) (((long) 5));
						STRUCT_SET(BgL_newz00_6361, BgL_auxz00_9193, BgL_arg2820z00_1834);
					}
					{	/* Eval/evobject.scm 388 */
						int BgL_auxz00_9196;

						BgL_auxz00_9196 = (int) (((long) 4));
						STRUCT_SET(BgL_newz00_6361, BgL_auxz00_9196, BgL_arg2819z00_1833);
					}
					{	/* Eval/evobject.scm 388 */
						int BgL_auxz00_9199;

						BgL_auxz00_9199 = (int) (((long) 3));
						STRUCT_SET(BgL_newz00_6361, BgL_auxz00_9199, BgL_arg2818z00_1832);
					}
					{	/* Eval/evobject.scm 388 */
						obj_t BgL_auxz00_9204;

						int BgL_auxz00_9202;

						BgL_auxz00_9204 = BBOOL(BgL_arg2816z00_1831);
						BgL_auxz00_9202 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_6361, BgL_auxz00_9202, BgL_auxz00_9204);
					}
					{	/* Eval/evobject.scm 388 */
						int BgL_auxz00_9207;

						BgL_auxz00_9207 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_6361, BgL_auxz00_9207, BFALSE);
					}
					{	/* Eval/evobject.scm 388 */
						int BgL_auxz00_9210;

						BgL_auxz00_9210 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_6361, BgL_auxz00_9210, BgL_arg2815z00_1830);
					}
					return BgL_newz00_6361;
				}
			}
		}
	}



/* eval-instantiate->make */
	obj_t BGl_evalzd2instantiatezd2ze3makeze3zz__evobjectz00(obj_t BgL_cidz00_100,
		obj_t BgL_argsz00_101, obj_t BgL_fieldsz00_102, obj_t BgL_sourcez00_103)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 403 */
			{	/* Eval/evobject.scm 404 */
				obj_t BgL_insz00_1840;

				{	/* Eval/evobject.scm 404 */
					obj_t BgL_arg3085z00_2132;

					{	/* Eval/evobject.scm 404 */
						obj_t BgL_arg3086z00_2133;

						obj_t BgL_arg3087z00_2134;

						{	/* Eval/evobject.scm 404 */
							obj_t BgL_res5653z00_6404;

							{	/* Eval/evobject.scm 404 */
								obj_t BgL_symbolz00_6402;

								BgL_symbolz00_6402 = BGl_symbol5858z00zz__evobjectz00;
								{	/* Eval/evobject.scm 404 */
									obj_t BgL_arg5527z00_6403;

									BgL_arg5527z00_6403 = SYMBOL_TO_STRING(BgL_symbolz00_6402);
									BgL_res5653z00_6404 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg5527z00_6403);
								}
							}
							BgL_arg3086z00_2133 = BgL_res5653z00_6404;
						}
						{	/* Eval/evobject.scm 404 */
							obj_t BgL_res5654z00_6407;

							{	/* Eval/evobject.scm 404 */
								obj_t BgL_arg5527z00_6406;

								BgL_arg5527z00_6406 = SYMBOL_TO_STRING(BgL_cidz00_100);
								BgL_res5654z00_6407 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg5527z00_6406);
							}
							BgL_arg3087z00_2134 = BgL_res5654z00_6407;
						}
						{	/* Eval/evobject.scm 404 */
							obj_t BgL_list3088z00_2135;

							{	/* Eval/evobject.scm 404 */
								obj_t BgL_arg3089z00_2136;

								BgL_arg3089z00_2136 = MAKE_PAIR(BgL_arg3087z00_2134, BNIL);
								BgL_list3088z00_2135 =
									MAKE_PAIR(BgL_arg3086z00_2133, BgL_arg3089z00_2136);
							}
							BgL_arg3085z00_2132 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list3088z00_2135);
						}
					}
					BgL_insz00_1840 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg3085z00_2132));
				}
				{	/* Eval/evobject.scm 404 */
					obj_t BgL_nodefz00_1841;

					BgL_nodefz00_1841 =
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
					{	/* Eval/evobject.scm 405 */
						obj_t BgL_newz00_1842;

						{	/* Eval/evobject.scm 406 */

							{	/* Eval/evobject.scm 406 */

								BgL_newz00_1842 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						{	/* Eval/evobject.scm 406 */
							obj_t BgL_tmpz00_1843;

							{	/* Eval/evobject.scm 407 */

								{	/* Eval/evobject.scm 407 */

									BgL_tmpz00_1843 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Eval/evobject.scm 407 */
								obj_t BgL_mkz00_1844;

								{	/* Eval/evobject.scm 408 */
									obj_t BgL_arg2094z00_6410;

									{	/* Eval/evobject.scm 408 */
										obj_t BgL_arg2095z00_6411;

										obj_t BgL_arg2096z00_6412;

										{	/* Eval/evobject.scm 408 */
											obj_t BgL_res5655z00_6417;

											{	/* Eval/evobject.scm 408 */
												obj_t BgL_symbolz00_6415;

												BgL_symbolz00_6415 = BGl_symbol5782z00zz__evobjectz00;
												{	/* Eval/evobject.scm 408 */
													obj_t BgL_arg5527z00_6416;

													BgL_arg5527z00_6416 =
														SYMBOL_TO_STRING(BgL_symbolz00_6415);
													BgL_res5655z00_6417 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg5527z00_6416);
												}
											}
											BgL_arg2095z00_6411 = BgL_res5655z00_6417;
										}
										{	/* Eval/evobject.scm 408 */
											obj_t BgL_res5656z00_6420;

											{	/* Eval/evobject.scm 408 */
												obj_t BgL_arg5527z00_6419;

												BgL_arg5527z00_6419 = SYMBOL_TO_STRING(BgL_cidz00_100);
												BgL_res5656z00_6420 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg5527z00_6419);
											}
											BgL_arg2096z00_6412 = BgL_res5656z00_6420;
										}
										{	/* Eval/evobject.scm 408 */
											obj_t BgL_list2097z00_6413;

											{	/* Eval/evobject.scm 408 */
												obj_t BgL_arg2098z00_6414;

												BgL_arg2098z00_6414 =
													MAKE_PAIR(BgL_arg2096z00_6412, BNIL);
												BgL_list2097z00_6413 =
													MAKE_PAIR(BgL_arg2095z00_6411, BgL_arg2098z00_6414);
											}
											BgL_arg2094z00_6410 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list2097z00_6413);
										}
									}
									BgL_mkz00_1844 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg2094z00_6410));
								}
								{	/* Eval/evobject.scm 408 */

									return
										BGl_loopz72z72z72z72zz__evobjectz00(BgL_cidz00_100,
										BgL_mkz00_1844, BgL_newz00_1842, BgL_nodefz00_1841,
										BgL_sourcez00_103, BgL_insz00_1840, BgL_argsz00_101,
										BgL_fieldsz00_102, BNIL, BNIL);
								}
							}
						}
					}
				}
			}
		}
	}



/* loop''' */
	obj_t BGl_loopz72z72z72z72zz__evobjectz00(obj_t BgL_cidz00_8019,
		obj_t BgL_mkz00_8018, obj_t BgL_newz00_8017, obj_t BgL_nodefz00_8016,
		obj_t BgL_sourcez00_8015, obj_t BgL_insz00_8014, obj_t BgL_argsz00_8013,
		obj_t BgL_fieldsz00_1848, obj_t BgL_valsz00_1849,
		obj_t BgL_virtualsz00_1850)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 409 */
			if (NULLP(BgL_fieldsz00_1848))
				{	/* Eval/evobject.scm 413 */
					obj_t BgL_arg2828z00_1853;

					obj_t BgL_arg2829z00_1854;

					BgL_arg2828z00_1853 = BGl_symbol5860z00zz__evobjectz00;
					if (NULLP(BgL_virtualsz00_1850))
						{	/* Eval/evobject.scm 415 */
							obj_t BgL_arg2833z00_1858;

							{	/* Eval/evobject.scm 415 */
								obj_t BgL_arg2834z00_1859;

								{	/* Eval/evobject.scm 415 */
									obj_t BgL_l1920z00_1861;

									BgL_l1920z00_1861 = bgl_reverse_bang(BgL_valsz00_1849);
									if (NULLP(BgL_l1920z00_1861))
										{	/* Eval/evobject.scm 415 */
											BgL_arg2834z00_1859 = BNIL;
										}
									else
										{	/* Eval/evobject.scm 415 */
											obj_t BgL_head1922z00_1863;

											BgL_head1922z00_1863 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l1920z00_1865;

												obj_t BgL_tail1923z00_1866;

												BgL_l1920z00_1865 = BgL_l1920z00_1861;
												BgL_tail1923z00_1866 = BgL_head1922z00_1863;
											BgL_zc3anonymousza32837ze3z83_1867:
												if (NULLP(BgL_l1920z00_1865))
													{	/* Eval/evobject.scm 415 */
														BgL_arg2834z00_1859 = CDR(BgL_head1922z00_1863);
													}
												else
													{	/* Eval/evobject.scm 415 */
														obj_t BgL_newtail1924z00_1869;

														{	/* Eval/evobject.scm 415 */
															obj_t BgL_arg2841z00_1871;

															{	/* Eval/evobject.scm 415 */
																obj_t BgL_vz00_1873;

																BgL_vz00_1873 = CAR(BgL_l1920z00_1865);
																{	/* Eval/evobject.scm 415 */
																	obj_t BgL_list2843z00_1874;

																	{	/* Eval/evobject.scm 415 */
																		obj_t BgL_arg2844z00_1875;

																		obj_t BgL_arg2845z00_1876;

																		BgL_arg2844z00_1875 =
																			BGl_symbol5862z00zz__evobjectz00;
																		BgL_arg2845z00_1876 =
																			MAKE_PAIR(BgL_vz00_1873, BNIL);
																		BgL_list2843z00_1874 =
																			MAKE_PAIR(BgL_arg2844z00_1875,
																			BgL_arg2845z00_1876);
																	}
																	BgL_arg2841z00_1871 = BgL_list2843z00_1874;
																}
															}
															BgL_newtail1924z00_1869 =
																MAKE_PAIR(BgL_arg2841z00_1871, BNIL);
														}
														SET_CDR(BgL_tail1923z00_1866,
															BgL_newtail1924z00_1869);
														{
															obj_t BgL_tail1923z00_9253;

															obj_t BgL_l1920z00_9251;

															BgL_l1920z00_9251 = CDR(BgL_l1920z00_1865);
															BgL_tail1923z00_9253 = BgL_newtail1924z00_1869;
															BgL_tail1923z00_1866 = BgL_tail1923z00_9253;
															BgL_l1920z00_1865 = BgL_l1920z00_9251;
															goto BgL_zc3anonymousza32837ze3z83_1867;
														}
													}
											}
										}
								}
								BgL_arg2833z00_1858 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2834z00_1859, BNIL);
							}
							BgL_arg2829z00_1854 =
								MAKE_PAIR(BgL_mkz00_8018, BgL_arg2833z00_1858);
						}
					else
						{	/* Eval/evobject.scm 417 */
							obj_t BgL_arg2846z00_1878;

							obj_t BgL_arg2847z00_1879;

							BgL_arg2846z00_1878 = BGl_symbol5789z00zz__evobjectz00;
							{	/* Eval/evobject.scm 417 */
								obj_t BgL_arg2848z00_1880;

								obj_t BgL_arg2849z00_1881;

								{	/* Eval/evobject.scm 417 */
									obj_t BgL_arg2851z00_1883;

									{	/* Eval/evobject.scm 417 */
										obj_t BgL_arg2854z00_1885;

										{	/* Eval/evobject.scm 417 */
											obj_t BgL_arg2856z00_1886;

											{	/* Eval/evobject.scm 417 */
												obj_t BgL_arg2859z00_1889;

												{	/* Eval/evobject.scm 417 */
													obj_t BgL_arg2861z00_1890;

													{	/* Eval/evobject.scm 417 */
														obj_t BgL_l1925z00_1892;

														BgL_l1925z00_1892 =
															bgl_reverse_bang(BgL_valsz00_1849);
														if (NULLP(BgL_l1925z00_1892))
															{	/* Eval/evobject.scm 417 */
																BgL_arg2861z00_1890 = BNIL;
															}
														else
															{	/* Eval/evobject.scm 417 */
																obj_t BgL_head1927z00_1894;

																BgL_head1927z00_1894 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_l1925z00_1896;

																	obj_t BgL_tail1928z00_1897;

																	BgL_l1925z00_1896 = BgL_l1925z00_1892;
																	BgL_tail1928z00_1897 = BgL_head1927z00_1894;
																BgL_zc3anonymousza32864ze3z83_1898:
																	if (NULLP(BgL_l1925z00_1896))
																		{	/* Eval/evobject.scm 417 */
																			BgL_arg2861z00_1890 =
																				CDR(BgL_head1927z00_1894);
																		}
																	else
																		{	/* Eval/evobject.scm 417 */
																			obj_t BgL_newtail1929z00_1900;

																			{	/* Eval/evobject.scm 417 */
																				obj_t BgL_arg2867z00_1902;

																				{	/* Eval/evobject.scm 417 */
																					obj_t BgL_vz00_1904;

																					BgL_vz00_1904 =
																						CAR(BgL_l1925z00_1896);
																					{	/* Eval/evobject.scm 417 */
																						obj_t BgL_list2869z00_1905;

																						{	/* Eval/evobject.scm 417 */
																							obj_t BgL_arg2870z00_1906;

																							obj_t BgL_arg2871z00_1907;

																							BgL_arg2870z00_1906 =
																								BGl_symbol5862z00zz__evobjectz00;
																							BgL_arg2871z00_1907 =
																								MAKE_PAIR(BgL_vz00_1904, BNIL);
																							BgL_list2869z00_1905 =
																								MAKE_PAIR(BgL_arg2870z00_1906,
																								BgL_arg2871z00_1907);
																						}
																						BgL_arg2867z00_1902 =
																							BgL_list2869z00_1905;
																					}
																				}
																				BgL_newtail1929z00_1900 =
																					MAKE_PAIR(BgL_arg2867z00_1902, BNIL);
																			}
																			SET_CDR(BgL_tail1928z00_1897,
																				BgL_newtail1929z00_1900);
																			{
																				obj_t BgL_tail1928z00_9270;

																				obj_t BgL_l1925z00_9268;

																				BgL_l1925z00_9268 =
																					CDR(BgL_l1925z00_1896);
																				BgL_tail1928z00_9270 =
																					BgL_newtail1929z00_1900;
																				BgL_tail1928z00_1897 =
																					BgL_tail1928z00_9270;
																				BgL_l1925z00_1896 = BgL_l1925z00_9268;
																				goto BgL_zc3anonymousza32864ze3z83_1898;
																			}
																		}
																}
															}
													}
													BgL_arg2859z00_1889 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2861z00_1890, BNIL);
												}
												BgL_arg2856z00_1886 =
													MAKE_PAIR(BgL_mkz00_8018, BgL_arg2859z00_1889);
											}
											{	/* Eval/evobject.scm 417 */
												obj_t BgL_list2858z00_1888;

												BgL_list2858z00_1888 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2854z00_1885 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2856z00_1886, BgL_list2858z00_1888);
											}
										}
										BgL_arg2851z00_1883 =
											MAKE_PAIR(BgL_newz00_8017, BgL_arg2854z00_1885);
									}
									BgL_arg2848z00_1880 = MAKE_PAIR(BgL_arg2851z00_1883, BNIL);
								}
								{	/* Eval/evobject.scm 419 */
									obj_t BgL_arg2872z00_1909;

									obj_t BgL_arg2873z00_1910;

									{	/* Eval/evobject.scm 419 */
										obj_t BgL_head1932z00_1913;

										BgL_head1932z00_1913 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l1930z00_1915;

											obj_t BgL_tail1933z00_1916;

											BgL_l1930z00_1915 = BgL_virtualsz00_1850;
											BgL_tail1933z00_1916 = BgL_head1932z00_1913;
										BgL_zc3anonymousza32875ze3z83_1917:
											if (NULLP(BgL_l1930z00_1915))
												{	/* Eval/evobject.scm 419 */
													BgL_arg2872z00_1909 = CDR(BgL_head1932z00_1913);
												}
											else
												{	/* Eval/evobject.scm 419 */
													obj_t BgL_newtail1934z00_1919;

													{	/* Eval/evobject.scm 419 */
														obj_t BgL_arg2878z00_1921;

														{	/* Eval/evobject.scm 419 */
															obj_t BgL_idz00_1923;

															BgL_idz00_1923 = CAR(BgL_l1930z00_1915);
															{	/* Eval/evobject.scm 420 */
																obj_t BgL_arg2880z00_1924;

																obj_t BgL_arg2881z00_1925;

																BgL_arg2880z00_1924 =
																	BGl_symbol5864z00zz__evobjectz00;
																{	/* Eval/evobject.scm 420 */
																	obj_t BgL_arg2882z00_1926;

																	obj_t BgL_arg2883z00_1927;

																	{	/* Eval/evobject.scm 420 */
																		obj_t BgL_arg2887z00_1931;

																		obj_t BgL_arg2888z00_1932;

																		BgL_arg2887z00_1931 =
																			BGl_symbol5866z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 420 */
																			obj_t BgL_arg2890z00_1933;

																			{	/* Eval/evobject.scm 420 */
																				obj_t BgL_list2894z00_1937;

																				{	/* Eval/evobject.scm 420 */
																					obj_t BgL_arg2896z00_1938;

																					obj_t BgL_arg2897z00_1939;

																					BgL_arg2896z00_1938 =
																						BGl_symbol5862z00zz__evobjectz00;
																					BgL_arg2897z00_1939 =
																						MAKE_PAIR(BgL_idz00_1923, BNIL);
																					BgL_list2894z00_1937 =
																						MAKE_PAIR(BgL_arg2896z00_1938,
																						BgL_arg2897z00_1939);
																				}
																				BgL_arg2890z00_1933 =
																					BgL_list2894z00_1937;
																			}
																			{	/* Eval/evobject.scm 420 */
																				obj_t BgL_list2892z00_1935;

																				{	/* Eval/evobject.scm 420 */
																					obj_t BgL_arg2893z00_1936;

																					BgL_arg2893z00_1936 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2892z00_1935 =
																						MAKE_PAIR(BgL_newz00_8017,
																						BgL_arg2893z00_1936);
																				}
																				BgL_arg2888z00_1932 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2890z00_1933,
																					BgL_list2892z00_1935);
																			}
																		}
																		BgL_arg2882z00_1926 =
																			MAKE_PAIR(BgL_arg2887z00_1931,
																			BgL_arg2888z00_1932);
																	}
																	{	/* Eval/evobject.scm 421 */
																		obj_t BgL_arg2898z00_1940;

																		obj_t BgL_arg2899z00_1941;

																		{	/* Eval/evobject.scm 421 */
																			obj_t BgL_list2117z00_6460;

																			{	/* Eval/evobject.scm 421 */
																				obj_t BgL_arg2118z00_6461;

																				{	/* Eval/evobject.scm 421 */
																					obj_t BgL_arg2119z00_6462;

																					obj_t BgL_arg2121z00_6463;

																					BgL_arg2119z00_6462 =
																						BGl_symbol5822z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 421 */
																						obj_t BgL_arg2123z00_6464;

																						BgL_arg2123z00_6464 =
																							MAKE_PAIR
																							(BGl_symbol5824z00zz__evobjectz00,
																							BNIL);
																						BgL_arg2121z00_6463 =
																							MAKE_PAIR(BgL_idz00_1923,
																							BgL_arg2123z00_6464);
																					}
																					BgL_arg2118z00_6461 =
																						MAKE_PAIR(BgL_arg2119z00_6462,
																						BgL_arg2121z00_6463);
																				}
																				BgL_list2117z00_6460 =
																					MAKE_PAIR(BgL_cidz00_8019,
																					BgL_arg2118z00_6461);
																			}
																			BgL_arg2898z00_1940 =
																				BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																				(BgL_list2117z00_6460);
																		}
																		{	/* Eval/evobject.scm 422 */
																			obj_t BgL_arg2900z00_1942;

																			{	/* Eval/evobject.scm 422 */
																				obj_t BgL_list2904z00_1946;

																				{	/* Eval/evobject.scm 422 */
																					obj_t BgL_arg2905z00_1947;

																					obj_t BgL_arg2906z00_1948;

																					BgL_arg2905z00_1947 =
																						BGl_symbol5862z00zz__evobjectz00;
																					BgL_arg2906z00_1948 =
																						MAKE_PAIR(BgL_idz00_1923, BNIL);
																					BgL_list2904z00_1946 =
																						MAKE_PAIR(BgL_arg2905z00_1947,
																						BgL_arg2906z00_1948);
																				}
																				BgL_arg2900z00_1942 =
																					BgL_list2904z00_1946;
																			}
																			{	/* Eval/evobject.scm 421 */
																				obj_t BgL_list2902z00_1944;

																				{	/* Eval/evobject.scm 421 */
																					obj_t BgL_arg2903z00_1945;

																					BgL_arg2903z00_1945 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2902z00_1944 =
																						MAKE_PAIR(BgL_arg2900z00_1942,
																						BgL_arg2903z00_1945);
																				}
																				BgL_arg2899z00_1941 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_newz00_8017,
																					BgL_list2902z00_1944);
																			}
																		}
																		BgL_arg2883z00_1927 =
																			MAKE_PAIR(BgL_arg2898z00_1940,
																			BgL_arg2899z00_1941);
																	}
																	{	/* Eval/evobject.scm 420 */
																		obj_t BgL_list2885z00_1929;

																		{	/* Eval/evobject.scm 420 */
																			obj_t BgL_arg2886z00_1930;

																			BgL_arg2886z00_1930 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2885z00_1929 =
																				MAKE_PAIR(BgL_arg2883z00_1927,
																				BgL_arg2886z00_1930);
																		}
																		BgL_arg2881z00_1925 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2882z00_1926,
																			BgL_list2885z00_1929);
																	}
																}
																BgL_arg2878z00_1921 =
																	MAKE_PAIR(BgL_arg2880z00_1924,
																	BgL_arg2881z00_1925);
															}
														}
														BgL_newtail1934z00_1919 =
															MAKE_PAIR(BgL_arg2878z00_1921, BNIL);
													}
													SET_CDR(BgL_tail1933z00_1916,
														BgL_newtail1934z00_1919);
													{
														obj_t BgL_tail1933z00_9307;

														obj_t BgL_l1930z00_9305;

														BgL_l1930z00_9305 = CDR(BgL_l1930z00_1915);
														BgL_tail1933z00_9307 = BgL_newtail1934z00_1919;
														BgL_tail1933z00_1916 = BgL_tail1933z00_9307;
														BgL_l1930z00_1915 = BgL_l1930z00_9305;
														goto BgL_zc3anonymousza32875ze3z83_1917;
													}
												}
										}
									}
									BgL_arg2873z00_1910 = MAKE_PAIR(BgL_newz00_8017, BNIL);
									BgL_arg2849z00_1881 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2872z00_1909, BgL_arg2873z00_1910);
								}
								{	/* Eval/evobject.scm 417 */
									obj_t BgL_list2850z00_1882;

									BgL_list2850z00_1882 = MAKE_PAIR(BgL_arg2849z00_1881, BNIL);
									BgL_arg2847z00_1879 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2848z00_1880, BgL_list2850z00_1882);
								}
							}
							BgL_arg2829z00_1854 =
								MAKE_PAIR(BgL_arg2846z00_1878, BgL_arg2847z00_1879);
						}
					{	/* Eval/evobject.scm 413 */
						obj_t BgL_list2830z00_1855;

						{	/* Eval/evobject.scm 413 */
							obj_t BgL_arg2831z00_1856;

							BgL_arg2831z00_1856 = MAKE_PAIR(BgL_arg2829z00_1854, BNIL);
							BgL_list2830z00_1855 =
								MAKE_PAIR(BgL_arg2828z00_1853, BgL_arg2831z00_1856);
						}
						return BgL_list2830z00_1855;
					}
				}
			else
				{	/* Eval/evobject.scm 425 */
					obj_t BgL_sz00_1950;

					BgL_sz00_1950 = CAR(BgL_fieldsz00_1848);
					{	/* Eval/evobject.scm 425 */
						obj_t BgL_idz00_1951;

						BgL_idz00_1951 =
							BGl_classzd2fieldzd2namez00zz__objectz00(BgL_sz00_1950);
						{	/* Eval/evobject.scm 426 */

							if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_sz00_1950))
								{	/* Eval/evobject.scm 429 */
									if (BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00
										(BgL_sz00_1950))
										{	/* Eval/evobject.scm 438 */
											obj_t BgL_arg2909z00_1954;

											obj_t BgL_arg2910z00_1955;

											BgL_arg2909z00_1954 = BGl_symbol5789z00zz__evobjectz00;
											{	/* Eval/evobject.scm 438 */
												obj_t BgL_arg2911z00_1956;

												obj_t BgL_arg2912z00_1957;

												{	/* Eval/evobject.scm 438 */
													obj_t BgL_arg2916z00_1961;

													{	/* Eval/evobject.scm 438 */
														obj_t BgL_arg2918z00_1963;

														{	/* Eval/evobject.scm 438 */
															obj_t BgL_arg2919z00_1964;

															{	/* Eval/evobject.scm 438 */
																obj_t BgL_arg2922z00_1967;

																obj_t BgL_arg2923z00_1968;

																BgL_arg2922z00_1967 =
																	BGl_symbol5789z00zz__evobjectz00;
																{	/* Eval/evobject.scm 438 */
																	obj_t BgL_arg2924z00_1969;

																	obj_t BgL_arg2925z00_1970;

																	{	/* Eval/evobject.scm 438 */
																		obj_t BgL_arg2929z00_1974;

																		{	/* Eval/evobject.scm 438 */
																			obj_t BgL_arg2931z00_1976;

																			obj_t BgL_arg2932z00_1977;

																			BgL_arg2931z00_1976 =
																				BGl_symbol5868z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 438 */
																				obj_t BgL_arg2933z00_1978;

																				{	/* Eval/evobject.scm 438 */
																					obj_t BgL_arg2936z00_1981;

																					obj_t BgL_arg2937z00_1982;

																					BgL_arg2936z00_1981 =
																						BGl_symbol5870z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 438 */
																						obj_t BgL_arg2938z00_1983;

																						{	/* Eval/evobject.scm 438 */
																							obj_t BgL_arg2943z00_1987;

																							obj_t BgL_arg2944z00_1988;

																							BgL_arg2943z00_1987 =
																								BGl_symbol5842z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 438 */
																								obj_t BgL_list2945z00_1989;

																								BgL_list2945z00_1989 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2944z00_1988 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_idz00_1951,
																									BgL_list2945z00_1989);
																							}
																							BgL_arg2938z00_1983 =
																								MAKE_PAIR(BgL_arg2943z00_1987,
																								BgL_arg2944z00_1988);
																						}
																						{	/* Eval/evobject.scm 438 */
																							obj_t BgL_list2940z00_1985;

																							{	/* Eval/evobject.scm 438 */
																								obj_t BgL_arg2942z00_1986;

																								BgL_arg2942z00_1986 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2940z00_1985 =
																									MAKE_PAIR(BgL_argsz00_8013,
																									BgL_arg2942z00_1986);
																							}
																							BgL_arg2937z00_1982 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2938z00_1983,
																								BgL_list2940z00_1985);
																						}
																					}
																					BgL_arg2933z00_1978 =
																						MAKE_PAIR(BgL_arg2936z00_1981,
																						BgL_arg2937z00_1982);
																				}
																				{	/* Eval/evobject.scm 438 */
																					obj_t BgL_list2935z00_1980;

																					BgL_list2935z00_1980 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2932z00_1977 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2933z00_1978,
																						BgL_list2935z00_1980);
																				}
																			}
																			BgL_arg2929z00_1974 =
																				MAKE_PAIR(BgL_arg2931z00_1976,
																				BgL_arg2932z00_1977);
																		}
																		BgL_arg2924z00_1969 =
																			MAKE_PAIR(BgL_arg2929z00_1974, BNIL);
																	}
																	{	/* Eval/evobject.scm 439 */
																		obj_t BgL_arg2946z00_1990;

																		obj_t BgL_arg2947z00_1991;

																		BgL_arg2946z00_1990 =
																			BGl_symbol5838z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 439 */
																			obj_t BgL_arg2948z00_1992;

																			obj_t BgL_arg2949z00_1993;

																			obj_t BgL_arg2950z00_1994;

																			{	/* Eval/evobject.scm 439 */
																				obj_t BgL_arg2955z00_1999;

																				obj_t BgL_arg2956z00_2000;

																				BgL_arg2955z00_1999 =
																					BGl_symbol5872z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 439 */
																					obj_t BgL_list2957z00_2001;

																					BgL_list2957z00_2001 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2956z00_2000 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5868z00zz__evobjectz00,
																						BgL_list2957z00_2001);
																				}
																				BgL_arg2948z00_1992 =
																					MAKE_PAIR(BgL_arg2955z00_1999,
																					BgL_arg2956z00_2000);
																			}
																			{	/* Eval/evobject.scm 440 */
																				obj_t BgL_arg2958z00_2002;

																				obj_t BgL_arg2959z00_2003;

																				BgL_arg2958z00_2002 =
																					BGl_symbol5874z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 440 */
																					obj_t BgL_list2960z00_2004;

																					BgL_list2960z00_2004 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2959z00_2003 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5868z00zz__evobjectz00,
																						BgL_list2960z00_2004);
																				}
																				BgL_arg2949z00_1993 =
																					MAKE_PAIR(BgL_arg2958z00_2002,
																					BgL_arg2959z00_2003);
																			}
																			{	/* Eval/evobject.scm 441 */
																				obj_t BgL_dz00_2005;

																				BgL_dz00_2005 =
																					BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																					(BgL_sz00_1950);
																				if ((BgL_dz00_2005 ==
																						BgL_nodefz00_8016))
																					{	/* Eval/evobject.scm 445 */
																						obj_t BgL_arg2962z00_2007;

																						obj_t BgL_arg2963z00_2008;

																						BgL_arg2962z00_2007 =
																							BGl_symbol5842z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 445 */
																							obj_t BgL_list2964z00_2009;

																							BgL_list2964z00_2009 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2963z00_2008 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_newz00_8017,
																								BgL_list2964z00_2009);
																						}
																						BgL_arg2950z00_1994 =
																							MAKE_PAIR(BgL_arg2962z00_2007,
																							BgL_arg2963z00_2008);
																					}
																				else
																					{	/* Eval/evobject.scm 446 */
																						obj_t BgL_list2965z00_2010;

																						{	/* Eval/evobject.scm 446 */
																							obj_t BgL_arg2966z00_2011;

																							obj_t BgL_arg2967z00_2012;

																							BgL_arg2966z00_2011 =
																								BGl_symbol5842z00zz__evobjectz00;
																							BgL_arg2967z00_2012 =
																								MAKE_PAIR(BgL_dz00_2005, BNIL);
																							BgL_list2965z00_2010 =
																								MAKE_PAIR(BgL_arg2966z00_2011,
																								BgL_arg2967z00_2012);
																						}
																						BgL_arg2950z00_1994 =
																							BgL_list2965z00_2010;
																					}
																			}
																			{	/* Eval/evobject.scm 439 */
																				obj_t BgL_list2952z00_1996;

																				{	/* Eval/evobject.scm 439 */
																					obj_t BgL_arg2953z00_1997;

																					{	/* Eval/evobject.scm 439 */
																						obj_t BgL_arg2954z00_1998;

																						BgL_arg2954z00_1998 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2953z00_1997 =
																							MAKE_PAIR(BgL_arg2950z00_1994,
																							BgL_arg2954z00_1998);
																					}
																					BgL_list2952z00_1996 =
																						MAKE_PAIR(BgL_arg2949z00_1993,
																						BgL_arg2953z00_1997);
																				}
																				BgL_arg2947z00_1991 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2948z00_1992,
																					BgL_list2952z00_1996);
																			}
																		}
																		BgL_arg2925z00_1970 =
																			MAKE_PAIR(BgL_arg2946z00_1990,
																			BgL_arg2947z00_1991);
																	}
																	{	/* Eval/evobject.scm 438 */
																		obj_t BgL_list2927z00_1972;

																		{	/* Eval/evobject.scm 438 */
																			obj_t BgL_arg2928z00_1973;

																			BgL_arg2928z00_1973 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2927z00_1972 =
																				MAKE_PAIR(BgL_arg2925z00_1970,
																				BgL_arg2928z00_1973);
																		}
																		BgL_arg2923z00_1968 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2924z00_1969,
																			BgL_list2927z00_1972);
																	}
																}
																BgL_arg2919z00_1964 =
																	MAKE_PAIR(BgL_arg2922z00_1967,
																	BgL_arg2923z00_1968);
															}
															{	/* Eval/evobject.scm 438 */
																obj_t BgL_list2921z00_1966;

																BgL_list2921z00_1966 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2918z00_1963 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2919z00_1964, BgL_list2921z00_1966);
															}
														}
														BgL_arg2916z00_1961 =
															MAKE_PAIR(BgL_idz00_1951, BgL_arg2918z00_1963);
													}
													BgL_arg2911z00_1956 =
														MAKE_PAIR(BgL_arg2916z00_1961, BNIL);
												}
												{	/* Eval/evobject.scm 447 */
													obj_t BgL_arg2968z00_2013;

													obj_t BgL_arg2969z00_2014;

													BgL_arg2968z00_2013 = CDR(BgL_fieldsz00_1848);
													BgL_arg2969z00_2014 =
														MAKE_PAIR(BgL_idz00_1951, BgL_virtualsz00_1850);
													BgL_arg2912z00_1957 =
														BGl_loopz72z72z72z72zz__evobjectz00(BgL_cidz00_8019,
														BgL_mkz00_8018, BgL_newz00_8017, BgL_nodefz00_8016,
														BgL_sourcez00_8015, BgL_insz00_8014,
														BgL_argsz00_8013, BgL_arg2968z00_2013,
														BgL_valsz00_1849, BgL_arg2969z00_2014);
												}
												{	/* Eval/evobject.scm 438 */
													obj_t BgL_list2914z00_1959;

													{	/* Eval/evobject.scm 438 */
														obj_t BgL_arg2915z00_1960;

														BgL_arg2915z00_1960 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2914z00_1959 =
															MAKE_PAIR(BgL_arg2912z00_1957,
															BgL_arg2915z00_1960);
													}
													BgL_arg2910z00_1955 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2911z00_1956, BgL_list2914z00_1959);
												}
											}
											return
												MAKE_PAIR(BgL_arg2909z00_1954, BgL_arg2910z00_1955);
										}
									else
										{	/* Eval/evobject.scm 431 */
											obj_t BgL_arg2970z00_2015;

											obj_t BgL_arg2971z00_2016;

											BgL_arg2970z00_2015 = BGl_symbol5838z00zz__evobjectz00;
											{	/* Eval/evobject.scm 431 */
												obj_t BgL_arg2972z00_2017;

												obj_t BgL_arg2973z00_2018;

												obj_t BgL_arg2974z00_2019;

												{	/* Eval/evobject.scm 431 */
													obj_t BgL_arg2979z00_2024;

													obj_t BgL_arg2980z00_2025;

													BgL_arg2979z00_2024 =
														BGl_symbol5872z00zz__evobjectz00;
													{	/* Eval/evobject.scm 431 */
														obj_t BgL_arg2981z00_2026;

														{	/* Eval/evobject.scm 431 */
															obj_t BgL_arg2984z00_2029;

															obj_t BgL_arg2985z00_2030;

															BgL_arg2984z00_2029 =
																BGl_symbol5870z00zz__evobjectz00;
															{	/* Eval/evobject.scm 431 */
																obj_t BgL_arg2986z00_2031;

																{	/* Eval/evobject.scm 431 */
																	obj_t BgL_arg2990z00_2035;

																	obj_t BgL_arg2991z00_2036;

																	BgL_arg2990z00_2035 =
																		BGl_symbol5842z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 431 */
																		obj_t BgL_list2992z00_2037;

																		BgL_list2992z00_2037 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2991z00_2036 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_idz00_1951, BgL_list2992z00_2037);
																	}
																	BgL_arg2986z00_2031 =
																		MAKE_PAIR(BgL_arg2990z00_2035,
																		BgL_arg2991z00_2036);
																}
																{	/* Eval/evobject.scm 431 */
																	obj_t BgL_list2988z00_2033;

																	{	/* Eval/evobject.scm 431 */
																		obj_t BgL_arg2989z00_2034;

																		BgL_arg2989z00_2034 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2988z00_2033 =
																			MAKE_PAIR(BgL_argsz00_8013,
																			BgL_arg2989z00_2034);
																	}
																	BgL_arg2985z00_2030 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2986z00_2031, BgL_list2988z00_2033);
																}
															}
															BgL_arg2981z00_2026 =
																MAKE_PAIR(BgL_arg2984z00_2029,
																BgL_arg2985z00_2030);
														}
														{	/* Eval/evobject.scm 431 */
															obj_t BgL_list2983z00_2028;

															BgL_list2983z00_2028 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2980z00_2025 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2981z00_2026, BgL_list2983z00_2028);
														}
													}
													BgL_arg2972z00_2017 =
														MAKE_PAIR(BgL_arg2979z00_2024, BgL_arg2980z00_2025);
												}
												{	/* Eval/evobject.scm 432 */
													obj_t BgL_arg2993z00_2038;

													obj_t BgL_arg2994z00_2039;

													BgL_arg2993z00_2038 =
														BGl_symbol5876z00zz__evobjectz00;
													{	/* Eval/evobject.scm 433 */
														obj_t BgL_arg2995z00_2040;

														obj_t BgL_arg2997z00_2042;

														{	/* Eval/evobject.scm 433 */
															obj_t BgL_arg3003z00_2048;

															obj_t BgL_arg3004z00_2049;

															BgL_arg3003z00_2048 =
																BGl_symbol5842z00zz__evobjectz00;
															{	/* Eval/evobject.scm 433 */
																obj_t BgL_list3005z00_2050;

																BgL_list3005z00_2050 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3004z00_2049 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_insz00_8014, BgL_list3005z00_2050);
															}
															BgL_arg2995z00_2040 =
																MAKE_PAIR(BgL_arg3003z00_2048,
																BgL_arg3004z00_2049);
														}
														{	/* Eval/evobject.scm 435 */
															obj_t BgL_arg3006z00_2051;

															obj_t BgL_arg3007z00_2052;

															BgL_arg3006z00_2051 =
																BGl_symbol5842z00zz__evobjectz00;
															{	/* Eval/evobject.scm 435 */
																obj_t BgL_list3008z00_2053;

																BgL_list3008z00_2053 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3007z00_2052 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_idz00_1951, BgL_list3008z00_2053);
															}
															BgL_arg2997z00_2042 =
																MAKE_PAIR(BgL_arg3006z00_2051,
																BgL_arg3007z00_2052);
														}
														{	/* Eval/evobject.scm 432 */
															obj_t BgL_list2999z00_2044;

															{	/* Eval/evobject.scm 432 */
																obj_t BgL_arg3000z00_2045;

																{	/* Eval/evobject.scm 432 */
																	obj_t BgL_arg3001z00_2046;

																	{	/* Eval/evobject.scm 432 */
																		obj_t BgL_arg3002z00_2047;

																		BgL_arg3002z00_2047 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3001z00_2046 =
																			MAKE_PAIR(BgL_sourcez00_8015,
																			BgL_arg3002z00_2047);
																	}
																	BgL_arg3000z00_2045 =
																		MAKE_PAIR(BgL_arg2997z00_2042,
																		BgL_arg3001z00_2046);
																}
																BgL_list2999z00_2044 =
																	MAKE_PAIR(BGl_string5878z00zz__evobjectz00,
																	BgL_arg3000z00_2045);
															}
															BgL_arg2994z00_2039 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2995z00_2040, BgL_list2999z00_2044);
														}
													}
													BgL_arg2973z00_2018 =
														MAKE_PAIR(BgL_arg2993z00_2038, BgL_arg2994z00_2039);
												}
												BgL_arg2974z00_2019 =
													BGl_loopz72z72z72z72zz__evobjectz00(BgL_cidz00_8019,
													BgL_mkz00_8018, BgL_newz00_8017, BgL_nodefz00_8016,
													BgL_sourcez00_8015, BgL_insz00_8014, BgL_argsz00_8013,
													CDR(BgL_fieldsz00_1848), BgL_valsz00_1849,
													BgL_virtualsz00_1850);
												{	/* Eval/evobject.scm 431 */
													obj_t BgL_list2976z00_2021;

													{	/* Eval/evobject.scm 431 */
														obj_t BgL_arg2977z00_2022;

														{	/* Eval/evobject.scm 431 */
															obj_t BgL_arg2978z00_2023;

															BgL_arg2978z00_2023 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2977z00_2022 =
																MAKE_PAIR(BgL_arg2974z00_2019,
																BgL_arg2978z00_2023);
														}
														BgL_list2976z00_2021 =
															MAKE_PAIR(BgL_arg2973z00_2018,
															BgL_arg2977z00_2022);
													}
													BgL_arg2971z00_2016 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2972z00_2017, BgL_list2976z00_2021);
												}
											}
											return
												MAKE_PAIR(BgL_arg2970z00_2015, BgL_arg2971z00_2016);
										}
								}
							else
								{	/* Eval/evobject.scm 450 */
									obj_t BgL_arg3010z00_2055;

									obj_t BgL_arg3011z00_2056;

									BgL_arg3010z00_2055 = BGl_symbol5789z00zz__evobjectz00;
									{	/* Eval/evobject.scm 450 */
										obj_t BgL_arg3012z00_2057;

										obj_t BgL_arg3013z00_2058;

										{	/* Eval/evobject.scm 450 */
											obj_t BgL_arg3017z00_2062;

											{	/* Eval/evobject.scm 450 */
												obj_t BgL_arg3019z00_2064;

												{	/* Eval/evobject.scm 450 */
													obj_t BgL_arg3020z00_2065;

													{	/* Eval/evobject.scm 450 */
														obj_t BgL_arg3023z00_2068;

														obj_t BgL_arg3024z00_2069;

														BgL_arg3023z00_2068 =
															BGl_symbol5789z00zz__evobjectz00;
														{	/* Eval/evobject.scm 450 */
															obj_t BgL_arg3025z00_2070;

															obj_t BgL_arg3026z00_2071;

															{	/* Eval/evobject.scm 450 */
																obj_t BgL_arg3030z00_2075;

																{	/* Eval/evobject.scm 450 */
																	obj_t BgL_arg3032z00_2077;

																	obj_t BgL_arg3033z00_2078;

																	BgL_arg3032z00_2077 =
																		BGl_symbol5868z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 450 */
																		obj_t BgL_arg3034z00_2079;

																		{	/* Eval/evobject.scm 450 */
																			obj_t BgL_arg3037z00_2082;

																			obj_t BgL_arg3038z00_2083;

																			BgL_arg3037z00_2082 =
																				BGl_symbol5870z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 450 */
																				obj_t BgL_arg3039z00_2084;

																				{	/* Eval/evobject.scm 450 */
																					obj_t BgL_arg3043z00_2088;

																					obj_t BgL_arg3044z00_2089;

																					BgL_arg3043z00_2088 =
																						BGl_symbol5842z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 450 */
																						obj_t BgL_list3045z00_2090;

																						BgL_list3045z00_2090 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3044z00_2089 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_idz00_1951,
																							BgL_list3045z00_2090);
																					}
																					BgL_arg3039z00_2084 =
																						MAKE_PAIR(BgL_arg3043z00_2088,
																						BgL_arg3044z00_2089);
																				}
																				{	/* Eval/evobject.scm 450 */
																					obj_t BgL_list3041z00_2086;

																					{	/* Eval/evobject.scm 450 */
																						obj_t BgL_arg3042z00_2087;

																						BgL_arg3042z00_2087 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3041z00_2086 =
																							MAKE_PAIR(BgL_argsz00_8013,
																							BgL_arg3042z00_2087);
																					}
																					BgL_arg3038z00_2083 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3039z00_2084,
																						BgL_list3041z00_2086);
																				}
																			}
																			BgL_arg3034z00_2079 =
																				MAKE_PAIR(BgL_arg3037z00_2082,
																				BgL_arg3038z00_2083);
																		}
																		{	/* Eval/evobject.scm 450 */
																			obj_t BgL_list3036z00_2081;

																			BgL_list3036z00_2081 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3033z00_2078 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3034z00_2079,
																				BgL_list3036z00_2081);
																		}
																	}
																	BgL_arg3030z00_2075 =
																		MAKE_PAIR(BgL_arg3032z00_2077,
																		BgL_arg3033z00_2078);
																}
																BgL_arg3025z00_2070 =
																	MAKE_PAIR(BgL_arg3030z00_2075, BNIL);
															}
															{	/* Eval/evobject.scm 451 */
																obj_t BgL_arg3046z00_2091;

																obj_t BgL_arg3047z00_2092;

																BgL_arg3046z00_2091 =
																	BGl_symbol5838z00zz__evobjectz00;
																{	/* Eval/evobject.scm 451 */
																	obj_t BgL_arg3048z00_2093;

																	obj_t BgL_arg3049z00_2094;

																	obj_t BgL_arg3050z00_2095;

																	{	/* Eval/evobject.scm 451 */
																		obj_t BgL_arg3055z00_2100;

																		obj_t BgL_arg3056z00_2101;

																		BgL_arg3055z00_2100 =
																			BGl_symbol5872z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 451 */
																			obj_t BgL_list3057z00_2102;

																			BgL_list3057z00_2102 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3056z00_2101 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5868z00zz__evobjectz00,
																				BgL_list3057z00_2102);
																		}
																		BgL_arg3048z00_2093 =
																			MAKE_PAIR(BgL_arg3055z00_2100,
																			BgL_arg3056z00_2101);
																	}
																	{	/* Eval/evobject.scm 452 */
																		obj_t BgL_arg3058z00_2103;

																		obj_t BgL_arg3059z00_2104;

																		BgL_arg3058z00_2103 =
																			BGl_symbol5874z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 452 */
																			obj_t BgL_list3060z00_2105;

																			BgL_list3060z00_2105 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3059z00_2104 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5868z00zz__evobjectz00,
																				BgL_list3060z00_2105);
																		}
																		BgL_arg3049z00_2094 =
																			MAKE_PAIR(BgL_arg3058z00_2103,
																			BgL_arg3059z00_2104);
																	}
																	{	/* Eval/evobject.scm 453 */
																		obj_t BgL_dz00_2106;

																		BgL_dz00_2106 =
																			BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																			(BgL_sz00_1950);
																		if ((BgL_dz00_2106 == BgL_nodefz00_8016))
																			{	/* Eval/evobject.scm 455 */
																				obj_t BgL_arg3063z00_2108;

																				obj_t BgL_arg3064z00_2109;

																				BgL_arg3063z00_2108 =
																					BGl_symbol5876z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 455 */
																					obj_t BgL_arg3065z00_2110;

																					obj_t BgL_arg3067z00_2112;

																					{	/* Eval/evobject.scm 455 */
																						obj_t BgL_arg3073z00_2118;

																						obj_t BgL_arg3074z00_2119;

																						BgL_arg3073z00_2118 =
																							BGl_symbol5842z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 455 */
																							obj_t BgL_list3075z00_2120;

																							BgL_list3075z00_2120 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3074z00_2119 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_insz00_8014,
																								BgL_list3075z00_2120);
																						}
																						BgL_arg3065z00_2110 =
																							MAKE_PAIR(BgL_arg3073z00_2118,
																							BgL_arg3074z00_2119);
																					}
																					{	/* Eval/evobject.scm 457 */
																						obj_t BgL_arg3076z00_2121;

																						obj_t BgL_arg3077z00_2122;

																						BgL_arg3076z00_2121 =
																							BGl_symbol5842z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 457 */
																							obj_t BgL_list3078z00_2123;

																							BgL_list3078z00_2123 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3077z00_2122 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_1951,
																								BgL_list3078z00_2123);
																						}
																						BgL_arg3067z00_2112 =
																							MAKE_PAIR(BgL_arg3076z00_2121,
																							BgL_arg3077z00_2122);
																					}
																					{	/* Eval/evobject.scm 455 */
																						obj_t BgL_list3069z00_2114;

																						{	/* Eval/evobject.scm 455 */
																							obj_t BgL_arg3070z00_2115;

																							{	/* Eval/evobject.scm 455 */
																								obj_t BgL_arg3071z00_2116;

																								{	/* Eval/evobject.scm 455 */
																									obj_t BgL_arg3072z00_2117;

																									BgL_arg3072z00_2117 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3071z00_2116 =
																										MAKE_PAIR
																										(BgL_sourcez00_8015,
																										BgL_arg3072z00_2117);
																								}
																								BgL_arg3070z00_2115 =
																									MAKE_PAIR(BgL_arg3067z00_2112,
																									BgL_arg3071z00_2116);
																							}
																							BgL_list3069z00_2114 =
																								MAKE_PAIR
																								(BGl_string5879z00zz__evobjectz00,
																								BgL_arg3070z00_2115);
																						}
																						BgL_arg3064z00_2109 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3065z00_2110,
																							BgL_list3069z00_2114);
																					}
																				}
																				BgL_arg3050z00_2095 =
																					MAKE_PAIR(BgL_arg3063z00_2108,
																					BgL_arg3064z00_2109);
																			}
																		else
																			{	/* Eval/evobject.scm 459 */
																				obj_t BgL_list3079z00_2124;

																				{	/* Eval/evobject.scm 459 */
																					obj_t BgL_arg3081z00_2125;

																					obj_t BgL_arg3082z00_2126;

																					BgL_arg3081z00_2125 =
																						BGl_symbol5842z00zz__evobjectz00;
																					BgL_arg3082z00_2126 =
																						MAKE_PAIR(BgL_dz00_2106, BNIL);
																					BgL_list3079z00_2124 =
																						MAKE_PAIR(BgL_arg3081z00_2125,
																						BgL_arg3082z00_2126);
																				}
																				BgL_arg3050z00_2095 =
																					BgL_list3079z00_2124;
																			}
																	}
																	{	/* Eval/evobject.scm 451 */
																		obj_t BgL_list3052z00_2097;

																		{	/* Eval/evobject.scm 451 */
																			obj_t BgL_arg3053z00_2098;

																			{	/* Eval/evobject.scm 451 */
																				obj_t BgL_arg3054z00_2099;

																				BgL_arg3054z00_2099 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3053z00_2098 =
																					MAKE_PAIR(BgL_arg3050z00_2095,
																					BgL_arg3054z00_2099);
																			}
																			BgL_list3052z00_2097 =
																				MAKE_PAIR(BgL_arg3049z00_2094,
																				BgL_arg3053z00_2098);
																		}
																		BgL_arg3047z00_2092 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3048z00_2093,
																			BgL_list3052z00_2097);
																	}
																}
																BgL_arg3026z00_2071 =
																	MAKE_PAIR(BgL_arg3046z00_2091,
																	BgL_arg3047z00_2092);
															}
															{	/* Eval/evobject.scm 450 */
																obj_t BgL_list3028z00_2073;

																{	/* Eval/evobject.scm 450 */
																	obj_t BgL_arg3029z00_2074;

																	BgL_arg3029z00_2074 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3028z00_2073 =
																		MAKE_PAIR(BgL_arg3026z00_2071,
																		BgL_arg3029z00_2074);
																}
																BgL_arg3024z00_2069 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3025z00_2070, BgL_list3028z00_2073);
															}
														}
														BgL_arg3020z00_2065 =
															MAKE_PAIR(BgL_arg3023z00_2068,
															BgL_arg3024z00_2069);
													}
													{	/* Eval/evobject.scm 450 */
														obj_t BgL_list3022z00_2067;

														BgL_list3022z00_2067 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3019z00_2064 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3020z00_2065, BgL_list3022z00_2067);
													}
												}
												BgL_arg3017z00_2062 =
													MAKE_PAIR(BgL_idz00_1951, BgL_arg3019z00_2064);
											}
											BgL_arg3012z00_2057 =
												MAKE_PAIR(BgL_arg3017z00_2062, BNIL);
										}
										{	/* Eval/evobject.scm 460 */
											obj_t BgL_arg3083z00_2127;

											obj_t BgL_arg3084z00_2128;

											BgL_arg3083z00_2127 = CDR(BgL_fieldsz00_1848);
											BgL_arg3084z00_2128 =
												MAKE_PAIR(BgL_idz00_1951, BgL_valsz00_1849);
											BgL_arg3013z00_2058 =
												BGl_loopz72z72z72z72zz__evobjectz00(BgL_cidz00_8019,
												BgL_mkz00_8018, BgL_newz00_8017, BgL_nodefz00_8016,
												BgL_sourcez00_8015, BgL_insz00_8014, BgL_argsz00_8013,
												BgL_arg3083z00_2127, BgL_arg3084z00_2128,
												BgL_virtualsz00_1850);
										}
										{	/* Eval/evobject.scm 450 */
											obj_t BgL_list3015z00_2060;

											{	/* Eval/evobject.scm 450 */
												obj_t BgL_arg3016z00_2061;

												BgL_arg3016z00_2061 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3015z00_2060 =
													MAKE_PAIR(BgL_arg3013z00_2058, BgL_arg3016z00_2061);
											}
											BgL_arg3011z00_2056 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3012z00_2057, BgL_list3015z00_2060);
										}
									}
									return MAKE_PAIR(BgL_arg3010z00_2055, BgL_arg3011z00_2056);
								}
						}
					}
				}
		}
	}



/* eval-instantiate-check */
	obj_t BGl_evalzd2instantiatezd2checkz00zz__evobjectz00(obj_t BgL_idz00_104,
		obj_t BgL_argsz00_105, obj_t BgL_allzd2fieldszd2_106, obj_t BgL_bodyz00_107)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 465 */
			{	/* Eval/evobject.scm 466 */
				obj_t BgL_arg3090z00_2137;

				obj_t BgL_arg3091z00_2138;

				BgL_arg3090z00_2137 = BGl_symbol5789z00zz__evobjectz00;
				{	/* Eval/evobject.scm 466 */
					obj_t BgL_arg3092z00_2139;

					obj_t BgL_arg3093z00_2140;

					{	/* Eval/evobject.scm 466 */
						obj_t BgL_arg3097z00_2144;

						{	/* Eval/evobject.scm 466 */
							obj_t BgL_arg3099z00_2146;

							obj_t BgL_arg3100z00_2147;

							BgL_arg3099z00_2146 = BGl_symbol5880z00zz__evobjectz00;
							{	/* Eval/evobject.scm 466 */
								obj_t BgL_arg3101z00_2148;

								{	/* Eval/evobject.scm 466 */
									obj_t BgL_arg3104z00_2151;

									obj_t BgL_arg3105z00_2152;

									BgL_arg3104z00_2151 = BGl_symbol5882z00zz__evobjectz00;
									{	/* Eval/evobject.scm 466 */
										obj_t BgL_arg3106z00_2153;

										{	/* Eval/evobject.scm 466 */
											obj_t BgL_arg3110z00_2157;

											obj_t BgL_arg3111z00_2158;

											BgL_arg3110z00_2157 = BGl_symbol5884z00zz__evobjectz00;
											{	/* Eval/evobject.scm 466 */
												obj_t BgL_arg3112z00_2159;

												obj_t BgL_arg3113z00_2160;

												BgL_arg3112z00_2159 =
													MAKE_PAIR(BGl_symbol5886z00zz__evobjectz00, BNIL);
												{	/* Eval/evobject.scm 467 */
													obj_t BgL_arg3117z00_2164;

													obj_t BgL_arg3118z00_2165;

													BgL_arg3117z00_2164 =
														BGl_symbol5888z00zz__evobjectz00;
													{	/* Eval/evobject.scm 467 */
														obj_t BgL_arg3119z00_2166;

														obj_t BgL_arg3120z00_2167;

														obj_t BgL_arg3121z00_2168;

														{	/* Eval/evobject.scm 467 */
															obj_t BgL_arg3126z00_2173;

															obj_t BgL_arg3127z00_2174;

															BgL_arg3126z00_2173 =
																BGl_symbol5890z00zz__evobjectz00;
															{	/* Eval/evobject.scm 467 */
																obj_t BgL_arg3128z00_2175;

																{	/* Eval/evobject.scm 467 */
																	obj_t BgL_arg3131z00_2178;

																	obj_t BgL_arg3132z00_2179;

																	BgL_arg3131z00_2178 =
																		BGl_symbol5872z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 467 */
																		obj_t BgL_list3133z00_2180;

																		BgL_list3133z00_2180 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3132z00_2179 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5886z00zz__evobjectz00,
																			BgL_list3133z00_2180);
																	}
																	BgL_arg3128z00_2175 =
																		MAKE_PAIR(BgL_arg3131z00_2178,
																		BgL_arg3132z00_2179);
																}
																{	/* Eval/evobject.scm 467 */
																	obj_t BgL_list3130z00_2177;

																	BgL_list3130z00_2177 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3127z00_2174 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3128z00_2175, BgL_list3130z00_2177);
																}
															}
															BgL_arg3119z00_2166 =
																MAKE_PAIR(BgL_arg3126z00_2173,
																BgL_arg3127z00_2174);
														}
														{	/* Eval/evobject.scm 468 */
															obj_t BgL_arg3134z00_2181;

															obj_t BgL_arg3135z00_2182;

															BgL_arg3134z00_2181 =
																BGl_symbol5890z00zz__evobjectz00;
															{	/* Eval/evobject.scm 468 */
																obj_t BgL_arg3136z00_2183;

																{	/* Eval/evobject.scm 468 */
																	obj_t BgL_arg3139z00_2186;

																	obj_t BgL_arg3140z00_2187;

																	BgL_arg3139z00_2186 =
																		BGl_symbol5892z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 468 */
																		obj_t BgL_arg3141z00_2188;

																		{	/* Eval/evobject.scm 468 */
																			obj_t BgL_arg3144z00_2191;

																			obj_t BgL_arg3145z00_2192;

																			BgL_arg3144z00_2191 =
																				BGl_symbol5894z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 468 */
																				obj_t BgL_list3147z00_2193;

																				BgL_list3147z00_2193 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3145z00_2192 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol5886z00zz__evobjectz00,
																					BgL_list3147z00_2193);
																			}
																			BgL_arg3141z00_2188 =
																				MAKE_PAIR(BgL_arg3144z00_2191,
																				BgL_arg3145z00_2192);
																		}
																		{	/* Eval/evobject.scm 468 */
																			obj_t BgL_list3143z00_2190;

																			BgL_list3143z00_2190 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3140z00_2187 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3141z00_2188,
																				BgL_list3143z00_2190);
																		}
																	}
																	BgL_arg3136z00_2183 =
																		MAKE_PAIR(BgL_arg3139z00_2186,
																		BgL_arg3140z00_2187);
																}
																{	/* Eval/evobject.scm 468 */
																	obj_t BgL_list3138z00_2185;

																	BgL_list3138z00_2185 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3135z00_2182 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3136z00_2183, BgL_list3138z00_2185);
																}
															}
															BgL_arg3120z00_2167 =
																MAKE_PAIR(BgL_arg3134z00_2181,
																BgL_arg3135z00_2182);
														}
														{	/* Eval/evobject.scm 469 */
															obj_t BgL_arg3148z00_2194;

															obj_t BgL_arg3149z00_2195;

															BgL_arg3148z00_2194 =
																BGl_symbol5890z00zz__evobjectz00;
															{	/* Eval/evobject.scm 469 */
																obj_t BgL_arg3150z00_2196;

																{	/* Eval/evobject.scm 469 */
																	obj_t BgL_arg3153z00_2199;

																	obj_t BgL_arg3154z00_2200;

																	BgL_arg3153z00_2199 =
																		BGl_symbol5896z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 469 */
																		obj_t BgL_arg3155z00_2201;

																		obj_t BgL_arg3157z00_2202;

																		{	/* Eval/evobject.scm 469 */
																			obj_t BgL_arg3161z00_2206;

																			obj_t BgL_arg3162z00_2207;

																			BgL_arg3161z00_2206 =
																				BGl_symbol5894z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 469 */
																				obj_t BgL_list3163z00_2208;

																				BgL_list3163z00_2208 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3162z00_2207 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol5886z00zz__evobjectz00,
																					BgL_list3163z00_2208);
																			}
																			BgL_arg3155z00_2201 =
																				MAKE_PAIR(BgL_arg3161z00_2206,
																				BgL_arg3162z00_2207);
																		}
																		{	/* Eval/evobject.scm 469 */
																			obj_t BgL_arg3165z00_2209;

																			obj_t BgL_arg3167z00_2210;

																			BgL_arg3165z00_2209 =
																				BGl_symbol5842z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 469 */
																				obj_t BgL_arg3168z00_2211;

																				if (NULLP(BgL_allzd2fieldszd2_106))
																					{	/* Eval/evobject.scm 469 */
																						BgL_arg3168z00_2211 = BNIL;
																					}
																				else
																					{	/* Eval/evobject.scm 469 */
																						obj_t BgL_head1937z00_2216;

																						BgL_head1937z00_2216 =
																							MAKE_PAIR
																							(BGl_classzd2fieldzd2namez00zz__objectz00
																							(CAR(BgL_allzd2fieldszd2_106)),
																							BNIL);
																						{	/* Eval/evobject.scm 469 */
																							obj_t BgL_g1940z00_2217;

																							BgL_g1940z00_2217 =
																								CDR(BgL_allzd2fieldszd2_106);
																							{
																								obj_t BgL_l1935z00_6488;

																								obj_t BgL_tail1938z00_6489;

																								BgL_l1935z00_6488 =
																									BgL_g1940z00_2217;
																								BgL_tail1938z00_6489 =
																									BgL_head1937z00_2216;
																							BgL_zc3anonymousza33172ze3z83_6487:
																								if (NULLP
																									(BgL_l1935z00_6488))
																									{	/* Eval/evobject.scm 469 */
																										BgL_arg3168z00_2211 =
																											BgL_head1937z00_2216;
																									}
																								else
																									{	/* Eval/evobject.scm 469 */
																										obj_t
																											BgL_newtail1939z00_6497;
																										BgL_newtail1939z00_6497 =
																											MAKE_PAIR
																											(BGl_classzd2fieldzd2namez00zz__objectz00
																											(CAR(BgL_l1935z00_6488)),
																											BNIL);
																										SET_CDR
																											(BgL_tail1938z00_6489,
																											BgL_newtail1939z00_6497);
																										{
																											obj_t
																												BgL_tail1938z00_9482;
																											obj_t BgL_l1935z00_9480;

																											BgL_l1935z00_9480 =
																												CDR(BgL_l1935z00_6488);
																											BgL_tail1938z00_9482 =
																												BgL_newtail1939z00_6497;
																											BgL_tail1938z00_6489 =
																												BgL_tail1938z00_9482;
																											BgL_l1935z00_6488 =
																												BgL_l1935z00_9480;
																											goto
																												BgL_zc3anonymousza33172ze3z83_6487;
																										}
																									}
																							}
																						}
																					}
																				{	/* Eval/evobject.scm 469 */
																					obj_t BgL_list3170z00_2213;

																					BgL_list3170z00_2213 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3167z00_2210 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3168z00_2211,
																						BgL_list3170z00_2213);
																				}
																			}
																			BgL_arg3157z00_2202 =
																				MAKE_PAIR(BgL_arg3165z00_2209,
																				BgL_arg3167z00_2210);
																		}
																		{	/* Eval/evobject.scm 469 */
																			obj_t BgL_list3159z00_2204;

																			{	/* Eval/evobject.scm 469 */
																				obj_t BgL_arg3160z00_2205;

																				BgL_arg3160z00_2205 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3159z00_2204 =
																					MAKE_PAIR(BgL_arg3157z00_2202,
																					BgL_arg3160z00_2205);
																			}
																			BgL_arg3154z00_2200 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3155z00_2201,
																				BgL_list3159z00_2204);
																		}
																	}
																	BgL_arg3150z00_2196 =
																		MAKE_PAIR(BgL_arg3153z00_2199,
																		BgL_arg3154z00_2200);
																}
																{	/* Eval/evobject.scm 469 */
																	obj_t BgL_list3152z00_2198;

																	BgL_list3152z00_2198 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3149z00_2195 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3150z00_2196, BgL_list3152z00_2198);
																}
															}
															BgL_arg3121z00_2168 =
																MAKE_PAIR(BgL_arg3148z00_2194,
																BgL_arg3149z00_2195);
														}
														{	/* Eval/evobject.scm 467 */
															obj_t BgL_list3123z00_2170;

															{	/* Eval/evobject.scm 467 */
																obj_t BgL_arg3124z00_2171;

																{	/* Eval/evobject.scm 467 */
																	obj_t BgL_arg3125z00_2172;

																	BgL_arg3125z00_2172 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3124z00_2171 =
																		MAKE_PAIR(BgL_arg3121z00_2168,
																		BgL_arg3125z00_2172);
																}
																BgL_list3123z00_2170 =
																	MAKE_PAIR(BgL_arg3120z00_2167,
																	BgL_arg3124z00_2171);
															}
															BgL_arg3118z00_2165 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3119z00_2166, BgL_list3123z00_2170);
														}
													}
													BgL_arg3113z00_2160 =
														MAKE_PAIR(BgL_arg3117z00_2164, BgL_arg3118z00_2165);
												}
												{	/* Eval/evobject.scm 466 */
													obj_t BgL_list3115z00_2162;

													{	/* Eval/evobject.scm 466 */
														obj_t BgL_arg3116z00_2163;

														BgL_arg3116z00_2163 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3115z00_2162 =
															MAKE_PAIR(BgL_arg3113z00_2160,
															BgL_arg3116z00_2163);
													}
													BgL_arg3111z00_2158 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3112z00_2159, BgL_list3115z00_2162);
												}
											}
											BgL_arg3106z00_2153 =
												MAKE_PAIR(BgL_arg3110z00_2157, BgL_arg3111z00_2158);
										}
										{	/* Eval/evobject.scm 466 */
											obj_t BgL_list3108z00_2155;

											{	/* Eval/evobject.scm 466 */
												obj_t BgL_arg3109z00_2156;

												BgL_arg3109z00_2156 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3108z00_2155 =
													MAKE_PAIR(BgL_argsz00_105, BgL_arg3109z00_2156);
											}
											BgL_arg3105z00_2152 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3106z00_2153, BgL_list3108z00_2155);
										}
									}
									BgL_arg3101z00_2148 =
										MAKE_PAIR(BgL_arg3104z00_2151, BgL_arg3105z00_2152);
								}
								{	/* Eval/evobject.scm 466 */
									obj_t BgL_list3103z00_2150;

									BgL_list3103z00_2150 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3100z00_2147 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3101z00_2148, BgL_list3103z00_2150);
								}
							}
							BgL_arg3097z00_2144 =
								MAKE_PAIR(BgL_arg3099z00_2146, BgL_arg3100z00_2147);
						}
						BgL_arg3092z00_2139 = MAKE_PAIR(BgL_arg3097z00_2144, BNIL);
					}
					{	/* Eval/evobject.scm 471 */
						obj_t BgL_arg3181z00_2232;

						obj_t BgL_arg3182z00_2233;

						BgL_arg3181z00_2232 = BGl_symbol5838z00zz__evobjectz00;
						{	/* Eval/evobject.scm 471 */
							obj_t BgL_arg3183z00_2234;

							obj_t BgL_arg3184z00_2235;

							{	/* Eval/evobject.scm 471 */
								obj_t BgL_arg3190z00_2240;

								obj_t BgL_arg3191z00_2241;

								BgL_arg3190z00_2240 = BGl_symbol5872z00zz__evobjectz00;
								{	/* Eval/evobject.scm 471 */
									obj_t BgL_list3192z00_2242;

									BgL_list3192z00_2242 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3191z00_2241 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol5880z00zz__evobjectz00, BgL_list3192z00_2242);
								}
								BgL_arg3183z00_2234 =
									MAKE_PAIR(BgL_arg3190z00_2240, BgL_arg3191z00_2241);
							}
							{	/* Eval/evobject.scm 472 */
								obj_t BgL_arg3193z00_2243;

								obj_t BgL_arg3194z00_2244;

								BgL_arg3193z00_2243 = BGl_symbol5898z00zz__evobjectz00;
								{	/* Eval/evobject.scm 472 */
									obj_t BgL_arg3195z00_2245;

									obj_t BgL_arg3197z00_2247;

									{	/* Eval/evobject.scm 472 */
										obj_t BgL_arg3202z00_2252;

										obj_t BgL_arg3203z00_2253;

										BgL_arg3202z00_2252 = BGl_symbol5842z00zz__evobjectz00;
										{	/* Eval/evobject.scm 472 */
											obj_t BgL_list3204z00_2254;

											BgL_list3204z00_2254 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3203z00_2253 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_idz00_104, BgL_list3204z00_2254);
										}
										BgL_arg3195z00_2245 =
											MAKE_PAIR(BgL_arg3202z00_2252, BgL_arg3203z00_2253);
									}
									BgL_arg3197z00_2247 = BGl_symbol5880z00zz__evobjectz00;
									{	/* Eval/evobject.scm 472 */
										obj_t BgL_list3199z00_2249;

										{	/* Eval/evobject.scm 472 */
											obj_t BgL_arg3200z00_2250;

											{	/* Eval/evobject.scm 472 */
												obj_t BgL_arg3201z00_2251;

												BgL_arg3201z00_2251 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3200z00_2250 =
													MAKE_PAIR(BgL_arg3197z00_2247, BgL_arg3201z00_2251);
											}
											BgL_list3199z00_2249 =
												MAKE_PAIR(BGl_string5900z00zz__evobjectz00,
												BgL_arg3200z00_2250);
										}
										BgL_arg3194z00_2244 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3195z00_2245, BgL_list3199z00_2249);
									}
								}
								BgL_arg3184z00_2235 =
									MAKE_PAIR(BgL_arg3193z00_2243, BgL_arg3194z00_2244);
							}
							{	/* Eval/evobject.scm 471 */
								obj_t BgL_list3186z00_2237;

								{	/* Eval/evobject.scm 471 */
									obj_t BgL_arg3187z00_2238;

									{	/* Eval/evobject.scm 471 */
										obj_t BgL_arg3189z00_2239;

										BgL_arg3189z00_2239 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3187z00_2238 =
											MAKE_PAIR(BgL_bodyz00_107, BgL_arg3189z00_2239);
									}
									BgL_list3186z00_2237 =
										MAKE_PAIR(BgL_arg3184z00_2235, BgL_arg3187z00_2238);
								}
								BgL_arg3182z00_2233 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3183z00_2234, BgL_list3186z00_2237);
							}
						}
						BgL_arg3093z00_2140 =
							MAKE_PAIR(BgL_arg3181z00_2232, BgL_arg3182z00_2233);
					}
					{	/* Eval/evobject.scm 466 */
						obj_t BgL_list3095z00_2142;

						{	/* Eval/evobject.scm 466 */
							obj_t BgL_arg3096z00_2143;

							BgL_arg3096z00_2143 = MAKE_PAIR(BNIL, BNIL);
							BgL_list3095z00_2142 =
								MAKE_PAIR(BgL_arg3093z00_2140, BgL_arg3096z00_2143);
						}
						BgL_arg3091z00_2138 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3092z00_2139,
							BgL_list3095z00_2142);
					}
				}
				return MAKE_PAIR(BgL_arg3090z00_2137, BgL_arg3091z00_2138);
			}
		}
	}



/* eval-expand-instantiate */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2expandzd2instantiatez00zz__evobjectz00(obj_t
		BgL_cidz00_108)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 478 */
			{	/* Eval/evobject.scm 479 */
				obj_t BgL_claza7za7z00_2255;

				BgL_claza7za7z00_2255 =
					BGl_findzd2classzd2zz__objectz00(BgL_cidz00_108);
				if (BGl_classzf3zf3zz__objectz00(BgL_claza7za7z00_2255))
					{	/* Eval/evobject.scm 482 */
						obj_t BgL_idz00_2257;

						{	/* Eval/evobject.scm 482 */
							obj_t BgL_arg3249z00_2305;

							{	/* Eval/evobject.scm 482 */
								obj_t BgL_arg3250z00_2306;

								obj_t BgL_arg3251z00_2307;

								{	/* Eval/evobject.scm 482 */
									obj_t BgL_res5664z00_6539;

									{	/* Eval/evobject.scm 482 */
										obj_t BgL_symbolz00_6537;

										BgL_symbolz00_6537 = BGl_symbol5858z00zz__evobjectz00;
										{	/* Eval/evobject.scm 482 */
											obj_t BgL_arg5527z00_6538;

											BgL_arg5527z00_6538 =
												SYMBOL_TO_STRING(BgL_symbolz00_6537);
											BgL_res5664z00_6539 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg5527z00_6538);
										}
									}
									BgL_arg3250z00_2306 = BgL_res5664z00_6539;
								}
								{	/* Eval/evobject.scm 482 */
									obj_t BgL_res5665z00_6542;

									{	/* Eval/evobject.scm 482 */
										obj_t BgL_arg5527z00_6541;

										BgL_arg5527z00_6541 = SYMBOL_TO_STRING(BgL_cidz00_108);
										BgL_res5665z00_6542 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg5527z00_6541);
									}
									BgL_arg3251z00_2307 = BgL_res5665z00_6542;
								}
								{	/* Eval/evobject.scm 482 */
									obj_t BgL_list3252z00_2308;

									{	/* Eval/evobject.scm 482 */
										obj_t BgL_arg3253z00_2309;

										BgL_arg3253z00_2309 = MAKE_PAIR(BgL_arg3251z00_2307, BNIL);
										BgL_list3252z00_2308 =
											MAKE_PAIR(BgL_arg3250z00_2306, BgL_arg3253z00_2309);
									}
									BgL_arg3249z00_2305 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3252z00_2308);
								}
							}
							BgL_idz00_2257 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg3249z00_2305));
						}
						{	/* Eval/evobject.scm 482 */
							obj_t BgL_az00_2258;

							{	/* Eval/evobject.scm 483 */

								{	/* Eval/evobject.scm 483 */

									BgL_az00_2258 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Eval/evobject.scm 483 */
								obj_t BgL_locz00_2259;

								{	/* Eval/evobject.scm 484 */

									{	/* Eval/evobject.scm 484 */

										BgL_locz00_2259 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}
								}
								{	/* Eval/evobject.scm 484 */
									obj_t BgL_fieldsz00_2260;

									BgL_fieldsz00_2260 =
										BGl_classzd2allzd2fieldsz00zz__objectz00
										(BgL_claza7za7z00_2255);
									{	/* Eval/evobject.scm 485 */

										{	/* Eval/evobject.scm 486 */
											obj_t BgL_arg3206z00_2261;

											obj_t BgL_arg3207z00_2262;

											BgL_arg3206z00_2261 = BGl_symbol5901z00zz__evobjectz00;
											{	/* Eval/evobject.scm 486 */
												obj_t BgL_arg3208z00_2263;

												obj_t BgL_arg3209z00_2264;

												BgL_arg3208z00_2263 = BGl_keyword5903z00zz__evobjectz00;
												{	/* Eval/evobject.scm 488 */
													obj_t BgL_arg3214z00_2269;

													obj_t BgL_arg3215z00_2270;

													BgL_arg3214z00_2269 =
														BGl_symbol5884z00zz__evobjectz00;
													{	/* Eval/evobject.scm 488 */
														obj_t BgL_arg3216z00_2271;

														obj_t BgL_arg3217z00_2272;

														{	/* Eval/evobject.scm 488 */
															obj_t BgL_arg3221z00_2276;

															obj_t BgL_arg3222z00_2277;

															BgL_arg3221z00_2276 =
																BGl_symbol5818z00zz__evobjectz00;
															{	/* Eval/evobject.scm 488 */
																obj_t BgL_list3223z00_2278;

																BgL_list3223z00_2278 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3222z00_2277 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol5905z00zz__evobjectz00,
																	BgL_list3223z00_2278);
															}
															BgL_arg3216z00_2271 =
																MAKE_PAIR(BgL_arg3221z00_2276,
																BgL_arg3222z00_2277);
														}
														{	/* Eval/evobject.scm 489 */
															obj_t BgL_arg3224z00_2279;

															obj_t BgL_arg3225z00_2280;

															BgL_arg3224z00_2279 =
																BGl_symbol5789z00zz__evobjectz00;
															{	/* Eval/evobject.scm 489 */
																obj_t BgL_arg3227z00_2281;

																obj_t BgL_arg3228z00_2282;

																{	/* Eval/evobject.scm 489 */
																	obj_t BgL_arg3232z00_2286;

																	{	/* Eval/evobject.scm 489 */
																		obj_t BgL_arg3234z00_2288;

																		{	/* Eval/evobject.scm 489 */
																			obj_t BgL_arg3235z00_2289;

																			{	/* Eval/evobject.scm 489 */
																				obj_t BgL_arg3238z00_2292;

																				obj_t BgL_arg3239z00_2293;

																				BgL_arg3238z00_2292 =
																					BGl_symbol5907z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 489 */
																					obj_t BgL_list3240z00_2294;

																					BgL_list3240z00_2294 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3239z00_2293 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5818z00zz__evobjectz00,
																						BgL_list3240z00_2294);
																				}
																				BgL_arg3235z00_2289 =
																					MAKE_PAIR(BgL_arg3238z00_2292,
																					BgL_arg3239z00_2293);
																			}
																			{	/* Eval/evobject.scm 489 */
																				obj_t BgL_list3237z00_2291;

																				BgL_list3237z00_2291 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3234z00_2288 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3235z00_2289,
																					BgL_list3237z00_2291);
																			}
																		}
																		BgL_arg3232z00_2286 =
																			MAKE_PAIR(BgL_az00_2258,
																			BgL_arg3234z00_2288);
																	}
																	BgL_arg3227z00_2281 =
																		MAKE_PAIR(BgL_arg3232z00_2286, BNIL);
																}
																{	/* Eval/evobject.scm 490 */
																	obj_t BgL_arg3241z00_2295;

																	obj_t BgL_arg3242z00_2296;

																	BgL_arg3241z00_2295 =
																		BGl_symbol5905z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 492 */
																		obj_t BgL_arg3243z00_2297;

																		obj_t BgL_arg3244z00_2298;

																		BgL_arg3243z00_2297 =
																			BGl_evalzd2instantiatezd2checkz00zz__evobjectz00
																			(BgL_idz00_2257, BgL_az00_2258,
																			BgL_fieldsz00_2260,
																			BGl_evalzd2instantiatezd2ze3makeze3zz__evobjectz00
																			(BgL_cidz00_108, BgL_az00_2258,
																				BgL_fieldsz00_2260,
																				BGl_symbol5818z00zz__evobjectz00));
																		BgL_arg3244z00_2298 =
																			BGl_symbol5905z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 490 */
																			obj_t BgL_list3246z00_2300;

																			{	/* Eval/evobject.scm 490 */
																				obj_t BgL_arg3247z00_2301;

																				BgL_arg3247z00_2301 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3246z00_2300 =
																					MAKE_PAIR(BgL_arg3244z00_2298,
																					BgL_arg3247z00_2301);
																			}
																			BgL_arg3242z00_2296 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3243z00_2297,
																				BgL_list3246z00_2300);
																		}
																	}
																	BgL_arg3228z00_2282 =
																		MAKE_PAIR(BgL_arg3241z00_2295,
																		BgL_arg3242z00_2296);
																}
																{	/* Eval/evobject.scm 489 */
																	obj_t BgL_list3230z00_2284;

																	{	/* Eval/evobject.scm 489 */
																		obj_t BgL_arg3231z00_2285;

																		BgL_arg3231z00_2285 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3230z00_2284 =
																			MAKE_PAIR(BgL_arg3228z00_2282,
																			BgL_arg3231z00_2285);
																	}
																	BgL_arg3225z00_2280 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3227z00_2281, BgL_list3230z00_2284);
																}
															}
															BgL_arg3217z00_2272 =
																MAKE_PAIR(BgL_arg3224z00_2279,
																BgL_arg3225z00_2280);
														}
														{	/* Eval/evobject.scm 488 */
															obj_t BgL_list3219z00_2274;

															{	/* Eval/evobject.scm 488 */
																obj_t BgL_arg3220z00_2275;

																BgL_arg3220z00_2275 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3219z00_2274 =
																	MAKE_PAIR(BgL_arg3217z00_2272,
																	BgL_arg3220z00_2275);
															}
															BgL_arg3215z00_2270 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3216z00_2271, BgL_list3219z00_2274);
														}
													}
													BgL_arg3209z00_2264 =
														MAKE_PAIR(BgL_arg3214z00_2269, BgL_arg3215z00_2270);
												}
												{	/* Eval/evobject.scm 486 */
													obj_t BgL_list3211z00_2266;

													{	/* Eval/evobject.scm 486 */
														obj_t BgL_arg3212z00_2267;

														{	/* Eval/evobject.scm 486 */
															obj_t BgL_arg3213z00_2268;

															BgL_arg3213z00_2268 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3212z00_2267 =
																MAKE_PAIR(BgL_arg3209z00_2264,
																BgL_arg3213z00_2268);
														}
														BgL_list3211z00_2266 =
															MAKE_PAIR(BgL_arg3208z00_2263,
															BgL_arg3212z00_2267);
													}
													BgL_arg3207z00_2262 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_idz00_2257, BgL_list3211z00_2266);
												}
											}
											return
												MAKE_PAIR(BgL_arg3206z00_2261, BgL_arg3207z00_2262);
										}
									}
								}
							}
						}
					}
				else
					{	/* Eval/evobject.scm 480 */
						return
							BGl_expandzd2errorzd2zz__evobjectz00
							(BGl_string5909z00zz__evobjectz00,
							BGl_string5910z00zz__evobjectz00, BgL_cidz00_108);
					}
			}
		}
	}



/* _eval-expand-instantiate */
	obj_t BGl__evalzd2expandzd2instantiatez00zz__evobjectz00(obj_t
		BgL_envz00_7948, obj_t BgL_cidz00_7949)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 478 */
			{	/* Eval/evobject.scm 479 */
				obj_t BgL_auxz00_9575;

				if (SYMBOLP(BgL_cidz00_7949))
					{	/* Eval/evobject.scm 479 */
						BgL_auxz00_9575 = BgL_cidz00_7949;
					}
				else
					{
						obj_t BgL_auxz00_9578;

						BgL_auxz00_9578 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5911z00zz__evobjectz00,
							BINT(((long) 18304)), BGl_string5912z00zz__evobjectz00,
							BGl_string5913z00zz__evobjectz00, BgL_cidz00_7949);
						FAILURE(BgL_auxz00_9578, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2expandzd2instantiatez00zz__evobjectz00(BgL_auxz00_9575);
			}
		}
	}



/* eval-duplicate->make */
	obj_t BGl_evalzd2duplicatezd2ze3makeze3zz__evobjectz00(obj_t BgL_cidz00_109,
		obj_t BgL_argsz00_110, obj_t BgL_oldz00_111, obj_t BgL_fieldsz00_112)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 498 */
			{	/* Eval/evobject.scm 499 */
				obj_t BgL_mkz00_2310;

				{	/* Eval/evobject.scm 499 */
					obj_t BgL_arg2094z00_6545;

					{	/* Eval/evobject.scm 499 */
						obj_t BgL_arg2095z00_6546;

						obj_t BgL_arg2096z00_6547;

						{	/* Eval/evobject.scm 499 */
							obj_t BgL_res5666z00_6552;

							{	/* Eval/evobject.scm 499 */
								obj_t BgL_symbolz00_6550;

								BgL_symbolz00_6550 = BGl_symbol5782z00zz__evobjectz00;
								{	/* Eval/evobject.scm 499 */
									obj_t BgL_arg5527z00_6551;

									BgL_arg5527z00_6551 = SYMBOL_TO_STRING(BgL_symbolz00_6550);
									BgL_res5666z00_6552 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg5527z00_6551);
								}
							}
							BgL_arg2095z00_6546 = BgL_res5666z00_6552;
						}
						{	/* Eval/evobject.scm 499 */
							obj_t BgL_res5667z00_6555;

							{	/* Eval/evobject.scm 499 */
								obj_t BgL_arg5527z00_6554;

								BgL_arg5527z00_6554 = SYMBOL_TO_STRING(BgL_cidz00_109);
								BgL_res5667z00_6555 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg5527z00_6554);
							}
							BgL_arg2096z00_6547 = BgL_res5667z00_6555;
						}
						{	/* Eval/evobject.scm 499 */
							obj_t BgL_list2097z00_6548;

							{	/* Eval/evobject.scm 499 */
								obj_t BgL_arg2098z00_6549;

								BgL_arg2098z00_6549 = MAKE_PAIR(BgL_arg2096z00_6547, BNIL);
								BgL_list2097z00_6548 =
									MAKE_PAIR(BgL_arg2095z00_6546, BgL_arg2098z00_6549);
							}
							BgL_arg2094z00_6545 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2097z00_6548);
						}
					}
					BgL_mkz00_2310 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg2094z00_6545));
				}
				{	/* Eval/evobject.scm 499 */
					obj_t BgL_insz00_2311;

					{	/* Eval/evobject.scm 500 */
						obj_t BgL_arg3465z00_2556;

						{	/* Eval/evobject.scm 500 */
							obj_t BgL_arg3466z00_2557;

							obj_t BgL_arg3467z00_2558;

							{	/* Eval/evobject.scm 500 */
								obj_t BgL_res5668z00_6559;

								{	/* Eval/evobject.scm 500 */
									obj_t BgL_symbolz00_6557;

									BgL_symbolz00_6557 = BGl_symbol5914z00zz__evobjectz00;
									{	/* Eval/evobject.scm 500 */
										obj_t BgL_arg5527z00_6558;

										BgL_arg5527z00_6558 = SYMBOL_TO_STRING(BgL_symbolz00_6557);
										BgL_res5668z00_6559 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg5527z00_6558);
									}
								}
								BgL_arg3466z00_2557 = BgL_res5668z00_6559;
							}
							{	/* Eval/evobject.scm 500 */
								obj_t BgL_res5669z00_6562;

								{	/* Eval/evobject.scm 500 */
									obj_t BgL_arg5527z00_6561;

									BgL_arg5527z00_6561 = SYMBOL_TO_STRING(BgL_cidz00_109);
									BgL_res5669z00_6562 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg5527z00_6561);
								}
								BgL_arg3467z00_2558 = BgL_res5669z00_6562;
							}
							{	/* Eval/evobject.scm 500 */
								obj_t BgL_list3468z00_2559;

								{	/* Eval/evobject.scm 500 */
									obj_t BgL_arg3469z00_2560;

									BgL_arg3469z00_2560 = MAKE_PAIR(BgL_arg3467z00_2558, BNIL);
									BgL_list3468z00_2559 =
										MAKE_PAIR(BgL_arg3466z00_2557, BgL_arg3469z00_2560);
								}
								BgL_arg3465z00_2556 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3468z00_2559);
							}
						}
						BgL_insz00_2311 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg3465z00_2556));
					}
					{	/* Eval/evobject.scm 500 */
						obj_t BgL_nodefz00_2312;

						BgL_nodefz00_2312 =
							BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
						{	/* Eval/evobject.scm 501 */
							obj_t BgL_newz00_2313;

							{	/* Eval/evobject.scm 502 */

								{	/* Eval/evobject.scm 502 */

									BgL_newz00_2313 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Eval/evobject.scm 502 */
								obj_t BgL_tmpz00_2314;

								{	/* Eval/evobject.scm 503 */

									{	/* Eval/evobject.scm 503 */

										BgL_tmpz00_2314 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}
								}
								{	/* Eval/evobject.scm 504 */

									return
										BGl_loopz72z72z00zz__evobjectz00(BgL_newz00_2313,
										BgL_mkz00_2310, BgL_oldz00_111, BgL_nodefz00_2312,
										BgL_tmpz00_2314, BgL_cidz00_109, BgL_argsz00_110,
										BgL_fieldsz00_112, BNIL, BNIL);
								}
							}
						}
					}
				}
			}
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zz__evobjectz00(obj_t BgL_newz00_8012,
		obj_t BgL_mkz00_8011, obj_t BgL_oldz00_8010, obj_t BgL_nodefz00_8009,
		obj_t BgL_tmpz00_8008, obj_t BgL_cidz00_8007, obj_t BgL_argsz00_8006,
		obj_t BgL_fieldsz00_2319, obj_t BgL_valsz00_2320,
		obj_t BgL_virtualsz00_2321)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 505 */
			if (NULLP(BgL_fieldsz00_2319))
				{	/* Eval/evobject.scm 509 */
					obj_t BgL_arg3256z00_2324;

					obj_t BgL_arg3257z00_2325;

					BgL_arg3256z00_2324 = BGl_symbol5860z00zz__evobjectz00;
					if (NULLP(BgL_virtualsz00_2321))
						{	/* Eval/evobject.scm 511 */
							obj_t BgL_arg3261z00_2329;

							obj_t BgL_arg3262z00_2330;

							BgL_arg3261z00_2329 = BGl_symbol5916z00zz__evobjectz00;
							{	/* Eval/evobject.scm 511 */
								obj_t BgL_arg3263z00_2331;

								obj_t BgL_arg3264z00_2332;

								{	/* Eval/evobject.scm 511 */
									obj_t BgL_arg3268z00_2336;

									{	/* Eval/evobject.scm 511 */
										obj_t BgL_arg3270z00_2338;

										{	/* Eval/evobject.scm 511 */
											obj_t BgL_arg3271z00_2339;

											{	/* Eval/evobject.scm 511 */
												obj_t BgL_list3274z00_2342;

												{	/* Eval/evobject.scm 511 */
													obj_t BgL_arg3275z00_2343;

													obj_t BgL_arg3276z00_2344;

													BgL_arg3275z00_2343 =
														BGl_symbol5862z00zz__evobjectz00;
													BgL_arg3276z00_2344 =
														MAKE_PAIR(BgL_oldz00_8010, BNIL);
													BgL_list3274z00_2342 =
														MAKE_PAIR(BgL_arg3275z00_2343, BgL_arg3276z00_2344);
												}
												BgL_arg3271z00_2339 = BgL_list3274z00_2342;
											}
											{	/* Eval/evobject.scm 511 */
												obj_t BgL_list3273z00_2341;

												BgL_list3273z00_2341 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3270z00_2338 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3271z00_2339, BgL_list3273z00_2341);
											}
										}
										BgL_arg3268z00_2336 =
											MAKE_PAIR(BgL_tmpz00_8008, BgL_arg3270z00_2338);
									}
									BgL_arg3263z00_2331 = MAKE_PAIR(BgL_arg3268z00_2336, BNIL);
								}
								{	/* Eval/evobject.scm 512 */
									obj_t BgL_arg3277z00_2345;

									{	/* Eval/evobject.scm 512 */
										obj_t BgL_arg3278z00_2346;

										{	/* Eval/evobject.scm 512 */
											obj_t BgL_l1941z00_2348;

											BgL_l1941z00_2348 = bgl_reverse_bang(BgL_valsz00_2320);
											if (NULLP(BgL_l1941z00_2348))
												{	/* Eval/evobject.scm 512 */
													BgL_arg3278z00_2346 = BNIL;
												}
											else
												{	/* Eval/evobject.scm 512 */
													obj_t BgL_head1943z00_2350;

													BgL_head1943z00_2350 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l1941z00_2352;

														obj_t BgL_tail1944z00_2353;

														BgL_l1941z00_2352 = BgL_l1941z00_2348;
														BgL_tail1944z00_2353 = BgL_head1943z00_2350;
													BgL_zc3anonymousza33281ze3z83_2354:
														if (NULLP(BgL_l1941z00_2352))
															{	/* Eval/evobject.scm 512 */
																BgL_arg3278z00_2346 = CDR(BgL_head1943z00_2350);
															}
														else
															{	/* Eval/evobject.scm 512 */
																obj_t BgL_newtail1945z00_2356;

																{	/* Eval/evobject.scm 512 */
																	obj_t BgL_arg3284z00_2358;

																	{	/* Eval/evobject.scm 512 */
																		obj_t BgL_vz00_2360;

																		BgL_vz00_2360 = CAR(BgL_l1941z00_2352);
																		{	/* Eval/evobject.scm 512 */
																			obj_t BgL_list3286z00_2361;

																			{	/* Eval/evobject.scm 512 */
																				obj_t BgL_arg3287z00_2362;

																				obj_t BgL_arg3288z00_2363;

																				BgL_arg3287z00_2362 =
																					BGl_symbol5862z00zz__evobjectz00;
																				BgL_arg3288z00_2363 =
																					MAKE_PAIR(BgL_vz00_2360, BNIL);
																				BgL_list3286z00_2361 =
																					MAKE_PAIR(BgL_arg3287z00_2362,
																					BgL_arg3288z00_2363);
																			}
																			BgL_arg3284z00_2358 =
																				BgL_list3286z00_2361;
																		}
																	}
																	BgL_newtail1945z00_2356 =
																		MAKE_PAIR(BgL_arg3284z00_2358, BNIL);
																}
																SET_CDR(BgL_tail1944z00_2353,
																	BgL_newtail1945z00_2356);
																{
																	obj_t BgL_tail1944z00_9629;

																	obj_t BgL_l1941z00_9627;

																	BgL_l1941z00_9627 = CDR(BgL_l1941z00_2352);
																	BgL_tail1944z00_9629 =
																		BgL_newtail1945z00_2356;
																	BgL_tail1944z00_2353 = BgL_tail1944z00_9629;
																	BgL_l1941z00_2352 = BgL_l1941z00_9627;
																	goto BgL_zc3anonymousza33281ze3z83_2354;
																}
															}
													}
												}
										}
										BgL_arg3277z00_2345 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3278z00_2346, BNIL);
									}
									BgL_arg3264z00_2332 =
										MAKE_PAIR(BgL_mkz00_8011, BgL_arg3277z00_2345);
								}
								{	/* Eval/evobject.scm 511 */
									obj_t BgL_list3266z00_2334;

									{	/* Eval/evobject.scm 511 */
										obj_t BgL_arg3267z00_2335;

										BgL_arg3267z00_2335 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3266z00_2334 =
											MAKE_PAIR(BgL_arg3264z00_2332, BgL_arg3267z00_2335);
									}
									BgL_arg3262z00_2330 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3263z00_2331, BgL_list3266z00_2334);
								}
							}
							BgL_arg3257z00_2325 =
								MAKE_PAIR(BgL_arg3261z00_2329, BgL_arg3262z00_2330);
						}
					else
						{	/* Eval/evobject.scm 514 */
							obj_t BgL_arg3289z00_2365;

							obj_t BgL_arg3290z00_2366;

							BgL_arg3289z00_2365 = BGl_symbol5916z00zz__evobjectz00;
							{	/* Eval/evobject.scm 514 */
								obj_t BgL_arg3291z00_2367;

								obj_t BgL_arg3292z00_2368;

								{	/* Eval/evobject.scm 514 */
									obj_t BgL_arg3294z00_2370;

									obj_t BgL_arg3295z00_2371;

									{	/* Eval/evobject.scm 514 */
										obj_t BgL_arg3296z00_2372;

										{	/* Eval/evobject.scm 514 */
											obj_t BgL_arg3297z00_2373;

											{	/* Eval/evobject.scm 514 */
												obj_t BgL_list3300z00_2376;

												{	/* Eval/evobject.scm 514 */
													obj_t BgL_arg3301z00_2377;

													obj_t BgL_arg3302z00_2378;

													BgL_arg3301z00_2377 =
														BGl_symbol5862z00zz__evobjectz00;
													BgL_arg3302z00_2378 =
														MAKE_PAIR(BgL_oldz00_8010, BNIL);
													BgL_list3300z00_2376 =
														MAKE_PAIR(BgL_arg3301z00_2377, BgL_arg3302z00_2378);
												}
												BgL_arg3297z00_2373 = BgL_list3300z00_2376;
											}
											{	/* Eval/evobject.scm 514 */
												obj_t BgL_list3299z00_2375;

												BgL_list3299z00_2375 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3296z00_2372 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3297z00_2373, BgL_list3299z00_2375);
											}
										}
										BgL_arg3294z00_2370 =
											MAKE_PAIR(BgL_tmpz00_8008, BgL_arg3296z00_2372);
									}
									{	/* Eval/evobject.scm 515 */
										obj_t BgL_arg3303z00_2379;

										{	/* Eval/evobject.scm 515 */
											obj_t BgL_arg3306z00_2382;

											{	/* Eval/evobject.scm 515 */
												obj_t BgL_arg3307z00_2383;

												{	/* Eval/evobject.scm 515 */
													obj_t BgL_arg3310z00_2386;

													{	/* Eval/evobject.scm 515 */
														obj_t BgL_arg3311z00_2387;

														{	/* Eval/evobject.scm 515 */
															obj_t BgL_l1946z00_2389;

															BgL_l1946z00_2389 =
																bgl_reverse_bang(BgL_valsz00_2320);
															if (NULLP(BgL_l1946z00_2389))
																{	/* Eval/evobject.scm 515 */
																	BgL_arg3311z00_2387 = BNIL;
																}
															else
																{	/* Eval/evobject.scm 515 */
																	obj_t BgL_head1948z00_2391;

																	BgL_head1948z00_2391 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l1946z00_2393;

																		obj_t BgL_tail1949z00_2394;

																		BgL_l1946z00_2393 = BgL_l1946z00_2389;
																		BgL_tail1949z00_2394 = BgL_head1948z00_2391;
																	BgL_zc3anonymousza33314ze3z83_2395:
																		if (NULLP(BgL_l1946z00_2393))
																			{	/* Eval/evobject.scm 515 */
																				BgL_arg3311z00_2387 =
																					CDR(BgL_head1948z00_2391);
																			}
																		else
																			{	/* Eval/evobject.scm 515 */
																				obj_t BgL_newtail1950z00_2397;

																				{	/* Eval/evobject.scm 515 */
																					obj_t BgL_arg3317z00_2399;

																					{	/* Eval/evobject.scm 515 */
																						obj_t BgL_vz00_2401;

																						BgL_vz00_2401 =
																							CAR(BgL_l1946z00_2393);
																						{	/* Eval/evobject.scm 515 */
																							obj_t BgL_list3319z00_2402;

																							{	/* Eval/evobject.scm 515 */
																								obj_t BgL_arg3320z00_2403;

																								obj_t BgL_arg3321z00_2404;

																								BgL_arg3320z00_2403 =
																									BGl_symbol5862z00zz__evobjectz00;
																								BgL_arg3321z00_2404 =
																									MAKE_PAIR(BgL_vz00_2401,
																									BNIL);
																								BgL_list3319z00_2402 =
																									MAKE_PAIR(BgL_arg3320z00_2403,
																									BgL_arg3321z00_2404);
																							}
																							BgL_arg3317z00_2399 =
																								BgL_list3319z00_2402;
																						}
																					}
																					BgL_newtail1950z00_2397 =
																						MAKE_PAIR(BgL_arg3317z00_2399,
																						BNIL);
																				}
																				SET_CDR(BgL_tail1949z00_2394,
																					BgL_newtail1950z00_2397);
																				{
																					obj_t BgL_tail1949z00_9655;

																					obj_t BgL_l1946z00_9653;

																					BgL_l1946z00_9653 =
																						CDR(BgL_l1946z00_2393);
																					BgL_tail1949z00_9655 =
																						BgL_newtail1950z00_2397;
																					BgL_tail1949z00_2394 =
																						BgL_tail1949z00_9655;
																					BgL_l1946z00_2393 = BgL_l1946z00_9653;
																					goto
																						BgL_zc3anonymousza33314ze3z83_2395;
																				}
																			}
																	}
																}
														}
														BgL_arg3310z00_2386 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3311z00_2387, BNIL);
													}
													BgL_arg3307z00_2383 =
														MAKE_PAIR(BgL_mkz00_8011, BgL_arg3310z00_2386);
												}
												{	/* Eval/evobject.scm 515 */
													obj_t BgL_list3309z00_2385;

													BgL_list3309z00_2385 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3306z00_2382 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3307z00_2383, BgL_list3309z00_2385);
												}
											}
											BgL_arg3303z00_2379 =
												MAKE_PAIR(BgL_newz00_8012, BgL_arg3306z00_2382);
										}
										{	/* Eval/evobject.scm 514 */
											obj_t BgL_list3305z00_2381;

											BgL_list3305z00_2381 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3295z00_2371 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3303z00_2379, BgL_list3305z00_2381);
										}
									}
									BgL_arg3291z00_2367 =
										MAKE_PAIR(BgL_arg3294z00_2370, BgL_arg3295z00_2371);
								}
								{	/* Eval/evobject.scm 517 */
									obj_t BgL_arg3324z00_2406;

									obj_t BgL_arg3325z00_2407;

									{	/* Eval/evobject.scm 517 */
										obj_t BgL_head1953z00_2410;

										BgL_head1953z00_2410 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l1951z00_2412;

											obj_t BgL_tail1954z00_2413;

											BgL_l1951z00_2412 = BgL_virtualsz00_2321;
											BgL_tail1954z00_2413 = BgL_head1953z00_2410;
										BgL_zc3anonymousza33327ze3z83_2414:
											if (NULLP(BgL_l1951z00_2412))
												{	/* Eval/evobject.scm 517 */
													BgL_arg3324z00_2406 = CDR(BgL_head1953z00_2410);
												}
											else
												{	/* Eval/evobject.scm 517 */
													obj_t BgL_newtail1955z00_2416;

													{	/* Eval/evobject.scm 517 */
														obj_t BgL_arg3330z00_2418;

														{	/* Eval/evobject.scm 517 */
															obj_t BgL_idz00_2420;

															BgL_idz00_2420 = CAR(BgL_l1951z00_2412);
															{	/* Eval/evobject.scm 518 */
																obj_t BgL_arg3332z00_2421;

																obj_t BgL_arg3333z00_2422;

																{	/* Eval/evobject.scm 518 */
																	obj_t BgL_list2117z00_6604;

																	{	/* Eval/evobject.scm 518 */
																		obj_t BgL_arg2118z00_6605;

																		{	/* Eval/evobject.scm 518 */
																			obj_t BgL_arg2119z00_6606;

																			obj_t BgL_arg2121z00_6607;

																			BgL_arg2119z00_6606 =
																				BGl_symbol5822z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 518 */
																				obj_t BgL_arg2123z00_6608;

																				BgL_arg2123z00_6608 =
																					MAKE_PAIR
																					(BGl_symbol5824z00zz__evobjectz00,
																					BNIL);
																				BgL_arg2121z00_6607 =
																					MAKE_PAIR(BgL_idz00_2420,
																					BgL_arg2123z00_6608);
																			}
																			BgL_arg2118z00_6605 =
																				MAKE_PAIR(BgL_arg2119z00_6606,
																				BgL_arg2121z00_6607);
																		}
																		BgL_list2117z00_6604 =
																			MAKE_PAIR(BgL_cidz00_8007,
																			BgL_arg2118z00_6605);
																	}
																	BgL_arg3332z00_2421 =
																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																		(BgL_list2117z00_6604);
																}
																{	/* Eval/evobject.scm 519 */
																	obj_t BgL_arg3334z00_2423;

																	{	/* Eval/evobject.scm 519 */
																		obj_t BgL_list3338z00_2427;

																		{	/* Eval/evobject.scm 519 */
																			obj_t BgL_arg3339z00_2428;

																			obj_t BgL_arg3340z00_2429;

																			BgL_arg3339z00_2428 =
																				BGl_symbol5862z00zz__evobjectz00;
																			BgL_arg3340z00_2429 =
																				MAKE_PAIR(BgL_idz00_2420, BNIL);
																			BgL_list3338z00_2427 =
																				MAKE_PAIR(BgL_arg3339z00_2428,
																				BgL_arg3340z00_2429);
																		}
																		BgL_arg3334z00_2423 = BgL_list3338z00_2427;
																	}
																	{	/* Eval/evobject.scm 518 */
																		obj_t BgL_list3336z00_2425;

																		{	/* Eval/evobject.scm 518 */
																			obj_t BgL_arg3337z00_2426;

																			BgL_arg3337z00_2426 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3336z00_2425 =
																				MAKE_PAIR(BgL_arg3334z00_2423,
																				BgL_arg3337z00_2426);
																		}
																		BgL_arg3333z00_2422 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_newz00_8012, BgL_list3336z00_2425);
																	}
																}
																BgL_arg3330z00_2418 =
																	MAKE_PAIR(BgL_arg3332z00_2421,
																	BgL_arg3333z00_2422);
															}
														}
														BgL_newtail1955z00_2416 =
															MAKE_PAIR(BgL_arg3330z00_2418, BNIL);
													}
													SET_CDR(BgL_tail1954z00_2413,
														BgL_newtail1955z00_2416);
													{
														obj_t BgL_tail1954z00_9684;

														obj_t BgL_l1951z00_9682;

														BgL_l1951z00_9682 = CDR(BgL_l1951z00_2412);
														BgL_tail1954z00_9684 = BgL_newtail1955z00_2416;
														BgL_tail1954z00_2413 = BgL_tail1954z00_9684;
														BgL_l1951z00_2412 = BgL_l1951z00_9682;
														goto BgL_zc3anonymousza33327ze3z83_2414;
													}
												}
										}
									}
									BgL_arg3325z00_2407 = MAKE_PAIR(BgL_newz00_8012, BNIL);
									BgL_arg3292z00_2368 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3324z00_2406, BgL_arg3325z00_2407);
								}
								{	/* Eval/evobject.scm 514 */
									obj_t BgL_list3293z00_2369;

									BgL_list3293z00_2369 = MAKE_PAIR(BgL_arg3292z00_2368, BNIL);
									BgL_arg3290z00_2366 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3291z00_2367, BgL_list3293z00_2369);
								}
							}
							BgL_arg3257z00_2325 =
								MAKE_PAIR(BgL_arg3289z00_2365, BgL_arg3290z00_2366);
						}
					{	/* Eval/evobject.scm 509 */
						obj_t BgL_list3258z00_2326;

						{	/* Eval/evobject.scm 509 */
							obj_t BgL_arg3259z00_2327;

							BgL_arg3259z00_2327 = MAKE_PAIR(BgL_arg3257z00_2325, BNIL);
							BgL_list3258z00_2326 =
								MAKE_PAIR(BgL_arg3256z00_2324, BgL_arg3259z00_2327);
						}
						return BgL_list3258z00_2326;
					}
				}
			else
				{	/* Eval/evobject.scm 522 */
					obj_t BgL_fz00_2431;

					BgL_fz00_2431 = CAR(BgL_fieldsz00_2319);
					{	/* Eval/evobject.scm 522 */
						obj_t BgL_idz00_2432;

						BgL_idz00_2432 =
							BGl_classzd2fieldzd2namez00zz__objectz00(BgL_fz00_2431);
						{	/* Eval/evobject.scm 523 */

							if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fz00_2431))
								{	/* Eval/evobject.scm 527 */
									obj_t BgL_arg3342z00_2434;

									obj_t BgL_arg3343z00_2435;

									BgL_arg3342z00_2434 = BGl_symbol5789z00zz__evobjectz00;
									{	/* Eval/evobject.scm 527 */
										obj_t BgL_arg3345z00_2436;

										obj_t BgL_arg3346z00_2437;

										{	/* Eval/evobject.scm 527 */
											obj_t BgL_arg3350z00_2441;

											{	/* Eval/evobject.scm 527 */
												obj_t BgL_arg3352z00_2443;

												{	/* Eval/evobject.scm 527 */
													obj_t BgL_arg3353z00_2444;

													{	/* Eval/evobject.scm 527 */
														obj_t BgL_arg3356z00_2447;

														obj_t BgL_arg3357z00_2448;

														BgL_arg3356z00_2447 =
															BGl_symbol5789z00zz__evobjectz00;
														{	/* Eval/evobject.scm 527 */
															obj_t BgL_arg3358z00_2449;

															obj_t BgL_arg3359z00_2450;

															{	/* Eval/evobject.scm 527 */
																obj_t BgL_arg3363z00_2454;

																{	/* Eval/evobject.scm 527 */
																	obj_t BgL_arg3365z00_2456;

																	obj_t BgL_arg3366z00_2457;

																	BgL_arg3365z00_2456 =
																		BGl_symbol5868z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 527 */
																		obj_t BgL_arg3367z00_2458;

																		{	/* Eval/evobject.scm 527 */
																			obj_t BgL_arg3371z00_2461;

																			obj_t BgL_arg3372z00_2462;

																			BgL_arg3371z00_2461 =
																				BGl_symbol5870z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 527 */
																				obj_t BgL_arg3373z00_2463;

																				{	/* Eval/evobject.scm 527 */
																					obj_t BgL_arg3377z00_2467;

																					obj_t BgL_arg3378z00_2468;

																					BgL_arg3377z00_2467 =
																						BGl_symbol5842z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 527 */
																						obj_t BgL_list3379z00_2469;

																						BgL_list3379z00_2469 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3378z00_2468 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_idz00_2432,
																							BgL_list3379z00_2469);
																					}
																					BgL_arg3373z00_2463 =
																						MAKE_PAIR(BgL_arg3377z00_2467,
																						BgL_arg3378z00_2468);
																				}
																				{	/* Eval/evobject.scm 527 */
																					obj_t BgL_list3375z00_2465;

																					{	/* Eval/evobject.scm 527 */
																						obj_t BgL_arg3376z00_2466;

																						BgL_arg3376z00_2466 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3375z00_2465 =
																							MAKE_PAIR(BgL_argsz00_8006,
																							BgL_arg3376z00_2466);
																					}
																					BgL_arg3372z00_2462 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3373z00_2463,
																						BgL_list3375z00_2465);
																				}
																			}
																			BgL_arg3367z00_2458 =
																				MAKE_PAIR(BgL_arg3371z00_2461,
																				BgL_arg3372z00_2462);
																		}
																		{	/* Eval/evobject.scm 527 */
																			obj_t BgL_list3369z00_2460;

																			BgL_list3369z00_2460 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3366z00_2457 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3367z00_2458,
																				BgL_list3369z00_2460);
																		}
																	}
																	BgL_arg3363z00_2454 =
																		MAKE_PAIR(BgL_arg3365z00_2456,
																		BgL_arg3366z00_2457);
																}
																BgL_arg3358z00_2449 =
																	MAKE_PAIR(BgL_arg3363z00_2454, BNIL);
															}
															{	/* Eval/evobject.scm 528 */
																obj_t BgL_arg3380z00_2470;

																obj_t BgL_arg3381z00_2471;

																BgL_arg3380z00_2470 =
																	BGl_symbol5838z00zz__evobjectz00;
																{	/* Eval/evobject.scm 528 */
																	obj_t BgL_arg3382z00_2472;

																	obj_t BgL_arg3383z00_2473;

																	obj_t BgL_arg3384z00_2474;

																	{	/* Eval/evobject.scm 528 */
																		obj_t BgL_arg3389z00_2479;

																		obj_t BgL_arg3390z00_2480;

																		BgL_arg3389z00_2479 =
																			BGl_symbol5872z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 528 */
																			obj_t BgL_list3391z00_2481;

																			BgL_list3391z00_2481 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3390z00_2480 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5868z00zz__evobjectz00,
																				BgL_list3391z00_2481);
																		}
																		BgL_arg3382z00_2472 =
																			MAKE_PAIR(BgL_arg3389z00_2479,
																			BgL_arg3390z00_2480);
																	}
																	{	/* Eval/evobject.scm 529 */
																		obj_t BgL_arg3392z00_2482;

																		obj_t BgL_arg3393z00_2483;

																		BgL_arg3392z00_2482 =
																			BGl_symbol5874z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 529 */
																			obj_t BgL_list3394z00_2484;

																			BgL_list3394z00_2484 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3393z00_2483 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5868z00zz__evobjectz00,
																				BgL_list3394z00_2484);
																		}
																		BgL_arg3383z00_2473 =
																			MAKE_PAIR(BgL_arg3392z00_2482,
																			BgL_arg3393z00_2483);
																	}
																	{	/* Eval/evobject.scm 530 */
																		obj_t BgL_dz00_2485;

																		BgL_dz00_2485 =
																			BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																			(BgL_fz00_2431);
																		if ((BgL_dz00_2485 == BgL_nodefz00_8009))
																			{	/* Eval/evobject.scm 531 */
																				BgL_arg3384z00_2474 = BUNSPEC;
																			}
																		else
																			{	/* Eval/evobject.scm 533 */
																				obj_t BgL_list3396z00_2487;

																				{	/* Eval/evobject.scm 533 */
																					obj_t BgL_arg3397z00_2488;

																					obj_t BgL_arg3398z00_2489;

																					BgL_arg3397z00_2488 =
																						BGl_symbol5842z00zz__evobjectz00;
																					BgL_arg3398z00_2489 =
																						MAKE_PAIR(BgL_dz00_2485, BNIL);
																					BgL_list3396z00_2487 =
																						MAKE_PAIR(BgL_arg3397z00_2488,
																						BgL_arg3398z00_2489);
																				}
																				BgL_arg3384z00_2474 =
																					BgL_list3396z00_2487;
																			}
																	}
																	{	/* Eval/evobject.scm 528 */
																		obj_t BgL_list3386z00_2476;

																		{	/* Eval/evobject.scm 528 */
																			obj_t BgL_arg3387z00_2477;

																			{	/* Eval/evobject.scm 528 */
																				obj_t BgL_arg3388z00_2478;

																				BgL_arg3388z00_2478 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3387z00_2477 =
																					MAKE_PAIR(BgL_arg3384z00_2474,
																					BgL_arg3388z00_2478);
																			}
																			BgL_list3386z00_2476 =
																				MAKE_PAIR(BgL_arg3383z00_2473,
																				BgL_arg3387z00_2477);
																		}
																		BgL_arg3381z00_2471 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3382z00_2472,
																			BgL_list3386z00_2476);
																	}
																}
																BgL_arg3359z00_2450 =
																	MAKE_PAIR(BgL_arg3380z00_2470,
																	BgL_arg3381z00_2471);
															}
															{	/* Eval/evobject.scm 527 */
																obj_t BgL_list3361z00_2452;

																{	/* Eval/evobject.scm 527 */
																	obj_t BgL_arg3362z00_2453;

																	BgL_arg3362z00_2453 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3361z00_2452 =
																		MAKE_PAIR(BgL_arg3359z00_2450,
																		BgL_arg3362z00_2453);
																}
																BgL_arg3357z00_2448 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3358z00_2449, BgL_list3361z00_2452);
															}
														}
														BgL_arg3353z00_2444 =
															MAKE_PAIR(BgL_arg3356z00_2447,
															BgL_arg3357z00_2448);
													}
													{	/* Eval/evobject.scm 527 */
														obj_t BgL_list3355z00_2446;

														BgL_list3355z00_2446 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3352z00_2443 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3353z00_2444, BgL_list3355z00_2446);
													}
												}
												BgL_arg3350z00_2441 =
													MAKE_PAIR(BgL_idz00_2432, BgL_arg3352z00_2443);
											}
											BgL_arg3345z00_2436 =
												MAKE_PAIR(BgL_arg3350z00_2441, BNIL);
										}
										{	/* Eval/evobject.scm 534 */
											obj_t BgL_arg3399z00_2490;

											obj_t BgL_arg3400z00_2491;

											BgL_arg3399z00_2490 = CDR(BgL_fieldsz00_2319);
											BgL_arg3400z00_2491 =
												MAKE_PAIR(BgL_idz00_2432, BgL_virtualsz00_2321);
											BgL_arg3346z00_2437 =
												BGl_loopz72z72z00zz__evobjectz00(BgL_newz00_8012,
												BgL_mkz00_8011, BgL_oldz00_8010, BgL_nodefz00_8009,
												BgL_tmpz00_8008, BgL_cidz00_8007, BgL_argsz00_8006,
												BgL_arg3399z00_2490, BgL_valsz00_2320,
												BgL_arg3400z00_2491);
										}
										{	/* Eval/evobject.scm 527 */
											obj_t BgL_list3348z00_2439;

											{	/* Eval/evobject.scm 527 */
												obj_t BgL_arg3349z00_2440;

												BgL_arg3349z00_2440 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3348z00_2439 =
													MAKE_PAIR(BgL_arg3346z00_2437, BgL_arg3349z00_2440);
											}
											BgL_arg3343z00_2435 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3345z00_2436, BgL_list3348z00_2439);
										}
									}
									return MAKE_PAIR(BgL_arg3342z00_2434, BgL_arg3343z00_2435);
								}
							else
								{	/* Eval/evobject.scm 537 */
									obj_t BgL_arg3401z00_2492;

									obj_t BgL_arg3402z00_2493;

									BgL_arg3401z00_2492 = BGl_symbol5789z00zz__evobjectz00;
									{	/* Eval/evobject.scm 537 */
										obj_t BgL_arg3403z00_2494;

										obj_t BgL_arg3404z00_2495;

										{	/* Eval/evobject.scm 537 */
											obj_t BgL_arg3408z00_2499;

											{	/* Eval/evobject.scm 537 */
												obj_t BgL_arg3410z00_2501;

												{	/* Eval/evobject.scm 537 */
													obj_t BgL_arg3411z00_2502;

													{	/* Eval/evobject.scm 537 */
														obj_t BgL_arg3414z00_2505;

														obj_t BgL_arg3415z00_2506;

														BgL_arg3414z00_2505 =
															BGl_symbol5789z00zz__evobjectz00;
														{	/* Eval/evobject.scm 537 */
															obj_t BgL_arg3416z00_2507;

															obj_t BgL_arg3417z00_2508;

															{	/* Eval/evobject.scm 537 */
																obj_t BgL_arg3421z00_2512;

																{	/* Eval/evobject.scm 537 */
																	obj_t BgL_arg3424z00_2514;

																	obj_t BgL_arg3425z00_2515;

																	BgL_arg3424z00_2514 =
																		BGl_symbol5868z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 537 */
																		obj_t BgL_arg3426z00_2516;

																		{	/* Eval/evobject.scm 537 */
																			obj_t BgL_arg3430z00_2519;

																			obj_t BgL_arg3431z00_2520;

																			BgL_arg3430z00_2519 =
																				BGl_symbol5870z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 537 */
																				obj_t BgL_arg3432z00_2521;

																				{	/* Eval/evobject.scm 537 */
																					obj_t BgL_arg3436z00_2525;

																					obj_t BgL_arg3437z00_2526;

																					BgL_arg3436z00_2525 =
																						BGl_symbol5842z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 537 */
																						obj_t BgL_list3438z00_2527;

																						BgL_list3438z00_2527 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3437z00_2526 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_idz00_2432,
																							BgL_list3438z00_2527);
																					}
																					BgL_arg3432z00_2521 =
																						MAKE_PAIR(BgL_arg3436z00_2525,
																						BgL_arg3437z00_2526);
																				}
																				{	/* Eval/evobject.scm 537 */
																					obj_t BgL_list3434z00_2523;

																					{	/* Eval/evobject.scm 537 */
																						obj_t BgL_arg3435z00_2524;

																						BgL_arg3435z00_2524 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3434z00_2523 =
																							MAKE_PAIR(BgL_argsz00_8006,
																							BgL_arg3435z00_2524);
																					}
																					BgL_arg3431z00_2520 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3432z00_2521,
																						BgL_list3434z00_2523);
																				}
																			}
																			BgL_arg3426z00_2516 =
																				MAKE_PAIR(BgL_arg3430z00_2519,
																				BgL_arg3431z00_2520);
																		}
																		{	/* Eval/evobject.scm 537 */
																			obj_t BgL_list3428z00_2518;

																			BgL_list3428z00_2518 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3425z00_2515 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3426z00_2516,
																				BgL_list3428z00_2518);
																		}
																	}
																	BgL_arg3421z00_2512 =
																		MAKE_PAIR(BgL_arg3424z00_2514,
																		BgL_arg3425z00_2515);
																}
																BgL_arg3416z00_2507 =
																	MAKE_PAIR(BgL_arg3421z00_2512, BNIL);
															}
															{	/* Eval/evobject.scm 538 */
																obj_t BgL_arg3439z00_2528;

																obj_t BgL_arg3440z00_2529;

																BgL_arg3439z00_2528 =
																	BGl_symbol5838z00zz__evobjectz00;
																{	/* Eval/evobject.scm 538 */
																	obj_t BgL_arg3441z00_2530;

																	obj_t BgL_arg3443z00_2531;

																	obj_t BgL_arg3444z00_2532;

																	{	/* Eval/evobject.scm 538 */
																		obj_t BgL_arg3449z00_2537;

																		obj_t BgL_arg3450z00_2538;

																		BgL_arg3449z00_2537 =
																			BGl_symbol5872z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 538 */
																			obj_t BgL_list3451z00_2539;

																			BgL_list3451z00_2539 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3450z00_2538 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5868z00zz__evobjectz00,
																				BgL_list3451z00_2539);
																		}
																		BgL_arg3441z00_2530 =
																			MAKE_PAIR(BgL_arg3449z00_2537,
																			BgL_arg3450z00_2538);
																	}
																	{	/* Eval/evobject.scm 539 */
																		obj_t BgL_arg3452z00_2540;

																		obj_t BgL_arg3453z00_2541;

																		BgL_arg3452z00_2540 =
																			BGl_symbol5874z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 539 */
																			obj_t BgL_list3454z00_2542;

																			BgL_list3454z00_2542 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3453z00_2541 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5868z00zz__evobjectz00,
																				BgL_list3454z00_2542);
																		}
																		BgL_arg3443z00_2531 =
																			MAKE_PAIR(BgL_arg3452z00_2540,
																			BgL_arg3453z00_2541);
																	}
																	{	/* Eval/evobject.scm 540 */
																		obj_t BgL_arg3455z00_2543;

																		obj_t BgL_arg3456z00_2544;

																		BgL_arg3455z00_2543 =
																			BGl_symbol5842z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 540 */
																			obj_t BgL_arg3457z00_2545;

																			{	/* Eval/evobject.scm 540 */
																				obj_t BgL_arg3460z00_2548;

																				obj_t BgL_arg3461z00_2549;

																				{	/* Eval/evobject.scm 540 */
																					obj_t BgL_list2113z00_6624;

																					{	/* Eval/evobject.scm 540 */
																						obj_t BgL_arg2114z00_6625;

																						{	/* Eval/evobject.scm 540 */
																							obj_t BgL_arg2115z00_6626;

																							obj_t BgL_arg2116z00_6627;

																							BgL_arg2115z00_6626 =
																								BGl_symbol5822z00zz__evobjectz00;
																							BgL_arg2116z00_6627 =
																								MAKE_PAIR(BgL_idz00_2432, BNIL);
																							BgL_arg2114z00_6625 =
																								MAKE_PAIR(BgL_arg2115z00_6626,
																								BgL_arg2116z00_6627);
																						}
																						BgL_list2113z00_6624 =
																							MAKE_PAIR(BgL_cidz00_8007,
																							BgL_arg2114z00_6625);
																					}
																					BgL_arg3460z00_2548 =
																						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																						(BgL_list2113z00_6624);
																				}
																				{	/* Eval/evobject.scm 540 */
																					obj_t BgL_list3462z00_2550;

																					BgL_list3462z00_2550 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3461z00_2549 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_tmpz00_8008,
																						BgL_list3462z00_2550);
																				}
																				BgL_arg3457z00_2545 =
																					MAKE_PAIR(BgL_arg3460z00_2548,
																					BgL_arg3461z00_2549);
																			}
																			{	/* Eval/evobject.scm 540 */
																				obj_t BgL_list3459z00_2547;

																				BgL_list3459z00_2547 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3456z00_2544 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3457z00_2545,
																					BgL_list3459z00_2547);
																			}
																		}
																		BgL_arg3444z00_2532 =
																			MAKE_PAIR(BgL_arg3455z00_2543,
																			BgL_arg3456z00_2544);
																	}
																	{	/* Eval/evobject.scm 538 */
																		obj_t BgL_list3446z00_2534;

																		{	/* Eval/evobject.scm 538 */
																			obj_t BgL_arg3447z00_2535;

																			{	/* Eval/evobject.scm 538 */
																				obj_t BgL_arg3448z00_2536;

																				BgL_arg3448z00_2536 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3447z00_2535 =
																					MAKE_PAIR(BgL_arg3444z00_2532,
																					BgL_arg3448z00_2536);
																			}
																			BgL_list3446z00_2534 =
																				MAKE_PAIR(BgL_arg3443z00_2531,
																				BgL_arg3447z00_2535);
																		}
																		BgL_arg3440z00_2529 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3441z00_2530,
																			BgL_list3446z00_2534);
																	}
																}
																BgL_arg3417z00_2508 =
																	MAKE_PAIR(BgL_arg3439z00_2528,
																	BgL_arg3440z00_2529);
															}
															{	/* Eval/evobject.scm 537 */
																obj_t BgL_list3419z00_2510;

																{	/* Eval/evobject.scm 537 */
																	obj_t BgL_arg3420z00_2511;

																	BgL_arg3420z00_2511 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3419z00_2510 =
																		MAKE_PAIR(BgL_arg3417z00_2508,
																		BgL_arg3420z00_2511);
																}
																BgL_arg3415z00_2506 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3416z00_2507, BgL_list3419z00_2510);
															}
														}
														BgL_arg3411z00_2502 =
															MAKE_PAIR(BgL_arg3414z00_2505,
															BgL_arg3415z00_2506);
													}
													{	/* Eval/evobject.scm 537 */
														obj_t BgL_list3413z00_2504;

														BgL_list3413z00_2504 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3410z00_2501 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3411z00_2502, BgL_list3413z00_2504);
													}
												}
												BgL_arg3408z00_2499 =
													MAKE_PAIR(BgL_idz00_2432, BgL_arg3410z00_2501);
											}
											BgL_arg3403z00_2494 =
												MAKE_PAIR(BgL_arg3408z00_2499, BNIL);
										}
										{	/* Eval/evobject.scm 541 */
											obj_t BgL_arg3463z00_2551;

											obj_t BgL_arg3464z00_2552;

											BgL_arg3463z00_2551 = CDR(BgL_fieldsz00_2319);
											BgL_arg3464z00_2552 =
												MAKE_PAIR(BgL_idz00_2432, BgL_valsz00_2320);
											BgL_arg3404z00_2495 =
												BGl_loopz72z72z00zz__evobjectz00(BgL_newz00_8012,
												BgL_mkz00_8011, BgL_oldz00_8010, BgL_nodefz00_8009,
												BgL_tmpz00_8008, BgL_cidz00_8007, BgL_argsz00_8006,
												BgL_arg3463z00_2551, BgL_arg3464z00_2552,
												BgL_virtualsz00_2321);
										}
										{	/* Eval/evobject.scm 537 */
											obj_t BgL_list3406z00_2497;

											{	/* Eval/evobject.scm 537 */
												obj_t BgL_arg3407z00_2498;

												BgL_arg3407z00_2498 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3406z00_2497 =
													MAKE_PAIR(BgL_arg3404z00_2495, BgL_arg3407z00_2498);
											}
											BgL_arg3402z00_2493 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3403z00_2494, BgL_list3406z00_2497);
										}
									}
									return MAKE_PAIR(BgL_arg3401z00_2492, BgL_arg3402z00_2493);
								}
						}
					}
				}
		}
	}



/* eval-expand-duplicate */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2expandzd2duplicatez00zz__evobjectz00(obj_t
		BgL_cidz00_113)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 546 */
			{	/* Eval/evobject.scm 547 */
				obj_t BgL_claza7za7z00_2561;

				BgL_claza7za7z00_2561 =
					BGl_findzd2classzd2zz__objectz00(BgL_cidz00_113);
				if (BGl_classzf3zf3zz__objectz00(BgL_claza7za7z00_2561))
					{	/* Eval/evobject.scm 550 */
						obj_t BgL_idz00_2563;

						obj_t BgL_oz00_2564;

						obj_t BgL_az00_2565;

						obj_t BgL_locz00_2566;

						obj_t BgL_fieldsz00_2567;

						{	/* Eval/evobject.scm 550 */
							obj_t BgL_arg3550z00_2645;

							{	/* Eval/evobject.scm 550 */
								obj_t BgL_arg3551z00_2646;

								obj_t BgL_arg3552z00_2647;

								{	/* Eval/evobject.scm 550 */
									obj_t BgL_res5677z00_6631;

									{	/* Eval/evobject.scm 550 */
										obj_t BgL_symbolz00_6629;

										BgL_symbolz00_6629 = BGl_symbol5914z00zz__evobjectz00;
										{	/* Eval/evobject.scm 550 */
											obj_t BgL_arg5527z00_6630;

											BgL_arg5527z00_6630 =
												SYMBOL_TO_STRING(BgL_symbolz00_6629);
											BgL_res5677z00_6631 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg5527z00_6630);
										}
									}
									BgL_arg3551z00_2646 = BgL_res5677z00_6631;
								}
								{	/* Eval/evobject.scm 550 */
									obj_t BgL_res5678z00_6634;

									{	/* Eval/evobject.scm 550 */
										obj_t BgL_arg5527z00_6633;

										BgL_arg5527z00_6633 = SYMBOL_TO_STRING(BgL_cidz00_113);
										BgL_res5678z00_6634 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg5527z00_6633);
									}
									BgL_arg3552z00_2647 = BgL_res5678z00_6634;
								}
								{	/* Eval/evobject.scm 550 */
									obj_t BgL_list3553z00_2648;

									{	/* Eval/evobject.scm 550 */
										obj_t BgL_arg3554z00_2649;

										BgL_arg3554z00_2649 = MAKE_PAIR(BgL_arg3552z00_2647, BNIL);
										BgL_list3553z00_2648 =
											MAKE_PAIR(BgL_arg3551z00_2646, BgL_arg3554z00_2649);
									}
									BgL_arg3550z00_2645 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3553z00_2648);
								}
							}
							BgL_idz00_2563 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg3550z00_2645));
						}
						{	/* Eval/evobject.scm 551 */

							{	/* Eval/evobject.scm 551 */

								BgL_oz00_2564 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						{	/* Eval/evobject.scm 552 */

							{	/* Eval/evobject.scm 552 */

								BgL_az00_2565 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						{	/* Eval/evobject.scm 553 */

							{	/* Eval/evobject.scm 553 */

								BgL_locz00_2566 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						BgL_fieldsz00_2567 =
							BGl_classzd2allzd2fieldsz00zz__objectz00(BgL_claza7za7z00_2561);
						{	/* Eval/evobject.scm 555 */
							obj_t BgL_arg3471z00_2568;

							obj_t BgL_arg3472z00_2569;

							BgL_arg3471z00_2568 = BGl_symbol5901z00zz__evobjectz00;
							{	/* Eval/evobject.scm 555 */
								obj_t BgL_arg3473z00_2570;

								obj_t BgL_arg3474z00_2571;

								BgL_arg3473z00_2570 = BGl_keyword5903z00zz__evobjectz00;
								{	/* Eval/evobject.scm 557 */
									obj_t BgL_arg3479z00_2576;

									obj_t BgL_arg3480z00_2577;

									BgL_arg3479z00_2576 = BGl_symbol5884z00zz__evobjectz00;
									{	/* Eval/evobject.scm 557 */
										obj_t BgL_arg3482z00_2578;

										obj_t BgL_arg3483z00_2579;

										{	/* Eval/evobject.scm 557 */
											obj_t BgL_arg3487z00_2583;

											obj_t BgL_arg3488z00_2584;

											BgL_arg3487z00_2583 = BGl_symbol5818z00zz__evobjectz00;
											{	/* Eval/evobject.scm 557 */
												obj_t BgL_list3489z00_2585;

												BgL_list3489z00_2585 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3488z00_2584 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_symbol5905z00zz__evobjectz00,
													BgL_list3489z00_2585);
											}
											BgL_arg3482z00_2578 =
												MAKE_PAIR(BgL_arg3487z00_2583, BgL_arg3488z00_2584);
										}
										{	/* Eval/evobject.scm 558 */
											obj_t BgL_arg3490z00_2586;

											obj_t BgL_arg3491z00_2587;

											BgL_arg3490z00_2586 = BGl_symbol5838z00zz__evobjectz00;
											{	/* Eval/evobject.scm 558 */
												obj_t BgL_arg3492z00_2588;

												obj_t BgL_arg3493z00_2589;

												obj_t BgL_arg3494z00_2590;

												{	/* Eval/evobject.scm 558 */
													obj_t BgL_arg3499z00_2595;

													obj_t BgL_arg3500z00_2596;

													BgL_arg3499z00_2595 =
														BGl_symbol5918z00zz__evobjectz00;
													{	/* Eval/evobject.scm 558 */
														obj_t BgL_arg3501z00_2597;

														{	/* Eval/evobject.scm 558 */
															obj_t BgL_arg3504z00_2600;

															obj_t BgL_arg3505z00_2601;

															BgL_arg3504z00_2600 =
																BGl_symbol5907z00zz__evobjectz00;
															{	/* Eval/evobject.scm 558 */
																obj_t BgL_list3506z00_2602;

																BgL_list3506z00_2602 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3505z00_2601 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol5818z00zz__evobjectz00,
																	BgL_list3506z00_2602);
															}
															BgL_arg3501z00_2597 =
																MAKE_PAIR(BgL_arg3504z00_2600,
																BgL_arg3505z00_2601);
														}
														{	/* Eval/evobject.scm 558 */
															obj_t BgL_list3503z00_2599;

															BgL_list3503z00_2599 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3500z00_2596 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3501z00_2597, BgL_list3503z00_2599);
														}
													}
													BgL_arg3492z00_2588 =
														MAKE_PAIR(BgL_arg3499z00_2595, BgL_arg3500z00_2596);
												}
												{	/* Eval/evobject.scm 559 */
													obj_t BgL_arg3507z00_2603;

													obj_t BgL_arg3508z00_2604;

													BgL_arg3507z00_2603 =
														BGl_symbol5876z00zz__evobjectz00;
													{	/* Eval/evobject.scm 559 */
														obj_t BgL_list3509z00_2605;

														{	/* Eval/evobject.scm 559 */
															obj_t BgL_arg3511z00_2607;

															{	/* Eval/evobject.scm 559 */
																obj_t BgL_arg3512z00_2608;

																{	/* Eval/evobject.scm 559 */
																	obj_t BgL_arg3513z00_2609;

																	obj_t BgL_arg3514z00_2610;

																	BgL_arg3513z00_2609 =
																		BGl_symbol5818z00zz__evobjectz00;
																	BgL_arg3514z00_2610 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3512z00_2608 =
																		MAKE_PAIR(BgL_arg3513z00_2609,
																		BgL_arg3514z00_2610);
																}
																BgL_arg3511z00_2607 =
																	MAKE_PAIR(BFALSE, BgL_arg3512z00_2608);
															}
															BgL_list3509z00_2605 =
																MAKE_PAIR(BGl_string5920z00zz__evobjectz00,
																BgL_arg3511z00_2607);
														}
														BgL_arg3508z00_2604 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol5818z00zz__evobjectz00,
															BgL_list3509z00_2605);
													}
													BgL_arg3493z00_2589 =
														MAKE_PAIR(BgL_arg3507z00_2603, BgL_arg3508z00_2604);
												}
												{	/* Eval/evobject.scm 560 */
													obj_t BgL_arg3515z00_2611;

													obj_t BgL_arg3517z00_2612;

													BgL_arg3515z00_2611 =
														BGl_symbol5789z00zz__evobjectz00;
													{	/* Eval/evobject.scm 560 */
														obj_t BgL_arg3518z00_2613;

														obj_t BgL_arg3519z00_2614;

														{	/* Eval/evobject.scm 560 */
															obj_t BgL_arg3523z00_2618;

															obj_t BgL_arg3524z00_2619;

															{	/* Eval/evobject.scm 560 */
																obj_t BgL_arg3525z00_2620;

																{	/* Eval/evobject.scm 560 */
																	obj_t BgL_arg3526z00_2621;

																	{	/* Eval/evobject.scm 560 */
																		obj_t BgL_arg3529z00_2624;

																		obj_t BgL_arg3530z00_2625;

																		BgL_arg3529z00_2624 =
																			BGl_symbol5874z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 560 */
																			obj_t BgL_list3531z00_2626;

																			BgL_list3531z00_2626 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3530z00_2625 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5818z00zz__evobjectz00,
																				BgL_list3531z00_2626);
																		}
																		BgL_arg3526z00_2621 =
																			MAKE_PAIR(BgL_arg3529z00_2624,
																			BgL_arg3530z00_2625);
																	}
																	{	/* Eval/evobject.scm 560 */
																		obj_t BgL_list3528z00_2623;

																		BgL_list3528z00_2623 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3525z00_2620 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3526z00_2621,
																			BgL_list3528z00_2623);
																	}
																}
																BgL_arg3523z00_2618 =
																	MAKE_PAIR(BgL_oz00_2564, BgL_arg3525z00_2620);
															}
															{	/* Eval/evobject.scm 561 */
																obj_t BgL_arg3532z00_2627;

																{	/* Eval/evobject.scm 561 */
																	obj_t BgL_arg3535z00_2630;

																	{	/* Eval/evobject.scm 561 */
																		obj_t BgL_arg3536z00_2631;

																		{	/* Eval/evobject.scm 561 */
																			obj_t BgL_arg3539z00_2634;

																			obj_t BgL_arg3540z00_2635;

																			BgL_arg3539z00_2634 =
																				BGl_symbol5921z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 561 */
																				obj_t BgL_list3541z00_2636;

																				BgL_list3541z00_2636 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3540z00_2635 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol5818z00zz__evobjectz00,
																					BgL_list3541z00_2636);
																			}
																			BgL_arg3536z00_2631 =
																				MAKE_PAIR(BgL_arg3539z00_2634,
																				BgL_arg3540z00_2635);
																		}
																		{	/* Eval/evobject.scm 561 */
																			obj_t BgL_list3538z00_2633;

																			BgL_list3538z00_2633 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3535z00_2630 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3536z00_2631,
																				BgL_list3538z00_2633);
																		}
																	}
																	BgL_arg3532z00_2627 =
																		MAKE_PAIR(BgL_az00_2565,
																		BgL_arg3535z00_2630);
																}
																{	/* Eval/evobject.scm 560 */
																	obj_t BgL_list3534z00_2629;

																	BgL_list3534z00_2629 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3524z00_2619 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3532z00_2627, BgL_list3534z00_2629);
																}
															}
															BgL_arg3518z00_2613 =
																MAKE_PAIR(BgL_arg3523z00_2618,
																BgL_arg3524z00_2619);
														}
														{	/* Eval/evobject.scm 562 */
															obj_t BgL_arg3542z00_2637;

															obj_t BgL_arg3543z00_2638;

															BgL_arg3542z00_2637 =
																BGl_symbol5905z00zz__evobjectz00;
															{	/* Eval/evobject.scm 564 */
																obj_t BgL_arg3544z00_2639;

																obj_t BgL_arg3545z00_2640;

																BgL_arg3544z00_2639 =
																	BGl_evalzd2instantiatezd2checkz00zz__evobjectz00
																	(BgL_idz00_2563, BgL_az00_2565,
																	BgL_fieldsz00_2567,
																	BGl_evalzd2duplicatezd2ze3makeze3zz__evobjectz00
																	(BgL_cidz00_113, BgL_az00_2565, BgL_oz00_2564,
																		BgL_fieldsz00_2567));
																BgL_arg3545z00_2640 =
																	BGl_symbol5905z00zz__evobjectz00;
																{	/* Eval/evobject.scm 562 */
																	obj_t BgL_list3547z00_2642;

																	{	/* Eval/evobject.scm 562 */
																		obj_t BgL_arg3548z00_2643;

																		BgL_arg3548z00_2643 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3547z00_2642 =
																			MAKE_PAIR(BgL_arg3545z00_2640,
																			BgL_arg3548z00_2643);
																	}
																	BgL_arg3543z00_2638 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3544z00_2639, BgL_list3547z00_2642);
																}
															}
															BgL_arg3519z00_2614 =
																MAKE_PAIR(BgL_arg3542z00_2637,
																BgL_arg3543z00_2638);
														}
														{	/* Eval/evobject.scm 560 */
															obj_t BgL_list3521z00_2616;

															{	/* Eval/evobject.scm 560 */
																obj_t BgL_arg3522z00_2617;

																BgL_arg3522z00_2617 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3521z00_2616 =
																	MAKE_PAIR(BgL_arg3519z00_2614,
																	BgL_arg3522z00_2617);
															}
															BgL_arg3517z00_2612 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3518z00_2613, BgL_list3521z00_2616);
														}
													}
													BgL_arg3494z00_2590 =
														MAKE_PAIR(BgL_arg3515z00_2611, BgL_arg3517z00_2612);
												}
												{	/* Eval/evobject.scm 558 */
													obj_t BgL_list3496z00_2592;

													{	/* Eval/evobject.scm 558 */
														obj_t BgL_arg3497z00_2593;

														{	/* Eval/evobject.scm 558 */
															obj_t BgL_arg3498z00_2594;

															BgL_arg3498z00_2594 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3497z00_2593 =
																MAKE_PAIR(BgL_arg3494z00_2590,
																BgL_arg3498z00_2594);
														}
														BgL_list3496z00_2592 =
															MAKE_PAIR(BgL_arg3493z00_2589,
															BgL_arg3497z00_2593);
													}
													BgL_arg3491z00_2587 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3492z00_2588, BgL_list3496z00_2592);
												}
											}
											BgL_arg3483z00_2579 =
												MAKE_PAIR(BgL_arg3490z00_2586, BgL_arg3491z00_2587);
										}
										{	/* Eval/evobject.scm 557 */
											obj_t BgL_list3485z00_2581;

											{	/* Eval/evobject.scm 557 */
												obj_t BgL_arg3486z00_2582;

												BgL_arg3486z00_2582 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3485z00_2581 =
													MAKE_PAIR(BgL_arg3483z00_2579, BgL_arg3486z00_2582);
											}
											BgL_arg3480z00_2577 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3482z00_2578, BgL_list3485z00_2581);
										}
									}
									BgL_arg3474z00_2571 =
										MAKE_PAIR(BgL_arg3479z00_2576, BgL_arg3480z00_2577);
								}
								{	/* Eval/evobject.scm 555 */
									obj_t BgL_list3476z00_2573;

									{	/* Eval/evobject.scm 555 */
										obj_t BgL_arg3477z00_2574;

										{	/* Eval/evobject.scm 555 */
											obj_t BgL_arg3478z00_2575;

											BgL_arg3478z00_2575 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3477z00_2574 =
												MAKE_PAIR(BgL_arg3474z00_2571, BgL_arg3478z00_2575);
										}
										BgL_list3476z00_2573 =
											MAKE_PAIR(BgL_arg3473z00_2570, BgL_arg3477z00_2574);
									}
									BgL_arg3472z00_2569 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_idz00_2563,
										BgL_list3476z00_2573);
								}
							}
							return MAKE_PAIR(BgL_arg3471z00_2568, BgL_arg3472z00_2569);
						}
					}
				else
					{	/* Eval/evobject.scm 548 */
						return
							BGl_expandzd2errorzd2zz__evobjectz00
							(BGl_string5923z00zz__evobjectz00,
							BGl_string5910z00zz__evobjectz00, BgL_cidz00_113);
					}
			}
		}
	}



/* _eval-expand-duplicate */
	obj_t BGl__evalzd2expandzd2duplicatez00zz__evobjectz00(obj_t BgL_envz00_7950,
		obj_t BgL_cidz00_7951)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 546 */
			{	/* Eval/evobject.scm 547 */
				obj_t BgL_auxz00_9856;

				if (SYMBOLP(BgL_cidz00_7951))
					{	/* Eval/evobject.scm 547 */
						BgL_auxz00_9856 = BgL_cidz00_7951;
					}
				else
					{
						obj_t BgL_auxz00_9859;

						BgL_auxz00_9859 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5911z00zz__evobjectz00,
							BINT(((long) 20592)), BGl_string5924z00zz__evobjectz00,
							BGl_string5913z00zz__evobjectz00, BgL_cidz00_7951);
						FAILURE(BgL_auxz00_9859, BFALSE, BFALSE);
					}
				return BGl_evalzd2expandzd2duplicatez00zz__evobjectz00(BgL_auxz00_9856);
			}
		}
	}



/* eval-expand-with-access */
	BGL_EXPORTED_DEF obj_t
		BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00(obj_t BgL_cidz00_114)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 570 */
			{	/* Eval/evobject.scm 571 */
				obj_t BgL_claza7za7z00_2653;

				BgL_claza7za7z00_2653 =
					BGl_findzd2classzd2zz__objectz00(BgL_cidz00_114);
				if (BGl_classzf3zf3zz__objectz00(BgL_claza7za7z00_2653))
					{	/* Eval/evobject.scm 574 */
						obj_t BgL_widz00_2655;

						obj_t BgL_locz00_2656;

						obj_t BgL_fieldsz00_2657;

						{	/* Eval/evobject.scm 574 */
							obj_t BgL_arg3625z00_2726;

							{	/* Eval/evobject.scm 574 */
								obj_t BgL_arg3626z00_2727;

								obj_t BgL_arg3627z00_2728;

								{	/* Eval/evobject.scm 574 */
									obj_t BgL_res5679z00_6638;

									{	/* Eval/evobject.scm 574 */
										obj_t BgL_symbolz00_6636;

										BgL_symbolz00_6636 = BGl_symbol5925z00zz__evobjectz00;
										{	/* Eval/evobject.scm 574 */
											obj_t BgL_arg5527z00_6637;

											BgL_arg5527z00_6637 =
												SYMBOL_TO_STRING(BgL_symbolz00_6636);
											BgL_res5679z00_6638 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg5527z00_6637);
										}
									}
									BgL_arg3626z00_2727 = BgL_res5679z00_6638;
								}
								{	/* Eval/evobject.scm 574 */
									obj_t BgL_res5680z00_6641;

									{	/* Eval/evobject.scm 574 */
										obj_t BgL_arg5527z00_6640;

										BgL_arg5527z00_6640 = SYMBOL_TO_STRING(BgL_cidz00_114);
										BgL_res5680z00_6641 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg5527z00_6640);
									}
									BgL_arg3627z00_2728 = BgL_res5680z00_6641;
								}
								{	/* Eval/evobject.scm 574 */
									obj_t BgL_list3628z00_2729;

									{	/* Eval/evobject.scm 574 */
										obj_t BgL_arg3629z00_2730;

										BgL_arg3629z00_2730 = MAKE_PAIR(BgL_arg3627z00_2728, BNIL);
										BgL_list3628z00_2729 =
											MAKE_PAIR(BgL_arg3626z00_2727, BgL_arg3629z00_2730);
									}
									BgL_arg3625z00_2726 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3628z00_2729);
								}
							}
							BgL_widz00_2655 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg3625z00_2726));
						}
						{	/* Eval/evobject.scm 575 */

							{	/* Eval/evobject.scm 575 */

								BgL_locz00_2656 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						BgL_fieldsz00_2657 =
							BGl_classzd2allzd2fieldsz00zz__objectz00(BgL_claza7za7z00_2653);
						{	/* Eval/evobject.scm 577 */
							obj_t BgL_arg3556z00_2658;

							obj_t BgL_arg3557z00_2659;

							BgL_arg3556z00_2658 = BGl_symbol5901z00zz__evobjectz00;
							{	/* Eval/evobject.scm 577 */
								obj_t BgL_arg3558z00_2660;

								obj_t BgL_arg3559z00_2661;

								BgL_arg3558z00_2660 = BGl_keyword5903z00zz__evobjectz00;
								{	/* Eval/evobject.scm 579 */
									obj_t BgL_arg3564z00_2666;

									obj_t BgL_arg3565z00_2667;

									BgL_arg3564z00_2666 = BGl_symbol5884z00zz__evobjectz00;
									{	/* Eval/evobject.scm 579 */
										obj_t BgL_arg3566z00_2668;

										obj_t BgL_arg3567z00_2669;

										{	/* Eval/evobject.scm 579 */
											obj_t BgL_arg3571z00_2673;

											obj_t BgL_arg3572z00_2674;

											BgL_arg3571z00_2673 = BGl_symbol5818z00zz__evobjectz00;
											{	/* Eval/evobject.scm 579 */
												obj_t BgL_list3573z00_2675;

												BgL_list3573z00_2675 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3572z00_2674 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_symbol5905z00zz__evobjectz00,
													BgL_list3573z00_2675);
											}
											BgL_arg3566z00_2668 =
												MAKE_PAIR(BgL_arg3571z00_2673, BgL_arg3572z00_2674);
										}
										{	/* Eval/evobject.scm 580 */
											obj_t BgL_arg3574z00_2676;

											obj_t BgL_arg3575z00_2677;

											BgL_arg3574z00_2676 = BGl_symbol5927z00zz__evobjectz00;
											{	/* Eval/evobject.scm 580 */
												obj_t BgL_arg3576z00_2678;

												obj_t BgL_arg3577z00_2679;

												obj_t BgL_arg3578z00_2680;

												BgL_arg3576z00_2678 = BGl_symbol5818z00zz__evobjectz00;
												{	/* Eval/evobject.scm 581 */
													obj_t BgL_arg3583z00_2685;

													obj_t BgL_arg3584z00_2686;

													{	/* Eval/evobject.scm 581 */
														obj_t BgL_arg3585z00_2687;

														obj_t BgL_arg3586z00_2688;

														BgL_arg3585z00_2687 =
															BGl_symbol5929z00zz__evobjectz00;
														{	/* Eval/evobject.scm 581 */
															obj_t BgL_arg3587z00_2689;

															obj_t BgL_arg3588z00_2690;

															obj_t BgL_arg3589z00_2691;

															BgL_arg3587z00_2689 =
																BGl_symbol5931z00zz__evobjectz00;
															{	/* Eval/evobject.scm 581 */
																obj_t BgL_arg3592z00_2694;

																obj_t BgL_arg3593z00_2695;

																BgL_arg3592z00_2694 =
																	BGl_symbol5933z00zz__evobjectz00;
																{	/* Eval/evobject.scm 581 */
																	obj_t BgL_arg3594z00_2696;

																	obj_t BgL_arg3595z00_2697;

																	{	/* Eval/evobject.scm 581 */
																		obj_t BgL_arg3599z00_2701;

																		obj_t BgL_arg3600z00_2702;

																		BgL_arg3599z00_2701 =
																			BGl_symbol5816z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 581 */
																			obj_t BgL_list3601z00_2703;

																			BgL_list3601z00_2703 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3600z00_2702 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5935z00zz__evobjectz00,
																				BgL_list3601z00_2703);
																		}
																		BgL_arg3594z00_2696 =
																			MAKE_PAIR(BgL_arg3599z00_2701,
																			BgL_arg3600z00_2702);
																	}
																	BgL_arg3595z00_2697 =
																		BGl_symbol5937z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 581 */
																		obj_t BgL_list3597z00_2699;

																		{	/* Eval/evobject.scm 581 */
																			obj_t BgL_arg3598z00_2700;

																			BgL_arg3598z00_2700 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3597z00_2699 =
																				MAKE_PAIR(BgL_arg3595z00_2697,
																				BgL_arg3598z00_2700);
																		}
																		BgL_arg3593z00_2695 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3594z00_2696,
																			BgL_list3597z00_2699);
																	}
																}
																BgL_arg3588z00_2690 =
																	MAKE_PAIR(BgL_arg3592z00_2694,
																	BgL_arg3593z00_2695);
															}
															BgL_arg3589z00_2691 =
																BGl_symbol5939z00zz__evobjectz00;
															{	/* Eval/evobject.scm 581 */
																obj_t BgL_list3590z00_2692;

																{	/* Eval/evobject.scm 581 */
																	obj_t BgL_arg3591z00_2693;

																	BgL_arg3591z00_2693 =
																		MAKE_PAIR(BgL_arg3589z00_2691, BNIL);
																	BgL_list3590z00_2692 =
																		MAKE_PAIR(BgL_arg3588z00_2690,
																		BgL_arg3591z00_2693);
																}
																BgL_arg3586z00_2688 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3587z00_2689, BgL_list3590z00_2692);
															}
														}
														BgL_arg3583z00_2685 =
															MAKE_PAIR(BgL_arg3585z00_2687,
															BgL_arg3586z00_2688);
													}
													{	/* Eval/evobject.scm 582 */
														obj_t BgL_arg3602z00_2704;

														BgL_arg3602z00_2704 =
															BGl_evalzd2withzd2accesszd2expanderzd2zz__evobjectz00
															(BgL_cidz00_114, BgL_fieldsz00_2657,
															BGl_symbol5818z00zz__evobjectz00);
														{	/* Eval/evobject.scm 581 */
															obj_t BgL_list3604z00_2706;

															BgL_list3604z00_2706 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3584z00_2686 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3602z00_2704, BgL_list3604z00_2706);
														}
													}
													BgL_arg3577z00_2679 =
														MAKE_PAIR(BgL_arg3583z00_2685, BgL_arg3584z00_2686);
												}
												{	/* Eval/evobject.scm 583 */
													obj_t BgL_arg3605z00_2707;

													obj_t BgL_arg3606z00_2708;

													BgL_arg3605z00_2707 =
														BGl_symbol5941z00zz__evobjectz00;
													{	/* Eval/evobject.scm 584 */
														obj_t BgL_arg3607z00_2709;

														{	/* Eval/evobject.scm 584 */
															obj_t BgL_arg3610z00_2712;

															obj_t BgL_arg3612z00_2713;

															BgL_arg3610z00_2712 =
																BGl_symbol5876z00zz__evobjectz00;
															{	/* Eval/evobject.scm 584 */
																obj_t BgL_arg3613z00_2714;

																obj_t BgL_arg3615z00_2716;

																obj_t BgL_arg3616z00_2717;

																{	/* Eval/evobject.scm 584 */
																	obj_t BgL_arg3622z00_2723;

																	obj_t BgL_arg3623z00_2724;

																	BgL_arg3622z00_2723 =
																		BGl_symbol5842z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 584 */
																		obj_t BgL_list3624z00_2725;

																		BgL_list3624z00_2725 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3623z00_2724 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_widz00_2655, BgL_list3624z00_2725);
																	}
																	BgL_arg3613z00_2714 =
																		MAKE_PAIR(BgL_arg3622z00_2723,
																		BgL_arg3623z00_2724);
																}
																BgL_arg3615z00_2716 =
																	BGl_symbol5818z00zz__evobjectz00;
																BgL_arg3616z00_2717 =
																	BGl_symbol5818z00zz__evobjectz00;
																{	/* Eval/evobject.scm 584 */
																	obj_t BgL_list3618z00_2719;

																	{	/* Eval/evobject.scm 584 */
																		obj_t BgL_arg3619z00_2720;

																		{	/* Eval/evobject.scm 584 */
																			obj_t BgL_arg3620z00_2721;

																			{	/* Eval/evobject.scm 584 */
																				obj_t BgL_arg3621z00_2722;

																				BgL_arg3621z00_2722 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3620z00_2721 =
																					MAKE_PAIR(BgL_arg3616z00_2717,
																					BgL_arg3621z00_2722);
																			}
																			BgL_arg3619z00_2720 =
																				MAKE_PAIR(BgL_arg3615z00_2716,
																				BgL_arg3620z00_2721);
																		}
																		BgL_list3618z00_2719 =
																			MAKE_PAIR
																			(BGl_string5943z00zz__evobjectz00,
																			BgL_arg3619z00_2720);
																	}
																	BgL_arg3612z00_2713 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3613z00_2714, BgL_list3618z00_2719);
																}
															}
															BgL_arg3607z00_2709 =
																MAKE_PAIR(BgL_arg3610z00_2712,
																BgL_arg3612z00_2713);
														}
														{	/* Eval/evobject.scm 583 */
															obj_t BgL_list3609z00_2711;

															BgL_list3609z00_2711 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3606z00_2708 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3607z00_2709, BgL_list3609z00_2711);
														}
													}
													BgL_arg3578z00_2680 =
														MAKE_PAIR(BgL_arg3605z00_2707, BgL_arg3606z00_2708);
												}
												{	/* Eval/evobject.scm 580 */
													obj_t BgL_list3580z00_2682;

													{	/* Eval/evobject.scm 580 */
														obj_t BgL_arg3581z00_2683;

														{	/* Eval/evobject.scm 580 */
															obj_t BgL_arg3582z00_2684;

															BgL_arg3582z00_2684 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3581z00_2683 =
																MAKE_PAIR(BgL_arg3578z00_2680,
																BgL_arg3582z00_2684);
														}
														BgL_list3580z00_2682 =
															MAKE_PAIR(BgL_arg3577z00_2679,
															BgL_arg3581z00_2683);
													}
													BgL_arg3575z00_2677 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3576z00_2678, BgL_list3580z00_2682);
												}
											}
											BgL_arg3567z00_2669 =
												MAKE_PAIR(BgL_arg3574z00_2676, BgL_arg3575z00_2677);
										}
										{	/* Eval/evobject.scm 579 */
											obj_t BgL_list3569z00_2671;

											{	/* Eval/evobject.scm 579 */
												obj_t BgL_arg3570z00_2672;

												BgL_arg3570z00_2672 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3569z00_2671 =
													MAKE_PAIR(BgL_arg3567z00_2669, BgL_arg3570z00_2672);
											}
											BgL_arg3565z00_2667 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3566z00_2668, BgL_list3569z00_2671);
										}
									}
									BgL_arg3559z00_2661 =
										MAKE_PAIR(BgL_arg3564z00_2666, BgL_arg3565z00_2667);
								}
								{	/* Eval/evobject.scm 577 */
									obj_t BgL_list3561z00_2663;

									{	/* Eval/evobject.scm 577 */
										obj_t BgL_arg3562z00_2664;

										{	/* Eval/evobject.scm 577 */
											obj_t BgL_arg3563z00_2665;

											BgL_arg3563z00_2665 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3562z00_2664 =
												MAKE_PAIR(BgL_arg3559z00_2661, BgL_arg3563z00_2665);
										}
										BgL_list3561z00_2663 =
											MAKE_PAIR(BgL_arg3558z00_2660, BgL_arg3562z00_2664);
									}
									BgL_arg3557z00_2659 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_widz00_2655,
										BgL_list3561z00_2663);
								}
							}
							return MAKE_PAIR(BgL_arg3556z00_2658, BgL_arg3557z00_2659);
						}
					}
				else
					{	/* Eval/evobject.scm 572 */
						return
							BGl_expandzd2errorzd2zz__evobjectz00
							(BGl_string5944z00zz__evobjectz00,
							BGl_string5910z00zz__evobjectz00, BgL_cidz00_114);
					}
			}
		}
	}



/* _eval-expand-with-access */
	obj_t BGl__evalzd2expandzd2withzd2accesszd2zz__evobjectz00(obj_t
		BgL_envz00_7952, obj_t BgL_cidz00_7953)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 570 */
			{	/* Eval/evobject.scm 571 */
				obj_t BgL_auxz00_9923;

				if (SYMBOLP(BgL_cidz00_7953))
					{	/* Eval/evobject.scm 571 */
						BgL_auxz00_9923 = BgL_cidz00_7953;
					}
				else
					{
						obj_t BgL_auxz00_9926;

						BgL_auxz00_9926 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5911z00zz__evobjectz00,
							BINT(((long) 21387)), BGl_string5945z00zz__evobjectz00,
							BGl_string5913z00zz__evobjectz00, BgL_cidz00_7953);
						FAILURE(BgL_auxz00_9926, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00(BgL_auxz00_9923);
			}
		}
	}



/* eval-with-access-expander */
	obj_t BGl_evalzd2withzd2accesszd2expanderzd2zz__evobjectz00(obj_t
		BgL_idz00_115, obj_t BgL_allzd2fieldszd2_116, obj_t BgL_sourcez00_117)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 592 */
			{	/* Eval/evobject.scm 593 */
				obj_t BgL_arg3630z00_2732;

				obj_t BgL_arg3631z00_2733;

				BgL_arg3630z00_2732 = BGl_symbol5916z00zz__evobjectz00;
				{	/* Eval/evobject.scm 593 */
					obj_t BgL_arg3632z00_2734;

					obj_t BgL_arg3633z00_2735;

					{	/* Eval/evobject.scm 593 */
						obj_t BgL_arg3637z00_2739;

						obj_t BgL_arg3638z00_2740;

						{	/* Eval/evobject.scm 593 */
							obj_t BgL_arg3639z00_2741;

							obj_t BgL_arg3640z00_2742;

							BgL_arg3639z00_2741 = BGl_symbol5946z00zz__evobjectz00;
							{	/* Eval/evobject.scm 593 */
								obj_t BgL_arg3641z00_2743;

								{	/* Eval/evobject.scm 593 */
									obj_t BgL_arg3644z00_2746;

									obj_t BgL_arg3645z00_2747;

									BgL_arg3644z00_2746 = BGl_symbol5842z00zz__evobjectz00;
									{	/* Eval/evobject.scm 593 */
										obj_t BgL_arg3646z00_2748;

										if (NULLP(BgL_allzd2fieldszd2_116))
											{	/* Eval/evobject.scm 593 */
												BgL_arg3646z00_2748 = BNIL;
											}
										else
											{	/* Eval/evobject.scm 593 */
												obj_t BgL_head1958z00_2753;

												BgL_head1958z00_2753 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_l1956z00_2755;

													obj_t BgL_tail1959z00_2756;

													BgL_l1956z00_2755 = BgL_allzd2fieldszd2_116;
													BgL_tail1959z00_2756 = BgL_head1958z00_2753;
												BgL_zc3anonymousza33650ze3z83_2757:
													if (NULLP(BgL_l1956z00_2755))
														{	/* Eval/evobject.scm 593 */
															BgL_arg3646z00_2748 = CDR(BgL_head1958z00_2753);
														}
													else
														{	/* Eval/evobject.scm 593 */
															obj_t BgL_newtail1960z00_2759;

															{	/* Eval/evobject.scm 593 */
																obj_t BgL_arg3653z00_2761;

																{	/* Eval/evobject.scm 593 */
																	obj_t BgL_fz00_2763;

																	BgL_fz00_2763 = CAR(BgL_l1956z00_2755);
																	{	/* Eval/evobject.scm 594 */
																		obj_t BgL_arg3655z00_2764;

																		bool_t BgL_arg3656z00_2765;

																		bool_t BgL_arg3657z00_2766;

																		BgL_arg3655z00_2764 =
																			BGl_classzd2fieldzd2namez00zz__objectz00
																			(BgL_fz00_2763);
																		if (BGl_classzd2fieldzd2indexedzf3zf3zz__objectz00(BgL_fz00_2763))
																			{	/* Eval/evobject.scm 595 */
																				BgL_arg3656z00_2765 = ((bool_t) 1);
																			}
																		else
																			{	/* Eval/evobject.scm 595 */
																				BgL_arg3656z00_2765 = ((bool_t) 0);
																			}
																		if (BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(BgL_fz00_2763))
																			{	/* Eval/evobject.scm 596 */
																				BgL_arg3657z00_2766 = ((bool_t) 0);
																			}
																		else
																			{	/* Eval/evobject.scm 596 */
																				BgL_arg3657z00_2766 = ((bool_t) 1);
																			}
																		{	/* Eval/evobject.scm 594 */
																			obj_t BgL_list3658z00_2767;

																			{	/* Eval/evobject.scm 594 */
																				obj_t BgL_arg3659z00_2768;

																				{	/* Eval/evobject.scm 594 */
																					obj_t BgL_arg3660z00_2769;

																					BgL_arg3660z00_2769 =
																						MAKE_PAIR(BBOOL
																						(BgL_arg3657z00_2766), BNIL);
																					BgL_arg3659z00_2768 =
																						MAKE_PAIR(BBOOL
																						(BgL_arg3656z00_2765),
																						BgL_arg3660z00_2769);
																				}
																				BgL_list3658z00_2767 =
																					MAKE_PAIR(BgL_arg3655z00_2764,
																					BgL_arg3659z00_2768);
																			}
																			BgL_arg3653z00_2761 =
																				BgL_list3658z00_2767;
																		}
																	}
																}
																BgL_newtail1960z00_2759 =
																	MAKE_PAIR(BgL_arg3653z00_2761, BNIL);
															}
															SET_CDR(BgL_tail1959z00_2756,
																BgL_newtail1960z00_2759);
															{
																obj_t BgL_tail1959z00_9952;

																obj_t BgL_l1956z00_9950;

																BgL_l1956z00_9950 = CDR(BgL_l1956z00_2755);
																BgL_tail1959z00_9952 = BgL_newtail1960z00_2759;
																BgL_tail1959z00_2756 = BgL_tail1959z00_9952;
																BgL_l1956z00_2755 = BgL_l1956z00_9950;
																goto BgL_zc3anonymousza33650ze3z83_2757;
															}
														}
												}
											}
										{	/* Eval/evobject.scm 593 */
											obj_t BgL_list3648z00_2750;

											BgL_list3648z00_2750 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3645z00_2747 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3646z00_2748, BgL_list3648z00_2750);
										}
									}
									BgL_arg3641z00_2743 =
										MAKE_PAIR(BgL_arg3644z00_2746, BgL_arg3645z00_2747);
								}
								{	/* Eval/evobject.scm 593 */
									obj_t BgL_list3643z00_2745;

									BgL_list3643z00_2745 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3640z00_2742 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3641z00_2743, BgL_list3643z00_2745);
								}
							}
							BgL_arg3637z00_2739 =
								MAKE_PAIR(BgL_arg3639z00_2741, BgL_arg3640z00_2742);
						}
						{	/* Eval/evobject.scm 598 */
							obj_t BgL_arg3663z00_2773;

							obj_t BgL_arg3664z00_2774;

							obj_t BgL_arg3665z00_2775;

							obj_t BgL_arg3666z00_2776;

							{	/* Eval/evobject.scm 598 */
								obj_t BgL_arg3673z00_2782;

								obj_t BgL_arg3674z00_2783;

								BgL_arg3673z00_2782 = BGl_symbol5948z00zz__evobjectz00;
								{	/* Eval/evobject.scm 598 */
									obj_t BgL_arg3675z00_2784;

									{	/* Eval/evobject.scm 598 */
										obj_t BgL_arg3679z00_2787;

										obj_t BgL_arg3680z00_2788;

										BgL_arg3679z00_2787 = BGl_symbol5950z00zz__evobjectz00;
										{	/* Eval/evobject.scm 598 */
											obj_t BgL_arg3681z00_2789;

											obj_t BgL_arg3682z00_2790;

											{	/* Eval/evobject.scm 598 */
												obj_t BgL_arg3686z00_2794;

												obj_t BgL_arg3687z00_2795;

												BgL_arg3686z00_2794 = BGl_symbol5884z00zz__evobjectz00;
												{	/* Eval/evobject.scm 598 */
													obj_t BgL_arg3688z00_2796;

													obj_t BgL_arg3689z00_2797;

													BgL_arg3688z00_2796 =
														MAKE_PAIR(BGl_symbol5836z00zz__evobjectz00, BNIL);
													{	/* Eval/evobject.scm 599 */
														obj_t BgL_arg3693z00_2801;

														obj_t BgL_arg3694z00_2802;

														BgL_arg3693z00_2801 =
															BGl_symbol5952z00zz__evobjectz00;
														{	/* Eval/evobject.scm 600 */
															obj_t BgL_arg3695z00_2803;

															obj_t BgL_arg3696z00_2804;

															obj_t BgL_arg3697z00_2805;

															{	/* Eval/evobject.scm 600 */
																obj_t BgL_arg3702z00_2810;

																obj_t BgL_arg3703z00_2811;

																{	/* Eval/evobject.scm 600 */
																	obj_t BgL_arg3704z00_2812;

																	obj_t BgL_arg3705z00_2813;

																	BgL_arg3704z00_2812 =
																		BGl_symbol5892z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 600 */
																		obj_t BgL_list3706z00_2814;

																		BgL_list3706z00_2814 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3705z00_2813 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5836z00zz__evobjectz00,
																			BgL_list3706z00_2814);
																	}
																	BgL_arg3702z00_2810 =
																		MAKE_PAIR(BgL_arg3704z00_2812,
																		BgL_arg3705z00_2813);
																}
																{	/* Eval/evobject.scm 601 */
																	obj_t BgL_arg3707z00_2815;

																	{	/* Eval/evobject.scm 601 */
																		obj_t BgL_arg3710z00_2818;

																		obj_t BgL_arg3711z00_2819;

																		BgL_arg3710z00_2818 =
																			BGl_symbol5838z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 601 */
																			obj_t BgL_arg3712z00_2820;

																			obj_t BgL_arg3713z00_2821;

																			obj_t BgL_arg3714z00_2822;

																			{	/* Eval/evobject.scm 601 */
																				obj_t BgL_arg3719z00_2827;

																				obj_t BgL_arg3720z00_2828;

																				BgL_arg3719z00_2827 =
																					BGl_symbol5870z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 601 */
																					obj_t BgL_list3721z00_2829;

																					{	/* Eval/evobject.scm 601 */
																						obj_t BgL_arg3722z00_2830;

																						obj_t BgL_arg3723z00_2831;

																						BgL_arg3722z00_2830 =
																							BGl_symbol5946z00zz__evobjectz00;
																						BgL_arg3723z00_2831 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3721z00_2829 =
																							MAKE_PAIR(BgL_arg3722z00_2830,
																							BgL_arg3723z00_2831);
																					}
																					BgL_arg3720z00_2828 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5836z00zz__evobjectz00,
																						BgL_list3721z00_2829);
																				}
																				BgL_arg3712z00_2820 =
																					MAKE_PAIR(BgL_arg3719z00_2827,
																					BgL_arg3720z00_2828);
																			}
																			{	/* Eval/evobject.scm 602 */
																				obj_t BgL_arg3724z00_2832;

																				obj_t BgL_arg3725z00_2833;

																				BgL_arg3724z00_2832 =
																					BGl_symbol5850z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 602 */
																					obj_t BgL_list3726z00_2834;

																					{	/* Eval/evobject.scm 602 */
																						obj_t BgL_arg3727z00_2835;

																						obj_t BgL_arg3728z00_2836;

																						BgL_arg3727z00_2835 =
																							BGl_symbol5836z00zz__evobjectz00;
																						BgL_arg3728z00_2836 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3726z00_2834 =
																							MAKE_PAIR(BgL_arg3727z00_2835,
																							BgL_arg3728z00_2836);
																					}
																					BgL_arg3725z00_2833 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5836z00zz__evobjectz00,
																						BgL_list3726z00_2834);
																				}
																				BgL_arg3713z00_2821 =
																					MAKE_PAIR(BgL_arg3724z00_2832,
																					BgL_arg3725z00_2833);
																			}
																			{	/* Eval/evobject.scm 603 */
																				obj_t BgL_arg3729z00_2837;

																				obj_t BgL_arg3730z00_2838;

																				BgL_arg3729z00_2837 =
																					BGl_symbol5876z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 604 */
																					obj_t BgL_arg3731z00_2839;

																					obj_t BgL_arg3733z00_2841;

																					{	/* Eval/evobject.scm 604 */
																						obj_t BgL_arg3739z00_2847;

																						obj_t BgL_arg3740z00_2848;

																						BgL_arg3739z00_2847 =
																							BGl_symbol5842z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 604 */
																							obj_t BgL_arg3741z00_2849;

																							{	/* Eval/evobject.scm 604 */
																								obj_t BgL_arg3745z00_2852;

																								{	/* Eval/evobject.scm 604 */
																									obj_t BgL_arg3746z00_2853;

																									obj_t BgL_arg3747z00_2854;

																									{	/* Eval/evobject.scm 604 */
																										obj_t BgL_res5682z00_6658;

																										{	/* Eval/evobject.scm 604 */
																											obj_t BgL_symbolz00_6656;

																											BgL_symbolz00_6656 =
																												BGl_symbol5925z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 604 */
																												obj_t
																													BgL_arg5527z00_6657;
																												BgL_arg5527z00_6657 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_6656);
																												BgL_res5682z00_6658 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg5527z00_6657);
																											}
																										}
																										BgL_arg3746z00_2853 =
																											BgL_res5682z00_6658;
																									}
																									{	/* Eval/evobject.scm 604 */
																										obj_t BgL_res5683z00_6661;

																										{	/* Eval/evobject.scm 604 */
																											obj_t BgL_arg5527z00_6660;

																											BgL_arg5527z00_6660 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_115);
																											BgL_res5683z00_6661 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg5527z00_6660);
																										}
																										BgL_arg3747z00_2854 =
																											BgL_res5683z00_6661;
																									}
																									{	/* Eval/evobject.scm 604 */
																										obj_t BgL_list3748z00_2855;

																										{	/* Eval/evobject.scm 604 */
																											obj_t BgL_arg3749z00_2856;

																											BgL_arg3749z00_2856 =
																												MAKE_PAIR
																												(BgL_arg3747z00_2854,
																												BNIL);
																											BgL_list3748z00_2855 =
																												MAKE_PAIR
																												(BgL_arg3746z00_2853,
																												BgL_arg3749z00_2856);
																										}
																										BgL_arg3745z00_2852 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list3748z00_2855);
																									}
																								}
																								BgL_arg3741z00_2849 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg3745z00_2852));
																							}
																							{	/* Eval/evobject.scm 604 */
																								obj_t BgL_list3743z00_2851;

																								BgL_list3743z00_2851 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3740z00_2848 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3741z00_2849,
																									BgL_list3743z00_2851);
																							}
																						}
																						BgL_arg3731z00_2839 =
																							MAKE_PAIR(BgL_arg3739z00_2847,
																							BgL_arg3740z00_2848);
																					}
																					BgL_arg3733z00_2841 =
																						BGl_symbol5836z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 603 */
																						obj_t BgL_list3735z00_2843;

																						{	/* Eval/evobject.scm 603 */
																							obj_t BgL_arg3736z00_2844;

																							{	/* Eval/evobject.scm 603 */
																								obj_t BgL_arg3737z00_2845;

																								{	/* Eval/evobject.scm 603 */
																									obj_t BgL_arg3738z00_2846;

																									BgL_arg3738z00_2846 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3737z00_2845 =
																										MAKE_PAIR(BgL_sourcez00_117,
																										BgL_arg3738z00_2846);
																								}
																								BgL_arg3736z00_2844 =
																									MAKE_PAIR(BgL_arg3733z00_2841,
																									BgL_arg3737z00_2845);
																							}
																							BgL_list3735z00_2843 =
																								MAKE_PAIR
																								(BGl_string5954z00zz__evobjectz00,
																								BgL_arg3736z00_2844);
																						}
																						BgL_arg3730z00_2838 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3731z00_2839,
																							BgL_list3735z00_2843);
																					}
																				}
																				BgL_arg3714z00_2822 =
																					MAKE_PAIR(BgL_arg3729z00_2837,
																					BgL_arg3730z00_2838);
																			}
																			{	/* Eval/evobject.scm 601 */
																				obj_t BgL_list3716z00_2824;

																				{	/* Eval/evobject.scm 601 */
																					obj_t BgL_arg3717z00_2825;

																					{	/* Eval/evobject.scm 601 */
																						obj_t BgL_arg3718z00_2826;

																						BgL_arg3718z00_2826 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3717z00_2825 =
																							MAKE_PAIR(BgL_arg3714z00_2822,
																							BgL_arg3718z00_2826);
																					}
																					BgL_list3716z00_2824 =
																						MAKE_PAIR(BgL_arg3713z00_2821,
																						BgL_arg3717z00_2825);
																				}
																				BgL_arg3711z00_2819 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3712z00_2820,
																					BgL_list3716z00_2824);
																			}
																		}
																		BgL_arg3707z00_2815 =
																			MAKE_PAIR(BgL_arg3710z00_2818,
																			BgL_arg3711z00_2819);
																	}
																	{	/* Eval/evobject.scm 600 */
																		obj_t BgL_list3709z00_2817;

																		BgL_list3709z00_2817 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3703z00_2811 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3707z00_2815,
																			BgL_list3709z00_2817);
																	}
																}
																BgL_arg3695z00_2803 =
																	MAKE_PAIR(BgL_arg3702z00_2810,
																	BgL_arg3703z00_2811);
															}
															{	/* Eval/evobject.scm 608 */
																obj_t BgL_arg3750z00_2857;

																obj_t BgL_arg3751z00_2858;

																{	/* Eval/evobject.scm 608 */
																	obj_t BgL_arg3752z00_2859;

																	obj_t BgL_arg3753z00_2860;

																	BgL_arg3752z00_2859 =
																		BGl_symbol5933z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 608 */
																		obj_t BgL_arg3754z00_2861;

																		obj_t BgL_arg3755z00_2862;

																		obj_t BgL_arg3756z00_2863;

																		obj_t BgL_arg3757z00_2864;

																		obj_t BgL_arg3758z00_2865;

																		{	/* Eval/evobject.scm 608 */
																			obj_t BgL_arg3765z00_2872;

																			obj_t BgL_arg3766z00_2873;

																			BgL_arg3765z00_2872 =
																				BGl_symbol5872z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 608 */
																				obj_t BgL_list3767z00_2874;

																				BgL_list3767z00_2874 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3766z00_2873 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol5836z00zz__evobjectz00,
																					BgL_list3767z00_2874);
																			}
																			BgL_arg3754z00_2861 =
																				MAKE_PAIR(BgL_arg3765z00_2872,
																				BgL_arg3766z00_2873);
																		}
																		{	/* Eval/evobject.scm 608 */
																			obj_t BgL_arg3768z00_2875;

																			obj_t BgL_arg3769z00_2876;

																			BgL_arg3768z00_2875 =
																				BGl_symbol5892z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 608 */
																				obj_t BgL_arg3770z00_2877;

																				{	/* Eval/evobject.scm 608 */
																					obj_t BgL_arg3773z00_2880;

																					obj_t BgL_arg3774z00_2881;

																					BgL_arg3773z00_2880 =
																						BGl_symbol5894z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 608 */
																						obj_t BgL_list3775z00_2882;

																						BgL_list3775z00_2882 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3774z00_2881 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_symbol5836z00zz__evobjectz00,
																							BgL_list3775z00_2882);
																					}
																					BgL_arg3770z00_2877 =
																						MAKE_PAIR(BgL_arg3773z00_2880,
																						BgL_arg3774z00_2881);
																				}
																				{	/* Eval/evobject.scm 608 */
																					obj_t BgL_list3772z00_2879;

																					BgL_list3772z00_2879 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3769z00_2876 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3770z00_2877,
																						BgL_list3772z00_2879);
																				}
																			}
																			BgL_arg3755z00_2862 =
																				MAKE_PAIR(BgL_arg3768z00_2875,
																				BgL_arg3769z00_2876);
																		}
																		{	/* Eval/evobject.scm 609 */
																			obj_t BgL_arg3776z00_2883;

																			obj_t BgL_arg3777z00_2884;

																			BgL_arg3776z00_2883 =
																				BGl_symbol5872z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 609 */
																				obj_t BgL_arg3778z00_2885;

																				{	/* Eval/evobject.scm 609 */
																					obj_t BgL_arg3781z00_2888;

																					obj_t BgL_arg3782z00_2889;

																					BgL_arg3781z00_2888 =
																						BGl_symbol5907z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 609 */
																						obj_t BgL_list3783z00_2890;

																						BgL_list3783z00_2890 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3782z00_2889 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_symbol5836z00zz__evobjectz00,
																							BgL_list3783z00_2890);
																					}
																					BgL_arg3778z00_2885 =
																						MAKE_PAIR(BgL_arg3781z00_2888,
																						BgL_arg3782z00_2889);
																				}
																				{	/* Eval/evobject.scm 609 */
																					obj_t BgL_list3780z00_2887;

																					BgL_list3780z00_2887 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3777z00_2884 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3778z00_2885,
																						BgL_list3780z00_2887);
																				}
																			}
																			BgL_arg3756z00_2863 =
																				MAKE_PAIR(BgL_arg3776z00_2883,
																				BgL_arg3777z00_2884);
																		}
																		{	/* Eval/evobject.scm 609 */
																			obj_t BgL_arg3784z00_2891;

																			obj_t BgL_arg3785z00_2892;

																			BgL_arg3784z00_2891 =
																				BGl_symbol5892z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 609 */
																				obj_t BgL_arg3786z00_2893;

																				{	/* Eval/evobject.scm 609 */
																					obj_t BgL_arg3789z00_2896;

																					obj_t BgL_arg3790z00_2897;

																					BgL_arg3789z00_2896 =
																						BGl_symbol5874z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 609 */
																						obj_t BgL_list3791z00_2898;

																						BgL_list3791z00_2898 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3790z00_2897 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_symbol5836z00zz__evobjectz00,
																							BgL_list3791z00_2898);
																					}
																					BgL_arg3786z00_2893 =
																						MAKE_PAIR(BgL_arg3789z00_2896,
																						BgL_arg3790z00_2897);
																				}
																				{	/* Eval/evobject.scm 609 */
																					obj_t BgL_list3788z00_2895;

																					BgL_list3788z00_2895 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3785z00_2892 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3786z00_2893,
																						BgL_list3788z00_2895);
																				}
																			}
																			BgL_arg3757z00_2864 =
																				MAKE_PAIR(BgL_arg3784z00_2891,
																				BgL_arg3785z00_2892);
																		}
																		{	/* Eval/evobject.scm 610 */
																			obj_t BgL_arg3792z00_2899;

																			obj_t BgL_arg3793z00_2900;

																			BgL_arg3792z00_2899 =
																				BGl_symbol5918z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 610 */
																				obj_t BgL_arg3794z00_2901;

																				{	/* Eval/evobject.scm 610 */
																					obj_t BgL_arg3797z00_2904;

																					obj_t BgL_arg3798z00_2905;

																					BgL_arg3797z00_2904 =
																						BGl_symbol5921z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 610 */
																						obj_t BgL_list3799z00_2906;

																						BgL_list3799z00_2906 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3798z00_2905 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_symbol5836z00zz__evobjectz00,
																							BgL_list3799z00_2906);
																					}
																					BgL_arg3794z00_2901 =
																						MAKE_PAIR(BgL_arg3797z00_2904,
																						BgL_arg3798z00_2905);
																				}
																				{	/* Eval/evobject.scm 610 */
																					obj_t BgL_list3796z00_2903;

																					BgL_list3796z00_2903 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3793z00_2900 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3794z00_2901,
																						BgL_list3796z00_2903);
																				}
																			}
																			BgL_arg3758z00_2865 =
																				MAKE_PAIR(BgL_arg3792z00_2899,
																				BgL_arg3793z00_2900);
																		}
																		{	/* Eval/evobject.scm 608 */
																			obj_t BgL_list3760z00_2867;

																			{	/* Eval/evobject.scm 608 */
																				obj_t BgL_arg3761z00_2868;

																				{	/* Eval/evobject.scm 608 */
																					obj_t BgL_arg3762z00_2869;

																					{	/* Eval/evobject.scm 608 */
																						obj_t BgL_arg3763z00_2870;

																						{	/* Eval/evobject.scm 608 */
																							obj_t BgL_arg3764z00_2871;

																							BgL_arg3764z00_2871 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3763z00_2870 =
																								MAKE_PAIR(BgL_arg3758z00_2865,
																								BgL_arg3764z00_2871);
																						}
																						BgL_arg3762z00_2869 =
																							MAKE_PAIR(BgL_arg3757z00_2864,
																							BgL_arg3763z00_2870);
																					}
																					BgL_arg3761z00_2868 =
																						MAKE_PAIR(BgL_arg3756z00_2863,
																						BgL_arg3762z00_2869);
																				}
																				BgL_list3760z00_2867 =
																					MAKE_PAIR(BgL_arg3755z00_2862,
																					BgL_arg3761z00_2868);
																			}
																			BgL_arg3753z00_2860 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3754z00_2861,
																				BgL_list3760z00_2867);
																		}
																	}
																	BgL_arg3750z00_2857 =
																		MAKE_PAIR(BgL_arg3752z00_2859,
																		BgL_arg3753z00_2860);
																}
																{	/* Eval/evobject.scm 611 */
																	obj_t BgL_arg3800z00_2907;

																	{	/* Eval/evobject.scm 611 */
																		obj_t BgL_arg3803z00_2910;

																		obj_t BgL_arg3804z00_2911;

																		BgL_arg3803z00_2910 =
																			BGl_symbol5838z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 611 */
																			obj_t BgL_arg3805z00_2912;

																			obj_t BgL_arg3806z00_2913;

																			obj_t BgL_arg3807z00_2914;

																			{	/* Eval/evobject.scm 611 */
																				obj_t BgL_arg3812z00_2919;

																				obj_t BgL_arg3813z00_2920;

																				BgL_arg3812z00_2919 =
																					BGl_symbol5870z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 611 */
																					obj_t BgL_arg3814z00_2921;

																					obj_t BgL_arg3815z00_2922;

																					{	/* Eval/evobject.scm 611 */
																						obj_t BgL_arg3819z00_2926;

																						obj_t BgL_arg3820z00_2927;

																						BgL_arg3819z00_2926 =
																							BGl_symbol5874z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 611 */
																							obj_t BgL_list3821z00_2928;

																							BgL_list3821z00_2928 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3820z00_2927 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BGl_symbol5836z00zz__evobjectz00,
																								BgL_list3821z00_2928);
																						}
																						BgL_arg3814z00_2921 =
																							MAKE_PAIR(BgL_arg3819z00_2926,
																							BgL_arg3820z00_2927);
																					}
																					BgL_arg3815z00_2922 =
																						BGl_symbol5946z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 611 */
																						obj_t BgL_list3817z00_2924;

																						{	/* Eval/evobject.scm 611 */
																							obj_t BgL_arg3818z00_2925;

																							BgL_arg3818z00_2925 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3817z00_2924 =
																								MAKE_PAIR(BgL_arg3815z00_2922,
																								BgL_arg3818z00_2925);
																						}
																						BgL_arg3813z00_2920 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3814z00_2921,
																							BgL_list3817z00_2924);
																					}
																				}
																				BgL_arg3805z00_2912 =
																					MAKE_PAIR(BgL_arg3812z00_2919,
																					BgL_arg3813z00_2920);
																			}
																			BgL_arg3806z00_2913 =
																				BGl_symbol5836z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 613 */
																				obj_t BgL_arg3822z00_2929;

																				obj_t BgL_arg3823z00_2930;

																				BgL_arg3822z00_2929 =
																					BGl_symbol5876z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 614 */
																					obj_t BgL_arg3824z00_2931;

																					obj_t BgL_arg3826z00_2933;

																					{	/* Eval/evobject.scm 614 */
																						obj_t BgL_arg3832z00_2939;

																						obj_t BgL_arg3833z00_2940;

																						BgL_arg3832z00_2939 =
																							BGl_symbol5842z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 614 */
																							obj_t BgL_arg3834z00_2941;

																							{	/* Eval/evobject.scm 614 */
																								obj_t BgL_arg3837z00_2944;

																								{	/* Eval/evobject.scm 614 */
																									obj_t BgL_arg3838z00_2945;

																									obj_t BgL_arg3839z00_2946;

																									{	/* Eval/evobject.scm 614 */
																										obj_t BgL_res5684z00_6665;

																										{	/* Eval/evobject.scm 614 */
																											obj_t BgL_symbolz00_6663;

																											BgL_symbolz00_6663 =
																												BGl_symbol5925z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 614 */
																												obj_t
																													BgL_arg5527z00_6664;
																												BgL_arg5527z00_6664 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_6663);
																												BgL_res5684z00_6665 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg5527z00_6664);
																											}
																										}
																										BgL_arg3838z00_2945 =
																											BgL_res5684z00_6665;
																									}
																									{	/* Eval/evobject.scm 614 */
																										obj_t BgL_res5685z00_6668;

																										{	/* Eval/evobject.scm 614 */
																											obj_t BgL_arg5527z00_6667;

																											BgL_arg5527z00_6667 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_115);
																											BgL_res5685z00_6668 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg5527z00_6667);
																										}
																										BgL_arg3839z00_2946 =
																											BgL_res5685z00_6668;
																									}
																									{	/* Eval/evobject.scm 614 */
																										obj_t BgL_list3840z00_2947;

																										{	/* Eval/evobject.scm 614 */
																											obj_t BgL_arg3841z00_2948;

																											BgL_arg3841z00_2948 =
																												MAKE_PAIR
																												(BgL_arg3839z00_2946,
																												BNIL);
																											BgL_list3840z00_2947 =
																												MAKE_PAIR
																												(BgL_arg3838z00_2945,
																												BgL_arg3841z00_2948);
																										}
																										BgL_arg3837z00_2944 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list3840z00_2947);
																									}
																								}
																								BgL_arg3834z00_2941 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg3837z00_2944));
																							}
																							{	/* Eval/evobject.scm 614 */
																								obj_t BgL_list3836z00_2943;

																								BgL_list3836z00_2943 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3833z00_2940 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3834z00_2941,
																									BgL_list3836z00_2943);
																							}
																						}
																						BgL_arg3824z00_2931 =
																							MAKE_PAIR(BgL_arg3832z00_2939,
																							BgL_arg3833z00_2940);
																					}
																					BgL_arg3826z00_2933 =
																						BGl_symbol5836z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 613 */
																						obj_t BgL_list3828z00_2935;

																						{	/* Eval/evobject.scm 613 */
																							obj_t BgL_arg3829z00_2936;

																							{	/* Eval/evobject.scm 613 */
																								obj_t BgL_arg3830z00_2937;

																								{	/* Eval/evobject.scm 613 */
																									obj_t BgL_arg3831z00_2938;

																									BgL_arg3831z00_2938 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3830z00_2937 =
																										MAKE_PAIR(BgL_sourcez00_117,
																										BgL_arg3831z00_2938);
																								}
																								BgL_arg3829z00_2936 =
																									MAKE_PAIR(BgL_arg3826z00_2933,
																									BgL_arg3830z00_2937);
																							}
																							BgL_list3828z00_2935 =
																								MAKE_PAIR
																								(BGl_string5954z00zz__evobjectz00,
																								BgL_arg3829z00_2936);
																						}
																						BgL_arg3823z00_2930 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3824z00_2931,
																							BgL_list3828z00_2935);
																					}
																				}
																				BgL_arg3807z00_2914 =
																					MAKE_PAIR(BgL_arg3822z00_2929,
																					BgL_arg3823z00_2930);
																			}
																			{	/* Eval/evobject.scm 611 */
																				obj_t BgL_list3809z00_2916;

																				{	/* Eval/evobject.scm 611 */
																					obj_t BgL_arg3810z00_2917;

																					{	/* Eval/evobject.scm 611 */
																						obj_t BgL_arg3811z00_2918;

																						BgL_arg3811z00_2918 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3810z00_2917 =
																							MAKE_PAIR(BgL_arg3807z00_2914,
																							BgL_arg3811z00_2918);
																					}
																					BgL_list3809z00_2916 =
																						MAKE_PAIR(BgL_arg3806z00_2913,
																						BgL_arg3810z00_2917);
																				}
																				BgL_arg3804z00_2911 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3805z00_2912,
																					BgL_list3809z00_2916);
																			}
																		}
																		BgL_arg3800z00_2907 =
																			MAKE_PAIR(BgL_arg3803z00_2910,
																			BgL_arg3804z00_2911);
																	}
																	{	/* Eval/evobject.scm 608 */
																		obj_t BgL_list3802z00_2909;

																		BgL_list3802z00_2909 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3751z00_2858 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3800z00_2907,
																			BgL_list3802z00_2909);
																	}
																}
																BgL_arg3696z00_2804 =
																	MAKE_PAIR(BgL_arg3750z00_2857,
																	BgL_arg3751z00_2858);
															}
															{	/* Eval/evobject.scm 618 */
																obj_t BgL_arg3842z00_2949;

																obj_t BgL_arg3843z00_2950;

																BgL_arg3842z00_2949 =
																	BGl_symbol5941z00zz__evobjectz00;
																{	/* Eval/evobject.scm 619 */
																	obj_t BgL_arg3844z00_2951;

																	{	/* Eval/evobject.scm 619 */
																		obj_t BgL_arg3847z00_2954;

																		obj_t BgL_arg3848z00_2955;

																		BgL_arg3847z00_2954 =
																			BGl_symbol5876z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 620 */
																			obj_t BgL_arg3849z00_2956;

																			obj_t BgL_arg3851z00_2958;

																			{	/* Eval/evobject.scm 620 */
																				obj_t BgL_arg3857z00_2964;

																				obj_t BgL_arg3858z00_2965;

																				BgL_arg3857z00_2964 =
																					BGl_symbol5842z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 620 */
																					obj_t BgL_arg3859z00_2966;

																					{	/* Eval/evobject.scm 620 */
																						obj_t BgL_arg3862z00_2969;

																						{	/* Eval/evobject.scm 620 */
																							obj_t BgL_arg3863z00_2970;

																							obj_t BgL_arg3864z00_2971;

																							{	/* Eval/evobject.scm 620 */
																								obj_t BgL_res5686z00_6672;

																								{	/* Eval/evobject.scm 620 */
																									obj_t BgL_symbolz00_6670;

																									BgL_symbolz00_6670 =
																										BGl_symbol5925z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 620 */
																										obj_t BgL_arg5527z00_6671;

																										BgL_arg5527z00_6671 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_6670);
																										BgL_res5686z00_6672 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg5527z00_6671);
																									}
																								}
																								BgL_arg3863z00_2970 =
																									BgL_res5686z00_6672;
																							}
																							{	/* Eval/evobject.scm 620 */
																								obj_t BgL_res5687z00_6675;

																								{	/* Eval/evobject.scm 620 */
																									obj_t BgL_arg5527z00_6674;

																									BgL_arg5527z00_6674 =
																										SYMBOL_TO_STRING
																										(BgL_idz00_115);
																									BgL_res5687z00_6675 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg5527z00_6674);
																								}
																								BgL_arg3864z00_2971 =
																									BgL_res5687z00_6675;
																							}
																							{	/* Eval/evobject.scm 620 */
																								obj_t BgL_list3865z00_2972;

																								{	/* Eval/evobject.scm 620 */
																									obj_t BgL_arg3866z00_2973;

																									BgL_arg3866z00_2973 =
																										MAKE_PAIR
																										(BgL_arg3864z00_2971, BNIL);
																									BgL_list3865z00_2972 =
																										MAKE_PAIR
																										(BgL_arg3863z00_2970,
																										BgL_arg3866z00_2973);
																								}
																								BgL_arg3862z00_2969 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list3865z00_2972);
																							}
																						}
																						BgL_arg3859z00_2966 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg3862z00_2969));
																					}
																					{	/* Eval/evobject.scm 620 */
																						obj_t BgL_list3861z00_2968;

																						BgL_list3861z00_2968 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3858z00_2965 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3859z00_2966,
																							BgL_list3861z00_2968);
																					}
																				}
																				BgL_arg3849z00_2956 =
																					MAKE_PAIR(BgL_arg3857z00_2964,
																					BgL_arg3858z00_2965);
																			}
																			BgL_arg3851z00_2958 =
																				BGl_symbol5836z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 619 */
																				obj_t BgL_list3853z00_2960;

																				{	/* Eval/evobject.scm 619 */
																					obj_t BgL_arg3854z00_2961;

																					{	/* Eval/evobject.scm 619 */
																						obj_t BgL_arg3855z00_2962;

																						{	/* Eval/evobject.scm 619 */
																							obj_t BgL_arg3856z00_2963;

																							BgL_arg3856z00_2963 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3855z00_2962 =
																								MAKE_PAIR(BgL_sourcez00_117,
																								BgL_arg3856z00_2963);
																						}
																						BgL_arg3854z00_2961 =
																							MAKE_PAIR(BgL_arg3851z00_2958,
																							BgL_arg3855z00_2962);
																					}
																					BgL_list3853z00_2960 =
																						MAKE_PAIR
																						(BGl_string5954z00zz__evobjectz00,
																						BgL_arg3854z00_2961);
																				}
																				BgL_arg3848z00_2955 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3849z00_2956,
																					BgL_list3853z00_2960);
																			}
																		}
																		BgL_arg3844z00_2951 =
																			MAKE_PAIR(BgL_arg3847z00_2954,
																			BgL_arg3848z00_2955);
																	}
																	{	/* Eval/evobject.scm 618 */
																		obj_t BgL_list3846z00_2953;

																		BgL_list3846z00_2953 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3843z00_2950 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3844z00_2951,
																			BgL_list3846z00_2953);
																	}
																}
																BgL_arg3697z00_2805 =
																	MAKE_PAIR(BgL_arg3842z00_2949,
																	BgL_arg3843z00_2950);
															}
															{	/* Eval/evobject.scm 599 */
																obj_t BgL_list3699z00_2807;

																{	/* Eval/evobject.scm 599 */
																	obj_t BgL_arg3700z00_2808;

																	{	/* Eval/evobject.scm 599 */
																		obj_t BgL_arg3701z00_2809;

																		BgL_arg3701z00_2809 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3700z00_2808 =
																			MAKE_PAIR(BgL_arg3697z00_2805,
																			BgL_arg3701z00_2809);
																	}
																	BgL_list3699z00_2807 =
																		MAKE_PAIR(BgL_arg3696z00_2804,
																		BgL_arg3700z00_2808);
																}
																BgL_arg3694z00_2802 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3695z00_2803, BgL_list3699z00_2807);
															}
														}
														BgL_arg3689z00_2797 =
															MAKE_PAIR(BgL_arg3693z00_2801,
															BgL_arg3694z00_2802);
													}
													{	/* Eval/evobject.scm 598 */
														obj_t BgL_list3691z00_2799;

														{	/* Eval/evobject.scm 598 */
															obj_t BgL_arg3692z00_2800;

															BgL_arg3692z00_2800 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3691z00_2799 =
																MAKE_PAIR(BgL_arg3689z00_2797,
																BgL_arg3692z00_2800);
														}
														BgL_arg3687z00_2795 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3688z00_2796, BgL_list3691z00_2799);
													}
												}
												BgL_arg3681z00_2789 =
													MAKE_PAIR(BgL_arg3686z00_2794, BgL_arg3687z00_2795);
											}
											BgL_arg3682z00_2790 = BGl_symbol5955z00zz__evobjectz00;
											{	/* Eval/evobject.scm 598 */
												obj_t BgL_list3684z00_2792;

												{	/* Eval/evobject.scm 598 */
													obj_t BgL_arg3685z00_2793;

													BgL_arg3685z00_2793 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3684z00_2792 =
														MAKE_PAIR(BgL_arg3682z00_2790, BgL_arg3685z00_2793);
												}
												BgL_arg3680z00_2788 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3681z00_2789, BgL_list3684z00_2792);
											}
										}
										BgL_arg3675z00_2784 =
											MAKE_PAIR(BgL_arg3679z00_2787, BgL_arg3680z00_2788);
									}
									{	/* Eval/evobject.scm 598 */
										obj_t BgL_list3678z00_2786;

										BgL_list3678z00_2786 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3674z00_2783 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3675z00_2784, BgL_list3678z00_2786);
									}
								}
								BgL_arg3663z00_2773 =
									MAKE_PAIR(BgL_arg3673z00_2782, BgL_arg3674z00_2783);
							}
							{	/* Eval/evobject.scm 625 */
								obj_t BgL_arg3867z00_2974;

								obj_t BgL_arg3868z00_2975;

								BgL_arg3867z00_2974 = BGl_symbol5957z00zz__evobjectz00;
								{	/* Eval/evobject.scm 625 */
									obj_t BgL_arg3869z00_2976;

									BgL_arg3869z00_2976 =
										MAKE_PAIR(BGl_symbol5959z00zz__evobjectz00, BNIL);
									{	/* Eval/evobject.scm 625 */
										obj_t BgL_list3871z00_2978;

										BgL_list3871z00_2978 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3868z00_2975 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3869z00_2976, BgL_list3871z00_2978);
									}
								}
								BgL_arg3664z00_2774 =
									MAKE_PAIR(BgL_arg3867z00_2974, BgL_arg3868z00_2975);
							}
							{	/* Eval/evobject.scm 626 */
								obj_t BgL_arg3872z00_2979;

								obj_t BgL_arg3873z00_2980;

								BgL_arg3872z00_2979 = BGl_symbol5961z00zz__evobjectz00;
								{	/* Eval/evobject.scm 626 */
									obj_t BgL_arg3874z00_2981;

									{	/* Eval/evobject.scm 626 */
										obj_t BgL_tmpz00_6679;

										BgL_tmpz00_6679 = BGl_symbol5957z00zz__evobjectz00;
										{	/* Eval/evobject.scm 626 */
											bool_t BgL_testz00_10105;

											{
												obj_t BgL_l1961z00_6682;

												BgL_l1961z00_6682 = BgL_allzd2fieldszd2_116;
											BgL_zc3anonymousza34344ze3z83_6681:
												if (NULLP(BgL_l1961z00_6682))
													{	/* Eval/evobject.scm 626 */
														BgL_testz00_10105 = ((bool_t) 1);
													}
												else
													{	/* Eval/evobject.scm 626 */
														if (BGl_classzd2fieldzd2indexedzf3zf3zz__objectz00
															(CAR(BgL_l1961z00_6682)))
															{
																obj_t BgL_l1961z00_10111;

																BgL_l1961z00_10111 = CDR(BgL_l1961z00_6682);
																BgL_l1961z00_6682 = BgL_l1961z00_10111;
																goto BgL_zc3anonymousza34344ze3z83_6681;
															}
														else
															{	/* Eval/evobject.scm 626 */
																BgL_testz00_10105 = ((bool_t) 0);
															}
													}
											}
											if (BgL_testz00_10105)
												{	/* Eval/evobject.scm 626 */
													BgL_arg3874z00_2981 =
														BGl_makezd2evalzd2withzd2accesszd2bodyzd2plainzd2zz__evobjectz00
														(BgL_idz00_115, BgL_allzd2fieldszd2_116,
														BgL_tmpz00_6679);
												}
											else
												{	/* Eval/evobject.scm 626 */
													BgL_arg3874z00_2981 =
														BGl_makezd2evalzd2withzd2accesszd2bodyzd2indexedzd2zz__evobjectz00
														(BgL_idz00_115, BgL_allzd2fieldszd2_116,
														BgL_tmpz00_6679);
												}
										}
									}
									{	/* Eval/evobject.scm 626 */
										obj_t BgL_list3876z00_2983;

										BgL_list3876z00_2983 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3873z00_2980 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3874z00_2981, BgL_list3876z00_2983);
									}
								}
								BgL_arg3665z00_2775 =
									MAKE_PAIR(BgL_arg3872z00_2979, BgL_arg3873z00_2980);
							}
							{	/* Eval/evobject.scm 627 */
								obj_t BgL_arg3877z00_2984;

								obj_t BgL_arg3878z00_2985;

								BgL_arg3877z00_2984 = BGl_symbol5963z00zz__evobjectz00;
								{	/* Eval/evobject.scm 627 */
									obj_t BgL_arg3879z00_2986;

									BgL_arg3879z00_2986 =
										BGl_makezd2evalzd2withzd2accesszd2expanderz00zz__evobjectz00
										(BgL_idz00_115, BGl_symbol5957z00zz__evobjectz00);
									{	/* Eval/evobject.scm 627 */
										obj_t BgL_list3881z00_2988;

										BgL_list3881z00_2988 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3878z00_2985 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3879z00_2986, BgL_list3881z00_2988);
									}
								}
								BgL_arg3666z00_2776 =
									MAKE_PAIR(BgL_arg3877z00_2984, BgL_arg3878z00_2985);
							}
							{	/* Eval/evobject.scm 593 */
								obj_t BgL_list3668z00_2778;

								{	/* Eval/evobject.scm 593 */
									obj_t BgL_arg3670z00_2779;

									{	/* Eval/evobject.scm 593 */
										obj_t BgL_arg3671z00_2780;

										{	/* Eval/evobject.scm 593 */
											obj_t BgL_arg3672z00_2781;

											BgL_arg3672z00_2781 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3671z00_2780 =
												MAKE_PAIR(BgL_arg3666z00_2776, BgL_arg3672z00_2781);
										}
										BgL_arg3670z00_2779 =
											MAKE_PAIR(BgL_arg3665z00_2775, BgL_arg3671z00_2780);
									}
									BgL_list3668z00_2778 =
										MAKE_PAIR(BgL_arg3664z00_2774, BgL_arg3670z00_2779);
								}
								BgL_arg3638z00_2740 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3663z00_2773, BgL_list3668z00_2778);
							}
						}
						BgL_arg3632z00_2734 =
							MAKE_PAIR(BgL_arg3637z00_2739, BgL_arg3638z00_2740);
					}
					{	/* Eval/evobject.scm 593 */
						obj_t BgL_arg3882z00_2989;

						obj_t BgL_arg3883z00_2990;

						BgL_arg3882z00_2989 = BGl_symbol5860z00zz__evobjectz00;
						{	/* Eval/evobject.scm 628 */
							obj_t BgL_arg3886z00_2993;

							obj_t BgL_arg3887z00_2994;

							BgL_arg3886z00_2993 = BGl_symbol5789z00zz__evobjectz00;
							{	/* Eval/evobject.scm 628 */
								obj_t BgL_arg3888z00_2995;

								obj_t BgL_arg3889z00_2996;

								{	/* Eval/evobject.scm 628 */
									obj_t BgL_arg3893z00_3000;

									{	/* Eval/evobject.scm 628 */
										obj_t BgL_arg3895z00_3002;

										obj_t BgL_arg3896z00_3003;

										{	/* Eval/evobject.scm 628 */
											obj_t BgL_list3897z00_3004;

											{	/* Eval/evobject.scm 628 */
												obj_t BgL_arg3898z00_3005;

												obj_t BgL_arg3899z00_3006;

												BgL_arg3898z00_3005 = BGl_symbol5862z00zz__evobjectz00;
												BgL_arg3899z00_3006 =
													MAKE_PAIR(BGl_symbol5957z00zz__evobjectz00, BNIL);
												BgL_list3897z00_3004 =
													MAKE_PAIR(BgL_arg3898z00_3005, BgL_arg3899z00_3006);
											}
											BgL_arg3895z00_3002 = BgL_list3897z00_3004;
										}
										{	/* Eval/evobject.scm 628 */
											obj_t BgL_arg3900z00_3007;

											{	/* Eval/evobject.scm 628 */
												obj_t BgL_arg3903z00_3010;

												obj_t BgL_arg3904z00_3011;

												BgL_arg3903z00_3010 = BGl_symbol5862z00zz__evobjectz00;
												{	/* Eval/evobject.scm 628 */
													obj_t BgL_arg3908z00_3014;

													obj_t BgL_arg3909z00_3015;

													BgL_arg3908z00_3014 =
														BGl_symbol5905z00zz__evobjectz00;
													{	/* Eval/evobject.scm 628 */
														obj_t BgL_list3910z00_3016;

														{	/* Eval/evobject.scm 628 */
															obj_t BgL_arg3911z00_3017;

															obj_t BgL_arg3912z00_3018;

															BgL_arg3911z00_3017 =
																BGl_symbol5905z00zz__evobjectz00;
															BgL_arg3912z00_3018 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3910z00_3016 =
																MAKE_PAIR(BgL_arg3911z00_3017,
																BgL_arg3912z00_3018);
														}
														BgL_arg3909z00_3015 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol5834z00zz__evobjectz00,
															BgL_list3910z00_3016);
													}
													BgL_arg3904z00_3011 =
														MAKE_PAIR(BgL_arg3908z00_3014, BgL_arg3909z00_3015);
												}
												{	/* Eval/evobject.scm 628 */
													obj_t BgL_list3905z00_3012;

													{	/* Eval/evobject.scm 628 */
														obj_t BgL_arg3906z00_3013;

														BgL_arg3906z00_3013 =
															MAKE_PAIR(BgL_arg3904z00_3011, BNIL);
														BgL_list3905z00_3012 =
															MAKE_PAIR(BgL_arg3903z00_3010,
															BgL_arg3906z00_3013);
													}
													BgL_arg3900z00_3007 = BgL_list3905z00_3012;
												}
											}
											{	/* Eval/evobject.scm 628 */
												obj_t BgL_list3902z00_3009;

												BgL_list3902z00_3009 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3896z00_3003 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3900z00_3007, BgL_list3902z00_3009);
											}
										}
										BgL_arg3893z00_3000 =
											MAKE_PAIR(BgL_arg3895z00_3002, BgL_arg3896z00_3003);
									}
									BgL_arg3888z00_2995 = MAKE_PAIR(BgL_arg3893z00_3000, BNIL);
								}
								{	/* Eval/evobject.scm 628 */
									obj_t BgL_arg3913z00_3019;

									obj_t BgL_arg3914z00_3020;

									BgL_arg3913z00_3019 = BGl_symbol5862z00zz__evobjectz00;
									{	/* Eval/evobject.scm 629 */
										obj_t BgL_arg3917z00_3023;

										obj_t BgL_arg3918z00_3024;

										BgL_arg3917z00_3023 = BGl_symbol5965z00zz__evobjectz00;
										{	/* Eval/evobject.scm 629 */
											obj_t BgL_arg3919z00_3025;

											obj_t BgL_arg3920z00_3026;

											obj_t BgL_arg3922z00_3027;

											obj_t BgL_arg3923z00_3028;

											{	/* Eval/evobject.scm 629 */
												obj_t BgL_arg3929z00_3034;

												obj_t BgL_arg3930z00_3035;

												BgL_arg3929z00_3034 = BGl_symbol5950z00zz__evobjectz00;
												{	/* Eval/evobject.scm 629 */
													obj_t BgL_list3931z00_3036;

													{	/* Eval/evobject.scm 629 */
														obj_t BgL_arg3932z00_3037;

														obj_t BgL_arg3933z00_3038;

														BgL_arg3932z00_3037 =
															BGl_symbol5948z00zz__evobjectz00;
														BgL_arg3933z00_3038 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3931z00_3036 =
															MAKE_PAIR(BgL_arg3932z00_3037,
															BgL_arg3933z00_3038);
													}
													BgL_arg3930z00_3035 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BGl_symbol5894z00zz__evobjectz00,
														BgL_list3931z00_3036);
												}
												BgL_arg3919z00_3025 =
													MAKE_PAIR(BgL_arg3929z00_3034, BgL_arg3930z00_3035);
											}
											BgL_arg3920z00_3026 = BGl_symbol5961z00zz__evobjectz00;
											BgL_arg3922z00_3027 = BGl_symbol5963z00zz__evobjectz00;
											BgL_arg3923z00_3028 = BGl_symbol5957z00zz__evobjectz00;
											{	/* Eval/evobject.scm 629 */
												obj_t BgL_list3925z00_3030;

												{	/* Eval/evobject.scm 629 */
													obj_t BgL_arg3926z00_3031;

													{	/* Eval/evobject.scm 629 */
														obj_t BgL_arg3927z00_3032;

														{	/* Eval/evobject.scm 629 */
															obj_t BgL_arg3928z00_3033;

															BgL_arg3928z00_3033 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3927z00_3032 =
																MAKE_PAIR(BgL_arg3923z00_3028,
																BgL_arg3928z00_3033);
														}
														BgL_arg3926z00_3031 =
															MAKE_PAIR(BgL_arg3922z00_3027,
															BgL_arg3927z00_3032);
													}
													BgL_list3925z00_3030 =
														MAKE_PAIR(BgL_arg3920z00_3026, BgL_arg3926z00_3031);
												}
												BgL_arg3918z00_3024 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3919z00_3025, BgL_list3925z00_3030);
											}
										}
										BgL_arg3914z00_3020 =
											MAKE_PAIR(BgL_arg3917z00_3023, BgL_arg3918z00_3024);
									}
									{	/* Eval/evobject.scm 628 */
										obj_t BgL_list3915z00_3021;

										{	/* Eval/evobject.scm 628 */
											obj_t BgL_arg3916z00_3022;

											BgL_arg3916z00_3022 =
												MAKE_PAIR(BgL_arg3914z00_3020, BNIL);
											BgL_list3915z00_3021 =
												MAKE_PAIR(BgL_arg3913z00_3019, BgL_arg3916z00_3022);
										}
										BgL_arg3889z00_2996 = BgL_list3915z00_3021;
									}
								}
								{	/* Eval/evobject.scm 628 */
									obj_t BgL_list3891z00_2998;

									{	/* Eval/evobject.scm 628 */
										obj_t BgL_arg3892z00_2999;

										BgL_arg3892z00_2999 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3891z00_2998 =
											MAKE_PAIR(BgL_arg3889z00_2996, BgL_arg3892z00_2999);
									}
									BgL_arg3887z00_2994 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3888z00_2995, BgL_list3891z00_2998);
								}
							}
							BgL_arg3883z00_2990 =
								MAKE_PAIR(BgL_arg3886z00_2993, BgL_arg3887z00_2994);
						}
						{	/* Eval/evobject.scm 593 */
							obj_t BgL_list3884z00_2991;

							{	/* Eval/evobject.scm 593 */
								obj_t BgL_arg3885z00_2992;

								BgL_arg3885z00_2992 = MAKE_PAIR(BgL_arg3883z00_2990, BNIL);
								BgL_list3884z00_2991 =
									MAKE_PAIR(BgL_arg3882z00_2989, BgL_arg3885z00_2992);
							}
							BgL_arg3633z00_2735 = BgL_list3884z00_2991;
						}
					}
					{	/* Eval/evobject.scm 593 */
						obj_t BgL_list3635z00_2737;

						{	/* Eval/evobject.scm 593 */
							obj_t BgL_arg3636z00_2738;

							BgL_arg3636z00_2738 = MAKE_PAIR(BNIL, BNIL);
							BgL_list3635z00_2737 =
								MAKE_PAIR(BgL_arg3633z00_2735, BgL_arg3636z00_2738);
						}
						BgL_arg3631z00_2733 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3632z00_2734,
							BgL_list3635z00_2737);
					}
				}
				return MAKE_PAIR(BgL_arg3630z00_2732, BgL_arg3631z00_2733);
			}
		}
	}



/* make-eval-with-access-expander */
	obj_t BGl_makezd2evalzd2withzd2accesszd2expanderz00zz__evobjectz00(obj_t
		BgL_idz00_118, obj_t BgL_tmpz00_119)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 634 */
			{	/* Eval/evobject.scm 635 */
				obj_t BgL_arg3934z00_3039;

				obj_t BgL_arg3935z00_3040;

				BgL_arg3934z00_3039 = BGl_symbol5967z00zz__evobjectz00;
				{	/* Eval/evobject.scm 636 */
					obj_t BgL_arg3936z00_3041;

					{	/* Eval/evobject.scm 636 */
						obj_t BgL_arg3939z00_3044;

						obj_t BgL_arg3940z00_3045;

						BgL_arg3939z00_3044 = BGl_symbol5884z00zz__evobjectz00;
						{	/* Eval/evobject.scm 636 */
							obj_t BgL_arg3941z00_3046;

							obj_t BgL_arg3942z00_3047;

							{	/* Eval/evobject.scm 636 */
								obj_t BgL_arg3946z00_3051;

								obj_t BgL_arg3947z00_3052;

								BgL_arg3946z00_3051 = BGl_symbol5818z00zz__evobjectz00;
								{	/* Eval/evobject.scm 636 */
									obj_t BgL_list3948z00_3053;

									BgL_list3948z00_3053 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3947z00_3052 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol5969z00zz__evobjectz00, BgL_list3948z00_3053);
								}
								BgL_arg3941z00_3046 =
									MAKE_PAIR(BgL_arg3946z00_3051, BgL_arg3947z00_3052);
							}
							{	/* Eval/evobject.scm 637 */
								obj_t BgL_arg3949z00_3054;

								obj_t BgL_arg3950z00_3055;

								BgL_arg3949z00_3054 = BGl_symbol5927z00zz__evobjectz00;
								{	/* Eval/evobject.scm 637 */
									obj_t BgL_arg3951z00_3056;

									obj_t BgL_arg3953z00_3057;

									obj_t BgL_arg3954z00_3058;

									obj_t BgL_arg3955z00_3059;

									BgL_arg3951z00_3056 = BGl_symbol5818z00zz__evobjectz00;
									{	/* Eval/evobject.scm 638 */
										obj_t BgL_arg3961z00_3065;

										obj_t BgL_arg3962z00_3066;

										{	/* Eval/evobject.scm 638 */
											obj_t BgL_arg3963z00_3067;

											obj_t BgL_arg3964z00_3068;

											BgL_arg3963z00_3067 = BGl_symbol5816z00zz__evobjectz00;
											{	/* Eval/evobject.scm 638 */
												obj_t BgL_list3965z00_3069;

												BgL_list3965z00_3069 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3964z00_3068 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_symbol5892z00zz__evobjectz00,
													BgL_list3965z00_3069);
											}
											BgL_arg3961z00_3065 =
												MAKE_PAIR(BgL_arg3963z00_3067, BgL_arg3964z00_3068);
										}
										{	/* Eval/evobject.scm 639 */
											obj_t BgL_arg3966z00_3070;

											{	/* Eval/evobject.scm 639 */
												obj_t BgL_arg3969z00_3073;

												obj_t BgL_arg3970z00_3074;

												BgL_arg3969z00_3073 = BGl_symbol5916z00zz__evobjectz00;
												{	/* Eval/evobject.scm 639 */
													obj_t BgL_arg3972z00_3075;

													obj_t BgL_arg3973z00_3076;

													{	/* Eval/evobject.scm 639 */
														obj_t BgL_arg3977z00_3080;

														obj_t BgL_arg3978z00_3081;

														{	/* Eval/evobject.scm 639 */
															obj_t BgL_arg3979z00_3082;

															obj_t BgL_arg3980z00_3083;

															BgL_arg3979z00_3082 =
																BGl_symbol5971z00zz__evobjectz00;
															{	/* Eval/evobject.scm 639 */
																obj_t BgL_arg3981z00_3084;

																{	/* Eval/evobject.scm 639 */
																	obj_t BgL_arg3984z00_3087;

																	obj_t BgL_arg3985z00_3088;

																	BgL_arg3984z00_3087 =
																		BGl_symbol5870z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 639 */
																		obj_t BgL_list3986z00_3089;

																		{	/* Eval/evobject.scm 639 */
																			obj_t BgL_arg3987z00_3090;

																			obj_t BgL_arg3988z00_3091;

																			BgL_arg3987z00_3090 =
																				BGl_symbol5948z00zz__evobjectz00;
																			BgL_arg3988z00_3091 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3986z00_3089 =
																				MAKE_PAIR(BgL_arg3987z00_3090,
																				BgL_arg3988z00_3091);
																		}
																		BgL_arg3985z00_3088 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5818z00zz__evobjectz00,
																			BgL_list3986z00_3089);
																	}
																	BgL_arg3981z00_3084 =
																		MAKE_PAIR(BgL_arg3984z00_3087,
																		BgL_arg3985z00_3088);
																}
																{	/* Eval/evobject.scm 639 */
																	obj_t BgL_list3983z00_3086;

																	BgL_list3983z00_3086 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3980z00_3083 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3981z00_3084, BgL_list3983z00_3086);
																}
															}
															BgL_arg3977z00_3080 =
																MAKE_PAIR(BgL_arg3979z00_3082,
																BgL_arg3980z00_3083);
														}
														{	/* Eval/evobject.scm 640 */
															obj_t BgL_arg3989z00_3092;

															{	/* Eval/evobject.scm 640 */
																obj_t BgL_arg3992z00_3095;

																obj_t BgL_arg3993z00_3096;

																BgL_arg3992z00_3095 =
																	BGl_symbol5973z00zz__evobjectz00;
																{	/* Eval/evobject.scm 640 */
																	obj_t BgL_arg3994z00_3097;

																	{	/* Eval/evobject.scm 640 */
																		obj_t BgL_arg3997z00_3100;

																		obj_t BgL_arg3998z00_3101;

																		BgL_arg3997z00_3100 =
																			BGl_symbol5933z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 640 */
																			obj_t BgL_arg3999z00_3102;

																			obj_t BgL_arg4000z00_3103;

																			{	/* Eval/evobject.scm 640 */
																				obj_t BgL_arg4004z00_3107;

																				obj_t BgL_arg4005z00_3108;

																				BgL_arg4004z00_3107 =
																					BGl_symbol5872z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 640 */
																					obj_t BgL_list4006z00_3109;

																					BgL_list4006z00_3109 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4005z00_3108 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5971z00zz__evobjectz00,
																						BgL_list4006z00_3109);
																				}
																				BgL_arg3999z00_3102 =
																					MAKE_PAIR(BgL_arg4004z00_3107,
																					BgL_arg4005z00_3108);
																			}
																			{	/* Eval/evobject.scm 641 */
																				obj_t BgL_arg4007z00_3110;

																				obj_t BgL_arg4008z00_3111;

																				BgL_arg4007z00_3110 =
																					BGl_symbol5789z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 641 */
																					obj_t BgL_arg4009z00_3112;

																					obj_t BgL_arg4010z00_3113;

																					{	/* Eval/evobject.scm 641 */
																						obj_t BgL_arg4014z00_3117;

																						{	/* Eval/evobject.scm 641 */
																							obj_t BgL_arg4016z00_3119;

																							obj_t BgL_arg4017z00_3120;

																							BgL_arg4016z00_3119 =
																								BGl_symbol5868z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 641 */
																								obj_t BgL_arg4018z00_3121;

																								{	/* Eval/evobject.scm 641 */
																									obj_t BgL_arg4021z00_3124;

																									obj_t BgL_arg4022z00_3125;

																									BgL_arg4021z00_3124 =
																										BGl_symbol5870z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 641 */
																										obj_t BgL_arg4023z00_3126;

																										obj_t BgL_arg4024z00_3127;

																										BgL_arg4023z00_3126 =
																											BGl_symbol5818z00zz__evobjectz00;
																										BgL_arg4024z00_3127 =
																											MAKE_PAIR
																											(BGl_symbol5975z00zz__evobjectz00,
																											BNIL);
																										{	/* Eval/evobject.scm 641 */
																											obj_t
																												BgL_list4026z00_3129;
																											{	/* Eval/evobject.scm 641 */
																												obj_t
																													BgL_arg4027z00_3130;
																												BgL_arg4027z00_3130 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4026z00_3129 =
																													MAKE_PAIR
																													(BgL_arg4024z00_3127,
																													BgL_arg4027z00_3130);
																											}
																											BgL_arg4022z00_3125 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4023z00_3126,
																												BgL_list4026z00_3129);
																										}
																									}
																									BgL_arg4018z00_3121 =
																										MAKE_PAIR
																										(BgL_arg4021z00_3124,
																										BgL_arg4022z00_3125);
																								}
																								{	/* Eval/evobject.scm 641 */
																									obj_t BgL_list4020z00_3123;

																									BgL_list4020z00_3123 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4017z00_3120 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4018z00_3121,
																										BgL_list4020z00_3123);
																								}
																							}
																							BgL_arg4014z00_3117 =
																								MAKE_PAIR(BgL_arg4016z00_3119,
																								BgL_arg4017z00_3120);
																						}
																						BgL_arg4009z00_3112 =
																							MAKE_PAIR(BgL_arg4014z00_3117,
																							BNIL);
																					}
																					{	/* Eval/evobject.scm 642 */
																						obj_t BgL_arg4028z00_3131;

																						obj_t BgL_arg4029z00_3132;

																						BgL_arg4028z00_3131 =
																							BGl_symbol5933z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 642 */
																							obj_t BgL_arg4030z00_3133;

																							obj_t BgL_arg4031z00_3134;

																							{	/* Eval/evobject.scm 642 */
																								obj_t BgL_arg4035z00_3138;

																								obj_t BgL_arg4036z00_3139;

																								BgL_arg4035z00_3138 =
																									BGl_symbol5872z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 642 */
																									obj_t BgL_list4037z00_3140;

																									BgL_list4037z00_3140 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4036z00_3139 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol5868z00zz__evobjectz00,
																										BgL_list4037z00_3140);
																								}
																								BgL_arg4030z00_3133 =
																									MAKE_PAIR(BgL_arg4035z00_3138,
																									BgL_arg4036z00_3139);
																							}
																							{	/* Eval/evobject.scm 642 */
																								obj_t BgL_arg4038z00_3141;

																								obj_t BgL_arg4039z00_3142;

																								BgL_arg4038z00_3141 =
																									BGl_symbol5866z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 642 */
																									obj_t BgL_arg4040z00_3143;

																									{	/* Eval/evobject.scm 642 */
																										obj_t BgL_arg4044z00_3147;

																										obj_t BgL_arg4045z00_3148;

																										BgL_arg4044z00_3147 =
																											BGl_symbol5907z00zz__evobjectz00;
																										{	/* Eval/evobject.scm 642 */
																											obj_t
																												BgL_list4046z00_3149;
																											BgL_list4046z00_3149 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4045z00_3148 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BGl_symbol5868z00zz__evobjectz00,
																												BgL_list4046z00_3149);
																										}
																										BgL_arg4040z00_3143 =
																											MAKE_PAIR
																											(BgL_arg4044z00_3147,
																											BgL_arg4045z00_3148);
																									}
																									{	/* Eval/evobject.scm 642 */
																										obj_t BgL_list4042z00_3145;

																										{	/* Eval/evobject.scm 642 */
																											obj_t BgL_arg4043z00_3146;

																											BgL_arg4043z00_3146 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list4042z00_3145 =
																												MAKE_PAIR
																												(BgL_tmpz00_119,
																												BgL_arg4043z00_3146);
																										}
																										BgL_arg4039z00_3142 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg4040z00_3143,
																											BgL_list4042z00_3145);
																									}
																								}
																								BgL_arg4031z00_3134 =
																									MAKE_PAIR(BgL_arg4038z00_3141,
																									BgL_arg4039z00_3142);
																							}
																							{	/* Eval/evobject.scm 642 */
																								obj_t BgL_list4033z00_3136;

																								{	/* Eval/evobject.scm 642 */
																									obj_t BgL_arg4034z00_3137;

																									BgL_arg4034z00_3137 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list4033z00_3136 =
																										MAKE_PAIR
																										(BgL_arg4031z00_3134,
																										BgL_arg4034z00_3137);
																								}
																								BgL_arg4029z00_3132 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4030z00_3133,
																									BgL_list4033z00_3136);
																							}
																						}
																						BgL_arg4010z00_3113 =
																							MAKE_PAIR(BgL_arg4028z00_3131,
																							BgL_arg4029z00_3132);
																					}
																					{	/* Eval/evobject.scm 641 */
																						obj_t BgL_list4012z00_3115;

																						{	/* Eval/evobject.scm 641 */
																							obj_t BgL_arg4013z00_3116;

																							BgL_arg4013z00_3116 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list4012z00_3115 =
																								MAKE_PAIR(BgL_arg4010z00_3113,
																								BgL_arg4013z00_3116);
																						}
																						BgL_arg4008z00_3111 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4009z00_3112,
																							BgL_list4012z00_3115);
																					}
																				}
																				BgL_arg4000z00_3103 =
																					MAKE_PAIR(BgL_arg4007z00_3110,
																					BgL_arg4008z00_3111);
																			}
																			{	/* Eval/evobject.scm 640 */
																				obj_t BgL_list4002z00_3105;

																				{	/* Eval/evobject.scm 640 */
																					obj_t BgL_arg4003z00_3106;

																					BgL_arg4003z00_3106 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4002z00_3105 =
																						MAKE_PAIR(BgL_arg4000z00_3103,
																						BgL_arg4003z00_3106);
																				}
																				BgL_arg3998z00_3101 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3999z00_3102,
																					BgL_list4002z00_3105);
																			}
																		}
																		BgL_arg3994z00_3097 =
																			MAKE_PAIR(BgL_arg3997z00_3100,
																			BgL_arg3998z00_3101);
																	}
																	{	/* Eval/evobject.scm 640 */
																		obj_t BgL_list3996z00_3099;

																		BgL_list3996z00_3099 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3993z00_3096 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3994z00_3097,
																			BgL_list3996z00_3099);
																	}
																}
																BgL_arg3989z00_3092 =
																	MAKE_PAIR(BgL_arg3992z00_3095,
																	BgL_arg3993z00_3096);
															}
															{	/* Eval/evobject.scm 639 */
																obj_t BgL_list3991z00_3094;

																BgL_list3991z00_3094 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3978z00_3081 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3989z00_3092, BgL_list3991z00_3094);
															}
														}
														BgL_arg3972z00_3075 =
															MAKE_PAIR(BgL_arg3977z00_3080,
															BgL_arg3978z00_3081);
													}
													{	/* Eval/evobject.scm 643 */
														obj_t BgL_arg4047z00_3150;

														obj_t BgL_arg4048z00_3151;

														BgL_arg4047z00_3150 =
															BGl_symbol5838z00zz__evobjectz00;
														{	/* Eval/evobject.scm 643 */
															obj_t BgL_arg4049z00_3152;

															obj_t BgL_arg4050z00_3153;

															obj_t BgL_arg4051z00_3154;

															{	/* Eval/evobject.scm 643 */
																obj_t BgL_arg4056z00_3159;

																obj_t BgL_arg4057z00_3160;

																BgL_arg4056z00_3159 =
																	BGl_symbol5890z00zz__evobjectz00;
																{	/* Eval/evobject.scm 643 */
																	obj_t BgL_list4058z00_3161;

																	BgL_list4058z00_3161 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4057z00_3160 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol5973z00zz__evobjectz00,
																		BgL_list4058z00_3161);
																}
																BgL_arg4049z00_3152 =
																	MAKE_PAIR(BgL_arg4056z00_3159,
																	BgL_arg4057z00_3160);
															}
															{	/* Eval/evobject.scm 644 */
																obj_t BgL_arg4059z00_3162;

																obj_t BgL_arg4060z00_3163;

																BgL_arg4059z00_3162 =
																	BGl_symbol5905z00zz__evobjectz00;
																{	/* Eval/evobject.scm 644 */
																	obj_t BgL_list4061z00_3164;

																	{	/* Eval/evobject.scm 644 */
																		obj_t BgL_arg4062z00_3165;

																		obj_t BgL_arg4063z00_3166;

																		BgL_arg4062z00_3165 =
																			BGl_symbol5905z00zz__evobjectz00;
																		BgL_arg4063z00_3166 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list4061z00_3164 =
																			MAKE_PAIR(BgL_arg4062z00_3165,
																			BgL_arg4063z00_3166);
																	}
																	BgL_arg4060z00_3163 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol5818z00zz__evobjectz00,
																		BgL_list4061z00_3164);
																}
																BgL_arg4050z00_3153 =
																	MAKE_PAIR(BgL_arg4059z00_3162,
																	BgL_arg4060z00_3163);
															}
															{	/* Eval/evobject.scm 645 */
																obj_t BgL_arg4064z00_3167;

																obj_t BgL_arg4065z00_3168;

																BgL_arg4064z00_3167 =
																	BGl_symbol5905z00zz__evobjectz00;
																{	/* Eval/evobject.scm 645 */
																	obj_t BgL_arg4066z00_3169;

																	obj_t BgL_arg4067z00_3170;

																	{	/* Eval/evobject.scm 645 */
																		obj_t BgL_arg4071z00_3174;

																		obj_t BgL_arg4072z00_3175;

																		BgL_arg4071z00_3174 =
																			BGl_symbol5860z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 645 */
																			obj_t BgL_arg4075z00_3178;

																			obj_t BgL_arg4076z00_3179;

																			{	/* Eval/evobject.scm 645 */
																				obj_t BgL_arg4077z00_3180;

																				obj_t BgL_arg4078z00_3181;

																				BgL_arg4077z00_3180 =
																					BGl_symbol5862z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 645 */
																					obj_t BgL_arg4081z00_3184;

																					obj_t BgL_arg4082z00_3185;

																					BgL_arg4081z00_3184 =
																						BGl_symbol5977z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 645 */
																						obj_t BgL_arg4083z00_3186;

																						obj_t BgL_arg4084z00_3187;

																						obj_t BgL_arg4085z00_3188;

																						{	/* Eval/evobject.scm 645 */
																							obj_t BgL_arg4091z00_3193;

																							obj_t BgL_arg4092z00_3194;

																							BgL_arg4091z00_3193 =
																								BGl_symbol5842z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 645 */
																								obj_t BgL_list4093z00_3195;

																								BgL_list4093z00_3195 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4092z00_3194 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_idz00_118,
																									BgL_list4093z00_3195);
																							}
																							BgL_arg4083z00_3186 =
																								MAKE_PAIR(BgL_arg4091z00_3193,
																								BgL_arg4092z00_3194);
																						}
																						{	/* Eval/evobject.scm 645 */
																							obj_t BgL_arg4094z00_3196;

																							obj_t BgL_arg4096z00_3197;

																							BgL_arg4094z00_3196 =
																								BGl_symbol5842z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 645 */
																								obj_t BgL_list4097z00_3198;

																								BgL_list4097z00_3198 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4096z00_3197 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol5822z00zz__evobjectz00,
																									BgL_list4097z00_3198);
																							}
																							BgL_arg4084z00_3187 =
																								MAKE_PAIR(BgL_arg4094z00_3196,
																								BgL_arg4096z00_3197);
																						}
																						{	/* Eval/evobject.scm 645 */
																							obj_t BgL_arg4098z00_3199;

																							obj_t BgL_arg4099z00_3200;

																							BgL_arg4098z00_3199 =
																								BGl_symbol5874z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 645 */
																								obj_t BgL_list4100z00_3201;

																								BgL_list4100z00_3201 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4099z00_3200 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol5971z00zz__evobjectz00,
																									BgL_list4100z00_3201);
																							}
																							BgL_arg4085z00_3188 =
																								MAKE_PAIR(BgL_arg4098z00_3199,
																								BgL_arg4099z00_3200);
																						}
																						{	/* Eval/evobject.scm 645 */
																							obj_t BgL_list4087z00_3190;

																							{	/* Eval/evobject.scm 645 */
																								obj_t BgL_arg4089z00_3191;

																								{	/* Eval/evobject.scm 645 */
																									obj_t BgL_arg4090z00_3192;

																									BgL_arg4090z00_3192 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4089z00_3191 =
																										MAKE_PAIR
																										(BgL_arg4085z00_3188,
																										BgL_arg4090z00_3192);
																								}
																								BgL_list4087z00_3190 =
																									MAKE_PAIR(BgL_arg4084z00_3187,
																									BgL_arg4089z00_3191);
																							}
																							BgL_arg4082z00_3185 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4083z00_3186,
																								BgL_list4087z00_3190);
																						}
																					}
																					BgL_arg4078z00_3181 =
																						MAKE_PAIR(BgL_arg4081z00_3184,
																						BgL_arg4082z00_3185);
																				}
																				{	/* Eval/evobject.scm 645 */
																					obj_t BgL_list4079z00_3182;

																					{	/* Eval/evobject.scm 645 */
																						obj_t BgL_arg4080z00_3183;

																						BgL_arg4080z00_3183 =
																							MAKE_PAIR(BgL_arg4078z00_3181,
																							BNIL);
																						BgL_list4079z00_3182 =
																							MAKE_PAIR(BgL_arg4077z00_3180,
																							BgL_arg4080z00_3183);
																					}
																					BgL_arg4075z00_3178 =
																						BgL_list4079z00_3182;
																				}
																			}
																			{	/* Eval/evobject.scm 645 */
																				obj_t BgL_arg4101z00_3202;

																				{	/* Eval/evobject.scm 645 */
																					obj_t BgL_list4104z00_3205;

																					{	/* Eval/evobject.scm 645 */
																						obj_t BgL_arg4105z00_3206;

																						obj_t BgL_arg4106z00_3207;

																						BgL_arg4105z00_3206 =
																							BGl_symbol5862z00zz__evobjectz00;
																						BgL_arg4106z00_3207 =
																							MAKE_PAIR(BgL_tmpz00_119, BNIL);
																						BgL_list4104z00_3205 =
																							MAKE_PAIR(BgL_arg4105z00_3206,
																							BgL_arg4106z00_3207);
																					}
																					BgL_arg4101z00_3202 =
																						BgL_list4104z00_3205;
																				}
																				{	/* Eval/evobject.scm 645 */
																					obj_t BgL_list4103z00_3204;

																					BgL_list4103z00_3204 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4076z00_3179 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg4101z00_3202,
																						BgL_list4103z00_3204);
																				}
																			}
																			BgL_arg4072z00_3175 =
																				MAKE_PAIR(BgL_arg4075z00_3178,
																				BgL_arg4076z00_3179);
																		}
																		{	/* Eval/evobject.scm 645 */
																			obj_t BgL_list4073z00_3176;

																			{	/* Eval/evobject.scm 645 */
																				obj_t BgL_arg4074z00_3177;

																				BgL_arg4074z00_3177 =
																					MAKE_PAIR(BgL_arg4072z00_3175, BNIL);
																				BgL_list4073z00_3176 =
																					MAKE_PAIR(BgL_arg4071z00_3174,
																					BgL_arg4074z00_3177);
																			}
																			BgL_arg4066z00_3169 =
																				BgL_list4073z00_3176;
																		}
																	}
																	BgL_arg4067z00_3170 =
																		BGl_symbol5905z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 645 */
																		obj_t BgL_list4069z00_3172;

																		{	/* Eval/evobject.scm 645 */
																			obj_t BgL_arg4070z00_3173;

																			BgL_arg4070z00_3173 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4069z00_3172 =
																				MAKE_PAIR(BgL_arg4067z00_3170,
																				BgL_arg4070z00_3173);
																		}
																		BgL_arg4065z00_3168 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4066z00_3169,
																			BgL_list4069z00_3172);
																	}
																}
																BgL_arg4051z00_3154 =
																	MAKE_PAIR(BgL_arg4064z00_3167,
																	BgL_arg4065z00_3168);
															}
															{	/* Eval/evobject.scm 643 */
																obj_t BgL_list4053z00_3156;

																{	/* Eval/evobject.scm 643 */
																	obj_t BgL_arg4054z00_3157;

																	{	/* Eval/evobject.scm 643 */
																		obj_t BgL_arg4055z00_3158;

																		BgL_arg4055z00_3158 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4054z00_3157 =
																			MAKE_PAIR(BgL_arg4051z00_3154,
																			BgL_arg4055z00_3158);
																	}
																	BgL_list4053z00_3156 =
																		MAKE_PAIR(BgL_arg4050z00_3153,
																		BgL_arg4054z00_3157);
																}
																BgL_arg4048z00_3151 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4049z00_3152, BgL_list4053z00_3156);
															}
														}
														BgL_arg3973z00_3076 =
															MAKE_PAIR(BgL_arg4047z00_3150,
															BgL_arg4048z00_3151);
													}
													{	/* Eval/evobject.scm 639 */
														obj_t BgL_list3975z00_3078;

														{	/* Eval/evobject.scm 639 */
															obj_t BgL_arg3976z00_3079;

															BgL_arg3976z00_3079 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3975z00_3078 =
																MAKE_PAIR(BgL_arg3973z00_3076,
																BgL_arg3976z00_3079);
														}
														BgL_arg3970z00_3074 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3972z00_3075, BgL_list3975z00_3078);
													}
												}
												BgL_arg3966z00_3070 =
													MAKE_PAIR(BgL_arg3969z00_3073, BgL_arg3970z00_3074);
											}
											{	/* Eval/evobject.scm 638 */
												obj_t BgL_list3968z00_3072;

												BgL_list3968z00_3072 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3962z00_3066 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3966z00_3070, BgL_list3968z00_3072);
											}
										}
										BgL_arg3953z00_3057 =
											MAKE_PAIR(BgL_arg3961z00_3065, BgL_arg3962z00_3066);
									}
									{	/* Eval/evobject.scm 646 */
										obj_t BgL_arg4107z00_3208;

										obj_t BgL_arg4108z00_3209;

										{	/* Eval/evobject.scm 646 */
											obj_t BgL_arg4109z00_3210;

											obj_t BgL_arg4110z00_3211;

											BgL_arg4109z00_3210 = BGl_symbol5979z00zz__evobjectz00;
											{	/* Eval/evobject.scm 646 */
												obj_t BgL_list4111z00_3212;

												{	/* Eval/evobject.scm 646 */
													obj_t BgL_arg4112z00_3213;

													obj_t BgL_arg4113z00_3214;

													BgL_arg4112z00_3213 =
														BGl_symbol5981z00zz__evobjectz00;
													BgL_arg4113z00_3214 = MAKE_PAIR(BNIL, BNIL);
													BgL_list4111z00_3212 =
														MAKE_PAIR(BgL_arg4112z00_3213, BgL_arg4113z00_3214);
												}
												BgL_arg4110z00_3211 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_symbol5983z00zz__evobjectz00,
													BgL_list4111z00_3212);
											}
											BgL_arg4107z00_3208 =
												MAKE_PAIR(BgL_arg4109z00_3210, BgL_arg4110z00_3211);
										}
										{	/* Eval/evobject.scm 647 */
											obj_t BgL_arg4114z00_3215;

											{	/* Eval/evobject.scm 647 */
												obj_t BgL_arg4117z00_3218;

												obj_t BgL_arg4118z00_3219;

												BgL_arg4117z00_3218 = BGl_symbol5916z00zz__evobjectz00;
												{	/* Eval/evobject.scm 647 */
													obj_t BgL_arg4119z00_3220;

													obj_t BgL_arg4120z00_3221;

													{	/* Eval/evobject.scm 647 */
														obj_t BgL_arg4124z00_3225;

														obj_t BgL_arg4125z00_3226;

														{	/* Eval/evobject.scm 647 */
															obj_t BgL_arg4126z00_3227;

															obj_t BgL_arg4127z00_3228;

															BgL_arg4126z00_3227 =
																BGl_symbol5971z00zz__evobjectz00;
															{	/* Eval/evobject.scm 647 */
																obj_t BgL_arg4128z00_3229;

																{	/* Eval/evobject.scm 647 */
																	obj_t BgL_arg4131z00_3232;

																	obj_t BgL_arg4132z00_3233;

																	BgL_arg4131z00_3232 =
																		BGl_symbol5870z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 647 */
																		obj_t BgL_list4133z00_3234;

																		{	/* Eval/evobject.scm 647 */
																			obj_t BgL_arg4134z00_3235;

																			obj_t BgL_arg4135z00_3236;

																			BgL_arg4134z00_3235 =
																				BGl_symbol5948z00zz__evobjectz00;
																			BgL_arg4135z00_3236 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4133z00_3234 =
																				MAKE_PAIR(BgL_arg4134z00_3235,
																				BgL_arg4135z00_3236);
																		}
																		BgL_arg4132z00_3233 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5886z00zz__evobjectz00,
																			BgL_list4133z00_3234);
																	}
																	BgL_arg4128z00_3229 =
																		MAKE_PAIR(BgL_arg4131z00_3232,
																		BgL_arg4132z00_3233);
																}
																{	/* Eval/evobject.scm 647 */
																	obj_t BgL_list4130z00_3231;

																	BgL_list4130z00_3231 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4127z00_3228 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg4128z00_3229, BgL_list4130z00_3231);
																}
															}
															BgL_arg4124z00_3225 =
																MAKE_PAIR(BgL_arg4126z00_3227,
																BgL_arg4127z00_3228);
														}
														{	/* Eval/evobject.scm 648 */
															obj_t BgL_arg4136z00_3237;

															{	/* Eval/evobject.scm 648 */
																obj_t BgL_arg4139z00_3240;

																obj_t BgL_arg4140z00_3241;

																BgL_arg4139z00_3240 =
																	BGl_symbol5973z00zz__evobjectz00;
																{	/* Eval/evobject.scm 648 */
																	obj_t BgL_arg4141z00_3242;

																	{	/* Eval/evobject.scm 648 */
																		obj_t BgL_arg4144z00_3245;

																		obj_t BgL_arg4145z00_3246;

																		BgL_arg4144z00_3245 =
																			BGl_symbol5933z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 648 */
																			obj_t BgL_arg4146z00_3247;

																			obj_t BgL_arg4147z00_3248;

																			obj_t BgL_arg4148z00_3249;

																			{	/* Eval/evobject.scm 648 */
																				obj_t BgL_arg4153z00_3254;

																				obj_t BgL_arg4154z00_3255;

																				BgL_arg4153z00_3254 =
																					BGl_symbol5872z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 648 */
																					obj_t BgL_list4155z00_3256;

																					BgL_list4155z00_3256 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4154z00_3255 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5971z00zz__evobjectz00,
																						BgL_list4155z00_3256);
																				}
																				BgL_arg4146z00_3247 =
																					MAKE_PAIR(BgL_arg4153z00_3254,
																					BgL_arg4154z00_3255);
																			}
																			{	/* Eval/evobject.scm 649 */
																				obj_t BgL_arg4156z00_3257;

																				obj_t BgL_arg4158z00_3258;

																				BgL_arg4156z00_3257 =
																					BGl_symbol5789z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 649 */
																					obj_t BgL_arg4159z00_3259;

																					obj_t BgL_arg4160z00_3260;

																					{	/* Eval/evobject.scm 649 */
																						obj_t BgL_arg4164z00_3264;

																						{	/* Eval/evobject.scm 649 */
																							obj_t BgL_arg4166z00_3266;

																							obj_t BgL_arg4167z00_3267;

																							BgL_arg4166z00_3266 =
																								BGl_symbol5868z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 649 */
																								obj_t BgL_arg4168z00_3268;

																								{	/* Eval/evobject.scm 649 */
																									obj_t BgL_arg4171z00_3271;

																									obj_t BgL_arg4172z00_3272;

																									BgL_arg4171z00_3271 =
																										BGl_symbol5870z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 649 */
																										obj_t BgL_arg4173z00_3273;

																										obj_t BgL_arg4174z00_3274;

																										BgL_arg4173z00_3273 =
																											BGl_symbol5886z00zz__evobjectz00;
																										BgL_arg4174z00_3274 =
																											MAKE_PAIR
																											(BGl_symbol5975z00zz__evobjectz00,
																											BNIL);
																										{	/* Eval/evobject.scm 649 */
																											obj_t
																												BgL_list4176z00_3276;
																											{	/* Eval/evobject.scm 649 */
																												obj_t
																													BgL_arg4178z00_3277;
																												BgL_arg4178z00_3277 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4176z00_3276 =
																													MAKE_PAIR
																													(BgL_arg4174z00_3274,
																													BgL_arg4178z00_3277);
																											}
																											BgL_arg4172z00_3272 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4173z00_3273,
																												BgL_list4176z00_3276);
																										}
																									}
																									BgL_arg4168z00_3268 =
																										MAKE_PAIR
																										(BgL_arg4171z00_3271,
																										BgL_arg4172z00_3272);
																								}
																								{	/* Eval/evobject.scm 649 */
																									obj_t BgL_list4170z00_3270;

																									BgL_list4170z00_3270 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4167z00_3267 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4168z00_3268,
																										BgL_list4170z00_3270);
																								}
																							}
																							BgL_arg4164z00_3264 =
																								MAKE_PAIR(BgL_arg4166z00_3266,
																								BgL_arg4167z00_3267);
																						}
																						BgL_arg4159z00_3259 =
																							MAKE_PAIR(BgL_arg4164z00_3264,
																							BNIL);
																					}
																					{	/* Eval/evobject.scm 650 */
																						obj_t BgL_arg4180z00_3278;

																						obj_t BgL_arg4181z00_3279;

																						BgL_arg4180z00_3278 =
																							BGl_symbol5933z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 650 */
																							obj_t BgL_arg4182z00_3280;

																							obj_t BgL_arg4183z00_3281;

																							{	/* Eval/evobject.scm 650 */
																								obj_t BgL_arg4187z00_3285;

																								obj_t BgL_arg4188z00_3286;

																								BgL_arg4187z00_3285 =
																									BGl_symbol5872z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 650 */
																									obj_t BgL_list4189z00_3287;

																									BgL_list4189z00_3287 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4188z00_3286 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol5868z00zz__evobjectz00,
																										BgL_list4189z00_3287);
																								}
																								BgL_arg4182z00_3280 =
																									MAKE_PAIR(BgL_arg4187z00_3285,
																									BgL_arg4188z00_3286);
																							}
																							{	/* Eval/evobject.scm 650 */
																								obj_t BgL_arg4190z00_3288;

																								obj_t BgL_arg4191z00_3289;

																								BgL_arg4190z00_3288 =
																									BGl_symbol5866z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 650 */
																									obj_t BgL_arg4192z00_3290;

																									{	/* Eval/evobject.scm 650 */
																										obj_t BgL_arg4196z00_3294;

																										obj_t BgL_arg4197z00_3295;

																										BgL_arg4196z00_3294 =
																											BGl_symbol5907z00zz__evobjectz00;
																										{	/* Eval/evobject.scm 650 */
																											obj_t
																												BgL_list4198z00_3296;
																											BgL_list4198z00_3296 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4197z00_3295 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BGl_symbol5868z00zz__evobjectz00,
																												BgL_list4198z00_3296);
																										}
																										BgL_arg4192z00_3290 =
																											MAKE_PAIR
																											(BgL_arg4196z00_3294,
																											BgL_arg4197z00_3295);
																									}
																									{	/* Eval/evobject.scm 650 */
																										obj_t BgL_list4194z00_3292;

																										{	/* Eval/evobject.scm 650 */
																											obj_t BgL_arg4195z00_3293;

																											BgL_arg4195z00_3293 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list4194z00_3292 =
																												MAKE_PAIR
																												(BgL_tmpz00_119,
																												BgL_arg4195z00_3293);
																										}
																										BgL_arg4191z00_3289 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg4192z00_3290,
																											BgL_list4194z00_3292);
																									}
																								}
																								BgL_arg4183z00_3281 =
																									MAKE_PAIR(BgL_arg4190z00_3288,
																									BgL_arg4191z00_3289);
																							}
																							{	/* Eval/evobject.scm 650 */
																								obj_t BgL_list4185z00_3283;

																								{	/* Eval/evobject.scm 650 */
																									obj_t BgL_arg4186z00_3284;

																									BgL_arg4186z00_3284 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list4185z00_3283 =
																										MAKE_PAIR
																										(BgL_arg4183z00_3281,
																										BgL_arg4186z00_3284);
																								}
																								BgL_arg4181z00_3279 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4182z00_3280,
																									BgL_list4185z00_3283);
																							}
																						}
																						BgL_arg4160z00_3260 =
																							MAKE_PAIR(BgL_arg4180z00_3278,
																							BgL_arg4181z00_3279);
																					}
																					{	/* Eval/evobject.scm 649 */
																						obj_t BgL_list4162z00_3262;

																						{	/* Eval/evobject.scm 649 */
																							obj_t BgL_arg4163z00_3263;

																							BgL_arg4163z00_3263 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list4162z00_3262 =
																								MAKE_PAIR(BgL_arg4160z00_3260,
																								BgL_arg4163z00_3263);
																						}
																						BgL_arg4158z00_3258 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4159z00_3259,
																							BgL_list4162z00_3262);
																					}
																				}
																				BgL_arg4147z00_3248 =
																					MAKE_PAIR(BgL_arg4156z00_3257,
																					BgL_arg4158z00_3258);
																			}
																			{	/* Eval/evobject.scm 651 */
																				obj_t BgL_arg4199z00_3297;

																				obj_t BgL_arg4200z00_3298;

																				BgL_arg4199z00_3297 =
																					BGl_symbol5870z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 651 */
																					obj_t BgL_arg4201z00_3299;

																					obj_t BgL_arg4202z00_3300;

																					{	/* Eval/evobject.scm 651 */
																						obj_t BgL_arg4207z00_3304;

																						obj_t BgL_arg4208z00_3305;

																						BgL_arg4207z00_3304 =
																							BGl_symbol5874z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 651 */
																							obj_t BgL_list4209z00_3306;

																							BgL_list4209z00_3306 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg4208z00_3305 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BGl_symbol5971z00zz__evobjectz00,
																								BgL_list4209z00_3306);
																						}
																						BgL_arg4201z00_3299 =
																							MAKE_PAIR(BgL_arg4207z00_3304,
																							BgL_arg4208z00_3305);
																					}
																					BgL_arg4202z00_3300 =
																						BGl_symbol5946z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 651 */
																						obj_t BgL_list4205z00_3302;

																						{	/* Eval/evobject.scm 651 */
																							obj_t BgL_arg4206z00_3303;

																							BgL_arg4206z00_3303 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list4205z00_3302 =
																								MAKE_PAIR(BgL_arg4202z00_3300,
																								BgL_arg4206z00_3303);
																						}
																						BgL_arg4200z00_3298 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4201z00_3299,
																							BgL_list4205z00_3302);
																					}
																				}
																				BgL_arg4148z00_3249 =
																					MAKE_PAIR(BgL_arg4199z00_3297,
																					BgL_arg4200z00_3298);
																			}
																			{	/* Eval/evobject.scm 648 */
																				obj_t BgL_list4150z00_3251;

																				{	/* Eval/evobject.scm 648 */
																					obj_t BgL_arg4151z00_3252;

																					{	/* Eval/evobject.scm 648 */
																						obj_t BgL_arg4152z00_3253;

																						BgL_arg4152z00_3253 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4151z00_3252 =
																							MAKE_PAIR(BgL_arg4148z00_3249,
																							BgL_arg4152z00_3253);
																					}
																					BgL_list4150z00_3251 =
																						MAKE_PAIR(BgL_arg4147z00_3248,
																						BgL_arg4151z00_3252);
																				}
																				BgL_arg4145z00_3246 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4146z00_3247,
																					BgL_list4150z00_3251);
																			}
																		}
																		BgL_arg4141z00_3242 =
																			MAKE_PAIR(BgL_arg4144z00_3245,
																			BgL_arg4145z00_3246);
																	}
																	{	/* Eval/evobject.scm 648 */
																		obj_t BgL_list4143z00_3244;

																		BgL_list4143z00_3244 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4140z00_3241 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4141z00_3242,
																			BgL_list4143z00_3244);
																	}
																}
																BgL_arg4136z00_3237 =
																	MAKE_PAIR(BgL_arg4139z00_3240,
																	BgL_arg4140z00_3241);
															}
															{	/* Eval/evobject.scm 647 */
																obj_t BgL_list4138z00_3239;

																BgL_list4138z00_3239 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg4125z00_3226 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4136z00_3237, BgL_list4138z00_3239);
															}
														}
														BgL_arg4119z00_3220 =
															MAKE_PAIR(BgL_arg4124z00_3225,
															BgL_arg4125z00_3226);
													}
													{	/* Eval/evobject.scm 652 */
														obj_t BgL_arg4210z00_3307;

														obj_t BgL_arg4211z00_3308;

														BgL_arg4210z00_3307 =
															BGl_symbol5789z00zz__evobjectz00;
														{	/* Eval/evobject.scm 652 */
															obj_t BgL_arg4212z00_3309;

															obj_t BgL_arg4213z00_3310;

															{	/* Eval/evobject.scm 652 */
																obj_t BgL_arg4217z00_3314;

																{	/* Eval/evobject.scm 652 */
																	obj_t BgL_arg4219z00_3316;

																	obj_t BgL_arg4220z00_3317;

																	BgL_arg4219z00_3316 =
																		BGl_symbol5985z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 652 */
																		obj_t BgL_arg4221z00_3318;

																		{	/* Eval/evobject.scm 652 */
																			obj_t BgL_arg4224z00_3321;

																			obj_t BgL_arg4225z00_3322;

																			BgL_arg4224z00_3321 =
																				BGl_symbol5969z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 652 */
																				obj_t BgL_list4226z00_3323;

																				{	/* Eval/evobject.scm 652 */
																					obj_t BgL_arg4228z00_3324;

																					obj_t BgL_arg4229z00_3325;

																					BgL_arg4228z00_3324 =
																						BGl_symbol5969z00zz__evobjectz00;
																					BgL_arg4229z00_3325 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4226z00_3323 =
																						MAKE_PAIR(BgL_arg4228z00_3324,
																						BgL_arg4229z00_3325);
																				}
																				BgL_arg4225z00_3322 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol5836z00zz__evobjectz00,
																					BgL_list4226z00_3323);
																			}
																			BgL_arg4221z00_3318 =
																				MAKE_PAIR(BgL_arg4224z00_3321,
																				BgL_arg4225z00_3322);
																		}
																		{	/* Eval/evobject.scm 652 */
																			obj_t BgL_list4223z00_3320;

																			BgL_list4223z00_3320 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg4220z00_3317 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg4221z00_3318,
																				BgL_list4223z00_3320);
																		}
																	}
																	BgL_arg4217z00_3314 =
																		MAKE_PAIR(BgL_arg4219z00_3316,
																		BgL_arg4220z00_3317);
																}
																BgL_arg4212z00_3309 =
																	MAKE_PAIR(BgL_arg4217z00_3314, BNIL);
															}
															{	/* Eval/evobject.scm 653 */
																obj_t BgL_arg4230z00_3326;

																obj_t BgL_arg4231z00_3327;

																BgL_arg4230z00_3326 =
																	BGl_symbol5838z00zz__evobjectz00;
																{	/* Eval/evobject.scm 653 */
																	obj_t BgL_arg4232z00_3328;

																	obj_t BgL_arg4233z00_3329;

																	obj_t BgL_arg4234z00_3330;

																	{	/* Eval/evobject.scm 653 */
																		obj_t BgL_arg4239z00_3335;

																		obj_t BgL_arg4240z00_3336;

																		BgL_arg4239z00_3335 =
																			BGl_symbol5888z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 653 */
																			obj_t BgL_arg4241z00_3337;

																			obj_t BgL_arg4242z00_3338;

																			{	/* Eval/evobject.scm 653 */
																				obj_t BgL_arg4246z00_3342;

																				obj_t BgL_arg4247z00_3343;

																				BgL_arg4246z00_3342 =
																					BGl_symbol5890z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 653 */
																					obj_t BgL_list4248z00_3344;

																					BgL_list4248z00_3344 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4247z00_3343 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5973z00zz__evobjectz00,
																						BgL_list4248z00_3344);
																				}
																				BgL_arg4241z00_3337 =
																					MAKE_PAIR(BgL_arg4246z00_3342,
																					BgL_arg4247z00_3343);
																			}
																			{	/* Eval/evobject.scm 653 */
																				obj_t BgL_arg4249z00_3345;

																				obj_t BgL_arg4251z00_3346;

																				BgL_arg4249z00_3345 =
																					BGl_symbol5987z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 653 */
																					obj_t BgL_list4252z00_3347;

																					BgL_list4252z00_3347 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4251z00_3346 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol5973z00zz__evobjectz00,
																						BgL_list4252z00_3347);
																				}
																				BgL_arg4242z00_3338 =
																					MAKE_PAIR(BgL_arg4249z00_3345,
																					BgL_arg4251z00_3346);
																			}
																			{	/* Eval/evobject.scm 653 */
																				obj_t BgL_list4244z00_3340;

																				{	/* Eval/evobject.scm 653 */
																					obj_t BgL_arg4245z00_3341;

																					BgL_arg4245z00_3341 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4244z00_3340 =
																						MAKE_PAIR(BgL_arg4242z00_3338,
																						BgL_arg4245z00_3341);
																				}
																				BgL_arg4240z00_3336 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4241z00_3337,
																					BgL_list4244z00_3340);
																			}
																		}
																		BgL_arg4232z00_3328 =
																			MAKE_PAIR(BgL_arg4239z00_3335,
																			BgL_arg4240z00_3336);
																	}
																	{	/* Eval/evobject.scm 654 */
																		obj_t BgL_arg4253z00_3348;

																		obj_t BgL_arg4254z00_3349;

																		BgL_arg4253z00_3348 =
																			BGl_symbol5905z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 654 */
																			obj_t BgL_arg4255z00_3350;

																			obj_t BgL_arg4257z00_3351;

																			{	/* Eval/evobject.scm 654 */
																				obj_t BgL_arg4261z00_3355;

																				obj_t BgL_arg4262z00_3356;

																				BgL_arg4261z00_3355 =
																					BGl_symbol5860z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 654 */
																					obj_t BgL_arg4266z00_3359;

																					obj_t BgL_arg4267z00_3360;

																					BgL_arg4266z00_3359 =
																						BGl_symbol5979z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 654 */
																						obj_t BgL_arg4268z00_3361;

																						obj_t BgL_arg4269z00_3362;

																						{	/* Eval/evobject.scm 654 */
																							obj_t BgL_list4273z00_3366;

																							{	/* Eval/evobject.scm 654 */
																								obj_t BgL_arg4274z00_3367;

																								obj_t BgL_arg4275z00_3368;

																								BgL_arg4274z00_3367 =
																									BGl_symbol5862z00zz__evobjectz00;
																								BgL_arg4275z00_3368 =
																									MAKE_PAIR
																									(BGl_symbol5886z00zz__evobjectz00,
																									BNIL);
																								BgL_list4273z00_3366 =
																									MAKE_PAIR(BgL_arg4274z00_3367,
																									BgL_arg4275z00_3368);
																							}
																							BgL_arg4268z00_3361 =
																								BgL_list4273z00_3366;
																						}
																						{	/* Eval/evobject.scm 654 */
																							obj_t BgL_list4276z00_3369;

																							{	/* Eval/evobject.scm 654 */
																								obj_t BgL_arg4277z00_3370;

																								obj_t BgL_arg4278z00_3371;

																								BgL_arg4277z00_3370 =
																									BGl_symbol5862z00zz__evobjectz00;
																								BgL_arg4278z00_3371 =
																									MAKE_PAIR
																									(BGl_symbol5985z00zz__evobjectz00,
																									BNIL);
																								BgL_list4276z00_3369 =
																									MAKE_PAIR(BgL_arg4277z00_3370,
																									BgL_arg4278z00_3371);
																							}
																							BgL_arg4269z00_3362 =
																								BgL_list4276z00_3369;
																						}
																						{	/* Eval/evobject.scm 654 */
																							obj_t BgL_list4271z00_3364;

																							{	/* Eval/evobject.scm 654 */
																								obj_t BgL_arg4272z00_3365;

																								BgL_arg4272z00_3365 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list4271z00_3364 =
																									MAKE_PAIR(BgL_arg4269z00_3362,
																									BgL_arg4272z00_3365);
																							}
																							BgL_arg4267z00_3360 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4268z00_3361,
																								BgL_list4271z00_3364);
																						}
																					}
																					BgL_arg4262z00_3356 =
																						MAKE_PAIR(BgL_arg4266z00_3359,
																						BgL_arg4267z00_3360);
																				}
																				{	/* Eval/evobject.scm 654 */
																					obj_t BgL_list4263z00_3357;

																					{	/* Eval/evobject.scm 654 */
																						obj_t BgL_arg4265z00_3358;

																						BgL_arg4265z00_3358 =
																							MAKE_PAIR(BgL_arg4262z00_3356,
																							BNIL);
																						BgL_list4263z00_3357 =
																							MAKE_PAIR(BgL_arg4261z00_3355,
																							BgL_arg4265z00_3358);
																					}
																					BgL_arg4255z00_3350 =
																						BgL_list4263z00_3357;
																				}
																			}
																			BgL_arg4257z00_3351 =
																				BGl_symbol5905z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 654 */
																				obj_t BgL_list4259z00_3353;

																				{	/* Eval/evobject.scm 654 */
																					obj_t BgL_arg4260z00_3354;

																					BgL_arg4260z00_3354 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4259z00_3353 =
																						MAKE_PAIR(BgL_arg4257z00_3351,
																						BgL_arg4260z00_3354);
																				}
																				BgL_arg4254z00_3349 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4255z00_3350,
																					BgL_list4259z00_3353);
																			}
																		}
																		BgL_arg4233z00_3329 =
																			MAKE_PAIR(BgL_arg4253z00_3348,
																			BgL_arg4254z00_3349);
																	}
																	{	/* Eval/evobject.scm 655 */
																		obj_t BgL_arg4279z00_3372;

																		obj_t BgL_arg4280z00_3373;

																		BgL_arg4279z00_3372 =
																			BGl_symbol5905z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 655 */
																			obj_t BgL_arg4282z00_3374;

																			obj_t BgL_arg4283z00_3375;

																			{	/* Eval/evobject.scm 655 */
																				obj_t BgL_arg4288z00_3379;

																				obj_t BgL_arg4289z00_3380;

																				BgL_arg4288z00_3379 =
																					BGl_symbol5860z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 655 */
																					obj_t BgL_arg4292z00_3383;

																					obj_t BgL_arg4293z00_3384;

																					{	/* Eval/evobject.scm 655 */
																						obj_t BgL_arg4294z00_3385;

																						obj_t BgL_arg4295z00_3386;

																						BgL_arg4294z00_3385 =
																							BGl_symbol5862z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 655 */
																							obj_t BgL_arg4298z00_3389;

																							obj_t BgL_arg4299z00_3390;

																							BgL_arg4298z00_3389 =
																								BGl_symbol5977z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 655 */
																								obj_t BgL_arg4300z00_3391;

																								obj_t BgL_arg4301z00_3392;

																								obj_t BgL_arg4303z00_3393;

																								obj_t BgL_arg4304z00_3394;

																								{	/* Eval/evobject.scm 655 */
																									obj_t BgL_arg4310z00_3400;

																									obj_t BgL_arg4311z00_3401;

																									BgL_arg4310z00_3400 =
																										BGl_symbol5842z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 655 */
																										obj_t BgL_list4312z00_3402;

																										BgL_list4312z00_3402 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4311z00_3401 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_idz00_118,
																											BgL_list4312z00_3402);
																									}
																									BgL_arg4300z00_3391 =
																										MAKE_PAIR
																										(BgL_arg4310z00_3400,
																										BgL_arg4311z00_3401);
																								}
																								{	/* Eval/evobject.scm 655 */
																									obj_t BgL_arg4313z00_3403;

																									obj_t BgL_arg4314z00_3404;

																									BgL_arg4313z00_3403 =
																										BGl_symbol5842z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 655 */
																										obj_t BgL_list4315z00_3405;

																										BgL_list4315z00_3405 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4314z00_3404 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BGl_symbol5822z00zz__evobjectz00,
																											BgL_list4315z00_3405);
																									}
																									BgL_arg4301z00_3392 =
																										MAKE_PAIR
																										(BgL_arg4313z00_3403,
																										BgL_arg4314z00_3404);
																								}
																								{	/* Eval/evobject.scm 655 */
																									obj_t BgL_arg4316z00_3406;

																									obj_t BgL_arg4317z00_3407;

																									BgL_arg4316z00_3406 =
																										BGl_symbol5874z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 655 */
																										obj_t BgL_list4318z00_3408;

																										BgL_list4318z00_3408 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4317z00_3407 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BGl_symbol5971z00zz__evobjectz00,
																											BgL_list4318z00_3408);
																									}
																									BgL_arg4303z00_3393 =
																										MAKE_PAIR
																										(BgL_arg4316z00_3406,
																										BgL_arg4317z00_3407);
																								}
																								{	/* Eval/evobject.scm 655 */
																									obj_t BgL_arg4319z00_3409;

																									obj_t BgL_arg4320z00_3410;

																									BgL_arg4319z00_3409 =
																										BGl_symbol5842z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 655 */
																										obj_t BgL_list4321z00_3411;

																										BgL_list4321z00_3411 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4320z00_3410 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BGl_symbol5824z00zz__evobjectz00,
																											BgL_list4321z00_3411);
																									}
																									BgL_arg4304z00_3394 =
																										MAKE_PAIR
																										(BgL_arg4319z00_3409,
																										BgL_arg4320z00_3410);
																								}
																								{	/* Eval/evobject.scm 655 */
																									obj_t BgL_list4306z00_3396;

																									{	/* Eval/evobject.scm 655 */
																										obj_t BgL_arg4307z00_3397;

																										{	/* Eval/evobject.scm 655 */
																											obj_t BgL_arg4308z00_3398;

																											{	/* Eval/evobject.scm 655 */
																												obj_t
																													BgL_arg4309z00_3399;
																												BgL_arg4309z00_3399 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4308z00_3398 =
																													MAKE_PAIR
																													(BgL_arg4304z00_3394,
																													BgL_arg4309z00_3399);
																											}
																											BgL_arg4307z00_3397 =
																												MAKE_PAIR
																												(BgL_arg4303z00_3393,
																												BgL_arg4308z00_3398);
																										}
																										BgL_list4306z00_3396 =
																											MAKE_PAIR
																											(BgL_arg4301z00_3392,
																											BgL_arg4307z00_3397);
																									}
																									BgL_arg4299z00_3390 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4300z00_3391,
																										BgL_list4306z00_3396);
																								}
																							}
																							BgL_arg4295z00_3386 =
																								MAKE_PAIR(BgL_arg4298z00_3389,
																								BgL_arg4299z00_3390);
																						}
																						{	/* Eval/evobject.scm 655 */
																							obj_t BgL_list4296z00_3387;

																							{	/* Eval/evobject.scm 655 */
																								obj_t BgL_arg4297z00_3388;

																								BgL_arg4297z00_3388 =
																									MAKE_PAIR(BgL_arg4295z00_3386,
																									BNIL);
																								BgL_list4296z00_3387 =
																									MAKE_PAIR(BgL_arg4294z00_3385,
																									BgL_arg4297z00_3388);
																							}
																							BgL_arg4292z00_3383 =
																								BgL_list4296z00_3387;
																						}
																					}
																					{	/* Eval/evobject.scm 655 */
																						obj_t BgL_arg4322z00_3412;

																						obj_t BgL_arg4323z00_3413;

																						{	/* Eval/evobject.scm 655 */
																							obj_t BgL_list4327z00_3417;

																							{	/* Eval/evobject.scm 655 */
																								obj_t BgL_arg4328z00_3418;

																								obj_t BgL_arg4329z00_3419;

																								BgL_arg4328z00_3418 =
																									BGl_symbol5862z00zz__evobjectz00;
																								BgL_arg4329z00_3419 =
																									MAKE_PAIR(BgL_tmpz00_119,
																									BNIL);
																								BgL_list4327z00_3417 =
																									MAKE_PAIR(BgL_arg4328z00_3418,
																									BgL_arg4329z00_3419);
																							}
																							BgL_arg4322z00_3412 =
																								BgL_list4327z00_3417;
																						}
																						{	/* Eval/evobject.scm 655 */
																							obj_t BgL_list4330z00_3420;

																							{	/* Eval/evobject.scm 655 */
																								obj_t BgL_arg4331z00_3421;

																								obj_t BgL_arg4332z00_3422;

																								BgL_arg4331z00_3421 =
																									BGl_symbol5862z00zz__evobjectz00;
																								BgL_arg4332z00_3422 =
																									MAKE_PAIR
																									(BGl_symbol5985z00zz__evobjectz00,
																									BNIL);
																								BgL_list4330z00_3420 =
																									MAKE_PAIR(BgL_arg4331z00_3421,
																									BgL_arg4332z00_3422);
																							}
																							BgL_arg4323z00_3413 =
																								BgL_list4330z00_3420;
																						}
																						{	/* Eval/evobject.scm 655 */
																							obj_t BgL_list4325z00_3415;

																							{	/* Eval/evobject.scm 655 */
																								obj_t BgL_arg4326z00_3416;

																								BgL_arg4326z00_3416 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list4325z00_3415 =
																									MAKE_PAIR(BgL_arg4323z00_3413,
																									BgL_arg4326z00_3416);
																							}
																							BgL_arg4293z00_3384 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4322z00_3412,
																								BgL_list4325z00_3415);
																						}
																					}
																					BgL_arg4289z00_3380 =
																						MAKE_PAIR(BgL_arg4292z00_3383,
																						BgL_arg4293z00_3384);
																				}
																				{	/* Eval/evobject.scm 655 */
																					obj_t BgL_list4290z00_3381;

																					{	/* Eval/evobject.scm 655 */
																						obj_t BgL_arg4291z00_3382;

																						BgL_arg4291z00_3382 =
																							MAKE_PAIR(BgL_arg4289z00_3380,
																							BNIL);
																						BgL_list4290z00_3381 =
																							MAKE_PAIR(BgL_arg4288z00_3379,
																							BgL_arg4291z00_3382);
																					}
																					BgL_arg4282z00_3374 =
																						BgL_list4290z00_3381;
																				}
																			}
																			BgL_arg4283z00_3375 =
																				BGl_symbol5905z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 655 */
																				obj_t BgL_list4286z00_3377;

																				{	/* Eval/evobject.scm 655 */
																					obj_t BgL_arg4287z00_3378;

																					BgL_arg4287z00_3378 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4286z00_3377 =
																						MAKE_PAIR(BgL_arg4283z00_3375,
																						BgL_arg4287z00_3378);
																				}
																				BgL_arg4280z00_3373 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4282z00_3374,
																					BgL_list4286z00_3377);
																			}
																		}
																		BgL_arg4234z00_3330 =
																			MAKE_PAIR(BgL_arg4279z00_3372,
																			BgL_arg4280z00_3373);
																	}
																	{	/* Eval/evobject.scm 653 */
																		obj_t BgL_list4236z00_3332;

																		{	/* Eval/evobject.scm 653 */
																			obj_t BgL_arg4237z00_3333;

																			{	/* Eval/evobject.scm 653 */
																				obj_t BgL_arg4238z00_3334;

																				BgL_arg4238z00_3334 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg4237z00_3333 =
																					MAKE_PAIR(BgL_arg4234z00_3330,
																					BgL_arg4238z00_3334);
																			}
																			BgL_list4236z00_3332 =
																				MAKE_PAIR(BgL_arg4233z00_3329,
																				BgL_arg4237z00_3333);
																		}
																		BgL_arg4231z00_3327 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4232z00_3328,
																			BgL_list4236z00_3332);
																	}
																}
																BgL_arg4213z00_3310 =
																	MAKE_PAIR(BgL_arg4230z00_3326,
																	BgL_arg4231z00_3327);
															}
															{	/* Eval/evobject.scm 652 */
																obj_t BgL_list4215z00_3312;

																{	/* Eval/evobject.scm 652 */
																	obj_t BgL_arg4216z00_3313;

																	BgL_arg4216z00_3313 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4215z00_3312 =
																		MAKE_PAIR(BgL_arg4213z00_3310,
																		BgL_arg4216z00_3313);
																}
																BgL_arg4211z00_3308 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4212z00_3309, BgL_list4215z00_3312);
															}
														}
														BgL_arg4120z00_3221 =
															MAKE_PAIR(BgL_arg4210z00_3307,
															BgL_arg4211z00_3308);
													}
													{	/* Eval/evobject.scm 647 */
														obj_t BgL_list4122z00_3223;

														{	/* Eval/evobject.scm 647 */
															obj_t BgL_arg4123z00_3224;

															BgL_arg4123z00_3224 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4122z00_3223 =
																MAKE_PAIR(BgL_arg4120z00_3221,
																BgL_arg4123z00_3224);
														}
														BgL_arg4118z00_3219 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4119z00_3220, BgL_list4122z00_3223);
													}
												}
												BgL_arg4114z00_3215 =
													MAKE_PAIR(BgL_arg4117z00_3218, BgL_arg4118z00_3219);
											}
											{	/* Eval/evobject.scm 646 */
												obj_t BgL_list4116z00_3217;

												BgL_list4116z00_3217 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg4108z00_3209 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4114z00_3215, BgL_list4116z00_3217);
											}
										}
										BgL_arg3954z00_3058 =
											MAKE_PAIR(BgL_arg4107z00_3208, BgL_arg4108z00_3209);
									}
									{	/* Eval/evobject.scm 656 */
										obj_t BgL_arg4333z00_3423;

										obj_t BgL_arg4334z00_3424;

										BgL_arg4333z00_3423 = BGl_symbol5941z00zz__evobjectz00;
										{	/* Eval/evobject.scm 657 */
											obj_t BgL_arg4335z00_3425;

											{	/* Eval/evobject.scm 657 */
												obj_t BgL_arg4338z00_3428;

												obj_t BgL_arg4339z00_3429;

												BgL_arg4338z00_3428 = BGl_symbol5905z00zz__evobjectz00;
												{	/* Eval/evobject.scm 657 */
													obj_t BgL_list4340z00_3430;

													{	/* Eval/evobject.scm 657 */
														obj_t BgL_arg4341z00_3431;

														obj_t BgL_arg4342z00_3432;

														BgL_arg4341z00_3431 =
															BGl_symbol5969z00zz__evobjectz00;
														BgL_arg4342z00_3432 = MAKE_PAIR(BNIL, BNIL);
														BgL_list4340z00_3430 =
															MAKE_PAIR(BgL_arg4341z00_3431,
															BgL_arg4342z00_3432);
													}
													BgL_arg4339z00_3429 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BGl_symbol5818z00zz__evobjectz00,
														BgL_list4340z00_3430);
												}
												BgL_arg4335z00_3425 =
													MAKE_PAIR(BgL_arg4338z00_3428, BgL_arg4339z00_3429);
											}
											{	/* Eval/evobject.scm 656 */
												obj_t BgL_list4337z00_3427;

												BgL_list4337z00_3427 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg4334z00_3424 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4335z00_3425, BgL_list4337z00_3427);
											}
										}
										BgL_arg3955z00_3059 =
											MAKE_PAIR(BgL_arg4333z00_3423, BgL_arg4334z00_3424);
									}
									{	/* Eval/evobject.scm 637 */
										obj_t BgL_list3957z00_3061;

										{	/* Eval/evobject.scm 637 */
											obj_t BgL_arg3958z00_3062;

											{	/* Eval/evobject.scm 637 */
												obj_t BgL_arg3959z00_3063;

												{	/* Eval/evobject.scm 637 */
													obj_t BgL_arg3960z00_3064;

													BgL_arg3960z00_3064 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3959z00_3063 =
														MAKE_PAIR(BgL_arg3955z00_3059, BgL_arg3960z00_3064);
												}
												BgL_arg3958z00_3062 =
													MAKE_PAIR(BgL_arg3954z00_3058, BgL_arg3959z00_3063);
											}
											BgL_list3957z00_3061 =
												MAKE_PAIR(BgL_arg3953z00_3057, BgL_arg3958z00_3062);
										}
										BgL_arg3950z00_3055 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3951z00_3056, BgL_list3957z00_3061);
									}
								}
								BgL_arg3942z00_3047 =
									MAKE_PAIR(BgL_arg3949z00_3054, BgL_arg3950z00_3055);
							}
							{	/* Eval/evobject.scm 636 */
								obj_t BgL_list3944z00_3049;

								{	/* Eval/evobject.scm 636 */
									obj_t BgL_arg3945z00_3050;

									BgL_arg3945z00_3050 = MAKE_PAIR(BNIL, BNIL);
									BgL_list3944z00_3049 =
										MAKE_PAIR(BgL_arg3942z00_3047, BgL_arg3945z00_3050);
								}
								BgL_arg3940z00_3045 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3941z00_3046, BgL_list3944z00_3049);
							}
						}
						BgL_arg3936z00_3041 =
							MAKE_PAIR(BgL_arg3939z00_3044, BgL_arg3940z00_3045);
					}
					{	/* Eval/evobject.scm 635 */
						obj_t BgL_list3938z00_3043;

						BgL_list3938z00_3043 = MAKE_PAIR(BNIL, BNIL);
						BgL_arg3935z00_3040 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3936z00_3041,
							BgL_list3938z00_3043);
					}
				}
				return MAKE_PAIR(BgL_arg3934z00_3039, BgL_arg3935z00_3040);
			}
		}
	}



/* make-eval-with-access-body-plain */
	obj_t BGl_makezd2evalzd2withzd2accesszd2bodyzd2plainzd2zz__evobjectz00(obj_t
		BgL_idz00_123, obj_t BgL_allzd2slotszd2_124, obj_t BgL_tmpz00_125)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 670 */
			{	/* Eval/evobject.scm 671 */
				obj_t BgL_arg4348z00_6750;

				obj_t BgL_arg4349z00_6751;

				BgL_arg4348z00_6750 = BGl_symbol5860z00zz__evobjectz00;
				{	/* Eval/evobject.scm 671 */
					obj_t BgL_arg4352z00_6752;

					obj_t BgL_arg4353z00_6753;

					BgL_arg4352z00_6752 = BGl_symbol5989z00zz__evobjectz00;
					{	/* Eval/evobject.scm 671 */
						obj_t BgL_arg4354z00_6754;

						{	/* Eval/evobject.scm 671 */
							obj_t BgL_arg4356z00_6756;

							{	/* Eval/evobject.scm 671 */
								obj_t BgL_list4358z00_6757;

								{	/* Eval/evobject.scm 671 */
									obj_t BgL_arg4359z00_6758;

									obj_t BgL_arg4360z00_6759;

									BgL_arg4359z00_6758 = BGl_symbol5991z00zz__evobjectz00;
									BgL_arg4360z00_6759 =
										MAKE_PAIR(BGl_symbol5961z00zz__evobjectz00, BNIL);
									BgL_list4358z00_6757 =
										MAKE_PAIR(BgL_arg4359z00_6758, BgL_arg4360z00_6759);
								}
								BgL_arg4356z00_6756 = BgL_list4358z00_6757;
							}
							{	/* Eval/evobject.scm 671 */
								obj_t BgL_list4357z00_6760;

								BgL_list4357z00_6760 = MAKE_PAIR(BgL_arg4356z00_6756, BNIL);
								BgL_arg4354z00_6754 = BgL_list4357z00_6760;
							}
						}
						BgL_arg4353z00_6753 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_arg4354z00_6754, BNIL);
					}
					BgL_arg4349z00_6751 =
						MAKE_PAIR(BgL_arg4352z00_6752, BgL_arg4353z00_6753);
				}
				{	/* Eval/evobject.scm 671 */
					obj_t BgL_list4350z00_6761;

					{	/* Eval/evobject.scm 671 */
						obj_t BgL_arg4351z00_6762;

						BgL_arg4351z00_6762 = MAKE_PAIR(BgL_arg4349z00_6751, BNIL);
						BgL_list4350z00_6761 =
							MAKE_PAIR(BgL_arg4348z00_6750, BgL_arg4351z00_6762);
					}
					return BgL_list4350z00_6761;
				}
			}
		}
	}



/* make-eval-with-access-body-indexed */
	obj_t BGl_makezd2evalzd2withzd2accesszd2bodyzd2indexedzd2zz__evobjectz00(obj_t
		BgL_idz00_126, obj_t BgL_allzd2slotszd2_127, obj_t BgL_tmpz00_128)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 676 */
			{	/* Eval/evobject.scm 677 */
				obj_t BgL_arg4361z00_3455;

				obj_t BgL_arg4362z00_3456;

				BgL_arg4361z00_3455 = BGl_symbol5789z00zz__evobjectz00;
				{	/* Eval/evobject.scm 677 */
					obj_t BgL_arg4363z00_3457;

					obj_t BgL_arg4364z00_3458;

					obj_t BgL_arg4365z00_3459;

					BgL_arg4363z00_3457 = BGl_symbol5993z00zz__evobjectz00;
					{	/* Eval/evobject.scm 677 */
						obj_t BgL_arg4370z00_3464;

						{	/* Eval/evobject.scm 677 */
							obj_t BgL_arg4372z00_3466;

							obj_t BgL_arg4373z00_3467;

							BgL_arg4372z00_3466 = BGl_symbol5955z00zz__evobjectz00;
							{	/* Eval/evobject.scm 677 */
								obj_t BgL_list4374z00_3468;

								BgL_list4374z00_3468 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg4373z00_3467 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BGl_symbol5955z00zz__evobjectz00, BgL_list4374z00_3468);
							}
							BgL_arg4370z00_3464 =
								MAKE_PAIR(BgL_arg4372z00_3466, BgL_arg4373z00_3467);
						}
						BgL_arg4364z00_3458 = MAKE_PAIR(BgL_arg4370z00_3464, BNIL);
					}
					{	/* Eval/evobject.scm 678 */
						obj_t BgL_arg4375z00_3469;

						obj_t BgL_arg4376z00_3470;

						BgL_arg4375z00_3469 = BGl_symbol5838z00zz__evobjectz00;
						{	/* Eval/evobject.scm 678 */
							obj_t BgL_arg4377z00_3471;

							obj_t BgL_arg4378z00_3472;

							obj_t BgL_arg4379z00_3473;

							{	/* Eval/evobject.scm 678 */
								obj_t BgL_arg4384z00_3478;

								obj_t BgL_arg4385z00_3479;

								BgL_arg4384z00_3478 = BGl_symbol5918z00zz__evobjectz00;
								{	/* Eval/evobject.scm 678 */
									obj_t BgL_list4386z00_3480;

									BgL_list4386z00_3480 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg4385z00_3479 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol5955z00zz__evobjectz00, BgL_list4386z00_3480);
								}
								BgL_arg4377z00_3471 =
									MAKE_PAIR(BgL_arg4384z00_3478, BgL_arg4385z00_3479);
							}
							{	/* Eval/evobject.scm 678 */
								obj_t BgL_arg4387z00_3481;

								obj_t BgL_arg4388z00_3482;

								BgL_arg4387z00_3481 = BGl_symbol5860z00zz__evobjectz00;
								{	/* Eval/evobject.scm 679 */
									obj_t BgL_arg4391z00_3485;

									obj_t BgL_arg4392z00_3486;

									BgL_arg4391z00_3485 = BGl_symbol5989z00zz__evobjectz00;
									{	/* Eval/evobject.scm 679 */
										obj_t BgL_arg4393z00_3487;

										{	/* Eval/evobject.scm 679 */
											obj_t BgL_arg4395z00_3489;

											{	/* Eval/evobject.scm 679 */
												obj_t BgL_list4397z00_3491;

												{	/* Eval/evobject.scm 679 */
													obj_t BgL_arg4398z00_3492;

													obj_t BgL_arg4399z00_3493;

													BgL_arg4398z00_3492 =
														BGl_symbol5991z00zz__evobjectz00;
													BgL_arg4399z00_3493 =
														MAKE_PAIR(BGl_symbol5961z00zz__evobjectz00, BNIL);
													BgL_list4397z00_3491 =
														MAKE_PAIR(BgL_arg4398z00_3492, BgL_arg4399z00_3493);
												}
												BgL_arg4395z00_3489 = BgL_list4397z00_3491;
											}
											{	/* Eval/evobject.scm 679 */
												obj_t BgL_list4396z00_3490;

												BgL_list4396z00_3490 =
													MAKE_PAIR(BgL_arg4395z00_3489, BNIL);
												BgL_arg4393z00_3487 = BgL_list4396z00_3490;
											}
										}
										BgL_arg4392z00_3486 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg4393z00_3487, BNIL);
									}
									BgL_arg4388z00_3482 =
										MAKE_PAIR(BgL_arg4391z00_3485, BgL_arg4392z00_3486);
								}
								{	/* Eval/evobject.scm 678 */
									obj_t BgL_list4389z00_3483;

									{	/* Eval/evobject.scm 678 */
										obj_t BgL_arg4390z00_3484;

										BgL_arg4390z00_3484 = MAKE_PAIR(BgL_arg4388z00_3482, BNIL);
										BgL_list4389z00_3483 =
											MAKE_PAIR(BgL_arg4387z00_3481, BgL_arg4390z00_3484);
									}
									BgL_arg4378z00_3472 = BgL_list4389z00_3483;
								}
							}
							{	/* Eval/evobject.scm 680 */
								obj_t BgL_arg4400z00_3494;

								obj_t BgL_arg4401z00_3495;

								BgL_arg4400z00_3494 = BGl_symbol5789z00zz__evobjectz00;
								{	/* Eval/evobject.scm 680 */
									obj_t BgL_arg4402z00_3496;

									obj_t BgL_arg4403z00_3497;

									{	/* Eval/evobject.scm 680 */
										obj_t BgL_arg4407z00_3501;

										{	/* Eval/evobject.scm 680 */
											obj_t BgL_arg4409z00_3503;

											obj_t BgL_arg4410z00_3504;

											BgL_arg4409z00_3503 = BGl_symbol5973z00zz__evobjectz00;
											{	/* Eval/evobject.scm 680 */
												obj_t BgL_arg4411z00_3505;

												{	/* Eval/evobject.scm 680 */
													obj_t BgL_arg4414z00_3508;

													obj_t BgL_arg4415z00_3509;

													BgL_arg4414z00_3508 =
														BGl_symbol5870z00zz__evobjectz00;
													{	/* Eval/evobject.scm 680 */
														obj_t BgL_arg4416z00_3510;

														obj_t BgL_arg4417z00_3511;

														{	/* Eval/evobject.scm 680 */
															obj_t BgL_arg4421z00_3515;

															obj_t BgL_arg4422z00_3516;

															BgL_arg4421z00_3515 =
																BGl_symbol5874z00zz__evobjectz00;
															{	/* Eval/evobject.scm 680 */
																obj_t BgL_arg4423z00_3517;

																{	/* Eval/evobject.scm 680 */
																	obj_t BgL_arg4426z00_3520;

																	obj_t BgL_arg4427z00_3521;

																	BgL_arg4426z00_3520 =
																		BGl_symbol5894z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 680 */
																		obj_t BgL_list4428z00_3522;

																		BgL_list4428z00_3522 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4427z00_3521 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol5948z00zz__evobjectz00,
																			BgL_list4428z00_3522);
																	}
																	BgL_arg4423z00_3517 =
																		MAKE_PAIR(BgL_arg4426z00_3520,
																		BgL_arg4427z00_3521);
																}
																{	/* Eval/evobject.scm 680 */
																	obj_t BgL_list4425z00_3519;

																	BgL_list4425z00_3519 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4422z00_3516 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg4423z00_3517, BgL_list4425z00_3519);
																}
															}
															BgL_arg4416z00_3510 =
																MAKE_PAIR(BgL_arg4421z00_3515,
																BgL_arg4422z00_3516);
														}
														BgL_arg4417z00_3511 =
															BGl_symbol5946z00zz__evobjectz00;
														{	/* Eval/evobject.scm 680 */
															obj_t BgL_list4419z00_3513;

															{	/* Eval/evobject.scm 680 */
																obj_t BgL_arg4420z00_3514;

																BgL_arg4420z00_3514 = MAKE_PAIR(BNIL, BNIL);
																BgL_list4419z00_3513 =
																	MAKE_PAIR(BgL_arg4417z00_3511,
																	BgL_arg4420z00_3514);
															}
															BgL_arg4415z00_3509 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg4416z00_3510, BgL_list4419z00_3513);
														}
													}
													BgL_arg4411z00_3505 =
														MAKE_PAIR(BgL_arg4414z00_3508, BgL_arg4415z00_3509);
												}
												{	/* Eval/evobject.scm 680 */
													obj_t BgL_list4413z00_3507;

													BgL_list4413z00_3507 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg4410z00_3504 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg4411z00_3505, BgL_list4413z00_3507);
												}
											}
											BgL_arg4407z00_3501 =
												MAKE_PAIR(BgL_arg4409z00_3503, BgL_arg4410z00_3504);
										}
										BgL_arg4402z00_3496 = MAKE_PAIR(BgL_arg4407z00_3501, BNIL);
									}
									{	/* Eval/evobject.scm 681 */
										obj_t BgL_arg4429z00_3523;

										obj_t BgL_arg4430z00_3524;

										BgL_arg4429z00_3523 = BGl_symbol5952z00zz__evobjectz00;
										{	/* Eval/evobject.scm 682 */
											obj_t BgL_arg4431z00_3525;

											obj_t BgL_arg4432z00_3526;

											obj_t BgL_arg4433z00_3527;

											{	/* Eval/evobject.scm 682 */
												obj_t BgL_arg4439z00_3532;

												obj_t BgL_arg4440z00_3533;

												{	/* Eval/evobject.scm 682 */
													obj_t BgL_arg4441z00_3534;

													obj_t BgL_arg4442z00_3535;

													BgL_arg4441z00_3534 =
														BGl_symbol5890z00zz__evobjectz00;
													{	/* Eval/evobject.scm 682 */
														obj_t BgL_list4443z00_3536;

														BgL_list4443z00_3536 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4442z00_3535 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol5973z00zz__evobjectz00,
															BgL_list4443z00_3536);
													}
													BgL_arg4439z00_3532 =
														MAKE_PAIR(BgL_arg4441z00_3534, BgL_arg4442z00_3535);
												}
												{	/* Eval/evobject.scm 683 */
													obj_t BgL_arg4444z00_3537;

													{	/* Eval/evobject.scm 683 */
														obj_t BgL_arg4447z00_3540;

														obj_t BgL_arg4448z00_3541;

														BgL_arg4447z00_3540 =
															BGl_symbol5898z00zz__evobjectz00;
														{	/* Eval/evobject.scm 683 */
															obj_t BgL_arg4449z00_3542;

															obj_t BgL_arg4451z00_3544;

															{	/* Eval/evobject.scm 683 */
																obj_t BgL_arg4456z00_3549;

																obj_t BgL_arg4457z00_3550;

																BgL_arg4456z00_3549 =
																	BGl_symbol5842z00zz__evobjectz00;
																{	/* Eval/evobject.scm 683 */
																	obj_t BgL_arg4458z00_3551;

																	{	/* Eval/evobject.scm 683 */
																		obj_t BgL_arg4461z00_3554;

																		{	/* Eval/evobject.scm 683 */
																			obj_t BgL_arg4462z00_3555;

																			obj_t BgL_arg4463z00_3556;

																			{	/* Eval/evobject.scm 683 */
																				obj_t BgL_res5711z00_6777;

																				{	/* Eval/evobject.scm 683 */
																					obj_t BgL_symbolz00_6775;

																					BgL_symbolz00_6775 =
																						BGl_symbol5925z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 683 */
																						obj_t BgL_arg5527z00_6776;

																						BgL_arg5527z00_6776 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_6775);
																						BgL_res5711z00_6777 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg5527z00_6776);
																					}
																				}
																				BgL_arg4462z00_3555 =
																					BgL_res5711z00_6777;
																			}
																			{	/* Eval/evobject.scm 683 */
																				obj_t BgL_res5712z00_6780;

																				{	/* Eval/evobject.scm 683 */
																					obj_t BgL_arg5527z00_6779;

																					BgL_arg5527z00_6779 =
																						SYMBOL_TO_STRING(BgL_idz00_126);
																					BgL_res5712z00_6780 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg5527z00_6779);
																				}
																				BgL_arg4463z00_3556 =
																					BgL_res5712z00_6780;
																			}
																			{	/* Eval/evobject.scm 683 */
																				obj_t BgL_list4464z00_3557;

																				{	/* Eval/evobject.scm 683 */
																					obj_t BgL_arg4465z00_3558;

																					BgL_arg4465z00_3558 =
																						MAKE_PAIR(BgL_arg4463z00_3556,
																						BNIL);
																					BgL_list4464z00_3557 =
																						MAKE_PAIR(BgL_arg4462z00_3555,
																						BgL_arg4465z00_3558);
																				}
																				BgL_arg4461z00_3554 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list4464z00_3557);
																			}
																		}
																		BgL_arg4458z00_3551 =
																			string_to_symbol(BSTRING_TO_STRING
																			(BgL_arg4461z00_3554));
																	}
																	{	/* Eval/evobject.scm 683 */
																		obj_t BgL_list4460z00_3553;

																		BgL_list4460z00_3553 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4457z00_3550 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4458z00_3551,
																			BgL_list4460z00_3553);
																	}
																}
																BgL_arg4449z00_3542 =
																	MAKE_PAIR(BgL_arg4456z00_3549,
																	BgL_arg4457z00_3550);
															}
															{	/* Eval/evobject.scm 685 */
																obj_t BgL_arg4466z00_3559;

																obj_t BgL_arg4467z00_3560;

																BgL_arg4466z00_3559 =
																	BGl_symbol5894z00zz__evobjectz00;
																{	/* Eval/evobject.scm 685 */
																	obj_t BgL_list4468z00_3561;

																	BgL_list4468z00_3561 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4467z00_3560 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol5955z00zz__evobjectz00,
																		BgL_list4468z00_3561);
																}
																BgL_arg4451z00_3544 =
																	MAKE_PAIR(BgL_arg4466z00_3559,
																	BgL_arg4467z00_3560);
															}
															{	/* Eval/evobject.scm 683 */
																obj_t BgL_list4453z00_3546;

																{	/* Eval/evobject.scm 683 */
																	obj_t BgL_arg4454z00_3547;

																	{	/* Eval/evobject.scm 683 */
																		obj_t BgL_arg4455z00_3548;

																		BgL_arg4455z00_3548 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4454z00_3547 =
																			MAKE_PAIR(BgL_arg4451z00_3544,
																			BgL_arg4455z00_3548);
																	}
																	BgL_list4453z00_3546 =
																		MAKE_PAIR(BGl_string5954z00zz__evobjectz00,
																		BgL_arg4454z00_3547);
																}
																BgL_arg4448z00_3541 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4449z00_3542, BgL_list4453z00_3546);
															}
														}
														BgL_arg4444z00_3537 =
															MAKE_PAIR(BgL_arg4447z00_3540,
															BgL_arg4448z00_3541);
													}
													{	/* Eval/evobject.scm 682 */
														obj_t BgL_list4446z00_3539;

														BgL_list4446z00_3539 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4440z00_3533 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4444z00_3537, BgL_list4446z00_3539);
													}
												}
												BgL_arg4431z00_3525 =
													MAKE_PAIR(BgL_arg4439z00_3532, BgL_arg4440z00_3533);
											}
											{	/* Eval/evobject.scm 686 */
												obj_t BgL_arg4469z00_3562;

												obj_t BgL_arg4470z00_3563;

												{	/* Eval/evobject.scm 686 */
													obj_t BgL_arg4471z00_3564;

													obj_t BgL_arg4472z00_3565;

													BgL_arg4471z00_3564 =
														BGl_symbol5874z00zz__evobjectz00;
													{	/* Eval/evobject.scm 686 */
														obj_t BgL_list4473z00_3566;

														BgL_list4473z00_3566 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4472z00_3565 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol5973z00zz__evobjectz00,
															BgL_list4473z00_3566);
													}
													BgL_arg4469z00_3562 =
														MAKE_PAIR(BgL_arg4471z00_3564, BgL_arg4472z00_3565);
												}
												{	/* Eval/evobject.scm 688 */
													obj_t BgL_arg4474z00_3567;

													{	/* Eval/evobject.scm 688 */
														obj_t BgL_arg4477z00_3570;

														obj_t BgL_arg4478z00_3571;

														BgL_arg4477z00_3570 =
															BGl_symbol5789z00zz__evobjectz00;
														{	/* Eval/evobject.scm 688 */
															obj_t BgL_arg4479z00_3572;

															obj_t BgL_arg4480z00_3573;

															{	/* Eval/evobject.scm 688 */
																obj_t BgL_arg4484z00_3577;

																obj_t BgL_arg4485z00_3578;

																{	/* Eval/evobject.scm 688 */
																	obj_t BgL_arg4486z00_3579;

																	obj_t BgL_arg4487z00_3580;

																	BgL_arg4486z00_3579 =
																		BGl_symbol5836z00zz__evobjectz00;
																	{	/* Eval/evobject.scm 688 */
																		obj_t BgL_arg4488z00_3581;

																		{	/* Eval/evobject.scm 688 */
																			obj_t BgL_arg4491z00_3584;

																			obj_t BgL_arg4492z00_3585;

																			BgL_arg4491z00_3584 =
																				BGl_symbol5860z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 688 */
																				obj_t BgL_arg4495z00_3588;

																				obj_t BgL_arg4496z00_3589;

																				{	/* Eval/evobject.scm 688 */
																					obj_t BgL_arg4497z00_3590;

																					obj_t BgL_arg4498z00_3591;

																					BgL_arg4497z00_3590 =
																						BGl_symbol5862z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 688 */
																						obj_t BgL_arg4501z00_3594;

																						obj_t BgL_arg4502z00_3595;

																						BgL_arg4501z00_3594 =
																							BGl_symbol5977z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 688 */
																							obj_t BgL_arg4503z00_3596;

																							obj_t BgL_arg4504z00_3597;

																							obj_t BgL_arg4505z00_3598;

																							obj_t BgL_arg4506z00_3599;

																							{	/* Eval/evobject.scm 688 */
																								obj_t BgL_arg4512z00_3605;

																								obj_t BgL_arg4513z00_3606;

																								BgL_arg4512z00_3605 =
																									BGl_symbol5842z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 688 */
																									obj_t BgL_list4514z00_3607;

																									BgL_list4514z00_3607 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4513z00_3606 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_idz00_126,
																										BgL_list4514z00_3607);
																								}
																								BgL_arg4503z00_3596 =
																									MAKE_PAIR(BgL_arg4512z00_3605,
																									BgL_arg4513z00_3606);
																							}
																							{	/* Eval/evobject.scm 688 */
																								obj_t BgL_arg4515z00_3608;

																								obj_t BgL_arg4516z00_3609;

																								BgL_arg4515z00_3608 =
																									BGl_symbol5842z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 688 */
																									obj_t BgL_list4517z00_3610;

																									BgL_list4517z00_3610 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4516z00_3609 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol5822z00zz__evobjectz00,
																										BgL_list4517z00_3610);
																								}
																								BgL_arg4504z00_3597 =
																									MAKE_PAIR(BgL_arg4515z00_3608,
																									BgL_arg4516z00_3609);
																							}
																							{	/* Eval/evobject.scm 688 */
																								obj_t BgL_arg4518z00_3611;

																								obj_t BgL_arg4519z00_3612;

																								BgL_arg4518z00_3611 =
																									BGl_symbol5995z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 688 */
																									obj_t BgL_list4520z00_3613;

																									BgL_list4520z00_3613 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4519z00_3612 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol5955z00zz__evobjectz00,
																										BgL_list4520z00_3613);
																								}
																								BgL_arg4505z00_3598 =
																									MAKE_PAIR(BgL_arg4518z00_3611,
																									BgL_arg4519z00_3612);
																							}
																							{	/* Eval/evobject.scm 688 */
																								obj_t BgL_arg4521z00_3614;

																								obj_t BgL_arg4522z00_3615;

																								BgL_arg4521z00_3614 =
																									BGl_symbol5842z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 688 */
																									obj_t BgL_list4523z00_3616;

																									BgL_list4523z00_3616 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4522z00_3615 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol5801z00zz__evobjectz00,
																										BgL_list4523z00_3616);
																								}
																								BgL_arg4506z00_3599 =
																									MAKE_PAIR(BgL_arg4521z00_3614,
																									BgL_arg4522z00_3615);
																							}
																							{	/* Eval/evobject.scm 688 */
																								obj_t BgL_list4508z00_3601;

																								{	/* Eval/evobject.scm 688 */
																									obj_t BgL_arg4509z00_3602;

																									{	/* Eval/evobject.scm 688 */
																										obj_t BgL_arg4510z00_3603;

																										{	/* Eval/evobject.scm 688 */
																											obj_t BgL_arg4511z00_3604;

																											BgL_arg4511z00_3604 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4510z00_3603 =
																												MAKE_PAIR
																												(BgL_arg4506z00_3599,
																												BgL_arg4511z00_3604);
																										}
																										BgL_arg4509z00_3602 =
																											MAKE_PAIR
																											(BgL_arg4505z00_3598,
																											BgL_arg4510z00_3603);
																									}
																									BgL_list4508z00_3601 =
																										MAKE_PAIR
																										(BgL_arg4504z00_3597,
																										BgL_arg4509z00_3602);
																								}
																								BgL_arg4502z00_3595 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4503z00_3596,
																									BgL_list4508z00_3601);
																							}
																						}
																						BgL_arg4498z00_3591 =
																							MAKE_PAIR(BgL_arg4501z00_3594,
																							BgL_arg4502z00_3595);
																					}
																					{	/* Eval/evobject.scm 688 */
																						obj_t BgL_list4499z00_3592;

																						{	/* Eval/evobject.scm 688 */
																							obj_t BgL_arg4500z00_3593;

																							BgL_arg4500z00_3593 =
																								MAKE_PAIR(BgL_arg4498z00_3591,
																								BNIL);
																							BgL_list4499z00_3592 =
																								MAKE_PAIR(BgL_arg4497z00_3590,
																								BgL_arg4500z00_3593);
																						}
																						BgL_arg4495z00_3588 =
																							BgL_list4499z00_3592;
																					}
																				}
																				{	/* Eval/evobject.scm 688 */
																					obj_t BgL_arg4524z00_3617;

																					{	/* Eval/evobject.scm 688 */
																						obj_t BgL_list4527z00_3620;

																						{	/* Eval/evobject.scm 688 */
																							obj_t BgL_arg4528z00_3621;

																							obj_t BgL_arg4529z00_3622;

																							BgL_arg4528z00_3621 =
																								BGl_symbol5862z00zz__evobjectz00;
																							BgL_arg4529z00_3622 =
																								MAKE_PAIR
																								(BGl_symbol5997z00zz__evobjectz00,
																								BNIL);
																							BgL_list4527z00_3620 =
																								MAKE_PAIR(BgL_arg4528z00_3621,
																								BgL_arg4529z00_3622);
																						}
																						BgL_arg4524z00_3617 =
																							BgL_list4527z00_3620;
																					}
																					{	/* Eval/evobject.scm 688 */
																						obj_t BgL_list4526z00_3619;

																						BgL_list4526z00_3619 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4496z00_3589 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4524z00_3617,
																							BgL_list4526z00_3619);
																					}
																				}
																				BgL_arg4492z00_3585 =
																					MAKE_PAIR(BgL_arg4495z00_3588,
																					BgL_arg4496z00_3589);
																			}
																			{	/* Eval/evobject.scm 688 */
																				obj_t BgL_list4493z00_3586;

																				{	/* Eval/evobject.scm 688 */
																					obj_t BgL_arg4494z00_3587;

																					BgL_arg4494z00_3587 =
																						MAKE_PAIR(BgL_arg4492z00_3585,
																						BNIL);
																					BgL_list4493z00_3586 =
																						MAKE_PAIR(BgL_arg4491z00_3584,
																						BgL_arg4494z00_3587);
																				}
																				BgL_arg4488z00_3581 =
																					BgL_list4493z00_3586;
																			}
																		}
																		{	/* Eval/evobject.scm 688 */
																			obj_t BgL_list4490z00_3583;

																			BgL_list4490z00_3583 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg4487z00_3580 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg4488z00_3581,
																				BgL_list4490z00_3583);
																		}
																	}
																	BgL_arg4484z00_3577 =
																		MAKE_PAIR(BgL_arg4486z00_3579,
																		BgL_arg4487z00_3580);
																}
																{	/* Eval/evobject.scm 690 */
																	obj_t BgL_arg4530z00_3623;

																	obj_t BgL_arg4531z00_3624;

																	{	/* Eval/evobject.scm 690 */
																		obj_t BgL_arg4535z00_3628;

																		obj_t BgL_arg4536z00_3629;

																		BgL_arg4535z00_3628 =
																			BGl_symbol5999z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 690 */
																			obj_t BgL_arg4537z00_3630;

																			{	/* Eval/evobject.scm 690 */
																				obj_t BgL_arg4540z00_3633;

																				obj_t BgL_arg4541z00_3634;

																				BgL_arg4540z00_3633 =
																					BGl_symbol5860z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 690 */
																					obj_t BgL_arg4544z00_3637;

																					obj_t BgL_arg4545z00_3638;

																					BgL_arg4544z00_3637 =
																						BGl_symbol5884z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 690 */
																						obj_t BgL_arg4546z00_3639;

																						obj_t BgL_arg4547z00_3640;

																						BgL_arg4546z00_3639 =
																							MAKE_PAIR
																							(BGl_symbol5999z00zz__evobjectz00,
																							BNIL);
																						{	/* Eval/evobject.scm 691 */
																							obj_t BgL_arg4551z00_3644;

																							obj_t BgL_arg4552z00_3645;

																							{	/* Eval/evobject.scm 691 */
																								obj_t BgL_arg4553z00_3646;

																								obj_t BgL_arg4554z00_3647;

																								BgL_arg4553z00_3646 =
																									BGl_symbol5862z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 691 */
																									obj_t BgL_arg4557z00_3650;

																									obj_t BgL_arg4558z00_3651;

																									BgL_arg4557z00_3650 =
																										BGl_symbol5977z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 691 */
																										obj_t BgL_arg4559z00_3652;

																										obj_t BgL_arg4560z00_3653;

																										obj_t BgL_arg4561z00_3654;

																										obj_t BgL_arg4562z00_3655;

																										{	/* Eval/evobject.scm 691 */
																											obj_t BgL_arg4568z00_3661;

																											obj_t BgL_arg4569z00_3662;

																											BgL_arg4568z00_3661 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 691 */
																												obj_t
																													BgL_list4570z00_3663;
																												BgL_list4570z00_3663 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4569z00_3662 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_idz00_126,
																													BgL_list4570z00_3663);
																											}
																											BgL_arg4559z00_3652 =
																												MAKE_PAIR
																												(BgL_arg4568z00_3661,
																												BgL_arg4569z00_3662);
																										}
																										{	/* Eval/evobject.scm 691 */
																											obj_t BgL_arg4571z00_3664;

																											obj_t BgL_arg4572z00_3665;

																											BgL_arg4571z00_3664 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 691 */
																												obj_t
																													BgL_list4573z00_3666;
																												BgL_list4573z00_3666 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4572z00_3665 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5822z00zz__evobjectz00,
																													BgL_list4573z00_3666);
																											}
																											BgL_arg4560z00_3653 =
																												MAKE_PAIR
																												(BgL_arg4571z00_3664,
																												BgL_arg4572z00_3665);
																										}
																										{	/* Eval/evobject.scm 691 */
																											obj_t BgL_arg4575z00_3667;

																											obj_t BgL_arg4576z00_3668;

																											BgL_arg4575z00_3667 =
																												BGl_symbol5995z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 691 */
																												obj_t
																													BgL_list4577z00_3669;
																												BgL_list4577z00_3669 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4576z00_3668 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5955z00zz__evobjectz00,
																													BgL_list4577z00_3669);
																											}
																											BgL_arg4561z00_3654 =
																												MAKE_PAIR
																												(BgL_arg4575z00_3667,
																												BgL_arg4576z00_3668);
																										}
																										{	/* Eval/evobject.scm 691 */
																											obj_t BgL_arg4578z00_3670;

																											obj_t BgL_arg4579z00_3671;

																											BgL_arg4578z00_3670 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 691 */
																												obj_t
																													BgL_list4580z00_3672;
																												BgL_list4580z00_3672 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4579z00_3671 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol6001z00zz__evobjectz00,
																													BgL_list4580z00_3672);
																											}
																											BgL_arg4562z00_3655 =
																												MAKE_PAIR
																												(BgL_arg4578z00_3670,
																												BgL_arg4579z00_3671);
																										}
																										{	/* Eval/evobject.scm 691 */
																											obj_t
																												BgL_list4564z00_3657;
																											{	/* Eval/evobject.scm 691 */
																												obj_t
																													BgL_arg4565z00_3658;
																												{	/* Eval/evobject.scm 691 */
																													obj_t
																														BgL_arg4566z00_3659;
																													{	/* Eval/evobject.scm 691 */
																														obj_t
																															BgL_arg4567z00_3660;
																														BgL_arg4567z00_3660
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg4566z00_3659
																															=
																															MAKE_PAIR
																															(BgL_arg4562z00_3655,
																															BgL_arg4567z00_3660);
																													}
																													BgL_arg4565z00_3658 =
																														MAKE_PAIR
																														(BgL_arg4561z00_3654,
																														BgL_arg4566z00_3659);
																												}
																												BgL_list4564z00_3657 =
																													MAKE_PAIR
																													(BgL_arg4560z00_3653,
																													BgL_arg4565z00_3658);
																											}
																											BgL_arg4558z00_3651 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4559z00_3652,
																												BgL_list4564z00_3657);
																										}
																									}
																									BgL_arg4554z00_3647 =
																										MAKE_PAIR
																										(BgL_arg4557z00_3650,
																										BgL_arg4558z00_3651);
																								}
																								{	/* Eval/evobject.scm 691 */
																									obj_t BgL_list4555z00_3648;

																									{	/* Eval/evobject.scm 691 */
																										obj_t BgL_arg4556z00_3649;

																										BgL_arg4556z00_3649 =
																											MAKE_PAIR
																											(BgL_arg4554z00_3647,
																											BNIL);
																										BgL_list4555z00_3648 =
																											MAKE_PAIR
																											(BgL_arg4553z00_3646,
																											BgL_arg4556z00_3649);
																									}
																									BgL_arg4551z00_3644 =
																										BgL_list4555z00_3648;
																								}
																							}
																							{	/* Eval/evobject.scm 691 */
																								obj_t BgL_arg4581z00_3673;

																								obj_t BgL_arg4582z00_3674;

																								{	/* Eval/evobject.scm 691 */
																									obj_t BgL_list4586z00_3678;

																									{	/* Eval/evobject.scm 691 */
																										obj_t BgL_arg4587z00_3679;

																										obj_t BgL_arg4588z00_3680;

																										BgL_arg4587z00_3679 =
																											BGl_symbol5862z00zz__evobjectz00;
																										BgL_arg4588z00_3680 =
																											MAKE_PAIR
																											(BGl_symbol5997z00zz__evobjectz00,
																											BNIL);
																										BgL_list4586z00_3678 =
																											MAKE_PAIR
																											(BgL_arg4587z00_3679,
																											BgL_arg4588z00_3680);
																									}
																									BgL_arg4581z00_3673 =
																										BgL_list4586z00_3678;
																								}
																								BgL_arg4582z00_3674 =
																									BGl_symbol5999z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 691 */
																									obj_t BgL_list4584z00_3676;

																									{	/* Eval/evobject.scm 691 */
																										obj_t BgL_arg4585z00_3677;

																										BgL_arg4585z00_3677 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list4584z00_3676 =
																											MAKE_PAIR
																											(BgL_arg4582z00_3674,
																											BgL_arg4585z00_3677);
																									}
																									BgL_arg4552z00_3645 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4581z00_3673,
																										BgL_list4584z00_3676);
																								}
																							}
																							BgL_arg4547z00_3640 =
																								MAKE_PAIR(BgL_arg4551z00_3644,
																								BgL_arg4552z00_3645);
																						}
																						{	/* Eval/evobject.scm 690 */
																							obj_t BgL_list4549z00_3642;

																							{	/* Eval/evobject.scm 690 */
																								obj_t BgL_arg4550z00_3643;

																								BgL_arg4550z00_3643 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list4549z00_3642 =
																									MAKE_PAIR(BgL_arg4547z00_3640,
																									BgL_arg4550z00_3643);
																							}
																							BgL_arg4545z00_3638 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4546z00_3639,
																								BgL_list4549z00_3642);
																						}
																					}
																					BgL_arg4541z00_3634 =
																						MAKE_PAIR(BgL_arg4544z00_3637,
																						BgL_arg4545z00_3638);
																				}
																				{	/* Eval/evobject.scm 690 */
																					obj_t BgL_list4542z00_3635;

																					{	/* Eval/evobject.scm 690 */
																						obj_t BgL_arg4543z00_3636;

																						BgL_arg4543z00_3636 =
																							MAKE_PAIR(BgL_arg4541z00_3634,
																							BNIL);
																						BgL_list4542z00_3635 =
																							MAKE_PAIR(BgL_arg4540z00_3633,
																							BgL_arg4543z00_3636);
																					}
																					BgL_arg4537z00_3630 =
																						BgL_list4542z00_3635;
																				}
																			}
																			{	/* Eval/evobject.scm 690 */
																				obj_t BgL_list4539z00_3632;

																				BgL_list4539z00_3632 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg4536z00_3629 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4537z00_3630,
																					BgL_list4539z00_3632);
																			}
																		}
																		BgL_arg4530z00_3623 =
																			MAKE_PAIR(BgL_arg4535z00_3628,
																			BgL_arg4536z00_3629);
																	}
																	{	/* Eval/evobject.scm 693 */
																		obj_t BgL_arg4589z00_3681;

																		obj_t BgL_arg4590z00_3682;

																		BgL_arg4589z00_3681 =
																			BGl_symbol5886z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 693 */
																			obj_t BgL_arg4591z00_3683;

																			{	/* Eval/evobject.scm 693 */
																				obj_t BgL_arg4594z00_3686;

																				obj_t BgL_arg4595z00_3687;

																				BgL_arg4594z00_3686 =
																					BGl_symbol5860z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 693 */
																					obj_t BgL_arg4598z00_3690;

																					obj_t BgL_arg4600z00_3691;

																					BgL_arg4598z00_3690 =
																						BGl_symbol5884z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 693 */
																						obj_t BgL_arg4601z00_3692;

																						obj_t BgL_arg4602z00_3693;

																						{	/* Eval/evobject.scm 693 */
																							obj_t BgL_arg4606z00_3697;

																							obj_t BgL_arg4607z00_3698;

																							BgL_arg4606z00_3697 =
																								BGl_symbol5999z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 693 */
																								obj_t BgL_list4608z00_3699;

																								BgL_list4608z00_3699 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4607z00_3698 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol5836z00zz__evobjectz00,
																									BgL_list4608z00_3699);
																							}
																							BgL_arg4601z00_3692 =
																								MAKE_PAIR(BgL_arg4606z00_3697,
																								BgL_arg4607z00_3698);
																						}
																						{	/* Eval/evobject.scm 694 */
																							obj_t BgL_arg4609z00_3700;

																							obj_t BgL_arg4610z00_3701;

																							{	/* Eval/evobject.scm 694 */
																								obj_t BgL_arg4611z00_3702;

																								obj_t BgL_arg4612z00_3703;

																								BgL_arg4611z00_3702 =
																									BGl_symbol5862z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 694 */
																									obj_t BgL_arg4615z00_3706;

																									obj_t BgL_arg4616z00_3707;

																									BgL_arg4615z00_3706 =
																										BGl_symbol5977z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 694 */
																										obj_t BgL_arg4617z00_3708;

																										obj_t BgL_arg4618z00_3709;

																										obj_t BgL_arg4619z00_3710;

																										obj_t BgL_arg4620z00_3711;

																										{	/* Eval/evobject.scm 694 */
																											obj_t BgL_arg4626z00_3717;

																											obj_t BgL_arg4627z00_3718;

																											BgL_arg4626z00_3717 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 694 */
																												obj_t
																													BgL_list4628z00_3719;
																												BgL_list4628z00_3719 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4627z00_3718 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_idz00_126,
																													BgL_list4628z00_3719);
																											}
																											BgL_arg4617z00_3708 =
																												MAKE_PAIR
																												(BgL_arg4626z00_3717,
																												BgL_arg4627z00_3718);
																										}
																										{	/* Eval/evobject.scm 694 */
																											obj_t BgL_arg4629z00_3720;

																											obj_t BgL_arg4630z00_3721;

																											BgL_arg4629z00_3720 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 694 */
																												obj_t
																													BgL_list4631z00_3722;
																												BgL_list4631z00_3722 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4630z00_3721 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5822z00zz__evobjectz00,
																													BgL_list4631z00_3722);
																											}
																											BgL_arg4618z00_3709 =
																												MAKE_PAIR
																												(BgL_arg4629z00_3720,
																												BgL_arg4630z00_3721);
																										}
																										{	/* Eval/evobject.scm 694 */
																											obj_t BgL_arg4632z00_3723;

																											obj_t BgL_arg4633z00_3724;

																											BgL_arg4632z00_3723 =
																												BGl_symbol5995z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 694 */
																												obj_t
																													BgL_list4634z00_3725;
																												BgL_list4634z00_3725 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4633z00_3724 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5955z00zz__evobjectz00,
																													BgL_list4634z00_3725);
																											}
																											BgL_arg4619z00_3710 =
																												MAKE_PAIR
																												(BgL_arg4632z00_3723,
																												BgL_arg4633z00_3724);
																										}
																										{	/* Eval/evobject.scm 694 */
																											obj_t BgL_arg4635z00_3726;

																											obj_t BgL_arg4636z00_3727;

																											BgL_arg4635z00_3726 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 694 */
																												obj_t
																													BgL_list4637z00_3728;
																												BgL_list4637z00_3728 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4636z00_3727 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5824z00zz__evobjectz00,
																													BgL_list4637z00_3728);
																											}
																											BgL_arg4620z00_3711 =
																												MAKE_PAIR
																												(BgL_arg4635z00_3726,
																												BgL_arg4636z00_3727);
																										}
																										{	/* Eval/evobject.scm 694 */
																											obj_t
																												BgL_list4622z00_3713;
																											{	/* Eval/evobject.scm 694 */
																												obj_t
																													BgL_arg4623z00_3714;
																												{	/* Eval/evobject.scm 694 */
																													obj_t
																														BgL_arg4624z00_3715;
																													{	/* Eval/evobject.scm 694 */
																														obj_t
																															BgL_arg4625z00_3716;
																														BgL_arg4625z00_3716
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg4624z00_3715
																															=
																															MAKE_PAIR
																															(BgL_arg4620z00_3711,
																															BgL_arg4625z00_3716);
																													}
																													BgL_arg4623z00_3714 =
																														MAKE_PAIR
																														(BgL_arg4619z00_3710,
																														BgL_arg4624z00_3715);
																												}
																												BgL_list4622z00_3713 =
																													MAKE_PAIR
																													(BgL_arg4618z00_3709,
																													BgL_arg4623z00_3714);
																											}
																											BgL_arg4616z00_3707 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4617z00_3708,
																												BgL_list4622z00_3713);
																										}
																									}
																									BgL_arg4612z00_3703 =
																										MAKE_PAIR
																										(BgL_arg4615z00_3706,
																										BgL_arg4616z00_3707);
																								}
																								{	/* Eval/evobject.scm 694 */
																									obj_t BgL_list4613z00_3704;

																									{	/* Eval/evobject.scm 694 */
																										obj_t BgL_arg4614z00_3705;

																										BgL_arg4614z00_3705 =
																											MAKE_PAIR
																											(BgL_arg4612z00_3703,
																											BNIL);
																										BgL_list4613z00_3704 =
																											MAKE_PAIR
																											(BgL_arg4611z00_3702,
																											BgL_arg4614z00_3705);
																									}
																									BgL_arg4609z00_3700 =
																										BgL_list4613z00_3704;
																								}
																							}
																							{	/* Eval/evobject.scm 694 */
																								obj_t BgL_arg4638z00_3729;

																								obj_t BgL_arg4639z00_3730;

																								obj_t BgL_arg4640z00_3731;

																								{	/* Eval/evobject.scm 694 */
																									obj_t BgL_list4645z00_3736;

																									{	/* Eval/evobject.scm 694 */
																										obj_t BgL_arg4646z00_3737;

																										obj_t BgL_arg4648z00_3738;

																										BgL_arg4646z00_3737 =
																											BGl_symbol5862z00zz__evobjectz00;
																										BgL_arg4648z00_3738 =
																											MAKE_PAIR
																											(BGl_symbol5997z00zz__evobjectz00,
																											BNIL);
																										BgL_list4645z00_3736 =
																											MAKE_PAIR
																											(BgL_arg4646z00_3737,
																											BgL_arg4648z00_3738);
																									}
																									BgL_arg4638z00_3729 =
																										BgL_list4645z00_3736;
																								}
																								BgL_arg4639z00_3730 =
																									BGl_symbol5999z00zz__evobjectz00;
																								BgL_arg4640z00_3731 =
																									BGl_symbol5836z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 694 */
																									obj_t BgL_list4642z00_3733;

																									{	/* Eval/evobject.scm 694 */
																										obj_t BgL_arg4643z00_3734;

																										{	/* Eval/evobject.scm 694 */
																											obj_t BgL_arg4644z00_3735;

																											BgL_arg4644z00_3735 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4643z00_3734 =
																												MAKE_PAIR
																												(BgL_arg4640z00_3731,
																												BgL_arg4644z00_3735);
																										}
																										BgL_list4642z00_3733 =
																											MAKE_PAIR
																											(BgL_arg4639z00_3730,
																											BgL_arg4643z00_3734);
																									}
																									BgL_arg4610z00_3701 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4638z00_3729,
																										BgL_list4642z00_3733);
																								}
																							}
																							BgL_arg4602z00_3693 =
																								MAKE_PAIR(BgL_arg4609z00_3700,
																								BgL_arg4610z00_3701);
																						}
																						{	/* Eval/evobject.scm 693 */
																							obj_t BgL_list4604z00_3695;

																							{	/* Eval/evobject.scm 693 */
																								obj_t BgL_arg4605z00_3696;

																								BgL_arg4605z00_3696 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list4604z00_3695 =
																									MAKE_PAIR(BgL_arg4602z00_3693,
																									BgL_arg4605z00_3696);
																							}
																							BgL_arg4600z00_3691 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4601z00_3692,
																								BgL_list4604z00_3695);
																						}
																					}
																					BgL_arg4595z00_3687 =
																						MAKE_PAIR(BgL_arg4598z00_3690,
																						BgL_arg4600z00_3691);
																				}
																				{	/* Eval/evobject.scm 693 */
																					obj_t BgL_list4596z00_3688;

																					{	/* Eval/evobject.scm 693 */
																						obj_t BgL_arg4597z00_3689;

																						BgL_arg4597z00_3689 =
																							MAKE_PAIR(BgL_arg4595z00_3687,
																							BNIL);
																						BgL_list4596z00_3688 =
																							MAKE_PAIR(BgL_arg4594z00_3686,
																							BgL_arg4597z00_3689);
																					}
																					BgL_arg4591z00_3683 =
																						BgL_list4596z00_3688;
																				}
																			}
																			{	/* Eval/evobject.scm 693 */
																				obj_t BgL_list4593z00_3685;

																				BgL_list4593z00_3685 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg4590z00_3682 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4591z00_3683,
																					BgL_list4593z00_3685);
																			}
																		}
																		BgL_arg4531z00_3624 =
																			MAKE_PAIR(BgL_arg4589z00_3681,
																			BgL_arg4590z00_3682);
																	}
																	{	/* Eval/evobject.scm 688 */
																		obj_t BgL_list4533z00_3626;

																		{	/* Eval/evobject.scm 688 */
																			obj_t BgL_arg4534z00_3627;

																			BgL_arg4534z00_3627 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4533z00_3626 =
																				MAKE_PAIR(BgL_arg4531z00_3624,
																				BgL_arg4534z00_3627);
																		}
																		BgL_arg4485z00_3578 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4530z00_3623,
																			BgL_list4533z00_3626);
																	}
																}
																BgL_arg4479z00_3572 =
																	MAKE_PAIR(BgL_arg4484z00_3577,
																	BgL_arg4485z00_3578);
															}
															{	/* Eval/evobject.scm 696 */
																obj_t BgL_arg4649z00_3739;

																obj_t BgL_arg4650z00_3740;

																BgL_arg4649z00_3739 =
																	BGl_symbol5838z00zz__evobjectz00;
																{	/* Eval/evobject.scm 696 */
																	obj_t BgL_arg4651z00_3741;

																	obj_t BgL_arg4652z00_3742;

																	obj_t BgL_arg4653z00_3743;

																	{	/* Eval/evobject.scm 696 */
																		obj_t BgL_arg4658z00_3748;

																		obj_t BgL_arg4659z00_3749;

																		BgL_arg4658z00_3748 =
																			BGl_symbol5987z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 696 */
																			obj_t BgL_list4660z00_3750;

																			BgL_list4660z00_3750 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg4659z00_3749 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol5973z00zz__evobjectz00,
																				BgL_list4660z00_3750);
																		}
																		BgL_arg4651z00_3741 =
																			MAKE_PAIR(BgL_arg4658z00_3748,
																			BgL_arg4659z00_3749);
																	}
																	{	/* Eval/evobject.scm 696 */
																		obj_t BgL_arg4661z00_3751;

																		obj_t BgL_arg4662z00_3752;

																		BgL_arg4661z00_3751 =
																			BGl_symbol5860z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 697 */
																			obj_t BgL_arg4665z00_3755;

																			obj_t BgL_arg4666z00_3756;

																			BgL_arg4665z00_3755 =
																				BGl_symbol5789z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 697 */
																				obj_t BgL_arg4667z00_3757;

																				obj_t BgL_arg4668z00_3758;

																				{	/* Eval/evobject.scm 697 */
																					obj_t BgL_arg4672z00_3762;

																					obj_t BgL_arg4673z00_3763;

																					{	/* Eval/evobject.scm 697 */
																						obj_t BgL_arg4674z00_3764;

																						obj_t BgL_arg4675z00_3765;

																						{	/* Eval/evobject.scm 697 */
																							obj_t BgL_arg4676z00_3766;

																							obj_t BgL_arg4677z00_3767;

																							BgL_arg4676z00_3766 =
																								BGl_symbol5862z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 697 */
																								obj_t BgL_arg4680z00_3770;

																								obj_t BgL_arg4681z00_3771;

																								BgL_arg4680z00_3770 =
																									BGl_symbol5977z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 697 */
																									obj_t BgL_arg4682z00_3772;

																									obj_t BgL_arg4683z00_3773;

																									{	/* Eval/evobject.scm 697 */
																										obj_t BgL_arg4687z00_3777;

																										obj_t BgL_arg4688z00_3778;

																										BgL_arg4687z00_3777 =
																											BGl_symbol5995z00zz__evobjectz00;
																										{	/* Eval/evobject.scm 697 */
																											obj_t
																												BgL_list4689z00_3779;
																											BgL_list4689z00_3779 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4688z00_3778 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BGl_symbol5955z00zz__evobjectz00,
																												BgL_list4689z00_3779);
																										}
																										BgL_arg4682z00_3772 =
																											MAKE_PAIR
																											(BgL_arg4687z00_3777,
																											BgL_arg4688z00_3778);
																									}
																									{	/* Eval/evobject.scm 697 */
																										obj_t BgL_arg4690z00_3780;

																										obj_t BgL_arg4691z00_3781;

																										BgL_arg4690z00_3780 =
																											BGl_symbol5842z00zz__evobjectz00;
																										{	/* Eval/evobject.scm 697 */
																											obj_t
																												BgL_list4692z00_3782;
																											BgL_list4692z00_3782 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4691z00_3781 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BGl_symbol5801z00zz__evobjectz00,
																												BgL_list4692z00_3782);
																										}
																										BgL_arg4683z00_3773 =
																											MAKE_PAIR
																											(BgL_arg4690z00_3780,
																											BgL_arg4691z00_3781);
																									}
																									{	/* Eval/evobject.scm 697 */
																										obj_t BgL_list4685z00_3775;

																										{	/* Eval/evobject.scm 697 */
																											obj_t BgL_arg4686z00_3776;

																											BgL_arg4686z00_3776 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list4685z00_3775 =
																												MAKE_PAIR
																												(BgL_arg4683z00_3773,
																												BgL_arg4686z00_3776);
																										}
																										BgL_arg4681z00_3771 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg4682z00_3772,
																											BgL_list4685z00_3775);
																									}
																								}
																								BgL_arg4677z00_3767 =
																									MAKE_PAIR(BgL_arg4680z00_3770,
																									BgL_arg4681z00_3771);
																							}
																							{	/* Eval/evobject.scm 697 */
																								obj_t BgL_list4678z00_3768;

																								{	/* Eval/evobject.scm 697 */
																									obj_t BgL_arg4679z00_3769;

																									BgL_arg4679z00_3769 =
																										MAKE_PAIR
																										(BgL_arg4677z00_3767, BNIL);
																									BgL_list4678z00_3768 =
																										MAKE_PAIR
																										(BgL_arg4676z00_3766,
																										BgL_arg4679z00_3769);
																								}
																								BgL_arg4674z00_3764 =
																									BgL_list4678z00_3768;
																							}
																						}
																						{	/* Eval/evobject.scm 697 */
																							obj_t BgL_arg4693z00_3783;

																							{	/* Eval/evobject.scm 697 */
																								obj_t BgL_list4696z00_3786;

																								{	/* Eval/evobject.scm 697 */
																									obj_t BgL_arg4697z00_3787;

																									obj_t BgL_arg4698z00_3788;

																									BgL_arg4697z00_3787 =
																										BGl_symbol5862z00zz__evobjectz00;
																									BgL_arg4698z00_3788 =
																										MAKE_PAIR
																										(BGl_symbol5836z00zz__evobjectz00,
																										BNIL);
																									BgL_list4696z00_3786 =
																										MAKE_PAIR
																										(BgL_arg4697z00_3787,
																										BgL_arg4698z00_3788);
																								}
																								BgL_arg4693z00_3783 =
																									BgL_list4696z00_3786;
																							}
																							{	/* Eval/evobject.scm 697 */
																								obj_t BgL_list4695z00_3785;

																								BgL_list4695z00_3785 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4675z00_3765 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4693z00_3783,
																									BgL_list4695z00_3785);
																							}
																						}
																						BgL_arg4672z00_3762 =
																							MAKE_PAIR(BgL_arg4674z00_3764,
																							BgL_arg4675z00_3765);
																					}
																					{	/* Eval/evobject.scm 698 */
																						obj_t BgL_arg4700z00_3789;

																						{	/* Eval/evobject.scm 698 */
																							obj_t BgL_arg4703z00_3792;

																							obj_t BgL_arg4704z00_3793;

																							{	/* Eval/evobject.scm 698 */
																								obj_t BgL_arg4705z00_3794;

																								obj_t BgL_arg4706z00_3795;

																								BgL_arg4705z00_3794 =
																									BGl_symbol5862z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 698 */
																									obj_t BgL_arg4710z00_3798;

																									obj_t BgL_arg4711z00_3799;

																									BgL_arg4710z00_3798 =
																										BGl_symbol5977z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 698 */
																										obj_t BgL_arg4712z00_3800;

																										obj_t BgL_arg4713z00_3801;

																										{	/* Eval/evobject.scm 698 */
																											obj_t BgL_arg4717z00_3805;

																											obj_t BgL_arg4718z00_3806;

																											BgL_arg4717z00_3805 =
																												BGl_symbol5995z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 698 */
																												obj_t
																													BgL_list4719z00_3807;
																												BgL_list4719z00_3807 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4718z00_3806 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5955z00zz__evobjectz00,
																													BgL_list4719z00_3807);
																											}
																											BgL_arg4712z00_3800 =
																												MAKE_PAIR
																												(BgL_arg4717z00_3805,
																												BgL_arg4718z00_3806);
																										}
																										{	/* Eval/evobject.scm 698 */
																											obj_t BgL_arg4720z00_3808;

																											obj_t BgL_arg4721z00_3809;

																											BgL_arg4720z00_3808 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 698 */
																												obj_t
																													BgL_list4722z00_3810;
																												BgL_list4722z00_3810 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4721z00_3809 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol6001z00zz__evobjectz00,
																													BgL_list4722z00_3810);
																											}
																											BgL_arg4713z00_3801 =
																												MAKE_PAIR
																												(BgL_arg4720z00_3808,
																												BgL_arg4721z00_3809);
																										}
																										{	/* Eval/evobject.scm 698 */
																											obj_t
																												BgL_list4715z00_3803;
																											{	/* Eval/evobject.scm 698 */
																												obj_t
																													BgL_arg4716z00_3804;
																												BgL_arg4716z00_3804 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4715z00_3803 =
																													MAKE_PAIR
																													(BgL_arg4713z00_3801,
																													BgL_arg4716z00_3804);
																											}
																											BgL_arg4711z00_3799 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4712z00_3800,
																												BgL_list4715z00_3803);
																										}
																									}
																									BgL_arg4706z00_3795 =
																										MAKE_PAIR
																										(BgL_arg4710z00_3798,
																										BgL_arg4711z00_3799);
																								}
																								{	/* Eval/evobject.scm 698 */
																									obj_t BgL_list4707z00_3796;

																									{	/* Eval/evobject.scm 698 */
																										obj_t BgL_arg4708z00_3797;

																										BgL_arg4708z00_3797 =
																											MAKE_PAIR
																											(BgL_arg4706z00_3795,
																											BNIL);
																										BgL_list4707z00_3796 =
																											MAKE_PAIR
																											(BgL_arg4705z00_3794,
																											BgL_arg4708z00_3797);
																									}
																									BgL_arg4703z00_3792 =
																										BgL_list4707z00_3796;
																								}
																							}
																							{	/* Eval/evobject.scm 698 */
																								obj_t BgL_arg4723z00_3811;

																								{	/* Eval/evobject.scm 698 */
																									obj_t BgL_list4726z00_3814;

																									{	/* Eval/evobject.scm 698 */
																										obj_t BgL_arg4727z00_3815;

																										obj_t BgL_arg4728z00_3816;

																										BgL_arg4727z00_3815 =
																											BGl_symbol5862z00zz__evobjectz00;
																										BgL_arg4728z00_3816 =
																											MAKE_PAIR
																											(BGl_symbol5999z00zz__evobjectz00,
																											BNIL);
																										BgL_list4726z00_3814 =
																											MAKE_PAIR
																											(BgL_arg4727z00_3815,
																											BgL_arg4728z00_3816);
																									}
																									BgL_arg4723z00_3811 =
																										BgL_list4726z00_3814;
																								}
																								{	/* Eval/evobject.scm 698 */
																									obj_t BgL_list4725z00_3813;

																									BgL_list4725z00_3813 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4704z00_3793 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4723z00_3811,
																										BgL_list4725z00_3813);
																								}
																							}
																							BgL_arg4700z00_3789 =
																								MAKE_PAIR(BgL_arg4703z00_3792,
																								BgL_arg4704z00_3793);
																						}
																						{	/* Eval/evobject.scm 697 */
																							obj_t BgL_list4702z00_3791;

																							BgL_list4702z00_3791 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg4673z00_3763 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4700z00_3789,
																								BgL_list4702z00_3791);
																						}
																					}
																					BgL_arg4667z00_3757 =
																						MAKE_PAIR(BgL_arg4672z00_3762,
																						BgL_arg4673z00_3763);
																				}
																				{	/* Eval/evobject.scm 697 */
																					obj_t BgL_arg4729z00_3817;

																					obj_t BgL_arg4730z00_3818;

																					BgL_arg4729z00_3817 =
																						BGl_symbol5862z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 699 */
																						obj_t BgL_arg4733z00_3821;

																						obj_t BgL_arg4734z00_3822;

																						BgL_arg4733z00_3821 =
																							BGl_symbol5993z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 699 */
																							obj_t BgL_arg4735z00_3823;

																							{	/* Eval/evobject.scm 699 */
																								obj_t BgL_arg4739z00_3826;

																								obj_t BgL_arg4740z00_3827;

																								BgL_arg4739z00_3826 =
																									BGl_symbol5907z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 699 */
																									obj_t BgL_list4741z00_3828;

																									BgL_list4741z00_3828 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4740z00_3827 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol5955z00zz__evobjectz00,
																										BgL_list4741z00_3828);
																								}
																								BgL_arg4735z00_3823 =
																									MAKE_PAIR(BgL_arg4739z00_3826,
																									BgL_arg4740z00_3827);
																							}
																							{	/* Eval/evobject.scm 699 */
																								obj_t BgL_list4737z00_3825;

																								BgL_list4737z00_3825 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4734z00_3822 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4735z00_3823,
																									BgL_list4737z00_3825);
																							}
																						}
																						BgL_arg4730z00_3818 =
																							MAKE_PAIR(BgL_arg4733z00_3821,
																							BgL_arg4734z00_3822);
																					}
																					{	/* Eval/evobject.scm 697 */
																						obj_t BgL_list4731z00_3819;

																						{	/* Eval/evobject.scm 697 */
																							obj_t BgL_arg4732z00_3820;

																							BgL_arg4732z00_3820 =
																								MAKE_PAIR(BgL_arg4730z00_3818,
																								BNIL);
																							BgL_list4731z00_3819 =
																								MAKE_PAIR(BgL_arg4729z00_3817,
																								BgL_arg4732z00_3820);
																						}
																						BgL_arg4668z00_3758 =
																							BgL_list4731z00_3819;
																					}
																				}
																				{	/* Eval/evobject.scm 697 */
																					obj_t BgL_list4670z00_3760;

																					{	/* Eval/evobject.scm 697 */
																						obj_t BgL_arg4671z00_3761;

																						BgL_arg4671z00_3761 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list4670z00_3760 =
																							MAKE_PAIR(BgL_arg4668z00_3758,
																							BgL_arg4671z00_3761);
																					}
																					BgL_arg4666z00_3756 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg4667z00_3757,
																						BgL_list4670z00_3760);
																				}
																			}
																			BgL_arg4662z00_3752 =
																				MAKE_PAIR(BgL_arg4665z00_3755,
																				BgL_arg4666z00_3756);
																		}
																		{	/* Eval/evobject.scm 696 */
																			obj_t BgL_list4663z00_3753;

																			{	/* Eval/evobject.scm 696 */
																				obj_t BgL_arg4664z00_3754;

																				BgL_arg4664z00_3754 =
																					MAKE_PAIR(BgL_arg4662z00_3752, BNIL);
																				BgL_list4663z00_3753 =
																					MAKE_PAIR(BgL_arg4661z00_3751,
																					BgL_arg4664z00_3754);
																			}
																			BgL_arg4652z00_3742 =
																				BgL_list4663z00_3753;
																		}
																	}
																	{	/* Eval/evobject.scm 696 */
																		obj_t BgL_arg4742z00_3829;

																		obj_t BgL_arg4743z00_3830;

																		BgL_arg4742z00_3829 =
																			BGl_symbol5860z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 700 */
																			obj_t BgL_arg4746z00_3833;

																			obj_t BgL_arg4747z00_3834;

																			BgL_arg4746z00_3833 =
																				BGl_symbol5789z00zz__evobjectz00;
																			{	/* Eval/evobject.scm 700 */
																				obj_t BgL_arg4748z00_3835;

																				obj_t BgL_arg4749z00_3836;

																				{	/* Eval/evobject.scm 700 */
																					obj_t BgL_arg4753z00_3840;

																					obj_t BgL_arg4754z00_3841;

																					{	/* Eval/evobject.scm 700 */
																						obj_t BgL_arg4755z00_3842;

																						obj_t BgL_arg4756z00_3843;

																						{	/* Eval/evobject.scm 700 */
																							obj_t BgL_arg4757z00_3844;

																							obj_t BgL_arg4758z00_3845;

																							BgL_arg4757z00_3844 =
																								BGl_symbol5862z00zz__evobjectz00;
																							{	/* Eval/evobject.scm 700 */
																								obj_t BgL_arg4761z00_3848;

																								obj_t BgL_arg4762z00_3849;

																								BgL_arg4761z00_3848 =
																									BGl_symbol5977z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 700 */
																									obj_t BgL_arg4763z00_3850;

																									obj_t BgL_arg4764z00_3851;

																									{	/* Eval/evobject.scm 700 */
																										obj_t BgL_arg4768z00_3855;

																										obj_t BgL_arg4769z00_3856;

																										BgL_arg4768z00_3855 =
																											BGl_symbol5995z00zz__evobjectz00;
																										{	/* Eval/evobject.scm 700 */
																											obj_t
																												BgL_list4770z00_3857;
																											BgL_list4770z00_3857 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4769z00_3856 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BGl_symbol5955z00zz__evobjectz00,
																												BgL_list4770z00_3857);
																										}
																										BgL_arg4763z00_3850 =
																											MAKE_PAIR
																											(BgL_arg4768z00_3855,
																											BgL_arg4769z00_3856);
																									}
																									{	/* Eval/evobject.scm 700 */
																										obj_t BgL_arg4771z00_3858;

																										obj_t BgL_arg4772z00_3859;

																										BgL_arg4771z00_3858 =
																											BGl_symbol5842z00zz__evobjectz00;
																										{	/* Eval/evobject.scm 700 */
																											obj_t
																												BgL_list4773z00_3860;
																											BgL_list4773z00_3860 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4772z00_3859 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BGl_symbol5801z00zz__evobjectz00,
																												BgL_list4773z00_3860);
																										}
																										BgL_arg4764z00_3851 =
																											MAKE_PAIR
																											(BgL_arg4771z00_3858,
																											BgL_arg4772z00_3859);
																									}
																									{	/* Eval/evobject.scm 700 */
																										obj_t BgL_list4766z00_3853;

																										{	/* Eval/evobject.scm 700 */
																											obj_t BgL_arg4767z00_3854;

																											BgL_arg4767z00_3854 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list4766z00_3853 =
																												MAKE_PAIR
																												(BgL_arg4764z00_3851,
																												BgL_arg4767z00_3854);
																										}
																										BgL_arg4762z00_3849 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg4763z00_3850,
																											BgL_list4766z00_3853);
																									}
																								}
																								BgL_arg4758z00_3845 =
																									MAKE_PAIR(BgL_arg4761z00_3848,
																									BgL_arg4762z00_3849);
																							}
																							{	/* Eval/evobject.scm 700 */
																								obj_t BgL_list4759z00_3846;

																								{	/* Eval/evobject.scm 700 */
																									obj_t BgL_arg4760z00_3847;

																									BgL_arg4760z00_3847 =
																										MAKE_PAIR
																										(BgL_arg4758z00_3845, BNIL);
																									BgL_list4759z00_3846 =
																										MAKE_PAIR
																										(BgL_arg4757z00_3844,
																										BgL_arg4760z00_3847);
																								}
																								BgL_arg4755z00_3842 =
																									BgL_list4759z00_3846;
																							}
																						}
																						{	/* Eval/evobject.scm 700 */
																							obj_t BgL_arg4774z00_3861;

																							{	/* Eval/evobject.scm 700 */
																								obj_t BgL_list4777z00_3864;

																								{	/* Eval/evobject.scm 700 */
																									obj_t BgL_arg4778z00_3865;

																									obj_t BgL_arg4780z00_3866;

																									BgL_arg4778z00_3865 =
																										BGl_symbol5862z00zz__evobjectz00;
																									BgL_arg4780z00_3866 =
																										MAKE_PAIR
																										(BGl_symbol5836z00zz__evobjectz00,
																										BNIL);
																									BgL_list4777z00_3864 =
																										MAKE_PAIR
																										(BgL_arg4778z00_3865,
																										BgL_arg4780z00_3866);
																								}
																								BgL_arg4774z00_3861 =
																									BgL_list4777z00_3864;
																							}
																							{	/* Eval/evobject.scm 700 */
																								obj_t BgL_list4776z00_3863;

																								BgL_list4776z00_3863 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4756z00_3843 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4774z00_3861,
																									BgL_list4776z00_3863);
																							}
																						}
																						BgL_arg4753z00_3840 =
																							MAKE_PAIR(BgL_arg4755z00_3842,
																							BgL_arg4756z00_3843);
																					}
																					{	/* Eval/evobject.scm 701 */
																						obj_t BgL_arg4782z00_3867;

																						obj_t BgL_arg4783z00_3868;

																						{	/* Eval/evobject.scm 701 */
																							obj_t BgL_arg4787z00_3872;

																							obj_t BgL_arg4788z00_3873;

																							{	/* Eval/evobject.scm 701 */
																								obj_t BgL_arg4789z00_3874;

																								obj_t BgL_arg4790z00_3875;

																								BgL_arg4789z00_3874 =
																									BGl_symbol5862z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 701 */
																									obj_t BgL_arg4793z00_3878;

																									obj_t BgL_arg4794z00_3879;

																									BgL_arg4793z00_3878 =
																										BGl_symbol5977z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 701 */
																										obj_t BgL_arg4795z00_3880;

																										obj_t BgL_arg4796z00_3881;

																										{	/* Eval/evobject.scm 701 */
																											obj_t BgL_arg4800z00_3885;

																											obj_t BgL_arg4801z00_3886;

																											BgL_arg4800z00_3885 =
																												BGl_symbol5995z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 701 */
																												obj_t
																													BgL_list4802z00_3887;
																												BgL_list4802z00_3887 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4801z00_3886 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5955z00zz__evobjectz00,
																													BgL_list4802z00_3887);
																											}
																											BgL_arg4795z00_3880 =
																												MAKE_PAIR
																												(BgL_arg4800z00_3885,
																												BgL_arg4801z00_3886);
																										}
																										{	/* Eval/evobject.scm 701 */
																											obj_t BgL_arg4804z00_3888;

																											obj_t BgL_arg4805z00_3889;

																											BgL_arg4804z00_3888 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 701 */
																												obj_t
																													BgL_list4806z00_3890;
																												BgL_list4806z00_3890 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4805z00_3889 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol6001z00zz__evobjectz00,
																													BgL_list4806z00_3890);
																											}
																											BgL_arg4796z00_3881 =
																												MAKE_PAIR
																												(BgL_arg4804z00_3888,
																												BgL_arg4805z00_3889);
																										}
																										{	/* Eval/evobject.scm 701 */
																											obj_t
																												BgL_list4798z00_3883;
																											{	/* Eval/evobject.scm 701 */
																												obj_t
																													BgL_arg4799z00_3884;
																												BgL_arg4799z00_3884 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4798z00_3883 =
																													MAKE_PAIR
																													(BgL_arg4796z00_3881,
																													BgL_arg4799z00_3884);
																											}
																											BgL_arg4794z00_3879 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4795z00_3880,
																												BgL_list4798z00_3883);
																										}
																									}
																									BgL_arg4790z00_3875 =
																										MAKE_PAIR
																										(BgL_arg4793z00_3878,
																										BgL_arg4794z00_3879);
																								}
																								{	/* Eval/evobject.scm 701 */
																									obj_t BgL_list4791z00_3876;

																									{	/* Eval/evobject.scm 701 */
																										obj_t BgL_arg4792z00_3877;

																										BgL_arg4792z00_3877 =
																											MAKE_PAIR
																											(BgL_arg4790z00_3875,
																											BNIL);
																										BgL_list4791z00_3876 =
																											MAKE_PAIR
																											(BgL_arg4789z00_3874,
																											BgL_arg4792z00_3877);
																									}
																									BgL_arg4787z00_3872 =
																										BgL_list4791z00_3876;
																								}
																							}
																							{	/* Eval/evobject.scm 701 */
																								obj_t BgL_arg4807z00_3891;

																								{	/* Eval/evobject.scm 701 */
																									obj_t BgL_list4810z00_3894;

																									{	/* Eval/evobject.scm 701 */
																										obj_t BgL_arg4811z00_3895;

																										obj_t BgL_arg4812z00_3896;

																										BgL_arg4811z00_3895 =
																											BGl_symbol5862z00zz__evobjectz00;
																										BgL_arg4812z00_3896 =
																											MAKE_PAIR
																											(BGl_symbol5999z00zz__evobjectz00,
																											BNIL);
																										BgL_list4810z00_3894 =
																											MAKE_PAIR
																											(BgL_arg4811z00_3895,
																											BgL_arg4812z00_3896);
																									}
																									BgL_arg4807z00_3891 =
																										BgL_list4810z00_3894;
																								}
																								{	/* Eval/evobject.scm 701 */
																									obj_t BgL_list4809z00_3893;

																									BgL_list4809z00_3893 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4788z00_3873 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4807z00_3891,
																										BgL_list4809z00_3893);
																								}
																							}
																							BgL_arg4782z00_3867 =
																								MAKE_PAIR(BgL_arg4787z00_3872,
																								BgL_arg4788z00_3873);
																						}
																						{	/* Eval/evobject.scm 702 */
																							obj_t BgL_arg4813z00_3897;

																							obj_t BgL_arg4814z00_3898;

																							{	/* Eval/evobject.scm 702 */
																								obj_t BgL_arg4815z00_3899;

																								obj_t BgL_arg4816z00_3900;

																								BgL_arg4815z00_3899 =
																									BGl_symbol5862z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 702 */
																									obj_t BgL_arg4820z00_3903;

																									obj_t BgL_arg4821z00_3904;

																									BgL_arg4820z00_3903 =
																										BGl_symbol5977z00zz__evobjectz00;
																									{	/* Eval/evobject.scm 702 */
																										obj_t BgL_arg4822z00_3905;

																										obj_t BgL_arg4823z00_3906;

																										{	/* Eval/evobject.scm 702 */
																											obj_t BgL_arg4827z00_3910;

																											obj_t BgL_arg4828z00_3911;

																											BgL_arg4827z00_3910 =
																												BGl_symbol5995z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 702 */
																												obj_t
																													BgL_list4829z00_3912;
																												BgL_list4829z00_3912 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4828z00_3911 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5955z00zz__evobjectz00,
																													BgL_list4829z00_3912);
																											}
																											BgL_arg4822z00_3905 =
																												MAKE_PAIR
																												(BgL_arg4827z00_3910,
																												BgL_arg4828z00_3911);
																										}
																										{	/* Eval/evobject.scm 702 */
																											obj_t BgL_arg4830z00_3913;

																											obj_t BgL_arg4831z00_3914;

																											BgL_arg4830z00_3913 =
																												BGl_symbol5842z00zz__evobjectz00;
																											{	/* Eval/evobject.scm 702 */
																												obj_t
																													BgL_list4832z00_3915;
																												BgL_list4832z00_3915 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4831z00_3914 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol5824z00zz__evobjectz00,
																													BgL_list4832z00_3915);
																											}
																											BgL_arg4823z00_3906 =
																												MAKE_PAIR
																												(BgL_arg4830z00_3913,
																												BgL_arg4831z00_3914);
																										}
																										{	/* Eval/evobject.scm 702 */
																											obj_t
																												BgL_list4825z00_3908;
																											{	/* Eval/evobject.scm 702 */
																												obj_t
																													BgL_arg4826z00_3909;
																												BgL_arg4826z00_3909 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4825z00_3908 =
																													MAKE_PAIR
																													(BgL_arg4823z00_3906,
																													BgL_arg4826z00_3909);
																											}
																											BgL_arg4821z00_3904 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4822z00_3905,
																												BgL_list4825z00_3908);
																										}
																									}
																									BgL_arg4816z00_3900 =
																										MAKE_PAIR
																										(BgL_arg4820z00_3903,
																										BgL_arg4821z00_3904);
																								}
																								{	/* Eval/evobject.scm 702 */
																									obj_t BgL_list4817z00_3901;

																									{	/* Eval/evobject.scm 702 */
																										obj_t BgL_arg4819z00_3902;

																										BgL_arg4819z00_3902 =
																											MAKE_PAIR
																											(BgL_arg4816z00_3900,
																											BNIL);
																										BgL_list4817z00_3901 =
																											MAKE_PAIR
																											(BgL_arg4815z00_3899,
																											BgL_arg4819z00_3902);
																									}
																									BgL_arg4813z00_3897 =
																										BgL_list4817z00_3901;
																								}
																							}
																							{	/* Eval/evobject.scm 702 */
																								obj_t BgL_arg4833z00_3916;

																								{	/* Eval/evobject.scm 702 */
																									obj_t BgL_list4836z00_3919;

																									{	/* Eval/evobject.scm 702 */
																										obj_t BgL_arg4837z00_3920;

																										obj_t BgL_arg4838z00_3921;

																										BgL_arg4837z00_3920 =
																											BGl_symbol5862z00zz__evobjectz00;
																										BgL_arg4838z00_3921 =
																											MAKE_PAIR
																											(BGl_symbol5886z00zz__evobjectz00,
																											BNIL);
																										BgL_list4836z00_3919 =
																											MAKE_PAIR
																											(BgL_arg4837z00_3920,
																											BgL_arg4838z00_3921);
																									}
																									BgL_arg4833z00_3916 =
																										BgL_list4836z00_3919;
																								}
																								{	/* Eval/evobject.scm 702 */
																									obj_t BgL_list4835z00_3918;

																									BgL_list4835z00_3918 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4814z00_3898 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4833z00_3916,
																										BgL_list4835z00_3918);
																								}
																							}
																							BgL_arg4783z00_3868 =
																								MAKE_PAIR(BgL_arg4813z00_3897,
																								BgL_arg4814z00_3898);
																						}
																						{	/* Eval/evobject.scm 700 */
																							obj_t BgL_list4785z00_3870;

																							{	/* Eval/evobject.scm 700 */
																								obj_t BgL_arg4786z00_3871;

																								BgL_arg4786z00_3871 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list4785z00_3870 =
																									MAKE_PAIR(BgL_arg4783z00_3868,
																									BgL_arg4786z00_3871);
																							}
																							BgL_arg4754z00_3841 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4782z00_3867,
																								BgL_list4785z00_3870);
																						}
																					}
																					BgL_arg4748z00_3835 =
																						MAKE_PAIR(BgL_arg4753z00_3840,
																						BgL_arg4754z00_3841);
																				}
																				{	/* Eval/evobject.scm 700 */
																					obj_t BgL_arg4839z00_3922;

																					obj_t BgL_arg4840z00_3923;

																					BgL_arg4839z00_3922 =
																						BGl_symbol5862z00zz__evobjectz00;
																					{	/* Eval/evobject.scm 703 */
																						obj_t BgL_arg4844z00_3926;

																						obj_t BgL_arg4845z00_3927;

																						BgL_arg4844z00_3926 =
																							BGl_symbol5993z00zz__evobjectz00;
																						{	/* Eval/evobject.scm 703 */
																							obj_t BgL_arg4846z00_3928;

																							{	/* Eval/evobject.scm 703 */
																								obj_t BgL_arg4849z00_3931;

																								obj_t BgL_arg4850z00_3932;

																								BgL_arg4849z00_3931 =
																									BGl_symbol5907z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 703 */
																									obj_t BgL_list4851z00_3933;

																									BgL_list4851z00_3933 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4850z00_3932 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol5955z00zz__evobjectz00,
																										BgL_list4851z00_3933);
																								}
																								BgL_arg4846z00_3928 =
																									MAKE_PAIR(BgL_arg4849z00_3931,
																									BgL_arg4850z00_3932);
																							}
																							{	/* Eval/evobject.scm 703 */
																								obj_t BgL_list4848z00_3930;

																								BgL_list4848z00_3930 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4845z00_3927 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4846z00_3928,
																									BgL_list4848z00_3930);
																							}
																						}
																						BgL_arg4840z00_3923 =
																							MAKE_PAIR(BgL_arg4844z00_3926,
																							BgL_arg4845z00_3927);
																					}
																					{	/* Eval/evobject.scm 700 */
																						obj_t BgL_list4841z00_3924;

																						{	/* Eval/evobject.scm 700 */
																							obj_t BgL_arg4842z00_3925;

																							BgL_arg4842z00_3925 =
																								MAKE_PAIR(BgL_arg4840z00_3923,
																								BNIL);
																							BgL_list4841z00_3924 =
																								MAKE_PAIR(BgL_arg4839z00_3922,
																								BgL_arg4842z00_3925);
																						}
																						BgL_arg4749z00_3836 =
																							BgL_list4841z00_3924;
																					}
																				}
																				{	/* Eval/evobject.scm 700 */
																					obj_t BgL_list4751z00_3838;

																					{	/* Eval/evobject.scm 700 */
																						obj_t BgL_arg4752z00_3839;

																						BgL_arg4752z00_3839 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list4751z00_3838 =
																							MAKE_PAIR(BgL_arg4749z00_3836,
																							BgL_arg4752z00_3839);
																					}
																					BgL_arg4747z00_3834 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg4748z00_3835,
																						BgL_list4751z00_3838);
																				}
																			}
																			BgL_arg4743z00_3830 =
																				MAKE_PAIR(BgL_arg4746z00_3833,
																				BgL_arg4747z00_3834);
																		}
																		{	/* Eval/evobject.scm 696 */
																			obj_t BgL_list4744z00_3831;

																			{	/* Eval/evobject.scm 696 */
																				obj_t BgL_arg4745z00_3832;

																				BgL_arg4745z00_3832 =
																					MAKE_PAIR(BgL_arg4743z00_3830, BNIL);
																				BgL_list4744z00_3831 =
																					MAKE_PAIR(BgL_arg4742z00_3829,
																					BgL_arg4745z00_3832);
																			}
																			BgL_arg4653z00_3743 =
																				BgL_list4744z00_3831;
																		}
																	}
																	{	/* Eval/evobject.scm 696 */
																		obj_t BgL_list4655z00_3745;

																		{	/* Eval/evobject.scm 696 */
																			obj_t BgL_arg4656z00_3746;

																			{	/* Eval/evobject.scm 696 */
																				obj_t BgL_arg4657z00_3747;

																				BgL_arg4657z00_3747 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg4656z00_3746 =
																					MAKE_PAIR(BgL_arg4653z00_3743,
																					BgL_arg4657z00_3747);
																			}
																			BgL_list4655z00_3745 =
																				MAKE_PAIR(BgL_arg4652z00_3742,
																				BgL_arg4656z00_3746);
																		}
																		BgL_arg4650z00_3740 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4651z00_3741,
																			BgL_list4655z00_3745);
																	}
																}
																BgL_arg4480z00_3573 =
																	MAKE_PAIR(BgL_arg4649z00_3739,
																	BgL_arg4650z00_3740);
															}
															{	/* Eval/evobject.scm 688 */
																obj_t BgL_list4482z00_3575;

																{	/* Eval/evobject.scm 688 */
																	obj_t BgL_arg4483z00_3576;

																	BgL_arg4483z00_3576 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4482z00_3575 =
																		MAKE_PAIR(BgL_arg4480z00_3573,
																		BgL_arg4483z00_3576);
																}
																BgL_arg4478z00_3571 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4479z00_3572, BgL_list4482z00_3575);
															}
														}
														BgL_arg4474z00_3567 =
															MAKE_PAIR(BgL_arg4477z00_3570,
															BgL_arg4478z00_3571);
													}
													{	/* Eval/evobject.scm 686 */
														obj_t BgL_list4476z00_3569;

														BgL_list4476z00_3569 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4470z00_3563 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4474z00_3567, BgL_list4476z00_3569);
													}
												}
												BgL_arg4432z00_3526 =
													MAKE_PAIR(BgL_arg4469z00_3562, BgL_arg4470z00_3563);
											}
											{	/* Eval/evobject.scm 704 */
												obj_t BgL_arg4852z00_3934;

												obj_t BgL_arg4853z00_3935;

												BgL_arg4852z00_3934 = BGl_symbol5941z00zz__evobjectz00;
												{	/* Eval/evobject.scm 706 */
													obj_t BgL_arg4854z00_3936;

													{	/* Eval/evobject.scm 706 */
														obj_t BgL_arg4857z00_3939;

														obj_t BgL_arg4858z00_3940;

														BgL_arg4857z00_3939 =
															BGl_symbol5993z00zz__evobjectz00;
														{	/* Eval/evobject.scm 706 */
															obj_t BgL_arg4859z00_3941;

															{	/* Eval/evobject.scm 706 */
																obj_t BgL_arg4862z00_3944;

																obj_t BgL_arg4863z00_3945;

																BgL_arg4862z00_3944 =
																	BGl_symbol5907z00zz__evobjectz00;
																{	/* Eval/evobject.scm 706 */
																	obj_t BgL_list4864z00_3946;

																	BgL_list4864z00_3946 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4863z00_3945 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol5955z00zz__evobjectz00,
																		BgL_list4864z00_3946);
																}
																BgL_arg4859z00_3941 =
																	MAKE_PAIR(BgL_arg4862z00_3944,
																	BgL_arg4863z00_3945);
															}
															{	/* Eval/evobject.scm 706 */
																obj_t BgL_list4861z00_3943;

																BgL_list4861z00_3943 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg4858z00_3940 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4859z00_3941, BgL_list4861z00_3943);
															}
														}
														BgL_arg4854z00_3936 =
															MAKE_PAIR(BgL_arg4857z00_3939,
															BgL_arg4858z00_3940);
													}
													{	/* Eval/evobject.scm 704 */
														obj_t BgL_list4856z00_3938;

														BgL_list4856z00_3938 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4853z00_3935 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4854z00_3936, BgL_list4856z00_3938);
													}
												}
												BgL_arg4433z00_3527 =
													MAKE_PAIR(BgL_arg4852z00_3934, BgL_arg4853z00_3935);
											}
											{	/* Eval/evobject.scm 681 */
												obj_t BgL_list4435z00_3529;

												{	/* Eval/evobject.scm 681 */
													obj_t BgL_arg4437z00_3530;

													{	/* Eval/evobject.scm 681 */
														obj_t BgL_arg4438z00_3531;

														BgL_arg4438z00_3531 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4437z00_3530 =
															MAKE_PAIR(BgL_arg4433z00_3527,
															BgL_arg4438z00_3531);
													}
													BgL_list4435z00_3529 =
														MAKE_PAIR(BgL_arg4432z00_3526, BgL_arg4437z00_3530);
												}
												BgL_arg4430z00_3524 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4431z00_3525, BgL_list4435z00_3529);
											}
										}
										BgL_arg4403z00_3497 =
											MAKE_PAIR(BgL_arg4429z00_3523, BgL_arg4430z00_3524);
									}
									{	/* Eval/evobject.scm 680 */
										obj_t BgL_list4405z00_3499;

										{	/* Eval/evobject.scm 680 */
											obj_t BgL_arg4406z00_3500;

											BgL_arg4406z00_3500 = MAKE_PAIR(BNIL, BNIL);
											BgL_list4405z00_3499 =
												MAKE_PAIR(BgL_arg4403z00_3497, BgL_arg4406z00_3500);
										}
										BgL_arg4401z00_3495 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg4402z00_3496, BgL_list4405z00_3499);
									}
								}
								BgL_arg4379z00_3473 =
									MAKE_PAIR(BgL_arg4400z00_3494, BgL_arg4401z00_3495);
							}
							{	/* Eval/evobject.scm 678 */
								obj_t BgL_list4381z00_3475;

								{	/* Eval/evobject.scm 678 */
									obj_t BgL_arg4382z00_3476;

									{	/* Eval/evobject.scm 678 */
										obj_t BgL_arg4383z00_3477;

										BgL_arg4383z00_3477 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg4382z00_3476 =
											MAKE_PAIR(BgL_arg4379z00_3473, BgL_arg4383z00_3477);
									}
									BgL_list4381z00_3475 =
										MAKE_PAIR(BgL_arg4378z00_3472, BgL_arg4382z00_3476);
								}
								BgL_arg4376z00_3470 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4377z00_3471, BgL_list4381z00_3475);
							}
						}
						BgL_arg4365z00_3459 =
							MAKE_PAIR(BgL_arg4375z00_3469, BgL_arg4376z00_3470);
					}
					{	/* Eval/evobject.scm 677 */
						obj_t BgL_list4367z00_3461;

						{	/* Eval/evobject.scm 677 */
							obj_t BgL_arg4368z00_3462;

							{	/* Eval/evobject.scm 677 */
								obj_t BgL_arg4369z00_3463;

								BgL_arg4369z00_3463 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg4368z00_3462 =
									MAKE_PAIR(BgL_arg4365z00_3459, BgL_arg4369z00_3463);
							}
							BgL_list4367z00_3461 =
								MAKE_PAIR(BgL_arg4364z00_3458, BgL_arg4368z00_3462);
						}
						BgL_arg4362z00_3456 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4363z00_3457,
							BgL_list4367z00_3461);
					}
				}
				return MAKE_PAIR(BgL_arg4361z00_3455, BgL_arg4362z00_3456);
			}
		}
	}



/* make-eval-object->struct */
	obj_t BGl_makezd2evalzd2objectzd2ze3structz31zz__evobjectz00(obj_t
		BgL_cidz00_129, obj_t BgL_slotsz00_130)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 711 */
			{	/* Eval/evobject.scm 712 */
				obj_t BgL_arg4865z00_3947;

				obj_t BgL_arg4866z00_3948;

				BgL_arg4865z00_3947 = BGl_symbol6003z00zz__evobjectz00;
				{	/* Eval/evobject.scm 712 */
					obj_t BgL_arg4867z00_3949;

					obj_t BgL_arg4868z00_3950;

					{	/* Eval/evobject.scm 712 */
						obj_t BgL_arg4872z00_3954;

						obj_t BgL_arg4873z00_3955;

						BgL_arg4872z00_3954 = BGl_symbol6005z00zz__evobjectz00;
						{	/* Eval/evobject.scm 712 */
							obj_t BgL_arg4874z00_3956;

							{	/* Eval/evobject.scm 712 */
								obj_t BgL_arg4877z00_3959;

								{	/* Eval/evobject.scm 712 */
									obj_t BgL_arg4878z00_3960;

									obj_t BgL_arg4879z00_3961;

									{	/* Eval/evobject.scm 712 */
										obj_t BgL_res5736z00_6830;

										{	/* Eval/evobject.scm 712 */
											obj_t BgL_symbolz00_6828;

											BgL_symbolz00_6828 = BGl_symbol6007z00zz__evobjectz00;
											{	/* Eval/evobject.scm 712 */
												obj_t BgL_arg5527z00_6829;

												BgL_arg5527z00_6829 =
													SYMBOL_TO_STRING(BgL_symbolz00_6828);
												BgL_res5736z00_6830 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg5527z00_6829);
											}
										}
										BgL_arg4878z00_3960 = BgL_res5736z00_6830;
									}
									{	/* Eval/evobject.scm 712 */
										obj_t BgL_res5737z00_6833;

										{	/* Eval/evobject.scm 712 */
											obj_t BgL_arg5527z00_6832;

											BgL_arg5527z00_6832 = SYMBOL_TO_STRING(BgL_cidz00_129);
											BgL_res5737z00_6833 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg5527z00_6832);
										}
										BgL_arg4879z00_3961 = BgL_res5737z00_6833;
									}
									{	/* Eval/evobject.scm 712 */
										obj_t BgL_list4880z00_3962;

										{	/* Eval/evobject.scm 712 */
											obj_t BgL_arg4881z00_3963;

											BgL_arg4881z00_3963 =
												MAKE_PAIR(BgL_arg4879z00_3961, BNIL);
											BgL_list4880z00_3962 =
												MAKE_PAIR(BgL_arg4878z00_3960, BgL_arg4881z00_3963);
										}
										BgL_arg4877z00_3959 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list4880z00_3962);
									}
								}
								BgL_arg4874z00_3956 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg4877z00_3959));
							}
							{	/* Eval/evobject.scm 712 */
								obj_t BgL_list4876z00_3958;

								BgL_list4876z00_3958 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg4873z00_3955 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4874z00_3956, BgL_list4876z00_3958);
							}
						}
						BgL_arg4867z00_3949 =
							MAKE_PAIR(BgL_arg4872z00_3954, BgL_arg4873z00_3955);
					}
					{	/* Eval/evobject.scm 713 */
						obj_t BgL_arg4882z00_3964;

						obj_t BgL_arg4883z00_3965;

						BgL_arg4882z00_3964 = BGl_symbol5789z00zz__evobjectz00;
						{	/* Eval/evobject.scm 713 */
							obj_t BgL_arg4884z00_3966;

							obj_t BgL_arg4885z00_3967;

							obj_t BgL_arg4886z00_3968;

							obj_t BgL_arg4887z00_3969;

							{	/* Eval/evobject.scm 713 */
								obj_t BgL_arg4891z00_3973;

								{	/* Eval/evobject.scm 713 */
									obj_t BgL_arg4893z00_3975;

									obj_t BgL_arg4894z00_3976;

									BgL_arg4893z00_3975 = BGl_symbol6009z00zz__evobjectz00;
									{	/* Eval/evobject.scm 713 */
										obj_t BgL_arg4895z00_3977;

										{	/* Eval/evobject.scm 713 */
											obj_t BgL_arg4898z00_3980;

											obj_t BgL_arg4899z00_3981;

											BgL_arg4898z00_3980 = BGl_symbol6011z00zz__evobjectz00;
											{	/* Eval/evobject.scm 713 */
												obj_t BgL_arg4900z00_3982;

												long BgL_arg4901z00_3983;

												{	/* Eval/evobject.scm 713 */
													obj_t BgL_arg4906z00_3988;

													obj_t BgL_arg4907z00_3989;

													BgL_arg4906z00_3988 =
														BGl_symbol5842z00zz__evobjectz00;
													{	/* Eval/evobject.scm 713 */
														obj_t BgL_list4908z00_3990;

														BgL_list4908z00_3990 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4907z00_3989 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_cidz00_129, BgL_list4908z00_3990);
													}
													BgL_arg4900z00_3982 =
														MAKE_PAIR(BgL_arg4906z00_3988, BgL_arg4907z00_3989);
												}
												BgL_arg4901z00_3983 =
													(bgl_list_length(BgL_slotsz00_130) + ((long) 1));
												{	/* Eval/evobject.scm 713 */
													obj_t BgL_list4903z00_3985;

													{	/* Eval/evobject.scm 713 */
														obj_t BgL_arg4904z00_3986;

														{	/* Eval/evobject.scm 713 */
															obj_t BgL_arg4905z00_3987;

															BgL_arg4905z00_3987 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg4904z00_3986 =
																MAKE_PAIR(BUNSPEC, BgL_arg4905z00_3987);
														}
														BgL_list4903z00_3985 =
															MAKE_PAIR(BINT(BgL_arg4901z00_3983),
															BgL_arg4904z00_3986);
													}
													BgL_arg4899z00_3981 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg4900z00_3982, BgL_list4903z00_3985);
											}}
											BgL_arg4895z00_3977 =
												MAKE_PAIR(BgL_arg4898z00_3980, BgL_arg4899z00_3981);
										}
										{	/* Eval/evobject.scm 713 */
											obj_t BgL_list4897z00_3979;

											BgL_list4897z00_3979 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg4894z00_3976 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg4895z00_3977, BgL_list4897z00_3979);
									}}
									BgL_arg4891z00_3973 =
										MAKE_PAIR(BgL_arg4893z00_3975, BgL_arg4894z00_3976);
								}
								BgL_arg4884z00_3966 = MAKE_PAIR(BgL_arg4891z00_3973, BNIL);
							}
							{	/* Eval/evobject.scm 714 */
								obj_t BgL_arg4911z00_3993;

								obj_t BgL_arg4912z00_3994;

								BgL_arg4911z00_3993 = BGl_symbol6013z00zz__evobjectz00;
								{	/* Eval/evobject.scm 714 */
									obj_t BgL_arg4913z00_3995;

									obj_t BgL_arg4914z00_3996;

									BgL_arg4913z00_3995 = BGl_symbol6009z00zz__evobjectz00;
									{	/* Eval/evobject.scm 714 */
										obj_t BgL_arg4918z00_4000;

										obj_t BgL_arg4919z00_4001;

										BgL_arg4918z00_4000 = BGl_symbol5842z00zz__evobjectz00;
										{	/* Eval/evobject.scm 714 */
											obj_t BgL_list4920z00_4002;

											BgL_list4920z00_4002 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg4919z00_4001 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_cidz00_129, BgL_list4920z00_4002);
										}
										BgL_arg4914z00_3996 =
											MAKE_PAIR(BgL_arg4918z00_4000, BgL_arg4919z00_4001);
									}
									{	/* Eval/evobject.scm 714 */
										obj_t BgL_list4916z00_3998;

										{	/* Eval/evobject.scm 714 */
											obj_t BgL_arg4917z00_3999;

											BgL_arg4917z00_3999 = MAKE_PAIR(BNIL, BNIL);
											BgL_list4916z00_3998 =
												MAKE_PAIR(BgL_arg4914z00_3996, BgL_arg4917z00_3999);
										}
										BgL_arg4912z00_3994 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg4913z00_3995, BgL_list4916z00_3998);
								}}
								BgL_arg4885z00_3967 =
									MAKE_PAIR(BgL_arg4911z00_3993, BgL_arg4912z00_3994);
							}
							{	/* Eval/evobject.scm 715 */
								obj_t BgL_arg4921z00_4003;

								obj_t BgL_arg4922z00_4004;

								BgL_arg4921z00_4003 = BGl_symbol6015z00zz__evobjectz00;
								{	/* Eval/evobject.scm 715 */
									obj_t BgL_list4923z00_4005;

									{	/* Eval/evobject.scm 715 */
										obj_t BgL_arg4925z00_4007;

										{	/* Eval/evobject.scm 715 */
											obj_t BgL_arg4926z00_4008;

											BgL_arg4926z00_4008 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg4925z00_4007 =
												MAKE_PAIR(BFALSE, BgL_arg4926z00_4008);
										}
										BgL_list4923z00_4005 =
											MAKE_PAIR(BINT(((long) 0)), BgL_arg4925z00_4007);
									}
									BgL_arg4922z00_4004 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol6009z00zz__evobjectz00, BgL_list4923z00_4005);
								}
								BgL_arg4886z00_3968 =
									MAKE_PAIR(BgL_arg4921z00_4003, BgL_arg4922z00_4004);
							}
							{	/* Eval/evobject.scm 718 */
								obj_t BgL_arg4927z00_4009;

								obj_t BgL_arg4928z00_4010;

								BgL_arg4927z00_4009 =
									BGl_loopz72z72zz__evobjectz00(BgL_cidz00_129, ((long) 1),
									BgL_slotsz00_130);
								BgL_arg4928z00_4010 =
									MAKE_PAIR(BGl_symbol6009z00zz__evobjectz00, BNIL);
								BgL_arg4887z00_3969 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4927z00_4009, BgL_arg4928z00_4010);
							}
							{	/* Eval/evobject.scm 713 */
								obj_t BgL_list4888z00_3970;

								{	/* Eval/evobject.scm 713 */
									obj_t BgL_arg4889z00_3971;

									{	/* Eval/evobject.scm 713 */
										obj_t BgL_arg4890z00_3972;

										BgL_arg4890z00_3972 = MAKE_PAIR(BgL_arg4887z00_3969, BNIL);
										BgL_arg4889z00_3971 =
											MAKE_PAIR(BgL_arg4886z00_3968, BgL_arg4890z00_3972);
									}
									BgL_list4888z00_3970 =
										MAKE_PAIR(BgL_arg4885z00_3967, BgL_arg4889z00_3971);
								}
								BgL_arg4883z00_3965 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4884z00_3966, BgL_list4888z00_3970);
						}}
						BgL_arg4868z00_3950 =
							MAKE_PAIR(BgL_arg4882z00_3964, BgL_arg4883z00_3965);
					}
					{	/* Eval/evobject.scm 712 */
						obj_t BgL_list4870z00_3952;

						{	/* Eval/evobject.scm 712 */
							obj_t BgL_arg4871z00_3953;

							BgL_arg4871z00_3953 = MAKE_PAIR(BNIL, BNIL);
							BgL_list4870z00_3952 =
								MAKE_PAIR(BgL_arg4868z00_3950, BgL_arg4871z00_3953);
						}
						BgL_arg4866z00_3948 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4867z00_3949,
							BgL_list4870z00_3952);
				}}
				return MAKE_PAIR(BgL_arg4865z00_3947, BgL_arg4866z00_3948);
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__evobjectz00(obj_t BgL_cidz00_8005, long BgL_iz00_4012,
		obj_t BgL_slotsz00_4013)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 716 */
			if (NULLP(BgL_slotsz00_4013))
				{	/* Eval/evobject.scm 718 */
					return BNIL;
				}
			else
				{	/* Eval/evobject.scm 720 */
					obj_t BgL_sz00_4016;

					BgL_sz00_4016 = CAR(BgL_slotsz00_4013);
					{	/* Eval/evobject.scm 720 */
						obj_t BgL_refz00_4017;

						{	/* Eval/evobject.scm 721 */
							obj_t BgL_arg4940z00_4027;

							obj_t BgL_arg4941z00_4028;

							{	/* Eval/evobject.scm 721 */
								obj_t BgL_arg4942z00_4029;

								obj_t BgL_arg4943z00_4030;

								BgL_arg4942z00_4029 = BGl_symbol5822z00zz__evobjectz00;
								BgL_arg4943z00_4030 =
									STRUCT_REF(BgL_sz00_4016, (int) (((long) 0)));
								{	/* Eval/evobject.scm 721 */
									obj_t BgL_list4944z00_4031;

									{	/* Eval/evobject.scm 721 */
										obj_t BgL_arg4945z00_4032;

										{	/* Eval/evobject.scm 721 */
											obj_t BgL_arg4946z00_4033;

											BgL_arg4946z00_4033 =
												MAKE_PAIR(BgL_arg4943z00_4030, BNIL);
											BgL_arg4945z00_4032 =
												MAKE_PAIR(BgL_arg4942z00_4029, BgL_arg4946z00_4033);
										}
										BgL_list4944z00_4031 =
											MAKE_PAIR(BgL_cidz00_8005, BgL_arg4945z00_4032);
									}
									BgL_arg4940z00_4027 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list4944z00_4031);
							}}
							{	/* Eval/evobject.scm 721 */
								obj_t BgL_list4947z00_4034;

								BgL_list4947z00_4034 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg4941z00_4028 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BGl_symbol6017z00zz__evobjectz00, BgL_list4947z00_4034);
							}
							BgL_refz00_4017 =
								MAKE_PAIR(BgL_arg4940z00_4027, BgL_arg4941z00_4028);
						}
						{	/* Eval/evobject.scm 721 */

							{	/* Eval/evobject.scm 722 */
								obj_t BgL_arg4931z00_4018;

								obj_t BgL_arg4932z00_4019;

								{	/* Eval/evobject.scm 722 */
									obj_t BgL_arg4933z00_4020;

									obj_t BgL_arg4934z00_4021;

									BgL_arg4933z00_4020 = BGl_symbol6015z00zz__evobjectz00;
									{	/* Eval/evobject.scm 722 */
										obj_t BgL_list4935z00_4022;

										{	/* Eval/evobject.scm 722 */
											obj_t BgL_arg4936z00_4023;

											{	/* Eval/evobject.scm 722 */
												obj_t BgL_arg4937z00_4024;

												BgL_arg4937z00_4024 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg4936z00_4023 =
													MAKE_PAIR(BgL_refz00_4017, BgL_arg4937z00_4024);
											}
											BgL_list4935z00_4022 =
												MAKE_PAIR(BINT(BgL_iz00_4012), BgL_arg4936z00_4023);
										}
										BgL_arg4934z00_4021 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BGl_symbol6009z00zz__evobjectz00, BgL_list4935z00_4022);
									}
									BgL_arg4931z00_4018 =
										MAKE_PAIR(BgL_arg4933z00_4020, BgL_arg4934z00_4021);
								}
								BgL_arg4932z00_4019 =
									BGl_loopz72z72zz__evobjectz00(BgL_cidz00_8005,
									(BgL_iz00_4012 + ((long) 1)), CDR(BgL_slotsz00_4013));
								return MAKE_PAIR(BgL_arg4931z00_4018, BgL_arg4932z00_4019);
							}
						}
					}
				}
		}
	}



/* make-eval-struct+object->object */
	obj_t BGl_makezd2evalzd2structzb2objectzd2ze3objectz83zz__evobjectz00(obj_t
		BgL_cidz00_131, obj_t BgL_slotsz00_132)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 729 */
			{	/* Eval/evobject.scm 730 */
				obj_t BgL_arg4948z00_4036;

				obj_t BgL_arg4949z00_4037;

				BgL_arg4948z00_4036 = BGl_symbol6003z00zz__evobjectz00;
				{	/* Eval/evobject.scm 730 */
					obj_t BgL_arg4950z00_4038;

					obj_t BgL_arg4951z00_4039;

					{	/* Eval/evobject.scm 730 */
						obj_t BgL_arg4955z00_4043;

						obj_t BgL_arg4956z00_4044;

						BgL_arg4955z00_4043 = BGl_symbol6019z00zz__evobjectz00;
						{	/* Eval/evobject.scm 730 */
							obj_t BgL_arg4957z00_4045;

							obj_t BgL_arg4958z00_4046;

							{	/* Eval/evobject.scm 730 */
								obj_t BgL_arg4962z00_4050;

								{	/* Eval/evobject.scm 730 */
									obj_t BgL_arg4963z00_4051;

									obj_t BgL_arg4964z00_4052;

									{	/* Eval/evobject.scm 730 */
										obj_t BgL_res5738z00_6847;

										{	/* Eval/evobject.scm 730 */
											obj_t BgL_symbolz00_6845;

											BgL_symbolz00_6845 = BGl_symbol6007z00zz__evobjectz00;
											{	/* Eval/evobject.scm 730 */
												obj_t BgL_arg5527z00_6846;

												BgL_arg5527z00_6846 =
													SYMBOL_TO_STRING(BgL_symbolz00_6845);
												BgL_res5738z00_6847 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg5527z00_6846);
											}
										}
										BgL_arg4963z00_4051 = BgL_res5738z00_6847;
									}
									{	/* Eval/evobject.scm 730 */
										obj_t BgL_res5739z00_6850;

										{	/* Eval/evobject.scm 730 */
											obj_t BgL_arg5527z00_6849;

											BgL_arg5527z00_6849 = SYMBOL_TO_STRING(BgL_cidz00_131);
											BgL_res5739z00_6850 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg5527z00_6849);
										}
										BgL_arg4964z00_4052 = BgL_res5739z00_6850;
									}
									{	/* Eval/evobject.scm 730 */
										obj_t BgL_list4965z00_4053;

										{	/* Eval/evobject.scm 730 */
											obj_t BgL_arg4966z00_4054;

											BgL_arg4966z00_4054 =
												MAKE_PAIR(BgL_arg4964z00_4052, BNIL);
											BgL_list4965z00_4053 =
												MAKE_PAIR(BgL_arg4963z00_4051, BgL_arg4966z00_4054);
										}
										BgL_arg4962z00_4050 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list4965z00_4053);
									}
								}
								BgL_arg4957z00_4045 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg4962z00_4050));
							}
							BgL_arg4958z00_4046 = BGl_symbol6021z00zz__evobjectz00;
							{	/* Eval/evobject.scm 730 */
								obj_t BgL_list4960z00_4048;

								{	/* Eval/evobject.scm 730 */
									obj_t BgL_arg4961z00_4049;

									BgL_arg4961z00_4049 = MAKE_PAIR(BNIL, BNIL);
									BgL_list4960z00_4048 =
										MAKE_PAIR(BgL_arg4958z00_4046, BgL_arg4961z00_4049);
								}
								BgL_arg4956z00_4044 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4957z00_4045, BgL_list4960z00_4048);
							}
						}
						BgL_arg4950z00_4038 =
							MAKE_PAIR(BgL_arg4955z00_4043, BgL_arg4956z00_4044);
					}
					{	/* Eval/evobject.scm 732 */
						obj_t BgL_arg4967z00_4055;

						obj_t BgL_arg4968z00_4056;

						{	/* Eval/evobject.scm 732 */
							obj_t BgL_arg4969z00_4057;

							{	/* Eval/evobject.scm 732 */
								obj_t BgL_arg4970z00_4058;

								obj_t BgL_arg4971z00_4059;

								{	/* Eval/evobject.scm 732 */
									obj_t BgL_res5740z00_6854;

									{	/* Eval/evobject.scm 732 */
										obj_t BgL_symbolz00_6852;

										BgL_symbolz00_6852 = BGl_symbol5782z00zz__evobjectz00;
										{	/* Eval/evobject.scm 732 */
											obj_t BgL_arg5527z00_6853;

											BgL_arg5527z00_6853 =
												SYMBOL_TO_STRING(BgL_symbolz00_6852);
											BgL_res5740z00_6854 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg5527z00_6853);
										}
									}
									BgL_arg4970z00_4058 = BgL_res5740z00_6854;
								}
								{	/* Eval/evobject.scm 732 */
									obj_t BgL_res5741z00_6857;

									{	/* Eval/evobject.scm 732 */
										obj_t BgL_arg5527z00_6856;

										BgL_arg5527z00_6856 = SYMBOL_TO_STRING(BgL_cidz00_131);
										BgL_res5741z00_6857 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg5527z00_6856);
									}
									BgL_arg4971z00_4059 = BgL_res5741z00_6857;
								}
								{	/* Eval/evobject.scm 732 */
									obj_t BgL_list4972z00_4060;

									{	/* Eval/evobject.scm 732 */
										obj_t BgL_arg4973z00_4061;

										BgL_arg4973z00_4061 = MAKE_PAIR(BgL_arg4971z00_4059, BNIL);
										BgL_list4972z00_4060 =
											MAKE_PAIR(BgL_arg4970z00_4058, BgL_arg4973z00_4061);
									}
									BgL_arg4969z00_4057 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list4972z00_4060);
								}
							}
							BgL_arg4967z00_4055 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg4969z00_4057));
						}
						BgL_arg4968z00_4056 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BGl_loopz00zz__evobjectz00(((long) 1), BgL_slotsz00_132), BNIL);
						BgL_arg4951z00_4039 =
							MAKE_PAIR(BgL_arg4967z00_4055, BgL_arg4968z00_4056);
					}
					{	/* Eval/evobject.scm 730 */
						obj_t BgL_list4953z00_4041;

						{	/* Eval/evobject.scm 730 */
							obj_t BgL_arg4954z00_4042;

							BgL_arg4954z00_4042 = MAKE_PAIR(BNIL, BNIL);
							BgL_list4953z00_4041 =
								MAKE_PAIR(BgL_arg4951z00_4039, BgL_arg4954z00_4042);
						}
						BgL_arg4949z00_4037 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4950z00_4038,
							BgL_list4953z00_4041);
				}}
				return MAKE_PAIR(BgL_arg4948z00_4036, BgL_arg4949z00_4037);
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__evobjectz00(long BgL_iz00_4065, obj_t BgL_slotsz00_4066)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 733 */
			if (NULLP(BgL_slotsz00_4066))
				{	/* Eval/evobject.scm 735 */
					return BNIL;
				}
			else
				{	/* Eval/evobject.scm 738 */
					obj_t BgL_arg4978z00_4070;

					obj_t BgL_arg4979z00_4071;

					{	/* Eval/evobject.scm 738 */
						obj_t BgL_arg4980z00_4072;

						obj_t BgL_arg4981z00_4073;

						BgL_arg4980z00_4072 = BGl_symbol6023z00zz__evobjectz00;
						{	/* Eval/evobject.scm 738 */
							obj_t BgL_list4982z00_4074;

							{	/* Eval/evobject.scm 738 */
								obj_t BgL_arg4983z00_4075;

								BgL_arg4983z00_4075 = MAKE_PAIR(BNIL, BNIL);
								BgL_list4982z00_4074 =
									MAKE_PAIR(BINT(BgL_iz00_4065), BgL_arg4983z00_4075);
							}
							BgL_arg4981z00_4073 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_symbol6025z00zz__evobjectz00, BgL_list4982z00_4074);
						}
						BgL_arg4978z00_4070 =
							MAKE_PAIR(BgL_arg4980z00_4072, BgL_arg4981z00_4073);
					}
					BgL_arg4979z00_4071 =
						BGl_loopz00zz__evobjectz00(
						(BgL_iz00_4065 + ((long) 1)), CDR(BgL_slotsz00_4066));
					return MAKE_PAIR(BgL_arg4978z00_4070, BgL_arg4979z00_4071);
				}
		}
	}



/* class-all-slots */
	obj_t BGl_classzd2allzd2slotsz00zz__evobjectz00(obj_t BgL_classz00_133)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 744 */
			{	/* Eval/evobject.scm 745 */
				obj_t BgL_l1963z00_4079;

				BgL_l1963z00_4079 =
					BGl_classzd2allzd2fieldsz00zz__objectz00(BgL_classz00_133);
				if (NULLP(BgL_l1963z00_4079))
					{	/* Eval/evobject.scm 745 */
						return BNIL;
					}
				else
					{	/* Eval/evobject.scm 745 */
						obj_t BgL_head1965z00_4081;

						BgL_head1965z00_4081 =
							MAKE_PAIR(BGl_fieldzd2ze3slotz31zz__evobjectz00(CAR
								(BgL_l1963z00_4079)), BNIL);
						{	/* Eval/evobject.scm 745 */
							obj_t BgL_g1968z00_4082;

							BgL_g1968z00_4082 = CDR(BgL_l1963z00_4079);
							{
								obj_t BgL_l1963z00_6870;

								obj_t BgL_tail1966z00_6871;

								BgL_l1963z00_6870 = BgL_g1968z00_4082;
								BgL_tail1966z00_6871 = BgL_head1965z00_4081;
							BgL_zc3anonymousza34990ze3z83_6869:
								if (NULLP(BgL_l1963z00_6870))
									{	/* Eval/evobject.scm 745 */
										return BgL_head1965z00_4081;
									}
								else
									{	/* Eval/evobject.scm 745 */
										obj_t BgL_newtail1967z00_6879;

										BgL_newtail1967z00_6879 =
											MAKE_PAIR(BGl_fieldzd2ze3slotz31zz__evobjectz00(CAR
												(BgL_l1963z00_6870)), BNIL);
										SET_CDR(BgL_tail1966z00_6871, BgL_newtail1967z00_6879);
										{
											obj_t BgL_tail1966z00_10887;

											obj_t BgL_l1963z00_10885;

											BgL_l1963z00_10885 = CDR(BgL_l1963z00_6870);
											BgL_tail1966z00_10887 = BgL_newtail1967z00_6879;
											BgL_tail1966z00_6871 = BgL_tail1966z00_10887;
											BgL_l1963z00_6870 = BgL_l1963z00_10885;
											goto BgL_zc3anonymousza34990ze3z83_6869;
										}
									}
							}
						}
					}
			}
		}
	}



/* eval-parse-class-slot */
	obj_t BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(obj_t BgL_locz00_134,
		obj_t BgL_fz00_135)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 750 */
			if (SYMBOLP(BgL_fz00_135))
				{	/* Eval/evobject.scm 753 */
					obj_t BgL_idz00_4098;

					BgL_idz00_4098 =
						BGl_decomposezd2identzd2zz__evobjectz00(BgL_fz00_135);
					{	/* Eval/evobject.scm 755 */
						obj_t BgL_typez00_4099;

						{	/* Eval/evobject.scm 755 */
							int BgL_auxz00_10891;

							BgL_auxz00_10891 = (int) (((long) 1));
							BgL_typez00_4099 = BGL_MVALUES_VAL(BgL_auxz00_10891);
						}
						{	/* Eval/evobject.scm 755 */
							obj_t BgL_arg5001z00_4100;

							{	/* Eval/evobject.scm 755 */
								obj_t BgL_arg5003z00_4102;

								BgL_arg5003z00_4102 =
									BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
								{	/* Eval/evobject.scm 755 */
									obj_t BgL_newz00_6929;

									BgL_newz00_6929 =
										create_struct(BGl_symbol5856z00zz__evobjectz00,
										(int) (((long) 8)));
									{	/* Eval/evobject.scm 755 */
										int BgL_auxz00_10897;

										BgL_auxz00_10897 = (int) (((long) 7));
										STRUCT_SET(BgL_newz00_6929, BgL_auxz00_10897, BFALSE);
									}
									{	/* Eval/evobject.scm 755 */
										int BgL_auxz00_10900;

										BgL_auxz00_10900 = (int) (((long) 6));
										STRUCT_SET(BgL_newz00_6929, BgL_auxz00_10900, BFALSE);
									}
									{	/* Eval/evobject.scm 755 */
										int BgL_auxz00_10903;

										BgL_auxz00_10903 = (int) (((long) 5));
										STRUCT_SET(BgL_newz00_6929, BgL_auxz00_10903, BFALSE);
									}
									{	/* Eval/evobject.scm 755 */
										int BgL_auxz00_10906;

										BgL_auxz00_10906 = (int) (((long) 4));
										STRUCT_SET(BgL_newz00_6929, BgL_auxz00_10906, BFALSE);
									}
									{	/* Eval/evobject.scm 755 */
										int BgL_auxz00_10909;

										BgL_auxz00_10909 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_6929, BgL_auxz00_10909,
											BgL_arg5003z00_4102);
									}
									{	/* Eval/evobject.scm 755 */
										int BgL_auxz00_10912;

										BgL_auxz00_10912 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_6929, BgL_auxz00_10912, BFALSE);
									}
									{	/* Eval/evobject.scm 755 */
										int BgL_auxz00_10915;

										BgL_auxz00_10915 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_6929, BgL_auxz00_10915,
											BgL_typez00_4099);
									}
									{	/* Eval/evobject.scm 755 */
										int BgL_auxz00_10918;

										BgL_auxz00_10918 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_6929, BgL_auxz00_10918,
											BgL_idz00_4098);
									}
									BgL_arg5001z00_4100 = BgL_newz00_6929;
							}}
							{	/* Eval/evobject.scm 755 */
								obj_t BgL_list5002z00_4101;

								BgL_list5002z00_4101 = MAKE_PAIR(BgL_arg5001z00_4100, BNIL);
								return BgL_list5002z00_4101;
							}
						}
					}
				}
			else
				{	/* Eval/evobject.scm 756 */
					bool_t BgL_testz00_10922;

					if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_fz00_135))
						{	/* Eval/evobject.scm 756 */
							obj_t BgL_auxz00_10925;

							BgL_auxz00_10925 = CAR(BgL_fz00_135);
							BgL_testz00_10922 = SYMBOLP(BgL_auxz00_10925);
						}
					else
						{	/* Eval/evobject.scm 756 */
							BgL_testz00_10922 = ((bool_t) 0);
						}
					if (BgL_testz00_10922)
						{	/* Eval/evobject.scm 759 */
							bool_t BgL_testz00_10928;

							if ((CAR(BgL_fz00_135) == BGl_symbol6027z00zz__evobjectz00))
								{	/* Eval/evobject.scm 760 */
									bool_t BgL__ortest_1832z00_4225;

									BgL__ortest_1832z00_4225 = NULLP(CDR(BgL_fz00_135));
									if (BgL__ortest_1832z00_4225)
										{	/* Eval/evobject.scm 760 */
											BgL_testz00_10928 = BgL__ortest_1832z00_4225;
										}
									else
										{	/* Eval/evobject.scm 761 */
											bool_t BgL__ortest_1833z00_4226;

											{	/* Eval/evobject.scm 761 */
												bool_t BgL_testz00_10935;

												{	/* Eval/evobject.scm 761 */
													obj_t BgL_auxz00_10936;

													{	/* Eval/evobject.scm 761 */
														obj_t BgL_pairz00_6977;

														BgL_pairz00_6977 = BgL_fz00_135;
														BgL_auxz00_10936 = CAR(CDR(BgL_pairz00_6977));
													}
													BgL_testz00_10935 = SYMBOLP(BgL_auxz00_10936);
												}
												if (BgL_testz00_10935)
													{	/* Eval/evobject.scm 761 */
														BgL__ortest_1833z00_4226 = ((bool_t) 0);
													}
												else
													{	/* Eval/evobject.scm 761 */
														BgL__ortest_1833z00_4226 = ((bool_t) 1);
													}
											}
											if (BgL__ortest_1833z00_4226)
												{	/* Eval/evobject.scm 761 */
													BgL_testz00_10928 = BgL__ortest_1833z00_4226;
												}
											else
												{	/* Eval/evobject.scm 762 */
													obj_t BgL__ortest_1834z00_4227;

													{	/* Eval/evobject.scm 762 */
														obj_t BgL_auxz00_10941;

														{	/* Eval/evobject.scm 762 */
															obj_t BgL_pairz00_6982;

															BgL_pairz00_6982 = BgL_fz00_135;
															BgL_auxz00_10941 = CDR(CDR(BgL_pairz00_6982));
														}
														BgL__ortest_1834z00_4227 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol6029z00zz__evobjectz00,
															BgL_auxz00_10941);
													}
													if (CBOOL(BgL__ortest_1834z00_4227))
														{	/* Eval/evobject.scm 762 */
															BgL_testz00_10928 =
																CBOOL(BgL__ortest_1834z00_4227);
														}
													else
														{	/* Eval/evobject.scm 763 */
															obj_t BgL_auxz00_10948;

															{	/* Eval/evobject.scm 763 */
																obj_t BgL_auxz00_10949;

																{	/* Eval/evobject.scm 763 */
																	obj_t BgL_pairz00_6986;

																	BgL_pairz00_6986 = BgL_fz00_135;
																	BgL_auxz00_10949 = CDR(CDR(BgL_pairz00_6986));
																}
																BgL_auxz00_10948 =
																	BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol6031z00zz__evobjectz00,
																	BgL_auxz00_10949);
															}
															BgL_testz00_10928 = CBOOL(BgL_auxz00_10948);
														}
												}
										}
								}
							else
								{	/* Eval/evobject.scm 759 */
									BgL_testz00_10928 = ((bool_t) 0);
								}
							if (BgL_testz00_10928)
								{	/* Eval/evobject.scm 764 */
									obj_t BgL_arg5006z00_4105;

									obj_t BgL_arg5007z00_4106;

									{	/* Eval/evobject.scm 764 */
										obj_t BgL__ortest_1835z00_4108;

										BgL__ortest_1835z00_4108 =
											BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_fz00_135);
										if (CBOOL(BgL__ortest_1835z00_4108))
											{	/* Eval/evobject.scm 764 */
												BgL_arg5006z00_4105 = BgL__ortest_1835z00_4108;
											}
										else
											{	/* Eval/evobject.scm 764 */
												BgL_arg5006z00_4105 = BgL_locz00_134;
											}
									}
									BgL_arg5007z00_4106 = BGl_symbol6033z00zz__evobjectz00;
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00
										(BgL_arg5006z00_4105, BgL_arg5007z00_4106,
										BGl_string6035z00zz__evobjectz00, BgL_fz00_135);
								}
							else
								{	/* Eval/evobject.scm 767 */
									bool_t BgL_indexpz00_4109;

									obj_t BgL_idz00_4110;

									obj_t BgL_attrsz00_4111;

									BgL_indexpz00_4109 = ((bool_t) 0);
									BgL_idz00_4110 = CAR(BgL_fz00_135);
									BgL_attrsz00_4111 = CDR(BgL_fz00_135);
									if ((CAR(BgL_fz00_135) == BGl_symbol6027z00zz__evobjectz00))
										{	/* Eval/evobject.scm 770 */
											{	/* Eval/evobject.scm 771 */
												obj_t BgL_pairz00_6993;

												BgL_pairz00_6993 = BgL_fz00_135;
												BgL_idz00_4110 = CAR(CDR(BgL_pairz00_6993));
											}
											BgL_indexpz00_4109 = ((bool_t) 1);
											{	/* Eval/evobject.scm 773 */
												obj_t BgL_pairz00_6997;

												BgL_pairz00_6997 = BgL_fz00_135;
												BgL_attrsz00_4111 = CDR(CDR(BgL_pairz00_6997));
											}
										}
									else
										{	/* Eval/evobject.scm 770 */
											BFALSE;
										}
									{	/* Eval/evobject.scm 774 */
										obj_t BgL_idz00_4115;

										BgL_idz00_4115 =
											BGl_decomposezd2identzd2zz__evobjectz00(BgL_idz00_4110);
										{	/* Eval/evobject.scm 776 */
											obj_t BgL_typez00_4116;

											{	/* Eval/evobject.scm 776 */
												int BgL_auxz00_10968;

												BgL_auxz00_10968 = (int) (((long) 1));
												BgL_typez00_4116 = BGL_MVALUES_VAL(BgL_auxz00_10968);
											}
											{	/* Eval/evobject.scm 776 */
												obj_t BgL_defz00_4117;

												obj_t BgL_getz00_4118;

												obj_t BgL_setz00_4119;

												obj_t BgL_infoz00_4120;

												bool_t BgL_ronlyz00_4121;

												BgL_defz00_4117 =
													BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00
													();
												BgL_getz00_4118 = BFALSE;
												BgL_setz00_4119 = BFALSE;
												BgL_infoz00_4120 = BFALSE;
												BgL_ronlyz00_4121 = ((bool_t) 0);
												{
													obj_t BgL_l1969z00_4123;

													BgL_l1969z00_4123 = BgL_attrsz00_4111;
												BgL_zc3anonymousza35012ze3z83_4124:
													if (PAIRP(BgL_l1969z00_4123))
														{	/* Eval/evobject.scm 781 */
															{	/* Eval/evobject.scm 783 */
																obj_t BgL_attrz00_4126;

																BgL_attrz00_4126 = CAR(BgL_l1969z00_4123);
																if (
																	(BgL_attrz00_4126 ==
																		BGl_symbol6036z00zz__evobjectz00))
																	{	/* Eval/evobject.scm 783 */
																		BgL_ronlyz00_4121 = ((bool_t) 1);
																	}
																else
																	{
																		obj_t BgL_exprz00_4132;

																		obj_t BgL_exprz00_4130;

																		if (PAIRP(BgL_attrz00_4126))
																			{	/* Eval/evobject.scm 786 */
																				obj_t BgL_cdrzd21399zd2_4139;

																				BgL_cdrzd21399zd2_4139 =
																					CDR(BgL_attrz00_4126);
																				if (
																					(CAR(BgL_attrz00_4126) ==
																						BGl_symbol6039z00zz__evobjectz00))
																					{	/* Eval/evobject.scm 786 */
																						if (PAIRP(BgL_cdrzd21399zd2_4139))
																							{	/* Eval/evobject.scm 786 */
																								if (NULLP(CDR
																										(BgL_cdrzd21399zd2_4139)))
																									{	/* Eval/evobject.scm 786 */
																										obj_t BgL_arg5019z00_4143;

																										BgL_arg5019z00_4143 =
																											CAR
																											(BgL_cdrzd21399zd2_4139);
																										BgL_infoz00_4120 =
																											BgL_arg5019z00_4143;
																									}
																								else
																									{	/* Eval/evobject.scm 786 */
																									BgL_tagzd21393zd2_4136:
																										{	/* Eval/evobject.scm 806 */
																											obj_t BgL_arg5067z00_4200;

																											obj_t BgL_arg5068z00_4201;

																											{	/* Eval/evobject.scm 806 */
																												obj_t
																													BgL__ortest_1836z00_4203;
																												BgL__ortest_1836z00_4203
																													=
																													BGl_getzd2sourcezd2locationz00zz__readerz00
																													(BgL_fz00_135);
																												if (CBOOL
																													(BgL__ortest_1836z00_4203))
																													{	/* Eval/evobject.scm 806 */
																														BgL_arg5067z00_4200
																															=
																															BgL__ortest_1836z00_4203;
																													}
																												else
																													{	/* Eval/evobject.scm 806 */
																														BgL_arg5067z00_4200
																															= BgL_locz00_134;
																													}
																											}
																											BgL_arg5068z00_4201 =
																												BGl_symbol6033z00zz__evobjectz00;
																											BGl_evcompilezd2errorzd2zz__evcompilez00
																												(BgL_arg5067z00_4200,
																												BgL_arg5068z00_4201,
																												BGl_string6038z00zz__evobjectz00,
																												BgL_fz00_135);
																										}
																									}
																							}
																						else
																							{	/* Eval/evobject.scm 786 */
																								goto BgL_tagzd21393zd2_4136;
																							}
																					}
																				else
																					{	/* Eval/evobject.scm 786 */
																						if (
																							(CAR(BgL_attrz00_4126) ==
																								BGl_symbol6029z00zz__evobjectz00))
																							{	/* Eval/evobject.scm 786 */
																								if (PAIRP
																									(BgL_cdrzd21399zd2_4139))
																									{	/* Eval/evobject.scm 786 */
																										if (NULLP(CDR
																												(BgL_cdrzd21399zd2_4139)))
																											{	/* Eval/evobject.scm 786 */
																												BgL_exprz00_4130 =
																													CAR
																													(BgL_cdrzd21399zd2_4139);
																												if (SYMBOLP
																													(BgL_exprz00_4130))
																													{	/* Eval/evobject.scm 791 */
																														obj_t BgL_oz00_4172;

																														{	/* Eval/evobject.scm 791 */

																															{	/* Eval/evobject.scm 791 */

																																BgL_oz00_4172 =
																																	BGl_gensymz00zz__r4_symbols_6_4z00
																																	(BFALSE);
																															}
																														}
																														{	/* Eval/evobject.scm 792 */
																															obj_t
																																BgL_arg5045z00_4173;
																															obj_t
																																BgL_arg5046z00_4174;
																															BgL_arg5045z00_4173
																																=
																																BGl_symbol5884z00zz__evobjectz00;
																															{	/* Eval/evobject.scm 792 */
																																obj_t
																																	BgL_arg5047z00_4175;
																																obj_t
																																	BgL_arg5048z00_4176;
																																BgL_arg5047z00_4175
																																	=
																																	MAKE_PAIR
																																	(BgL_oz00_4172,
																																	BNIL);
																																{	/* Eval/evobject.scm 793 */
																																	obj_t
																																		BgL_arg5052z00_4180;
																																	{	/* Eval/evobject.scm 793 */
																																		obj_t
																																			BgL_list5053z00_4181;
																																		BgL_list5053z00_4181
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg5052z00_4180
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_oz00_4172,
																																			BgL_list5053z00_4181);
																																	}
																																	BgL_arg5048z00_4176
																																		=
																																		MAKE_PAIR
																																		(BgL_exprz00_4130,
																																		BgL_arg5052z00_4180);
																																}
																																{	/* Eval/evobject.scm 792 */
																																	obj_t
																																		BgL_list5050z00_4178;
																																	{	/* Eval/evobject.scm 792 */
																																		obj_t
																																			BgL_arg5051z00_4179;
																																		BgL_arg5051z00_4179
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list5050z00_4178
																																			=
																																			MAKE_PAIR
																																			(BgL_arg5048z00_4176,
																																			BgL_arg5051z00_4179);
																																	}
																																	BgL_arg5046z00_4174
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg5047z00_4175,
																																		BgL_list5050z00_4178);
																																}
																															}
																															BgL_getz00_4118 =
																																MAKE_PAIR
																																(BgL_arg5045z00_4173,
																																BgL_arg5046z00_4174);
																														}
																													}
																												else
																													{	/* Eval/evobject.scm 790 */
																														BgL_getz00_4118 =
																															BgL_exprz00_4130;
																													}
																											}
																										else
																											{	/* Eval/evobject.scm 786 */
																												goto
																													BgL_tagzd21393zd2_4136;
																											}
																									}
																								else
																									{	/* Eval/evobject.scm 786 */
																										goto BgL_tagzd21393zd2_4136;
																									}
																							}
																						else
																							{	/* Eval/evobject.scm 786 */
																								obj_t BgL_cdrzd21435zd2_4151;

																								BgL_cdrzd21435zd2_4151 =
																									CDR(BgL_attrz00_4126);
																								if (
																									(CAR(BgL_attrz00_4126) ==
																										BGl_symbol6031z00zz__evobjectz00))
																									{	/* Eval/evobject.scm 786 */
																										if (PAIRP
																											(BgL_cdrzd21435zd2_4151))
																											{	/* Eval/evobject.scm 786 */
																												if (NULLP(CDR
																														(BgL_cdrzd21435zd2_4151)))
																													{	/* Eval/evobject.scm 786 */
																														BgL_exprz00_4132 =
																															CAR
																															(BgL_cdrzd21435zd2_4151);
																														if (SYMBOLP
																															(BgL_exprz00_4132))
																															{	/* Eval/evobject.scm 797 */
																																obj_t
																																	BgL_oz00_4184;
																																obj_t
																																	BgL_vz00_4185;
																																{	/* Eval/evobject.scm 797 */

																																	{	/* Eval/evobject.scm 797 */

																																		BgL_oz00_4184
																																			=
																																			BGl_gensymz00zz__r4_symbols_6_4z00
																																			(BFALSE);
																																	}
																																}
																																{	/* Eval/evobject.scm 798 */

																																	{	/* Eval/evobject.scm 798 */

																																		BgL_vz00_4185
																																			=
																																			BGl_gensymz00zz__r4_symbols_6_4z00
																																			(BFALSE);
																																	}
																																}
																																{	/* Eval/evobject.scm 799 */
																																	obj_t
																																		BgL_arg5055z00_4186;
																																	obj_t
																																		BgL_arg5056z00_4187;
																																	BgL_arg5055z00_4186
																																		=
																																		BGl_symbol5884z00zz__evobjectz00;
																																	{	/* Eval/evobject.scm 799 */
																																		obj_t
																																			BgL_arg5057z00_4188;
																																		obj_t
																																			BgL_arg5058z00_4189;
																																		{	/* Eval/evobject.scm 799 */
																																			obj_t
																																				BgL_arg5062z00_4193;
																																			{	/* Eval/evobject.scm 799 */
																																				obj_t
																																					BgL_list5063z00_4194;
																																				BgL_list5063z00_4194
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_arg5062z00_4193
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_vz00_4185,
																																					BgL_list5063z00_4194);
																																			}
																																			BgL_arg5057z00_4188
																																				=
																																				MAKE_PAIR
																																				(BgL_oz00_4184,
																																				BgL_arg5062z00_4193);
																																		}
																																		{	/* Eval/evobject.scm 800 */
																																			obj_t
																																				BgL_arg5064z00_4195;
																																			{	/* Eval/evobject.scm 800 */
																																				obj_t
																																					BgL_list5065z00_4196;
																																				{	/* Eval/evobject.scm 800 */
																																					obj_t
																																						BgL_arg5066z00_4197;
																																					BgL_arg5066z00_4197
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_list5065z00_4196
																																						=
																																						MAKE_PAIR
																																						(BgL_vz00_4185,
																																						BgL_arg5066z00_4197);
																																				}
																																				BgL_arg5064z00_4195
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_oz00_4184,
																																					BgL_list5065z00_4196);
																																			}
																																			BgL_arg5058z00_4189
																																				=
																																				MAKE_PAIR
																																				(BgL_exprz00_4132,
																																				BgL_arg5064z00_4195);
																																		}
																																		{	/* Eval/evobject.scm 799 */
																																			obj_t
																																				BgL_list5060z00_4191;
																																			{	/* Eval/evobject.scm 799 */
																																				obj_t
																																					BgL_arg5061z00_4192;
																																				BgL_arg5061z00_4192
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_list5060z00_4191
																																					=
																																					MAKE_PAIR
																																					(BgL_arg5058z00_4189,
																																					BgL_arg5061z00_4192);
																																			}
																																			BgL_arg5056z00_4187
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg5057z00_4188,
																																				BgL_list5060z00_4191);
																																		}
																																	}
																																	BgL_setz00_4119
																																		=
																																		MAKE_PAIR
																																		(BgL_arg5055z00_4186,
																																		BgL_arg5056z00_4187);
																																}
																															}
																														else
																															{	/* Eval/evobject.scm 796 */
																																BgL_setz00_4119
																																	=
																																	BgL_exprz00_4132;
																															}
																													}
																												else
																													{	/* Eval/evobject.scm 786 */
																														goto
																															BgL_tagzd21393zd2_4136;
																													}
																											}
																										else
																											{	/* Eval/evobject.scm 786 */
																												goto
																													BgL_tagzd21393zd2_4136;
																											}
																									}
																								else
																									{	/* Eval/evobject.scm 786 */
																										if (
																											(CAR(BgL_attrz00_4126) ==
																												BGl_symbol6041z00zz__evobjectz00))
																											{	/* Eval/evobject.scm 786 */
																												if (PAIRP
																													(BgL_cdrzd21435zd2_4151))
																													{	/* Eval/evobject.scm 786 */
																														if (NULLP(CDR
																																(BgL_cdrzd21435zd2_4151)))
																															{	/* Eval/evobject.scm 786 */
																																obj_t
																																	BgL_arg5034z00_4161;
																																BgL_arg5034z00_4161
																																	=
																																	CAR
																																	(BgL_cdrzd21435zd2_4151);
																																BgL_defz00_4117
																																	=
																																	BgL_arg5034z00_4161;
																															}
																														else
																															{	/* Eval/evobject.scm 786 */
																																goto
																																	BgL_tagzd21393zd2_4136;
																															}
																													}
																												else
																													{	/* Eval/evobject.scm 786 */
																														goto
																															BgL_tagzd21393zd2_4136;
																													}
																											}
																										else
																											{	/* Eval/evobject.scm 786 */
																												goto
																													BgL_tagzd21393zd2_4136;
																											}
																									}
																							}
																					}
																			}
																		else
																			{	/* Eval/evobject.scm 786 */
																				goto BgL_tagzd21393zd2_4136;
																			}
																	}
															}
															{
																obj_t BgL_l1969z00_11047;

																BgL_l1969z00_11047 = CDR(BgL_l1969z00_4123);
																BgL_l1969z00_4123 = BgL_l1969z00_11047;
																goto BgL_zc3anonymousza35012ze3z83_4124;
															}
														}
													else
														{	/* Eval/evobject.scm 781 */
															((bool_t) 1);
														}
												}
												{	/* Eval/evobject.scm 810 */
													bool_t BgL_testz00_11049;

													if (CBOOL(BgL_getz00_4118))
														{	/* Eval/evobject.scm 810 */
															if (BgL_ronlyz00_4121)
																{	/* Eval/evobject.scm 810 */
																	BgL_testz00_11049 = ((bool_t) 0);
																}
															else
																{	/* Eval/evobject.scm 810 */
																	if (CBOOL(BgL_setz00_4119))
																		{	/* Eval/evobject.scm 810 */
																			BgL_testz00_11049 = ((bool_t) 0);
																		}
																	else
																		{	/* Eval/evobject.scm 810 */
																			BgL_testz00_11049 = ((bool_t) 1);
																		}
																}
														}
													else
														{	/* Eval/evobject.scm 810 */
															BgL_testz00_11049 = ((bool_t) 0);
														}
													if (BgL_testz00_11049)
														{	/* Eval/evobject.scm 812 */
															obj_t BgL_arg5072z00_4207;

															obj_t BgL_arg5073z00_4208;

															{	/* Eval/evobject.scm 812 */
																obj_t BgL__ortest_1837z00_4210;

																BgL__ortest_1837z00_4210 =
																	BGl_getzd2sourcezd2locationz00zz__readerz00
																	(BgL_fz00_135);
																if (CBOOL(BgL__ortest_1837z00_4210))
																	{	/* Eval/evobject.scm 812 */
																		BgL_arg5072z00_4207 =
																			BgL__ortest_1837z00_4210;
																	}
																else
																	{	/* Eval/evobject.scm 812 */
																		BgL_arg5072z00_4207 = BgL_locz00_134;
																	}
															}
															BgL_arg5073z00_4208 =
																BGl_symbol6033z00zz__evobjectz00;
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_arg5072z00_4207, BgL_arg5073z00_4208,
																BGl_string6043z00zz__evobjectz00, BgL_fz00_135);
														}
													else
														{	/* Eval/evobject.scm 814 */
															bool_t BgL_testz00_11059;

															if (CBOOL(BgL_setz00_4119))
																{	/* Eval/evobject.scm 814 */
																	if (CBOOL(BgL_getz00_4118))
																		{	/* Eval/evobject.scm 814 */
																			BgL_testz00_11059 = ((bool_t) 0);
																		}
																	else
																		{	/* Eval/evobject.scm 814 */
																			BgL_testz00_11059 = ((bool_t) 1);
																		}
																}
															else
																{	/* Eval/evobject.scm 814 */
																	BgL_testz00_11059 = ((bool_t) 0);
																}
															if (BgL_testz00_11059)
																{	/* Eval/evobject.scm 816 */
																	obj_t BgL_arg5076z00_4212;

																	obj_t BgL_arg5077z00_4213;

																	{	/* Eval/evobject.scm 816 */
																		obj_t BgL__ortest_1838z00_4215;

																		BgL__ortest_1838z00_4215 =
																			BGl_getzd2sourcezd2locationz00zz__readerz00
																			(BgL_fz00_135);
																		if (CBOOL(BgL__ortest_1838z00_4215))
																			{	/* Eval/evobject.scm 816 */
																				BgL_arg5076z00_4212 =
																					BgL__ortest_1838z00_4215;
																			}
																		else
																			{	/* Eval/evobject.scm 816 */
																				BgL_arg5076z00_4212 = BgL_locz00_134;
																			}
																	}
																	BgL_arg5077z00_4213 =
																		BGl_symbol6033z00zz__evobjectz00;
																	return
																		BGl_evcompilezd2errorzd2zz__evcompilez00
																		(BgL_arg5076z00_4212, BgL_arg5077z00_4213,
																		BGl_string6044z00zz__evobjectz00,
																		BgL_fz00_135);
																}
															else
																{	/* Eval/evobject.scm 819 */
																	obj_t BgL_sz00_4216;

																	{	/* Eval/evobject.scm 819 */
																		bool_t BgL_ronlypz00_7036;

																		obj_t BgL_defaultzd2valuezd2_7037;

																		obj_t BgL_getterz00_7038;

																		obj_t BgL_setterz00_7039;

																		bool_t BgL_indexpz00_7040;

																		obj_t BgL_infoz00_7041;

																		BgL_ronlypz00_7036 = BgL_ronlyz00_4121;
																		BgL_defaultzd2valuezd2_7037 =
																			BgL_defz00_4117;
																		BgL_getterz00_7038 = BgL_getz00_4118;
																		BgL_setterz00_7039 = BgL_setz00_4119;
																		BgL_indexpz00_7040 = BgL_indexpz00_4109;
																		BgL_infoz00_7041 = BgL_infoz00_4120;
																		{	/* Eval/evobject.scm 819 */
																			obj_t BgL_newz00_7042;

																			BgL_newz00_7042 =
																				create_struct
																				(BGl_symbol5856z00zz__evobjectz00,
																				(int) (((long) 8)));
																			{	/* Eval/evobject.scm 819 */
																				int BgL_auxz00_11070;

																				BgL_auxz00_11070 = (int) (((long) 7));
																				STRUCT_SET(BgL_newz00_7042,
																					BgL_auxz00_11070, BgL_infoz00_7041);
																			}
																			{	/* Eval/evobject.scm 819 */
																				obj_t BgL_auxz00_11075;

																				int BgL_auxz00_11073;

																				BgL_auxz00_11075 =
																					BBOOL(BgL_indexpz00_7040);
																				BgL_auxz00_11073 = (int) (((long) 6));
																				STRUCT_SET(BgL_newz00_7042,
																					BgL_auxz00_11073, BgL_auxz00_11075);
																			}
																			{	/* Eval/evobject.scm 819 */
																				int BgL_auxz00_11078;

																				BgL_auxz00_11078 = (int) (((long) 5));
																				STRUCT_SET(BgL_newz00_7042,
																					BgL_auxz00_11078, BgL_setterz00_7039);
																			}
																			{	/* Eval/evobject.scm 819 */
																				int BgL_auxz00_11081;

																				BgL_auxz00_11081 = (int) (((long) 4));
																				STRUCT_SET(BgL_newz00_7042,
																					BgL_auxz00_11081, BgL_getterz00_7038);
																			}
																			{	/* Eval/evobject.scm 819 */
																				int BgL_auxz00_11084;

																				BgL_auxz00_11084 = (int) (((long) 3));
																				STRUCT_SET(BgL_newz00_7042,
																					BgL_auxz00_11084,
																					BgL_defaultzd2valuezd2_7037);
																			}
																			{	/* Eval/evobject.scm 819 */
																				obj_t BgL_auxz00_11089;

																				int BgL_auxz00_11087;

																				BgL_auxz00_11089 =
																					BBOOL(BgL_ronlypz00_7036);
																				BgL_auxz00_11087 = (int) (((long) 2));
																				STRUCT_SET(BgL_newz00_7042,
																					BgL_auxz00_11087, BgL_auxz00_11089);
																			}
																			{	/* Eval/evobject.scm 819 */
																				int BgL_auxz00_11092;

																				BgL_auxz00_11092 = (int) (((long) 1));
																				STRUCT_SET(BgL_newz00_7042,
																					BgL_auxz00_11092, BgL_typez00_4116);
																			}
																			{	/* Eval/evobject.scm 819 */
																				int BgL_auxz00_11095;

																				BgL_auxz00_11095 = (int) (((long) 0));
																				STRUCT_SET(BgL_newz00_7042,
																					BgL_auxz00_11095, BgL_idz00_4115);
																			}
																			BgL_sz00_4216 = BgL_newz00_7042;
																	}}
																	if (BgL_indexpz00_4109)
																		{	/* Eval/evobject.scm 822 */
																			obj_t BgL_arg5079z00_4217;

																			{	/* Eval/evobject.scm 822 */
																				obj_t BgL_arg5082z00_4220;

																				obj_t BgL_arg5083z00_4221;

																				obj_t BgL_arg5084z00_4222;

																				{	/* Eval/evobject.scm 822 */
																					obj_t BgL_arg2124z00_7084;

																					{	/* Eval/evobject.scm 822 */
																						obj_t BgL_arg2125z00_7085;

																						obj_t BgL_arg2126z00_7086;

																						{	/* Eval/evobject.scm 822 */
																							obj_t BgL_res5743z00_7091;

																							{	/* Eval/evobject.scm 822 */
																								obj_t BgL_arg5527z00_7090;

																								BgL_arg5527z00_7090 =
																									SYMBOL_TO_STRING
																									(BgL_idz00_4115);
																								BgL_res5743z00_7091 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg5527z00_7090);
																							}
																							BgL_arg2125z00_7085 =
																								BgL_res5743z00_7091;
																						}
																						{	/* Eval/evobject.scm 822 */
																							obj_t BgL_res5744z00_7094;

																							{	/* Eval/evobject.scm 822 */
																								obj_t BgL_symbolz00_7092;

																								BgL_symbolz00_7092 =
																									BGl_symbol5801z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 822 */
																									obj_t BgL_arg5527z00_7093;

																									BgL_arg5527z00_7093 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_7092);
																									BgL_res5744z00_7094 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg5527z00_7093);
																								}
																							}
																							BgL_arg2126z00_7086 =
																								BgL_res5744z00_7094;
																						}
																						{	/* Eval/evobject.scm 822 */
																							obj_t BgL_list2127z00_7087;

																							{	/* Eval/evobject.scm 822 */
																								obj_t BgL_arg2130z00_7088;

																								BgL_arg2130z00_7088 =
																									MAKE_PAIR(BgL_arg2126z00_7086,
																									BNIL);
																								BgL_list2127z00_7087 =
																									MAKE_PAIR(BgL_arg2125z00_7085,
																									BgL_arg2130z00_7088);
																							}
																							BgL_arg2124z00_7084 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list2127z00_7087);
																						}
																					}
																					BgL_arg5082z00_4220 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg2124z00_7084));
																				}
																				BgL_arg5083z00_4221 =
																					BGl_symbol6045z00zz__evobjectz00;
																				BgL_arg5084z00_4222 =
																					BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00
																					();
																				{	/* Eval/evobject.scm 822 */
																					obj_t BgL_newz00_7104;

																					BgL_newz00_7104 =
																						create_struct
																						(BGl_symbol5856z00zz__evobjectz00,
																						(int) (((long) 8)));
																					{	/* Eval/evobject.scm 822 */
																						int BgL_auxz00_11111;

																						BgL_auxz00_11111 =
																							(int) (((long) 7));
																						STRUCT_SET(BgL_newz00_7104,
																							BgL_auxz00_11111, BFALSE);
																					}
																					{	/* Eval/evobject.scm 822 */
																						int BgL_auxz00_11114;

																						BgL_auxz00_11114 =
																							(int) (((long) 6));
																						STRUCT_SET(BgL_newz00_7104,
																							BgL_auxz00_11114, BFALSE);
																					}
																					{	/* Eval/evobject.scm 822 */
																						int BgL_auxz00_11117;

																						BgL_auxz00_11117 =
																							(int) (((long) 5));
																						STRUCT_SET(BgL_newz00_7104,
																							BgL_auxz00_11117, BFALSE);
																					}
																					{	/* Eval/evobject.scm 822 */
																						int BgL_auxz00_11120;

																						BgL_auxz00_11120 =
																							(int) (((long) 4));
																						STRUCT_SET(BgL_newz00_7104,
																							BgL_auxz00_11120, BFALSE);
																					}
																					{	/* Eval/evobject.scm 822 */
																						int BgL_auxz00_11123;

																						BgL_auxz00_11123 =
																							(int) (((long) 3));
																						STRUCT_SET(BgL_newz00_7104,
																							BgL_auxz00_11123,
																							BgL_arg5084z00_4222);
																					}
																					{	/* Eval/evobject.scm 822 */
																						int BgL_auxz00_11126;

																						BgL_auxz00_11126 =
																							(int) (((long) 2));
																						STRUCT_SET(BgL_newz00_7104,
																							BgL_auxz00_11126, BTRUE);
																					}
																					{	/* Eval/evobject.scm 822 */
																						int BgL_auxz00_11129;

																						BgL_auxz00_11129 =
																							(int) (((long) 1));
																						STRUCT_SET(BgL_newz00_7104,
																							BgL_auxz00_11129,
																							BgL_arg5083z00_4221);
																					}
																					{	/* Eval/evobject.scm 822 */
																						int BgL_auxz00_11132;

																						BgL_auxz00_11132 =
																							(int) (((long) 0));
																						STRUCT_SET(BgL_newz00_7104,
																							BgL_auxz00_11132,
																							BgL_arg5082z00_4220);
																					}
																					BgL_arg5079z00_4217 = BgL_newz00_7104;
																			}}
																			{	/* Eval/evobject.scm 821 */
																				obj_t BgL_list5080z00_4218;

																				{	/* Eval/evobject.scm 821 */
																					obj_t BgL_arg5081z00_4219;

																					BgL_arg5081z00_4219 =
																						MAKE_PAIR(BgL_sz00_4216, BNIL);
																					BgL_list5080z00_4218 =
																						MAKE_PAIR(BgL_arg5079z00_4217,
																						BgL_arg5081z00_4219);
																				}
																				return BgL_list5080z00_4218;
																			}
																		}
																	else
																		{	/* Eval/evobject.scm 831 */
																			obj_t BgL_list5085z00_4223;

																			BgL_list5085z00_4223 =
																				MAKE_PAIR(BgL_sz00_4216, BNIL);
																			return BgL_list5085z00_4223;
																		}
																}
														}
												}
											}
										}
									}
								}
						}
					else
						{	/* Eval/evobject.scm 757 */
							obj_t BgL_arg5096z00_4237;

							obj_t BgL_arg5097z00_4238;

							{	/* Eval/evobject.scm 757 */
								obj_t BgL__ortest_1831z00_4240;

								BgL__ortest_1831z00_4240 =
									BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_fz00_135);
								if (CBOOL(BgL__ortest_1831z00_4240))
									{	/* Eval/evobject.scm 757 */
										BgL_arg5096z00_4237 = BgL__ortest_1831z00_4240;
									}
								else
									{	/* Eval/evobject.scm 757 */
										BgL_arg5096z00_4237 = BgL_locz00_134;
									}
							}
							BgL_arg5097z00_4238 = BGl_symbol6033z00zz__evobjectz00;
							return
								BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_arg5096z00_4237,
								BgL_arg5097z00_4238, BGl_string6038z00zz__evobjectz00,
								BgL_fz00_135);
						}
				}
		}
	}



/* eval-parse-class */
	obj_t BGl_evalzd2parsezd2classz00zz__evobjectz00(obj_t BgL_locz00_136,
		obj_t BgL_clausesz00_137)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 839 */
			{	/* Eval/evobject.scm 840 */
				obj_t BgL_locz00_4243;

				{	/* Eval/evobject.scm 840 */
					obj_t BgL__ortest_1839z00_4286;

					BgL__ortest_1839z00_4286 =
						BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_clausesz00_137);
					if (CBOOL(BgL__ortest_1839z00_4286))
						{	/* Eval/evobject.scm 840 */
							BgL_locz00_4243 = BgL__ortest_1839z00_4286;
						}
					else
						{	/* Eval/evobject.scm 840 */
							BgL_locz00_4243 = BgL_locz00_136;
						}
				}
				if (NULLP(BgL_clausesz00_137))
					{	/* Eval/evobject.scm 842 */
						{	/* Eval/evobject.scm 843 */
							int BgL_auxz00_11147;

							BgL_auxz00_11147 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_11147);
						}
						{	/* Eval/evobject.scm 843 */
							int BgL_auxz00_11150;

							BgL_auxz00_11150 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_11150, BNIL);
						}
						return BFALSE;
					}
				else
					{	/* Eval/evobject.scm 842 */
						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausesz00_137))
							{	/* Eval/evobject.scm 847 */
								bool_t BgL_testz00_11155;

								{	/* Eval/evobject.scm 847 */
									obj_t BgL_ezd21460zd2_4276;

									BgL_ezd21460zd2_4276 = CAR(BgL_clausesz00_137);
									if (PAIRP(BgL_ezd21460zd2_4276))
										{	/* Eval/evobject.scm 847 */
											bool_t BgL_testz00_11159;

											{	/* Eval/evobject.scm 847 */
												obj_t BgL_auxz00_11160;

												BgL_auxz00_11160 = CAR(BgL_ezd21460zd2_4276);
												BgL_testz00_11159 = SYMBOLP(BgL_auxz00_11160);
											}
											if (BgL_testz00_11159)
												{	/* Eval/evobject.scm 847 */
													if (NULLP(CDR(BgL_ezd21460zd2_4276)))
														{	/* Eval/evobject.scm 847 */
															BgL_testz00_11155 = ((bool_t) 1);
														}
													else
														{	/* Eval/evobject.scm 847 */
															BgL_testz00_11155 = ((bool_t) 0);
														}
												}
											else
												{	/* Eval/evobject.scm 847 */
													BgL_testz00_11155 = ((bool_t) 0);
												}
										}
									else
										{	/* Eval/evobject.scm 847 */
											BgL_testz00_11155 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_11155)
									{	/* Eval/evobject.scm 850 */
										obj_t BgL_val0_1973z00_4249;

										obj_t BgL_val1_1974z00_4250;

										{	/* Eval/evobject.scm 850 */
											obj_t BgL_arg5104z00_4251;

											obj_t BgL_arg5105z00_4252;

											BgL_arg5104z00_4251 = BGl_symbol5884z00zz__evobjectz00;
											{	/* Eval/evobject.scm 850 */
												obj_t BgL_arg5106z00_4253;

												obj_t BgL_arg5107z00_4254;

												BgL_arg5106z00_4253 =
													MAKE_PAIR(BGl_symbol5832z00zz__evobjectz00, BNIL);
												{	/* Eval/evobject.scm 850 */
													obj_t BgL_arg5111z00_4258;

													obj_t BgL_arg5112z00_4259;

													{	/* Eval/evobject.scm 850 */
														obj_t BgL_pairz00_7159;

														BgL_pairz00_7159 = BgL_clausesz00_137;
														BgL_arg5111z00_4258 = CAR(CAR(BgL_pairz00_7159));
													}
													{	/* Eval/evobject.scm 850 */
														obj_t BgL_list5113z00_4260;

														BgL_list5113z00_4260 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg5112z00_4259 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol5832z00zz__evobjectz00,
															BgL_list5113z00_4260);
													}
													BgL_arg5107z00_4254 =
														MAKE_PAIR(BgL_arg5111z00_4258, BgL_arg5112z00_4259);
												}
												{	/* Eval/evobject.scm 850 */
													obj_t BgL_list5109z00_4256;

													{	/* Eval/evobject.scm 850 */
														obj_t BgL_arg5110z00_4257;

														BgL_arg5110z00_4257 = MAKE_PAIR(BNIL, BNIL);
														BgL_list5109z00_4256 =
															MAKE_PAIR(BgL_arg5107z00_4254,
															BgL_arg5110z00_4257);
													}
													BgL_arg5105z00_4252 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg5106z00_4253, BgL_list5109z00_4256);
												}
											}
											BgL_val0_1973z00_4249 =
												MAKE_PAIR(BgL_arg5104z00_4251, BgL_arg5105z00_4252);
										}
										{	/* Eval/evobject.scm 851 */
											obj_t BgL_arg5115z00_4262;

											BgL_arg5115z00_4262 = CDR(BgL_clausesz00_137);
											{	/* Eval/evobject.scm 852 */
												obj_t BgL_zc3anonymousza35117ze3z83_7954;

												BgL_zc3anonymousza35117ze3z83_7954 =
													make_fx_procedure
													(BGl_zc3anonymousza35117ze3z83zz__evobjectz00,
													(int) (((long) 1)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza35117ze3z83_7954,
													(int) (((long) 0)), BgL_locz00_4243);
												{	/* Eval/evobject.scm 851 */
													obj_t BgL_list5116z00_4263;

													BgL_list5116z00_4263 =
														MAKE_PAIR(BgL_arg5115z00_4262, BNIL);
													BgL_val1_1974z00_4250 =
														BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
														(BgL_zc3anonymousza35117ze3z83_7954,
														BgL_list5116z00_4263);
										}}}
										{	/* Eval/evobject.scm 850 */
											int BgL_auxz00_11184;

											BgL_auxz00_11184 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_11184);
										}
										{	/* Eval/evobject.scm 850 */
											int BgL_auxz00_11187;

											BgL_auxz00_11187 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_11187,
												BgL_val1_1974z00_4250);
										}
										return BgL_val0_1973z00_4249;
									}
								else
									{	/* Eval/evobject.scm 855 */
										obj_t BgL_val1_1976z00_4268;

										{	/* Eval/evobject.scm 857 */
											obj_t BgL_zc3anonymousza35120ze3z83_7955;

											BgL_zc3anonymousza35120ze3z83_7955 =
												make_fx_procedure
												(BGl_zc3anonymousza35120ze3z83zz__evobjectz00,
												(int) (((long) 1)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza35120ze3z83_7955,
												(int) (((long) 0)), BgL_locz00_4243);
											{	/* Eval/evobject.scm 856 */
												obj_t BgL_list5119z00_4270;

												BgL_list5119z00_4270 =
													MAKE_PAIR(BgL_clausesz00_137, BNIL);
												BgL_val1_1976z00_4268 =
													BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
													(BgL_zc3anonymousza35120ze3z83_7955,
													BgL_list5119z00_4270);
										}}
										{	/* Eval/evobject.scm 855 */
											int BgL_auxz00_11197;

											BgL_auxz00_11197 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_11197);
										}
										{	/* Eval/evobject.scm 855 */
											int BgL_auxz00_11200;

											BgL_auxz00_11200 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_11200,
												BgL_val1_1976z00_4268);
										}
										return BFALSE;
									}
							}
						else
							{	/* Eval/evobject.scm 845 */
								obj_t BgL_arg5126z00_4282;

								obj_t BgL_arg5127z00_4283;

								{	/* Eval/evobject.scm 845 */
									obj_t BgL__ortest_1840z00_4285;

									BgL__ortest_1840z00_4285 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_clausesz00_137);
									if (CBOOL(BgL__ortest_1840z00_4285))
										{	/* Eval/evobject.scm 845 */
											BgL_arg5126z00_4282 = BgL__ortest_1840z00_4285;
										}
									else
										{	/* Eval/evobject.scm 845 */
											BgL_arg5126z00_4282 = BgL_locz00_4243;
										}
								}
								BgL_arg5127z00_4283 = BGl_symbol6033z00zz__evobjectz00;
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_arg5126z00_4282,
									BgL_arg5127z00_4283, BGl_string6047z00zz__evobjectz00,
									BgL_clausesz00_137);
							}
					}
			}
		}
	}



/* <anonymous:5117> */
	obj_t BGl_zc3anonymousza35117ze3z83zz__evobjectz00(obj_t BgL_envz00_7956,
		obj_t BgL_fz00_7958)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 851 */
			{	/* Eval/evobject.scm 852 */
				obj_t BgL_locz00_7957;

				BgL_locz00_7957 = PROCEDURE_REF(BgL_envz00_7956, (int) (((long) 0)));
				{
					obj_t BgL_fz00_4264;

					BgL_fz00_4264 = BgL_fz00_7958;
					return
						BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(BgL_locz00_7957,
						BgL_fz00_4264);
				}
			}
		}
	}



/* <anonymous:5120> */
	obj_t BGl_zc3anonymousza35120ze3z83zz__evobjectz00(obj_t BgL_envz00_7959,
		obj_t BgL_fz00_7961)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 856 */
			{	/* Eval/evobject.scm 857 */
				obj_t BgL_locz00_7960;

				BgL_locz00_7960 = PROCEDURE_REF(BgL_envz00_7959, (int) (((long) 0)));
				{
					obj_t BgL_fz00_4271;

					BgL_fz00_4271 = BgL_fz00_7961;
					return
						BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(BgL_locz00_7960,
						BgL_fz00_4271);
				}
			}
		}
	}



/* eval-class */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2classzd2zz__evobjectz00(obj_t BgL_idz00_139,
		bool_t BgL_abstractz00_140, obj_t BgL_clausesz00_141, obj_t BgL_srcz00_142,
		obj_t BgL_modz00_143)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 878 */
			{	/* Eval/evobject.scm 879 */
				obj_t BgL_cidz00_4290;

				BgL_cidz00_4290 =
					BGl_decomposezd2identzd2zz__evobjectz00(BgL_idz00_139);
				{	/* Eval/evobject.scm 881 */
					obj_t BgL_sidz00_4291;

					{	/* Eval/evobject.scm 881 */
						int BgL_auxz00_11214;

						BgL_auxz00_11214 = (int) (((long) 1));
						BgL_sidz00_4291 = BGL_MVALUES_VAL(BgL_auxz00_11214);
					}
					{	/* Eval/evobject.scm 881 */
						obj_t BgL_locz00_4292;

						obj_t BgL_superz00_4293;

						BgL_locz00_4292 =
							BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_srcz00_142);
						{	/* Eval/evobject.scm 882 */
							obj_t BgL_arg5224z00_4467;

							if (CBOOL(BgL_sidz00_4291))
								{	/* Eval/evobject.scm 882 */
									BgL_arg5224z00_4467 = BgL_sidz00_4291;
								}
							else
								{	/* Eval/evobject.scm 882 */
									BgL_arg5224z00_4467 = BGl_symbol6048z00zz__evobjectz00;
								}
							BgL_superz00_4293 =
								BGl_findzd2classzd2zz__objectz00(BgL_arg5224z00_4467);
						}
						if (BGl_classzf3zf3zz__objectz00(BgL_superz00_4293))
							{	/* Eval/evobject.scm 887 */
								obj_t BgL_constructorz00_4295;

								BgL_constructorz00_4295 =
									BGl_evalzd2parsezd2classz00zz__evobjectz00(BgL_locz00_4292,
									BgL_clausesz00_141);
								{	/* Eval/evobject.scm 889 */
									obj_t BgL_slotsz00_4296;

									{	/* Eval/evobject.scm 889 */
										int BgL_auxz00_11224;

										BgL_auxz00_11224 = (int) (((long) 1));
										BgL_slotsz00_4296 = BGL_MVALUES_VAL(BgL_auxz00_11224);
									}
									{	/* Eval/evobject.scm 889 */
										obj_t BgL_superzd2slotszd2_4297;

										BgL_superzd2slotszd2_4297 =
											BGl_classzd2allzd2slotsz00zz__evobjectz00
											(BgL_superz00_4293);
										{	/* Eval/evobject.scm 889 */
											obj_t BgL_nativez00_4298;

											{
												obj_t BgL_classz00_7180;

												BgL_classz00_7180 = BgL_superz00_4293;
											BgL_findzd2superzd2nativezd2classzd2_7179:
												if (BGl_evalzd2classzf3z21zz__objectz00
													(BgL_classz00_7180))
													{
														obj_t BgL_classz00_11230;

														BgL_classz00_11230 =
															BGl_classzd2superzd2zz__objectz00
															(BgL_classz00_7180);
														BgL_classz00_7180 = BgL_classz00_11230;
														goto BgL_findzd2superzd2nativezd2classzd2_7179;
													}
												else
													{	/* Eval/evobject.scm 890 */
														BgL_nativez00_4298 = BgL_classz00_7180;
													}
											}
											{	/* Eval/evobject.scm 890 */
												obj_t BgL_nativezd2slotszd2_4299;

												BgL_nativezd2slotszd2_4299 =
													BGl_classzd2allzd2slotsz00zz__evobjectz00
													(BgL_nativez00_4298);
												{	/* Eval/evobject.scm 891 */
													obj_t BgL_allzd2slotszd2_4300;

													BgL_allzd2slotszd2_4300 =
														bgl_append2(BgL_superzd2slotszd2_4297,
														BgL_slotsz00_4296);
													{	/* Eval/evobject.scm 892 */
														obj_t BgL_offsetz00_4301;

														if (BGl_evalzd2classzf3z21zz__objectz00
															(BgL_superz00_4293))
															{	/* Eval/evobject.scm 893 */
																BgL_offsetz00_4301 =
																	BGl_classzd2evdatazd2zz__objectz00
																	(BgL_superz00_4293);
															}
														else
															{	/* Eval/evobject.scm 893 */
																BgL_offsetz00_4301 = BINT(((long) 0));
															}
														{	/* Eval/evobject.scm 893 */
															obj_t BgL_plainzd2slotszd2_4302;

															BgL_plainzd2slotszd2_4302 =
																BGl_filterz00zz__r4_control_features_6_9z00
																(BGl_proc6050z00zz__evobjectz00,
																BgL_slotsz00_4296);
															{	/* Eval/evobject.scm 896 */
																long BgL_siza7eza7_4303;

																BgL_siza7eza7_4303 =
																	bgl_list_length(BgL_plainzd2slotszd2_4302);
																{	/* Eval/evobject.scm 899 */

																	{
																		obj_t BgL_slotsz00_4305;

																		BgL_slotsz00_4305 = BgL_allzd2slotszd2_4300;
																	BgL_zc3anonymousza35131ze3z83_4306:
																		if (PAIRP(BgL_slotsz00_4305))
																			{	/* Eval/evobject.scm 903 */
																				obj_t BgL_sz00_4308;

																				BgL_sz00_4308 = CAR(BgL_slotsz00_4305);
																				{	/* Eval/evobject.scm 904 */
																					obj_t BgL_g1979z00_4309;

																					BgL_g1979z00_4309 =
																						CDR(BgL_slotsz00_4305);
																					{
																						obj_t BgL_l1977z00_4311;

																						BgL_l1977z00_4311 =
																							BgL_g1979z00_4309;
																					BgL_zc3anonymousza35133ze3z83_4312:
																						if (PAIRP(BgL_l1977z00_4311))
																							{	/* Eval/evobject.scm 911 */
																								{	/* Eval/evobject.scm 905 */
																									obj_t BgL_tz00_4314;

																									BgL_tz00_4314 =
																										CAR(BgL_l1977z00_4311);
																									if (
																										(STRUCT_REF(BgL_sz00_4308,
																												(int) (((long) 0))) ==
																											STRUCT_REF(BgL_tz00_4314,
																												(int) (((long) 0)))))
																										{	/* Eval/evobject.scm 905 */
																											BGl_evcompilezd2errorzd2zz__evcompilez00
																												(BgL_locz00_4292,
																												BGl_symbol6033z00zz__evobjectz00,
																												BGl_string6051z00zz__evobjectz00,
																												STRUCT_REF
																												(BgL_sz00_4308,
																													(int) (((long) 0))));
																										}
																									else
																										{	/* Eval/evobject.scm 905 */
																											BFALSE;
																										}
																								}
																								{
																									obj_t BgL_l1977z00_11256;

																									BgL_l1977z00_11256 =
																										CDR(BgL_l1977z00_4311);
																									BgL_l1977z00_4311 =
																										BgL_l1977z00_11256;
																									goto
																										BgL_zc3anonymousza35133ze3z83_4312;
																								}
																							}
																						else
																							{	/* Eval/evobject.scm 911 */
																								((bool_t) 1);
																							}
																					}
																				}
																				{
																					obj_t BgL_slotsz00_11258;

																					BgL_slotsz00_11258 =
																						CDR(BgL_slotsz00_4305);
																					BgL_slotsz00_4305 =
																						BgL_slotsz00_11258;
																					goto
																						BgL_zc3anonymousza35131ze3z83_4306;
																				}
																			}
																		else
																			{	/* Eval/evobject.scm 902 */
																				((bool_t) 0);
																			}
																	}
																	{	/* Eval/evobject.scm 913 */
																		obj_t BgL_identsz00_4325;

																		{	/* Eval/evobject.scm 913 */
																			obj_t BgL_list5219z00_4460;

																			BgL_list5219z00_4460 =
																				MAKE_PAIR(BgL_cidz00_4290, BNIL);
																			BgL_identsz00_4325 = BgL_list5219z00_4460;
																		}
																		{	/* Eval/evobject.scm 915 */
																			obj_t BgL_arg5143z00_4326;

																			{	/* Eval/evobject.scm 915 */
																				obj_t BgL_arg5145z00_4329;

																				obj_t BgL_arg5146z00_4330;

																				BgL_arg5145z00_4329 =
																					BGl_symbol5787z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 915 */
																					obj_t BgL_list5147z00_4331;

																					{	/* Eval/evobject.scm 915 */
																						obj_t BgL_arg5148z00_4332;

																						BgL_arg5148z00_4332 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list5147z00_4331 =
																							MAKE_PAIR(BUNSPEC,
																							BgL_arg5148z00_4332);
																					}
																					BgL_arg5146z00_4330 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_cidz00_4290,
																						BgL_list5147z00_4331);
																				}
																				BgL_arg5143z00_4326 =
																					MAKE_PAIR(BgL_arg5145z00_4329,
																					BgL_arg5146z00_4330);
																			}
																			{	/* Eval/eval.scm 81 */
																				obj_t BgL_envz00_4328;

																				BgL_envz00_4328 =
																					BGl_defaultzd2environmentzd2zz__evalz00
																					();
																				{	/* Eval/eval.scm 81 */

																					BGl_evalz12z12zz__evalz00
																						(BgL_arg5143z00_4326,
																						BgL_envz00_4328);
																				}
																			}
																		}
																		{	/* Eval/evobject.scm 917 */
																			obj_t BgL_e1z00_4333;

																			obj_t BgL_e2z00_4334;

																			{	/* Eval/evobject.scm 917 */
																				obj_t BgL_arg5178z00_4388;

																				BgL_arg5178z00_4388 =
																					BGl_filterz00zz__r4_control_features_6_9z00
																					(BGl_slotzd2virtualpzd2envz00zz__evobjectz00,
																					BgL_slotsz00_4296);
																				{	/* Eval/evobject.scm 918 */
																					obj_t
																						BgL_zc3anonymousza35180ze3z83_7964;
																					BgL_zc3anonymousza35180ze3z83_7964 =
																						make_fx_procedure
																						(BGl_zc3anonymousza35180ze3z83zz__evobjectz00,
																						(int) (((long) 1)),
																						(int) (((long) 2)));
																					PROCEDURE_SET
																						(BgL_zc3anonymousza35180ze3z83_7964,
																						(int) (((long) 0)),
																						BgL_locz00_4292);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza35180ze3z83_7964,
																						(int) (((long) 1)),
																						BgL_cidz00_4290);
																					{	/* Eval/evobject.scm 917 */
																						obj_t BgL_list5179z00_4389;

																						BgL_list5179z00_4389 =
																							MAKE_PAIR(BgL_arg5178z00_4388,
																							BNIL);
																						BgL_e1z00_4333 =
																							BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
																							(BgL_zc3anonymousza35180ze3z83_7964,
																							BgL_list5179z00_4389);
																			}}}
																			{	/* Eval/evobject.scm 920 */
																				obj_t BgL_arg5182z00_4394;

																				{	/* Eval/evobject.scm 923 */
																					obj_t BgL_list5186z00_4400;

																					BgL_list5186z00_4400 =
																						MAKE_PAIR(BgL_offsetz00_4301, BNIL);
																					BgL_arg5182z00_4394 =
																						BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																						((int) (BgL_siza7eza7_4303),
																						BgL_list5186z00_4400);
																				}
																				{	/* Eval/evobject.scm 921 */
																					obj_t
																						BgL_zc3anonymousza35185ze3z83_7963;
																					BgL_zc3anonymousza35185ze3z83_7963 =
																						make_fx_procedure
																						(BGl_zc3anonymousza35185ze3z83zz__evobjectz00,
																						(int) (((long) 2)),
																						(int) (((long) 2)));
																					PROCEDURE_SET
																						(BgL_zc3anonymousza35185ze3z83_7963,
																						(int) (((long) 0)),
																						BgL_locz00_4292);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza35185ze3z83_7963,
																						(int) (((long) 1)),
																						BgL_cidz00_4290);
																					{	/* Eval/evobject.scm 920 */
																						obj_t BgL_list5183z00_4395;

																						{	/* Eval/evobject.scm 920 */
																							obj_t BgL_arg5184z00_4396;

																							BgL_arg5184z00_4396 =
																								MAKE_PAIR(BgL_arg5182z00_4394,
																								BNIL);
																							BgL_list5183z00_4395 =
																								MAKE_PAIR
																								(BgL_plainzd2slotszd2_4302,
																								BgL_arg5184z00_4396);
																						}
																						BgL_e2z00_4334 =
																							BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
																							(BgL_zc3anonymousza35185ze3z83_7963,
																							BgL_list5183z00_4395);
																			}}}
																			{
																				obj_t BgL_l1980z00_7209;

																				BgL_l1980z00_7209 = BgL_e1z00_4333;
																			BgL_zc3anonymousza35149ze3z83_7208:
																				if (PAIRP(BgL_l1980z00_7209))
																					{	/* Eval/evobject.scm 924 */
																						BGl_evalz12z12zz__evalz00(CAR
																							(BgL_l1980z00_7209),
																							BgL_modz00_143);
																						{
																							obj_t BgL_l1980z00_11294;

																							BgL_l1980z00_11294 =
																								CDR(BgL_l1980z00_7209);
																							BgL_l1980z00_7209 =
																								BgL_l1980z00_11294;
																							goto
																								BgL_zc3anonymousza35149ze3z83_7208;
																						}
																					}
																				else
																					{	/* Eval/evobject.scm 924 */
																						((bool_t) 1);
																					}
																			}
																			{
																				obj_t BgL_l1982z00_7233;

																				BgL_l1982z00_7233 = BgL_e2z00_4334;
																			BgL_zc3anonymousza35152ze3z83_7232:
																				if (PAIRP(BgL_l1982z00_7233))
																					{	/* Eval/evobject.scm 925 */
																						BGl_evalz12z12zz__evalz00(CAR
																							(BgL_l1982z00_7233),
																							BgL_modz00_143);
																						{
																							obj_t BgL_l1982z00_11300;

																							BgL_l1982z00_11300 =
																								CDR(BgL_l1982z00_7233);
																							BgL_l1982z00_7233 =
																								BgL_l1982z00_11300;
																							goto
																								BgL_zc3anonymousza35152ze3z83_7232;
																						}
																					}
																				else
																					{	/* Eval/evobject.scm 925 */
																						((bool_t) 1);
																					}
																			}
																			{	/* Eval/evobject.scm 926 */
																				obj_t BgL_arg5155z00_4349;

																				if (NULLP(BgL_e2z00_4334))
																					{	/* Eval/evobject.scm 926 */
																						BgL_arg5155z00_4349 = BNIL;
																					}
																				else
																					{	/* Eval/evobject.scm 926 */
																						obj_t BgL_head1986z00_4352;

																						{	/* Eval/evobject.scm 926 */
																							obj_t BgL_arg5163z00_4365;

																							{	/* Eval/evobject.scm 926 */
																								obj_t BgL_pairz00_7258;

																								BgL_pairz00_7258 =
																									CAR(BgL_e2z00_4334);
																								BgL_arg5163z00_4365 =
																									CAR(CAR(CDR
																										(BgL_pairz00_7258)));
																							}
																							BgL_head1986z00_4352 =
																								MAKE_PAIR(BgL_arg5163z00_4365,
																								BNIL);
																						}
																						{	/* Eval/evobject.scm 926 */
																							obj_t BgL_g1989z00_4353;

																							BgL_g1989z00_4353 =
																								CDR(BgL_e2z00_4334);
																							{
																								obj_t BgL_l1984z00_7268;

																								obj_t BgL_tail1987z00_7269;

																								BgL_l1984z00_7268 =
																									BgL_g1989z00_4353;
																								BgL_tail1987z00_7269 =
																									BgL_head1986z00_4352;
																							BgL_zc3anonymousza35157ze3z83_7267:
																								if (NULLP
																									(BgL_l1984z00_7268))
																									{	/* Eval/evobject.scm 926 */
																										BgL_arg5155z00_4349 =
																											BgL_head1986z00_4352;
																									}
																								else
																									{	/* Eval/evobject.scm 926 */
																										obj_t
																											BgL_newtail1988z00_7277;
																										{	/* Eval/evobject.scm 926 */
																											obj_t BgL_arg5160z00_7278;

																											{	/* Eval/evobject.scm 926 */
																												obj_t BgL_pairz00_7284;

																												BgL_pairz00_7284 =
																													CAR
																													(BgL_l1984z00_7268);
																												BgL_arg5160z00_7278 =
																													CAR(CAR(CDR
																														(BgL_pairz00_7284)));
																											}
																											BgL_newtail1988z00_7277 =
																												MAKE_PAIR
																												(BgL_arg5160z00_7278,
																												BNIL);
																										}
																										SET_CDR
																											(BgL_tail1987z00_7269,
																											BgL_newtail1988z00_7277);
																										{
																											obj_t
																												BgL_tail1987z00_11320;
																											obj_t BgL_l1984z00_11318;

																											BgL_l1984z00_11318 =
																												CDR(BgL_l1984z00_7268);
																											BgL_tail1987z00_11320 =
																												BgL_newtail1988z00_7277;
																											BgL_tail1987z00_7269 =
																												BgL_tail1987z00_11320;
																											BgL_l1984z00_7268 =
																												BgL_l1984z00_11318;
																											goto
																												BgL_zc3anonymousza35157ze3z83_7267;
																										}
																									}
																							}
																						}
																					}
																				BgL_identsz00_4325 =
																					bgl_append2(BgL_arg5155z00_4349,
																					BgL_identsz00_4325);
																			}
																			{	/* Eval/evobject.scm 927 */
																				obj_t BgL_arg5166z00_4368;

																				if (NULLP(BgL_e1z00_4333))
																					{	/* Eval/evobject.scm 927 */
																						BgL_arg5166z00_4368 = BNIL;
																					}
																				else
																					{	/* Eval/evobject.scm 927 */
																						obj_t BgL_head1992z00_4371;

																						{	/* Eval/evobject.scm 927 */
																							obj_t BgL_arg5174z00_4384;

																							{	/* Eval/evobject.scm 927 */
																								obj_t BgL_pairz00_7337;

																								BgL_pairz00_7337 =
																									CAR(BgL_e1z00_4333);
																								BgL_arg5174z00_4384 =
																									CAR(CAR(CDR
																										(BgL_pairz00_7337)));
																							}
																							BgL_head1992z00_4371 =
																								MAKE_PAIR(BgL_arg5174z00_4384,
																								BNIL);
																						}
																						{	/* Eval/evobject.scm 927 */
																							obj_t BgL_g1995z00_4372;

																							BgL_g1995z00_4372 =
																								CDR(BgL_e1z00_4333);
																							{
																								obj_t BgL_l1990z00_7347;

																								obj_t BgL_tail1993z00_7348;

																								BgL_l1990z00_7347 =
																									BgL_g1995z00_4372;
																								BgL_tail1993z00_7348 =
																									BgL_head1992z00_4371;
																							BgL_zc3anonymousza35168ze3z83_7346:
																								if (NULLP
																									(BgL_l1990z00_7347))
																									{	/* Eval/evobject.scm 927 */
																										BgL_arg5166z00_4368 =
																											BgL_head1992z00_4371;
																									}
																								else
																									{	/* Eval/evobject.scm 927 */
																										obj_t
																											BgL_newtail1994z00_7356;
																										{	/* Eval/evobject.scm 927 */
																											obj_t BgL_arg5171z00_7357;

																											{	/* Eval/evobject.scm 927 */
																												obj_t BgL_pairz00_7363;

																												BgL_pairz00_7363 =
																													CAR
																													(BgL_l1990z00_7347);
																												BgL_arg5171z00_7357 =
																													CAR(CAR(CDR
																														(BgL_pairz00_7363)));
																											}
																											BgL_newtail1994z00_7356 =
																												MAKE_PAIR
																												(BgL_arg5171z00_7357,
																												BNIL);
																										}
																										SET_CDR
																											(BgL_tail1993z00_7348,
																											BgL_newtail1994z00_7356);
																										{
																											obj_t
																												BgL_tail1993z00_11340;
																											obj_t BgL_l1990z00_11338;

																											BgL_l1990z00_11338 =
																												CDR(BgL_l1990z00_7347);
																											BgL_tail1993z00_11340 =
																												BgL_newtail1994z00_7356;
																											BgL_tail1993z00_7348 =
																												BgL_tail1993z00_11340;
																											BgL_l1990z00_7347 =
																												BgL_l1990z00_11338;
																											goto
																												BgL_zc3anonymousza35168ze3z83_7346;
																										}
																									}
																							}
																						}
																					}
																				BgL_identsz00_4325 =
																					bgl_append2(BgL_arg5166z00_4368,
																					BgL_identsz00_4325);
																			}
																		}
																		{	/* Eval/evobject.scm 929 */
																			obj_t BgL_ez00_4402;

																			{	/* Eval/evobject.scm 930 */
																				obj_t
																					BgL_zc3anonymousza35203ze3z83_7962;
																				BgL_zc3anonymousza35203ze3z83_7962 =
																					make_fx_procedure
																					(BGl_zc3anonymousza35203ze3z83zz__evobjectz00,
																					(int) (((long) 1)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3anonymousza35203ze3z83_7962,
																					(int) (((long) 0)), BgL_locz00_4292);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza35203ze3z83_7962,
																					(int) (((long) 1)), BgL_cidz00_4290);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza35203ze3z83_7962,
																					(int) (((long) 2)),
																					BgL_superz00_4293);
																				{	/* Eval/evobject.scm 929 */
																					obj_t BgL_list5202z00_4430;

																					BgL_list5202z00_4430 =
																						MAKE_PAIR(BgL_superzd2slotszd2_4297,
																						BNIL);
																					BgL_ez00_4402 =
																						BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
																						(BgL_zc3anonymousza35203ze3z83_7962,
																						BgL_list5202z00_4430);
																			}}
																			{
																				obj_t BgL_l1996z00_7415;

																				BgL_l1996z00_7415 = BgL_ez00_4402;
																			BgL_zc3anonymousza35187ze3z83_7414:
																				if (PAIRP(BgL_l1996z00_7415))
																					{	/* Eval/evobject.scm 933 */
																						BGl_evalz12z12zz__evalz00(CAR
																							(BgL_l1996z00_7415),
																							BgL_modz00_143);
																						{
																							obj_t BgL_l1996z00_11357;

																							BgL_l1996z00_11357 =
																								CDR(BgL_l1996z00_7415);
																							BgL_l1996z00_7415 =
																								BgL_l1996z00_11357;
																							goto
																								BgL_zc3anonymousza35187ze3z83_7414;
																						}
																					}
																				else
																					{	/* Eval/evobject.scm 933 */
																						((bool_t) 1);
																					}
																			}
																			{	/* Eval/evobject.scm 934 */
																				obj_t BgL_arg5190z00_4410;

																				if (NULLP(BgL_ez00_4402))
																					{	/* Eval/evobject.scm 934 */
																						BgL_arg5190z00_4410 = BNIL;
																					}
																				else
																					{	/* Eval/evobject.scm 934 */
																						obj_t BgL_head2000z00_4413;

																						{	/* Eval/evobject.scm 934 */
																							obj_t BgL_arg5198z00_4426;

																							{	/* Eval/evobject.scm 934 */
																								obj_t BgL_pairz00_7440;

																								BgL_pairz00_7440 =
																									CAR(BgL_ez00_4402);
																								BgL_arg5198z00_4426 =
																									CAR(CDR(BgL_pairz00_7440));
																							}
																							BgL_head2000z00_4413 =
																								MAKE_PAIR(BgL_arg5198z00_4426,
																								BNIL);
																						}
																						{	/* Eval/evobject.scm 934 */
																							obj_t BgL_g2003z00_4414;

																							BgL_g2003z00_4414 =
																								CDR(BgL_ez00_4402);
																							{
																								obj_t BgL_l1998z00_7448;

																								obj_t BgL_tail2001z00_7449;

																								BgL_l1998z00_7448 =
																									BgL_g2003z00_4414;
																								BgL_tail2001z00_7449 =
																									BgL_head2000z00_4413;
																							BgL_zc3anonymousza35192ze3z83_7447:
																								if (NULLP
																									(BgL_l1998z00_7448))
																									{	/* Eval/evobject.scm 934 */
																										BgL_arg5190z00_4410 =
																											BgL_head2000z00_4413;
																									}
																								else
																									{	/* Eval/evobject.scm 934 */
																										obj_t
																											BgL_newtail2002z00_7457;
																										{	/* Eval/evobject.scm 934 */
																											obj_t BgL_arg5195z00_7458;

																											{	/* Eval/evobject.scm 934 */
																												obj_t BgL_pairz00_7464;

																												BgL_pairz00_7464 =
																													CAR
																													(BgL_l1998z00_7448);
																												BgL_arg5195z00_7458 =
																													CAR(CDR
																													(BgL_pairz00_7464));
																											}
																											BgL_newtail2002z00_7457 =
																												MAKE_PAIR
																												(BgL_arg5195z00_7458,
																												BNIL);
																										}
																										SET_CDR
																											(BgL_tail2001z00_7449,
																											BgL_newtail2002z00_7457);
																										{
																											obj_t
																												BgL_tail2001z00_11375;
																											obj_t BgL_l1998z00_11373;

																											BgL_l1998z00_11373 =
																												CDR(BgL_l1998z00_7448);
																											BgL_tail2001z00_11375 =
																												BgL_newtail2002z00_7457;
																											BgL_tail2001z00_7449 =
																												BgL_tail2001z00_11375;
																											BgL_l1998z00_7448 =
																												BgL_l1998z00_11373;
																											goto
																												BgL_zc3anonymousza35192ze3z83_7447;
																										}
																									}
																							}
																						}
																					}
																				BgL_identsz00_4325 =
																					bgl_append2(BgL_arg5190z00_4410,
																					BgL_identsz00_4325);
																			}
																		}
																		{	/* Eval/evobject.scm 936 */
																			obj_t BgL_ez00_4434;

																			BgL_ez00_4434 =
																				BGl_evalzd2classzd2predicatez00zz__evobjectz00
																				(BgL_locz00_4292, BgL_cidz00_4290);
																			BGl_evalz12z12zz__evalz00(BgL_ez00_4434,
																				BgL_modz00_143);
																			{	/* Eval/evobject.scm 938 */
																				obj_t BgL_arg5204z00_4435;

																				{	/* Eval/evobject.scm 938 */
																					obj_t BgL_pairz00_7509;

																					BgL_pairz00_7509 = BgL_ez00_4434;
																					BgL_arg5204z00_4435 =
																						CAR(CAR(CDR(BgL_pairz00_7509)));
																				}
																				BgL_identsz00_4325 =
																					MAKE_PAIR(BgL_arg5204z00_4435,
																					BgL_identsz00_4325);
																			}
																		}
																		if (BgL_abstractz00_140)
																			{	/* Eval/evobject.scm 940 */
																				BFALSE;
																			}
																		else
																			{	/* Eval/evobject.scm 940 */
																				{	/* Eval/evobject.scm 942 */
																					obj_t BgL_ez00_4436;

																					BgL_ez00_4436 =
																						BGl_evalzd2classzd2nilz00zz__evobjectz00
																						(BgL_locz00_4292, BgL_cidz00_4290,
																						BgL_superz00_4293,
																						BgL_nativez00_4298);
																					BGl_evalz12z12zz__evalz00
																						(BgL_ez00_4436, BgL_modz00_143);
																					{	/* Eval/evobject.scm 944 */
																						obj_t BgL_arg5205z00_4437;

																						{	/* Eval/evobject.scm 944 */
																							obj_t BgL_pairz00_7515;

																							BgL_pairz00_7515 = BgL_ez00_4436;
																							BgL_arg5205z00_4437 =
																								CAR(CAR(CDR(BgL_pairz00_7515)));
																						}
																						BgL_identsz00_4325 =
																							MAKE_PAIR(BgL_arg5205z00_4437,
																							BgL_identsz00_4325);
																					}
																				}
																				{	/* Eval/evobject.scm 946 */
																					obj_t BgL_ez00_4438;

																					{	/* Eval/evobject.scm 948 */
																						obj_t BgL_arg5207z00_4440;

																						if (CBOOL(BgL_constructorz00_4295))
																							{	/* Eval/evobject.scm 948 */
																								BgL_arg5207z00_4440 =
																									BgL_constructorz00_4295;
																							}
																						else
																							{
																								obj_t BgL_cz00_7522;

																								BgL_cz00_7522 =
																									BgL_superz00_4293;
																							BgL_findzd2classzd2constructorz00_7521:
																								{	/* Eval/evobject.scm 949 */
																									obj_t BgL_constz00_7526;

																									BgL_constz00_7526 =
																										BGl_classzd2constructorzd2zz__objectz00
																										(BgL_cz00_7522);
																									if (CBOOL(BgL_constz00_7526))
																										{	/* Eval/evobject.scm 949 */
																											BgL_arg5207z00_4440 =
																												BgL_constz00_7526;
																										}
																									else
																										{	/* Eval/evobject.scm 949 */
																											obj_t BgL_sz00_7527;

																											BgL_sz00_7527 =
																												BGl_classzd2superzd2zz__objectz00
																												(BgL_cz00_7522);
																											if (BGl_classzf3zf3zz__objectz00(BgL_sz00_7527))
																												{
																													obj_t BgL_cz00_11398;

																													BgL_cz00_11398 =
																														BgL_sz00_7527;
																													BgL_cz00_7522 =
																														BgL_cz00_11398;
																													goto
																														BgL_findzd2classzd2constructorz00_7521;
																												}
																											else
																												{	/* Eval/evobject.scm 949 */
																													BgL_arg5207z00_4440 =
																														BFALSE;
																												}
																										}
																								}
																							}
																						BgL_ez00_4438 =
																							BGl_evalzd2makezd2classz00zz__evobjectz00
																							(BgL_locz00_4292, BgL_cidz00_4290,
																							BgL_slotsz00_4296,
																							BgL_arg5207z00_4440,
																							BgL_superz00_4293,
																							BgL_superzd2slotszd2_4297,
																							BgL_nativez00_4298,
																							BgL_nativezd2slotszd2_4299);
																					}
																					BGl_evalz12z12zz__evalz00
																						(BgL_ez00_4438, BgL_modz00_143);
																					{	/* Eval/evobject.scm 953 */
																						obj_t BgL_arg5206z00_4439;

																						{	/* Eval/evobject.scm 953 */
																							obj_t BgL_pairz00_7529;

																							BgL_pairz00_7529 = BgL_ez00_4438;
																							BgL_arg5206z00_4439 =
																								CAR(CAR(CDR(BgL_pairz00_7529)));
																						}
																						BgL_identsz00_4325 =
																							MAKE_PAIR(BgL_arg5206z00_4439,
																							BgL_identsz00_4325);
																					}
																				}
																				{	/* Eval/evobject.scm 955 */
																					obj_t BgL_ez00_4442;

																					BgL_ez00_4442 =
																						BGl_evalzd2allocatezd2classz00zz__evobjectz00
																						(BgL_locz00_4292, BgL_cidz00_4290,
																						BgL_slotsz00_4296,
																						BgL_superz00_4293,
																						BgL_superzd2slotszd2_4297,
																						BgL_nativez00_4298,
																						BgL_nativezd2slotszd2_4299);
																					BGl_evalz12z12zz__evalz00
																						(BgL_ez00_4442, BgL_modz00_143);
																					{	/* Eval/evobject.scm 959 */
																						obj_t BgL_arg5208z00_4443;

																						{	/* Eval/evobject.scm 959 */
																							obj_t BgL_pairz00_7535;

																							BgL_pairz00_7535 = BgL_ez00_4442;
																							BgL_arg5208z00_4443 =
																								CAR(CAR(CDR(BgL_pairz00_7535)));
																						}
																						BgL_identsz00_4325 =
																							MAKE_PAIR(BgL_arg5208z00_4443,
																							BgL_identsz00_4325);
																					}
																				}
																				{	/* Eval/evobject.scm 961 */
																					obj_t BgL_ez00_4444;

																					BgL_ez00_4444 =
																						BGl_evalzd2fillzd2classz00zz__evobjectz00
																						(BgL_locz00_4292, BgL_cidz00_4290,
																						BgL_slotsz00_4296,
																						BgL_superz00_4293,
																						BgL_superzd2slotszd2_4297,
																						BgL_nativez00_4298,
																						BgL_nativezd2slotszd2_4299);
																					BGl_evalz12z12zz__evalz00
																						(BgL_ez00_4444, BgL_modz00_143);
																					{	/* Eval/evobject.scm 966 */
																						obj_t BgL_arg5209z00_4445;

																						{	/* Eval/evobject.scm 966 */
																							obj_t BgL_pairz00_7541;

																							BgL_pairz00_7541 = BgL_ez00_4444;
																							BgL_arg5209z00_4445 =
																								CAR(CAR(CDR(BgL_pairz00_7541)));
																						}
																						BgL_identsz00_4325 =
																							MAKE_PAIR(BgL_arg5209z00_4445,
																							BgL_identsz00_4325);
																					}
																				}
																			}
																		{	/* Eval/evobject.scm 968 */
																			obj_t BgL_ez00_4446;

																			{	/* Eval/evobject.scm 968 */
																				obj_t BgL_arg5210z00_4447;

																				obj_t BgL_arg5211z00_4448;

																				BgL_arg5210z00_4447 =
																					BGl_symbol5979z00zz__evobjectz00;
																				{	/* Eval/evobject.scm 971 */
																					obj_t BgL_arg5212z00_4449;

																					BgL_arg5212z00_4449 =
																						BGl_evalzd2registerzd2classz00zz__evobjectz00
																						(BgL_locz00_4292, BgL_cidz00_4290,
																						BgL_superz00_4293,
																						BgL_abstractz00_140,
																						BgL_slotsz00_4296,
																						BGl_2zb2zb2zz__r4_numbers_6_5z00
																						(BgL_offsetz00_4301,
																							BINT(BgL_siza7eza7_4303)),
																						BGl_getzd2evalzd2classzd2hashzd2zz__evobjectz00
																						(BgL_idz00_139, BgL_srcz00_142),
																						BgL_constructorz00_4295);
																					{	/* Eval/evobject.scm 968 */
																						obj_t BgL_list5214z00_4451;

																						{	/* Eval/evobject.scm 968 */
																							obj_t BgL_arg5215z00_4452;

																							BgL_arg5215z00_4452 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list5214z00_4451 =
																								MAKE_PAIR(BgL_arg5212z00_4449,
																								BgL_arg5215z00_4452);
																						}
																						BgL_arg5211z00_4448 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_cidz00_4290,
																							BgL_list5214z00_4451);
																					}
																				}
																				BgL_ez00_4446 =
																					MAKE_PAIR(BgL_arg5210z00_4447,
																					BgL_arg5211z00_4448);
																			}
																			BGl_evalz12z12zz__evalz00(BgL_ez00_4446,
																				BgL_modz00_143);
																		}
																		if (BgL_abstractz00_140)
																			{	/* Eval/evobject.scm 976 */
																				BFALSE;
																			}
																		else
																			{	/* Eval/evobject.scm 977 */
																				obj_t BgL_intz00_4455;

																				obj_t BgL_extz00_4456;

																				BgL_intz00_4455 =
																					BGl_makezd2evalzd2structzb2objectzd2ze3objectz83zz__evobjectz00
																					(BgL_cidz00_4290,
																					BgL_allzd2slotszd2_4300);
																				BgL_extz00_4456 =
																					BGl_makezd2evalzd2objectzd2ze3structz31zz__evobjectz00
																					(BgL_cidz00_4290,
																					BgL_allzd2slotszd2_4300);
																				BGl_evalz12z12zz__evalz00
																					(BgL_extz00_4456, BgL_modz00_143);
																				BGl_evalz12z12zz__evalz00
																					(BgL_intz00_4455, BgL_modz00_143);
																			}
																		BGl_evalz12z12zz__evalz00
																			(BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00
																			(BgL_cidz00_4290), BgL_modz00_143);
																		BGl_evalz12z12zz__evalz00
																			(BGl_evalzd2expandzd2instantiatez00zz__evobjectz00
																			(BgL_cidz00_4290), BgL_modz00_143);
																		BGl_evalz12z12zz__evalz00
																			(BGl_evalzd2expandzd2duplicatez00zz__evobjectz00
																			(BgL_cidz00_4290), BgL_modz00_143);
																		return BgL_identsz00_4325;
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
						else
							{	/* Eval/evobject.scm 884 */
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_4292,
									BGl_symbol6033z00zz__evobjectz00,
									BGl_string6052z00zz__evobjectz00, BgL_sidz00_4291);
							}
					}
				}
			}
		}
	}



/* _eval-class */
	obj_t BGl__evalzd2classzd2zz__evobjectz00(obj_t BgL_envz00_7966,
		obj_t BgL_idz00_7967, obj_t BgL_abstractz00_7968, obj_t BgL_clausesz00_7969,
		obj_t BgL_srcz00_7970, obj_t BgL_modz00_7971)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 878 */
			{	/* Eval/evobject.scm 879 */
				obj_t BgL_auxz00_11455;

				obj_t BgL_auxz00_11445;

				obj_t BgL_auxz00_11438;

				if (PAIRP(BgL_srcz00_7970))
					{	/* Eval/evobject.scm 879 */
						BgL_auxz00_11455 = BgL_srcz00_7970;
					}
				else
					{
						obj_t BgL_auxz00_11458;

						BgL_auxz00_11458 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5911z00zz__evobjectz00,
							BINT(((long) 32343)), BGl_string6053z00zz__evobjectz00,
							BGl_string6055z00zz__evobjectz00, BgL_srcz00_7970);
						FAILURE(BgL_auxz00_11458, BFALSE, BFALSE);
					}
				{	/* Eval/evobject.scm 879 */
					bool_t BgL_testz00_11447;

					if (PAIRP(BgL_clausesz00_7969))
						{	/* Eval/evobject.scm 879 */
							BgL_testz00_11447 = ((bool_t) 1);
						}
					else
						{	/* Eval/evobject.scm 879 */
							BgL_testz00_11447 = NULLP(BgL_clausesz00_7969);
						}
					if (BgL_testz00_11447)
						{	/* Eval/evobject.scm 879 */
							BgL_auxz00_11445 = BgL_clausesz00_7969;
						}
					else
						{
							obj_t BgL_auxz00_11451;

							BgL_auxz00_11451 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string5911z00zz__evobjectz00, BINT(((long) 32343)),
								BGl_string6053z00zz__evobjectz00,
								BGl_string6054z00zz__evobjectz00, BgL_clausesz00_7969);
							FAILURE(BgL_auxz00_11451, BFALSE, BFALSE);
				}}
				if (SYMBOLP(BgL_idz00_7967))
					{	/* Eval/evobject.scm 879 */
						BgL_auxz00_11438 = BgL_idz00_7967;
					}
				else
					{
						obj_t BgL_auxz00_11441;

						BgL_auxz00_11441 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5911z00zz__evobjectz00,
							BINT(((long) 32343)), BGl_string6053z00zz__evobjectz00,
							BGl_string5913z00zz__evobjectz00, BgL_idz00_7967);
						FAILURE(BgL_auxz00_11441, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2classzd2zz__evobjectz00(BgL_auxz00_11438,
					CBOOL(BgL_abstractz00_7968), BgL_auxz00_11445, BgL_auxz00_11455,
					BgL_modz00_7971);
			}
		}
	}



/* <anonymous:5203> */
	obj_t BGl_zc3anonymousza35203ze3z83zz__evobjectz00(obj_t BgL_envz00_7972,
		obj_t BgL_fz00_7976)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 929 */
			{	/* Eval/evobject.scm 930 */
				obj_t BgL_locz00_7973;

				obj_t BgL_cidz00_7974;

				obj_t BgL_superz00_7975;

				BgL_locz00_7973 = PROCEDURE_REF(BgL_envz00_7972, (int) (((long) 0)));
				BgL_cidz00_7974 = PROCEDURE_REF(BgL_envz00_7972, (int) (((long) 1)));
				BgL_superz00_7975 = PROCEDURE_REF(BgL_envz00_7972, (int) (((long) 2)));
				{
					obj_t BgL_fz00_4431;

					BgL_fz00_4431 = BgL_fz00_7976;
					return
						BGl_evalzd2classzd2slotzd2aliaszd2zz__evobjectz00(BgL_locz00_7973,
						BgL_cidz00_7974, BgL_fz00_4431, BgL_superz00_7975);
				}
			}
		}
	}



/* <anonymous:5185> */
	obj_t BGl_zc3anonymousza35185ze3z83zz__evobjectz00(obj_t BgL_envz00_7977,
		obj_t BgL_fz00_7980, obj_t BgL_oz00_7981)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 920 */
			{	/* Eval/evobject.scm 921 */
				obj_t BgL_locz00_7978;

				obj_t BgL_cidz00_7979;

				BgL_locz00_7978 = PROCEDURE_REF(BgL_envz00_7977, (int) (((long) 0)));
				BgL_cidz00_7979 = PROCEDURE_REF(BgL_envz00_7977, (int) (((long) 1)));
				{
					obj_t BgL_fz00_4397;

					obj_t BgL_oz00_4398;

					BgL_fz00_4397 = BgL_fz00_7980;
					BgL_oz00_4398 = BgL_oz00_7981;
					return
						BGl_evalzd2classzd2slotz00zz__evobjectz00(BgL_locz00_7978,
						BgL_cidz00_7979, BgL_fz00_4397, BgL_oz00_4398);
				}
			}
		}
	}



/* <anonymous:5180> */
	obj_t BGl_zc3anonymousza35180ze3z83zz__evobjectz00(obj_t BgL_envz00_7982,
		obj_t BgL_fz00_7985)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 917 */
			{	/* Eval/evobject.scm 918 */
				obj_t BgL_locz00_7983;

				obj_t BgL_cidz00_7984;

				BgL_locz00_7983 = PROCEDURE_REF(BgL_envz00_7982, (int) (((long) 0)));
				BgL_cidz00_7984 = PROCEDURE_REF(BgL_envz00_7982, (int) (((long) 1)));
				{
					obj_t BgL_fz00_4390;

					BgL_fz00_4390 = BgL_fz00_7985;
					return
						BGl_evalzd2classzd2slotz00zz__evobjectz00(BgL_locz00_7983,
						BgL_cidz00_7984, BgL_fz00_4390, BINT(((long) -1)));
		}}}
	}



/* <anonymous:5221> */
	obj_t BGl_zc3anonymousza35221ze3z83zz__evobjectz00(obj_t BgL_envz00_7986,
		obj_t BgL_sz00_7987)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 896 */
			{
				obj_t BgL_sz00_4462;

				{	/* Eval/evobject.scm 897 */
					bool_t BgL_auxz00_11481;

					BgL_sz00_4462 = BgL_sz00_7987;
					{	/* Eval/evobject.scm 897 */
						bool_t BgL_testz00_11482;

						{	/* Eval/evobject.scm 897 */
							obj_t BgL_sz00_7188;

							BgL_sz00_7188 = BgL_sz00_4462;
							BgL_testz00_11482 =
								CBOOL(STRUCT_REF(BgL_sz00_7188, (int) (((long) 4))));
						}
						if (BgL_testz00_11482)
							{	/* Eval/evobject.scm 897 */
								BgL_auxz00_11481 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 897 */
								BgL_auxz00_11481 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_11481);
				}
			}
		}
	}



/* get-eval-class-hash */
	obj_t BGl_getzd2evalzd2classzd2hashzd2zz__evobjectz00(obj_t
		BgL_classzd2idzd2_144, obj_t BgL_fieldsz00_145)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 994 */
			{	/* Eval/evobject.scm 995 */
				long BgL_g1843z00_4469;

				BgL_g1843z00_4469 =
					BGl_getzd2hashnumberzd2zz__hashz00(BgL_classzd2idzd2_144);
				{
					obj_t BgL_fieldsz00_4471;

					long BgL_hashz00_4472;

					BgL_fieldsz00_4471 = BgL_fieldsz00_145;
					BgL_hashz00_4472 = BgL_g1843z00_4469;
				BgL_zc3anonymousza35225ze3z83_4473:
					if (NULLP(BgL_fieldsz00_4471))
						{	/* Eval/evobject.scm 997 */
							return BINT(BgL_hashz00_4472);
						}
					else
						{	/* Eval/evobject.scm 999 */
							obj_t BgL_fieldz00_4475;

							BgL_fieldz00_4475 = CAR(BgL_fieldsz00_4471);
							{

								if (PAIRP(BgL_fieldz00_4475))
									{	/* Eval/evobject.scm 1000 */
										if (NULLP(CDR(BgL_fieldz00_4475)))
											{	/* Eval/evobject.scm 1000 */
												{
													long BgL_hashz00_11499;

													obj_t BgL_fieldsz00_11497;

													BgL_fieldsz00_11497 = CDR(BgL_fieldsz00_4471);
													BgL_hashz00_11499 =
														(BgL_hashz00_4472 ^ ((long) 2344));
													BgL_hashz00_4472 = BgL_hashz00_11499;
													BgL_fieldsz00_4471 = BgL_fieldsz00_11497;
													goto BgL_zc3anonymousza35225ze3z83_4473;
												}
											}
										else
											{	/* Eval/evobject.scm 1000 */
												obj_t BgL_cdrzd21479zd2_4488;

												BgL_cdrzd21479zd2_4488 = CDR(BgL_fieldz00_4475);
												if (
													(CAR(BgL_fieldz00_4475) ==
														BGl_symbol6027z00zz__evobjectz00))
													{	/* Eval/evobject.scm 1000 */
														if (PAIRP(BgL_cdrzd21479zd2_4488))
															{	/* Eval/evobject.scm 1000 */
																obj_t BgL_carzd21482zd2_4491;

																BgL_carzd21482zd2_4491 =
																	CAR(BgL_cdrzd21479zd2_4488);
																if (SYMBOLP(BgL_carzd21482zd2_4491))
																	{	/* Eval/evobject.scm 1000 */
																		obj_t BgL_idz00_7559;

																		BgL_idz00_7559 = BgL_carzd21482zd2_4491;
																		{
																			long BgL_hashz00_11512;

																			obj_t BgL_fieldsz00_11510;

																			BgL_fieldsz00_11510 =
																				CDR(BgL_fieldsz00_4471);
																			BgL_hashz00_11512 =
																				(BgL_hashz00_4472 ^
																				BGl_getzd2hashnumberzd2zz__hashz00
																				(BgL_idz00_7559));
																			BgL_hashz00_4472 = BgL_hashz00_11512;
																			BgL_fieldsz00_4471 = BgL_fieldsz00_11510;
																			goto BgL_zc3anonymousza35225ze3z83_4473;
																		}
																	}
																else
																	{	/* Eval/evobject.scm 1000 */
																		obj_t BgL_carzd21491zd2_4494;

																		BgL_carzd21491zd2_4494 =
																			CAR(BgL_fieldz00_4475);
																		if (SYMBOLP(BgL_carzd21491zd2_4494))
																			{	/* Eval/evobject.scm 1000 */
																				obj_t BgL_idz00_7570;

																				BgL_idz00_7570 = BgL_carzd21491zd2_4494;
																				{
																					long BgL_hashz00_11520;

																					obj_t BgL_fieldsz00_11518;

																					BgL_fieldsz00_11518 =
																						CDR(BgL_fieldsz00_4471);
																					BgL_hashz00_11520 =
																						(BgL_hashz00_4472 ^
																						BGl_getzd2hashnumberzd2zz__hashz00
																						(BgL_idz00_7570));
																					BgL_hashz00_4472 = BgL_hashz00_11520;
																					BgL_fieldsz00_4471 =
																						BgL_fieldsz00_11518;
																					goto
																						BgL_zc3anonymousza35225ze3z83_4473;
																				}
																			}
																		else
																			{	/* Eval/evobject.scm 1000 */
																				return BFALSE;
																			}
																	}
															}
														else
															{	/* Eval/evobject.scm 1000 */
																obj_t BgL_carzd21500zd2_4497;

																BgL_carzd21500zd2_4497 = CAR(BgL_fieldz00_4475);
																if (SYMBOLP(BgL_carzd21500zd2_4497))
																	{	/* Eval/evobject.scm 1000 */
																		obj_t BgL_idz00_7581;

																		BgL_idz00_7581 = BgL_carzd21500zd2_4497;
																		{
																			long BgL_hashz00_11528;

																			obj_t BgL_fieldsz00_11526;

																			BgL_fieldsz00_11526 =
																				CDR(BgL_fieldsz00_4471);
																			BgL_hashz00_11528 =
																				(BgL_hashz00_4472 ^
																				BGl_getzd2hashnumberzd2zz__hashz00
																				(BgL_idz00_7581));
																			BgL_hashz00_4472 = BgL_hashz00_11528;
																			BgL_fieldsz00_4471 = BgL_fieldsz00_11526;
																			goto BgL_zc3anonymousza35225ze3z83_4473;
																		}
																	}
																else
																	{	/* Eval/evobject.scm 1000 */
																		return BFALSE;
																	}
															}
													}
												else
													{	/* Eval/evobject.scm 1000 */
														obj_t BgL_carzd21509zd2_4500;

														BgL_carzd21509zd2_4500 = CAR(BgL_fieldz00_4475);
														if (SYMBOLP(BgL_carzd21509zd2_4500))
															{	/* Eval/evobject.scm 1000 */
																obj_t BgL_idz00_7592;

																BgL_idz00_7592 = BgL_carzd21509zd2_4500;
																{
																	long BgL_hashz00_11536;

																	obj_t BgL_fieldsz00_11534;

																	BgL_fieldsz00_11534 = CDR(BgL_fieldsz00_4471);
																	BgL_hashz00_11536 =
																		(BgL_hashz00_4472 ^
																		BGl_getzd2hashnumberzd2zz__hashz00
																		(BgL_idz00_7592));
																	BgL_hashz00_4472 = BgL_hashz00_11536;
																	BgL_fieldsz00_4471 = BgL_fieldsz00_11534;
																	goto BgL_zc3anonymousza35225ze3z83_4473;
																}
															}
														else
															{	/* Eval/evobject.scm 1000 */
																return BFALSE;
															}
													}
											}
									}
								else
									{	/* Eval/evobject.scm 1000 */
										if (SYMBOLP(BgL_fieldz00_4475))
											{	/* Eval/evobject.scm 1000 */
												{
													long BgL_hashz00_11543;

													obj_t BgL_fieldsz00_11541;

													BgL_fieldsz00_11541 = CDR(BgL_fieldsz00_4471);
													BgL_hashz00_11543 =
														(BgL_hashz00_4472 ^
														BGl_getzd2hashnumberzd2zz__hashz00
														(BgL_fieldz00_4475));
													BgL_hashz00_4472 = BgL_hashz00_11543;
													BgL_fieldsz00_4471 = BgL_fieldsz00_11541;
													goto BgL_zc3anonymousza35225ze3z83_4473;
												}
											}
										else
											{	/* Eval/evobject.scm 1000 */
												return BFALSE;
											}
									}
							}
						}
				}
			}
		}
	}



/* eval-expand-co-instantiate */
	BGL_EXPORTED_DEF obj_t
		BGl_evalzd2expandzd2cozd2instantiatezd2zz__evobjectz00(obj_t BgL_xz00_146,
		obj_t BgL_ez00_147)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 1013 */
			if (PAIRP(BgL_xz00_146))
				{	/* Eval/evobject.scm 1014 */
					obj_t BgL_cdrzd21532zd2_4525;

					BgL_cdrzd21532zd2_4525 = CDR(BgL_xz00_146);
					if ((CAR(BgL_xz00_146) == BGl_symbol6056z00zz__evobjectz00))
						{	/* Eval/evobject.scm 1014 */
							if (PAIRP(BgL_cdrzd21532zd2_4525))
								{	/* Eval/evobject.scm 1014 */
									obj_t BgL_arg5258z00_4528;

									obj_t BgL_arg5259z00_4529;

									BgL_arg5258z00_4528 = CAR(BgL_cdrzd21532zd2_4525);
									BgL_arg5259z00_4529 = CDR(BgL_cdrzd21532zd2_4525);
									{	/* Eval/evobject.scm 1014 */
										obj_t BgL_arg5262z00_7627;

										BgL_arg5262z00_7627 =
											BGl_cozd2instantiatezd2ze3letze3zz__evobjectz00
											(BgL_arg5258z00_4528, BgL_arg5259z00_4529, BgL_xz00_146);
										return PROCEDURE_ENTRY(BgL_ez00_147) (BgL_ez00_147,
											BgL_arg5262z00_7627, BgL_ez00_147, BEOA);
									}
								}
							else
								{	/* Eval/evobject.scm 1014 */
									return
										BGl_expandzd2errorzd2zz__evobjectz00
										(BGl_string6057z00zz__evobjectz00,
										BGl_string6058z00zz__evobjectz00, BgL_xz00_146);
								}
						}
					else
						{	/* Eval/evobject.scm 1014 */
							return
								BGl_expandzd2errorzd2zz__evobjectz00
								(BGl_string6057z00zz__evobjectz00,
								BGl_string6058z00zz__evobjectz00, BgL_xz00_146);
						}
				}
			else
				{	/* Eval/evobject.scm 1014 */
					return
						BGl_expandzd2errorzd2zz__evobjectz00
						(BGl_string6057z00zz__evobjectz00, BGl_string6058z00zz__evobjectz00,
						BgL_xz00_146);
				}
		}
	}



/* _eval-expand-co-instantiate */
	obj_t BGl__evalzd2expandzd2cozd2instantiatezd2zz__evobjectz00(obj_t
		BgL_envz00_7988, obj_t BgL_xz00_7989, obj_t BgL_ez00_7990)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 1013 */
			{	/* Eval/evobject.scm 1014 */
				obj_t BgL_auxz00_11571;

				obj_t BgL_auxz00_11562;

				if (PROCEDUREP(BgL_ez00_7990))
					{	/* Eval/evobject.scm 1014 */
						BgL_auxz00_11571 = BgL_ez00_7990;
					}
				else
					{
						obj_t BgL_auxz00_11574;

						BgL_auxz00_11574 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5911z00zz__evobjectz00,
							BINT(((long) 36966)), BGl_string6059z00zz__evobjectz00,
							BGl_string6060z00zz__evobjectz00, BgL_ez00_7990);
						FAILURE(BgL_auxz00_11574, BFALSE, BFALSE);
					}
				{	/* Eval/evobject.scm 1014 */
					bool_t BgL_testz00_11563;

					if (PAIRP(BgL_xz00_7989))
						{	/* Eval/evobject.scm 1014 */
							BgL_testz00_11563 = ((bool_t) 1);
						}
					else
						{	/* Eval/evobject.scm 1014 */
							BgL_testz00_11563 = NULLP(BgL_xz00_7989);
						}
					if (BgL_testz00_11563)
						{	/* Eval/evobject.scm 1014 */
							BgL_auxz00_11562 = BgL_xz00_7989;
						}
					else
						{
							obj_t BgL_auxz00_11567;

							BgL_auxz00_11567 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string5911z00zz__evobjectz00, BINT(((long) 36966)),
								BGl_string6059z00zz__evobjectz00,
								BGl_string6054z00zz__evobjectz00, BgL_xz00_7989);
							FAILURE(BgL_auxz00_11567, BFALSE, BFALSE);
				}}
				return
					BGl_evalzd2expandzd2cozd2instantiatezd2zz__evobjectz00
					(BgL_auxz00_11562, BgL_auxz00_11571);
			}
		}
	}



/* co-instantiate->let */
	obj_t BGl_cozd2instantiatezd2ze3letze3zz__evobjectz00(obj_t
		BgL_bindingsz00_148, obj_t BgL_bodyz00_149, obj_t BgL_xz00_150)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 1023 */
			{
				obj_t BgL_exprz00_4640;

				obj_t BgL_bdgz00_4641;

				{
					obj_t BgL_bindingsz00_4540;

					obj_t BgL_userzd2variableszd2_4541;

					obj_t BgL_classesz00_4542;

					obj_t BgL_instantiatesz00_4543;

					BgL_bindingsz00_4540 = BgL_bindingsz00_148;
					BgL_userzd2variableszd2_4541 = BNIL;
					BgL_classesz00_4542 = BNIL;
					BgL_instantiatesz00_4543 = BNIL;
				BgL_zc3anonymousza35263ze3z83_4544:
					if (NULLP(BgL_bindingsz00_4540))
						{	/* Eval/evobject.scm 1067 */
							obj_t BgL_arg5265z00_4546;

							obj_t BgL_arg5266z00_4547;

							BgL_arg5265z00_4546 = BGl_symbol5789z00zz__evobjectz00;
							{	/* Eval/evobject.scm 1067 */
								obj_t BgL_arg5267z00_4548;

								obj_t BgL_arg5268z00_4549;

								if (NULLP(BgL_userzd2variableszd2_4541))
									{	/* Eval/evobject.scm 1067 */
										BgL_arg5267z00_4548 = BNIL;
									}
								else
									{	/* Eval/evobject.scm 1067 */
										obj_t BgL_head2011z00_4554;

										BgL_head2011z00_4554 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_ll2009z00_4556;

											obj_t BgL_ll2010z00_4557;

											obj_t BgL_tail2012z00_4558;

											BgL_ll2009z00_4556 = BgL_userzd2variableszd2_4541;
											BgL_ll2010z00_4557 = BgL_classesz00_4542;
											BgL_tail2012z00_4558 = BgL_head2011z00_4554;
										BgL_zc3anonymousza35271ze3z83_4559:
											if (NULLP(BgL_ll2009z00_4556))
												{	/* Eval/evobject.scm 1067 */
													BgL_arg5267z00_4548 = CDR(BgL_head2011z00_4554);
												}
											else
												{	/* Eval/evobject.scm 1067 */
													obj_t BgL_newtail2013z00_4561;

													{	/* Eval/evobject.scm 1067 */
														obj_t BgL_arg5275z00_4564;

														{	/* Eval/evobject.scm 1067 */
															obj_t BgL_idz00_4566;

															obj_t BgL_classz00_4567;

															BgL_idz00_4566 = CAR(BgL_ll2009z00_4556);
															BgL_classz00_4567 = CAR(BgL_ll2010z00_4557);
															{	/* Eval/evobject.scm 1068 */
																obj_t BgL_cidz00_4568;

																BgL_cidz00_4568 =
																	BGl_classzd2namezd2zz__objectz00
																	(BgL_classz00_4567);
																{	/* Eval/evobject.scm 1069 */

																	{	/* Eval/evobject.scm 1070 */
																		obj_t BgL_arg5277z00_4570;

																		{	/* Eval/evobject.scm 1070 */
																			obj_t BgL_arg5278z00_4571;

																			{	/* Eval/evobject.scm 1070 */
																				obj_t BgL_arg5281z00_4574;

																				{	/* Eval/evobject.scm 1070 */
																					obj_t BgL_arg5283z00_4576;

																					{	/* Eval/evobject.scm 1070 */
																						obj_t BgL_arg5284z00_4577;

																						obj_t BgL_arg5285z00_4578;

																						{	/* Eval/evobject.scm 1070 */
																							obj_t BgL_res5748z00_7639;

																							{	/* Eval/evobject.scm 1070 */
																								obj_t BgL_symbolz00_7637;

																								BgL_symbolz00_7637 =
																									BGl_symbol5812z00zz__evobjectz00;
																								{	/* Eval/evobject.scm 1070 */
																									obj_t BgL_arg5527z00_7638;

																									BgL_arg5527z00_7638 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_7637);
																									BgL_res5748z00_7639 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg5527z00_7638);
																								}
																							}
																							BgL_arg5284z00_4577 =
																								BgL_res5748z00_7639;
																						}
																						{	/* Eval/evobject.scm 1070 */
																							obj_t BgL_res5749z00_7642;

																							{	/* Eval/evobject.scm 1070 */
																								obj_t BgL_arg5527z00_7641;

																								BgL_arg5527z00_7641 =
																									SYMBOL_TO_STRING
																									(BgL_cidz00_4568);
																								BgL_res5749z00_7642 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg5527z00_7641);
																							}
																							BgL_arg5285z00_4578 =
																								BgL_res5749z00_7642;
																						}
																						{	/* Eval/evobject.scm 1070 */
																							obj_t BgL_list5286z00_4579;

																							{	/* Eval/evobject.scm 1070 */
																								obj_t BgL_arg5287z00_4580;

																								BgL_arg5287z00_4580 =
																									MAKE_PAIR(BgL_arg5285z00_4578,
																									BNIL);
																								BgL_list5286z00_4579 =
																									MAKE_PAIR(BgL_arg5284z00_4577,
																									BgL_arg5287z00_4580);
																							}
																							BgL_arg5283z00_4576 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list5286z00_4579);
																						}
																					}
																					BgL_arg5281z00_4574 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg5283z00_4576));
																				}
																				BgL_arg5278z00_4571 =
																					MAKE_PAIR(BgL_arg5281z00_4574, BNIL);
																			}
																			{	/* Eval/evobject.scm 1070 */
																				obj_t BgL_list5280z00_4573;

																				BgL_list5280z00_4573 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg5277z00_4570 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg5278z00_4571,
																					BgL_list5280z00_4573);
																			}
																		}
																		BgL_arg5275z00_4564 =
																			MAKE_PAIR(BgL_idz00_4566,
																			BgL_arg5277z00_4570);
																	}
																}
															}
														}
														BgL_newtail2013z00_4561 =
															MAKE_PAIR(BgL_arg5275z00_4564, BNIL);
													}
													SET_CDR(BgL_tail2012z00_4558,
														BgL_newtail2013z00_4561);
													{
														obj_t BgL_tail2012z00_11609;

														obj_t BgL_ll2010z00_11607;

														obj_t BgL_ll2009z00_11605;

														BgL_ll2009z00_11605 = CDR(BgL_ll2009z00_4556);
														BgL_ll2010z00_11607 = CDR(BgL_ll2010z00_4557);
														BgL_tail2012z00_11609 = BgL_newtail2013z00_4561;
														BgL_tail2012z00_4558 = BgL_tail2012z00_11609;
														BgL_ll2010z00_4557 = BgL_ll2010z00_11607;
														BgL_ll2009z00_4556 = BgL_ll2009z00_11605;
														goto BgL_zc3anonymousza35271ze3z83_4559;
													}
												}
										}
									}
								{	/* Eval/evobject.scm 1074 */
									obj_t BgL_arg5288z00_4582;

									obj_t BgL_arg5289z00_4583;

									{	/* Eval/evobject.scm 1073 */
										obj_t BgL_list5291z00_4585;

										{	/* Eval/evobject.scm 1073 */
											obj_t BgL_arg5292z00_4586;

											{	/* Eval/evobject.scm 1073 */
												obj_t BgL_arg5293z00_4587;

												BgL_arg5293z00_4587 =
													MAKE_PAIR(BgL_instantiatesz00_4543, BNIL);
												BgL_arg5292z00_4586 =
													MAKE_PAIR(BgL_classesz00_4542, BgL_arg5293z00_4587);
											}
											BgL_list5291z00_4585 =
												MAKE_PAIR(BgL_userzd2variableszd2_4541,
												BgL_arg5292z00_4586);
										}
										BgL_arg5288z00_4582 =
											BGl_mapz00zz__r4_control_features_6_9z00
											(BGl_proc6062z00zz__evobjectz00, BgL_list5291z00_4585);
									}
									BgL_arg5289z00_4583 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_bodyz00_149, BNIL);
									BgL_arg5268z00_4549 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg5288z00_4582, BgL_arg5289z00_4583);
								}
								{	/* Eval/evobject.scm 1067 */
									obj_t BgL_list5269z00_4550;

									BgL_list5269z00_4550 = MAKE_PAIR(BgL_arg5268z00_4549, BNIL);
									BgL_arg5266z00_4547 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg5267z00_4548, BgL_list5269z00_4550);
								}
							}
							return MAKE_PAIR(BgL_arg5265z00_4546, BgL_arg5266z00_4547);
						}
					else
						{
							obj_t BgL_varz00_4615;

							obj_t BgL_exprz00_4616;

							{	/* Eval/evobject.scm 1087 */
								obj_t BgL_ezd21552zd2_4619;

								BgL_ezd21552zd2_4619 = CAR(BgL_bindingsz00_4540);
								if (PAIRP(BgL_ezd21552zd2_4619))
									{	/* Eval/evobject.scm 1087 */
										obj_t BgL_carzd21557zd2_4621;

										obj_t BgL_cdrzd21558zd2_4622;

										BgL_carzd21557zd2_4621 = CAR(BgL_ezd21552zd2_4619);
										BgL_cdrzd21558zd2_4622 = CDR(BgL_ezd21552zd2_4619);
										if (SYMBOLP(BgL_carzd21557zd2_4621))
											{	/* Eval/evobject.scm 1087 */
												if (PAIRP(BgL_cdrzd21558zd2_4622))
													{	/* Eval/evobject.scm 1087 */
														if (NULLP(CDR(BgL_cdrzd21558zd2_4622)))
															{	/* Eval/evobject.scm 1087 */
																BgL_varz00_4615 = BgL_carzd21557zd2_4621;
																BgL_exprz00_4616 = CAR(BgL_cdrzd21558zd2_4622);
																{	/* Eval/evobject.scm 1089 */
																	obj_t BgL_bdgz00_4628;

																	BgL_bdgz00_4628 = CAR(BgL_bindingsz00_4540);
																	{	/* Eval/evobject.scm 1089 */
																		obj_t BgL_kclassz00_4629;

																		BgL_exprz00_4640 = BgL_exprz00_4616;
																		BgL_bdgz00_4641 = BgL_bdgz00_4628;
																		if (PAIRP(BgL_exprz00_4640))
																			{	/* Eval/evobject.scm 1032 */
																				obj_t BgL_arg5328z00_4649;

																				BgL_arg5328z00_4649 =
																					CAR(BgL_exprz00_4640);
																				{	/* Eval/evobject.scm 1032 */
																					obj_t BgL_idz00_7676;

																					BgL_idz00_7676 =
																						BGl_decomposezd2identzd2zz__evobjectz00
																						(BgL_arg5328z00_4649);
																					{	/* Eval/evobject.scm 1032 */
																						obj_t BgL_typez00_7677;

																						{	/* Eval/evobject.scm 1032 */
																							int BgL_auxz00_11636;

																							BgL_auxz00_11636 =
																								(int) (((long) 1));
																							BgL_typez00_7677 =
																								BGL_MVALUES_VAL
																								(BgL_auxz00_11636);
																						}
																						BgL_kclassz00_4629 =
																							BGl_findzd2classzd2zz__objectz00
																							(BgL_typez00_7677);
																			}}}
																		else
																			{	/* Eval/evobject.scm 1032 */
																				BgL_kclassz00_4629 =
																					BGl_expandzd2errorzd2zz__evobjectz00
																					(BGl_string6057z00zz__evobjectz00,
																					BGl_string6061z00zz__evobjectz00,
																					BgL_bdgz00_4641);
																			}
																		{	/* Eval/evobject.scm 1090 */

																			{	/* Eval/evobject.scm 1091 */
																				obj_t BgL_idz00_4630;

																				BgL_idz00_4630 =
																					BGl_decomposezd2identzd2zz__evobjectz00
																					(BgL_varz00_4615);
																				{	/* Eval/evobject.scm 1093 */
																					obj_t BgL_typez00_4631;

																					{	/* Eval/evobject.scm 1093 */
																						int BgL_auxz00_11642;

																						BgL_auxz00_11642 =
																							(int) (((long) 1));
																						BgL_typez00_4631 =
																							BGL_MVALUES_VAL(BgL_auxz00_11642);
																					}
																					{	/* Eval/evobject.scm 1093 */
																						obj_t BgL_arg5319z00_4632;

																						obj_t BgL_arg5320z00_4633;

																						obj_t BgL_arg5321z00_4634;

																						obj_t BgL_arg5322z00_4635;

																						BgL_arg5319z00_4632 =
																							CDR(BgL_bindingsz00_4540);
																						BgL_arg5320z00_4633 =
																							MAKE_PAIR(BgL_varz00_4615,
																							BgL_userzd2variableszd2_4541);
																						BgL_arg5321z00_4634 =
																							MAKE_PAIR(BgL_kclassz00_4629,
																							BgL_classesz00_4542);
																						BgL_arg5322z00_4635 =
																							MAKE_PAIR(BgL_exprz00_4616,
																							BgL_instantiatesz00_4543);
																						{
																							obj_t BgL_instantiatesz00_11652;

																							obj_t BgL_classesz00_11651;

																							obj_t
																								BgL_userzd2variableszd2_11650;
																							obj_t BgL_bindingsz00_11649;

																							BgL_bindingsz00_11649 =
																								BgL_arg5319z00_4632;
																							BgL_userzd2variableszd2_11650 =
																								BgL_arg5320z00_4633;
																							BgL_classesz00_11651 =
																								BgL_arg5321z00_4634;
																							BgL_instantiatesz00_11652 =
																								BgL_arg5322z00_4635;
																							BgL_instantiatesz00_4543 =
																								BgL_instantiatesz00_11652;
																							BgL_classesz00_4542 =
																								BgL_classesz00_11651;
																							BgL_userzd2variableszd2_4541 =
																								BgL_userzd2variableszd2_11650;
																							BgL_bindingsz00_4540 =
																								BgL_bindingsz00_11649;
																							goto
																								BgL_zc3anonymousza35263ze3z83_4544;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														else
															{	/* Eval/evobject.scm 1087 */
															BgL_tagzd21551zd2_4618:
																return
																	BGl_expandzd2errorzd2zz__evobjectz00
																	(BGl_string6057z00zz__evobjectz00,
																	BGl_string6061z00zz__evobjectz00,
																	CAR(BgL_bindingsz00_4540));
															}
													}
												else
													{	/* Eval/evobject.scm 1087 */
														goto BgL_tagzd21551zd2_4618;
													}
											}
										else
											{	/* Eval/evobject.scm 1087 */
												goto BgL_tagzd21551zd2_4618;
											}
									}
								else
									{	/* Eval/evobject.scm 1087 */
										goto BgL_tagzd21551zd2_4618;
									}
							}
						}
				}
			}
		}
	}



/* <anonymous:5294> */
	obj_t BGl_zc3anonymousza35294ze3z83zz__evobjectz00(obj_t BgL_envz00_7994,
		obj_t BgL_userz00_7995, obj_t BgL_classz00_7996,
		obj_t BgL_instantiatez00_7997)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 1073 */
			{
				obj_t BgL_userz00_4588;

				obj_t BgL_classz00_4589;

				obj_t BgL_instantiatez00_4590;

				BgL_userz00_4588 = BgL_userz00_7995;
				BgL_classz00_4589 = BgL_classz00_7996;
				BgL_instantiatez00_4590 = BgL_instantiatez00_7997;
				{
					obj_t BgL_oz00_4683;

					obj_t BgL_classz00_4684;

					obj_t BgL_instantiatez00_4685;

					obj_t BgL_classz00_4653;

					obj_t BgL_instantiatez00_4654;

					{	/* Eval/evobject.scm 1074 */
						obj_t BgL_cidz00_4592;

						BgL_cidz00_4592 =
							BGl_classzd2namezd2zz__objectz00(BgL_classz00_4589);
						{	/* Eval/evobject.scm 1074 */
							obj_t BgL_fillz00_4593;

							{	/* Eval/evobject.scm 1075 */
								obj_t BgL_list5309z00_4610;

								{	/* Eval/evobject.scm 1075 */
									obj_t BgL_arg5310z00_4611;

									obj_t BgL_arg5311z00_4612;

									BgL_arg5310z00_4611 = BGl_symbol5803z00zz__evobjectz00;
									{	/* Eval/evobject.scm 1075 */
										obj_t BgL_arg5312z00_4613;

										BgL_arg5312z00_4613 =
											MAKE_PAIR(BGl_symbol5805z00zz__evobjectz00, BNIL);
										BgL_arg5311z00_4612 =
											MAKE_PAIR(BgL_cidz00_4592, BgL_arg5312z00_4613);
									}
									BgL_list5309z00_4610 =
										MAKE_PAIR(BgL_arg5310z00_4611, BgL_arg5311z00_4612);
								}
								BgL_fillz00_4593 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list5309z00_4610);
							}
							{	/* Eval/evobject.scm 1075 */
								obj_t BgL_argsz00_4594;

								BgL_classz00_4653 = BgL_classz00_4589;
								BgL_instantiatez00_4654 = BgL_instantiatez00_4590;
								{	/* Eval/evobject.scm 1035 */
									obj_t BgL_l2004z00_4656;

									BgL_l2004z00_4656 =
										BGl_filterz00zz__r4_control_features_6_9z00
										(BGl_proc6063z00zz__evobjectz00,
										BGl_classzd2allzd2fieldsz00zz__objectz00
										(BgL_classz00_4653));
									if (NULLP(BgL_l2004z00_4656))
										{	/* Eval/evobject.scm 1035 */
											BgL_argsz00_4594 = BNIL;
										}
									else
										{	/* Eval/evobject.scm 1035 */
											obj_t BgL_head2006z00_4658;

											BgL_head2006z00_4658 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l2004z00_4660;

												obj_t BgL_tail2007z00_4661;

												BgL_l2004z00_4660 = BgL_l2004z00_4656;
												BgL_tail2007z00_4661 = BgL_head2006z00_4658;
											BgL_zc3anonymousza35332ze3z83_4662:
												if (NULLP(BgL_l2004z00_4660))
													{	/* Eval/evobject.scm 1035 */
														BgL_argsz00_4594 = CDR(BgL_head2006z00_4658);
													}
												else
													{	/* Eval/evobject.scm 1035 */
														obj_t BgL_newtail2008z00_4664;

														{	/* Eval/evobject.scm 1035 */
															obj_t BgL_arg5335z00_4666;

															{	/* Eval/evobject.scm 1035 */
																obj_t BgL_fz00_4668;

																BgL_fz00_4668 = CAR(BgL_l2004z00_4660);
																{	/* Eval/evobject.scm 1036 */
																	obj_t BgL_idz00_4669;

																	BgL_idz00_4669 =
																		BGl_classzd2fieldzd2namez00zz__objectz00
																		(BgL_fz00_4668);
																	{	/* Eval/evobject.scm 1037 */
																		obj_t BgL_vz00_4670;

																		BgL_vz00_4670 =
																			BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_idz00_4669,
																			CDR(BgL_instantiatez00_4654));
																		if (PAIRP(BgL_vz00_4670))
																			{	/* Eval/evobject.scm 1038 */
																				BgL_arg5335z00_4666 =
																					CAR(CDR(BgL_vz00_4670));
																			}
																		else
																			{	/* Eval/evobject.scm 1040 */
																				obj_t BgL_dz00_4672;

																				BgL_dz00_4672 =
																					BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																					(BgL_fz00_4668);
																				if ((BgL_dz00_4672 ==
																						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00
																						()))
																					{	/* Eval/evobject.scm 1041 */
																						BgL_arg5335z00_4666 =
																							BGl_expandzd2errorzd2zz__evobjectz00
																							(BGl_string6057z00zz__evobjectz00,
																							BGl_string5879z00zz__evobjectz00,
																							BgL_idz00_4669);
																					}
																				else
																					{	/* Eval/evobject.scm 1041 */
																						BgL_arg5335z00_4666 = BgL_dz00_4672;
																					}
																			}
																	}
																}
															}
															BgL_newtail2008z00_4664 =
																MAKE_PAIR(BgL_arg5335z00_4666, BNIL);
														}
														SET_CDR(BgL_tail2007z00_4661,
															BgL_newtail2008z00_4664);
														{
															obj_t BgL_tail2007z00_11686;

															obj_t BgL_l2004z00_11684;

															BgL_l2004z00_11684 = CDR(BgL_l2004z00_4660);
															BgL_tail2007z00_11686 = BgL_newtail2008z00_4664;
															BgL_tail2007z00_4661 = BgL_tail2007z00_11686;
															BgL_l2004z00_4660 = BgL_l2004z00_11684;
															goto BgL_zc3anonymousza35332ze3z83_4662;
														}
													}
											}
										}
								}
								{	/* Eval/evobject.scm 1076 */
									obj_t BgL_constrz00_4595;

									{
										obj_t BgL_cz00_7651;

										BgL_cz00_7651 = BgL_classz00_4589;
									BgL_findzd2classzd2constructorz00_7650:
										{	/* Eval/evobject.scm 1077 */
											obj_t BgL_constz00_7655;

											BgL_constz00_7655 =
												BGl_classzd2constructorzd2zz__objectz00(BgL_cz00_7651);
											if (CBOOL(BgL_constz00_7655))
												{	/* Eval/evobject.scm 1077 */
													BgL_constrz00_4595 = BgL_constz00_7655;
												}
											else
												{	/* Eval/evobject.scm 1077 */
													obj_t BgL_sz00_7656;

													BgL_sz00_7656 =
														BGl_classzd2superzd2zz__objectz00(BgL_cz00_7651);
													if (BGl_classzf3zf3zz__objectz00(BgL_sz00_7656))
														{
															obj_t BgL_cz00_11693;

															BgL_cz00_11693 = BgL_sz00_7656;
															BgL_cz00_7651 = BgL_cz00_11693;
															goto BgL_findzd2classzd2constructorz00_7650;
														}
													else
														{	/* Eval/evobject.scm 1077 */
															BgL_constrz00_4595 = BFALSE;
														}
												}
										}
									}
									{	/* Eval/evobject.scm 1077 */

										{	/* Eval/evobject.scm 1078 */
											obj_t BgL_arg5295z00_4596;

											obj_t BgL_arg5296z00_4597;

											BgL_arg5295z00_4596 = BGl_symbol5989z00zz__evobjectz00;
											{	/* Eval/evobject.scm 1079 */
												obj_t BgL_arg5297z00_4598;

												obj_t BgL_arg5298z00_4599;

												obj_t BgL_arg5299z00_4600;

												{	/* Eval/evobject.scm 1079 */
													obj_t BgL_arg5302z00_4603;

													{	/* Eval/evobject.scm 1079 */
														obj_t BgL_arg5303z00_4604;

														BgL_arg5303z00_4604 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_argsz00_4594, BNIL);
														{	/* Eval/evobject.scm 1079 */
															obj_t BgL_list5304z00_4605;

															BgL_list5304z00_4605 =
																MAKE_PAIR(BgL_arg5303z00_4604, BNIL);
															BgL_arg5302z00_4603 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_userz00_4588, BgL_list5304z00_4605);
														}
													}
													BgL_arg5297z00_4598 =
														MAKE_PAIR(BgL_fillz00_4593, BgL_arg5302z00_4603);
												}
												if (CBOOL(BgL_constrz00_4595))
													{	/* Eval/evobject.scm 1080 */
														obj_t BgL_arg5305z00_4606;

														{	/* Eval/evobject.scm 1080 */
															obj_t BgL_list5306z00_4607;

															BgL_list5306z00_4607 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg5305z00_4606 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_userz00_4588, BgL_list5306z00_4607);
														}
														BgL_arg5298z00_4599 =
															MAKE_PAIR(BgL_constrz00_4595,
															BgL_arg5305z00_4606);
													}
												else
													{	/* Eval/evobject.scm 1080 */
														BgL_arg5298z00_4599 = BFALSE;
													}
												{	/* Eval/evobject.scm 1081 */
													obj_t BgL_arg5307z00_4608;

													obj_t BgL_arg5308z00_4609;

													BgL_oz00_4683 = BgL_userz00_4588;
													BgL_classz00_4684 = BgL_classz00_4589;
													BgL_instantiatez00_4685 = BgL_instantiatez00_4590;
													{	/* Eval/evobject.scm 1050 */
														obj_t BgL_arg5347z00_4688;

														BgL_arg5347z00_4688 =
															BGl_classzd2allzd2fieldsz00zz__objectz00
															(BgL_classz00_4684);
														{	/* Eval/evobject.scm 1051 */
															obj_t BgL_zc3anonymousza35349ze3z83_7991;

															BgL_zc3anonymousza35349ze3z83_7991 =
																make_fx_procedure
																(BGl_zc3anonymousza35349ze3z83zz__evobjectz00,
																(int) (((long) 1)), (int) (((long) 3)));
															PROCEDURE_SET(BgL_zc3anonymousza35349ze3z83_7991,
																(int) (((long) 0)), BgL_instantiatez00_4685);
															PROCEDURE_SET(BgL_zc3anonymousza35349ze3z83_7991,
																(int) (((long) 1)), BgL_classz00_4684);
															PROCEDURE_SET(BgL_zc3anonymousza35349ze3z83_7991,
																(int) (((long) 2)), BgL_oz00_4683);
															{	/* Eval/evobject.scm 1050 */
																obj_t BgL_list5348z00_4689;

																BgL_list5348z00_4689 =
																	MAKE_PAIR(BgL_arg5347z00_4688, BNIL);
																BgL_arg5307z00_4608 =
																	BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																	(BgL_zc3anonymousza35349ze3z83_7991,
																	BgL_list5348z00_4689);
													}}}
													BgL_arg5308z00_4609 =
														MAKE_PAIR(BgL_userz00_4588, BNIL);
													BgL_arg5299z00_4600 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg5307z00_4608, BgL_arg5308z00_4609);
												}
												{	/* Eval/evobject.scm 1078 */
													obj_t BgL_list5300z00_4601;

													{	/* Eval/evobject.scm 1078 */
														obj_t BgL_arg5301z00_4602;

														BgL_arg5301z00_4602 =
															MAKE_PAIR(BgL_arg5299z00_4600, BNIL);
														BgL_list5300z00_4601 =
															MAKE_PAIR(BgL_arg5298z00_4599,
															BgL_arg5301z00_4602);
													}
													BgL_arg5296z00_4597 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg5297z00_4598, BgL_list5300z00_4601);
											}}
											return
												MAKE_PAIR(BgL_arg5295z00_4596, BgL_arg5296z00_4597);
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



/* <anonymous:5349> */
	obj_t BGl_zc3anonymousza35349ze3z83zz__evobjectz00(obj_t BgL_envz00_7998,
		obj_t BgL_fz00_8002)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 1050 */
			{	/* Eval/evobject.scm 1051 */
				obj_t BgL_instantiatez00_7999;

				obj_t BgL_classz00_8000;

				obj_t BgL_oz00_8001;

				BgL_instantiatez00_7999 =
					PROCEDURE_REF(BgL_envz00_7998, (int) (((long) 0)));
				BgL_classz00_8000 = PROCEDURE_REF(BgL_envz00_7998, (int) (((long) 1)));
				BgL_oz00_8001 = PROCEDURE_REF(BgL_envz00_7998, (int) (((long) 2)));
				{
					obj_t BgL_fz00_4690;

					BgL_fz00_4690 = BgL_fz00_8002;
					{	/* Eval/evobject.scm 1051 */
						bool_t BgL_testz00_11727;

						if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fz00_4690))
							{	/* Eval/evobject.scm 1051 */
								BgL_testz00_11727 =
									BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(BgL_fz00_4690);
							}
						else
							{	/* Eval/evobject.scm 1051 */
								BgL_testz00_11727 = ((bool_t) 0);
							}
						if (BgL_testz00_11727)
							{	/* Eval/evobject.scm 1053 */
								obj_t BgL_idz00_4693;

								BgL_idz00_4693 =
									BGl_classzd2fieldzd2namez00zz__objectz00(BgL_fz00_4690);
								{	/* Eval/evobject.scm 1053 */
									obj_t BgL_vz00_4694;

									BgL_vz00_4694 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_4693,
										CDR(BgL_instantiatez00_7999));
									{	/* Eval/evobject.scm 1054 */

										if (PAIRP(BgL_vz00_4694))
											{	/* Eval/evobject.scm 1056 */
												obj_t BgL_arg5352z00_4696;

												obj_t BgL_arg5353z00_4697;

												{	/* Eval/evobject.scm 1056 */
													obj_t BgL_arg5354z00_4698;

													BgL_arg5354z00_4698 =
														BGl_classzd2namezd2zz__objectz00(BgL_classz00_8000);
													{	/* Eval/evobject.scm 1056 */
														obj_t BgL_list2117z00_7704;

														{	/* Eval/evobject.scm 1056 */
															obj_t BgL_arg2118z00_7705;

															{	/* Eval/evobject.scm 1056 */
																obj_t BgL_arg2119z00_7706;

																obj_t BgL_arg2121z00_7707;

																BgL_arg2119z00_7706 =
																	BGl_symbol5822z00zz__evobjectz00;
																{	/* Eval/evobject.scm 1056 */
																	obj_t BgL_arg2123z00_7708;

																	BgL_arg2123z00_7708 =
																		MAKE_PAIR(BGl_symbol5824z00zz__evobjectz00,
																		BNIL);
																	BgL_arg2121z00_7707 =
																		MAKE_PAIR(BgL_idz00_4693,
																		BgL_arg2123z00_7708);
																}
																BgL_arg2118z00_7705 =
																	MAKE_PAIR(BgL_arg2119z00_7706,
																	BgL_arg2121z00_7707);
															}
															BgL_list2117z00_7704 =
																MAKE_PAIR(BgL_arg5354z00_4698,
																BgL_arg2118z00_7705);
														}
														BgL_arg5352z00_4696 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list2117z00_7704);
													}
												}
												{	/* Eval/evobject.scm 1056 */
													obj_t BgL_arg5355z00_4699;

													BgL_arg5355z00_4699 = CAR(CDR(BgL_vz00_4694));
													{	/* Eval/evobject.scm 1056 */
														obj_t BgL_list5357z00_4701;

														{	/* Eval/evobject.scm 1056 */
															obj_t BgL_arg5358z00_4702;

															BgL_arg5358z00_4702 = MAKE_PAIR(BNIL, BNIL);
															BgL_list5357z00_4701 =
																MAKE_PAIR(BgL_arg5355z00_4699,
																BgL_arg5358z00_4702);
														}
														BgL_arg5353z00_4697 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_oz00_8001, BgL_list5357z00_4701);
													}
												}
												return
													MAKE_PAIR(BgL_arg5352z00_4696, BgL_arg5353z00_4697);
											}
										else
											{	/* Eval/evobject.scm 1057 */
												obj_t BgL_dz00_4703;

												BgL_dz00_4703 =
													BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
													(BgL_fz00_4690);
												if ((BgL_dz00_4703 ==
														BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00
														()))
													{	/* Eval/evobject.scm 1058 */
														return BFALSE;
													}
												else
													{	/* Eval/evobject.scm 1059 */
														obj_t BgL_arg5360z00_4705;

														obj_t BgL_arg5361z00_4706;

														{	/* Eval/evobject.scm 1059 */
															obj_t BgL_arg5362z00_4707;

															BgL_arg5362z00_4707 =
																BGl_classzd2namezd2zz__objectz00
																(BgL_classz00_8000);
															{	/* Eval/evobject.scm 1059 */
																obj_t BgL_list2117z00_7715;

																{	/* Eval/evobject.scm 1059 */
																	obj_t BgL_arg2118z00_7716;

																	{	/* Eval/evobject.scm 1059 */
																		obj_t BgL_arg2119z00_7717;

																		obj_t BgL_arg2121z00_7718;

																		BgL_arg2119z00_7717 =
																			BGl_symbol5822z00zz__evobjectz00;
																		{	/* Eval/evobject.scm 1059 */
																			obj_t BgL_arg2123z00_7719;

																			BgL_arg2123z00_7719 =
																				MAKE_PAIR
																				(BGl_symbol5824z00zz__evobjectz00,
																				BNIL);
																			BgL_arg2121z00_7718 =
																				MAKE_PAIR(BgL_idz00_4693,
																				BgL_arg2123z00_7719);
																		}
																		BgL_arg2118z00_7716 =
																			MAKE_PAIR(BgL_arg2119z00_7717,
																			BgL_arg2121z00_7718);
																	}
																	BgL_list2117z00_7715 =
																		MAKE_PAIR(BgL_arg5362z00_4707,
																		BgL_arg2118z00_7716);
																}
																BgL_arg5360z00_4705 =
																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																	(BgL_list2117z00_7715);
															}
														}
														{	/* Eval/evobject.scm 1059 */
															obj_t BgL_list5363z00_4708;

															{	/* Eval/evobject.scm 1059 */
																obj_t BgL_arg5364z00_4709;

																BgL_arg5364z00_4709 = MAKE_PAIR(BNIL, BNIL);
																BgL_list5363z00_4708 =
																	MAKE_PAIR(BgL_dz00_4703, BgL_arg5364z00_4709);
															}
															BgL_arg5361z00_4706 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_oz00_8001, BgL_list5363z00_4708);
														}
														return
															MAKE_PAIR(BgL_arg5360z00_4705,
															BgL_arg5361z00_4706);
													}
											}
									}
								}
							}
						else
							{	/* Eval/evobject.scm 1051 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* <anonymous:5343> */
	obj_t BGl_zc3anonymousza35343ze3z83zz__evobjectz00(obj_t BgL_envz00_8003,
		obj_t BgL_fz00_8004)
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 1046 */
			{
				obj_t BgL_fz00_4679;

				{	/* Eval/evobject.scm 1046 */
					bool_t BgL_auxz00_11762;

					BgL_fz00_4679 = BgL_fz00_8004;
					if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fz00_4679))
						{	/* Eval/evobject.scm 1046 */
							BgL_auxz00_11762 = ((bool_t) 0);
						}
					else
						{	/* Eval/evobject.scm 1046 */
							BgL_auxz00_11762 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_11762);
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evobjectz00()
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evobjectz00()
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evobjectz00()
	{
		AN_OBJECT;
		{	/* Eval/evobject.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 393249273),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 32719508),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					183289170), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 535170906),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 357788136),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 174190226),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 41770876),
				BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
			return BGl_modulezd2initializa7ationz75zz__expander_definez00(((long)
					340645947), BSTRING_TO_STRING(BGl_string6064z00zz__evobjectz00));
		}
	}

#ifdef __cplusplus
}
#endif
