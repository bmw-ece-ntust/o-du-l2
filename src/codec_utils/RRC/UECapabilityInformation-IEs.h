/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_UECapabilityInformation_IEs_H_
#define	_UECapabilityInformation_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_CapabilityRAT_ContainerList;

/* UECapabilityInformation-IEs */
typedef struct UECapabilityInformation_IEs {
	struct UE_CapabilityRAT_ContainerList	*ue_CapabilityRAT_ContainerList;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct UECapabilityInformation_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityInformation_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityInformation_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-CapabilityRAT-ContainerList.h"

#endif	/* _UECapabilityInformation_IEs_H_ */
#include <asn_internal.h>
