/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_ConfiguredGrantConfigList_r16_H_
#define	_SL_ConfiguredGrantConfigList_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-ConfigIndexCG-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_ConfiguredGrantConfig_r16;

/* SL-ConfiguredGrantConfigList-r16 */
typedef struct SL_ConfiguredGrantConfigList_r16 {
	struct SL_ConfiguredGrantConfigList_r16__sl_ConfiguredGrantConfigToReleaseList_r16 {
		A_SEQUENCE_OF(SL_ConfigIndexCG_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_ConfiguredGrantConfigToReleaseList_r16;
	struct SL_ConfiguredGrantConfigList_r16__sl_ConfiguredGrantConfigToAddModList_r16 {
		A_SEQUENCE_OF(struct SL_ConfiguredGrantConfig_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_ConfiguredGrantConfigToAddModList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_ConfiguredGrantConfigList_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_ConfiguredGrantConfigList_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_ConfiguredGrantConfigList_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_ConfiguredGrantConfigList_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-ConfiguredGrantConfig-r16.h"

#endif	/* _SL_ConfiguredGrantConfigList_r16_H_ */
#include <asn_internal.h>
