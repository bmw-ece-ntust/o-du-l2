/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_PDCCH_BlindDetectionCA_Mixed_r17_H_
#define	_PDCCH_BlindDetectionCA_Mixed_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PDCCH-BlindDetectionCA-Mixed-r17 */
typedef struct PDCCH_BlindDetectionCA_Mixed_r17 {
	long	*pdcch_BlindDetectionCA1_r17;	/* OPTIONAL */
	long	*pdcch_BlindDetectionCA2_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCCH_BlindDetectionCA_Mixed_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDCCH_BlindDetectionCA_Mixed_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCCH_BlindDetectionCA_Mixed_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCCH_BlindDetectionCA_Mixed_r17_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCCH_BlindDetectionCA_Mixed_r17_H_ */
#include <asn_internal.h>
