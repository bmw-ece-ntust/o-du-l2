/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_PDCCH_ServingCellConfig_H_
#define	_PDCCH_ServingCellConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetupRelease_SlotFormatIndicator;
struct SetupRelease_AvailabilityIndicator_r16;

/* PDCCH-ServingCellConfig */
typedef struct PDCCH_ServingCellConfig {
	struct SetupRelease_SlotFormatIndicator	*slotFormatIndicator;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PDCCH_ServingCellConfig__ext1 {
		struct SetupRelease_AvailabilityIndicator_r16	*availabilityIndicator_r16;	/* OPTIONAL */
		long	*searchSpaceSwitchTimer_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct PDCCH_ServingCellConfig__ext2 {
		long	*searchSpaceSwitchTimer_v1710;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCCH_ServingCellConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDCCH_ServingCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCCH_ServingCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCCH_ServingCellConfig_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"

#endif	/* _PDCCH_ServingCellConfig_H_ */
#include <asn_internal.h>
