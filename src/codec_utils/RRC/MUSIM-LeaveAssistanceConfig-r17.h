/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MUSIM_LeaveAssistanceConfig_r17_H_
#define	_MUSIM_LeaveAssistanceConfig_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17 {
	MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17_ms10	= 0,
	MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17_ms20	= 1,
	MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17_ms40	= 2,
	MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17_ms60	= 3,
	MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17_ms80	= 4,
	MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17_ms100	= 5,
	MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17_spare2	= 6,
	MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17_spare1	= 7
} e_MUSIM_LeaveAssistanceConfig_r17__musim_LeaveWithoutResponseTimer_r17;

/* MUSIM-LeaveAssistanceConfig-r17 */
typedef struct MUSIM_LeaveAssistanceConfig_r17 {
	long	 musim_LeaveWithoutResponseTimer_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MUSIM_LeaveAssistanceConfig_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_musim_LeaveWithoutResponseTimer_r17_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MUSIM_LeaveAssistanceConfig_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_MUSIM_LeaveAssistanceConfig_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_MUSIM_LeaveAssistanceConfig_r17_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MUSIM_LeaveAssistanceConfig_r17_H_ */
#include <asn_internal.h>
