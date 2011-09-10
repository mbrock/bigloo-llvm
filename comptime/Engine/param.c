/*===========================================================================*/
/*   (Engine/param.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/param.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_threadzd2backendzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
	}                          *BgL_threadzd2backendzd2_bglt;

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

	typedef struct BgL_z62httpzd2statuszd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
		int BgL_statusz00;
	}                                  *BgL_z62httpzd2statuszd2errorz62_bglt;

	typedef struct BgL_z52ftpz52_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_cmdz00;
		obj_t BgL_dtpz00;
		bool_t BgL_passivezf3zf3;
	}                *BgL_z52ftpz52_bglt;

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

	typedef struct BgL_z62securityzd2exceptionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_messagez00;
	}                                 *BgL_z62securityzd2exceptionzb0_bglt;

	typedef struct BgL_ftpz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_cmdz00;
		obj_t BgL_dtpz00;
		bool_t BgL_passivezf3zf3;
		obj_t BgL_hostz00;
		obj_t BgL_portz00;
		obj_t BgL_motdz00;
		obj_t BgL_userz00;
		obj_t BgL_passz00;
		obj_t BgL_acctz00;
	}             *BgL_ftpz00_bglt;

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

	typedef struct BgL_z62accesszd2controlzd2exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_messagez00;
		obj_t BgL_objz00;
		obj_t BgL_permissionz00;
	}                                        
		*BgL_z62accesszd2controlzd2exceptionz62_bglt;

	typedef struct BgL_nothreadz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
		obj_t BgL_bodyz00;
		obj_t BgL_z52specificz52;
		obj_t BgL_z52cleanupz52;
		obj_t BgL_endzd2resultzd2;
		obj_t BgL_endzd2exceptionzd2;
	}                  *BgL_nothreadz00_bglt;

	typedef struct BgL_threadz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
	}                *BgL_threadz00_bglt;

	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62httpzd2redirectionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_portz00;
		obj_t BgL_urlz00;
	}                               *BgL_z62httpzd2redirectionzb0_bglt;

	typedef struct BgL_z62warningz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                    *BgL_z62warningz62_bglt;

	typedef struct BgL_tarzd2headerzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
		long BgL_modez00;
		long BgL_uidz00;
		long BgL_gidz00;
		long BgL_siza7eza7;
		obj_t BgL_mtimez00;
		long BgL_checksumz00;
		obj_t BgL_typez00;
		obj_t BgL_linknamez00;
		obj_t BgL_magicz00;
		obj_t BgL_unamez00;
		obj_t BgL_gnamez00;
		long BgL_devmajorz00;
		long BgL_devminorz00;
	}                      *BgL_tarzd2headerzd2_bglt;


	static obj_t BGl_za2optimzd2jvmza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31567ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl_zc3anonymousza31714ze3z83zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__ftpzd2userzd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31569ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__bigloozd2variableszd2usagez00zzengine_paramz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31571ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl__threadzd2namezd2zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cflagszd2optimza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2variableszd2usagez00zzengine_paramz00(bool_t);
	static obj_t BGl_zc3anonymousza31573ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2autozd2modeza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t
		BGl__z62accesszd2controlzd2exceptionzd2objzb0zzengine_paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2optionsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2debugza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2mcozd2suffixza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31575ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2csharpzd2suffixza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_addzd2doczd2variablez12z12zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2debugza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	static obj_t BGl_zc3anonymousza31577ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2cflagsza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2dllzd2pathza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2relativeza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__ftpzd2hostzd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2directoryza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2libraryza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bmemzd2profilingza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cczd2optionsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31583ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2helloza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2devmajorz00zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__z62exceptionzd2locationzd2setz12z70zzengine_paramz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__tarzd2headerzd2devminorz00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2dotnetzd2externalzd2asmzd2styleza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2tracezd2writezd2lengthza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2reflectionzf3za2zf3zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00 = BUNSPEC;
	extern obj_t BGl_bigloozd2datezd2zztools_datez00();
	static obj_t BGl__z62exceptionzd2fnamezd2setz12z70zzengine_paramz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2stdcza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2dlopenzd2initza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__tarzd2headerzd2gnamez00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2catchza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31590ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl_zc3anonymousza31600ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl__z62warningzd2argszb0zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2ldzd2styleza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2interpreterza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2userzd2headerza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2includezd2multipleza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2gczd2libza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__ftpzd2acctzd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31605ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl_zc3anonymousza31607ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl__z62exceptionzd2fnamezb0zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__nothreadzd2z52cleanupzd2setz12z40zzengine_paramz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2czd2userzd2footza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2versionza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2startupzd2fileza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__z62exceptionzd2locationzb0zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__nothreadzd2z52specificz80zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31611ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2cczd2moveza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2indexzb0zzengine_paramz00(obj_t,
		obj_t);
	static obj_t BGl__z62typezd2errorzd2typez62zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__addzd2doczd2variablez12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00
		= BUNSPEC;
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(char *);
	static obj_t BGl__tarzd2headerzd2namez00zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__z62httpzd2redirectionzd2urlz62zzengine_paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2jvmzd2peepholeza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31615ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2initzd2modeza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2libza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2classpathza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00();
	BGL_EXPORTED_DEF obj_t BGl_za2czd2splitzd2stringza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2profilezd2libraryza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__z62httpzd2statuszd2errorzd2statuszb0zzengine_paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2evalzd2optionsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__ftpzd2userzd2zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31619ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__z52ftpzd2dtpzd2setz12z40zzengine_paramz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2cflagszd2profza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2cmdzd2nameza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31622ze3z83zzengine_paramz00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl__z62exceptionzd2stackzd2setz12z70zzengine_paramz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2extendzd2entryza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31624ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2cczd2ozd2optionza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2withzd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2includezd2foreignza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__z62errorzd2msgzb0zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31626ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl__tarzd2headerzd2linknamez00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2allocationzd2onexpressionzf3za2z21zzengine_paramz00
		= BUNSPEC;
	static obj_t BGl__z62errorzd2objzb0zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31628ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2structza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2locationzd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2accesszd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31631ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2modulezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__ftpzd2motdzd2zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31633ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2libraryza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2libzd2srczd2dirza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2objzd2suffixza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2typezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2optionsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_EXPORTED_DEF obj_t BGl_za2czd2debugzd2optionza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31636ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2gczd2customzf3za2z21zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__nothreadzd2z52specificzd2setz12z40zzengine_paramz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2srczd2suffixza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2indentza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__z52ftpzd2passivezf3zd2setz12zb3zzengine_paramz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__ftpzd2passzd2zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2externalzd2asmza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__tarzd2headerzd2typez00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31638ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2jvmzd2constructorzd2inliningza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31640ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl_za2paramzd2updatersza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_datez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	static obj_t BGl__ftpzd2motdzd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2urlza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__threadzd2specificzd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzengine_paramz00();
	static obj_t BGl__tarzd2headerzd2mtimez00zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__threadzd2namezd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31644ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2callzf2cczf3za2z01zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2gidz00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31646ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2tmpzd2destza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2integratezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31648ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t
		BGl__z62accesszd2controlzd2exceptionzd2permissionzb0zzengine_paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_EXPORTED_DEF obj_t BGl_za2garbagezd2collectorza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__ftpzd2portzd2zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__nothreadzd2endzd2resultzd2setz12zc0zzengine_paramz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31651ze3z83zzengine_paramz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__z52ftpzd2cmdz80zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2dotnetzd2tailzd2acrosszd2modulesza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2siza7eza7zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__nothreadzd2z52cleanupz80zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2stripza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__z52ftpzd2cmdzd2setz12z40zzengine_paramz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2dotnetzd2usezd2externalzd2asmza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2emailza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2modez00zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31654ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl__ftpzd2portzd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31655ze3z83zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31656ze3z83zzengine_paramz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__threadzd2specificzd2zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__tarzd2headerzd2uidz00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ccza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cczd2styleza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2shellza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__z52ftpzd2passivezf3z73zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2classzd2nilzf3za2z21zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31525ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2reallocationzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2keyzd2shapezf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT bool_t string_lt(obj_t, obj_t);
	static obj_t BGl__addzd2updaterz12zc0zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl__nothreadzd2endzd2exceptionz00zzengine_paramz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31527ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2readerza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31665ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl__z62errorzd2proczb0zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2optimza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2jvmzd2branchza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2argsza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2checksumz00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2destza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__z62exceptionzd2stackzb0zzengine_paramz00(obj_t, obj_t);
	static obj_t
		BGl__reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2shellza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2sawza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__z52ftpzd2dtpz80zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2dateza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2globaliza7ezd2integratezd228cza2za7zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2passza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00 =
		BUNSPEC;
	extern obj_t
		BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00(obj_t);
	static obj_t BGl_zc3anonymousza31536ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__z62securityzd2exceptionzd2messagez62zzengine_paramz00(obj_t,
		obj_t);
	static obj_t
		BGl__nothreadzd2endzd2exceptionzd2setz12zc0zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31674ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2clrza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2czd2suffixza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__ftpzd2passzd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31676ze3z83zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2tracezd2nameza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2targetzd2languageza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__tarzd2headerzd2magicz00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t
		BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt, int, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2clrzd2styleza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00
		= BUNSPEC;
	static obj_t BGl_addzd2updaterz12zc0zzengine_paramz00(obj_t);
	static obj_t BGl__threadzd2cleanupzd2setz12z12zzengine_paramz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__ftpzd2acctzd2zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2evalza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt, int);
	static obj_t BGl_evalzd2initzd2zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31546ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2styleza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31548ze3z83zzengine_paramz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2inliningzf3za2zf3zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__threadzd2cleanupzd2zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2inliningzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31550ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2unamez00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2ldza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31552ze3z83zzengine_paramz00(obj_t);
	static obj_t BGl__ftpzd2hostzd2zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2tailza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31554ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2verboseza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl__threadzd2backendzd2namez00zzengine_paramz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31556ze3z83zzengine_paramz00(obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	static obj_t BGl__z62httpzd2redirectionzd2portz62zzengine_paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2nameza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31558ze3z83zzengine_paramz00(obj_t);
	BGL_IMPORT obj_t BGl_oszd2tmpzd2zz__osz00();
	static obj_t BGl_zc3anonymousza31560ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00();
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2javaza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2namezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00
		= BUNSPEC;
	BGL_IMPORT obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2dotnetzd2pnetzd2workaroundzd2switchza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl__nothreadzd2bodyzd2zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2envza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2prezd2processorza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza31563ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2additionalzd2tracesza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2heapza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2purifyza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31565ze3z83zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2dotnetzd2shellza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2genericityza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00
		= BUNSPEC;
	static obj_t BGl__nothreadzd2endzd2resultz00zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2jvmzd2inliningza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t __cnst[339];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_ftpzd2userzd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__ftpza7d2userza7d2se2028z00,
		BGl__ftpzd2userzd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52ftpzd2dtpzd2setz12zd2envz92zzengine_paramz00,
		BgL_bgl__za752ftpza7d2dtpza7d22029za7,
		BGl__z52ftpzd2dtpzd2setz12z40zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2endzd2exceptionzd2setz12zd2envz12zzengine_paramz00,
		BgL_bgl__nothreadza7d2endza72030z00,
		BGl__nothreadzd2endzd2exceptionzd2setz12zc0zzengine_paramz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2variableszd2usagezd2envzd2zzengine_paramz00,
		BgL_bgl__biglooza7d2variab2031za7,
		BGl__bigloozd2variableszd2usagez00zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_ftpzd2motdzd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__ftpza7d2motdza7d2se2032z00,
		BGl__ftpzd2motdzd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2fnamezd2envz62zzengine_paramz00,
		BgL_bgl__za762exceptionza7d22033z00,
		BGl__z62exceptionzd2fnamezb0zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_ftpzd2portzd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__ftpza7d2portza7d2se2034z00,
		BGl__ftpzd2portzd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2typezd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22035z00,
		BGl__tarzd2headerzd2typez00zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z62errorzd2objzd2envz62zzengine_paramz00,
		BgL_bgl__za762errorza7d2objza72036za7,
		BGl__z62errorzd2objzb0zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2siza7ezd2envz75zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22037z00,
		BGl__tarzd2headerzd2siza7eza7zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2z52specificzd2setz12zd2envz92zzengine_paramz00,
		BgL_bgl__nothreadza7d2za752s2038z00,
		BGl__nothreadzd2z52specificzd2setz12z40zzengine_paramz00, 0L, BUNSPEC, 2);
	extern obj_t
		BGl_buildzd2pathzd2fromzd2shellzd2variablezd2envzd2zztools_miscz00;
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_ftpzd2acctzd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__ftpza7d2acctza7d2se2039z00,
		BGl__ftpzd2acctzd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_epairifyzd2propagatezd2envz00zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2endzd2exceptionzd2envzd2zzengine_paramz00,
		BgL_bgl__nothreadza7d2endza72040z00,
		BGl__nothreadzd2endzd2exceptionz00zzengine_paramz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_epairifyzd2reczd2envz00zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2mtimezd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22041z00,
		BGl__tarzd2headerzd2mtimez00zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2userzd2envz00zzengine_paramz00,
		BgL_bgl__ftpza7d2userza7d2za7za72042z00,
		BGl__ftpzd2userzd2zzengine_paramz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_bigloozd2datezd2envz00zztools_datez00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2endzd2resultzd2setz12zd2envz12zzengine_paramz00,
		BgL_bgl__nothreadza7d2endza72043z00,
		BGl__nothreadzd2endzd2resultzd2setz12zc0zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2gnamezd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22044z00,
		BGl__tarzd2headerzd2gnamez00zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2modezd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22045z00,
		BGl__tarzd2headerzd2modez00zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2linknamezd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22046z00,
		BGl__tarzd2headerzd2linknamez00zzengine_paramz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_replacez12zd2envzc0zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2magiczd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22047z00,
		BGl__tarzd2headerzd2magicz00zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z52ftpzd2cmdzd2envz52zzengine_paramz00,
		BgL_bgl__za752ftpza7d2cmdza7802048za7,
		BGl__z52ftpzd2cmdz80zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z62errorzd2msgzd2envz62zzengine_paramz00,
		BgL_bgl__za762errorza7d2msgza72049za7,
		BGl__z62errorzd2msgzb0zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_addzd2doczd2variablez12zd2envzc0zzengine_paramz00,
		BgL_bgl__addza7d2docza7d2var2050z00,
		BGl__addzd2doczd2variablez12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_ftpzd2hostzd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__ftpza7d2hostza7d2se2051z00,
		BGl__ftpzd2hostzd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52ftpzd2passivezf3zd2setz12zd2envz61zzengine_paramz00,
		BgL_bgl__za752ftpza7d2passiv2052z00,
		BGl__z52ftpzd2passivezf3zd2setz12zb3zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2namezd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22053z00,
		BGl__tarzd2headerzd2namez00zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_nothreadzd2bodyzd2envz00zzengine_paramz00,
		BgL_bgl__nothreadza7d2body2054za7, BGl__nothreadzd2bodyzd2zzengine_paramz00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_epairifyza2zd2envz70zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2cleanupzd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__threadza7d2cleanu2055za7,
		BGl__threadzd2cleanupzd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2z52specificzd2envz52zzengine_paramz00,
		BgL_bgl__nothreadza7d2za752s2056z00,
		BGl__nothreadzd2z52specificz80zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_ftpzd2passzd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__ftpza7d2passza7d2se2057z00,
		BGl__ftpzd2passzd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2portzd2envz00zzengine_paramz00,
		BgL_bgl__ftpza7d2portza7d2za7za72058z00,
		BGl__ftpzd2portzd2zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2z52cleanupzd2setz12zd2envz92zzengine_paramz00,
		BgL_bgl__nothreadza7d2za752c2059z00,
		BGl__nothreadzd2z52cleanupzd2setz12z40zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_addzd2updaterz12zd2envz12zzengine_paramz00,
		BgL_bgl__addza7d2updaterza712060z00,
		BGl__addzd2updaterz12zc0zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62httpzd2redirectionzd2urlzd2envzb0zzengine_paramz00,
		BgL_bgl__za762httpza7d2redir2061z00,
		BGl__z62httpzd2redirectionzd2urlz62zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2uidzd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22062z00,
		BGl__tarzd2headerzd2uidz00zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2z52cleanupzd2envz52zzengine_paramz00,
		BgL_bgl__nothreadza7d2za752c2063z00,
		BGl__nothreadzd2z52cleanupz80zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2checksumzd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22064z00,
		BGl__tarzd2headerzd2checksumz00zzengine_paramz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_uncygdrivezd2envzd2zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2indexzd2envz62zzengine_paramz00,
		BgL_bgl__za762indexza7d2outza72065za7,
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2indexzb0zzengine_paramz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2fnamezd2setz12zd2envza2zzengine_paramz00,
		BgL_bgl__za762exceptionza7d22066z00,
		BGl__z62exceptionzd2fnamezd2setz12z70zzengine_paramz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2acctzd2envz00zzengine_paramz00,
		BgL_bgl__ftpza7d2acctza7d2za7za72067z00,
		BGl__ftpzd2acctzd2zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1761z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312068z00,
		BGl_zc3anonymousza31525ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1763z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312069z00,
		BGl_zc3anonymousza31527ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1768z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312070z00,
		BGl_zc3anonymousza31536ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1774z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312071z00,
		BGl_zc3anonymousza31546ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1781z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312072z00,
		BGl_zc3anonymousza31548ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1783z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312073z00,
		BGl_zc3anonymousza31550ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2stackzd2setz12zd2envza2zzengine_paramz00,
		BgL_bgl__za762exceptionza7d22074z00,
		BGl__z62exceptionzd2stackzd2setz12z70zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62accesszd2controlzd2exceptionzd2objzd2envz62zzengine_paramz00,
		BgL_bgl__za762accessza7d2con2075z00,
		BGl__z62accesszd2controlzd2exceptionzd2objzb0zzengine_paramz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1785z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312076z00,
		BGl_zc3anonymousza31552ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1787z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312077z00,
		BGl_zc3anonymousza31554ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1789z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312078z00,
		BGl_zc3anonymousza31556ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1801z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312079z00,
		BGl_zc3anonymousza31567ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1791z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312080z00,
		BGl_zc3anonymousza31558ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1793z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312081z00,
		BGl_zc3anonymousza31560ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2motdzd2envz00zzengine_paramz00,
		BgL_bgl__ftpza7d2motdza7d2za7za72082z00,
		BGl__ftpzd2motdzd2zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1805z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312083z00,
		BGl_zc3anonymousza31569ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1795z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312084z00,
		BGl_zc3anonymousza31563ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1807z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312085z00,
		BGl_zc3anonymousza31571ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1798z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312086z00,
		BGl_zc3anonymousza31565ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1809z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312087z00,
		BGl_zc3anonymousza31573ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62accesszd2controlzd2exceptionzd2permissionzd2envz62zzengine_paramz00,
		BgL_bgl__za762accessza7d2con2088z00,
		BGl__z62accesszd2controlzd2exceptionzd2permissionzb0zzengine_paramz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1815z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312089z00,
		BGl_zc3anonymousza31575ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1817z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312090z00,
		BGl_zc3anonymousza31577ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1821z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312091z00,
		BGl_zc3anonymousza31583ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1823z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312092z00,
		BGl_zc3anonymousza31590ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1826z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312093z00,
		BGl_zc3anonymousza31600ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1828z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312094z00,
		BGl_zc3anonymousza31605ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1831z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312095z00,
		BGl_zc3anonymousza31607ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1836z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312096z00,
		BGl_zc3anonymousza31611ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2unamezd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22097z00,
		BGl__tarzd2headerzd2unamez00zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1840z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312098z00,
		BGl_zc3anonymousza31615ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1844z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312099z00,
		BGl_zc3anonymousza31619ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1850z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312100z00,
		BGl_zc3anonymousza31622ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2gidzd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22101z00,
		BGl__tarzd2headerzd2gidz00zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1854z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312102z00,
		BGl_zc3anonymousza31624ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1862z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312103z00,
		BGl_zc3anonymousza31626ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1872z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312104z00,
		BGl_zc3anonymousza31628ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_epairifyzd2envzd2zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2002z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312105z00,
		BGl_zc3anonymousza31676ze3z83zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312106z00,
		BGl_zc3anonymousza31631ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1908z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312107z00,
		BGl_zc3anonymousza31636ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312108z00,
		BGl_zc3anonymousza31633ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312109z00,
		BGl_zc3anonymousza31638ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312110z00,
		BGl_zc3anonymousza31640ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2012z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312111z00,
		BGl_zc3anonymousza31714ze3z83zzengine_paramz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1913z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312112z00,
		BGl_zc3anonymousza31644ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1915z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312113z00,
		BGl_zc3anonymousza31646ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1917z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312114z00,
		BGl_zc3anonymousza31648ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1920z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312115z00,
		BGl_zc3anonymousza31651ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2locationzd2envz62zzengine_paramz00,
		BgL_bgl__za762exceptionza7d22116z00,
		BGl__z62exceptionzd2locationzb0zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52ftpzd2passivezf3zd2envza1zzengine_paramz00,
		BgL_bgl__za752ftpza7d2passiv2117z00,
		BGl__z52ftpzd2passivezf3z73zzengine_paramz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_stringzd2splitzd2charzd2envzd2zztools_miscz00;
	   
		 
		DEFINE_STRING(BGl_string1760z00zzengine_paramz00,
		BgL_bgl_string1760za700za7za7e2118za7, "The Bigloo major release number",
		31);
	      DEFINE_STRING(BGl_string1762z00zzengine_paramz00,
		BgL_bgl_string1762za700za7za7e2119za7, "The Bigloo specific version", 27);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1946z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312120z00,
		BGl_zc3anonymousza31654ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1764z00zzengine_paramz00,
		BgL_bgl_string1764za700za7za7e2121za7, ")", 1);
	      DEFINE_STRING(BGl_string1765z00zzengine_paramz00,
		BgL_bgl_string1765za700za7za7e2122za7, "(", 1);
	      DEFINE_STRING(BGl_string1766z00zzengine_paramz00,
		BgL_bgl_string1766za700za7za7e2123za7, "Bigloo ", 7);
	      DEFINE_STRING(BGl_string1767z00zzengine_paramz00,
		BgL_bgl_string1767za700za7za7e2124za7, "The Bigloo name", 15);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z62warningzd2argszd2envz62zzengine_paramz00,
		BgL_bgl__za762warningza7d2ar2125z00,
		BGl__z62warningzd2argszb0zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1770z00zzengine_paramz00,
		BgL_bgl_string1770za700za7za7e2126za7, "bigloo@lists-sop.inria.fr", 25);
	      DEFINE_STRING(BGl_string1769z00zzengine_paramz00,
		BgL_bgl_string1769za700za7za7e2127za7, "Inria -- Sophia Antipolis", 25);
	      DEFINE_STRING(BGl_string1771z00zzengine_paramz00,
		BgL_bgl_string1771za700za7za7e2128za7,
		"http://www-sop.inria.fr/indes/fp/Bigloo", 39);
	      DEFINE_STRING(BGl_string1772z00zzengine_paramz00,
		BgL_bgl_string1772za700za7za7e2129za7, "TMPDIR", 6);
	      DEFINE_STRING(BGl_string1773z00zzengine_paramz00,
		BgL_bgl_string1773za700za7za7e2130za7, "The tmp directory name", 22);
	      DEFINE_STRING(BGl_string1775z00zzengine_paramz00,
		BgL_bgl_string1775za700za7za7e2131za7, "Add the Bigloo license ?", 24);
	      DEFINE_STRING(BGl_string1776z00zzengine_paramz00,
		BgL_bgl_string1776za700za7za7e2132za7, "The verbosity level", 19);
	      DEFINE_STRING(BGl_string1777z00zzengine_paramz00,
		BgL_bgl_string1777za700za7za7e2133za7, "Say hello (when verbose)", 24);
	      DEFINE_STRING(BGl_string1778z00zzengine_paramz00,
		BgL_bgl_string1778za700za7za7e2134za7, "The sources files", 17);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2stackzd2envz62zzengine_paramz00,
		BgL_bgl__za762exceptionza7d22135z00,
		BGl__z62exceptionzd2stackzb0zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1780z00zzengine_paramz00,
		BgL_bgl_string1780za700za7za7e2136za7, "The shell to exec C compilations",
		32);
	      DEFINE_STRING(BGl_string1779z00zzengine_paramz00,
		BgL_bgl_string1779za700za7za7e2137za7, "The target name", 15);
	      DEFINE_STRING(BGl_string1782z00zzengine_paramz00,
		BgL_bgl_string1782za700za7za7e2138za7, "The C compiler style", 20);
	      DEFINE_STRING(BGl_string1784z00zzengine_paramz00,
		BgL_bgl_string1784za700za7za7e2139za7, "The C compiler", 14);
	      DEFINE_STRING(BGl_string1786z00zzengine_paramz00,
		BgL_bgl_string1786za700za7za7e2140za7, "The C compiler option", 21);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62httpzd2statuszd2errorzd2statuszd2envz62zzengine_paramz00,
		BgL_bgl__za762httpza7d2statu2141z00,
		BGl__z62httpzd2statuszd2errorzd2statuszb0zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1788z00zzengine_paramz00,
		BgL_bgl_string1788za700za7za7e2142za7, "The C compiler optimization option",
		34);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1973z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312143z00,
		BGl_zc3anonymousza31655ze3z83zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1800z00zzengine_paramz00,
		BgL_bgl_string1800za700za7za7e2144za7, "ld style", 8);
	      DEFINE_STRING(BGl_string1790z00zzengine_paramz00,
		BgL_bgl_string1790za700za7za7e2145za7, "The C compiler profiling option",
		31);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1975z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312146z00,
		BGl_zc3anonymousza31656ze3z83zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1802z00zzengine_paramz00,
		BgL_bgl_string1802za700za7za7e2147za7, "", 0);
	      DEFINE_STRING(BGl_string1792z00zzengine_paramz00,
		BgL_bgl_string1792za700za7za7e2148za7, "The C compiler -o option", 24);
	      DEFINE_STRING(BGl_string1803z00zzengine_paramz00,
		BgL_bgl_string1803za700za7za7e2149za7, "ld options", 10);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2endzd2resultzd2envzd2zzengine_paramz00,
		BgL_bgl__nothreadza7d2endza72150z00,
		BGl__nothreadzd2endzd2resultz00zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1804z00zzengine_paramz00,
		BgL_bgl_string1804za700za7za7e2151za7, "The C linker -o option", 22);
	      DEFINE_STRING(BGl_string1794z00zzengine_paramz00,
		BgL_bgl_string1794za700za7za7e2152za7, "The C object file extension", 27);
	      DEFINE_STRING(BGl_string1806z00zzengine_paramz00,
		BgL_bgl_string1806za700za7za7e2153za7, "The C linker debugging option", 29);
	      DEFINE_STRING(BGl_string1796z00zzengine_paramz00,
		BgL_bgl_string1796za700za7za7e2154za7, "Shall we produce ISO C?", 23);
	      DEFINE_STRING(BGl_string1797z00zzengine_paramz00,
		BgL_bgl_string1797za700za7za7e2155za7, "cc options", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1982z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312156z00,
		BGl_zc3anonymousza31665ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1808z00zzengine_paramz00,
		BgL_bgl_string1808za700za7za7e2157za7, "The C linker optimization flags",
		31);
	      DEFINE_STRING(BGl_string1810z00zzengine_paramz00,
		BgL_bgl_string1810za700za7za7e2158za7, "ld post options", 15);
	      DEFINE_STRING(BGl_string1799z00zzengine_paramz00,
		BgL_bgl_string1799za700za7za7e2159za7,
		"Shall the .c and .il produced files be removed?", 47);
	      DEFINE_STRING(BGl_string1811z00zzengine_paramz00,
		BgL_bgl_string1811za700za7za7e2160za7,
		"Use mv instead of -o when C compiling", 37);
	      DEFINE_STRING(BGl_string1812z00zzengine_paramz00,
		BgL_bgl_string1812za700za7za7e2161za7,
		"Relative or absolute path names for libraries", 45);
	      DEFINE_STRING(BGl_string1813z00zzengine_paramz00,
		BgL_bgl_string1813za700za7za7e2162za7, "Shall we strip the executable?",
		30);
	      DEFINE_STRING(BGl_string1814z00zzengine_paramz00,
		BgL_bgl_string1814za700za7za7e2163za7,
		"The ld lib dir path (without version)", 37);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1990z00zzengine_paramz00,
		BgL_bgl_za7c3anonymousza7a312164z00,
		BGl_zc3anonymousza31674ze3z83zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1816z00zzengine_paramz00,
		BgL_bgl_string1816za700za7za7e2165za7,
		"The default lib dir path (without version)", 42);
	      DEFINE_STRING(BGl_string1818z00zzengine_paramz00,
		BgL_bgl_string1818za700za7za7e2166za7, "BIGLOOLIB", 9);
	      DEFINE_STRING(BGl_string1820z00zzengine_paramz00,
		BgL_bgl_string1820za700za7za7e2167za7, "The lib dir path", 16);
	      DEFINE_STRING(BGl_string1819z00zzengine_paramz00,
		BgL_bgl_string1819za700za7za7e2168za7, ".", 1);
	      DEFINE_STRING(BGl_string1822z00zzengine_paramz00,
		BgL_bgl_string1822za700za7za7e2169za7, "runtime", 7);
	      DEFINE_STRING(BGl_string1824z00zzengine_paramz00,
		BgL_bgl_string1824za700za7za7e2170za7, "The Bigloo library", 18);
	      DEFINE_STRING(BGl_string1825z00zzengine_paramz00,
		BgL_bgl_string1825za700za7za7e2171za7, "The Gc library", 14);
	      DEFINE_STRING(BGl_string1827z00zzengine_paramz00,
		BgL_bgl_string1827za700za7za7e2172za7, "Are we using a custom GC library?",
		33);
	      DEFINE_STRING(BGl_string1830z00zzengine_paramz00,
		BgL_bgl_string1830za700za7za7e2173za7,
		"Do we have the bigloo-abort function in executables?", 52);
	      DEFINE_STRING(BGl_string1829z00zzengine_paramz00,
		BgL_bgl_string1829za700za7za7e2174za7, "Are we using a multi-threaded GC?",
		33);
	      DEFINE_STRING(BGl_string1832z00zzengine_paramz00,
		BgL_bgl_string1832za700za7za7e2175za7,
		"Do we use the static Bigloo library", 35);
	      DEFINE_STRING(BGl_string1833z00zzengine_paramz00,
		BgL_bgl_string1833za700za7za7e2176za7,
		"Do we use the static version of all Bigloo libraries?", 53);
	      DEFINE_STRING(BGl_string1834z00zzengine_paramz00,
		BgL_bgl_string1834za700za7za7e2177za7,
		"Do we include the additional user libraries twice?", 50);
	      DEFINE_STRING(BGl_string1835z00zzengine_paramz00,
		BgL_bgl_string1835za700za7za7e2178za7, "The user extra C libraries", 26);
	      DEFINE_STRING(BGl_string1837z00zzengine_paramz00,
		BgL_bgl_string1837za700za7za7e2179za7, "The user extra Bigloo libraries",
		31);
	      DEFINE_STRING(BGl_string1838z00zzengine_paramz00,
		BgL_bgl_string1838za700za7za7e2180za7,
		"A list of C functions to be called when starting the application", 64);
	      DEFINE_STRING(BGl_string1839z00zzengine_paramz00,
		BgL_bgl_string1839za700za7za7e2181za7, "The user extra Bigloo Zip files",
		31);
	      DEFINE_STRING(BGl_string1841z00zzengine_paramz00,
		BgL_bgl_string1841za700za7za7e2182za7,
		"Enable/disable multiple inclusion of same file", 46);
	      DEFINE_STRING(BGl_string1842z00zzengine_paramz00,
		BgL_bgl_string1842za700za7za7e2183za7, "bigloo.h", 8);
	      DEFINE_STRING(BGl_string1843z00zzengine_paramz00,
		BgL_bgl_string1843za700za7za7e2184za7, "The C included files", 20);
	      DEFINE_STRING(BGl_string1845z00zzengine_paramz00,
		BgL_bgl_string1845za700za7za7e2185za7, "The additional C included files",
		31);
	      DEFINE_STRING(BGl_string1846z00zzengine_paramz00,
		BgL_bgl_string1846za700za7za7e2186za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string1847z00zzengine_paramz00,
		BgL_bgl_string1847za700za7za7e2187za7, "The Bigloo heap base name", 25);
	      DEFINE_STRING(BGl_string1848z00zzengine_paramz00,
		BgL_bgl_string1848za700za7za7e2188za7, ".heap", 5);
	      DEFINE_STRING(BGl_string1849z00zzengine_paramz00,
		BgL_bgl_string1849za700za7za7e2189za7, "The Bigloo heap file name", 25);
	      DEFINE_STRING(BGl_string1851z00zzengine_paramz00,
		BgL_bgl_string1851za700za7za7e2190za7, "The library the heap belongs to",
		31);
	      DEFINE_STRING(BGl_string1852z00zzengine_paramz00,
		BgL_bgl_string1852za700za7za7e2191za7, ".jheap", 6);
	      DEFINE_STRING(BGl_string1853z00zzengine_paramz00,
		BgL_bgl_string1853za700za7za7e2192za7,
		"The Bigloo heap file name for the JVM backend", 45);
	      DEFINE_STRING(BGl_string1855z00zzengine_paramz00,
		BgL_bgl_string1855za700za7za7e2193za7, "The name of the heap to be dumped",
		33);
	      DEFINE_STRING(BGl_string1856z00zzengine_paramz00,
		BgL_bgl_string1856za700za7za7e2194za7,
		"The identifier of the Jlib foreign class", 40);
	      DEFINE_STRING(BGl_string1857z00zzengine_paramz00,
		BgL_bgl_string1857za700za7za7e2195za7, "bigloo.foreign", 14);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2devminorzd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22196z00,
		BGl__tarzd2headerzd2devminorz00zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1858z00zzengine_paramz00,
		BgL_bgl_string1858za700za7za7e2197za7, "The name of the Jlib foreign class",
		34);
	      DEFINE_STRING(BGl_string1860z00zzengine_paramz00,
		BgL_bgl_string1860za700za7za7e2198za7,
		"A list of Bigloo additional heap file name", 42);
	      DEFINE_STRING(BGl_string1859z00zzengine_paramz00,
		BgL_bgl_string1859za700za7za7e2199za7,
		"A name of an additional heap file name to be build", 50);
	      DEFINE_STRING(BGl_string1861z00zzengine_paramz00,
		BgL_bgl_string1861za700za7za7e2200za7, "The name of the C beautifier", 28);
	      DEFINE_STRING(BGl_string1863z00zzengine_paramz00,
		BgL_bgl_string1863za700za7za7e2201za7, "Debugging level", 15);
	      DEFINE_STRING(BGl_string1864z00zzengine_paramz00,
		BgL_bgl_string1864za700za7za7e2202za7, "Debugging trace level", 21);
	      DEFINE_STRING(BGl_string1865z00zzengine_paramz00,
		BgL_bgl_string1865za700za7za7e2203za7,
		"Localize error calls in the source code", 39);
	      DEFINE_STRING(BGl_string1866z00zzengine_paramz00,
		BgL_bgl_string1866za700za7za7e2204za7, "Compiler self sharing debug", 27);
	      DEFINE_STRING(BGl_string1867z00zzengine_paramz00,
		BgL_bgl_string1867za700za7za7e2205za7, "Instrument code for bmem profiling",
		34);
	      DEFINE_STRING(BGl_string1868z00zzengine_paramz00,
		BgL_bgl_string1868za700za7za7e2206za7, "Module initilazation debugging",
		30);
	      DEFINE_STRING(BGl_string1870z00zzengine_paramz00,
		BgL_bgl_string1870za700za7za7e2207za7, "Emit # line directives", 22);
	      DEFINE_STRING(BGl_string1869z00zzengine_paramz00,
		BgL_bgl_string1869za700za7za7e2208za7, "C debugging mode?", 17);
	      DEFINE_STRING(BGl_string1871z00zzengine_paramz00,
		BgL_bgl_string1871za700za7za7e2209za7, "cc debugging option", 19);
	      DEFINE_STRING(BGl_string1873z00zzengine_paramz00,
		BgL_bgl_string1873za700za7za7e2210za7, "C header", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z52ftpzd2dtpzd2envz52zzengine_paramz00,
		BgL_bgl__za752ftpza7d2dtpza7802211za7,
		BGl__z52ftpzd2dtpz80zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1874z00zzengine_paramz00,
		BgL_bgl_string1874za700za7za7e2212za7, "C foot", 6);
	      DEFINE_STRING(BGl_string1875z00zzengine_paramz00,
		BgL_bgl_string1875za700za7za7e2213za7, "JVM debugging mode?", 19);
	      DEFINE_STRING(BGl_string1876z00zzengine_paramz00,
		BgL_bgl_string1876za700za7za7e2214za7, "Bdb debugging mode", 18);
	      DEFINE_STRING(BGl_string1877z00zzengine_paramz00,
		BgL_bgl_string1877za700za7za7e2215za7, "Bigloo profile mode", 19);
	      DEFINE_STRING(BGl_string1878z00zzengine_paramz00,
		BgL_bgl_string1878za700za7za7e2216za7, "bmon.out", 8);
	      DEFINE_STRING(BGl_string1880z00zzengine_paramz00,
		BgL_bgl_string1880za700za7za7e2217za7, "The access file names", 21);
	      DEFINE_STRING(BGl_string1879z00zzengine_paramz00,
		BgL_bgl_string1879za700za7za7e2218za7, "Bprof translation table file name",
		33);
	      DEFINE_STRING(BGl_string1881z00zzengine_paramz00,
		BgL_bgl_string1881za700za7za7e2219za7, ".afile", 6);
	      DEFINE_STRING(BGl_string1882z00zzengine_paramz00,
		BgL_bgl_string1882za700za7za7e2220za7, "The default access file name", 28);
	      DEFINE_STRING(BGl_string1883z00zzengine_paramz00,
		BgL_bgl_string1883za700za7za7e2221za7,
		"The qualifed-type association file name", 39);
	      DEFINE_STRING(BGl_string1884z00zzengine_paramz00,
		BgL_bgl_string1884za700za7za7e2222za7, ".jfile", 6);
	      DEFINE_STRING(BGl_string1885z00zzengine_paramz00,
		BgL_bgl_string1885za700za7za7e2223za7, "The additional obect files", 26);
	      DEFINE_STRING(BGl_string1886z00zzengine_paramz00,
		BgL_bgl_string1886za700za7za7e2224za7, "The C source files", 18);
	      DEFINE_STRING(BGl_string1887z00zzengine_paramz00,
		BgL_bgl_string1887za700za7za7e2225za7, "The additional modules", 22);
	      DEFINE_STRING(BGl_string1888z00zzengine_paramz00,
		BgL_bgl_string1888za700za7za7e2226za7,
		"Shall we interprete the source file?", 36);
	      DEFINE_STRING(BGl_string2000z00zzengine_paramz00,
		BgL_bgl_string2000za700za7za7e2227za7,
		"A user variable to store dynamic command line options", 53);
	      DEFINE_STRING(BGl_string1900z00zzengine_paramz00,
		BgL_bgl_string1900za700za7za7e2228za7, "JVM Bigloo classpath", 20);
	      DEFINE_STRING(BGl_string1890z00zzengine_paramz00,
		BgL_bgl_string1890za700za7za7e2229za7, "Shall we enable call/cc?", 24);
	      DEFINE_STRING(BGl_string1889z00zzengine_paramz00,
		BgL_bgl_string1889za700za7za7e2230za7, "A startup file for the interpreter",
		34);
	      DEFINE_STRING(BGl_string2001z00zzengine_paramz00,
		BgL_bgl_string2001za700za7za7e2231za7, "If true, allow type redefinitions",
		33);
	      DEFINE_STRING(BGl_string1901z00zzengine_paramz00,
		BgL_bgl_string1901za700za7za7e2232za7, "JVM classpath", 13);
	      DEFINE_STRING(BGl_string1891z00zzengine_paramz00,
		BgL_bgl_string1891za700za7za7e2233za7,
		"Shall we produce reflection code for classes", 44);
	      DEFINE_STRING(BGl_string1902z00zzengine_paramz00,
		BgL_bgl_string1902za700za7za7e2234za7, "JVM main class", 14);
	      DEFINE_STRING(BGl_string1892z00zzengine_paramz00,
		BgL_bgl_string1892za700za7za7e2235za7,
		"Shall we produce class-nil function for classes", 47);
	      DEFINE_STRING(BGl_string2003z00zzengine_paramz00,
		BgL_bgl_string2003za700za7za7e2236za7,
		"An optional function that pre-processes the source file", 55);
	      DEFINE_STRING(BGl_string1903z00zzengine_paramz00,
		BgL_bgl_string1903za700za7za7e2237za7, "JVM jarpath", 11);
	      DEFINE_STRING(BGl_string1893z00zzengine_paramz00,
		BgL_bgl_string1893za700za7za7e2238za7, "Stop after the pass", 19);
	      DEFINE_STRING(BGl_string2004z00zzengine_paramz00,
		BgL_bgl_string2004za700za7za7e2239za7, "The load path", 13);
	      DEFINE_STRING(BGl_string1904z00zzengine_paramz00,
		BgL_bgl_string1904za700za7za7e2240za7, "JVM object directory", 20);
	      DEFINE_STRING(BGl_string1894z00zzengine_paramz00,
		BgL_bgl_string1894za700za7za7e2241za7,
		"Enable/disable a JAR file production for the JVM back-end", 57);
	      DEFINE_STRING(BGl_string2005z00zzengine_paramz00,
		BgL_bgl_string2005za700za7za7e2242za7, "The user specific compilation pass",
		34);
	      DEFINE_STRING(BGl_string1905z00zzengine_paramz00,
		BgL_bgl_string1905za700za7za7e2243za7, "Catch internal errors", 21);
	      DEFINE_STRING(BGl_string1895z00zzengine_paramz00,
		BgL_bgl_string1895za700za7za7e2244za7,
		"Shell to be used when producing JVM run scripts", 47);
	      DEFINE_STRING(BGl_string2006z00zzengine_paramz00,
		BgL_bgl_string2006za700za7za7e2245za7,
		"   All the Bigloo control variables can be changed from the", 59);
	      DEFINE_STRING(BGl_string1906z00zzengine_paramz00,
		BgL_bgl_string1906za700za7za7e2246za7,
		"Enable JVM class constructors to initiliaze bigloo modules", 58);
	      DEFINE_STRING(BGl_string2007z00zzengine_paramz00,
		BgL_bgl_string2007za700za7za7e2247za7,
		"   interpreter, by the means of the `-eval' option, or using", 60);
	      DEFINE_STRING(BGl_string1907z00zzengine_paramz00,
		BgL_bgl_string1907za700za7za7e2248za7, ".NET object file linker", 23);
	      DEFINE_STRING(BGl_string1897z00zzengine_paramz00,
		BgL_bgl_string1897za700za7za7e2249za7,
		"JVM to be used to run Java programs", 35);
	      DEFINE_STRING(BGl_string2008z00zzengine_paramz00,
		BgL_bgl_string2008za700za7za7e2250za7,
		"   the module clause `option'. For instance the option", 54);
	      DEFINE_STRING(BGl_string2010z00zzengine_paramz00,
		BgL_bgl_string2010za700za7za7e2251za7, "   `*strip*' to the value `#t'.",
		31);
	      DEFINE_STRING(BGl_string2009z00zzengine_paramz00,
		BgL_bgl_string2009za700za7za7e2252za7,
		"   \"-eval '(set! *strip* #t)'\" will set the variable", 52);
	      DEFINE_STRING(BGl_string1909z00zzengine_paramz00,
		BgL_bgl_string1909za700za7za7e2253za7, ".NET object file linker style", 29);
	      DEFINE_STRING(BGl_string1899z00zzengine_paramz00,
		BgL_bgl_string1899za700za7za7e2254za7, "JVM options", 11);
	      DEFINE_STRING(BGl_string2011z00zzengine_paramz00,
		BgL_bgl_string2011za700za7za7e2255za7, "   These variables are:", 23);
	      DEFINE_STRING(BGl_string1912z00zzengine_paramz00,
		BgL_bgl_string1912za700za7za7e2256za7,
		"CLR to be used to run .NET programs", 35);
	      DEFINE_STRING(BGl_string2013z00zzengine_paramz00,
		BgL_bgl_string2013za700za7za7e2257za7, "   - ", 5);
	      DEFINE_STRING(BGl_string2014z00zzengine_paramz00,
		BgL_bgl_string2014za700za7za7e2258za7, " : ", 3);
	      DEFINE_STRING(BGl_string1914z00zzengine_paramz00,
		BgL_bgl_string1914za700za7za7e2259za7,
		"CLR style to be used to run .NET programs", 41);
	      DEFINE_STRING(BGl_string2015z00zzengine_paramz00,
		BgL_bgl_string2015za700za7za7e2260za7, "     ", 5);
	      DEFINE_STRING(BGl_string2016z00zzengine_paramz00,
		BgL_bgl_string2016za700za7za7e2261za7, "     default: ", 14);
	      DEFINE_STRING(BGl_string1916z00zzengine_paramz00,
		BgL_bgl_string1916za700za7za7e2262za7,
		"CLR extra options to be used to run .NET programs", 49);
	      DEFINE_STRING(BGl_string2017z00zzengine_paramz00,
		BgL_bgl_string2017za700za7za7e2263za7, " [", 2);
	      DEFINE_STRING(BGl_string2018z00zzengine_paramz00,
		BgL_bgl_string2018za700za7za7e2264za7, "]", 1);
	      DEFINE_STRING(BGl_string1918z00zzengine_paramz00,
		BgL_bgl_string1918za700za7za7e2265za7, "Bigloo.dll path", 15);
	      DEFINE_STRING(BGl_string2020z00zzengine_paramz00,
		BgL_bgl_string2020za700za7za7e2266za7,
		"bigloo-variables-usage ftp-user tar-header-mtime thread-name-set! thread-cleanup add-doc-variable! &security-exception-message nothread-end-exception-set! uncygdrive nothread-body tar-header-devmajor tar-header-name tar-header-devminor &access-control-exception-permission ftp-user-set! epairify* ftp-motd *rest-args* bigloo-date *user-shape?* *typename-shape?* ftp-pass ftp-host-set! &exception-location &exception-stack nothread-%cleanup-set! ftp-port %ftp-cmd &warning-args tar-header-type epairify-propagate tar-header-magic ftp-acct-set! *bigloo-cmd-name* nothread-%specific &error-proc nothread-%cleanup *early-with-modules* tar-header-linkname tar-header-uname *location-shape?* *access-shape?* *bdb-debug-no-line-directives?* &http-status-error-status &index-out-of-bounds-error-index tar-header-size *module-shape?* tar-header-mode thread-specific-set! *type-shape?* %ftp-dtp thread-specific %ftp-dtp-set! &exception-location-set! epairify-rec *param-updaters* string*->string *bigloo-variables* *bigloo-url* ftp-ac"
		"ct reinitialize-bigloo-variables! *tmp-dest* %ftp-passive?-set! *bigloo-email* ftp-host &exception-fname-set! nothread-%specific-set! ftp-motd-set! *key-shape?* &error-msg &error-obj nothread-end-exception *bigloo-author* tar-header-gname tar-header-checksum thread-name *bigloo-args* %ftp-cmd-set! &http-redirection-url tar-header-gid *bigloo-date* ftp-port-set! build-path-from-shell-variable replace! string-split-char &exception-fname *old-load-path* epairify %ftp-passive? *builtin-allocators* &type-error-type thread-cleanup-set! &access-control-exception-obj &exception-stack-set! add-updater! tar-header-uid thread-backend-name ftp-pass-set! nothread-end-result-set! &http-redirection-port *name-shape?* *additional-traces* *genericity* nothread-end-result *user-pass* *load-path* *pre-processor* *allow-type-redefinition* *eval-options* ((\"CONS\" . \"make_pair\") (\"%STRING->SYMBOL\" . \"make_symbol\") (\"%MAKE-STRING\" . \"string_to_bstring_len\") (\"%MAKE-OUTPUT-PORT\" . \"bgl_make_output_port\") (\"%MAKE-INP"
		"UT-PORT\" . \"bgl_make_input_port\") (\"%MAKE-ERROR-PORT\" . \"make_error_port\")) *globalize-integrate-28c* *global-tail-call?* *saw-no-register-allocation-functions* *saw-register-allocation-functions* *saw-register-allocation-max-size* *saw-register-allocation-onexpression?* *saw-register-allocation?* *saw-register-reallocation?* *saw* *target-language* default-back-end *reader* plain *user-heap-size* *ast-case-sensitive* *auto-mode* ((\"ml\" . \"caml\") (\"mli\" . \"caml\") (\"oon\" . \"meroon\") (\"snow\" . \"snow\") (\"spi\" . \"pkgcomp\")) *mco-include-path* (\".\") *mco-suffix* (\"mco\") *obj-suffix* *csharp-suffix* (\"cs\") *c-suffix* (\"c\") *src-suffix* (\"scm\" \"bgl\") *extend-entry* *inlining-reduce-kfactor* *inlining-kfactor* *user-inlining?* *inlining?* *optim-reduce-beta?* *optim-dataflow-types?* *optim-dataflow-for-errors?* *optim-dataflow?* *optim-integrate?* *optim-cfa-flonum-arithmetic?* *optim-cfa-fixnum-arithmetic?* *optim-jvm* *jvm-env* *purify* *optim-symbol-case* *optim-jvm-fasteq* *"
		"optim-jvm-branch* *optim-jvm-peephole* *optim-jvm-constructor-inlining* *optim-jvm-inlining* *optim-O-macro?* *optim-loop-inlining?* *optim-unroll-loop?* *optim* *trace-write-length* *trace-name* *max-c-foreign-arity* *c-split-string* c-string-split *max-c-token-length* *dlopen-init* *object-init-mode* stagged *init-mode* read *lib-mode* *shared-cnst?* *profile-library* *warning-overriden-variables* *warning-overriden-slots* *unsafe-heap* *unsafe-eval* *unsafe-library* *unsafe-version* *unsafe-struct* *unsafe-range* *unsafe-arity* *unsafe-type* *garbage-collector* boehm *module-checksum-object?* *dotnet-tail-funcall* *dotnet-tail-across-modules* *dotnet-tail* *dotnet-pnet-workaround-switch* *dotnet-mono-workaround-switch* *dotnet-external-asm-style* pnet *dotnet-use-external-asm* *dotnet-external-asm* dotnet-asm *dotnet-dll-path* *dotnet-clr-opt* dotnet-clr-opt *dotnet-clr-style* dotnet-clr-style *dotnet-clr* dotnet-clr *dotnet-ld* dotnet-ld *dotnet-ld-style* dotnet-ld-style *dotnet-shell* dotnet-shell *jvm-c"
		"init-module* *jvm-catch* *jvm-directory* *jvm-jarpath* *jvm-path-separator* *jvm-mainclass* *jvm-classpath* *jvm-bigloo-classpath* *jvm-options* *jvm-java* java *jvm-shell* java-shell *jvm-jar?* *pass* ld *class-nil?* *reflection?* *call/cc?* *startup-file* *interpreter* *with-files* *c-files* *o-files* *qualified-type-file-default* *qualified-type-file* *access-file-default* *access-files* *prof-table-name* *profile-mode* *bdb-debug* *jvm-debug* *c-user-foot* *c-user-header* *c-debug-option* c-compiler-debug-option *c-debug-lines-info* *c-debug* *debug-module* *bmem-profiling* *compiler-sharing-debug?* *error-localization* *compiler-debug-trace* *compiler-debug* *indent* c-beautifier *additional-heap-names* *additional-heap-name* *jvm-foreign-class-name* *jvm-foreign-class-id* foreign *heap-dump-names* *heap-jvm-name* *heap-library* *heap-name* *heap-base-name* *additional-include-foreign* *include-foreign* *include-multiple* *additional-bigloo-zips* *bigloo-libraries-c-setup* *additional-bigloo-libraries* *"
		"bigloo-user-lib* user-libraries *double-ld-libs?* *static-all-bigloo?* *static-bigloo?* *bigloo-abort?* have-bigloo-abort *multi-threaded-gc?* *gc-custom?* *gc-lib* gc-lib gc-custom *bigloo-lib* bigloo *lib-src-dir* *lib-dir* *default-lib-dir* library-directory *ld-library-dir* ld-library-dir *strip* *ld-relative* *cc-move* *ld-post-options* *ld-optim-flags* c-linker-optim-flags *ld-debug-option* c-linker-debug-option *ld-o-option* c-linker-o-option *ld-options* *ld-style* c-linker-style *rm-tmp-files* *cc-options* *stdc* *c-object-file-extension* c-object-file-extension *cc-o-option* c-compiler-o-option *cflags-prof* c-prof-flag *cflags-optim* c-compiler-optim-flag *cflags* c-flag *cc* c-compiler *cc-style* c-compiler-style *shell* shell *dest* *src-files* *hello* *verbose* *bigloo-licensing?* *bigloo-tmp* nothing-yet *bigloo-name* *bigloo-specific-version* specific-version *bigloo-version* release-number ",
		5984);
	      DEFINE_STRING(BGl_string2019z00zzengine_paramz00,
		BgL_bgl_string2019za700za7za7e2267za7, "engine_param", 12);
	      DEFINE_STRING(BGl_string1919z00zzengine_paramz00,
		BgL_bgl_string1919za700za7za7e2268za7,
		"Force using and external assembler for .NET code", 48);
	      DEFINE_STRING(BGl_string1921z00zzengine_paramz00,
		BgL_bgl_string1921za700za7za7e2269za7, "Workaround mono 0.23..0.30 bug",
		30);
	      DEFINE_STRING(BGl_string1922z00zzengine_paramz00,
		BgL_bgl_string1922za700za7za7e2270za7, "Workaround pnet switch bug", 26);
	      DEFINE_STRING(BGl_string1923z00zzengine_paramz00,
		BgL_bgl_string1923za700za7za7e2271za7,
		"Enable/disable tail call generations", 36);
	      DEFINE_STRING(BGl_string1924z00zzengine_paramz00,
		BgL_bgl_string1924za700za7za7e2272za7,
		"Enable/disable tail call generations across modules", 51);
	      DEFINE_STRING(BGl_string1925z00zzengine_paramz00,
		BgL_bgl_string1925za700za7za7e2273za7,
		"Enable/disable tail call generations for funcall", 48);
	      DEFINE_STRING(BGl_string1926z00zzengine_paramz00,
		BgL_bgl_string1926za700za7za7e2274za7,
		"Produce a module checksum object (.mco)", 39);
	      DEFINE_STRING(BGl_string1927z00zzengine_paramz00,
		BgL_bgl_string1927za700za7za7e2275za7, "The garbage collector", 21);
	      DEFINE_STRING(BGl_string1928z00zzengine_paramz00,
		BgL_bgl_string1928za700za7za7e2276za7, "Runtime type safety", 19);
	      DEFINE_STRING(BGl_string1930z00zzengine_paramz00,
		BgL_bgl_string1930za700za7za7e2277za7, "Runtime range safety", 20);
	      DEFINE_STRING(BGl_string1929z00zzengine_paramz00,
		BgL_bgl_string1929za700za7za7e2278za7, "Runtime type arity safety", 25);
	      DEFINE_STRING(BGl_string1931z00zzengine_paramz00,
		BgL_bgl_string1931za700za7za7e2279za7, "Runtime struct range safety", 27);
	      DEFINE_STRING(BGl_string1932z00zzengine_paramz00,
		BgL_bgl_string1932za700za7za7e2280za7, "Module version safety", 21);
	      DEFINE_STRING(BGl_string1933z00zzengine_paramz00,
		BgL_bgl_string1933za700za7za7e2281za7, "Use the unsafe library version",
		30);
	      DEFINE_STRING(BGl_string1934z00zzengine_paramz00,
		BgL_bgl_string1934za700za7za7e2282za7,
		"Disable type checking for eval functions", 40);
	      DEFINE_STRING(BGl_string1935z00zzengine_paramz00,
		BgL_bgl_string1935za700za7za7e2283za7, "Disable heap version checking", 29);
	      DEFINE_STRING(BGl_string1936z00zzengine_paramz00,
		BgL_bgl_string1936za700za7za7e2284za7,
		"Set to #t to warn about virtual slot overriding", 47);
	      DEFINE_STRING(BGl_string1937z00zzengine_paramz00,
		BgL_bgl_string1937za700za7za7e2285za7,
		"Set to #t to warn about variable overriding", 43);
	      DEFINE_STRING(BGl_string1938z00zzengine_paramz00,
		BgL_bgl_string1938za700za7za7e2286za7, "Use the profiled library version",
		32);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2passzd2envz00zzengine_paramz00,
		BgL_bgl__ftpza7d2passza7d2za7za72287z00,
		BGl__ftpzd2passzd2zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1940z00zzengine_paramz00,
		BgL_bgl_string1940za700za7za7e2288za7, "Lib-mode compilation?", 21);
	      DEFINE_STRING(BGl_string1939z00zzengine_paramz00,
		BgL_bgl_string1939za700za7za7e2289za7, "Shared constant compilation?", 28);
	      DEFINE_STRING(BGl_string1941z00zzengine_paramz00,
		BgL_bgl_string1941za700za7za7e2290za7, "Module initialization mode", 26);
	      DEFINE_STRING(BGl_string1942z00zzengine_paramz00,
		BgL_bgl_string1942za700za7za7e2291za7, "Object initialization mode", 26);
	      DEFINE_STRING(BGl_string1943z00zzengine_paramz00,
		BgL_bgl_string1943za700za7za7e2292za7,
		"Emit a standard Bigloo dynamic loading init entry point", 55);
	      DEFINE_STRING(BGl_string1944z00zzengine_paramz00,
		BgL_bgl_string1944za700za7za7e2293za7, "Max C token length", 18);
	      DEFINE_STRING(BGl_string1945z00zzengine_paramz00,
		BgL_bgl_string1945za700za7za7e2294za7, "C split long strings", 20);
	      DEFINE_STRING(BGl_string1947z00zzengine_paramz00,
		BgL_bgl_string1947za700za7za7e2295za7, "Max C function arity", 20);
	      DEFINE_STRING(BGl_string1948z00zzengine_paramz00,
		BgL_bgl_string1948za700za7za7e2296za7, "trace", 5);
	      DEFINE_STRING(BGl_string1950z00zzengine_paramz00,
		BgL_bgl_string1950za700za7za7e2297za7, "Trace dumping max level", 23);
	      DEFINE_STRING(BGl_string1949z00zzengine_paramz00,
		BgL_bgl_string1949za700za7za7e2298za7, "Trace file name", 15);
	      DEFINE_STRING(BGl_string1951z00zzengine_paramz00,
		BgL_bgl_string1951za700za7za7e2299za7, "Optimization level", 18);
	      DEFINE_STRING(BGl_string1952z00zzengine_paramz00,
		BgL_bgl_string1952za700za7za7e2300za7, "Loop unrolling optimization", 27);
	      DEFINE_STRING(BGl_string1953z00zzengine_paramz00,
		BgL_bgl_string1953za700za7za7e2301za7, "Loop inlining optimization", 26);
	      DEFINE_STRING(BGl_string1954z00zzengine_paramz00,
		BgL_bgl_string1954za700za7za7e2302za7,
		"Enable optimization by macro-expansion", 38);
	      DEFINE_STRING(BGl_string1955z00zzengine_paramz00,
		BgL_bgl_string1955za700za7za7e2303za7, "Enable JVM inlining", 19);
	      DEFINE_STRING(BGl_string1956z00zzengine_paramz00,
		BgL_bgl_string1956za700za7za7e2304za7,
		"Enable JVM inlining for constructors", 36);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_threadzd2namezd2envz00zzengine_paramz00,
		BgL_bgl__threadza7d2nameza7d2305z00, BGl__threadzd2namezd2zzengine_paramz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1957z00zzengine_paramz00,
		BgL_bgl_string1957za700za7za7e2306za7, "Enable JVM peephole optimization",
		32);
	      DEFINE_STRING(BGl_string1958z00zzengine_paramz00,
		BgL_bgl_string1958za700za7za7e2307za7, "Enable JVM branch tensioning", 28);
	      DEFINE_STRING(BGl_string1960z00zzengine_paramz00,
		BgL_bgl_string1960za700za7za7e2308za7,
		"Optimize case forms descrimining on symbols only", 48);
	      DEFINE_STRING(BGl_string1959z00zzengine_paramz00,
		BgL_bgl_string1959za700za7za7e2309za7,
		"EQ? no longer works on integers (use =FX instead)", 49);
	      DEFINE_STRING(BGl_string1961z00zzengine_paramz00,
		BgL_bgl_string1961za700za7za7e2310za7,
		"Produce byte code verifier compliant JVM code", 45);
	      DEFINE_STRING(BGl_string1962z00zzengine_paramz00,
		BgL_bgl_string1962za700za7za7e2311za7,
		"List of environment variables to be available in the compiled code", 66);
	      DEFINE_STRING(BGl_string1963z00zzengine_paramz00,
		BgL_bgl_string1963za700za7za7e2312za7,
		"Enable optimization by inlining jvm code", 40);
	      DEFINE_STRING(BGl_string1964z00zzengine_paramz00,
		BgL_bgl_string1964za700za7za7e2313za7,
		"Enable refined fixnum arithmetic specialization", 47);
	      DEFINE_STRING(BGl_string1965z00zzengine_paramz00,
		BgL_bgl_string1965za700za7za7e2314za7,
		"Enable refined flonum arithmetic specialization", 47);
	      DEFINE_STRING(BGl_string1966z00zzengine_paramz00,
		BgL_bgl_string1966za700za7za7e2315za7,
		"Enable function integration (closure analysis)", 46);
	      DEFINE_STRING(BGl_string1967z00zzengine_paramz00,
		BgL_bgl_string1967za700za7za7e2316za7,
		"Enable simple dataflow optimization", 35);
	      DEFINE_STRING(BGl_string1968z00zzengine_paramz00,
		BgL_bgl_string1968za700za7za7e2317za7,
		"Enable simple dataflow optimization for eliminating bad error messages",
		70);
	      DEFINE_STRING(BGl_string1970z00zzengine_paramz00,
		BgL_bgl_string1970za700za7za7e2318za7, "Enable simple beta reduction", 28);
	      DEFINE_STRING(BGl_string1969z00zzengine_paramz00,
		BgL_bgl_string1969za700za7za7e2319za7,
		"Enable dataflow optimization for types", 38);
	      DEFINE_STRING(BGl_string1971z00zzengine_paramz00,
		BgL_bgl_string1971za700za7za7e2320za7, "Inlining optimization", 21);
	      DEFINE_STRING(BGl_string1972z00zzengine_paramz00,
		BgL_bgl_string1972za700za7za7e2321za7, "User inlining optimization", 26);
	      DEFINE_STRING(BGl_string1974z00zzengine_paramz00,
		BgL_bgl_string1974za700za7za7e2322za7, "Inlining growth factor", 22);
	      DEFINE_STRING(BGl_string1976z00zzengine_paramz00,
		BgL_bgl_string1976za700za7za7e2323za7, "Inlinine growth factor reductor",
		31);
	      DEFINE_STRING(BGl_string1977z00zzengine_paramz00,
		BgL_bgl_string1977za700za7za7e2324za7, "Extend entry", 12);
	      DEFINE_STRING(BGl_string1978z00zzengine_paramz00,
		BgL_bgl_string1978za700za7za7e2325za7, "Scheme legal suffixes", 21);
	      DEFINE_STRING(BGl_string1980z00zzengine_paramz00,
		BgL_bgl_string1980za700za7za7e2326za7, "C# legal suffixes", 17);
	      DEFINE_STRING(BGl_string1979z00zzengine_paramz00,
		BgL_bgl_string1979za700za7za7e2327za7, "C legal suffixes", 16);
	      DEFINE_STRING(BGl_string1981z00zzengine_paramz00,
		BgL_bgl_string1981za700za7za7e2328za7, "Object legal suffixes", 21);
	      DEFINE_STRING(BGl_string1983z00zzengine_paramz00,
		BgL_bgl_string1983za700za7za7e2329za7,
		"Module checksum object legal suffixes", 37);
	      DEFINE_STRING(BGl_string1984z00zzengine_paramz00,
		BgL_bgl_string1984za700za7za7e2330za7, "Module checksum C include path",
		30);
	      DEFINE_STRING(BGl_string1985z00zzengine_paramz00,
		BgL_bgl_string1985za700za7za7e2331za7, "auto-mode (extend mode) list", 28);
	      DEFINE_STRING(BGl_string1986z00zzengine_paramz00,
		BgL_bgl_string1986za700za7za7e2332za7, "Case sensitivity", 16);
	      DEFINE_STRING(BGl_string1987z00zzengine_paramz00,
		BgL_bgl_string1987za700za7za7e2333za7,
		"Heap size (in MegaByte) or #f for default value", 47);
	      DEFINE_STRING(BGl_string1988z00zzengine_paramz00,
		BgL_bgl_string1988za700za7za7e2334za7,
		"The way the reader reads input file ('plain or 'intern)", 55);
	      DEFINE_STRING(BGl_string1989z00zzengine_paramz00,
		BgL_bgl_string1989za700za7za7e2335za7,
		"The target language (either c, c-saw, jvm, or .net)", 51);
	      DEFINE_STRING(BGl_string1991z00zzengine_paramz00,
		BgL_bgl_string1991za700za7za7e2336za7, "Do we go to the saw-mill?", 25);
	      DEFINE_STRING(BGl_string1992z00zzengine_paramz00,
		BgL_bgl_string1992za700za7za7e2337za7,
		"Enable/disable saw register re-allocation", 41);
	      DEFINE_STRING(BGl_string1993z00zzengine_paramz00,
		BgL_bgl_string1993za700za7za7e2338za7,
		"Enable/disable saw register allocation", 38);
	      DEFINE_STRING(BGl_string1994z00zzengine_paramz00,
		BgL_bgl_string1994za700za7za7e2339za7,
		"Enable/disable saw register allocation on expression", 52);
	      DEFINE_STRING(BGl_string1995z00zzengine_paramz00,
		BgL_bgl_string1995za700za7za7e2340za7,
		"Max function size for optimizing the register allocation", 56);
	      DEFINE_STRING(BGl_string1996z00zzengine_paramz00,
		BgL_bgl_string1996za700za7za7e2341za7,
		"The list of functions allowing register allocation", 50);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tarzd2headerzd2devmajorzd2envzd2zzengine_paramz00,
		BgL_bgl__tarza7d2headerza7d22342z00,
		BGl__tarzd2headerzd2devmajorz00zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1997z00zzengine_paramz00,
		BgL_bgl_string1997za700za7za7e2343za7,
		"The list of functions disabling register allocation", 51);
	      DEFINE_STRING(BGl_string1998z00zzengine_paramz00,
		BgL_bgl_string1998za700za7za7e2344za7,
		"Do we apply the self-global-tail-call stage?", 44);
	      DEFINE_STRING(BGl_string1999z00zzengine_paramz00,
		BgL_bgl_string1999za700za7za7e2345za7,
		"Enable the old closure integration technique (deprecated)", 57);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_threadzd2specificzd2envz00zzengine_paramz00,
		BgL_bgl__threadza7d2specif2346za7,
		BGl__threadzd2specificzd2zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62securityzd2exceptionzd2messagezd2envzb0zzengine_paramz00,
		BgL_bgl__za762securityza7d2e2347z00,
		BGl__z62securityzd2exceptionzd2messagez62zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reinitializa7ezd2bigloozd2variablesz12zd2envz67zzengine_paramz00,
		BgL_bgl__reinitializa7a7eza72348z00,
		BGl__reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62httpzd2redirectionzd2portzd2envzb0zzengine_paramz00,
		BgL_bgl__za762httpza7d2redir2349z00,
		BGl__z62httpzd2redirectionzd2portz62zzengine_paramz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_stringza2zd2ze3stringzd2envz41zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2specificzd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__threadza7d2specif2350za7,
		BGl__threadzd2specificzd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62typezd2errorzd2typezd2envzb0zzengine_paramz00,
		BgL_bgl__za762typeza7d2error2351z00,
		BGl__z62typezd2errorzd2typez62zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62exceptionzd2locationzd2setz12zd2envza2zzengine_paramz00,
		BgL_bgl__za762exceptionza7d22352z00,
		BGl__z62exceptionzd2locationzd2setz12z70zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z62errorzd2proczd2envz62zzengine_paramz00,
		BgL_bgl__za762errorza7d2proc2353z00,
		BGl__z62errorzd2proczb0zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52ftpzd2cmdzd2setz12zd2envz92zzengine_paramz00,
		BgL_bgl__za752ftpza7d2cmdza7d22354za7,
		BGl__z52ftpzd2cmdzd2setz12z40zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2namezd2setz12zd2envzc0zzengine_paramz00,
		BgL_bgl__threadza7d2nameza7d2355z00,
		BGl__threadzd2namezd2setz12z12zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_threadzd2cleanupzd2envz00zzengine_paramz00,
		BgL_bgl__threadza7d2cleanu2356za7,
		BGl__threadzd2cleanupzd2zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2backendzd2namezd2envzd2zzengine_paramz00,
		BgL_bgl__threadza7d2backen2357za7,
		BGl__threadzd2backendzd2namez00zzengine_paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2hostzd2envz00zzengine_paramz00,
		BgL_bgl__ftpza7d2hostza7d2za7za72358z00,
		BGl__ftpzd2hostzd2zzengine_paramz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long
		BgL_checksumz00_1391, char *BgL_fromz00_1392)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_paramz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_paramz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzengine_paramz00();
					BGl_cnstzd2initzd2zzengine_paramz00();
					BGl_importedzd2moduleszd2initz00zzengine_paramz00();
					BGl_evalzd2initzd2zzengine_paramz00();
					BGl_toplevelzd2initzd2zzengine_paramz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_paramz00()
	{
		AN_OBJECT;
		{	/* Engine/param.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_param");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "engine_param");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 0), "engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "engine_param");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzengine_paramz00()
	{
		AN_OBJECT;
		{	/* Engine/param.scm 15 */
			{	/* Engine/param.scm 15 */
				obj_t BgL_cportz00_1297;

				BgL_cportz00_1297 =
					bgl_open_input_string(BGl_string2020z00zzengine_paramz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1298;

					BgL_iz00_1298 = ((long) 338);
				BgL_loopz00_1299:
					if ((BgL_iz00_1298 == ((long) -1)))
						{	/* Engine/param.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Engine/param.scm 15 */
							{	/* Engine/param.scm 15 */
								obj_t BgL_arg2027z00_1301;

								{	/* Engine/param.scm 15 */

									{	/* Engine/param.scm 15 */
										obj_t BgL_locationz00_1303;

										BgL_locationz00_1303 = BBOOL(((bool_t) 0));
										{	/* Engine/param.scm 15 */

											BgL_arg2027z00_1301 =
												BGl_readz00zz__readerz00(BgL_cportz00_1297,
												BgL_locationz00_1303);
										}
									}
								}
								{	/* Engine/param.scm 15 */
									int BgL_auxz00_1417;

									BgL_auxz00_1417 = (int) (BgL_iz00_1298);
									CNST_TABLE_SET(BgL_auxz00_1417, BgL_arg2027z00_1301);
							}}
							{	/* Engine/param.scm 15 */
								int BgL_auxz00_1304;

								BgL_auxz00_1304 = (int) ((BgL_iz00_1298 - ((long) 1)));
								{
									long BgL_iz00_1422;

									BgL_iz00_1422 = (long) (BgL_auxz00_1304);
									BgL_iz00_1298 = BgL_iz00_1422;
									goto BgL_loopz00_1299;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzengine_paramz00()
	{
		AN_OBJECT;
		{	/* Engine/param.scm 15 */
			BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 = BNIL;
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 = BNIL;
			BGl_za2bigloozd2versionza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 0)));
			{	/* Engine/param.scm 304 */
				obj_t BgL_idz00_342;

				BgL_idz00_342 = CNST_TABLE_REF(((long) 1));
				{	/* Engine/param.scm 304 */
					obj_t BgL_arg1677z00_344;

					BgL_arg1677z00_344 =
						MAKE_PAIR(BgL_idz00_342, BGl_string1760z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_344,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1761z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 2)));
			{	/* Engine/param.scm 308 */
				obj_t BgL_idz00_345;

				BgL_idz00_345 = CNST_TABLE_REF(((long) 3));
				{	/* Engine/param.scm 308 */
					obj_t BgL_arg1677z00_347;

					BgL_arg1677z00_347 =
						MAKE_PAIR(BgL_idz00_345, BGl_string1762z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_347,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1763z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			{	/* Engine/param.scm 314 */
				obj_t BgL_list1528z00_96;

				{	/* Engine/param.scm 314 */
					obj_t BgL_arg1530z00_98;

					{	/* Engine/param.scm 314 */
						obj_t BgL_arg1531z00_99;

						{	/* Engine/param.scm 314 */
							obj_t BgL_arg1533z00_101;

							{	/* Engine/param.scm 314 */
								obj_t BgL_arg1534z00_102;

								BgL_arg1534z00_102 =
									MAKE_PAIR(BGl_string1764z00zzengine_paramz00, BNIL);
								BgL_arg1533z00_101 =
									MAKE_PAIR(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
									BgL_arg1534z00_102);
							}
							BgL_arg1531z00_99 =
								MAKE_PAIR(BGl_string1765z00zzengine_paramz00,
								BgL_arg1533z00_101);
						}
						BgL_arg1530z00_98 =
							MAKE_PAIR
							(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
							BgL_arg1531z00_99);
					}
					BgL_list1528z00_96 =
						MAKE_PAIR(BGl_string1766z00zzengine_paramz00, BgL_arg1530z00_98);
				}
				BGl_za2bigloozd2nameza2zd2zzengine_paramz00 =
					BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1528z00_96);
			}
			{	/* Engine/param.scm 312 */
				obj_t BgL_idz00_348;

				BgL_idz00_348 = CNST_TABLE_REF(((long) 4));
				{	/* Engine/param.scm 312 */
					obj_t BgL_arg1677z00_350;

					BgL_arg1677z00_350 =
						MAKE_PAIR(BgL_idz00_348, BGl_string1767z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_350,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1768z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2bigloozd2cmdzd2nameza2z00zzengine_paramz00 =
				CNST_TABLE_REF(((long) 5));
			BGl_za2bigloozd2argsza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 5));
			BGl_za2restzd2argsza2zd2zzengine_paramz00 = BNIL;
			BGl_za2bigloozd2authorza2zd2zzengine_paramz00 =
				BGl_string1769z00zzengine_paramz00;
			BGl_za2bigloozd2emailza2zd2zzengine_paramz00 =
				BGl_string1770z00zzengine_paramz00;
			BGl_za2bigloozd2urlza2zd2zzengine_paramz00 =
				BGl_string1771z00zzengine_paramz00;
			BGl_za2bigloozd2dateza2zd2zzengine_paramz00 =
				BGl_bigloozd2datezd2zztools_datez00();
			{	/* Engine/param.scm 329 */
				obj_t BgL_tmpz00_113;

				BgL_tmpz00_113 =
					BGl_getenvz00zz__osz00(BSTRING_TO_STRING
					(BGl_string1772z00zzengine_paramz00));
				if (STRINGP(BgL_tmpz00_113))
					{	/* Engine/param.scm 330 */
						BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 = BgL_tmpz00_113;
					}
				else
					{	/* Engine/param.scm 330 */
						BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 =
							BGl_oszd2tmpzd2zz__osz00();
					}
			}
			{	/* Engine/param.scm 327 */
				obj_t BgL_idz00_352;

				BgL_idz00_352 = CNST_TABLE_REF(((long) 6));
				{	/* Engine/param.scm 327 */
					obj_t BgL_arg1677z00_354;

					BgL_arg1677z00_354 =
						MAKE_PAIR(BgL_idz00_352, BGl_string1773z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_354,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1774z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 334 */
				obj_t BgL_idz00_356;

				BgL_idz00_356 = CNST_TABLE_REF(((long) 7));
				{	/* Engine/param.scm 334 */
					obj_t BgL_arg1677z00_358;

					BgL_arg1677z00_358 =
						MAKE_PAIR(BgL_idz00_356, BGl_string1775z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_358,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2verboseza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 341 */
				obj_t BgL_idz00_359;

				BgL_idz00_359 = CNST_TABLE_REF(((long) 8));
				{	/* Engine/param.scm 341 */
					obj_t BgL_arg1677z00_361;

					BgL_arg1677z00_361 =
						MAKE_PAIR(BgL_idz00_359, BGl_string1776z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_361,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2helloza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 345 */
				obj_t BgL_idz00_362;

				BgL_idz00_362 = CNST_TABLE_REF(((long) 9));
				{	/* Engine/param.scm 345 */
					obj_t BgL_arg1677z00_364;

					BgL_arg1677z00_364 =
						MAKE_PAIR(BgL_idz00_362, BGl_string1777z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_364,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2srczd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 353 */
				obj_t BgL_idz00_365;

				BgL_idz00_365 = CNST_TABLE_REF(((long) 10));
				{	/* Engine/param.scm 353 */
					obj_t BgL_arg1677z00_367;

					BgL_arg1677z00_367 =
						MAKE_PAIR(BgL_idz00_365, BGl_string1778z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_367,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2tmpzd2destza2zd2zzengine_paramz00 = BFALSE;
			BGl_za2destza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 358 */
				obj_t BgL_idz00_368;

				BgL_idz00_368 = CNST_TABLE_REF(((long) 11));
				{	/* Engine/param.scm 358 */
					obj_t BgL_arg1677z00_370;

					BgL_arg1677z00_370 =
						MAKE_PAIR(BgL_idz00_368, BGl_string1779z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_370,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2shellza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 12)));
			{	/* Engine/param.scm 366 */
				obj_t BgL_idz00_371;

				BgL_idz00_371 = CNST_TABLE_REF(((long) 13));
				{	/* Engine/param.scm 366 */
					obj_t BgL_arg1677z00_373;

					BgL_arg1677z00_373 =
						MAKE_PAIR(BgL_idz00_371, BGl_string1780z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_373,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1781z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cczd2styleza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 14)));
			{	/* Engine/param.scm 370 */
				obj_t BgL_idz00_374;

				BgL_idz00_374 = CNST_TABLE_REF(((long) 15));
				{	/* Engine/param.scm 370 */
					obj_t BgL_arg1677z00_376;

					BgL_arg1677z00_376 =
						MAKE_PAIR(BgL_idz00_374, BGl_string1782z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_376,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1783z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ccza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 16)));
			{	/* Engine/param.scm 374 */
				obj_t BgL_idz00_377;

				BgL_idz00_377 = CNST_TABLE_REF(((long) 17));
				{	/* Engine/param.scm 374 */
					obj_t BgL_arg1677z00_379;

					BgL_arg1677z00_379 =
						MAKE_PAIR(BgL_idz00_377, BGl_string1784z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_379,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1785z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cflagsza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 18)));
			{	/* Engine/param.scm 378 */
				obj_t BgL_idz00_380;

				BgL_idz00_380 = CNST_TABLE_REF(((long) 19));
				{	/* Engine/param.scm 378 */
					obj_t BgL_arg1677z00_382;

					BgL_arg1677z00_382 =
						MAKE_PAIR(BgL_idz00_380, BGl_string1786z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_382,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1787z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cflagszd2optimza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 20)));
			{	/* Engine/param.scm 382 */
				obj_t BgL_idz00_383;

				BgL_idz00_383 = CNST_TABLE_REF(((long) 21));
				{	/* Engine/param.scm 382 */
					obj_t BgL_arg1677z00_385;

					BgL_arg1677z00_385 =
						MAKE_PAIR(BgL_idz00_383, BGl_string1788z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_385,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1789z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cflagszd2profza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 22)));
			{	/* Engine/param.scm 386 */
				obj_t BgL_idz00_386;

				BgL_idz00_386 = CNST_TABLE_REF(((long) 23));
				{	/* Engine/param.scm 386 */
					obj_t BgL_arg1677z00_388;

					BgL_arg1677z00_388 =
						MAKE_PAIR(BgL_idz00_386, BGl_string1790z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_388,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1791z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cczd2ozd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 24)));
			{	/* Engine/param.scm 390 */
				obj_t BgL_idz00_389;

				BgL_idz00_389 = CNST_TABLE_REF(((long) 25));
				{	/* Engine/param.scm 390 */
					obj_t BgL_arg1677z00_391;

					BgL_arg1677z00_391 =
						MAKE_PAIR(BgL_idz00_389, BGl_string1792z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_391,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1793z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 26)));
			{	/* Engine/param.scm 394 */
				obj_t BgL_idz00_392;

				BgL_idz00_392 = CNST_TABLE_REF(((long) 27));
				{	/* Engine/param.scm 394 */
					obj_t BgL_arg1677z00_394;

					BgL_arg1677z00_394 =
						MAKE_PAIR(BgL_idz00_392, BGl_string1794z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_394,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1795z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2stdcza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 398 */
				obj_t BgL_idz00_395;

				BgL_idz00_395 = CNST_TABLE_REF(((long) 28));
				{	/* Engine/param.scm 398 */
					obj_t BgL_arg1677z00_397;

					BgL_arg1677z00_397 =
						MAKE_PAIR(BgL_idz00_395, BGl_string1796z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_397,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2cczd2optionsza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 18)));
			{	/* Engine/param.scm 402 */
				obj_t BgL_idz00_398;

				BgL_idz00_398 = CNST_TABLE_REF(((long) 29));
				{	/* Engine/param.scm 402 */
					obj_t BgL_arg1677z00_400;

					BgL_arg1677z00_400 =
						MAKE_PAIR(BgL_idz00_398, BGl_string1797z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_400,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1798z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 406 */
				obj_t BgL_idz00_401;

				BgL_idz00_401 = CNST_TABLE_REF(((long) 30));
				{	/* Engine/param.scm 406 */
					obj_t BgL_arg1677z00_403;

					BgL_arg1677z00_403 =
						MAKE_PAIR(BgL_idz00_401, BGl_string1799z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_403,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2ldzd2styleza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 31)));
			{	/* Engine/param.scm 410 */
				obj_t BgL_idz00_404;

				BgL_idz00_404 = CNST_TABLE_REF(((long) 32));
				{	/* Engine/param.scm 410 */
					obj_t BgL_arg1677z00_406;

					BgL_arg1677z00_406 =
						MAKE_PAIR(BgL_idz00_404, BGl_string1800z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_406,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1801z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
				BGl_string1802z00zzengine_paramz00;
			{	/* Engine/param.scm 414 */
				obj_t BgL_idz00_407;

				BgL_idz00_407 = CNST_TABLE_REF(((long) 33));
				{	/* Engine/param.scm 414 */
					obj_t BgL_arg1677z00_409;

					BgL_arg1677z00_409 =
						MAKE_PAIR(BgL_idz00_407, BGl_string1803z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_409,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 34)));
			{	/* Engine/param.scm 418 */
				obj_t BgL_idz00_410;

				BgL_idz00_410 = CNST_TABLE_REF(((long) 35));
				{	/* Engine/param.scm 418 */
					obj_t BgL_arg1677z00_412;

					BgL_arg1677z00_412 =
						MAKE_PAIR(BgL_idz00_410, BGl_string1804z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_412,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1805z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 36)));
			{	/* Engine/param.scm 422 */
				obj_t BgL_idz00_413;

				BgL_idz00_413 = CNST_TABLE_REF(((long) 37));
				{	/* Engine/param.scm 422 */
					obj_t BgL_arg1677z00_415;

					BgL_arg1677z00_415 =
						MAKE_PAIR(BgL_idz00_413, BGl_string1806z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_415,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1807z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 38)));
			{	/* Engine/param.scm 426 */
				obj_t BgL_idz00_416;

				BgL_idz00_416 = CNST_TABLE_REF(((long) 39));
				{	/* Engine/param.scm 426 */
					obj_t BgL_arg1677z00_418;

					BgL_arg1677z00_418 =
						MAKE_PAIR(BgL_idz00_416, BGl_string1808z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_418,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1809z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00 =
				BGl_string1802z00zzengine_paramz00;
			{	/* Engine/param.scm 430 */
				obj_t BgL_idz00_419;

				BgL_idz00_419 = CNST_TABLE_REF(((long) 40));
				{	/* Engine/param.scm 430 */
					obj_t BgL_arg1677z00_421;

					BgL_arg1677z00_421 =
						MAKE_PAIR(BgL_idz00_419, BGl_string1810z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_421,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2cczd2moveza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 434 */
				obj_t BgL_idz00_422;

				BgL_idz00_422 = CNST_TABLE_REF(((long) 41));
				{	/* Engine/param.scm 434 */
					obj_t BgL_arg1677z00_424;

					BgL_arg1677z00_424 =
						MAKE_PAIR(BgL_idz00_422, BGl_string1811z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_424,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2ldzd2relativeza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 438 */
				obj_t BgL_idz00_425;

				BgL_idz00_425 = CNST_TABLE_REF(((long) 42));
				{	/* Engine/param.scm 438 */
					obj_t BgL_arg1677z00_427;

					BgL_arg1677z00_427 =
						MAKE_PAIR(BgL_idz00_425, BGl_string1812z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_427,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2stripza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 442 */
				obj_t BgL_idz00_428;

				BgL_idz00_428 = CNST_TABLE_REF(((long) 43));
				{	/* Engine/param.scm 442 */
					obj_t BgL_arg1677z00_430;

					BgL_arg1677z00_430 =
						MAKE_PAIR(BgL_idz00_428, BGl_string1813z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_430,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 44)));
			{	/* Engine/param.scm 446 */
				obj_t BgL_idz00_431;

				BgL_idz00_431 = CNST_TABLE_REF(((long) 45));
				{	/* Engine/param.scm 446 */
					obj_t BgL_arg1677z00_433;

					BgL_arg1677z00_433 =
						MAKE_PAIR(BgL_idz00_431, BGl_string1814z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_433,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1815z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 46)));
			{	/* Engine/param.scm 450 */
				obj_t BgL_idz00_434;

				BgL_idz00_434 = CNST_TABLE_REF(((long) 47));
				{	/* Engine/param.scm 450 */
					obj_t BgL_arg1677z00_436;

					BgL_arg1677z00_436 =
						MAKE_PAIR(BgL_idz00_434, BGl_string1816z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_436,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1817z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			{	/* Engine/param.scm 456 */
				obj_t BgL_libzd2envzd2_165;

				BgL_libzd2envzd2_165 =
					BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00
					(BGl_string1818z00zzengine_paramz00);
				if (PAIRP(BgL_libzd2envzd2_165))
					{	/* Engine/param.scm 457 */
						BGl_za2libzd2dirza2zd2zzengine_paramz00 =
							MAKE_PAIR(BGl_string1819z00zzengine_paramz00,
							BgL_libzd2envzd2_165);
					}
				else
					{	/* Engine/param.scm 458 */
						obj_t BgL_list1579z00_167;

						{	/* Engine/param.scm 458 */
							obj_t BgL_arg1581z00_169;

							BgL_arg1581z00_169 =
								MAKE_PAIR(BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00,
								BNIL);
							BgL_list1579z00_167 =
								MAKE_PAIR(BGl_string1819z00zzengine_paramz00,
								BgL_arg1581z00_169);
						}
						BGl_za2libzd2dirza2zd2zzengine_paramz00 = BgL_list1579z00_167;
					}
			}
			{	/* Engine/param.scm 454 */
				obj_t BgL_idz00_440;

				BgL_idz00_440 = CNST_TABLE_REF(((long) 48));
				{	/* Engine/param.scm 454 */
					obj_t BgL_arg1677z00_442;

					BgL_arg1677z00_442 =
						MAKE_PAIR(BgL_idz00_440, BGl_string1820z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_442,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1821z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2libzd2srczd2dirza2z00zzengine_paramz00 =
				BGl_makezd2filezd2namez00zz__osz00(CAR
				(BGl_za2libzd2dirza2zd2zzengine_paramz00),
				BGl_string1822z00zzengine_paramz00);
			{	/* Engine/param.scm 461 */
				obj_t BgL_idz00_447;

				BgL_idz00_447 = CNST_TABLE_REF(((long) 49));
				{	/* Engine/param.scm 461 */
					obj_t BgL_arg1677z00_449;

					BgL_arg1677z00_449 =
						MAKE_PAIR(BgL_idz00_447, BGl_string1820z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_449,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1823z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2bigloozd2libza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 50));
			{	/* Engine/param.scm 465 */
				obj_t BgL_idz00_451;

				BgL_idz00_451 = CNST_TABLE_REF(((long) 51));
				{	/* Engine/param.scm 465 */
					obj_t BgL_arg1677z00_453;

					BgL_arg1677z00_453 =
						MAKE_PAIR(BgL_idz00_451, BGl_string1824z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_453,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 471 */
				bool_t BgL_testz00_1605;

				{	/* Engine/param.scm 471 */
					obj_t BgL_auxz00_1606;

					BgL_auxz00_1606 =
						BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 52)));
					BgL_testz00_1605 = STRINGP(BgL_auxz00_1606);
				}
				if (BgL_testz00_1605)
					{	/* Engine/param.scm 472 */
						obj_t BgL_arg1596z00_186;

						BgL_arg1596z00_186 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									52)));
						{	/* Engine/param.scm 472 */
							obj_t BgL_stringz00_455;

							BgL_stringz00_455 = BgL_arg1596z00_186;
							BGl_za2gczd2libza2zd2zzengine_paramz00 =
								string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_455));
					}}
				else
					{	/* Engine/param.scm 473 */
						obj_t BgL_arg1597z00_187;

						BgL_arg1597z00_187 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									53)));
						{	/* Engine/param.scm 473 */
							obj_t BgL_stringz00_456;

							BgL_stringz00_456 = BgL_arg1597z00_187;
							BGl_za2gczd2libza2zd2zzengine_paramz00 =
								string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_456));
			}}}
			{	/* Engine/param.scm 469 */
				obj_t BgL_idz00_457;

				BgL_idz00_457 = CNST_TABLE_REF(((long) 54));
				{	/* Engine/param.scm 469 */
					obj_t BgL_arg1677z00_459;

					BgL_arg1677z00_459 =
						MAKE_PAIR(BgL_idz00_457, BGl_string1825z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_459,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1826z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2gczd2customzf3za2z21zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 52)));
			{	/* Engine/param.scm 475 */
				obj_t BgL_idz00_463;

				BgL_idz00_463 = CNST_TABLE_REF(((long) 55));
				{	/* Engine/param.scm 475 */
					obj_t BgL_arg1677z00_465;

					BgL_arg1677z00_465 =
						MAKE_PAIR(BgL_idz00_463, BGl_string1827z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_465,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1828z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 479 */
				obj_t BgL_idz00_466;

				BgL_idz00_466 = CNST_TABLE_REF(((long) 56));
				{	/* Engine/param.scm 479 */
					obj_t BgL_arg1677z00_468;

					BgL_arg1677z00_468 =
						MAKE_PAIR(BgL_idz00_466, BGl_string1829z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_468,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 57)));
			{	/* Engine/param.scm 483 */
				obj_t BgL_idz00_469;

				BgL_idz00_469 = CNST_TABLE_REF(((long) 58));
				{	/* Engine/param.scm 483 */
					obj_t BgL_arg1677z00_471;

					BgL_arg1677z00_471 =
						MAKE_PAIR(BgL_idz00_469, BGl_string1830z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_471,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1831z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 487 */
				obj_t BgL_idz00_472;

				BgL_idz00_472 = CNST_TABLE_REF(((long) 59));
				{	/* Engine/param.scm 487 */
					obj_t BgL_arg1677z00_474;

					BgL_arg1677z00_474 =
						MAKE_PAIR(BgL_idz00_472, BGl_string1832z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_474,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 491 */
				obj_t BgL_idz00_475;

				BgL_idz00_475 = CNST_TABLE_REF(((long) 60));
				{	/* Engine/param.scm 491 */
					obj_t BgL_arg1677z00_477;

					BgL_arg1677z00_477 =
						MAKE_PAIR(BgL_idz00_475, BGl_string1833z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_477,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 495 */
				obj_t BgL_idz00_478;

				BgL_idz00_478 = CNST_TABLE_REF(((long) 61));
				{	/* Engine/param.scm 495 */
					obj_t BgL_arg1677z00_480;

					BgL_arg1677z00_480 =
						MAKE_PAIR(BgL_idz00_478, BGl_string1834z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_480,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00 =
				BGl_stringzd2splitzd2charz00zztools_miscz00
				(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 62))),
				BCHAR(((unsigned char) ' ')));
			{	/* Engine/param.scm 499 */
				obj_t BgL_idz00_481;

				BgL_idz00_481 = CNST_TABLE_REF(((long) 63));
				{	/* Engine/param.scm 499 */
					obj_t BgL_arg1677z00_483;

					BgL_arg1677z00_483 =
						MAKE_PAIR(BgL_idz00_481, BGl_string1835z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_483,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1836z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 503 */
				obj_t BgL_idz00_484;

				BgL_idz00_484 = CNST_TABLE_REF(((long) 64));
				{	/* Engine/param.scm 503 */
					obj_t BgL_arg1677z00_486;

					BgL_arg1677z00_486 =
						MAKE_PAIR(BgL_idz00_484, BGl_string1837z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_486,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 507 */
				obj_t BgL_idz00_487;

				BgL_idz00_487 = CNST_TABLE_REF(((long) 65));
				{	/* Engine/param.scm 507 */
					obj_t BgL_arg1677z00_489;

					BgL_arg1677z00_489 =
						MAKE_PAIR(BgL_idz00_487, BGl_string1838z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_489,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 511 */
				obj_t BgL_idz00_490;

				BgL_idz00_490 = CNST_TABLE_REF(((long) 66));
				{	/* Engine/param.scm 511 */
					obj_t BgL_arg1677z00_492;

					BgL_arg1677z00_492 =
						MAKE_PAIR(BgL_idz00_490, BGl_string1839z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_492,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00 =
				BGl_za2loadzd2pathza2zd2zz__evalz00;
			BGl_za2loadzd2pathza2zd2zz__evalz00 =
				bgl_append2(BGl_za2loadzd2pathza2zd2zz__evalz00,
				BGl_za2libzd2dirza2zd2zzengine_paramz00);
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1840z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2includezd2multipleza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 521 */
				obj_t BgL_idz00_493;

				BgL_idz00_493 = CNST_TABLE_REF(((long) 67));
				{	/* Engine/param.scm 521 */
					obj_t BgL_arg1677z00_495;

					BgL_arg1677z00_495 =
						MAKE_PAIR(BgL_idz00_493, BGl_string1841z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_495,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 527 */
				obj_t BgL_list1616z00_210;

				BgL_list1616z00_210 =
					MAKE_PAIR(BGl_string1842z00zzengine_paramz00, BNIL);
				BGl_za2includezd2foreignza2zd2zzengine_paramz00 = BgL_list1616z00_210;
			}
			{	/* Engine/param.scm 525 */
				obj_t BgL_idz00_498;

				BgL_idz00_498 = CNST_TABLE_REF(((long) 68));
				{	/* Engine/param.scm 525 */
					obj_t BgL_arg1677z00_500;

					BgL_arg1677z00_500 =
						MAKE_PAIR(BgL_idz00_498, BGl_string1843z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_500,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1844z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 529 */
				obj_t BgL_idz00_503;

				BgL_idz00_503 = CNST_TABLE_REF(((long) 69));
				{	/* Engine/param.scm 529 */
					obj_t BgL_arg1677z00_505;

					BgL_arg1677z00_505 =
						MAKE_PAIR(BgL_idz00_503, BGl_string1845z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_505,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00 =
				BGl_string1846z00zzengine_paramz00;
			{	/* Engine/param.scm 533 */
				obj_t BgL_idz00_506;

				BgL_idz00_506 = CNST_TABLE_REF(((long) 70));
				{	/* Engine/param.scm 533 */
					obj_t BgL_arg1677z00_508;

					BgL_arg1677z00_508 =
						MAKE_PAIR(BgL_idz00_506, BGl_string1847z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_508,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2heapzd2nameza2zd2zzengine_paramz00 =
				string_append(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00,
				BGl_string1848z00zzengine_paramz00);
			{	/* Engine/param.scm 537 */
				obj_t BgL_idz00_509;

				BgL_idz00_509 = CNST_TABLE_REF(((long) 71));
				{	/* Engine/param.scm 537 */
					obj_t BgL_arg1677z00_511;

					BgL_arg1677z00_511 =
						MAKE_PAIR(BgL_idz00_509, BGl_string1849z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_511,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1850z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2heapzd2libraryza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 50));
			{	/* Engine/param.scm 541 */
				obj_t BgL_idz00_512;

				BgL_idz00_512 = CNST_TABLE_REF(((long) 72));
				{	/* Engine/param.scm 541 */
					obj_t BgL_arg1677z00_514;

					BgL_arg1677z00_514 =
						MAKE_PAIR(BgL_idz00_512, BGl_string1851z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_514,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00 =
				string_append(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00,
				BGl_string1852z00zzengine_paramz00);
			{	/* Engine/param.scm 545 */
				obj_t BgL_idz00_515;

				BgL_idz00_515 = CNST_TABLE_REF(((long) 73));
				{	/* Engine/param.scm 545 */
					obj_t BgL_arg1677z00_517;

					BgL_arg1677z00_517 =
						MAKE_PAIR(BgL_idz00_515, BGl_string1853z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_517,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1854z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 549 */
				obj_t BgL_idz00_518;

				BgL_idz00_518 = CNST_TABLE_REF(((long) 74));
				{	/* Engine/param.scm 549 */
					obj_t BgL_arg1677z00_520;

					BgL_arg1677z00_520 =
						MAKE_PAIR(BgL_idz00_518, BGl_string1855z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_520,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 75));
			{	/* Engine/param.scm 553 */
				obj_t BgL_idz00_521;

				BgL_idz00_521 = CNST_TABLE_REF(((long) 76));
				{	/* Engine/param.scm 553 */
					obj_t BgL_arg1677z00_523;

					BgL_arg1677z00_523 =
						MAKE_PAIR(BgL_idz00_521, BGl_string1856z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_523,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00 =
				BGl_string1857z00zzengine_paramz00;
			{	/* Engine/param.scm 557 */
				obj_t BgL_idz00_524;

				BgL_idz00_524 = CNST_TABLE_REF(((long) 77));
				{	/* Engine/param.scm 557 */
					obj_t BgL_arg1677z00_526;

					BgL_arg1677z00_526 =
						MAKE_PAIR(BgL_idz00_524, BGl_string1858z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_526,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 561 */
				obj_t BgL_idz00_527;

				BgL_idz00_527 = CNST_TABLE_REF(((long) 78));
				{	/* Engine/param.scm 561 */
					obj_t BgL_arg1677z00_529;

					BgL_arg1677z00_529 =
						MAKE_PAIR(BgL_idz00_527, BGl_string1859z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_529,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 565 */
				obj_t BgL_idz00_530;

				BgL_idz00_530 = CNST_TABLE_REF(((long) 79));
				{	/* Engine/param.scm 565 */
					obj_t BgL_arg1677z00_532;

					BgL_arg1677z00_532 =
						MAKE_PAIR(BgL_idz00_530, BGl_string1860z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_532,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2indentza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 80)));
			{	/* Engine/param.scm 569 */
				obj_t BgL_idz00_533;

				BgL_idz00_533 = CNST_TABLE_REF(((long) 81));
				{	/* Engine/param.scm 569 */
					obj_t BgL_arg1677z00_535;

					BgL_arg1677z00_535 =
						MAKE_PAIR(BgL_idz00_533, BGl_string1861z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_535,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1862z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2compilerzd2debugza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 573 */
				obj_t BgL_idz00_536;

				BgL_idz00_536 = CNST_TABLE_REF(((long) 82));
				{	/* Engine/param.scm 573 */
					obj_t BgL_arg1677z00_538;

					BgL_arg1677z00_538 =
						MAKE_PAIR(BgL_idz00_536, BGl_string1863z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_538,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 577 */
				obj_t BgL_idz00_539;

				BgL_idz00_539 = CNST_TABLE_REF(((long) 83));
				{	/* Engine/param.scm 577 */
					obj_t BgL_arg1677z00_541;

					BgL_arg1677z00_541 =
						MAKE_PAIR(BgL_idz00_539, BGl_string1864z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_541,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 581 */
				obj_t BgL_idz00_542;

				BgL_idz00_542 = CNST_TABLE_REF(((long) 84));
				{	/* Engine/param.scm 581 */
					obj_t BgL_arg1677z00_544;

					BgL_arg1677z00_544 =
						MAKE_PAIR(BgL_idz00_542, BGl_string1865z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_544,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 584 */
				obj_t BgL_idz00_545;

				BgL_idz00_545 = CNST_TABLE_REF(((long) 85));
				{	/* Engine/param.scm 584 */
					obj_t BgL_arg1677z00_547;

					BgL_arg1677z00_547 =
						MAKE_PAIR(BgL_idz00_545, BGl_string1866z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_547,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bmemzd2profilingza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 588 */
				obj_t BgL_idz00_548;

				BgL_idz00_548 = CNST_TABLE_REF(((long) 86));
				{	/* Engine/param.scm 588 */
					obj_t BgL_arg1677z00_550;

					BgL_arg1677z00_550 =
						MAKE_PAIR(BgL_idz00_548, BGl_string1867z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_550,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2debugzd2moduleza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 592 */
				obj_t BgL_idz00_551;

				BgL_idz00_551 = CNST_TABLE_REF(((long) 87));
				{	/* Engine/param.scm 592 */
					obj_t BgL_arg1677z00_553;

					BgL_arg1677z00_553 =
						MAKE_PAIR(BgL_idz00_551, BGl_string1868z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_553,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2debugza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 596 */
				obj_t BgL_idz00_554;

				BgL_idz00_554 = CNST_TABLE_REF(((long) 88));
				{	/* Engine/param.scm 596 */
					obj_t BgL_arg1677z00_556;

					BgL_arg1677z00_556 =
						MAKE_PAIR(BgL_idz00_554, BGl_string1869z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_556,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 600 */
				obj_t BgL_idz00_557;

				BgL_idz00_557 = CNST_TABLE_REF(((long) 89));
				{	/* Engine/param.scm 600 */
					obj_t BgL_arg1677z00_559;

					BgL_arg1677z00_559 =
						MAKE_PAIR(BgL_idz00_557, BGl_string1870z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_559,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2debugzd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 90)));
			{	/* Engine/param.scm 604 */
				obj_t BgL_idz00_560;

				BgL_idz00_560 = CNST_TABLE_REF(((long) 91));
				{	/* Engine/param.scm 604 */
					obj_t BgL_arg1677z00_562;

					BgL_arg1677z00_562 =
						MAKE_PAIR(BgL_idz00_560, BGl_string1871z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_562,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1872z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2czd2userzd2headerza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 608 */
				obj_t BgL_idz00_563;

				BgL_idz00_563 = CNST_TABLE_REF(((long) 92));
				{	/* Engine/param.scm 608 */
					obj_t BgL_arg1677z00_565;

					BgL_arg1677z00_565 =
						MAKE_PAIR(BgL_idz00_563, BGl_string1873z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_565,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2userzd2footza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 612 */
				obj_t BgL_idz00_566;

				BgL_idz00_566 = CNST_TABLE_REF(((long) 93));
				{	/* Engine/param.scm 612 */
					obj_t BgL_arg1677z00_568;

					BgL_arg1677z00_568 =
						MAKE_PAIR(BgL_idz00_566, BGl_string1874z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_568,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2debugza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 616 */
				obj_t BgL_idz00_569;

				BgL_idz00_569 = CNST_TABLE_REF(((long) 94));
				{	/* Engine/param.scm 616 */
					obj_t BgL_arg1677z00_571;

					BgL_arg1677z00_571 =
						MAKE_PAIR(BgL_idz00_569, BGl_string1875z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_571,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bdbzd2debugza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 620 */
				obj_t BgL_idz00_572;

				BgL_idz00_572 = CNST_TABLE_REF(((long) 95));
				{	/* Engine/param.scm 620 */
					obj_t BgL_arg1677z00_574;

					BgL_arg1677z00_574 =
						MAKE_PAIR(BgL_idz00_572, BGl_string1876z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_574,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00 =
				BFALSE;
			BGl_za2profilezd2modeza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 625 */
				obj_t BgL_idz00_575;

				BgL_idz00_575 = CNST_TABLE_REF(((long) 96));
				{	/* Engine/param.scm 625 */
					obj_t BgL_arg1677z00_577;

					BgL_arg1677z00_577 =
						MAKE_PAIR(BgL_idz00_575, BGl_string1877z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_577,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00 =
				BGl_string1878z00zzengine_paramz00;
			{	/* Engine/param.scm 629 */
				obj_t BgL_idz00_578;

				BgL_idz00_578 = CNST_TABLE_REF(((long) 97));
				{	/* Engine/param.scm 629 */
					obj_t BgL_arg1677z00_580;

					BgL_arg1677z00_580 =
						MAKE_PAIR(BgL_idz00_578, BGl_string1879z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_580,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2accesszd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 636 */
				obj_t BgL_idz00_581;

				BgL_idz00_581 = CNST_TABLE_REF(((long) 98));
				{	/* Engine/param.scm 636 */
					obj_t BgL_arg1677z00_583;

					BgL_arg1677z00_583 =
						MAKE_PAIR(BgL_idz00_581, BGl_string1880z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_583,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00 =
				BGl_string1881z00zzengine_paramz00;
			{	/* Engine/param.scm 639 */
				obj_t BgL_idz00_584;

				BgL_idz00_584 = CNST_TABLE_REF(((long) 99));
				{	/* Engine/param.scm 639 */
					obj_t BgL_arg1677z00_586;

					BgL_arg1677z00_586 =
						MAKE_PAIR(BgL_idz00_584, BGl_string1882z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_586,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 643 */
				obj_t BgL_idz00_587;

				BgL_idz00_587 = CNST_TABLE_REF(((long) 100));
				{	/* Engine/param.scm 643 */
					obj_t BgL_arg1677z00_589;

					BgL_arg1677z00_589 =
						MAKE_PAIR(BgL_idz00_587, BGl_string1883z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_589,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00 =
				BGl_string1884z00zzengine_paramz00;
			{	/* Engine/param.scm 646 */
				obj_t BgL_idz00_590;

				BgL_idz00_590 = CNST_TABLE_REF(((long) 101));
				{	/* Engine/param.scm 646 */
					obj_t BgL_arg1677z00_592;

					BgL_arg1677z00_592 =
						MAKE_PAIR(BgL_idz00_590, BGl_string1883z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_592,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2ozd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 653 */
				obj_t BgL_idz00_593;

				BgL_idz00_593 = CNST_TABLE_REF(((long) 102));
				{	/* Engine/param.scm 653 */
					obj_t BgL_arg1677z00_595;

					BgL_arg1677z00_595 =
						MAKE_PAIR(BgL_idz00_593, BGl_string1885z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_595,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 656 */
				obj_t BgL_idz00_596;

				BgL_idz00_596 = CNST_TABLE_REF(((long) 103));
				{	/* Engine/param.scm 656 */
					obj_t BgL_arg1677z00_598;

					BgL_arg1677z00_598 =
						MAKE_PAIR(BgL_idz00_596, BGl_string1886z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_598,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2withzd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 659 */
				obj_t BgL_idz00_599;

				BgL_idz00_599 = CNST_TABLE_REF(((long) 104));
				{	/* Engine/param.scm 659 */
					obj_t BgL_arg1677z00_601;

					BgL_arg1677z00_601 =
						MAKE_PAIR(BgL_idz00_599, BGl_string1887z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_601,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00 = BNIL;
			BGl_za2interpreterza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 667 */
				obj_t BgL_idz00_602;

				BgL_idz00_602 = CNST_TABLE_REF(((long) 105));
				{	/* Engine/param.scm 667 */
					obj_t BgL_arg1677z00_604;

					BgL_arg1677z00_604 =
						MAKE_PAIR(BgL_idz00_602, BGl_string1888z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_604,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2startupzd2fileza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 670 */
				obj_t BgL_idz00_605;

				BgL_idz00_605 = CNST_TABLE_REF(((long) 106));
				{	/* Engine/param.scm 670 */
					obj_t BgL_arg1677z00_607;

					BgL_arg1677z00_607 =
						MAKE_PAIR(BgL_idz00_605, BGl_string1889z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_607,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2callzf2cczf3za2z01zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 673 */
				obj_t BgL_idz00_608;

				BgL_idz00_608 = CNST_TABLE_REF(((long) 107));
				{	/* Engine/param.scm 673 */
					obj_t BgL_arg1677z00_610;

					BgL_arg1677z00_610 =
						MAKE_PAIR(BgL_idz00_608, BGl_string1890z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_610,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2reflectionzf3za2zf3zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 676 */
				obj_t BgL_idz00_611;

				BgL_idz00_611 = CNST_TABLE_REF(((long) 108));
				{	/* Engine/param.scm 676 */
					obj_t BgL_arg1677z00_613;

					BgL_arg1677z00_613 =
						MAKE_PAIR(BgL_idz00_611, BGl_string1891z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_613,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2classzd2nilzf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 679 */
				obj_t BgL_idz00_614;

				BgL_idz00_614 = CNST_TABLE_REF(((long) 109));
				{	/* Engine/param.scm 679 */
					obj_t BgL_arg1677z00_616;

					BgL_arg1677z00_616 =
						MAKE_PAIR(BgL_idz00_614, BGl_string1892z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_616,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2passza2z00zzengine_paramz00 = CNST_TABLE_REF(((long) 110));
			{	/* Engine/param.scm 682 */
				obj_t BgL_idz00_617;

				BgL_idz00_617 = CNST_TABLE_REF(((long) 111));
				{	/* Engine/param.scm 682 */
					obj_t BgL_arg1677z00_619;

					BgL_arg1677z00_619 =
						MAKE_PAIR(BgL_idz00_617, BGl_string1893z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_619,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 685 */
				obj_t BgL_idz00_620;

				BgL_idz00_620 = CNST_TABLE_REF(((long) 112));
				{	/* Engine/param.scm 685 */
					obj_t BgL_arg1677z00_622;

					BgL_arg1677z00_622 =
						MAKE_PAIR(BgL_idz00_620, BGl_string1894z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_622,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2shellza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 113)));
			{	/* Engine/param.scm 688 */
				obj_t BgL_idz00_623;

				BgL_idz00_623 = CNST_TABLE_REF(((long) 114));
				{	/* Engine/param.scm 688 */
					obj_t BgL_arg1677z00_625;

					BgL_arg1677z00_625 =
						MAKE_PAIR(BgL_idz00_623, BGl_string1895z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_625,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1896z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2jvmzd2javaza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 115)));
			{	/* Engine/param.scm 691 */
				obj_t BgL_idz00_626;

				BgL_idz00_626 = CNST_TABLE_REF(((long) 116));
				{	/* Engine/param.scm 691 */
					obj_t BgL_arg1677z00_628;

					BgL_arg1677z00_628 =
						MAKE_PAIR(BgL_idz00_626, BGl_string1897z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_628,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1898z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2jvmzd2optionsza2zd2zzengine_paramz00 =
				BGl_string1802z00zzengine_paramz00;
			{	/* Engine/param.scm 694 */
				obj_t BgL_idz00_629;

				BgL_idz00_629 = CNST_TABLE_REF(((long) 117));
				{	/* Engine/param.scm 694 */
					obj_t BgL_arg1677z00_631;

					BgL_arg1677z00_631 =
						MAKE_PAIR(BgL_idz00_629, BGl_string1899z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_631,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 697 */
				obj_t BgL_idz00_632;

				BgL_idz00_632 = CNST_TABLE_REF(((long) 118));
				{	/* Engine/param.scm 697 */
					obj_t BgL_arg1677z00_634;

					BgL_arg1677z00_634 =
						MAKE_PAIR(BgL_idz00_632, BGl_string1900z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_634,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2classpathza2zd2zzengine_paramz00 =
				BGl_string1819z00zzengine_paramz00;
			{	/* Engine/param.scm 700 */
				obj_t BgL_idz00_635;

				BgL_idz00_635 = CNST_TABLE_REF(((long) 119));
				{	/* Engine/param.scm 700 */
					obj_t BgL_arg1677z00_637;

					BgL_arg1677z00_637 =
						MAKE_PAIR(BgL_idz00_635, BGl_string1901z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_637,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 703 */
				obj_t BgL_idz00_638;

				BgL_idz00_638 = CNST_TABLE_REF(((long) 120));
				{	/* Engine/param.scm 703 */
					obj_t BgL_arg1677z00_640;

					BgL_arg1677z00_640 =
						MAKE_PAIR(BgL_idz00_638, BGl_string1902z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_640,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 706 */
				obj_t BgL_idz00_641;

				BgL_idz00_641 = CNST_TABLE_REF(((long) 121));
				{	/* Engine/param.scm 706 */
					obj_t BgL_arg1677z00_643;

					BgL_arg1677z00_643 =
						MAKE_PAIR(BgL_idz00_641, BGl_string1901z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_643,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 709 */
				obj_t BgL_idz00_644;

				BgL_idz00_644 = CNST_TABLE_REF(((long) 122));
				{	/* Engine/param.scm 709 */
					obj_t BgL_arg1677z00_646;

					BgL_arg1677z00_646 =
						MAKE_PAIR(BgL_idz00_644, BGl_string1903z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_646,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2directoryza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 712 */
				obj_t BgL_idz00_647;

				BgL_idz00_647 = CNST_TABLE_REF(((long) 123));
				{	/* Engine/param.scm 712 */
					obj_t BgL_arg1677z00_649;

					BgL_arg1677z00_649 =
						MAKE_PAIR(BgL_idz00_647, BGl_string1904z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_649,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2catchza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 715 */
				obj_t BgL_idz00_650;

				BgL_idz00_650 = CNST_TABLE_REF(((long) 124));
				{	/* Engine/param.scm 715 */
					obj_t BgL_arg1677z00_652;

					BgL_arg1677z00_652 =
						MAKE_PAIR(BgL_idz00_650, BGl_string1905z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_652,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 718 */
				obj_t BgL_idz00_653;

				BgL_idz00_653 = CNST_TABLE_REF(((long) 125));
				{	/* Engine/param.scm 718 */
					obj_t BgL_arg1677z00_655;

					BgL_arg1677z00_655 =
						MAKE_PAIR(BgL_idz00_653, BGl_string1906z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_655,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dotnetzd2shellza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 126)));
			{	/* Engine/param.scm 721 */
				obj_t BgL_idz00_656;

				BgL_idz00_656 = CNST_TABLE_REF(((long) 127));
				{	/* Engine/param.scm 721 */
					obj_t BgL_arg1677z00_658;

					BgL_arg1677z00_658 =
						MAKE_PAIR(BgL_idz00_656, BGl_string1907z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_658,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1908z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2dotnetzd2ldzd2styleza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 128)));
			{	/* Engine/param.scm 724 */
				obj_t BgL_idz00_659;

				BgL_idz00_659 = CNST_TABLE_REF(((long) 129));
				{	/* Engine/param.scm 724 */
					obj_t BgL_arg1677z00_661;

					BgL_arg1677z00_661 =
						MAKE_PAIR(BgL_idz00_659, BGl_string1909z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_661,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1910z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2dotnetzd2ldza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 130)));
			{	/* Engine/param.scm 727 */
				obj_t BgL_idz00_662;

				BgL_idz00_662 = CNST_TABLE_REF(((long) 131));
				{	/* Engine/param.scm 727 */
					obj_t BgL_arg1677z00_664;

					BgL_arg1677z00_664 =
						MAKE_PAIR(BgL_idz00_662, BGl_string1907z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_664,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1911z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2dotnetzd2clrza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 132)));
			{	/* Engine/param.scm 730 */
				obj_t BgL_idz00_665;

				BgL_idz00_665 = CNST_TABLE_REF(((long) 133));
				{	/* Engine/param.scm 730 */
					obj_t BgL_arg1677z00_667;

					BgL_arg1677z00_667 =
						MAKE_PAIR(BgL_idz00_665, BGl_string1912z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_667,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1913z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2dotnetzd2clrzd2styleza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 134)));
			{	/* Engine/param.scm 733 */
				obj_t BgL_idz00_668;

				BgL_idz00_668 = CNST_TABLE_REF(((long) 135));
				{	/* Engine/param.scm 733 */
					obj_t BgL_arg1677z00_670;

					BgL_arg1677z00_670 =
						MAKE_PAIR(BgL_idz00_668, BGl_string1914z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_670,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1915z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 136)));
			{	/* Engine/param.scm 736 */
				obj_t BgL_idz00_671;

				BgL_idz00_671 = CNST_TABLE_REF(((long) 137));
				{	/* Engine/param.scm 736 */
					obj_t BgL_arg1677z00_673;

					BgL_arg1677z00_673 =
						MAKE_PAIR(BgL_idz00_671, BGl_string1916z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_673,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1917z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2dotnetzd2dllzd2pathza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 739 */
				obj_t BgL_idz00_674;

				BgL_idz00_674 = CNST_TABLE_REF(((long) 138));
				{	/* Engine/param.scm 739 */
					obj_t BgL_arg1677z00_676;

					BgL_arg1677z00_676 =
						MAKE_PAIR(BgL_idz00_674, BGl_string1918z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_676,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dotnetzd2externalzd2asmza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 139)));
			{	/* Engine/param.scm 742 */
				obj_t BgL_idz00_677;

				BgL_idz00_677 = CNST_TABLE_REF(((long) 140));
				{	/* Engine/param.scm 742 */
					obj_t BgL_arg1677z00_679;

					BgL_arg1677z00_679 =
						MAKE_PAIR(BgL_idz00_677, BGl_string1919z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_679,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1920z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2dotnetzd2usezd2externalzd2asmza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 745 */
				obj_t BgL_idz00_680;

				BgL_idz00_680 = CNST_TABLE_REF(((long) 141));
				{	/* Engine/param.scm 745 */
					obj_t BgL_arg1677z00_682;

					BgL_arg1677z00_682 =
						MAKE_PAIR(BgL_idz00_680, BGl_string1919z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_682,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dotnetzd2externalzd2asmzd2styleza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 142));
			{	/* Engine/param.scm 748 */
				obj_t BgL_idz00_683;

				BgL_idz00_683 = CNST_TABLE_REF(((long) 143));
				{	/* Engine/param.scm 748 */
					obj_t BgL_arg1677z00_685;

					BgL_arg1677z00_685 =
						MAKE_PAIR(BgL_idz00_683, BGl_string1919z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_685,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 751 */
				obj_t BgL_idz00_686;

				BgL_idz00_686 = CNST_TABLE_REF(((long) 144));
				{	/* Engine/param.scm 751 */
					obj_t BgL_arg1677z00_688;

					BgL_arg1677z00_688 =
						MAKE_PAIR(BgL_idz00_686, BGl_string1921z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_688,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dotnetzd2pnetzd2workaroundzd2switchza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 754 */
				obj_t BgL_idz00_689;

				BgL_idz00_689 = CNST_TABLE_REF(((long) 145));
				{	/* Engine/param.scm 754 */
					obj_t BgL_arg1677z00_691;

					BgL_arg1677z00_691 =
						MAKE_PAIR(BgL_idz00_689, BGl_string1922z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_691,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dotnetzd2tailza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 757 */
				obj_t BgL_idz00_692;

				BgL_idz00_692 = CNST_TABLE_REF(((long) 146));
				{	/* Engine/param.scm 757 */
					obj_t BgL_arg1677z00_694;

					BgL_arg1677z00_694 =
						MAKE_PAIR(BgL_idz00_692, BGl_string1923z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_694,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dotnetzd2tailzd2acrosszd2modulesza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 760 */
				obj_t BgL_idz00_695;

				BgL_idz00_695 = CNST_TABLE_REF(((long) 147));
				{	/* Engine/param.scm 760 */
					obj_t BgL_arg1677z00_697;

					BgL_arg1677z00_697 =
						MAKE_PAIR(BgL_idz00_695, BGl_string1924z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_697,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 763 */
				obj_t BgL_idz00_698;

				BgL_idz00_698 = CNST_TABLE_REF(((long) 148));
				{	/* Engine/param.scm 763 */
					obj_t BgL_arg1677z00_700;

					BgL_arg1677z00_700 =
						MAKE_PAIR(BgL_idz00_698, BGl_string1925z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_700,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 766 */
				obj_t BgL_idz00_701;

				BgL_idz00_701 = CNST_TABLE_REF(((long) 149));
				{	/* Engine/param.scm 766 */
					obj_t BgL_arg1677z00_703;

					BgL_arg1677z00_703 =
						MAKE_PAIR(BgL_idz00_701, BGl_string1926z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_703,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2garbagezd2collectorza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 150));
			{	/* Engine/param.scm 769 */
				obj_t BgL_idz00_704;

				BgL_idz00_704 = CNST_TABLE_REF(((long) 151));
				{	/* Engine/param.scm 769 */
					obj_t BgL_arg1677z00_706;

					BgL_arg1677z00_706 =
						MAKE_PAIR(BgL_idz00_704, BGl_string1927z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_706,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2typeza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 776 */
				obj_t BgL_idz00_707;

				BgL_idz00_707 = CNST_TABLE_REF(((long) 152));
				{	/* Engine/param.scm 776 */
					obj_t BgL_arg1677z00_709;

					BgL_arg1677z00_709 =
						MAKE_PAIR(BgL_idz00_707, BGl_string1928z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_709,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2arityza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 779 */
				obj_t BgL_idz00_710;

				BgL_idz00_710 = CNST_TABLE_REF(((long) 153));
				{	/* Engine/param.scm 779 */
					obj_t BgL_arg1677z00_712;

					BgL_arg1677z00_712 =
						MAKE_PAIR(BgL_idz00_710, BGl_string1929z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_712,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 782 */
				obj_t BgL_idz00_713;

				BgL_idz00_713 = CNST_TABLE_REF(((long) 154));
				{	/* Engine/param.scm 782 */
					obj_t BgL_arg1677z00_715;

					BgL_arg1677z00_715 =
						MAKE_PAIR(BgL_idz00_713, BGl_string1930z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_715,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2structza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 785 */
				obj_t BgL_idz00_716;

				BgL_idz00_716 = CNST_TABLE_REF(((long) 155));
				{	/* Engine/param.scm 785 */
					obj_t BgL_arg1677z00_718;

					BgL_arg1677z00_718 =
						MAKE_PAIR(BgL_idz00_716, BGl_string1931z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_718,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2versionza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 788 */
				obj_t BgL_idz00_719;

				BgL_idz00_719 = CNST_TABLE_REF(((long) 156));
				{	/* Engine/param.scm 788 */
					obj_t BgL_arg1677z00_721;

					BgL_arg1677z00_721 =
						MAKE_PAIR(BgL_idz00_719, BGl_string1932z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_721,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2libraryza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 791 */
				obj_t BgL_idz00_722;

				BgL_idz00_722 = CNST_TABLE_REF(((long) 157));
				{	/* Engine/param.scm 791 */
					obj_t BgL_arg1677z00_724;

					BgL_arg1677z00_724 =
						MAKE_PAIR(BgL_idz00_722, BGl_string1933z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_724,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2evalza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 794 */
				obj_t BgL_idz00_725;

				BgL_idz00_725 = CNST_TABLE_REF(((long) 158));
				{	/* Engine/param.scm 794 */
					obj_t BgL_arg1677z00_727;

					BgL_arg1677z00_727 =
						MAKE_PAIR(BgL_idz00_725, BGl_string1934z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_727,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2heapza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 797 */
				obj_t BgL_idz00_728;

				BgL_idz00_728 = CNST_TABLE_REF(((long) 159));
				{	/* Engine/param.scm 797 */
					obj_t BgL_arg1677z00_730;

					BgL_arg1677z00_730 =
						MAKE_PAIR(BgL_idz00_728, BGl_string1935z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_730,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 800 */
				obj_t BgL_idz00_731;

				BgL_idz00_731 = CNST_TABLE_REF(((long) 160));
				{	/* Engine/param.scm 800 */
					obj_t BgL_arg1677z00_733;

					BgL_arg1677z00_733 =
						MAKE_PAIR(BgL_idz00_731, BGl_string1936z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_733,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 803 */
				obj_t BgL_idz00_734;

				BgL_idz00_734 = CNST_TABLE_REF(((long) 161));
				{	/* Engine/param.scm 803 */
					obj_t BgL_arg1677z00_736;

					BgL_arg1677z00_736 =
						MAKE_PAIR(BgL_idz00_734, BGl_string1937z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_736,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2profilezd2libraryza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 806 */
				obj_t BgL_idz00_737;

				BgL_idz00_737 = CNST_TABLE_REF(((long) 162));
				{	/* Engine/param.scm 806 */
					obj_t BgL_arg1677z00_739;

					BgL_arg1677z00_739 =
						MAKE_PAIR(BgL_idz00_737, BGl_string1938z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_739,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2modulezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2keyzd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2typezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2accesszd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2locationzd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2userzd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2namezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2genericityza2z00zzengine_paramz00 = BTRUE;
			BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 818 */
				obj_t BgL_idz00_740;

				BgL_idz00_740 = CNST_TABLE_REF(((long) 163));
				{	/* Engine/param.scm 818 */
					obj_t BgL_arg1677z00_742;

					BgL_arg1677z00_742 =
						MAKE_PAIR(BgL_idz00_740, BGl_string1939z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_742,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2libzd2modeza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 821 */
				obj_t BgL_idz00_743;

				BgL_idz00_743 = CNST_TABLE_REF(((long) 164));
				{	/* Engine/param.scm 821 */
					obj_t BgL_arg1677z00_745;

					BgL_arg1677z00_745 =
						MAKE_PAIR(BgL_idz00_743, BGl_string1940z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_745,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2initzd2modeza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 165));
			{	/* Engine/param.scm 824 */
				obj_t BgL_idz00_746;

				BgL_idz00_746 = CNST_TABLE_REF(((long) 166));
				{	/* Engine/param.scm 824 */
					obj_t BgL_arg1677z00_748;

					BgL_arg1677z00_748 =
						MAKE_PAIR(BgL_idz00_746, BGl_string1941z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_748,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 =
				CNST_TABLE_REF(((long) 167));
			{	/* Engine/param.scm 827 */
				obj_t BgL_idz00_749;

				BgL_idz00_749 = CNST_TABLE_REF(((long) 168));
				{	/* Engine/param.scm 827 */
					obj_t BgL_arg1677z00_751;

					BgL_arg1677z00_751 =
						MAKE_PAIR(BgL_idz00_749, BGl_string1942z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_751,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dlopenzd2initza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 830 */
				obj_t BgL_idz00_752;

				BgL_idz00_752 = CNST_TABLE_REF(((long) 169));
				{	/* Engine/param.scm 830 */
					obj_t BgL_arg1677z00_754;

					BgL_arg1677z00_754 =
						MAKE_PAIR(BgL_idz00_752, BGl_string1943z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_754,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00 =
				BINT(((long) 1024));
			{	/* Engine/param.scm 833 */
				obj_t BgL_idz00_755;

				BgL_idz00_755 = CNST_TABLE_REF(((long) 170));
				{	/* Engine/param.scm 833 */
					obj_t BgL_arg1677z00_757;

					BgL_arg1677z00_757 =
						MAKE_PAIR(BgL_idz00_755, BGl_string1944z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_757,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2splitzd2stringza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 171)));
			{	/* Engine/param.scm 836 */
				obj_t BgL_idz00_758;

				BgL_idz00_758 = CNST_TABLE_REF(((long) 172));
				{	/* Engine/param.scm 836 */
					obj_t BgL_arg1677z00_760;

					BgL_arg1677z00_760 =
						MAKE_PAIR(BgL_idz00_758, BGl_string1945z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_760,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1946z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00 =
				BINT(((long) 16));
			{	/* Engine/param.scm 839 */
				obj_t BgL_idz00_761;

				BgL_idz00_761 = CNST_TABLE_REF(((long) 173));
				{	/* Engine/param.scm 839 */
					obj_t BgL_arg1677z00_763;

					BgL_arg1677z00_763 =
						MAKE_PAIR(BgL_idz00_761, BGl_string1947z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_763,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2tracezd2nameza2zd2zzengine_paramz00 =
				BGl_string1948z00zzengine_paramz00;
			{	/* Engine/param.scm 842 */
				obj_t BgL_idz00_764;

				BgL_idz00_764 = CNST_TABLE_REF(((long) 174));
				{	/* Engine/param.scm 842 */
					obj_t BgL_arg1677z00_766;

					BgL_arg1677z00_766 =
						MAKE_PAIR(BgL_idz00_764, BGl_string1949z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_766,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2tracezd2writezd2lengthza2z00zzengine_paramz00 = BINT(((long) 80));
			{	/* Engine/param.scm 845 */
				obj_t BgL_idz00_767;

				BgL_idz00_767 = CNST_TABLE_REF(((long) 175));
				{	/* Engine/param.scm 845 */
					obj_t BgL_arg1677z00_769;

					BgL_arg1677z00_769 =
						MAKE_PAIR(BgL_idz00_767, BGl_string1950z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_769,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2additionalzd2tracesza2zd2zzengine_paramz00 = BNIL;
			BGl_za2optimza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 853 */
				obj_t BgL_idz00_770;

				BgL_idz00_770 = CNST_TABLE_REF(((long) 176));
				{	/* Engine/param.scm 853 */
					obj_t BgL_arg1677z00_772;

					BgL_arg1677z00_772 =
						MAKE_PAIR(BgL_idz00_770, BGl_string1951z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_772,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00 = BUNSPEC;
			{	/* Engine/param.scm 856 */
				obj_t BgL_idz00_773;

				BgL_idz00_773 = CNST_TABLE_REF(((long) 177));
				{	/* Engine/param.scm 856 */
					obj_t BgL_arg1677z00_775;

					BgL_arg1677z00_775 =
						MAKE_PAIR(BgL_idz00_773, BGl_string1952z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_775,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 859 */
				obj_t BgL_idz00_776;

				BgL_idz00_776 = CNST_TABLE_REF(((long) 178));
				{	/* Engine/param.scm 859 */
					obj_t BgL_arg1677z00_778;

					BgL_arg1677z00_778 =
						MAKE_PAIR(BgL_idz00_776, BGl_string1953z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_778,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 862 */
				obj_t BgL_idz00_779;

				BgL_idz00_779 = CNST_TABLE_REF(((long) 179));
				{	/* Engine/param.scm 862 */
					obj_t BgL_arg1677z00_781;

					BgL_arg1677z00_781 =
						MAKE_PAIR(BgL_idz00_779, BGl_string1954z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_781,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2inliningza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 865 */
				obj_t BgL_idz00_782;

				BgL_idz00_782 = CNST_TABLE_REF(((long) 180));
				{	/* Engine/param.scm 865 */
					obj_t BgL_arg1677z00_784;

					BgL_arg1677z00_784 =
						MAKE_PAIR(BgL_idz00_782, BGl_string1955z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_784,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2constructorzd2inliningza2zd2zzengine_paramz00 =
				BINT(((long) 0));
			{	/* Engine/param.scm 868 */
				obj_t BgL_idz00_785;

				BgL_idz00_785 = CNST_TABLE_REF(((long) 181));
				{	/* Engine/param.scm 868 */
					obj_t BgL_arg1677z00_787;

					BgL_arg1677z00_787 =
						MAKE_PAIR(BgL_idz00_785, BGl_string1956z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_787,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2peepholeza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 871 */
				obj_t BgL_idz00_788;

				BgL_idz00_788 = CNST_TABLE_REF(((long) 182));
				{	/* Engine/param.scm 871 */
					obj_t BgL_arg1677z00_790;

					BgL_arg1677z00_790 =
						MAKE_PAIR(BgL_idz00_788, BGl_string1957z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_790,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2branchza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 874 */
				obj_t BgL_idz00_791;

				BgL_idz00_791 = CNST_TABLE_REF(((long) 183));
				{	/* Engine/param.scm 874 */
					obj_t BgL_arg1677z00_793;

					BgL_arg1677z00_793 =
						MAKE_PAIR(BgL_idz00_791, BGl_string1958z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_793,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 877 */
				obj_t BgL_idz00_794;

				BgL_idz00_794 = CNST_TABLE_REF(((long) 184));
				{	/* Engine/param.scm 877 */
					obj_t BgL_arg1677z00_796;

					BgL_arg1677z00_796 =
						MAKE_PAIR(BgL_idz00_794, BGl_string1959z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_796,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 880 */
				obj_t BgL_idz00_797;

				BgL_idz00_797 = CNST_TABLE_REF(((long) 185));
				{	/* Engine/param.scm 880 */
					obj_t BgL_arg1677z00_799;

					BgL_arg1677z00_799 =
						MAKE_PAIR(BgL_idz00_797, BGl_string1960z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_799,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2purifyza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 883 */
				obj_t BgL_idz00_800;

				BgL_idz00_800 = CNST_TABLE_REF(((long) 186));
				{	/* Engine/param.scm 883 */
					obj_t BgL_arg1677z00_802;

					BgL_arg1677z00_802 =
						MAKE_PAIR(BgL_idz00_800, BGl_string1961z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_802,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2envza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 886 */
				obj_t BgL_idz00_803;

				BgL_idz00_803 = CNST_TABLE_REF(((long) 187));
				{	/* Engine/param.scm 886 */
					obj_t BgL_arg1677z00_805;

					BgL_arg1677z00_805 =
						MAKE_PAIR(BgL_idz00_803, BGl_string1962z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_805,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 889 */
				obj_t BgL_idz00_806;

				BgL_idz00_806 = CNST_TABLE_REF(((long) 188));
				{	/* Engine/param.scm 889 */
					obj_t BgL_arg1677z00_808;

					BgL_arg1677z00_808 =
						MAKE_PAIR(BgL_idz00_806, BGl_string1963z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_808,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00 =
				BFALSE;
			{	/* Engine/param.scm 892 */
				obj_t BgL_idz00_809;

				BgL_idz00_809 = CNST_TABLE_REF(((long) 189));
				{	/* Engine/param.scm 892 */
					obj_t BgL_arg1677z00_811;

					BgL_arg1677z00_811 =
						MAKE_PAIR(BgL_idz00_809, BGl_string1964z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_811,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00 =
				BFALSE;
			{	/* Engine/param.scm 895 */
				obj_t BgL_idz00_812;

				BgL_idz00_812 = CNST_TABLE_REF(((long) 190));
				{	/* Engine/param.scm 895 */
					obj_t BgL_arg1677z00_814;

					BgL_arg1677z00_814 =
						MAKE_PAIR(BgL_idz00_812, BGl_string1965z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_814,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2integratezf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 898 */
				obj_t BgL_idz00_815;

				BgL_idz00_815 = CNST_TABLE_REF(((long) 191));
				{	/* Engine/param.scm 898 */
					obj_t BgL_arg1677z00_817;

					BgL_arg1677z00_817 =
						MAKE_PAIR(BgL_idz00_815, BGl_string1966z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_817,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 901 */
				obj_t BgL_idz00_818;

				BgL_idz00_818 = CNST_TABLE_REF(((long) 192));
				{	/* Engine/param.scm 901 */
					obj_t BgL_arg1677z00_820;

					BgL_arg1677z00_820 =
						MAKE_PAIR(BgL_idz00_818, BGl_string1967z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_820,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 904 */
				obj_t BgL_idz00_821;

				BgL_idz00_821 = CNST_TABLE_REF(((long) 193));
				{	/* Engine/param.scm 904 */
					obj_t BgL_arg1677z00_823;

					BgL_arg1677z00_823 =
						MAKE_PAIR(BgL_idz00_821, BGl_string1968z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_823,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 907 */
				obj_t BgL_idz00_824;

				BgL_idz00_824 = CNST_TABLE_REF(((long) 194));
				{	/* Engine/param.scm 907 */
					obj_t BgL_arg1677z00_826;

					BgL_arg1677z00_826 =
						MAKE_PAIR(BgL_idz00_824, BGl_string1969z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_826,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 910 */
				obj_t BgL_idz00_827;

				BgL_idz00_827 = CNST_TABLE_REF(((long) 195));
				{	/* Engine/param.scm 910 */
					obj_t BgL_arg1677z00_829;

					BgL_arg1677z00_829 =
						MAKE_PAIR(BgL_idz00_827, BGl_string1970z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_829,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2inliningzf3za2zf3zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 913 */
				obj_t BgL_idz00_830;

				BgL_idz00_830 = CNST_TABLE_REF(((long) 196));
				{	/* Engine/param.scm 913 */
					obj_t BgL_arg1677z00_832;

					BgL_arg1677z00_832 =
						MAKE_PAIR(BgL_idz00_830, BGl_string1971z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_832,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2userzd2inliningzf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 916 */
				obj_t BgL_idz00_833;

				BgL_idz00_833 = CNST_TABLE_REF(((long) 197));
				{	/* Engine/param.scm 916 */
					obj_t BgL_arg1677z00_835;

					BgL_arg1677z00_835 =
						MAKE_PAIR(BgL_idz00_833, BGl_string1972z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_835,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00 =
				BGl_proc1973z00zzengine_paramz00;
			{	/* Engine/param.scm 919 */
				obj_t BgL_idz00_838;

				BgL_idz00_838 = CNST_TABLE_REF(((long) 198));
				{	/* Engine/param.scm 919 */
					obj_t BgL_arg1677z00_840;

					BgL_arg1677z00_840 =
						MAKE_PAIR(BgL_idz00_838, BGl_string1974z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_840,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00 =
				BGl_proc1975z00zzengine_paramz00;
			{	/* Engine/param.scm 922 */
				obj_t BgL_idz00_843;

				BgL_idz00_843 = CNST_TABLE_REF(((long) 199));
				{	/* Engine/param.scm 922 */
					obj_t BgL_arg1677z00_845;

					BgL_arg1677z00_845 =
						MAKE_PAIR(BgL_idz00_843, BGl_string1976z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_845,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2extendzd2entryza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 929 */
				obj_t BgL_idz00_846;

				BgL_idz00_846 = CNST_TABLE_REF(((long) 200));
				{	/* Engine/param.scm 929 */
					obj_t BgL_arg1677z00_848;

					BgL_arg1677z00_848 =
						MAKE_PAIR(BgL_idz00_846, BGl_string1977z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_848,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2srczd2suffixza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 201));
			{	/* Engine/param.scm 938 */
				obj_t BgL_idz00_849;

				BgL_idz00_849 = CNST_TABLE_REF(((long) 202));
				{	/* Engine/param.scm 938 */
					obj_t BgL_arg1677z00_851;

					BgL_arg1677z00_851 =
						MAKE_PAIR(BgL_idz00_849, BGl_string1978z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_851,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2suffixza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 203));
			{	/* Engine/param.scm 947 */
				obj_t BgL_idz00_852;

				BgL_idz00_852 = CNST_TABLE_REF(((long) 204));
				{	/* Engine/param.scm 947 */
					obj_t BgL_arg1677z00_854;

					BgL_arg1677z00_854 =
						MAKE_PAIR(BgL_idz00_852, BGl_string1979z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_854,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2csharpzd2suffixza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 205));
			{	/* Engine/param.scm 957 */
				obj_t BgL_idz00_855;

				BgL_idz00_855 = CNST_TABLE_REF(((long) 206));
				{	/* Engine/param.scm 957 */
					obj_t BgL_arg1677z00_857;

					BgL_arg1677z00_857 =
						MAKE_PAIR(BgL_idz00_855, BGl_string1980z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_857,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 969 */
				obj_t BgL_arg1657z00_261;

				obj_t BgL_arg1659z00_262;

				BgL_arg1657z00_261 = BGl_staticzd2libraryzd2suffixz00zz__osz00();
				BgL_arg1659z00_262 = BGl_sharedzd2libraryzd2suffixz00zz__osz00();
				{	/* Engine/param.scm 968 */
					obj_t BgL_list1660z00_263;

					{	/* Engine/param.scm 968 */
						obj_t BgL_arg1662z00_264;

						{	/* Engine/param.scm 968 */
							obj_t BgL_arg1663z00_265;

							BgL_arg1663z00_265 = MAKE_PAIR(BgL_arg1659z00_262, BNIL);
							BgL_arg1662z00_264 =
								MAKE_PAIR(BgL_arg1657z00_261, BgL_arg1663z00_265);
						}
						BgL_list1660z00_263 =
							MAKE_PAIR
							(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
							BgL_arg1662z00_264);
					}
					BGl_za2objzd2suffixza2zd2zzengine_paramz00 = BgL_list1660z00_263;
			}}
			{	/* Engine/param.scm 966 */
				obj_t BgL_idz00_860;

				BgL_idz00_860 = CNST_TABLE_REF(((long) 207));
				{	/* Engine/param.scm 966 */
					obj_t BgL_arg1677z00_862;

					BgL_arg1677z00_862 =
						MAKE_PAIR(BgL_idz00_860, BGl_string1981z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_862,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1982z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2mcozd2suffixza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 208));
			{	/* Engine/param.scm 977 */
				obj_t BgL_idz00_865;

				BgL_idz00_865 = CNST_TABLE_REF(((long) 209));
				{	/* Engine/param.scm 977 */
					obj_t BgL_arg1677z00_867;

					BgL_arg1677z00_867 =
						MAKE_PAIR(BgL_idz00_865, BGl_string1983z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_867,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00 =
				CNST_TABLE_REF(((long) 210));
			{	/* Engine/param.scm 984 */
				obj_t BgL_idz00_868;

				BgL_idz00_868 = CNST_TABLE_REF(((long) 211));
				{	/* Engine/param.scm 984 */
					obj_t BgL_arg1677z00_870;

					BgL_arg1677z00_870 =
						MAKE_PAIR(BgL_idz00_868, BGl_string1984z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_870,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2autozd2modeza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 212));
			{	/* Engine/param.scm 991 */
				obj_t BgL_idz00_871;

				BgL_idz00_871 = CNST_TABLE_REF(((long) 213));
				{	/* Engine/param.scm 991 */
					obj_t BgL_arg1677z00_873;

					BgL_arg1677z00_873 =
						MAKE_PAIR(BgL_idz00_871, BGl_string1985z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_873,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 1002 */
				obj_t BgL_idz00_874;

				BgL_idz00_874 = CNST_TABLE_REF(((long) 214));
				{	/* Engine/param.scm 1002 */
					obj_t BgL_arg1677z00_876;

					BgL_arg1677z00_876 =
						MAKE_PAIR(BgL_idz00_874, BGl_string1986z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_876,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 1009 */
				obj_t BgL_idz00_877;

				BgL_idz00_877 = CNST_TABLE_REF(((long) 215));
				{	/* Engine/param.scm 1009 */
					obj_t BgL_arg1677z00_879;

					BgL_arg1677z00_879 =
						MAKE_PAIR(BgL_idz00_877, BGl_string1987z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_879,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2readerza2z00zzengine_paramz00 = CNST_TABLE_REF(((long) 216));
			{	/* Engine/param.scm 1016 */
				obj_t BgL_idz00_880;

				BgL_idz00_880 = CNST_TABLE_REF(((long) 217));
				{	/* Engine/param.scm 1016 */
					obj_t BgL_arg1677z00_882;

					BgL_arg1677z00_882 =
						MAKE_PAIR(BgL_idz00_880, BGl_string1988z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_882,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 1025 */
				obj_t BgL_arg1672z00_274;

				BgL_arg1672z00_274 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 218)));
				{	/* Engine/param.scm 1025 */
					obj_t BgL_stringz00_883;

					BgL_stringz00_883 = BgL_arg1672z00_274;
					BGl_za2targetzd2languageza2zd2zzengine_paramz00 =
						string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_883));
			}}
			{	/* Engine/param.scm 1023 */
				obj_t BgL_idz00_884;

				BgL_idz00_884 = CNST_TABLE_REF(((long) 219));
				{	/* Engine/param.scm 1023 */
					obj_t BgL_arg1677z00_886;

					BgL_arg1677z00_886 =
						MAKE_PAIR(BgL_idz00_884, BGl_string1989z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_886,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BGl_proc1990z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2sawza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1030 */
				obj_t BgL_idz00_888;

				BgL_idz00_888 = CNST_TABLE_REF(((long) 220));
				{	/* Engine/param.scm 1030 */
					obj_t BgL_arg1677z00_890;

					BgL_arg1677z00_890 =
						MAKE_PAIR(BgL_idz00_888, BGl_string1991z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_890,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2reallocationzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1037 */
				obj_t BgL_idz00_891;

				BgL_idz00_891 = CNST_TABLE_REF(((long) 221));
				{	/* Engine/param.scm 1037 */
					obj_t BgL_arg1677z00_893;

					BgL_arg1677z00_893 =
						MAKE_PAIR(BgL_idz00_891, BGl_string1992z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_893,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1044 */
				obj_t BgL_idz00_894;

				BgL_idz00_894 = CNST_TABLE_REF(((long) 222));
				{	/* Engine/param.scm 1044 */
					obj_t BgL_arg1677z00_896;

					BgL_arg1677z00_896 =
						MAKE_PAIR(BgL_idz00_894, BGl_string1993z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_896,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2allocationzd2onexpressionzf3za2z21zzengine_paramz00
				= BFALSE;
			{	/* Engine/param.scm 1051 */
				obj_t BgL_idz00_897;

				BgL_idz00_897 = CNST_TABLE_REF(((long) 223));
				{	/* Engine/param.scm 1051 */
					obj_t BgL_arg1677z00_899;

					BgL_arg1677z00_899 =
						MAKE_PAIR(BgL_idz00_897, BGl_string1994z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_899,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00 =
				BINT(((long) 4000));
			{	/* Engine/param.scm 1058 */
				obj_t BgL_idz00_900;

				BgL_idz00_900 = CNST_TABLE_REF(((long) 224));
				{	/* Engine/param.scm 1058 */
					obj_t BgL_arg1677z00_902;

					BgL_arg1677z00_902 =
						MAKE_PAIR(BgL_idz00_900, BGl_string1995z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_902,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00 =
				BNIL;
			{	/* Engine/param.scm 1065 */
				obj_t BgL_idz00_903;

				BgL_idz00_903 = CNST_TABLE_REF(((long) 225));
				{	/* Engine/param.scm 1065 */
					obj_t BgL_arg1677z00_905;

					BgL_arg1677z00_905 =
						MAKE_PAIR(BgL_idz00_903, BGl_string1996z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_905,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00
				= BNIL;
			{	/* Engine/param.scm 1072 */
				obj_t BgL_idz00_906;

				BgL_idz00_906 = CNST_TABLE_REF(((long) 226));
				{	/* Engine/param.scm 1072 */
					obj_t BgL_arg1677z00_908;

					BgL_arg1677z00_908 =
						MAKE_PAIR(BgL_idz00_906, BGl_string1997z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_908,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1079 */
				obj_t BgL_idz00_909;

				BgL_idz00_909 = CNST_TABLE_REF(((long) 227));
				{	/* Engine/param.scm 1079 */
					obj_t BgL_arg1677z00_911;

					BgL_arg1677z00_911 =
						MAKE_PAIR(BgL_idz00_909, BGl_string1998z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_911,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2globaliza7ezd2integratezd228cza2za7zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1086 */
				obj_t BgL_idz00_912;

				BgL_idz00_912 = CNST_TABLE_REF(((long) 228));
				{	/* Engine/param.scm 1086 */
					obj_t BgL_arg1677z00_914;

					BgL_arg1677z00_914 =
						MAKE_PAIR(BgL_idz00_912, BGl_string1999z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_914,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 229));
			BGl_za2evalzd2optionsza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 1106 */
				obj_t BgL_idz00_915;

				BgL_idz00_915 = CNST_TABLE_REF(((long) 230));
				{	/* Engine/param.scm 1106 */
					obj_t BgL_arg1677z00_917;

					BgL_arg1677z00_917 =
						MAKE_PAIR(BgL_idz00_915, BGl_string2000z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_917,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1113 */
				obj_t BgL_idz00_918;

				BgL_idz00_918 = CNST_TABLE_REF(((long) 231));
				{	/* Engine/param.scm 1113 */
					obj_t BgL_arg1677z00_920;

					BgL_arg1677z00_920 =
						MAKE_PAIR(BgL_idz00_918, BGl_string2001z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_920,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2prezd2processorza2zd2zzengine_paramz00 =
				BGl_proc2002z00zzengine_paramz00;
			{	/* Engine/param.scm 1120 */
				obj_t BgL_idz00_921;

				BgL_idz00_921 = CNST_TABLE_REF(((long) 232));
				{	/* Engine/param.scm 1120 */
					obj_t BgL_arg1677z00_923;

					BgL_arg1677z00_923 =
						MAKE_PAIR(BgL_idz00_921, BGl_string2003z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_923,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 1127 */
				obj_t BgL_idz00_924;

				BgL_idz00_924 = CNST_TABLE_REF(((long) 233));
				{	/* Engine/param.scm 1127 */
					obj_t BgL_arg1677z00_926;

					BgL_arg1677z00_926 =
						MAKE_PAIR(BgL_idz00_924, BGl_string2004z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_926,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 1128 */
				obj_t BgL_idz00_927;

				BgL_idz00_927 = CNST_TABLE_REF(((long) 234));
				{	/* Engine/param.scm 1128 */
					obj_t BgL_arg1677z00_929;

					BgL_arg1677z00_929 =
						MAKE_PAIR(BgL_idz00_927, BGl_string2005z00zzengine_paramz00);
					return (BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_PAIR(BgL_arg1677z00_929,
							BGl_za2bigloozd2variablesza2zd2zzengine_paramz00), BUNSPEC);
				}
			}
		}
	}



/* <anonymous:1676> */
	obj_t BGl_zc3anonymousza31676ze3z83zzengine_paramz00(obj_t BgL_envz00_1060,
		obj_t BgL_xz00_1061)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 1120 */
			return BgL_xz00_1061;
		}
	}



/* <anonymous:1674> */
	obj_t BGl_zc3anonymousza31674ze3z83zzengine_paramz00(obj_t BgL_envz00_1062)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 1023 */
			{

				{	/* Engine/param.scm 1025 */
					obj_t BgL_arg1675z00_277;

					BgL_arg1675z00_277 =
						BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
								218)));
					{	/* Engine/param.scm 1025 */
						obj_t BgL_stringz00_887;

						BgL_stringz00_887 = BgL_arg1675z00_277;
						return (BGl_za2targetzd2languageza2zd2zzengine_paramz00 =
							string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_887)), BUNSPEC);
					}
				}
			}
		}
	}



/* <anonymous:1665> */
	obj_t BGl_zc3anonymousza31665ze3z83zzengine_paramz00(obj_t BgL_envz00_1063)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 966 */
			{

				{	/* Engine/param.scm 969 */
					obj_t BgL_arg1666z00_268;

					obj_t BgL_arg1667z00_269;

					BgL_arg1666z00_268 = BGl_staticzd2libraryzd2suffixz00zz__osz00();
					BgL_arg1667z00_269 = BGl_sharedzd2libraryzd2suffixz00zz__osz00();
					{	/* Engine/param.scm 968 */
						obj_t BgL_list1668z00_270;

						{	/* Engine/param.scm 968 */
							obj_t BgL_arg1669z00_271;

							{	/* Engine/param.scm 968 */
								obj_t BgL_arg1670z00_272;

								BgL_arg1670z00_272 = MAKE_PAIR(BgL_arg1667z00_269, BNIL);
								BgL_arg1669z00_271 =
									MAKE_PAIR(BgL_arg1666z00_268, BgL_arg1670z00_272);
							}
							BgL_list1668z00_270 =
								MAKE_PAIR
								(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
								BgL_arg1669z00_271);
						}
						return (BGl_za2objzd2suffixza2zd2zzengine_paramz00 =
							BgL_list1668z00_270, BUNSPEC);
					}
				}
			}
		}
	}



/* <anonymous:1656> */
	obj_t BGl_zc3anonymousza31656ze3z83zzengine_paramz00(obj_t BgL_envz00_1064,
		obj_t BgL_kfactorz00_1065)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 922 */
			{
				obj_t BgL_kfactorz00_259;

				{	/* Engine/param.scm 924 */
					long BgL_auxz00_2181;

					BgL_kfactorz00_259 = BgL_kfactorz00_1065;
					BgL_auxz00_2181 = ((long) CINT(BgL_kfactorz00_259) / ((long) 2));
					return BINT(BgL_auxz00_2181);
				}
			}
		}
	}



/* <anonymous:1655> */
	obj_t BGl_zc3anonymousza31655ze3z83zzengine_paramz00(obj_t BgL_envz00_1066,
		obj_t BgL_olevelz00_1067)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 919 */
			{
				obj_t BgL_olevelz00_257;

				{	/* Engine/param.scm 921 */
					long BgL_auxz00_2185;

					BgL_olevelz00_257 = BgL_olevelz00_1067;
					BgL_auxz00_2185 = (((long) 2) * (long) CINT(BgL_olevelz00_257));
					return BINT(BgL_auxz00_2185);
				}
			}
		}
	}



/* <anonymous:1654> */
	obj_t BGl_zc3anonymousza31654ze3z83zzengine_paramz00(obj_t BgL_envz00_1068)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 836 */
			{

				return (BGl_za2czd2splitzd2stringza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 171))),
					BUNSPEC);
		}}
	}



/* <anonymous:1651> */
	obj_t BGl_zc3anonymousza31651ze3z83zzengine_paramz00(obj_t BgL_envz00_1069)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 742 */
			{

				return (BGl_za2dotnetzd2externalzd2asmza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 139))),
					BUNSPEC);
		}}
	}



/* <anonymous:1648> */
	obj_t BGl_zc3anonymousza31648ze3z83zzengine_paramz00(obj_t BgL_envz00_1070)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 736 */
			{

				return (BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 136))),
					BUNSPEC);
		}}
	}



/* <anonymous:1646> */
	obj_t BGl_zc3anonymousza31646ze3z83zzengine_paramz00(obj_t BgL_envz00_1071)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 733 */
			{

				return (BGl_za2dotnetzd2clrzd2styleza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 134))),
					BUNSPEC);
		}}
	}



/* <anonymous:1644> */
	obj_t BGl_zc3anonymousza31644ze3z83zzengine_paramz00(obj_t BgL_envz00_1072)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 730 */
			{

				return (BGl_za2dotnetzd2clrza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 132))),
					BUNSPEC);
		}}
	}



/* <anonymous:1640> */
	obj_t BGl_zc3anonymousza31640ze3z83zzengine_paramz00(obj_t BgL_envz00_1073)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 727 */
			{

				return (BGl_za2dotnetzd2ldza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 130))),
					BUNSPEC);
		}}
	}



/* <anonymous:1638> */
	obj_t BGl_zc3anonymousza31638ze3z83zzengine_paramz00(obj_t BgL_envz00_1074)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 724 */
			{

				return (BGl_za2dotnetzd2ldzd2styleza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 128))),
					BUNSPEC);
		}}
	}



/* <anonymous:1636> */
	obj_t BGl_zc3anonymousza31636ze3z83zzengine_paramz00(obj_t BgL_envz00_1075)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 721 */
			{

				return (BGl_za2dotnetzd2shellza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 126))),
					BUNSPEC);
		}}
	}



/* <anonymous:1633> */
	obj_t BGl_zc3anonymousza31633ze3z83zzengine_paramz00(obj_t BgL_envz00_1076)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 691 */
			{

				return (BGl_za2jvmzd2javaza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 115))),
					BUNSPEC);
		}}
	}



/* <anonymous:1631> */
	obj_t BGl_zc3anonymousza31631ze3z83zzengine_paramz00(obj_t BgL_envz00_1077)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 688 */
			{

				return (BGl_za2jvmzd2shellza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 113))),
					BUNSPEC);
		}}
	}



/* <anonymous:1628> */
	obj_t BGl_zc3anonymousza31628ze3z83zzengine_paramz00(obj_t BgL_envz00_1078)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 604 */
			{

				return (BGl_za2czd2debugzd2optionza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 90))),
					BUNSPEC);
		}}
	}



/* <anonymous:1626> */
	obj_t BGl_zc3anonymousza31626ze3z83zzengine_paramz00(obj_t BgL_envz00_1079)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 569 */
			{

				return (BGl_za2indentza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 80))),
					BUNSPEC);
		}}
	}



/* <anonymous:1624> */
	obj_t BGl_zc3anonymousza31624ze3z83zzengine_paramz00(obj_t BgL_envz00_1080)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 545 */
			{

				return (BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00 =
					string_append(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00,
						BGl_string1852z00zzengine_paramz00), BUNSPEC);
			}
		}
	}



/* <anonymous:1622> */
	obj_t BGl_zc3anonymousza31622ze3z83zzengine_paramz00(obj_t BgL_envz00_1081)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 537 */
			{

				return (BGl_za2heapzd2nameza2zd2zzengine_paramz00 =
					string_append(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00,
						BGl_string1848z00zzengine_paramz00), BUNSPEC);
			}
		}
	}



/* <anonymous:1619> */
	obj_t BGl_zc3anonymousza31619ze3z83zzengine_paramz00(obj_t BgL_envz00_1082)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 525 */
			{

				{	/* Engine/param.scm 527 */
					obj_t BgL_list1620z00_213;

					BgL_list1620z00_213 =
						MAKE_PAIR(BGl_string1842z00zzengine_paramz00, BNIL);
					return (BGl_za2includezd2foreignza2zd2zzengine_paramz00 =
						BgL_list1620z00_213, BUNSPEC);
				}
			}
		}
	}



/* <anonymous:1615> */
	obj_t BGl_zc3anonymousza31615ze3z83zzengine_paramz00(obj_t BgL_envz00_1083)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 517 */
			{

				return (BGl_za2loadzd2pathza2zd2zz__evalz00 =
					bgl_append2(BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00,
						BGl_za2libzd2dirza2zd2zzengine_paramz00), BUNSPEC);
			}
		}
	}



/* <anonymous:1611> */
	obj_t BGl_zc3anonymousza31611ze3z83zzengine_paramz00(obj_t BgL_envz00_1084)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 499 */
			{

				return (BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00 =
					BGl_stringzd2splitzd2charz00zztools_miscz00
					(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 62))),
						BCHAR(((unsigned char) ' '))), BUNSPEC);
		}}
	}



/* <anonymous:1607> */
	obj_t BGl_zc3anonymousza31607ze3z83zzengine_paramz00(obj_t BgL_envz00_1085)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 483 */
			{

				return (BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 57))),
					BUNSPEC);
		}}
	}



/* <anonymous:1605> */
	obj_t BGl_zc3anonymousza31605ze3z83zzengine_paramz00(obj_t BgL_envz00_1086)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 475 */
			{

				return (BGl_za2gczd2customzf3za2z21zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 52))),
					BUNSPEC);
		}}
	}



/* <anonymous:1600> */
	obj_t BGl_zc3anonymousza31600ze3z83zzengine_paramz00(obj_t BgL_envz00_1087)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 469 */
			{

				{	/* Engine/param.scm 471 */
					bool_t BgL_testz00_2225;

					{	/* Engine/param.scm 471 */
						obj_t BgL_auxz00_2226;

						BgL_auxz00_2226 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									52)));
						BgL_testz00_2225 = STRINGP(BgL_auxz00_2226);
					}
					if (BgL_testz00_2225)
						{	/* Engine/param.scm 472 */
							obj_t BgL_arg1601z00_192;

							BgL_arg1601z00_192 =
								BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
										52)));
							{	/* Engine/param.scm 472 */
								obj_t BgL_stringz00_461;

								BgL_stringz00_461 = BgL_arg1601z00_192;
								return (BGl_za2gczd2libza2zd2zzengine_paramz00 =
									string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_461)),
									BUNSPEC);
							}
						}
					else
						{	/* Engine/param.scm 473 */
							obj_t BgL_arg1602z00_193;

							BgL_arg1602z00_193 =
								BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
										53)));
							{	/* Engine/param.scm 473 */
								obj_t BgL_stringz00_462;

								BgL_stringz00_462 = BgL_arg1602z00_193;
								return (BGl_za2gczd2libza2zd2zzengine_paramz00 =
									string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_462)),
									BUNSPEC);
							}
						}
				}
			}
		}
	}



/* <anonymous:1590> */
	obj_t BGl_zc3anonymousza31590ze3z83zzengine_paramz00(obj_t BgL_envz00_1088)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 461 */
			{

				return (BGl_za2libzd2srczd2dirza2z00zzengine_paramz00 =
					BGl_makezd2filezd2namez00zz__osz00(CAR
						(BGl_za2libzd2dirza2zd2zzengine_paramz00),
						BGl_string1822z00zzengine_paramz00), BUNSPEC);
			}
		}
	}



/* <anonymous:1583> */
	obj_t BGl_zc3anonymousza31583ze3z83zzengine_paramz00(obj_t BgL_envz00_1089)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 454 */
			{

				{	/* Engine/param.scm 456 */
					obj_t BgL_libzd2envzd2_172;

					BgL_libzd2envzd2_172 =
						BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00
						(BGl_string1818z00zzengine_paramz00);
					if (PAIRP(BgL_libzd2envzd2_172))
						{	/* Engine/param.scm 457 */
							return (BGl_za2libzd2dirza2zd2zzengine_paramz00 =
								MAKE_PAIR(BGl_string1819z00zzengine_paramz00,
									BgL_libzd2envzd2_172), BUNSPEC);
						}
					else
						{	/* Engine/param.scm 458 */
							obj_t BgL_list1584z00_174;

							{	/* Engine/param.scm 458 */
								obj_t BgL_arg1586z00_176;

								BgL_arg1586z00_176 =
									MAKE_PAIR(BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00,
									BNIL);
								BgL_list1584z00_174 =
									MAKE_PAIR(BGl_string1819z00zzengine_paramz00,
									BgL_arg1586z00_176);
							}
							return (BGl_za2libzd2dirza2zd2zzengine_paramz00 =
								BgL_list1584z00_174, BUNSPEC);
						}
				}
			}
		}
	}



/* <anonymous:1577> */
	obj_t BGl_zc3anonymousza31577ze3z83zzengine_paramz00(obj_t BgL_envz00_1090)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 450 */
			{

				return (BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 46))),
					BUNSPEC);
		}}
	}



/* <anonymous:1575> */
	obj_t BGl_zc3anonymousza31575ze3z83zzengine_paramz00(obj_t BgL_envz00_1091)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 446 */
			{

				return (BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 44))),
					BUNSPEC);
		}}
	}



/* <anonymous:1573> */
	obj_t BGl_zc3anonymousza31573ze3z83zzengine_paramz00(obj_t BgL_envz00_1092)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 426 */
			{

				return (BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 38))),
					BUNSPEC);
		}}
	}



/* <anonymous:1571> */
	obj_t BGl_zc3anonymousza31571ze3z83zzengine_paramz00(obj_t BgL_envz00_1093)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 422 */
			{

				return (BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 36))),
					BUNSPEC);
		}}
	}



/* <anonymous:1569> */
	obj_t BGl_zc3anonymousza31569ze3z83zzengine_paramz00(obj_t BgL_envz00_1094)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 418 */
			{

				return (BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 34))),
					BUNSPEC);
		}}
	}



/* <anonymous:1567> */
	obj_t BGl_zc3anonymousza31567ze3z83zzengine_paramz00(obj_t BgL_envz00_1095)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 410 */
			{

				return (BGl_za2ldzd2styleza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 31))),
					BUNSPEC);
		}}
	}



/* <anonymous:1565> */
	obj_t BGl_zc3anonymousza31565ze3z83zzengine_paramz00(obj_t BgL_envz00_1096)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 402 */
			{

				return (BGl_za2cczd2optionsza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 18))),
					BUNSPEC);
		}}
	}



/* <anonymous:1563> */
	obj_t BGl_zc3anonymousza31563ze3z83zzengine_paramz00(obj_t BgL_envz00_1097)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 394 */
			{

				return (BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 26))),
					BUNSPEC);
		}}
	}



/* <anonymous:1560> */
	obj_t BGl_zc3anonymousza31560ze3z83zzengine_paramz00(obj_t BgL_envz00_1098)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 390 */
			{

				return (BGl_za2cczd2ozd2optionza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 24))),
					BUNSPEC);
		}}
	}



/* <anonymous:1558> */
	obj_t BGl_zc3anonymousza31558ze3z83zzengine_paramz00(obj_t BgL_envz00_1099)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 386 */
			{

				return (BGl_za2cflagszd2profza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 22))),
					BUNSPEC);
		}}
	}



/* <anonymous:1556> */
	obj_t BGl_zc3anonymousza31556ze3z83zzengine_paramz00(obj_t BgL_envz00_1100)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 382 */
			{

				return (BGl_za2cflagszd2optimza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 20))),
					BUNSPEC);
		}}
	}



/* <anonymous:1554> */
	obj_t BGl_zc3anonymousza31554ze3z83zzengine_paramz00(obj_t BgL_envz00_1101)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 378 */
			{

				return (BGl_za2cflagsza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 18))),
					BUNSPEC);
		}}
	}



/* <anonymous:1552> */
	obj_t BGl_zc3anonymousza31552ze3z83zzengine_paramz00(obj_t BgL_envz00_1102)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 374 */
			{

				return (BGl_za2ccza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 16))),
					BUNSPEC);
		}}
	}



/* <anonymous:1550> */
	obj_t BGl_zc3anonymousza31550ze3z83zzengine_paramz00(obj_t BgL_envz00_1103)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 370 */
			{

				return (BGl_za2cczd2styleza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 14))),
					BUNSPEC);
		}}
	}



/* <anonymous:1548> */
	obj_t BGl_zc3anonymousza31548ze3z83zzengine_paramz00(obj_t BgL_envz00_1104)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 366 */
			{

				return (BGl_za2shellza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 12))),
					BUNSPEC);
		}}
	}



/* <anonymous:1546> */
	obj_t BGl_zc3anonymousza31546ze3z83zzengine_paramz00(obj_t BgL_envz00_1105)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 327 */
			{

				{	/* Engine/param.scm 329 */
					obj_t BgL_tmpz00_117;

					BgL_tmpz00_117 =
						BGl_getenvz00zz__osz00(BSTRING_TO_STRING
						(BGl_string1772z00zzengine_paramz00));
					if (STRINGP(BgL_tmpz00_117))
						{	/* Engine/param.scm 330 */
							return (BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 =
								BgL_tmpz00_117, BUNSPEC);
						}
					else
						{	/* Engine/param.scm 330 */
							return (BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 =
								BGl_oszd2tmpzd2zz__osz00(), BUNSPEC);
						}
				}
			}
		}
	}



/* <anonymous:1536> */
	obj_t BGl_zc3anonymousza31536ze3z83zzengine_paramz00(obj_t BgL_envz00_1106)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 312 */
			{

				{	/* Engine/param.scm 314 */
					obj_t BgL_list1537z00_105;

					{	/* Engine/param.scm 314 */
						obj_t BgL_arg1539z00_107;

						{	/* Engine/param.scm 314 */
							obj_t BgL_arg1540z00_108;

							{	/* Engine/param.scm 314 */
								obj_t BgL_arg1542z00_110;

								{	/* Engine/param.scm 314 */
									obj_t BgL_arg1543z00_111;

									BgL_arg1543z00_111 =
										MAKE_PAIR(BGl_string1764z00zzengine_paramz00, BNIL);
									BgL_arg1542z00_110 =
										MAKE_PAIR(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
										BgL_arg1543z00_111);
								}
								BgL_arg1540z00_108 =
									MAKE_PAIR(BGl_string1765z00zzengine_paramz00,
									BgL_arg1542z00_110);
							}
							BgL_arg1539z00_107 =
								MAKE_PAIR
								(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
								BgL_arg1540z00_108);
						}
						BgL_list1537z00_105 =
							MAKE_PAIR(BGl_string1766z00zzengine_paramz00, BgL_arg1539z00_107);
					}
					return (BGl_za2bigloozd2nameza2zd2zzengine_paramz00 =
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1537z00_105),
						BUNSPEC);
				}
			}
		}
	}



/* <anonymous:1527> */
	obj_t BGl_zc3anonymousza31527ze3z83zzengine_paramz00(obj_t BgL_envz00_1107)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 308 */
			{

				return (BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 2))),
					BUNSPEC);
		}}
	}



/* <anonymous:1525> */
	obj_t BGl_zc3anonymousza31525ze3z83zzengine_paramz00(obj_t BgL_envz00_1108)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 304 */
			{

				return (BGl_za2bigloozd2versionza2zd2zzengine_paramz00 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 0))),
					BUNSPEC);
		}}
	}



/* add-doc-variable! */
	obj_t BGl_addzd2doczd2variablez12z12zzengine_paramz00(obj_t BgL_idz00_1,
		obj_t BgL_docz00_2)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 245 */
			{	/* Engine/param.scm 246 */
				obj_t BgL_arg1677z00_930;

				BgL_arg1677z00_930 = MAKE_PAIR(BgL_idz00_1, BgL_docz00_2);
				return (BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
					MAKE_PAIR(BgL_arg1677z00_930,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00), BUNSPEC);
			}
		}
	}



/* _add-doc-variable! */
	obj_t BGl__addzd2doczd2variablez12z12zzengine_paramz00(obj_t BgL_envz00_1109,
		obj_t BgL_idz00_1110, obj_t BgL_docz00_1111)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 245 */
			return
				BGl_addzd2doczd2variablez12z12zzengine_paramz00(BgL_idz00_1110,
				BgL_docz00_1111);
		}
	}



/* add-updater! */
	obj_t BGl_addzd2updaterz12zc0zzengine_paramz00(obj_t BgL_procz00_3)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 252 */
			return (BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_PAIR(BgL_procz00_3,
					BGl_za2paramzd2updatersza2zd2zzengine_paramz00), BUNSPEC);
		}
	}



/* _add-updater! */
	obj_t BGl__addzd2updaterz12zc0zzengine_paramz00(obj_t BgL_envz00_1112,
		obj_t BgL_procz00_1113)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 252 */
			return BGl_addzd2updaterz12zc0zzengine_paramz00(BgL_procz00_1113);
		}
	}



/* reinitialize-bigloo-variables! */
	BGL_EXPORTED_DEF obj_t
		BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00()
	{
		AN_OBJECT;
		{	/* Engine/param.scm 255 */
			{	/* Engine/param.scm 256 */
				obj_t BgL_g1514z00_282;

				BgL_g1514z00_282 =
					bgl_reverse(BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
				{
					obj_t BgL_l1512z00_284;

					{	/* Engine/param.scm 256 */
						bool_t BgL_auxz00_2297;

						BgL_l1512z00_284 = BgL_g1514z00_282;
					BgL_zc3anonymousza31678ze3z83_285:
						if (PAIRP(BgL_l1512z00_284))
							{	/* Engine/param.scm 256 */
								{	/* Engine/param.scm 256 */
									obj_t BgL_procz00_287;

									BgL_procz00_287 = CAR(BgL_l1512z00_284);
									PROCEDURE_ENTRY(BgL_procz00_287) (BgL_procz00_287, BEOA);
								}
								{
									obj_t BgL_l1512z00_2303;

									BgL_l1512z00_2303 = CDR(BgL_l1512z00_284);
									BgL_l1512z00_284 = BgL_l1512z00_2303;
									goto BgL_zc3anonymousza31678ze3z83_285;
								}
							}
						else
							{	/* Engine/param.scm 256 */
								BgL_auxz00_2297 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_2297);
					}
				}
			}
		}
	}



/* _reinitialize-bigloo-variables! */
	obj_t BGl__reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00(obj_t
		BgL_envz00_1114)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 255 */
			return BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00();
		}
	}



/* bigloo-variables-usage */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2variableszd2usagez00zzengine_paramz00(bool_t
		BgL_manualzf3zf3_4)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 273 */
			{	/* Engine/param.scm 274 */
				obj_t BgL_port1515z00_290;

				{	/* Engine/param.scm 274 */
					obj_t BgL_res1731z00_935;

					{	/* Engine/param.scm 274 */
						obj_t BgL_auxz00_2307;

						BgL_auxz00_2307 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1731z00_935 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2307);
					}
					BgL_port1515z00_290 = BgL_res1731z00_935;
				}
				bgl_display_string(BGl_string2006z00zzengine_paramz00,
					BgL_port1515z00_290);
				bgl_display_char(((unsigned char) '\n'), BgL_port1515z00_290);
			}
			{	/* Engine/param.scm 275 */
				obj_t BgL_port1516z00_291;

				{	/* Engine/param.scm 275 */
					obj_t BgL_res1732z00_940;

					{	/* Engine/param.scm 275 */
						obj_t BgL_auxz00_2312;

						BgL_auxz00_2312 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1732z00_940 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2312);
					}
					BgL_port1516z00_291 = BgL_res1732z00_940;
				}
				bgl_display_string(BGl_string2007z00zzengine_paramz00,
					BgL_port1516z00_291);
				bgl_display_char(((unsigned char) '\n'), BgL_port1516z00_291);
			}
			{	/* Engine/param.scm 276 */
				obj_t BgL_port1517z00_292;

				{	/* Engine/param.scm 276 */
					obj_t BgL_res1733z00_945;

					{	/* Engine/param.scm 276 */
						obj_t BgL_auxz00_2317;

						BgL_auxz00_2317 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1733z00_945 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2317);
					}
					BgL_port1517z00_292 = BgL_res1733z00_945;
				}
				bgl_display_string(BGl_string2008z00zzengine_paramz00,
					BgL_port1517z00_292);
				bgl_display_char(((unsigned char) '\n'), BgL_port1517z00_292);
			}
			{	/* Engine/param.scm 277 */
				obj_t BgL_port1518z00_293;

				{	/* Engine/param.scm 277 */
					obj_t BgL_res1734z00_950;

					{	/* Engine/param.scm 277 */
						obj_t BgL_auxz00_2322;

						BgL_auxz00_2322 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1734z00_950 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2322);
					}
					BgL_port1518z00_293 = BgL_res1734z00_950;
				}
				bgl_display_string(BGl_string2009z00zzengine_paramz00,
					BgL_port1518z00_293);
				bgl_display_char(((unsigned char) '\n'), BgL_port1518z00_293);
			}
			{	/* Engine/param.scm 278 */
				obj_t BgL_port1519z00_294;

				{	/* Engine/param.scm 278 */
					obj_t BgL_res1735z00_955;

					{	/* Engine/param.scm 278 */
						obj_t BgL_auxz00_2327;

						BgL_auxz00_2327 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1735z00_955 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2327);
					}
					BgL_port1519z00_294 = BgL_res1735z00_955;
				}
				bgl_display_string(BGl_string2010z00zzengine_paramz00,
					BgL_port1519z00_294);
				bgl_display_char(((unsigned char) '\n'), BgL_port1519z00_294);
			}
			{	/* Engine/param.scm 279 */
				obj_t BgL_port1520z00_295;

				{	/* Engine/param.scm 279 */
					obj_t BgL_res1736z00_960;

					{	/* Engine/param.scm 279 */
						obj_t BgL_auxz00_2332;

						BgL_auxz00_2332 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1736z00_960 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2332);
					}
					BgL_port1520z00_295 = BgL_res1736z00_960;
				}
				bgl_display_string(BGl_string2011z00zzengine_paramz00,
					BgL_port1520z00_295);
				bgl_display_char(((unsigned char) '\n'), BgL_port1520z00_295);
			}
			{	/* Engine/param.scm 280 */
				obj_t BgL_arg1684z00_296;

				{	/* Engine/param.scm 280 */
					obj_t BgL_res1737z00_965;

					{	/* Engine/param.scm 280 */
						obj_t BgL_auxz00_2337;

						BgL_auxz00_2337 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1737z00_965 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2337);
					}
					BgL_arg1684z00_296 = BgL_res1737z00_965;
				}
				bgl_display_char(((unsigned char) '\n'), BgL_arg1684z00_296);
			}
			{	/* Engine/param.scm 281 */
				obj_t BgL_g1511z00_297;

				BgL_g1511z00_297 =
					BGl_sortz00zz__r4_vectors_6_8z00
					(BGl_za2bigloozd2variablesza2zd2zzengine_paramz00,
					BGl_proc2012z00zzengine_paramz00);
				{
					obj_t BgL_lz00_299;

					{	/* Engine/param.scm 281 */
						bool_t BgL_auxz00_2342;

						BgL_lz00_299 = BgL_g1511z00_297;
					BgL_zc3anonymousza31685ze3z83_300:
						if (PAIRP(BgL_lz00_299))
							{	/* Engine/param.scm 286 */
								obj_t BgL_varz00_302;

								BgL_varz00_302 = CAR(BgL_lz00_299);
								if (BgL_manualzf3zf3_4)
									{	/* Engine/param.scm 287 */
										{	/* Engine/param.scm 289 */
											obj_t BgL_port1521z00_303;

											{	/* Engine/param.scm 289 */
												obj_t BgL_res1740z00_984;

												{	/* Engine/param.scm 289 */
													obj_t BgL_auxz00_2347;

													BgL_auxz00_2347 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1740z00_984 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2347);
												}
												BgL_port1521z00_303 = BgL_res1740z00_984;
											}
											bgl_display_string(BGl_string2013z00zzengine_paramz00,
												BgL_port1521z00_303);
											bgl_display_obj(CAR(BgL_varz00_302), BgL_port1521z00_303);
											bgl_display_string(BGl_string2014z00zzengine_paramz00,
												BgL_port1521z00_303);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port1521z00_303);
										}
										{	/* Engine/param.scm 290 */
											obj_t BgL_port1522z00_305;

											{	/* Engine/param.scm 290 */
												obj_t BgL_res1741z00_992;

												{	/* Engine/param.scm 290 */
													obj_t BgL_auxz00_2355;

													BgL_auxz00_2355 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1741z00_992 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2355);
												}
												BgL_port1522z00_305 = BgL_res1741z00_992;
											}
											bgl_display_string(BGl_string2015z00zzengine_paramz00,
												BgL_port1522z00_305);
											bgl_display_obj(CDR(BgL_varz00_302), BgL_port1522z00_305);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port1522z00_305);
										}
										{	/* Engine/param.scm 291 */
											obj_t BgL_arg1691z00_308;

											{	/* Engine/param.scm 291 */
												obj_t BgL_res1742z00_998;

												{	/* Engine/param.scm 291 */
													obj_t BgL_auxz00_2362;

													BgL_auxz00_2362 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1742z00_998 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2362);
												}
												BgL_arg1691z00_308 = BgL_res1742z00_998;
											}
											bgl_display_string(BGl_string2016z00zzengine_paramz00,
												BgL_arg1691z00_308);
										}
										{	/* Engine/param.scm 292 */
											obj_t BgL_arg1692z00_309;

											{	/* Engine/param.scm 292 */
												obj_t BgL_arg1694z00_311;

												BgL_arg1694z00_311 = CAR(BgL_varz00_302);
												{	/* Engine/param.scm 292 */
													obj_t BgL_envz00_313;

													BgL_envz00_313 =
														BGl_defaultzd2environmentzd2zz__evalz00();
													{	/* Engine/param.scm 292 */

														BgL_arg1692z00_309 =
															BGl_evalz00zz__evalz00(BgL_arg1694z00_311,
															BgL_envz00_313);
											}}}
											BGl_writez00zz__r4_output_6_10_3z00(BgL_arg1692z00_309,
												BNIL);
										}
										{	/* Engine/param.scm 293 */
											obj_t BgL_arg1695z00_314;

											{	/* Engine/param.scm 293 */
												obj_t BgL_res1743z00_1003;

												{	/* Engine/param.scm 293 */
													obj_t BgL_auxz00_2370;

													BgL_auxz00_2370 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1743z00_1003 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2370);
												}
												BgL_arg1695z00_314 = BgL_res1743z00_1003;
											}
											bgl_display_char(((unsigned char) '\n'),
												BgL_arg1695z00_314);
									}}
								else
									{	/* Engine/param.scm 287 */
										{	/* Engine/param.scm 295 */
											obj_t BgL_arg1697z00_316;

											obj_t BgL_arg1701z00_318;

											BgL_arg1697z00_316 = CAR(BgL_varz00_302);
											BgL_arg1701z00_318 = CDR(BgL_varz00_302);
											{	/* Engine/param.scm 295 */
												obj_t BgL_list1703z00_320;

												{	/* Engine/param.scm 295 */
													obj_t BgL_arg1704z00_321;

													{	/* Engine/param.scm 295 */
														obj_t BgL_arg1705z00_322;

														{	/* Engine/param.scm 295 */
															obj_t BgL_arg1706z00_323;

															{	/* Engine/param.scm 295 */
																obj_t BgL_arg1707z00_324;

																BgL_arg1707z00_324 =
																	MAKE_PAIR(BGl_string2017z00zzengine_paramz00,
																	BNIL);
																BgL_arg1706z00_323 =
																	MAKE_PAIR(BgL_arg1701z00_318,
																	BgL_arg1707z00_324);
															}
															BgL_arg1705z00_322 =
																MAKE_PAIR(BGl_string2014z00zzengine_paramz00,
																BgL_arg1706z00_323);
														}
														BgL_arg1704z00_321 =
															MAKE_PAIR(BgL_arg1697z00_316, BgL_arg1705z00_322);
													}
													BgL_list1703z00_320 =
														MAKE_PAIR(BGl_string2013z00zzengine_paramz00,
														BgL_arg1704z00_321);
												}
												BGl_displayza2za2zz__r4_output_6_10_3z00
													(BgL_list1703z00_320);
											}
										}
										{	/* Engine/param.scm 296 */
											obj_t BgL_arg1708z00_325;

											{	/* Engine/param.scm 296 */
												obj_t BgL_arg1710z00_327;

												BgL_arg1710z00_327 = CAR(BgL_varz00_302);
												{	/* Engine/param.scm 296 */
													obj_t BgL_envz00_329;

													BgL_envz00_329 =
														BGl_defaultzd2environmentzd2zz__evalz00();
													{	/* Engine/param.scm 296 */

														BgL_arg1708z00_325 =
															BGl_evalz00zz__evalz00(BgL_arg1710z00_327,
															BgL_envz00_329);
													}
												}
											}
											BGl_writez00zz__r4_output_6_10_3z00(BgL_arg1708z00_325,
												BNIL);
										}
										{	/* Engine/param.scm 297 */
											obj_t BgL_port1523z00_330;

											{	/* Engine/param.scm 297 */
												obj_t BgL_res1744z00_1009;

												{	/* Engine/param.scm 297 */
													obj_t BgL_auxz00_2386;

													BgL_auxz00_2386 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1744z00_1009 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2386);
												}
												BgL_port1523z00_330 = BgL_res1744z00_1009;
											}
											bgl_display_string(BGl_string2018z00zzengine_paramz00,
												BgL_port1523z00_330);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port1523z00_330);
									}}
								{
									obj_t BgL_lz00_2391;

									BgL_lz00_2391 = CDR(BgL_lz00_299);
									BgL_lz00_299 = BgL_lz00_2391;
									goto BgL_zc3anonymousza31685ze3z83_300;
								}
							}
						else
							{	/* Engine/param.scm 285 */
								BgL_auxz00_2342 = ((bool_t) 0);
							}
						return BBOOL(BgL_auxz00_2342);
					}
				}
			}
		}
	}



/* _bigloo-variables-usage */
	obj_t BGl__bigloozd2variableszd2usagez00zzengine_paramz00(obj_t
		BgL_envz00_1116, obj_t BgL_manualzf3zf3_1117)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 273 */
			return
				BGl_bigloozd2variableszd2usagez00zzengine_paramz00(CBOOL
				(BgL_manualzf3zf3_1117));
		}
	}



/* <anonymous:1714> */
	obj_t BGl_zc3anonymousza31714ze3z83zzengine_paramz00(obj_t BgL_envz00_1118,
		obj_t BgL_xz00_1119, obj_t BgL_yz00_1120)
	{
		AN_OBJECT;
		{	/* Engine/param.scm 282 */
			{
				obj_t BgL_xz00_334;

				obj_t BgL_yz00_335;

				{	/* Engine/param.scm 283 */
					bool_t BgL_auxz00_2396;

					BgL_xz00_334 = BgL_xz00_1119;
					BgL_yz00_335 = BgL_yz00_1120;
					{	/* Engine/param.scm 283 */
						obj_t BgL_arg1715z00_967;

						obj_t BgL_arg1718z00_968;

						{	/* Engine/param.scm 283 */
							obj_t BgL_arg1719z00_969;

							BgL_arg1719z00_969 = CAR(BgL_xz00_334);
							{	/* Engine/param.scm 283 */
								obj_t BgL_res1738z00_974;

								{	/* Engine/param.scm 283 */
									obj_t BgL_symbolz00_972;

									BgL_symbolz00_972 = BgL_arg1719z00_969;
									{	/* Engine/param.scm 283 */
										obj_t BgL_arg2063z00_973;

										BgL_arg2063z00_973 = SYMBOL_TO_STRING(BgL_symbolz00_972);
										BgL_res1738z00_974 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_973);
									}
								}
								BgL_arg1715z00_967 = BgL_res1738z00_974;
							}
						}
						{	/* Engine/param.scm 283 */
							obj_t BgL_arg1724z00_970;

							BgL_arg1724z00_970 = CAR(BgL_yz00_335);
							{	/* Engine/param.scm 283 */
								obj_t BgL_res1739z00_978;

								{	/* Engine/param.scm 283 */
									obj_t BgL_symbolz00_976;

									BgL_symbolz00_976 = BgL_arg1724z00_970;
									{	/* Engine/param.scm 283 */
										obj_t BgL_arg2063z00_977;

										BgL_arg2063z00_977 = SYMBOL_TO_STRING(BgL_symbolz00_976);
										BgL_res1739z00_978 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_977);
									}
								}
								BgL_arg1718z00_968 = BgL_res1739z00_978;
							}
						}
						BgL_auxz00_2396 = string_lt(BgL_arg1715z00_967, BgL_arg1718z00_968);
					}
					return BBOOL(BgL_auxz00_2396);
				}
			}
		}
	}



/* _thread-backend-name */
	obj_t BGl__threadzd2backendzd2namez00zzengine_paramz00(obj_t BgL_envz00_1121,
		obj_t BgL_obj1444z00_1122)
	{
		AN_OBJECT;
		{
			{
				BgL_threadzd2backendzd2_bglt BgL_auxz00_2405;

				BgL_auxz00_2405 = (BgL_threadzd2backendzd2_bglt) (BgL_obj1444z00_1122);
				return
					(((BgL_threadzd2backendzd2_bglt) CREF(BgL_auxz00_2405))->BgL_namez00);
			}
		}
	}



/* _&type-error-type */
	obj_t BGl__z62typezd2errorzd2typez62zzengine_paramz00(obj_t BgL_envz00_1123,
		obj_t BgL_obj1429z00_1124)
	{
		AN_OBJECT;
		{
			{
				BgL_z62typezd2errorzb0_bglt BgL_auxz00_2408;

				BgL_auxz00_2408 = (BgL_z62typezd2errorzb0_bglt) (BgL_obj1429z00_1124);
				return
					(((BgL_z62typezd2errorzb0_bglt) CREF(BgL_auxz00_2408))->BgL_typez00);
			}
		}
	}



/* _&http-status-error-status */
	obj_t BGl__z62httpzd2statuszd2errorzd2statuszb0zzengine_paramz00(obj_t
		BgL_envz00_1125, obj_t BgL_obj1415z00_1126)
	{
		AN_OBJECT;
		{
			{
				int BgL_auxz00_2411;

				{
					BgL_z62httpzd2statuszd2errorz62_bglt BgL_auxz00_2412;

					BgL_auxz00_2412 =
						(BgL_z62httpzd2statuszd2errorz62_bglt) (BgL_obj1415z00_1126);
					BgL_auxz00_2411 =
						(((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_auxz00_2412))->
						BgL_statusz00);
				}
				return BINT(BgL_auxz00_2411);
			}
		}
	}



/* _%ftp-cmd-set! */
	obj_t BGl__z52ftpzd2cmdzd2setz12z40zzengine_paramz00(obj_t BgL_envz00_1127,
		obj_t BgL_obj1382z00_1128, obj_t BgL_val1381z00_1129)
	{
		AN_OBJECT;
		{
			{
				BgL_z52ftpz52_bglt BgL_auxz00_2416;

				BgL_auxz00_2416 = (BgL_z52ftpz52_bglt) (BgL_obj1382z00_1128);
				return
					((((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_2416))->BgL_cmdz00) =
					((obj_t) BgL_val1381z00_1129), BUNSPEC);
			}
		}
	}



/* _%ftp-cmd */
	obj_t BGl__z52ftpzd2cmdz80zzengine_paramz00(obj_t BgL_envz00_1130,
		obj_t BgL_obj1380z00_1131)
	{
		AN_OBJECT;
		{
			{
				BgL_z52ftpz52_bglt BgL_auxz00_2419;

				BgL_auxz00_2419 = (BgL_z52ftpz52_bglt) (BgL_obj1380z00_1131);
				return (((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_2419))->BgL_cmdz00);
			}
		}
	}



/* _%ftp-dtp-set! */
	obj_t BGl__z52ftpzd2dtpzd2setz12z40zzengine_paramz00(obj_t BgL_envz00_1132,
		obj_t BgL_obj1386z00_1133, obj_t BgL_val1384z00_1134)
	{
		AN_OBJECT;
		{
			{
				BgL_z52ftpz52_bglt BgL_auxz00_2422;

				BgL_auxz00_2422 = (BgL_z52ftpz52_bglt) (BgL_obj1386z00_1133);
				return
					((((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_2422))->BgL_dtpz00) =
					((obj_t) BgL_val1384z00_1134), BUNSPEC);
			}
		}
	}



/* _%ftp-dtp */
	obj_t BGl__z52ftpzd2dtpz80zzengine_paramz00(obj_t BgL_envz00_1135,
		obj_t BgL_obj1383z00_1136)
	{
		AN_OBJECT;
		{
			{
				BgL_z52ftpz52_bglt BgL_auxz00_2425;

				BgL_auxz00_2425 = (BgL_z52ftpz52_bglt) (BgL_obj1383z00_1136);
				return (((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_2425))->BgL_dtpz00);
			}
		}
	}



/* _%ftp-passive?-set! */
	obj_t BGl__z52ftpzd2passivezf3zd2setz12zb3zzengine_paramz00(obj_t
		BgL_envz00_1137, obj_t BgL_obj1389z00_1138, obj_t BgL_val1388z00_1139)
	{
		AN_OBJECT;
		{
			{
				bool_t BgL_auxz00_2430;

				BgL_z52ftpz52_bglt BgL_auxz00_2428;

				BgL_auxz00_2430 = CBOOL(BgL_val1388z00_1139);
				BgL_auxz00_2428 = (BgL_z52ftpz52_bglt) (BgL_obj1389z00_1138);
				return
					((((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_2428))->BgL_passivezf3zf3) =
					((bool_t) BgL_auxz00_2430), BUNSPEC);
			}
		}
	}



/* _%ftp-passive? */
	obj_t BGl__z52ftpzd2passivezf3z73zzengine_paramz00(obj_t BgL_envz00_1140,
		obj_t BgL_obj1387z00_1141)
	{
		AN_OBJECT;
		{
			{
				bool_t BgL_auxz00_2433;

				{
					BgL_z52ftpz52_bglt BgL_auxz00_2434;

					BgL_auxz00_2434 = (BgL_z52ftpz52_bglt) (BgL_obj1387z00_1141);
					BgL_auxz00_2433 =
						(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_2434))->BgL_passivezf3zf3);
				}
				return BBOOL(BgL_auxz00_2433);
			}
		}
	}



/* _&error-proc */
	obj_t BGl__z62errorzd2proczb0zzengine_paramz00(obj_t BgL_envz00_1142,
		obj_t BgL_obj1377z00_1143)
	{
		AN_OBJECT;
		{
			{
				BgL_z62errorz62_bglt BgL_auxz00_2438;

				BgL_auxz00_2438 = (BgL_z62errorz62_bglt) (BgL_obj1377z00_1143);
				return (((BgL_z62errorz62_bglt) CREF(BgL_auxz00_2438))->BgL_procz00);
			}
		}
	}



/* _&error-msg */
	obj_t BGl__z62errorzd2msgzb0zzengine_paramz00(obj_t BgL_envz00_1144,
		obj_t BgL_obj1378z00_1145)
	{
		AN_OBJECT;
		{
			{
				BgL_z62errorz62_bglt BgL_auxz00_2441;

				BgL_auxz00_2441 = (BgL_z62errorz62_bglt) (BgL_obj1378z00_1145);
				return (((BgL_z62errorz62_bglt) CREF(BgL_auxz00_2441))->BgL_msgz00);
			}
		}
	}



/* _&error-obj */
	obj_t BGl__z62errorzd2objzb0zzengine_paramz00(obj_t BgL_envz00_1146,
		obj_t BgL_obj1379z00_1147)
	{
		AN_OBJECT;
		{
			{
				BgL_z62errorz62_bglt BgL_auxz00_2444;

				BgL_auxz00_2444 = (BgL_z62errorz62_bglt) (BgL_obj1379z00_1147);
				return (((BgL_z62errorz62_bglt) CREF(BgL_auxz00_2444))->BgL_objz00);
			}
		}
	}



/* _&security-exception-message */
	obj_t BGl__z62securityzd2exceptionzd2messagez62zzengine_paramz00(obj_t
		BgL_envz00_1148, obj_t BgL_obj1340z00_1149)
	{
		AN_OBJECT;
		{
			{
				BgL_z62securityzd2exceptionzb0_bglt BgL_auxz00_2447;

				BgL_auxz00_2447 =
					(BgL_z62securityzd2exceptionzb0_bglt) (BgL_obj1340z00_1149);
				return
					(((BgL_z62securityzd2exceptionzb0_bglt) CREF(BgL_auxz00_2447))->
					BgL_messagez00);
			}
		}
	}



/* _ftp-host-set! */
	obj_t BGl__ftpzd2hostzd2setz12z12zzengine_paramz00(obj_t BgL_envz00_1150,
		obj_t BgL_obj1276z00_1151, obj_t BgL_val1275z00_1152)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2450;

				BgL_auxz00_2450 = (BgL_ftpz00_bglt) (BgL_obj1276z00_1151);
				return
					((((BgL_ftpz00_bglt) CREF(BgL_auxz00_2450))->BgL_hostz00) =
					((obj_t) BgL_val1275z00_1152), BUNSPEC);
			}
		}
	}



/* _ftp-host */
	obj_t BGl__ftpzd2hostzd2zzengine_paramz00(obj_t BgL_envz00_1153,
		obj_t BgL_obj1274z00_1154)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2453;

				BgL_auxz00_2453 = (BgL_ftpz00_bglt) (BgL_obj1274z00_1154);
				return (((BgL_ftpz00_bglt) CREF(BgL_auxz00_2453))->BgL_hostz00);
			}
		}
	}



/* _ftp-port-set! */
	obj_t BGl__ftpzd2portzd2setz12z12zzengine_paramz00(obj_t BgL_envz00_1155,
		obj_t BgL_obj1279z00_1156, obj_t BgL_val1278z00_1157)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2456;

				BgL_auxz00_2456 = (BgL_ftpz00_bglt) (BgL_obj1279z00_1156);
				return
					((((BgL_ftpz00_bglt) CREF(BgL_auxz00_2456))->BgL_portz00) =
					((obj_t) BgL_val1278z00_1157), BUNSPEC);
			}
		}
	}



/* _ftp-port */
	obj_t BGl__ftpzd2portzd2zzengine_paramz00(obj_t BgL_envz00_1158,
		obj_t BgL_obj1277z00_1159)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2459;

				BgL_auxz00_2459 = (BgL_ftpz00_bglt) (BgL_obj1277z00_1159);
				return (((BgL_ftpz00_bglt) CREF(BgL_auxz00_2459))->BgL_portz00);
			}
		}
	}



/* _ftp-motd-set! */
	obj_t BGl__ftpzd2motdzd2setz12z12zzengine_paramz00(obj_t BgL_envz00_1160,
		obj_t BgL_obj1282z00_1161, obj_t BgL_val1281z00_1162)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2462;

				BgL_auxz00_2462 = (BgL_ftpz00_bglt) (BgL_obj1282z00_1161);
				return
					((((BgL_ftpz00_bglt) CREF(BgL_auxz00_2462))->BgL_motdz00) =
					((obj_t) BgL_val1281z00_1162), BUNSPEC);
			}
		}
	}



/* _ftp-motd */
	obj_t BGl__ftpzd2motdzd2zzengine_paramz00(obj_t BgL_envz00_1163,
		obj_t BgL_obj1280z00_1164)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2465;

				BgL_auxz00_2465 = (BgL_ftpz00_bglt) (BgL_obj1280z00_1164);
				return (((BgL_ftpz00_bglt) CREF(BgL_auxz00_2465))->BgL_motdz00);
			}
		}
	}



/* _ftp-user-set! */
	obj_t BGl__ftpzd2userzd2setz12z12zzengine_paramz00(obj_t BgL_envz00_1165,
		obj_t BgL_obj1286z00_1166, obj_t BgL_val1284z00_1167)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2468;

				BgL_auxz00_2468 = (BgL_ftpz00_bglt) (BgL_obj1286z00_1166);
				return
					((((BgL_ftpz00_bglt) CREF(BgL_auxz00_2468))->BgL_userz00) =
					((obj_t) BgL_val1284z00_1167), BUNSPEC);
			}
		}
	}



/* _ftp-user */
	obj_t BGl__ftpzd2userzd2zzengine_paramz00(obj_t BgL_envz00_1168,
		obj_t BgL_obj1283z00_1169)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2471;

				BgL_auxz00_2471 = (BgL_ftpz00_bglt) (BgL_obj1283z00_1169);
				return (((BgL_ftpz00_bglt) CREF(BgL_auxz00_2471))->BgL_userz00);
			}
		}
	}



/* _ftp-pass-set! */
	obj_t BGl__ftpzd2passzd2setz12z12zzengine_paramz00(obj_t BgL_envz00_1170,
		obj_t BgL_obj1289z00_1171, obj_t BgL_val1288z00_1172)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2474;

				BgL_auxz00_2474 = (BgL_ftpz00_bglt) (BgL_obj1289z00_1171);
				return
					((((BgL_ftpz00_bglt) CREF(BgL_auxz00_2474))->BgL_passz00) =
					((obj_t) BgL_val1288z00_1172), BUNSPEC);
			}
		}
	}



/* _ftp-pass */
	obj_t BGl__ftpzd2passzd2zzengine_paramz00(obj_t BgL_envz00_1173,
		obj_t BgL_obj1287z00_1174)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2477;

				BgL_auxz00_2477 = (BgL_ftpz00_bglt) (BgL_obj1287z00_1174);
				return (((BgL_ftpz00_bglt) CREF(BgL_auxz00_2477))->BgL_passz00);
			}
		}
	}



/* _ftp-acct-set! */
	obj_t BGl__ftpzd2acctzd2setz12z12zzengine_paramz00(obj_t BgL_envz00_1175,
		obj_t BgL_obj1292z00_1176, obj_t BgL_val1291z00_1177)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2480;

				BgL_auxz00_2480 = (BgL_ftpz00_bglt) (BgL_obj1292z00_1176);
				return
					((((BgL_ftpz00_bglt) CREF(BgL_auxz00_2480))->BgL_acctz00) =
					((obj_t) BgL_val1291z00_1177), BUNSPEC);
			}
		}
	}



/* _ftp-acct */
	obj_t BGl__ftpzd2acctzd2zzengine_paramz00(obj_t BgL_envz00_1178,
		obj_t BgL_obj1290z00_1179)
	{
		AN_OBJECT;
		{
			{
				BgL_ftpz00_bglt BgL_auxz00_2483;

				BgL_auxz00_2483 = (BgL_ftpz00_bglt) (BgL_obj1290z00_1179);
				return (((BgL_ftpz00_bglt) CREF(BgL_auxz00_2483))->BgL_acctz00);
			}
		}
	}



/* _&index-out-of-bounds-error-index */
	obj_t
		BGl__z62indexzd2outzd2ofzd2boundszd2errorzd2indexzb0zzengine_paramz00(obj_t
		BgL_envz00_1180, obj_t BgL_obj1252z00_1181)
	{
		AN_OBJECT;
		{
			{
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_auxz00_2486;

				BgL_auxz00_2486 =
					(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
					(BgL_obj1252z00_1181);
				return (((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
						CREF(BgL_auxz00_2486))->BgL_indexz00);
			}
		}
	}



/* _&access-control-exception-obj */
	obj_t BGl__z62accesszd2controlzd2exceptionzd2objzb0zzengine_paramz00(obj_t
		BgL_envz00_1182, obj_t BgL_obj1237z00_1183)
	{
		AN_OBJECT;
		{
			{
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_auxz00_2489;

				BgL_auxz00_2489 =
					(BgL_z62accesszd2controlzd2exceptionz62_bglt) (BgL_obj1237z00_1183);
				return
					(((BgL_z62accesszd2controlzd2exceptionz62_bglt)
						CREF(BgL_auxz00_2489))->BgL_objz00);
			}
		}
	}



/* _&access-control-exception-permission */
	obj_t
		BGl__z62accesszd2controlzd2exceptionzd2permissionzb0zzengine_paramz00(obj_t
		BgL_envz00_1184, obj_t BgL_obj1238z00_1185)
	{
		AN_OBJECT;
		{
			{
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_auxz00_2492;

				BgL_auxz00_2492 =
					(BgL_z62accesszd2controlzd2exceptionz62_bglt) (BgL_obj1238z00_1185);
				return
					(((BgL_z62accesszd2controlzd2exceptionz62_bglt)
						CREF(BgL_auxz00_2492))->BgL_permissionz00);
			}
		}
	}



/* _nothread-body */
	obj_t BGl__nothreadzd2bodyzd2zzengine_paramz00(obj_t BgL_envz00_1186,
		obj_t BgL_obj1212z00_1187)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2495;

				BgL_auxz00_2495 = (BgL_nothreadz00_bglt) (BgL_obj1212z00_1187);
				return (((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2495))->BgL_bodyz00);
			}
		}
	}



/* _nothread-%specific-set! */
	obj_t BGl__nothreadzd2z52specificzd2setz12z40zzengine_paramz00(obj_t
		BgL_envz00_1188, obj_t BgL_obj1215z00_1189, obj_t BgL_val1214z00_1190)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2498;

				BgL_auxz00_2498 = (BgL_nothreadz00_bglt) (BgL_obj1215z00_1189);
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2498))->
						BgL_z52specificz52) = ((obj_t) BgL_val1214z00_1190), BUNSPEC);
			}
		}
	}



/* _nothread-%specific */
	obj_t BGl__nothreadzd2z52specificz80zzengine_paramz00(obj_t BgL_envz00_1191,
		obj_t BgL_obj1213z00_1192)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2501;

				BgL_auxz00_2501 = (BgL_nothreadz00_bglt) (BgL_obj1213z00_1192);
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2501))->BgL_z52specificz52);
			}
		}
	}



/* _nothread-%cleanup-set! */
	obj_t BGl__nothreadzd2z52cleanupzd2setz12z40zzengine_paramz00(obj_t
		BgL_envz00_1193, obj_t BgL_obj1219z00_1194, obj_t BgL_val1218z00_1195)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2504;

				BgL_auxz00_2504 = (BgL_nothreadz00_bglt) (BgL_obj1219z00_1194);
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2504))->BgL_z52cleanupz52) =
					((obj_t) BgL_val1218z00_1195), BUNSPEC);
			}
		}
	}



/* _nothread-%cleanup */
	obj_t BGl__nothreadzd2z52cleanupz80zzengine_paramz00(obj_t BgL_envz00_1196,
		obj_t BgL_obj1217z00_1197)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2507;

				BgL_auxz00_2507 = (BgL_nothreadz00_bglt) (BgL_obj1217z00_1197);
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2507))->BgL_z52cleanupz52);
			}
		}
	}



/* _nothread-end-result-set! */
	obj_t BGl__nothreadzd2endzd2resultzd2setz12zc0zzengine_paramz00(obj_t
		BgL_envz00_1198, obj_t BgL_obj1222z00_1199, obj_t BgL_val1221z00_1200)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2510;

				BgL_auxz00_2510 = (BgL_nothreadz00_bglt) (BgL_obj1222z00_1199);
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2510))->
						BgL_endzd2resultzd2) = ((obj_t) BgL_val1221z00_1200), BUNSPEC);
			}
		}
	}



/* _nothread-end-result */
	obj_t BGl__nothreadzd2endzd2resultz00zzengine_paramz00(obj_t BgL_envz00_1201,
		obj_t BgL_obj1220z00_1202)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2513;

				BgL_auxz00_2513 = (BgL_nothreadz00_bglt) (BgL_obj1220z00_1202);
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2513))->BgL_endzd2resultzd2);
			}
		}
	}



