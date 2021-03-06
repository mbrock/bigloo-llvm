/*===========================================================================*/
/*   (Llib/error.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/error.scm -indent -o objs/obj_u/Llib/error.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;

	typedef struct BgL_z62typezd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
		obj_t BgL_typez00;
	}                         *BgL_z62typezd2errorzb0_bglt;

	typedef struct BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
		obj_t BgL_indexz00;
	}                                             
		*BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt;

	typedef struct BgL_z62iozd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                       *BgL_z62iozd2errorzb0_bglt;

	typedef struct BgL_z62iozd2portzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                              *BgL_z62iozd2portzd2errorz62_bglt;

	typedef struct BgL_z62iozd2readzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                              *BgL_z62iozd2readzd2errorz62_bglt;

	typedef struct BgL_z62iozd2writezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2writezd2errorz62_bglt;

	typedef struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                           
		*BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt;

	typedef struct BgL_z62iozd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2parsezd2errorz62_bglt;

	typedef struct BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                       
		*BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt;

	typedef struct BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                        
		*BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt;

	typedef struct BgL_z62iozd2sigpipezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                 *BgL_z62iozd2sigpipezd2errorz62_bglt;

	typedef struct BgL_z62iozd2timeoutzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                 *BgL_z62iozd2timeoutzd2errorz62_bglt;

	typedef struct BgL_z62processzd2exceptionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                *BgL_z62processzd2exceptionzb0_bglt;

	typedef struct BgL_z62warningz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                    *BgL_z62warningz62_bglt;


	extern obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl__sigillzd2errorzd2handlerz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza31978ze3z83zz__errorz00(obj_t);
	static obj_t BGl__z62tryz62zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_zc3anonymousza31992ze3z83zz__errorz00(obj_t, obj_t);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	static obj_t BGl__errorzf2czd2locationz20zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_notifyzd2interruptzd2zz__errorz00(int);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_sigsegvzd2errorzd2handlerz00zz__errorz00(obj_t);
	static obj_t BGl_symbol3138z00zz__errorz00 = BUNSPEC;
	static obj_t BGl_symbol3144z00zz__errorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__errorzf2errnozf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_notifyzd2z62errorzb0zz__errorz00(BgL_z62errorz62_bglt);
	static obj_t BGl_dirnamezd2ze3listz31zz__errorz00(obj_t);
	static obj_t BGl_uncygdrivez00zz__errorz00(obj_t);
	static obj_t BGl_fixzd2tabulationz12zc0zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__raisez00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_symbol3157z00zz__errorz00 = BUNSPEC;
	static obj_t BGl__getzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
	extern BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_z62errorz62_bglt BGl_makezd2z62errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL char *bgl_show_type(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_escz00zz__errorz00(obj_t, obj_t);
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__errorz00 = BUNSPEC;
	static obj_t BGl_symbol3192z00zz__errorz00 = BUNSPEC;
	extern obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t);
	static obj_t BGl__exitz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl__withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	extern int bgl_debug();
	BGL_EXPORTED_DECL obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningzf2loczf2zz__errorz00(obj_t, obj_t);
	extern int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
	extern obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	static obj_t BGl__errorzd2notifyzf2locationz20zz__errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__errorzf2sourcezf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__errorz00();
	extern obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
	extern BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_makezd2z62iozd2malformedzd2urlzd2errorz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__errorzf2sourcezd2locationz20zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_sigfpezd2errorzd2handlerz00zz__errorz00(obj_t);
	extern BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_typeof(obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_signalz00zz__osz00(int, obj_t);
	extern obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
	extern BgL_z62iozd2readzd2errorz62_bglt
		BGl_makezd2z62iozd2readzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t,
		obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__sigfpezd2errorzd2handlerz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_z62iozd2portzd2errorz62_bglt
		BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorzf2sourcezf2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__displayzd2tracezd2stackz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_getenvz00zz__osz00(char *);
	static obj_t BGl_displayzd2tracezd2stackzd2framezd2zz__errorz00(obj_t, long,
		obj_t, long);
	static obj_t BGl_cnstzd2initzd2zz__errorz00();
	extern obj_t BGl_basenamez00zz__osz00(obj_t);
	static obj_t BGl_relativezd2filezd2namez00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t bgl_find_runtime_type(obj_t);
	static obj_t BGl_defaultzd2interruptzd2notifierz00zz__errorz00(obj_t);
	extern BgL_z62iozd2writezd2errorz62_bglt
		BGl_makezd2z62iozd2writezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl__warningz00zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_z62tryz62zz__errorz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__errorz00();
	static obj_t BGl__warningzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	static obj_t BGl__defaultzd2interruptzd2notifierz00zz__errorz00(obj_t, obj_t);
	static obj_t
		BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00
		(BgL_z62errorz62_bglt);
	extern obj_t get_trace_stack(int);
	static obj_t BGl__warningzd2notifyzf2locationz20zz__errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl__warningzf2loczf2zz__errorz00(obj_t, obj_t, obj_t);
	extern BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_printzd2cursorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__errorzd2notifyzd2zz__errorz00(obj_t, obj_t);
	static obj_t BGl__typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__warningzf2czd2locationz20zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t the_failure(obj_t, obj_t, obj_t);
	extern bool_t bigloo_strncmp(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	static obj_t
		BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00(BgL_z62errorz62_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_makezd2z62iozd2unknownzd2hostzd2errorz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__notifyzd2interruptzd2zz__errorz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__errorz00();
	static obj_t BGl__findzd2runtimezd2typez00zz__errorz00(obj_t, obj_t);
	extern long bgl_list_length(obj_t);
	static obj_t BGl__warningzd2notifyzd2zz__errorz00(obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl__dumpzd2tracezd2stackz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__currentzd2exceptionzd2handlerz00zz__errorz00(obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningzd2notifyzf2locationz20zz__errorz00(obj_t,
		obj_t, int);
	extern int BGl_bigloozd2warningzd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_errorzf2czd2locationz20zz__errorz00(obj_t, obj_t,
		obj_t, char *, long);
	static obj_t BGl_zc3anonymousza32453ze3z83zz__errorz00(obj_t, obj_t);
	static obj_t BGl_notifyzd2z62errorzf2locz42zz__errorz00(BgL_z62errorz62_bglt,
		obj_t, obj_t);
	extern BgL_z62processzd2exceptionzb0_bglt
		BGl_makezd2z62processzd2exceptionz62zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningzf2czd2locationz20zz__errorz00(char *,
		long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorzd2notifyzf2locationz20zz__errorz00(obj_t,
		obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	extern obj_t unwind_stack_until(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_oszd2classzd2zz__osz00();
	static obj_t BGl__sigsegvzd2errorzd2handlerz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern BgL_z62typezd2errorzb0_bglt
		BGl_makezd2z62typezd2errorz62zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_z62warningz62_bglt BGl_makezd2z62warningzb0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__czd2debuggingzd2showzd2typezd2zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorzf2sourcezd2locationz20zz__errorz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32451ze3z83zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_z62errorz62zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_currentzd2exceptionzd2handlerz00zz__errorz00();
	extern obj_t string_to_bstring(char *);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl__defaultzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_z62conditionz62zz__objectz00;
	static obj_t BGl_zc3anonymousza32190ze3z83zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
	extern BgL_z62iozd2errorzb0_bglt
		BGl_makezd2z62iozd2errorz62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initzd2errorz00zz__errorz00(char *,
		char *);
	extern obj_t BGl_filezd2separatorzd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_sigbuszd2errorzd2handlerz00zz__errorz00(obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_dozd2warnzf2locationz20zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(obj_t);
	static obj_t BGl__the_failurez00zz__errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_locationzd2linezd2numz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl__typeofz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__sigbuszd2errorzd2handlerz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_z62exceptionz62zz__objectz00;
	extern obj_t BGl_z62warningz62zz__objectz00;
	static obj_t BGl_zc3anonymousza32216ze3z83zz__errorz00(obj_t, obj_t);
	extern BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_makezd2z62iozd2sigpipezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_raisez00zz__errorz00(obj_t);
	extern BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_makezd2z62iozd2timeoutzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
	static obj_t BGl_sigillzd2errorzd2handlerz00zz__errorz00(obj_t);
	static obj_t BGl__bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__modulezd2initzd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__errorz00();
	extern obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzf2czd2locationzd2envzf2zz__errorz00,
		BgL_bgl__errorza7f2cza7d2loc3244z00,
		BGl__errorzf2czd2locationz20zz__errorz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2errorzd2envz00zz__errorz00,
		BgL_bgl__typeza7d2errorza7d23245z00, BGl__typezd2errorzd2zz__errorz00, 0L,
		BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2typezd2errorzf2locationzd2envz20zz__errorz00,
		BgL_bgl__biglooza7d2typeza7d3246z00,
		BGl__bigloozd2typezd2errorzf2locationzf2zz__errorz00, 0L, BUNSPEC, 5);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sigfpezd2errorzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl__sigfpeza7d2errorza73247z00,
		BGl__sigfpezd2errorzd2handlerz00zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2runtimezd2typezd2envzd2zz__errorz00,
		BgL_bgl__findza7d2runtimeza73248z00,
		BGl__findzd2runtimezd2typez00zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2exceptionzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl__currentza7d2excep3249za7,
		BGl__currentzd2exceptionzd2handlerz00zz__errorz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_exitzd2envzd2zz__errorz00,
		BgL_bgl__exitza700za7za7__erro3250za7, va_generic_entry,
		BGl__exitz00zz__errorz00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_raisezd2envzd2zz__errorz00,
		BgL_bgl__raiseza700za7za7__err3251za7, BGl__raisez00zz__errorz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzd2envzd2zz__errorz00,
		BgL_bgl__warningza700za7za7__e3252za7, va_generic_entry,
		BGl__warningz00zz__errorz00, BUNSPEC, -1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_defaultzd2exceptionzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl__defaultza7d2excep3253za7,
		BGl__defaultzd2exceptionzd2handlerz00zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_modulezd2initzd2errorzd2envzd2zz__errorz00,
		BgL_bgl__moduleza7d2initza7d3254z00,
		BGl__modulezd2initzd2errorz00zz__errorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_defaultzd2interruptzd2notifierzd2envzd2zz__errorz00,
		BgL_bgl__defaultza7d2inter3255za7,
		BGl__defaultzd2interruptzd2notifierz00zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_the_failurezd2envzd2zz__errorz00,
		BgL_bgl__the_failureza700za73256z00, BGl__the_failurez00zz__errorz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_czd2debuggingzd2showzd2typezd2envz00zz__errorz00,
		BgL_bgl__cza7d2debuggingza7d3257z00,
		BGl__czd2debuggingzd2showzd2typezd2zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3176z00zz__errorz00,
		BgL_bgl_za7c3anonymousza7a323258z00,
		BGl_zc3anonymousza32190ze3z83zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3180z00zz__errorz00,
		BgL_bgl_za7c3anonymousza7a323259z00,
		BGl_zc3anonymousza32216ze3z83zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzf2errnozd2envz20zz__errorz00,
		BgL_bgl__errorza7f2errnoza7f3260z00, BGl__errorzf2errnozf2zz__errorz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzf2locationzd2envz20zz__errorz00,
		BgL_bgl__warningza7f2locat3261za7, va_generic_entry,
		BGl__warningzf2locationzf2zz__errorz00, BUNSPEC, -3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sigbuszd2errorzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl__sigbusza7d2errorza73262z00,
		BGl__sigbuszd2errorzd2handlerz00zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62tryzd2envzb0zz__errorz00,
		BgL_bgl__za762tryza762za7za7__er3263z00, BGl__z62tryz62zz__errorz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzf2locationzd2envz20zz__errorz00,
		BgL_bgl__errorza7f2locatio3264za7, BGl__errorzf2locationzf2zz__errorz00, 0L,
		BUNSPEC, 5);
	      DEFINE_STRING(BGl_string3130z00zz__errorz00,
		BgL_bgl_string3130za700za7za7_3265za7, "BIGLOOSTACKDEPTH", 16);
	      DEFINE_STRING(BGl_string3131z00zz__errorz00,
		BgL_bgl_string3131za700za7za7_3266za7, "\077\077?", 3);
	      DEFINE_STRING(BGl_string3132z00zz__errorz00,
		BgL_bgl_string3132za700za7za7_3267za7, "Type", 4);
	      DEFINE_STRING(BGl_string3133z00zz__errorz00,
		BgL_bgl_string3133za700za7za7_3268za7, "]", 1);
	      DEFINE_STRING(BGl_string3134z00zz__errorz00,
		BgL_bgl_string3134za700za7za7_3269za7, "index out of range [0..", 23);
	      DEFINE_STRING(BGl_string3135z00zz__errorz00,
		BgL_bgl_string3135za700za7za7_3270za7, "/tmp/bigloo/runtime/Llib/error.scm",
		34);
	      DEFINE_STRING(BGl_string3136z00zz__errorz00,
		BgL_bgl_string3136za700za7za7_3271za7, "_error/errno", 12);
	      DEFINE_STRING(BGl_string3137z00zz__errorz00,
		BgL_bgl_string3137za700za7za7_3272za7, "int", 3);
	      DEFINE_STRING(BGl_string3140z00zz__errorz00,
		BgL_bgl_string3140za700za7za7_3273za7, "Incorrect handler arity", 23);
	      DEFINE_STRING(BGl_string3139z00zz__errorz00,
		BgL_bgl_string3139za700za7za7_3274za7, "with-exception-handler", 22);
	      DEFINE_STRING(BGl_string3141z00zz__errorz00,
		BgL_bgl_string3141za700za7za7_3275za7, "Incorrect thunk arity", 21);
	      DEFINE_STRING(BGl_string3142z00zz__errorz00,
		BgL_bgl_string3142za700za7za7_3276za7, "_with-exception-handler", 23);
	      DEFINE_STRING(BGl_string3143z00zz__errorz00,
		BgL_bgl_string3143za700za7za7_3277za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3145z00zz__errorz00,
		BgL_bgl_string3145za700za7za7_3278za7, "raise", 5);
	      DEFINE_STRING(BGl_string3146z00zz__errorz00,
		BgL_bgl_string3146za700za7za7_3279za7, "Handler return from error", 25);
	      DEFINE_STRING(BGl_string3147z00zz__errorz00,
		BgL_bgl_string3147za700za7za7_3280za7, "uncaught execption", 18);
	      DEFINE_STRING(BGl_string3148z00zz__errorz00,
		BgL_bgl_string3148za700za7za7_3281za7,
		"' must be recompiled (see also -unsafev option).", 48);
	      DEFINE_STRING(BGl_string3150z00zz__errorz00,
		BgL_bgl_string3150za700za7za7_3282za7, "'.\n", 3);
	      DEFINE_STRING(BGl_string3149z00zz__errorz00,
		BgL_bgl_string3149za700za7za7_3283za7, "At least `", 10);
	      DEFINE_STRING(BGl_string3151z00zz__errorz00,
		BgL_bgl_string3151za700za7za7_3284za7,
		"' is inconsistently initialized by module `", 43);
	      DEFINE_STRING(BGl_string3152z00zz__errorz00,
		BgL_bgl_string3152za700za7za7_3285za7, "Module `", 8);
	      DEFINE_STRING(BGl_string3153z00zz__errorz00,
		BgL_bgl_string3153za700za7za7_3286za7,
		":Inconsistent module initialization\n", 36);
	      DEFINE_STRING(BGl_string3154z00zz__errorz00,
		BgL_bgl_string3154za700za7za7_3287za7, "*** ERROR:", 10);
	      DEFINE_STRING(BGl_string3155z00zz__errorz00,
		BgL_bgl_string3155za700za7za7_3288za7, "_module-init-error", 18);
	      DEFINE_STRING(BGl_string3156z00zz__errorz00,
		BgL_bgl_string3156za700za7za7_3289za7, "string", 6);
	      DEFINE_STRING(BGl_string3158z00zz__errorz00,
		BgL_bgl_string3158za700za7za7_3290za7, "at", 2);
	      DEFINE_STRING(BGl_string3160z00zz__errorz00,
		BgL_bgl_string3160za700za7za7_3291za7, "long", 4);
	      DEFINE_STRING(BGl_string3159z00zz__errorz00,
		BgL_bgl_string3159za700za7za7_3292za7, "_error/c-location", 17);
	      DEFINE_STRING(BGl_string3161z00zz__errorz00,
		BgL_bgl_string3161za700za7za7_3293za7, "' provided", 10);
	      DEFINE_STRING(BGl_string3162z00zz__errorz00,
		BgL_bgl_string3162za700za7za7_3294za7, "' expected, `", 13);
	      DEFINE_STRING(BGl_string3163z00zz__errorz00,
		BgL_bgl_string3163za700za7za7_3295za7, " `", 2);
	      DEFINE_STRING(BGl_string3164z00zz__errorz00,
		BgL_bgl_string3164za700za7za7_3296za7, "_bigloo-type-error-msg", 22);
	      DEFINE_STRING(BGl_string3165z00zz__errorz00,
		BgL_bgl_string3165za700za7za7_3297za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3166z00zz__errorz00,
		BgL_bgl_string3166za700za7za7_3298za7, "_warning/c-location", 19);
	      DEFINE_STRING(BGl_string3167z00zz__errorz00,
		BgL_bgl_string3167za700za7za7_3299za7, ":\n", 2);
	      DEFINE_STRING(BGl_string3168z00zz__errorz00,
		BgL_bgl_string3168za700za7za7_3300za7, " -- ", 4);
	      DEFINE_STRING(BGl_string3170z00zz__errorz00,
		BgL_bgl_string3170za700za7za7_3301za7, "File \"", 6);
	      DEFINE_STRING(BGl_string3169z00zz__errorz00,
		BgL_bgl_string3169za700za7za7_3302za7, "\", character ", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_warningzd2notifyzf2locationzd2envzf2zz__errorz00,
		BgL_bgl__warningza7d2notif3303za7,
		BGl__warningzd2notifyzf2locationz20zz__errorz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3171z00zz__errorz00,
		BgL_bgl_string3171za700za7za7_3304za7, "", 0);
	      DEFINE_STRING(BGl_string3172z00zz__errorz00,
		BgL_bgl_string3172za700za7za7_3305za7, "win32", 5);
	      DEFINE_STRING(BGl_string3173z00zz__errorz00,
		BgL_bgl_string3173za700za7za7_3306za7, "*** CONDITION: ", 15);
	      DEFINE_STRING(BGl_string3174z00zz__errorz00,
		BgL_bgl_string3174za700za7za7_3307za7, "_error-notify/location", 22);
	      DEFINE_STRING(BGl_string3175z00zz__errorz00,
		BgL_bgl_string3175za700za7za7_3308za7, "*** WARNING:bigloo:", 19);
	      DEFINE_STRING(BGl_string3177z00zz__errorz00,
		BgL_bgl_string3177za700za7za7_3309za7, "[string]", 8);
	      DEFINE_STRING(BGl_string3178z00zz__errorz00,
		BgL_bgl_string3178za700za7za7_3310za7, "[stdin]", 7);
	      DEFINE_STRING(BGl_string3179z00zz__errorz00,
		BgL_bgl_string3179za700za7za7_3311za7, "_warning-notify/location", 24);
	      DEFINE_STRING(BGl_string3181z00zz__errorz00,
		BgL_bgl_string3181za700za7za7_3312za7, "    ", 4);
	      DEFINE_STRING(BGl_string3182z00zz__errorz00,
		BgL_bgl_string3182za700za7za7_3313za7, "   ", 3);
	      DEFINE_STRING(BGl_string3183z00zz__errorz00,
		BgL_bgl_string3183za700za7za7_3314za7, "  ", 2);
	      DEFINE_STRING(BGl_string3184z00zz__errorz00,
		BgL_bgl_string3184za700za7za7_3315za7, ". ", 2);
	      DEFINE_STRING(BGl_string3185z00zz__errorz00,
		BgL_bgl_string3185za700za7za7_3316za7, " (* ", 4);
	      DEFINE_STRING(BGl_string3186z00zz__errorz00,
		BgL_bgl_string3186za700za7za7_3317za7, ")", 1);
	      DEFINE_STRING(BGl_string3187z00zz__errorz00,
		BgL_bgl_string3187za700za7za7_3318za7, ", ", 2);
	      DEFINE_STRING(BGl_string3188z00zz__errorz00,
		BgL_bgl_string3188za700za7za7_3319za7, ":", 1);
	      DEFINE_STRING(BGl_string3200z00zz__errorz00,
		BgL_bgl_string3200za700za7za7_3320za7, "/", 1);
	      DEFINE_STRING(BGl_string3190z00zz__errorz00,
		BgL_bgl_string3190za700za7za7_3321za7, "_display-trace-stack", 20);
	      DEFINE_STRING(BGl_string3189z00zz__errorz00,
		BgL_bgl_string3189za700za7za7_3322za7, "@", 1);
	      DEFINE_STRING(BGl_string3201z00zz__errorz00,
		BgL_bgl_string3201za700za7za7_3323za7, "/cygdrive/", 10);
	      DEFINE_STRING(BGl_string3191z00zz__errorz00,
		BgL_bgl_string3191za700za7za7_3324za7, "output-port", 11);
	      DEFINE_STRING(BGl_string3202z00zz__errorz00,
		BgL_bgl_string3202za700za7za7_3325za7, "bint", 4);
	      DEFINE_STRING(BGl_string3203z00zz__errorz00,
		BgL_bgl_string3203za700za7za7_3326za7, "real", 4);
	      DEFINE_STRING(BGl_string3193z00zz__errorz00,
		BgL_bgl_string3193za700za7za7_3327za7, "done", 4);
	      DEFINE_STRING(BGl_string3204z00zz__errorz00,
		BgL_bgl_string3204za700za7za7_3328za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3194z00zz__errorz00,
		BgL_bgl_string3194za700za7za7_3329za7, "^", 1);
	      DEFINE_STRING(BGl_string3205z00zz__errorz00,
		BgL_bgl_string3205za700za7za7_3330za7, "keyword", 7);
	      DEFINE_STRING(BGl_string3195z00zz__errorz00,
		BgL_bgl_string3195za700za7za7_3331za7, "#", 1);
	      DEFINE_STRING(BGl_string3206z00zz__errorz00,
		BgL_bgl_string3206za700za7za7_3332za7, "bchar", 5);
	      DEFINE_STRING(BGl_string3196z00zz__errorz00,
		BgL_bgl_string3196za700za7za7_3333za7, ", character ", 12);
	      DEFINE_STRING(BGl_string3207z00zz__errorz00,
		BgL_bgl_string3207za700za7za7_3334za7, "bbool", 5);
	      DEFINE_STRING(BGl_string3197z00zz__errorz00,
		BgL_bgl_string3197za700za7za7_3335za7, "\", line ", 8);
	      DEFINE_STRING(BGl_string3208z00zz__errorz00,
		BgL_bgl_string3208za700za7za7_3336za7, "bnil", 4);
	      DEFINE_STRING(BGl_string3198z00zz__errorz00,
		BgL_bgl_string3198za700za7za7_3337za7, ".", 1);
	      DEFINE_STRING(BGl_string3210z00zz__errorz00,
		BgL_bgl_string3210za700za7za7_3338za7, "pair", 4);
	      DEFINE_STRING(BGl_string3209z00zz__errorz00,
		BgL_bgl_string3209za700za7za7_3339za7, "epair", 5);
	      DEFINE_STRING(BGl_string3199z00zz__errorz00,
		BgL_bgl_string3199za700za7za7_3340za7, "../", 3);
	      DEFINE_STRING(BGl_string3211z00zz__errorz00,
		BgL_bgl_string3211za700za7za7_3341za7, "class", 5);
	      DEFINE_STRING(BGl_string3212z00zz__errorz00,
		BgL_bgl_string3212za700za7za7_3342za7, "vector", 6);
	      DEFINE_STRING(BGl_string3213z00zz__errorz00,
		BgL_bgl_string3213za700za7za7_3343za7, "tvector", 7);
	      DEFINE_STRING(BGl_string3214z00zz__errorz00,
		BgL_bgl_string3214za700za7za7_3344za7, "struct", 6);
	      DEFINE_STRING(BGl_string3215z00zz__errorz00,
		BgL_bgl_string3215za700za7za7_3345za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3216z00zz__errorz00,
		BgL_bgl_string3216za700za7za7_3346za7, "binary-port", 11);
	      DEFINE_STRING(BGl_string3217z00zz__errorz00,
		BgL_bgl_string3217za700za7za7_3347za7, "cell", 4);
	      DEFINE_STRING(BGl_string3218z00zz__errorz00,
		BgL_bgl_string3218za700za7za7_3348za7, "foreign:", 8);
	      DEFINE_STRING(BGl_string3220z00zz__errorz00,
		BgL_bgl_string3220za700za7za7_3349za7, "socket", 6);
	      DEFINE_STRING(BGl_string3219z00zz__errorz00,
		BgL_bgl_string3219za700za7za7_3350za7, "bcnst", 5);
	      DEFINE_STRING(BGl_string3221z00zz__errorz00,
		BgL_bgl_string3221za700za7za7_3351za7, "process", 7);
	      DEFINE_STRING(BGl_string3222z00zz__errorz00,
		BgL_bgl_string3222za700za7za7_3352za7, "custom", 6);
	      DEFINE_STRING(BGl_string3223z00zz__errorz00,
		BgL_bgl_string3223za700za7za7_3353za7, "opaque", 6);
	      DEFINE_STRING(BGl_string3224z00zz__errorz00,
		BgL_bgl_string3224za700za7za7_3354za7, "_", 1);
	      DEFINE_STRING(BGl_string3225z00zz__errorz00,
		BgL_bgl_string3225za700za7za7_3355za7, "ucs2string", 10);
	      DEFINE_STRING(BGl_string3226z00zz__errorz00,
		BgL_bgl_string3226za700za7za7_3356za7, "ucs2", 4);
	      DEFINE_STRING(BGl_string3227z00zz__errorz00,
		BgL_bgl_string3227za700za7za7_3357za7, "elong", 5);
	      DEFINE_STRING(BGl_string3228z00zz__errorz00,
		BgL_bgl_string3228za700za7za7_3358za7, "llong", 5);
	      DEFINE_STRING(BGl_string3230z00zz__errorz00,
		BgL_bgl_string3230za700za7za7_3359za7, "condvar", 7);
	      DEFINE_STRING(BGl_string3229z00zz__errorz00,
		BgL_bgl_string3229za700za7za7_3360za7, "mutex", 5);
	      DEFINE_STRING(BGl_string3231z00zz__errorz00,
		BgL_bgl_string3231za700za7za7_3361za7, "date", 4);
	      DEFINE_STRING(BGl_string3232z00zz__errorz00,
		BgL_bgl_string3232za700za7za7_3362za7, "bignum", 6);
	      DEFINE_STRING(BGl_string3233z00zz__errorz00,
		BgL_bgl_string3233za700za7za7_3363za7, "_&try", 5);
	      DEFINE_STRING(BGl_string3234z00zz__errorz00,
		BgL_bgl_string3234za700za7za7_3364za7, "_notify-interrupt", 17);
	      DEFINE_STRING(BGl_string3235z00zz__errorz00,
		BgL_bgl_string3235za700za7za7_3365za7, "*** INTERRUPT:bigloo:", 21);
	      DEFINE_STRING(BGl_string3236z00zz__errorz00,
		BgL_bgl_string3236za700za7za7_3366za7, "arithmetic procedure", 20);
	      DEFINE_STRING(BGl_string3237z00zz__errorz00,
		BgL_bgl_string3237za700za7za7_3367za7, "`floating point' exception", 26);
	      DEFINE_STRING(BGl_string3238z00zz__errorz00,
		BgL_bgl_string3238za700za7za7_3368za7, "raised", 6);
	      DEFINE_STRING(BGl_string3240z00zz__errorz00,
		BgL_bgl_string3240za700za7za7_3369za7, "`illegal instruction' exception",
		31);
	      DEFINE_STRING(BGl_string3239z00zz__errorz00,
		BgL_bgl_string3239za700za7za7_3370za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string3241z00zz__errorz00,
		BgL_bgl_string3241za700za7za7_3371za7, "`bus error' exception", 21);
	      DEFINE_STRING(BGl_string3242z00zz__errorz00,
		BgL_bgl_string3242za700za7za7_3372za7, "`segmentation violation' exception",
		34);
	      DEFINE_STRING(BGl_string3243z00zz__errorz00,
		BgL_bgl_string3243za700za7za7_3373za7, "__error", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2typezd2errorzd2msgzd2envz00zz__errorz00,
		BgL_bgl__biglooza7d2typeza7d3374z00,
		BGl__bigloozd2typezd2errorzd2msgzd2zz__errorz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_errorzd2notifyzf2locationzd2envzf2zz__errorz00,
		BgL_bgl__errorza7d2notifyza73375z00,
		BGl__errorzd2notifyzf2locationz20zz__errorz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzf2loczd2envz20zz__errorz00,
		BgL_bgl__warningza7f2locza7f3376z00, va_generic_entry,
		BGl__warningzf2loczf2zz__errorz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2exceptionzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl__withza7d2exceptio3377za7,
		BGl__withzd2exceptionzd2handlerz00zz__errorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sigsegvzd2errorzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl__sigsegvza7d2error3378za7,
		BGl__sigsegvzd2errorzd2handlerz00zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sigillzd2errorzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl__sigillza7d2errorza73379z00,
		BGl__sigillzd2errorzd2handlerz00zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_errorzf2sourcezd2locationzd2envzf2zz__errorz00,
		BgL_bgl__errorza7f2sourceza73380z00,
		BGl__errorzf2sourcezd2locationz20zz__errorz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexzd2outzd2ofzd2boundszd2errorzd2envzd2zz__errorz00,
		BgL_bgl__indexza7d2outza7d2o3381z00,
		BGl__indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzd2envzd2zz__errorz00,
		BgL_bgl__errorza700za7za7__err3382za7, BGl__errorz00zz__errorz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2tracezd2stackzd2envzd2zz__errorz00,
		BgL_bgl__getza7d2traceza7d2s3383z00, opt_generic_entry,
		BGl__getzd2tracezd2stackz00zz__errorz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_notifyzd2interruptzd2envz00zz__errorz00,
		BgL_bgl__notifyza7d2interr3384za7, BGl__notifyzd2interruptzd2zz__errorz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzf2czd2locationzd2envzf2zz__errorz00,
		BgL_bgl__warningza7f2cza7d2l3385z00, va_generic_entry,
		BGl__warningzf2czd2locationz20zz__errorz00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2tracezd2stackzd2envzd2zz__errorz00,
		BgL_bgl__displayza7d2trace3386za7,
		BGl__displayzd2tracezd2stackz00zz__errorz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typeofzd2envzd2zz__errorz00,
		BgL_bgl__typeofza700za7za7__er3387za7, BGl__typeofz00zz__errorz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzf2sourcezd2envz20zz__errorz00,
		BgL_bgl__errorza7f2sourceza73388z00, BGl__errorzf2sourcezf2zz__errorz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzd2notifyzd2envz00zz__errorz00,
		BgL_bgl__errorza7d2notifyza73389z00, BGl__errorzd2notifyzd2zz__errorz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzd2notifyzd2envz00zz__errorz00,
		BgL_bgl__warningza7d2notif3390za7, BGl__warningzd2notifyzd2zz__errorz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2tracezd2stackzd2envzd2zz__errorz00,
		BgL_bgl__dumpza7d2traceza7d23391z00,
		BGl__dumpzd2tracezd2stackz00zz__errorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2typezd2errorzd2envzd2zz__errorz00,
		BgL_bgl__biglooza7d2typeza7d3392z00,
		BGl__bigloozd2typezd2errorz00zz__errorz00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long
		BgL_checksumz00_4044, char *BgL_fromz00_4045)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__errorz00))
				{
					BGl_requirezd2initializa7ationz75zz__errorz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__errorz00();
					BGl_importedzd2moduleszd2initz00zz__errorz00();
					BGl_toplevelzd2initzd2zz__errorz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__errorz00()
	{
		AN_OBJECT;
		{	/* Llib/error.scm 18 */
			BGl_symbol3138z00zz__errorz00 =
				bstring_to_symbol(BGl_string3139z00zz__errorz00);
			BGl_symbol3144z00zz__errorz00 =
				bstring_to_symbol(BGl_string3145z00zz__errorz00);
			BGl_symbol3157z00zz__errorz00 =
				bstring_to_symbol(BGl_string3158z00zz__errorz00);
			return (BGl_symbol3192z00zz__errorz00 =
				bstring_to_symbol(BGl_string3193z00zz__errorz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__errorz00()
	{
		AN_OBJECT;
		{	/* Llib/error.scm 18 */
			BGl_signalz00zz__osz00(SIGFPE,
				BGl_sigfpezd2errorzd2handlerzd2envzd2zz__errorz00);
			BGl_signalz00zz__osz00(SIGILL,
				BGl_sigillzd2errorzd2handlerzd2envzd2zz__errorz00);
			BGl_signalz00zz__osz00(SIGBUS,
				BGl_sigbuszd2errorzd2handlerzd2envzd2zz__errorz00);
			return BGl_signalz00zz__osz00(SIGSEGV,
				BGl_sigsegvzd2errorzd2handlerzd2envzd2zz__errorz00);
		}
	}



/* _get-trace-stack */
	obj_t BGl__getzd2tracezd2stackz00zz__errorz00(obj_t BgL_envz00_3,
		obj_t BgL_optz00_2)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 244 */
			{	/* Llib/error.scm 244 */

				{	/* Llib/error.scm 244 */
					int BgL_aux1882z00_1164;

					BgL_aux1882z00_1164 = VECTOR_LENGTH(BgL_optz00_2);
					switch ((long) (BgL_aux1882z00_1164))
						{
						case ((long) 0):

							{	/* Llib/error.scm 244 */

								return BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
							}
							break;
						case ((long) 1):

							{	/* Llib/error.scm 244 */
								obj_t BgL_depthz00_1167;

								BgL_depthz00_1167 =
									VECTOR_REF(BgL_optz00_2, (int) (((long) 0)));
								{	/* Llib/error.scm 244 */

									return
										BGl_getzd2tracezd2stackz00zz__errorz00(BgL_depthz00_1167);
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



/* get-trace-stack */
	BGL_EXPORTED_DEF obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t
		BgL_depthz00_1)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 244 */
			{	/* Llib/error.scm 245 */
				obj_t BgL_dz00_1168;

				if (INTEGERP(BgL_depthz00_1))
					{	/* Llib/error.scm 246 */
						BgL_dz00_1168 = BgL_depthz00_1;
					}
				else
					{	/* Llib/error.scm 247 */
						obj_t BgL_g1825z00_1170;

						BgL_g1825z00_1170 =
							BGl_getenvz00zz__osz00(BSTRING_TO_STRING
							(BGl_string3130z00zz__errorz00));
						if (CBOOL(BgL_g1825z00_1170))
							{	/* Llib/error.scm 247 */
								BgL_dz00_1168 =
									BINT(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
									(BgL_g1825z00_1170, BNIL));
							}
						else
							{	/* Llib/error.scm 248 */
								bool_t BgL_testz00_4075;

								{	/* Llib/error.scm 248 */
									int BgL_arg1926z00_1176;

									BgL_arg1926z00_1176 =
										BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
									BgL_testz00_4075 = ((bool_t) 1);
								}
								if (BgL_testz00_4075)
									{	/* Llib/error.scm 248 */
										BgL_dz00_1168 =
											BINT(BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00());
									}
								else
									{	/* Llib/error.scm 249 */
										int BgL_arg1924z00_1174;

										BgL_arg1924z00_1174 = bgl_debug();
										BgL_dz00_1168 =
											BINT(((long) (BgL_arg1924z00_1174) * ((long) 10)));
					}}}
				return get_trace_stack(CINT(BgL_dz00_1168));
			}
		}
	}



/* the_failure */
	BGL_EXPORTED_DEF obj_t the_failure(obj_t BgL_procz00_4, obj_t BgL_msgz00_5,
		obj_t BgL_objz00_6)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 255 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_procz00_4,
					BGl_z62exceptionz62zz__objectz00))
				{	/* Llib/error.scm 256 */
					return BGl_raisez00zz__errorz00(BgL_procz00_4);
				}
			else
				{	/* Llib/error.scm 256 */
					BgL_z62errorz62_bglt BgL_arg2015z00_2694;

					{	/* Llib/error.scm 256 */
						obj_t BgL_arg2016z00_2695;

						{	/* Llib/error.scm 256 */

							{	/* Llib/error.scm 256 */

								BgL_arg2016z00_2695 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
							}
						}
						BgL_arg2015z00_2694 =
							BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
							BgL_arg2016z00_2695, BgL_procz00_4, BgL_msgz00_5, BgL_objz00_6);
					}
					return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2694));
				}
		}
	}



