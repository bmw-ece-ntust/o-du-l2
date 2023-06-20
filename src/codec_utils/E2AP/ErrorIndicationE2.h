/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../../ASN1_Input/E2APV0300.asn1"
 * 	`asn1c -D ../../E2_v3.0_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ErrorIndicationE2_H_
#define	_ErrorIndicationE2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-ContainerE2.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ErrorIndicationE2 */
typedef struct ErrorIndicationE2 {
	ProtocolIE_ContainerE2_2530P20_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ErrorIndicationE2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ErrorIndicationE2;
extern asn_SEQUENCE_specifics_t asn_SPC_ErrorIndicationE2_specs_1;
extern asn_TYPE_member_t asn_MBR_ErrorIndicationE2_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ErrorIndicationE2_H_ */
#include <asn_internal.h>