/* _nothread-end-exception-set! */
	obj_t BGl__nothreadzd2endzd2exceptionzd2setz12zc0zzengine_paramz00(obj_t
		BgL_envz00_1203, obj_t BgL_obj1225z00_1204, obj_t BgL_val1224z00_1205)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2516;

				BgL_auxz00_2516 = (BgL_nothreadz00_bglt) (BgL_obj1225z00_1204);
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2516))->
						BgL_endzd2exceptionzd2) = ((obj_t) BgL_val1224z00_1205), BUNSPEC);
			}
		}
	}



/* _nothread-end-exception */
	obj_t BGl__nothreadzd2endzd2exceptionz00zzengine_paramz00(obj_t
		BgL_envz00_1206, obj_t BgL_obj1223z00_1207)
	{
		AN_OBJECT;
		{
			{
				BgL_nothreadz00_bglt BgL_auxz00_2519;

				BgL_auxz00_2519 = (BgL_nothreadz00_bglt) (BgL_obj1223z00_1207);
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_auxz00_2519))->
					BgL_endzd2exceptionzd2);
			}
		}
	}



/* _thread-name-set! */
	obj_t BGl__threadzd2namezd2setz12z12zzengine_paramz00(obj_t BgL_envz00_1208,
		obj_t BgL_obj1189z00_1209, obj_t BgL_val1188z00_1210)
	{
		AN_OBJECT;
		{
			{
				BgL_threadz00_bglt BgL_auxz00_2522;

				BgL_auxz00_2522 = (BgL_threadz00_bglt) (BgL_obj1189z00_1209);
				return
					((((BgL_threadz00_bglt) CREF(BgL_auxz00_2522))->BgL_namez00) =
					((obj_t) BgL_val1188z00_1210), BUNSPEC);
			}
		}
	}