/* _the_failure */
	obj_t BGl__the_failurez00zz__errorz00(obj_t BgL_envz00_3858,
		obj_t BgL_procz00_3859, obj_t BgL_msgz00_3860, obj_t BgL_objz00_3861)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 255 */
			return the_failure(BgL_procz00_3859, BgL_msgz00_3860, BgL_objz00_3861);
		}
	}



/* error/errno */
	BGL_EXPORTED_DEF obj_t bgl_system_failure(int BgL_sysnoz00_7,
		obj_t BgL_procz00_8, obj_t BgL_msgz00_9, obj_t BgL_objz00_10)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 263 */
			if (((long) (BgL_sysnoz00_7) == (long) (BGL_IO_ERROR)))
				{	/* Llib/error.scm 266 */
					BgL_z62iozd2errorzb0_bglt BgL_arg1929z00_1179;

					{	/* Llib/error.scm 266 */
						obj_t BgL_arg1930z00_1180;

						{	/* Llib/error.scm 266 */

							{	/* Llib/error.scm 266 */

								BgL_arg1930z00_1180 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}}
						BgL_arg1929z00_1179 =
							BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE,
							BgL_arg1930z00_1180, BgL_procz00_8, BgL_msgz00_9, BgL_objz00_10);
					}
					return BGl_raisez00zz__errorz00((obj_t) (BgL_arg1929z00_1179));
				}
			else
				{	/* Llib/error.scm 265 */
					if (((long) (BgL_sysnoz00_7) == (long) (BGL_IO_PORT_ERROR)))
						{	/* Llib/error.scm 268 */
							BgL_z62iozd2portzd2errorz62_bglt BgL_arg1932z00_1183;

							{	/* Llib/error.scm 268 */
								obj_t BgL_arg1935z00_1184;

								{	/* Llib/error.scm 268 */

									{	/* Llib/error.scm 268 */

										BgL_arg1935z00_1184 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}}
								BgL_arg1932z00_1183 =
									BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00(BFALSE,
									BFALSE, BgL_arg1935z00_1184, BgL_procz00_8, BgL_msgz00_9,
									BgL_objz00_10);
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg1932z00_1183));
						}
					else
						{	/* Llib/error.scm 267 */
							if (((long) (BgL_sysnoz00_7) == (long) (BGL_IO_READ_ERROR)))
								{	/* Llib/error.scm 270 */
									BgL_z62iozd2readzd2errorz62_bglt BgL_arg1937z00_1187;

									{	/* Llib/error.scm 270 */
										obj_t BgL_arg1938z00_1188;

										{	/* Llib/error.scm 270 */

											{	/* Llib/error.scm 270 */

												BgL_arg1938z00_1188 =
													BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}}
										BgL_arg1937z00_1187 =
											BGl_makezd2z62iozd2readzd2errorzb0zz__objectz00(BFALSE,
											BFALSE, BgL_arg1938z00_1188, BgL_procz00_8, BgL_msgz00_9,
											BgL_objz00_10);
									}
									return
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg1937z00_1187));
								}
							else
								{	/* Llib/error.scm 269 */
									if (((long) (BgL_sysnoz00_7) == (long) (BGL_IO_WRITE_ERROR)))
										{	/* Llib/error.scm 272 */
											BgL_z62iozd2writezd2errorz62_bglt BgL_arg1940z00_1191;

											{	/* Llib/error.scm 272 */
												obj_t BgL_arg1941z00_1192;

												{	/* Llib/error.scm 272 */

													{	/* Llib/error.scm 272 */

														BgL_arg1941z00_1192 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
												}}
												BgL_arg1940z00_1191 =
													BGl_makezd2z62iozd2writezd2errorzb0zz__objectz00
													(BFALSE, BFALSE, BgL_arg1941z00_1192, BgL_procz00_8,
													BgL_msgz00_9, BgL_objz00_10);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg1940z00_1191));
										}
									else
										{	/* Llib/error.scm 271 */
											if (
												((long) (BgL_sysnoz00_7) ==
													(long) (BGL_IO_UNKNOWN_HOST_ERROR)))
												{	/* Llib/error.scm 274 */
													BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
														BgL_arg1943z00_1195;
													{	/* Llib/error.scm 274 */
														obj_t BgL_arg1944z00_1196;

														{	/* Llib/error.scm 274 */

															{	/* Llib/error.scm 274 */

																BgL_arg1944z00_1196 =
																	BGl_getzd2tracezd2stackz00zz__errorz00
																	(BFALSE);
														}}
														BgL_arg1943z00_1195 =
															BGl_makezd2z62iozd2unknownzd2hostzd2errorz62zz__objectz00
															(BFALSE, BFALSE, BgL_arg1944z00_1196,
															BgL_procz00_8, BgL_msgz00_9, BgL_objz00_10);
													}
													return
														BGl_raisez00zz__errorz00(
														(obj_t) (BgL_arg1943z00_1195));
												}
											else
												{	/* Llib/error.scm 273 */
													if (
														((long) (BgL_sysnoz00_7) ==
															(long) (BGL_IO_FILE_NOT_FOUND_ERROR)))
														{	/* Llib/error.scm 276 */
															BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
																BgL_arg1946z00_1199;
															{	/* Llib/error.scm 276 */
																obj_t BgL_arg1948z00_1200;

																{	/* Llib/error.scm 276 */

																	{	/* Llib/error.scm 276 */

																		BgL_arg1948z00_1200 =
																			BGl_getzd2tracezd2stackz00zz__errorz00
																			(BFALSE);
																}}
																BgL_arg1946z00_1199 =
																	BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00
																	(BFALSE, BFALSE, BgL_arg1948z00_1200,
																	BgL_procz00_8, BgL_msgz00_9, BgL_objz00_10);
															}
															return
																BGl_raisez00zz__errorz00(
																(obj_t) (BgL_arg1946z00_1199));
														}
													else
														{	/* Llib/error.scm 275 */
															if (
																((long) (BgL_sysnoz00_7) ==
																	(long) (BGL_IO_PARSE_ERROR)))
																{	/* Llib/error.scm 278 */
																	BgL_z62iozd2parsezd2errorz62_bglt
																		BgL_arg1950z00_1203;
																	{	/* Llib/error.scm 278 */
																		obj_t BgL_arg1951z00_1204;

																		{	/* Llib/error.scm 278 */

																			{	/* Llib/error.scm 278 */

																				BgL_arg1951z00_1204 =
																					BGl_getzd2tracezd2stackz00zz__errorz00
																					(BFALSE);
																		}}
																		BgL_arg1950z00_1203 =
																			BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																			(BFALSE, BFALSE, BgL_arg1951z00_1204,
																			BgL_procz00_8, BgL_msgz00_9,
																			BgL_objz00_10);
																	}
																	return
																		BGl_raisez00zz__errorz00(
																		(obj_t) (BgL_arg1950z00_1203));
																}
															else
																{	/* Llib/error.scm 277 */
																	if (
																		((long) (BgL_sysnoz00_7) ==
																			(long) (BGL_IO_MALFORMED_URL_ERROR)))
																		{	/* Llib/error.scm 280 */
																			BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
																				BgL_arg1953z00_1207;
																			{	/* Llib/error.scm 280 */
																				obj_t BgL_arg1954z00_1208;

																				{	/* Llib/error.scm 280 */

																					{	/* Llib/error.scm 280 */

																						BgL_arg1954z00_1208 =
																							BGl_getzd2tracezd2stackz00zz__errorz00
																							(BFALSE);
																				}}
																				BgL_arg1953z00_1207 =
																					BGl_makezd2z62iozd2malformedzd2urlzd2errorz62zz__objectz00
																					(BFALSE, BFALSE, BgL_arg1954z00_1208,
																					BgL_procz00_8, BgL_msgz00_9,
																					BgL_objz00_10);
																			}
																			return
																				BGl_raisez00zz__errorz00(
																				(obj_t) (BgL_arg1953z00_1207));
																		}
																	else
																		{	/* Llib/error.scm 279 */
																			if (
																				((long) (BgL_sysnoz00_7) ==
																					(long) (BGL_IO_SIGPIPE_ERROR)))
																				{	/* Llib/error.scm 282 */
																					BgL_z62iozd2sigpipezd2errorz62_bglt
																						BgL_arg1956z00_1211;
																					{	/* Llib/error.scm 282 */
																						obj_t BgL_arg1957z00_1212;

																						{	/* Llib/error.scm 282 */

																							{	/* Llib/error.scm 282 */

																								BgL_arg1957z00_1212 =
																									BGl_getzd2tracezd2stackz00zz__errorz00
																									(BFALSE);
																						}}
																						BgL_arg1956z00_1211 =
																							BGl_makezd2z62iozd2sigpipezd2errorzb0zz__objectz00
																							(BFALSE, BFALSE,
																							BgL_arg1957z00_1212,
																							BgL_procz00_8, BgL_msgz00_9,
																							BgL_objz00_10);
																					}
																					return
																						BGl_raisez00zz__errorz00(
																						(obj_t) (BgL_arg1956z00_1211));
																				}
																			else
																				{	/* Llib/error.scm 281 */
																					if (
																						((long) (BgL_sysnoz00_7) ==
																							(long) (BGL_IO_TIMEOUT_ERROR)))
																						{	/* Llib/error.scm 284 */
																							BgL_z62iozd2timeoutzd2errorz62_bglt
																								BgL_arg1959z00_1215;
																							{	/* Llib/error.scm 284 */
																								obj_t BgL_arg1960z00_1216;

																								{	/* Llib/error.scm 284 */

																									{	/* Llib/error.scm 284 */

																										BgL_arg1960z00_1216 =
																											BGl_getzd2tracezd2stackz00zz__errorz00
																											(BFALSE);
																								}}
																								BgL_arg1959z00_1215 =
																									BGl_makezd2z62iozd2timeoutzd2errorzb0zz__objectz00
																									(BFALSE, BFALSE,
																									BgL_arg1960z00_1216,
																									BgL_procz00_8, BgL_msgz00_9,
																									BgL_objz00_10);
																							}
																							return
																								BGl_raisez00zz__errorz00(
																								(obj_t) (BgL_arg1959z00_1215));
																						}
																					else
																						{	/* Llib/error.scm 283 */
																							if (
																								((long) (BgL_sysnoz00_7) ==
																									(long)
																									(BGL_PROCESS_EXCEPTION)))
																								{	/* Llib/error.scm 286 */
																									BgL_z62processzd2exceptionzb0_bglt
																										BgL_arg1962z00_1219;
																									{	/* Llib/error.scm 286 */
																										obj_t BgL_arg1963z00_1220;

																										{	/* Llib/error.scm 286 */

																											{	/* Llib/error.scm 286 */

																												BgL_arg1963z00_1220 =
																													BGl_getzd2tracezd2stackz00zz__errorz00
																													(BFALSE);
																										}}
																										BgL_arg1962z00_1219 =
																											BGl_makezd2z62processzd2exceptionz62zz__objectz00
																											(BFALSE, BFALSE,
																											BgL_arg1963z00_1220,
																											BgL_procz00_8,
																											BgL_msgz00_9,
																											BgL_objz00_10);
																									}
																									return
																										BGl_raisez00zz__errorz00(
																										(obj_t)
																										(BgL_arg1962z00_1219));
																								}
																							else
																								{	/* Llib/error.scm 285 */
																									if (
																										((long) (BgL_sysnoz00_7) ==
																											(long) (BGL_TYPE_ERROR)))
																										{	/* Llib/error.scm 288 */
																											BgL_z62typezd2errorzb0_bglt
																												BgL_arg1965z00_1223;
																											{	/* Llib/error.scm 288 */
																												obj_t BgL_tyz00_2726;

																												if (STRINGP
																													(BgL_msgz00_9))
																													{	/* Llib/error.scm 288 */
																														BgL_tyz00_2726 =
																															BgL_msgz00_9;
																													}
																												else
																													{	/* Llib/error.scm 288 */
																														if (SYMBOLP
																															(BgL_msgz00_9))
																															{	/* Llib/error.scm 288 */
																																obj_t
																																	BgL_res3041z00_2738;
																																{	/* Llib/error.scm 288 */
																																	obj_t
																																		BgL_symbolz00_2736;
																																	BgL_symbolz00_2736
																																		=
																																		BgL_msgz00_9;
																																	{	/* Llib/error.scm 288 */
																																		obj_t
																																			BgL_arg2553z00_2737;
																																		BgL_arg2553z00_2737
																																			=
																																			SYMBOL_TO_STRING
																																			(BgL_symbolz00_2736);
																																		BgL_res3041z00_2738
																																			=
																																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																			(BgL_arg2553z00_2737);
																																	}
																																}
																																BgL_tyz00_2726 =
																																	BgL_res3041z00_2738;
																															}
																														else
																															{	/* Llib/error.scm 288 */
																																BgL_tyz00_2726 =
																																	BGl_string3131z00zz__errorz00;
																															}
																													}
																												{	/* Llib/error.scm 288 */
																													obj_t BgL_msgz00_2729;

																													BgL_msgz00_2729 =
																														BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																														(BGl_string3132z00zz__errorz00,
																														BgL_tyz00_2726,
																														bgl_typeof
																														(BgL_objz00_10));
																													{	/* Llib/error.scm 288 */

																														{	/* Llib/error.scm 288 */
																															obj_t
																																BgL_arg2055z00_2732;
																															{	/* Llib/error.scm 288 */

																																{	/* Llib/error.scm 288 */

																																	BgL_arg2055z00_2732
																																		=
																																		BGl_getzd2tracezd2stackz00zz__errorz00
																																		(BFALSE);
																																}
																															}
																															BgL_arg1965z00_1223
																																=
																																BGl_makezd2z62typezd2errorz62zz__objectz00
																																(BFALSE, BFALSE,
																																BgL_arg2055z00_2732,
																																BgL_procz00_8,
																																BgL_msgz00_2729,
																																BgL_objz00_10,
																																BgL_msgz00_9);
																														}
																													}
																												}
																											}
																											return
																												BGl_raisez00zz__errorz00
																												((obj_t)
																												(BgL_arg1965z00_1223));
																										}
																									else
																										{	/* Llib/error.scm 287 */
																											if (
																												((long) (BgL_sysnoz00_7)
																													==
																													(long)
																													(BGL_TYPENAME_ERROR)))
																												{	/* Llib/error.scm 290 */
																													BgL_z62typezd2errorzb0_bglt
																														BgL_arg1967z00_1225;
																													{	/* Llib/error.scm 290 */
																														obj_t
																															BgL_tyz00_2746;
																														if (STRINGP
																															(BgL_msgz00_9))
																															{	/* Llib/error.scm 290 */
																																BgL_tyz00_2746 =
																																	BgL_msgz00_9;
																															}
																														else
																															{	/* Llib/error.scm 290 */
																																if (SYMBOLP
																																	(BgL_msgz00_9))
																																	{	/* Llib/error.scm 290 */
																																		obj_t
																																			BgL_res3042z00_2756;
																																		{	/* Llib/error.scm 290 */
																																			obj_t
																																				BgL_symbolz00_2754;
																																			BgL_symbolz00_2754
																																				=
																																				BgL_msgz00_9;
																																			{	/* Llib/error.scm 290 */
																																				obj_t
																																					BgL_arg2553z00_2755;
																																				BgL_arg2553z00_2755
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_symbolz00_2754);
																																				BgL_res3042z00_2756
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg2553z00_2755);
																																			}
																																		}
																																		BgL_tyz00_2746
																																			=
																																			BgL_res3042z00_2756;
																																	}
																																else
																																	{	/* Llib/error.scm 290 */
																																		BgL_tyz00_2746
																																			=
																																			BGl_string3131z00zz__errorz00;
																																	}
																															}
																														{	/* Llib/error.scm 290 */
																															obj_t
																																BgL_msgz00_2749;
																															BgL_msgz00_2749 =
																																BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																																(BGl_string3132z00zz__errorz00,
																																BgL_tyz00_2746,
																																BgL_objz00_10);
																															{	/* Llib/error.scm 290 */

																																{	/* Llib/error.scm 290 */
																																	obj_t
																																		BgL_arg2060z00_2750;
																																	{	/* Llib/error.scm 290 */

																																		{	/* Llib/error.scm 290 */

																																			BgL_arg2060z00_2750
																																				=
																																				BGl_getzd2tracezd2stackz00zz__errorz00
																																				(BFALSE);
																																		}
																																	}
																																	BgL_arg1967z00_1225
																																		=
																																		BGl_makezd2z62typezd2errorz62zz__objectz00
																																		(BFALSE,
																																		BFALSE,
																																		BgL_arg2060z00_2750,
																																		BgL_procz00_8,
																																		BgL_msgz00_2749,
																																		BUNSPEC,
																																		BgL_msgz00_9);
																																}
																															}
																														}
																													}
																													return
																														BGl_raisez00zz__errorz00
																														((obj_t)
																														(BgL_arg1967z00_1225));
																												}
																											else
																												{	/* Llib/error.scm 289 */
																													if (
																														((long)
																															(BgL_sysnoz00_7)
																															==
																															(long)
																															(BGL_INDEX_OUT_OF_BOUND_ERROR)))
																														{	/* Llib/error.scm 292 */
																															BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
																																BgL_arg1969z00_1227;
																															{	/* Llib/error.scm 292 */
																																obj_t
																																	BgL_lenz00_2764;
																																if (INTEGERP
																																	(BgL_msgz00_9))
																																	{	/* Llib/error.scm 292 */
																																		BgL_lenz00_2764
																																			=
																																			BgL_msgz00_9;
																																	}
																																else
																																	{	/* Llib/error.scm 292 */
																																		if (STRINGP
																																			(BgL_msgz00_9))
																																			{	/* Llib/error.scm 292 */
																																				BgL_lenz00_2764
																																					=
																																					BINT
																																					(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																																					(BgL_msgz00_9,
																																						BNIL));
																																			}
																																		else
																																			{	/* Llib/error.scm 292 */
																																				BgL_lenz00_2764
																																					=
																																					BINT((
																																						(long)
																																						0));
																																	}}
																																{	/* Llib/error.scm 292 */
																																	obj_t
																																		BgL_msgz00_2768;
																																	{	/* Llib/error.scm 292 */
																																		obj_t
																																			BgL_arg2065z00_2770;
																																		{	/* Llib/error.scm 292 */

																																			BgL_arg2065z00_2770
																																				=
																																				BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																				(((long)
																																					CINT
																																					(BgL_lenz00_2764)
																																					-
																																					((long) 1)), ((long) 10));
																																		}
																																		{	/* Llib/error.scm 292 */
																																			obj_t
																																				BgL_list2067z00_2775;
																																			{	/* Llib/error.scm 292 */
																																				obj_t
																																					BgL_arg2068z00_2776;
																																				{	/* Llib/error.scm 292 */
																																					obj_t
																																						BgL_arg2069z00_2777;
																																					BgL_arg2069z00_2777
																																						=
																																						MAKE_PAIR
																																						(BGl_string3133z00zz__errorz00,
																																						BNIL);
																																					BgL_arg2068z00_2776
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2065z00_2770,
																																						BgL_arg2069z00_2777);
																																				}
																																				BgL_list2067z00_2775
																																					=
																																					MAKE_PAIR
																																					(BGl_string3134z00zz__errorz00,
																																					BgL_arg2068z00_2776);
																																			}
																																			BgL_msgz00_2768
																																				=
																																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																				(BgL_list2067z00_2775);
																																	}}
																																	{	/* Llib/error.scm 292 */

																																		{	/* Llib/error.scm 292 */
																																			obj_t
																																				BgL_arg2063z00_2778;
																																			{	/* Llib/error.scm 292 */

																																				{	/* Llib/error.scm 292 */

																																					BgL_arg2063z00_2778
																																						=
																																						BGl_getzd2tracezd2stackz00zz__errorz00
																																						(BFALSE);
																																			}}
																																			BgL_arg1969z00_1227
																																				=
																																				BGl_makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00
																																				(BFALSE,
																																				BFALSE,
																																				BgL_arg2063z00_2778,
																																				BgL_procz00_8,
																																				BgL_msgz00_2768,
																																				BgL_objz00_10,
																																				BgL_lenz00_2764);
																															}}}}
																															return
																																BGl_raisez00zz__errorz00
																																((obj_t)
																																(BgL_arg1969z00_1227));
																														}
																													else
																														{	/* Llib/error.scm 294 */
																															BgL_z62errorz62_bglt
																																BgL_arg2015z00_2787;
																															{	/* Llib/error.scm 294 */
																																obj_t
																																	BgL_arg2016z00_2788;
																																{	/* Llib/error.scm 294 */

																																	{	/* Llib/error.scm 294 */

																																		BgL_arg2016z00_2788
																																			=
																																			BGl_getzd2tracezd2stackz00zz__errorz00
																																			(BFALSE);
																																	}
																																}
																																BgL_arg2015z00_2787
																																	=
																																	BGl_makezd2z62errorzb0zz__objectz00
																																	(BFALSE,
																																	BFALSE,
																																	BgL_arg2016z00_2788,
																																	BgL_procz00_8,
																																	BgL_msgz00_9,
																																	BgL_objz00_10);
																															}
																															return
																																BGl_raisez00zz__errorz00
																																((obj_t)
																																(BgL_arg2015z00_2787));
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
	}



/* _error/errno */
	obj_t BGl__errorzf2errnozf2zz__errorz00(obj_t BgL_envz00_3862,
		obj_t BgL_sysnoz00_3863, obj_t BgL_procz00_3864, obj_t BgL_msgz00_3865,
		obj_t BgL_objz00_3866)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 263 */
			{	/* Llib/error.scm 265 */
				int BgL_auxz00_4238;

				{	/* Llib/error.scm 265 */
					obj_t BgL_auxz00_4239;

					if (INTEGERP(BgL_sysnoz00_3863))
						{	/* Llib/error.scm 265 */
							BgL_auxz00_4239 = BgL_sysnoz00_3863;
						}
					else
						{
							obj_t BgL_auxz00_4242;

							BgL_auxz00_4242 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 10586)), BGl_string3136z00zz__errorz00,
								BGl_string3137z00zz__errorz00, BgL_sysnoz00_3863);
							FAILURE(BgL_auxz00_4242, BFALSE, BFALSE);
						}
					BgL_auxz00_4238 = CINT(BgL_auxz00_4239);
				}
				return
					bgl_system_failure(BgL_auxz00_4238, BgL_procz00_3864, BgL_msgz00_3865,
					BgL_objz00_3866);
			}
		}
	}



/* exit */
	BGL_EXPORTED_DEF obj_t BGl_exitz00zz__errorz00(obj_t BgL_nz00_11)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 299 */
			{	/* Llib/error.scm 300 */
				obj_t BgL_valz00_1228;

				if (NULLP(BgL_nz00_11))
					{	/* Llib/error.scm 301 */
						BgL_valz00_1228 = BINT(((long) 0));
					}
				else
					{	/* Llib/error.scm 301 */
						if (INTEGERP(CAR(BgL_nz00_11)))
							{	/* Llib/error.scm 302 */
								BgL_valz00_1228 = CAR(BgL_nz00_11);
							}
						else
							{	/* Llib/error.scm 302 */
								BgL_valz00_1228 = BINT(((long) 0));
					}}
				BIGLOO_EXIT(BgL_valz00_1228);
				return BgL_valz00_1228;
			}
		}
	}



/* _exit */
	obj_t BGl__exitz00zz__errorz00(obj_t BgL_envz00_3867, obj_t BgL_nz00_3868)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 299 */
			return BGl_exitz00zz__errorz00(BgL_nz00_3868);
		}
	}



/* with-exception-handler */
	BGL_EXPORTED_DEF obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t
		BgL_handlerz00_12, obj_t BgL_thunkz00_13)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 310 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_handlerz00_12, (int) (((long) 1))))
				{	/* Llib/error.scm 312 */
					obj_t BgL_oldzd2handlerszd2_1233;

					BgL_oldzd2handlerszd2_1233 = BGL_ERROR_HANDLER_GET();
					{	/* Llib/error.scm 313 */
						obj_t BgL_arg1974z00_1234;

						BgL_arg1974z00_1234 =
							MAKE_PAIR(BgL_handlerz00_12, BgL_oldzd2handlerszd2_1233);
						BGL_ERROR_HANDLER_SET(BgL_arg1974z00_1234);
						BUNSPEC;
					}
					{	/* Llib/error.scm 314 */
						obj_t BgL_val1827z00_1235;

						BgL_val1827z00_1235 =
							BGl_zc3exitza31978ze3z83zz__errorz00(BgL_thunkz00_13);
						BGL_ERROR_HANDLER_SET(BgL_oldzd2handlerszd2_1233);
						BUNSPEC;
						if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
								(BgL_val1827z00_1235)))
							{	/* Llib/error.scm 318 */
								return
									BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1827z00_1235),
									CDR(BgL_val1827z00_1235));
							}
						else
							{	/* Llib/error.scm 318 */
								return BgL_val1827z00_1235;
							}
					}
				}
			else
				{	/* Llib/error.scm 319 */
					obj_t BgL_procz00_2804;

					BgL_procz00_2804 = BGl_symbol3138z00zz__errorz00;
					{	/* Llib/error.scm 319 */
						BgL_z62errorz62_bglt BgL_arg2015z00_2807;

						{	/* Llib/error.scm 319 */
							obj_t BgL_arg2016z00_2808;

							{	/* Llib/error.scm 319 */

								{	/* Llib/error.scm 319 */

									BgL_arg2016z00_2808 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
							BgL_arg2015z00_2807 =
								BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
								BgL_arg2016z00_2808, BgL_procz00_2804,
								BGl_string3140z00zz__errorz00, BgL_handlerz00_12);
						}
						return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2807));
					}
				}
		}
	}



