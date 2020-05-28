/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_HandoverPreparationInformation_IEs_H_
#define	_HandoverPreparationInformation_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-CapabilityRAT-ContainerList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AS_Config;
struct RRM_Config;
struct AS_Context;

/* HandoverPreparationInformation-IEs */
typedef struct HandoverPreparationInformation_IEs {
	UE_CapabilityRAT_ContainerList_t	 ue_CapabilityRAT_List;
	struct AS_Config	*sourceConfig;	/* OPTIONAL */
	struct RRM_Config	*rrm_Config;	/* OPTIONAL */
	struct AS_Context	*as_Context;	/* OPTIONAL */
	struct HandoverPreparationInformation_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_IEs_H_ */
#include <asn_internal.h>
