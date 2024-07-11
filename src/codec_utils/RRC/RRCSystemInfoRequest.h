/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RRCSystemInfoRequest_H_
#define	_RRCSystemInfoRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCSystemInfoRequest__criticalExtensions_PR {
	RRCSystemInfoRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCSystemInfoRequest__criticalExtensions_PR_rrcSystemInfoRequest,
	RRCSystemInfoRequest__criticalExtensions_PR_criticalExtensionsFuture_r16
} RRCSystemInfoRequest__criticalExtensions_PR;
typedef enum RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR {
	RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR_NOTHING,	/* No components present */
	RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR_rrcPosSystemInfoRequest_r16,
	RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR_criticalExtensionsFuture
} RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR;

/* Forward declarations */
struct RRCSystemInfoRequest_IEs;
struct RRC_PosSystemInfoRequest_r16_IEs;

/* RRCSystemInfoRequest */
typedef struct RRCSystemInfoRequest {
	struct RRCSystemInfoRequest__criticalExtensions {
		RRCSystemInfoRequest__criticalExtensions_PR present;
		union RRCSystemInfoRequest__criticalExtensions_u {
			struct RRCSystemInfoRequest_IEs	*rrcSystemInfoRequest;
			struct RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16 {
				RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR present;
				union RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_u {
					struct RRC_PosSystemInfoRequest_r16_IEs	*rrcPosSystemInfoRequest_r16;
					struct RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16__criticalExtensionsFuture {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *criticalExtensionsFuture;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSystemInfoRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCSystemInfoRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCSystemInfoRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCSystemInfoRequest_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCSystemInfoRequest-IEs.h"
#include "RRC-PosSystemInfoRequest-r16-IEs.h"

#endif	/* _RRCSystemInfoRequest_H_ */
#include <asn_internal.h>