/* _thread-name */
	obj_t BGl__threadzd2namezd2zzengine_paramz00(obj_t BgL_envz00_1211,
		obj_t BgL_obj1187z00_1212)
	{
		AN_OBJECT;
		{
			{
				BgL_threadz00_bglt BgL_auxz00_2525;

				BgL_auxz00_2525 = (BgL_threadz00_bglt) (BgL_obj1187z00_1212);
				return (((BgL_threadz00_bglt) CREF(BgL_auxz00_2525))->BgL_namez00);
			}
		}
	}



/* _thread-specific-set! */
	obj_t BGl__threadzd2specificzd2setz12z12zzengine_paramz00(obj_t
		BgL_envz00_1213, obj_t BgL_obj1193z00_1214, obj_t BgL_val1192z00_1215)
	{
		AN_OBJECT;
		{
			{
				BgL_threadz00_bglt BgL_obj1193z00_1359;

				BgL_obj1193z00_1359 = (BgL_threadz00_bglt) (BgL_obj1193z00_1214);
				return
					BGl_callzd2virtualzd2setterz00zz__objectz00(
					(BgL_objectz00_bglt) (BgL_obj1193z00_1359),
					(int) (((long) 0)), BgL_val1192z00_1215);
		}}
	}



/* _thread-specific */
	obj_t BGl__threadzd2specificzd2zzengine_paramz00(obj_t BgL_envz00_1216,
		obj_t BgL_obj1191z00_1217)
	{
		AN_OBJECT;
		{
			{
				BgL_threadz00_bglt BgL_obj1191z00_1361;

				BgL_obj1191z00_1361 = (BgL_threadz00_bglt) (BgL_obj1191z00_1217);
				return
					BGl_callzd2virtualzd2getterz00zz__objectz00(
					(BgL_objectz00_bglt) (BgL_obj1191z00_1361), (int) (((long) 0)));
		}}
	}



