/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_DL_AM_RLC_v1610_H_
#define	_DL_AM_RLC_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-StatusProhibit-v1610.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-AM-RLC-v1610 */
typedef struct DL_AM_RLC_v1610 {
	T_StatusProhibit_v1610_t	*t_StatusProhibit_v1610;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AM_RLC_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_AM_RLC_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_AM_RLC_v1610_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_AM_RLC_v1610_H_ */
#include <asn_internal.h>
