/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_BWP_UplinkDedicated_H_
#define	_BWP_UplinkDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include "Uplink-powerControlId-r17.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "TCI-UL-State-Id-r17.h"
#include <constr_CHOICE.h>
#include "PathlossReferenceRS-Id-r17.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BWP_UplinkDedicated__ext1__useInterlacePUCCH_PUSCH_r16 {
	BWP_UplinkDedicated__ext1__useInterlacePUCCH_PUSCH_r16_enabled	= 0
} e_BWP_UplinkDedicated__ext1__useInterlacePUCCH_PUSCH_r16;
typedef enum BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17_PR {
	BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17_PR_NOTHING,	/* No components present */
	BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17_PR_explicitlist,
	BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17_PR_unifiedTCI_StateRef_r17
} BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17_PR;

/* Forward declarations */
struct SetupRelease_PUCCH_Config;
struct SetupRelease_PUSCH_Config;
struct SetupRelease_ConfiguredGrantConfig;
struct SetupRelease_SRS_Config;
struct SetupRelease_BeamFailureRecoveryConfig;
struct SetupRelease_PUCCH_ConfigurationList_r16;
struct SetupRelease_LBT_FailureRecoveryConfig_r16;
struct ConfiguredGrantConfigToAddModList_r16;
struct ConfiguredGrantConfigToReleaseList_r16;
struct ConfiguredGrantConfigType2DeactivationStateList_r16;
struct ServingCellAndBWP_Id_r17;
struct TCI_UL_State_r17;
struct PathlossReferenceRS_r17;

/* BWP-UplinkDedicated */
typedef struct BWP_UplinkDedicated {
	struct SetupRelease_PUCCH_Config	*pucch_Config;	/* OPTIONAL */
	struct SetupRelease_PUSCH_Config	*pusch_Config;	/* OPTIONAL */
	struct SetupRelease_ConfiguredGrantConfig	*configuredGrantConfig;	/* OPTIONAL */
	struct SetupRelease_SRS_Config	*srs_Config;	/* OPTIONAL */
	struct SetupRelease_BeamFailureRecoveryConfig	*beamFailureRecoveryConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct BWP_UplinkDedicated__ext1 {
		struct SetupRelease_PUCCH_Config	*sl_PUCCH_Config_r16;	/* OPTIONAL */
		long	*cp_ExtensionC2_r16;	/* OPTIONAL */
		long	*cp_ExtensionC3_r16;	/* OPTIONAL */
		long	*useInterlacePUCCH_PUSCH_r16;	/* OPTIONAL */
		struct SetupRelease_PUCCH_ConfigurationList_r16	*pucch_ConfigurationList_r16;	/* OPTIONAL */
		struct SetupRelease_LBT_FailureRecoveryConfig_r16	*lbt_FailureRecoveryConfig_r16;	/* OPTIONAL */
		struct ConfiguredGrantConfigToAddModList_r16	*configuredGrantConfigToAddModList_r16;	/* OPTIONAL */
		struct ConfiguredGrantConfigToReleaseList_r16	*configuredGrantConfigToReleaseList_r16;	/* OPTIONAL */
		struct ConfiguredGrantConfigType2DeactivationStateList_r16	*configuredGrantConfigType2DeactivationStateList_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct BWP_UplinkDedicated__ext2 {
		struct BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17 {
			BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17_PR present;
			union BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17_u {
				struct BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17__explicitlist {
					struct BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17__explicitlist__ul_TCI_ToAddModList_r17 {
						A_SEQUENCE_OF(struct TCI_UL_State_r17) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *ul_TCI_ToAddModList_r17;
					struct BWP_UplinkDedicated__ext2__ul_TCI_StateList_r17__explicitlist__ul_TCI_ToReleaseList_r17 {
						A_SEQUENCE_OF(TCI_UL_State_Id_r17_t) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *ul_TCI_ToReleaseList_r17;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *explicitlist;
				struct ServingCellAndBWP_Id_r17	*unifiedTCI_StateRef_r17;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ul_TCI_StateList_r17;
		Uplink_powerControlId_r17_t	*ul_powerControl_r17;	/* OPTIONAL */
		struct SetupRelease_PUCCH_ConfigurationList_r16	*pucch_ConfigurationListMulticast1_r17;	/* OPTIONAL */
		struct SetupRelease_PUCCH_ConfigurationList_r16	*pucch_ConfigurationListMulticast2_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct BWP_UplinkDedicated__ext3 {
		struct SetupRelease_PUCCH_Config	*pucch_ConfigMulticast1_r17;	/* OPTIONAL */
		struct SetupRelease_PUCCH_Config	*pucch_ConfigMulticast2_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct BWP_UplinkDedicated__ext4 {
		struct BWP_UplinkDedicated__ext4__pathlossReferenceRSToAddModList_r17 {
			A_SEQUENCE_OF(struct PathlossReferenceRS_r17) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *pathlossReferenceRSToAddModList_r17;
		struct BWP_UplinkDedicated__ext4__pathlossReferenceRSToReleaseList_r17 {
			A_SEQUENCE_OF(PathlossReferenceRS_Id_r17_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *pathlossReferenceRSToReleaseList_r17;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BWP_UplinkDedicated_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_useInterlacePUCCH_PUSCH_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BWP_UplinkDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_BWP_UplinkDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_BWP_UplinkDedicated_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"
#include "ConfiguredGrantConfigToAddModList-r16.h"
#include "ConfiguredGrantConfigToReleaseList-r16.h"
#include "ConfiguredGrantConfigType2DeactivationStateList-r16.h"
#include "ServingCellAndBWP-Id-r17.h"
#include "TCI-UL-State-r17.h"
#include "PathlossReferenceRS-r17.h"

#endif	/* _BWP_UplinkDedicated_H_ */
#include <asn_internal.h>