/* <exit:1978> */
	obj_t BGl_zc3exitza31978ze3z83zz__errorz00(obj_t BgL_thunkz00_3999)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 318 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1828z00_1240;

			if (SET_EXIT(BgL_an_exit1828z00_1240))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1828z00_1240 = (void *) jmpbuf;
					{	/* Llib/error.scm 318 */

						PUSH_EXIT(BgL_an_exit1828z00_1240, ((long) 0));
						{	/* Llib/error.scm 315 */
							obj_t BgL_val1829z00_1241;

							if (PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_3999,
									(int) (((long) 0))))
								{	/* Llib/error.scm 315 */
									BgL_val1829z00_1241 =
										PROCEDURE_ENTRY(BgL_thunkz00_3999) (BgL_thunkz00_3999,
										BEOA);
								}
							else
								{	/* Llib/error.scm 317 */
									obj_t BgL_procz00_2796;

									BgL_procz00_2796 = BGl_symbol3138z00zz__errorz00;
									{	/* Llib/error.scm 317 */
										BgL_z62errorz62_bglt BgL_arg2015z00_2799;

										{	/* Llib/error.scm 317 */
											obj_t BgL_arg2016z00_2800;

											{	/* Llib/error.scm 317 */

												{	/* Llib/error.scm 317 */

													BgL_arg2016z00_2800 =
														BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
												}
											}
											BgL_arg2015z00_2799 =
												BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
												BgL_arg2016z00_2800, BgL_procz00_2796,
												BGl_string3141z00zz__errorz00, BgL_thunkz00_3999);
										}
										BgL_val1829z00_1241 =
											BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2799));
									}
								}
							POP_EXIT();
							return BgL_val1829z00_1241;
						}
					}
				}
		}
	}



/* _with-exception-handler */
	obj_t BGl__withzd2exceptionzd2handlerz00zz__errorz00(obj_t BgL_envz00_3869,
		obj_t BgL_handlerz00_3870, obj_t BgL_thunkz00_3871)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 310 */
			{	/* Llib/error.scm 311 */
				obj_t BgL_auxz00_4296;

				obj_t BgL_auxz00_4289;

				if (PROCEDUREP(BgL_thunkz00_3871))
					{	/* Llib/error.scm 311 */
						BgL_auxz00_4296 = BgL_thunkz00_3871;
					}
				else
					{
						obj_t BgL_auxz00_4299;

						BgL_auxz00_4299 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 12881)), BGl_string3142z00zz__errorz00,
							BGl_string3143z00zz__errorz00, BgL_thunkz00_3871);
						FAILURE(BgL_auxz00_4299, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_handlerz00_3870))
					{	/* Llib/error.scm 311 */
						BgL_auxz00_4289 = BgL_handlerz00_3870;
					}
				else
					{
						obj_t BgL_auxz00_4292;

						BgL_auxz00_4292 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 12881)), BGl_string3142z00zz__errorz00,
							BGl_string3143z00zz__errorz00, BgL_handlerz00_3870);
						FAILURE(BgL_auxz00_4292, BFALSE, BFALSE);
					}
				return
					BGl_withzd2exceptionzd2handlerz00zz__errorz00(BgL_auxz00_4289,
					BgL_auxz00_4296);
			}
		}
	}



/* current-exception-handler */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2exceptionzd2handlerz00zz__errorz00()
	{
		AN_OBJECT;
		{	/* Llib/error.scm 324 */
			{	/* Llib/error.scm 325 */
				bool_t BgL_testz00_4304;

				{	/* Llib/error.scm 325 */
					obj_t BgL_arg1982z00_1245;

					BgL_arg1982z00_1245 = BGL_ERROR_HANDLER_GET();
					BgL_testz00_4304 = PAIRP(BgL_arg1982z00_1245);
				}
				if (BgL_testz00_4304)
					{	/* Llib/error.scm 326 */
						obj_t BgL_arg1981z00_1244;

						BgL_arg1981z00_1244 = BGL_ERROR_HANDLER_GET();
						return CAR(BgL_arg1981z00_1244);
					}
				else
					{	/* Llib/error.scm 325 */
						return BGl_defaultzd2exceptionzd2handlerzd2envzd2zz__errorz00;
					}
			}
		}
	}



/* _current-exception-handler */
	obj_t BGl__currentzd2exceptionzd2handlerz00zz__errorz00(obj_t BgL_envz00_3872)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 324 */
			return BGl_currentzd2exceptionzd2handlerz00zz__errorz00();
		}
	}



/* raise */
	BGL_EXPORTED_DEF obj_t BGl_raisez00zz__errorz00(obj_t BgL_valz00_14)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 332 */
			{	/* Llib/error.scm 333 */
				obj_t BgL_handlersz00_1246;

				BgL_handlersz00_1246 = BGL_ERROR_HANDLER_GET();
				if (PAIRP(BgL_handlersz00_1246))
					{	/* Llib/error.scm 335 */
						obj_t BgL_hdlsz00_1248;

						BgL_hdlsz00_1248 = CDR(BgL_handlersz00_1246);
						BGL_ERROR_HANDLER_SET(BgL_hdlsz00_1248);
						BUNSPEC;
						{	/* Llib/error.scm 337 */
							obj_t BgL_rz00_1249;

							{	/* Llib/error.scm 337 */
								obj_t BgL_fun1989z00_1255;

								BgL_fun1989z00_1255 = CAR(BgL_handlersz00_1246);
								BgL_rz00_1249 =
									PROCEDURE_ENTRY(BgL_fun1989z00_1255) (BgL_fun1989z00_1255,
									BgL_valz00_14, BEOA);
							}
							BGL_ERROR_HANDLER_SET(BgL_hdlsz00_1248);
							BUNSPEC;
							if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_14,
									BGl_z62errorz62zz__objectz00))
								{	/* Llib/error.scm 340 */
									obj_t BgL_arg1985z00_1251;

									obj_t BgL_arg1987z00_1253;

									obj_t BgL_arg1988z00_1254;

									BgL_arg1985z00_1251 = BGl_symbol3144z00zz__errorz00;
									{
										BgL_z62exceptionz62_bglt BgL_auxz00_4321;

										BgL_auxz00_4321 =
											(BgL_z62exceptionz62_bglt) (
											(BgL_z62errorz62_bglt) (BgL_valz00_14));
										BgL_arg1987z00_1253 =
											(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4321))->
											BgL_fnamez00);
									}
									{
										BgL_z62exceptionz62_bglt BgL_auxz00_4325;

										BgL_auxz00_4325 =
											(BgL_z62exceptionz62_bglt) (
											(BgL_z62errorz62_bglt) (BgL_valz00_14));
										BgL_arg1988z00_1254 =
											(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4325))->
											BgL_locationz00);
									}
									{	/* Llib/error.scm 340 */
										BgL_z62errorz62_bglt BgL_arg2017z00_2823;

										{	/* Llib/error.scm 340 */
											obj_t BgL_arg2018z00_2824;

											{	/* Llib/error.scm 340 */

												{	/* Llib/error.scm 340 */

													BgL_arg2018z00_2824 =
														BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
												}
											}
											BgL_arg2017z00_2823 =
												BGl_makezd2z62errorzb0zz__objectz00(BgL_arg1987z00_1253,
												BgL_arg1988z00_1254, BgL_arg2018z00_2824,
												BgL_arg1985z00_1251, BGl_string3146z00zz__errorz00,
												BgL_valz00_14);
										}
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg2017z00_2823));
									}
								}
							else
								{	/* Llib/error.scm 339 */
									BFALSE;
								}
							return BgL_rz00_1249;
						}
					}
				else
					{	/* Llib/error.scm 334 */
						BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(BgL_valz00_14);
						{	/* Llib/error.scm 348 */
							obj_t BgL_res3043z00_2837;

							if (BGl_iszd2azf3z21zz__objectz00(BGl_string3145z00zz__errorz00,
									BGl_z62exceptionz62zz__objectz00))
								{	/* Llib/error.scm 348 */
									BgL_res3043z00_2837 =
										BGl_raisez00zz__errorz00(BGl_string3145z00zz__errorz00);
								}
							else
								{	/* Llib/error.scm 348 */
									BgL_z62errorz62_bglt BgL_arg2015z00_2834;

									{	/* Llib/error.scm 348 */
										obj_t BgL_arg2016z00_2835;

										{	/* Llib/error.scm 348 */

											{	/* Llib/error.scm 348 */

												BgL_arg2016z00_2835 =
													BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
											}
										}
										BgL_arg2015z00_2834 =
											BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
											BgL_arg2016z00_2835, BGl_string3145z00zz__errorz00,
											BGl_string3147z00zz__errorz00, BgL_valz00_14);
									}
									BgL_res3043z00_2837 =
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2834));
								}
							return BgL_res3043z00_2837;
						}
					}
			}
		}
	}



/* _raise */
	obj_t BGl__raisez00zz__errorz00(obj_t BgL_envz00_3875, obj_t BgL_valz00_3876)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 332 */
			return BGl_raisez00zz__errorz00(BgL_valz00_3876);
		}
	}



/* default-exception-handler */
	obj_t BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(obj_t BgL_valz00_15)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 353 */
			BGl_exceptionzd2notifyzd2zz__objectz00(BgL_valz00_15);
			if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_15,
					BGl_z62warningz62zz__objectz00))
				{	/* Llib/error.scm 355 */
					BFALSE;
				}
			else
				{	/* Llib/error.scm 356 */
					long BgL_retvalz00_1257;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_15,
							BGl_z62errorz62zz__objectz00))
						{	/* Llib/error.scm 356 */
							BgL_retvalz00_1257 = ((long) 1);
						}
					else
						{	/* Llib/error.scm 356 */
							BgL_retvalz00_1257 = ((long) 2);
						}
					{	/* Llib/error.scm 357 */
						obj_t BgL_zc3anonymousza31992ze3z83_3877;

						BgL_zc3anonymousza31992ze3z83_3877 =
							make_fx_procedure(BGl_zc3anonymousza31992ze3z83zz__errorz00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza31992ze3z83_3877,
							(int) (((long) 0)), BINT(BgL_retvalz00_1257));
						unwind_stack_until(BFALSE, BFALSE,
							BINT(BgL_retvalz00_1257), BgL_zc3anonymousza31992ze3z83_3877);
				}}
			return BUNSPEC;
		}
	}



/* _default-exception-handler */
	obj_t BGl__defaultzd2exceptionzd2handlerz00zz__errorz00(obj_t BgL_envz00_3873,
		obj_t BgL_valz00_3874)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 353 */
			return BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(BgL_valz00_3874);
		}
	}



/* <anonymous:1992> */
	obj_t BGl_zc3anonymousza31992ze3z83zz__errorz00(obj_t BgL_envz00_3878,
		obj_t BgL_xz00_3880)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 357 */
			{	/* Llib/error.scm 357 */
				obj_t BgL_auxz00_4356;

				BgL_auxz00_4356 = PROCEDURE_REF(BgL_envz00_3878, (int) (((long) 0)));
				return BIGLOO_EXIT(BgL_auxz00_4356);
			}
		}
	}



/* module-init-error */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initzd2errorz00zz__errorz00(char
		*BgL_currentz00_16, char *BgL_fromz00_17)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 363 */
			{	/* Llib/error.scm 364 */
				obj_t BgL_arg1994z00_1263;

				{	/* Llib/error.scm 364 */
					obj_t BgL_res3044z00_2841;

					{	/* Llib/error.scm 364 */
						obj_t BgL_auxz00_4360;

						BgL_auxz00_4360 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3044z00_2841 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4360);
					}
					BgL_arg1994z00_1263 = BgL_res3044z00_2841;
				}
				{	/* Llib/error.scm 364 */
					obj_t BgL_list2003z00_1271;

					{	/* Llib/error.scm 364 */
						obj_t BgL_arg2004z00_1272;

						{	/* Llib/error.scm 364 */
							obj_t BgL_arg2005z00_1273;

							{	/* Llib/error.scm 364 */
								obj_t BgL_arg2006z00_1274;

								{	/* Llib/error.scm 364 */
									obj_t BgL_arg2007z00_1275;

									{	/* Llib/error.scm 364 */
										obj_t BgL_arg2008z00_1276;

										{	/* Llib/error.scm 364 */
											obj_t BgL_arg2009z00_1277;

											{	/* Llib/error.scm 364 */
												obj_t BgL_arg2010z00_1278;

												{	/* Llib/error.scm 364 */
													obj_t BgL_arg2011z00_1279;

													{	/* Llib/error.scm 364 */
														obj_t BgL_arg2012z00_1280;

														{	/* Llib/error.scm 364 */
															obj_t BgL_arg2013z00_1281;

															BgL_arg2013z00_1281 =
																MAKE_PAIR(BGl_string3148z00zz__errorz00, BNIL);
															BgL_arg2012z00_1280 =
																MAKE_PAIR(string_to_bstring(BgL_fromz00_17),
																BgL_arg2013z00_1281);
														}
														BgL_arg2011z00_1279 =
															MAKE_PAIR(BGl_string3149z00zz__errorz00,
															BgL_arg2012z00_1280);
													}
													BgL_arg2010z00_1278 =
														MAKE_PAIR(BGl_string3150z00zz__errorz00,
														BgL_arg2011z00_1279);
												}
												BgL_arg2009z00_1277 =
													MAKE_PAIR(string_to_bstring(BgL_fromz00_17),
													BgL_arg2010z00_1278);
											}
											BgL_arg2008z00_1276 =
												MAKE_PAIR(BGl_string3151z00zz__errorz00,
												BgL_arg2009z00_1277);
										}
										BgL_arg2007z00_1275 =
											MAKE_PAIR(string_to_bstring(BgL_currentz00_16),
											BgL_arg2008z00_1276);
									}
									BgL_arg2006z00_1274 =
										MAKE_PAIR(BGl_string3152z00zz__errorz00,
										BgL_arg2007z00_1275);
								}
								BgL_arg2005z00_1273 =
									MAKE_PAIR(BGl_string3153z00zz__errorz00, BgL_arg2006z00_1274);
							}
							BgL_arg2004z00_1272 =
								MAKE_PAIR(string_to_bstring(BgL_currentz00_16),
								BgL_arg2005z00_1273);
						}
						BgL_list2003z00_1271 =
							MAKE_PAIR(BGl_string3154z00zz__errorz00, BgL_arg2004z00_1272);
					}
					BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg1994z00_1263,
						BgL_list2003z00_1271);
			}}
			{	/* Llib/error.scm 369 */
				obj_t BgL_auxz00_4379;

				BgL_auxz00_4379 = BINT(((long) 1));
				return BIGLOO_EXIT(BgL_auxz00_4379);
			}
		}
	}



/* _module-init-error */
	obj_t BGl__modulezd2initzd2errorz00zz__errorz00(obj_t BgL_envz00_3881,
		obj_t BgL_currentz00_3882, obj_t BgL_fromz00_3883)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 363 */
			{	/* Llib/error.scm 369 */
				char *BgL_auxz00_4391;

				char *BgL_auxz00_4382;

				{	/* Llib/error.scm 369 */
					obj_t BgL_auxz00_4392;

					if (STRINGP(BgL_fromz00_3883))
						{	/* Llib/error.scm 369 */
							BgL_auxz00_4392 = BgL_fromz00_3883;
						}
					else
						{
							obj_t BgL_auxz00_4395;

							BgL_auxz00_4395 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 15329)), BGl_string3155z00zz__errorz00,
								BGl_string3156z00zz__errorz00, BgL_fromz00_3883);
							FAILURE(BgL_auxz00_4395, BFALSE, BFALSE);
						}
					BgL_auxz00_4391 = BSTRING_TO_STRING(BgL_auxz00_4392);
				}
				{	/* Llib/error.scm 369 */
					obj_t BgL_auxz00_4383;

					if (STRINGP(BgL_currentz00_3882))
						{	/* Llib/error.scm 369 */
							BgL_auxz00_4383 = BgL_currentz00_3882;
						}
					else
						{
							obj_t BgL_auxz00_4386;

							BgL_auxz00_4386 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 15329)), BGl_string3155z00zz__errorz00,
								BGl_string3156z00zz__errorz00, BgL_currentz00_3882);
							FAILURE(BgL_auxz00_4386, BFALSE, BFALSE);
						}
					BgL_auxz00_4382 = BSTRING_TO_STRING(BgL_auxz00_4383);
				}
				return
					BGl_modulezd2initzd2errorz00zz__errorz00(BgL_auxz00_4382,
					BgL_auxz00_4391);
			}
		}
	}



/* error */
	BGL_EXPORTED_DEF obj_t BGl_errorz00zz__errorz00(obj_t BgL_procz00_18,
		obj_t BgL_msgz00_19, obj_t BgL_objz00_20)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 374 */
			{	/* Llib/error.scm 375 */
				BgL_z62errorz62_bglt BgL_arg2015z00_2842;

				{	/* Llib/error.scm 375 */
					obj_t BgL_arg2016z00_2843;

					{	/* Llib/error.scm 375 */

						{	/* Llib/error.scm 375 */

							BgL_arg2016z00_2843 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2015z00_2842 =
						BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
						BgL_arg2016z00_2843, BgL_procz00_18, BgL_msgz00_19, BgL_objz00_20);
				}
				return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2842));
			}
		}
	}



/* _error */
	obj_t BGl__errorz00zz__errorz00(obj_t BgL_envz00_3884, obj_t BgL_procz00_3885,
		obj_t BgL_msgz00_3886, obj_t BgL_objz00_3887)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 374 */
			return
				BGl_errorz00zz__errorz00(BgL_procz00_3885, BgL_msgz00_3886,
				BgL_objz00_3887);
		}
	}



/* error/location */
	BGL_EXPORTED_DEF obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t
		BgL_procz00_21, obj_t BgL_msgz00_22, obj_t BgL_objz00_23,
		obj_t BgL_fnamez00_24, obj_t BgL_locz00_25)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 380 */
			{	/* Llib/error.scm 381 */
				BgL_z62errorz62_bglt BgL_arg2017z00_2845;

				{	/* Llib/error.scm 381 */
					obj_t BgL_arg2018z00_2846;

					{	/* Llib/error.scm 381 */

						{	/* Llib/error.scm 381 */

							BgL_arg2018z00_2846 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2017z00_2845 =
						BGl_makezd2z62errorzb0zz__objectz00(BgL_fnamez00_24, BgL_locz00_25,
						BgL_arg2018z00_2846, BgL_procz00_21, BgL_msgz00_22, BgL_objz00_23);
				}
				return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2017z00_2845));
			}
		}
	}



/* _error/location */
	obj_t BGl__errorzf2locationzf2zz__errorz00(obj_t BgL_envz00_3888,
		obj_t BgL_procz00_3889, obj_t BgL_msgz00_3890, obj_t BgL_objz00_3891,
		obj_t BgL_fnamez00_3892, obj_t BgL_locz00_3893)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 380 */
			return
				BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_3889, BgL_msgz00_3890,
				BgL_objz00_3891, BgL_fnamez00_3892, BgL_locz00_3893);
		}
	}



/* error/source-location */
	BGL_EXPORTED_DEF obj_t BGl_errorzf2sourcezd2locationz20zz__errorz00(obj_t
		BgL_procz00_26, obj_t BgL_msgz00_27, obj_t BgL_objz00_28,
		obj_t BgL_locz00_29)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 386 */
			if (PAIRP(BgL_locz00_29))
				{	/* Llib/error.scm 387 */
					obj_t BgL_cdrzd21397zd2_1294;

					BgL_cdrzd21397zd2_1294 = CDR(BgL_locz00_29);
					if ((CAR(BgL_locz00_29) == BGl_symbol3157z00zz__errorz00))
						{	/* Llib/error.scm 387 */
							if (PAIRP(BgL_cdrzd21397zd2_1294))
								{	/* Llib/error.scm 387 */
									obj_t BgL_cdrzd21401zd2_1297;

									BgL_cdrzd21401zd2_1297 = CDR(BgL_cdrzd21397zd2_1294);
									if (PAIRP(BgL_cdrzd21401zd2_1297))
										{	/* Llib/error.scm 387 */
											if (NULLP(CDR(BgL_cdrzd21401zd2_1297)))
												{	/* Llib/error.scm 387 */
													obj_t BgL_arg2024z00_1300;

													obj_t BgL_arg2025z00_1301;

													BgL_arg2024z00_1300 = CAR(BgL_cdrzd21397zd2_1294);
													BgL_arg2025z00_1301 = CAR(BgL_cdrzd21401zd2_1297);
													{	/* Llib/error.scm 387 */
														BgL_z62errorz62_bglt BgL_arg2017z00_2867;

														{	/* Llib/error.scm 387 */
															obj_t BgL_arg2018z00_2868;

															{	/* Llib/error.scm 387 */

																{	/* Llib/error.scm 387 */

																	BgL_arg2018z00_2868 =
																		BGl_getzd2tracezd2stackz00zz__errorz00
																		(BFALSE);
																}
															}
															BgL_arg2017z00_2867 =
																BGl_makezd2z62errorzb0zz__objectz00
																(BgL_arg2024z00_1300, BgL_arg2025z00_1301,
																BgL_arg2018z00_2868, BgL_procz00_26,
																BgL_msgz00_27, BgL_objz00_28);
														}
														return
															BGl_raisez00zz__errorz00(
															(obj_t) (BgL_arg2017z00_2867));
													}
												}
											else
												{	/* Llib/error.scm 387 */
													BgL_z62errorz62_bglt BgL_arg2015z00_2873;

													{	/* Llib/error.scm 387 */
														obj_t BgL_arg2016z00_2874;

														{	/* Llib/error.scm 387 */

															{	/* Llib/error.scm 387 */

																BgL_arg2016z00_2874 =
																	BGl_getzd2tracezd2stackz00zz__errorz00
																	(BFALSE);
															}
														}
														BgL_arg2015z00_2873 =
															BGl_makezd2z62errorzb0zz__objectz00(BFALSE,
															BFALSE, BgL_arg2016z00_2874, BgL_procz00_26,
															BgL_msgz00_27, BgL_objz00_28);
													}
													return
														BGl_raisez00zz__errorz00(
														(obj_t) (BgL_arg2015z00_2873));
												}
										}
									else
										{	/* Llib/error.scm 387 */
											BgL_z62errorz62_bglt BgL_arg2015z00_2879;

											{	/* Llib/error.scm 387 */
												obj_t BgL_arg2016z00_2880;

												{	/* Llib/error.scm 387 */

													{	/* Llib/error.scm 387 */

														BgL_arg2016z00_2880 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg2015z00_2879 =
													BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
													BgL_arg2016z00_2880, BgL_procz00_26, BgL_msgz00_27,
													BgL_objz00_28);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2879));
										}
								}
							else
								{	/* Llib/error.scm 387 */
									BgL_z62errorz62_bglt BgL_arg2015z00_2885;

									{	/* Llib/error.scm 387 */
										obj_t BgL_arg2016z00_2886;

										{	/* Llib/error.scm 387 */

											{	/* Llib/error.scm 387 */

												BgL_arg2016z00_2886 =
													BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
											}
										}
										BgL_arg2015z00_2885 =
											BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
											BgL_arg2016z00_2886, BgL_procz00_26, BgL_msgz00_27,
											BgL_objz00_28);
									}
									return
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2885));
								}
						}
					else
						{	/* Llib/error.scm 387 */
							BgL_z62errorz62_bglt BgL_arg2015z00_2891;

							{	/* Llib/error.scm 387 */
								obj_t BgL_arg2016z00_2892;

								{	/* Llib/error.scm 387 */

									{	/* Llib/error.scm 387 */

										BgL_arg2016z00_2892 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2015z00_2891 =
									BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
									BgL_arg2016z00_2892, BgL_procz00_26, BgL_msgz00_27,
									BgL_objz00_28);
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2891));
						}
				}
			else
				{	/* Llib/error.scm 387 */
					BgL_z62errorz62_bglt BgL_arg2015z00_2897;

					{	/* Llib/error.scm 387 */
						obj_t BgL_arg2016z00_2898;

						{	/* Llib/error.scm 387 */

							{	/* Llib/error.scm 387 */

								BgL_arg2016z00_2898 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
							}
						}
						BgL_arg2015z00_2897 =
							BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
							BgL_arg2016z00_2898, BgL_procz00_26, BgL_msgz00_27,
							BgL_objz00_28);
					}
					return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2897));
				}
		}
	}



/* _error/source-location */
	obj_t BGl__errorzf2sourcezd2locationz20zz__errorz00(obj_t BgL_envz00_3894,
		obj_t BgL_procz00_3895, obj_t BgL_msgz00_3896, obj_t BgL_objz00_3897,
		obj_t BgL_locz00_3898)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 386 */
			return
				BGl_errorzf2sourcezd2locationz20zz__errorz00(BgL_procz00_3895,
				BgL_msgz00_3896, BgL_objz00_3897, BgL_locz00_3898);
		}
	}



/* error/source */
	BGL_EXPORTED_DEF obj_t BGl_errorzf2sourcezf2zz__errorz00(obj_t BgL_procz00_30,
		obj_t BgL_msgz00_31, obj_t BgL_objz00_32, obj_t BgL_sourcez00_33)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 396 */
			if (EXTENDED_PAIRP(BgL_sourcez00_33))
				{	/* Llib/error.scm 397 */
					return
						BGl_errorzf2sourcezd2locationz20zz__errorz00(BgL_procz00_30,
						BgL_msgz00_31, BgL_objz00_32, CER(BgL_sourcez00_33));
				}
			else
				{	/* Llib/error.scm 397 */
					BgL_z62errorz62_bglt BgL_arg2015z00_2921;

					{	/* Llib/error.scm 397 */
						obj_t BgL_arg2016z00_2922;

						{	/* Llib/error.scm 397 */

							{	/* Llib/error.scm 397 */

								BgL_arg2016z00_2922 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
							}
						}
						BgL_arg2015z00_2921 =
							BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
							BgL_arg2016z00_2922, BgL_procz00_30, BgL_msgz00_31,
							BgL_objz00_32);
					}
					return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_2921));
				}
		}
	}



/* _error/source */
	obj_t BGl__errorzf2sourcezf2zz__errorz00(obj_t BgL_envz00_3899,
		obj_t BgL_procz00_3900, obj_t BgL_msgz00_3901, obj_t BgL_objz00_3902,
		obj_t BgL_sourcez00_3903)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 396 */
			return
				BGl_errorzf2sourcezf2zz__errorz00(BgL_procz00_3900, BgL_msgz00_3901,
				BgL_objz00_3902, BgL_sourcez00_3903);
		}
	}



/* error/c-location */
	BGL_EXPORTED_DEF obj_t BGl_errorzf2czd2locationz20zz__errorz00(obj_t
		BgL_procz00_34, obj_t BgL_messagez00_35, obj_t BgL_objectz00_36,
		char *BgL_fnamez00_37, long BgL_locz00_38)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 408 */
			{	/* Llib/error.scm 409 */
				obj_t BgL_fnamez00_2927;

				obj_t BgL_locz00_2928;

				BgL_fnamez00_2927 = string_to_bstring(BgL_fnamez00_37);
				BgL_locz00_2928 = BINT(BgL_locz00_38);
				{	/* Llib/error.scm 409 */
					BgL_z62errorz62_bglt BgL_arg2017z00_2929;

					{	/* Llib/error.scm 409 */
						obj_t BgL_arg2018z00_2930;

						{	/* Llib/error.scm 409 */

							{	/* Llib/error.scm 409 */

								BgL_arg2018z00_2930 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}}
						BgL_arg2017z00_2929 =
							BGl_makezd2z62errorzb0zz__objectz00(BgL_fnamez00_2927,
							BgL_locz00_2928, BgL_arg2018z00_2930, BgL_procz00_34,
							BgL_messagez00_35, BgL_objectz00_36);
					}
					return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2017z00_2929));
				}
			}
		}
	}



/* _error/c-location */
	obj_t BGl__errorzf2czd2locationz20zz__errorz00(obj_t BgL_envz00_3904,
		obj_t BgL_procz00_3905, obj_t BgL_messagez00_3906, obj_t BgL_objectz00_3907,
		obj_t BgL_fnamez00_3908, obj_t BgL_locz00_3909)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 408 */
			{	/* Llib/error.scm 409 */
				long BgL_auxz00_4476;

				char *BgL_auxz00_4467;

				{	/* Llib/error.scm 409 */
					obj_t BgL_auxz00_4477;

					if (INTEGERP(BgL_locz00_3909))
						{	/* Llib/error.scm 409 */
							BgL_auxz00_4477 = BgL_locz00_3909;
						}
					else
						{
							obj_t BgL_auxz00_4480;

							BgL_auxz00_4480 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 17352)), BGl_string3159z00zz__errorz00,
								BGl_string3160z00zz__errorz00, BgL_locz00_3909);
							FAILURE(BgL_auxz00_4480, BFALSE, BFALSE);
						}
					BgL_auxz00_4476 = (long) CINT(BgL_auxz00_4477);
				}
				{	/* Llib/error.scm 409 */
					obj_t BgL_auxz00_4468;

					if (STRINGP(BgL_fnamez00_3908))
						{	/* Llib/error.scm 409 */
							BgL_auxz00_4468 = BgL_fnamez00_3908;
						}
					else
						{
							obj_t BgL_auxz00_4471;

							BgL_auxz00_4471 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 17352)), BGl_string3159z00zz__errorz00,
								BGl_string3156z00zz__errorz00, BgL_fnamez00_3908);
							FAILURE(BgL_auxz00_4471, BFALSE, BFALSE);
						}
					BgL_auxz00_4467 = BSTRING_TO_STRING(BgL_auxz00_4468);
				}
				return
					BGl_errorzf2czd2locationz20zz__errorz00(BgL_procz00_3905,
					BgL_messagez00_3906, BgL_objectz00_3907, BgL_auxz00_4467,
					BgL_auxz00_4476);
			}
		}
	}



/* bigloo-type-error-msg */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t
		BgL_prefixz00_39, obj_t BgL_fromz00_40, obj_t BgL_toz00_41)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 414 */
			{	/* Llib/error.scm 415 */
				obj_t BgL_list2032z00_2932;

				{	/* Llib/error.scm 415 */
					obj_t BgL_arg2033z00_2933;

					{	/* Llib/error.scm 415 */
						obj_t BgL_arg2036z00_2935;

						{	/* Llib/error.scm 415 */
							obj_t BgL_arg2037z00_2936;

							{	/* Llib/error.scm 415 */
								obj_t BgL_arg2039z00_2938;

								{	/* Llib/error.scm 415 */
									obj_t BgL_arg2040z00_2939;

									BgL_arg2040z00_2939 =
										MAKE_PAIR(BGl_string3161z00zz__errorz00, BNIL);
									BgL_arg2039z00_2938 =
										MAKE_PAIR(BgL_toz00_41, BgL_arg2040z00_2939);
								}
								BgL_arg2037z00_2936 =
									MAKE_PAIR(BGl_string3162z00zz__errorz00, BgL_arg2039z00_2938);
							}
							BgL_arg2036z00_2935 =
								MAKE_PAIR(BgL_fromz00_40, BgL_arg2037z00_2936);
						}
						BgL_arg2033z00_2933 =
							MAKE_PAIR(BGl_string3163z00zz__errorz00, BgL_arg2036z00_2935);
					}
					BgL_list2032z00_2932 =
						MAKE_PAIR(BgL_prefixz00_39, BgL_arg2033z00_2933);
				}
				return
					BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2032z00_2932);
			}
		}
	}



