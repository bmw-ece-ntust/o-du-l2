/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_UERadioPagingInformation_IEs_H_
#define	_UERadioPagingInformation_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorNR.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UERadioPagingInformation_v15e0_IEs;

/* UERadioPagingInformation-IEs */
typedef struct UERadioPagingInformation_IEs {
	struct UERadioPagingInformation_IEs__supportedBandListNRForPaging {
		A_SEQUENCE_OF(FreqBandIndicatorNR_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBandListNRForPaging;
	struct UERadioPagingInformation_v15e0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERadioPagingInformation_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioPagingInformation_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UERadioPagingInformation_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UERadioPagingInformation_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UERadioPagingInformation-v15e0-IEs.h"

#endif	/* _UERadioPagingInformation_IEs_H_ */
#include <asn_internal.h>
