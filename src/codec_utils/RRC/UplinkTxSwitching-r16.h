/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_UplinkTxSwitching_r16_H_
#define	_UplinkTxSwitching_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkTxSwitching_r16__uplinkTxSwitchingCarrier_r16 {
	UplinkTxSwitching_r16__uplinkTxSwitchingCarrier_r16_carrier1	= 0,
	UplinkTxSwitching_r16__uplinkTxSwitchingCarrier_r16_carrier2	= 1
} e_UplinkTxSwitching_r16__uplinkTxSwitchingCarrier_r16;

/* UplinkTxSwitching-r16 */
typedef struct UplinkTxSwitching_r16 {
	BOOLEAN_t	 uplinkTxSwitchingPeriodLocation_r16;
	long	 uplinkTxSwitchingCarrier_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkTxSwitching_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_uplinkTxSwitchingCarrier_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UplinkTxSwitching_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkTxSwitching_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkTxSwitching_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkTxSwitching_r16_H_ */
#include <asn_internal.h>
