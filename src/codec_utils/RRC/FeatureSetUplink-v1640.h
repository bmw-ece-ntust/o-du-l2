/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_FeatureSetUplink_v1640_H_
#define	_FeatureSetUplink_v1640_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_15kHz_r16 {
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_15kHz_r16_set1	= 0,
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_15kHz_r16_set2	= 1,
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_15kHz_r16_set3	= 2
} e_FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_15kHz_r16;
typedef enum FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_30kHz_r16 {
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_30kHz_r16_set1	= 0,
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_30kHz_r16_set2	= 1,
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_30kHz_r16_set3	= 2
} e_FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_30kHz_r16;
typedef enum FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_60kHz_r16 {
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_60kHz_r16_set1	= 0,
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_60kHz_r16_set2	= 1,
	FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_60kHz_r16_set3	= 2
} e_FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16__scs_60kHz_r16;

/* Forward declarations */
struct SubSlot_Config_r16;

/* FeatureSetUplink-v1640 */
typedef struct FeatureSetUplink_v1640 {
	struct SubSlot_Config_r16	*twoHARQ_ACK_Codebook_type1_r16;	/* OPTIONAL */
	struct SubSlot_Config_r16	*twoHARQ_ACK_Codebook_type2_r16;	/* OPTIONAL */
	struct FeatureSetUplink_v1640__offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16 {
		long	*scs_15kHz_r16;	/* OPTIONAL */
		long	*scs_30kHz_r16;	/* OPTIONAL */
		long	*scs_60kHz_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetUplink_v1640_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_15kHz_r16_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_30kHz_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_60kHz_r16_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetUplink_v1640;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetUplink_v1640_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetUplink_v1640_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SubSlot-Config-r16.h"

#endif	/* _FeatureSetUplink_v1640_H_ */
#include <asn_internal.h>