/* _thread-cleanup-set! */
	obj_t BGl__threadzd2cleanupzd2setz12z12zzengine_paramz00(obj_t
		BgL_envz00_1218, obj_t BgL_obj1196z00_1219, obj_t BgL_val1195z00_1220)
	{
		AN_OBJECT;
		{
			{
				BgL_threadz00_bglt BgL_obj1196z00_1362;

				BgL_obj1196z00_1362 = (BgL_threadz00_bglt) (BgL_obj1196z00_1219);
				return
					BGl_callzd2virtualzd2setterz00zz__objectz00(
					(BgL_objectz00_bglt) (BgL_obj1196z00_1362),
					(int) (((long) 1)), BgL_val1195z00_1220);
		}}
	}



/* _thread-cleanup */
	obj_t BGl__threadzd2cleanupzd2zzengine_paramz00(obj_t BgL_envz00_1221,
		obj_t BgL_obj1194z00_1222)
	{
		AN_OBJECT;
		{
			{
				BgL_threadz00_bglt BgL_obj1194z00_1364;

				BgL_obj1194z00_1364 = (BgL_threadz00_bglt) (BgL_obj1194z00_1222);
				return
					BGl_callzd2virtualzd2getterz00zz__objectz00(
					(BgL_objectz00_bglt) (BgL_obj1194z00_1364), (int) (((long) 1)));
		}}
	}