/* _bigloo-type-error-msg */
	obj_t BGl__bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t BgL_envz00_3910,
		obj_t BgL_prefixz00_3911, obj_t BgL_fromz00_3912, obj_t BgL_toz00_3913)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 414 */
			{	/* Llib/error.scm 415 */
				obj_t BgL_auxz00_4507;

				obj_t BgL_auxz00_4500;

				obj_t BgL_auxz00_4493;

				if (STRINGP(BgL_toz00_3913))
					{	/* Llib/error.scm 415 */
						BgL_auxz00_4507 = BgL_toz00_3913;
					}
				else
					{
						obj_t BgL_auxz00_4510;

						BgL_auxz00_4510 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 17673)), BGl_string3164z00zz__errorz00,
							BGl_string3165z00zz__errorz00, BgL_toz00_3913);
						FAILURE(BgL_auxz00_4510, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_fromz00_3912))
					{	/* Llib/error.scm 415 */
						BgL_auxz00_4500 = BgL_fromz00_3912;
					}
				else
					{
						obj_t BgL_auxz00_4503;

						BgL_auxz00_4503 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 17673)), BGl_string3164z00zz__errorz00,
							BGl_string3165z00zz__errorz00, BgL_fromz00_3912);
						FAILURE(BgL_auxz00_4503, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_prefixz00_3911))
					{	/* Llib/error.scm 415 */
						BgL_auxz00_4493 = BgL_prefixz00_3911;
					}
				else
					{
						obj_t BgL_auxz00_4496;

						BgL_auxz00_4496 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 17673)), BGl_string3164z00zz__errorz00,
							BGl_string3165z00zz__errorz00, BgL_prefixz00_3911);
						FAILURE(BgL_auxz00_4496, BFALSE, BFALSE);
					}
				return
					BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(BgL_auxz00_4493,
					BgL_auxz00_4500, BgL_auxz00_4507);
			}
		}
	}



/* bigloo-type-error */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t
		BgL_procz00_42, obj_t BgL_typez00_43, obj_t BgL_objz00_44)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 420 */
			{	/* Llib/error.scm 421 */
				obj_t BgL_tyz00_1315;

				if (STRINGP(BgL_typez00_43))
					{	/* Llib/error.scm 422 */
						BgL_tyz00_1315 = BgL_typez00_43;
					}
				else
					{	/* Llib/error.scm 422 */
						if (SYMBOLP(BgL_typez00_43))
							{	/* Llib/error.scm 425 */
								obj_t BgL_res3045z00_2944;

								{	/* Llib/error.scm 425 */
									obj_t BgL_symbolz00_2942;

									BgL_symbolz00_2942 = BgL_typez00_43;
									{	/* Llib/error.scm 425 */
										obj_t BgL_arg2553z00_2943;

										BgL_arg2553z00_2943 = SYMBOL_TO_STRING(BgL_symbolz00_2942);
										BgL_res3045z00_2944 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2553z00_2943);
									}
								}
								BgL_tyz00_1315 = BgL_res3045z00_2944;
							}
						else
							{	/* Llib/error.scm 424 */
								BgL_tyz00_1315 = BGl_string3131z00zz__errorz00;
							}
					}
				{	/* Llib/error.scm 421 */
					obj_t BgL_msgz00_1316;

					{	/* Llib/error.scm 428 */
						obj_t BgL_arg2044z00_1321;

						BgL_arg2044z00_1321 = bgl_typeof(BgL_objz00_44);
						{	/* Llib/error.scm 428 */
							obj_t BgL_res3046z00_2956;

							{	/* Llib/error.scm 428 */
								obj_t BgL_list2032z00_2948;

								{	/* Llib/error.scm 428 */
									obj_t BgL_arg2033z00_2949;

									{	/* Llib/error.scm 428 */
										obj_t BgL_arg2036z00_2951;

										{	/* Llib/error.scm 428 */
											obj_t BgL_arg2037z00_2952;

											{	/* Llib/error.scm 428 */
												obj_t BgL_arg2039z00_2954;

												{	/* Llib/error.scm 428 */
													obj_t BgL_arg2040z00_2955;

													BgL_arg2040z00_2955 =
														MAKE_PAIR(BGl_string3161z00zz__errorz00, BNIL);
													BgL_arg2039z00_2954 =
														MAKE_PAIR(BgL_arg2044z00_1321, BgL_arg2040z00_2955);
												}
												BgL_arg2037z00_2952 =
													MAKE_PAIR(BGl_string3162z00zz__errorz00,
													BgL_arg2039z00_2954);
											}
											BgL_arg2036z00_2951 =
												MAKE_PAIR(BgL_tyz00_1315, BgL_arg2037z00_2952);
										}
										BgL_arg2033z00_2949 =
											MAKE_PAIR(BGl_string3163z00zz__errorz00,
											BgL_arg2036z00_2951);
									}
									BgL_list2032z00_2948 =
										MAKE_PAIR(BGl_string3132z00zz__errorz00,
										BgL_arg2033z00_2949);
								}
								BgL_res3046z00_2956 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2032z00_2948);
							}
							BgL_msgz00_1316 = BgL_res3046z00_2956;
						}
					}
					{	/* Llib/error.scm 428 */

						{	/* Llib/error.scm 429 */
							BgL_z62typezd2errorzb0_bglt BgL_arg2041z00_1317;

							{	/* Llib/error.scm 429 */
								obj_t BgL_arg2042z00_1318;

								{	/* Llib/error.scm 429 */

									{	/* Llib/error.scm 429 */

										BgL_arg2042z00_1318 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2041z00_1317 =
									BGl_makezd2z62typezd2errorz62zz__objectz00(BFALSE, BFALSE,
									BgL_arg2042z00_1318, BgL_procz00_42, BgL_msgz00_1316,
									BgL_objz00_44, BgL_typez00_43);
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2041z00_1317));
						}
					}
				}
			}
		}
	}



/* _bigloo-type-error */
	obj_t BGl__bigloozd2typezd2errorz00zz__errorz00(obj_t BgL_envz00_3914,
		obj_t BgL_procz00_3915, obj_t BgL_typez00_3916, obj_t BgL_objz00_3917)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 420 */
			return
				BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_3915,
				BgL_typez00_3916, BgL_objz00_3917);
		}
	}



/* bigloo-type-error/location */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t BgL_procz00_45,
		obj_t BgL_typez00_46, obj_t BgL_objz00_47, obj_t BgL_fnamez00_48,
		obj_t BgL_locz00_49)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 434 */
			{	/* Llib/error.scm 436 */
				obj_t BgL_tyz00_2957;

				if (STRINGP(BgL_typez00_46))
					{	/* Llib/error.scm 436 */
						BgL_tyz00_2957 = BgL_typez00_46;
					}
				else
					{	/* Llib/error.scm 436 */
						if (SYMBOLP(BgL_typez00_46))
							{	/* Llib/error.scm 436 */
								obj_t BgL_res3047z00_2970;

								{	/* Llib/error.scm 436 */
									obj_t BgL_symbolz00_2968;

									BgL_symbolz00_2968 = BgL_typez00_46;
									{	/* Llib/error.scm 436 */
										obj_t BgL_arg2553z00_2969;

										BgL_arg2553z00_2969 = SYMBOL_TO_STRING(BgL_symbolz00_2968);
										BgL_res3047z00_2970 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2553z00_2969);
									}
								}
								BgL_tyz00_2957 = BgL_res3047z00_2970;
							}
						else
							{	/* Llib/error.scm 436 */
								BgL_tyz00_2957 = BGl_string3131z00zz__errorz00;
							}
					}
				{	/* Llib/error.scm 436 */
					obj_t BgL_msgz00_2960;

					{	/* Llib/error.scm 436 */
						obj_t BgL_arg2052z00_2962;

						BgL_arg2052z00_2962 = bgl_typeof(BgL_objz00_47);
						{	/* Llib/error.scm 436 */
							obj_t BgL_res3048z00_2982;

							{	/* Llib/error.scm 436 */
								obj_t BgL_list2032z00_2974;

								{	/* Llib/error.scm 436 */
									obj_t BgL_arg2033z00_2975;

									{	/* Llib/error.scm 436 */
										obj_t BgL_arg2036z00_2977;

										{	/* Llib/error.scm 436 */
											obj_t BgL_arg2037z00_2978;

											{	/* Llib/error.scm 436 */
												obj_t BgL_arg2039z00_2980;

												{	/* Llib/error.scm 436 */
													obj_t BgL_arg2040z00_2981;

													BgL_arg2040z00_2981 =
														MAKE_PAIR(BGl_string3161z00zz__errorz00, BNIL);
													BgL_arg2039z00_2980 =
														MAKE_PAIR(BgL_arg2052z00_2962, BgL_arg2040z00_2981);
												}
												BgL_arg2037z00_2978 =
													MAKE_PAIR(BGl_string3162z00zz__errorz00,
													BgL_arg2039z00_2980);
											}
											BgL_arg2036z00_2977 =
												MAKE_PAIR(BgL_tyz00_2957, BgL_arg2037z00_2978);
										}
										BgL_arg2033z00_2975 =
											MAKE_PAIR(BGl_string3163z00zz__errorz00,
											BgL_arg2036z00_2977);
									}
									BgL_list2032z00_2974 =
										MAKE_PAIR(BGl_string3132z00zz__errorz00,
										BgL_arg2033z00_2975);
								}
								BgL_res3048z00_2982 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2032z00_2974);
							}
							BgL_msgz00_2960 = BgL_res3048z00_2982;
						}
					}
					{	/* Llib/error.scm 436 */

						{	/* Llib/error.scm 436 */
							BgL_z62typezd2errorzb0_bglt BgL_arg2047z00_2963;

							{	/* Llib/error.scm 436 */
								obj_t BgL_arg2048z00_2964;

								{	/* Llib/error.scm 436 */

									{	/* Llib/error.scm 436 */

										BgL_arg2048z00_2964 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2047z00_2963 =
									BGl_makezd2z62typezd2errorz62zz__objectz00(BgL_fnamez00_48,
									BgL_locz00_49, BgL_arg2048z00_2964, BgL_procz00_45,
									BgL_msgz00_2960, BgL_objz00_47, BgL_typez00_46);
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2047z00_2963));
						}
					}
				}
			}
		}
	}



/* _bigloo-type-error/location */
	obj_t BGl__bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t
		BgL_envz00_3918, obj_t BgL_procz00_3919, obj_t BgL_typez00_3920,
		obj_t BgL_objz00_3921, obj_t BgL_fnamez00_3922, obj_t BgL_locz00_3923)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 434 */
			return
				BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BgL_procz00_3919,
				BgL_typez00_3920, BgL_objz00_3921, BgL_fnamez00_3922, BgL_locz00_3923);
		}
	}



/* type-error */
	BGL_EXPORTED_DEF obj_t BGl_typezd2errorzd2zz__errorz00(obj_t BgL_fnamez00_50,
		obj_t BgL_locz00_51, obj_t BgL_procz00_52, obj_t BgL_typez00_53,
		obj_t BgL_objz00_54)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 449 */
			{	/* Llib/error.scm 451 */
				obj_t BgL_tyz00_2983;

				if (STRINGP(BgL_typez00_53))
					{	/* Llib/error.scm 451 */
						BgL_tyz00_2983 = BgL_typez00_53;
					}
				else
					{	/* Llib/error.scm 451 */
						if (SYMBOLP(BgL_typez00_53))
							{	/* Llib/error.scm 451 */
								obj_t BgL_res3049z00_2995;

								{	/* Llib/error.scm 451 */
									obj_t BgL_symbolz00_2993;

									BgL_symbolz00_2993 = BgL_typez00_53;
									{	/* Llib/error.scm 451 */
										obj_t BgL_arg2553z00_2994;

										BgL_arg2553z00_2994 = SYMBOL_TO_STRING(BgL_symbolz00_2993);
										BgL_res3049z00_2995 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2553z00_2994);
									}
								}
								BgL_tyz00_2983 = BgL_res3049z00_2995;
							}
						else
							{	/* Llib/error.scm 451 */
								BgL_tyz00_2983 = BGl_string3131z00zz__errorz00;
							}
					}
				{	/* Llib/error.scm 451 */
					obj_t BgL_msgz00_2986;

					{	/* Llib/error.scm 451 */
						obj_t BgL_arg2057z00_2988;

						BgL_arg2057z00_2988 = bgl_typeof(BgL_objz00_54);
						{	/* Llib/error.scm 451 */
							obj_t BgL_res3050z00_3007;

							{	/* Llib/error.scm 451 */
								obj_t BgL_list2032z00_2999;

								{	/* Llib/error.scm 451 */
									obj_t BgL_arg2033z00_3000;

									{	/* Llib/error.scm 451 */
										obj_t BgL_arg2036z00_3002;

										{	/* Llib/error.scm 451 */
											obj_t BgL_arg2037z00_3003;

											{	/* Llib/error.scm 451 */
												obj_t BgL_arg2039z00_3005;

												{	/* Llib/error.scm 451 */
													obj_t BgL_arg2040z00_3006;

													BgL_arg2040z00_3006 =
														MAKE_PAIR(BGl_string3161z00zz__errorz00, BNIL);
													BgL_arg2039z00_3005 =
														MAKE_PAIR(BgL_arg2057z00_2988, BgL_arg2040z00_3006);
												}
												BgL_arg2037z00_3003 =
													MAKE_PAIR(BGl_string3162z00zz__errorz00,
													BgL_arg2039z00_3005);
											}
											BgL_arg2036z00_3002 =
												MAKE_PAIR(BgL_tyz00_2983, BgL_arg2037z00_3003);
										}
										BgL_arg2033z00_3000 =
											MAKE_PAIR(BGl_string3163z00zz__errorz00,
											BgL_arg2036z00_3002);
									}
									BgL_list2032z00_2999 =
										MAKE_PAIR(BGl_string3132z00zz__errorz00,
										BgL_arg2033z00_3000);
								}
								BgL_res3050z00_3007 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2032z00_2999);
							}
							BgL_msgz00_2986 = BgL_res3050z00_3007;
						}
					}
					{	/* Llib/error.scm 451 */

						{	/* Llib/error.scm 451 */
							obj_t BgL_arg2055z00_2989;

							{	/* Llib/error.scm 451 */

								{	/* Llib/error.scm 451 */

									BgL_arg2055z00_2989 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
							return
								(obj_t) (BGl_makezd2z62typezd2errorz62zz__objectz00
								(BgL_fnamez00_50, BgL_locz00_51, BgL_arg2055z00_2989,
									BgL_procz00_52, BgL_msgz00_2986, BgL_objz00_54,
									BgL_typez00_53));
						}
					}
				}
			}
		}
	}



/* _type-error */
	obj_t BGl__typezd2errorzd2zz__errorz00(obj_t BgL_envz00_3924,
		obj_t BgL_fnamez00_3925, obj_t BgL_locz00_3926, obj_t BgL_procz00_3927,
		obj_t BgL_typez00_3928, obj_t BgL_objz00_3929)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 449 */
			return
				BGl_typezd2errorzd2zz__errorz00(BgL_fnamez00_3925, BgL_locz00_3926,
				BgL_procz00_3927, BgL_typez00_3928, BgL_objz00_3929);
		}
	}



/* index-out-of-bounds-error */
	BGL_EXPORTED_DEF obj_t
		BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t BgL_fnamez00_60,
		obj_t BgL_locz00_61, obj_t BgL_procz00_62, obj_t BgL_lenz00_63,
		obj_t BgL_objz00_64)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 471 */
			{	/* Llib/error.scm 473 */
				obj_t BgL_lenz00_3031;

				if (INTEGERP(BgL_lenz00_63))
					{	/* Llib/error.scm 473 */
						BgL_lenz00_3031 = BgL_lenz00_63;
					}
				else
					{	/* Llib/error.scm 473 */
						if (STRINGP(BgL_lenz00_63))
							{	/* Llib/error.scm 473 */
								BgL_lenz00_3031 =
									BINT(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
									(BgL_lenz00_63, BNIL));
							}
						else
							{	/* Llib/error.scm 473 */
								BgL_lenz00_3031 = BINT(((long) 0));
					}}
				{	/* Llib/error.scm 473 */
					obj_t BgL_msgz00_3035;

					{	/* Llib/error.scm 473 */
						obj_t BgL_arg2065z00_3037;

						{	/* Llib/error.scm 473 */

							BgL_arg2065z00_3037 =
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
								((long) CINT(BgL_lenz00_3031) - ((long) 1)), ((long) 10));
						}
						{	/* Llib/error.scm 473 */
							obj_t BgL_list2067z00_3042;

							{	/* Llib/error.scm 473 */
								obj_t BgL_arg2068z00_3043;

								{	/* Llib/error.scm 473 */
									obj_t BgL_arg2069z00_3044;

									BgL_arg2069z00_3044 =
										MAKE_PAIR(BGl_string3133z00zz__errorz00, BNIL);
									BgL_arg2068z00_3043 =
										MAKE_PAIR(BgL_arg2065z00_3037, BgL_arg2069z00_3044);
								}
								BgL_list2067z00_3042 =
									MAKE_PAIR(BGl_string3134z00zz__errorz00, BgL_arg2068z00_3043);
							}
							BgL_msgz00_3035 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2067z00_3042);
					}}
					{	/* Llib/error.scm 473 */

						{	/* Llib/error.scm 473 */
							obj_t BgL_arg2063z00_3045;

							{	/* Llib/error.scm 473 */

								{	/* Llib/error.scm 473 */

									BgL_arg2063z00_3045 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
							}}
							return
								(obj_t)
								(BGl_makezd2z62indexzd2outzd2ofzd2boundszd2errorzb0zz__objectz00
								(BgL_fnamez00_60, BgL_locz00_61, BgL_arg2063z00_3045,
									BgL_procz00_62, BgL_msgz00_3035, BgL_objz00_64,
									BgL_lenz00_3031));
						}
					}
				}
			}
		}
	}



/* _index-out-of-bounds-error */
	obj_t BGl__indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t
		BgL_envz00_3930, obj_t BgL_fnamez00_3931, obj_t BgL_locz00_3932,
		obj_t BgL_procz00_3933, obj_t BgL_lenz00_3934, obj_t BgL_objz00_3935)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 471 */
			return
				BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BgL_fnamez00_3931,
				BgL_locz00_3932, BgL_procz00_3933, BgL_lenz00_3934, BgL_objz00_3935);
		}
	}



/* warning */
	BGL_EXPORTED_DEF obj_t BGl_warningz00zz__errorz00(obj_t BgL_argsz00_65)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 486 */
			{	/* Llib/error.scm 487 */
				BgL_z62warningz62_bglt BgL_arg2076z00_3051;

				{	/* Llib/error.scm 487 */
					obj_t BgL_arg2077z00_3052;

					{	/* Llib/error.scm 487 */

						{	/* Llib/error.scm 487 */

							BgL_arg2077z00_3052 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2076z00_3051 =
						BGl_makezd2z62warningzb0zz__objectz00(BFALSE, BFALSE,
						BgL_arg2077z00_3052, BgL_argsz00_65);
				}
				return
					BGl_warningzd2notifyzd2zz__errorz00((obj_t) (BgL_arg2076z00_3051));
			}
		}
	}



/* _warning */
	obj_t BGl__warningz00zz__errorz00(obj_t BgL_envz00_3936,
		obj_t BgL_argsz00_3937)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 486 */
			return BGl_warningz00zz__errorz00(BgL_argsz00_3937);
		}
	}



/* warning/location */
	BGL_EXPORTED_DEF obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t
		BgL_fnamez00_66, obj_t BgL_locz00_67, obj_t BgL_argsz00_68)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 492 */
			{	/* Llib/error.scm 493 */
				BgL_z62warningz62_bglt BgL_arg2078z00_3054;

				{	/* Llib/error.scm 493 */
					obj_t BgL_arg2079z00_3055;

					{	/* Llib/error.scm 493 */

						{	/* Llib/error.scm 493 */

							BgL_arg2079z00_3055 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2078z00_3054 =
						BGl_makezd2z62warningzb0zz__objectz00(BgL_fnamez00_66,
						BgL_locz00_67, BgL_arg2079z00_3055, BgL_argsz00_68);
				}
				return
					BGl_warningzd2notifyzd2zz__errorz00((obj_t) (BgL_arg2078z00_3054));
			}
		}
	}



/* _warning/location */
	obj_t BGl__warningzf2locationzf2zz__errorz00(obj_t BgL_envz00_3938,
		obj_t BgL_fnamez00_3939, obj_t BgL_locz00_3940, obj_t BgL_argsz00_3941)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 492 */
			return
				BGl_warningzf2locationzf2zz__errorz00(BgL_fnamez00_3939,
				BgL_locz00_3940, BgL_argsz00_3941);
		}
	}



/* warning/loc */
	BGL_EXPORTED_DEF obj_t BGl_warningzf2loczf2zz__errorz00(obj_t BgL_locz00_69,
		obj_t BgL_argsz00_70)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 498 */
			if (PAIRP(BgL_locz00_69))
				{	/* Llib/error.scm 499 */
					obj_t BgL_cdrzd21415zd2_1375;

					BgL_cdrzd21415zd2_1375 = CDR(BgL_locz00_69);
					if ((CAR(BgL_locz00_69) == BGl_symbol3157z00zz__errorz00))
						{	/* Llib/error.scm 499 */
							if (PAIRP(BgL_cdrzd21415zd2_1375))
								{	/* Llib/error.scm 499 */
									obj_t BgL_cdrzd21419zd2_1378;

									BgL_cdrzd21419zd2_1378 = CDR(BgL_cdrzd21415zd2_1375);
									if (PAIRP(BgL_cdrzd21419zd2_1378))
										{	/* Llib/error.scm 499 */
											if (NULLP(CDR(BgL_cdrzd21419zd2_1378)))
												{	/* Llib/error.scm 499 */
													obj_t BgL_arg2085z00_1381;

													obj_t BgL_arg2086z00_1382;

													BgL_arg2085z00_1381 = CAR(BgL_cdrzd21415zd2_1375);
													BgL_arg2086z00_1382 = CAR(BgL_cdrzd21419zd2_1378);
													{	/* Llib/error.scm 499 */
														obj_t BgL_list2092z00_3071;

														{	/* Llib/error.scm 499 */
															obj_t BgL_arg2093z00_3072;

															BgL_arg2093z00_3072 =
																MAKE_PAIR(BgL_argsz00_70, BNIL);
															BgL_list2092z00_3071 =
																MAKE_PAIR(BgL_arg2086z00_1382,
																BgL_arg2093z00_3072);
														}
														return
															BGl_applyz00zz__r4_control_features_6_9z00
															(BGl_warningzf2locationzd2envz20zz__errorz00,
															BgL_arg2085z00_1381, BgL_list2092z00_3071);
													}
												}
											else
												{	/* Llib/error.scm 499 */
													return BGl_warningz00zz__errorz00(BgL_argsz00_70);
												}
										}
									else
										{	/* Llib/error.scm 499 */
											return BGl_warningz00zz__errorz00(BgL_argsz00_70);
										}
								}
							else
								{	/* Llib/error.scm 499 */
									return BGl_warningz00zz__errorz00(BgL_argsz00_70);
								}
						}
					else
						{	/* Llib/error.scm 499 */
							return BGl_warningz00zz__errorz00(BgL_argsz00_70);
						}
				}
			else
				{	/* Llib/error.scm 499 */
					return BGl_warningz00zz__errorz00(BgL_argsz00_70);
				}
		}
	}



/* _warning/loc */
	obj_t BGl__warningzf2loczf2zz__errorz00(obj_t BgL_envz00_3942,
		obj_t BgL_locz00_3943, obj_t BgL_argsz00_3944)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 498 */
			return
				BGl_warningzf2loczf2zz__errorz00(BgL_locz00_3943, BgL_argsz00_3944);
		}
	}



/* warning/c-location */
	BGL_EXPORTED_DEF obj_t BGl_warningzf2czd2locationz20zz__errorz00(char
		*BgL_fnamez00_71, long BgL_locz00_72, obj_t BgL_argsz00_73)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 512 */
			{	/* Llib/error.scm 513 */
				obj_t BgL_list2095z00_3085;

				{	/* Llib/error.scm 513 */
					obj_t BgL_arg2096z00_3086;

					BgL_arg2096z00_3086 = MAKE_PAIR(BgL_argsz00_73, BNIL);
					BgL_list2095z00_3085 =
						MAKE_PAIR(BINT(BgL_locz00_72), BgL_arg2096z00_3086);
				}
				return
					BGl_applyz00zz__r4_control_features_6_9z00
					(BGl_warningzf2locationzd2envz20zz__errorz00,
					string_to_bstring(BgL_fnamez00_71), BgL_list2095z00_3085);
			}
		}
	}



/* _warning/c-location */
	obj_t BGl__warningzf2czd2locationz20zz__errorz00(obj_t BgL_envz00_3945,
		obj_t BgL_fnamez00_3946, obj_t BgL_locz00_3947, obj_t BgL_argsz00_3948)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 512 */
			{	/* Llib/error.scm 513 */
				long BgL_auxz00_4638;

				char *BgL_auxz00_4629;

				{	/* Llib/error.scm 513 */
					obj_t BgL_auxz00_4639;

					if (INTEGERP(BgL_locz00_3947))
						{	/* Llib/error.scm 513 */
							BgL_auxz00_4639 = BgL_locz00_3947;
						}
					else
						{
							obj_t BgL_auxz00_4642;

							BgL_auxz00_4642 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 22020)), BGl_string3166z00zz__errorz00,
								BGl_string3160z00zz__errorz00, BgL_locz00_3947);
							FAILURE(BgL_auxz00_4642, BFALSE, BFALSE);
						}
					BgL_auxz00_4638 = (long) CINT(BgL_auxz00_4639);
				}
				{	/* Llib/error.scm 513 */
					obj_t BgL_auxz00_4630;

					if (STRINGP(BgL_fnamez00_3946))
						{	/* Llib/error.scm 513 */
							BgL_auxz00_4630 = BgL_fnamez00_3946;
						}
					else
						{
							obj_t BgL_auxz00_4633;

							BgL_auxz00_4633 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 22020)), BGl_string3166z00zz__errorz00,
								BGl_string3156z00zz__errorz00, BgL_fnamez00_3946);
							FAILURE(BgL_auxz00_4633, BFALSE, BFALSE);
						}
					BgL_auxz00_4629 = BSTRING_TO_STRING(BgL_auxz00_4630);
				}
				return
					BGl_warningzf2czd2locationz20zz__errorz00(BgL_auxz00_4629,
					BgL_auxz00_4638, BgL_argsz00_3948);
			}
		}
	}



/* notify-&error */
	obj_t BGl_notifyzd2z62errorzb0zz__errorz00(BgL_z62errorz62_bglt BgL_errz00_74)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 518 */
			{	/* Llib/error.scm 519 */
				obj_t BgL_portz00_1391;

				{	/* Llib/error.scm 519 */
					obj_t BgL_res3053z00_3088;

					{	/* Llib/error.scm 519 */
						obj_t BgL_auxz00_4648;

						BgL_auxz00_4648 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3053z00_3088 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4648);
					}
					BgL_portz00_1391 = BgL_res3053z00_3088;
				}
				FLUSH_OUTPUT_PORT(BgL_portz00_1391);
				{	/* Llib/error.scm 521 */
					obj_t BgL_list2097z00_1392;

					BgL_list2097z00_1392 = MAKE_PAIR(BgL_portz00_1391, BNIL);
					BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3154z00zz__errorz00,
						BgL_list2097z00_1392);
				}
				{	/* Llib/error.scm 522 */
					obj_t BgL_arg2098z00_1393;

					BgL_arg2098z00_1393 =
						(((BgL_z62errorz62_bglt) CREF(BgL_errz00_74))->BgL_procz00);
					BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg2098z00_1393,
						BgL_portz00_1391);
				}
				{	/* Llib/error.scm 523 */
					obj_t BgL_list2099z00_1394;

					BgL_list2099z00_1394 = MAKE_PAIR(BgL_portz00_1391, BNIL);
					BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3167z00zz__errorz00,
						BgL_list2099z00_1394);
				}
				{	/* Llib/error.scm 524 */
					obj_t BgL_arg2100z00_1395;

					BgL_arg2100z00_1395 =
						(((BgL_z62errorz62_bglt) CREF(BgL_errz00_74))->BgL_msgz00);
					BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg2100z00_1395,
						BgL_portz00_1391);
				}
				{	/* Llib/error.scm 525 */
					obj_t BgL_list2101z00_1396;

					BgL_list2101z00_1396 = MAKE_PAIR(BgL_portz00_1391, BNIL);
					BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3168z00zz__errorz00,
						BgL_list2101z00_1396);
				}
				{	/* Llib/error.scm 526 */
					obj_t BgL_arg2102z00_1397;

					BgL_arg2102z00_1397 =
						(((BgL_z62errorz62_bglt) CREF(BgL_errz00_74))->BgL_objz00);
					BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg2102z00_1397,
						BgL_portz00_1391);
				}
				{	/* Llib/error.scm 527 */
					obj_t BgL_list2103z00_1398;

					BgL_list2103z00_1398 = MAKE_PAIR(BgL_portz00_1391, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2103z00_1398);
				}
				{	/* Llib/error.scm 528 */
					obj_t BgL_arg2104z00_1399;

					{	/* Llib/error.scm 528 */
						obj_t BgL__ortest_1830z00_1400;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_4666;

							BgL_auxz00_4666 = (BgL_z62exceptionz62_bglt) (BgL_errz00_74);
							BgL__ortest_1830z00_1400 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4666))->
								BgL_stackz00);
						}
						if (CBOOL(BgL__ortest_1830z00_1400))
							{	/* Llib/error.scm 528 */
								BgL_arg2104z00_1399 = BgL__ortest_1830z00_1400;
							}
						else
							{	/* Llib/error.scm 528 */

								{	/* Llib/error.scm 528 */

									BgL_arg2104z00_1399 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
					}
					BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_arg2104z00_1399,
						BgL_portz00_1391);
				}
				return FLUSH_OUTPUT_PORT(BgL_portz00_1391);
			}
		}
	}



/* notify-&error/location-no-loc */
	obj_t
		BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00
		(BgL_z62errorz62_bglt BgL_errz00_75)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 534 */
			{	/* Llib/error.scm 535 */
				obj_t BgL_portz00_1402;

				{	/* Llib/error.scm 535 */
					obj_t BgL_res3054z00_3096;

					{	/* Llib/error.scm 535 */
						obj_t BgL_auxz00_4674;

						BgL_auxz00_4674 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3054z00_3096 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4674);
					}
					BgL_portz00_1402 = BgL_res3054z00_3096;
				}
				FLUSH_OUTPUT_PORT(BgL_portz00_1402);
				{	/* Llib/error.scm 537 */
					obj_t BgL_list2105z00_1403;

					BgL_list2105z00_1403 = MAKE_PAIR(BgL_portz00_1402, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2105z00_1403);
				}
				{	/* Llib/error.scm 538 */
					obj_t BgL_arg2107z00_1405;

					obj_t BgL_arg2109z00_1407;

					{
						BgL_z62exceptionz62_bglt BgL_auxz00_4680;

						BgL_auxz00_4680 = (BgL_z62exceptionz62_bglt) (BgL_errz00_75);
						BgL_arg2107z00_1405 =
							(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4680))->
							BgL_fnamez00);
					}
					{
						BgL_z62exceptionz62_bglt BgL_auxz00_4683;

						BgL_auxz00_4683 = (BgL_z62exceptionz62_bglt) (BgL_errz00_75);
						BgL_arg2109z00_1407 =
							(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4683))->
							BgL_locationz00);
					}
					{	/* Llib/error.scm 538 */
						obj_t BgL_list2110z00_1408;

						{	/* Llib/error.scm 538 */
							obj_t BgL_arg2111z00_1409;

							{	/* Llib/error.scm 538 */
								obj_t BgL_arg2112z00_1410;

								{	/* Llib/error.scm 538 */
									obj_t BgL_arg2113z00_1411;

									{	/* Llib/error.scm 538 */
										obj_t BgL_arg2114z00_1412;

										BgL_arg2114z00_1412 =
											MAKE_PAIR(BCHAR(((unsigned char) ':')), BNIL);
										BgL_arg2113z00_1411 =
											MAKE_PAIR(BgL_arg2109z00_1407, BgL_arg2114z00_1412);
									}
									BgL_arg2112z00_1410 =
										MAKE_PAIR(BGl_string3169z00zz__errorz00,
										BgL_arg2113z00_1411);
								}
								BgL_arg2111z00_1409 =
									MAKE_PAIR(BgL_arg2107z00_1405, BgL_arg2112z00_1410);
							}
							BgL_list2110z00_1408 =
								MAKE_PAIR(BGl_string3170z00zz__errorz00, BgL_arg2111z00_1409);
						}
						BGl_fprintz00zz__r4_output_6_10_3z00(BgL_portz00_1402,
							BgL_list2110z00_1408);
				}}
				return BGl_notifyzd2z62errorzb0zz__errorz00(BgL_errz00_75);
			}
		}
	}



