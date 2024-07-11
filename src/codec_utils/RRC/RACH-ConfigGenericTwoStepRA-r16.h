/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RACH_ConfigGenericTwoStepRA_r16_H_
#define	_RACH_ConfigGenericTwoStepRA_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RACH_ConfigGenericTwoStepRA_r16__msgA_RO_FDM_r16 {
	RACH_ConfigGenericTwoStepRA_r16__msgA_RO_FDM_r16_one	= 0,
	RACH_ConfigGenericTwoStepRA_r16__msgA_RO_FDM_r16_two	= 1,
	RACH_ConfigGenericTwoStepRA_r16__msgA_RO_FDM_r16_four	= 2,
	RACH_ConfigGenericTwoStepRA_r16__msgA_RO_FDM_r16_eight	= 3
} e_RACH_ConfigGenericTwoStepRA_r16__msgA_RO_FDM_r16;
typedef enum RACH_ConfigGenericTwoStepRA_r16__msgA_PreamblePowerRampingStep_r16 {
	RACH_ConfigGenericTwoStepRA_r16__msgA_PreamblePowerRampingStep_r16_dB0	= 0,
	RACH_ConfigGenericTwoStepRA_r16__msgA_PreamblePowerRampingStep_r16_dB2	= 1,
	RACH_ConfigGenericTwoStepRA_r16__msgA_PreamblePowerRampingStep_r16_dB4	= 2,
	RACH_ConfigGenericTwoStepRA_r16__msgA_PreamblePowerRampingStep_r16_dB6	= 3
} e_RACH_ConfigGenericTwoStepRA_r16__msgA_PreamblePowerRampingStep_r16;
typedef enum RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16 {
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl1	= 0,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl2	= 1,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl4	= 2,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl8	= 3,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl10	= 4,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl20	= 5,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl40	= 6,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl80	= 7,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl160	= 8,
	RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16_sl320	= 9
} e_RACH_ConfigGenericTwoStepRA_r16__msgB_ResponseWindow_r16;
typedef enum RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16 {
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n3	= 0,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n4	= 1,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n5	= 2,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n6	= 3,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n7	= 4,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n8	= 5,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n10	= 6,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n20	= 7,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n50	= 8,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n100	= 9,
	RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16_n200	= 10
} e_RACH_ConfigGenericTwoStepRA_r16__preambleTransMax_r16;
typedef enum RACH_ConfigGenericTwoStepRA_r16__ext1__msgB_ResponseWindow_v1700 {
	RACH_ConfigGenericTwoStepRA_r16__ext1__msgB_ResponseWindow_v1700_sl240	= 0,
	RACH_ConfigGenericTwoStepRA_r16__ext1__msgB_ResponseWindow_v1700_sl640	= 1,
	RACH_ConfigGenericTwoStepRA_r16__ext1__msgB_ResponseWindow_v1700_sl960	= 2,
	RACH_ConfigGenericTwoStepRA_r16__ext1__msgB_ResponseWindow_v1700_sl1280	= 3,
	RACH_ConfigGenericTwoStepRA_r16__ext1__msgB_ResponseWindow_v1700_sl1920	= 4,
	RACH_ConfigGenericTwoStepRA_r16__ext1__msgB_ResponseWindow_v1700_sl2560	= 5
} e_RACH_ConfigGenericTwoStepRA_r16__ext1__msgB_ResponseWindow_v1700;

/* RACH-ConfigGenericTwoStepRA-r16 */
typedef struct RACH_ConfigGenericTwoStepRA_r16 {
	long	*msgA_PRACH_ConfigurationIndex_r16;	/* OPTIONAL */
	long	*msgA_RO_FDM_r16;	/* OPTIONAL */
	long	*msgA_RO_FrequencyStart_r16;	/* OPTIONAL */
	long	*msgA_ZeroCorrelationZoneConfig_r16;	/* OPTIONAL */
	long	*msgA_PreamblePowerRampingStep_r16;	/* OPTIONAL */
	long	*msgA_PreambleReceivedTargetPower_r16;	/* OPTIONAL */
	long	*msgB_ResponseWindow_r16;	/* OPTIONAL */
	long	*preambleTransMax_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RACH_ConfigGenericTwoStepRA_r16__ext1 {
		long	*msgB_ResponseWindow_v1700;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_ConfigGenericTwoStepRA_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_msgA_RO_FDM_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_msgA_PreamblePowerRampingStep_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_msgB_ResponseWindow_r16_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_preambleTransMax_r16_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_msgB_ResponseWindow_v1700_41;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RACH_ConfigGenericTwoStepRA_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigGenericTwoStepRA_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_ConfigGenericTwoStepRA_r16_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_ConfigGenericTwoStepRA_r16_H_ */
#include <asn_internal.h>
