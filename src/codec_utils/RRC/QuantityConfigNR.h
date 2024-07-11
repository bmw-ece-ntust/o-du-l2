/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_QuantityConfigNR_H_
#define	_QuantityConfigNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QuantityConfigRS.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QuantityConfigRS;

/* QuantityConfigNR */
typedef struct QuantityConfigNR {
	QuantityConfigRS_t	 quantityConfigCell;
	struct QuantityConfigRS	*quantityConfigRS_Index;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigNR;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigNR_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigNR_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QuantityConfigRS.h"

#endif	/* _QuantityConfigNR_H_ */
#include <asn_internal.h>