/* notify-&error/location-loc */
	obj_t
		BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00(BgL_z62errorz62_bglt
		BgL_errz00_76, obj_t BgL_fnamez00_77, obj_t BgL_linez00_78,
		obj_t BgL_locz00_79, obj_t BgL_stringz00_80, obj_t BgL_columnz00_81)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 545 */
			{	/* Llib/error.scm 546 */
				obj_t BgL_portz00_1413;

				obj_t BgL_procz00_1414;

				obj_t BgL_msgz00_1415;

				obj_t BgL_objz00_1416;

				{	/* Llib/error.scm 546 */
					obj_t BgL_res3055z00_3101;

					{	/* Llib/error.scm 546 */
						obj_t BgL_auxz00_4694;

						BgL_auxz00_4694 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3055z00_3101 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4694);
					}
					BgL_portz00_1413 = BgL_res3055z00_3101;
				}
				BgL_procz00_1414 =
					(((BgL_z62errorz62_bglt) CREF(BgL_errz00_76))->BgL_procz00);
				BgL_msgz00_1415 =
					(((BgL_z62errorz62_bglt) CREF(BgL_errz00_76))->BgL_msgz00);
				BgL_objz00_1416 =
					(((BgL_z62errorz62_bglt) CREF(BgL_errz00_76))->BgL_objz00);
				FLUSH_OUTPUT_PORT(BgL_portz00_1413);
				{	/* Llib/error.scm 552 */
					obj_t BgL_list2115z00_1417;

					BgL_list2115z00_1417 = MAKE_PAIR(BgL_portz00_1413, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2115z00_1417);
				}
				{	/* Llib/error.scm 553 */
					obj_t BgL_spacezd2stringzd2_1418;

					if (((long) CINT(BgL_columnz00_81) > ((long) 0)))
						{	/* Llib/error.scm 554 */
							obj_t BgL_list2124z00_1430;

							BgL_list2124z00_1430 =
								MAKE_PAIR(BCHAR(((unsigned char) ' ')), BNIL);
							{	/* Llib/error.scm 554 */
								obj_t BgL_res3056z00_3114;

								{	/* Llib/error.scm 554 */
									long BgL_kz00_3108;

									BgL_kz00_3108 = (long) CINT(BgL_columnz00_81);
									{	/* Llib/error.scm 554 */
										obj_t BgL_arg2547z00_3111;

										BgL_arg2547z00_3111 = CAR(BgL_list2124z00_1430);
										BgL_res3056z00_3114 =
											make_string(BgL_kz00_3108, CCHAR(BgL_arg2547z00_3111));
								}}
								BgL_spacezd2stringzd2_1418 = BgL_res3056z00_3114;
						}}
					else
						{	/* Llib/error.scm 553 */
							BgL_spacezd2stringzd2_1418 = BGl_string3171z00zz__errorz00;
						}
					{	/* Llib/error.scm 553 */
						long BgL_lz00_1419;

						BgL_lz00_1419 = STRING_LENGTH(BgL_stringz00_80);
						{	/* Llib/error.scm 556 */
							obj_t BgL_nzd2columnzd2_1420;

							if (((long) CINT(BgL_columnz00_81) >= BgL_lz00_1419))
								{	/* Llib/error.scm 557 */
									BgL_nzd2columnzd2_1420 = BINT(BgL_lz00_1419);
								}
							else
								{	/* Llib/error.scm 557 */
									BgL_nzd2columnzd2_1420 = BgL_columnz00_81;
								}
							{	/* Llib/error.scm 557 */

								BGl_fixzd2tabulationz12zc0zz__errorz00(BgL_nzd2columnzd2_1420,
									BgL_stringz00_80, BgL_spacezd2stringzd2_1418);
								BGl_printzd2cursorzd2zz__errorz00(BgL_fnamez00_77,
									BgL_linez00_78, BgL_locz00_79, BgL_stringz00_80,
									BgL_spacezd2stringzd2_1418);
								{	/* Llib/error.scm 565 */
									obj_t BgL_list2116z00_1421;

									BgL_list2116z00_1421 = MAKE_PAIR(BgL_portz00_1413, BNIL);
									BGl_displayz00zz__r4_output_6_10_3z00
										(BGl_string3154z00zz__errorz00, BgL_list2116z00_1421);
								}
								BGl_displayzd2circlezd2zz__pp_circlez00(BgL_procz00_1414,
									BgL_portz00_1413);
								{	/* Llib/error.scm 567 */
									obj_t BgL_list2117z00_1422;

									BgL_list2117z00_1422 = MAKE_PAIR(BgL_portz00_1413, BNIL);
									BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2117z00_1422);
								}
								BGl_displayzd2circlezd2zz__pp_circlez00(BgL_msgz00_1415,
									BgL_portz00_1413);
								{	/* Llib/error.scm 569 */
									obj_t BgL_list2118z00_1423;

									BgL_list2118z00_1423 = MAKE_PAIR(BgL_portz00_1413, BNIL);
									BGl_displayz00zz__r4_output_6_10_3z00
										(BGl_string3168z00zz__errorz00, BgL_list2118z00_1423);
								}
								BGl_displayzd2circlezd2zz__pp_circlez00(BgL_objz00_1416,
									BgL_portz00_1413);
								{	/* Llib/error.scm 571 */
									obj_t BgL_list2119z00_1424;

									BgL_list2119z00_1424 = MAKE_PAIR(BgL_portz00_1413, BNIL);
									BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2119z00_1424);
								}
								{	/* Llib/error.scm 572 */
									obj_t BgL_arg2121z00_1425;

									{	/* Llib/error.scm 572 */
										obj_t BgL__ortest_1831z00_1426;

										{
											BgL_z62exceptionz62_bglt BgL_auxz00_4730;

											BgL_auxz00_4730 =
												(BgL_z62exceptionz62_bglt) (BgL_errz00_76);
											BgL__ortest_1831z00_1426 =
												(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4730))->
												BgL_stackz00);
										}
										if (CBOOL(BgL__ortest_1831z00_1426))
											{	/* Llib/error.scm 572 */
												BgL_arg2121z00_1425 = BgL__ortest_1831z00_1426;
											}
										else
											{	/* Llib/error.scm 572 */

												{	/* Llib/error.scm 572 */

													BgL_arg2121z00_1425 =
														BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
												}
											}
									}
									BGl_displayzd2tracezd2stackz00zz__errorz00
										(BgL_arg2121z00_1425, BgL_portz00_1413);
								}
								return FLUSH_OUTPUT_PORT(BgL_portz00_1413);
							}
						}
					}
				}
			}
		}
	}



/* notify-&error/loc */
	obj_t BGl_notifyzd2z62errorzf2locz42zz__errorz00(BgL_z62errorz62_bglt
		BgL_errz00_82, obj_t BgL_fnamez00_83, obj_t BgL_locz00_84)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 579 */
			{	/* Llib/error.scm 580 */
				bool_t BgL_testz00_4738;

				if (STRINGP(BgL_fnamez00_83))
					{	/* Llib/error.scm 580 */
						if (INTEGERP(BgL_locz00_84))
							{	/* Llib/error.scm 580 */
								BgL_testz00_4738 = ((bool_t) 0);
							}
						else
							{	/* Llib/error.scm 580 */
								BgL_testz00_4738 = ((bool_t) 1);
							}
					}
				else
					{	/* Llib/error.scm 580 */
						BgL_testz00_4738 = ((bool_t) 1);
					}
				if (BgL_testz00_4738)
					{	/* Llib/error.scm 580 */
						return BGl_notifyzd2z62errorzb0zz__errorz00(BgL_errz00_82);
					}
				else
					{	/* Llib/error.scm 582 */
						obj_t BgL_lnumz00_1432;

						BgL_lnumz00_1432 =
							BGl_locationzd2linezd2numz00zz__errorz00(BgL_fnamez00_83,
							BgL_locz00_84);
						{	/* Llib/error.scm 584 */
							obj_t BgL_lpointz00_1433;

							obj_t BgL_lstringz00_1434;

							{	/* Llib/error.scm 584 */
								int BgL_auxz00_4745;

								BgL_auxz00_4745 = (int) (((long) 1));
								BgL_lpointz00_1433 = BGL_MVALUES_VAL(BgL_auxz00_4745);
							}
							{	/* Llib/error.scm 584 */
								int BgL_auxz00_4748;

								BgL_auxz00_4748 = (int) (((long) 2));
								BgL_lstringz00_1434 = BGL_MVALUES_VAL(BgL_auxz00_4748);
							}
							if (CBOOL(BgL_lnumz00_1432))
								{	/* Llib/error.scm 584 */
									return
										BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00
										(BgL_errz00_82, BgL_fnamez00_83, BgL_lnumz00_1432,
										BgL_locz00_84, BgL_lstringz00_1434, BgL_lpointz00_1433);
								}
							else
								{	/* Llib/error.scm 584 */
									return
										BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00
										(BgL_errz00_82);
								}
						}
					}
			}
		}
	}



/* location-line-num */
	obj_t BGl_locationzd2linezd2numz00zz__errorz00(obj_t BgL_filez00_85,
		obj_t BgL_pointz00_86)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 591 */
			{	/* Llib/error.scm 592 */
				bool_t BgL_testz00_4755;

				if (STRINGP(BgL_filez00_85))
					{	/* Llib/error.scm 592 */
						BgL_testz00_4755 = INTEGERP(BgL_pointz00_86);
					}
				else
					{	/* Llib/error.scm 592 */
						BgL_testz00_4755 = ((bool_t) 0);
					}
				if (BgL_testz00_4755)
					{	/* Llib/error.scm 593 */
						obj_t BgL_fnamez00_1438;

						if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
								BGl_string3172z00zz__errorz00))
							{	/* Llib/error.scm 593 */
								BgL_fnamez00_1438 =
									BGl_stringzd2replacezd2zz__r4_strings_6_7z00
									(BGl_uncygdrivez00zz__errorz00(BgL_filez00_85),
									(char) (((unsigned char) '/')),
									(char) (((unsigned char) '\\')));
							}
						else
							{	/* Llib/error.scm 593 */
								BgL_fnamez00_1438 = BgL_filez00_85;
							}
						{	/* Llib/error.scm 593 */
							obj_t BgL_portz00_1439;

							{	/* Ieee/port.scm 375 */

								BgL_portz00_1439 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_fnamez00_1438, BTRUE);
							}
							{	/* Llib/error.scm 596 */

								if (INPUT_PORTP(BgL_portz00_1439))
									{	/* Llib/error.scm 598 */
										obj_t BgL_g1832z00_1441;

										BgL_g1832z00_1441 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00
											(BgL_portz00_1439);
										{
											obj_t BgL_lstringz00_1443;

											long BgL_lnumz00_1444;

											long BgL_oposz00_1445;

											BgL_lstringz00_1443 = BgL_g1832z00_1441;
											BgL_lnumz00_1444 = ((long) 1);
											BgL_oposz00_1445 = ((long) 0);
										BgL_zc3anonymousza32130ze3z83_1446:
											if (EOF_OBJECTP(BgL_lstringz00_1443))
												{	/* Llib/error.scm 601 */
													bgl_close_input_port(BgL_portz00_1439);
													{	/* Llib/error.scm 604 */
														obj_t BgL_list2132z00_1448;

														{	/* Llib/error.scm 604 */
															obj_t BgL_arg2133z00_1449;

															{	/* Llib/error.scm 604 */
																obj_t BgL_arg2134z00_1450;

																BgL_arg2134z00_1450 = MAKE_PAIR(BFALSE, BNIL);
																BgL_arg2133z00_1449 =
																	MAKE_PAIR(BFALSE, BgL_arg2134z00_1450);
															}
															BgL_list2132z00_1448 =
																MAKE_PAIR(BFALSE, BgL_arg2133z00_1449);
														}
														return
															BGl_valuesz00zz__r5_control_features_6_4z00
															(BgL_list2132z00_1448);
													}
												}
											else
												{	/* Llib/error.scm 605 */
													bool_t BgL_testz00_4777;

													{	/* Llib/error.scm 605 */
														long BgL_arg2144z00_1459;

														BgL_arg2144z00_1459 =
															INPUT_PORT_FILEPOS(BgL_portz00_1439);
														BgL_testz00_4777 =
															(BgL_arg2144z00_1459 >
															(long) CINT(BgL_pointz00_86));
													}
													if (BgL_testz00_4777)
														{	/* Llib/error.scm 605 */
															bgl_close_input_port(BgL_portz00_1439);
															{	/* Llib/error.scm 608 */
																long BgL_arg2136z00_1452;

																BgL_arg2136z00_1452 =
																	(
																	(long) CINT(BgL_pointz00_86) -
																	BgL_oposz00_1445);
																{	/* Llib/error.scm 608 */
																	obj_t BgL_list2137z00_1453;

																	{	/* Llib/error.scm 608 */
																		obj_t BgL_arg2138z00_1454;

																		{	/* Llib/error.scm 608 */
																			obj_t BgL_arg2139z00_1455;

																			BgL_arg2139z00_1455 =
																				MAKE_PAIR(BgL_lstringz00_1443, BNIL);
																			BgL_arg2138z00_1454 =
																				MAKE_PAIR(BINT(BgL_arg2136z00_1452),
																				BgL_arg2139z00_1455);
																		}
																		BgL_list2137z00_1453 =
																			MAKE_PAIR(BINT(BgL_lnumz00_1444),
																			BgL_arg2138z00_1454);
																	}
																	return
																		BGl_valuesz00zz__r5_control_features_6_4z00
																		(BgL_list2137z00_1453);
																}
															}
														}
													else
														{	/* Llib/error.scm 609 */
															long BgL_oposz00_1456;

															BgL_oposz00_1456 =
																INPUT_PORT_FILEPOS(BgL_portz00_1439);
															{
																long BgL_oposz00_4795;

																long BgL_lnumz00_4793;

																obj_t BgL_lstringz00_4791;

																BgL_lstringz00_4791 =
																	BGl_readzd2linezd2zz__r4_input_6_10_2z00
																	(BgL_portz00_1439);
																BgL_lnumz00_4793 =
																	(BgL_lnumz00_1444 + ((long) 1));
																BgL_oposz00_4795 = BgL_oposz00_1456;
																BgL_oposz00_1445 = BgL_oposz00_4795;
																BgL_lnumz00_1444 = BgL_lnumz00_4793;
																BgL_lstringz00_1443 = BgL_lstringz00_4791;
																goto BgL_zc3anonymousza32130ze3z83_1446;
															}
														}
												}
										}
									}
								else
									{	/* Llib/error.scm 597 */
										return BFALSE;
									}
							}
						}
					}
				else
					{	/* Llib/error.scm 613 */
						obj_t BgL_list2150z00_1467;

						{	/* Llib/error.scm 613 */
							obj_t BgL_arg2151z00_1468;

							{	/* Llib/error.scm 613 */
								obj_t BgL_arg2152z00_1469;

								BgL_arg2152z00_1469 = MAKE_PAIR(BFALSE, BNIL);
								BgL_arg2151z00_1468 = MAKE_PAIR(BFALSE, BgL_arg2152z00_1469);
							}
							BgL_list2150z00_1467 = MAKE_PAIR(BFALSE, BgL_arg2151z00_1468);
						}
						return
							BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list2150z00_1467);
					}
			}
		}
	}



/* error-notify */
	BGL_EXPORTED_DEF obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t BgL_ez00_88)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 624 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_88,
					BGl_z62errorz62zz__objectz00))
				{	/* Llib/error.scm 627 */
					bool_t BgL_testz00_4802;

					{	/* Llib/error.scm 627 */
						BgL_z62errorz62_bglt BgL_ez00_3147;

						BgL_ez00_3147 = (BgL_z62errorz62_bglt) (BgL_ez00_88);
						{	/* Llib/error.scm 627 */
							bool_t BgL_testz00_4804;

							{	/* Llib/error.scm 627 */
								obj_t BgL_auxz00_4805;

								{
									BgL_z62exceptionz62_bglt BgL_auxz00_4806;

									BgL_auxz00_4806 = (BgL_z62exceptionz62_bglt) (BgL_ez00_3147);
									BgL_auxz00_4805 =
										(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4806))->
										BgL_fnamez00);
								}
								BgL_testz00_4804 = STRINGP(BgL_auxz00_4805);
							}
							if (BgL_testz00_4804)
								{	/* Llib/error.scm 627 */
									obj_t BgL_auxz00_4810;

									{
										BgL_z62exceptionz62_bglt BgL_auxz00_4811;

										BgL_auxz00_4811 =
											(BgL_z62exceptionz62_bglt) (BgL_ez00_3147);
										BgL_auxz00_4810 =
											(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4811))->
											BgL_locationz00);
									}
									BgL_testz00_4802 =
										BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BgL_auxz00_4810);
								}
							else
								{	/* Llib/error.scm 627 */
									BgL_testz00_4802 = ((bool_t) 0);
								}
						}
					}
					if (BgL_testz00_4802)
						{	/* Llib/error.scm 628 */
							obj_t BgL_arg2158z00_1476;

							obj_t BgL_arg2159z00_1477;

							{
								BgL_z62exceptionz62_bglt BgL_auxz00_4815;

								BgL_auxz00_4815 =
									(BgL_z62exceptionz62_bglt) (
									(BgL_z62errorz62_bglt) (BgL_ez00_88));
								BgL_arg2158z00_1476 =
									(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4815))->
									BgL_fnamez00);
							}
							{
								BgL_z62exceptionz62_bglt BgL_auxz00_4819;

								BgL_auxz00_4819 =
									(BgL_z62exceptionz62_bglt) (
									(BgL_z62errorz62_bglt) (BgL_ez00_88));
								BgL_arg2159z00_1477 =
									(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4819))->
									BgL_locationz00);
							}
							return
								BGl_notifyzd2z62errorzf2locz42zz__errorz00(
								(BgL_z62errorz62_bglt) (BgL_ez00_88), BgL_arg2158z00_1476,
								BgL_arg2159z00_1477);
						}
					else
						{	/* Llib/error.scm 627 */
							return
								BGl_notifyzd2z62errorzb0zz__errorz00(
								(BgL_z62errorz62_bglt) (BgL_ez00_88));
						}
				}
			else
				{	/* Llib/error.scm 626 */
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_88,
							BGl_z62conditionz62zz__objectz00))
						{	/* Llib/error.scm 631 */
							obj_t BgL_arg2161z00_1479;

							{	/* Llib/error.scm 631 */
								obj_t BgL_res3057z00_3158;

								{	/* Llib/error.scm 631 */
									obj_t BgL_auxz00_4829;

									BgL_auxz00_4829 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3057z00_3158 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4829);
								}
								BgL_arg2161z00_1479 = BgL_res3057z00_3158;
							}
							{	/* Llib/error.scm 631 */
								obj_t BgL_list2163z00_1481;

								{	/* Llib/error.scm 631 */
									obj_t BgL_arg2164z00_1482;

									BgL_arg2164z00_1482 = MAKE_PAIR(BgL_ez00_88, BNIL);
									BgL_list2163z00_1481 =
										MAKE_PAIR(BGl_string3173z00zz__errorz00,
										BgL_arg2164z00_1482);
								}
								return
									BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg2161z00_1479,
									BgL_list2163z00_1481);
							}
						}
					else
						{	/* Llib/error.scm 630 */
							return BFALSE;
						}
				}
		}
	}



/* _error-notify */
	obj_t BGl__errorzd2notifyzd2zz__errorz00(obj_t BgL_envz00_3949,
		obj_t BgL_ez00_3950)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 624 */
			return BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_3950);
		}
	}



/* error-notify/location */
	BGL_EXPORTED_DEF obj_t BGl_errorzd2notifyzf2locationz20zz__errorz00(obj_t
		BgL_ez00_89, obj_t BgL_fnamez00_90, int BgL_locationz00_91)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 636 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_89,
					BGl_z62errorz62zz__objectz00))
				{	/* Llib/error.scm 637 */
					return
						BGl_notifyzd2z62errorzf2locz42zz__errorz00(
						(BgL_z62errorz62_bglt) (BgL_ez00_89), BgL_fnamez00_90,
						BINT(BgL_locationz00_91));
				}
			else
				{	/* Llib/error.scm 637 */
					return BFALSE;
				}
		}
	}



/* _error-notify/location */
	obj_t BGl__errorzd2notifyzf2locationz20zz__errorz00(obj_t BgL_envz00_3951,
		obj_t BgL_ez00_3952, obj_t BgL_fnamez00_3953, obj_t BgL_locationz00_3954)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 636 */
			{	/* Llib/error.scm 637 */
				int BgL_auxz00_4848;

				obj_t BgL_auxz00_4841;

				{	/* Llib/error.scm 637 */
					obj_t BgL_auxz00_4849;

					if (INTEGERP(BgL_locationz00_3954))
						{	/* Llib/error.scm 637 */
							BgL_auxz00_4849 = BgL_locationz00_3954;
						}
					else
						{
							obj_t BgL_auxz00_4852;

							BgL_auxz00_4852 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 27016)), BGl_string3174z00zz__errorz00,
								BGl_string3137z00zz__errorz00, BgL_locationz00_3954);
							FAILURE(BgL_auxz00_4852, BFALSE, BFALSE);
						}
					BgL_auxz00_4848 = CINT(BgL_auxz00_4849);
				}
				if (STRINGP(BgL_fnamez00_3953))
					{	/* Llib/error.scm 637 */
						BgL_auxz00_4841 = BgL_fnamez00_3953;
					}
				else
					{
						obj_t BgL_auxz00_4844;

						BgL_auxz00_4844 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 27016)), BGl_string3174z00zz__errorz00,
							BGl_string3165z00zz__errorz00, BgL_fnamez00_3953);
						FAILURE(BgL_auxz00_4844, BFALSE, BFALSE);
					}
				return
					BGl_errorzd2notifyzf2locationz20zz__errorz00(BgL_ez00_3952,
					BgL_auxz00_4841, BgL_auxz00_4848);
			}
		}
	}



/* warning-notify */
	BGL_EXPORTED_DEF obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t BgL_ez00_92)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 643 */
			{
				obj_t BgL_ez00_1497;

				{	/* Llib/error.scm 657 */
					bool_t BgL_testz00_4858;

					{	/* Llib/error.scm 657 */
						int BgL_arg2172z00_1492;

						BgL_arg2172z00_1492 = BGl_bigloozd2warningzd2zz__paramz00();
						BgL_testz00_4858 = ((long) (BgL_arg2172z00_1492) > ((long) 0));
					}
					if (BgL_testz00_4858)
						{	/* Llib/error.scm 658 */
							bool_t BgL_testz00_4862;

							{	/* Llib/error.scm 658 */
								bool_t BgL_testz00_4863;

								{	/* Llib/error.scm 658 */
									obj_t BgL_auxz00_4864;

									{
										BgL_z62exceptionz62_bglt BgL_auxz00_4865;

										BgL_auxz00_4865 = (BgL_z62exceptionz62_bglt) (BgL_ez00_92);
										BgL_auxz00_4864 =
											(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4865))->
											BgL_fnamez00);
									}
									BgL_testz00_4863 = STRINGP(BgL_auxz00_4864);
								}
								if (BgL_testz00_4863)
									{	/* Llib/error.scm 658 */
										obj_t BgL_auxz00_4869;

										{
											BgL_z62exceptionz62_bglt BgL_auxz00_4870;

											BgL_auxz00_4870 =
												(BgL_z62exceptionz62_bglt) (BgL_ez00_92);
											BgL_auxz00_4869 =
												(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4870))->
												BgL_locationz00);
										}
										BgL_testz00_4862 =
											BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
											(BgL_auxz00_4869);
									}
								else
									{	/* Llib/error.scm 658 */
										BgL_testz00_4862 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_4862)
								{	/* Llib/error.scm 659 */
									obj_t BgL_fnamez00_1487;

									{
										BgL_z62exceptionz62_bglt BgL_auxz00_4874;

										BgL_auxz00_4874 = (BgL_z62exceptionz62_bglt) (BgL_ez00_92);
										BgL_fnamez00_1487 =
											(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4874))->
											BgL_fnamez00);
									}
									if (bigloo_strcmp(BgL_fnamez00_1487,
											BGl_string3177z00zz__errorz00))
										{	/* Llib/error.scm 661 */
											BgL_ez00_1497 = BgL_ez00_92;
										BgL_zc3anonymousza32177ze3z83_1498:
											{	/* Llib/error.scm 645 */
												obj_t BgL_arg2178z00_1499;

												{	/* Llib/error.scm 645 */
													obj_t BgL_res3059z00_3197;

													{	/* Llib/error.scm 645 */
														obj_t BgL_auxz00_4879;

														BgL_auxz00_4879 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3059z00_3197 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4879);
													}
													BgL_arg2178z00_1499 = BgL_res3059z00_3197;
												}
												FLUSH_OUTPUT_PORT(BgL_arg2178z00_1499);
											}
											{	/* Llib/error.scm 646 */
												obj_t BgL_arg2180z00_1501;

												{	/* Llib/error.scm 646 */
													obj_t BgL_res3060z00_3200;

													{	/* Llib/error.scm 646 */
														obj_t BgL_auxz00_4883;

														BgL_auxz00_4883 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3060z00_3200 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4883);
													}
													BgL_arg2180z00_1501 = BgL_res3060z00_3200;
												}
												{	/* Llib/error.scm 646 */
													obj_t BgL_list2181z00_1502;

													BgL_list2181z00_1502 =
														MAKE_PAIR(BgL_arg2180z00_1501, BNIL);
													BGl_displayz00zz__r4_output_6_10_3z00
														(BGl_string3175z00zz__errorz00,
														BgL_list2181z00_1502);
												}
											}
											{	/* Llib/error.scm 647 */
												obj_t BgL_argsz00_1503;

												{
													BgL_z62warningz62_bglt BgL_auxz00_4888;

													BgL_auxz00_4888 =
														(BgL_z62warningz62_bglt) (BgL_ez00_1497);
													BgL_argsz00_1503 =
														(((BgL_z62warningz62_bglt) CREF(BgL_auxz00_4888))->
														BgL_argsz00);
												}
												if (NULLP(BgL_argsz00_1503))
													{	/* Llib/error.scm 648 */
														BFALSE;
													}
												else
													{	/* Llib/error.scm 648 */
														{	/* Llib/error.scm 650 */
															obj_t BgL_arg2183z00_1505;

															obj_t BgL_arg2184z00_1506;

															BgL_arg2183z00_1505 = CAR(BgL_argsz00_1503);
															{	/* Llib/error.scm 650 */
																obj_t BgL_res3061z00_3205;

																{	/* Llib/error.scm 650 */
																	obj_t BgL_auxz00_4894;

																	BgL_auxz00_4894 = BGL_CURRENT_DYNAMIC_ENV();
																	BgL_res3061z00_3205 =
																		BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4894);
																}
																BgL_arg2184z00_1506 = BgL_res3061z00_3205;
															}
															BGl_displayzd2circlezd2zz__pp_circlez00
																(BgL_arg2183z00_1505, BgL_arg2184z00_1506);
														}
														{	/* Llib/error.scm 651 */
															obj_t BgL_arg2185z00_1507;

															{	/* Llib/error.scm 651 */
																obj_t BgL_res3062z00_3207;

																{	/* Llib/error.scm 651 */
																	obj_t BgL_auxz00_4898;

																	BgL_auxz00_4898 = BGL_CURRENT_DYNAMIC_ENV();
																	BgL_res3062z00_3207 =
																		BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4898);
																}
																BgL_arg2185z00_1507 = BgL_res3062z00_3207;
															}
															{	/* Llib/error.scm 651 */
																obj_t BgL_list2186z00_1508;

																BgL_list2186z00_1508 =
																	MAKE_PAIR(BgL_arg2185z00_1507, BNIL);
																BGl_newlinez00zz__r4_output_6_10_3z00
																	(BgL_list2186z00_1508);
															}
														}
														{	/* Llib/error.scm 652 */
															obj_t BgL_arg2188z00_1510;

															BgL_arg2188z00_1510 = CDR(BgL_argsz00_1503);
															{	/* Llib/error.scm 652 */
																obj_t BgL_list2189z00_1511;

																BgL_list2189z00_1511 =
																	MAKE_PAIR(BgL_arg2188z00_1510, BNIL);
																BGl_forzd2eachzd2zz__r4_control_features_6_9z00
																	(BGl_proc3176z00zz__errorz00,
																	BgL_list2189z00_1511);
															}
														}
													}
											}
											{	/* Llib/error.scm 655 */
												obj_t BgL_arg2192z00_1516;

												{	/* Llib/error.scm 655 */
													obj_t BgL_res3064z00_3213;

													{	/* Llib/error.scm 655 */
														obj_t BgL_auxz00_4906;

														BgL_auxz00_4906 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3064z00_3213 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4906);
													}
													BgL_arg2192z00_1516 = BgL_res3064z00_3213;
												}
												{	/* Llib/error.scm 655 */
													obj_t BgL_list2193z00_1517;

													BgL_list2193z00_1517 =
														MAKE_PAIR(BgL_arg2192z00_1516, BNIL);
													BGl_newlinez00zz__r4_output_6_10_3z00
														(BgL_list2193z00_1517);
												}
											}
											{	/* Llib/error.scm 656 */
												obj_t BgL_arg2194z00_1518;

												{	/* Llib/error.scm 656 */
													obj_t BgL_res3065z00_3215;

													{	/* Llib/error.scm 656 */
														obj_t BgL_auxz00_4911;

														BgL_auxz00_4911 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3065z00_3215 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4911);
													}
													BgL_arg2194z00_1518 = BgL_res3065z00_3215;
												}
												FLUSH_OUTPUT_PORT(BgL_arg2194z00_1518);
											}
										}
									else
										{	/* Llib/error.scm 661 */
											if (bigloo_strcmp(BgL_fnamez00_1487,
													BGl_string3178z00zz__errorz00))
												{
													obj_t BgL_ez00_4917;

													BgL_ez00_4917 = BgL_ez00_92;
													BgL_ez00_1497 = BgL_ez00_4917;
													goto BgL_zc3anonymousza32177ze3z83_1498;
												}
											else
												{	/* Llib/error.scm 667 */
													obj_t BgL_arg2170z00_1490;

													obj_t BgL_arg2171z00_1491;

													{
														BgL_z62exceptionz62_bglt BgL_auxz00_4918;

														BgL_auxz00_4918 =
															(BgL_z62exceptionz62_bglt) (BgL_ez00_92);
														BgL_arg2170z00_1490 =
															(((BgL_z62exceptionz62_bglt)
																CREF(BgL_auxz00_4918))->BgL_locationz00);
													}
													{
														BgL_z62warningz62_bglt BgL_auxz00_4921;

														BgL_auxz00_4921 =
															(BgL_z62warningz62_bglt) (BgL_ez00_92);
														BgL_arg2171z00_1491 =
															(((BgL_z62warningz62_bglt)
																CREF(BgL_auxz00_4921))->BgL_argsz00);
													}
													{	/* Llib/error.scm 666 */
														obj_t BgL_portz00_3180;

														{	/* Llib/error.scm 666 */

															BgL_portz00_3180 =
																BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
																(BgL_fnamez00_1487, BTRUE);
														}
														if (INPUT_PORTP(BgL_portz00_3180))
															{	/* Llib/error.scm 666 */
																obj_t BgL_lnumz00_3184;

																BgL_lnumz00_3184 =
																	BGl_locationzd2linezd2numz00zz__errorz00
																	(BgL_fnamez00_1487, BgL_arg2170z00_1490);
																{	/* Llib/error.scm 666 */
																	obj_t BgL_lpointz00_3185;

																	obj_t BgL_lstringz00_3186;

																	{	/* Llib/error.scm 666 */
																		int BgL_auxz00_4928;

																		BgL_auxz00_4928 = (int) (((long) 1));
																		BgL_lpointz00_3185 =
																			BGL_MVALUES_VAL(BgL_auxz00_4928);
																	}
																	{	/* Llib/error.scm 666 */
																		int BgL_auxz00_4931;

																		BgL_auxz00_4931 = (int) (((long) 2));
																		BgL_lstringz00_3186 =
																			BGL_MVALUES_VAL(BgL_auxz00_4931);
																	}
																	if (CBOOL(BgL_lnumz00_3184))
																		{	/* Llib/error.scm 666 */
																			BGl_dozd2warnzf2locationz20zz__errorz00
																				(BgL_fnamez00_1487, BgL_lnumz00_3184,
																				BgL_arg2170z00_1490,
																				BgL_lstringz00_3186, BgL_lpointz00_3185,
																				BgL_arg2171z00_1491);
																		}
																	else
																		{	/* Llib/error.scm 666 */
																			BGl_warningz00zz__errorz00
																				(BgL_arg2171z00_1491);
																		}
																}
															}
														else
															{	/* Llib/error.scm 666 */
																BGl_warningz00zz__errorz00(BgL_arg2171z00_1491);
															}
													}
												}
										}
								}
							else
								{
									obj_t BgL_ez00_4939;

									BgL_ez00_4939 = BgL_ez00_92;
									BgL_ez00_1497 = BgL_ez00_4939;
									goto BgL_zc3anonymousza32177ze3z83_1498;
								}
						}
					else
						{	/* Llib/error.scm 657 */
							BFALSE;
						}
				}
				{	/* Llib/error.scm 671 */
					bool_t BgL_testz00_4940;

					{	/* Llib/error.scm 671 */
						BgL_z62exceptionz62_bglt BgL_obj1108z00_3192;

						BgL_obj1108z00_3192 = (BgL_z62exceptionz62_bglt) (BgL_ez00_92);
						BgL_testz00_4940 =
							CBOOL(
							(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1108z00_3192))->
								BgL_stackz00));
					}
					if (BgL_testz00_4940)
						{	/* Llib/error.scm 672 */
							obj_t BgL_arg2175z00_1495;

							obj_t BgL_arg2176z00_1496;

							{
								BgL_z62exceptionz62_bglt BgL_auxz00_4944;

								BgL_auxz00_4944 = (BgL_z62exceptionz62_bglt) (BgL_ez00_92);
								BgL_arg2175z00_1495 =
									(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4944))->
									BgL_stackz00);
							}
							{	/* Llib/error.scm 672 */
								obj_t BgL_res3058z00_3195;

								{	/* Llib/error.scm 672 */
									obj_t BgL_auxz00_4947;

									BgL_auxz00_4947 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3058z00_3195 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4947);
								}
								BgL_arg2176z00_1496 = BgL_res3058z00_3195;
							}
							BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_arg2175z00_1495,
								BgL_arg2176z00_1496);
						}
					else
						{	/* Llib/error.scm 671 */
							BFALSE;
						}
				}
				return BFALSE;
			}
		}
	}



