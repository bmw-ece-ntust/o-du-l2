/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_FeatureSetDownlink_v1730_H_
#define	_FeatureSetDownlink_v1730_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FeatureSetDownlink_v1730__prs_AsSpatialRelationRS_For_SRS_r17 {
	FeatureSetDownlink_v1730__prs_AsSpatialRelationRS_For_SRS_r17_supported	= 0
} e_FeatureSetDownlink_v1730__prs_AsSpatialRelationRS_For_SRS_r17;

/* FeatureSetDownlink-v1730 */
typedef struct FeatureSetDownlink_v1730 {
	long	*prs_AsSpatialRelationRS_For_SRS_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetDownlink_v1730_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_prs_AsSpatialRelationRS_For_SRS_r17_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetDownlink_v1730;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetDownlink_v1730_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetDownlink_v1730_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _FeatureSetDownlink_v1730_H_ */
#include <asn_internal.h>
