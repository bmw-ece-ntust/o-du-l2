/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RRCReconfigurationComplete_v1530_IEs_H_
#define	_RRCReconfigurationComplete_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UplinkTxDirectCurrentList;
struct RRCReconfigurationComplete_v1560_IEs;

/* RRCReconfigurationComplete-v1530-IEs */
typedef struct RRCReconfigurationComplete_v1530_IEs {
	struct UplinkTxDirectCurrentList	*uplinkTxDirectCurrentList;	/* OPTIONAL */
	struct RRCReconfigurationComplete_v1560_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfigurationComplete_v1530_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfigurationComplete_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfigurationComplete_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfigurationComplete_v1530_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UplinkTxDirectCurrentList.h"
#include "RRCReconfigurationComplete-v1560-IEs.h"

#endif	/* _RRCReconfigurationComplete_v1530_IEs_H_ */
#include <asn_internal.h>