/* _warning-notify */
	obj_t BGl__warningzd2notifyzd2zz__errorz00(obj_t BgL_envz00_3956,
		obj_t BgL_ez00_3957)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 643 */
			return BGl_warningzd2notifyzd2zz__errorz00(BgL_ez00_3957);
		}
	}



/* <anonymous:2190> */
	obj_t BGl_zc3anonymousza32190ze3z83zz__errorz00(obj_t BgL_envz00_3958,
		obj_t BgL_az00_3959)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 652 */
			{
				obj_t BgL_az00_1512;

				BgL_az00_1512 = BgL_az00_3959;
				{	/* Llib/error.scm 653 */
					obj_t BgL_arg2191z00_3209;

					{	/* Llib/error.scm 653 */
						obj_t BgL_res3063z00_3211;

						{	/* Llib/error.scm 653 */
							obj_t BgL_auxz00_4952;

							BgL_auxz00_4952 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3063z00_3211 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4952);
						}
						BgL_arg2191z00_3209 = BgL_res3063z00_3211;
					}
					return
						BGl_displayzd2circlezd2zz__pp_circlez00(BgL_az00_1512,
						BgL_arg2191z00_3209);
				}
			}
		}
	}



/* warning-notify/location */
	BGL_EXPORTED_DEF obj_t BGl_warningzd2notifyzf2locationz20zz__errorz00(obj_t
		BgL_ez00_93, obj_t BgL_fnamez00_94, int BgL_locationz00_95)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 678 */
			{	/* Llib/error.scm 679 */
				bool_t BgL_testz00_4956;

				{	/* Llib/error.scm 679 */
					int BgL_arg2197z00_3218;

					BgL_arg2197z00_3218 = BGl_bigloozd2warningzd2zz__paramz00();
					BgL_testz00_4956 = ((long) (BgL_arg2197z00_3218) > ((long) 0));
				}
				if (BgL_testz00_4956)
					{	/* Llib/error.scm 679 */
						obj_t BgL_arg2196z00_3220;

						{
							BgL_z62warningz62_bglt BgL_auxz00_4960;

							BgL_auxz00_4960 = (BgL_z62warningz62_bglt) (BgL_ez00_93);
							BgL_arg2196z00_3220 =
								(((BgL_z62warningz62_bglt) CREF(BgL_auxz00_4960))->BgL_argsz00);
						}
						{	/* Llib/error.scm 679 */
							obj_t BgL_portz00_3227;

							{	/* Llib/error.scm 679 */

								BgL_portz00_3227 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_fnamez00_94, BTRUE);
							}
							if (INPUT_PORTP(BgL_portz00_3227))
								{	/* Llib/error.scm 679 */
									obj_t BgL_lnumz00_3231;

									BgL_lnumz00_3231 =
										BGl_locationzd2linezd2numz00zz__errorz00(BgL_fnamez00_94,
										BINT(BgL_locationz00_95));
									{	/* Llib/error.scm 679 */
										obj_t BgL_lpointz00_3232;

										obj_t BgL_lstringz00_3233;

										{	/* Llib/error.scm 679 */
											int BgL_auxz00_4968;

											BgL_auxz00_4968 = (int) (((long) 1));
											BgL_lpointz00_3232 = BGL_MVALUES_VAL(BgL_auxz00_4968);
										}
										{	/* Llib/error.scm 679 */
											int BgL_auxz00_4971;

											BgL_auxz00_4971 = (int) (((long) 2));
											BgL_lstringz00_3233 = BGL_MVALUES_VAL(BgL_auxz00_4971);
										}
										if (CBOOL(BgL_lnumz00_3231))
											{	/* Llib/error.scm 679 */
												return
													BGl_dozd2warnzf2locationz20zz__errorz00
													(BgL_fnamez00_94, BgL_lnumz00_3231,
													BINT(BgL_locationz00_95), BgL_lstringz00_3233,
													BgL_lpointz00_3232, BgL_arg2196z00_3220);
											}
										else
											{	/* Llib/error.scm 679 */
												return BGl_warningz00zz__errorz00(BgL_arg2196z00_3220);
											}
									}
								}
							else
								{	/* Llib/error.scm 679 */
									return BGl_warningz00zz__errorz00(BgL_arg2196z00_3220);
								}
						}
					}
				else
					{	/* Llib/error.scm 679 */
						return BFALSE;
					}
			}
		}
	}



/* _warning-notify/location */
	obj_t BGl__warningzd2notifyzf2locationz20zz__errorz00(obj_t BgL_envz00_3960,
		obj_t BgL_ez00_3961, obj_t BgL_fnamez00_3962, obj_t BgL_locationz00_3963)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 678 */
			{	/* Llib/error.scm 679 */
				int BgL_auxz00_4987;

				obj_t BgL_auxz00_4980;

				{	/* Llib/error.scm 679 */
					obj_t BgL_auxz00_4988;

					if (INTEGERP(BgL_locationz00_3963))
						{	/* Llib/error.scm 679 */
							BgL_auxz00_4988 = BgL_locationz00_3963;
						}
					else
						{
							obj_t BgL_auxz00_4991;

							BgL_auxz00_4991 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 28550)), BGl_string3179z00zz__errorz00,
								BGl_string3137z00zz__errorz00, BgL_locationz00_3963);
							FAILURE(BgL_auxz00_4991, BFALSE, BFALSE);
						}
					BgL_auxz00_4987 = CINT(BgL_auxz00_4988);
				}
				if (STRINGP(BgL_fnamez00_3962))
					{	/* Llib/error.scm 679 */
						BgL_auxz00_4980 = BgL_fnamez00_3962;
					}
				else
					{
						obj_t BgL_auxz00_4983;

						BgL_auxz00_4983 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 28550)), BGl_string3179z00zz__errorz00,
							BGl_string3165z00zz__errorz00, BgL_fnamez00_3962);
						FAILURE(BgL_auxz00_4983, BFALSE, BFALSE);
					}
				return
					BGl_warningzd2notifyzf2locationz20zz__errorz00(BgL_ez00_3961,
					BgL_auxz00_4980, BgL_auxz00_4987);
			}
		}
	}



/* do-warn/location */
	obj_t BGl_dozd2warnzf2locationz20zz__errorz00(obj_t BgL_fnamez00_99,
		obj_t BgL_linez00_100, obj_t BgL_charz00_101, obj_t BgL_stringz00_102,
		obj_t BgL_markerz00_103, obj_t BgL_argsz00_104)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 702 */
			{	/* Llib/error.scm 703 */
				obj_t BgL_arg2203z00_1533;

				{	/* Llib/error.scm 703 */
					obj_t BgL_res3066z00_3260;

					{	/* Llib/error.scm 703 */
						obj_t BgL_auxz00_4997;

						BgL_auxz00_4997 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3066z00_3260 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4997);
					}
					BgL_arg2203z00_1533 = BgL_res3066z00_3260;
				}
				FLUSH_OUTPUT_PORT(BgL_arg2203z00_1533);
			}
			{	/* Llib/error.scm 704 */
				obj_t BgL_arg2204z00_1534;

				{	/* Llib/error.scm 704 */
					obj_t BgL_res3067z00_3263;

					{	/* Llib/error.scm 704 */
						obj_t BgL_auxz00_5001;

						BgL_auxz00_5001 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3067z00_3263 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5001);
					}
					BgL_arg2204z00_1534 = BgL_res3067z00_3263;
				}
				{	/* Llib/error.scm 704 */
					obj_t BgL_list2205z00_1535;

					BgL_list2205z00_1535 = MAKE_PAIR(BgL_arg2204z00_1534, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2205z00_1535);
				}
			}
			{	/* Llib/error.scm 705 */
				obj_t BgL_spacezd2stringzd2_1536;

				if (((long) CINT(BgL_markerz00_103) > ((long) 0)))
					{	/* Llib/error.scm 706 */
						obj_t BgL_list2227z00_1558;

						BgL_list2227z00_1558 =
							MAKE_PAIR(BCHAR(((unsigned char) ' ')), BNIL);
						{	/* Llib/error.scm 706 */
							obj_t BgL_res3068z00_3272;

							{	/* Llib/error.scm 706 */
								long BgL_kz00_3266;

								BgL_kz00_3266 = (long) CINT(BgL_markerz00_103);
								{	/* Llib/error.scm 706 */
									obj_t BgL_arg2547z00_3269;

									BgL_arg2547z00_3269 = CAR(BgL_list2227z00_1558);
									BgL_res3068z00_3272 =
										make_string(BgL_kz00_3266, CCHAR(BgL_arg2547z00_3269));
							}}
							BgL_spacezd2stringzd2_1536 = BgL_res3068z00_3272;
					}}
				else
					{	/* Llib/error.scm 705 */
						BgL_spacezd2stringzd2_1536 = BGl_string3171z00zz__errorz00;
					}
				{	/* Llib/error.scm 705 */
					long BgL_lz00_1537;

					BgL_lz00_1537 = STRING_LENGTH(BgL_stringz00_102);
					{	/* Llib/error.scm 708 */
						obj_t BgL_nzd2markerzd2_1538;

						if (((long) CINT(BgL_markerz00_103) >= BgL_lz00_1537))
							{	/* Llib/error.scm 709 */
								BgL_nzd2markerzd2_1538 = BINT(BgL_lz00_1537);
							}
						else
							{	/* Llib/error.scm 709 */
								BgL_nzd2markerzd2_1538 = BgL_markerz00_103;
							}
						{	/* Llib/error.scm 709 */

							BGl_fixzd2tabulationz12zc0zz__errorz00(BgL_nzd2markerzd2_1538,
								BgL_stringz00_102, BgL_spacezd2stringzd2_1536);
							BGl_printzd2cursorzd2zz__errorz00(BgL_fnamez00_99,
								BgL_linez00_100, BgL_charz00_101, BgL_stringz00_102,
								BgL_spacezd2stringzd2_1536);
							{	/* Llib/error.scm 715 */
								obj_t BgL_arg2207z00_1540;

								{	/* Llib/error.scm 715 */
									obj_t BgL_res3069z00_3277;

									{	/* Llib/error.scm 715 */
										obj_t BgL_auxz00_5022;

										BgL_auxz00_5022 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3069z00_3277 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5022);
									}
									BgL_arg2207z00_1540 = BgL_res3069z00_3277;
								}
								{	/* Llib/error.scm 715 */
									obj_t BgL_list2208z00_1541;

									BgL_list2208z00_1541 = MAKE_PAIR(BgL_arg2207z00_1540, BNIL);
									BGl_displayz00zz__r4_output_6_10_3z00
										(BGl_string3175z00zz__errorz00, BgL_list2208z00_1541);
								}
							}
							if (NULLP(BgL_argsz00_104))
								{	/* Llib/error.scm 716 */
									BFALSE;
								}
							else
								{	/* Llib/error.scm 717 */
									obj_t BgL_portz00_1543;

									{	/* Llib/error.scm 717 */
										obj_t BgL_res3070z00_3280;

										{	/* Llib/error.scm 717 */
											obj_t BgL_auxz00_5029;

											BgL_auxz00_5029 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res3070z00_3280 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5029);
										}
										BgL_portz00_1543 = BgL_res3070z00_3280;
									}
									BGl_displayzd2circlezd2zz__pp_circlez00(CAR(BgL_argsz00_104),
										BgL_portz00_1543);
									{	/* Llib/error.scm 719 */
										obj_t BgL_list2212z00_1545;

										BgL_list2212z00_1545 = MAKE_PAIR(BgL_portz00_1543, BNIL);
										BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2212z00_1545);
									}
									{	/* Llib/error.scm 720 */
										obj_t BgL_arg2214z00_1547;

										BgL_arg2214z00_1547 = CDR(BgL_argsz00_104);
										{	/* Llib/error.scm 720 */
											obj_t BgL_list2215z00_1548;

											BgL_list2215z00_1548 =
												MAKE_PAIR(BgL_arg2214z00_1547, BNIL);
											BGl_forzd2eachzd2zz__r4_control_features_6_9z00
												(BGl_proc3180z00zz__errorz00, BgL_list2215z00_1548);
										}
									}
								}
							{	/* Llib/error.scm 723 */
								obj_t BgL_arg2222z00_1553;

								{	/* Llib/error.scm 723 */
									obj_t BgL_res3072z00_3287;

									{	/* Llib/error.scm 723 */
										obj_t BgL_auxz00_5039;

										BgL_auxz00_5039 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3072z00_3287 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5039);
									}
									BgL_arg2222z00_1553 = BgL_res3072z00_3287;
								}
								{	/* Llib/error.scm 723 */
									obj_t BgL_list2223z00_1554;

									BgL_list2223z00_1554 = MAKE_PAIR(BgL_arg2222z00_1553, BNIL);
									BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2223z00_1554);
								}
							}
							{	/* Llib/error.scm 724 */
								obj_t BgL_arg2224z00_1555;

								{	/* Llib/error.scm 724 */
									obj_t BgL_res3073z00_3289;

									{	/* Llib/error.scm 724 */
										obj_t BgL_auxz00_5044;

										BgL_auxz00_5044 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3073z00_3289 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5044);
									}
									BgL_arg2224z00_1555 = BgL_res3073z00_3289;
								}
								return FLUSH_OUTPUT_PORT(BgL_arg2224z00_1555);
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:2216> */
	obj_t BGl_zc3anonymousza32216ze3z83zz__errorz00(obj_t BgL_envz00_3965,
		obj_t BgL_az00_3966)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 720 */
			{
				obj_t BgL_az00_1549;

				BgL_az00_1549 = BgL_az00_3966;
				{	/* Llib/error.scm 721 */
					obj_t BgL_arg2217z00_3283;

					{	/* Llib/error.scm 721 */
						obj_t BgL_res3071z00_3285;

						{	/* Llib/error.scm 721 */
							obj_t BgL_auxz00_5048;

							BgL_auxz00_5048 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3071z00_3285 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5048);
						}
						BgL_arg2217z00_3283 = BgL_res3071z00_3285;
					}
					return
						BGl_displayzd2circlezd2zz__pp_circlez00(BgL_az00_1549,
						BgL_arg2217z00_3283);
				}
			}
		}
	}



/* display-trace-stack */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t
		BgL_stackz00_105, obj_t BgL_portz00_106)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 729 */
			if (PAIRP(BgL_stackz00_105))
				{	/* Llib/error.scm 760 */
					obj_t BgL_g1834z00_1561;

					obj_t BgL_g1835z00_1562;

					BgL_g1834z00_1561 = CDR(BgL_stackz00_105);
					BgL_g1835z00_1562 = CAR(BgL_stackz00_105);
					{
						long BgL_iz00_1564;

						obj_t BgL_stackz00_1565;

						obj_t BgL_hdsz00_1566;

						long BgL_hdnz00_1567;

						BgL_iz00_1564 = ((long) 1);
						BgL_stackz00_1565 = BgL_g1834z00_1561;
						BgL_hdsz00_1566 = BgL_g1835z00_1562;
						BgL_hdnz00_1567 = ((long) 1);
					BgL_zc3anonymousza32229ze3z83_1568:
						if (NULLP(BgL_stackz00_1565))
							{	/* Llib/error.scm 765 */
								BGl_displayzd2tracezd2stackzd2framezd2zz__errorz00
									(BgL_portz00_106, BgL_iz00_1564, BgL_hdsz00_1566,
									BgL_hdnz00_1567);
								return FLUSH_OUTPUT_PORT(BgL_portz00_106);
							}
						else
							{	/* Llib/error.scm 765 */
								if ((CAR(BgL_stackz00_1565) == BgL_hdsz00_1566))
									{
										long BgL_hdnz00_5067;

										obj_t BgL_stackz00_5065;

										long BgL_iz00_5063;

										BgL_iz00_5063 = (BgL_iz00_1564 + ((long) 1));
										BgL_stackz00_5065 = CDR(BgL_stackz00_1565);
										BgL_hdnz00_5067 = (BgL_hdnz00_1567 + ((long) 1));
										BgL_hdnz00_1567 = BgL_hdnz00_5067;
										BgL_stackz00_1565 = BgL_stackz00_5065;
										BgL_iz00_1564 = BgL_iz00_5063;
										goto BgL_zc3anonymousza32229ze3z83_1568;
									}
								else
									{	/* Llib/error.scm 768 */
										BGl_displayzd2tracezd2stackzd2framezd2zz__errorz00
											(BgL_portz00_106, BgL_iz00_1564, BgL_hdsz00_1566,
											BgL_hdnz00_1567);
										{
											long BgL_hdnz00_5076;

											obj_t BgL_hdsz00_5074;

											obj_t BgL_stackz00_5072;

											long BgL_iz00_5070;

											BgL_iz00_5070 = (BgL_iz00_1564 + ((long) 1));
											BgL_stackz00_5072 = CDR(BgL_stackz00_1565);
											BgL_hdsz00_5074 = CAR(BgL_stackz00_1565);
											BgL_hdnz00_5076 = ((long) 1);
											BgL_hdnz00_1567 = BgL_hdnz00_5076;
											BgL_hdsz00_1566 = BgL_hdsz00_5074;
											BgL_stackz00_1565 = BgL_stackz00_5072;
											BgL_iz00_1564 = BgL_iz00_5070;
											goto BgL_zc3anonymousza32229ze3z83_1568;
										}
									}
							}
					}
				}
			else
				{	/* Llib/error.scm 759 */
					return BFALSE;
				}
		}
	}



/* display-trace-stack-frame */
	obj_t BGl_displayzd2tracezd2stackzd2framezd2zz__errorz00(obj_t
		BgL_portz00_3998, long BgL_levelz00_1580, obj_t BgL_framez00_1581,
		long BgL_numz00_1582)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 735 */
			if ((BgL_levelz00_1580 < ((long) 10)))
				{	/* Llib/error.scm 733 */
					obj_t BgL_list2243z00_1585;

					BgL_list2243z00_1585 = MAKE_PAIR(BgL_portz00_3998, BNIL);
					BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3181z00zz__errorz00,
						BgL_list2243z00_1585);
				}
			else
				{	/* Llib/error.scm 733 */
					if ((BgL_levelz00_1580 < ((long) 100)))
						{	/* Llib/error.scm 734 */
							obj_t BgL_list2245z00_1587;

							BgL_list2245z00_1587 = MAKE_PAIR(BgL_portz00_3998, BNIL);
							BGl_displayz00zz__r4_output_6_10_3z00
								(BGl_string3182z00zz__errorz00, BgL_list2245z00_1587);
						}
					else
						{	/* Llib/error.scm 734 */
							if ((BgL_levelz00_1580 < ((long) 1000)))
								{	/* Llib/error.scm 735 */
									obj_t BgL_list2247z00_1589;

									BgL_list2247z00_1589 = MAKE_PAIR(BgL_portz00_3998, BNIL);
									BGl_displayz00zz__r4_output_6_10_3z00
										(BGl_string3183z00zz__errorz00, BgL_list2247z00_1589);
								}
							else
								{	/* Llib/error.scm 735 */
									BFALSE;
								}
						}
				}
			{	/* Llib/error.scm 736 */
				obj_t BgL_list2248z00_1590;

				BgL_list2248z00_1590 = MAKE_PAIR(BgL_portz00_3998, BNIL);
				BGl_displayz00zz__r4_output_6_10_3z00(BINT(BgL_levelz00_1580),
					BgL_list2248z00_1590);
			}
			{	/* Llib/error.scm 737 */
				obj_t BgL_list2249z00_1591;

				BgL_list2249z00_1591 = MAKE_PAIR(BgL_portz00_3998, BNIL);
				BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3184z00zz__errorz00,
					BgL_list2249z00_1591);
			}
			{	/* Llib/error.scm 738 */
				obj_t BgL_arg2250z00_1592;

				BgL_arg2250z00_1592 = CAR(BgL_framez00_1581);
				{	/* Llib/error.scm 738 */
					obj_t BgL_list2251z00_1593;

					BgL_list2251z00_1593 = MAKE_PAIR(BgL_portz00_3998, BNIL);
					BGl_displayz00zz__r4_output_6_10_3z00(BgL_arg2250z00_1592,
						BgL_list2251z00_1593);
				}
			}
			if ((BgL_numz00_1582 > ((long) 1)))
				{	/* Llib/error.scm 740 */
					{	/* Llib/error.scm 741 */
						obj_t BgL_list2253z00_1595;

						BgL_list2253z00_1595 = MAKE_PAIR(BgL_portz00_3998, BNIL);
						BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3185z00zz__errorz00,
							BgL_list2253z00_1595);
					}
					{	/* Llib/error.scm 742 */
						obj_t BgL_list2254z00_1596;

						BgL_list2254z00_1596 = MAKE_PAIR(BgL_portz00_3998, BNIL);
						BGl_displayz00zz__r4_output_6_10_3z00(BINT(BgL_numz00_1582),
							BgL_list2254z00_1596);
					}
					{	/* Llib/error.scm 743 */
						obj_t BgL_list2255z00_1597;

						BgL_list2255z00_1597 = MAKE_PAIR(BgL_portz00_3998, BNIL);
						BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3186z00zz__errorz00,
							BgL_list2255z00_1597);
				}}
			else
				{	/* Llib/error.scm 744 */
					bool_t BgL_testz00_5106;

					{	/* Llib/error.scm 744 */
						obj_t BgL_auxz00_5107;

						BgL_auxz00_5107 = CDR(BgL_framez00_1581);
						BgL_testz00_5106 = PAIRP(BgL_auxz00_5107);
					}
					if (BgL_testz00_5106)
						{	/* Llib/error.scm 744 */
							{	/* Llib/error.scm 745 */
								obj_t BgL_list2257z00_1599;

								BgL_list2257z00_1599 = MAKE_PAIR(BgL_portz00_3998, BNIL);
								BGl_displayz00zz__r4_output_6_10_3z00
									(BGl_string3187z00zz__errorz00, BgL_list2257z00_1599);
							}
							{	/* Llib/error.scm 746 */
								obj_t BgL_lnumz00_1600;

								{	/* Llib/error.scm 747 */
									obj_t BgL_arg2274z00_1616;

									obj_t BgL_arg2275z00_1617;

									{	/* Llib/error.scm 747 */
										obj_t BgL_pairz00_3320;

										BgL_pairz00_3320 = CDR(BgL_framez00_1581);
										BgL_arg2274z00_1616 = CAR(CDR(BgL_pairz00_3320));
									}
									{	/* Llib/error.scm 747 */
										obj_t BgL_pairz00_3325;

										BgL_pairz00_3325 = CDR(BgL_framez00_1581);
										BgL_arg2275z00_1617 = CAR(CDR(CDR(BgL_pairz00_3325)));
									}
									BgL_lnumz00_1600 =
										BGl_locationzd2linezd2numz00zz__errorz00
										(BgL_arg2274z00_1616, BgL_arg2275z00_1617);
								}
								{	/* Llib/error.scm 748 */
									obj_t BgL_lpointz00_1601;

									obj_t BgL_lstringz00_1602;

									{	/* Llib/error.scm 748 */
										int BgL_auxz00_5120;

										BgL_auxz00_5120 = (int) (((long) 1));
										BgL_lpointz00_1601 = BGL_MVALUES_VAL(BgL_auxz00_5120);
									}
									{	/* Llib/error.scm 748 */
										int BgL_auxz00_5123;

										BgL_auxz00_5123 = (int) (((long) 2));
										BgL_lstringz00_1602 = BGL_MVALUES_VAL(BgL_auxz00_5123);
									}
									if (CBOOL(BgL_lnumz00_1600))
										{	/* Llib/error.scm 748 */
											{	/* Llib/error.scm 750 */
												obj_t BgL_arg2259z00_1603;

												{	/* Llib/error.scm 750 */
													obj_t BgL_arg2262z00_1605;

													{	/* Llib/error.scm 750 */
														obj_t BgL_pairz00_3334;

														BgL_pairz00_3334 = CDR(BgL_framez00_1581);
														BgL_arg2262z00_1605 = CAR(CDR(BgL_pairz00_3334));
													}
													BgL_arg2259z00_1603 =
														BGl_relativezd2filezd2namez00zz__errorz00
														(BgL_arg2262z00_1605);
												}
												{	/* Llib/error.scm 750 */
													obj_t BgL_list2260z00_1604;

													BgL_list2260z00_1604 =
														MAKE_PAIR(BgL_portz00_3998, BNIL);
													BGl_displayz00zz__r4_output_6_10_3z00
														(BgL_arg2259z00_1603, BgL_list2260z00_1604);
												}
											}
											{	/* Llib/error.scm 751 */
												obj_t BgL_list2264z00_1607;

												BgL_list2264z00_1607 =
													MAKE_PAIR(BgL_portz00_3998, BNIL);
												BGl_displayz00zz__r4_output_6_10_3z00
													(BGl_string3188z00zz__errorz00, BgL_list2264z00_1607);
											}
											{	/* Llib/error.scm 752 */
												obj_t BgL_list2265z00_1608;

												BgL_list2265z00_1608 =
													MAKE_PAIR(BgL_portz00_3998, BNIL);
												BGl_displayz00zz__r4_output_6_10_3z00(BgL_lnumz00_1600,
													BgL_list2265z00_1608);
											}
										}
									else
										{	/* Llib/error.scm 748 */
											{	/* Llib/error.scm 754 */
												obj_t BgL_arg2266z00_1609;

												{	/* Llib/error.scm 754 */
													obj_t BgL_pairz00_3339;

													BgL_pairz00_3339 = CDR(BgL_framez00_1581);
													BgL_arg2266z00_1609 = CAR(CDR(BgL_pairz00_3339));
												}
												{	/* Llib/error.scm 754 */
													obj_t BgL_list2267z00_1610;

													BgL_list2267z00_1610 =
														MAKE_PAIR(BgL_portz00_3998, BNIL);
													BGl_displayz00zz__r4_output_6_10_3z00
														(BgL_arg2266z00_1609, BgL_list2267z00_1610);
												}
											}
											{	/* Llib/error.scm 755 */
												obj_t BgL_list2269z00_1612;

												BgL_list2269z00_1612 =
													MAKE_PAIR(BgL_portz00_3998, BNIL);
												BGl_displayz00zz__r4_output_6_10_3z00
													(BGl_string3189z00zz__errorz00, BgL_list2269z00_1612);
											}
											{	/* Llib/error.scm 756 */
												obj_t BgL_arg2270z00_1613;

												{	/* Llib/error.scm 756 */
													obj_t BgL_pairz00_3344;

													BgL_pairz00_3344 = CDR(BgL_framez00_1581);
													BgL_arg2270z00_1613 = CAR(CDR(CDR(BgL_pairz00_3344)));
												}
												{	/* Llib/error.scm 756 */
													obj_t BgL_list2271z00_1614;

													BgL_list2271z00_1614 =
														MAKE_PAIR(BgL_portz00_3998, BNIL);
													BGl_displayz00zz__r4_output_6_10_3z00
														(BgL_arg2270z00_1613, BgL_list2271z00_1614);
												}
											}
										}
								}
							}
						}
					else
						{	/* Llib/error.scm 744 */
							BFALSE;
						}
				}
			{	/* Llib/error.scm 757 */
				obj_t BgL_list2280z00_1621;

				BgL_list2280z00_1621 = MAKE_PAIR(BgL_portz00_3998, BNIL);
				return BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2280z00_1621);
			}
		}
	}



