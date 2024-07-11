/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SlotBased_v1630_H_
#define	_SlotBased_v1630_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SlotBased_v1630__tciMapping_r16 {
	SlotBased_v1630__tciMapping_r16_cyclicMapping	= 0,
	SlotBased_v1630__tciMapping_r16_sequentialMapping	= 1
} e_SlotBased_v1630__tciMapping_r16;

/* SlotBased-v1630 */
typedef struct SlotBased_v1630 {
	long	 tciMapping_r16;
	long	 sequenceOffsetForRV_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SlotBased_v1630_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tciMapping_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SlotBased_v1630;
extern asn_SEQUENCE_specifics_t asn_SPC_SlotBased_v1630_specs_1;
extern asn_TYPE_member_t asn_MBR_SlotBased_v1630_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SlotBased_v1630_H_ */
#include <asn_internal.h>
