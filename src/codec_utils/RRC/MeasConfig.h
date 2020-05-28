/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_MeasConfig_H_
#define	_MeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-Range.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasConfig__s_MeasureConfig_PR {
	MeasConfig__s_MeasureConfig_PR_NOTHING,	/* No components present */
	MeasConfig__s_MeasureConfig_PR_ssb_RSRP,
	MeasConfig__s_MeasureConfig_PR_csi_RSRP
} MeasConfig__s_MeasureConfig_PR;

/* Forward declarations */
struct MeasObjectToRemoveList;
struct MeasObjectToAddModList;
struct ReportConfigToRemoveList;
struct ReportConfigToAddModList;
struct MeasIdToRemoveList;
struct MeasIdToAddModList;
struct QuantityConfig;
struct MeasGapConfig;
struct MeasGapSharingConfig;

/* MeasConfig */
typedef struct MeasConfig {
	struct MeasObjectToRemoveList	*measObjectToRemoveList;	/* OPTIONAL */
	struct MeasObjectToAddModList	*measObjectToAddModList;	/* OPTIONAL */
	struct ReportConfigToRemoveList	*reportConfigToRemoveList;	/* OPTIONAL */
	struct ReportConfigToAddModList	*reportConfigToAddModList;	/* OPTIONAL */
	struct MeasIdToRemoveList	*measIdToRemoveList;	/* OPTIONAL */
	struct MeasIdToAddModList	*measIdToAddModList;	/* OPTIONAL */
	struct MeasConfig__s_MeasureConfig {
		MeasConfig__s_MeasureConfig_PR present;
		union MeasConfig__s_MeasureConfig_u {
			RSRP_Range_t	 ssb_RSRP;
			RSRP_Range_t	 csi_RSRP;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *s_MeasureConfig;
	struct QuantityConfig	*quantityConfig;	/* OPTIONAL */
	struct MeasGapConfig	*measGapConfig;	/* OPTIONAL */
	struct MeasGapSharingConfig	*measGapSharingConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasConfig_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasConfig_H_ */
#include <asn_internal.h>