/* _&exception-fname-set! */
	obj_t BGl__z62exceptionzd2fnamezd2setz12z70zzengine_paramz00(obj_t
		BgL_envz00_1223, obj_t BgL_obj1167z00_1224, obj_t BgL_val1166z00_1225)
	{
		AN_OBJECT;
		{
			{
				BgL_z62exceptionz62_bglt BgL_auxz00_2544;

				BgL_auxz00_2544 = (BgL_z62exceptionz62_bglt) (BgL_obj1167z00_1224);
				return
					((((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_2544))->BgL_fnamez00) =
					((obj_t) BgL_val1166z00_1225), BUNSPEC);
			}
		}
	}



/* _&exception-fname */
	obj_t BGl__z62exceptionzd2fnamezb0zzengine_paramz00(obj_t BgL_envz00_1226,
		obj_t BgL_obj1165z00_1227)
	{
		AN_OBJECT;
		{
			{
				BgL_z62exceptionz62_bglt BgL_auxz00_2547;

				BgL_auxz00_2547 = (BgL_z62exceptionz62_bglt) (BgL_obj1165z00_1227);
				return
					(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_2547))->BgL_fnamez00);
			}
		}
	}



/* _&exception-location-set! */
	obj_t BGl__z62exceptionzd2locationzd2setz12z70zzengine_paramz00(obj_t
		BgL_envz00_1228, obj_t BgL_obj1170z00_1229, obj_t BgL_val1169z00_1230)
	{
		AN_OBJECT;
		{
			{
				BgL_z62exceptionz62_bglt BgL_auxz00_2550;

				BgL_auxz00_2550 = (BgL_z62exceptionz62_bglt) (BgL_obj1170z00_1229);
				return
					((((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_2550))->
						BgL_locationz00) = ((obj_t) BgL_val1169z00_1230), BUNSPEC);
			}
		}
	}



