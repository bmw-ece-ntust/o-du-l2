/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_CA_ParametersNR_v1560_H_
#define	_CA_ParametersNR_v1560_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CA_ParametersNR_v1560__diffNumerologyWithinPUCCH_GroupLargerSCS {
	CA_ParametersNR_v1560__diffNumerologyWithinPUCCH_GroupLargerSCS_supported	= 0
} e_CA_ParametersNR_v1560__diffNumerologyWithinPUCCH_GroupLargerSCS;

/* CA-ParametersNR-v1560 */
typedef struct CA_ParametersNR_v1560 {
	long	*diffNumerologyWithinPUCCH_GroupLargerSCS;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_ParametersNR_v1560_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_diffNumerologyWithinPUCCH_GroupLargerSCS_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CA_ParametersNR_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_ParametersNR_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_ParametersNR_v1560_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_ParametersNR_v1560_H_ */
#include <asn_internal.h>
