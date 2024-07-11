/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RF_Parameters_v15g0_H_
#define	_RF_Parameters_v15g0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationList_v15g0;

/* RF-Parameters-v15g0 */
typedef struct RF_Parameters_v15g0 {
	struct BandCombinationList_v15g0	*supportedBandCombinationList_v15g0;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v15g0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v15g0;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v15g0_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v15g0_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandCombinationList-v15g0.h"

#endif	/* _RF_Parameters_v15g0_H_ */
#include <asn_internal.h>