/* _display-trace-stack */
	obj_t BGl__displayzd2tracezd2stackz00zz__errorz00(obj_t BgL_envz00_3967,
		obj_t BgL_stackz00_3968, obj_t BgL_portz00_3969)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 729 */
			{	/* Llib/error.scm 733 */
				obj_t BgL_auxz00_5153;

				if (OUTPUT_PORTP(BgL_portz00_3969))
					{	/* Llib/error.scm 733 */
						BgL_auxz00_5153 = BgL_portz00_3969;
					}
				else
					{
						obj_t BgL_auxz00_5156;

						BgL_auxz00_5156 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 30843)), BGl_string3190z00zz__errorz00,
							BGl_string3191z00zz__errorz00, BgL_portz00_3969);
						FAILURE(BgL_auxz00_5156, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_stackz00_3968,
					BgL_auxz00_5153);
			}
		}
	}



/* dump-trace-stack */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2tracezd2stackz00zz__errorz00(obj_t
		BgL_portz00_107, obj_t BgL_depthz00_108)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 777 */
			return
				BGl_displayzd2tracezd2stackz00zz__errorz00
				(BGl_getzd2tracezd2stackz00zz__errorz00(BgL_depthz00_108),
				BgL_portz00_107);
		}
	}



/* _dump-trace-stack */
	obj_t BGl__dumpzd2tracezd2stackz00zz__errorz00(obj_t BgL_envz00_3970,
		obj_t BgL_portz00_3971, obj_t BgL_depthz00_3972)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 777 */
			return
				BGl_dumpzd2tracezd2stackz00zz__errorz00(BgL_portz00_3971,
				BgL_depthz00_3972);
		}
	}



/* fix-tabulation! */
	obj_t BGl_fixzd2tabulationz12zc0zz__errorz00(obj_t BgL_markerz00_109,
		obj_t BgL_srcz00_110, obj_t BgL_dstz00_111)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 783 */
			{	/* Llib/error.scm 784 */
				long BgL_g1836z00_1624;

				BgL_g1836z00_1624 = ((long) CINT(BgL_markerz00_109) - ((long) 1));
				{
					long BgL_readz00_1626;

					BgL_readz00_1626 = BgL_g1836z00_1624;
				BgL_zc3anonymousza32282ze3z83_1627:
					if ((BgL_readz00_1626 == ((long) -1)))
						{	/* Llib/error.scm 786 */
							return BGl_symbol3192z00zz__errorz00;
						}
					else
						{	/* Llib/error.scm 786 */
							if (
								(STRING_REF(BgL_srcz00_110,
										BgL_readz00_1626) == ((unsigned char) '\t')))
								{	/* Llib/error.scm 788 */
									STRING_SET(BgL_dstz00_111, BgL_readz00_1626,
										((unsigned char) '\t'));
									{
										long BgL_readz00_5172;

										BgL_readz00_5172 = (BgL_readz00_1626 - ((long) 1));
										BgL_readz00_1626 = BgL_readz00_5172;
										goto BgL_zc3anonymousza32282ze3z83_1627;
									}
								}
							else
								{
									long BgL_readz00_5174;

									BgL_readz00_5174 = (BgL_readz00_1626 - ((long) 1));
									BgL_readz00_1626 = BgL_readz00_5174;
									goto BgL_zc3anonymousza32282ze3z83_1627;
								}
						}
				}
			}
		}
	}



/* print-cursor */
	obj_t BGl_printzd2cursorzd2zz__errorz00(obj_t BgL_fnamez00_112,
		obj_t BgL_linez00_113, obj_t BgL_charz00_114, obj_t BgL_stringz00_115,
		obj_t BgL_spacezd2stringzd2_116)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 797 */
			{	/* Llib/error.scm 798 */
				obj_t BgL_arg2290z00_1634;

				obj_t BgL_arg2292z00_1636;

				{	/* Llib/error.scm 798 */
					obj_t BgL_res3074z00_3367;

					{	/* Llib/error.scm 798 */
						obj_t BgL_auxz00_5176;

						BgL_auxz00_5176 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3074z00_3367 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5176);
					}
					BgL_arg2290z00_1634 = BgL_res3074z00_3367;
				}
				BgL_arg2292z00_1636 =
					BGl_relativezd2filezd2namez00zz__errorz00(BgL_fnamez00_112);
				{	/* Llib/error.scm 798 */
					obj_t BgL_list2301z00_1643;

					{	/* Llib/error.scm 798 */
						obj_t BgL_arg2302z00_1644;

						{	/* Llib/error.scm 798 */
							obj_t BgL_arg2303z00_1645;

							{	/* Llib/error.scm 798 */
								obj_t BgL_arg2304z00_1646;

								{	/* Llib/error.scm 798 */
									obj_t BgL_arg2305z00_1647;

									{	/* Llib/error.scm 798 */
										obj_t BgL_arg2306z00_1648;

										{	/* Llib/error.scm 798 */
											obj_t BgL_arg2307z00_1649;

											{	/* Llib/error.scm 798 */
												obj_t BgL_arg2308z00_1650;

												{	/* Llib/error.scm 798 */
													obj_t BgL_arg2309z00_1651;

													{	/* Llib/error.scm 798 */
														obj_t BgL_arg2310z00_1652;

														{	/* Llib/error.scm 798 */
															obj_t BgL_arg2311z00_1653;

															{	/* Llib/error.scm 798 */
																obj_t BgL_arg2312z00_1654;

																{	/* Llib/error.scm 798 */
																	obj_t BgL_arg2313z00_1655;

																	{	/* Llib/error.scm 798 */
																		obj_t BgL_arg2314z00_1656;

																		BgL_arg2314z00_1656 =
																			MAKE_PAIR(BGl_string3194z00zz__errorz00,
																			BNIL);
																		BgL_arg2313z00_1655 =
																			MAKE_PAIR(BgL_spacezd2stringzd2_116,
																			BgL_arg2314z00_1656);
																	}
																	BgL_arg2312z00_1654 =
																		MAKE_PAIR(BGl_string3195z00zz__errorz00,
																		BgL_arg2313z00_1655);
																}
																BgL_arg2311z00_1653 =
																	MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																	BgL_arg2312z00_1654);
															}
															BgL_arg2310z00_1652 =
																MAKE_PAIR(BgL_stringz00_115,
																BgL_arg2311z00_1653);
														}
														BgL_arg2309z00_1651 =
															MAKE_PAIR(BGl_string3195z00zz__errorz00,
															BgL_arg2310z00_1652);
													}
													BgL_arg2308z00_1650 =
														MAKE_PAIR(BCHAR(((unsigned char) '\n')),
														BgL_arg2309z00_1651);
												}
												BgL_arg2307z00_1649 =
													MAKE_PAIR(BGl_string3188z00zz__errorz00,
													BgL_arg2308z00_1650);
											}
											BgL_arg2306z00_1648 =
												MAKE_PAIR(BgL_charz00_114, BgL_arg2307z00_1649);
										}
										BgL_arg2305z00_1647 =
											MAKE_PAIR(BGl_string3196z00zz__errorz00,
											BgL_arg2306z00_1648);
									}
									BgL_arg2304z00_1646 =
										MAKE_PAIR(BgL_linez00_113, BgL_arg2305z00_1647);
								}
								BgL_arg2303z00_1645 =
									MAKE_PAIR(BGl_string3197z00zz__errorz00, BgL_arg2304z00_1646);
							}
							BgL_arg2302z00_1644 =
								MAKE_PAIR(BgL_arg2292z00_1636, BgL_arg2303z00_1645);
						}
						BgL_list2301z00_1643 =
							MAKE_PAIR(BGl_string3170z00zz__errorz00, BgL_arg2302z00_1644);
					}
					return
						BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg2290z00_1634,
						BgL_list2301z00_1643);
				}
			}
		}
	}



/* relative-file-name */
	obj_t BGl_relativezd2filezd2namez00zz__errorz00(obj_t BgL_fnamez00_117)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 812 */
			{	/* Llib/error.scm 813 */
				obj_t BgL_pwdz00_1657;

				obj_t BgL_dnamez00_1658;

				BgL_pwdz00_1657 = BGl_pwdz00zz__osz00();
				BgL_dnamez00_1658 = BGl_dirnamez00zz__osz00(BgL_fnamez00_117);
				{	/* Llib/error.scm 815 */
					bool_t BgL_testz00_5199;

					if (STRINGP(BgL_pwdz00_1657))
						{	/* Llib/error.scm 815 */
							if (bigloo_strcmp(BgL_dnamez00_1658,
									BGl_string3198z00zz__errorz00))
								{	/* Llib/error.scm 816 */
									BgL_testz00_5199 = ((bool_t) 1);
								}
							else
								{	/* Llib/error.scm 816 */
									if (
										(STRING_REF(BgL_fnamez00_117,
												((long) 0)) == ((unsigned char) '/')))
										{	/* Llib/error.scm 817 */
											BgL_testz00_5199 = ((bool_t) 0);
										}
									else
										{	/* Llib/error.scm 817 */
											BgL_testz00_5199 = ((bool_t) 1);
										}
								}
						}
					else
						{	/* Llib/error.scm 815 */
							BgL_testz00_5199 = ((bool_t) 1);
						}
					if (BgL_testz00_5199)
						{	/* Llib/error.scm 815 */
							return BgL_fnamez00_117;
						}
					else
						{	/* Llib/error.scm 820 */
							obj_t BgL_originalzd2cmpzd2pathz00_1660;

							BgL_originalzd2cmpzd2pathz00_1660 =
								BGl_dirnamezd2ze3listz31zz__errorz00(BgL_dnamez00_1658);
							{	/* Llib/error.scm 821 */
								obj_t BgL_g1837z00_1661;

								BgL_g1837z00_1661 =
									BGl_dirnamezd2ze3listz31zz__errorz00(BgL_pwdz00_1657);
								{
									obj_t BgL_cmpzd2pathzd2_1663;

									obj_t BgL_curzd2pathzd2_1664;

									BgL_cmpzd2pathzd2_1663 = BgL_originalzd2cmpzd2pathz00_1660;
									BgL_curzd2pathzd2_1664 = BgL_g1837z00_1661;
								BgL_zc3anonymousza32316ze3z83_1665:
									if (NULLP(BgL_cmpzd2pathzd2_1663))
										{	/* Llib/error.scm 824 */
											if (NULLP(BgL_curzd2pathzd2_1664))
												{	/* Llib/error.scm 825 */
													return BGl_basenamez00zz__osz00(BgL_fnamez00_117);
												}
											else
												{	/* Llib/error.scm 828 */
													long BgL_g1838z00_1668;

													obj_t BgL_g1839z00_1669;

													BgL_g1838z00_1668 =
														bgl_list_length(BgL_curzd2pathzd2_1664);
													BgL_g1839z00_1669 =
														BGl_basenamez00zz__osz00(BgL_fnamez00_117);
													{
														long BgL_lenz00_3378;

														obj_t BgL_resz00_3379;

														BgL_lenz00_3378 = BgL_g1838z00_1668;
														BgL_resz00_3379 = BgL_g1839z00_1669;
													BgL_loopz00_3377:
														if ((BgL_lenz00_3378 == ((long) 0)))
															{	/* Llib/error.scm 828 */
																return BgL_resz00_3379;
															}
														else
															{	/* Llib/error.scm 828 */
																long BgL_arg2321z00_3387;

																obj_t BgL_arg2322z00_3388;

																BgL_arg2321z00_3387 =
																	(BgL_lenz00_3378 - ((long) 1));
																{	/* Llib/error.scm 828 */
																	obj_t BgL_list2323z00_3389;

																	{	/* Llib/error.scm 828 */
																		obj_t BgL_arg2325z00_3391;

																		BgL_arg2325z00_3391 =
																			MAKE_PAIR(BgL_resz00_3379, BNIL);
																		BgL_list2323z00_3389 =
																			MAKE_PAIR(BGl_string3199z00zz__errorz00,
																			BgL_arg2325z00_3391);
																	}
																	BgL_arg2322z00_3388 =
																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																		(BgL_list2323z00_3389);
																}
																{
																	obj_t BgL_resz00_5223;

																	long BgL_lenz00_5222;

																	BgL_lenz00_5222 = BgL_arg2321z00_3387;
																	BgL_resz00_5223 = BgL_arg2322z00_3388;
																	BgL_resz00_3379 = BgL_resz00_5223;
																	BgL_lenz00_3378 = BgL_lenz00_5222;
																	goto BgL_loopz00_3377;
																}
															}
													}
												}
										}
									else
										{	/* Llib/error.scm 824 */
											if (NULLP(BgL_curzd2pathzd2_1664))
												{	/* Llib/error.scm 834 */
													obj_t BgL_g1840z00_1682;

													obj_t BgL_g1841z00_1683;

													BgL_g1840z00_1682 =
														bgl_reverse_bang(BgL_cmpzd2pathzd2_1663);
													BgL_g1841z00_1683 =
														BGl_basenamez00zz__osz00(BgL_fnamez00_117);
													{
														obj_t BgL_pathz00_1685;

														obj_t BgL_resz00_1686;

														BgL_pathz00_1685 = BgL_g1840z00_1682;
														BgL_resz00_1686 = BgL_g1841z00_1683;
													BgL_zc3anonymousza32327ze3z83_1687:
														if (NULLP(BgL_pathz00_1685))
															{	/* Llib/error.scm 836 */
																return BgL_resz00_1686;
															}
														else
															{	/* Llib/error.scm 838 */
																obj_t BgL_arg2329z00_1689;

																obj_t BgL_arg2330z00_1690;

																BgL_arg2329z00_1689 = CDR(BgL_pathz00_1685);
																{	/* Llib/error.scm 839 */
																	obj_t BgL_arg2331z00_1691;

																	BgL_arg2331z00_1691 = CAR(BgL_pathz00_1685);
																	{	/* Llib/error.scm 839 */
																		obj_t BgL_list2333z00_1693;

																		{	/* Llib/error.scm 839 */
																			obj_t BgL_arg2334z00_1694;

																			{	/* Llib/error.scm 839 */
																				obj_t BgL_arg2335z00_1695;

																				BgL_arg2335z00_1695 =
																					MAKE_PAIR(BgL_resz00_1686, BNIL);
																				BgL_arg2334z00_1694 =
																					MAKE_PAIR
																					(BGl_string3200z00zz__errorz00,
																					BgL_arg2335z00_1695);
																			}
																			BgL_list2333z00_1693 =
																				MAKE_PAIR(BgL_arg2331z00_1691,
																				BgL_arg2334z00_1694);
																		}
																		BgL_arg2330z00_1690 =
																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																			(BgL_list2333z00_1693);
																	}
																}
																{
																	obj_t BgL_resz00_5237;

																	obj_t BgL_pathz00_5236;

																	BgL_pathz00_5236 = BgL_arg2329z00_1689;
																	BgL_resz00_5237 = BgL_arg2330z00_1690;
																	BgL_resz00_1686 = BgL_resz00_5237;
																	BgL_pathz00_1685 = BgL_pathz00_5236;
																	goto BgL_zc3anonymousza32327ze3z83_1687;
																}
															}
													}
												}
											else
												{	/* Llib/error.scm 833 */
													if (bigloo_strcmp(CAR(BgL_curzd2pathzd2_1664),
															CAR(BgL_cmpzd2pathzd2_1663)))
														{
															obj_t BgL_curzd2pathzd2_5244;

															obj_t BgL_cmpzd2pathzd2_5242;

															BgL_cmpzd2pathzd2_5242 =
																CDR(BgL_cmpzd2pathzd2_1663);
															BgL_curzd2pathzd2_5244 =
																CDR(BgL_curzd2pathzd2_1664);
															BgL_curzd2pathzd2_1664 = BgL_curzd2pathzd2_5244;
															BgL_cmpzd2pathzd2_1663 = BgL_cmpzd2pathzd2_5242;
															goto BgL_zc3anonymousza32316ze3z83_1665;
														}
													else
														{	/* Llib/error.scm 843 */
															obj_t BgL_g1842z00_1700;

															obj_t BgL_g1843z00_1701;

															BgL_g1842z00_1700 =
																bgl_reverse(BgL_cmpzd2pathzd2_1663);
															BgL_g1843z00_1701 =
																BGl_basenamez00zz__osz00(BgL_fnamez00_117);
															{
																obj_t BgL_pathz00_1703;

																obj_t BgL_resz00_1704;

																BgL_pathz00_1703 = BgL_g1842z00_1700;
																BgL_resz00_1704 = BgL_g1843z00_1701;
															BgL_zc3anonymousza32339ze3z83_1705:
																if (NULLP(BgL_pathz00_1703))
																	{	/* Llib/error.scm 845 */
																		if (
																			(BgL_cmpzd2pathzd2_1663 ==
																				BgL_originalzd2cmpzd2pathz00_1660))
																			{	/* Llib/error.scm 847 */
																				obj_t BgL_list2342z00_1708;

																				{	/* Llib/error.scm 847 */
																					obj_t BgL_arg2344z00_1710;

																					BgL_arg2344z00_1710 =
																						MAKE_PAIR(BgL_resz00_1704, BNIL);
																					BgL_list2342z00_1708 =
																						MAKE_PAIR
																						(BGl_string3200z00zz__errorz00,
																						BgL_arg2344z00_1710);
																				}
																				return
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2342z00_1708);
																			}
																		else
																			{	/* Llib/error.scm 848 */
																				long BgL_g1844z00_1711;

																				BgL_g1844z00_1711 =
																					bgl_list_length
																					(BgL_curzd2pathzd2_1664);
																				{
																					long BgL_lenz00_3432;

																					obj_t BgL_resz00_3433;

																					BgL_lenz00_3432 = BgL_g1844z00_1711;
																					BgL_resz00_3433 = BgL_resz00_1704;
																				BgL_loopz00_3431:
																					if ((BgL_lenz00_3432 == ((long) 0)))
																						{	/* Llib/error.scm 848 */
																							return BgL_resz00_3433;
																						}
																					else
																						{	/* Llib/error.scm 848 */
																							long BgL_arg2347z00_3441;

																							obj_t BgL_arg2348z00_3442;

																							BgL_arg2347z00_3441 =
																								(BgL_lenz00_3432 - ((long) 1));
																							{	/* Llib/error.scm 848 */
																								obj_t BgL_list2349z00_3443;

																								{	/* Llib/error.scm 848 */
																									obj_t BgL_arg2351z00_3445;

																									BgL_arg2351z00_3445 =
																										MAKE_PAIR(BgL_resz00_3433,
																										BNIL);
																									BgL_list2349z00_3443 =
																										MAKE_PAIR
																										(BGl_string3199z00zz__errorz00,
																										BgL_arg2351z00_3445);
																								}
																								BgL_arg2348z00_3442 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2349z00_3443);
																							}
																							{
																								obj_t BgL_resz00_5263;

																								long BgL_lenz00_5262;

																								BgL_lenz00_5262 =
																									BgL_arg2347z00_3441;
																								BgL_resz00_5263 =
																									BgL_arg2348z00_3442;
																								BgL_resz00_3433 =
																									BgL_resz00_5263;
																								BgL_lenz00_3432 =
																									BgL_lenz00_5262;
																								goto BgL_loopz00_3431;
																							}
																						}
																				}
																			}
																	}
																else
																	{	/* Llib/error.scm 854 */
																		obj_t BgL_arg2352z00_1723;

																		obj_t BgL_arg2353z00_1724;

																		BgL_arg2352z00_1723 = CDR(BgL_pathz00_1703);
																		{	/* Llib/error.scm 855 */
																			obj_t BgL_arg2354z00_1725;

																			BgL_arg2354z00_1725 =
																				CAR(BgL_pathz00_1703);
																			{	/* Llib/error.scm 855 */
																				obj_t BgL_list2356z00_1727;

																				{	/* Llib/error.scm 855 */
																					obj_t BgL_arg2357z00_1728;

																					{	/* Llib/error.scm 855 */
																						obj_t BgL_arg2358z00_1729;

																						BgL_arg2358z00_1729 =
																							MAKE_PAIR(BgL_resz00_1704, BNIL);
																						BgL_arg2357z00_1728 =
																							MAKE_PAIR
																							(BGl_string3200z00zz__errorz00,
																							BgL_arg2358z00_1729);
																					}
																					BgL_list2356z00_1727 =
																						MAKE_PAIR(BgL_arg2354z00_1725,
																						BgL_arg2357z00_1728);
																				}
																				BgL_arg2353z00_1724 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2356z00_1727);
																			}
																		}
																		{
																			obj_t BgL_resz00_5271;

																			obj_t BgL_pathz00_5270;

																			BgL_pathz00_5270 = BgL_arg2352z00_1723;
																			BgL_resz00_5271 = BgL_arg2353z00_1724;
																			BgL_resz00_1704 = BgL_resz00_5271;
																			BgL_pathz00_1703 = BgL_pathz00_5270;
																			goto BgL_zc3anonymousza32339ze3z83_1705;
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



/* uncygdrive */
	obj_t BGl_uncygdrivez00zz__errorz00(obj_t BgL_strz00_118)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 863 */
			if (bigloo_strncmp(BGl_string3201z00zz__errorz00, BgL_strz00_118,
					((long) 10)))
				{	/* Llib/error.scm 865 */
					bool_t BgL_testz00_5274;

					if ((STRING_LENGTH(BgL_strz00_118) > ((long) 12)))
						{	/* Llib/error.scm 866 */
							bool_t BgL_testz00_5278;

							{	/* Llib/error.scm 866 */
								unsigned char BgL_auxz00_5279;

								BgL_auxz00_5279 = STRING_REF(BgL_strz00_118, ((long) 10));
								BgL_testz00_5278 = isalpha(BgL_auxz00_5279);
							}
							if (BgL_testz00_5278)
								{	/* Llib/error.scm 866 */
									BgL_testz00_5274 =
										(STRING_REF(BgL_strz00_118,
											((long) 11)) == ((unsigned char) '/'));
								}
							else
								{	/* Llib/error.scm 866 */
									BgL_testz00_5274 = ((bool_t) 0);
								}
						}
					else
						{	/* Llib/error.scm 865 */
							BgL_testz00_5274 = ((bool_t) 0);
						}
					if (BgL_testz00_5274)
						{	/* Llib/error.scm 868 */
							obj_t BgL_arg2367z00_1740;

							obj_t BgL_arg2368z00_1741;

							{	/* Llib/error.scm 868 */
								unsigned char BgL_arg2371z00_1744;

								BgL_arg2371z00_1744 = STRING_REF(BgL_strz00_118, ((long) 10));
								{	/* Llib/error.scm 868 */
									obj_t BgL_list2372z00_1745;

									{	/* Llib/error.scm 868 */
										obj_t BgL_arg2373z00_1746;

										{	/* Llib/error.scm 868 */
											obj_t BgL_arg2374z00_1747;

											BgL_arg2374z00_1747 =
												MAKE_PAIR(BCHAR(((unsigned char) '/')), BNIL);
											BgL_arg2373z00_1746 =
												MAKE_PAIR(BCHAR(((unsigned char) ':')),
												BgL_arg2374z00_1747);
										}
										BgL_list2372z00_1745 =
											MAKE_PAIR(BCHAR(BgL_arg2371z00_1744),
											BgL_arg2373z00_1746);
									}
									BgL_arg2367z00_1740 =
										BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
										(BgL_list2372z00_1745);
							}}
							BgL_arg2368z00_1741 =
								BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_118,
								((long) 12), STRING_LENGTH(BgL_strz00_118));
							{	/* Llib/error.scm 868 */
								obj_t BgL_list2369z00_1742;

								{	/* Llib/error.scm 868 */
									obj_t BgL_arg2370z00_1743;

									BgL_arg2370z00_1743 = MAKE_PAIR(BgL_arg2368z00_1741, BNIL);
									BgL_list2369z00_1742 =
										MAKE_PAIR(BgL_arg2367z00_1740, BgL_arg2370z00_1743);
								}
								return
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2369z00_1742);
							}
						}
					else
						{	/* Llib/error.scm 865 */
							return BgL_strz00_118;
						}
				}
			else
				{	/* Llib/error.scm 864 */
					return BgL_strz00_118;
				}
		}
	}



/* dirname->list */
	obj_t BGl_dirnamezd2ze3listz31zz__errorz00(obj_t BgL_pathz00_119)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 876 */
			{	/* Llib/error.scm 877 */
				long BgL_lenz00_1756;

				long BgL_initz00_1757;

				{	/* Llib/error.scm 877 */
					long BgL_lenz00_1777;

					BgL_lenz00_1777 = STRING_LENGTH(BgL_pathz00_119);
					{	/* Llib/error.scm 878 */
						bool_t BgL_testz00_5298;

						{	/* Llib/error.scm 878 */
							unsigned char BgL_arg2397z00_1779;

							obj_t BgL_arg2398z00_1780;

							BgL_arg2397z00_1779 =
								STRING_REF(BgL_pathz00_119, (BgL_lenz00_1777 - ((long) 1)));
							BgL_arg2398z00_1780 = BGl_filezd2separatorzd2zz__osz00();
							BgL_testz00_5298 =
								(BgL_arg2397z00_1779 == CCHAR(BgL_arg2398z00_1780));
						}
						if (BgL_testz00_5298)
							{	/* Llib/error.scm 878 */
								BgL_lenz00_1756 = (BgL_lenz00_1777 - ((long) 1));
							}
						else
							{	/* Llib/error.scm 878 */
								BgL_lenz00_1756 = BgL_lenz00_1777;
							}
					}
				}
				{	/* Llib/error.scm 881 */
					bool_t BgL_testz00_5305;

					{	/* Llib/error.scm 881 */
						unsigned char BgL_arg2401z00_1783;

						obj_t BgL_arg2402z00_1784;

						BgL_arg2401z00_1783 = STRING_REF(BgL_pathz00_119, ((long) 0));
						BgL_arg2402z00_1784 = BGl_filezd2separatorzd2zz__osz00();
						BgL_testz00_5305 =
							(BgL_arg2401z00_1783 == CCHAR(BgL_arg2402z00_1784));
					}
					if (BgL_testz00_5305)
						{	/* Llib/error.scm 881 */
							BgL_initz00_1757 = ((long) 1);
						}
					else
						{	/* Llib/error.scm 881 */
							BgL_initz00_1757 = ((long) 0);
				}}
				if (bigloo_strcmp(BgL_pathz00_119, BGl_string3200z00zz__errorz00))
					{	/* Llib/error.scm 882 */
						return BNIL;
					}
				else
					{
						long BgL_readz00_1761;

						long BgL_prevz00_1762;

						obj_t BgL_listz00_1763;

						BgL_readz00_1761 = BgL_initz00_1757;
						BgL_prevz00_1762 = BgL_initz00_1757;
						BgL_listz00_1763 = BNIL;
					BgL_zc3anonymousza32384ze3z83_1764:
						if ((BgL_readz00_1761 == BgL_lenz00_1756))
							{	/* Llib/error.scm 889 */
								obj_t BgL_arg2386z00_1766;

								BgL_arg2386z00_1766 =
									MAKE_PAIR(BGl_substringz00zz__r4_strings_6_7z00
									(BgL_pathz00_119, BgL_prevz00_1762, BgL_readz00_1761),
									BgL_listz00_1763);
								return bgl_reverse_bang(BgL_arg2386z00_1766);
							}
						else
							{	/* Llib/error.scm 890 */
								bool_t BgL_testz00_5317;

								{	/* Llib/error.scm 890 */
									unsigned char BgL_arg2394z00_1774;

									obj_t BgL_arg2395z00_1775;

									BgL_arg2394z00_1774 =
										STRING_REF(BgL_pathz00_119, BgL_readz00_1761);
									BgL_arg2395z00_1775 = BGl_filezd2separatorzd2zz__osz00();
									BgL_testz00_5317 =
										(BgL_arg2394z00_1774 == CCHAR(BgL_arg2395z00_1775));
								}
								if (BgL_testz00_5317)
									{	/* Llib/error.scm 891 */
										long BgL_arg2389z00_1769;

										long BgL_arg2390z00_1770;

										obj_t BgL_arg2391z00_1771;

										BgL_arg2389z00_1769 = (BgL_readz00_1761 + ((long) 1));
										BgL_arg2390z00_1770 = (BgL_readz00_1761 + ((long) 1));
										BgL_arg2391z00_1771 =
											MAKE_PAIR(BGl_substringz00zz__r4_strings_6_7z00
											(BgL_pathz00_119, BgL_prevz00_1762, BgL_readz00_1761),
											BgL_listz00_1763);
										{
											obj_t BgL_listz00_5328;

											long BgL_prevz00_5327;

											long BgL_readz00_5326;

											BgL_readz00_5326 = BgL_arg2389z00_1769;
											BgL_prevz00_5327 = BgL_arg2390z00_1770;
											BgL_listz00_5328 = BgL_arg2391z00_1771;
											BgL_listz00_1763 = BgL_listz00_5328;
											BgL_prevz00_1762 = BgL_prevz00_5327;
											BgL_readz00_1761 = BgL_readz00_5326;
											goto BgL_zc3anonymousza32384ze3z83_1764;
										}
									}
								else
									{
										long BgL_readz00_5329;

										BgL_readz00_5329 = (BgL_readz00_1761 + ((long) 1));
										BgL_readz00_1761 = BgL_readz00_5329;
										goto BgL_zc3anonymousza32384ze3z83_1764;
									}
							}
					}
			}
		}
	}



/* typeof */
	BGL_EXPORTED_DEF obj_t bgl_typeof(obj_t BgL_objz00_120)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 903 */
			if (INTEGERP(BgL_objz00_120))
				{	/* Llib/error.scm 905 */
					return BGl_string3202z00zz__errorz00;
				}
			else
				{	/* Llib/error.scm 905 */
					if (REALP(BgL_objz00_120))
						{	/* Llib/error.scm 907 */
							return BGl_string3203z00zz__errorz00;
						}
					else
						{	/* Llib/error.scm 907 */
							if (STRINGP(BgL_objz00_120))
								{	/* Llib/error.scm 909 */
									return BGl_string3165z00zz__errorz00;
								}
							else
								{	/* Llib/error.scm 909 */
									if (SYMBOLP(BgL_objz00_120))
										{	/* Llib/error.scm 911 */
											return BGl_string3204z00zz__errorz00;
										}
									else
										{	/* Llib/error.scm 911 */
											if (KEYWORDP(BgL_objz00_120))
												{	/* Llib/error.scm 913 */
													return BGl_string3205z00zz__errorz00;
												}
											else
												{	/* Llib/error.scm 913 */
													if (CHARP(BgL_objz00_120))
														{	/* Llib/error.scm 915 */
															return BGl_string3206z00zz__errorz00;
														}
													else
														{	/* Llib/error.scm 915 */
															if (BOOLEANP(BgL_objz00_120))
																{	/* Llib/error.scm 917 */
																	return BGl_string3207z00zz__errorz00;
																}
															else
																{	/* Llib/error.scm 917 */
																	if (NULLP(BgL_objz00_120))
																		{	/* Llib/error.scm 919 */
																			return BGl_string3208z00zz__errorz00;
																		}
																	else
																		{	/* Llib/error.scm 919 */
																			if (EXTENDED_PAIRP(BgL_objz00_120))
																				{	/* Llib/error.scm 921 */
																					return BGl_string3209z00zz__errorz00;
																				}
																			else
																				{	/* Llib/error.scm 921 */
																					if (PAIRP(BgL_objz00_120))
																						{	/* Llib/error.scm 923 */
																							return
																								BGl_string3210z00zz__errorz00;
																						}
																					else
																						{	/* Llib/error.scm 923 */
																							if (BGl_classzf3zf3zz__objectz00
																								(BgL_objz00_120))
																								{	/* Llib/error.scm 925 */
																									return
																										BGl_string3211z00zz__errorz00;
																								}
																							else
																								{	/* Llib/error.scm 925 */
																									if (VECTORP(BgL_objz00_120))
																										{	/* Llib/error.scm 927 */
																											return
																												BGl_string3212z00zz__errorz00;
																										}
																									else
																										{	/* Llib/error.scm 927 */
																											if (TVECTORP
																												(BgL_objz00_120))
																												{	/* Llib/error.scm 929 */
																													return
																														BGl_string3213z00zz__errorz00;
																												}
																											else
																												{	/* Llib/error.scm 929 */
																													if (STRUCTP
																														(BgL_objz00_120))
																														{	/* Llib/error.scm 931 */
																															return
																																BGl_string3214z00zz__errorz00;
																														}
																													else
																														{	/* Llib/error.scm 931 */
																															if (PROCEDUREP
																																(BgL_objz00_120))
																																{	/* Llib/error.scm 933 */
																																	return
																																		BGl_string3143z00zz__errorz00;
																																}
																															else
																																{	/* Llib/error.scm 933 */
																																	if (INPUT_PORTP(BgL_objz00_120))
																																		{	/* Llib/error.scm 935 */
																																			return
																																				BGl_string3215z00zz__errorz00;
																																		}
																																	else
																																		{	/* Llib/error.scm 935 */
																																			if (OUTPUT_PORTP(BgL_objz00_120))
																																				{	/* Llib/error.scm 937 */
																																					return
																																						BGl_string3191z00zz__errorz00;
																																				}
																																			else
																																				{	/* Llib/error.scm 937 */
																																					if (BINARY_PORTP(BgL_objz00_120))
																																						{	/* Llib/error.scm 939 */
																																							return
																																								BGl_string3216z00zz__errorz00;
																																						}
																																					else
																																						{	/* Llib/error.scm 939 */
																																							if (CELLP(BgL_objz00_120))
																																								{	/* Llib/error.scm 941 */
																																									return
																																										BGl_string3217z00zz__errorz00;
																																								}
																																							else
																																								{	/* Llib/error.scm 941 */
																																									if (FOREIGNP(BgL_objz00_120))
																																										{	/* Llib/error.scm 944 */
																																											obj_t
																																												BgL_arg2424z00_1806;
																																											{	/* Llib/error.scm 944 */
																																												obj_t
																																													BgL_arg2427z00_1809;
																																												BgL_arg2427z00_1809
																																													=
																																													FOREIGN_ID
																																													(BgL_objz00_120);
																																												{	/* Llib/error.scm 944 */
																																													obj_t
																																														BgL_res3075z00_3542;
																																													{	/* Llib/error.scm 944 */
																																														obj_t
																																															BgL_arg2553z00_3541;
																																														BgL_arg2553z00_3541
																																															=
																																															SYMBOL_TO_STRING
																																															(BgL_arg2427z00_1809);
																																														BgL_res3075z00_3542
																																															=
																																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																															(BgL_arg2553z00_3541);
																																													}
																																													BgL_arg2424z00_1806
																																														=
																																														BgL_res3075z00_3542;
																																												}
																																											}
																																											{	/* Llib/error.scm 944 */
																																												obj_t
																																													BgL_list2425z00_1807;
																																												{	/* Llib/error.scm 944 */
																																													obj_t
																																														BgL_arg2426z00_1808;
																																													BgL_arg2426z00_1808
																																														=
																																														MAKE_PAIR
																																														(BgL_arg2424z00_1806,
																																														BNIL);
																																													BgL_list2425z00_1807
																																														=
																																														MAKE_PAIR
																																														(BGl_string3218z00zz__errorz00,
																																														BgL_arg2426z00_1808);
																																												}
																																												return
																																													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																													(BgL_list2425z00_1807);
																																											}
																																										}
																																									else
																																										{	/* Llib/error.scm 943 */
																																											if (CNSTP(BgL_objz00_120))
																																												{	/* Llib/error.scm 945 */
																																													return
																																														BGl_string3219z00zz__errorz00;
																																												}
																																											else
																																												{	/* Llib/error.scm 945 */
																																													if (SOCKETP(BgL_objz00_120))
																																														{	/* Llib/error.scm 947 */
																																															return
																																																BGl_string3220z00zz__errorz00;
																																														}
																																													else
																																														{	/* Llib/error.scm 947 */
																																															if (PROCESSP(BgL_objz00_120))
																																																{	/* Llib/error.scm 949 */
																																																	return
																																																		BGl_string3221z00zz__errorz00;
																																																}
																																															else
																																																{	/* Llib/error.scm 949 */
																																																	if (CUSTOMP(BgL_objz00_120))
																																																		{	/* Llib/error.scm 951 */
																																																			return
																																																				BGl_string3222z00zz__errorz00;
																																																		}
																																																	else
																																																		{	/* Llib/error.scm 951 */
																																																			if (OPAQUEP(BgL_objz00_120))
																																																				{	/* Llib/error.scm 953 */
																																																					return
																																																						BGl_string3223z00zz__errorz00;
																																																				}
																																																			else
																																																				{	/* Llib/error.scm 953 */
																																																					if (BGL_OBJECTP(BgL_objz00_120))
																																																						{	/* Llib/error.scm 956 */
																																																							obj_t
																																																								BgL_classz00_1816;
																																																							{	/* Llib/error.scm 956 */
																																																								BgL_objectz00_bglt
																																																									BgL_objectz00_3549;
																																																								BgL_objectz00_3549
																																																									=
																																																									(BgL_objectz00_bglt)
																																																									(BgL_objz00_120);
																																																								{	/* Llib/error.scm 956 */
																																																									long
																																																										BgL_arg3037z00_3550;
																																																									{	/* Llib/error.scm 956 */
																																																										long
																																																											BgL_arg3038z00_3551;
																																																										BgL_arg3038z00_3551
																																																											=
																																																											BGL_OBJECT_CLASS_NUM
																																																											(BgL_objectz00_3549);
																																																										BgL_arg3037z00_3550
																																																											=
																																																											(BgL_arg3038z00_3551
																																																											-
																																																											OBJECT_TYPE);
																																																									}
																																																									BgL_classz00_1816
																																																										=
																																																										VECTOR_REF
																																																										(BGl_za2classesza2z00zz__objectz00,
																																																										(int)
																																																										(BgL_arg3037z00_3550));
																																																							}}
																																																							if (BGl_classzf3zf3zz__objectz00(BgL_classz00_1816))
																																																								{	/* Llib/error.scm 961 */
																																																									obj_t
																																																										BgL_symz00_1818;
																																																									BgL_symz00_1818
																																																										=
																																																										BGl_classzd2namezd2zz__objectz00
																																																										(BgL_classz00_1816);
																																																									{	/* Llib/error.scm 963 */
																																																										obj_t
																																																											BgL_res3076z00_3560;
																																																										{	/* Llib/error.scm 963 */
																																																											obj_t
																																																												BgL_arg2553z00_3559;
																																																											BgL_arg2553z00_3559
																																																												=
																																																												SYMBOL_TO_STRING
																																																												(BgL_symz00_1818);
																																																											BgL_res3076z00_3560
																																																												=
																																																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																												(BgL_arg2553z00_3559);
																																																										}
																																																										return
																																																											BgL_res3076z00_3560;
																																																									}
																																																								}
																																																							else
																																																								{	/* Llib/error.scm 960 */
																																																									return
																																																										BGl_string3224z00zz__errorz00;
																																																								}
																																																						}
																																																					else
																																																						{	/* Llib/error.scm 955 */
																																																							if (UCS2_STRINGP(BgL_objz00_120))
																																																								{	/* Llib/error.scm 966 */
																																																									return
																																																										BGl_string3225z00zz__errorz00;
																																																								}
																																																							else
																																																								{	/* Llib/error.scm 966 */
																																																									if (UCS2P(BgL_objz00_120))
																																																										{	/* Llib/error.scm 968 */
																																																											return
																																																												BGl_string3226z00zz__errorz00;
																																																										}
																																																									else
																																																										{	/* Llib/error.scm 968 */
																																																											if (ELONGP(BgL_objz00_120))
																																																												{	/* Llib/error.scm 970 */
																																																													return
																																																														BGl_string3227z00zz__errorz00;
																																																												}
																																																											else
																																																												{	/* Llib/error.scm 970 */
																																																													if (LLONGP(BgL_objz00_120))
																																																														{	/* Llib/error.scm 972 */
																																																															return
																																																																BGl_string3228z00zz__errorz00;
																																																														}
																																																													else
																																																														{	/* Llib/error.scm 972 */
																																																															if (BGL_MUTEXP(BgL_objz00_120))
																																																																{	/* Llib/error.scm 974 */
																																																																	return
																																																																		BGl_string3229z00zz__errorz00;
																																																																}
																																																															else
																																																																{	/* Llib/error.scm 974 */
																																																																	if (BGL_CONDVARP(BgL_objz00_120))
																																																																		{	/* Llib/error.scm 976 */
																																																																			return
																																																																				BGl_string3230z00zz__errorz00;
																																																																		}
																																																																	else
																																																																		{	/* Llib/error.scm 976 */
																																																																			if (BGL_DATEP(BgL_objz00_120))
																																																																				{	/* Llib/error.scm 978 */
																																																																					return
																																																																						BGl_string3231z00zz__errorz00;
																																																																				}
																																																																			else
																																																																				{	/* Llib/error.scm 978 */
																																																																					if (BGL_HVECTORP(BgL_objz00_120))
																																																																						{	/* Llib/error.scm 981 */
																																																																							obj_t
																																																																								BgL_tagz00_1828;
																																																																							BgL_tagz00_1828
																																																																								=
																																																																								BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00
																																																																								(BgL_objz00_120);
																																																																							{	/* Llib/error.scm 983 */
																																																																								obj_t
																																																																									BgL__z00_1829;
																																																																								obj_t
																																																																									BgL__z00_1830;
																																																																								obj_t
																																																																									BgL__z00_1831;
																																																																								{	/* Llib/error.scm 983 */
																																																																									int
																																																																										BgL_auxz00_5416;
																																																																									BgL_auxz00_5416
																																																																										=
																																																																										(int)
																																																																										(
																																																																										((long) 1));
																																																																									BgL__z00_1829
																																																																										=
																																																																										BGL_MVALUES_VAL
																																																																										(BgL_auxz00_5416);
																																																																								}
																																																																								{	/* Llib/error.scm 983 */
																																																																									int
																																																																										BgL_auxz00_5419;
																																																																									BgL_auxz00_5419
																																																																										=
																																																																										(int)
																																																																										(
																																																																										((long) 2));
																																																																									BgL__z00_1830
																																																																										=
																																																																										BGL_MVALUES_VAL
																																																																										(BgL_auxz00_5419);
																																																																								}
																																																																								{	/* Llib/error.scm 983 */
																																																																									int
																																																																										BgL_auxz00_5422;
																																																																									BgL_auxz00_5422
																																																																										=
																																																																										(int)
																																																																										(
																																																																										((long) 3));
																																																																									BgL__z00_1831
																																																																										=
																																																																										BGL_MVALUES_VAL
																																																																										(BgL_auxz00_5422);
																																																																								}
																																																																								{	/* Llib/error.scm 983 */
																																																																									obj_t
																																																																										BgL_arg2444z00_1832;
																																																																									{	/* Llib/error.scm 983 */
																																																																										obj_t
																																																																											BgL_res3077z00_3573;
																																																																										{	/* Llib/error.scm 983 */
																																																																											obj_t
																																																																												BgL_symbolz00_3571;
																																																																											BgL_symbolz00_3571
																																																																												=
																																																																												BgL_tagz00_1828;
																																																																											{	/* Llib/error.scm 983 */
																																																																												obj_t
																																																																													BgL_arg2553z00_3572;
																																																																												BgL_arg2553z00_3572
																																																																													=
																																																																													SYMBOL_TO_STRING
																																																																													(BgL_symbolz00_3571);
																																																																												BgL_res3077z00_3573
																																																																													=
																																																																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																																													(BgL_arg2553z00_3572);
																																																																										}}
																																																																										BgL_arg2444z00_1832
																																																																											=
																																																																											BgL_res3077z00_3573;
																																																																									}
																																																																									{	/* Llib/error.scm 983 */
																																																																										obj_t
																																																																											BgL_list2446z00_1834;
																																																																										{	/* Llib/error.scm 983 */
																																																																											obj_t
																																																																												BgL_arg2447z00_1835;
																																																																											BgL_arg2447z00_1835
																																																																												=
																																																																												MAKE_PAIR
																																																																												(BGl_string3212z00zz__errorz00,
																																																																												BNIL);
																																																																											BgL_list2446z00_1834
																																																																												=
																																																																												MAKE_PAIR
																																																																												(BgL_arg2444z00_1832,
																																																																												BgL_arg2447z00_1835);
																																																																										}
																																																																										return
																																																																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																																																											(BgL_list2446z00_1834);
																																																																									}
																																																																								}
																																																																							}
																																																																						}
																																																																					else
																																																																						{	/* Llib/error.scm 980 */
																																																																							if (BIGNUMP(BgL_objz00_120))
																																																																								{	/* Llib/error.scm 984 */
																																																																									return
																																																																										BGl_string3232z00zz__errorz00;
																																																																								}
																																																																							else
																																																																								{	/* Llib/error.scm 984 */
																																																																									return
																																																																										string_to_bstring
																																																																										(FOREIGN_TYPE_NAME
																																																																										(BgL_objz00_120));
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
												}
										}
								}
						}
				}
		}
	}



/* _typeof */
	obj_t BGl__typeofz00zz__errorz00(obj_t BgL_envz00_3973, obj_t BgL_objz00_3974)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 903 */
			return bgl_typeof(BgL_objz00_3974);
		}
	}



/* find-runtime-type */
	BGL_EXPORTED_DEF obj_t bgl_find_runtime_type(obj_t BgL_oz00_121)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 992 */
			return bgl_typeof(BgL_oz00_121);
		}
	}



/* _find-runtime-type */
	obj_t BGl__findzd2runtimezd2typez00zz__errorz00(obj_t BgL_envz00_3975,
		obj_t BgL_oz00_3976)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 992 */
			return bgl_typeof(BgL_oz00_3976);
		}
	}



/* c-debugging-show-type */
	BGL_EXPORTED_DEF char *bgl_show_type(obj_t BgL_objz00_122)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1000 */
			{	/* Llib/error.scm 1001 */
				obj_t BgL_tz00_3575;

				BgL_tz00_3575 = bgl_typeof(BgL_objz00_122);
				{	/* Llib/error.scm 1001 */
					obj_t BgL_arg2449z00_3576;

					{	/* Llib/error.scm 1001 */
						obj_t BgL_res3078z00_3579;

						{	/* Llib/error.scm 1001 */
							obj_t BgL_auxz00_5438;

							BgL_auxz00_5438 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3078z00_3579 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5438);
						}
						BgL_arg2449z00_3576 = BgL_res3078z00_3579;
					}
					{	/* Llib/error.scm 1001 */
						obj_t BgL_list2450z00_3577;

						BgL_list2450z00_3577 = MAKE_PAIR(BgL_tz00_3575, BNIL);
						BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg2449z00_3576,
							BgL_list2450z00_3577);
				}}
				return BSTRING_TO_STRING(BgL_tz00_3575);
			}
		}
	}



/* _c-debugging-show-type */
	obj_t BGl__czd2debuggingzd2showzd2typezd2zz__errorz00(obj_t BgL_envz00_3977,
		obj_t BgL_objz00_3978)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1000 */
			return string_to_bstring(bgl_show_type(BgL_objz00_3978));
		}
	}



/* &try */
	BGL_EXPORTED_DEF obj_t BGl_z62tryz62zz__errorz00(obj_t BgL_thunkz00_123,
		obj_t BgL_handlerz00_124)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1008 */
			return
				BGl_zc3exitza32451ze3z83zz__errorz00(BgL_thunkz00_123,
				BgL_handlerz00_124);
		}
	}



/* <exit:2451> */
	obj_t BGl_zc3exitza32451ze3z83zz__errorz00(obj_t BgL_thunkz00_3997,
		obj_t BgL_handlerz00_3996)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1009 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1846z00_1841;

			if (SET_EXIT(BgL_an_exit1846z00_1841))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1846z00_1841 = (void *) jmpbuf;
					{	/* Llib/error.scm 1009 */

						PUSH_EXIT(BgL_an_exit1846z00_1841, ((long) 1));
						{	/* Llib/error.scm 1009 */
							obj_t BgL_an_exitd1847z00_1842;

							BgL_an_exitd1847z00_1842 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Llib/error.scm 1009 */
								obj_t BgL_escz00_3979;

								BgL_escz00_3979 =
									make_fx_procedure(BGl_escz00zz__errorz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_escz00_3979,
									(int) (((long) 0)), BgL_an_exitd1847z00_1842);
								{	/* Llib/error.scm 1012 */
									obj_t BgL_res1849z00_1845;

									{	/* Llib/error.scm 1012 */
										obj_t BgL_zc3anonymousza32453ze3z83_3980;

										BgL_zc3anonymousza32453ze3z83_3980 =
											make_fx_procedure
											(BGl_zc3anonymousza32453ze3z83zz__errorz00,
											(int) (((long) 1)), (int) (((long) 3)));
										PROCEDURE_SET(BgL_zc3anonymousza32453ze3z83_3980,
											(int) (((long) 0)), BgL_an_exitd1847z00_1842);
										PROCEDURE_SET(BgL_zc3anonymousza32453ze3z83_3980,
											(int) (((long) 1)), BgL_handlerz00_3996);
										PROCEDURE_SET(BgL_zc3anonymousza32453ze3z83_3980,
											(int) (((long) 2)), BgL_escz00_3979);
										BgL_res1849z00_1845 =
											BGl_withzd2exceptionzd2handlerz00zz__errorz00
											(BgL_zc3anonymousza32453ze3z83_3980, BgL_thunkz00_3997);
									}
									POP_EXIT();
									return BgL_res1849z00_1845;
								}
							}
						}
					}
				}
		}
	}



/* _&try */
	obj_t BGl__z62tryz62zz__errorz00(obj_t BgL_envz00_3981,
		obj_t BgL_thunkz00_3982, obj_t BgL_handlerz00_3983)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1008 */
			{	/* Llib/error.scm 1009 */
				obj_t BgL_thunkz00_4042;

				obj_t BgL_handlerz00_4043;

				if (PROCEDUREP(BgL_thunkz00_3982))
					{	/* Llib/error.scm 1009 */
						BgL_thunkz00_4042 = BgL_thunkz00_3982;
					}
				else
					{
						obj_t BgL_auxz00_5469;

						BgL_auxz00_5469 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 40051)), BGl_string3233z00zz__errorz00,
							BGl_string3143z00zz__errorz00, BgL_thunkz00_3982);
						FAILURE(BgL_auxz00_5469, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_handlerz00_3983))
					{	/* Llib/error.scm 1009 */
						BgL_handlerz00_4043 = BgL_handlerz00_3983;
					}
				else
					{
						obj_t BgL_auxz00_5475;

						BgL_auxz00_5475 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
							BINT(((long) 40051)), BGl_string3233z00zz__errorz00,
							BGl_string3143z00zz__errorz00, BgL_handlerz00_3983);
						FAILURE(BgL_auxz00_5475, BFALSE, BFALSE);
					}
				return
					BGl_zc3exitza32451ze3z83zz__errorz00(BgL_thunkz00_4042,
					BgL_handlerz00_4043);
			}
		}
	}



/* <anonymous:2453> */
	obj_t BGl_zc3anonymousza32453ze3z83zz__errorz00(obj_t BgL_envz00_3984,
		obj_t BgL_ez00_3988)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1011 */
			{	/* Llib/error.scm 1012 */
				obj_t BgL_handlerz00_3986;

				obj_t BgL_escz00_3987;

				BgL_handlerz00_3986 =
					PROCEDURE_REF(BgL_envz00_3984, (int) (((long) 1)));
				BgL_escz00_3987 = PROCEDURE_REF(BgL_envz00_3984, (int) (((long) 2)));
				{
					obj_t BgL_ez00_1847;

					BgL_ez00_1847 = BgL_ez00_3988;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1847,
							BGl_z62errorz62zz__objectz00))
						{	/* Llib/error.scm 1012 */
							{	/* Llib/error.scm 1014 */
								obj_t BgL_arg2455z00_1850;

								obj_t BgL_arg2456z00_1851;

								obj_t BgL_arg2457z00_1852;

								{
									BgL_z62errorz62_bglt BgL_auxz00_5486;

									BgL_auxz00_5486 = (BgL_z62errorz62_bglt) (BgL_ez00_1847);
									BgL_arg2455z00_1850 =
										(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_5486))->
										BgL_procz00);
								}
								{
									BgL_z62errorz62_bglt BgL_auxz00_5489;

									BgL_auxz00_5489 = (BgL_z62errorz62_bglt) (BgL_ez00_1847);
									BgL_arg2456z00_1851 =
										(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_5489))->
										BgL_msgz00);
								}
								{
									BgL_z62errorz62_bglt BgL_auxz00_5492;

									BgL_auxz00_5492 = (BgL_z62errorz62_bglt) (BgL_ez00_1847);
									BgL_arg2457z00_1852 =
										(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_5492))->
										BgL_objz00);
								}
								PROCEDURE_ENTRY(BgL_handlerz00_3986) (BgL_handlerz00_3986,
									BgL_escz00_3987, BgL_arg2455z00_1850, BgL_arg2456z00_1851,
									BgL_arg2457z00_1852, BEOA);
							}
							{	/* Llib/error.scm 1015 */
								obj_t BgL_list2458z00_1853;

								BgL_list2458z00_1853 = MAKE_PAIR(BINT(((long) 4)), BNIL);
								return BGl_exitz00zz__errorz00(BgL_list2458z00_1853);
							}
						}
					else
						{	/* Llib/error.scm 1012 */
							return BGl_raisez00zz__errorz00(BgL_ez00_1847);
						}
				}
			}
		}
	}