/* _&exception-location */
	obj_t BGl__z62exceptionzd2locationzb0zzengine_paramz00(obj_t BgL_envz00_1231,
		obj_t BgL_obj1168z00_1232)
	{
		AN_OBJECT;
		{
			{
				BgL_z62exceptionz62_bglt BgL_auxz00_2553;

				BgL_auxz00_2553 = (BgL_z62exceptionz62_bglt) (BgL_obj1168z00_1232);
				return
					(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_2553))->BgL_locationz00);
			}
		}
	}



/* _&exception-stack-set! */
	obj_t BGl__z62exceptionzd2stackzd2setz12z70zzengine_paramz00(obj_t
		BgL_envz00_1233, obj_t BgL_obj1173z00_1234, obj_t BgL_val1172z00_1235)
	{
		AN_OBJECT;
		{
			{
				BgL_z62exceptionz62_bglt BgL_auxz00_2556;

				BgL_auxz00_2556 = (BgL_z62exceptionz62_bglt) (BgL_obj1173z00_1234);
				return
					((((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_2556))->BgL_stackz00) =
					((obj_t) BgL_val1172z00_1235), BUNSPEC);
			}
		}
	}



/* _&exception-stack */
	obj_t BGl__z62exceptionzd2stackzb0zzengine_paramz00(obj_t BgL_envz00_1236,
		obj_t BgL_obj1171z00_1237)
	{
		AN_OBJECT;
		{
			{
				BgL_z62exceptionz62_bglt BgL_auxz00_2559;

				BgL_auxz00_2559 = (BgL_z62exceptionz62_bglt) (BgL_obj1171z00_1237);
				return
					(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_2559))->BgL_stackz00);
			}
		}
	}



