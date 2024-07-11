/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_PDSCH_ConfigPTM_r17_H_
#define	_PDSCH_ConfigPTM_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ConfigPTM_r17__pdsch_AggregationFactor_r17 {
	PDSCH_ConfigPTM_r17__pdsch_AggregationFactor_r17_n2	= 0,
	PDSCH_ConfigPTM_r17__pdsch_AggregationFactor_r17_n4	= 1,
	PDSCH_ConfigPTM_r17__pdsch_AggregationFactor_r17_n8	= 2
} e_PDSCH_ConfigPTM_r17__pdsch_AggregationFactor_r17;

/* PDSCH-ConfigPTM-r17 */
typedef struct PDSCH_ConfigPTM_r17 {
	long	*dataScramblingIdentityPDSCH_r17;	/* OPTIONAL */
	long	*dmrs_ScramblingID0_r17;	/* OPTIONAL */
	long	*pdsch_AggregationFactor_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigPTM_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_AggregationFactor_r17_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigPTM_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigPTM_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigPTM_r17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigPTM_r17_H_ */
#include <asn_internal.h>
