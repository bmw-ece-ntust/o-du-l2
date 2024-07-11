/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MeasTriggerQuantityCLI_r16_H_
#define	_MeasTriggerQuantityCLI_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SRS-RSRP-Range-r16.h"
#include "CLI-RSSI-Range-r16.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasTriggerQuantityCLI_r16_PR {
	MeasTriggerQuantityCLI_r16_PR_NOTHING,	/* No components present */
	MeasTriggerQuantityCLI_r16_PR_srs_RSRP_r16,
	MeasTriggerQuantityCLI_r16_PR_cli_RSSI_r16
} MeasTriggerQuantityCLI_r16_PR;

/* MeasTriggerQuantityCLI-r16 */
typedef struct MeasTriggerQuantityCLI_r16 {
	MeasTriggerQuantityCLI_r16_PR present;
	union MeasTriggerQuantityCLI_r16_u {
		SRS_RSRP_Range_r16_t	 srs_RSRP_r16;
		CLI_RSSI_Range_r16_t	 cli_RSSI_r16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasTriggerQuantityCLI_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasTriggerQuantityCLI_r16;
extern asn_CHOICE_specifics_t asn_SPC_MeasTriggerQuantityCLI_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasTriggerQuantityCLI_r16_1[2];
extern asn_per_constraints_t asn_PER_type_MeasTriggerQuantityCLI_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasTriggerQuantityCLI_r16_H_ */
#include <asn_internal.h>