/* _&http-redirection-port */
	obj_t BGl__z62httpzd2redirectionzd2portz62zzengine_paramz00(obj_t
		BgL_envz00_1238, obj_t BgL_obj1140z00_1239)
	{
		AN_OBJECT;
		{
			{
				BgL_z62httpzd2redirectionzb0_bglt BgL_auxz00_2562;

				BgL_auxz00_2562 =
					(BgL_z62httpzd2redirectionzb0_bglt) (BgL_obj1140z00_1239);
				return
					(((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_auxz00_2562))->
					BgL_portz00);
			}
		}
	}



/* _&http-redirection-url */
	obj_t BGl__z62httpzd2redirectionzd2urlz62zzengine_paramz00(obj_t
		BgL_envz00_1240, obj_t BgL_obj1141z00_1241)
	{
		AN_OBJECT;
		{
			{
				BgL_z62httpzd2redirectionzb0_bglt BgL_auxz00_2565;

				BgL_auxz00_2565 =
					(BgL_z62httpzd2redirectionzb0_bglt) (BgL_obj1141z00_1241);
				return
					(((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_auxz00_2565))->
					BgL_urlz00);
			}
		}
	}



/* _&warning-args */
	obj_t BGl__z62warningzd2argszb0zzengine_paramz00(obj_t BgL_envz00_1242,
		obj_t BgL_obj1130z00_1243)
	{
		AN_OBJECT;
		{
			{
				BgL_z62warningz62_bglt BgL_auxz00_2568;

				BgL_auxz00_2568 = (BgL_z62warningz62_bglt) (BgL_obj1130z00_1243);
				return (((BgL_z62warningz62_bglt) CREF(BgL_auxz00_2568))->BgL_argsz00);
			}
		}
	}



