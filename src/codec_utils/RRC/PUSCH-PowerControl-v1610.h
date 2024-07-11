/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_PUSCH_PowerControl_v1610_H_
#define	_PUSCH_PowerControl_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "PUSCH-PathlossReferenceRS-Id-v1610.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include "SRI-PUSCH-PowerControlId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PUSCH_PathlossReferenceRS_r16;
struct P0_PUSCH_Set_r16;
struct SRI_PUSCH_PowerControl;
struct DummyPathlossReferenceRS_v1710;

/* PUSCH-PowerControl-v1610 */
typedef struct PUSCH_PowerControl_v1610 {
	struct PUSCH_PowerControl_v1610__pathlossReferenceRSToAddModListSizeExt_v1610 {
		A_SEQUENCE_OF(struct PUSCH_PathlossReferenceRS_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSToAddModListSizeExt_v1610;
	struct PUSCH_PowerControl_v1610__pathlossReferenceRSToReleaseListSizeExt_v1610 {
		A_SEQUENCE_OF(PUSCH_PathlossReferenceRS_Id_v1610_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSToReleaseListSizeExt_v1610;
	struct PUSCH_PowerControl_v1610__p0_PUSCH_SetList_r16 {
		A_SEQUENCE_OF(struct P0_PUSCH_Set_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *p0_PUSCH_SetList_r16;
	struct PUSCH_PowerControl_v1610__olpc_ParameterSet {
		long	*olpc_ParameterSetDCI_0_1_r16;	/* OPTIONAL */
		long	*olpc_ParameterSetDCI_0_2_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *olpc_ParameterSet;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PUSCH_PowerControl_v1610__ext1 {
		struct PUSCH_PowerControl_v1610__ext1__sri_PUSCH_MappingToAddModList2_r17 {
			A_SEQUENCE_OF(struct SRI_PUSCH_PowerControl) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *sri_PUSCH_MappingToAddModList2_r17;
		struct PUSCH_PowerControl_v1610__ext1__sri_PUSCH_MappingToReleaseList2_r17 {
			A_SEQUENCE_OF(SRI_PUSCH_PowerControlId_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *sri_PUSCH_MappingToReleaseList2_r17;
		struct PUSCH_PowerControl_v1610__ext1__p0_PUSCH_SetList2_r17 {
			A_SEQUENCE_OF(struct P0_PUSCH_Set_r16) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *p0_PUSCH_SetList2_r17;
		struct PUSCH_PowerControl_v1610__ext1__dummy {
			A_SEQUENCE_OF(struct DummyPathlossReferenceRS_v1710) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dummy;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_PowerControl_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_PowerControl_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_PowerControl_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_PowerControl_v1610_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUSCH-PathlossReferenceRS-r16.h"
#include "P0-PUSCH-Set-r16.h"
#include "SRI-PUSCH-PowerControl.h"
#include "DummyPathlossReferenceRS-v1710.h"

#endif	/* _PUSCH_PowerControl_v1610_H_ */
#include <asn_internal.h>
