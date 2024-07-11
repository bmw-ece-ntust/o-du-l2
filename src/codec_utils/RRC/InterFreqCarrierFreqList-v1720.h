/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_InterFreqCarrierFreqList_v1720_H_
#define	_InterFreqCarrierFreqList_v1720_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqInfo_v1720;

/* InterFreqCarrierFreqList-v1720 */
typedef struct InterFreqCarrierFreqList_v1720 {
	A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v1720) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqList_v1720_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqList_v1720;
extern asn_SET_OF_specifics_t asn_SPC_InterFreqCarrierFreqList_v1720_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqList_v1720_1[1];
extern asn_per_constraints_t asn_PER_type_InterFreqCarrierFreqList_v1720_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqInfo-v1720.h"

#endif	/* _InterFreqCarrierFreqList_v1720_H_ */
#include <asn_internal.h>