/* _tar-header-name */
	obj_t BGl__tarzd2headerzd2namez00zzengine_paramz00(obj_t BgL_envz00_1244,
		obj_t BgL_obj1094z00_1245)
	{
		AN_OBJECT;
		{
			{
				BgL_tarzd2headerzd2_bglt BgL_auxz00_2571;

				BgL_auxz00_2571 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1094z00_1245);
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2571))->BgL_namez00);
			}
		}
	}



/* _tar-header-mode */
	obj_t BGl__tarzd2headerzd2modez00zzengine_paramz00(obj_t BgL_envz00_1246,
		obj_t BgL_obj1095z00_1247)
	{
		AN_OBJECT;
		{
			{
				long BgL_auxz00_2574;

				{
					BgL_tarzd2headerzd2_bglt BgL_auxz00_2575;

					BgL_auxz00_2575 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1095z00_1247);
					BgL_auxz00_2574 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2575))->BgL_modez00);
				}
				return BINT(BgL_auxz00_2574);
			}
		}
	}



/* _tar-header-uid */
	obj_t BGl__tarzd2headerzd2uidz00zzengine_paramz00(obj_t BgL_envz00_1248,
		obj_t BgL_obj1096z00_1249)
	{
		AN_OBJECT;
		{
			{
				long BgL_auxz00_2579;

				{
					BgL_tarzd2headerzd2_bglt BgL_auxz00_2580;

					BgL_auxz00_2580 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1096z00_1249);
					BgL_auxz00_2579 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2580))->BgL_uidz00);
				}
				return BINT(BgL_auxz00_2579);
			}
		}
	}



/* _tar-header-gid */
	obj_t BGl__tarzd2headerzd2gidz00zzengine_paramz00(obj_t BgL_envz00_1250,
		obj_t BgL_obj1097z00_1251)
	{
		AN_OBJECT;
		{
			{
				long BgL_auxz00_2584;

				{
					BgL_tarzd2headerzd2_bglt BgL_auxz00_2585;

					BgL_auxz00_2585 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1097z00_1251);
					BgL_auxz00_2584 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2585))->BgL_gidz00);
				}
				return BINT(BgL_auxz00_2584);
			}
		}
	}



/* _tar-header-size */
	obj_t BGl__tarzd2headerzd2siza7eza7zzengine_paramz00(obj_t BgL_envz00_1252,
		obj_t BgL_obj1098z00_1253)
	{
		AN_OBJECT;
		{
			{
				long BgL_auxz00_2589;

				{
					BgL_tarzd2headerzd2_bglt BgL_auxz00_2590;

					BgL_auxz00_2590 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1098z00_1253);
					BgL_auxz00_2589 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2590))->BgL_siza7eza7);
				}
				return make_belong(BgL_auxz00_2589);
			}
		}
	}



/* _tar-header-mtime */
	obj_t BGl__tarzd2headerzd2mtimez00zzengine_paramz00(obj_t BgL_envz00_1254,
		obj_t BgL_obj1099z00_1255)
	{
		AN_OBJECT;
		{
			{
				BgL_tarzd2headerzd2_bglt BgL_auxz00_2594;

				BgL_auxz00_2594 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1099z00_1255);
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2594))->BgL_mtimez00);
			}
		}
	}



/* _tar-header-checksum */
	obj_t BGl__tarzd2headerzd2checksumz00zzengine_paramz00(obj_t BgL_envz00_1256,
		obj_t BgL_obj1100z00_1257)
	{
		AN_OBJECT;
		{
			{
				long BgL_auxz00_2597;

				{
					BgL_tarzd2headerzd2_bglt BgL_auxz00_2598;

					BgL_auxz00_2598 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1100z00_1257);
					BgL_auxz00_2597 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2598))->
						BgL_checksumz00);
				}
				return BINT(BgL_auxz00_2597);
			}
		}
	}



/* _tar-header-type */
	obj_t BGl__tarzd2headerzd2typez00zzengine_paramz00(obj_t BgL_envz00_1258,
		obj_t BgL_obj1101z00_1259)
	{
		AN_OBJECT;
		{
			{
				BgL_tarzd2headerzd2_bglt BgL_auxz00_2602;

				BgL_auxz00_2602 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1101z00_1259);
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2602))->BgL_typez00);
			}
		}
	}



/* _tar-header-linkname */
	obj_t BGl__tarzd2headerzd2linknamez00zzengine_paramz00(obj_t BgL_envz00_1260,
		obj_t BgL_obj1102z00_1261)
	{
		AN_OBJECT;
		{
			{
				BgL_tarzd2headerzd2_bglt BgL_auxz00_2605;

				BgL_auxz00_2605 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1102z00_1261);
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2605))->BgL_linknamez00);
			}
		}
	}



/* _tar-header-magic */
	obj_t BGl__tarzd2headerzd2magicz00zzengine_paramz00(obj_t BgL_envz00_1262,
		obj_t BgL_obj1103z00_1263)
	{
		AN_OBJECT;
		{
			{
				BgL_tarzd2headerzd2_bglt BgL_auxz00_2608;

				BgL_auxz00_2608 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1103z00_1263);
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2608))->BgL_magicz00);
			}
		}
	}



/* _tar-header-uname */
	obj_t BGl__tarzd2headerzd2unamez00zzengine_paramz00(obj_t BgL_envz00_1264,
		obj_t BgL_obj1104z00_1265)
	{
		AN_OBJECT;
		{
			{
				BgL_tarzd2headerzd2_bglt BgL_auxz00_2611;

				BgL_auxz00_2611 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1104z00_1265);
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2611))->BgL_unamez00);
			}
		}
	}



/* _tar-header-gname */
	obj_t BGl__tarzd2headerzd2gnamez00zzengine_paramz00(obj_t BgL_envz00_1266,
		obj_t BgL_obj1105z00_1267)
	{
		AN_OBJECT;
		{
			{
				BgL_tarzd2headerzd2_bglt BgL_auxz00_2614;

				BgL_auxz00_2614 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1105z00_1267);
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2614))->BgL_gnamez00);
			}
		}
	}



/* _tar-header-devmajor */
	obj_t BGl__tarzd2headerzd2devmajorz00zzengine_paramz00(obj_t BgL_envz00_1268,
		obj_t BgL_obj1106z00_1269)
	{
		AN_OBJECT;
		{
			{
				long BgL_auxz00_2617;

				{
					BgL_tarzd2headerzd2_bglt BgL_auxz00_2618;

					BgL_auxz00_2618 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1106z00_1269);
					BgL_auxz00_2617 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2618))->
						BgL_devmajorz00);
				}
				return BINT(BgL_auxz00_2617);
			}
		}
	}



/* _tar-header-devminor */
	obj_t BGl__tarzd2headerzd2devminorz00zzengine_paramz00(obj_t BgL_envz00_1270,
		obj_t BgL_obj1107z00_1271)
	{
		AN_OBJECT;
		{
			{
				long BgL_auxz00_2622;

				{
					BgL_tarzd2headerzd2_bglt BgL_auxz00_2623;

					BgL_auxz00_2623 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1107z00_1271);
					BgL_auxz00_2622 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_2623))->
						BgL_devminorz00);
				}
				return BINT(BgL_auxz00_2622);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_paramz00()
	{
		AN_OBJECT;
		{	/* Engine/param.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_paramz00()
	{
		AN_OBJECT;
		{	/* Engine/param.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_paramz00()
	{
		AN_OBJECT;
		{	/* Engine/param.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_datez00(((long) 69592259),
				BSTRING_TO_STRING(BGl_string2019z00zzengine_paramz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2019z00zzengine_paramz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string2019z00zzengine_paramz00));
		}
	}



/* eval-init */
	obj_t BGl_evalzd2initzd2zzengine_paramz00()
	{
		AN_OBJECT;
		{	/* Engine/param.scm 15 */
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 180)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2inliningza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 235)),
				BGl_nothreadzd2endzd2resultzd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 177)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 65)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 236)),
				__EVMEANING_ADDRESS((BGl_za2genericityza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 127)),
				__EVMEANING_ADDRESS((BGl_za2dotnetzd2shellza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 186)),
				__EVMEANING_ADDRESS((BGl_za2purifyza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 103)),
				__EVMEANING_ADDRESS((BGl_za2czd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 159)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2heapza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 237)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2tracesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 232)),
				__EVMEANING_ADDRESS((BGl_za2prezd2processorza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 187)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2envza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 145)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2pnetzd2workaroundzd2switchza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 83)),
				__EVMEANING_ADDRESS(
					(BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 238)),
				__EVMEANING_ADDRESS((BGl_za2namezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 116)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2javaza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 10)),
				__EVMEANING_ADDRESS((BGl_za2srczd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 239)),
				BGl_z62httpzd2redirectionzd2portzd2envzb0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 226)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 30)),
				__EVMEANING_ADDRESS((BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 66)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 71)),
				__EVMEANING_ADDRESS((BGl_za2heapzd2nameza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 240)),
				BGl_nothreadzd2endzd2resultzd2setz12zd2envz12zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 241)),
				BGl_ftpzd2passzd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 121)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 189)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 149)),
				__EVMEANING_ADDRESS(
					(BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 242)),
				BGl_threadzd2backendzd2namezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 8)),
				__EVMEANING_ADDRESS((BGl_za2verboseza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 146)),
				__EVMEANING_ADDRESS((BGl_za2dotnetzd2tailza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 131)),
				__EVMEANING_ADDRESS((BGl_za2dotnetzd2ldza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 122)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 197)),
				__EVMEANING_ADDRESS(
					(BGl_za2userzd2inliningzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 196)),
				__EVMEANING_ADDRESS((BGl_za2inliningzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 154)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2rangeza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 243)),
				BGl_tarzd2headerzd2uidzd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 32)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2styleza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 199)),
				__EVMEANING_ADDRESS(
					(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 227)),
				__EVMEANING_ADDRESS(
					(BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 158)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2evalza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 244)),
				BGl_addzd2updaterz12zd2envz12zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 245)),
				BGl_z62exceptionzd2stackzd2setz12zd2envza2zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 246)),
				BGl_z62accesszd2controlzd2exceptionzd2objzd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 195)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 247)),
				BGl_threadzd2cleanupzd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 248)),
				BGl_z62typezd2errorzd2typezd2envzb0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 135)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2clrzd2styleza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 249)),
				__EVMEANING_ADDRESS(
					(BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 161)),
				__EVMEANING_ADDRESS(
					(BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 250)),
				BGl_z52ftpzd2passivezf3zd2envza1zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 219)),
				__EVMEANING_ADDRESS((BGl_za2targetzd2languageza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 251)),
				BGl_epairifyzd2envzd2zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 174)),
				__EVMEANING_ADDRESS((BGl_za2tracezd2nameza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 76)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 100)),
				__EVMEANING_ADDRESS(
					(BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 252)),
				__EVMEANING_ADDRESS((BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 253)),
				BGl_z62exceptionzd2fnamezd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 204)),
				__EVMEANING_ADDRESS((BGl_za2czd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 254)),
				BGl_stringzd2splitzd2charzd2envzd2zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 133)),
				__EVMEANING_ADDRESS((BGl_za2dotnetzd2clrza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 255)),
				BGl_replacez12zd2envzc0zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 98)),
				__EVMEANING_ADDRESS((BGl_za2accesszd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 256)),
				BGl_buildzd2pathzd2fromzd2shellzd2variablezd2envzd2zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 45)),
				__EVMEANING_ADDRESS(
					(BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 257)),
				BGl_ftpzd2portzd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 214)),
				__EVMEANING_ADDRESS(
					(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 111)),
				__EVMEANING_ADDRESS((BGl_za2passza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 185)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 228)),
				__EVMEANING_ADDRESS(
					(BGl_za2globaliza7ezd2integratezd228cza2za7zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 258)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2dateza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 220)),
				__EVMEANING_ADDRESS((BGl_za2sawza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 259)),
				BGl_tarzd2headerzd2gidzd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 114)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2shellza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 260)),
				BGl_z62httpzd2redirectionzd2urlzd2envzb0zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 261)),
				BGl_z52ftpzd2cmdzd2setz12zd2envz92zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 222)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 11)),
				__EVMEANING_ADDRESS((BGl_za2destza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 262)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2argsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 183)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2branchza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 40)),
				__EVMEANING_ADDRESS(
					(BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 263)),
				BGl_threadzd2namezd2envz00zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 264)),
				BGl_tarzd2headerzd2checksumzd2envzd2zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 265)),
				BGl_tarzd2headerzd2gnamezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 266)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2authorza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 267)),
				BGl_nothreadzd2endzd2exceptionzd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 176)),
				__EVMEANING_ADDRESS((BGl_za2optimza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 268)),
				BGl_z62errorzd2objzd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 39)),
				__EVMEANING_ADDRESS(
					(BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 217)),
				__EVMEANING_ADDRESS((BGl_za2readerza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 215)),
				__EVMEANING_ADDRESS(
					(BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 269)),
				BGl_z62errorzd2msgzd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 270)),
				__EVMEANING_ADDRESS((BGl_za2keyzd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 168)),
				__EVMEANING_ADDRESS(
					(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 221)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2reallocationzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 109)),
				__EVMEANING_ADDRESS((BGl_za2classzd2nilzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 13)),
				__EVMEANING_ADDRESS((BGl_za2shellza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 15)),
				__EVMEANING_ADDRESS((BGl_za2cczd2styleza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 173)),
				__EVMEANING_ADDRESS(
					(BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 17)),
				__EVMEANING_ADDRESS((BGl_za2ccza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 271)),
				BGl_ftpzd2motdzd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 64)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 272)),
				BGl_nothreadzd2z52specificzd2setz12zd2envz92zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 273)),
				BGl_z62exceptionzd2fnamezd2setz12zd2envza2zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 274)),
				BGl_ftpzd2hostzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 275)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2emailza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 141)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2usezd2externalzd2asmza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 193)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 43)),
				__EVMEANING_ADDRESS((BGl_za2stripza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 147)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2tailzd2acrosszd2modulesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 3)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 276)),
				BGl_z52ftpzd2passivezf3zd2setz12zd2envz61zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 151)),
				__EVMEANING_ADDRESS(
					(BGl_za2garbagezd2collectorza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 163)),
				__EVMEANING_ADDRESS((BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 225)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 191)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2integratezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 277)),
				__EVMEANING_ADDRESS((BGl_za2tmpzd2destza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 278)),
				BGl_reinitializa7ezd2bigloozd2variablesz12zd2envz67zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 70)),
				__EVMEANING_ADDRESS(
					(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 69)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 101)),
				__EVMEANING_ADDRESS(
					(BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 279)),
				BGl_ftpzd2acctzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 27)),
				__EVMEANING_ADDRESS(
					(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 107)),
				__EVMEANING_ADDRESS((BGl_za2callzf2cczf3za2z01zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 125)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 280)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2urlza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 281)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2variablesza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 282)),
				BGl_stringza2zd2ze3stringzd2envz41zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 283)),
				__EVMEANING_ADDRESS((BGl_za2paramzd2updatersza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 181)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2constructorzd2inliningza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 284)),
				BGl_epairifyzd2reczd2envz00zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 35)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 74)),
				__EVMEANING_ADDRESS(
					(BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 285)),
				BGl_z62exceptionzd2locationzd2setz12zd2envza2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 140)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2externalzd2asmza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 286)),
				BGl_z52ftpzd2dtpzd2setz12zd2envz92zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 37)),
				__EVMEANING_ADDRESS(
					(BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 287)),
				BGl_threadzd2specificzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 81)),
				__EVMEANING_ADDRESS((BGl_za2indentza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 202)),
				__EVMEANING_ADDRESS((BGl_za2srczd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 55)),
				__EVMEANING_ADDRESS((BGl_za2gczd2customzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 91)),
				__EVMEANING_ADDRESS(
					(BGl_za2czd2debugzd2optionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 33)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2optionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 288)),
				BGl_z52ftpzd2dtpzd2envz52zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 289)),
				__EVMEANING_ADDRESS((BGl_za2typezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 73)),
				__EVMEANING_ADDRESS((BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 207)),
				__EVMEANING_ADDRESS((BGl_za2objzd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 290)),
				BGl_threadzd2specificzd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 49)),
				__EVMEANING_ADDRESS((BGl_za2libzd2srczd2dirza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 72)),
				__EVMEANING_ADDRESS((BGl_za2heapzd2libraryza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 291)),
				BGl_tarzd2headerzd2modezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 292)),
				__EVMEANING_ADDRESS((BGl_za2modulezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 6)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2tmpza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 137)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2clrzd2optza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 48)),
				__EVMEANING_ADDRESS((BGl_za2libzd2dirza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 293)),
				BGl_tarzd2headerzd2siza7ezd2envz75zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 294)),
				BGl_z62indexzd2outzd2ofzd2boundszd2errorzd2indexzd2envz62zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 295)),
				BGl_z62httpzd2statuszd2errorzd2statuszd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 179)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 224)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 97)),
				__EVMEANING_ADDRESS(
					(BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 296)),
				__EVMEANING_ADDRESS(
					(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 297)),
				__EVMEANING_ADDRESS((BGl_za2accesszd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 298)),
				__EVMEANING_ADDRESS(
					(BGl_za2locationzd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 155)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2structza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 160)),
				__EVMEANING_ADDRESS(
					(BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 299)),
				BGl_tarzd2headerzd2unamezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 178)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 223)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2allocationzd2onexpressionzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 102)),
				__EVMEANING_ADDRESS((BGl_za2ozd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 300)),
				BGl_tarzd2headerzd2linknamezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 301)),
				__EVMEANING_ADDRESS(
					(BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 302)),
				BGl_nothreadzd2z52cleanupzd2envz52zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 68)),
				__EVMEANING_ADDRESS((BGl_za2includezd2foreignza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 118)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 303)),
				BGl_z62errorzd2proczd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 104)),
				__EVMEANING_ADDRESS((BGl_za2withzd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 304)),
				BGl_nothreadzd2z52specificzd2envz52zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 25)),
				__EVMEANING_ADDRESS((BGl_za2cczd2ozd2optionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 200)),
				__EVMEANING_ADDRESS((BGl_za2extendzd2entryza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 305)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2cmdzd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 306)),
				BGl_ftpzd2acctzd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 23)),
				__EVMEANING_ADDRESS((BGl_za2cflagszd2profza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 120)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 59)),
				__EVMEANING_ADDRESS(
					(BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 307)),
				BGl_tarzd2headerzd2magiczd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 112)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 230)),
				__EVMEANING_ADDRESS((BGl_za2evalzd2optionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 56)),
				__EVMEANING_ADDRESS(
					(BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 308)),
				BGl_epairifyzd2propagatezd2envz00zztools_miscz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 309)),
				BGl_tarzd2headerzd2typezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 162)),
				__EVMEANING_ADDRESS((BGl_za2profilezd2libraryza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 310)),
				BGl_z62warningzd2argszd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 172)),
				__EVMEANING_ADDRESS(
					(BGl_za2czd2splitzd2stringza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 119)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2classpathza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 311)),
				BGl_z52ftpzd2cmdzd2envz52zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 95)),
				__EVMEANING_ADDRESS((BGl_za2bdbzd2debugza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 51)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2libza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 166)),
				__EVMEANING_ADDRESS((BGl_za2initzd2modeza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 312)),
				BGl_ftpzd2portzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 182)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2peepholeza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 79)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 313)),
				BGl_nothreadzd2z52cleanupzd2setz12zd2envz92zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 41)),
				__EVMEANING_ADDRESS((BGl_za2cczd2moveza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 84)),
				__EVMEANING_ADDRESS(
					(BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 314)),
				BGl_z62exceptionzd2stackzd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 4)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2nameza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 106)),
				__EVMEANING_ADDRESS((BGl_za2startupzd2fileza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 315)),
				BGl_z62exceptionzd2locationzd2envz62zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 156)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2versionza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 47)),
				__EVMEANING_ADDRESS(
					(BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 93)),
				__EVMEANING_ADDRESS((BGl_za2czd2userzd2footza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 211)),
				__EVMEANING_ADDRESS(
					(BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 164)),
				__EVMEANING_ADDRESS((BGl_za2libzd2modeza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 316)),
				BGl_ftpzd2hostzd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 54)),
				__EVMEANING_ADDRESS((BGl_za2gczd2libza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 67)),
				__EVMEANING_ADDRESS(
					(BGl_za2includezd2multipleza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 317)),
				BGl_ftpzd2passzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 92)),
				__EVMEANING_ADDRESS((BGl_za2czd2userzd2headerza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 184)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 105)),
				__EVMEANING_ADDRESS((BGl_za2interpreterza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 152)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2typeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 318)),
				__EVMEANING_ADDRESS(
					(BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 78)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 129)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2ldzd2styleza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 124)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2catchza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 77)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 190)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 319)),
				__EVMEANING_ADDRESS((BGl_za2userzd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 169)),
				__EVMEANING_ADDRESS((BGl_za2dlopenzd2initza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 231)),
				__EVMEANING_ADDRESS(
					(BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 198)),
				__EVMEANING_ADDRESS(
					(BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 28)),
				__EVMEANING_ADDRESS((BGl_za2stdcza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 320)),
				BGl_bigloozd2datezd2envz00zztools_datez00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 194)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 321)),
				__EVMEANING_ADDRESS((BGl_za2restzd2argsza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 322)),
				BGl_ftpzd2motdzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 82)),
				__EVMEANING_ADDRESS((BGl_za2compilerzd2debugza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 323)),
				BGl_epairifyza2zd2envz70zztools_miscz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 324)),
				BGl_ftpzd2userzd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 108)),
				__EVMEANING_ADDRESS((BGl_za2reflectionzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 175)),
				__EVMEANING_ADDRESS(
					(BGl_za2tracezd2writezd2lengthza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 60)),
				__EVMEANING_ADDRESS(
					(BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 143)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2externalzd2asmzd2styleza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 325)),
				BGl_z62accesszd2controlzd2exceptionzd2permissionzd2envz62zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 326)),
				BGl_tarzd2headerzd2devminorzd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 9)),
				__EVMEANING_ADDRESS((BGl_za2helloza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 99)),
				__EVMEANING_ADDRESS(
					(BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 327)),
				BGl_tarzd2headerzd2namezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 192)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 328)),
				BGl_tarzd2headerzd2devmajorzd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 153)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2arityza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 85)),
				__EVMEANING_ADDRESS(
					(BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 29)),
				__EVMEANING_ADDRESS((BGl_za2cczd2optionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 7)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 86)),
				__EVMEANING_ADDRESS((BGl_za2bmemzd2profilingza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 89)),
				__EVMEANING_ADDRESS(
					(BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 157)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2libraryza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 58)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 123)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2directoryza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 329)),
				BGl_nothreadzd2bodyzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 63)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 42)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2relativeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 138)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2dllzd2pathza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 19)),
				__EVMEANING_ADDRESS((BGl_za2cflagsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 1)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2versionza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 330)),
				BGl_uncygdrivezd2envzd2zztools_miscz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 331)),
				BGl_nothreadzd2endzd2exceptionzd2setz12zd2envz12zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 94)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2debugza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 332)),
				BGl_z62securityzd2exceptionzd2messagezd2envzb0zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 333)),
				BGl_addzd2doczd2variablez12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 96)),
				__EVMEANING_ADDRESS((BGl_za2profilezd2modeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 206)),
				__EVMEANING_ADDRESS((BGl_za2csharpzd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 334)),
				BGl_threadzd2cleanupzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 209)),
				__EVMEANING_ADDRESS((BGl_za2mcozd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 88)),
				__EVMEANING_ADDRESS((BGl_za2czd2debugza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 117)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2optionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 335)),
				BGl_threadzd2namezd2setz12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 336)),
				BGl_tarzd2headerzd2mtimezd2envzd2zzengine_paramz00);
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 337)),
				BGl_ftpzd2userzd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 213)),
				__EVMEANING_ADDRESS((BGl_za2autozd2modeza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 338)),
				BGl_bigloozd2variableszd2usagezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 148)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 21)),
				__EVMEANING_ADDRESS((BGl_za2cflagszd2optimza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 170)),
				__EVMEANING_ADDRESS(
					(BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 87)),
				__EVMEANING_ADDRESS((BGl_za2debugzd2moduleza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 61)),
				__EVMEANING_ADDRESS(
					(BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 144)),
				__EVMEANING_ADDRESS(
					(BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 188)),
				__EVMEANING_ADDRESS((BGl_za2optimzd2jvmza2zd2zzengine_paramz00)));
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
