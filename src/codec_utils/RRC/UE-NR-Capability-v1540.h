/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_UE_NR_Capability_v1540_H_
#define	_UE_NR_Capability_v1540_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_NR_Capability_v1540__overheatingInd {
	UE_NR_Capability_v1540__overheatingInd_supported	= 0
} e_UE_NR_Capability_v1540__overheatingInd;

/* Forward declarations */
struct SDAP_Parameters;
struct IMS_Parameters;
struct UE_NR_CapabilityAddFRX_Mode_v1540;
struct UE_NR_CapabilityAddFRX_Mode;
struct UE_NR_Capability_v1550;

/* UE-NR-Capability-v1540 */
typedef struct UE_NR_Capability_v1540 {
	struct SDAP_Parameters	*sdap_Parameters;	/* OPTIONAL */
	long	*overheatingInd;	/* OPTIONAL */
	struct IMS_Parameters	*ims_Parameters;	/* OPTIONAL */
	struct UE_NR_CapabilityAddFRX_Mode_v1540	*fr1_Add_UE_NR_Capabilities_v1540;	/* OPTIONAL */
	struct UE_NR_CapabilityAddFRX_Mode_v1540	*fr2_Add_UE_NR_Capabilities_v1540;	/* OPTIONAL */
	struct UE_NR_CapabilityAddFRX_Mode	*fr1_fr2_Add_UE_NR_Capabilities;	/* OPTIONAL */
	struct UE_NR_Capability_v1550	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_NR_Capability_v1540_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_overheatingInd_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_NR_Capability_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_NR_Capability_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_NR_Capability_v1540_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SDAP-Parameters.h"
#include "IMS-Parameters.h"
#include "UE-NR-CapabilityAddFRX-Mode-v1540.h"
#include "UE-NR-CapabilityAddFRX-Mode.h"
#include "UE-NR-Capability-v1550.h"

#endif	/* _UE_NR_Capability_v1540_H_ */
#include <asn_internal.h>