/* esc */
	obj_t BGl_escz00zz__errorz00(obj_t BgL_envz00_3989, obj_t BgL_val1848z00_3991)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1009 */
			{	/* Llib/error.scm 1009 */
				obj_t BgL_an_exitd1847z00_3990;

				BgL_an_exitd1847z00_3990 =
					PROCEDURE_REF(BgL_envz00_3989, (int) (((long) 0)));
				{
					obj_t BgL_val1848z00_1843;

					BgL_val1848z00_1843 = BgL_val1848z00_3991;
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1847z00_3990,
						BgL_val1848z00_1843);
				}
			}
		}
	}



/* notify-interrupt */
	BGL_EXPORTED_DEF obj_t BGl_notifyzd2interruptzd2zz__errorz00(int
		BgL_sigz00_125)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1022 */
			{	/* Llib/error.scm 1023 */
				obj_t BgL_notifyz00_3584;

				BgL_notifyz00_3584 = BGL_INTERRUPT_NOTIFIER_GET();
				{	/* Llib/error.scm 1023 */
					obj_t BgL_fun2460z00_3585;

					if (PROCEDUREP(BgL_notifyz00_3584))
						{	/* Llib/error.scm 1023 */
							BgL_fun2460z00_3585 = BgL_notifyz00_3584;
						}
					else
						{	/* Llib/error.scm 1023 */
							BgL_fun2460z00_3585 =
								BGl_defaultzd2interruptzd2notifierzd2envzd2zz__errorz00;
						}
					return
						PROCEDURE_ENTRY(BgL_fun2460z00_3585) (BgL_fun2460z00_3585,
						BINT(BgL_sigz00_125), BEOA);
				}
			}
		}
	}



/* _notify-interrupt */
	obj_t BGl__notifyzd2interruptzd2zz__errorz00(obj_t BgL_envz00_3992,
		obj_t BgL_sigz00_3993)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1022 */
			{	/* Llib/error.scm 1023 */
				int BgL_auxz00_5510;

				{	/* Llib/error.scm 1023 */
					obj_t BgL_auxz00_5511;

					if (INTEGERP(BgL_sigz00_3993))
						{	/* Llib/error.scm 1023 */
							BgL_auxz00_5511 = BgL_sigz00_3993;
						}
					else
						{
							obj_t BgL_auxz00_5514;

							BgL_auxz00_5514 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3135z00zz__errorz00,
								BINT(((long) 40511)), BGl_string3234z00zz__errorz00,
								BGl_string3137z00zz__errorz00, BgL_sigz00_3993);
							FAILURE(BgL_auxz00_5514, BFALSE, BFALSE);
						}
					BgL_auxz00_5510 = CINT(BgL_auxz00_5511);
				}
				return BGl_notifyzd2interruptzd2zz__errorz00(BgL_auxz00_5510);
			}
		}
	}



/* default-interrupt-notifier */
	obj_t BGl_defaultzd2interruptzd2notifierz00zz__errorz00(obj_t BgL_sigz00_126)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1032 */
			{	/* Llib/error.scm 1033 */
				obj_t BgL_portz00_3588;

				{	/* Llib/error.scm 1033 */
					obj_t BgL_res3079z00_3592;

					{	/* Llib/error.scm 1033 */
						obj_t BgL_auxz00_5520;

						BgL_auxz00_5520 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3079z00_3592 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5520);
					}
					BgL_portz00_3588 = BgL_res3079z00_3592;
				}
				{	/* Llib/error.scm 1033 */
					obj_t BgL_list2461z00_3589;

					BgL_list2461z00_3589 = MAKE_PAIR(BgL_portz00_3588, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2461z00_3589);
				}
				{	/* Llib/error.scm 1033 */
					obj_t BgL_list2462z00_3590;

					BgL_list2462z00_3590 = MAKE_PAIR(BGl_string3235z00zz__errorz00, BNIL);
					BGl_fprintz00zz__r4_output_6_10_3z00(BgL_portz00_3588,
						BgL_list2462z00_3590);
				}
				return FLUSH_OUTPUT_PORT(BgL_portz00_3588);
			}
		}
	}



/* _default-interrupt-notifier */
	obj_t BGl__defaultzd2interruptzd2notifierz00zz__errorz00(obj_t
		BgL_envz00_3994, obj_t BgL_sigz00_3995)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1032 */
			return BGl_defaultzd2interruptzd2notifierz00zz__errorz00(BgL_sigz00_3995);
		}
	}



/* sigfpe-error-handler */
	obj_t BGl_sigfpezd2errorzd2handlerz00zz__errorz00(obj_t BgL_nz00_127)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1041 */
			{	/* Llib/error.scm 1042 */
				BgL_z62errorz62_bglt BgL_arg2015z00_3597;

				{	/* Llib/error.scm 1042 */
					obj_t BgL_arg2016z00_3598;

					{	/* Llib/error.scm 1042 */

						{	/* Llib/error.scm 1042 */

							BgL_arg2016z00_3598 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2015z00_3597 =
						BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
						BgL_arg2016z00_3598, BGl_string3236z00zz__errorz00,
						BGl_string3237z00zz__errorz00, BGl_string3238z00zz__errorz00);
				}
				return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_3597));
			}
		}
	}



/* _sigfpe-error-handler */
	obj_t BGl__sigfpezd2errorzd2handlerz00zz__errorz00(obj_t BgL_envz00_3850,
		obj_t BgL_nz00_3851)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1041 */
			return BGl_sigfpezd2errorzd2handlerz00zz__errorz00(BgL_nz00_3851);
		}
	}



/* sigill-error-handler */
	obj_t BGl_sigillzd2errorzd2handlerz00zz__errorz00(obj_t BgL_nz00_128)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1047 */
			{	/* Llib/error.scm 1048 */
				BgL_z62errorz62_bglt BgL_arg2015z00_3603;

				{	/* Llib/error.scm 1048 */
					obj_t BgL_arg2016z00_3604;

					{	/* Llib/error.scm 1048 */

						{	/* Llib/error.scm 1048 */

							BgL_arg2016z00_3604 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2015z00_3603 =
						BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
						BgL_arg2016z00_3604, BGl_string3239z00zz__errorz00,
						BGl_string3240z00zz__errorz00, BGl_string3238z00zz__errorz00);
				}
				return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_3603));
			}
		}
	}



/* _sigill-error-handler */
	obj_t BGl__sigillzd2errorzd2handlerz00zz__errorz00(obj_t BgL_envz00_3852,
		obj_t BgL_nz00_3853)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1047 */
			return BGl_sigillzd2errorzd2handlerz00zz__errorz00(BgL_nz00_3853);
		}
	}



/* sigbus-error-handler */
	obj_t BGl_sigbuszd2errorzd2handlerz00zz__errorz00(obj_t BgL_nz00_129)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1053 */
			{	/* Llib/error.scm 1054 */
				BgL_z62errorz62_bglt BgL_arg2015z00_3609;

				{	/* Llib/error.scm 1054 */
					obj_t BgL_arg2016z00_3610;

					{	/* Llib/error.scm 1054 */

						{	/* Llib/error.scm 1054 */

							BgL_arg2016z00_3610 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2015z00_3609 =
						BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
						BgL_arg2016z00_3610, BGl_string3239z00zz__errorz00,
						BGl_string3241z00zz__errorz00, BGl_string3238z00zz__errorz00);
				}
				return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_3609));
			}
		}
	}



/* _sigbus-error-handler */
	obj_t BGl__sigbuszd2errorzd2handlerz00zz__errorz00(obj_t BgL_envz00_3854,
		obj_t BgL_nz00_3855)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1053 */
			return BGl_sigbuszd2errorzd2handlerz00zz__errorz00(BgL_nz00_3855);
		}
	}



/* sigsegv-error-handler */
	obj_t BGl_sigsegvzd2errorzd2handlerz00zz__errorz00(obj_t BgL_nz00_130)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1059 */
			{	/* Llib/error.scm 1060 */
				BgL_z62errorz62_bglt BgL_arg2015z00_3615;

				{	/* Llib/error.scm 1060 */
					obj_t BgL_arg2016z00_3616;

					{	/* Llib/error.scm 1060 */

						{	/* Llib/error.scm 1060 */

							BgL_arg2016z00_3616 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2015z00_3615 =
						BGl_makezd2z62errorzb0zz__objectz00(BFALSE, BFALSE,
						BgL_arg2016z00_3616, BGl_string3239z00zz__errorz00,
						BGl_string3242z00zz__errorz00, BGl_string3238z00zz__errorz00);
				}
				return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2015z00_3615));
			}
		}
	}



/* _sigsegv-error-handler */
	obj_t BGl__sigsegvzd2errorzd2handlerz00zz__errorz00(obj_t BgL_envz00_3856,
		obj_t BgL_nz00_3857)
	{
		AN_OBJECT;
		{	/* Llib/error.scm 1059 */
			return BGl_sigsegvzd2errorzd2handlerz00zz__errorz00(BgL_nz00_3857);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__errorz00()
	{
		AN_OBJECT;
		{	/* Llib/error.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__errorz00()
	{
		AN_OBJECT;
		{	/* Llib/error.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__errorz00()
	{
		AN_OBJECT;
		{	/* Llib/error.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string3243z00zz__errorz00));
			return
				BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3243z00zz__errorz00));
		}
	}

#ifdef __cplusplus
}
#endif
